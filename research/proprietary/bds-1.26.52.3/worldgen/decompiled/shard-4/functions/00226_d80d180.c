/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd90d180 (ELF vaddr 0xd80d180)
 * Label: caller-of-callee
 * Body:  [[0d90d180, 0d915db5] [0d915dc0, 0d915ed4] [0d915ee0, 0d915fd4] [0d915fe0, 0d91692a] [0d916930, 0d917306] [0d917310, 0d917342] [0d917350, 0d919390]]
 * Ghidra: FUN_0d90d180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d90d180(long param_1)

{
  long *plVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  ulong uVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  int *piVar20;
  undefined *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined1 uVar28;
  bool bVar29;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long *plStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined *puStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5d9;
  undefined *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 uStack_5a8;
  undefined7 uStack_5a7;
  uint uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined *puStack_590;
  long *plStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long *plStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  int iStack_460;
  uint uStack_45c;
  undefined4 uStack_458;
  int iStack_454;
  undefined4 uStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  uint uStack_3bc;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  int iStack_390;
  uint uStack_38c;
  undefined4 uStack_388;
  int iStack_384;
  undefined4 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  int iStack_350;
  uint uStack_34c;
  undefined4 uStack_348;
  int iStack_344;
  undefined4 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  int iStack_310;
  uint uStack_30c;
  undefined1 uStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  uint uStack_2cc;
  undefined1 uStack_2c8;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  int iStack_290;
  uint uStack_28c;
  undefined1 uStack_288;
  undefined4 uStack_280;
  undefined2 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int iStack_250;
  uint uStack_24c;
  undefined1 uStack_248;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int iStack_200;
  uint uStack_1fc;
  undefined1 uStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  uint uStack_17c;
  undefined1 uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  uint uStack_13c;
  undefined1 uStack_138;
  long lStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  uint uStack_fc;
  undefined1 uStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  uint uStack_bc;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  
  if ((DAT_0f72ee78 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72ee78), iVar10 != 0)) {
    func_0x0d9f2230();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72edf8,0xf53dab8);
    func_0x0410844d(&DAT_0f72ee78);
  }
  lStack_130 = param_1 + 0x18;
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72edf8 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d90d200;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72edf8 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d90d200:
    puVar12 = &DAT_0f72edf8;
    if (iRam000000000f72ee58 != -0x2b3da790) goto LAB_0d90d258;
LAB_0d90d22b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d90d258;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar16 + 9);
    if (bVar29) {
      puVar12 = *(undefined **)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d90d22b;
LAB_0d90d258:
    puVar12 = &UNK_014dcb21;
    uVar23 = 0xb;
  }
  func_0x0da273e0(&uStack_440,param_1,puVar12,uVar23);
  uVar8 = uStack_410;
  uStack_410._0_5_ = (uint5)(uint)uStack_410;
  plVar14 = uStack_410;
  puStack_408 = (undefined1 *)((ulong)puStack_408 & 0xffffffffffffff00);
  uStack_410._0_1_ = (char)uVar8;
  bVar29 = (char)uStack_410 == '\0';
  uStack_410 = plVar14;
  if (bVar29) {
    func_0x0da27b50(&puStack_5d8,&UNK_013f6b21,5);
    bVar29 = (uStack_5b0 & 1) == 0;
    lVar16 = (long)&uStack_5b0 + 1;
    lVar19 = CONCAT44(uStack_59c,uStack_5a0);
    if (bVar29) {
      lVar19 = lVar16;
    }
    uVar23 = (ulong)((byte)uStack_5b0 >> 1);
    if (!bVar29) {
      uVar23 = CONCAT71(uStack_5a7,uStack_5a8);
    }
    if (uVar23 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar19 + 3 + uVar24) ^
                   ((int)*(char *)(lVar19 + 2 + uVar24) ^
                   ((int)*(char *)(lVar19 + 1 + uVar24) ^
                   ((int)*(char *)(lVar19 + uVar24) ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar19 + uVar24 + uVar23) ^ uVar22) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    uStack_418 = (undefined *)CONCAT44(uVar22,2);
    if ((DAT_0f72ede0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72ede0), iVar10 != 0)) {
      func_0x0d9f20f0();
      func_0x0410844d(&DAT_0f72ede0);
    }
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,uStack_418._4_4_);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)CONCAT44(uStack_658._4_4_,3);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0da28160;
    puStack_620 = &UNK_0da28170;
    uStack_618 = (long *)((ulong)uStack_618._4_4_ << 0x20);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(&uStack_438,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da27ef0(&uStack_668,&uStack_508,&puStack_5d8);
    if (uStack_650._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_650) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined8 *)lVar19 != uStack_660) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0d90d4ef:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 9;
    }
    else {
      if (uStack_650._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_650) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d90d4ef;
      }
      if (uStack_650._4_4_ == 0) {
        *(uint *)((long)uStack_658 + 0x18) = *(uint *)((long)uStack_658 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_408 == '\0') {
      func_0x0da281c0(&uStack_668,&uStack_440);
    }
    puVar17 = uStack_440;
    iVar10 = uStack_410._4_4_;
    if ((DAT_0f72ee78 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72ee78), iVar11 != 0)) {
      func_0x0d9f2230();
      __cxa_atexit(&UNK_048ae800,&DAT_0f72edf8,0xf53dab8);
      func_0x0410844d(&DAT_0f72ee78);
    }
    plVar14 = (long *)(puVar17[3] +
                      (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72edf8 + 4)) * 8);
    do {
      lVar19 = *plVar14;
      if (lVar19 == -1) goto LAB_0d90d581;
      plVar14 = (long *)(puVar17[6] + lVar19 * 0x18);
    } while (*(uint *)(puVar17[6] + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f72edf8 + 4));
    if (plVar14 == (long *)puVar17[7]) {
LAB_0d90d581:
      puVar12 = &DAT_0f72edf8;
    }
    else {
      puVar12 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar20 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar20 != piVar3 && (*piVar20 != iVar10)); piVar20 = piVar20 + 0xe) {
    }
    if ((piVar20 == piVar3) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a777c),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffffffffffffff00);
    func_0x05d9c620(piVar20 + 2,(long)&uStack_418 + 4,(long)&uStack_418 + 4,&uStack_668);
    uStack_378 = uStack_440;
    uStack_370 = uStack_438;
    uStack_368 = (undefined4)uStack_430;
    uStack_364 = uStack_430._4_4_;
    uStack_360 = (undefined4)uStack_428;
    uStack_35c = uStack_428._4_4_;
    uStack_358 = (undefined4)uStack_420;
    uStack_354 = uStack_420._4_4_;
    iStack_350 = (int)uStack_418;
    uStack_34c = uStack_418._4_4_;
    uStack_348 = (uint)uStack_410;
    iStack_344 = uStack_410._4_4_;
    uStack_340 = puStack_408._0_4_;
    func_0x048b0bc0(&puStack_5d8);
    func_0x0da27b50(&puStack_5d8,&UNK_012ae04b,6);
    bVar29 = (uStack_5b0 & 1) == 0;
    lVar19 = CONCAT44(uStack_59c,uStack_5a0);
    if (bVar29) {
      lVar19 = lVar16;
    }
    uVar23 = (ulong)((byte)uStack_5b0 >> 1);
    if (!bVar29) {
      uVar23 = CONCAT71(uStack_5a7,uStack_5a8);
    }
    if (uVar23 == 0) {
      uStack_34c = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_34c = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_34c = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_34c = ((int)*(char *)(lVar19 + 3 + uVar24) ^
                       ((int)*(char *)(lVar19 + 2 + uVar24) ^
                       ((int)*(char *)(lVar19 + 1 + uVar24) ^
                       ((int)*(char *)(lVar19 + uVar24) ^ uStack_34c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uStack_34c = ((int)*(char *)(lVar19 + uVar24 + uVar23) ^ uStack_34c) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    iStack_350 = 2;
    if ((DAT_0f72ede0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72ede0), iVar10 != 0)) {
      func_0x0d9f20f0();
      func_0x0410844d(&DAT_0f72ede0);
    }
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,uStack_34c);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)CONCAT44(uStack_658._4_4_,3);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0da28380;
    puStack_620 = &UNK_0da28390;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(&uStack_370,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_35c,uStack_360);
    uStack_4f0 = CONCAT44(uStack_354,uStack_358);
    uStack_500 = (undefined8 *)CONCAT44(uStack_364,uStack_368);
    func_0x0da27ef0(&uStack_668,&uStack_508,&puStack_5d8);
    if (uStack_650._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_650) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined8 *)lVar19 != uStack_660) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0d90d8ff:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 9;
    }
    else {
      if (uStack_650._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_650) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d90d8ff;
      }
      if (uStack_650._4_4_ == 0) {
        *(uint *)((long)uStack_658 + 0x18) = *(uint *)((long)uStack_658 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_340 == '\0') {
      func_0x0da281c0(&uStack_668,&uStack_378);
    }
    iVar10 = iStack_344;
    puVar17 = uStack_378;
    if ((DAT_0f72ee78 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72ee78), iVar11 != 0)) {
      func_0x0d9f2230();
      __cxa_atexit(&UNK_048ae800,&DAT_0f72edf8,0xf53dab8);
      func_0x0410844d(&DAT_0f72ee78);
    }
    plVar14 = (long *)(puVar17[3] +
                      (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72edf8 + 4)) * 8);
    do {
      lVar19 = *plVar14;
      if (lVar19 == -1) goto LAB_0d90d991;
      plVar14 = (long *)(puVar17[6] + lVar19 * 0x18);
    } while (*(uint *)(puVar17[6] + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f72edf8 + 4));
    if (plVar14 == (long *)puVar17[7]) {
LAB_0d90d991:
      puVar12 = &DAT_0f72edf8;
    }
    else {
      puVar12 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar20 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar20 != piVar3 && (*piVar20 != iVar10)); piVar20 = piVar20 + 0xe) {
    }
    if ((piVar20 == piVar3) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a777c),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffffffffffffff00);
    func_0x05d9c620(piVar20 + 2,&uStack_34c,&uStack_34c,&uStack_668);
    puStack_3b8 = uStack_378;
    puStack_3b0 = uStack_370;
    uStack_3a8 = uStack_368;
    uStack_3a4 = uStack_364;
    uStack_3a0 = uStack_360;
    uStack_39c = uStack_35c;
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    iStack_390 = iStack_350;
    uStack_38c = uStack_34c;
    uStack_388 = uStack_348;
    iStack_384 = iStack_344;
    uStack_380 = uStack_340;
    func_0x048b0bc0(&puStack_5d8);
    func_0x0da27b50(&puStack_5d8,&UNK_014b91bb,6);
    bVar29 = (uStack_5b0 & 1) == 0;
    lVar19 = CONCAT44(uStack_59c,uStack_5a0);
    if (bVar29) {
      lVar19 = lVar16;
    }
    uVar23 = (ulong)((byte)uStack_5b0 >> 1);
    if (!bVar29) {
      uVar23 = CONCAT71(uStack_5a7,uStack_5a8);
    }
    if (uVar23 == 0) {
      uStack_38c = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_38c = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_38c = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_38c = ((int)*(char *)(lVar19 + 3 + uVar24) ^
                       ((int)*(char *)(lVar19 + 2 + uVar24) ^
                       ((int)*(char *)(lVar19 + 1 + uVar24) ^
                       ((int)*(char *)(lVar19 + uVar24) ^ uStack_38c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uStack_38c = ((int)*(char *)(lVar19 + uVar24 + uVar23) ^ uStack_38c) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    iStack_390 = 2;
    if ((DAT_0f72ede0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72ede0), iVar10 != 0)) {
      func_0x0d9f20f0();
      func_0x0410844d(&DAT_0f72ede0);
    }
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,uStack_38c);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)CONCAT44(uStack_658._4_4_,3);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0da283e0;
    puStack_620 = &UNK_0da283f0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(&puStack_3b0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_39c,uStack_3a0);
    uStack_4f0 = CONCAT44(uStack_394,uStack_398);
    uStack_508 = puStack_3b0;
    uStack_500 = (undefined8 *)CONCAT44(uStack_3a4,uStack_3a8);
    func_0x0da27ef0(&uStack_668,&uStack_508,&puStack_5d8);
    if (uStack_650._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_650) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined8 *)lVar19 != uStack_660) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0d90dd0f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 9;
    }
    else {
      if (uStack_650._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_650) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d90dd0f;
      }
      if (uStack_650._4_4_ == 0) {
        *(uint *)((long)uStack_658 + 0x18) = *(uint *)((long)uStack_658 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_380 == '\0') {
      func_0x0da281c0(&uStack_668,&puStack_3b8);
    }
    iVar10 = iStack_384;
    puVar17 = puStack_3b8;
    if ((DAT_0f72ee78 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72ee78), iVar11 != 0)) {
      func_0x0d9f2230();
      __cxa_atexit(&UNK_048ae800,&DAT_0f72edf8,0xf53dab8);
      func_0x0410844d(&DAT_0f72ee78);
    }
    plVar14 = (long *)(puVar17[3] +
                      (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72edf8 + 4)) * 8);
    do {
      lVar19 = *plVar14;
      if (lVar19 == -1) goto LAB_0d90dda1;
      plVar14 = (long *)(puVar17[6] + lVar19 * 0x18);
    } while (*(uint *)(puVar17[6] + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f72edf8 + 4));
    if (plVar14 == (long *)puVar17[7]) {
LAB_0d90dda1:
      puVar12 = &DAT_0f72edf8;
    }
    else {
      puVar12 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar20 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar20 != piVar3 && (*piVar20 != iVar10)); piVar20 = piVar20 + 0xe) {
    }
    if ((piVar20 == piVar3) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a777c),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffffffffffffff00);
    func_0x05d9c620(piVar20 + 2,&uStack_38c,&uStack_38c,&uStack_668);
    uStack_488 = puStack_3b8;
    uStack_480 = puStack_3b0;
    uStack_478 = uStack_3a8;
    uStack_474 = uStack_3a4;
    uStack_470 = uStack_3a0;
    uStack_46c = uStack_39c;
    uStack_468 = uStack_398;
    uStack_464 = uStack_394;
    iStack_460 = iStack_390;
    uStack_45c = uStack_38c;
    uStack_458 = uStack_388;
    iStack_454 = iStack_384;
    uStack_450 = uStack_380;
    func_0x048b0bc0(&puStack_5d8);
    func_0x0da27b50(&puStack_5d8,&UNK_0127c98f,8);
    bVar29 = (uStack_5b0 & 1) == 0;
    lVar19 = CONCAT44(uStack_59c,uStack_5a0);
    if (bVar29) {
      lVar19 = lVar16;
    }
    uVar23 = (ulong)((byte)uStack_5b0 >> 1);
    if (!bVar29) {
      uVar23 = CONCAT71(uStack_5a7,uStack_5a8);
    }
    if (uVar23 == 0) {
      uStack_45c = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_45c = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_45c = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_45c = ((int)*(char *)(lVar19 + 3 + uVar24) ^
                       ((int)*(char *)(lVar19 + 2 + uVar24) ^
                       ((int)*(char *)(lVar19 + 1 + uVar24) ^
                       ((int)*(char *)(lVar19 + uVar24) ^ uStack_45c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uStack_45c = ((int)*(char *)(lVar19 + uVar24 + uVar23) ^ uStack_45c) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    iStack_460 = 2;
    if ((DAT_0f72ede0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72ede0), iVar10 != 0)) {
      func_0x0d9f20f0();
      func_0x0410844d(&DAT_0f72ede0);
    }
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,uStack_45c);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)CONCAT44(uStack_658._4_4_,3);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0da28440;
    puStack_620 = &UNK_0da28450;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(&uStack_480,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_46c,uStack_470);
    uStack_4f0 = CONCAT44(uStack_464,uStack_468);
    uStack_508 = uStack_480;
    uStack_500 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    func_0x0da27ef0(&uStack_668,&uStack_508,&puStack_5d8);
    if (uStack_650._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_650) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined8 *)lVar19 != uStack_660) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0d90e11f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 9;
    }
    else {
      if (uStack_650._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_650) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d90e11f;
      }
      if (uStack_650._4_4_ == 0) {
        *(uint *)((long)uStack_658 + 0x18) = *(uint *)((long)uStack_658 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_450 == '\0') {
      func_0x0da281c0(&uStack_668,&uStack_488);
    }
    iVar10 = iStack_454;
    puVar17 = uStack_488;
    if ((DAT_0f72ee78 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72ee78), iVar11 != 0)) {
      func_0x0d9f2230();
      __cxa_atexit(&UNK_048ae800,&DAT_0f72edf8,0xf53dab8);
      func_0x0410844d(&DAT_0f72ee78);
    }
    plVar14 = (long *)(puVar17[3] +
                      (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72edf8 + 4)) * 8);
    do {
      lVar19 = *plVar14;
      if (lVar19 == -1) goto LAB_0d90e1b1;
      plVar14 = (long *)(puVar17[6] + lVar19 * 0x18);
    } while (*(uint *)(puVar17[6] + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f72edf8 + 4));
    if (plVar14 == (long *)puVar17[7]) {
LAB_0d90e1b1:
      puVar12 = &DAT_0f72edf8;
    }
    else {
      puVar12 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar20 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar20 != piVar3 && (*piVar20 != iVar10)); piVar20 = piVar20 + 0xe) {
    }
    if ((piVar20 == piVar3) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a777c),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffffffffffffff00);
    func_0x05d9c620(piVar20 + 2,&uStack_45c,&uStack_45c,&uStack_668);
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    uStack_4f0 = CONCAT44(uStack_46c,uStack_470);
    uStack_4e8 = CONCAT44(uStack_464,uStack_468);
    uStack_4e0 = (undefined *)CONCAT44(uStack_45c,iStack_460);
    uStack_4d8 = (long *)CONCAT44(iStack_454,uStack_458);
    uStack_4d0 = (undefined *)CONCAT44(uStack_4d0._4_4_,uStack_450);
    func_0x048b0bc0(&puStack_5d8);
    func_0x0da27b50(&puStack_5d8,&UNK_012b5f5b,0xb);
    bVar29 = (uStack_5b0 & 1) != 0;
    if (bVar29) {
      lVar16 = CONCAT44(uStack_59c,uStack_5a0);
    }
    uVar23 = (ulong)((byte)uStack_5b0 >> 1);
    if (bVar29) {
      uVar23 = CONCAT71(uStack_5a7,uStack_5a8);
    }
    if (uVar23 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar16 + 3 + uVar24) ^
                   ((int)*(char *)(lVar16 + 2 + uVar24) ^
                   ((int)*(char *)(lVar16 + 1 + uVar24) ^
                   ((int)*(char *)(lVar16 + uVar24) ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar16 + uVar24 + uVar23) ^ uVar22) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    uStack_4e0 = (undefined *)CONCAT44(uVar22,2);
    if ((DAT_0f72ede0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72ede0), iVar10 != 0)) {
      func_0x0d9f20f0();
      func_0x0410844d(&DAT_0f72ede0);
    }
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,uStack_4e0._4_4_);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)CONCAT44(uStack_658._4_4_,3);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0da284a0;
    puStack_620 = &UNK_0da284b0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(&uStack_500,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_328 = (undefined4)uStack_4f0;
    uStack_324 = uStack_4f0._4_4_;
    uStack_320 = (undefined4)uStack_4e8;
    uStack_31c = uStack_4e8._4_4_;
    uStack_338 = (undefined4)uStack_500;
    uStack_334 = uStack_500._4_4_;
    uStack_330 = (undefined4)uStack_4f8;
    uStack_32c = uStack_4f8._4_4_;
    func_0x0da27ef0(&uStack_668,&uStack_338,&puStack_5d8);
    if (uStack_650._4_4_ == 2) {
      piVar20 = *(int **)(uStack_658[0xf] + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_650) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      puVar17 = *(undefined8 **)(piVar20 + 0xc);
      while (puVar17 != uStack_660) {
        piVar20 = *(int **)(piVar20 + 0xe);
        puVar17 = *(undefined8 **)(piVar20 + 0xc);
      }
LAB_0d90e51f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 9;
    }
    else {
      if (uStack_650._4_4_ == 1) {
        piVar20 = *(int **)(uStack_658[0xf] + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_650) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d90e51f;
      }
      if (uStack_650._4_4_ == 0) {
        *(uint *)(uStack_658 + 3) = *(uint *)(uStack_658 + 3) | 0x90000;
      }
    }
    if ((char)uStack_4d0 == '\0') {
      func_0x0da281c0(&uStack_668,&uStack_508);
    }
    puVar17 = uStack_508;
    iVar10 = uStack_4d8._4_4_;
    if ((DAT_0f72ee78 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72ee78), iVar11 != 0)) {
      func_0x0d9f2230();
      __cxa_atexit(&UNK_048ae800,&DAT_0f72edf8,0xf53dab8);
      func_0x0410844d(&DAT_0f72ee78);
    }
    plVar14 = (long *)(puVar17[3] +
                      (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72edf8 + 4)) * 8);
    do {
      lVar16 = *plVar14;
      if (lVar16 == -1) goto LAB_0d90e5b0;
      plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
    } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72edf8 + 4));
    if (plVar14 == (long *)puVar17[7]) {
LAB_0d90e5b0:
      puVar12 = &DAT_0f72edf8;
    }
    else {
      puVar12 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar20 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar20 != piVar3 && (*piVar20 != iVar10)); piVar20 = piVar20 + 0xe) {
    }
    if ((piVar20 == piVar3) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a777c),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffffffffffffff00);
    func_0x05d9c620(piVar20 + 2,(long)&uStack_4e0 + 4,(long)&uStack_4e0 + 4,&uStack_668);
    func_0x048b0bc0(&puStack_5d8);
  }
  if ((DAT_0f72ed90 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72ed90), iVar10 != 0)) {
    func_0x0d9eda10();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72ed10,0xf53dab8);
    func_0x0410844d(&DAT_0f72ed90);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72ed10 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d90e6b0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72ed10 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d90e6b0:
    puVar12 = &DAT_0f72ed10;
    if (iRam000000000f72ed70 != -0x2b3da790) goto LAB_0d90e71d;
