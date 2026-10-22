/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6641eb0 (ELF vaddr 0x6541eb0)
 * Label: caller-of-callee
 * Body:  [[06641eb0, 06642d6b] [06642d70, 06643c02] [06643c10, 06644aab] [06644ab0, 06645711] [06645720, 06645b75] [06645b80, 066465d0] [066465e0, 06646810] [06646820, 06646a60]]
 * Ghidra: FUN_06641eb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_06641eb0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  code *pcVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  ulong *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined2 *puVar27;
  uint uVar28;
  code *pcVar29;
  code *pcVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined8 uStack_a08;
  byte bStack_a00;
  undefined2 uStack_9ff;
  undefined1 uStack_9fd;
  undefined4 uStack_9fc;
  long *plStack_9f8;
  undefined1 uStack_9f0;
  undefined4 uStack_9e8;
  undefined1 uStack_9e4;
  undefined2 uStack_9e3;
  undefined1 uStack_9e1;
  undefined1 uStack_9e0;
  undefined1 uStack_9df;
  undefined2 uStack_9de;
  undefined4 uStack_9dc;
  long lStack_9d8;
  uint uStack_9c4;
  uint uStack_9c0;
  undefined4 uStack_9bc;
  undefined1 uStack_9b8;
  undefined1 uStack_9b7;
  undefined8 uStack_9b0;
  undefined8 *puStack_9a8;
  undefined1 uStack_9a0;
  undefined8 uStack_998;
  long lStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  byte *pbStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  undefined8 *puStack_948;
  long *plStack_940;
  long *plStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  ulong uStack_920;
  byte bStack_910;
  undefined7 uStack_90f;
  undefined4 uStack_908;
  undefined1 uStack_904;
  undefined8 uStack_900;
  byte bStack_8f8;
  undefined2 uStack_8f7;
  undefined1 uStack_8f5;
  undefined1 uStack_8f4;
  undefined1 uStack_8f3;
  undefined2 uStack_8f2;
  uint uStack_8f0;
  undefined1 uStack_8ec;
  undefined1 uStack_8eb;
  undefined2 uStack_8ea;
  undefined1 uStack_8e8;
  undefined1 uStack_8e7;
  undefined4 uStack_8e6;
  undefined1 uStack_8e2;
  undefined1 uStack_8e1;
  undefined1 auStack_8e0 [16];
  undefined1 auStack_8d0 [16];
  undefined1 auStack_8c0 [24];
  code *pcStack_8a8;
  undefined1 auStack_880 [24];
  code *pcStack_868;
  undefined1 auStack_840 [24];
  code *pcStack_828;
  undefined1 auStack_7f8 [24];
  code *pcStack_7e0;
  long *plStack_7b0;
  undefined8 *puStack_7a8;
  undefined1 uStack_7a0;
  long lStack_798;
  long lStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_778;
  long lStack_770;
  ulong uStack_768;
  long lStack_760;
  undefined *puStack_758;
  undefined1 auStack_750 [16];
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  long lStack_710;
  long lStack_708;
  ulong *puStack_700;
  ulong *puStack_6f8;
  long lStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  code *pcStack_688;
  code *pcStack_680;
  ulong uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  ulong uStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  code *pcStack_640;
  code *pcStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  ulong uStack_620;
  undefined1 auStack_610 [24];
  code *pcStack_5f8;
  undefined1 auStack_5d0 [24];
  code *pcStack_5b8;
  undefined1 auStack_588 [24];
  code *pcStack_570;
  undefined4 uStack_548;
  undefined2 uStack_544;
  undefined2 uStack_542;
  undefined4 uStack_540;
  undefined2 uStack_53c;
  undefined1 uStack_53a;
  undefined1 uStack_539;
  undefined *puStack_538;
  undefined1 auStack_530 [8];
  undefined8 uStack_528;
  code *pcStack_520;
  undefined1 auStack_518 [16];
  undefined8 uStack_508;
  code *pcStack_500;
  code *pcStack_4f8;
  long *plStack_4f0;
  ulong uStack_4e8;
  code *pcStack_4e0;
  undefined1 auStack_4d0 [24];
  code *apcStack_4b8 [3];
  code *pcStack_4a0;
  undefined1 auStack_490 [24];
  code *pcStack_478;
  undefined1 auStack_470 [24];
  code *pcStack_458;
  undefined1 auStack_448 [24];
  code *apcStack_430 [2];
  undefined1 auStack_420 [24];
  code *pcStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [8];
  code *pcStack_3c8;
  code *pcStack_3b8;
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [8];
  code *pcStack_388;
  code *pcStack_378;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [16];
  code *pcStack_340;
  code *pcStack_338;
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [24];
  code *pcStack_2f0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [16];
  code *pcStack_278;
  code *pcStack_270;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [8];
  code *pcStack_238;
  code *pcStack_228;
  undefined1 auStack_210 [24];
  code *pcStack_1f8;
  undefined1 auStack_1c8 [24];
  code *pcStack_1b0;
  undefined4 *puStack_180;
  undefined8 *puStack_178;
  undefined8 **ppuStack_170;
  uint *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  long lStack_38;
  
  uStack_548 = 0x696c431a;
  uStack_544 = 0x6270;
  uStack_542 = 0x616f;
  uStack_540 = 0x74496472;
  uStack_53c = 0x6d65;
  uStack_53a = 0;
  lStack_798 = 0;
  lStack_790 = 0;
  lStack_788 = 0;
  lStack_780 = 0;
  lStack_778 = 0;
  lStack_770 = 0;
  uStack_768 = 0;
  lStack_760 = 0;
  puStack_758 = (undefined *)0x0;
  func_0x048b1dc0(auStack_750);
  func_0x048b1dc0(&uStack_740);
  uStack_6a0 = 0;
  lStack_698 = 0;
  lStack_6b0 = 0;
  uStack_6a8 = 0;
  lStack_6c0 = 0;
  lStack_6b8 = 0;
  lStack_6d0 = 0;
  lStack_6c8 = 0;
  uStack_6e0 = 0;
  lStack_6d8 = 0;
  lStack_6f0 = 0;
  uStack_6e8 = 0;
  puStack_700 = (ulong *)0x0;
  puStack_6f8 = (ulong *)0x0;
  lStack_710 = 0;
  lStack_708 = 0;
  lStack_720 = 0;
  lStack_718 = 0;
  lStack_730 = 0;
  lStack_728 = 0;
  if ((uStack_768 & 1) == 0) {
    puStack_758 = puStack_538;
    uStack_768 = CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548));
    lStack_760 = CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540)));
  }
  else {
    FUN_04885120(&uStack_768,(long)&uStack_548 + 1,0xd);
    if ((uStack_548 & 1) != 0) {
      func_0x0412a280(puStack_538,
                      CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548)) & 0xfffffffffffffffe);
    }
  }
  uStack_9e8 = 0x756f730c;
  uStack_9e4 = 0x72;
  uStack_9e3 = 0x6563;
  uStack_9e1 = 0;
  bStack_8f8 = 0;
  uStack_8f7 = 0;
  uStack_8f5 = 0;
  uStack_8f4 = 0;
  uStack_8f3 = 0;
  uStack_8f2 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8eb = 0;
  uStack_8ea = 0;
  uStack_8e8 = 0;
  uStack_8e7 = 0;
  uStack_8e6 = 0;
  uStack_8e2 = 0;
  uStack_8e1 = 0;
  func_0x048b1dc0(auStack_8e0);
  func_0x0652b590(auStack_8d0);
  if ((bStack_8f8 & 1) == 0) {
    if ((uStack_9e8 & 1) == 0) {
      uStack_8e8 = (undefined1)lStack_9d8;
      uStack_8e7 = (undefined1)((ulong)lStack_9d8 >> 8);
      uStack_8e6 = (undefined4)((ulong)lStack_9d8 >> 0x10);
      uStack_8e2 = (undefined1)((ulong)lStack_9d8 >> 0x30);
      uStack_8e1 = (undefined1)((ulong)lStack_9d8 >> 0x38);
      uStack_8f0 = CONCAT22(uStack_9de,CONCAT11(uStack_9df,uStack_9e0));
      uStack_8f7 = (undefined2)(uStack_9e8 >> 8);
      uStack_8f5 = (undefined1)(uStack_9e8 >> 0x18);
      uStack_8f4 = uStack_9e4;
      uStack_8f3 = (undefined1)uStack_9e3;
      uStack_8f2 = (undefined2)(CONCAT13(uStack_9e1,CONCAT21(uStack_9e3,uStack_9e4)) >> 0x10);
      uStack_8ec = (undefined1)uStack_9dc;
      uStack_8eb = (undefined1)((uint)uStack_9dc >> 8);
      uStack_8ea = (undefined2)((uint)uStack_9dc >> 0x10);
      bStack_8f8 = (byte)uStack_9e8;
    }
    else {
      func_0x04885070(&bStack_8f8,lStack_9d8,
                      CONCAT44(uStack_9dc,CONCAT22(uStack_9de,CONCAT11(uStack_9df,uStack_9e0))));
    }
  }
  else {
    bVar31 = (uStack_9e8 & 1) != 0;
    lVar14 = (long)&uStack_9e8 + 1;
    if (bVar31) {
      lVar14 = lStack_9d8;
    }
    uVar21 = (ulong)((byte)uStack_9e8 >> 1);
    if (bVar31) {
      uVar21 = CONCAT44(uStack_9dc,CONCAT22(uStack_9de,CONCAT11(uStack_9df,uStack_9e0)));
    }
    FUN_04885120(&bStack_8f8,lVar14,uVar21);
  }
  plVar17 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar17 == (long *)0x0) {
    func_0x048b0de0(&uStack_548,&pcStack_688);
    uVar6 = uStack_540;
    _DAT_0f54fd90 = uStack_548;
    uRam000000000f54fd94 = CONCAT22(uStack_542,uStack_544);
    uVar11 = CONCAT13(uStack_539,CONCAT12(uStack_53a,uStack_53c));
    uStack_548 = 0;
    uStack_544 = 0;
    uStack_542 = 0;
    uStack_540 = 0;
    uStack_53c = 0;
    uStack_53a = 0;
    uStack_539 = 0;
    plVar17 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar6;
    uRam000000000f54fd9c = uVar11;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar20 = plVar17 + 1;
      lVar14 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = (long *)CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar20 = plVar17 + 1;
      lVar14 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f57ecc0 == '\0') && (iVar13 = FUN_04108328(&DAT_0f57ecc0), iVar13 != 0)) {
    func_0x0668a4f0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f57ec40,0xf53dab8);
    func_0x0410844d(&DAT_0f57ecc0);
  }
  plVar20 = (long *)(*plVar17 +
                    (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                           *(uint *)(_DAT_0f57ec40 + 4)) * 8);
  do {
    lVar14 = *plVar20;
    if (lVar14 == -1) goto LAB_066421b0;
    plVar20 = (long *)(plVar17[3] + lVar14 * 0x18);
  } while (*(uint *)(plVar17[3] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f57ec40 + 4));
  if (plVar20 == (long *)plVar17[4]) {
LAB_066421b0:
    auStack_8e0._0_8_ = &DAT_0f57ec40;
  }
  else {
    auStack_8e0._0_8_ = plVar20[2];
  }
  uStack_678 = 0;
  uStack_660 = 0;
  uStack_628 = 0;
  uStack_620 = 0;
  pcStack_638 = (code *)0x0;
  uStack_630 = 0;
  puStack_648 = (undefined8 *)0x0;
  pcStack_640 = (code *)0x0;
  puStack_658 = (undefined8 *)0x0;
  puStack_650 = (undefined8 *)0x0;
  pcStack_688 = (code *)0x0;
  pcStack_680 = (code *)0x0;
  uStack_670 = 0x6f7246646165721a;
  uStack_668 = 0x646c726f576d;
  auStack_8e0._8_8_ = plVar17;
  func_0x06523ef0(&uStack_548,auStack_8d0);
  uStack_a08._0_4_ = 0;
  uStack_a08._4_4_ = 0;
  bStack_a00 = 0;
  uStack_9ff = 0;
  uStack_9fd = 0;
  uStack_9fc = 0;
  plStack_9f8 = (long *)0x0;
  uStack_980 = (undefined8 **)((ulong)uStack_980 & 0xffffffffffffff00);
  uStack_988 = (undefined8 **)&uStack_a08;
  puStack_9a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (puStack_9a8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  uStack_a08._0_4_ = (uint)puStack_9a8;
  uStack_a08._4_4_ = (undefined4)((ulong)puStack_9a8 >> 0x20);
  bStack_a00 = (byte)puStack_9a8;
  uStack_9ff = (undefined2)((ulong)puStack_9a8 >> 8);
  uStack_9fd = (undefined1)((ulong)puStack_9a8 >> 0x18);
  plStack_9f8 = puStack_9a8 + 0x23;
  ppuStack_170 = &puStack_9a8;
  puStack_168 = &uStack_9c0;
  uStack_160 = uStack_160 & 0xffffffffffffff00;
  uStack_9fc = uStack_a08._4_4_;
  uStack_9c0 = (uint)uStack_a08;
  uStack_9bc = uStack_a08._4_4_;
  puStack_178 = &uStack_a08;
  func_0x06523ef0(puStack_9a8,&uStack_548);
  lVar14 = CONCAT44(uStack_9bc,uStack_9c0) + 0x118;
  bStack_a00 = (byte)lVar14;
  uStack_9ff = (undefined2)((ulong)lVar14 >> 8);
  uStack_9fd = (undefined1)((ulong)lVar14 >> 0x18);
  uStack_9fc = (undefined4)((ulong)lVar14 >> 0x20);
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(auStack_470);
  }
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(apcStack_4b8);
  }
  if (pcStack_4e0 != (code *)0x0) {
    (*pcStack_4e0)(&pcStack_4f8);
  }
  if (pcStack_520 != (code *)0x0) {
    (*pcStack_520)(&puStack_538);
  }
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar15 + 8) = 0;
  *(undefined8 *)(pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f040fe0;
  uVar11 = func_0x0d858500(&uStack_a08);
  pcVar30 = pcVar15 + 0x18;
  pcVar15[0x20] = (code)0x0;
  *(undefined4 *)(pcVar15 + 0x24) = uVar11;
  *(undefined4 *)(pcVar15 + 0x28) = 0;
  *(undefined8 *)(pcVar15 + 0x30) = 0;
  *(undefined8 *)(pcVar15 + 0x38) = 0;
  *(undefined8 *)(pcVar15 + 0x40) = 0;
  *(undefined **)(pcVar15 + 0x18) = &UNK_0f041030;
  *(uint *)(pcVar15 + 0x48) = (uint)uStack_a08;
  *(undefined4 *)(pcVar15 + 0x4c) = uStack_a08._4_4_;
  *(uint *)(pcVar15 + 0x50) = CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00));
  *(undefined4 *)(pcVar15 + 0x54) = uStack_9fc;
  *(long **)(pcVar15 + 0x58) = plStack_9f8;
  uStack_a08._0_4_ = 0;
  uStack_a08._4_4_ = 0;
  bStack_a00 = 0;
  uStack_9ff = 0;
  uStack_9fd = 0;
  uStack_9fc = 0;
  plStack_9f8 = (long *)0x0;
  uVar11 = func_0x0d858620(pcVar30);
  pcVar29 = pcStack_638;
  *(undefined4 *)(pcVar15 + 0x28) = uVar11;
  pcStack_640 = pcVar30;
  if (pcStack_638 != (code *)0x0) {
    LOCK();
    plVar17 = (long *)((long)pcStack_638 + 8);
    lVar14 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      lVar14 = *(long *)pcStack_638;
      pcStack_638 = pcVar15;
      (**(code **)(lVar14 + 0x10))(pcVar29);
      func_0x0412c2d0(pcVar29);
      pcVar15 = pcStack_638;
    }
  }
  pcStack_638 = pcVar15;
  func_0x0668bc30(&uStack_988);
  uStack_548 = 0xf55160ec;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_53a = 0;
  uStack_539 = 0;
  puStack_538._0_4_ = 0;
  auStack_530 = (undefined1  [8])0x0;
  uStack_528 = (long *)&UNK_065b4120;
  pcStack_520 = (code *)&SUB_048b06d0;
  auStack_518._0_8_ = &UNK_0668be80;
  auStack_518._8_8_ = 0;
  uStack_508._0_4_ = 0;
  pcStack_500 = (code *)0x0;
  pcStack_4f8 = (code *)0x0;
  FUN_049057f0(&uStack_988,&uStack_548);
  func_0x048aea50(&uStack_548);
  uStack_160 = uStack_970;
  puStack_178 = uStack_988;
  ppuStack_170 = uStack_980;
  uStack_548 = 0xf55160ec;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_53a = 0;
  uStack_539 = 0;
  puStack_538 = (undefined *)CONCAT44(puStack_538._4_4_,1);
  auStack_530 = (undefined1  [8])0x0;
  uStack_528 = (long *)&UNK_065b4120;
  pcStack_520 = (code *)&SUB_048b06d0;
  auStack_518._0_8_ = &UNK_0668c090;
  auStack_518._8_8_ = 0;
  uStack_508 = (ulong)uStack_508._4_4_ << 0x20;
  pcStack_500 = (code *)0x0;
  pcStack_4f8 = (code *)0x0;
  FUN_049057f0(&puStack_178,&uStack_548);
  func_0x048aea50(&uStack_548);
  func_0x0668bc30(&puStack_178);
  if ((DAT_0f57bf90 == '\0') && (iVar13 = FUN_04108328(&DAT_0f57bf90), iVar13 != 0)) {
    func_0x065e0760(0xf57bf78);
    func_0x0410844d(&DAT_0f57bf90);
  }
  uStack_548 = _DAT_0f57bf7c;
  uStack_540 = 1;
  uStack_53c = 0;
  uStack_53a = 0;
  uStack_539 = 0;
  puStack_538 = &UNK_065e06a0;
  auStack_530 = (undefined1  [8])&UNK_0668c280;
  func_0x065abe60(&puStack_178);
  func_0x0668bc30(&puStack_178);
  if ((DAT_0f57bfc0 == '\0') && (iVar13 = FUN_04108328(&DAT_0f57bfc0), iVar13 != 0)) {
    func_0x065dff60(0xf57bfa8);
    func_0x0410844d(&DAT_0f57bfc0);
  }
  uStack_548 = _DAT_0f57bfac;
  uStack_540 = 1;
  uStack_53c = 0;
  uStack_53a = 0;
  uStack_539 = 0;
  puStack_538 = &UNK_065dfea0;
  auStack_530 = (undefined1  [8])&UNK_0668c760;
  func_0x065abe60(&puStack_178);
  puStack_538 = (undefined *)
                CONCAT17(uStack_8e1,
                         CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
  uStack_548 = CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8));
  uStack_544 = (undefined2)(CONCAT15(uStack_8f3,CONCAT14(uStack_8f4,uStack_548)) >> 0x20);
  uStack_542 = uStack_8f2;
  uStack_540 = uStack_8f0;
  uStack_53c = (undefined2)(CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)) >> 0x20);
  uStack_53a = (undefined1)uStack_8ea;
  uStack_539 = (undefined1)((ushort)uStack_8ea >> 8);
  bStack_8f8 = 0;
  uStack_8f7 = 0;
  uStack_8f5 = 0;
  uStack_8f4 = 0;
  uStack_8f3 = 0;
  uStack_8f2 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8eb = 0;
  uStack_8ea = 0;
  uStack_8e8 = 0;
  uStack_8e7 = 0;
  uStack_8e6 = 0;
  uStack_8e2 = 0;
  uStack_8e1 = 0;
  auStack_530 = (undefined1  [8])auStack_8e0._0_8_;
  uStack_528 = (long *)auStack_8e0._8_8_;
  func_0x065281f0(&pcStack_520,auStack_8d0);
  puStack_178 = (undefined8 *)0x0;
  ppuStack_170 = (undefined8 **)0x0;
  puStack_168 = (uint *)0x0;
  uStack_980 = (undefined8 **)((ulong)uStack_980 & 0xffffffffffffff00);
  uStack_988 = &puStack_178;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar3 = puVar16 + 0x28;
  puStack_178 = puVar16;
  puStack_168 = (uint *)puVar3;
  if ((uStack_548 & 1) == 0) {
    puVar16[2] = puStack_538;
    *puVar16 = CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548));
    puVar16[1] = CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540)));
    ppuStack_170 = (undefined8 **)puVar16;
  }
  else {
    ppuStack_170 = (undefined8 **)puVar16;
    func_0x0412e5e0(puVar16,puStack_538,
                    CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540))));
  }
  *(undefined4 *)(puVar16 + 3) = auStack_530._0_4_;
  *(undefined4 *)((long)puVar16 + 0x1c) = auStack_530._4_4_;
  *(undefined4 *)(puVar16 + 4) = (undefined4)uStack_528;
  *(undefined4 *)((long)puVar16 + 0x24) = uStack_528._4_4_;
  func_0x06523ef0(puVar16 + 5,&pcStack_520);
  ppuStack_170 = (undefined8 **)puVar3;
  if (apcStack_430[0] != (code *)0x0) {
    (*apcStack_430[0])(auStack_448);
  }
  if (pcStack_478 != (code *)0x0) {
    (*pcStack_478)(auStack_490);
  }
  if (apcStack_4b8[0] != (code *)0x0) {
    (*apcStack_4b8[0])(auStack_4d0);
  }
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_518 + 8);
  }
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(puStack_538,
                    CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548)) & 0xfffffffffffffffe);
  }
  plStack_7b0 = param_1;
  uVar12 = (**(code **)(*(long *)pcStack_640 + 0x20))();
  uVar22 = ((long)ppuStack_170 - (long)puStack_178 >> 6) * -0x3333333333333333;
  uVar21 = 0;
  if ((uVar12 != 0) && ((uint)uVar22 != 0)) {
    uVar28 = 0;
    uVar21 = 0;
    uStack_9c4 = uVar12;
    do {
      auVar32 = (**(code **)(*(long *)pcStack_640 + 0x28))(pcStack_640,uVar28);
      lVar26 = auVar32._8_8_;
      lVar14 = auVar32._0_8_;
      auVar32 = func_0x06527d70();
      if (auVar32._8_8_ == lVar26) {
        if (auVar32._0_8_ == 0) {
          lVar25 = func_0x048aead0(auVar32._8_8_);
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar14 != 0) goto LAB_066428c1;
LAB_066428de:
          lVar25 = func_0x048aead0(lVar26);
          if (iVar13 != *(int *)(lVar25 + 8)) goto LAB_066428f0;
        }
        else {
          iVar13 = *(int *)(auVar32._0_8_ + 8);
          if (lVar14 == 0) goto LAB_066428de;
LAB_066428c1:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_066428f0;
        }
      }
      else {
LAB_066428f0:
        auVar32 = func_0x06527e30();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06642ae8;
        }
        auVar32 = func_0x06527ef0();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06642ae8;
        }
        auVar32 = func_0x06527fb0();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06642ae8;
        }
        auVar32 = func_0x06528070();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06642ae8;
        }
        auVar32 = func_0x06528130();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06642ae8;
        }
        puVar16 = puStack_178;
        ppuVar5 = ppuStack_170;
        if (puStack_178[uVar21 * 0x28 + 4] != lVar26) goto joined_r0x06642d00;
        if (puStack_178[uVar21 * 0x28 + 3] == 0) {
          lVar25 = func_0x048aead0();
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar14 != 0) goto LAB_06642ab8;
LAB_06642ad0:
          lVar14 = func_0x048aead0(lVar26);
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06642ced;
        }
        else {
          iVar13 = *(int *)(puStack_178[uVar21 * 0x28 + 3] + 8);
          if (lVar14 == 0) goto LAB_06642ad0;
LAB_06642ab8:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06642ced;
        }
        uVar21 = (ulong)((int)uVar21 + 1);
      }
