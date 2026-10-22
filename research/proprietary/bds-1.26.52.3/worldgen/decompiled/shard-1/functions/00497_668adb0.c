/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x678adb0 (ELF vaddr 0x668adb0)
 * Label: caller-of-callee
 * Body:  [[0678adb0, 0678e530] [0678e540, 0678e980] [0678e990, 0678ea6d] [0678ea70, 0678ec83] [0678ec90, 0678f315]]
 * Ghidra: FUN_0678adb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0678adb0(long *param_1)

{
  ulong ***pppuVar1;
  int iVar2;
  ulong *puVar3;
  long *plVar4;
  ulong ****ppppuVar5;
  ulong ****ppppuVar6;
  undefined8 uVar7;
  ulong ****ppppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulong ***pppuVar17;
  long *plVar18;
  ulong uVar19;
  ulong **ppuVar20;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined *puVar31;
  ulong ****ppppuStack_558;
  ulong ****ppppuStack_550;
  undefined8 uStack_548;
  uint uStack_540;
  undefined4 uStack_53c;
  undefined1 auStack_538 [4];
  undefined4 uStack_534;
  undefined8 uStack_530;
  ulong **ppuStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  code *pcStack_510;
  undefined1 auStack_508 [16];
  long *plStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  code *pcStack_4d0;
  long *plStack_4c8;
  long alStack_4c0 [3];
  code *apcStack_4a8 [3];
  code *pcStack_490;
  undefined1 auStack_480 [24];
  code *pcStack_468;
  undefined1 auStack_460 [24];
  code *pcStack_448;
  undefined1 auStack_438 [24];
  code *pcStack_420;
  undefined8 uStack_388;
  undefined8 uStack_380;
  ulong ****ppppuStack_378;
  undefined4 uStack_368;
  undefined1 uStack_364;
  undefined2 uStack_363;
  undefined1 uStack_361;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_35e;
  undefined1 uStack_35d;
  undefined1 uStack_35c;
  undefined1 uStack_35b;
  undefined1 uStack_35a;
  undefined1 uStack_359;
  undefined1 uStack_358;
  undefined1 uStack_357;
  undefined1 uStack_356;
  undefined1 uStack_355;
  undefined1 uStack_354;
  undefined1 uStack_353;
  undefined1 uStack_352;
  undefined1 uStack_351;
  undefined *puStack_350;
  long *plStack_348;
  undefined1 auStack_340 [16];
  undefined1 *apuStack_330 [2];
  undefined *puStack_320;
  code *pcStack_318;
  undefined4 uStack_310;
  undefined1 uStack_30c;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined1 auStack_2f0 [24];
  code *pcStack_2d8;
  undefined1 auStack_2b0 [24];
  code *pcStack_298;
  undefined1 auStack_268 [24];
  code *pcStack_250;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  uint uStack_214;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  long *plStack_1d0;
  ulong **ppuStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_f8;
  uint uStack_ec;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong ***pppuStack_b8;
  ulong ***pppuStack_b0;
  ulong ***pppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong ****ppppuStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong ****ppppuStack_58;
  ulong ****ppppuStack_50;
  ulong uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  ppuStack_528 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (ppuStack_528 == (ulong **)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_01378f8a;
  _auStack_538 = (ulong **)0x21;
  uStack_530 = (ulong **)0x1c;
  *(ulong *)((long)ppuStack_528 + 0xc) = CONCAT44(_UNK_01378f86,_DAT_01378f82);
  *(undefined8 *)((long)ppuStack_528 + 0x14) = uVar7;
  puVar3 = (ulong *)CONCAT44(_DAT_01378f82,_UNK_01378f7e);
  *ppuStack_528 = _DAT_01378f76;
  ppuStack_528[1] = puVar3;
  *(undefined1 *)((long)ppuStack_528 + 0x1c) = 0;
  uStack_1d8 = 0;
  plStack_1d0 = (long *)0x0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  lStack_208 = 0;
  lStack_200 = 0;
  ppuStack_1c8 = (ulong **)0x0;
  func_0x048b1dc0(auStack_1c0);
  func_0x048b1dc0(auStack_1b0);
  uStack_110 = 0;
  lStack_108 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  uStack_150 = 0;
  lStack_148 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  puStack_170 = (undefined8 *)0x0;
  puStack_168 = (undefined8 *)0x0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  if ((uStack_1d8 & 1) == 0) {
    if (((ulong)_auStack_538 & 1) == 0) {
      ppuStack_1c8 = ppuStack_528;
      uStack_1d8 = (ulong)_auStack_538;
      plStack_1d0 = (long *)uStack_530;
    }
    else {
      func_0x04885070(&uStack_1d8,ppuStack_528,uStack_530);
    }
  }
  else {
    plVar14 = (long *)((ulong)_auStack_538 >> 1 & 0x7f);
    ppuVar20 = (ulong **)(auStack_538 + 1);
    if (((ulong)_auStack_538 & 1) != 0) {
      plVar14 = (long *)uStack_530;
      ppuVar20 = ppuStack_528;
    }
    func_0x04885120(&uStack_1d8,ppuVar20,plVar14);
  }
  if (((ulong)_auStack_538 & 1) != 0) {
    func_0x0412a280(ppuStack_528,(ulong)_auStack_538 & 0xfffffffffffffffe);
  }
  lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar26 == 0) {
    func_0x048b0de0(auStack_538,&uStack_368);
    _DAT_0f54fd90 = auStack_538;
    uRam000000000f54fd94 = uStack_534;
    uVar11 = (undefined4)uStack_530;
    uVar30 = uStack_530._4_4_;
    _auStack_538 = (ulong **)0x0;
    uStack_530 = (ulong **)0x0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar11;
    uRam000000000f54fd9c = uVar30;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)uStack_530;
    if (uStack_530 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_530 + 1);
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)((long)*uStack_530 + 0x10))(uStack_530);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f58aed0 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58aed0), iVar13 != 0)) {
    func_0x06852980(0xf58aeb8,lVar26);
    func_0x0410844d(&DAT_0f58aed0);
  }
  if ((DAT_0f58aed0 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58aed0), iVar13 != 0)) {
    func_0x06852980(0xf58aeb8,lVar26);
    func_0x0410844d(&DAT_0f58aed0);
  }
  _auStack_538 = (ulong **)0xf58aeb8;
  uStack_530 = (ulong **)CONCAT44(uStack_530._4_4_,_DAT_0f58aebc);
  ppuStack_528 = (ulong **)0x0;
  uStack_520 = (undefined *)CONCAT44(uStack_520._4_4_,0x80);
  uStack_518 = (long *)0x170;
  pcStack_510 = (code *)&SUB_068528a0;
  auStack_508._0_8_ = 0;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)&UNK_068529f0;
  plStack_4f0 = (long *)0x0;
  uStack_4e8._0_4_ = 0;
  uStack_4e8._4_4_ = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  pcStack_4d0 = (code *)0x0;
  plStack_4c8 = (long *)0x0;
  alStack_4c0[0] = 0;
  func_0x048aee30(&uStack_368,lVar26,auStack_538,0xc8e338c9);
  lVar26 = alStack_4c0[0];
  alStack_4c0[0] = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar14 = plStack_4c8;
  if (plStack_4c8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_4c8 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((DAT_0f58b040 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58b040), iVar13 != 0)) {
    func_0x06823fb0(0xf58b028);
    func_0x0410844d(&DAT_0f58b040);
  }
  auStack_538 = (undefined1  [4])_DAT_0f58b02c;
  uStack_530 = (ulong **)&SUB_06823ec0;
  plVar14 = (long *)uStack_530;
  ppuStack_528 = (ulong **)&UNK_06852b30;
  puVar31 = &UNK_06852b30;
  uStack_530._0_4_ = 0x6823ec0;
  uVar11 = _DAT_0f58b02c;
  uVar30 = (undefined4)uStack_530;
  uStack_530 = (ulong **)plVar14;
  func_0x05da1460(&uStack_368);
  lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar26 == 0) {
    func_0x048b0de0(auStack_538,&uStack_368);
    uRam000000000f54fd94 = uStack_534;
    _DAT_0f54fd90 = auStack_538;
    uVar9 = (undefined4)uStack_530;
    uVar10 = uStack_530._4_4_;
    auStack_538 = (undefined1  [4])0x0;
    uStack_534 = 0;
    uStack_530 = (ulong **)0x0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar10;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)uStack_530;
    if (uStack_530 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_530 + 1);
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)((long)*uStack_530 + 0x10))(uStack_530);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f58ae18 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58ae18), iVar13 != 0)) {
    func_0x06852d40(0xf58ae00,lVar26);
    func_0x0410844d(&DAT_0f58ae18);
  }
  if ((DAT_0f58ae18 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58ae18), iVar13 != 0)) {
    func_0x06852d40(0xf58ae00,lVar26);
    func_0x0410844d(&DAT_0f58ae18);
  }
  _auStack_538 = (ulong **)0xf58ae00;
  uStack_530 = (ulong **)CONCAT44(uStack_530._4_4_,_DAT_0f58ae04);
  ppuStack_528 = (ulong **)0x0;
  uStack_520 = (undefined *)CONCAT44(uStack_520._4_4_,0x280);
  uStack_518 = (long *)0x20;
  pcStack_510 = (code *)&UNK_06852c60;
  auStack_508._0_8_ = 0;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)&UNK_06852db0;
  plStack_4f0 = (long *)0x1;
  uStack_4e8._0_4_ = 0x65b1ed0;
  uStack_4e8._4_4_ = 0;
  uStack_4e0 = 0x6853460;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  pcStack_4d0 = (code *)0x0;
  plStack_4c8 = (long *)0x0;
  alStack_4c0[0] = 0;
  func_0x048aee30(&uStack_368,lVar26,auStack_538,0x7f291cd4,in_R8,in_R9,uVar11,uVar30,puVar31);
  lVar26 = alStack_4c0[0];
  alStack_4c0[0] = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar14 = plStack_4c8;
  if (plStack_4c8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_4c8 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((DAT_0f58af88 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58af88), iVar13 != 0)) {
    func_0x06824c80(0xf58af70);
    func_0x0410844d(&DAT_0f58af88);
  }
  func_0x065ac270(&uStack_368,_DAT_0f58af74,&UNK_06853470);
  lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar26 == 0) {
    func_0x048b0de0(auStack_538,&uStack_368);
    _DAT_0f54fd90 = auStack_538;
    uRam000000000f54fd94 = uStack_534;
    uVar11 = (undefined4)uStack_530;
    uVar30 = uStack_530._4_4_;
    _auStack_538 = (ulong **)0x0;
    uStack_530 = (ulong **)0x0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar11;
    uRam000000000f54fd9c = uVar30;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)uStack_530;
    if (uStack_530 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_530 + 1);
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)((long)*uStack_530 + 0x10))(uStack_530);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f58b670 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58b670), iVar13 != 0)) {
    func_0x06853770(0xf58b658,lVar26);
    func_0x0410844d(&DAT_0f58b670);
  }
  if ((DAT_0f58b670 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58b670), iVar13 != 0)) {
    func_0x06853770(0xf58b658,lVar26);
    func_0x0410844d(&DAT_0f58b670);
  }
  _auStack_538 = (ulong **)0xf58b658;
  uStack_530 = (ulong **)CONCAT44(uStack_530._4_4_,_DAT_0f58b65c);
  ppuStack_528 = (ulong **)0x0;
  uStack_520 = (undefined *)CONCAT44(uStack_520._4_4_,0x280);
  uStack_518 = (long *)0x20;
  pcStack_510 = (code *)&UNK_06853690;
  auStack_508._0_8_ = &UNK_068537e0;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)&UNK_06853b50;
  plStack_4f0 = (long *)0x1;
  uStack_4e8._0_4_ = 0x65bd0c0;
  uStack_4e8._4_4_ = 0;
  uStack_4e0 = 0x6853be0;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  pcStack_4d0 = (code *)0x0;
  plStack_4c8 = (long *)0x0;
  alStack_4c0[0] = 0;
  func_0x048aee30(&uStack_368,lVar26,auStack_538,&UNK_02054d79);
  lVar26 = alStack_4c0[0];
  alStack_4c0[0] = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar14 = plStack_4c8;
  if (plStack_4c8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_4c8 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((DAT_0f58bc70 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58bc70), iVar13 != 0)) {
    func_0x06825d10(0xf58bc58);
    func_0x0410844d(&DAT_0f58bc70);
  }
  func_0x065ac270(&uStack_368,_DAT_0f58bc5c,&UNK_06853bf0);
  lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar26 == 0) {
    func_0x048b0de0(auStack_538,&uStack_368);
    _DAT_0f54fd90 = auStack_538;
    uRam000000000f54fd94 = uStack_534;
    uVar11 = (undefined4)uStack_530;
    uVar30 = uStack_530._4_4_;
    _auStack_538 = (ulong **)0x0;
    uStack_530 = (ulong **)0x0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar11;
    uRam000000000f54fd9c = uVar30;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)uStack_530;
    if (uStack_530 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_530 + 1);
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)((long)*uStack_530 + 0x10))(uStack_530);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f58b5b8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58b5b8), iVar13 != 0)) {
    func_0x06853ed0(0xf58b5a0,lVar26);
    func_0x0410844d(&DAT_0f58b5b8);
  }
  if ((DAT_0f58b5b8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58b5b8), iVar13 != 0)) {
    func_0x06853ed0(0xf58b5a0,lVar26);
    func_0x0410844d(&DAT_0f58b5b8);
  }
  _auStack_538 = (ulong **)0xf58b5a0;
  uStack_530 = (ulong **)CONCAT44(uStack_530._4_4_,_DAT_0f58b5a4);
  ppuStack_528 = (ulong **)0x0;
  uStack_520 = (undefined *)CONCAT44(uStack_520._4_4_,0x280);
  uStack_518 = (long *)0x10;
  pcStack_510 = (code *)&UNK_06853df0;
  auStack_508._0_8_ = &UNK_06853f40;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)&UNK_06854110;
  plStack_4f0 = (long *)0x1;
  uStack_4e8._0_4_ = 0x65bc1f0;
  uStack_4e8._4_4_ = 0;
  uStack_4e0 = 0x68541c0;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  pcStack_4d0 = (code *)0x0;
  plStack_4c8 = (long *)0x0;
  alStack_4c0[0] = 0;
  func_0x048aee30(&uStack_368,lVar26,auStack_538,0xea725d39);
  lVar26 = alStack_4c0[0];
  alStack_4c0[0] = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar14 = plStack_4c8;
  if (plStack_4c8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_4c8 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((DAT_0f58bd28 == '\0') && (iVar13 = func_0x04108328(&DAT_0f58bd28), iVar13 != 0)) {
    func_0x06826900(0xf58bd10);
    func_0x0410844d(&DAT_0f58bd28);
  }
  func_0x065ac270(&uStack_368,_DAT_0f58bd14,&UNK_068541d0);
  auStack_1b0 = func_0x06826e10();
  uStack_368 = 0x74756f18;
  uStack_364 = 0x6c;
  uStack_363 = 0x6e69;
  uStack_361 = 0x65;
  uStack_360 = 0x43;
  uStack_35f = 0x6f;
  uStack_35e = 0x6c;
  uStack_35d = 0x6f;
  uStack_35c = 0x72;
  uStack_35b = 0;
  func_0x065af670(auStack_538);
  lVar26 = (long)&uStack_368 + 1;
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auStack_508 = func_0x067d6080();
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f054b60;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f054bb0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f054c08;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f054c58;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678b91d:
    if (uStack_158 < uStack_150) goto LAB_0678b92f;
LAB_0678b968:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678b91d;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678b968;
LAB_0678b92f:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368 = 0x6c756812;
  uStack_364 = 0x6c;
  uStack_363 = 0x6f43;
  uStack_361 = 0x6c;
  uStack_360 = 0x6f;
  uStack_35f = 0x72;
  uStack_35e = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x067d6080();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f054cb8;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f054d08;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f054d60;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f054db0;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678bba2:
    if (uStack_158 < uStack_150) goto LAB_0678bbb4;
LAB_0678bbed:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678bba2;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678bbed;
LAB_0678bbb4:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368._1_3_ = (undefined3)_DAT_0119d6c8;
  uStack_368 = CONCAT31(uStack_368._1_3_,0x2a);
  uStack_364 = (undefined1)((uint)_DAT_0119d6c8 >> 0x18);
  uStack_363 = (undefined2)_UNK_0119d6cc;
  uStack_361 = (undefined1)((uint)_UNK_0119d6cc >> 0x10);
  uStack_360 = (undefined1)((uint)_UNK_0119d6cc >> 0x18);
  uStack_35f = (undefined1)_UNK_0119d6d0;
  uStack_35e = (undefined1)((uint)_UNK_0119d6d0 >> 8);
  uStack_35d = (undefined1)((uint)_UNK_0119d6d0 >> 0x10);
  uStack_35c = (undefined1)((uint)_UNK_0119d6d0 >> 0x18);
  uStack_35b = (undefined1)_UNK_0119d6d4;
  uStack_35a = 0x69;
  uStack_359 = 0x6e;
  uStack_358 = 0x65;
  uStack_357 = 0x43;
  uStack_356 = 0x6f;
  uStack_355 = 0x6c;
  uStack_354 = 0x6f;
  uStack_353 = 0x72;
  uStack_352 = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x067d6080();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f054e10;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f054e60;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f054eb8;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f054f08;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678be34:
    if (uStack_158 < uStack_150) goto LAB_0678be46;
LAB_0678be7f:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678be34;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678be7f;
LAB_0678be46:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368._1_3_ = (undefined3)_DAT_01272a5a;
  uStack_368 = CONCAT31(uStack_368._1_3_,0x24);
  uStack_364 = (undefined1)((uint)_DAT_01272a5a >> 0x18);
  uStack_363 = (undefined2)_UNK_01272a5e;
  uStack_361 = (undefined1)((uint)_UNK_01272a5e >> 0x10);
  uStack_360 = (undefined1)((uint)_UNK_01272a5e >> 0x18);
  uStack_35f = (undefined1)_UNK_01272a62;
  uStack_35e = (undefined1)((uint)_UNK_01272a62 >> 8);
  uStack_35d = (undefined1)((uint)_UNK_01272a62 >> 0x10);
  uStack_35c = (undefined1)((uint)_UNK_01272a62 >> 0x18);
  uStack_35b = (undefined1)_UNK_01272a66;
  uStack_35a = (undefined1)((uint)_UNK_01272a66 >> 8);
  uStack_359 = (undefined1)((uint)_UNK_01272a66 >> 0x10);
  uStack_358 = (undefined1)((uint)_UNK_01272a66 >> 0x18);
  uStack_357 = 0x6f;
  uStack_356 = 0x72;
  uStack_355 = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x067d6080();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f054f68;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f054fb8;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f055010;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f055060;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678c0be:
    if (uStack_158 < uStack_150) goto LAB_0678c0d0;
LAB_0678c109:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678c0be;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678c109;
LAB_0678c0d0:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368 = 0x6f687316;
  uStack_364 = 0x77;
  uStack_363 = 0x754f;
  uStack_361 = 0x74;
  uStack_360 = 0x6c;
  uStack_35f = 0x69;
  uStack_35e = 0x6e;
  uStack_35d = 0x65;
  uStack_35c = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x0651e0c0();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f0550c0;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f055110;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f055168;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f0551b8;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678c34c:
    if (uStack_158 < uStack_150) goto LAB_0678c35e;
LAB_0678c397:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678c34c;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678c397;
LAB_0678c35e:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368._1_3_ = (undefined3)_DAT_0135ccce;
  uStack_368 = CONCAT31(uStack_368._1_3_,0x28);
  uStack_364 = (undefined1)((uint)_DAT_0135ccce >> 0x18);
  uStack_363 = (undefined2)_UNK_0135ccd2;
  uStack_361 = (undefined1)((uint)_UNK_0135ccd2 >> 0x10);
  uStack_360 = (undefined1)((uint)_UNK_0135ccd2 >> 0x18);
  uStack_35f = (undefined1)_UNK_0135ccd6;
  uStack_35e = (undefined1)((uint)_UNK_0135ccd6 >> 8);
  uStack_35d = (undefined1)((uint)_UNK_0135ccd6 >> 0x10);
  uStack_35c = (undefined1)((uint)_UNK_0135ccd6 >> 0x18);
  uStack_35b = (undefined1)_UNK_0135ccda;
  uStack_35a = (undefined1)((uint)_UNK_0135ccda >> 8);
  uStack_359 = (undefined1)((uint)_UNK_0135ccda >> 0x10);
  uStack_358 = (undefined1)((uint)_UNK_0135ccda >> 0x18);
  uStack_357 = 0x6c;
  uStack_356 = 0x69;
  uStack_355 = 0x6e;
  uStack_354 = 0x65;
  uStack_353 = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x0651e0c0();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f055228;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f055278;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f0552d0;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f055320;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678c5d7:
    if (uStack_158 < uStack_150) goto LAB_0678c5e9;
LAB_0678c622:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678c5d7;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678c622;
LAB_0678c5e9:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368 = 0x746f7210;
  uStack_364 = 0x61;
  uStack_363 = 0x6974;
  uStack_361 = 0x6f;
  uStack_360 = 0x6e;
  uStack_35f = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x06858140();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f055380;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f0553d0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f055428;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f055478;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678c85a:
    if (uStack_158 < uStack_150) goto LAB_0678c86c;
LAB_0678c8a5:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678c85a;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678c8a5;
LAB_0678c86c:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368 = 0x72696d0c;
  uStack_364 = 0x72;
  uStack_363 = 0x726f;
  uStack_361 = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x06859ce0();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f0554e8;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f055538;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f055590;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f0555e0;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678cae0:
    if (uStack_158 < uStack_150) goto LAB_0678caf2;
LAB_0678cb2b:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678cae0;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678cb2b;
LAB_0678caf2:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368 = 0x6c6f7618;
  uStack_364 = 0x75;
  uStack_363 = 0x656d;
  uStack_361 = 0x4f;
  uStack_360 = 0x66;
  uStack_35f = 0x66;
  uStack_35e = 0x73;
  uStack_35d = 0x65;
  uStack_35c = 0x74;
  uStack_35b = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x065f3710();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f055650;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f0556a0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f0556f8;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f055748;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678cd6e:
    if (uStack_158 < uStack_150) goto LAB_0678cd80;
LAB_0678cdb9:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678cd6e;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678cdb9;
LAB_0678cd80:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368._1_3_ = (undefined3)_DAT_013ad0b6;
  uStack_368 = CONCAT31(uStack_368._1_3_,0x20);
  uStack_364 = (undefined1)((uint)_DAT_013ad0b6 >> 0x18);
  uStack_363 = (undefined2)_UNK_013ad0ba;
  uStack_361 = (undefined1)((uint)_UNK_013ad0ba >> 0x10);
  uStack_360 = (undefined1)((uint)_UNK_013ad0ba >> 0x18);
  uStack_35f = (undefined1)_UNK_013ad0be;
  uStack_35e = (undefined1)((uint)_UNK_013ad0be >> 8);
  uStack_35d = (undefined1)((uint)_UNK_013ad0be >> 0x10);
  uStack_35c = (undefined1)((uint)_UNK_013ad0be >> 0x18);
  uStack_35b = (undefined1)_UNK_013ad0c2;
  uStack_35a = (undefined1)((uint)_UNK_013ad0c2 >> 8);
  uStack_359 = (undefined1)((uint)_UNK_013ad0c2 >> 0x10);
  uStack_358 = (undefined1)((uint)_UNK_013ad0c2 >> 0x18);
  uStack_357 = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) == 0;
    lVar25 = CONCAT17(uStack_351,
                      CONCAT16(uStack_352,
                               CONCAT15(uStack_353,
                                        CONCAT14(uStack_354,
                                                 CONCAT13(uStack_355,
                                                          CONCAT12(uStack_356,
                                                                   CONCAT11(uStack_357,uStack_358)))
                                                ))));
    if (bVar28) {
      lVar25 = lVar26;
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (!bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar25,uVar19);
  }
  auVar29 = func_0x065f3710();
  auStack_508 = auVar29;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_4f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f0557b8;
  plStack_4f8 = plVar14 + 4;
  plVar14[10] = 0;
  plVar14[0x10] = 0;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[4] = (long)&UNK_0f055808;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar25 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *plStack_4f0;
      plStack_4f0 = plVar14;
      (**(code **)(lVar25 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar14 = plStack_4f0;
    }
  }
  plStack_4f0 = plVar14;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f055860;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f0558b0;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678cfee:
    if (uStack_158 < uStack_150) goto LAB_0678d000;