LAB_0d90e6db:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d90e71d;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0d9ee090(&uStack_440,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d90e6db;
LAB_0d90e71d:
    func_0x0d9ee090(&uStack_440,param_1,&UNK_01339579,0xc);
  }
  if ((char)uStack_410 == '\0') {
    func_0x0d9eebf0(&puStack_5d8,&uStack_440,&UNK_0142a5c6);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f48de70;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0d9f2800;
    puStack_620 = &UNK_0d9f2960;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9eee30(&puStack_5d8);
    uStack_4d8 = (long *)CONCAT71(uStack_4d8._1_7_,(char)uStack_410);
    uStack_4e8 = uStack_420;
    uStack_4e0 = uStack_418;
    uStack_4f8 = uStack_430;
    uStack_4f0 = uStack_428;
    uStack_508 = uStack_440;
    uStack_500 = uStack_438;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9eebf0(&puStack_5d8,&uStack_508,&UNK_012d7b2f);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = pcVar15;
      (**(code **)(lVar16 + 8))();
      pcVar15 = uStack_5c0;
    }
    uStack_5c0 = pcVar15;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0d9f2dc0;
    puStack_620 = &UNK_0d9f2f90;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9eee30(&puStack_5d8);
    func_0x048b0bc0(&uStack_5c0);
  }
  if ((DAT_0f72ef00 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72ef00), iVar10 != 0)) {
    func_0x0d9f3230();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72ee80,0xf53dab8);
    func_0x0410844d(&DAT_0f72ef00);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72ee80 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d90ea40;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72ee80 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d90ea40:
    puVar12 = &DAT_0f72ee80;
    if (iRam000000000f72eee0 != -0x2b3da790) goto LAB_0d90eaad;
