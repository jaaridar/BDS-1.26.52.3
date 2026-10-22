/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa340ca0 (ELF vaddr 0xa240ca0)
 * Label: caller-of-callee
 * Body:  [[0a340ca0, 0a341d82] [0a341d90, 0a3429d3] [0a3429e0, 0a342ea0] [0a342eb0, 0a343035]]
 * Ghidra: FUN_0a340ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a340ca0(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  uint uStack_7c0;
  undefined4 uStack_7bc;
  undefined8 *puStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
  uint uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  long lStack_770;
  long lStack_768;
  byte bStack_760;
  undefined4 uStack_75f;
  undefined4 uStack_75b;
  undefined4 uStack_757;
  undefined4 uStack_753;
  undefined4 uStack_74f;
  undefined1 uStack_74b;
  undefined2 uStack_74a;
  undefined4 uStack_748;
  undefined4 uStack_744;
  byte bStack_740;
  undefined4 uStack_73f;
  undefined4 uStack_73b;
  undefined4 uStack_737;
  undefined4 uStack_733;
  undefined4 uStack_72f;
  undefined1 uStack_72b;
  undefined2 uStack_72a;
  undefined8 *puStack_728;
  undefined8 *puStack_720;
  byte *pbStack_718;
  ulong uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long *plStack_6b0;
  undefined4 uStack_6a8;
  undefined2 uStack_6a4;
  uint uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined8 uStack_690;
  undefined4 uStack_688;
  undefined2 uStack_684;
  uint uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined8 uStack_670;
  undefined4 uStack_668;
  undefined2 uStack_664;
  uint uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined8 uStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_608;
  undefined1 auStack_600 [16];
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long lStack_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined1 uStack_528;
  undefined1 uStack_527;
  undefined2 uStack_526;
  undefined4 uStack_524;
  undefined8 uStack_520;
  undefined8 uStack_518;
  code *pcStack_510;
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined8 uStack_4f0;
  code *apcStack_4e8 [3];
  code *pcStack_4d0;
  undefined1 auStack_4c0 [24];
  code *apcStack_4a8 [3];
  code *pcStack_490;
  undefined1 auStack_480 [24];
  code *pcStack_468;
  undefined1 auStack_460 [24];
  code *pcStack_448;
  undefined1 auStack_438 [24];
  code *apcStack_420 [2];
  undefined1 auStack_410 [24];
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [8];
  code *pcStack_3b8;
  code *pcStack_3a8;
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [8];
  code *pcStack_378;
  code *pcStack_368;
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [16];
  code *pcStack_330;
  code *pcStack_328;
  undefined1 auStack_2f8 [24];
  code *pcStack_2e0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long *plStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_240 [24];
  code *pcStack_228;
  undefined1 auStack_200 [24];
  code *pcStack_1e8;
  undefined1 auStack_1b8 [24];
  code *pcStack_1a0;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  code *pcStack_128;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  
  uStack_538 = CONCAT31((int3)_DAT_013815a9,0x20);
  uStack_534 = (undefined4)((ulong)_DAT_013815a9 >> 0x18);
  uStack_530._0_1_ = (undefined1)((ulong)_DAT_013815a9 >> 0x38);
  uStack_530._1_3_ = (undefined3)_UNK_013815b1;
  uStack_52c = (undefined4)((ulong)_UNK_013815b1 >> 0x18);
  uStack_528 = (undefined1)((ulong)_UNK_013815b1 >> 0x38);
  uStack_527 = 0;
  lStack_648 = 0;
  lStack_640 = 0;
  lStack_638 = 0;
  lStack_630 = 0;
  lStack_628 = 0;
  lStack_620 = 0;
  uStack_618 = 0;
  uStack_610 = 0;
  lStack_608 = 0;
  func_0x048b1dc0(auStack_600);
  func_0x048b1dc0(&uStack_5f0);
  uStack_550 = 0;
  lStack_548 = 0;
  lStack_560 = 0;
  uStack_558 = 0;
  lStack_570 = 0;
  lStack_568 = 0;
  lStack_580 = 0;
  lStack_578 = 0;
  lStack_590 = 0;
  lStack_588 = 0;
  lStack_5a0 = 0;
  lStack_598 = 0;
  puStack_5b0 = (undefined8 *)0x0;
  puStack_5a8 = (undefined8 *)0x0;
  lStack_5c0 = 0;
  lStack_5b8 = 0;
  lStack_5d0 = 0;
  lStack_5c8 = 0;
  lStack_5e0 = 0;
  lStack_5d8 = 0;
  if ((uStack_618 & 1) == 0) {
    lStack_608 = CONCAT44(uStack_524,CONCAT22(uStack_526,CONCAT11(uStack_527,uStack_528)));
    uStack_618 = CONCAT44(uStack_534,uStack_538);
    uStack_610 = CONCAT44(uStack_52c,uStack_530);
  }
  else {
    FUN_04885120(&uStack_618,(long)&uStack_538 + 1,0x10);
    if ((uStack_538 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_524,CONCAT22(uStack_526,CONCAT11(uStack_527,uStack_528))),
                      CONCAT44(uStack_534,uStack_538) & 0xfffffffffffffffe);
    }
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_01315e9e;
  puVar12[2] = _DAT_01315e96;
  puVar12[3] = uVar3;
  uVar3 = _UNK_01315e8e;
  *puVar12 = _DAT_01315e86;
  puVar12[1] = uVar3;
  *(undefined4 *)((long)puVar12 + 0x1f) = 0x73656974;
  *(undefined1 *)((long)puVar12 + 0x23) = 0;
  bStack_740 = 0x28;
  uStack_73f = _DAT_0141e188;
  uStack_73b = _UNK_0141e18c;
  uStack_737 = _UNK_0141e190;
  uStack_733 = _UNK_0141e194;
  uStack_72f = 0x6e6f6974;
  uStack_72b = 0;
  puStack_7b0 = puVar12;
  func_0x0a3435d0(&uStack_178,&bStack_740);
  uStack_780 = 0x746e651c;
  uStack_77c = 0x54797469;
  uStack_778 = 0x4f657079;
  uStack_774 = 0x644972;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  lStack_2a8 = 0;
  func_0x048b1dc0(&uStack_2a0);
  func_0x0652b590(&uStack_290);
  if ((uStack_2b8 & 1) == 0) {
    if ((uStack_780 & 1) == 0) {
      lStack_2a8 = lStack_770;
      uStack_2b8 = CONCAT44(uStack_77c,uStack_780);
      uStack_2b0 = CONCAT44(uStack_774,uStack_778);
    }
    else {
      func_0x04885070(&uStack_2b8,lStack_770,CONCAT44(uStack_774,uStack_778));
    }
  }
  else {
    bVar23 = (uStack_780 & 1) != 0;
    lVar14 = (long)&uStack_780 + 1;
    if (bVar23) {
      lVar14 = lStack_770;
    }
    uVar17 = (ulong)((byte)uStack_780 >> 1);
    if (bVar23) {
      uVar17 = CONCAT44(uStack_774,uStack_778);
    }
    FUN_04885120(&uStack_2b8,lVar14,uVar17);
  }
  plVar13 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar13 == (long *)0x0) {
    func_0x048b0de0(&uStack_538,&puStack_728);
    uVar7 = uStack_52c;
    uVar9 = uStack_530;
    uRam000000000f54fd94 = uStack_534;
    _DAT_0f54fd90 = uStack_538;
    uStack_538 = 0;
    uStack_534 = 0;
    uStack_530 = 0;
    uStack_52c = 0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar7;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar16 = plVar13 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)CONCAT44(uStack_52c,uStack_530);
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar16 = plVar13 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f661510 == '\0') && (iVar11 = FUN_04108328(&DAT_0f661510), iVar11 != 0)) {
    func_0x0a3d2740();
    __cxa_atexit(&UNK_048ae800,&DAT_0f661490,0xf53dab8);
    func_0x0410844d(&DAT_0f661510);
  }
  plVar16 = (long *)(*plVar13 +
                    (ulong)((int)((ulong)(plVar13[1] - *plVar13) >> 3) - 1U &
                           *(uint *)(_DAT_0f661490 + 4)) * 8);
  do {
    lVar14 = *plVar16;
    if (lVar14 == -1) goto LAB_0a341030;
    plVar16 = (long *)(plVar13[3] + lVar14 * 0x18);
  } while (*(uint *)(plVar13[3] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f661490 + 4));
  if (plVar16 == (long *)plVar13[4]) {
LAB_0a341030:
    uStack_2a0 = &DAT_0f661490;
  }
  else {
    uStack_2a0 = (undefined *)plVar16[2];
  }
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  plStack_6d8 = (long *)0x0;
  uStack_6d0 = 0;
  puStack_6e8 = (undefined8 *)0x0;
  plStack_6e0 = (long *)0x0;
  puStack_6f8 = (undefined8 *)0x0;
  puStack_6f0 = (undefined8 *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  pbStack_718 = (byte *)0x0;
  uStack_710 = 0;
  puStack_728 = (undefined8 *)0x0;
  puStack_720 = (undefined8 *)0x0;
  uStack_298 = plVar13;
  func_0x04885070(&uStack_710,puVar12,0x23);
  func_0x06523ef0(&uStack_538,auStack_150);
  func_0x06523ef0(apcStack_420,&uStack_290);
  uStack_7a8 = (undefined8 **)0x0;
  uStack_7a0 = 0;
  lStack_798 = 0;
  bStack_760 = (byte)&uStack_7a8;
  uStack_75f = (undefined4)((ulong)&uStack_7a8 >> 8);
  uStack_75b._0_3_ = (uint3)((ulong)&uStack_7a8 >> 0x28);
  uStack_75b = (uint)(uint3)uStack_75b;
  lStack_768 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (lStack_768 == 0) {
    func_0x0eec74c0(0x230,0);
  }
  lStack_798 = lStack_768 + 0x230;
  uStack_7d0 = &lStack_540;
  uStack_7c8 = &lStack_768;
  uStack_7c0 = uStack_7c0 & 0xffffff00;
  uStack_7d8 = &uStack_7a8;
  uStack_7a8 = (undefined8 **)lStack_768;
  uStack_7a0 = lStack_768;
  lStack_540 = lStack_768;
  func_0x06523ef0(lStack_768,&uStack_538);
  lStack_768 = lStack_768 + 0x118;
  func_0x06523ef0(lStack_768,apcStack_420);
  uStack_7a0 = lStack_768 + 0x118;
  if (pcStack_330 != (code *)0x0) {
    (*pcStack_330)(auStack_348);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (pcStack_3b8 != (code *)0x0) {
    (*pcStack_3b8)(auStack_3d0);
  }
  if (pcStack_3f8 != (code *)0x0) {
    (*pcStack_3f8)(auStack_410);
  }
  if (pcStack_448 != (code *)0x0) {
    (*pcStack_448)(auStack_460);
  }
  if (pcStack_490 != (code *)0x0) {
    (*pcStack_490)(apcStack_4a8);
  }
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(apcStack_4e8);
  }
  if (pcStack_510 != (code *)0x0) {
    (*pcStack_510)(&uStack_528);
  }
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f218ab8;
  plStack_6b0 = param_1;
  uVar9 = func_0x0d858500(&uStack_7a8);
  plVar16 = plVar13 + 3;
  *(undefined1 *)(plVar13 + 4) = 0;
  *(undefined4 *)((long)plVar13 + 0x24) = uVar9;
  *(undefined4 *)(plVar13 + 5) = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[3] = (long)&UNK_0f218b08;
  *(undefined4 *)(plVar13 + 9) = (undefined4)uStack_7a8;
  *(undefined4 *)((long)plVar13 + 0x4c) = uStack_7a8._4_4_;
  *(undefined4 *)(plVar13 + 10) = (undefined4)uStack_7a0;
  *(undefined4 *)((long)plVar13 + 0x54) = uStack_7a0._4_4_;
  plVar13[0xb] = lStack_798;
  uStack_7a8 = (undefined8 **)0x0;
  uStack_7a0 = 0;
  lStack_798 = 0;
  uVar9 = func_0x0d858620(plVar16);
  plVar6 = plStack_6d8;
  *(undefined4 *)(plVar13 + 5) = uVar9;
  plStack_6e0 = plVar16;
  if (plStack_6d8 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_6d8 + 1;
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      lVar14 = *plStack_6d8;
      plStack_6d8 = plVar13;
      (**(code **)(lVar14 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
      plVar13 = plStack_6d8;
    }
  }
  plStack_6d8 = plVar13;
  func_0x0a3d4a50(&bStack_760);
  uStack_538 = 0xf55160ec;
  uStack_530 = 0;
  uStack_52c = 0;
  uStack_528 = 0;
  uStack_527 = 0;
  uStack_526 = 0;
  uStack_520 = (undefined *)0x0;
  uStack_518 = &UNK_065b4120;
  pcStack_510 = (code *)&SUB_048b06d0;
  puStack_508 = &UNK_0a3d4cb0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  apcStack_4e8[0] = (code *)0x0;
  FUN_049057f0(&bStack_760,&uStack_538);
  func_0x048aea50(&uStack_538);
  uStack_7d8 = (undefined8 *)CONCAT35((uint3)uStack_75b,CONCAT41(uStack_75f,bStack_760));
  uStack_7d0 = (long *)CONCAT35((undefined3)uStack_753,CONCAT41(uStack_757,uStack_75b._3_1_));
  uStack_7c8 = (long *)CONCAT44(CONCAT22(uStack_74a,CONCAT11(uStack_74b,uStack_74f._3_1_)),
                                CONCAT31((undefined3)uStack_74f,uStack_753._3_1_));
  uStack_7c0 = uStack_748;
  uStack_7bc = uStack_744;
  uStack_538 = 0xf55160ec;
  uStack_530 = 0;
  uStack_52c = 0;
  uStack_528 = 1;
  uStack_527 = 0;
  uStack_526 = 0;
  uStack_520 = (undefined *)0x0;
  uStack_518 = &UNK_065b4120;
  pcStack_510 = (code *)&SUB_048b06d0;
  puStack_508 = &UNK_0a3d4ec0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  apcStack_4e8[0] = (code *)0x0;
  FUN_049057f0(&uStack_7d8,&uStack_538);
  func_0x048aea50(&uStack_538);
  func_0x0a3d4a50(&uStack_7d8);
  if ((DAT_0f5977c8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5977c8), iVar11 != 0)) {
    func_0x06967f60(0xf5977b0);
    func_0x0410844d(&DAT_0f5977c8);
  }
  uStack_538 = _DAT_0f5977b4;
  uStack_530 = 1;
  uStack_52c = 0;
  uStack_528 = 0xa0;
  uStack_527 = 0x7e;
  uStack_526 = 0x696;
  uStack_524 = 0;
  uStack_520 = &UNK_0a3d50b0;
  func_0x065abe60(&uStack_7d8);
  func_0x0a3d4a50(&uStack_7d8);
  if ((DAT_0f57d588 == '\0') && (iVar11 = FUN_04108328(&DAT_0f57d588), iVar11 != 0)) {
    func_0x065b6770(0xf57d570);
    func_0x0410844d(&DAT_0f57d588);
  }
  uStack_538 = _DAT_0f57d574;
  uStack_530 = 1;
  uStack_52c = 0;
  uStack_528 = 0x30;
  uStack_527 = 0x3f;
  uStack_526 = 0x48b;
  uStack_524 = 0;
  uStack_520 = &UNK_0a3d53a0;
  func_0x065abe60(&uStack_7d8);
  uStack_528 = (undefined1)uStack_168;
  uStack_527 = (undefined1)((ulong)uStack_168 >> 8);
  uStack_526 = (undefined2)((ulong)uStack_168 >> 0x10);
  uStack_524 = (undefined4)((ulong)uStack_168 >> 0x20);
  uStack_538 = (uint)uStack_178;
  uStack_534 = (undefined4)(uStack_178 >> 0x20);
  uStack_530 = (undefined4)uStack_170;
  uStack_52c = (undefined4)((ulong)uStack_170 >> 0x20);
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_520 = (undefined *)CONCAT44(uStack_15c,uStack_160);
  uStack_518 = (undefined *)CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&pcStack_510,auStack_150);
  lStack_3e8 = lStack_2a8;
  pcStack_3f8 = (code *)uStack_2b8;
  uStack_3f0 = uStack_2b0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  lStack_2a8 = 0;
  uStack_3e0 = (undefined4)uStack_2a0;
  uStack_3dc = uStack_2a0._4_4_;
  uStack_3d8 = (undefined4)uStack_298;
  uStack_3d4 = uStack_298._4_4_;
  func_0x065281f0(auStack_3d0,&uStack_290);
  uStack_7d8 = (undefined8 *)0x0;
  uStack_7d0 = (long *)0x0;
  uStack_7c8 = (long *)0x0;
  bStack_760 = (byte)&uStack_7d8;
  uStack_75f = (undefined4)((ulong)&uStack_7d8 >> 8);
  uStack_75b._0_3_ = (uint3)((ulong)&uStack_7d8 >> 0x28);
  uStack_75b = (uint)(uint3)uStack_75b;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar1 = puVar12 + 0x50;
  uStack_7d8 = puVar12;
  uStack_7d0 = puVar12;
  uStack_7c8 = puVar1;
  if ((uStack_538 & 1) == 0) {
    puVar12[2] = CONCAT44(uStack_524,CONCAT22(uStack_526,CONCAT11(uStack_527,uStack_528)));
    *puVar12 = CONCAT44(uStack_534,uStack_538);
    puVar12[1] = CONCAT44(uStack_52c,uStack_530);
  }
  else {
    func_0x0412e5e0(puVar12,CONCAT44(uStack_524,CONCAT22(uStack_526,CONCAT11(uStack_527,uStack_528))
                                    ),CONCAT44(uStack_52c,uStack_530));
  }
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_520;
  *(undefined4 *)((long)puVar12 + 0x1c) = uStack_520._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)uStack_518;
  *(undefined4 *)((long)puVar12 + 0x24) = uStack_518._4_4_;
  func_0x06523ef0(puVar12 + 5,&pcStack_510);
  if (((ulong)pcStack_3f8 & 1) == 0) {
    puVar12[0x2a] = lStack_3e8;
    puVar12[0x28] = pcStack_3f8;
    puVar12[0x29] = uStack_3f0;
  }
  else {
    func_0x0412e5e0(puVar12 + 0x28,lStack_3e8,uStack_3f0);
  }
  *(undefined4 *)(puVar12 + 0x2b) = uStack_3e0;
  *(undefined4 *)((long)puVar12 + 0x15c) = uStack_3dc;
  *(undefined4 *)(puVar12 + 0x2c) = uStack_3d8;
  *(undefined4 *)((long)puVar12 + 0x164) = uStack_3d4;
  func_0x06523ef0(puVar12 + 0x2d,auStack_3d0);
  uStack_7d0 = puVar1;
  if (pcStack_2e0 != (code *)0x0) {
    (*pcStack_2e0)(auStack_2f8);
  }
  if (pcStack_328 != (code *)0x0) {
    (*pcStack_328)(auStack_340);
  }
  if (pcStack_368 != (code *)0x0) {
    (*pcStack_368)(auStack_380);
  }
  if (pcStack_3a8 != (code *)0x0) {
    (*pcStack_3a8)(auStack_3c0);
  }
  if (((ulong)pcStack_3f8 & 1) != 0) {
    func_0x0412a280(lStack_3e8,(ulong)pcStack_3f8 & 0xfffffffffffffffe);
  }
  if (apcStack_420[0] != (code *)0x0) {
    (*apcStack_420[0])(auStack_438);
  }
  if (pcStack_468 != (code *)0x0) {
    (*pcStack_468)(auStack_480);
  }
  if (apcStack_4a8[0] != (code *)0x0) {
    (*apcStack_4a8[0])(auStack_4c0);
  }
  if (apcStack_4e8[0] != (code *)0x0) {
    (*apcStack_4e8[0])(&uStack_500);
  }
  if ((uStack_538 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_524,CONCAT22(uStack_526,CONCAT11(uStack_527,uStack_528))),
                    CONCAT44(uStack_534,uStack_538) & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_6e0 + 0x20))();
  uVar20 = ((long)uStack_7d0 - (long)uStack_7d8 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((uVar10 != 0) && ((uint)uVar20 != 0)) {
    uVar18 = 0;
    uVar17 = 0;
    uStack_784 = uVar10;
    do {
      auVar24 = (**(code **)(*plStack_6e0 + 0x28))(plStack_6e0,uVar18);
      lVar22 = auVar24._8_8_;
      lVar14 = auVar24._0_8_;
      auVar24 = func_0x06527d70();
      if (auVar24._8_8_ == lVar22) {
        if (auVar24._0_8_ == 0) {
          lVar21 = func_0x048aead0(auVar24._8_8_);
          iVar11 = *(int *)(lVar21 + 8);
          if (lVar14 == 0) goto LAB_0a341901;
LAB_0a3418e2:
          if (iVar11 != *(int *)(lVar14 + 8)) goto LAB_0a341920;
        }
        else {
          iVar11 = *(int *)(auVar24._0_8_ + 8);
          if (lVar14 != 0) goto LAB_0a3418e2;
LAB_0a341901:
          lVar21 = func_0x048aead0(lVar22);
          if (iVar11 != *(int *)(lVar21 + 8)) goto LAB_0a341920;
        }
      }
      else {
LAB_0a341920:
        auVar24 = func_0x06527e30();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a341b15;
        }
        auVar24 = func_0x06527ef0();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a341b15;
        }
        auVar24 = func_0x06527fb0();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a341b15;
        }
        auVar24 = func_0x06528070();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a341b15;
        }
        auVar24 = func_0x06528130();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a341b15;
        }
        puVar12 = uStack_7d8;
        puVar1 = uStack_7d0;
        puVar4 = puStack_7b0;
        if (uStack_7d8[uVar17 * 0x28 + 4] != lVar22) goto joined_r0x0a341d2d;
        if (uStack_7d8[uVar17 * 0x28 + 3] == 0) {
          lVar21 = func_0x048aead0();
          iVar11 = *(int *)(lVar21 + 8);
          if (lVar14 == 0) goto LAB_0a341afe;
LAB_0a341ae5:
          if (iVar11 != *(int *)(lVar14 + 8)) goto LAB_0a341d18;
        }
        else {
          iVar11 = *(int *)(uStack_7d8[uVar17 * 0x28 + 3] + 8);
          if (lVar14 != 0) goto LAB_0a341ae5;
LAB_0a341afe:
          lVar14 = func_0x048aead0(lVar22);
          if (iVar11 != *(int *)(lVar14 + 8)) goto LAB_0a341d18;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0a341b15:
    } while (((uint)uVar17 < (uint)uVar20) && (uVar18 = uVar18 + 1, uVar18 < uStack_784));
    uVar20 = ((long)uStack_7d0 - (long)uStack_7d8 >> 6) * -0x3333333333333333;
  }
  puVar12 = puStack_6f8;
  puVar19 = puStack_7b0;
  if (uVar20 == uVar17) {
    puVar1 = puStack_6f0;
    if (puStack_6f8 != (undefined8 *)0x0) {
      while (puVar12 != puVar1) {
        func_0x05fe8450(puVar1 + -0x28);
        puVar1 = puVar1 + -0x28;
      }
      puStack_6f0 = puVar12;
      func_0x0412a280(puStack_6f8,(long)puStack_6e8 - (long)puStack_6f8);
    }
    puStack_6e8 = uStack_7c8;
    if (puStack_5b0 < puStack_5a8) {
      *puStack_5b0 = 0;
      puStack_5b0[1] = 0;
      puStack_5b0[2] = 0;
      *puStack_5b0 = puStack_728;
      puStack_5b0[1] = puStack_720;
      puStack_5b0[2] = pbStack_718;
      puStack_728 = (undefined8 *)0x0;
      puStack_720 = (undefined8 *)0x0;
      pbStack_718 = (byte *)0x0;
      puStack_5b0[5] = uStack_700;
      puStack_5b0[3] = uStack_710;
      puStack_5b0[4] = uStack_708;
      uStack_710 = 0;
      uStack_708 = 0;
      uStack_700 = 0;
      puStack_5b0[6] = 0;
      puStack_5b0[7] = 0;
      puStack_5b0[8] = 0;
      puStack_5b0[6] = uStack_7d8;
      puStack_5b0[7] = uStack_7d0;
      puStack_5b0[8] = uStack_7c8;
      puStack_6f8 = (undefined8 *)0x0;
      puStack_6f0 = (undefined8 *)0x0;
      puStack_6e8 = (undefined8 *)0x0;
      puStack_5b0[9] = plStack_6e0;
      puStack_5b0[10] = plStack_6d8;
      plStack_6e0 = (long *)0x0;
      plStack_6d8 = (undefined8 *)0x0;
      puStack_5b0[0xb] = 0;
      puStack_5b0[0xc] = 0;
      puStack_5b0[0xd] = 0;
      *(undefined4 *)(puStack_5b0 + 0xb) = (undefined4)uStack_6d0;
      *(undefined4 *)((long)puStack_5b0 + 0x5c) = uStack_6d0._4_4_;
      *(undefined4 *)(puStack_5b0 + 0xc) = (undefined4)uStack_6c8;
      *(undefined4 *)((long)puStack_5b0 + 100) = uStack_6c8._4_4_;
      puStack_5b0[0xd] = uStack_6c0;
      uStack_6d0 = 0;
      uStack_6c8 = 0;
      uStack_6c0 = 0;
      puStack_5b0 = puStack_5b0 + 0xe;
    }
    else {
      puStack_6f8 = uStack_7d8;
      puStack_6f0 = uStack_7d0;
      puStack_5b0 = (undefined8 *)func_0x0652ac80(&lStack_5b8,&puStack_728);
    }
    puVar12 = puStack_5b0 + -0xe;
    uVar17 = (ulong)uStack_7a8;
  }
  else {
LAB_0a341d18:
    puVar19 = puStack_7b0;
    puVar12 = uStack_7d8;
    puVar1 = uStack_7d0;
    puVar4 = puStack_7b0;
    if (uStack_7d8 != (undefined8 *)0x0) {
joined_r0x0a341d2d:
      while (puVar19 = puStack_7b0, puVar5 = uStack_7d8, puStack_7b0 = puVar4, uStack_7d8 != puVar1)
      {
        uStack_7d8 = puVar12;
        func_0x05fe8450(puVar1 + -0x28);
        puVar12 = uStack_7d8;
        puVar1 = puVar1 + -0x28;
        puVar4 = puStack_7b0;
        puStack_7b0 = puVar19;
        uStack_7d8 = puVar5;
      }
      uStack_7d0 = uStack_7d8;
      uStack_7d8 = puVar12;
      func_0x0412a280(puVar12,(long)uStack_7c8 - (long)puVar12);
    }
    puVar12 = (undefined8 *)0xf65fd38;
    uVar17 = (ulong)uStack_7a8;
  }
  uStack_7a8 = (undefined8 **)uVar17;
  if (uVar17 != 0) {
    if (uVar17 != uStack_7a0) {
      lVar14 = uStack_7a0 - 0x40;
      do {
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))(lVar14);
        }
        if (*(code **)(lVar14 + -0x30) != (code *)0x0) {
          (**(code **)(lVar14 + -0x30))(lVar14 + -0x48);
        }
        if (*(code **)(lVar14 + -0x70) != (code *)0x0) {
          (**(code **)(lVar14 + -0x70))(lVar14 + -0x88);
        }
        if (*(code **)(lVar14 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar14 + -0xb0))(lVar14 + -200);
        }
        uVar20 = lVar14 - 0xd8;
        lVar14 = lVar14 + -0x118;
      } while (uVar20 != uVar17);
    }
    uStack_7a0 = uVar17;
    func_0x0412a280(uStack_7a8,lStack_798 - (long)uStack_7a8);
  }
  func_0x05f93280(&puStack_728);
  uStack_668 = _DAT_0f642300;
  uStack_664 = _DAT_0f642304;
  if ((_DAT_0f642308 & 1) == 0) {
    uStack_650 = _DAT_0f642318;
    uStack_660 = _DAT_0f642308;
    uStack_65c = uRam000000000f64230c;
    uStack_658 = _DAT_0f642310;
    uStack_654 = uRam000000000f642314;
  }
  else {
    func_0x0412e5e0(&uStack_660,_DAT_0f642318,CONCAT44(uRam000000000f642314,_DAT_0f642310));
  }
  func_0x0730fa70(puVar12,&uStack_668,0x10001);
  if ((uStack_660 & 1) != 0) {
    func_0x0412a280(uStack_650,CONCAT44(uStack_65c,uStack_660) & 0xfffffffffffffffe);
  }
  if (pcStack_1a0 != (code *)0x0) {
    (*pcStack_1a0)(auStack_1b8);
  }
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(auStack_200);
  }
  if (pcStack_228 != (code *)0x0) {
    (*pcStack_228)(auStack_240);
  }
  if (pcStack_268 != (code *)0x0) {
    (*pcStack_268)(&puStack_280);
  }
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(lStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  if ((uStack_780 & 1) != 0) {
    func_0x0412a280(lStack_770,CONCAT44(uStack_77c,uStack_780) & 0xfffffffffffffffe);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_740 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_72a,CONCAT15(uStack_72b,CONCAT41(uStack_72f,uStack_733._3_1_))),
                    CONCAT35((undefined3)uStack_73b,CONCAT41(uStack_73f,bStack_740)) &
                    0xfffffffffffffffe);
  }
  func_0x0412a280(puVar19,0x28);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_012fb92c;
  *(ulong *)((long)puVar12 + 0xe) = CONCAT62(_UNK_012fb926,_DAT_012fb924);
  *(undefined8 *)((long)puVar12 + 0x16) = uVar3;
  uVar3 = CONCAT26(_DAT_012fb924,_UNK_012fb91e);
  *puVar12 = _DAT_012fb916;
  puVar12[1] = uVar3;
  *(undefined1 *)((long)puVar12 + 0x1e) = 0;
  bStack_760 = 0x28;
  uStack_75f = _DAT_0141e188;
  uStack_75b = _UNK_0141e18c;
  uStack_757 = _UNK_0141e190;
  uStack_753 = _UNK_0141e194;
  uStack_74f = 0x6e6f6974;
  uStack_74b = 0;
  puStack_7b0 = puVar12;
  func_0x0a3435d0(&uStack_178,&bStack_760);
  uStack_258 = 0;
  uStack_250 = 0;
  pcStack_268 = (code *)0x0;
  uStack_260 = 0;
  puStack_278 = (undefined8 *)0x0;
  plStack_270 = (long *)0x0;
  puStack_288 = (undefined8 *)0x0;
  puStack_280 = (undefined8 *)0x0;
  uStack_298 = (long *)0x0;
  uStack_290 = 0;
  lStack_2a8 = 0;
  uStack_2a0 = (undefined *)0x0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  func_0x04885070(&uStack_2a0,puVar12,0x1e);
  func_0x06523ef0(&uStack_538,auStack_150);
  uStack_7d8 = (undefined8 *)0x0;
  uStack_7d0 = (long *)0x0;
  uStack_7c8 = (long *)0x0;
  uStack_7a8 = (undefined8 **)&uStack_7d8;
  uStack_7a0 = uStack_7a0 & 0xffffffffffffff00;
  lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (lVar14 == 0) {
    func_0x0eec74c0(0x118,0);
  }
  uStack_7c8 = (long *)(lVar14 + 0x118);
  bStack_740 = (byte)lVar14;
  uStack_73f = (undefined4)((ulong)lVar14 >> 8);
  uStack_73b._0_3_ = (undefined3)((ulong)lVar14 >> 0x28);
  uStack_780 = (uint)lVar14;
  uStack_77c = (undefined4)((ulong)lVar14 >> 0x20);
  puStack_728 = &uStack_7d8;
  puStack_720 = (undefined8 *)&uStack_780;
  pbStack_718 = &bStack_740;
  uStack_710 = uStack_710 & 0xffffffffffffff00;
  uStack_7d8 = (undefined8 *)lVar14;
  uStack_7d0 = (long *)lVar14;
  func_0x06523ef0(lVar14,&uStack_538);
  uStack_7d0 = (long *)(CONCAT35((undefined3)uStack_73b,CONCAT41(uStack_73f,bStack_740)) + 0x118);
  if (pcStack_448 != (code *)0x0) {
    (*pcStack_448)(auStack_460);
  }
  if (pcStack_490 != (code *)0x0) {
    (*pcStack_490)(apcStack_4a8);
  }
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(apcStack_4e8);
  }
  if (pcStack_510 != (code *)0x0) {
    (*pcStack_510)(&uStack_528);
  }
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar15 + 8) = 0;
  *(undefined8 *)((long)pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f218bd0;
  uVar9 = func_0x0d858500(&uStack_7d8);
  plVar13 = (long *)((long)pcVar15 + 0x18);
  *(undefined1 *)((long)pcVar15 + 0x20) = 0;
  *(undefined4 *)((long)pcVar15 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar15 + 0x28) = 0;
  *(undefined8 *)((long)pcVar15 + 0x30) = 0;
  *(undefined8 *)((long)pcVar15 + 0x38) = 0;
  *(undefined8 *)((long)pcVar15 + 0x40) = 0;
  *(undefined **)((long)pcVar15 + 0x18) = &UNK_0f218c20;
  *(undefined4 *)((long)pcVar15 + 0x48) = (undefined4)uStack_7d8;
  *(undefined4 *)((long)pcVar15 + 0x4c) = uStack_7d8._4_4_;
  *(undefined4 *)((long)pcVar15 + 0x50) = (undefined4)uStack_7d0;
  *(undefined4 *)((long)pcVar15 + 0x54) = uStack_7d0._4_4_;
  *(long **)((long)pcVar15 + 0x58) = uStack_7c8;
  uStack_7d8 = (undefined8 *)0x0;
  uStack_7d0 = (long *)0x0;
  uStack_7c8 = (long *)0x0;
  uVar9 = func_0x0d858620(plVar13);
  pcVar8 = pcStack_268;
  *(undefined4 *)((long)pcVar15 + 0x28) = uVar9;
  plStack_270 = plVar13;
  if (pcStack_268 != (code *)0x0) {
    LOCK();
    plVar13 = (long *)((long)pcStack_268 + 8);
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      lVar14 = *(long *)pcStack_268;
      pcStack_268 = pcVar15;
      (**(code **)(lVar14 + 0x10))(pcVar8);
      func_0x0412c2d0(pcVar8);
      pcVar15 = pcStack_268;
    }
  }
  pcStack_268 = pcVar15;
  uStack_528 = (undefined1)uStack_168;
  uStack_527 = (undefined1)((ulong)uStack_168 >> 8);
  uStack_526 = (undefined2)((ulong)uStack_168 >> 0x10);
  uStack_524 = (undefined4)((ulong)uStack_168 >> 0x20);
  uStack_538 = (uint)uStack_178;
  uStack_534 = (undefined4)(uStack_178 >> 0x20);
  uStack_530 = (undefined4)uStack_170;
  uStack_52c = (undefined4)((ulong)uStack_170 >> 0x20);
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_520 = (undefined *)CONCAT44(uStack_15c,uStack_160);
  uStack_518 = (undefined *)CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&pcStack_510,auStack_150);
  puStack_728 = (undefined8 *)0x0;
  puStack_720 = (undefined8 *)0x0;
  pbStack_718 = (byte *)0x0;
  uStack_7a0 = uStack_7a0 & 0xffffffffffffff00;
  uStack_7a8 = &puStack_728;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar1 = puVar12 + 0x28;
  puStack_728 = puVar12;
  pbStack_718 = (byte *)puVar1;
  if ((uStack_538 & 1) == 0) {
    puVar12[2] = CONCAT44(uStack_524,CONCAT22(uStack_526,CONCAT11(uStack_527,uStack_528)));
    *puVar12 = CONCAT44(uStack_534,uStack_538);
    puVar12[1] = CONCAT44(uStack_52c,uStack_530);
    puStack_720 = puVar12;
  }
  else {
    puStack_720 = puVar12;
    func_0x0412e5e0(puVar12,CONCAT44(uStack_524,CONCAT22(uStack_526,CONCAT11(uStack_527,uStack_528))
                                    ),CONCAT44(uStack_52c,uStack_530));
  }
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_520;
  *(undefined4 *)((long)puVar12 + 0x1c) = uStack_520._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)uStack_518;
  *(undefined4 *)((long)puVar12 + 0x24) = uStack_518._4_4_;
  func_0x06523ef0(puVar12 + 5,&pcStack_510);
  puStack_720 = puVar1;
  if (apcStack_420[0] != (code *)0x0) {
    (*apcStack_420[0])(auStack_438);
  }
  if (pcStack_468 != (code *)0x0) {
    (*pcStack_468)(auStack_480);
  }
  if (apcStack_4a8[0] != (code *)0x0) {
    (*apcStack_4a8[0])(auStack_4c0);
  }
  if (apcStack_4e8[0] != (code *)0x0) {
    (*apcStack_4e8[0])(&uStack_500);
  }
  if ((uStack_538 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_524,CONCAT22(uStack_526,CONCAT11(uStack_527,uStack_528))),
                    CONCAT44(uStack_534,uStack_538) & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_270 + 0x20))();
  uVar20 = ((long)puStack_720 - (long)puStack_728 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((uVar10 != 0) && ((uint)uVar20 != 0)) {
    uVar18 = 0;
    uVar17 = 0;
    uStack_784 = uVar10;
    do {
      auVar24 = (**(code **)(*plStack_270 + 0x28))(plStack_270,uVar18);
      lVar22 = auVar24._8_8_;
      lVar14 = auVar24._0_8_;
      auVar24 = func_0x06527d70();
      if (auVar24._8_8_ == lVar22) {
        if (auVar24._0_8_ == 0) {
          lVar21 = func_0x048aead0(auVar24._8_8_);
          iVar11 = *(int *)(lVar21 + 8);
          if (lVar14 == 0) goto LAB_0a34252e;
LAB_0a342511:
          if (iVar11 != *(int *)(lVar14 + 8)) goto LAB_0a342540;
        }
        else {
          iVar11 = *(int *)(auVar24._0_8_ + 8);
          if (lVar14 != 0) goto LAB_0a342511;
LAB_0a34252e:
          lVar21 = func_0x048aead0(lVar22);
          if (iVar11 != *(int *)(lVar21 + 8)) goto LAB_0a342540;
        }
      }
      else {
LAB_0a342540:
        auVar24 = func_0x06527e30();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a342736;
        }
        auVar24 = func_0x06527ef0();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a342736;
        }
        auVar24 = func_0x06527fb0();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a342736;
        }
        auVar24 = func_0x06528070();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a342736;
        }
        auVar24 = func_0x06528130();
        if (auVar24._8_8_ == lVar22) {
          if (auVar24._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar24._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar14 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a342736;
        }
        puVar12 = puStack_728;
        puVar1 = puStack_720;
        if (puStack_728[uVar17 * 0x28 + 4] != lVar22) goto joined_r0x0a342964;
        if (puStack_728[uVar17 * 0x28 + 3] == 0) {
          lVar21 = func_0x048aead0();
          iVar11 = *(int *)(lVar21 + 8);
          if (lVar14 == 0) goto LAB_0a34271f;
LAB_0a342707:
          if (iVar11 != *(int *)(lVar14 + 8)) goto LAB_0a342951;
        }
        else {
          iVar11 = *(int *)(puStack_728[uVar17 * 0x28 + 3] + 8);
          if (lVar14 != 0) goto LAB_0a342707;
LAB_0a34271f:
          lVar14 = func_0x048aead0(lVar22);
          if (iVar11 != *(int *)(lVar14 + 8)) goto LAB_0a342951;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0a342736:
    } while (((uint)uVar17 < (uint)uVar20) && (uVar18 = uVar18 + 1, uVar18 < uStack_784));
    uVar20 = ((long)puStack_720 - (long)puStack_728 >> 6) * -0x3333333333333333;
  }
  puVar12 = puStack_288;
  if (uVar20 == uVar17) {
    puVar1 = puStack_280;
    if (puStack_288 != (undefined8 *)0x0) {
      while (puVar12 != puVar1) {
        func_0x05fe8450(puVar1 + -0x28);
        puVar1 = puVar1 + -0x28;
      }
      puStack_280 = puVar12;
      func_0x0412a280(puStack_288,(long)puStack_278 - (long)puStack_288);
    }
    puStack_278 = (undefined8 *)pbStack_718;
    if (puStack_5b0 < puStack_5a8) {
      *puStack_5b0 = 0;
      puStack_5b0[1] = 0;
      puStack_5b0[2] = 0;
      *puStack_5b0 = uStack_2b8;
      puStack_5b0[1] = uStack_2b0;
      puStack_5b0[2] = lStack_2a8;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      lStack_2a8 = 0;
      puStack_5b0[5] = uStack_290;
      puStack_5b0[3] = uStack_2a0;
      puStack_5b0[4] = uStack_298;
      uStack_2a0 = (undefined *)0x0;
      uStack_298 = (long *)0x0;
      uStack_290 = 0;
      puStack_5b0[6] = 0;
      puStack_5b0[7] = 0;
      puStack_5b0[8] = 0;
      puStack_5b0[6] = puStack_728;
      puStack_5b0[7] = puStack_720;
      puStack_5b0[8] = pbStack_718;
      puStack_288 = (undefined8 *)0x0;
      puStack_280 = (undefined8 *)0x0;
      puStack_278 = (undefined8 *)0x0;
      puStack_5b0[9] = plStack_270;
      puStack_5b0[10] = pcStack_268;
      plStack_270 = (long *)0x0;
      pcStack_268 = (code *)0x0;
      puStack_5b0[0xb] = 0;
      puStack_5b0[0xc] = 0;
      puStack_5b0[0xd] = 0;
      puStack_5b0[0xb] = uStack_260;
      puStack_5b0[0xc] = uStack_258;
      puStack_5b0[0xd] = uStack_250;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      puStack_5b0 = puStack_5b0 + 0xe;
    }
    else {
      puStack_288 = puStack_728;
      puStack_280 = puStack_720;
      puStack_5b0 = (undefined8 *)func_0x0652ac80(&lStack_5b8,&uStack_2b8);
    }
    puVar12 = puStack_5b0 + -0xe;
    lVar14 = (long)uStack_7d8;
    plVar13 = plStack_6b0;
  }
  else {
LAB_0a342951:
    puVar12 = puStack_728;
    puVar1 = puStack_720;
    if (puStack_728 != (undefined8 *)0x0) {
joined_r0x0a342964:
      while (puVar4 = puStack_728, puStack_728 != puVar1) {
        puStack_728 = puVar12;
        func_0x05fe8450(puVar1 + -0x28);
        puVar12 = puStack_728;
        puVar1 = puVar1 + -0x28;
        puStack_728 = puVar4;
      }
      puStack_720 = puStack_728;
      puStack_728 = puVar12;
      func_0x0412a280(puVar12,(long)pbStack_718 - (long)puVar12);
    }
    puVar12 = (undefined8 *)0xf65fd38;
    lVar14 = (long)uStack_7d8;
    plVar13 = plStack_6b0;
  }
  uStack_7d8 = (undefined8 *)lVar14;
  plStack_6b0 = plVar13;
  if (lVar14 != 0) {
    if ((long *)lVar14 != uStack_7d0) {
      lVar22 = (long)uStack_7d0 + -0x40;
      do {
        if (*(code **)(lVar22 + 0x18) != (code *)0x0) {
          (**(code **)(lVar22 + 0x18))(lVar22);
        }
        if (*(code **)(lVar22 + -0x30) != (code *)0x0) {
          (**(code **)(lVar22 + -0x30))(lVar22 + -0x48);
        }
        if (*(code **)(lVar22 + -0x70) != (code *)0x0) {
          (**(code **)(lVar22 + -0x70))(lVar22 + -0x88);
        }
        if (*(code **)(lVar22 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar22 + -0xb0))(lVar22 + -200);
        }
        lVar21 = lVar22 + -0xd8;
        lVar22 = lVar22 + -0x118;
      } while (lVar21 != lVar14);
    }
    uStack_7d0 = (long *)lVar14;
    func_0x0412a280(uStack_7d8,(long)uStack_7c8 - (long)uStack_7d8);
  }
  func_0x05f93280(&uStack_2b8);
  uStack_688 = _DAT_0f642300;
  uStack_684 = _DAT_0f642304;
  if ((_DAT_0f642308 & 1) == 0) {
    uStack_670 = _DAT_0f642318;
    uStack_680 = _DAT_0f642308;
    uStack_67c = uRam000000000f64230c;
    uStack_678 = _DAT_0f642310;
    uStack_674 = uRam000000000f642314;
  }
  else {
    func_0x0412e5e0(&uStack_680,_DAT_0f642318,CONCAT44(uRam000000000f642314,_DAT_0f642310));
  }
  func_0x0730fa70(puVar12,&uStack_688,0x10001);
  if ((uStack_680 & 1) != 0) {
    func_0x0412a280(uStack_670,CONCAT44(uStack_67c,uStack_680) & 0xfffffffffffffffe);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_760 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_74a,CONCAT15(uStack_74b,CONCAT41(uStack_74f,uStack_753._3_1_))),
                    CONCAT35((uint3)uStack_75b,CONCAT41(uStack_75f,bStack_760)) & 0xfffffffffffffffe
                   );
  }
  func_0x0412a280(puStack_7b0,0x20);
  uStack_6a4 = _DAT_0f642304;
  uStack_6a8 = _DAT_0f642300;
  if ((_DAT_0f642308 & 1) == 0) {
    uStack_690 = _DAT_0f642318;
    uStack_6a0 = _DAT_0f642308;
    uStack_69c = uRam000000000f64230c;
    uStack_698 = _DAT_0f642310;
    uStack_694 = uRam000000000f642314;
  }
  else {
    func_0x0412e5e0(&uStack_6a0,_DAT_0f642318,CONCAT44(uRam000000000f642314,_DAT_0f642310));
  }
  func_0x0730fa70(&lStack_648,&uStack_6a8,0x10001);
  if ((uStack_6a0 & 1) != 0) {
    func_0x0412a280(uStack_690,CONCAT44(uStack_69c,uStack_6a0) & 0xfffffffffffffffe);
  }
  auStack_600 = func_0x0a3d45b0();
  lVar22 = lStack_630;
  lVar14 = lStack_628;
  if (lStack_630 != 0) {
    for (; lVar22 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_628 = lVar22;
    func_0x0412a280(lStack_630,lStack_620 - lStack_630);
  }
  lVar21 = lStack_638;
  lVar22 = lStack_640;
  lVar14 = lStack_648;
  lStack_648 = 0;
  lStack_640 = 0;
  lStack_638 = 0;
  *plVar13 = lVar14;
  plVar13[1] = lVar22;
  plVar13[2] = lVar21;
  lStack_630 = 0;
  lStack_628 = 0;
  lStack_620 = 0;
  plVar13[5] = lStack_608;
  plVar13[3] = uStack_618;
  plVar13[4] = uStack_610;
  uStack_618 = 0;
  uStack_610 = 0;
  lStack_608 = 0;
  *(undefined4 *)(plVar13 + 8) = uStack_5f0;
  *(undefined4 *)((long)plVar13 + 0x44) = uStack_5ec;
  *(undefined4 *)(plVar13 + 9) = uStack_5e8;
  *(undefined4 *)((long)plVar13 + 0x4c) = uStack_5e4;
  *(undefined1 (*) [16])(plVar13 + 6) = auStack_600;
  plVar13[10] = lStack_5e0;
  plVar13[0xb] = lStack_5d8;
  plVar13[0xc] = lStack_5d0;
  lStack_5e0 = 0;
  lStack_5d8 = 0;
  lStack_5d0 = 0;
  plVar13[0xd] = lStack_5c8;
  plVar13[0xe] = lStack_5c0;
  lStack_5c8 = 0;
  lStack_5c0 = 0;
  plVar13[0xf] = lStack_5b8;
  plVar13[0x10] = (long)puStack_5b0;
  plVar13[0x11] = (long)puStack_5a8;
  lStack_5b8 = 0;
  puStack_5b0 = (undefined8 *)0x0;
  puStack_5a8 = (undefined8 *)0x0;
  plVar13[0x12] = lStack_5a0;
  plVar13[0x13] = lStack_598;
  plVar13[0x14] = lStack_590;
  lStack_5a0 = 0;
  lStack_598 = 0;
  lStack_590 = 0;
  plVar13[0x15] = lStack_588;
  plVar13[0x16] = lStack_580;
  plVar13[0x17] = lStack_578;
  lStack_588 = 0;
  lStack_580 = 0;
  lStack_578 = 0;
  plVar13[0x18] = lStack_570;
  plVar13[0x19] = lStack_568;
  plVar13[0x1a] = lStack_560;
  lStack_570 = 0;
  lStack_568 = 0;
  lStack_560 = 0;
  *(undefined4 *)(plVar13 + 0x1b) = (undefined4)uStack_558;
  *(undefined4 *)((long)plVar13 + 0xdc) = uStack_558._4_4_;
  *(undefined4 *)(plVar13 + 0x1c) = (undefined4)uStack_550;
  *(undefined4 *)((long)plVar13 + 0xe4) = uStack_550._4_4_;
  plVar13[0x1d] = lStack_548;
  uStack_558 = 0;
  uStack_550 = 0;
  lStack_548 = 0;
  func_0x0651ffe0(&lStack_630);
  lVar22 = lStack_648;
  lVar14 = lStack_640;
  if (lStack_648 != 0) {
    for (; lVar22 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_640 = lVar22;
    func_0x0412a280(lStack_648,lStack_638 - lStack_648);
  }
  return plVar13;
}



/* ---- referenced strings ----
 * 0x12fb916  registerWorldDynamicProperties
 * 0x12fb924  ynamicProperties
 * 0x1315e86  registerEntityTypeDynamicProperties
 * 0x1315e96  peDynamicProperties
 * 0x13815a9  PropertyRegistry
 * 0x141e188  propertiesDefinition
 */