LAB_06642ae8:
    } while (((uint)uVar21 < (uint)uVar22) && (uVar28 = uVar28 + 1, uVar28 < uStack_9c4));
    uVar22 = ((long)ppuStack_170 - (long)puStack_178 >> 6) * -0x3333333333333333;
  }
  puVar16 = puStack_658;
  if (uVar22 == uVar21) {
    puVar3 = puStack_650;
    if (puStack_658 != (undefined8 *)0x0) {
      while (puVar16 != puVar3) {
        func_0x05fe8450(puVar3 + -0x28);
        puVar3 = puVar3 + -0x28;
      }
      puStack_650 = puVar16;
      func_0x0412a280(puStack_658,(long)puStack_648 - (long)puStack_658);
    }
    puStack_648 = (undefined8 *)puStack_168;
    if (puStack_700 < puStack_6f8) {
      *puStack_700 = 0;
      puStack_700[1] = 0;
      puStack_700[2] = 0;
      *puStack_700 = (ulong)pcStack_688;
      puStack_700[1] = (ulong)pcStack_680;
      puStack_700[2] = uStack_678;
      pcStack_688 = (code *)0x0;
      pcStack_680 = (code *)0x0;
      uStack_678 = 0;
      puStack_700[5] = uStack_660;
      puStack_700[3] = uStack_670;
      puStack_700[4] = uStack_668;
      uStack_670 = 0;
      uStack_668 = 0;
      uStack_660 = 0;
      puStack_700[6] = 0;
      puStack_700[7] = 0;
      puStack_700[8] = 0;
      puStack_700[6] = (ulong)puStack_178;
      puStack_700[7] = (ulong)ppuStack_170;
      puStack_700[8] = (ulong)puStack_168;
      puStack_658 = (undefined8 *)0x0;
      puStack_650 = (undefined8 *)0x0;
      puStack_648 = (undefined8 *)0x0;
      puStack_700[9] = (ulong)pcStack_640;
      puStack_700[10] = (ulong)pcStack_638;
      pcStack_640 = (code *)0x0;
      pcStack_638 = (code *)0x0;
      puStack_700[0xb] = 0;
      puStack_700[0xc] = 0;
      puStack_700[0xd] = 0;
      *(undefined4 *)(puStack_700 + 0xb) = (undefined4)uStack_630;
      *(undefined4 *)((long)puStack_700 + 0x5c) = uStack_630._4_4_;
      *(undefined4 *)(puStack_700 + 0xc) = (undefined4)uStack_628;
      *(undefined4 *)((long)puStack_700 + 100) = uStack_628._4_4_;
      puStack_700[0xd] = uStack_620;
      uStack_630 = 0;
      uStack_628 = 0;
      uStack_620 = 0;
      puStack_700 = puStack_700 + 0xe;
    }
    else {
      puStack_658 = puStack_178;
      puStack_650 = ppuStack_170;
      puStack_700 = (ulong *)func_0x0652ac80(&lStack_708,&pcStack_688);
    }
    puVar19 = puStack_700 + -0xe;
    lVar14 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
  }
  else {
LAB_06642ced:
    puVar16 = puStack_178;
    ppuVar5 = ppuStack_170;
    if (puStack_178 != (undefined8 *)0x0) {
joined_r0x06642d00:
      while (puVar3 = puStack_178, (undefined8 **)puStack_178 != ppuVar5) {
        puStack_178 = puVar16;
        func_0x05fe8450(ppuVar5 + -0x28);
        puVar16 = puStack_178;
        ppuVar5 = ppuVar5 + -0x28;
        puStack_178 = puVar3;
      }
      ppuStack_170 = (undefined8 **)puStack_178;
      puStack_178 = puVar16;
      func_0x0412a280(puVar16,(long)puStack_168 - (long)puVar16);
    }
    puVar19 = (ulong *)0xf57e380;
    lVar14 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
  }
  if (lVar14 != 0) {
    lVar25 = CONCAT44(uStack_9fc,CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00)));
    lVar26 = lVar14;
    if (lVar14 != lVar25) {
      lVar26 = lVar25 + -0x40;
      do {
        if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
          (**(code **)(lVar26 + 0x18))(lVar26);
        }
        if (*(code **)(lVar26 + -0x30) != (code *)0x0) {
          (**(code **)(lVar26 + -0x30))(lVar26 + -0x48);
        }
        if (*(code **)(lVar26 + -0x70) != (code *)0x0) {
          (**(code **)(lVar26 + -0x70))(lVar26 + -0x88);
        }
        if (*(code **)(lVar26 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar26 + -0xb0))(lVar26 + -200);
        }
        lVar25 = lVar26 + -0xd8;
        lVar26 = lVar26 + -0x118;
      } while (lVar25 != lVar14);
      lVar26 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
    }
    bStack_a00 = (byte)lVar14;
    uStack_9ff = (undefined2)((ulong)lVar14 >> 8);
    uStack_9fd = (undefined1)((ulong)lVar14 >> 0x18);
    uStack_9fc = (undefined4)((ulong)lVar14 >> 0x20);
    func_0x0412a280(lVar26,(long)plStack_9f8 - lVar26);
  }
  func_0x05f93280(&pcStack_688);
  func_0x064e40a0(puVar19);
  if (pcStack_7e0 != (code *)0x0) {
    (*pcStack_7e0)(auStack_7f8);
  }
  if (pcStack_828 != (code *)0x0) {
    (*pcStack_828)(auStack_840);
  }
  if (pcStack_868 != (code *)0x0) {
    (*pcStack_868)(auStack_880);
  }
  if (pcStack_8a8 != (code *)0x0) {
    (*pcStack_8a8)(auStack_8c0);
  }
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  if ((uStack_9e8 & 1) != 0) {
    func_0x0412a280(lStack_9d8,
                    CONCAT17(uStack_9e1,CONCAT25(uStack_9e3,CONCAT14(uStack_9e4,uStack_9e8))) &
                    0xfffffffffffffffe);
  }
  uStack_9c0 = 0x636f6c10;
  uStack_9bc = 0x6f697461;
  uStack_9b8 = 0x6e;
  uStack_9b7 = 0;
  func_0x066475d0(&bStack_8f8,&uStack_9c0);
  puStack_9a8 = (undefined8 *)0x736e6f6974706f0e;
  uStack_9a0 = 0;
  func_0x066476a0(&pcStack_688,&puStack_9a8);
  bStack_910 = 0x16;
  uStack_90f = 0x6361736e617274;
  uStack_908 = 0x6e6f6974;
  uStack_904 = 0;
  func_0x06647950(&puStack_178,&bStack_910);
  pbStack_978 = (byte *)0x0;
  uStack_960 = 0;
  uStack_928 = 0;
  uStack_920 = 0;
  plStack_938 = (long *)0x0;
  uStack_930 = 0;
  puStack_948 = (undefined8 *)0x0;
  plStack_940 = (long *)0x0;
  uStack_958 = 0;
  uStack_950 = 0;
  uStack_988 = (undefined8 **)0x0;
  uStack_980 = (undefined8 **)0x0;
  uStack_970 = 0x6f54657469727718;
  uStack_968 = 0x646c726f57;
  func_0x06523ef0(&uStack_548,auStack_8d0);
  func_0x06523ef0(apcStack_430,&uStack_660);
  func_0x06523ef0(auStack_318,&uStack_150);
  uStack_9e8 = 0;
  uStack_9e4 = 0;
  uStack_9e3 = 0;
  uStack_9e1 = 0;
  uStack_9e0 = 0;
  uStack_9df = 0;
  uStack_9de = 0;
  uStack_9dc = 0;
  lStack_9d8 = 0;
  uStack_7a0 = 0;
  puStack_7a8 = (undefined8 *)&uStack_9e8;
  lStack_990 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x348);
  if (lStack_990 == 0) {
    func_0x0eec74c0(0x348,0);
  }
  uStack_9e8 = (uint)lStack_990;
  uStack_9e4 = (undefined1)((ulong)lStack_990 >> 0x20);
  uStack_9e3 = (undefined2)((ulong)lStack_990 >> 0x28);
  uStack_9e1 = (undefined1)((ulong)lStack_990 >> 0x38);
  uStack_9e0 = (undefined1)lStack_990;
  uStack_9df = (undefined1)((ulong)lStack_990 >> 8);
  uStack_9de = (undefined2)((ulong)lStack_990 >> 0x10);
  uStack_9dc = (undefined4)((ulong)lStack_990 >> 0x20);
  lStack_9d8 = lStack_990 + 0x348;
  bStack_a00 = (byte)&lStack_38;
  uStack_9ff = (undefined2)((ulong)&lStack_38 >> 8);
  uStack_9fd = (undefined1)((ulong)&lStack_38 >> 0x18);
  uStack_9fc = (undefined4)((ulong)&lStack_38 >> 0x20);
  plStack_9f8 = &lStack_990;
  uStack_9f0 = 0;
  lStack_38 = lStack_990;
  uStack_a08 = (undefined8 *)&uStack_9e8;
  func_0x06523ef0(lStack_990,&uStack_548);
  lStack_990 = lStack_990 + 0x118;
  func_0x06523ef0(lStack_990,apcStack_430);
  lStack_990 = lStack_990 + 0x118;
  func_0x06523ef0(lStack_990,auStack_318);
  lVar14 = lStack_990 + 0x118;
  uStack_9e0 = (undefined1)lVar14;
  uStack_9df = (undefined1)((ulong)lVar14 >> 8);
  uStack_9de = (undefined2)((ulong)lVar14 >> 0x10);
  uStack_9dc = (undefined4)((ulong)lVar14 >> 0x20);
  if (pcStack_228 != (code *)0x0) {
    (*pcStack_228)(auStack_240);
  }
  if (pcStack_270 != (code *)0x0) {
    (*pcStack_270)(auStack_288);
  }
  if ((code *)CONCAT44(uStack_2ac,uStack_2b0) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_2ac,uStack_2b0))(&puStack_2c8);
  }
  if (pcStack_2f0 != (code *)0x0) {
    (*pcStack_2f0)(auStack_308);
  }
  if (pcStack_340 != (code *)0x0) {
    (*pcStack_340)(auStack_358);
  }
  if (pcStack_388 != (code *)0x0) {
    (*pcStack_388)(auStack_3a0);
  }
  if (pcStack_3c8 != (code *)0x0) {
    (*pcStack_3c8)(auStack_3e0);
  }
  if (pcStack_408 != (code *)0x0) {
    (*pcStack_408)(auStack_420);
  }
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(auStack_470);
  }
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(apcStack_4b8);
  }
  if (pcStack_4e0 != (code *)0x0) {
    (*pcStack_4e0)(&pcStack_4f8);
  }
  if (pcStack_520 != (code *)0x0) {
    (*pcStack_520)(&puStack_538);
  }
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f0410e0;
  uVar11 = func_0x0d858500(&uStack_9e8);
  plVar20 = plVar17 + 3;
  *(undefined1 *)(plVar17 + 4) = 0;
  *(undefined4 *)((long)plVar17 + 0x24) = uVar11;
  *(undefined4 *)(plVar17 + 5) = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[3] = (long)&UNK_0f041130;
  *(uint *)(plVar17 + 9) = uStack_9e8;
  *(uint *)((long)plVar17 + 0x4c) = CONCAT13(uStack_9e1,CONCAT21(uStack_9e3,uStack_9e4));
  *(uint *)(plVar17 + 10) = CONCAT22(uStack_9de,CONCAT11(uStack_9df,uStack_9e0));
  *(undefined4 *)((long)plVar17 + 0x54) = uStack_9dc;
  plVar17[0xb] = lStack_9d8;
  uStack_9e8 = 0;
  uStack_9e4 = 0;
  uStack_9e3 = 0;
  uStack_9e1 = 0;
  uStack_9e0 = 0;
  uStack_9df = 0;
  uStack_9de = 0;
  uStack_9dc = 0;
  lStack_9d8 = 0;
  uVar11 = func_0x0d858620(plVar20);
  plVar2 = plStack_938;
  *(undefined4 *)(plVar17 + 5) = uVar11;
  plStack_940 = plVar20;
  if (plStack_938 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_938 + 1;
    lVar14 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      lVar14 = *plStack_938;
      plStack_938 = plVar17;
      (**(code **)(lVar14 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar17 = plStack_938;
    }
  }
  plStack_938 = plVar17;
  func_0x06690f10();
  func_0x06691eb0();
  puStack_538 = (undefined *)
                CONCAT17(uStack_8e1,
                         CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
  uStack_548 = CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8));
  uStack_544 = (undefined2)(CONCAT15(uStack_8f3,CONCAT14(uStack_8f4,uStack_548)) >> 0x20);
  uStack_542 = uStack_8f2;
  uStack_540 = uStack_8f0;
  uStack_53c = (undefined2)(CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)) >> 0x20);
  uStack_53a = (undefined1)uStack_8ea;
  uStack_539 = (undefined1)((ushort)uStack_8ea >> 8);
  bStack_8f8 = 0;
  uStack_8f7 = 0;
  uStack_8f5 = 0;
  uStack_8f4 = 0;
  uStack_8f3 = 0;
  uStack_8f2 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8eb = 0;
  uStack_8ea = 0;
  uStack_8e8 = 0;
  uStack_8e7 = 0;
  uStack_8e6 = 0;
  uStack_8e2 = 0;
  uStack_8e1 = 0;
  auStack_530 = (undefined1  [8])auStack_8e0._0_8_;
  uStack_528 = (long *)auStack_8e0._8_8_;
  func_0x065281f0(&pcStack_520,auStack_8d0);
  uStack_3f8 = uStack_678;
  pcStack_408 = pcStack_688;
  uStack_400 = (ulong)pcStack_680;
  pcStack_688 = (code *)0x0;
  pcStack_680 = (code *)0x0;
  uStack_678 = 0;
  uStack_3f0 = (undefined4)uStack_670;
  uStack_3ec = uStack_670._4_4_;
  uStack_3e8 = (undefined4)uStack_668;
  uStack_3e4 = uStack_668._4_4_;
  func_0x065281f0(auStack_3e0,&uStack_660);
  puStack_2b8 = (undefined8 *)puStack_168;
  puStack_2c8 = puStack_178;
  puStack_2c0 = ppuStack_170;
  puStack_178 = (undefined8 *)0x0;
  ppuStack_170 = (undefined8 **)0x0;
  puStack_168 = (uint *)0x0;
  uStack_2b0 = (undefined4)uStack_160;
  uStack_2ac = uStack_160._4_4_;
  uStack_2a8 = (undefined4)uStack_158;
  uStack_2a4 = uStack_158._4_4_;
  func_0x065281f0(auStack_2a0,&uStack_150);
  uStack_a08._0_4_ = 0;
  uStack_a08._4_4_ = 0;
  bStack_a00 = 0;
  uStack_9ff = 0;
  uStack_9fd = 0;
  uStack_9fc = 0;
  plStack_9f8 = (long *)0x0;
  puStack_7a8 = &uStack_a08;
  uStack_7a0 = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3c0);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x3c0,0);
  }
  uStack_a08._0_4_ = (uint)puVar16;
  uStack_a08._4_4_ = (undefined4)((ulong)puVar16 >> 0x20);
  bStack_a00 = (byte)puVar16;
  uStack_9ff = (undefined2)((ulong)puVar16 >> 8);
  uStack_9fd = (undefined1)((ulong)puVar16 >> 0x18);
  puVar3 = puVar16 + 0x78;
  uStack_9fc = uStack_a08._4_4_;
  plStack_9f8 = puVar3;
  if ((uStack_548 & 1) == 0) {
    puVar16[2] = puStack_538;
    *puVar16 = CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548));
    puVar16[1] = CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540)));
  }
  else {
    func_0x0412e5e0(puVar16,puStack_538,
                    CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540))));
  }
  *(undefined4 *)(puVar16 + 3) = auStack_530._0_4_;
  *(undefined4 *)((long)puVar16 + 0x1c) = auStack_530._4_4_;
  *(undefined4 *)(puVar16 + 4) = (undefined4)uStack_528;
  *(undefined4 *)((long)puVar16 + 0x24) = uStack_528._4_4_;
  func_0x06523ef0(puVar16 + 5,&pcStack_520);
  if (((ulong)pcStack_408 & 1) == 0) {
    puVar16[0x2a] = uStack_3f8;
    puVar16[0x28] = pcStack_408;
    puVar16[0x29] = uStack_400;
  }
  else {
    func_0x0412e5e0(puVar16 + 0x28,uStack_3f8,uStack_400);
  }
  *(undefined4 *)(puVar16 + 0x2b) = uStack_3f0;
  *(undefined4 *)((long)puVar16 + 0x15c) = uStack_3ec;
  *(undefined4 *)(puVar16 + 0x2c) = uStack_3e8;
  *(undefined4 *)((long)puVar16 + 0x164) = uStack_3e4;
  func_0x06523ef0(puVar16 + 0x2d,auStack_3e0);
  if (((ulong)puStack_2c8 & 1) == 0) {
    puVar16[0x52] = puStack_2b8;
    puVar16[0x50] = puStack_2c8;
    puVar16[0x51] = puStack_2c0;
  }
  else {
    func_0x0412e5e0(puVar16 + 0x50,puStack_2b8,puStack_2c0);
  }
  *(undefined4 *)(puVar16 + 0x53) = uStack_2b0;
  *(undefined4 *)((long)puVar16 + 0x29c) = uStack_2ac;
  *(undefined4 *)(puVar16 + 0x54) = uStack_2a8;
  *(undefined4 *)((long)puVar16 + 0x2a4) = uStack_2a4;
  func_0x06523ef0(puVar16 + 0x55,auStack_2a0);
  bStack_a00 = (byte)puVar3;
  uStack_9ff = (undefined2)((ulong)puVar3 >> 8);
  uStack_9fd = (undefined1)((ulong)puVar3 >> 0x18);
  uStack_9fc = (undefined4)((ulong)puVar3 >> 0x20);
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(auStack_250);
  }
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(auStack_290);
  }
  if (((ulong)puStack_2c8 & 1) != 0) {
    func_0x0412a280(puStack_2b8,(ulong)puStack_2c8 & 0xfffffffffffffffe);
  }
  if (pcStack_2f0 != (code *)0x0) {
    (*pcStack_2f0)(auStack_308);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(auStack_350);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (pcStack_3b8 != (code *)0x0) {
    (*pcStack_3b8)(auStack_3d0);
  }
  if (((ulong)pcStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,(ulong)pcStack_408 & 0xfffffffffffffffe);
  }
  if (apcStack_430[0] != (code *)0x0) {
    (*apcStack_430[0])(auStack_448);
  }
  if (pcStack_478 != (code *)0x0) {
    (*pcStack_478)(auStack_490);
  }
  if (apcStack_4b8[0] != (code *)0x0) {
    (*apcStack_4b8[0])(auStack_4d0);
  }
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_518 + 8);
  }
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(puStack_538,
                    CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548)) & 0xfffffffffffffffe);
  }
  uVar12 = (**(code **)(*plStack_940 + 0x20))();
  uVar21 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
  uVar22 = CONCAT44(uStack_9fc,CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00)));
  uVar23 = ((long)(uVar22 - uVar21) >> 6) * -0x3333333333333333;
  uVar24 = 0;
  if ((uVar12 != 0) && ((uint)uVar23 != 0)) {
    uVar28 = 0;
    uVar24 = 0;
    uStack_9c4 = uVar12;
    do {
      auVar32 = (**(code **)(*plStack_940 + 0x28))(plStack_940,uVar28);
      lVar26 = auVar32._8_8_;
      lVar14 = auVar32._0_8_;
      auVar32 = func_0x06527d70();
      if (auVar32._8_8_ != lVar26) {
LAB_066437b0:
        auVar32 = func_0x06527e30();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066439a5;
        }
        auVar32 = func_0x06527ef0();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066439a5;
        }
        auVar32 = func_0x06527fb0();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066439a5;
        }
        auVar32 = func_0x06528070();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066439a5;
        }
        auVar32 = func_0x06528130();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066439a5;
        }
        uVar21 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
        if (*(long *)(uVar21 + 0x20 + uVar24 * 0x140) != lVar26) goto LAB_06643b9f;
        lVar25 = *(long *)(uVar24 * 0x140 + uVar21 + 0x18);
        if (lVar25 == 0) {
          lVar25 = func_0x048aead0();
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar14 != 0) goto LAB_06643975;
LAB_0664398d:
          lVar14 = func_0x048aead0(lVar26);
          if (iVar13 == *(int *)(lVar14 + 8)) {
LAB_066439a2:
            uVar24 = (ulong)((int)uVar24 + 1);
            goto LAB_066439a5;
          }
        }
        else {
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar14 == 0) goto LAB_0664398d;
LAB_06643975:
          if (iVar13 == *(int *)(lVar14 + 8)) goto LAB_066439a2;
        }
        uVar21 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
        goto LAB_06643b9a;
      }
      if (auVar32._0_8_ == 0) {
        lVar25 = func_0x048aead0(auVar32._8_8_);
        iVar13 = *(int *)(lVar25 + 8);
        if (lVar14 != 0) goto LAB_06643781;
LAB_0664379e:
        lVar25 = func_0x048aead0(lVar26);
        if (iVar13 != *(int *)(lVar25 + 8)) goto LAB_066437b0;
      }
      else {
        iVar13 = *(int *)(auVar32._0_8_ + 8);
        if (lVar14 == 0) goto LAB_0664379e;
LAB_06643781:
        if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_066437b0;
      }