LAB_0d90ea6b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d90eaad;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0d9f39c0(&uStack_440,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d90ea6b;
LAB_0d90eaad:
    func_0x0d9f39c0(&uStack_440,param_1,&UNK_0148d0e1,0xd);
  }
  if ((char)uStack_410 == '\0') {
    func_0x0d9f4530(&puStack_5d8,&uStack_440,&UNK_0142a5c6,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f48de70;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0d9f4ad0;
    puStack_620 = &UNK_0d9f4c30;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f47d0(&puStack_5d8);
    uStack_248 = (char)uStack_410;
    uStack_258 = (undefined4)uStack_420;
    uStack_254 = uStack_420._4_4_;
    iStack_250 = (int)uStack_418;
    uStack_24c = uStack_418._4_4_;
    uStack_268 = (undefined4)uStack_430;
    uStack_264 = uStack_430._4_4_;
    uStack_260 = (undefined4)uStack_428;
    uStack_25c = uStack_428._4_4_;
    uStack_278 = (undefined4)uStack_440;
    uStack_274 = uStack_440._4_4_;
    uStack_270 = (undefined4)uStack_438;
    uStack_26c = uStack_438._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9f4530(&puStack_5d8,&uStack_278,&UNK_01410416,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0d9f4e00;
    puStack_620 = &UNK_0d9f4fd0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f47d0(&puStack_5d8);
    uStack_288 = uStack_248;
    uStack_298 = uStack_258;
    uStack_294 = uStack_254;
    iStack_290 = iStack_250;
    uStack_28c = uStack_24c;
    uStack_2a8 = uStack_268;
    uStack_2a4 = uStack_264;
    uStack_2a0 = uStack_260;
    uStack_29c = uStack_25c;
    uStack_2b8 = uStack_278;
    uStack_2b4 = uStack_274;
    uStack_2b0 = uStack_270;
    uStack_2ac = uStack_26c;
    func_0x048b0bc0(&uStack_5c0);
    if (iStack_290 == 4) {
      lVar16 = func_0x0d9f5300(&uStack_2b8);
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0d90ee43:
      puVar17[1] = 0xffffffffffffffff;
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 0xff;
      *puVar17 = &UNK_0f489570;
      puVar17[4] = 0x617263656e696d12;
      puVar17[5] = 0x7466;
      puVar17[6] = 0;
      *(undefined1 *)(puVar17 + 7) = 1;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iStack_290 == 1) {
      lVar16 = func_0x0d9f51b0(&uStack_2b8);
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0d90ee43;
    }
    uStack_2c8 = uStack_288;
    uStack_2d8 = uStack_298;
    uStack_2d4 = uStack_294;
    iStack_2d0 = iStack_290;
    uStack_2cc = uStack_28c;
    uStack_2e8 = uStack_2a8;
    uStack_2e4 = uStack_2a4;
    uStack_2e0 = uStack_2a0;
    uStack_2dc = uStack_29c;
    uStack_2f8 = (undefined8 *)CONCAT44(uStack_2b4,uStack_2b8);
    uStack_2f0 = CONCAT44(uStack_2ac,uStack_2b0);
    func_0x0d9f4530(&puStack_5d8,&uStack_2f8,&UNK_012d7b2f,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0d9f5480;
    puStack_620 = &UNK_0d9f5650;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f47d0(&puStack_5d8);
    uStack_308 = uStack_2c8;
    uStack_318 = uStack_2d8;
    uStack_314 = uStack_2d4;
    iStack_310 = iStack_2d0;
    uStack_30c = uStack_2cc;
    uStack_328 = uStack_2e8;
    uStack_324 = uStack_2e4;
    uStack_320 = uStack_2e0;
    uStack_31c = uStack_2dc;
    uStack_338 = (undefined4)uStack_2f8;
    uStack_334 = uStack_2f8._4_4_;
    uStack_330 = (undefined4)uStack_2f0;
    uStack_32c = uStack_2f0._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9f4530(&puStack_5d8,&uStack_338,&UNK_011e9523,3);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0126a0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05daeda0;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_05daea90;
    uStack_628 = &UNK_0d9f5830;
    puStack_620 = &UNK_0d9f5990;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f47d0(&puStack_5d8);
    uStack_348 = CONCAT31(uStack_348._1_3_,uStack_308);
    uStack_358 = uStack_318;
    uStack_354 = uStack_314;
    iStack_350 = iStack_310;
    uStack_34c = uStack_30c;
    uStack_368 = uStack_328;
    uStack_364 = uStack_324;
    uStack_360 = uStack_320;
    uStack_35c = uStack_31c;
    uStack_378 = (undefined8 *)CONCAT44(uStack_334,uStack_338);
    uStack_370 = (undefined8 *)CONCAT44(uStack_32c,uStack_330);
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9f4530(&puStack_5d8,&uStack_378,&UNK_012ba56c,3);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0126a0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05daeda0;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_05daea90;
    uStack_628 = &UNK_0d9f5b70;
    puStack_620 = &UNK_0d9f5cd0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f47d0(&puStack_5d8);
    uStack_388 = CONCAT31(uStack_388._1_3_,(undefined1)uStack_348);
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    iStack_390 = iStack_350;
    uStack_38c = uStack_34c;
    uStack_3a8 = uStack_368;
    uStack_3a4 = uStack_364;
    uStack_3a0 = uStack_360;
    uStack_39c = uStack_35c;
    puStack_3b8 = uStack_378;
    puStack_3b0 = uStack_370;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9f4530(&puStack_5d8,&puStack_3b8,&UNK_01220159,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0126a0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05daeda0;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_05daea90;
    uStack_628 = &UNK_0d9f5eb0;
    puStack_620 = &UNK_0d9f6010;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f47d0(&puStack_5d8);
    uStack_458 = CONCAT31(uStack_458._1_3_,(undefined1)uStack_388);
    uStack_468 = uStack_398;
    uStack_464 = uStack_394;
    iStack_460 = iStack_390;
    uStack_45c = uStack_38c;
    uStack_478 = uStack_3a8;
    uStack_474 = uStack_3a4;
    uStack_470 = uStack_3a0;
    uStack_46c = uStack_39c;
    uStack_488 = puStack_3b8;
    uStack_480 = puStack_3b0;
    func_0x048b0bc0(&uStack_5c0);
    if (iStack_460 == 4) {
      lVar16 = func_0x0d9f5300(&uStack_488);
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0d90f4f8:
      puVar17[1] = 0xffffffffffffffff;
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 0xff;
      *puVar17 = &UNK_0f0edc68;
      uVar8 = _DAT_014f0238;
      puVar17[4] = 0;
      puVar17[5] = uVar8;
      puVar17[6] = 0;
      *(undefined1 *)(puVar17 + 7) = 1;
      *(undefined4 *)((long)puVar17 + 0x39) = 0;
      *(undefined4 *)((long)puVar17 + 0x3c) = 0;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iStack_460 == 1) {
      lVar16 = func_0x0d9f51b0(&uStack_488);
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0d90f4f8;
    }
    uStack_4d8 = (long *)CONCAT71(uStack_4d8._1_7_,(char)uStack_458);
    uStack_4e8 = CONCAT44(uStack_464,uStack_468);
    uStack_4e0 = (undefined *)CONCAT44(uStack_45c,iStack_460);
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    uStack_4f0 = CONCAT44(uStack_46c,uStack_470);
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    func_0x0d9f4530(&puStack_5d8,&uStack_508,&UNK_013747db,7);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f0126a0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = pcVar15;
      (**(code **)(lVar16 + 8))();
      pcVar15 = uStack_5c0;
    }
    uStack_5c0 = pcVar15;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05daeda0;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_05daea90;
    uStack_628 = &UNK_0d9f61f0;
    puStack_620 = &UNK_0d9f6350;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f47d0(&puStack_5d8);
    func_0x048b0bc0(&uStack_5c0);
  }
  if ((DAT_0f72efb8 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72efb8), iVar10 != 0)) {
    func_0x0d9f65f0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72ef38,0xf53dab8);
    func_0x0410844d(&DAT_0f72efb8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72ef38 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d90f720;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72ef38 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d90f720:
    puVar12 = &DAT_0f72ef38;
    if (iRam000000000f72ef98 != -0x2b3da790) goto LAB_0d90f78d;
LAB_0d90f74b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d90f78d;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0d9f6d40(&uStack_440,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d90f74b;
LAB_0d90f78d:
    func_0x0d9f6d40(&uStack_440,param_1,&UNK_011e5203,0xd);
  }
  if ((char)uStack_410 == '\0') {
    func_0x0d9f78a0(&puStack_5d8,&uStack_440,&UNK_0142a5c6,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f48de70;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0d9f7e40;
    puStack_620 = &UNK_0d9f7fa0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f7b40(&puStack_5d8);
    uStack_388 = CONCAT31(uStack_388._1_3_,(char)uStack_410);
    uStack_398 = (undefined4)uStack_420;
    uStack_394 = uStack_420._4_4_;
    iStack_390 = (int)uStack_418;
    uStack_38c = uStack_418._4_4_;
    uStack_3a8 = (undefined4)uStack_430;
    uStack_3a4 = uStack_430._4_4_;
    uStack_3a0 = (undefined4)uStack_428;
    uStack_39c = uStack_428._4_4_;
    puStack_3b8 = uStack_440;
    puStack_3b0 = uStack_438;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9f78a0(&puStack_5d8,&puStack_3b8,&UNK_01410416,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0d9f8170;
    puStack_620 = &UNK_0d9f8340;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f7b40(&puStack_5d8);
    uVar22 = uStack_38c;
    iVar10 = iStack_390;
    puVar17 = puStack_3b8;
    uStack_370 = (undefined8 *)CONCAT44(uStack_3a4,uStack_3a8);
    uStack_378 = puStack_3b0;
    uStack_368 = uStack_3a0;
    uStack_364 = uStack_39c;
    uStack_360 = uStack_398;
    uStack_35c = uStack_394;
    uStack_5d9 = (undefined1)uStack_388;
    func_0x048b0bc0(&uStack_5c0);
    if (iVar10 == 4) {
      if ((DAT_0f72efb8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72efb8), iVar11 != 0)) {
        func_0x0d9f65f0();
        __cxa_atexit(&UNK_048ae800,&DAT_0f72ef38,0xf53dab8);
        func_0x0410844d(&DAT_0f72efb8);
      }
      plVar14 = (long *)(puVar17[3] +
                        (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f72ef38 + 4)) * 8);
      do {
        lVar16 = *plVar14;
        if (lVar16 == -1) goto LAB_0d90fba8;
        plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
      } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72ef38 + 4));
      if (plVar14 == (long *)puVar17[7]) {
LAB_0d90fba8:
        puVar12 = &DAT_0f72ef38;
      }
      else {
        puVar12 = (undefined *)plVar14[2];
      }
      uStack_3bc = uVar22;
      puVar12 = (undefined *)func_0x048b1040(puVar17 + 3,puVar12,uVar22,1);
      if (puVar12 == (undefined *)0x0) {
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_5d8);
        puVar25 = *(undefined **)(puStack_5d8 + 0x38);
        puVar12 = puStack_5d8;
        if (puVar25 == (undefined *)0x0) goto LAB_0d915d87;
LAB_0d915dac:
        do {
          puVar12 = puVar25;
          puVar25 = *(undefined **)(puVar12 + 0x38);
          if (*(undefined **)(puVar12 + 0x38) == (undefined *)0x0) {
            puStack_5d8 = (undefined *)0x0;
            uStack_5d0 = (undefined8 *)0x0;
            func_0x048b10d0(&puStack_5d8);
            puVar25 = puStack_5d8;
          }
        } while (puVar25 != (undefined *)0x0);
      }
      else {
        puVar25 = *(undefined **)(puVar12 + 0x38);
        if (*(undefined **)(puVar12 + 0x38) != (undefined *)0x0) goto LAB_0d915dac;
LAB_0d915d87:
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_5d8);
        puVar25 = puStack_5d8;
        if (puStack_5d8 != (undefined *)0x0) goto LAB_0d915dac;
      }
      lVar16 = *(long *)(puVar12 + 0x48);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar18[1] = 0xffffffffffffffff;
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 0xff;
      *puVar18 = &UNK_0f489570;
      puVar18[4] = 0x617263656e696d12;
      puVar18[5] = 0x7466;
      puVar18[6] = 0;
      *(undefined1 *)(puVar18 + 7) = 1;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar18;
      uVar22 = uStack_3bc;
joined_r0x0d915e72:
      uStack_3bc = uVar22;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iVar10 == 1) {
      if ((DAT_0f72efb8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72efb8), iVar11 != 0)) {
        func_0x0d9f65f0();
        __cxa_atexit(&UNK_048ae800,&DAT_0f72ef38,0xf53dab8);
        func_0x0410844d(&DAT_0f72efb8);
      }
      plVar14 = (long *)(puVar17[3] +
                        (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f72ef38 + 4)) * 8);
      do {
        lVar16 = *plVar14;
        if (lVar16 == -1) goto LAB_0d90fb2b;
        plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
      } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72ef38 + 4));
      if (plVar14 == (long *)puVar17[7]) {
LAB_0d90fb2b:
        puVar12 = &DAT_0f72ef38;
      }
      else {
        puVar12 = (undefined *)plVar14[2];
      }
      uStack_3bc = uVar22;
      puVar12 = (undefined *)FUN_048b0c90(puVar17 + 3,puVar12,uVar22,1);
      if (puVar12 == (undefined *)0x0) {
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_5d8);
        puVar12 = puStack_5d8;
      }
      lVar16 = *(long *)(puVar12 + 0x58);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar18[1] = 0xffffffffffffffff;
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 0xff;
      *puVar18 = &UNK_0f489570;
      puVar18[4] = 0x617263656e696d12;
      puVar18[5] = 0x7466;
      puVar18[6] = 0;
      *(undefined1 *)(puVar18 + 7) = 1;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar18;
      uVar22 = uStack_3bc;
      goto joined_r0x0d915e72;
    }
    uStack_488 = puVar17;
    uStack_480 = uStack_378;
    uStack_478 = (undefined4)uStack_370;
    uStack_474 = uStack_370._4_4_;
    uStack_470 = uStack_368;
    uStack_46c = uStack_364;
    uStack_468 = uStack_360;
    uStack_464 = uStack_35c;
    iStack_460 = iVar10;
    uStack_458 = CONCAT31(uStack_458._1_3_,uStack_5d9);
    uStack_45c = uVar22;
    func_0x0d9f78a0(&puStack_5d8,&uStack_488,&UNK_012d7b2f,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0d9f8520;
    puStack_620 = &UNK_0d9f86f0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f7b40(&puStack_5d8);
    uStack_4d8 = (long *)CONCAT71(uStack_4d8._1_7_,(char)uStack_458);
    uStack_4e8 = CONCAT44(uStack_464,uStack_468);
    uStack_4e0 = (undefined *)CONCAT44(uStack_45c,iStack_460);
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    uStack_4f0 = CONCAT44(uStack_46c,uStack_470);
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9f78a0(&puStack_5d8,&uStack_508,&UNK_013747db,7);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0ef46ef8;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = pcVar15;
      (**(code **)(lVar16 + 8))();
      pcVar15 = uStack_5c0;
    }
    uStack_5c0 = pcVar15;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_04906f70;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_04906c50;
    uStack_628 = &UNK_0d9f88d0;
    puStack_620 = &UNK_0d9f8a30;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9f7b40(&puStack_5d8);
    func_0x048b0bc0(&uStack_5c0);
  }
  if ((DAT_0f72f070 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f070), iVar10 != 0)) {
    func_0x0d9f8cd0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72eff0,0xf53dab8);
    func_0x0410844d(&DAT_0f72f070);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72eff0 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d910020;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72eff0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d910020:
    puVar12 = &DAT_0f72eff0;
    if (iRam000000000f72f050 != -0x2b3da790) goto LAB_0d91008d;
LAB_0d91004b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d91008d;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0d9f9480(&uStack_488,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d91004b;
LAB_0d91008d:
    func_0x0d9f9480(&uStack_488,param_1,&UNK_012843ff,0xe);
  }
  if ((char)uStack_458 == '\0') {
    uStack_4b8._4_4_ = (uint)((ulong)uStack_4b8 >> 0x20);
    func_0x0d9f9fe0(&puStack_5d8,&uStack_488,&UNK_01410416);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0d9fa520;
    puStack_620 = &UNK_0d9fa6e0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9fa220(&puStack_5d8);
    uStack_308 = (char)uStack_458;
    uStack_318 = uStack_468;
    uStack_314 = uStack_464;
    iStack_310 = iStack_460;
    uStack_30c = uStack_45c;
    uStack_328 = uStack_478;
    uStack_324 = uStack_474;
    uStack_320 = uStack_470;
    uStack_31c = uStack_46c;
    uStack_338 = (undefined4)uStack_488;
    uStack_334 = uStack_488._4_4_;
    uStack_330 = (undefined4)uStack_480;
    uStack_32c = uStack_480._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    uStack_420 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    puStack_3f8 = (undefined *)0x0;
    plStack_3f0 = (long *)0x0;
    puStack_408 = (undefined1 *)0x0;
    puStack_400 = (undefined *)0x0;
    uStack_418 = (undefined *)0x0;
    uStack_410 = (long *)0x0;
    uStack_3c8 = 0;
    uStack_438 = (undefined8 *)0xffffffffffffffff;
    uStack_430 = (undefined8 *)0x0;
    uStack_428 = 0xff;
    uStack_440 = (undefined8 *)&UNK_0f4e3c70;
    func_0x041679a0(&uStack_420);
    uStack_418 = (undefined *)FUN_041681f0(&uStack_420,0xf547a30);
    uStack_410 = (long *)FUN_041681f0(&uStack_420,0xf547770);
    puStack_408 = (undefined1 *)0x0;
    puStack_400 = (undefined *)0x0;
    puStack_3f8 = (undefined *)0x0;
    plStack_3f0 = (long *)0x0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 1;
    uStack_660 = uStack_438;
    uStack_658 = uStack_430;
    uStack_650 = (code *)CONCAT71(uStack_650._1_7_,(undefined1)uStack_428);
    uStack_668 = (undefined8 *)&UNK_0f4e3c70;
    FUN_04167a20(&uStack_648,&uStack_420);
    uStack_640 = uStack_418;
    plStack_638 = uStack_410;
    uStack_630 = puStack_408;
    uStack_628 = puStack_400;
    puStack_620 = puStack_3f8;
    uStack_618 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      LOCK();
      plStack_3f0[1] = plStack_3f0[1] + 1;
      UNLOCK();
    }
    uStack_610 = uStack_3e8;
    if (((ulong)plStack_3e0 & 1) == 0) {
      uStack_5f8 = uStack_3d0;
      uStack_608 = plStack_3e0;
      uStack_600 = uStack_3d8;
    }
    else {
      func_0x0412e5e0(&uStack_608,uStack_3d0,uStack_3d8);
    }
    uStack_5f0 = uStack_3c8;
    func_0x0d91a070(&uStack_378,&uStack_338,&uStack_668);
    func_0x0d9f9fe0(&puStack_5d8,&uStack_378,&UNK_012d7b2f);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar17 = &UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)puVar17;
      (**(code **)(lVar16 + 8))();
      puVar17 = (undefined8 *)uStack_5c0;
    }
    uStack_5c0 = (code *)puVar17;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_048b3f30;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &SUB_048b2190;
    uStack_4c8 = &UNK_0d9fa8b0;
    puStack_4c0 = &UNK_0d9faa80;
    uStack_4b8 = (long *)((ulong)uStack_4b8._4_4_ << 0x20);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9fa220(&puStack_5d8);
    uStack_388 = CONCAT31(uStack_388._1_3_,(undefined1)uStack_348);
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    iStack_390 = iStack_350;
    uStack_38c = uStack_34c;
    uStack_3a8 = uStack_368;
    uStack_3a4 = uStack_364;
    uStack_3a0 = uStack_360;
    uStack_39c = uStack_35c;
    puStack_3b8 = uStack_378;
    puStack_3b0 = uStack_370;
    func_0x048b0bc0(&uStack_5c0);
    uStack_4e8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    puStack_4c0 = (undefined *)0x0;
    uStack_4b8 = (long *)0x0;
    uStack_4d0 = (undefined *)0x0;
    uStack_4c8 = (undefined *)0x0;
    uStack_4e0 = (undefined *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_490 = 0;
    uStack_500 = (undefined8 *)0xffffffffffffffff;
    uStack_4f8 = (undefined8 *)0x0;
    uStack_4f0 = 0xff;
    uStack_508 = (undefined8 *)&UNK_0f4e3c70;
    func_0x041679a0(&uStack_4e8);
    uStack_4e0 = (undefined *)FUN_041681f0(&uStack_4e8,0xf547a30);
    uStack_4d8 = (long *)FUN_041681f0(&uStack_4e8,0xf547770);
    uStack_4d0 = (undefined *)0x0;
    uStack_4c8 = (undefined *)0x0;
    puStack_4c0 = (undefined *)0x0;
    uStack_4b8 = (long *)0x0;
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 1;
    uStack_5d0 = uStack_500;
    uStack_5c8 = uStack_4f8;
    uStack_5c0 = (code *)CONCAT71(uStack_5c0._1_7_,(undefined1)uStack_4f0);
    puStack_5d8 = &UNK_0f4e3c70;
    FUN_04167a20(&uStack_5b8,&uStack_4e8);
    uStack_5b0 = (uint)uStack_4e0;
    uStack_5ac = (undefined4)((ulong)uStack_4e0 >> 0x20);
    uStack_5a8 = SUB81(uStack_4d8,0);
    uStack_5a7 = (undefined7)((ulong)uStack_4d8 >> 8);
    uStack_5a0 = (uint)uStack_4d0;
    uStack_59c = uStack_4d0._4_4_;
    uStack_598 = (undefined4)uStack_4c8;
    uStack_594 = uStack_4c8._4_4_;
    puStack_590 = puStack_4c0;
    plStack_588 = uStack_4b8;
    if (uStack_4b8 != (long *)0x0) {
      LOCK();
      uStack_4b8[1] = uStack_4b8[1] + 1;
      UNLOCK();
    }
    uStack_580 = uStack_4b0;
    if (((ulong)plStack_4a8 & 1) == 0) {
      uStack_568 = uStack_498;
      uStack_578 = plStack_4a8;
      uStack_570 = uStack_4a0;
    }
    else {
      func_0x0412e5e0(&uStack_578,uStack_498,uStack_4a0);
    }
    uStack_560 = uStack_490;
    func_0x0d91a070(&uStack_2f8,&puStack_3b8,&puStack_5d8);
    puStack_5d8 = &UNK_0f4e3c70;
    if (((ulong)uStack_578 & 1) != 0) {
      func_0x0412a280(uStack_568,(ulong)uStack_578 & 0xfffffffffffffffe);
    }
    plVar14 = plStack_588;
    if (plStack_588 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_588 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_588 + 0x10))(plStack_588);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&uStack_5b8);
    uStack_508 = (undefined8 *)&UNK_0f4e3c70;
    if (((ulong)plStack_4a8 & 1) != 0) {
      func_0x0412a280(uStack_498,(ulong)plStack_4a8 & 0xfffffffffffffffe);
    }
    plVar14 = uStack_4b8;
    if (uStack_4b8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4b8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_4b8 + 0x10))(uStack_4b8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&uStack_4e8);
    uStack_668 = (undefined8 *)&UNK_0f4e3c70;
    if (((ulong)uStack_608 & 1) != 0) {
      func_0x0412a280(uStack_5f8,(ulong)uStack_608 & 0xfffffffffffffffe);
    }
    plVar14 = uStack_618;
    if (uStack_618 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_618 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_618 + 0x10))(uStack_618);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&uStack_648);
    uStack_440 = (undefined8 *)&UNK_0f4e3c70;
    if (((ulong)plStack_3e0 & 1) != 0) {
      func_0x0412a280(uStack_3d0,(ulong)plStack_3e0 & 0xfffffffffffffffe);
    }
    plVar14 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3f0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&uStack_420);
  }
  if ((DAT_0f72f128 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f128), iVar10 != 0)) {
    func_0x0d9fad20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72f0a8,0xf53dab8);
    func_0x0410844d(&DAT_0f72f128);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72f0a8 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d910920;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f0a8 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d910920:
    puVar12 = &DAT_0f72f0a8;
    if (iRam000000000f72f108 != -0x2b3da790) goto LAB_0d91098d;