LAB_0678d039:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0678cfee;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678d039;
LAB_0678d000:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar25 = uStack_158 - 0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar25);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_368._1_3_ = (undefined3)_DAT_012a6b38;
  uStack_368 = CONCAT31(uStack_368._1_3_,0x2c);
  uStack_364 = (undefined1)((uint)_DAT_012a6b38 >> 0x18);
  uStack_363 = (undefined2)_UNK_012a6b3c;
  uStack_361 = (undefined1)((uint)_UNK_012a6b3c >> 0x10);
  uStack_360 = (undefined1)((uint)_UNK_012a6b3c >> 0x18);
  uStack_35f = (undefined1)_UNK_012a6b40;
  uStack_35e = (undefined1)((uint)_UNK_012a6b40 >> 8);
  uStack_35d = (undefined1)((uint)_UNK_012a6b40 >> 0x10);
  uStack_35c = (undefined1)((uint)_UNK_012a6b40 >> 0x18);
  uStack_35b = (undefined1)_UNK_012a6b44;
  uStack_35a = (undefined1)((uint)_UNK_012a6b44 >> 8);
  uStack_359 = 0x6c;
  uStack_358 = 100;
  uStack_357 = 0x56;
  uStack_356 = 0x6f;
  uStack_355 = 0x6c;
  uStack_354 = 0x75;
  uStack_353 = 0x6d;
  uStack_352 = 0x65;
  uStack_351 = 0;
  func_0x065af670(auStack_538);
  if (((ulong)uStack_520 & 1) == 0) {
    if ((uStack_368 & 1) == 0) {
      pcStack_510 = (code *)CONCAT17(uStack_351,
                                     CONCAT16(uStack_352,
                                              CONCAT15(uStack_353,
                                                       CONCAT14(uStack_354,
                                                                CONCAT13(uStack_355,
                                                                         CONCAT12(uStack_356,
                                                                                  CONCAT11(
                                                  uStack_357,uStack_358)))))));
      uStack_520 = (undefined *)
                   CONCAT44(CONCAT13(uStack_361,CONCAT21(uStack_363,uStack_364)),uStack_368);
      uStack_518 = (long *)CONCAT44(CONCAT13(uStack_359,
                                             CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c))),
                                    CONCAT13(uStack_35d,
                                             CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360))));
    }
    else {
      func_0x04885070(&uStack_520,
                      CONCAT17(uStack_351,
                               CONCAT16(uStack_352,
                                        CONCAT15(uStack_353,
                                                 CONCAT14(uStack_354,
                                                          CONCAT13(uStack_355,
                                                                   CONCAT12(uStack_356,
                                                                            CONCAT11(uStack_357,
                                                                                     uStack_358)))))
                                       )),
                      CONCAT17(uStack_359,
                               CONCAT16(uStack_35a,
                                        CONCAT15(uStack_35b,
                                                 CONCAT14(uStack_35c,
                                                          CONCAT13(uStack_35d,
                                                                   CONCAT12(uStack_35e,
                                                                            CONCAT11(uStack_35f,
                                                                                     uStack_360)))))
                                       )));
    }
  }
  else {
    bVar28 = (uStack_368 & 1) != 0;
    if (bVar28) {
      lVar26 = CONCAT17(uStack_351,
                        CONCAT16(uStack_352,
                                 CONCAT15(uStack_353,
                                          CONCAT14(uStack_354,
                                                   CONCAT13(uStack_355,
                                                            CONCAT12(uStack_356,
                                                                     CONCAT11(uStack_357,uStack_358)
                                                                    ))))));
    }
    uVar19 = (ulong)((byte)uStack_368 >> 1);
    if (bVar28) {
      uVar19 = CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
    }
    func_0x04885120(&uStack_520,lVar26,uVar19);
  }
  auVar29 = func_0x0685e830();
  auStack_508 = auVar29;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f055920;
  uStack_4e8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f055970;
  plVar14 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  uStack_4e0 = SUB84(puVar15,0);
  uStack_4dc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar14 == (long *)0x0) {
LAB_0678d1cc:
    if (uStack_158 < uStack_150) goto LAB_0678d1de;
LAB_0678d217:
    uStack_158 = func_0x065b01f0(&lStack_160,auStack_538);
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 != 0) goto LAB_0678d1cc;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_150 <= uStack_158) goto LAB_0678d217;
LAB_0678d1de:
    uVar19 = uStack_158;
    func_0x065b0410(uStack_158,auStack_538);
    uStack_158 = uVar19 + 0x1b0;
  }
  lVar26 = uStack_158 + -0x1b0;
  func_0x0652dc20(auStack_538);
  func_0x064e40a0(lVar26);
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  uStack_220 = 0x6c6f7616;
  uStack_21c = 0x54656d75;
  uStack_218 = 0x7465536f;
  uStack_214 = uStack_214 & 0xffffff00;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_363 = 0;
  uStack_361 = 0;
  uStack_360 = 0;
  uStack_35f = 0;
  uStack_35e = 0;
  uStack_35d = 0;
  uStack_35c = 0;
  uStack_35b = 0;
  uStack_35a = 0;
  uStack_359 = 0;
  uStack_358 = 0;
  uStack_357 = 0;
  uStack_356 = 0;
  uStack_355 = 0;
  uStack_354 = 0;
  uStack_353 = 0;
  uStack_352 = 0;
  uStack_351 = 0;
  func_0x048b1dc0(&puStack_350);
  func_0x0652b590(auStack_340);
  if ((uStack_368 & 1) == 0) {
    if ((uStack_220 & 1) == 0) {
      uStack_358 = (undefined1)lStack_210;
      uStack_357 = (undefined1)((ulong)lStack_210 >> 8);
      uStack_356 = (undefined1)((ulong)lStack_210 >> 0x10);
      uStack_355 = (undefined1)((ulong)lStack_210 >> 0x18);
      uStack_354 = (undefined1)((ulong)lStack_210 >> 0x20);
      uStack_353 = (undefined1)((ulong)lStack_210 >> 0x28);
      uStack_352 = (undefined1)((ulong)lStack_210 >> 0x30);
      uStack_351 = (undefined1)((ulong)lStack_210 >> 0x38);
      uStack_368 = uStack_220;
      uStack_364 = (undefined1)uStack_21c;
      uStack_363 = (undefined2)((uint)uStack_21c >> 8);
      uStack_361 = (undefined1)((uint)uStack_21c >> 0x18);
      uStack_360 = (undefined1)uStack_218;
      uStack_35f = (undefined1)((uint)uStack_218 >> 8);
      uStack_35e = (undefined1)((uint)uStack_218 >> 0x10);
      uStack_35d = (undefined1)((uint)uStack_218 >> 0x18);
      uStack_35c = (undefined1)uStack_214;
      uStack_35b = (undefined1)(uStack_214 >> 8);
      uStack_35a = (undefined1)(uStack_214 >> 0x10);
      uStack_359 = (undefined1)(uStack_214 >> 0x18);
    }
    else {
      func_0x04885070(&uStack_368,lStack_210,CONCAT44(uStack_214,uStack_218));
    }
  }
  else {
    bVar28 = (uStack_220 & 1) != 0;
    lVar26 = (long)&uStack_220 + 1;
    if (bVar28) {
      lVar26 = lStack_210;
    }
    uVar19 = (ulong)((byte)uStack_220 >> 1);
    if (bVar28) {
      uVar19 = CONCAT44(uStack_214,uStack_218);
    }
    func_0x04885120(&uStack_368,lVar26,uVar19);
  }
  plVar14 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar14 == (long *)0x0) {
    func_0x048b0de0(auStack_538,&puStack_e8);
    _DAT_0f54fd90 = auStack_538;
    uRam000000000f54fd94 = uStack_534;
    uVar11 = (undefined4)uStack_530;
    uVar30 = uStack_530._4_4_;
    _auStack_538 = (ulong **)0x0;
    uStack_530 = (ulong **)0x0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar11;
    uRam000000000f54fd9c = uVar30;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)uStack_530;
    if (uStack_530 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_530 + 1);
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)((long)*uStack_530 + 0x10))(uStack_530);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f587de8 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f587de8);
    if (iVar13 != 0) {
      func_0x06860680();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f587d68,0xf53dab8);
      func_0x0410844d(&DAT_0f587de8);
    }
  }
  plVar18 = (long *)(*plVar14 +
                    (ulong)((int)((ulong)(plVar14[1] - *plVar14) >> 3) - 1U &
                           *(uint *)(_DAT_0f587d68 + 4)) * 8);
  do {
    lVar26 = *plVar18;
    if (lVar26 == -1) goto LAB_0678d450;
    plVar18 = (long *)(plVar14[3] + lVar26 * 0x18);
  } while (*(uint *)(plVar14[3] + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f587d68 + 4));
  if (plVar18 == (long *)plVar14[4]) {
LAB_0678d450:
    puStack_350 = &DAT_0f587d68;
  }
  else {
    puStack_350 = (undefined *)plVar18[2];
  }
  _auStack_538 = (ulong **)((ulong)_auStack_538 & 0xffffffffffffff00);
  pcStack_510 = (code *)((ulong)pcStack_510 & 0xffffffffffffff00);
  plStack_348 = plVar14;
  if (pcStack_318 != (code *)0x0) {
    (*pcStack_318)(apuStack_330);
  }
  puStack_320 = &UNK_06860a70;
  uStack_310 = 0xd80c6660;
  pcStack_318 = (code *)&UNK_06860e00;
  uStack_30c = 1;
  puVar16 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined1 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *puVar16 = 0;
  puVar16[0x28] = 0;
  if ((byte)pcStack_510 == 1) {
    *puVar16 = 0;
    *(undefined4 *)(puVar16 + 0x20) = 0xffffffff;
    uVar11 = (undefined4)uStack_518;
    if (((ulong)uStack_518 & 0xffffffff) != 0xffffffff) {
      puStack_e8 = puVar16;
      (**(code **)(&UNK_0f055a60 + ((ulong)uStack_518 & 0xffffffff) * 8))(&puStack_e8,auStack_538);
      *(undefined4 *)(puVar16 + 0x20) = uVar11;
    }
    puVar16[0x28] = 1;
  }
  puVar31 = puStack_2f8;
  puStack_2f8 = &UNK_068608c0;
  if (puVar31 != &UNK_068608c0) {
    uStack_300 = 0;
  }
  apuStack_330[0] = puVar16;
  if ((((byte)pcStack_510 & 1) != 0) && (((ulong)uStack_518 & 0xffffffff) != 0xffffffff)) {
    (**(code **)(&UNK_0f0559c0 + ((ulong)uStack_518 & 0xffffffff) * 8))(&puStack_e8,auStack_538);
  }
  lStack_d8 = 0;
  uStack_c0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  plStack_98 = (long *)0x0;
  uStack_90 = 0;
  pppuStack_a8 = (ulong ***)0x0;
  plStack_a0 = (long *)0x0;
  pppuStack_b8 = (ulong ***)0x0;
  pppuStack_b0 = (ulong ***)0x0;
  puStack_e8 = (undefined1 *)0x0;
  puStack_e0 = (undefined1 *)0x0;
  uStack_d0 = 0x756c6f5674657312;
  uStack_c8 = 0x656d;
  func_0x06523ef0(auStack_538,auStack_340);
  uStack_388 = (ulong ****)0x0;
  uStack_380 = (ulong ****)0x0;
  ppppuStack_378 = (ulong ****)0x0;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  ppppuStack_78 = (ulong ****)&uStack_388;
  ppppuStack_58 = (ulong ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (ppppuStack_58 == (ulong ****)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  ppppuStack_378 = ppppuStack_58 + 0x23;
  ppppuStack_550 = (ulong ****)&ppppuStack_58;
  uStack_548 = (ulong ****)&ppppuStack_50;
  uStack_540 = uStack_540 & 0xffffff00;
  ppppuStack_558 = (ulong ****)&uStack_388;
  uStack_388 = ppppuStack_58;
  uStack_380 = ppppuStack_58;
  ppppuStack_50 = ppppuStack_58;
  func_0x06523ef0(ppppuStack_58,auStack_538);
  uStack_380 = ppppuStack_50 + 0x23;
  if (pcStack_448 != (code *)0x0) {
    (*pcStack_448)(auStack_460);
  }
  if (pcStack_490 != (code *)0x0) {
    (*pcStack_490)(apcStack_4a8);
  }
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(&uStack_4e8);
  }
  if (pcStack_510 != (code *)0x0) {
    (*pcStack_510)(&ppuStack_528);
  }
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f055ae8;
  plStack_f8 = param_1;
  uVar11 = func_0x0d858500(&uStack_388);
  plVar14 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 0;
  *(undefined4 *)((long)puVar15 + 0x24) = uVar11;
  *(undefined4 *)(puVar15 + 5) = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[8] = 0;
  puVar15[3] = &UNK_0f055b38;
  *(undefined4 *)(puVar15 + 9) = (undefined4)uStack_388;
  *(undefined4 *)((long)puVar15 + 0x4c) = uStack_388._4_4_;
  *(undefined4 *)(puVar15 + 10) = (undefined4)uStack_380;
  *(undefined4 *)((long)puVar15 + 0x54) = uStack_380._4_4_;
  puVar15[0xb] = ppppuStack_378;
  uStack_388 = (ulong ****)0x0;
  uStack_380 = (ulong ****)0x0;
  ppppuStack_378 = (ulong ****)0x0;
  uVar11 = func_0x0d858620(plVar14);
  plVar18 = plStack_98;
  *(undefined4 *)(puVar15 + 5) = uVar11;
  plStack_a0 = plVar14;
  if (plStack_98 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_98 + 1;
    lVar26 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      lVar26 = *plStack_98;
      plStack_98 = puVar15;
      (**(code **)(lVar26 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      goto joined_r0x0678d838;
    }
  }
  lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  plStack_98 = puVar15;
joined_r0x0678d838:
  if (lVar26 == 0) {
    func_0x048b0de0(auStack_538,&ppppuStack_558);
    _DAT_0f54fd90 = auStack_538;
    uRam000000000f54fd94 = uStack_534;
    uVar11 = (undefined4)uStack_530;
    uVar30 = uStack_530._4_4_;
    _auStack_538 = (ulong **)0x0;
    uStack_530 = (ulong **)0x0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar11;
    uRam000000000f54fd9c = uVar30;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)uStack_530;
    if (uStack_530 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_530 + 1);
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)((long)*uStack_530 + 0x10))(uStack_530);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f587e08 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f587e08);
    if (iVar13 != 0) {
      func_0x068607b0();
      func_0x0410844d(&DAT_0f587e08);
    }
  }
  if (DAT_0f587e08 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f587e08);
    if (iVar13 != 0) {
      func_0x068607b0();
      func_0x0410844d(&DAT_0f587e08);
    }
  }
  _auStack_538 = (ulong **)&DAT_0f587df0;
  uStack_530 = (ulong **)CONCAT44(uStack_530._4_4_,_DAT_0f587df4);
  ppuStack_528 = (ulong **)0x0;
  uStack_520 = (undefined *)CONCAT44(uStack_520._4_4_,0x80);
  uStack_518 = (long *)0x30;
  pcStack_510 = (code *)&UNK_068605c0;
  auStack_508._0_8_ = &UNK_06860830;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)&UNK_06862500;
  plStack_4f0 = (long *)0x1;
  uStack_4e8._0_4_ = 0x48b5640;
  uStack_4e8._4_4_ = 0;
  uStack_4e0 = 0x6862590;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  pcStack_4d0 = (code *)0x0;
  plStack_4c8 = (long *)0x0;
  alStack_4c0[0] = 0;
  func_0x048aee30(&ppppuStack_50,lVar26,auStack_538,0xd80c6660);
  lVar26 = alStack_4c0[0];
  alStack_4c0[0] = 0;
  if (lVar26 != 0) {
    FUN_048ae940(lVar26);
    func_0x0412a280(lVar26,0x78);
  }
  plVar14 = plStack_4c8;
  if (plStack_4c8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_4c8 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
      func_0x0412c2d0(plVar14);
    }
  }
  if (DAT_0f587ef0 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f587ef0);
    if (iVar13 != 0) {
      func_0x068636d0();
      func_0x0410844d(&DAT_0f587ef0);
    }
  }
  auStack_538 = (undefined1  [4])_DAT_0f587edc;
  uStack_530 = (ulong **)0x1;
  ppuStack_528 = (ulong **)&UNK_068631f0;
  uStack_520 = &UNK_068632b0;
  func_0x065abe60(&ppppuStack_50);
  uStack_68 = uStack_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  ppppuStack_78 = ppppuStack_50;
  uStack_70 = uStack_48;
  auStack_538 = (undefined1  [4])0xf55160ec;
  uStack_530 = (ulong **)0x0;
  ppuStack_528 = (ulong **)((ulong)ppuStack_528 & 0xffffffff00000000);
  uStack_520 = (undefined *)0x0;
  uStack_518 = (long *)&UNK_065b4120;
  pcStack_510 = (code *)&SUB_048b06d0;
  auStack_508._0_8_ = &UNK_068639f0;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)((ulong)plStack_4f8 & 0xffffffff00000000);
  plStack_4f0 = (long *)0x0;
  uStack_4e8._0_4_ = 0;
  uStack_4e8._4_4_ = 0;
  func_0x049057f0(&ppppuStack_78,auStack_538);
  func_0x048aea50(auStack_538);
  uStack_548 = (ulong ****)CONCAT44(uStack_64,uStack_68);
  uStack_540 = uStack_60;
  uStack_53c = uStack_5c;
  ppppuStack_558 = ppppuStack_78;
  ppppuStack_550 = (ulong ****)uStack_70;
  auStack_538 = (undefined1  [4])0xf55160ec;
  uStack_530 = (ulong **)0x0;
  ppuStack_528._0_4_ = 1;
  uStack_520 = (undefined *)0x0;
  uStack_518 = (long *)&UNK_065b4120;
  pcStack_510 = (code *)&SUB_048b06d0;
  auStack_508._0_8_ = &UNK_06863ca0;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)((ulong)plStack_4f8 & 0xffffffff00000000);
  plStack_4f0 = (long *)0x0;
  uStack_4e8._0_4_ = 0;
  uStack_4e8._4_4_ = 0;
  func_0x049057f0(&ppppuStack_558,auStack_538);
  func_0x048aea50(auStack_538);
  func_0x06863f40(&ppppuStack_78);
  auStack_538 = (undefined1  [4])0xf55160ec;
  uStack_530 = (ulong **)0x0;
  ppuStack_528._0_4_ = 0;
  uStack_520 = (undefined *)0x0;
  uStack_518 = (long *)&UNK_065b4120;
  pcStack_510 = (code *)&SUB_048b06d0;
  auStack_508._0_8_ = &UNK_068641a0;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)((ulong)plStack_4f8 & 0xffffffff00000000);
  plStack_4f0 = (long *)0x0;
  uStack_4e8._0_4_ = 0;
  uStack_4e8._4_4_ = 0;
  func_0x049057f0(&ppppuStack_78,auStack_538);
  func_0x048aea50(auStack_538);
  uStack_548 = (ulong ****)CONCAT44(uStack_64,uStack_68);
  uStack_540 = uStack_60;
  uStack_53c = uStack_5c;
  ppppuStack_558 = ppppuStack_78;
  ppppuStack_550 = (ulong ****)uStack_70;
  _auStack_538 = (ulong **)CONCAT44(uStack_534,0xf55160ec);
  uStack_530 = (ulong **)0x0;
  ppuStack_528 = (ulong **)CONCAT44(ppuStack_528._4_4_,1);
  uStack_520 = (undefined *)0x0;
  uStack_518 = (long *)&UNK_065b4120;
  pcStack_510 = (code *)&SUB_048b06d0;
  auStack_508._0_8_ = &UNK_068645d0;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)((ulong)plStack_4f8 & 0xffffffff00000000);
  plStack_4f0 = (long *)0x0;
  uStack_4e8._0_4_ = 0;
  uStack_4e8._4_4_ = 0;
  func_0x049057f0(&ppppuStack_558,auStack_538);
  func_0x048aea50(auStack_538);
  func_0x06863f40(&ppppuStack_558);
  if (DAT_0f57bf90 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f57bf90);
    if (iVar13 != 0) {
      func_0x065e0760(0xf57bf78);
      func_0x0410844d(&DAT_0f57bf90);
    }
  }
  _auStack_538 = (ulong **)CONCAT44(uStack_534,_DAT_0f57bf7c);
  uStack_530 = (ulong **)0x1;
  ppuStack_528 = (ulong **)&UNK_065e06a0;
  uStack_520 = &UNK_06864a00;
  func_0x065abe60(&ppppuStack_558);
  func_0x06863f40(&ppppuStack_558);
  if (DAT_0f589730 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f589730);
    if (iVar13 != 0) {
      func_0x068651b0(0xf589718);
      func_0x0410844d(&DAT_0f589730);
    }
  }
  _auStack_538 = (ulong **)CONCAT44(uStack_534,_DAT_0f58971c);
  uStack_530 = (ulong **)0x1;
  ppuStack_528 = (ulong **)&UNK_06864dd0;
  uStack_520 = &UNK_06864de0;
  func_0x065abe60(&ppppuStack_558);
  func_0x06863f40(&ppppuStack_558);
  if (DAT_0f57bfc0 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f57bfc0);
    if (iVar13 != 0) {
      func_0x065dff60(0xf57bfa8);
      func_0x0410844d(&DAT_0f57bfc0);
    }
  }
  _auStack_538 = (ulong **)CONCAT44(uStack_534,_DAT_0f57bfac);
  uStack_530 = (ulong **)0x1;
  ppuStack_528 = (ulong **)&UNK_065dfea0;
  uStack_520 = &UNK_068654b0;
  func_0x065abe60(&ppppuStack_558);
  func_0x06863f40(&ppppuStack_558);
  if (DAT_0f589760 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f589760);
    if (iVar13 != 0) {
      func_0x06865c70(0xf589748);
      func_0x0410844d(&DAT_0f589760);
    }
  }
  _auStack_538 = (ulong **)CONCAT44(uStack_534,_DAT_0f58974c);
  uStack_530 = (ulong **)0x1;
  ppuStack_528 = (ulong **)&UNK_0637ddc0;
  uStack_520 = &UNK_06865880;
  func_0x065abe60(&ppppuStack_558);
  func_0x06863f40(&ppppuStack_558);
  if (DAT_0f57dcc0 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f57dcc0);
    if (iVar13 != 0) {
      func_0x065f29b0(0xf57dca8);
      func_0x0410844d(&DAT_0f57dcc0);
    }
  }
  _auStack_538 = (ulong **)CONCAT44(uStack_534,_DAT_0f57dcac);
  uStack_530 = (ulong **)0x1;
  ppuStack_528 = (ulong **)&UNK_05da29c0;
  uStack_520 = &UNK_06865ce0;
  func_0x065abe60(&ppppuStack_558);
  ppuStack_528 = (ulong **)
                 CONCAT17(uStack_351,
                          CONCAT16(uStack_352,
                                   CONCAT15(uStack_353,
                                            CONCAT14(uStack_354,
                                                     CONCAT13(uStack_355,
                                                              CONCAT12(uStack_356,
                                                                       CONCAT11(uStack_357,
                                                                                uStack_358)))))));
  _auStack_538 = (ulong **)CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368)))
  ;
  uStack_530 = (ulong **)
               CONCAT17(uStack_359,
                        CONCAT16(uStack_35a,
                                 CONCAT15(uStack_35b,
                                          CONCAT14(uStack_35c,
                                                   CONCAT13(uStack_35d,
                                                            CONCAT12(uStack_35e,
                                                                     CONCAT11(uStack_35f,uStack_360)
                                                                    ))))));
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_363 = 0;
  uStack_361 = 0;
  uStack_360 = 0;
  uStack_35f = 0;
  uStack_35e = 0;
  uStack_35d = 0;
  uStack_35c = 0;
  uStack_35b = 0;
  uStack_35a = 0;
  uStack_359 = 0;
  uStack_358 = 0;
  uStack_357 = 0;
  uStack_356 = 0;
  uStack_355 = 0;
  uStack_354 = 0;
  uStack_353 = 0;
  uStack_352 = 0;
  uStack_351 = 0;
  uStack_520 = puStack_350;
  uStack_518 = plStack_348;
  func_0x065281f0(&pcStack_510,auStack_340);
  ppppuStack_558 = (ulong ****)0x0;
  ppppuStack_550 = (ulong ****)0x0;
  uStack_548 = (ulong ****)0x0;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  ppppuStack_78 = (ulong ****)&ppppuStack_558;
  pppuVar17 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (pppuVar17 == (ulong ***)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  pppuVar1 = pppuVar17 + 0x28;
  ppppuStack_558 = (ulong ****)pppuVar17;
  uStack_548 = (ulong ****)pppuVar1;
  if (((ulong)_auStack_538 & 1) == 0) {
    pppuVar17[2] = ppuStack_528;
    *pppuVar17 = _auStack_538;
    pppuVar17[1] = uStack_530;
    ppppuStack_550 = (ulong ****)pppuVar17;
  }
  else {
    ppppuStack_550 = (ulong ****)pppuVar17;
    func_0x0412e5e0(pppuVar17,ppuStack_528,uStack_530);
  }
  *(undefined4 *)(pppuVar17 + 3) = (undefined4)uStack_520;
  *(undefined4 *)((long)pppuVar17 + 0x1c) = uStack_520._4_4_;
  *(undefined4 *)(pppuVar17 + 4) = (undefined4)uStack_518;
  *(undefined4 *)((long)pppuVar17 + 0x24) = uStack_518._4_4_;
  func_0x06523ef0(pppuVar17 + 5,&pcStack_510);
  ppppuStack_550 = (ulong ****)pppuVar1;
  if (pcStack_420 != (code *)0x0) {
    (*pcStack_420)(auStack_438);
  }
  if (pcStack_468 != (code *)0x0) {
    (*pcStack_468)(auStack_480);
  }
  if (apcStack_4a8[0] != (code *)0x0) {
    (*apcStack_4a8[0])(alStack_4c0);
  }
  if ((code *)CONCAT44(uStack_4e8._4_4_,(undefined4)uStack_4e8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_4e8._4_4_,(undefined4)uStack_4e8))(auStack_508 + 8);
  }
  if (((ulong)_auStack_538 & 1) != 0) {
    func_0x0412a280(ppuStack_528,(ulong)_auStack_538 & 0xfffffffffffffffe);
  }
  uVar12 = (**(code **)(*plStack_a0 + 0x20))();
  uVar21 = ((long)ppppuStack_550 - (long)ppppuStack_558 >> 6) * -0x3333333333333333;
  uVar19 = 0;
  if ((uVar12 != 0) && ((uint)uVar21 != 0)) {
    uVar24 = 0;
    uVar19 = 0;
    uStack_ec = uVar12;
    do {
      auVar29 = (**(code **)(*plStack_a0 + 0x28))(plStack_a0,uVar24);
      ppuVar20 = auVar29._8_8_;
      lVar26 = auVar29._0_8_;
      auVar29 = func_0x06527d70();
      if (auVar29._8_8_ == ppuVar20) {
        if (auVar29._0_8_ == 0) {
          lVar25 = FUN_048aead0(auVar29._8_8_);
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar26 != 0) goto LAB_0678e091;
LAB_0678e0ae:
          lVar25 = FUN_048aead0(ppuVar20);
          if (iVar13 != *(int *)(lVar25 + 8)) goto LAB_0678e0c0;
        }
        else {
          iVar13 = *(int *)(auVar29._0_8_ + 8);
          if (lVar26 == 0) goto LAB_0678e0ae;
LAB_0678e091:
          if (iVar13 != *(int *)(lVar26 + 8)) goto LAB_0678e0c0;
        }
      }
      else {
LAB_0678e0c0:
        auVar29 = func_0x06527e30();
        if (auVar29._8_8_ == ppuVar20) {
          if (auVar29._0_8_ == 0) {
            lVar25 = FUN_048aead0(auVar29._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar29._0_8_ + 8);
          }
          if (lVar26 == 0) {
            lVar25 = FUN_048aead0(ppuVar20);
            iVar2 = *(int *)(lVar25 + 8);
          }
          else {
            iVar2 = *(int *)(lVar26 + 8);
          }
          if (iVar13 == iVar2) goto LAB_0678e2b3;
        }
        auVar29 = func_0x06527ef0();
        if (auVar29._8_8_ == ppuVar20) {
          if (auVar29._0_8_ == 0) {
            lVar25 = FUN_048aead0(auVar29._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar29._0_8_ + 8);
          }
          if (lVar26 == 0) {
            lVar25 = FUN_048aead0(ppuVar20);
            iVar2 = *(int *)(lVar25 + 8);
          }
          else {
            iVar2 = *(int *)(lVar26 + 8);
          }
          if (iVar13 == iVar2) goto LAB_0678e2b3;
        }
        auVar29 = func_0x06527fb0();
        if (auVar29._8_8_ == ppuVar20) {
          if (auVar29._0_8_ == 0) {
            lVar25 = FUN_048aead0(auVar29._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar29._0_8_ + 8);
          }
          if (lVar26 == 0) {
            lVar25 = FUN_048aead0(ppuVar20);
            iVar2 = *(int *)(lVar25 + 8);
          }
          else {
            iVar2 = *(int *)(lVar26 + 8);
          }
          if (iVar13 == iVar2) goto LAB_0678e2b3;
        }
        auVar29 = func_0x06528070();
        if (auVar29._8_8_ == ppuVar20) {
          if (auVar29._0_8_ == 0) {
            lVar25 = FUN_048aead0(auVar29._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar29._0_8_ + 8);
          }
          if (lVar26 == 0) {
            lVar25 = FUN_048aead0(ppuVar20);
            iVar2 = *(int *)(lVar25 + 8);
          }
          else {
            iVar2 = *(int *)(lVar26 + 8);
          }
          if (iVar13 == iVar2) goto LAB_0678e2b3;
        }
        auVar29 = func_0x06528130();
        if (auVar29._8_8_ == ppuVar20) {
          if (auVar29._0_8_ == 0) {
            lVar25 = FUN_048aead0(auVar29._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar29._0_8_ + 8);
          }
          if (lVar26 == 0) {
            lVar25 = FUN_048aead0(ppuVar20);
            iVar2 = *(int *)(lVar25 + 8);
          }
          else {
            iVar2 = *(int *)(lVar26 + 8);
          }
          if (iVar13 == iVar2) goto LAB_0678e2b3;
        }
        ppppuVar5 = ppppuStack_558;
        ppppuVar6 = ppppuStack_550;
        if (ppppuStack_558[uVar19 * 0x28 + 4] != (ulong ***)ppuVar20) goto joined_r0x0678e4cd;
        if (ppppuStack_558[uVar19 * 0x28 + 3] == (ulong ***)0x0) {
          lVar25 = FUN_048aead0();
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar26 != 0) goto LAB_0678e284;
LAB_0678e29c:
          lVar26 = FUN_048aead0(ppuVar20);
          if (iVar13 != *(int *)(lVar26 + 8)) goto LAB_0678e4bd;
        }
        else {
          iVar13 = *(int *)(ppppuStack_558[uVar19 * 0x28 + 3] + 1);
          if (lVar26 == 0) goto LAB_0678e29c;
LAB_0678e284:
          if (iVar13 != *(int *)(lVar26 + 8)) goto LAB_0678e4bd;
        }
        uVar19 = (ulong)((int)uVar19 + 1);
      }