LAB_066439a5:
    } while (((uint)uVar24 < (uint)uVar23) && (uVar28 = uVar28 + 1, uVar28 < uStack_9c4));
    uVar21 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
    uVar22 = CONCAT44(uStack_9fc,CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00)));
    uVar23 = ((long)(uVar22 - uVar21) >> 6) * -0x3333333333333333;
  }
  uVar9 = uStack_958;
  if (uVar23 == uVar24) {
    uVar24 = uStack_950;
    if (uStack_958 != 0) {
      while (uVar9 != uVar24) {
        func_0x05fe8450(uVar24 - 0x140);
        uVar24 = uVar24 - 0x140;
      }
      uStack_950 = uVar9;
      func_0x0412a280(uStack_958,(long)puStack_948 - uStack_958);
      uVar21 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
      uVar22 = CONCAT44(uStack_9fc,CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00)));
    }
    puStack_948 = plStack_9f8;
    if (puStack_700 < puStack_6f8) {
      *puStack_700 = 0;
      puStack_700[1] = 0;
      puStack_700[2] = 0;
      *puStack_700 = (ulong)uStack_988;
      puStack_700[1] = (ulong)uStack_980;
      puStack_700[2] = (ulong)pbStack_978;
      uStack_988 = (undefined8 **)0x0;
      uStack_980 = (undefined8 **)0x0;
      pbStack_978 = (byte *)0x0;
      puStack_700[5] = uStack_960;
      puStack_700[3] = uStack_970;
      puStack_700[4] = uStack_968;
      uStack_970 = 0;
      uStack_968 = 0;
      uStack_960 = 0;
      puStack_700[6] = 0;
      puStack_700[7] = 0;
      puStack_700[8] = 0;
      puStack_700[6] = uVar21;
      puStack_700[7] = uVar22;
      puStack_700[8] = (ulong)plStack_9f8;
      uStack_958 = 0;
      uStack_950 = 0;
      puStack_948 = (undefined8 *)0x0;
      puStack_700[9] = (ulong)plStack_940;
      puStack_700[10] = (ulong)plStack_938;
      plStack_940 = (long *)0x0;
      plStack_938 = (undefined8 *)0x0;
      puStack_700[0xb] = 0;
      puStack_700[0xc] = 0;
      puStack_700[0xd] = 0;
      *(undefined4 *)(puStack_700 + 0xb) = (undefined4)uStack_930;
      *(undefined4 *)((long)puStack_700 + 0x5c) = uStack_930._4_4_;
      *(undefined4 *)(puStack_700 + 0xc) = (undefined4)uStack_928;
      *(undefined4 *)((long)puStack_700 + 100) = uStack_928._4_4_;
      puStack_700[0xd] = uStack_920;
      uStack_930 = 0;
      uStack_928 = 0;
      uStack_920 = 0;
      puStack_700 = puStack_700 + 0xe;
    }
    else {
      uStack_958 = uVar21;
      uStack_950 = uVar22;
      puStack_700 = (ulong *)func_0x0652ac80(&lStack_708,&uStack_988);
    }
    puVar19 = puStack_700 + -0xe;
    lVar14 = CONCAT17(uStack_9e1,CONCAT25(uStack_9e3,CONCAT14(uStack_9e4,uStack_9e8)));
  }
  else {
LAB_06643b9a:
    if (uVar21 != 0) {
LAB_06643b9f:
      uVar24 = CONCAT44(uStack_9fc,CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00)));
      uVar22 = uVar21;
      if (uVar21 != uVar24) {
        do {
          uVar24 = uVar24 - 0x140;
          func_0x05fe8450(uVar24);
        } while (uVar24 != uVar21);
        uVar22 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
      }
      bStack_a00 = (byte)uVar21;
      uStack_9ff = (undefined2)(uVar21 >> 8);
      uStack_9fd = (undefined1)(uVar21 >> 0x18);
      uStack_9fc = (undefined4)(uVar21 >> 0x20);
      func_0x0412a280(uVar22,(long)plStack_9f8 - uVar22);
    }
    puVar19 = (ulong *)0xf57e380;
    lVar14 = CONCAT17(uStack_9e1,CONCAT25(uStack_9e3,CONCAT14(uStack_9e4,uStack_9e8)));
  }
  if (lVar14 != 0) {
    lVar25 = CONCAT44(uStack_9dc,CONCAT22(uStack_9de,CONCAT11(uStack_9df,uStack_9e0)));
    lVar26 = lVar14;
    if (lVar14 != lVar25) {
      lVar26 = lVar25 + -0x40;
      do {
        if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
          (**(code **)(lVar26 + 0x18))(lVar26);
        }
        if (*(code **)(lVar26 + -0x30) != (code *)0x0) {
          (**(code **)(lVar26 + -0x30))(lVar26 + -0x48);
        }
        if (*(code **)(lVar26 + -0x70) != (code *)0x0) {
          (**(code **)(lVar26 + -0x70))(lVar26 + -0x88);
        }
        if (*(code **)(lVar26 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar26 + -0xb0))(lVar26 + -200);
        }
        lVar25 = lVar26 + -0xd8;
        lVar26 = lVar26 + -0x118;
      } while (lVar25 != lVar14);
      lVar26 = CONCAT17(uStack_9e1,CONCAT25(uStack_9e3,CONCAT14(uStack_9e4,uStack_9e8)));
    }
    uStack_9e0 = (undefined1)lVar14;
    uStack_9df = (undefined1)((ulong)lVar14 >> 8);
    uStack_9de = (undefined2)((ulong)lVar14 >> 0x10);
    uStack_9dc = (undefined4)((ulong)lVar14 >> 0x20);
    func_0x0412a280(lVar26,lStack_9d8 - lVar26);
  }
  func_0x05f93280(&uStack_988);
  func_0x064e40a0(puVar19);
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
    (*pcStack_128)(&puStack_140);
  }
  if (((ulong)puStack_178 & 1) != 0) {
    func_0x0412a280(puStack_168,(ulong)puStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_910 & 1) != 0) {
    func_0x0412a280(uStack_900,CONCAT71(uStack_90f,bStack_910) & 0xfffffffffffffffe);
  }
  if (pcStack_570 != (code *)0x0) {
    (*pcStack_570)(auStack_588);
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(auStack_5d0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(auStack_610);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(&puStack_650);
  }
  if (((ulong)pcStack_688 & 1) != 0) {
    func_0x0412a280(uStack_678,(ulong)pcStack_688 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_9a8 & 1) != 0) {
    func_0x0412a280(uStack_998,(ulong)puStack_9a8 & 0xfffffffffffffffe);
  }
  if (pcStack_7e0 != (code *)0x0) {
    (*pcStack_7e0)(auStack_7f8);
  }
  if (pcStack_828 != (code *)0x0) {
    (*pcStack_828)(auStack_840);
  }
  if (pcStack_868 != (code *)0x0) {
    (*pcStack_868)(auStack_880);
  }
  if (pcStack_8a8 != (code *)0x0) {
    (*pcStack_8a8)(auStack_8c0);
  }
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  if ((uStack_9c0 & 1) != 0) {
    func_0x0412a280(uStack_9b0,CONCAT44(uStack_9bc,uStack_9c0) & 0xfffffffffffffffe);
  }
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar7 = _UNK_014b0990;
  uVar6 = _UNK_014b098c;
  uVar11 = _UNK_014b0988;
  *puVar18 = _DAT_014b0984;
  puVar18[1] = uVar11;
  puVar18[2] = uVar6;
  puVar18[3] = uVar7;
  *(undefined8 *)((long)puVar18 + 0xf) = 0x656d756c6f566574;
  *(undefined1 *)((long)puVar18 + 0x17) = 0;
  uStack_9e8 = 0x636f6c10;
  uStack_9e4 = 0x61;
  uStack_9e3 = 0x6974;
  uStack_9e1 = 0x6f;
  uStack_9e0 = 0x6e;
  uStack_9df = 0;
  puStack_180 = puVar18;
  func_0x066475d0(&bStack_8f8,&uStack_9e8);
  uStack_9c0 = 0x74706f0e;
  uStack_9bc = 0x736e6f69;
  uStack_9b8 = 0;
  func_0x066476a0(&pcStack_688,&uStack_9c0);
  uStack_118 = 0;
  uStack_110 = 0;
  pcStack_128 = (code *)0x0;
  uStack_120 = 0;
  puStack_138 = (undefined8 *)0x0;
  plStack_130 = (long *)0x0;
  puStack_148 = (undefined8 *)0x0;
  puStack_140 = (undefined8 *)0x0;
  uStack_158 = 0;
  uStack_150 = 0;
  puStack_168 = (uint *)0x0;
  uStack_160 = 0;
  puStack_178 = (undefined8 *)0x0;
  ppuStack_170 = (undefined8 **)0x0;
  func_0x04885070(&uStack_160,puVar18,0x17);
  func_0x06523ef0(&uStack_548,auStack_8d0);
  func_0x06523ef0(apcStack_430,&uStack_660);
  uStack_a08._0_4_ = 0;
  uStack_a08._4_4_ = 0;
  bStack_a00 = 0;
  uStack_9ff = 0;
  uStack_9fd = 0;
  uStack_9fc = 0;
  plStack_9f8 = (long *)0x0;
  puStack_9a8 = &uStack_a08;
  uStack_9a0 = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x230,0);
  }
  uStack_a08._0_4_ = (uint)puVar16;
  uStack_a08._4_4_ = (undefined4)((ulong)puVar16 >> 0x20);
  bStack_a00 = (byte)puVar16;
  uStack_9ff = (undefined2)((ulong)puVar16 >> 8);
  uStack_9fd = (undefined1)((ulong)puVar16 >> 0x18);
  plStack_9f8 = puVar16 + 0x46;
  uStack_90f = (undefined7)((ulong)puVar16 >> 8);
  uStack_988 = (undefined8 **)&uStack_a08;
  uStack_980 = &puStack_7a8;
  pbStack_978 = &bStack_910;
  uStack_970 = uStack_970 & 0xffffffffffffff00;
  uStack_9fc = uStack_a08._4_4_;
  bStack_910 = bStack_a00;
  puStack_7a8 = puVar16;
  func_0x06523ef0(puVar16,&uStack_548);
  lVar14 = CONCAT71(uStack_90f,bStack_910) + 0x118;
  bStack_910 = (byte)lVar14;
  uStack_90f = (undefined7)((ulong)lVar14 >> 8);
  func_0x06523ef0(lVar14,apcStack_430);
  lVar14 = CONCAT71(uStack_90f,bStack_910) + 0x118;
  bStack_a00 = (byte)lVar14;
  uStack_9ff = (undefined2)((ulong)lVar14 >> 8);
  uStack_9fd = (undefined1)((ulong)lVar14 >> 0x18);
  uStack_9fc = (undefined4)((ulong)lVar14 >> 0x20);
  if (pcStack_340 != (code *)0x0) {
    (*pcStack_340)(auStack_358);
  }
  if (pcStack_388 != (code *)0x0) {
    (*pcStack_388)(auStack_3a0);
  }
  if (pcStack_3c8 != (code *)0x0) {
    (*pcStack_3c8)(auStack_3e0);
  }
  if (pcStack_408 != (code *)0x0) {
    (*pcStack_408)(auStack_420);
  }
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(auStack_470);
  }
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(apcStack_4b8);
  }
  if (pcStack_4e0 != (code *)0x0) {
    (*pcStack_4e0)(&pcStack_4f8);
  }
  if (pcStack_520 != (code *)0x0) {
    (*pcStack_520)(&puStack_538);
  }
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar15 + 8) = 0;
  *(undefined8 *)((long)pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f0411c8;
  uVar11 = func_0x0d858500(&uStack_a08);
  plVar17 = (long *)((long)pcVar15 + 0x18);
  *(undefined1 *)((long)pcVar15 + 0x20) = 0;
  *(undefined4 *)((long)pcVar15 + 0x24) = uVar11;
  *(undefined4 *)((long)pcVar15 + 0x28) = 0;
  *(undefined8 *)((long)pcVar15 + 0x30) = 0;
  *(undefined8 *)((long)pcVar15 + 0x38) = 0;
  *(undefined8 *)((long)pcVar15 + 0x40) = 0;
  *(undefined **)((long)pcVar15 + 0x18) = &UNK_0f041218;
  *(uint *)((long)pcVar15 + 0x48) = (uint)uStack_a08;
  *(undefined4 *)((long)pcVar15 + 0x4c) = uStack_a08._4_4_;
  *(uint *)((long)pcVar15 + 0x50) = CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00));
  *(undefined4 *)((long)pcVar15 + 0x54) = uStack_9fc;
  *(long **)((long)pcVar15 + 0x58) = plStack_9f8;
  uStack_a08._0_4_ = 0;
  uStack_a08._4_4_ = 0;
  bStack_a00 = 0;
  uStack_9ff = 0;
  uStack_9fd = 0;
  uStack_9fc = 0;
  plStack_9f8 = (long *)0x0;
  uVar11 = func_0x0d858620(plVar17);
  pcVar30 = pcStack_128;
  *(undefined4 *)((long)pcVar15 + 0x28) = uVar11;
  plStack_130 = plVar17;
  if (pcStack_128 != (code *)0x0) {
    LOCK();
    plVar17 = (long *)((long)pcStack_128 + 8);
    lVar14 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      lVar14 = *(long *)pcStack_128;
      pcStack_128 = pcVar15;
      (**(code **)(lVar14 + 0x10))(pcVar30);
      func_0x0412c2d0(pcVar30);
      pcVar15 = pcStack_128;
    }
  }
  pcStack_128 = pcVar15;
  func_0x06690f10();
  puStack_538 = (undefined *)
                CONCAT17(uStack_8e1,
                         CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
  uStack_548 = CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8));
  uStack_544 = (undefined2)(CONCAT15(uStack_8f3,CONCAT14(uStack_8f4,uStack_548)) >> 0x20);
  uStack_542 = uStack_8f2;
  uStack_540 = uStack_8f0;
  uStack_53c = (undefined2)(CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)) >> 0x20);
  uStack_53a = (undefined1)uStack_8ea;
  uStack_539 = (undefined1)((ushort)uStack_8ea >> 8);
  bStack_8f8 = 0;
  uStack_8f7 = 0;
  uStack_8f5 = 0;
  uStack_8f4 = 0;
  uStack_8f3 = 0;
  uStack_8f2 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8eb = 0;
  uStack_8ea = 0;
  uStack_8e8 = 0;
  uStack_8e7 = 0;
  uStack_8e6 = 0;
  uStack_8e2 = 0;
  uStack_8e1 = 0;
  auStack_530 = (undefined1  [8])auStack_8e0._0_8_;
  uStack_528 = (long *)auStack_8e0._8_8_;
  func_0x065281f0(&pcStack_520,auStack_8d0);
  uStack_3f8 = uStack_678;
  pcStack_408 = pcStack_688;
  uStack_400 = (ulong)pcStack_680;
  pcStack_688 = (code *)0x0;
  pcStack_680 = (code *)0x0;
  uStack_678 = 0;
  uStack_3f0 = (undefined4)uStack_670;
  uStack_3ec = uStack_670._4_4_;
  uStack_3e8 = (undefined4)uStack_668;
  uStack_3e4 = uStack_668._4_4_;
  func_0x065281f0(auStack_3e0,&uStack_660);
  uStack_988 = (undefined8 **)0x0;
  uStack_980 = (undefined8 **)0x0;
  pbStack_978 = (byte *)0x0;
  puStack_9a8 = &uStack_988;
  uStack_9a0 = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar3 = puVar16 + 0x50;
  uStack_988 = (undefined8 **)puVar16;
  uStack_980 = (undefined8 **)puVar16;
  pbStack_978 = (byte *)puVar3;
  if ((uStack_548 & 1) == 0) {
    puVar16[2] = puStack_538;
    *puVar16 = CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548));
    puVar16[1] = CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540)));
  }
  else {
    func_0x0412e5e0(puVar16,puStack_538,
                    CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540))));
  }
  *(undefined4 *)(puVar16 + 3) = auStack_530._0_4_;
  *(undefined4 *)((long)puVar16 + 0x1c) = auStack_530._4_4_;
  *(undefined4 *)(puVar16 + 4) = (undefined4)uStack_528;
  *(undefined4 *)((long)puVar16 + 0x24) = uStack_528._4_4_;
  func_0x06523ef0(puVar16 + 5,&pcStack_520);
  if (((ulong)pcStack_408 & 1) == 0) {
    puVar16[0x2a] = uStack_3f8;
    puVar16[0x28] = pcStack_408;
    puVar16[0x29] = uStack_400;
  }
  else {
    func_0x0412e5e0(puVar16 + 0x28,uStack_3f8,uStack_400);
  }
  *(undefined4 *)(puVar16 + 0x2b) = uStack_3f0;
  *(undefined4 *)((long)puVar16 + 0x15c) = uStack_3ec;
  *(undefined4 *)(puVar16 + 0x2c) = uStack_3e8;
  *(undefined4 *)((long)puVar16 + 0x164) = uStack_3e4;
  func_0x06523ef0(puVar16 + 0x2d,auStack_3e0);
  uStack_980 = (undefined8 **)puVar3;
  if (pcStack_2f0 != (code *)0x0) {
    (*pcStack_2f0)(auStack_308);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(auStack_350);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (pcStack_3b8 != (code *)0x0) {
    (*pcStack_3b8)(auStack_3d0);
  }
  if (((ulong)pcStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,(ulong)pcStack_408 & 0xfffffffffffffffe);
  }
  if (apcStack_430[0] != (code *)0x0) {
    (*apcStack_430[0])(auStack_448);
  }
  if (pcStack_478 != (code *)0x0) {
    (*pcStack_478)(auStack_490);
  }
  if (apcStack_4b8[0] != (code *)0x0) {
    (*apcStack_4b8[0])(auStack_4d0);
  }
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_518 + 8);
  }
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(puStack_538,
                    CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548)) & 0xfffffffffffffffe);
  }
  uVar12 = (**(code **)(*plStack_130 + 0x20))();
  uVar22 = ((long)uStack_980 - (long)uStack_988 >> 6) * -0x3333333333333333;
  uVar21 = 0;
  if ((uVar12 != 0) && ((uint)uVar22 != 0)) {
    uVar28 = 0;
    uVar21 = 0;
    uStack_9c4 = uVar12;
    do {
      auVar32 = (**(code **)(*plStack_130 + 0x28))(plStack_130,uVar28);
      lVar26 = auVar32._8_8_;
      lVar14 = auVar32._0_8_;
      auVar32 = func_0x06527d70();
      if (auVar32._8_8_ == lVar26) {
        if (auVar32._0_8_ == 0) {
          lVar25 = func_0x048aead0(auVar32._8_8_);
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar14 != 0) goto LAB_066445c2;
LAB_066445e1:
          lVar25 = func_0x048aead0(lVar26);
          if (iVar13 != *(int *)(lVar25 + 8)) goto LAB_06644600;
        }
        else {
          iVar13 = *(int *)(auVar32._0_8_ + 8);
          if (lVar14 == 0) goto LAB_066445e1;
LAB_066445c2:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06644600;
        }
      }
      else {
LAB_06644600:
        auVar32 = func_0x06527e30();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066447fa;
        }
        auVar32 = func_0x06527ef0();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066447fa;
        }
        auVar32 = func_0x06527fb0();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066447fa;
        }
        auVar32 = func_0x06528070();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066447fa;
        }
        auVar32 = func_0x06528130();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_066447fa;
        }
        puVar16 = uStack_988;
        puVar3 = uStack_980;
        if (uStack_988[uVar21 * 0x28 + 4] != (undefined8 *)lVar26) goto joined_r0x06644a45;
        if (uStack_988[uVar21 * 0x28 + 3] == (undefined8 *)0x0) {
          lVar25 = func_0x048aead0();
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar14 != 0) goto LAB_066447c9;
LAB_066447e2:
          lVar14 = func_0x048aead0(lVar26);
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06644a32;
        }
        else {
          iVar13 = *(int *)((long)uStack_988[uVar21 * 0x28 + 3] + 8);
          if (lVar14 == 0) goto LAB_066447e2;
LAB_066447c9:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06644a32;
        }
        uVar21 = (ulong)((int)uVar21 + 1);
      }