LAB_0d91094b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d91098d;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0d9fb560(&uStack_488,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d91094b;
LAB_0d91098d:
    func_0x0d9fb560(&uStack_488,param_1,&UNK_013f2399,0xf);
  }
  if ((char)uStack_458 == '\0') {
    func_0x0d9fc0d0(&puStack_5d8,&uStack_488,&UNK_0142a5c6,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f48de70;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0d9fc670;
    puStack_620 = &UNK_0d9fc7d0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9fc370(&puStack_5d8);
    uStack_1f8 = (char)uStack_458;
    uStack_208 = uStack_468;
    uStack_204 = uStack_464;
    iStack_200 = iStack_460;
    uStack_1fc = uStack_45c;
    uStack_218 = uStack_478;
    uStack_214 = uStack_474;
    uStack_210 = uStack_470;
    uStack_20c = uStack_46c;
    uStack_228 = (undefined4)uStack_488;
    uStack_224 = uStack_488._4_4_;
    uStack_220 = (undefined4)uStack_480;
    uStack_21c = uStack_480._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9fc0d0(&puStack_5d8,&uStack_228,&UNK_01410416,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0d9fc9a0;
    puStack_620 = &UNK_0d9fcb70;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9fc370(&puStack_5d8);
    uStack_248 = uStack_1f8;
    uStack_258 = uStack_208;
    uStack_254 = uStack_204;
    iStack_250 = iStack_200;
    uStack_24c = uStack_1fc;
    uStack_268 = uStack_218;
    uStack_264 = uStack_214;
    uStack_260 = uStack_210;
    uStack_25c = uStack_20c;
    uStack_278 = uStack_228;
    uStack_274 = uStack_224;
    uStack_270 = uStack_220;
    uStack_26c = uStack_21c;
    func_0x048b0bc0(&uStack_5c0);
    if (iStack_250 == 4) {
      lVar16 = func_0x0d9fcea0(&uStack_278);
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0d910d2a:
      puVar17[1] = 0xffffffffffffffff;
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 0xff;
      *puVar17 = &UNK_0f489570;
      puVar17[4] = 0x617263656e696d12;
      puVar17[5] = 0x7466;
      puVar17[6] = 0;
      *(undefined1 *)(puVar17 + 7) = 1;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iStack_250 == 1) {
      lVar16 = func_0x0d9fcd50(&uStack_278);
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0d910d2a;
    }
    uStack_288 = uStack_248;
    uStack_298 = uStack_258;
    uStack_294 = uStack_254;
    iStack_290 = iStack_250;
    uStack_28c = uStack_24c;
    uStack_2a8 = uStack_268;
    uStack_2a4 = uStack_264;
    uStack_2a0 = uStack_260;
    uStack_29c = uStack_25c;
    uStack_2b8 = uStack_278;
    uStack_2b4 = uStack_274;
    uStack_2b0 = uStack_270;
    uStack_2ac = uStack_26c;
    func_0x0d9fc0d0(&puStack_5d8,&uStack_2b8,&UNK_012d7b2f,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0d9fd020;
    puStack_620 = &UNK_0d9fd1f0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9fc370(&puStack_5d8);
    uStack_2c8 = uStack_288;
    uStack_2d8 = uStack_298;
    uStack_2d4 = uStack_294;
    iStack_2d0 = iStack_290;
    uStack_2cc = uStack_28c;
    uStack_2e8 = uStack_2a8;
    uStack_2e4 = uStack_2a4;
    uStack_2e0 = uStack_2a0;
    uStack_2dc = uStack_29c;
    uStack_2f8 = (undefined8 *)CONCAT44(uStack_2b4,uStack_2b8);
    uStack_2f0 = CONCAT44(uStack_2ac,uStack_2b0);
    func_0x048b0bc0(&uStack_5c0);
    func_0x0d9fc0d0(&puStack_5d8,&uStack_2f8,&UNK_012d45e0,7);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f48e0a0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0da00d20;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9ff5f0;
    uStack_628 = &UNK_0da00de0;
    puStack_620 = &UNK_0da00f70;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9fc370(&puStack_5d8);
    uStack_308 = uStack_2c8;
    uStack_318 = uStack_2d8;
    uStack_314 = uStack_2d4;
    iStack_310 = iStack_2d0;
    uStack_30c = uStack_2cc;
    uStack_328 = uStack_2e8;
    uStack_324 = uStack_2e4;
    uStack_320 = uStack_2e0;
    uStack_31c = uStack_2dc;
    uStack_338 = (undefined4)uStack_2f8;
    uStack_334 = uStack_2f8._4_4_;
    uStack_330 = (undefined4)uStack_2f0;
    uStack_32c = uStack_2f0._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    uStack_4f8 = (undefined8 *)0x0;
    uStack_4f0 = CONCAT71(uStack_4f0._1_7_,0xff);
    uStack_508 = (undefined8 *)&UNK_0f4e3cf0;
    uStack_4e0 = (undefined *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = (undefined *)((ulong)uStack_4d0 & 0xffffffffffffff00);
    uStack_4e8 = 2;
    uStack_500 = (undefined8 *)0x14;
    uStack_438 = (undefined8 *)0x14;
    uStack_430 = (undefined8 *)0x0;
    uStack_428 = CONCAT71(uStack_428._1_7_,0xff);
    uStack_440 = (undefined8 *)&UNK_0f4e3cf0;
    uStack_420 = 2;
    uStack_418 = (undefined *)0x0;
    uStack_410 = (long *)0x0;
    puStack_408 = (undefined1 *)((ulong)puStack_408 & 0xffffffffffffff00);
    if (iStack_310 == 4) {
      lVar16 = func_0x0d9fcea0(&uStack_338);
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0d9111d4:
      *(undefined1 *)(puVar17 + 3) = (undefined1)uStack_4f0;
      puVar17[1] = uStack_500;
      puVar17[2] = uStack_4f8;
      *puVar17 = &UNK_0f4e3cf0;
      puVar17[4] = 2;
      puVar17[5] = 0;
      puVar17[6] = 0;
      uStack_418 = (undefined *)0x0;
      uStack_410 = (long *)0x0;
      *(undefined1 *)(puVar17 + 7) = 0;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iStack_310 == 1) {
      lVar16 = func_0x0d9fcd50(&uStack_338);
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0d9111d4;
    }
    uStack_348 = CONCAT31(uStack_348._1_3_,uStack_308);
    uStack_358 = uStack_318;
    uStack_354 = uStack_314;
    iStack_350 = iStack_310;
    uStack_34c = uStack_30c;
    uStack_368 = uStack_328;
    uStack_364 = uStack_324;
    uStack_360 = uStack_320;
    uStack_35c = uStack_31c;
    uStack_378 = (undefined8 *)CONCAT44(uStack_334,uStack_338);
    uStack_370 = (undefined8 *)CONCAT44(uStack_32c,uStack_330);
    func_0x0d9fc0d0(&puStack_5d8,&uStack_378,&UNK_013747db,7);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar17 = &UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)puVar17;
      (**(code **)(lVar16 + 8))();
      puVar17 = (undefined8 *)uStack_5c0;
    }
    uStack_5c0 = (code *)puVar17;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0da01540;
    puStack_620 = &UNK_0da01710;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0d9fc370(&puStack_5d8);
    uStack_388 = CONCAT31(uStack_388._1_3_,(undefined1)uStack_348);
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    iStack_390 = iStack_350;
    uStack_38c = uStack_34c;
    uStack_3a8 = uStack_368;
    uStack_3a4 = uStack_364;
    uStack_3a0 = uStack_360;
    uStack_39c = uStack_35c;
    puStack_3b8 = uStack_378;
    puStack_3b0 = uStack_370;
    func_0x048b0bc0(&uStack_5c0);
    uStack_648 = 0;
    uStack_600 = 0;
    uStack_5f8 = 0;
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    puStack_620 = (undefined *)0x0;
    uStack_618 = (long *)0x0;
    uStack_630 = (undefined1 *)0x0;
    uStack_628 = (undefined *)0x0;
    uStack_640 = (undefined *)0x0;
    plStack_638 = (long *)0x0;
    uStack_5f0 = 0;
    uStack_660 = (undefined8 *)0xffffffffffffffff;
    uStack_658 = (undefined8 *)0x0;
    uStack_650 = (code *)0xff;
    uStack_668 = (undefined8 *)&UNK_0f4e3c70;
    func_0x041679a0(&uStack_648);
    uStack_640 = (undefined *)FUN_041681f0(&uStack_648,0xf547a30);
    plStack_638 = (long *)FUN_041681f0(&uStack_648,0xf547770);
    uStack_630 = (undefined1 *)0x0;
    uStack_628 = (undefined *)0x0;
    puStack_620 = (undefined *)0x0;
    uStack_618 = (long *)0x0;
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    uStack_600 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 1;
    uStack_5d0 = uStack_660;
    uStack_5c8 = uStack_658;
    uStack_5c0 = (code *)CONCAT71(uStack_5c0._1_7_,(undefined1)uStack_650);
    puStack_5d8 = &UNK_0f4e3c70;
    FUN_04167a20(&uStack_5b8,&uStack_648);
    uStack_5b0 = (uint)uStack_640;
    uStack_5ac = (undefined4)((ulong)uStack_640 >> 0x20);
    uStack_5a8 = SUB81(plStack_638,0);
    uStack_5a7 = (undefined7)((ulong)plStack_638 >> 8);
    uStack_5a0 = (uint)uStack_630;
    uStack_59c = uStack_630._4_4_;
    uStack_598 = (undefined4)uStack_628;
    uStack_594 = uStack_628._4_4_;
    puStack_590 = puStack_620;
    plStack_588 = uStack_618;
    if (uStack_618 != (long *)0x0) {
      LOCK();
      uStack_618[1] = uStack_618[1] + 1;
      UNLOCK();
    }
    uStack_580 = uStack_610;
    if (((ulong)uStack_608 & 1) == 0) {
      uStack_568 = uStack_5f8;
      uStack_578 = uStack_608;
      uStack_570 = uStack_600;
    }
    else {
      func_0x0412e5e0(&uStack_578,uStack_5f8,uStack_600);
    }
    uStack_560 = uStack_5f0;
    if (iStack_390 == 4) {
      lVar16 = func_0x0d9fcea0(&puStack_3b8);
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0d9115b6:
      *(undefined1 *)(puVar17 + 3) = (undefined1)uStack_5c0;
      *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_5d0;
      *(undefined4 *)((long)puVar17 + 0xc) = uStack_5d0._4_4_;
      *(undefined4 *)(puVar17 + 2) = (undefined4)uStack_5c8;
      *(undefined4 *)((long)puVar17 + 0x14) = uStack_5c8._4_4_;
      *puVar17 = &UNK_0f4e3c70;
      FUN_04167a20(puVar17 + 4,&uStack_5b8);
      puVar17[5] = CONCAT44(uStack_5ac,uStack_5b0);
      puVar17[6] = CONCAT71(uStack_5a7,uStack_5a8);
      puVar17[7] = CONCAT44(uStack_59c,uStack_5a0);
      puVar17[8] = CONCAT44(uStack_594,uStack_598);
      puVar17[9] = puStack_590;
      puVar17[10] = plStack_588;
      puStack_590 = (undefined *)0x0;
      plStack_588 = (long *)0x0;
      puVar17[0xb] = uStack_580;
      puVar17[0xe] = uStack_568;
      *(undefined4 *)(puVar17 + 0xc) = (undefined4)uStack_578;
      *(undefined4 *)((long)puVar17 + 100) = uStack_578._4_4_;
      *(undefined4 *)(puVar17 + 0xd) = (undefined4)uStack_570;
      *(undefined4 *)((long)puVar17 + 0x6c) = uStack_570._4_4_;
      uStack_578 = (long *)0x0;
      uStack_570 = 0;
      uStack_568 = 0;
      puVar17[0xf] = uStack_560;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iStack_390 == 1) {
      lVar16 = func_0x0d9fcd50(&puStack_3b8);
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0d9115b6;
    }
    puStack_5d8 = &UNK_0f4e3c70;
    if (((ulong)uStack_578 & 1) != 0) {
      func_0x0412a280(uStack_568,(ulong)uStack_578 & 0xfffffffffffffffe);
    }
    plVar14 = plStack_588;
    if (plStack_588 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_588 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_588 + 0x10))(plStack_588);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&uStack_5b8);
    uStack_668 = (undefined8 *)&UNK_0f4e3c70;
    if (((ulong)uStack_608 & 1) != 0) {
      func_0x0412a280(uStack_5f8,(ulong)uStack_608 & 0xfffffffffffffffe);
    }
    plVar14 = uStack_618;
    if (uStack_618 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_618 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_618 + 0x10))(uStack_618);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&uStack_648);
    plVar14 = uStack_410;
    uStack_440 = (undefined8 *)&UNK_0f4e3cf0;
    if (uStack_410 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_410 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_410 + 0x10))(uStack_410);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = uStack_4d8;
    uStack_508 = (undefined8 *)&UNK_0f4e3cf0;
    if (uStack_4d8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4d8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_4d8 + 0x10))(uStack_4d8);
        func_0x0412c2d0(plVar14);
      }
    }
  }
  if ((DAT_0f72f3b0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f3b0), iVar10 != 0)) {
    func_0x0da019b0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72f330,0xf53dab8);
    func_0x0410844d(&DAT_0f72f3b0);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72f330 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d9117f0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f330 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d9117f0:
    puVar12 = &DAT_0f72f330;
    if (iRam000000000f72f390 != -0x2b3da790) goto LAB_0d91185d;