LAB_0678e2b3:
    } while (((uint)uVar19 < (uint)uVar21) && (uVar24 = uVar24 + 1, uVar24 < uStack_ec));
    uVar21 = ((long)ppppuStack_550 - (long)ppppuStack_558 >> 6) * -0x3333333333333333;
  }
  pppuVar17 = pppuStack_b8;
  if (uVar21 == uVar19) {
    pppuVar1 = pppuStack_b0;
    if (pppuStack_b8 != (ulong ***)0x0) {
      while (pppuVar17 != pppuVar1) {
        func_0x05fe8450(pppuVar1 + -0x28);
        pppuVar1 = pppuVar1 + -0x28;
      }
      pppuStack_b0 = pppuVar17;
      func_0x0412a280(pppuStack_b8,(long)pppuStack_a8 - (long)pppuStack_b8);
    }
    pppuStack_a8 = (ulong ***)uStack_548;
    if (puStack_170 < puStack_168) {
      *puStack_170 = 0;
      puStack_170[1] = 0;
      puStack_170[2] = 0;
      *puStack_170 = puStack_e8;
      puStack_170[1] = puStack_e0;
      puStack_170[2] = lStack_d8;
      puStack_e8 = (undefined1 *)0x0;
      puStack_e0 = (undefined1 *)0x0;
      lStack_d8 = 0;
      puStack_170[5] = uStack_c0;
      puStack_170[3] = uStack_d0;
      puStack_170[4] = uStack_c8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      puStack_170[6] = 0;
      puStack_170[7] = 0;
      puStack_170[8] = 0;
      puStack_170[6] = ppppuStack_558;
      puStack_170[7] = ppppuStack_550;
      puStack_170[8] = uStack_548;
      pppuStack_b8 = (ulong ***)0x0;
      pppuStack_b0 = (ulong ***)0x0;
      pppuStack_a8 = (ulong ***)0x0;
      puStack_170[9] = plStack_a0;
      puStack_170[10] = plStack_98;
      plStack_a0 = (long *)0x0;
      plStack_98 = (undefined8 *)0x0;
      puStack_170[0xb] = 0;
      puStack_170[0xc] = 0;
      puStack_170[0xd] = 0;
      puStack_170[0xb] = uStack_90;
      puStack_170[0xc] = uStack_88;
      puStack_170[0xd] = uStack_80;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      puStack_170 = puStack_170 + 0xe;
    }
    else {
      pppuStack_b8 = (ulong ***)ppppuStack_558;
      pppuStack_b0 = (ulong ***)ppppuStack_550;
      puStack_170 = (undefined8 *)func_0x0652ac80(&lStack_178,&puStack_e8);
    }
    puVar15 = puStack_170 + -0xe;
    lVar26 = (long)uStack_388;
    plVar14 = plStack_f8;
  }
  else {
LAB_0678e4bd:
    ppppuVar5 = ppppuStack_558;
    ppppuVar6 = ppppuStack_550;
    if (ppppuStack_558 != (ulong ****)0x0) {
joined_r0x0678e4cd:
      while (ppppuVar8 = ppppuStack_558, ppppuStack_558 != ppppuVar6) {
        ppppuStack_558 = ppppuVar5;
        func_0x05fe8450(ppppuVar6 + -0x28);
        ppppuVar5 = ppppuStack_558;
        ppppuVar6 = ppppuVar6 + -0x28;
        ppppuStack_558 = ppppuVar8;
      }
      ppppuStack_550 = ppppuStack_558;
      ppppuStack_558 = ppppuVar5;
      func_0x0412a280(ppppuVar5,(long)uStack_548 - (long)ppppuVar5);
    }
    puVar15 = (undefined8 *)0xf5856b0;
    lVar26 = (long)uStack_388;
    plVar14 = plStack_f8;
  }
  uStack_388 = (ulong ****)lVar26;
  plStack_f8 = plVar14;
  if (lVar26 != 0) {
    if ((ulong ****)lVar26 != uStack_380) {
      lVar25 = (long)uStack_380 + -0x40;
      do {
        if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
          (**(code **)(lVar25 + 0x18))(lVar25);
        }
        if (*(code **)(lVar25 + -0x30) != (code *)0x0) {
          (**(code **)(lVar25 + -0x30))(lVar25 + -0x48);
        }
        if (*(code **)(lVar25 + -0x70) != (code *)0x0) {
          (**(code **)(lVar25 + -0x70))(lVar25 + -0x88);
        }
        if (*(code **)(lVar25 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar25 + -0xb0))(lVar25 + -200);
        }
        lVar27 = lVar25 + -0xd8;
        lVar25 = lVar25 + -0x118;
      } while (lVar27 != lVar26);
    }
    uStack_380 = (ulong ****)lVar26;
    func_0x0412a280(uStack_388,(long)ppppuStack_378 - (long)uStack_388);
  }
  func_0x05f93280(&puStack_e8);
  func_0x064e40a0(puVar15);
  if (pcStack_250 != (code *)0x0) {
    (*pcStack_250)(auStack_268);
  }
  if (pcStack_298 != (code *)0x0) {
    (*pcStack_298)(auStack_2b0);
  }
  if (pcStack_2d8 != (code *)0x0) {
    (*pcStack_2d8)(auStack_2f0);
  }
  if (pcStack_318 != (code *)0x0) {
    (*pcStack_318)(apuStack_330);
  }
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_351,
                             CONCAT16(uStack_352,
                                      CONCAT15(uStack_353,
                                               CONCAT14(uStack_354,
                                                        CONCAT13(uStack_355,
                                                                 CONCAT12(uStack_356,
                                                                          CONCAT11(uStack_357,
                                                                                   uStack_358)))))))
                    ,CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))) &
                     0xfffffffffffffffe);
  }
  if ((uStack_220 & 1) != 0) {
    func_0x0412a280(lStack_210,CONCAT44(uStack_21c,uStack_220) & 0xfffffffffffffffe);
  }
  ppuStack_528 = (ulong **)0x0;
  pcStack_510 = (code *)0x0;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  pcStack_4d0 = (code *)0x0;
  uStack_4e8._0_4_ = 0;
  uStack_4e8._4_4_ = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  plStack_4f8 = (long *)0x0;
  plStack_4f0 = (long *)0x0;
  auStack_508._0_8_ = 0;
  auStack_508._8_8_ = 0;
  _auStack_538 = (ulong **)0x0;
  uStack_530 = (ulong **)0x0;
  uStack_520 = (undefined *)0x756c6f5674656712;
  uStack_518 = (long *)0x656d;
  puStack_e8 = (undefined1 *)0x0;
  puStack_e0 = (undefined1 *)0x0;
  lStack_d8 = 0;
  func_0x06865fb0();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f055c08;
  uVar11 = func_0x0d858500(&puStack_e8);
  plVar18 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 0;
  *(undefined4 *)((long)puVar15 + 0x24) = uVar11;
  *(undefined4 *)(puVar15 + 5) = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[8] = 0;
  puVar15[3] = &UNK_0f055c58;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  puStack_e8 = (undefined1 *)0x0;
  puStack_e0 = (undefined1 *)0x0;
  lStack_d8 = 0;
  uVar11 = func_0x0d858620(plVar18);
  *(undefined4 *)(puVar15 + 5) = uVar11;
  plVar4 = (long *)CONCAT44(uStack_4e8._4_4_,(undefined4)uStack_4e8);
  uStack_4e8._0_4_ = SUB84(puVar15,0);
  uStack_4e8._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  plStack_4f0 = plVar18;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar18 = plVar4 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_363 = 0;
  uStack_361 = 0;
  uStack_360 = 0;
  uStack_35f = 0;
  uStack_35e = 0;
  uStack_35d = 0;
  uStack_35c = 0;
  uStack_35b = 0;
  uStack_35a = 0;
  uStack_359 = 0;
  uStack_358 = 0;
  uStack_357 = 0;
  uStack_356 = 0;
  uStack_355 = 0;
  uStack_354 = 0;
  uStack_353 = 0;
  uStack_352 = 0;
  uStack_351 = 0;
  (**(code **)(*plStack_4f0 + 0x20))();
  uVar7 = auStack_508._0_8_;
  lVar26 = auStack_508._8_8_;
  if (auStack_508._0_8_ != 0) {
    while (uVar7 != lVar26) {
      func_0x05fe8450(lVar26 + -0x140);
      lVar26 = lVar26 + -0x140;
    }
    auStack_508._8_8_ = uVar7;
    func_0x0412a280(auStack_508._0_8_,(long)plStack_4f8 - auStack_508._0_8_);
  }
  auStack_508._0_8_ = 0;
  auStack_508._8_8_ = 0;
  plStack_4f8 = (long *)0x0;
  if (puStack_170 < puStack_168) {
    *puStack_170 = 0;
    puStack_170[1] = 0;
    puStack_170[2] = 0;
    *puStack_170 = _auStack_538;
    puStack_170[1] = uStack_530;
    puStack_170[2] = ppuStack_528;
    _auStack_538 = (ulong **)0x0;
    uStack_530 = (ulong **)0x0;
    ppuStack_528 = (ulong **)0x0;
    puStack_170[5] = pcStack_510;
    puStack_170[3] = uStack_520;
    puStack_170[4] = uStack_518;
    uStack_520 = (undefined *)0x0;
    uStack_518 = (long *)0x0;
    pcStack_510 = (code *)0x0;
    puStack_170[6] = 0;
    puStack_170[7] = 0;
    puStack_170[8] = 0;
    puStack_170[6] = 0;
    puStack_170[7] = 0;
    puStack_170[8] = 0;
    auStack_508._0_8_ = 0;
    auStack_508._8_8_ = 0;
    plStack_4f8 = (long *)0x0;
    puStack_170[9] = plStack_4f0;
    puStack_170[10] = CONCAT44(uStack_4e8._4_4_,(undefined4)uStack_4e8);
    plStack_4f0 = (long *)0x0;
    uStack_4e8._0_4_ = 0;
    uStack_4e8._4_4_ = 0;
    puStack_170[0xb] = 0;
    puStack_170[0xc] = 0;
    puStack_170[0xd] = 0;
    puStack_170[0xb] = CONCAT44(uStack_4dc,uStack_4e0);
    puStack_170[0xc] = CONCAT44(uStack_4d4,uStack_4d8);
    puStack_170[0xd] = pcStack_4d0;
    uStack_4e0 = 0;
    uStack_4dc = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    pcStack_4d0 = (code *)0x0;
    puVar15 = puStack_170 + 0xe;
    puVar16 = puStack_e8;
  }
  else {
    puVar15 = (undefined8 *)func_0x0652ac80(&lStack_178,auStack_538);
    puVar16 = puStack_e8;
  }
  puStack_170 = puVar15;
  puStack_e8 = puVar16;
  if (puVar16 != (undefined1 *)0x0) {
    if (puVar16 != puStack_e0) {
      puVar23 = puStack_e0 + -0x40;
      do {
        if (*(code **)(puVar23 + 0x18) != (code *)0x0) {
          (**(code **)(puVar23 + 0x18))(puVar23);
        }
        if (*(code **)(puVar23 + -0x30) != (code *)0x0) {
          (**(code **)(puVar23 + -0x30))(puVar23 + -0x48);
        }
        if (*(code **)(puVar23 + -0x70) != (code *)0x0) {
          (**(code **)(puVar23 + -0x70))(puVar23 + -0x88);
        }
        if (*(code **)(puVar23 + -0xb0) != (code *)0x0) {
          (**(code **)(puVar23 + -0xb0))(puVar23 + -200);
        }
        puVar22 = puVar23 + -0xd8;
        puVar23 = puVar23 + -0x118;
      } while (puVar22 != puVar16);
    }
    func_0x0412a280(puStack_e8,lStack_d8 - (long)puStack_e8);
  }
  func_0x05f93280(auStack_538);
  func_0x064e40a0(puVar15 + -0xe);
  func_0x064e40a0(&lStack_208);
  auStack_1c0 = func_0x068549c0();
  lVar25 = lStack_1f0;
  lVar26 = lStack_1e8;
  if (lStack_1f0 != 0) {
    for (; lVar25 != lVar26; lVar26 = lVar26 + -0x30) {
      if ((*(byte *)(lVar26 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar26 + -0x10),
                        *(ulong *)(lVar26 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_1e8 = lVar25;
    func_0x0412a280(lStack_1f0,lStack_1e0 - lStack_1f0);
  }
  lVar27 = lStack_1f8;
  lVar25 = lStack_200;
  lVar26 = lStack_208;
  lStack_208 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  *plVar14 = lVar26;
  plVar14[1] = lVar25;
  plVar14[2] = lVar27;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  plVar14[5] = (long)ppuStack_1c8;
  plVar14[3] = uStack_1d8;
  plVar14[4] = (long)plStack_1d0;
  uStack_1d8 = 0;
  plStack_1d0 = (long *)0x0;
  ppuStack_1c8 = (ulong **)0x0;
  *(undefined4 *)(plVar14 + 8) = auStack_1b0._0_4_;
  *(undefined4 *)((long)plVar14 + 0x44) = auStack_1b0._4_4_;
  *(undefined4 *)(plVar14 + 9) = auStack_1b0._8_4_;
  *(undefined4 *)((long)plVar14 + 0x4c) = auStack_1b0._12_4_;
  *(undefined1 (*) [16])(plVar14 + 6) = auStack_1c0;
  plVar14[10] = lStack_1a0;
  plVar14[0xb] = lStack_198;
  plVar14[0xc] = lStack_190;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  plVar14[0xd] = lStack_188;
  plVar14[0xe] = lStack_180;
  lStack_188 = 0;
  lStack_180 = 0;
  plVar14[0xf] = lStack_178;
  plVar14[0x10] = (long)puStack_170;
  plVar14[0x11] = (long)puStack_168;
  lStack_178 = 0;
  puStack_170 = (undefined8 *)0x0;
  puStack_168 = (undefined8 *)0x0;
  plVar14[0x12] = lStack_160;
  plVar14[0x13] = uStack_158;
  plVar14[0x14] = uStack_150;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  plVar14[0x15] = lStack_148;
  plVar14[0x16] = lStack_140;
  plVar14[0x17] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  plVar14[0x18] = lStack_130;
  plVar14[0x19] = lStack_128;
  plVar14[0x1a] = lStack_120;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  *(undefined4 *)(plVar14 + 0x1b) = (undefined4)uStack_118;
  *(undefined4 *)((long)plVar14 + 0xdc) = uStack_118._4_4_;
  *(undefined4 *)(plVar14 + 0x1c) = (undefined4)uStack_110;
  *(undefined4 *)((long)plVar14 + 0xe4) = uStack_110._4_4_;
  plVar14[0x1d] = lStack_108;
  uStack_118 = 0;
  uStack_110 = 0;
  lStack_108 = 0;
  func_0x0651ffe0(&lStack_1f0);
  lVar25 = lStack_208;
  lVar26 = lStack_200;
  if (lStack_208 != 0) {
    for (; lVar25 != lVar26; lVar26 = lVar26 + -0x30) {
      if ((*(byte *)(lVar26 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar26 + -0x10),
                        *(ulong *)(lVar26 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_200 = lVar25;
    func_0x0412a280(lStack_208,lStack_1f8 - lStack_208);
  }
  return plVar14;
}



/* ---- referenced strings ----
 * 0x119d6c8  highlightOutlineColor
 * 0x1272a5a  highlightHullColor
 * 0x12a6b38  transformedWorldVolume
 * 0x135ccce  showHighlightOutline
 * 0x1378f76  WidgetComponentVolumeOutline
 * 0x1378f82  entVolumeOutline
 * 0x13ad0b6  normalizedOrigin
 */