LAB_066447fa:
    } while (((uint)uVar21 < (uint)uVar22) && (uVar28 = uVar28 + 1, uVar28 < uStack_9c4));
    uVar22 = ((long)uStack_980 - (long)uStack_988 >> 6) * -0x3333333333333333;
  }
  puVar16 = puStack_148;
  if (uVar22 == uVar21) {
    puVar3 = puStack_140;
    if (puStack_148 != (undefined8 *)0x0) {
      while (puVar16 != puVar3) {
        func_0x05fe8450(puVar3 + -0x28);
        puVar3 = puVar3 + -0x28;
      }
      puStack_140 = puVar16;
      func_0x0412a280(puStack_148,(long)puStack_138 - (long)puStack_148);
    }
    puStack_138 = (undefined8 *)pbStack_978;
    if (puStack_700 < puStack_6f8) {
      *puStack_700 = 0;
      puStack_700[1] = 0;
      puStack_700[2] = 0;
      *puStack_700 = (ulong)puStack_178;
      puStack_700[1] = (ulong)ppuStack_170;
      puStack_700[2] = (ulong)puStack_168;
      puStack_178 = (undefined8 *)0x0;
      ppuStack_170 = (undefined8 **)0x0;
      puStack_168 = (uint *)0x0;
      puStack_700[5] = uStack_150;
      puStack_700[3] = uStack_160;
      puStack_700[4] = uStack_158;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      puStack_700[6] = 0;
      puStack_700[7] = 0;
      puStack_700[8] = 0;
      puStack_700[6] = (ulong)uStack_988;
      puStack_700[7] = (ulong)uStack_980;
      puStack_700[8] = (ulong)pbStack_978;
      puStack_148 = (undefined8 *)0x0;
      puStack_140 = (undefined8 *)0x0;
      puStack_138 = (undefined8 *)0x0;
      puStack_700[9] = (ulong)plStack_130;
      puStack_700[10] = (ulong)pcStack_128;
      plStack_130 = (long *)0x0;
      pcStack_128 = (code *)0x0;
      puStack_700[0xb] = 0;
      puStack_700[0xc] = 0;
      puStack_700[0xd] = 0;
      *(undefined4 *)(puStack_700 + 0xb) = (undefined4)uStack_120;
      *(undefined4 *)((long)puStack_700 + 0x5c) = uStack_120._4_4_;
      *(undefined4 *)(puStack_700 + 0xc) = (undefined4)uStack_118;
      *(undefined4 *)((long)puStack_700 + 100) = uStack_118._4_4_;
      puStack_700[0xd] = uStack_110;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      puStack_700 = puStack_700 + 0xe;
    }
    else {
      puStack_148 = uStack_988;
      puStack_140 = uStack_980;
      puStack_700 = (ulong *)func_0x0652ac80(&lStack_708,&puStack_178);
    }
    puVar19 = puStack_700 + -0xe;
    lVar14 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
  }
  else {
LAB_06644a32:
    puVar16 = uStack_988;
    puVar3 = uStack_980;
    if (uStack_988 != (undefined8 **)0x0) {
joined_r0x06644a45:
      while (puVar8 = uStack_988, uStack_988 != (undefined8 **)puVar3) {
        uStack_988 = (undefined8 **)puVar16;
        func_0x05fe8450(puVar3 + -0x28);
        puVar16 = uStack_988;
        puVar3 = puVar3 + -0x28;
        uStack_988 = (undefined8 **)puVar8;
      }
      uStack_980 = uStack_988;
      uStack_988 = (undefined8 **)puVar16;
      func_0x0412a280(puVar16,(long)pbStack_978 - (long)puVar16);
    }
    puVar19 = (ulong *)0xf57e380;
    lVar14 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
  }
  if (lVar14 != 0) {
    lVar25 = CONCAT44(uStack_9fc,CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00)));
    lVar26 = lVar14;
    if (lVar14 != lVar25) {
      lVar26 = lVar25 + -0x40;
      do {
        if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
          (**(code **)(lVar26 + 0x18))(lVar26);
        }
        if (*(code **)(lVar26 + -0x30) != (code *)0x0) {
          (**(code **)(lVar26 + -0x30))(lVar26 + -0x48);
        }
        if (*(code **)(lVar26 + -0x70) != (code *)0x0) {
          (**(code **)(lVar26 + -0x70))(lVar26 + -0x88);
        }
        if (*(code **)(lVar26 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar26 + -0xb0))(lVar26 + -200);
        }
        lVar25 = lVar26 + -0xd8;
        lVar26 = lVar26 + -0x118;
      } while (lVar25 != lVar14);
      lVar26 = CONCAT44(uStack_a08._4_4_,(uint)uStack_a08);
    }
    bStack_a00 = (byte)lVar14;
    uStack_9ff = (undefined2)((ulong)lVar14 >> 8);
    uStack_9fd = (undefined1)((ulong)lVar14 >> 0x18);
    uStack_9fc = (undefined4)((ulong)lVar14 >> 0x20);
    func_0x0412a280(lVar26,(long)plStack_9f8 - lVar26);
  }
  func_0x05f93280(&puStack_178);
  func_0x064e40a0(puVar19);
  if (pcStack_570 != (code *)0x0) {
    (*pcStack_570)(auStack_588);
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(auStack_5d0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(auStack_610);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(&puStack_650);
  }
  if (((ulong)pcStack_688 & 1) != 0) {
    func_0x0412a280(uStack_678,(ulong)pcStack_688 & 0xfffffffffffffffe);
  }
  if ((uStack_9c0 & 1) != 0) {
    func_0x0412a280(uStack_9b0,CONCAT44(uStack_9bc,uStack_9c0) & 0xfffffffffffffffe);
  }
  if (pcStack_7e0 != (code *)0x0) {
    (*pcStack_7e0)(auStack_7f8);
  }
  if (pcStack_828 != (code *)0x0) {
    (*pcStack_828)(auStack_840);
  }
  if (pcStack_868 != (code *)0x0) {
    (*pcStack_868)(auStack_880);
  }
  if (pcStack_8a8 != (code *)0x0) {
    (*pcStack_8a8)(auStack_8c0);
  }
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  if ((uStack_9e8 & 1) != 0) {
    func_0x0412a280(lStack_9d8,
                    CONCAT17(uStack_9e1,CONCAT25(uStack_9e3,CONCAT14(uStack_9e4,uStack_9e8))) &
                    0xfffffffffffffffe);
  }
  func_0x0412a280(puStack_180,0x1a);
  uStack_a08._0_4_ = 0x72747312;
  uStack_a08._4_4_ = 0x75746375;
  bStack_a00 = 0x72;
  uStack_9ff = 0x65;
  bStack_8f8 = 0;
  uStack_8f7 = 0;
  uStack_8f5 = 0;
  uStack_8f4 = 0;
  uStack_8f3 = 0;
  uStack_8f2 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8eb = 0;
  uStack_8ea = 0;
  uStack_8e8 = 0;
  uStack_8e7 = 0;
  uStack_8e6 = 0;
  uStack_8e2 = 0;
  uStack_8e1 = 0;
  func_0x048b1dc0(auStack_8e0);
  func_0x0652b590(auStack_8d0);
  if ((bStack_8f8 & 1) == 0) {
    if (((uint)uStack_a08 & 1) == 0) {
      uStack_8e8 = SUB81(plStack_9f8,0);
      uStack_8e7 = (undefined1)((ulong)plStack_9f8 >> 8);
      uStack_8e6 = (undefined4)((ulong)plStack_9f8 >> 0x10);
      uStack_8e2 = (undefined1)((ulong)plStack_9f8 >> 0x30);
      uStack_8e1 = (undefined1)((ulong)plStack_9f8 >> 0x38);
      uStack_8f0 = CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00));
      uStack_8f7 = (undefined2)((uint)uStack_a08 >> 8);
      uStack_8f5 = (undefined1)((uint)uStack_a08 >> 0x18);
      uStack_8f4 = (undefined1)uStack_a08._4_4_;
      uStack_8f3 = (undefined1)((uint)uStack_a08._4_4_ >> 8);
      uStack_8f2 = (undefined2)((uint)uStack_a08._4_4_ >> 0x10);
      uStack_8ec = (undefined1)uStack_9fc;
      uStack_8eb = (undefined1)((uint)uStack_9fc >> 8);
      uStack_8ea = (undefined2)((uint)uStack_9fc >> 0x10);
      bStack_8f8 = (byte)uStack_a08;
    }
    else {
      func_0x04885070(&bStack_8f8,plStack_9f8,
                      CONCAT44(uStack_9fc,CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00))));
    }
  }
  else {
    bVar31 = ((uint)uStack_a08 & 1) != 0;
    plVar17 = (long *)((long)&uStack_a08 + 1);
    if (bVar31) {
      plVar17 = plStack_9f8;
    }
    uVar21 = (ulong)((byte)uStack_a08 >> 1);
    if (bVar31) {
      uVar21 = CONCAT44(uStack_9fc,CONCAT13(uStack_9fd,CONCAT21(uStack_9ff,bStack_a00)));
    }
    FUN_04885120(&bStack_8f8,plVar17,uVar21);
  }
  auStack_8e0 = func_0x06693e40();
  uStack_678 = 0;
  uStack_628 = 0;
  uStack_620 = 0;
  pcStack_638 = (code *)0x0;
  uStack_630 = 0;
  puStack_648 = (undefined8 *)0x0;
  pcStack_640 = (code *)0x0;
  puStack_658 = (undefined8 *)0x0;
  puStack_650 = (undefined8 *)0x0;
  pcStack_688 = (code *)0x0;
  pcStack_680 = (code *)0x0;
  uStack_670 = 0x6f72466461657222;
  uStack_668 = 0x757463757274536d;
  uStack_660 = 0x6572;
  func_0x06523ef0(&uStack_548,auStack_8d0);
  uStack_988 = (undefined8 **)0x0;
  uStack_980 = (undefined8 **)0x0;
  pbStack_978 = (byte *)0x0;
  uStack_9e8 = (uint)&uStack_988;
  uStack_9e4 = (undefined1)((ulong)&uStack_988 >> 0x20);
  uStack_9e3 = (undefined2)((ulong)&uStack_988 >> 0x28);
  uStack_9e1 = (undefined1)((ulong)&uStack_988 >> 0x38);
  uStack_9e0 = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  pbStack_978 = (byte *)(puVar16 + 0x23);
  uStack_9c0 = (uint)puVar16;
  uStack_9bc = (undefined4)((ulong)puVar16 >> 0x20);
  puStack_178 = &uStack_988;
  ppuStack_170 = &puStack_9a8;
  puStack_168 = &uStack_9c0;
  uStack_160 = uStack_160 & 0xffffffffffffff00;
  puStack_9a8 = puVar16;
  uStack_988 = (undefined8 **)puVar16;
  uStack_980 = (undefined8 **)puVar16;
  func_0x06523ef0(puVar16,&uStack_548);
  uStack_980 = (undefined8 **)(CONCAT44(uStack_9bc,uStack_9c0) + 0x118);
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(auStack_470);
  }
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(apcStack_4b8);
  }
  if (pcStack_4e0 != (code *)0x0) {
    (*pcStack_4e0)(&pcStack_4f8);
  }
  if (pcStack_520 != (code *)0x0) {
    (*pcStack_520)(&puStack_538);
  }
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar15 + 8) = 0;
  *(undefined8 *)((long)pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f0412a8;
  uVar11 = func_0x0d858500(&uStack_988);
  plVar17 = (long *)((long)pcVar15 + 0x18);
  *(undefined1 *)((long)pcVar15 + 0x20) = 0;
  *(undefined4 *)((long)pcVar15 + 0x24) = uVar11;
  *(undefined4 *)((long)pcVar15 + 0x28) = 0;
  *(undefined8 *)((long)pcVar15 + 0x30) = 0;
  *(undefined8 *)((long)pcVar15 + 0x38) = 0;
  *(undefined8 *)((long)pcVar15 + 0x40) = 0;
  *(undefined **)((long)pcVar15 + 0x18) = &UNK_0f0412f8;
  *(undefined4 *)((long)pcVar15 + 0x48) = (undefined4)uStack_988;
  *(undefined4 *)((long)pcVar15 + 0x4c) = uStack_988._4_4_;
  *(undefined4 *)((long)pcVar15 + 0x50) = (undefined4)uStack_980;
  *(undefined4 *)((long)pcVar15 + 0x54) = uStack_980._4_4_;
  *(byte **)((long)pcVar15 + 0x58) = pbStack_978;
  uStack_988 = (undefined8 **)0x0;
  uStack_980 = (undefined8 **)0x0;
  pbStack_978 = (byte *)0x0;
  uVar11 = func_0x0d858620(plVar17);
  pcVar30 = pcStack_638;
  *(undefined4 *)((long)pcVar15 + 0x28) = uVar11;
  pcStack_640 = (code *)plVar17;
  if (pcStack_638 != (code *)0x0) {
    LOCK();
    plVar17 = (long *)((long)pcStack_638 + 8);
    lVar14 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      lVar14 = *(long *)pcStack_638;
      pcStack_638 = pcVar15;
      (**(code **)(lVar14 + 0x10))(pcVar30);
      func_0x0412c2d0(pcVar30);
      pcVar15 = pcStack_638;
    }
  }
  pcStack_638 = pcVar15;
  puStack_538 = (undefined *)
                CONCAT17(uStack_8e1,
                         CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
  uStack_548 = CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8));
  uStack_544 = (undefined2)(CONCAT15(uStack_8f3,CONCAT14(uStack_8f4,uStack_548)) >> 0x20);
  uStack_542 = uStack_8f2;
  uStack_540 = uStack_8f0;
  uStack_53c = (undefined2)(CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)) >> 0x20);
  uStack_53a = (undefined1)uStack_8ea;
  uStack_539 = (undefined1)((ushort)uStack_8ea >> 8);
  bStack_8f8 = 0;
  uStack_8f7 = 0;
  uStack_8f5 = 0;
  uStack_8f4 = 0;
  uStack_8f3 = 0;
  uStack_8f2 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8eb = 0;
  uStack_8ea = 0;
  uStack_8e8 = 0;
  uStack_8e7 = 0;
  uStack_8e6 = 0;
  uStack_8e2 = 0;
  uStack_8e1 = 0;
  _auStack_530 = auStack_8e0;
  func_0x065281f0(&pcStack_520,auStack_8d0);
  puStack_178 = (undefined8 *)0x0;
  ppuStack_170 = (undefined8 **)0x0;
  puStack_168 = (uint *)0x0;
  uStack_9e8 = (uint)&puStack_178;
  uStack_9e4 = (undefined1)((ulong)&puStack_178 >> 0x20);
  uStack_9e3 = (undefined2)((ulong)&puStack_178 >> 0x28);
  uStack_9e1 = (undefined1)((ulong)&puStack_178 >> 0x38);
  uStack_9e0 = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar3 = puVar16 + 0x28;
  puStack_178 = puVar16;
  puStack_168 = (uint *)puVar3;
  if ((uStack_548 & 1) == 0) {
    puVar16[2] = puStack_538;
    *puVar16 = CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548));
    puVar16[1] = CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540)));
    ppuStack_170 = (undefined8 **)puVar16;
  }
  else {
    ppuStack_170 = (undefined8 **)puVar16;
    func_0x0412e5e0(puVar16,puStack_538,
                    CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540))));
  }
  *(undefined4 *)(puVar16 + 3) = auStack_530._0_4_;
  *(undefined4 *)((long)puVar16 + 0x1c) = auStack_530._4_4_;
  *(undefined4 *)(puVar16 + 4) = (undefined4)uStack_528;
  *(undefined4 *)((long)puVar16 + 0x24) = uStack_528._4_4_;
  func_0x06523ef0(puVar16 + 5,&pcStack_520);
  ppuStack_170 = (undefined8 **)puVar3;
  if (apcStack_430[0] != (code *)0x0) {
    (*apcStack_430[0])(auStack_448);
  }
  if (pcStack_478 != (code *)0x0) {
    (*pcStack_478)(auStack_490);
  }
  if (apcStack_4b8[0] != (code *)0x0) {
    (*apcStack_4b8[0])(auStack_4d0);
  }
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_518 + 8);
  }
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(puStack_538,
                    CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548)) & 0xfffffffffffffffe);
  }
  uVar12 = (**(code **)(*(long *)pcStack_640 + 0x20))();
  uVar22 = ((long)ppuStack_170 - (long)puStack_178 >> 6) * -0x3333333333333333;
  uVar21 = 0;
  if ((uVar12 != 0) && ((uint)uVar22 != 0)) {
    uVar28 = 0;
    uVar21 = 0;
    uStack_9c4 = uVar12;
    do {
      auVar32 = (**(code **)(*(long *)pcStack_640 + 0x28))(pcStack_640,uVar28);
      lVar26 = auVar32._8_8_;
      lVar14 = auVar32._0_8_;
      auVar32 = func_0x06527d70();
      if (auVar32._8_8_ == lVar26) {
        if (auVar32._0_8_ == 0) {
          lVar25 = func_0x048aead0(auVar32._8_8_);
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar14 != 0) goto LAB_06645231;
LAB_0664524e:
          lVar25 = func_0x048aead0(lVar26);
          if (iVar13 != *(int *)(lVar25 + 8)) goto LAB_06645260;
        }
        else {
          iVar13 = *(int *)(auVar32._0_8_ + 8);
          if (lVar14 == 0) goto LAB_0664524e;
LAB_06645231:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06645260;
        }
      }
      else {
LAB_06645260:
        auVar32 = func_0x06527e30();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06645458;
        }
        auVar32 = func_0x06527ef0();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06645458;
        }
        auVar32 = func_0x06527fb0();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06645458;
        }
        auVar32 = func_0x06528070();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06645458;
        }
        auVar32 = func_0x06528130();
        if (auVar32._8_8_ == lVar26) {
          if (auVar32._0_8_ == 0) {
            lVar25 = func_0x048aead0(auVar32._8_8_);
            iVar13 = *(int *)(lVar25 + 8);
          }
          else {
            iVar13 = *(int *)(auVar32._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar25 = func_0x048aead0(lVar26);
            iVar4 = *(int *)(lVar25 + 8);
          }
          else {
            iVar4 = *(int *)(lVar14 + 8);
          }
          if (iVar13 == iVar4) goto LAB_06645458;
        }
        puVar16 = puStack_178;
        ppuVar5 = ppuStack_170;
        if (puStack_178[uVar21 * 0x28 + 4] != lVar26) goto joined_r0x06645697;
        if (puStack_178[uVar21 * 0x28 + 3] == 0) {
          lVar25 = func_0x048aead0();
          iVar13 = *(int *)(lVar25 + 8);
          if (lVar14 != 0) goto LAB_06645428;
LAB_06645440:
          lVar14 = func_0x048aead0(lVar26);
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06645684;
        }
        else {
          iVar13 = *(int *)(puStack_178[uVar21 * 0x28 + 3] + 8);
          if (lVar14 == 0) goto LAB_06645440;
LAB_06645428:
          if (iVar13 != *(int *)(lVar14 + 8)) goto LAB_06645684;
        }
        uVar21 = (ulong)((int)uVar21 + 1);
      }