LAB_0d91181b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d91185d;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0da021f0(&uStack_508,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d91181b;
LAB_0d91185d:
    func_0x0da021f0(&uStack_508,param_1,&UNK_01235567,0x12);
  }
  if ((char)uStack_4d8 == '\0') {
    func_0x0da02d60(&puStack_5d8,&uStack_508,&UNK_0142a5c6,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f48de70;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0d9f2740;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9f2170;
    uStack_628 = &UNK_0da03310;
    puStack_620 = &UNK_0da03470;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da03010(&puStack_5d8);
    uStack_288 = (char)uStack_4d8;
    uStack_298 = (undefined4)uStack_4e8;
    uStack_294 = uStack_4e8._4_4_;
    iStack_290 = (int)uStack_4e0;
    uStack_28c = uStack_4e0._4_4_;
    uStack_2a8 = (undefined4)uStack_4f8;
    uStack_2a4 = uStack_4f8._4_4_;
    uStack_2a0 = (undefined4)uStack_4f0;
    uStack_29c = uStack_4f0._4_4_;
    uStack_2b8 = (undefined4)uStack_508;
    uStack_2b4 = uStack_508._4_4_;
    uStack_2b0 = (undefined4)uStack_500;
    uStack_2ac = uStack_500._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da02d60(&puStack_5d8,&uStack_2b8,&UNK_01410416,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0da03640;
    puStack_620 = &UNK_0da03810;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da03010(&puStack_5d8);
    uStack_2c8 = uStack_288;
    uStack_2d8 = uStack_298;
    uStack_2d4 = uStack_294;
    iStack_2d0 = iStack_290;
    uStack_2cc = uStack_28c;
    uStack_2e8 = uStack_2a8;
    uStack_2e4 = uStack_2a4;
    uStack_2e0 = uStack_2a0;
    uStack_2dc = uStack_29c;
    uStack_2f8 = (undefined8 *)CONCAT44(uStack_2b4,uStack_2b8);
    uStack_2f0 = CONCAT44(uStack_2ac,uStack_2b0);
    func_0x048b0bc0(&uStack_5c0);
    if (iStack_2d0 == 4) {
      lVar16 = func_0x0da03b40(&uStack_2f8);
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0d911bfa:
      puVar17[1] = 0xffffffffffffffff;
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 0xff;
      *puVar17 = &UNK_0f489570;
      puVar17[4] = 0x617263656e696d12;
      puVar17[5] = 0x7466;
      puVar17[6] = 0;
      *(undefined1 *)(puVar17 + 7) = 1;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iStack_2d0 == 1) {
      lVar16 = func_0x0da039f0(&uStack_2f8);
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0d911bfa;
    }
    uStack_308 = uStack_2c8;
    uStack_318 = uStack_2d8;
    uStack_314 = uStack_2d4;
    iStack_310 = iStack_2d0;
    uStack_30c = uStack_2cc;
    uStack_328 = uStack_2e8;
    uStack_324 = uStack_2e4;
    uStack_320 = uStack_2e0;
    uStack_31c = uStack_2dc;
    uStack_338 = (undefined4)uStack_2f8;
    uStack_334 = uStack_2f8._4_4_;
    uStack_330 = (undefined4)uStack_2f0;
    uStack_32c = uStack_2f0._4_4_;
    func_0x0da02d60(&puStack_5d8,&uStack_338,&UNK_012d7b2f,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0da03cc0;
    puStack_620 = &UNK_0da03e90;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da03010(&puStack_5d8);
    uStack_348 = CONCAT31(uStack_348._1_3_,uStack_308);
    uStack_358 = uStack_318;
    uStack_354 = uStack_314;
    iStack_350 = iStack_310;
    uStack_34c = uStack_30c;
    uStack_368 = uStack_328;
    uStack_364 = uStack_324;
    uStack_360 = uStack_320;
    uStack_35c = uStack_31c;
    uStack_378 = (undefined8 *)CONCAT44(uStack_334,uStack_338);
    uStack_370 = (undefined8 *)CONCAT44(uStack_32c,uStack_330);
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da02d60(&puStack_5d8,&uStack_378,&UNK_012d45e0,7);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f48e0a0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0da00d20;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0d9ff5f0;
    uStack_628 = &UNK_0da04070;
    puStack_620 = &UNK_0da04200;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da03010(&puStack_5d8);
    uStack_388 = CONCAT31(uStack_388._1_3_,(undefined1)uStack_348);
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    iStack_390 = iStack_350;
    uStack_38c = uStack_34c;
    uStack_3a8 = uStack_368;
    uStack_3a4 = uStack_364;
    uStack_3a0 = uStack_360;
    uStack_39c = uStack_35c;
    puStack_3b8 = uStack_378;
    puStack_3b0 = uStack_370;
    func_0x048b0bc0(&uStack_5c0);
    uStack_438 = (undefined8 *)0x14;
    uStack_430 = (undefined8 *)0x0;
    uStack_428 = CONCAT71(uStack_428._1_7_,0xff);
    uStack_440 = (undefined8 *)&UNK_0f4e3cf0;
    uStack_420 = 2;
    uStack_418 = (undefined *)0x0;
    uStack_410 = (long *)0x0;
    puStack_408 = (undefined1 *)((ulong)puStack_408 & 0xffffffffffffff00);
    func_0x0d91a490(&uStack_488,&puStack_3b8,&uStack_440);
    func_0x0da02d60(&puStack_5d8,&uStack_488,&UNK_01250d18,8);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar17 = &UNK_0ef474e0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)puVar17;
      (**(code **)(lVar16 + 8))();
      puVar17 = (undefined8 *)uStack_5c0;
    }
    uStack_5c0 = (code *)puVar17;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_049119f0;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_0490fc00;
    uStack_628 = &UNK_0da043e0;
    puStack_620 = &UNK_0da045e0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da03010(&puStack_5d8);
    plStack_638 = (long *)CONCAT71(plStack_638._1_7_,(char)uStack_458);
    uStack_648 = CONCAT44(uStack_464,uStack_468);
    uStack_640 = (undefined *)CONCAT44(uStack_45c,iStack_460);
    uStack_658 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    uStack_650 = (code *)CONCAT44(uStack_46c,uStack_470);
    uStack_668 = uStack_488;
    uStack_660 = uStack_480;
    func_0x048b0bc0(&uStack_5c0);
    uStack_5d0 = (undefined8 *)0x14;
    uStack_5c8 = (undefined8 *)0x0;
    uStack_5c0 = (code *)CONCAT71(uStack_5c0._1_7_,0xff);
    puStack_5d8 = &UNK_0f4e3cf0;
    uStack_5b8 = (code *)0x0;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    uStack_5a8 = 0;
    uStack_5a7 = 0;
    uStack_5a0 = uStack_5a0 & 0xffffff00;
    func_0x0d91a490(&uStack_278,&uStack_668,&puStack_5d8);
    puStack_5d8 = &UNK_0f4e3cf0;
    plVar14 = (long *)CONCAT71(uStack_5a7,uStack_5a8);
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar1 = plVar14 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = uStack_410;
    uStack_440 = (undefined8 *)&UNK_0f4e3cf0;
    if (uStack_410 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_410 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_410 + 0x10))(uStack_410);
        func_0x0412c2d0(plVar14);
      }
    }
  }
  func_0x0d8a24d0(param_1);
  func_0x0d8a3a20(param_1);
  func_0x0d919960(param_1);
  if ((DAT_0f72f468 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f468), iVar10 != 0)) {
    func_0x0da04880();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72f3e8,0xf53dab8);
    func_0x0410844d(&DAT_0f72f468);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72f3e8 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d912270;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f3e8 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d912270:
    puVar12 = &DAT_0f72f3e8;
    if (iRam000000000f72f448 != -0x2b3da790) goto LAB_0d9122dd;
LAB_0d91229b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d9122dd;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0da04da0(&uStack_488,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d91229b;
LAB_0d9122dd:
    func_0x0da04da0(&uStack_488,param_1,&UNK_0149a9ec,6);
  }
  if ((char)uStack_458 == '\0') {
    func_0x0da05950(&puStack_5d8,&uStack_488,&UNK_01410416,4,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0da05f70;
    puStack_620 = &UNK_0da06130;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_f8 = (char)uStack_458;
    uStack_108 = uStack_468;
    uStack_104 = uStack_464;
    iStack_100 = iStack_460;
    uStack_fc = uStack_45c;
    uStack_118 = uStack_478;
    uStack_114 = uStack_474;
    uStack_110 = uStack_470;
    uStack_10c = uStack_46c;
    uStack_128 = (undefined4)uStack_488;
    uStack_124 = uStack_488._4_4_;
    uStack_120 = (undefined4)uStack_480;
    uStack_11c = uStack_480._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    uStack_420 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    puStack_3f8 = (undefined *)0x0;
    plStack_3f0 = (long *)0x0;
    puStack_408 = (undefined1 *)0x0;
    puStack_400 = (undefined *)0x0;
    uStack_418 = (undefined *)0x0;
    uStack_410 = (long *)0x0;
    uStack_3c8 = 0;
    uStack_438 = (undefined8 *)0xffffffffffffffff;
    uStack_430 = (undefined8 *)0x0;
    uStack_428 = 0xff;
    uStack_440 = (undefined8 *)&UNK_0f4e3c70;
    func_0x041679a0(&uStack_420);
    uStack_418 = (undefined *)FUN_041681f0(&uStack_420,0xf547a30);
    uStack_410 = (long *)FUN_041681f0(&uStack_420,0xf547770);
    puStack_408 = (undefined1 *)0x0;
    puStack_400 = (undefined *)0x0;
    puStack_3f8 = (undefined *)0x0;
    plStack_3f0 = (long *)0x0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 1;
    uStack_660 = uStack_438;
    uStack_658 = uStack_430;
    uStack_650 = (code *)CONCAT71(uStack_650._1_7_,(undefined1)uStack_428);
    uStack_668 = (undefined8 *)&UNK_0f4e3c70;
    FUN_04167a20(&uStack_648,&uStack_420);
    uStack_640 = uStack_418;
    plStack_638 = uStack_410;
    uStack_630 = puStack_408;
    uStack_628 = puStack_400;
    puStack_620 = puStack_3f8;
    uStack_618 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      LOCK();
      plStack_3f0[1] = plStack_3f0[1] + 1;
      UNLOCK();
    }
    uStack_610 = uStack_3e8;
    if (((ulong)plStack_3e0 & 1) == 0) {
      uStack_5f8 = uStack_3d0;
      uStack_608 = plStack_3e0;
      uStack_600 = uStack_3d8;
    }
    else {
      func_0x0412e5e0(&uStack_608,uStack_3d0,uStack_3d8);
    }
    uStack_5f0 = uStack_3c8;
    if (iStack_100 == 4) {
      lVar16 = func_0x0da06450(&uStack_128);
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0d9126ac:
      *(undefined1 *)(puVar17 + 3) = (undefined1)uStack_650;
      *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_660;
      *(undefined4 *)((long)puVar17 + 0xc) = uStack_660._4_4_;
      *(undefined4 *)(puVar17 + 2) = (undefined4)uStack_658;
      *(undefined4 *)((long)puVar17 + 0x14) = uStack_658._4_4_;
      *puVar17 = &UNK_0f4e3c70;
      FUN_04167a20(puVar17 + 4,&uStack_648);
      puVar17[5] = uStack_640;
      puVar17[6] = plStack_638;
      puVar17[7] = uStack_630;
      puVar17[8] = uStack_628;
      puVar17[9] = puStack_620;
      puVar17[10] = uStack_618;
      puStack_620 = (undefined *)0x0;
      uStack_618 = (long *)0x0;
      puVar17[0xb] = uStack_610;
      puVar17[0xe] = uStack_5f8;
      *(undefined4 *)(puVar17 + 0xc) = (undefined4)uStack_608;
      *(undefined4 *)((long)puVar17 + 100) = uStack_608._4_4_;
      *(undefined4 *)(puVar17 + 0xd) = (undefined4)uStack_600;
      *(undefined4 *)((long)puVar17 + 0x6c) = uStack_600._4_4_;
      uStack_608 = (long *)0x0;
      uStack_600 = 0;
      uStack_5f8 = 0;
      puVar17[0xf] = uStack_5f0;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iStack_100 == 1) {
      lVar16 = func_0x0da06300(&uStack_128);
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0d9126ac;
    }
    uStack_b8 = uStack_f8;
    uStack_c8 = uStack_108;
    uStack_c4 = uStack_104;
    iStack_c0 = iStack_100;
    uStack_bc = uStack_fc;
    uStack_d8 = uStack_118;
    uStack_d4 = uStack_114;
    uStack_d0 = uStack_110;
    uStack_cc = uStack_10c;
    uStack_e8 = uStack_128;
    uStack_e4 = uStack_124;
    uStack_e0 = uStack_120;
    uStack_dc = uStack_11c;
    func_0x0da05950(&puStack_5d8,&uStack_e8,&UNK_011ea907,0xb,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0123c0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_05e08030;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &UNK_05e07cf0;
    uStack_4c8 = &UNK_0da065d0;
    puStack_4c0 = &UNK_0da06780;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_138 = uStack_b8;
    uStack_148 = uStack_c8;
    uStack_144 = uStack_c4;
    iStack_140 = iStack_c0;
    uStack_13c = uStack_bc;
    uStack_158 = uStack_d8;
    uStack_154 = uStack_d4;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    uStack_168 = uStack_e8;
    uStack_164 = uStack_e4;
    uStack_160 = uStack_e0;
    uStack_15c = uStack_dc;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da05950(&puStack_5d8,&uStack_168,&UNK_01377950,4,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef42d08;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_048b06c0;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &SUB_048b02c0;
    uStack_4c8 = &UNK_0da06960;
    puStack_4c0 = &UNK_0da06ac0;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_1b8 = CONCAT71(uStack_1b8._1_7_,uStack_138);
    uStack_1c8 = uStack_148;
    uStack_1c4 = uStack_144;
    iStack_1c0 = iStack_140;
    uStack_1bc = uStack_13c;
    uStack_1d8 = uStack_158;
    uStack_1d4 = uStack_154;
    uStack_1d0 = uStack_150;
    uStack_1cc = uStack_14c;
    uStack_1e8 = uStack_168;
    uStack_1e4 = uStack_164;
    uStack_1e0 = uStack_160;
    uStack_1dc = uStack_15c;
    func_0x048b0bc0(&uStack_5c0);
    if (iStack_1c0 == 4) {
      lVar16 = func_0x0da06450(&uStack_1e8);
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
LAB_0d912b55:
      puVar17[1] = 0xffffffffffffffff;
      puVar17[2] = 0;
      *(undefined2 *)(puVar17 + 3) = 0xff;
      *puVar17 = &UNK_0f4894b0;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iStack_1c0 == 1) {
      lVar16 = func_0x0da06300(&uStack_1e8);
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      goto LAB_0d912b55;
    }
    uStack_178 = (undefined1)uStack_1b8;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    iStack_180 = iStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_1a8 = uStack_1e8;
    uStack_1a4 = uStack_1e4;
    uStack_1a0 = uStack_1e0;
    uStack_19c = uStack_1dc;
    func_0x0da05950(&puStack_5d8,&uStack_1a8,&UNK_013236a8,7,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f012628;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_05eadd90;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &SUB_05eada80;
    uStack_4c8 = &UNK_0da06ca0;
    puStack_4c0 = &UNK_0da06e40;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_1f8 = uStack_178;
    uStack_208 = uStack_188;
    uStack_204 = uStack_184;
    iStack_200 = iStack_180;
    uStack_1fc = uStack_17c;
    uStack_218 = uStack_198;
    uStack_214 = uStack_194;
    uStack_210 = uStack_190;
    uStack_20c = uStack_18c;
    uStack_228 = uStack_1a8;
    uStack_224 = uStack_1a4;
    uStack_220 = uStack_1a0;
    uStack_21c = uStack_19c;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da05950(&puStack_5d8,&uStack_228,&UNK_014cb0d6,0x12,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0123c0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_05e08030;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &UNK_05e07cf0;
    uStack_4c8 = &UNK_0da07020;
    puStack_4c0 = &UNK_0da071d0;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_248 = uStack_1f8;
    uStack_258 = uStack_208;
    uStack_254 = uStack_204;
    iStack_250 = iStack_200;
    uStack_24c = uStack_1fc;
    uStack_268 = uStack_218;
    uStack_264 = uStack_214;
    uStack_260 = uStack_210;
    uStack_25c = uStack_20c;
    uStack_278 = uStack_228;
    uStack_274 = uStack_224;
    uStack_270 = uStack_220;
    uStack_26c = uStack_21c;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da05950(&puStack_5d8,&uStack_278,&UNK_01283989,0x11,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0123c0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_05e08030;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &UNK_05e07cf0;
    uStack_4c8 = &UNK_0da073b0;
    puStack_4c0 = &UNK_0da07580;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_288 = uStack_248;
    uStack_298 = uStack_258;
    uStack_294 = uStack_254;
    iStack_290 = iStack_250;
    uStack_28c = uStack_24c;
    uStack_2a8 = uStack_268;
    uStack_2a4 = uStack_264;
    uStack_2a0 = uStack_260;
    uStack_29c = uStack_25c;
    uStack_2b8 = uStack_278;
    uStack_2b4 = uStack_274;
    uStack_2b0 = uStack_270;
    uStack_2ac = uStack_26c;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da05950(&puStack_5d8,&uStack_2b8,&UNK_01353cd4,10,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0123c0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_05e08030;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &UNK_05e07cf0;
    uStack_4c8 = &UNK_0da07760;
    puStack_4c0 = &UNK_0da07930;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_2c8 = uStack_288;
    uStack_2d8 = uStack_298;
    uStack_2d4 = uStack_294;
    iStack_2d0 = iStack_290;
    uStack_2cc = uStack_28c;
    uStack_2e8 = uStack_2a8;
    uStack_2e4 = uStack_2a4;
    uStack_2e0 = uStack_2a0;
    uStack_2dc = uStack_29c;
    uStack_2f8 = (undefined8 *)CONCAT44(uStack_2b4,uStack_2b8);
    uStack_2f0 = CONCAT44(uStack_2ac,uStack_2b0);
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da05950(&puStack_5d8,&uStack_2f8,&UNK_011b0766,0xf,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0120f0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_05de4ce0;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &SUB_05de49c0;
    uStack_4c8 = &UNK_0da07b10;
    puStack_4c0 = &UNK_0da07c70;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_308 = uStack_2c8;
    uStack_318 = uStack_2d8;
    uStack_314 = uStack_2d4;
    iStack_310 = iStack_2d0;
    uStack_30c = uStack_2cc;
    uStack_328 = uStack_2e8;
    uStack_324 = uStack_2e4;
    uStack_320 = uStack_2e0;
    uStack_31c = uStack_2dc;
    uStack_338 = (undefined4)uStack_2f8;
    uStack_334 = uStack_2f8._4_4_;
    uStack_330 = (undefined4)uStack_2f0;
    uStack_32c = uStack_2f0._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da05950(&puStack_5d8,&uStack_338,&UNK_012507e1,0x11,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0120f0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_05de4ce0;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &SUB_05de49c0;
    uStack_4c8 = &UNK_0da07e50;
    puStack_4c0 = &UNK_0da07fb0;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_348 = CONCAT31(uStack_348._1_3_,uStack_308);
    uStack_358 = uStack_318;
    uStack_354 = uStack_314;
    iStack_350 = iStack_310;
    uStack_34c = uStack_30c;
    uStack_368 = uStack_328;
    uStack_364 = uStack_324;
    uStack_360 = uStack_320;
    uStack_35c = uStack_31c;
    uStack_378 = (undefined8 *)CONCAT44(uStack_334,uStack_338);
    uStack_370 = (undefined8 *)CONCAT44(uStack_32c,uStack_330);
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da05950(&puStack_5d8,&uStack_378,&UNK_0131dcce,0x15,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0120f0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_05de4ce0;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &SUB_05de49c0;
    uStack_4c8 = &UNK_0da08190;
    puStack_4c0 = &UNK_0da082f0;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da05c70(&puStack_5d8);
    uStack_388 = CONCAT31(uStack_388._1_3_,(undefined1)uStack_348);
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    iStack_390 = iStack_350;
    uStack_38c = uStack_34c;
    uStack_3a8 = uStack_368;
    uStack_3a4 = uStack_364;
    uStack_3a0 = uStack_360;
    uStack_39c = uStack_35c;
    puStack_3b8 = uStack_378;
    puStack_3b0 = uStack_370;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da05950(&puStack_5d8,&puStack_3b8,&UNK_01211ed3,0x19,0);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f48e300;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = pcVar15;
      (**(code **)(lVar16 + 8))();
      pcVar15 = uStack_5c0;
    }
    uStack_5c0 = pcVar15;
    uStack_508 = (undefined8 *)CONCAT44(uStack_508._4_4_,(undefined4)uStack_5c8);
    uStack_500 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)((ulong)uStack_4f8 & 0xffffffff00000000);
    uStack_4f0 = 1;
    uStack_4e8 = 0;
    uStack_4e0 = &UNK_0da098b0;
    uStack_4d8 = (long *)&SUB_048b06d0;
    uStack_4d0 = &UNK_0da094e0;
    uStack_4c8 = &UNK_0da09970;
    puStack_4c0 = &UNK_0da09cb0;
    uStack_4b8 = (long *)((ulong)uStack_4b8 & 0xffffffff00000000);
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_508);
    plVar14 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar14);
      }
    }
    iVar10 = *(int *)((long)uStack_5d0 + 0x1c);
    if (iVar10 == 2) {
      piVar20 = *(int **)(*(long *)(uStack_5d0[2] + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != *(int *)(uStack_5d0 + 3)) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      lVar16 = *(long *)(piVar20 + 0xc);
      while (lVar16 != uStack_5d0[1]) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar16 = *(long *)(piVar20 + 0xc);
      }
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else if (iVar10 == 1) {
      piVar20 = *(int **)(*(long *)(uStack_5d0[2] + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != *(int *)(uStack_5d0 + 3)) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else if (iVar10 == 0) {
      *(uint *)(uStack_5d0[2] + 0x18) = *(uint *)(uStack_5d0[2] + 0x18) | 0x40000;
    }
    func_0x0da05c70(&puStack_5d8);
    func_0x048b0bc0(&uStack_5c0);
    uStack_668 = (undefined8 *)&UNK_0f4e3c70;
    if (((ulong)uStack_608 & 1) != 0) {
      func_0x0412a280(uStack_5f8,(ulong)uStack_608 & 0xfffffffffffffffe);
    }
    plVar14 = uStack_618;
    if (uStack_618 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_618 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_618 + 0x10))(uStack_618);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&uStack_648);
    uStack_440 = (undefined8 *)&UNK_0f4e3c70;
    if (((ulong)plStack_3e0 & 1) != 0) {
      func_0x0412a280(uStack_3d0,(ulong)plStack_3e0 & 0xfffffffffffffffe);
    }
    plVar14 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3f0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&uStack_420);
  }
  func_0x0d8a24d0(param_1);
  func_0x0d8a3a20(param_1);
  if ((DAT_0f72f5d8 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f5d8), iVar10 != 0)) {
    func_0x0da0a440();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72f558,0xf53dab8);
    func_0x0410844d(&DAT_0f72f5d8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72f558 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d913a40;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f558 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d913a40:
    puVar12 = &DAT_0f72f558;
    if (iRam000000000f72f5b8 != -0x2b3da790) goto LAB_0d913aad;
LAB_0d913a6b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d913aad;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0da0ab80(&uStack_440,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d913a6b;
LAB_0d913aad:
    func_0x0da0ab80(&uStack_440,param_1,&UNK_0123557a,6);
  }
  if ((char)uStack_410 == '\0') {
    func_0x0da0b700(&puStack_5d8,&uStack_440,&UNK_0142a5c6,4,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0da0bcc0;
    puStack_620 = &UNK_0da0be80;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da0b9c0(&puStack_5d8);
    uStack_308 = (char)uStack_410;
    uStack_318 = (undefined4)uStack_420;
    uStack_314 = uStack_420._4_4_;
    iStack_310 = (int)uStack_418;
    uStack_30c = uStack_418._4_4_;
    uStack_328 = (undefined4)uStack_430;
    uStack_324 = uStack_430._4_4_;
    uStack_320 = (undefined4)uStack_428;
    uStack_31c = uStack_428._4_4_;
    uStack_338 = (undefined4)uStack_440;
    uStack_334 = uStack_440._4_4_;
    uStack_330 = (undefined4)uStack_438;
    uStack_32c = uStack_438._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da0b700(&puStack_5d8,&uStack_338,&UNK_01377950,4,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef42d08;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b06c0;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b02c0;
    uStack_628 = &UNK_0da0c050;
    puStack_620 = &UNK_0da0c1b0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da0b9c0(&puStack_5d8);
    uVar28 = uStack_308;
    uVar22 = uStack_30c;
    iVar10 = iStack_310;
    puVar17 = (undefined8 *)CONCAT44(uStack_334,uStack_338);
    uStack_2f8 = (undefined8 *)CONCAT44(uStack_32c,uStack_330);
    uStack_2f0 = CONCAT44(uStack_324,uStack_328);
    uStack_2e8 = uStack_320;
    uStack_2e4 = uStack_31c;
    uStack_2e0 = uStack_318;
    uStack_2dc = uStack_314;
    func_0x048b0bc0(&uStack_5c0);
    if (iVar10 == 4) {
      if ((DAT_0f72f5d8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72f5d8), iVar11 != 0)) {
        func_0x0da0a440();
        __cxa_atexit(&UNK_048ae800,&DAT_0f72f558,0xf53dab8);
        func_0x0410844d(&DAT_0f72f5d8);
      }
      plVar14 = (long *)(puVar17[3] +
                        (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f72f558 + 4)) * 8);
      do {
        lVar16 = *plVar14;
        if (lVar16 == -1) goto LAB_0d913ee0;
        plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
      } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f558 + 4));
      if (plVar14 == (long *)puVar17[7]) {
LAB_0d913ee0:
        puVar12 = &DAT_0f72f558;
      }
      else {
        puVar12 = (undefined *)plVar14[2];
      }
      uStack_5d9 = uVar28;
      uStack_3bc = uVar22;
      puVar12 = (undefined *)func_0x048b1040(puVar17 + 3,puVar12,uVar22,1);
      if (puVar12 == (undefined *)0x0) {
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_5d8);
        puVar25 = *(undefined **)(puStack_5d8 + 0x38);
        puVar12 = puStack_5d8;
        if (puVar25 == (undefined *)0x0) goto LAB_0d915ea6;
LAB_0d915ecb:
        do {
          puVar12 = puVar25;
          puVar25 = *(undefined **)(puVar12 + 0x38);
          if (*(undefined **)(puVar12 + 0x38) == (undefined *)0x0) {
            puStack_5d8 = (undefined *)0x0;
            uStack_5d0 = (undefined8 *)0x0;
            func_0x048b10d0(&puStack_5d8);
            puVar25 = puStack_5d8;
          }
        } while (puVar25 != (undefined *)0x0);
      }
      else {
        puVar25 = *(undefined **)(puVar12 + 0x38);
        if (*(undefined **)(puVar12 + 0x38) != (undefined *)0x0) goto LAB_0d915ecb;
LAB_0d915ea6:
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_5d8);
        puVar25 = puStack_5d8;
        if (puStack_5d8 != (undefined *)0x0) goto LAB_0d915ecb;
      }
      lVar16 = *(long *)(puVar12 + 0x48);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      puVar18[1] = 0xffffffffffffffff;
      puVar18[2] = 0;
      *(undefined2 *)(puVar18 + 3) = 0xff;
      *puVar18 = &UNK_0f4894b0;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar18;
      uVar28 = uStack_5d9;
      uVar22 = uStack_3bc;
joined_r0x0d915f72:
      uStack_5d9 = uVar28;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iVar10 == 1) {
      if ((DAT_0f72f5d8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72f5d8), iVar11 != 0)) {
        func_0x0da0a440();
        __cxa_atexit(&UNK_048ae800,&DAT_0f72f558,0xf53dab8);
        func_0x0410844d(&DAT_0f72f5d8);
      }
      plVar14 = (long *)(puVar17[3] +
                        (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f72f558 + 4)) * 8);
      do {
        lVar16 = *plVar14;
        if (lVar16 == -1) goto LAB_0d913e60;
        plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
      } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f558 + 4));
      if (plVar14 == (long *)puVar17[7]) {
LAB_0d913e60:
        puVar12 = &DAT_0f72f558;
      }
      else {
        puVar12 = (undefined *)plVar14[2];
      }
      uStack_5d9 = uVar28;
      puVar12 = (undefined *)FUN_048b0c90(puVar17 + 3,puVar12,uVar22,1);
      if (puVar12 == (undefined *)0x0) {
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_5d8);
        puVar12 = puStack_5d8;
      }
      lVar16 = *(long *)(puVar12 + 0x58);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      puVar18[1] = 0xffffffffffffffff;
      puVar18[2] = 0;
      *(undefined2 *)(puVar18 + 3) = 0xff;
      *puVar18 = &UNK_0f4894b0;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar18;
      uVar28 = uStack_5d9;
      goto joined_r0x0d915f72;
    }
    uStack_370 = uStack_2f8;
    uStack_368 = (undefined4)uStack_2f0;
    uStack_364 = uStack_2f0._4_4_;
    uStack_360 = uStack_2e8;
    uStack_35c = uStack_2e4;
    uStack_358 = uStack_2e0;
    uStack_354 = uStack_2dc;
    iStack_350 = iVar10;
    uStack_348 = CONCAT31(uStack_348._1_3_,uVar28);
    uStack_378 = puVar17;
    uStack_34c = uVar22;
    func_0x0da0b700(&puStack_5d8,&uStack_378,&UNK_013236a8,7,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f012628;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05eadd90;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_05eada80;
    uStack_628 = &UNK_0da0c390;
    puStack_620 = &UNK_0da0c530;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da0b9c0(&puStack_5d8);
    uStack_388 = CONCAT31(uStack_388._1_3_,(undefined1)uStack_348);
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    iStack_390 = iStack_350;
    uStack_38c = uStack_34c;
    uStack_3a8 = uStack_368;
    uStack_3a4 = uStack_364;
    uStack_3a0 = uStack_360;
    uStack_39c = uStack_35c;
    puStack_3b8 = uStack_378;
    puStack_3b0 = uStack_370;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da0b700(&puStack_5d8,&puStack_3b8,&UNK_011ea907,0xb,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0123c0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05e08030;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_05e07cf0;
    uStack_628 = &UNK_0da0c710;
    puStack_620 = &UNK_0da0c8c0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da0b9c0(&puStack_5d8);
    uStack_458 = CONCAT31(uStack_458._1_3_,(undefined1)uStack_388);
    uStack_468 = uStack_398;
    uStack_464 = uStack_394;
    iStack_460 = iStack_390;
    uStack_45c = uStack_38c;
    uStack_478 = uStack_3a8;
    uStack_474 = uStack_3a4;
    uStack_470 = uStack_3a0;
    uStack_46c = uStack_39c;
    uStack_488 = puStack_3b8;
    uStack_480 = puStack_3b0;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da0b700(&puStack_5d8,&uStack_488,&UNK_012d68b1,8,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0123c0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05e08030;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_05e07cf0;
    uStack_628 = &UNK_0da0caa0;
    puStack_620 = &UNK_0da0cc50;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da0b9c0(&puStack_5d8);
    uStack_4d8 = (long *)CONCAT71(uStack_4d8._1_7_,(char)uStack_458);
    uStack_4e8 = CONCAT44(uStack_464,uStack_468);
    uStack_4e0 = (undefined *)CONCAT44(uStack_45c,iStack_460);
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    uStack_4f0 = CONCAT44(uStack_46c,uStack_470);
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da0b700(&puStack_5d8,&uStack_508,&UNK_01471568,5,0);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f0123c0;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = pcVar15;
      (**(code **)(lVar16 + 8))();
      pcVar15 = uStack_5c0;
    }
    uStack_5c0 = pcVar15;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05e08030;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_05e07cf0;
    uStack_628 = &UNK_0da0ce30;
    puStack_620 = &UNK_0da0d000;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da0b9c0(&puStack_5d8);
    func_0x048b0bc0(&uStack_5c0);
  }
  func_0x0d919960(param_1);
  if ((DAT_0f72f690 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f690), iVar10 != 0)) {
    func_0x0da0d2a0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72f610,0xf53dab8);
    func_0x0410844d(&DAT_0f72f690);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72f610 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d914610;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f610 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d914610:
    puVar12 = &DAT_0f72f610;
    if (iRam000000000f72f670 != -0x2b3da790) goto LAB_0d914668;