LAB_06645458:
    } while (((uint)uVar21 < (uint)uVar22) && (uVar28 = uVar28 + 1, uVar28 < uStack_9c4));
    uVar22 = ((long)ppuStack_170 - (long)puStack_178 >> 6) * -0x3333333333333333;
  }
  puVar16 = puStack_658;
  if (uVar22 == uVar21) {
    puVar3 = puStack_650;
    if (puStack_658 != (undefined8 *)0x0) {
      while (puVar16 != puVar3) {
        func_0x05fe8450(puVar3 + -0x28);
        puVar3 = puVar3 + -0x28;
      }
      puStack_650 = puVar16;
      func_0x0412a280(puStack_658,(long)puStack_648 - (long)puStack_658);
    }
    puStack_648 = (undefined8 *)puStack_168;
    if (puStack_700 < puStack_6f8) {
      *puStack_700 = 0;
      puStack_700[1] = 0;
      puStack_700[2] = 0;
      *puStack_700 = (ulong)pcStack_688;
      puStack_700[1] = (ulong)pcStack_680;
      puStack_700[2] = uStack_678;
      pcStack_688 = (code *)0x0;
      pcStack_680 = (code *)0x0;
      uStack_678 = 0;
      puStack_700[5] = uStack_660;
      puStack_700[3] = uStack_670;
      puStack_700[4] = uStack_668;
      uStack_670 = 0;
      uStack_668 = 0;
      uStack_660 = 0;
      puStack_700[6] = 0;
      puStack_700[7] = 0;
      puStack_700[8] = 0;
      puStack_700[6] = (ulong)puStack_178;
      puStack_700[7] = (ulong)ppuStack_170;
      puStack_700[8] = (ulong)puStack_168;
      puStack_658 = (undefined8 *)0x0;
      puStack_650 = (undefined8 *)0x0;
      puStack_648 = (undefined8 *)0x0;
      puStack_700[9] = (ulong)pcStack_640;
      puStack_700[10] = (ulong)pcStack_638;
      pcStack_640 = (code *)0x0;
      pcStack_638 = (code *)0x0;
      puStack_700[0xb] = 0;
      puStack_700[0xc] = 0;
      puStack_700[0xd] = 0;
      puStack_700[0xb] = uStack_630;
      puStack_700[0xc] = uStack_628;
      puStack_700[0xd] = uStack_620;
      uStack_630 = 0;
      uStack_628 = 0;
      uStack_620 = 0;
      puStack_700 = puStack_700 + 0xe;
    }
    else {
      puStack_658 = puStack_178;
      puStack_650 = ppuStack_170;
      puStack_700 = (ulong *)func_0x0652ac80(&lStack_708,&pcStack_688);
    }
    puVar19 = puStack_700 + -0xe;
    lVar14 = (long)uStack_988;
    plVar17 = plStack_7b0;
  }
  else {
LAB_06645684:
    puVar16 = puStack_178;
    ppuVar5 = ppuStack_170;
    if (puStack_178 != (undefined8 *)0x0) {
joined_r0x06645697:
      while (puVar3 = puStack_178, (undefined8 **)puStack_178 != ppuVar5) {
        puStack_178 = puVar16;
        func_0x05fe8450(ppuVar5 + -0x28);
        puVar16 = puStack_178;
        ppuVar5 = ppuVar5 + -0x28;
        puStack_178 = puVar3;
      }
      ppuStack_170 = (undefined8 **)puStack_178;
      puStack_178 = puVar16;
      func_0x0412a280(puVar16,(long)puStack_168 - (long)puVar16);
    }
    puVar19 = (ulong *)0xf57e380;
    lVar14 = (long)uStack_988;
    plVar17 = plStack_7b0;
  }
  uStack_988 = (undefined8 **)lVar14;
  plStack_7b0 = plVar17;
  if (lVar14 != 0) {
    if ((undefined8 **)lVar14 != uStack_980) {
      lVar26 = (long)uStack_980 + -0x40;
      do {
        if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
          (**(code **)(lVar26 + 0x18))(lVar26);
        }
        if (*(code **)(lVar26 + -0x30) != (code *)0x0) {
          (**(code **)(lVar26 + -0x30))(lVar26 + -0x48);
        }
        if (*(code **)(lVar26 + -0x70) != (code *)0x0) {
          (**(code **)(lVar26 + -0x70))(lVar26 + -0x88);
        }
        if (*(code **)(lVar26 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar26 + -0xb0))(lVar26 + -200);
        }
        lVar25 = lVar26 + -0xd8;
        lVar26 = lVar26 + -0x118;
      } while (lVar25 != lVar14);
    }
    uStack_980 = (undefined8 **)lVar14;
    func_0x0412a280(uStack_988,(long)pbStack_978 - (long)uStack_988);
  }
  func_0x05f93280(&pcStack_688);
  func_0x064e40a0(puVar19);
  if (pcStack_7e0 != (code *)0x0) {
    (*pcStack_7e0)(auStack_7f8);
  }
  if (pcStack_828 != (code *)0x0) {
    (*pcStack_828)(auStack_840);
  }
  if (pcStack_868 != (code *)0x0) {
    (*pcStack_868)(auStack_880);
  }
  if (pcStack_8a8 != (code *)0x0) {
    (*pcStack_8a8)(auStack_8c0);
  }
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  if (((uint)uStack_a08 & 1) != 0) {
    func_0x0412a280(plStack_9f8,CONCAT44(uStack_a08._4_4_,(uint)uStack_a08) & 0xfffffffffffffffe);
  }
  puStack_538 = (undefined *)0x0;
  uStack_4e8 = 0;
  pcStack_4e0 = (code *)0x0;
  pcStack_4f8 = (code *)0x0;
  plStack_4f0 = (long *)0x0;
  uStack_508 = 0;
  pcStack_500 = (code *)0x0;
  auStack_518._0_8_ = 0;
  auStack_518._8_8_ = 0;
  uStack_528 = (long *)0x0;
  pcStack_520 = (code *)0x0;
  uStack_548 = 0;
  uStack_544 = 0;
  uStack_542 = 0;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_53a = 0;
  uStack_539 = 0;
  auStack_530 = (undefined1  [8])0x7261656c630a;
  pcStack_688 = (code *)0x0;
  pcStack_680 = (code *)0x0;
  uStack_678 = 0;
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar15 + 8) = 0;
  *(undefined8 *)(pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f041378;
  uVar11 = func_0x0d858500(&pcStack_688);
  pcVar30 = pcVar15 + 0x18;
  pcVar15[0x20] = (code)0x0;
  *(undefined4 *)(pcVar15 + 0x24) = uVar11;
  *(undefined4 *)(pcVar15 + 0x28) = 0;
  *(undefined8 *)(pcVar15 + 0x30) = 0;
  *(undefined8 *)(pcVar15 + 0x38) = 0;
  *(undefined8 *)(pcVar15 + 0x40) = 0;
  *(undefined **)(pcVar15 + 0x18) = &UNK_0f0413c8;
  *(undefined8 *)(pcVar15 + 0x48) = 0;
  *(undefined8 *)(pcVar15 + 0x50) = 0;
  *(undefined8 *)(pcVar15 + 0x58) = 0;
  pcStack_688 = (code *)0x0;
  pcStack_680 = (code *)0x0;
  uStack_678 = 0;
  uVar11 = func_0x0d858620(pcVar30);
  pcVar29 = pcStack_4f8;
  *(undefined4 *)(pcVar15 + 0x28) = uVar11;
  pcStack_500 = pcVar30;
  if (pcStack_4f8 != (code *)0x0) {
    LOCK();
    pcVar30 = pcStack_4f8 + 8;
    lVar14 = *(long *)pcVar30;
    *(long *)pcVar30 = *(long *)pcVar30 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      lVar14 = *(long *)pcStack_4f8;
      pcStack_4f8 = pcVar15;
      (**(code **)(lVar14 + 0x10))(pcVar29);
      func_0x0412c2d0(pcVar29);
      pcVar15 = pcStack_4f8;
    }
  }
  pcStack_4f8 = pcVar15;
  bStack_8f8 = 0;
  uStack_8f7 = 0;
  uStack_8f5 = 0;
  uStack_8f4 = 0;
  uStack_8f3 = 0;
  uStack_8f2 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8eb = 0;
  uStack_8ea = 0;
  uStack_8e8 = 0;
  uStack_8e7 = 0;
  uStack_8e6 = 0;
  uStack_8e2 = 0;
  uStack_8e1 = 0;
  (**(code **)(*(long *)pcStack_500 + 0x20))();
  uVar10 = auStack_518._0_8_;
  lVar14 = auStack_518._8_8_;
  if (auStack_518._0_8_ != 0) {
    while (uVar10 != lVar14) {
      func_0x05fe8450(lVar14 + -0x140);
      lVar14 = lVar14 + -0x140;
    }
    auStack_518._8_8_ = uVar10;
    func_0x0412a280(auStack_518._0_8_,uStack_508 - auStack_518._0_8_);
  }
  auStack_518._0_8_ = 0;
  auStack_518._8_8_ = 0;
  uStack_508 = 0;
  if (puStack_700 < puStack_6f8) {
    *puStack_700 = 0;
    puStack_700[1] = 0;
    puStack_700[2] = 0;
    *puStack_700 = CONCAT26(uStack_542,CONCAT24(uStack_544,uStack_548));
    puStack_700[1] = CONCAT17(uStack_539,CONCAT16(uStack_53a,CONCAT24(uStack_53c,uStack_540)));
    puStack_700[2] = (ulong)puStack_538;
    uStack_548 = 0;
    uStack_544 = 0;
    uStack_542 = 0;
    uStack_540 = 0;
    uStack_53c = 0;
    uStack_53a = 0;
    uStack_539 = 0;
    puStack_538 = (undefined *)0x0;
    puStack_700[5] = (ulong)pcStack_520;
    puStack_700[3] = (ulong)auStack_530;
    puStack_700[4] = (ulong)uStack_528;
    auStack_530 = (undefined1  [8])0x0;
    uStack_528 = (long *)0x0;
    pcStack_520 = (code *)0x0;
    puStack_700[6] = 0;
    puStack_700[7] = 0;
    puStack_700[8] = 0;
    puStack_700[6] = 0;
    puStack_700[7] = 0;
    puStack_700[8] = 0;
    auStack_518._0_8_ = 0;
    auStack_518._8_8_ = 0;
    uStack_508 = 0;
    puStack_700[9] = (ulong)pcStack_500;
    puStack_700[10] = (ulong)pcStack_4f8;
    pcStack_500 = (code *)0x0;
    pcStack_4f8 = (code *)0x0;
    puStack_700[0xb] = 0;
    puStack_700[0xc] = 0;
    puStack_700[0xd] = 0;
    puStack_700[0xb] = (ulong)plStack_4f0;
    puStack_700[0xc] = uStack_4e8;
    puStack_700[0xd] = (ulong)pcStack_4e0;
    plStack_4f0 = (long *)0x0;
    uStack_4e8 = 0;
    pcStack_4e0 = (code *)0x0;
    puVar19 = puStack_700 + 0xe;
    pcVar15 = pcStack_688;
  }
  else {
    puVar19 = (ulong *)func_0x0652ac80(&lStack_708,&uStack_548);
    pcVar15 = pcStack_688;
  }
  puStack_700 = puVar19;
  pcStack_688 = pcVar15;
  if (pcVar15 != (code *)0x0) {
    if (pcVar15 != pcStack_680) {
      pcVar30 = pcStack_680 + -0x40;
      do {
        if (*(code **)(pcVar30 + 0x18) != (code *)0x0) {
          (**(code **)(pcVar30 + 0x18))(pcVar30);
        }
        if (*(code **)(pcVar30 + -0x30) != (code *)0x0) {
          (**(code **)(pcVar30 + -0x30))(pcVar30 + -0x48);
        }
        if (*(code **)(pcVar30 + -0x70) != (code *)0x0) {
          (**(code **)(pcVar30 + -0x70))(pcVar30 + -0x88);
        }
        if (*(code **)(pcVar30 + -0xb0) != (code *)0x0) {
          (**(code **)(pcVar30 + -0xb0))(pcVar30 + -200);
        }
        pcVar29 = pcVar30 + -0xd8;
        pcVar30 = pcVar30 + -0x118;
      } while (pcVar29 != pcVar15);
    }
    func_0x0412a280(pcStack_688,uStack_678 - (long)pcStack_688);
  }
  func_0x05f93280(&uStack_548);
  func_0x064e40a0(puVar19 + -0xe);
  bStack_8f8 = 8;
  uStack_8f7 = 0x6973;
  uStack_8f5 = 0x7a;
  uStack_8f4 = 0x65;
  uStack_8f3 = 0;
  func_0x065af670(&uStack_548);
  if (((ulong)auStack_530 & 1) == 0) {
    if ((bStack_8f8 & 1) == 0) {
      pcStack_520 = (code *)CONCAT17(uStack_8e1,
                                     CONCAT16(uStack_8e2,
                                              CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))))
      ;
      auStack_530._1_2_ = uStack_8f7;
      auStack_530[0] = bStack_8f8;
      auStack_530[3] = uStack_8f5;
      auStack_530[5] = uStack_8f3;
      auStack_530[4] = uStack_8f4;
      auStack_530._6_2_ = uStack_8f2;
      uStack_528 = (long *)CONCAT44(CONCAT22(uStack_8ea,CONCAT11(uStack_8eb,uStack_8ec)),uStack_8f0)
      ;
    }
    else {
      func_0x04885070(auStack_530,
                      CONCAT17(uStack_8e1,
                               CONCAT16(uStack_8e2,
                                        CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                      CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0))));
    }
  }
  else {
    bVar31 = (bStack_8f8 & 1) == 0;
    puVar27 = (undefined2 *)
              CONCAT17(uStack_8e1,
                       CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
    if (bVar31) {
      puVar27 = &uStack_8f7;
    }
    uVar21 = (ulong)(bStack_8f8 >> 1);
    if (!bVar31) {
      uVar21 = CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)));
    }
    FUN_04885120(auStack_530,puVar27,uVar21);
  }
  auStack_518 = func_0x065f3710();
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = plStack_4f0;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f041448;
  pcStack_4f8 = (code *)(plVar20 + 3);
  *(undefined1 *)(plVar20 + 4) = 1;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[3] = (long)&UNK_0f041498;
  if (plStack_4f0 == (long *)0x0) {
LAB_06645d47:
    plStack_4f0 = plVar20;
    if (uStack_6e8 < uStack_6e0) goto LAB_06645d59;
LAB_06645d95:
    uStack_6e8 = func_0x065b01f0(&lStack_6f0,&uStack_548);
  }
  else {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 != 0) goto LAB_06645d47;
    lVar14 = *plStack_4f0;
    plStack_4f0 = plVar20;
    (**(code **)(lVar14 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_6e0 <= uStack_6e8) goto LAB_06645d95;
LAB_06645d59:
    uVar21 = uStack_6e8;
    func_0x065b0410(uStack_6e8,&uStack_548);
    uStack_6e8 = uVar21 + 0x1b0;
  }
  lVar14 = uStack_6e8 - 0x1b0;
  func_0x0652dc20(&uStack_548);
  func_0x064e40a0(lVar14);
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_8f8 = 0xe;
  uStack_8f7 = 0x7369;
  uStack_8f5 = 0x45;
  uStack_8f4 = 0x6d;
  uStack_8f3 = 0x70;
  uStack_8f2 = 0x7974;
  uStack_8f0 = uStack_8f0 & 0xffffff00;
  func_0x065af670(&uStack_548);
  if (((ulong)auStack_530 & 1) == 0) {
    if ((bStack_8f8 & 1) == 0) {
      pcStack_520 = (code *)CONCAT17(uStack_8e1,
                                     CONCAT16(uStack_8e2,
                                              CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))))
      ;
      auStack_530._1_2_ = uStack_8f7;
      auStack_530[0] = bStack_8f8;
      auStack_530[3] = uStack_8f5;
      auStack_530[5] = uStack_8f3;
      auStack_530[4] = uStack_8f4;
      auStack_530._6_2_ = uStack_8f2;
      uStack_528 = (long *)CONCAT44(CONCAT22(uStack_8ea,CONCAT11(uStack_8eb,uStack_8ec)),uStack_8f0)
      ;
    }
    else {
      func_0x04885070(auStack_530,
                      CONCAT17(uStack_8e1,
                               CONCAT16(uStack_8e2,
                                        CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                      CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0))));
    }
  }
  else {
    bVar31 = (bStack_8f8 & 1) == 0;
    puVar27 = (undefined2 *)
              CONCAT17(uStack_8e1,
                       CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
    if (bVar31) {
      puVar27 = &uStack_8f7;
    }
    uVar21 = (ulong)(bStack_8f8 >> 1);
    if (!bVar31) {
      uVar21 = CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)));
    }
    FUN_04885120(auStack_530,puVar27,uVar21);
  }
  auVar32 = func_0x0651e0c0();
  auStack_518 = auVar32;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = plStack_4f0;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f0414f8;
  pcStack_4f8 = (code *)(plVar20 + 3);
  *(undefined1 *)(plVar20 + 4) = 1;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[3] = (long)&UNK_0f041548;
  if (plStack_4f0 == (long *)0x0) {
LAB_06645f2e:
    plStack_4f0 = plVar20;
    if (uStack_6e8 < uStack_6e0) goto LAB_06645f40;
LAB_06645f7c:
    uStack_6e8 = func_0x065b01f0(&lStack_6f0,&uStack_548);
  }
  else {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 != 0) goto LAB_06645f2e;
    lVar14 = *plStack_4f0;
    plStack_4f0 = plVar20;
    (**(code **)(lVar14 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_6e0 <= uStack_6e8) goto LAB_06645f7c;
LAB_06645f40:
    uVar21 = uStack_6e8;
    func_0x065b0410(uStack_6e8,&uStack_548);
    uStack_6e8 = uVar21 + 0x1b0;
  }
  lVar14 = uStack_6e8 - 0x1b0;
  func_0x0652dc20(&uStack_548);
  func_0x064e40a0(lVar14);
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_8f8 = 4;
  uStack_8f7 = 0x6469;
  uStack_8f5 = 0;
  func_0x065af670(&uStack_548);
  if (((ulong)auStack_530 & 1) == 0) {
    if ((bStack_8f8 & 1) == 0) {
      pcStack_520 = (code *)CONCAT17(uStack_8e1,
                                     CONCAT16(uStack_8e2,
                                              CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))))
      ;
      auStack_530._1_2_ = uStack_8f7;
      auStack_530[0] = bStack_8f8;
      auStack_530[3] = uStack_8f5;
      auStack_530[5] = uStack_8f3;
      auStack_530[4] = uStack_8f4;
      auStack_530._6_2_ = uStack_8f2;
      uStack_528 = (long *)CONCAT44(CONCAT22(uStack_8ea,CONCAT11(uStack_8eb,uStack_8ec)),uStack_8f0)
      ;
    }
    else {
      func_0x04885070(auStack_530,
                      CONCAT17(uStack_8e1,
                               CONCAT16(uStack_8e2,
                                        CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                      CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0))));
    }
  }
  else {
    bVar31 = (bStack_8f8 & 1) == 0;
    puVar27 = (undefined2 *)
              CONCAT17(uStack_8e1,
                       CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
    if (bVar31) {
      puVar27 = &uStack_8f7;
    }
    uVar21 = (ulong)(bStack_8f8 >> 1);
    if (!bVar31) {
      uVar21 = CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)));
    }
    FUN_04885120(auStack_530,puVar27,uVar21);
  }
  auVar32 = func_0x0d8543b0();
  auStack_518 = auVar32;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  plVar2 = plStack_4f0;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f0415a8;
  pcStack_4f8 = (code *)(plVar20 + 3);
  *(undefined1 *)(plVar20 + 4) = 1;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[3] = (long)&UNK_0f0415f8;
  if (plStack_4f0 == (long *)0x0) {
LAB_06646109:
    plStack_4f0 = plVar20;
    if (uStack_6e8 < uStack_6e0) goto LAB_0664611b;
LAB_06646157:
    uStack_6e8 = func_0x065b01f0(&lStack_6f0,&uStack_548);
  }
  else {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 != 0) goto LAB_06646109;
    lVar14 = *plStack_4f0;
    plStack_4f0 = plVar20;
    (**(code **)(lVar14 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_6e0 <= uStack_6e8) goto LAB_06646157;
LAB_0664611b:
    uVar21 = uStack_6e8;
    func_0x065b0410(uStack_6e8,&uStack_548);
    uStack_6e8 = uVar21 + 0x1b0;
  }
  lVar14 = uStack_6e8 - 0x1b0;
  func_0x0652dc20(&uStack_548);
  func_0x064e40a0(lVar14);
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_8f8 = 0x20;
  uStack_8f7 = (undefined2)_DAT_013ad0b6;
  uStack_8f5 = (undefined1)((uint)_DAT_013ad0b6 >> 0x10);
  uStack_8f4 = (undefined1)((uint)_DAT_013ad0b6 >> 0x18);
  uStack_8f3 = (undefined1)_UNK_013ad0ba;
  uStack_8f2 = (undefined2)((uint)_UNK_013ad0ba >> 8);
  uStack_8f0._1_3_ = (undefined3)_UNK_013ad0be;
  uStack_8f0 = CONCAT31(uStack_8f0._1_3_,(char)((uint)_UNK_013ad0ba >> 0x18));
  uStack_8ec = (undefined1)((uint)_UNK_013ad0be >> 0x18);
  uStack_8eb = (undefined1)_UNK_013ad0c2;
  uStack_8ea = (undefined2)((uint)_UNK_013ad0c2 >> 8);
  uStack_8e8 = (undefined1)((uint)_UNK_013ad0c2 >> 0x18);
  uStack_8e7 = 0;
  func_0x065af670(&uStack_548);
  if (((ulong)auStack_530 & 1) == 0) {
    if ((bStack_8f8 & 1) == 0) {
      pcStack_520 = (code *)CONCAT17(uStack_8e1,
                                     CONCAT16(uStack_8e2,
                                              CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))))
      ;
      auStack_530._1_2_ = uStack_8f7;
      auStack_530[0] = bStack_8f8;
      auStack_530[3] = uStack_8f5;
      auStack_530[5] = uStack_8f3;
      auStack_530[4] = uStack_8f4;
      auStack_530._6_2_ = uStack_8f2;
      uStack_528 = (long *)CONCAT44(CONCAT22(uStack_8ea,CONCAT11(uStack_8eb,uStack_8ec)),uStack_8f0)
      ;
    }
    else {
      func_0x04885070(auStack_530,
                      CONCAT17(uStack_8e1,
                               CONCAT16(uStack_8e2,
                                        CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                      CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0))));
    }
  }
  else {
    bVar31 = (bStack_8f8 & 1) == 0;
    puVar27 = (undefined2 *)
              CONCAT17(uStack_8e1,
                       CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
    if (bVar31) {
      puVar27 = &uStack_8f7;
    }
    uVar21 = (ulong)(bStack_8f8 >> 1);
    if (!bVar31) {
      uVar21 = CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)));
    }
    FUN_04885120(auStack_530,puVar27,uVar21);
  }
  auVar32 = func_0x065f3710();
  auStack_518 = auVar32;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = plStack_4f0;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f041658;
  pcStack_4f8 = (code *)(plVar20 + 3);
  *(undefined1 *)(plVar20 + 4) = 1;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[3] = (long)&UNK_0f0416a8;
  if (plStack_4f0 == (long *)0x0) {
LAB_066462e9:
    plStack_4f0 = plVar20;
    if (uStack_6e8 < uStack_6e0) goto LAB_066462fb;
LAB_06646337:
    uStack_6e8 = func_0x065b01f0(&lStack_6f0,&uStack_548);
  }
  else {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 != 0) goto LAB_066462e9;
    lVar14 = *plStack_4f0;
    plStack_4f0 = plVar20;
    (**(code **)(lVar14 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_6e0 <= uStack_6e8) goto LAB_06646337;
LAB_066462fb:
    uVar21 = uStack_6e8;
    func_0x065b0410(uStack_6e8,&uStack_548);
    uStack_6e8 = uVar21 + 0x1b0;
  }
  lVar14 = uStack_6e8 - 0x1b0;
  func_0x0652dc20(&uStack_548);
  func_0x064e40a0(lVar14);
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_8f8 = 0x2a;
  uStack_8f7 = (undefined2)_DAT_0122314f;
  uStack_8f5 = (undefined1)((uint)_DAT_0122314f >> 0x10);
  uStack_8f4 = (undefined1)((uint)_DAT_0122314f >> 0x18);
  uStack_8f3 = (undefined1)_UNK_01223153;
  uStack_8f2 = (undefined2)((uint)_UNK_01223153 >> 8);
  uStack_8f0._1_3_ = (undefined3)_UNK_01223157;
  uStack_8f0 = CONCAT31(uStack_8f0._1_3_,(char)((uint)_UNK_01223153 >> 0x18));
  uStack_8ec = (undefined1)((uint)_UNK_01223157 >> 0x18);
  uStack_8eb = (undefined1)_UNK_0122315b;
  uStack_8ea = 0x6f4c;
  uStack_8e8 = 99;
  uStack_8e7 = 0x61;
  uStack_8e6 = 0x6e6f6974;
  uStack_8e2 = 0;
  func_0x065af670(&uStack_548);
  if (((ulong)auStack_530 & 1) == 0) {
    if ((bStack_8f8 & 1) == 0) {
      pcStack_520 = (code *)CONCAT17(uStack_8e1,
                                     CONCAT16(uStack_8e2,
                                              CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))))
      ;
      auStack_530._1_2_ = uStack_8f7;
      auStack_530[0] = bStack_8f8;
      auStack_530[3] = uStack_8f5;
      auStack_530[5] = uStack_8f3;
      auStack_530[4] = uStack_8f4;
      auStack_530._6_2_ = uStack_8f2;
      uStack_528 = (long *)CONCAT44(CONCAT22(uStack_8ea,CONCAT11(uStack_8eb,uStack_8ec)),uStack_8f0)
      ;
    }
    else {
      func_0x04885070(auStack_530,
                      CONCAT17(uStack_8e1,
                               CONCAT16(uStack_8e2,
                                        CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                      CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0))));
    }
  }
  else {
    bVar31 = (bStack_8f8 & 1) != 0;
    puVar27 = &uStack_8f7;
    if (bVar31) {
      puVar27 = (undefined2 *)
                CONCAT17(uStack_8e1,
                         CONCAT16(uStack_8e2,CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
    }
    uVar21 = (ulong)(bStack_8f8 >> 1);
    if (bVar31) {
      uVar21 = CONCAT26(uStack_8ea,CONCAT15(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0)));
    }
    FUN_04885120(auStack_530,puVar27,uVar21);
  }
  auVar32 = func_0x065f3710();
  auStack_518 = auVar32;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar20 = plStack_4f0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f041708;
  pcStack_4f8 = (code *)(puVar16 + 3);
  *(undefined1 *)(puVar16 + 4) = 1;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[3] = &UNK_0f041758;
  if (plStack_4f0 == (long *)0x0) {
LAB_066464db:
    plStack_4f0 = puVar16;
    if (uStack_6e0 <= uStack_6e8) {
LAB_06646529:
      uStack_6e8 = func_0x065b01f0(&lStack_6f0,&uStack_548);
      goto LAB_06646541;
    }
  }
  else {
    LOCK();
    plVar2 = plStack_4f0 + 1;
    lVar14 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar14 != 0) goto LAB_066464db;
    lVar14 = *plStack_4f0;
    plStack_4f0 = puVar16;
    (**(code **)(lVar14 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    if (uStack_6e0 <= uStack_6e8) goto LAB_06646529;
  }
  uVar21 = uStack_6e8;
  func_0x065b0410(uStack_6e8,&uStack_548);
  uStack_6e8 = uVar21 + 0x1b0;
LAB_06646541:
  lVar14 = uStack_6e8 + -0x1b0;
  func_0x0652dc20(&uStack_548);
  func_0x064e40a0(lVar14);
  if ((bStack_8f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_8e1,
                             CONCAT16(uStack_8e2,
                                      CONCAT42(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)))),
                    CONCAT26(uStack_8f2,
                             CONCAT15(uStack_8f3,
                                      CONCAT14(uStack_8f4,
                                               CONCAT13(uStack_8f5,CONCAT21(uStack_8f7,bStack_8f8)))
                                     )) & 0xfffffffffffffffe);
  }
  func_0x064e40a0(&lStack_798);
  auStack_750 = func_0x0668b6b0();
  lVar26 = lStack_780;
  lVar14 = lStack_778;
  if (lStack_780 != 0) {
    for (; lVar26 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_778 = lVar26;
    func_0x0412a280(lStack_780,lStack_770 - lStack_780);
  }
  lVar25 = lStack_788;
  lVar26 = lStack_790;
  lVar14 = lStack_798;
  lStack_798 = 0;
  lStack_790 = 0;
  lStack_788 = 0;
  *plVar17 = lVar14;
  plVar17[1] = lVar26;
  plVar17[2] = lVar25;
  lStack_780 = 0;
  lStack_778 = 0;
  lStack_770 = 0;
  plVar17[5] = (long)puStack_758;
  plVar17[3] = uStack_768;
  plVar17[4] = lStack_760;
  uStack_768 = 0;
  lStack_760 = 0;
  puStack_758 = (undefined *)0x0;
  *(undefined4 *)(plVar17 + 8) = uStack_740;
  *(undefined4 *)((long)plVar17 + 0x44) = uStack_73c;
  *(undefined4 *)(plVar17 + 9) = uStack_738;
  *(undefined4 *)((long)plVar17 + 0x4c) = uStack_734;
  *(undefined1 (*) [16])(plVar17 + 6) = auStack_750;
  plVar17[10] = lStack_730;
  plVar17[0xb] = lStack_728;
  plVar17[0xc] = lStack_720;
  lStack_730 = 0;
  lStack_728 = 0;
  lStack_720 = 0;
  plVar17[0xd] = lStack_718;
  plVar17[0xe] = lStack_710;
  lStack_718 = 0;
  lStack_710 = 0;
  plVar17[0xf] = lStack_708;
  plVar17[0x10] = (long)puStack_700;
  plVar17[0x11] = (long)puStack_6f8;
  lStack_708 = 0;
  puStack_700 = (ulong *)0x0;
  puStack_6f8 = (ulong *)0x0;
  plVar17[0x12] = lStack_6f0;
  plVar17[0x13] = uStack_6e8;
  plVar17[0x14] = uStack_6e0;
  lStack_6f0 = 0;
  uStack_6e8 = 0;
  uStack_6e0 = 0;
  plVar17[0x15] = lStack_6d8;
  plVar17[0x16] = lStack_6d0;
  plVar17[0x17] = lStack_6c8;
  lStack_6d8 = 0;
  lStack_6d0 = 0;
  lStack_6c8 = 0;
  plVar17[0x18] = lStack_6c0;
  plVar17[0x19] = lStack_6b8;
  plVar17[0x1a] = lStack_6b0;
  lStack_6c0 = 0;
  lStack_6b8 = 0;
  lStack_6b0 = 0;
  *(undefined4 *)(plVar17 + 0x1b) = (undefined4)uStack_6a8;
  *(undefined4 *)((long)plVar17 + 0xdc) = uStack_6a8._4_4_;
  *(undefined4 *)(plVar17 + 0x1c) = (undefined4)uStack_6a0;
  *(undefined4 *)((long)plVar17 + 0xe4) = uStack_6a0._4_4_;
  plVar17[0x1d] = lStack_698;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  lStack_698 = 0;
  func_0x0651ffe0(&lStack_780);
  lVar26 = lStack_798;
  lVar14 = lStack_790;
  if (lStack_798 != 0) {
    for (; lVar26 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_790 = lVar26;
    func_0x0412a280(lStack_798,lStack_788 - lStack_798);
  }
  return plVar17;
}



/* ---- referenced strings ----
 * 0x122314f  originalWorldLocation
 * 0x13ad0b6  normalizedOrigin
 * 0x14b0984  getPredictedWriteVolume
 */