LAB_0d91463b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d914668;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar16 + 9);
    if (bVar29) {
      puVar12 = *(undefined **)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d91463b;
LAB_0d914668:
    puVar12 = &UNK_013f23a9;
    uVar23 = 0x11;
  }
  func_0x0da0d6e0(&uStack_440,param_1,puVar12,uVar23);
  plVar14 = uStack_410;
  uStack_410._0_5_ = (uint5)(uint)uStack_410;
  uVar8 = uStack_410;
  puStack_408 = (undefined1 *)((ulong)puStack_408 & 0xffffffffffffff00);
  uStack_410._0_1_ = (char)plVar14;
  bVar29 = (char)uStack_410 == '\0';
  uStack_410 = (long *)uVar8;
  if (bVar29) {
    func_0x0da10f60(&puStack_5d8,&UNK_014aaee7,5);
    bVar29 = (uStack_5b0 & 1) == 0;
    lVar16 = (long)&uStack_5b0 + 1;
    lVar19 = CONCAT44(uStack_59c,uStack_5a0);
    if (bVar29) {
      lVar19 = lVar16;
    }
    uVar23 = (ulong)((byte)uStack_5b0 >> 1);
    if (!bVar29) {
      uVar23 = CONCAT71(uStack_5a7,uStack_5a8);
    }
    if (uVar23 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar19 + 3 + uVar24) ^
                   ((int)*(char *)(lVar19 + 2 + uVar24) ^
                   ((int)*(char *)(lVar19 + 1 + uVar24) ^
                   ((int)*(char *)(lVar19 + uVar24) ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar19 + uVar24 + uVar23) ^ uVar22) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    uStack_418 = (undefined *)CONCAT44(uVar22,2);
    if ((DAT_0f72f6b0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f6b0), iVar10 != 0)) {
      func_0x0da0d3b0();
      func_0x0410844d(&DAT_0f72f6b0);
    }
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,uStack_418._4_4_);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)CONCAT44(uStack_658._4_4_,3);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0da11540;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0da0d1e0;
    uStack_628 = &UNK_0da11600;
    puStack_620 = &UNK_0da11610;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(&uStack_438,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_4f8 = (undefined8 *)uStack_428;
    uStack_4f0 = uStack_420;
    uStack_508 = uStack_438;
    uStack_500 = uStack_430;
    func_0x0da112d0(&uStack_668,&uStack_508,&puStack_5d8);
    if (uStack_650._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_650) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined8 *)lVar19 != uStack_660) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0d9148ff:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 9;
    }
    else {
      if (uStack_650._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_650) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d9148ff;
      }
      if (uStack_650._4_4_ == 0) {
        *(uint *)((long)uStack_658 + 0x18) = *(uint *)((long)uStack_658 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_408 == '\0') {
      func_0x0da11660(&uStack_668,&uStack_440);
    }
    puVar17 = uStack_440;
    iVar10 = uStack_410._4_4_;
    if ((DAT_0f72f690 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72f690), iVar11 != 0)) {
      func_0x0da0d2a0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f72f610,0xf53dab8);
      func_0x0410844d(&DAT_0f72f690);
    }
    plVar14 = (long *)(puVar17[3] +
                      (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72f610 + 4)) * 8);
    do {
      lVar19 = *plVar14;
      if (lVar19 == -1) goto LAB_0d9149a1;
      plVar14 = (long *)(puVar17[6] + lVar19 * 0x18);
    } while (*(uint *)(puVar17[6] + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f72f610 + 4));
    if (plVar14 == (long *)puVar17[7]) {
LAB_0d9149a1:
      puVar12 = &DAT_0f72f610;
    }
    else {
      puVar12 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar20 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar20 != piVar3 && (*piVar20 != iVar10)); piVar20 = piVar20 + 0xe) {
    }
    if ((piVar20 == piVar3) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01440cc0),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffffffffffffff00);
    func_0x05d9c620(piVar20 + 2,(long)&uStack_418 + 4,(long)&uStack_418 + 4,&uStack_668);
    uStack_488 = uStack_440;
    uStack_480 = uStack_438;
    uStack_478 = (undefined4)uStack_430;
    uStack_474 = uStack_430._4_4_;
    uStack_470 = (undefined4)uStack_428;
    uStack_46c = uStack_428._4_4_;
    uStack_468 = (undefined4)uStack_420;
    uStack_464 = uStack_420._4_4_;
    iStack_460 = (int)uStack_418;
    uStack_45c = uStack_418._4_4_;
    uStack_458 = (uint)uStack_410;
    iStack_454 = uStack_410._4_4_;
    uStack_450 = puStack_408._0_4_;
    func_0x048b0bc0(&puStack_5d8);
    func_0x0da10f60(&puStack_5d8,&UNK_013771dc,4);
    bVar29 = (uStack_5b0 & 1) == 0;
    lVar19 = CONCAT44(uStack_59c,uStack_5a0);
    if (bVar29) {
      lVar19 = lVar16;
    }
    uVar23 = (ulong)((byte)uStack_5b0 >> 1);
    if (!bVar29) {
      uVar23 = CONCAT71(uStack_5a7,uStack_5a8);
    }
    if (uVar23 == 0) {
      uStack_45c = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_45c = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_45c = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_45c = ((int)*(char *)(lVar19 + 3 + uVar24) ^
                       ((int)*(char *)(lVar19 + 2 + uVar24) ^
                       ((int)*(char *)(lVar19 + 1 + uVar24) ^
                       ((int)*(char *)(lVar19 + uVar24) ^ uStack_45c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uStack_45c = ((int)*(char *)(lVar19 + uVar24 + uVar23) ^ uStack_45c) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    iStack_460 = 2;
    if ((DAT_0f72f6b0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f6b0), iVar10 != 0)) {
      func_0x0da0d3b0();
      func_0x0410844d(&DAT_0f72f6b0);
    }
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,uStack_45c);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)CONCAT44(uStack_658._4_4_,3);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0da11540;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0da0d1e0;
    uStack_628 = &UNK_0da11820;
    puStack_620 = &UNK_0da11830;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(&uStack_480,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_46c,uStack_470);
    uStack_4f0 = CONCAT44(uStack_464,uStack_468);
    uStack_508 = uStack_480;
    uStack_500 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    func_0x0da112d0(&uStack_668,&uStack_508,&puStack_5d8);
    if (uStack_650._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_650) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      lVar19 = *(long *)(piVar20 + 0xc);
      while ((undefined8 *)lVar19 != uStack_660) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar19 = *(long *)(piVar20 + 0xc);
      }
LAB_0d914d1f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 9;
    }
    else {
      if (uStack_650._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)((long)uStack_658 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_650) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d914d1f;
      }
      if (uStack_650._4_4_ == 0) {
        *(uint *)((long)uStack_658 + 0x18) = *(uint *)((long)uStack_658 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_450 == '\0') {
      func_0x0da11660(&uStack_668,&uStack_488);
    }
    iVar10 = iStack_454;
    puVar17 = uStack_488;
    if ((DAT_0f72f690 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72f690), iVar11 != 0)) {
      func_0x0da0d2a0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f72f610,0xf53dab8);
      func_0x0410844d(&DAT_0f72f690);
    }
    plVar14 = (long *)(puVar17[3] +
                      (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72f610 + 4)) * 8);
    do {
      lVar19 = *plVar14;
      if (lVar19 == -1) goto LAB_0d914dc1;
      plVar14 = (long *)(puVar17[6] + lVar19 * 0x18);
    } while (*(uint *)(puVar17[6] + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f72f610 + 4));
    if (plVar14 == (long *)puVar17[7]) {
LAB_0d914dc1:
      puVar12 = &DAT_0f72f610;
    }
    else {
      puVar12 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar20 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar20 != piVar3 && (*piVar20 != iVar10)); piVar20 = piVar20 + 0xe) {
    }
    if ((piVar20 == piVar3) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01440cc0),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffffffffffffff00);
    func_0x05d9c620(piVar20 + 2,&uStack_45c,&uStack_45c,&uStack_668);
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    uStack_4f0 = CONCAT44(uStack_46c,uStack_470);
    uStack_4e8 = CONCAT44(uStack_464,uStack_468);
    uStack_4e0 = (undefined *)CONCAT44(uStack_45c,iStack_460);
    uStack_4d8 = (long *)CONCAT44(iStack_454,uStack_458);
    uStack_4d0 = (undefined *)CONCAT44(uStack_4d0._4_4_,uStack_450);
    func_0x048b0bc0(&puStack_5d8);
    func_0x0da10f60(&puStack_5d8,&UNK_01294e62,8);
    bVar29 = (uStack_5b0 & 1) != 0;
    if (bVar29) {
      lVar16 = CONCAT44(uStack_59c,uStack_5a0);
    }
    uVar23 = (ulong)((byte)uStack_5b0 >> 1);
    if (bVar29) {
      uVar23 = CONCAT71(uStack_5a7,uStack_5a8);
    }
    if (uVar23 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar16 + 3 + uVar24) ^
                   ((int)*(char *)(lVar16 + 2 + uVar24) ^
                   ((int)*(char *)(lVar16 + 1 + uVar24) ^
                   ((int)*(char *)(lVar16 + uVar24) ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uVar22 = ((int)*(char *)(lVar16 + uVar24 + uVar23) ^ uVar22) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    uStack_4e0 = (undefined *)CONCAT44(uVar22,2);
    if ((DAT_0f72f6b0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f6b0), iVar10 != 0)) {
      func_0x0da0d3b0();
      func_0x0410844d(&DAT_0f72f6b0);
    }
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,uStack_4e0._4_4_);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)CONCAT44(uStack_658._4_4_,3);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0da11540;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0da0d1e0;
    uStack_628 = &UNK_0da11880;
    puStack_620 = &UNK_0da11890;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(&uStack_500,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_3a8 = (undefined4)uStack_4f0;
    uStack_3a4 = uStack_4f0._4_4_;
    uStack_3a0 = (undefined4)uStack_4e8;
    uStack_39c = uStack_4e8._4_4_;
    puStack_3b8 = uStack_500;
    puStack_3b0 = uStack_4f8;
    func_0x0da112d0(&uStack_668,&puStack_3b8,&puStack_5d8);
    if (uStack_650._4_4_ == 2) {
      piVar20 = *(int **)(uStack_658[0xf] + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_650) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      puVar17 = *(undefined8 **)(piVar20 + 0xc);
      while (puVar17 != uStack_660) {
        piVar20 = *(int **)(piVar20 + 0xe);
        puVar17 = *(undefined8 **)(piVar20 + 0xc);
      }
LAB_0d91512f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 9;
    }
    else {
      if (uStack_650._4_4_ == 1) {
        piVar20 = *(int **)(uStack_658[0xf] + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_650) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d91512f;
      }
      if (uStack_650._4_4_ == 0) {
        *(uint *)(uStack_658 + 3) = *(uint *)(uStack_658 + 3) | 0x90000;
      }
    }
    if ((char)uStack_4d0 == '\0') {
      func_0x0da11660(&uStack_668,&uStack_508);
    }
    puVar17 = uStack_508;
    iVar10 = uStack_4d8._4_4_;
    if ((DAT_0f72f690 == '\0') && (iVar11 = FUN_04108328(&DAT_0f72f690), iVar11 != 0)) {
      func_0x0da0d2a0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f72f610,0xf53dab8);
      func_0x0410844d(&DAT_0f72f690);
    }
    plVar14 = (long *)(puVar17[3] +
                      (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72f610 + 4)) * 8);
    do {
      lVar16 = *plVar14;
      if (lVar16 == -1) goto LAB_0d9151c0;
      plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
    } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f610 + 4));
    if (plVar14 == (long *)puVar17[7]) {
LAB_0d9151c0:
      puVar12 = &DAT_0f72f610;
    }
    else {
      puVar12 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar20 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar20 != piVar3 && (*piVar20 != iVar10)); piVar20 = piVar20 + 0xe) {
    }
    if ((piVar20 == piVar3) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01440cc0),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffffffffffffff00);
    func_0x05d9c620(piVar20 + 2,(long)&uStack_4e0 + 4,(long)&uStack_4e0 + 4,&uStack_668);
    func_0x048b0bc0(&puStack_5d8);
  }
  if ((DAT_0f72f748 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f748), iVar10 != 0)) {
    func_0x0da119a0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72f6c8,0xf53dab8);
    func_0x0410844d(&DAT_0f72f748);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72f6c8 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d9152c0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f6c8 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d9152c0:
    puVar12 = &DAT_0f72f6c8;
    if (iRam000000000f72f728 != -0x2b3da790) goto LAB_0d91532d;
LAB_0d9152eb:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d91532d;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0da12340(&uStack_440,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d9152eb;
LAB_0d91532d:
    func_0x0da12340(&uStack_440,param_1,&UNK_0131e338,0x16);
  }
  if ((char)uStack_410 == '\0') {
    func_0x0da12ee0(&puStack_5d8,&uStack_440,&UNK_0149e9e3,0xb,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0da134a0;
    puStack_620 = &UNK_0da13660;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da131a0(&puStack_5d8);
    uStack_458 = CONCAT31(uStack_458._1_3_,(char)uStack_410);
    uStack_468 = (undefined4)uStack_420;
    uStack_464 = uStack_420._4_4_;
    iStack_460 = (int)uStack_418;
    uStack_45c = uStack_418._4_4_;
    uStack_478 = (undefined4)uStack_430;
    uStack_474 = uStack_430._4_4_;
    uStack_470 = (undefined4)uStack_428;
    uStack_46c = uStack_428._4_4_;
    uStack_488 = uStack_440;
    uStack_480 = uStack_438;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da12ee0(&puStack_5d8,&uStack_488,&UNK_013236a8,7,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f48e600;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0da15390;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &UNK_0da149f0;
    uStack_628 = &UNK_0da15450;
    puStack_620 = &UNK_0da15690;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da131a0(&puStack_5d8);
    uStack_4d8 = (long *)CONCAT71(uStack_4d8._1_7_,(char)uStack_458);
    uStack_4e8 = CONCAT44(uStack_464,uStack_468);
    uStack_4e0 = (undefined *)CONCAT44(uStack_45c,iStack_460);
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    uStack_4f0 = CONCAT44(uStack_46c,uStack_470);
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da12930(&puStack_5d8,uStack_508 + 3);
    if (uStack_5c0._4_4_ == 2) {
      piVar20 = *(int **)(uStack_5c8[0xf] + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_5c0) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      puVar17 = *(undefined8 **)(piVar20 + 0xc);
      while (puVar17 != uStack_5d0) {
        piVar20 = *(int **)(piVar20 + 0xe);
        puVar17 = *(undefined8 **)(piVar20 + 0xc);
      }
LAB_0d91570f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (uStack_5c0._4_4_ == 1) {
        piVar20 = *(int **)(uStack_5c8[0xf] + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_5c0) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0d91570f;
      }
      if (uStack_5c0._4_4_ == 0) {
        *(uint *)(uStack_5c8 + 3) = *(uint *)(uStack_5c8 + 3) | 0x40000;
      }
    }
    func_0x0da12ee0(&puStack_5d8,&uStack_508,&UNK_012ad52b,8,0x10);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0ef46ef8;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = pcVar15;
      (**(code **)(lVar16 + 8))();
      pcVar15 = uStack_5c0;
    }
    uStack_5c0 = pcVar15;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_04906f70;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_04906c50;
    uStack_628 = &UNK_0da15b10;
    puStack_620 = &UNK_0da15c70;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da131a0(&puStack_5d8);
    func_0x048b0bc0(&uStack_5c0);
  }
  func_0x0d8a24d0(param_1);
  func_0x0d8a3a20(param_1);
  if ((DAT_0f72f8b8 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f8b8), iVar10 != 0)) {
    func_0x0da15f10();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72f838,0xf53dab8);
    func_0x0410844d(&DAT_0f72f8b8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72f838 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d9158c0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f838 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d9158c0:
    puVar12 = &DAT_0f72f838;
    if (iRam000000000f72f898 != -0x2b3da790) goto LAB_0d91592d;
LAB_0d9158eb:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d91592d;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0da168f0(&uStack_440,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d9158eb;
LAB_0d91592d:
    func_0x0da168f0(&uStack_440,param_1,&UNK_011e5211,0xe);
  }
  if ((char)uStack_410 == '\0') {
    func_0x0da17450(&puStack_5d8,&uStack_440,&UNK_01377950,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef42d08;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b06c0;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b02c0;
    uStack_628 = &UNK_0da179f0;
    puStack_620 = &UNK_0da17b50;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da176f0(&puStack_5d8);
    puVar12 = uStack_418;
    puVar17 = uStack_440;
    uStack_488 = uStack_438;
    uStack_480 = uStack_430;
    uStack_478 = (undefined4)uStack_428;
    uStack_474 = uStack_428._4_4_;
    uStack_470 = (undefined4)uStack_420;
    uStack_46c = uStack_420._4_4_;
    iVar10 = (int)uStack_418;
    uVar5 = uStack_418._4_4_;
    uStack_5d9 = (char)uStack_410;
    func_0x048b0bc0(&uStack_5c0);
    if (iVar10 == 4) {
      if ((DAT_0f72f8b8 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f8b8), iVar10 != 0)) {
        func_0x0da15f10();
        __cxa_atexit(&UNK_048ae800,&DAT_0f72f838,0xf53dab8);
        func_0x0410844d(&DAT_0f72f8b8);
      }
      plVar14 = (long *)(puVar17[3] +
                        (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f72f838 + 4)) * 8);
      do {
        lVar16 = *plVar14;
        if (lVar16 == -1) goto LAB_0d915bd8;
        plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
      } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f838 + 4));
      if (plVar14 == (long *)puVar17[7]) {
LAB_0d915bd8:
        puVar25 = &DAT_0f72f838;
      }
      else {
        puVar25 = (undefined *)plVar14[2];
      }
      puVar25 = (undefined *)func_0x048b1040(puVar17 + 3,puVar25,uVar5,1);
      if (puVar25 == (undefined *)0x0) {
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_5d8);
        puVar21 = *(undefined **)(puStack_5d8 + 0x38);
        puVar25 = puStack_5d8;
        if (puVar21 == (undefined *)0x0) goto LAB_0d915fa6;
LAB_0d915fcb:
        do {
          puVar25 = puVar21;
          puVar21 = *(undefined **)(puVar25 + 0x38);
          if (*(undefined **)(puVar25 + 0x38) == (undefined *)0x0) {
            puStack_5d8 = (undefined *)0x0;
            uStack_5d0 = (undefined8 *)0x0;
            func_0x048b10d0(&puStack_5d8);
            puVar21 = puStack_5d8;
          }
        } while (puVar21 != (undefined *)0x0);
      }
      else {
        puVar21 = *(undefined **)(puVar25 + 0x38);
        if (*(undefined **)(puVar25 + 0x38) != (undefined *)0x0) goto LAB_0d915fcb;
LAB_0d915fa6:
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_5d8);
        puVar21 = puStack_5d8;
        if (puStack_5d8 != (undefined *)0x0) goto LAB_0d915fcb;
      }
      lVar16 = *(long *)(puVar25 + 0x48);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
LAB_0d916034:
      puVar18[1] = 0xffffffffffffffff;
      puVar18[2] = 0;
      *(undefined2 *)(puVar18 + 3) = 0xff;
      *puVar18 = &UNK_0f4894b0;
      plVar14 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar18;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iVar10 == 1) {
      if ((DAT_0f72f8b8 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f8b8), iVar10 != 0)) {
        func_0x0da15f10();
        __cxa_atexit(&UNK_048ae800,&DAT_0f72f838,0xf53dab8);
        func_0x0410844d(&DAT_0f72f8b8);
      }
      plVar14 = (long *)(puVar17[3] +
                        (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f72f838 + 4)) * 8);
      do {
        lVar16 = *plVar14;
        if (lVar16 == -1) goto LAB_0d915b58;
        plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
      } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f838 + 4));
      if (plVar14 == (long *)puVar17[7]) {
LAB_0d915b58:
        puVar25 = &DAT_0f72f838;
      }
      else {
        puVar25 = (undefined *)plVar14[2];
      }
      puVar25 = (undefined *)FUN_048b0c90(puVar17 + 3,puVar25,uVar5,1);
      if (puVar25 == (undefined *)0x0) {
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_5d8);
        puVar25 = puStack_5d8;
      }
      lVar16 = *(long *)(puVar25 + 0x58);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      goto LAB_0d916034;
    }
    uStack_508 = puVar17;
    uStack_500 = uStack_488;
    uStack_4f8 = uStack_480;
    uStack_4f0 = CONCAT44(uStack_474,uStack_478);
    uStack_4e8 = CONCAT44(uStack_46c,uStack_470);
    uStack_4e0 = puVar12;
    uStack_4d8 = (long *)CONCAT71(uStack_4d8._1_7_,uStack_5d9);
    func_0x0da17450(&puStack_5d8,&uStack_508,&UNK_013236a8,7);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f012628;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = pcVar15;
      (**(code **)(lVar16 + 8))();
      pcVar15 = uStack_5c0;
    }
    uStack_5c0 = pcVar15;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_05eadd90;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_05eada80;
    uStack_628 = &UNK_0da17d20;
    puStack_620 = &UNK_0da17ec0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da176f0(&puStack_5d8);
    func_0x048b0bc0(&uStack_5c0);
  }
  if ((DAT_0f72f970 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f970), iVar10 != 0)) {
    func_0x0da18160();
    __cxa_atexit(&UNK_048ae800,&DAT_0f72f8f0,0xf53dab8);
    func_0x0410844d(&DAT_0f72f970);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72f8f0 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_0d916250;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f8f0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0d916250:
    puVar12 = &DAT_0f72f8f0;
    if (iRam000000000f72f950 != -0x2b3da790) goto LAB_0d9162bd;
LAB_0d91627b:
    lVar16 = *(long *)(puVar12 + 0x68);
    if (lVar16 == 0) goto LAB_0d9162bd;
    bVar29 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar29) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar29) {
      uVar23 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0da18770(&uStack_440,param_1,lVar19,uVar23);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0d91627b;
LAB_0d9162bd:
    func_0x0da18770(&uStack_440,param_1,&UNK_012b6515,7);
  }
  if ((char)uStack_410 == '\0') {
    func_0x0da192e0(&puStack_5d8,&uStack_440,&UNK_01410416,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0da198e0;
    puStack_620 = &UNK_0da19aa0;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da195e0(&puStack_5d8);
    uStack_458 = CONCAT31(uStack_458._1_3_,(char)uStack_410);
    uStack_468 = (undefined4)uStack_420;
    uStack_464 = uStack_420._4_4_;
    iStack_460 = (int)uStack_418;
    uStack_45c = uStack_418._4_4_;
    uStack_478 = (undefined4)uStack_430;
    uStack_474 = uStack_430._4_4_;
    uStack_470 = (undefined4)uStack_428;
    uStack_46c = uStack_428._4_4_;
    uStack_488 = uStack_440;
    uStack_480 = uStack_438;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da192e0(&puStack_5d8,&uStack_488,&UNK_012ea067,0xb);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef44b00;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = (code *)plVar14;
      (**(code **)(lVar16 + 8))();
      plVar14 = (long *)uStack_5c0;
    }
    uStack_5c0 = (code *)plVar14;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_048b3f30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_048b2190;
    uStack_628 = &UNK_0da19c70;
    puStack_620 = &UNK_0da19e40;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da195e0(&puStack_5d8);
    uStack_4d8 = (long *)CONCAT71(uStack_4d8._1_7_,(char)uStack_458);
    uStack_4e8 = CONCAT44(uStack_464,uStack_468);
    uStack_4e0 = (undefined *)CONCAT44(uStack_45c,iStack_460);
    uStack_4f8 = (undefined8 *)CONCAT44(uStack_474,uStack_478);
    uStack_4f0 = CONCAT44(uStack_46c,uStack_470);
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    func_0x048b0bc0(&uStack_5c0);
    func_0x0da192e0(&puStack_5d8,&uStack_508,&UNK_01234f07,0x17);
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0ef46ce8;
    if (uStack_5c0 != (code *)0x0) {
      lVar16 = *(long *)uStack_5c0;
      uStack_5c0 = pcVar15;
      (**(code **)(lVar16 + 8))();
      pcVar15 = uStack_5c0;
    }
    uStack_5c0 = pcVar15;
    uStack_668 = (undefined8 *)CONCAT44(uStack_668._4_4_,(undefined4)uStack_5c8);
    uStack_660 = (undefined8 *)0x0;
    uStack_658 = (undefined8 *)((ulong)uStack_658 & 0xffffffff00000000);
    uStack_650 = (code *)0x1;
    uStack_648 = 0;
    uStack_640 = &UNK_0490ce30;
    plStack_638 = (long *)&SUB_048b06d0;
    uStack_630 = &SUB_0490cb20;
    uStack_628 = &UNK_0da1a020;
    puStack_620 = &UNK_0da1a180;
    uStack_618 = (long *)((ulong)uStack_618 & 0xffffffff00000000);
    uStack_610 = 0;
    uStack_608 = (long *)0x0;
    func_0x048b05a0(uStack_5d0,&uStack_668);
    plVar14 = uStack_608;
    if (uStack_608 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_608 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_608 + 0x10))(uStack_608);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0da195e0(&puStack_5d8);
    puVar17 = uStack_508;
    iVar10 = (int)uStack_4e0;
    uVar5 = uStack_4e0._4_4_;
    func_0x048b0bc0(&uStack_5c0);
    uStack_668 = (undefined8 *)((ulong)uStack_668 & 0xffff000000000000);
    if (iVar10 == 4) {
      if ((DAT_0f72f970 == '\0') && (iVar10 = FUN_04108328(&DAT_0f72f970), iVar10 != 0)) {
        func_0x0da18160();
        __cxa_atexit(&UNK_048ae800,&DAT_0f72f8f0,0xf53dab8);
        func_0x0410844d(&DAT_0f72f970);
      }
      plVar14 = (long *)(puVar17[3] +
                        (ulong)((int)((ulong)(puVar17[4] - puVar17[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f72f8f0 + 4)) * 8);
      do {
        lVar16 = *plVar14;
        if (lVar16 == -1) goto LAB_0d916818;
        plVar14 = (long *)(puVar17[6] + lVar16 * 0x18);
      } while (*(uint *)(puVar17[6] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f72f8f0 + 4));
      if (plVar14 == (long *)puVar17[7]) {
LAB_0d916818:
        puVar12 = &DAT_0f72f8f0;
      }
      else {
        puVar12 = (undefined *)plVar14[2];
      }
      puVar12 = (undefined *)func_0x048b1040(puVar17 + 3,puVar12,uVar5,1);
      if (puVar12 == (undefined *)0x0) {
        puStack_5d8 = (undefined *)0x0;
        uStack_5d0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_5d8);
        puVar25 = *(undefined **)(puStack_5d8 + 0x38);
        puVar12 = puStack_5d8;
        if (puVar25 == (undefined *)0x0) goto LAB_0d9168fc;
LAB_0d916921:
        do {
          puVar12 = puVar25;
          puVar25 = *(undefined **)(puVar12 + 0x38);
          if (*(undefined **)(puVar12 + 0x38) == (undefined *)0x0) {
            puStack_5d8 = (undefined *)0x0;
            uStack_5d0 = (undefined8 *)
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
