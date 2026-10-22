/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8f5f230 (ELF vaddr 0x8e5f230)
 * Label: caller-of-callee
 * Body:  [[08f5f230, 08f63850] [08f63860, 08f63b92] [08f63ba0, 08f63dd0] [08f63de0, 08f643cf]]
 * Ghidra: FUN_08f5f230
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08f5f230(long *param_1)

{
  long *plVar1;
  ulong ***pppuVar2;
  int iVar3;
  undefined8 uVar4;
  ulong ****ppppuVar5;
  ulong ****ppppuVar6;
  undefined4 uVar7;
  ulong ****ppppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulong ***pppuVar16;
  long lVar17;
  long *plVar18;
  ulong **ppuVar19;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined *puVar28;
  ulong ****ppppuStack_998;
  ulong ****ppppuStack_990;
  undefined8 uStack_988;
  uint uStack_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined1 uStack_974;
  undefined1 uStack_973;
  undefined1 uStack_972;
  undefined1 uStack_971;
  undefined1 uStack_970;
  undefined2 uStack_96f;
  undefined1 uStack_96d;
  undefined1 uStack_96c;
  undefined1 uStack_96b;
  undefined1 uStack_96a;
  undefined1 uStack_969;
  undefined1 uStack_968;
  undefined2 uStack_967;
  undefined2 uStack_965;
  undefined1 uStack_963;
  undefined2 uStack_962;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined1 auStack_950 [16];
  undefined1 auStack_940 [24];
  code *pcStack_928;
  undefined1 auStack_900 [24];
  code *pcStack_8e8;
  undefined1 auStack_8c0 [24];
  code *pcStack_8a8;
  undefined1 auStack_878 [24];
  code *pcStack_860;
  undefined8 uStack_838;
  undefined8 uStack_830;
  ulong ***pppuStack_828;
  undefined1 auStack_818 [4];
  undefined4 uStack_814;
  uint uStack_810;
  undefined4 uStack_80c;
  ulong **ppuStack_808;
  undefined1 auStack_800 [8];
  ulong uStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  ulong **ppuStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  code *pcStack_7c0;
  undefined1 auStack_7b8 [16];
  long *plStack_7a8;
  long *plStack_7a0;
  undefined8 uStack_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  code *pcStack_780;
  long *plStack_778;
  long alStack_770 [3];
  code *apcStack_758 [3];
  code *pcStack_740;
  undefined1 auStack_730 [24];
  code *pcStack_718;
  undefined1 auStack_710 [24];
  code *pcStack_6f8;
  undefined1 auStack_6e8 [24];
  code *apcStack_6d0 [2];
  undefined1 auStack_6c0 [24];
  ulong **ppuStack_6a8;
  ulong **ppuStack_6a0;
  ulong **ppuStack_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined1 auStack_680 [16];
  undefined1 auStack_670 [8];
  code *pcStack_668;
  code *pcStack_658;
  undefined1 auStack_640 [16];
  undefined1 auStack_630 [8];
  code *pcStack_628;
  code *pcStack_618;
  undefined1 auStack_5f8 [8];
  undefined1 auStack_5f0 [16];
  code *pcStack_5e0;
  code *pcStack_5d8;
  undefined1 auStack_5a8 [24];
  code *pcStack_590;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  ulong uStack_538;
  ulong uStack_530;
  undefined8 *puStack_528;
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [16];
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  long lStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  uint uStack_454;
  byte bStack_450;
  undefined7 uStack_44f;
  undefined1 uStack_448;
  undefined1 uStack_447;
  undefined8 uStack_440;
  ulong ****ppppuStack_438;
  ulong uStack_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulong ***pppuStack_3e8;
  ulong ***pppuStack_3e0;
  ulong ***pppuStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a0;
  undefined2 uStack_39c;
  uint uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined2 uStack_37c;
  uint uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined2 uStack_35c;
  uint uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined2 uStack_33c;
  uint uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined2 uStack_31c;
  uint uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined2 uStack_2fc;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2dc;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined2 uStack_2bc;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined2 uStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined2 uStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined2 uStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined2 uStack_23c;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined2 uStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined2 uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined2 uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  ulong ****ppppuStack_1a0;
  ulong uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  ulong ***pppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined *puStack_130;
  code *pcStack_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  
  puStack_7f0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_7f0 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_011c0696;
  auStack_800 = (undefined1  [8])0x21;
  uStack_7f8 = 0x19;
  *(ulong *)((long)puStack_7f0 + 9) = CONCAT17(UNK_011c0695,_DAT_011c068e);
  *(undefined8 *)((long)puStack_7f0 + 0x11) = uVar4;
  uVar4 = CONCAT71(_DAT_011c068e,UNK_011c068d);
  *puStack_7f0 = _DAT_011c0685;
  puStack_7f0[1] = uVar4;
  *(undefined1 *)((long)puStack_7f0 + 0x19) = 0;
  uStack_538 = 0;
  uStack_530 = 0;
  lStack_548 = 0;
  lStack_540 = 0;
  lStack_558 = 0;
  lStack_550 = 0;
  lStack_568 = 0;
  lStack_560 = 0;
  puStack_528 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_520);
  func_0x048b1dc0(auStack_510);
  uStack_470 = 0;
  lStack_468 = 0;
  lStack_480 = 0;
  uStack_478 = 0;
  lStack_490 = 0;
  lStack_488 = 0;
  lStack_4a0 = 0;
  lStack_498 = 0;
  uStack_4b0 = 0;
  lStack_4a8 = 0;
  lStack_4c0 = 0;
  uStack_4b8 = 0;
  puStack_4d0 = (undefined8 *)0x0;
  puStack_4c8 = (undefined8 *)0x0;
  lStack_4e0 = 0;
  lStack_4d8 = 0;
  lStack_4f0 = 0;
  lStack_4e8 = 0;
  lStack_500 = 0;
  lStack_4f8 = 0;
  if ((uStack_538 & 1) == 0) {
    if (((ulong)auStack_800 & 1) == 0) {
      puStack_528 = puStack_7f0;
      uStack_538 = (ulong)auStack_800;
      uStack_530 = uStack_7f8;
    }
    else {
      func_0x04885070(&uStack_538,puStack_7f0,uStack_7f8);
    }
  }
  else {
    uVar22 = (ulong)auStack_800 >> 1 & 0x7f;
    puVar14 = (undefined8 *)(auStack_800 + 1);
    if (((ulong)auStack_800 & 1) != 0) {
      uVar22 = uStack_7f8;
      puVar14 = puStack_7f0;
    }
    func_0x04885120(&uStack_538,puVar14,uVar22);
  }
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_7e8,&uStack_978);
    _DAT_0f54fd90 = (undefined4)uStack_7e8;
    uRam000000000f54fd94 = uStack_7e8._4_4_;
    uVar10 = (undefined4)uStack_7e0;
    uVar27 = uStack_7e0._4_4_;
    uStack_7e8 = (ulong **)0x0;
    uStack_7e0 = (ulong **)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar27;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar18 = plVar13 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)uStack_7e0;
    if (uStack_7e0 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_7e0 + 1);
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)((long)*uStack_7e0 + 0x10))(uStack_7e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6091c8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6091c8), iVar12 != 0)) {
    func_0x08fe4130();
    func_0x0410844d(&DAT_0f6091c8);
  }
  if ((DAT_0f6091c8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6091c8), iVar12 != 0)) {
    func_0x08fe4130();
    func_0x0410844d(&DAT_0f6091c8);
  }
  uStack_7e8 = (ulong **)&DAT_0f6091b0;
  uStack_7e0 = (ulong **)CONCAT44(uStack_7e0._4_4_,_DAT_0f6091b4);
  ppuStack_7d8 = (ulong **)0x0;
  uStack_7d0 = (undefined *)CONCAT44(uStack_7d0._4_4_,0x80);
  uStack_7c8 = (undefined *)0x68;
  pcStack_7c0 = (code *)&UNK_08fe41d0;
  auStack_7b8._0_8_ = 0;
  auStack_7b8._8_8_ = 0;
  plStack_7a8 = (long *)&UNK_08fe4390;
  plStack_7a0 = (long *)0x0;
  uStack_798._0_4_ = 0;
  uStack_798._4_4_ = 0;
  uStack_790 = 0;
  uStack_78c = 0;
  uStack_788 = 0;
  pcStack_780 = (code *)0x0;
  plStack_778 = (long *)0x0;
  alStack_770[0] = 0;
  FUN_048aee30(&uStack_978,lVar23,&uStack_7e8,0x96937b88);
  lVar23 = alStack_770[0];
  alStack_770[0] = 0;
  if (lVar23 != 0) {
    func_0x048ae940(lVar23);
    thunk_FUN_0ee326a0(lVar23,0x78);
  }
  plVar13 = plStack_778;
  if (plStack_778 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_778 + 1;
    lVar23 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_778 + 0x10))(plStack_778);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f603ae8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f603ae8), iVar12 != 0)) {
    func_0x08edbc00(0xf603ad0);
    func_0x0410844d(&DAT_0f603ae8);
  }
  uStack_7e8._0_4_ = _DAT_0f603ad4;
  uStack_7e0 = (ulong **)&SUB_08edbb10;
  plVar13 = (long *)uStack_7e0;
  ppuStack_7d8 = (ulong **)&UNK_08fe6a40;
  puVar28 = &UNK_08fe6a40;
  uStack_7e0._0_4_ = 0x8edbb10;
  uVar10 = _DAT_0f603ad4;
  uVar27 = (undefined4)uStack_7e0;
  uStack_7e0 = (ulong **)plVar13;
  func_0x05da1460(&uStack_978);
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_7e8,&uStack_978);
    uRam000000000f54fd94 = uStack_7e8._4_4_;
    _DAT_0f54fd90 = (undefined4)uStack_7e8;
    uVar7 = (undefined4)uStack_7e0;
    uVar9 = uStack_7e0._4_4_;
    uStack_7e8._0_4_ = 0;
    uStack_7e8._4_4_ = 0;
    uStack_7e0 = (ulong **)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar7;
    uRam000000000f54fd9c = uVar9;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar18 = plVar13 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)uStack_7e0;
    if (uStack_7e0 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_7e0 + 1);
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)((long)*uStack_7e0 + 0x10))(uStack_7e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6093f0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6093f0), iVar12 != 0)) {
    func_0x08fe5880();
    func_0x0410844d(&DAT_0f6093f0);
  }
  if ((DAT_0f6093f0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6093f0), iVar12 != 0)) {
    func_0x08fe5880();
    func_0x0410844d(&DAT_0f6093f0);
  }
  uStack_7e8 = (ulong **)&DAT_0f6093d8;
  uStack_7e0 = (ulong **)CONCAT44(uStack_7e0._4_4_,_DAT_0f6093dc);
  ppuStack_7d8 = (ulong **)0x0;
  uStack_7d0 = (undefined *)CONCAT44(uStack_7d0._4_4_,0x280);
  uStack_7c8 = (undefined *)0x20;
  pcStack_7c0 = (code *)&UNK_08fe5900;
  auStack_7b8._0_8_ = 0;
  auStack_7b8._8_8_ = 0;
  plStack_7a8 = (long *)&UNK_08fe5ae0;
  plStack_7a0 = (long *)0x1;
  uStack_798._0_4_ = 0x65b1ed0;
  uStack_798._4_4_ = 0;
  uStack_790 = 0x8fe5b70;
  uStack_78c = 0;
  uStack_788 = 0;
  pcStack_780 = (code *)0x0;
  plStack_778 = (long *)0x0;
  alStack_770[0] = 0;
  FUN_048aee30(&uStack_978,lVar23,&uStack_7e8,0xd169af8f,in_R8,in_R9,uVar10,uVar27,puVar28);
  lVar23 = alStack_770[0];
  alStack_770[0] = 0;
  if (lVar23 != 0) {
    func_0x048ae940(lVar23);
    thunk_FUN_0ee326a0(lVar23,0x78);
  }
  plVar13 = plStack_778;
  if (plStack_778 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_778 + 1;
    lVar23 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_778 + 0x10))(plStack_778);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f603ba0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f603ba0), iVar12 != 0)) {
    func_0x08edc8d0(0xf603b88);
    func_0x0410844d(&DAT_0f603ba0);
  }
  func_0x065ac270(&uStack_978,_DAT_0f603b8c,&UNK_08fe6a50);
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_7e8,&uStack_978);
    _DAT_0f54fd90 = (undefined4)uStack_7e8;
    uRam000000000f54fd94 = uStack_7e8._4_4_;
    uVar10 = (undefined4)uStack_7e0;
    uVar27 = uStack_7e0._4_4_;
    uStack_7e8 = (ulong **)0x0;
    uStack_7e0 = (ulong **)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar27;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar18 = plVar13 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)uStack_7e0;
    if (uStack_7e0 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_7e0 + 1);
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)((long)*uStack_7e0 + 0x10))(uStack_7e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f609338 == '\0') && (iVar12 = func_0x04108328(&DAT_0f609338), iVar12 != 0)) {
    func_0x08fe4e20();
    func_0x0410844d(&DAT_0f609338);
  }
  if ((DAT_0f609338 == '\0') && (iVar12 = func_0x04108328(&DAT_0f609338), iVar12 != 0)) {
    func_0x08fe4e20();
    func_0x0410844d(&DAT_0f609338);
  }
  uStack_7e8 = (ulong **)&DAT_0f609320;
  uStack_7e0 = (ulong **)CONCAT44(uStack_7e0._4_4_,_DAT_0f609324);
  ppuStack_7d8 = (ulong **)0x0;
  uStack_7d0 = (undefined *)CONCAT44(uStack_7d0._4_4_,0x280);
  uStack_7c8 = (undefined *)0x20;
  pcStack_7c0 = (code *)&UNK_08fe4ea0;
  auStack_7b8._0_8_ = &UNK_08fe5090;
  auStack_7b8._8_8_ = 0;
  plStack_7a8 = (long *)&UNK_08fe5130;
  plStack_7a0 = (long *)0x1;
  uStack_798._0_4_ = 0x65bd0c0;
  uStack_798._4_4_ = 0;
  uStack_790 = 0x8fe51c0;
  uStack_78c = 0;
  uStack_788 = 0;
  pcStack_780 = (code *)0x0;
  plStack_778 = (long *)0x0;
  alStack_770[0] = 0;
  FUN_048aee30(&uStack_978,lVar23,&uStack_7e8,0x2ee3408e);
  lVar23 = alStack_770[0];
  alStack_770[0] = 0;
  if (lVar23 != 0) {
    func_0x048ae940(lVar23);
    thunk_FUN_0ee326a0(lVar23,0x78);
  }
  plVar13 = plStack_778;
  if (plStack_778 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_778 + 1;
    lVar23 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_778 + 0x10))(plStack_778);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f603c58 == '\0') && (iVar12 = func_0x04108328(&DAT_0f603c58), iVar12 != 0)) {
    func_0x08edd960(0xf603c40);
    func_0x0410844d(&DAT_0f603c58);
  }
  func_0x065ac270(&uStack_978,_DAT_0f603c44,&UNK_08fe6b40);
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_7e8,&uStack_978);
    _DAT_0f54fd90 = (undefined4)uStack_7e8;
    uRam000000000f54fd94 = uStack_7e8._4_4_;
    uVar10 = (undefined4)uStack_7e0;
    uVar27 = uStack_7e0._4_4_;
    uStack_7e8 = (ulong **)0x0;
    uStack_7e0 = (ulong **)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar27;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar18 = plVar13 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)uStack_7e0;
    if (uStack_7e0 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_7e0 + 1);
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)((long)*uStack_7e0 + 0x10))(uStack_7e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f609280 == '\0') && (iVar12 = func_0x04108328(&DAT_0f609280), iVar12 != 0)) {
    func_0x08fe4660();
    func_0x0410844d(&DAT_0f609280);
  }
  if ((DAT_0f609280 == '\0') && (iVar12 = func_0x04108328(&DAT_0f609280), iVar12 != 0)) {
    func_0x08fe4660();
    func_0x0410844d(&DAT_0f609280);
  }
  uStack_7e8 = (ulong **)&DAT_0f609268;
  uStack_7e0 = (ulong **)CONCAT44(uStack_7e0._4_4_,_DAT_0f60926c);
  ppuStack_7d8 = (ulong **)0x0;
  uStack_7d0 = (undefined *)CONCAT44(uStack_7d0._4_4_,0x280);
  uStack_7c8 = (undefined *)0x10;
  pcStack_7c0 = (code *)&UNK_08fe46e0;
  auStack_7b8._0_8_ = &UNK_08fe48d0;
  auStack_7b8._8_8_ = 0;
  plStack_7a8 = (long *)&UNK_08fe4920;
  plStack_7a0 = (long *)0x1;
  uStack_798._0_4_ = 0x65bc1f0;
  uStack_798._4_4_ = 0;
  uStack_790 = 0x8fe49d0;
  uStack_78c = 0;
  uStack_788 = 0;
  pcStack_780 = (code *)0x0;
  plStack_778 = (long *)0x0;
  alStack_770[0] = 0;
  FUN_048aee30(&uStack_978,lVar23,&uStack_7e8,0xef0c164e);
  lVar23 = alStack_770[0];
  alStack_770[0] = 0;
  if (lVar23 != 0) {
    func_0x048ae940(lVar23);
    thunk_FUN_0ee326a0(lVar23,0x78);
  }
  plVar13 = plStack_778;
  if (plStack_778 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_778 + 1;
    lVar23 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_778 + 0x10))(plStack_778);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f603d10 == '\0') && (iVar12 = func_0x04108328(&DAT_0f603d10), iVar12 != 0)) {
    func_0x08ede550(0xf603cf8);
    func_0x0410844d(&DAT_0f603d10);
  }
  func_0x065ac270(&uStack_978,_DAT_0f603cfc,&UNK_08fe6c10);
  auStack_510 = func_0x08edea60();
  uStack_978 = 0x6e776f0a;
  uStack_974 = 0x65;
  uStack_973 = 0x72;
  uStack_972 = 0;
  func_0x08ece2d0();
  func_0x08ece2d0();
  func_0x065af670(&uStack_7e8);
  lVar23 = (long)&uStack_978 + 1;
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auStack_7b8 = func_0x08ecfe40();
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16cab0;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16cb00;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16cb58;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16cba8;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f5fe0d:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f5fe1f;
LAB_08f5fe5b:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f5fe0d;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f5fe5b;
LAB_08f5fe1f:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_1c0 = _DAT_0f6422e0;
  uStack_1bc = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_1a8 = _DAT_0f6422f8;
    uStack_1b8 = _DAT_0f6422e8;
    uStack_1b4 = uRam000000000f6422ec;
    uStack_1b0 = _DAT_0f6422f0;
    uStack_1ac = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_1b8,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_1c0,0);
  if ((uStack_1b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_1a8,CONCAT44(uStack_1b4,uStack_1b8) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x7461631e;
  uStack_974 = 99;
  uStack_973 = 0x68;
  uStack_972 = 0x46;
  uStack_971 = 0x69;
  uStack_970 = 0x72;
  uStack_96f = 0x4f65;
  uStack_96d = 0x6e;
  uStack_96c = 0x48;
  uStack_96b = 0x75;
  uStack_96a = 0x72;
  uStack_969 = 0x74;
  uStack_968 = 0;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651e0c0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16cc08;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16cc58;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16ccb0;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16cd00;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f60111:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f60123;
LAB_08f6015f:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f60111;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f6015f;
LAB_08f60123:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_1e0 = _DAT_0f6422e0;
  uStack_1dc = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_1c8 = _DAT_0f6422f8;
    uStack_1d8 = _DAT_0f6422e8;
    uStack_1d4 = uRam000000000f6422ec;
    uStack_1d0 = _DAT_0f6422f0;
    uStack_1cc = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_1d8,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_1e0,0);
  if ((uStack_1d8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_1c8,CONCAT44(uStack_1d4,uStack_1d8) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_0127a50f;
  uStack_968 = SUB81(puVar15,0);
  uStack_967 = (undefined2)((ulong)puVar15 >> 8);
  uStack_965 = (undefined2)((ulong)puVar15 >> 0x18);
  uStack_963 = (undefined1)((ulong)puVar15 >> 0x28);
  uStack_962 = (undefined2)((ulong)puVar15 >> 0x30);
  uStack_978 = 0x21;
  uStack_974 = 0;
  uStack_973 = 0;
  uStack_972 = 0;
  uStack_971 = 0;
  uStack_970 = 0x1d;
  uStack_96f = 0;
  uStack_96d = 0;
  uStack_96c = 0;
  uStack_96b = 0;
  uStack_96a = 0;
  uStack_969 = 0;
  *(ulong *)((long)puVar15 + 0xd) = CONCAT53(_UNK_0127a50a,_DAT_0127a507);
  *(undefined8 *)((long)puVar15 + 0x15) = uVar4;
  uVar7 = _UNK_0127a506;
  uVar27 = _UNK_0127a502;
  uVar10 = _UNK_0127a4fe;
  *puVar15 = _DAT_0127a4fa;
  puVar15[1] = uVar10;
  puVar15[2] = uVar27;
  puVar15[3] = uVar7;
  *(undefined1 *)((long)puVar15 + 0x1d) = 0;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651e0c0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16cd60;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16cdb0;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16ce08;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16ce58;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f60442:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f60454;
LAB_08f60490:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f60442;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f60490;
LAB_08f60454:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_200 = _DAT_0f6422e0;
  uStack_1fc = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_1e8 = _DAT_0f6422f8;
    uStack_1f8 = _DAT_0f6422e8;
    uStack_1f4 = uRam000000000f6422ec;
    uStack_1f0 = _DAT_0f6422f0;
    uStack_1ec = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_1f8,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_200,0);
  if ((uStack_1f8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_1e8,CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar15 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar7 = _UNK_0125fadf;
  uVar27 = _UNK_0125fadb;
  uVar10 = _UNK_0125fad7;
  uStack_968 = SUB81(puVar15,0);
  uStack_967 = (undefined2)((ulong)puVar15 >> 8);
  uStack_965 = (undefined2)((ulong)puVar15 >> 0x18);
  uStack_963 = (undefined1)((ulong)puVar15 >> 0x28);
  uStack_962 = (undefined2)((ulong)puVar15 >> 0x30);
  uStack_978 = 0x1b;
  uStack_974 = 0;
  uStack_973 = 0;
  uStack_972 = 0;
  uStack_971 = 0;
  uStack_970 = 0x17;
  uStack_96f = 0;
  uStack_96d = 0;
  uStack_96c = 0;
  uStack_96b = 0;
  uStack_96a = 0;
  uStack_969 = 0;
  *puVar15 = _DAT_0125fad3;
  puVar15[1] = uVar10;
  puVar15[2] = uVar27;
  puVar15[3] = uVar7;
  *(undefined8 *)((long)puVar15 + 0xf) = 0x74727548656c6974;
  *(undefined1 *)((long)puVar15 + 0x17) = 0;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651e0c0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16ceb8;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16cf08;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16cf60;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16cfb0;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f60775:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f60787;
LAB_08f607c3:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f60775;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f607c3;
LAB_08f60787:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_220 = _DAT_0f6422e0;
  uStack_21c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_208 = _DAT_0f6422f8;
    uStack_218 = _DAT_0f6422e8;
    uStack_214 = uRam000000000f6422ec;
    uStack_210 = _DAT_0f6422f0;
    uStack_20c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_218,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_220,0);
  if ((uStack_218 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_208,CONCAT44(uStack_214,uStack_218) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x6172670e;
  uStack_974 = 0x76;
  uStack_973 = 0x69;
  uStack_972 = 0x74;
  uStack_971 = 0x79;
  uStack_970 = 0;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651f8f0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16d010;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16d060;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16d0b8;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16d108;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f60a6b:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f60a7d;
LAB_08f60ab9:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f60a6b;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f60ab9;
LAB_08f60a7d:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_240 = _DAT_0f6422e0;
  uStack_23c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_228 = _DAT_0f6422f8;
    uStack_238 = _DAT_0f6422e8;
    uStack_234 = uRam000000000f6422ec;
    uStack_230 = _DAT_0f6422f0;
    uStack_22c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_238,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_240,0);
  if ((uStack_238 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x7469681c;
  uStack_974 = 0x47;
  uStack_973 = 0x72;
  uStack_972 = 0x6f;
  uStack_971 = 0x75;
  uStack_970 = 0x6e;
  uStack_96f = 0x5364;
  uStack_96d = 0x6f;
  uStack_96c = 0x75;
  uStack_96b = 0x6e;
  uStack_96a = 100;
  uStack_969 = 0;
  func_0x066baa80();
  func_0x066baa80();
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x066d15f0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16d168;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16d1b8;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16d210;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16d260;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f60d79:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f60d8b;
LAB_08f60dc7:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f60d79;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f60dc7;
LAB_08f60d8b:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_260 = _DAT_0f6422e0;
  uStack_25c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_248 = _DAT_0f6422f8;
    uStack_258 = _DAT_0f6422e8;
    uStack_254 = uRam000000000f6422ec;
    uStack_250 = _DAT_0f6422f0;
    uStack_24c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_258,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_260,0);
  if ((uStack_258 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_248,CONCAT44(uStack_254,uStack_258) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x7469681c;
  uStack_974 = 0x45;
  uStack_973 = 0x6e;
  uStack_972 = 0x74;
  uStack_971 = 0x69;
  uStack_970 = 0x74;
  uStack_96f = 0x5379;
  uStack_96d = 0x6f;
  uStack_96c = 0x75;
  uStack_96b = 0x6e;
  uStack_96a = 100;
  uStack_969 = 0;
  func_0x066baa80();
  func_0x066baa80();
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x066d15f0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16d2c0;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16d310;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16d368;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16d3b8;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f61087:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f61099;
LAB_08f610d5:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f61087;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f610d5;
LAB_08f61099:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_280 = _DAT_0f6422e0;
  uStack_27c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_268 = _DAT_0f6422f8;
    uStack_278 = _DAT_0f6422e8;
    uStack_274 = uRam000000000f6422ec;
    uStack_270 = _DAT_0f6422f0;
    uStack_26c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_278,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_280,0);
  if ((uStack_278 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x72696114;
  uStack_974 = 0x49;
  uStack_973 = 0x6e;
  uStack_972 = 0x65;
  uStack_971 = 0x72;
  uStack_970 = 0x74;
  uStack_96f = 0x6169;
  uStack_96d = 0;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651f8f0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16d418;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16d468;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16d4c0;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16d510;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f61383:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f61395;
LAB_08f613d1:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f61383;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f613d1;
LAB_08f61395:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_2a0 = _DAT_0f6422e0;
  uStack_29c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_288 = _DAT_0f6422f8;
    uStack_298 = _DAT_0f6422e8;
    uStack_294 = uRam000000000f6422ec;
    uStack_290 = _DAT_0f6422f0;
    uStack_28c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_298,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_2a0,0);
  if ((uStack_298 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_288,CONCAT44(uStack_294,uStack_298) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x71696c1a;
  uStack_974 = 0x75;
  uStack_973 = 0x69;
  uStack_972 = 100;
  uStack_971 = 0x49;
  uStack_970 = 0x6e;
  uStack_96f = 0x7265;
  uStack_96d = 0x74;
  uStack_96c = 0x69;
  uStack_96b = 0x61;
  uStack_96a = 0;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651f8f0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16d570;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16d5c0;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16d618;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16d668;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f61687:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f61699;
LAB_08f616d5:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f61687;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f616d5;
LAB_08f61699:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_2c0 = _DAT_0f6422e0;
  uStack_2bc = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_2a8 = _DAT_0f6422f8;
    uStack_2b8 = _DAT_0f6422e8;
    uStack_2b4 = uRam000000000f6422ec;
    uStack_2b0 = _DAT_0f6422f0;
    uStack_2ac = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_2b8,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_2c0,0);
  if ((uStack_2b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2a8,CONCAT44(uStack_2b4,uStack_2b8) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978._1_3_ = (undefined3)_DAT_0149d2fa;
  uStack_978 = CONCAT31(uStack_978._1_3_,0x28);
  uStack_974 = (undefined1)((uint)_DAT_0149d2fa >> 0x18);
  uStack_973 = (undefined1)_UNK_0149d2fe;
  uStack_972 = (undefined1)((uint)_UNK_0149d2fe >> 8);
  uStack_971 = (undefined1)((uint)_UNK_0149d2fe >> 0x10);
  uStack_970 = (undefined1)((uint)_UNK_0149d2fe >> 0x18);
  uStack_96f = (undefined2)_UNK_0149d302;
  uStack_96d = (undefined1)((uint)_UNK_0149d302 >> 0x10);
  uStack_96c = (undefined1)((uint)_UNK_0149d302 >> 0x18);
  uStack_96b = (undefined1)_UNK_0149d306;
  uStack_96a = (undefined1)((uint)_UNK_0149d306 >> 8);
  uStack_969 = (undefined1)((uint)_UNK_0149d306 >> 0x10);
  uStack_968 = (undefined1)((uint)_UNK_0149d306 >> 0x18);
  uStack_967 = 0x486e;
  uStack_965 = 0x7469;
  uStack_963 = 0;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651e0c0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16d6c8;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16d718;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16d770;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16d7c0;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f61981:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f61993;
LAB_08f619cf:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f61981;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f619cf;
LAB_08f61993:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_2e0 = _DAT_0f6422e0;
  uStack_2dc = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_2c8 = _DAT_0f6422f8;
    uStack_2d8 = _DAT_0f6422e8;
    uStack_2d4 = uRam000000000f6422ec;
    uStack_2d0 = _DAT_0f6422f0;
    uStack_2cc = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_2d8,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_2e0,0);
  if ((uStack_2d8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2c8,CONCAT44(uStack_2d4,uStack_2d8) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x74696816;
  uStack_974 = 0x50;
  uStack_973 = 0x61;
  uStack_972 = 0x72;
  uStack_971 = 0x74;
  uStack_970 = 0x69;
  uStack_96f = 0x6c63;
  uStack_96d = 0x65;
  uStack_96c = 0;
  func_0x066baa80();
  func_0x066baa80();
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x066d15f0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16d820;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16d870;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16d8c8;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16d918;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f61c88:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f61c9a;
LAB_08f61cd6:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f61c88;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f61cd6;
LAB_08f61c9a:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_300 = _DAT_0f6422e0;
  uStack_2fc = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_2e8 = _DAT_0f6422f8;
    uStack_2f8 = _DAT_0f6422e8;
    uStack_2f4 = uRam000000000f6422ec;
    uStack_2f0 = _DAT_0f6422f0;
    uStack_2ec = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_2f8,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_300,0);
  if ((uStack_2f8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2e8,CONCAT44(uStack_2f4,uStack_2f8) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978._1_3_ = (undefined3)_DAT_012df6ee;
  uStack_978 = CONCAT31(uStack_978._1_3_,0x22);
  uStack_974 = (undefined1)((uint)_DAT_012df6ee >> 0x18);
  uStack_973 = (undefined1)_UNK_012df6f2;
  uStack_972 = (undefined1)((uint)_UNK_012df6f2 >> 8);
  uStack_971 = (undefined1)((uint)_UNK_012df6f2 >> 0x10);
  uStack_970 = (undefined1)((uint)_UNK_012df6f2 >> 0x18);
  uStack_96f = (undefined2)_UNK_012df6f6;
  uStack_96d = (undefined1)((uint)_UNK_012df6f6 >> 0x10);
  uStack_96c = (undefined1)((uint)_UNK_012df6f6 >> 0x18);
  uStack_96b = (undefined1)_UNK_012df6fa;
  uStack_96a = (undefined1)((uint)_UNK_012df6fa >> 8);
  uStack_969 = (undefined1)((uint)_UNK_012df6fa >> 0x10);
  uStack_968 = (undefined1)((uint)_UNK_012df6fa >> 0x18);
  uStack_967 = 0x74;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651e0c0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16d978;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16d9c8;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16da20;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16da70;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f61f7c:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f61f8e;
LAB_08f61fca:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f61f7c;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f61fca;
LAB_08f61f8e:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_320 = _DAT_0f6422e0;
  uStack_31c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_308 = _DAT_0f6422f8;
    uStack_318 = _DAT_0f6422e8;
    uStack_314 = uRam000000000f6422ec;
    uStack_310 = _DAT_0f6422f0;
    uStack_30c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_318,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_320,0);
  if ((uStack_318 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_308,CONCAT44(uStack_314,uStack_318) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x6f747312;
  uStack_974 = 0x70;
  uStack_973 = 0x4f;
  uStack_972 = 0x6e;
  uStack_971 = 0x48;
  uStack_970 = 0x69;
  uStack_96f = 0x74;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) == 0;
    lVar17 = CONCAT26(uStack_962,
                      CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    if (bVar25) {
      lVar17 = lVar23;
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (!bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar17,uVar22);
  }
  auVar26 = func_0x0651e0c0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16dad0;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16db20;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16db78;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16dbc8;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f62273:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f62285;
LAB_08f622c1:
    uVar22 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_08f62273;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f622c1;
LAB_08f62285:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    uVar22 = uVar22 + 0x1b0;
  }
  uStack_4b8 = uVar22;
  func_0x0652dc20(&uStack_7e8);
  uStack_340 = _DAT_0f6422e0;
  uStack_33c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_328 = _DAT_0f6422f8;
    uStack_338 = _DAT_0f6422e8;
    uStack_334 = uRam000000000f6422ec;
    uStack_330 = _DAT_0f6422f0;
    uStack_32c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_338,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(uVar22 - 0x1b0,&uStack_340,0);
  if ((uStack_338 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_328,CONCAT44(uStack_334,uStack_338) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  uStack_978 = 0x466e6f14;
  uStack_974 = 0x69;
  uStack_973 = 0x72;
  uStack_972 = 0x65;
  uStack_971 = 0x54;
  uStack_970 = 0x69;
  uStack_96f = 0x656d;
  uStack_96d = 0;
  func_0x065af670(&uStack_7e8);
  if (((ulong)uStack_7d0 & 1) == 0) {
    if ((uStack_978 & 1) == 0) {
      pcStack_7c0 = (code *)CONCAT26(uStack_962,
                                     CONCAT15(uStack_963,
                                              CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
      ;
      uStack_7d0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_971,CONCAT12(uStack_972,CONCAT11(uStack_973,uStack_974))
                                    ),uStack_978);
      uStack_7c8 = (undefined *)
                   CONCAT44(CONCAT13(uStack_969,CONCAT12(uStack_96a,CONCAT11(uStack_96b,uStack_96c))
                                    ),CONCAT13(uStack_96d,CONCAT21(uStack_96f,uStack_970)));
    }
    else {
      func_0x04885070(&uStack_7d0,
                      CONCAT26(uStack_962,
                               CONCAT15(uStack_963,
                                        CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                      CONCAT17(uStack_969,
                               CONCAT16(uStack_96a,
                                        CONCAT15(uStack_96b,
                                                 CONCAT14(uStack_96c,
                                                          CONCAT13(uStack_96d,
                                                                   CONCAT21(uStack_96f,uStack_970)))
                                                ))));
    }
  }
  else {
    bVar25 = (uStack_978 & 1) != 0;
    if (bVar25) {
      lVar23 = CONCAT26(uStack_962,
                        CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))));
    }
    uVar22 = (ulong)((byte)uStack_978 >> 1);
    if (bVar25) {
      uVar22 = CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
    }
    func_0x04885120(&uStack_7d0,lVar23,uVar22);
  }
  auVar26 = func_0x0651f8f0();
  auStack_7b8 = auVar26;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar18 = plStack_7a0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f16dc28;
  plStack_7a8 = plVar13 + 4;
  plVar13[10] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[4] = (long)&UNK_0f16dc78;
  if (plStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7a0 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *plStack_7a0;
      plStack_7a0 = plVar13;
      (**(code **)(lVar23 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      plVar13 = plStack_7a0;
    }
  }
  plStack_7a0 = plVar13;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16dcd0;
  uStack_798 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f16dd20;
  plVar13 = (long *)CONCAT44(uStack_78c,uStack_790);
  uStack_790 = SUB84(puVar14,0);
  uStack_78c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar13 == (long *)0x0) {
LAB_08f6256f:
    if (uStack_4b8 < uStack_4b0) goto LAB_08f62581;
LAB_08f625bd:
    lVar23 = func_0x065b01f0(&lStack_4c0,&uStack_7e8);
  }
  else {
    LOCK();
    plVar18 = plVar13 + 1;
    lVar23 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar23 != 0) goto LAB_08f6256f;
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    if (uStack_4b0 <= uStack_4b8) goto LAB_08f625bd;
LAB_08f62581:
    uVar22 = uStack_4b8;
    func_0x065b0410(uStack_4b8,&uStack_7e8);
    lVar23 = uVar22 + 0x1b0;
  }
  uStack_4b8 = lVar23;
  func_0x0652dc20(&uStack_7e8);
  uStack_360 = _DAT_0f6422e0;
  uStack_35c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_348 = _DAT_0f6422f8;
    uStack_358 = _DAT_0f6422e8;
    uStack_354 = uRam000000000f6422ec;
    uStack_350 = _DAT_0f6422f0;
    uStack_34c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_358,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(lVar23 + -0x1b0,&uStack_360,0);
  if ((uStack_358 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_348,CONCAT44(uStack_354,uStack_358) & 0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  bStack_450 = 0x10;
  uStack_44f = 0x7469636f6c6576;
  uStack_448 = 0x79;
  uStack_447 = 0;
  func_0x065134a0(&uStack_978,&bStack_450);
  auStack_818 = (undefined1  [4])0x74706f0e;
  uStack_814 = 0x736e6f69;
  uStack_810 = uStack_810 & 0xffffff00;
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  func_0x048b1dc0(&uStack_160);
  func_0x0652b590(auStack_150);
  if (((ulong)uStack_178 & 1) == 0) {
    if (((uint)auStack_818 & 1) == 0) {
      ppuStack_168 = ppuStack_808;
      uStack_178 = (ulong **)CONCAT44(uStack_814,auStack_818);
      uStack_170 = (ulong **)CONCAT44(uStack_80c,uStack_810);
    }
    else {
      func_0x04885070(&uStack_178,ppuStack_808,CONCAT44(uStack_80c,uStack_810));
    }
  }
  else {
    bVar25 = ((uint)auStack_818 & 1) != 0;
    ppuVar19 = (ulong **)(auStack_818 + 1);
    if (bVar25) {
      ppuVar19 = ppuStack_808;
    }
    uVar22 = (ulong)(auStack_818[0] >> 1);
    if (bVar25) {
      uVar22 = CONCAT44(uStack_80c,uStack_810);
    }
    func_0x04885120(&uStack_178,ppuVar19,uVar22);
  }
  plVar13 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar13 == (long *)0x0) {
    func_0x048b0de0(&uStack_7e8,&uStack_418);
    _DAT_0f54fd90 = (undefined4)uStack_7e8;
    uRam000000000f54fd94 = uStack_7e8._4_4_;
    uVar10 = (undefined4)uStack_7e0;
    uVar27 = uStack_7e0._4_4_;
    uStack_7e8 = (ulong **)0x0;
    uStack_7e0 = (ulong **)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar27;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar18 = plVar13 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)uStack_7e0;
    if (uStack_7e0 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_7e0 + 1);
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)((long)*uStack_7e0 + 0x10))(uStack_7e0);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f609510 == '\0') {
    iVar12 = func_0x04108328(&DAT_0f609510);
    if (iVar12 != 0) {
      func_0x08feecf0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f609490,0xf53dab8);
      func_0x0410844d(&DAT_0f609510);
    }
  }
  plVar18 = (long *)(*plVar13 +
                    (ulong)((int)((ulong)(plVar13[1] - *plVar13) >> 3) - 1U &
                           *(uint *)(_DAT_0f609490 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_08f628b0;
    plVar18 = (long *)(plVar13[3] + lVar23 * 0x18);
  } while (*(uint *)(plVar13[3] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f609490 + 4));
  if (plVar18 == (long *)plVar13[4]) {
LAB_08f628b0:
    uStack_160 = &DAT_0f609490;
  }
  else {
    uStack_160 = (undefined *)plVar18[2];
  }
  uStack_158 = plVar13;
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(&uStack_140);
  }
  puVar28 = puStack_108;
  puStack_130 = &UNK_08fef0a0;
  uStack_120 = 0x6ab7084b;
  pcStack_128 = (code *)0x0;
  uStack_11c = 2;
  uStack_140 = 0;
  uStack_138 = 0;
  puStack_108 = &UNK_08feeef0;
  if (puVar28 != &UNK_08feeef0) {
    uStack_110 = 0;
  }
  uStack_408 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  plStack_3c8 = (long *)0x0;
  uStack_3c0 = 0;
  pppuStack_3d8 = (ulong ***)0x0;
  plStack_3d0 = (long *)0x0;
  pppuStack_3e8 = (ulong ***)0x0;
  pppuStack_3e0 = (ulong ***)0x0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_400 = 0x746f6f68730a;
  func_0x06523ef0(&uStack_7e8,auStack_950);
  func_0x06523ef0(apcStack_6d0,auStack_150);
  uStack_838 = (ulong ***)0x0;
  uStack_830 = (ulong ****)0x0;
  pppuStack_828 = (ulong ***)0x0;
  uStack_430 = uStack_430 & 0xffffffffffffff00;
  ppppuStack_438 = (ulong ****)&uStack_838;
  ppppuStack_1a0 = (ulong ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (ppppuStack_1a0 == (ulong ****)0x0) {
    func_0x0eec74c0(0x230,0);
  }
  pppuStack_828 = (ulong ***)(ppppuStack_1a0 + 0x46);
  ppppuStack_990 = &pppuStack_180;
  uStack_988 = (ulong ****)&ppppuStack_1a0;
  uStack_980 = uStack_980 & 0xffffff00;
  ppppuStack_998 = (ulong ****)&uStack_838;
  uStack_838 = (ulong ***)ppppuStack_1a0;
  uStack_830 = ppppuStack_1a0;
  pppuStack_180 = (ulong ***)ppppuStack_1a0;
  func_0x06523ef0(ppppuStack_1a0,&uStack_7e8);
  ppppuStack_1a0 = ppppuStack_1a0 + 0x23;
  func_0x06523ef0(ppppuStack_1a0,apcStack_6d0);
  uStack_830 = ppppuStack_1a0 + 0x23;
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(auStack_5f8);
  }
  if (pcStack_628 != (code *)0x0) {
    (*pcStack_628)(auStack_640);
  }
  if (pcStack_668 != (code *)0x0) {
    (*pcStack_668)(auStack_680);
  }
  if (ppuStack_6a8 != (ulong **)0x0) {
    (*(code *)ppuStack_6a8)(auStack_6c0);
  }
  if (pcStack_6f8 != (code *)0x0) {
    (*pcStack_6f8)(auStack_710);
  }
  if (pcStack_740 != (code *)0x0) {
    (*pcStack_740)(apcStack_758);
  }
  if (pcStack_780 != (code *)0x0) {
    (*pcStack_780)(&uStack_798);
  }
  if (pcStack_7c0 != (code *)0x0) {
    (*pcStack_7c0)(&ppuStack_7d8);
  }
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f16dd80;
  plStack_460 = param_1;
  uVar10 = func_0x0d858500(&uStack_838);
  plVar13 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 0;
  *(undefined4 *)((long)puVar14 + 0x24) = uVar10;
  *(undefined4 *)(puVar14 + 5) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[3] = &UNK_0f16ddd0;
  *(undefined4 *)(puVar14 + 9) = (undefined4)uStack_838;
  *(undefined4 *)((long)puVar14 + 0x4c) = uStack_838._4_4_;
  *(undefined4 *)(puVar14 + 10) = (undefined4)uStack_830;
  *(undefined4 *)((long)puVar14 + 0x54) = uStack_830._4_4_;
  puVar14[0xb] = pppuStack_828;
  uStack_838 = (ulong ***)0x0;
  uStack_830 = (ulong ****)0x0;
  pppuStack_828 = (ulong ***)0x0;
  uVar10 = func_0x0d858620(plVar13);
  plVar18 = plStack_3c8;
  *(undefined4 *)(puVar14 + 5) = uVar10;
  plStack_3d0 = plVar13;
  if (plStack_3c8 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_3c8 + 1;
    lVar23 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *plStack_3c8;
      plStack_3c8 = puVar14;
      (**(code **)(lVar23 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      goto joined_r0x08f62c77;
    }
  }
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  plStack_3c8 = puVar14;
joined_r0x08f62c77:
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_7e8,&ppppuStack_998);
    _DAT_0f54fd90 = (undefined4)uStack_7e8;
    uRam000000000f54fd94 = uStack_7e8._4_4_;
    uVar10 = (undefined4)uStack_7e0;
    uVar27 = uStack_7e0._4_4_;
    uStack_7e8 = (ulong **)0x0;
    uStack_7e0 = (ulong **)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar27;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar18 = plVar13 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)uStack_7e0;
    if (uStack_7e0 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_7e0 + 1);
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)((long)*uStack_7e0 + 0x10))(uStack_7e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f609530 == '\0') {
    iVar12 = func_0x04108328(&DAT_0f609530);
    if (iVar12 != 0) {
      func_0x08feee20();
      func_0x0410844d(&DAT_0f609530);
    }
  }
  if (DAT_0f609530 == '\0') {
    iVar12 = func_0x04108328(&DAT_0f609530);
    if (iVar12 != 0) {
      func_0x08feee20();
      func_0x0410844d(&DAT_0f609530);
    }
  }
  uStack_7e8 = (ulong **)&DAT_0f609518;
  uStack_7e0 = (ulong **)CONCAT44(uStack_7e0._4_4_,_DAT_0f60951c);
  ppuStack_7d8 = (ulong **)0x0;
  uStack_7d0 = (undefined *)CONCAT44(uStack_7d0._4_4_,0x80);
  uStack_7c8 = (undefined *)0xc;
  pcStack_7c0 = (code *)&UNK_08feec30;
  auStack_7b8._0_8_ = &UNK_08feeea0;
  auStack_7b8._8_8_ = 0;
  plStack_7a8 = (long *)&UNK_08fef590;
  plStack_7a0 = (long *)0x1;
  uStack_798._0_4_ = 0x48b5640;
  uStack_798._4_4_ = 0;
  uStack_790 = 0x8fef640;
  uStack_78c = 0;
  uStack_788 = 0;
  pcStack_780 = (code *)0x0;
  plStack_778 = (long *)0x0;
  alStack_770[0] = 0;
  FUN_048aee30(&ppppuStack_1a0,lVar23,&uStack_7e8,0x6ab7084b);
  lVar23 = alStack_770[0];
  alStack_770[0] = 0;
  if (lVar23 != 0) {
    func_0x048ae940(lVar23);
    thunk_FUN_0ee326a0(lVar23,0x78);
  }
  plVar13 = plStack_778;
  if (plStack_778 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_778 + 1;
    lVar23 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_778 + 0x10))(plStack_778);
      func_0x0412c2d0(plVar13);
    }
  }
  if (DAT_0f609618 == '\0') {
    iVar12 = func_0x04108328(&DAT_0f609618);
    if (iVar12 != 0) {
      func_0x08ff0430();
      func_0x0410844d(&DAT_0f609618);
    }
  }
  uStack_7e8._0_4_ = _DAT_0f609604;
  uStack_7e0 = (ulong **)0x1;
  ppuStack_7d8 = (ulong **)&UNK_08ff0230;
  uStack_7d0 = &UNK_08ff0240;
  func_0x065abe60(&ppppuStack_1a0);
  uStack_428 = uStack_190;
  uStack_424 = uStack_18c;
  uStack_420 = uStack_188;
  uStack_41c = uStack_184;
  ppppuStack_438 = ppppuStack_1a0;
  uStack_430 = uStack_198;
  uStack_7e8._0_4_ = 0xf55160ec;
  uStack_7e0 = (ulong **)0x0;
  ppuStack_7d8 = (ulong **)((ulong)ppuStack_7d8 & 0xffffffff00000000);
  uStack_7d0 = (undefined *)0x0;
  uStack_7c8 = &UNK_065b4120;
  pcStack_7c0 = (code *)&SUB_048b06d0;
  auStack_7b8._0_8_ = &UNK_08ff0750;
  auStack_7b8._8_8_ = 0;
  plStack_7a8 = (long *)((ulong)plStack_7a8 & 0xffffffff00000000);
  plStack_7a0 = (long *)0x0;
  uStack_798._0_4_ = 0;
  uStack_798._4_4_ = 0;
  func_0x049057f0(&ppppuStack_438,&uStack_7e8);
  func_0x048aea50(&uStack_7e8);
  uStack_988 = (ulong ****)CONCAT44(uStack_424,uStack_428);
  uStack_980 = uStack_420;
  uStack_97c = uStack_41c;
  ppppuStack_998 = ppppuStack_438;
  ppppuStack_990 = (ulong ****)uStack_430;
  uStack_7e8 = (ulong **)CONCAT44(uStack_7e8._4_4_,0xf55160ec);
  uStack_7e0 = (ulong **)0x0;
  ppuStack_7d8 = (ulong **)CONCAT44(ppuStack_7d8._4_4_,1);
  uStack_7d0 = (undefined *)0x0;
  uStack_7c8 = &UNK_065b4120;
  pcStack_7c0 = (code *)&SUB_048b06d0;
  auStack_7b8._0_8_ = &UNK_08ff0a00;
  auStack_7b8._8_8_ = 0;
  plStack_7a8 = (long *)((ulong)plStack_7a8 & 0xffffffff00000000);
  plStack_7a0 = (long *)0x0;
  uStack_798._0_4_ = 0;
  uStack_798._4_4_ = 0;
  func_0x049057f0(&ppppuStack_998,&uStack_7e8);
  func_0x048aea50(&uStack_7e8);
  ppuStack_7d8 = (ulong **)
                 CONCAT26(uStack_962,
                          CONCAT15(uStack_963,CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968))))
  ;
  uStack_7e8 = (ulong **)
               CONCAT17(uStack_971,
                        CONCAT16(uStack_972,CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978))));
  uStack_7e0 = (ulong **)
               CONCAT17(uStack_969,
                        CONCAT16(uStack_96a,
                                 CONCAT15(uStack_96b,
                                          CONCAT14(uStack_96c,
                                                   CONCAT13(uStack_96d,
                                                            CONCAT21(uStack_96f,uStack_970))))));
  uStack_978 = 0;
  uStack_974 = 0;
  uStack_973 = 0;
  uStack_972 = 0;
  uStack_971 = 0;
  uStack_970 = 0;
  uStack_96f = 0;
  uStack_96d = 0;
  uStack_96c = 0;
  uStack_96b = 0;
  uStack_96a = 0;
  uStack_969 = 0;
  uStack_968 = 0;
  uStack_967 = 0;
  uStack_965 = 0;
  uStack_963 = 0;
  uStack_962 = 0;
  uStack_7d0 = (undefined *)CONCAT44(uStack_95c,uStack_960);
  uStack_7c8 = (undefined *)CONCAT44(uStack_954,uStack_958);
  func_0x065281f0(&pcStack_7c0,auStack_950);
  ppuStack_698 = ppuStack_168;
  ppuStack_6a8 = uStack_178;
  ppuStack_6a0 = uStack_170;
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  uStack_690 = (undefined4)uStack_160;
  uStack_68c = uStack_160._4_4_;
  uStack_688 = (undefined4)uStack_158;
  uStack_684 = uStack_158._4_4_;
  func_0x065281f0(auStack_680,auStack_150);
  ppppuStack_998 = (ulong ****)0x0;
  ppppuStack_990 = (ulong ****)0x0;
  uStack_988 = (ulong ****)0x0;
  uStack_430 = uStack_430 & 0xffffffffffffff00;
  ppppuStack_438 = (ulong ****)&ppppuStack_998;
  pppuVar16 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (pppuVar16 == (ulong ***)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  pppuVar2 = pppuVar16 + 0x50;
  ppppuStack_998 = (ulong ****)pppuVar16;
  ppppuStack_990 = (ulong ****)pppuVar16;
  uStack_988 = (ulong ****)pppuVar2;
  if (((ulong)uStack_7e8 & 1) == 0) {
    pppuVar16[2] = ppuStack_7d8;
    *pppuVar16 = uStack_7e8;
    pppuVar16[1] = uStack_7e0;
  }
  else {
    FUN_0412e5e0(pppuVar16,ppuStack_7d8,uStack_7e0);
  }
  *(undefined4 *)(pppuVar16 + 3) = (undefined4)uStack_7d0;
  *(undefined4 *)((long)pppuVar16 + 0x1c) = uStack_7d0._4_4_;
  *(undefined4 *)(pppuVar16 + 4) = (undefined4)uStack_7c8;
  *(undefined4 *)((long)pppuVar16 + 0x24) = uStack_7c8._4_4_;
  func_0x06523ef0(pppuVar16 + 5,&pcStack_7c0);
  if (((ulong)ppuStack_6a8 & 1) == 0) {
    pppuVar16[0x2a] = ppuStack_698;
    pppuVar16[0x28] = ppuStack_6a8;
    pppuVar16[0x29] = ppuStack_6a0;
  }
  else {
    FUN_0412e5e0(pppuVar16 + 0x28,ppuStack_698,ppuStack_6a0);
  }
  *(undefined4 *)(pppuVar16 + 0x2b) = uStack_690;
  *(undefined4 *)((long)pppuVar16 + 0x15c) = uStack_68c;
  *(undefined4 *)(pppuVar16 + 0x2c) = uStack_688;
  *(undefined4 *)((long)pppuVar16 + 0x164) = uStack_684;
  func_0x06523ef0(pppuVar16 + 0x2d,auStack_680);
  ppppuStack_990 = (ulong ****)pppuVar2;
  if (pcStack_590 != (code *)0x0) {
    (*pcStack_590)(auStack_5a8);
  }
  if (pcStack_5d8 != (code *)0x0) {
    (*pcStack_5d8)(auStack_5f0);
  }
  if (pcStack_618 != (code *)0x0) {
    (*pcStack_618)(auStack_630);
  }
  if (pcStack_658 != (code *)0x0) {
    (*pcStack_658)(auStack_670);
  }
  if (((ulong)ppuStack_6a8 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_698,(ulong)ppuStack_6a8 & 0xfffffffffffffffe);
  }
  if (apcStack_6d0[0] != (code *)0x0) {
    (*apcStack_6d0[0])(auStack_6e8);
  }
  if (pcStack_718 != (code *)0x0) {
    (*pcStack_718)(auStack_730);
  }
  if (apcStack_758[0] != (code *)0x0) {
    (*apcStack_758[0])(alStack_770);
  }
  if ((code *)CONCAT44(uStack_798._4_4_,(undefined4)uStack_798) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_798._4_4_,(undefined4)uStack_798))(auStack_7b8 + 8);
  }
  if (((ulong)uStack_7e8 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_7d8,(ulong)uStack_7e8 & 0xfffffffffffffffe);
  }
  uVar11 = (**(code **)(*plStack_3d0 + 0x20))();
  uVar20 = ((long)ppppuStack_990 - (long)ppppuStack_998 >> 6) * -0x3333333333333333;
  uVar22 = 0;
  if ((uVar11 != 0) && ((uint)uVar20 != 0)) {
    uVar21 = 0;
    uVar22 = 0;
    uStack_454 = uVar11;
    do {
      auVar26 = (**(code **)(*plStack_3d0 + 0x28))(plStack_3d0,uVar21);
      ppuVar19 = auVar26._8_8_;
      lVar23 = auVar26._0_8_;
      auVar26 = func_0x06527d70();
      if (auVar26._8_8_ == ppuVar19) {
        if (auVar26._0_8_ == 0) {
          lVar17 = func_0x048aead0(auVar26._8_8_);
          iVar12 = *(int *)(lVar17 + 8);
          if (lVar23 == 0) goto LAB_08f633ce;
LAB_08f633b1:
          if (iVar12 != *(int *)(lVar23 + 8)) goto LAB_08f633e0;
        }
        else {
          iVar12 = *(int *)(auVar26._0_8_ + 8);
          if (lVar23 != 0) goto LAB_08f633b1;
LAB_08f633ce:
          lVar17 = func_0x048aead0(ppuVar19);
          if (iVar12 != *(int *)(lVar17 + 8)) goto LAB_08f633e0;
        }
      }
      else {
LAB_08f633e0:
        auVar26 = func_0x06527e30();
        if (auVar26._8_8_ == ppuVar19) {
          if (auVar26._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar17 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar17 = func_0x048aead0(ppuVar19);
            iVar3 = *(int *)(lVar17 + 8);
          }
          else {
            iVar3 = *(int *)(lVar23 + 8);
          }
          if (iVar12 == iVar3) goto LAB_08f635d3;
        }
        auVar26 = func_0x06527ef0();
        if (auVar26._8_8_ == ppuVar19) {
          if (auVar26._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar17 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar17 = func_0x048aead0(ppuVar19);
            iVar3 = *(int *)(lVar17 + 8);
          }
          else {
            iVar3 = *(int *)(lVar23 + 8);
          }
          if (iVar12 == iVar3) goto LAB_08f635d3;
        }
        auVar26 = func_0x06527fb0();
        if (auVar26._8_8_ == ppuVar19) {
          if (auVar26._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar17 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar17 = func_0x048aead0(ppuVar19);
            iVar3 = *(int *)(lVar17 + 8);
          }
          else {
            iVar3 = *(int *)(lVar23 + 8);
          }
          if (iVar12 == iVar3) goto LAB_08f635d3;
        }
        auVar26 = func_0x06528070();
        if (auVar26._8_8_ == ppuVar19) {
          if (auVar26._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar17 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar17 = func_0x048aead0(ppuVar19);
            iVar3 = *(int *)(lVar17 + 8);
          }
          else {
            iVar3 = *(int *)(lVar23 + 8);
          }
          if (iVar12 == iVar3) goto LAB_08f635d3;
        }
        auVar26 = func_0x06528130();
        if (auVar26._8_8_ == ppuVar19) {
          if (auVar26._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar17 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar17 = func_0x048aead0(ppuVar19);
            iVar3 = *(int *)(lVar17 + 8);
          }
          else {
            iVar3 = *(int *)(lVar23 + 8);
          }
          if (iVar12 == iVar3) goto LAB_08f635d3;
        }
        ppppuVar5 = ppppuStack_998;
        ppppuVar6 = ppppuStack_990;
        if (ppppuStack_998[uVar22 * 0x28 + 4] != (ulong ***)ppuVar19) goto joined_r0x08f637ed;
        if (ppppuStack_998[uVar22 * 0x28 + 3] == (ulong ***)0x0) {
          lVar17 = func_0x048aead0();
          iVar12 = *(int *)(lVar17 + 8);
          if (lVar23 == 0) goto LAB_08f635bc;
LAB_08f635a4:
          if (iVar12 != *(int *)(lVar23 + 8)) goto LAB_08f637dd;
        }
        else {
          iVar12 = *(int *)(ppppuStack_998[uVar22 * 0x28 + 3] + 1);
          if (lVar23 != 0) goto LAB_08f635a4;
LAB_08f635bc:
          lVar23 = func_0x048aead0(ppuVar19);
          if (iVar12 != *(int *)(lVar23 + 8)) goto LAB_08f637dd;
        }
        uVar22 = (ulong)((int)uVar22 + 1);
      }
LAB_08f635d3:
    } while (((uint)uVar22 < (uint)uVar20) && (uVar21 = uVar21 + 1, uVar21 < uStack_454));
    uVar20 = ((long)ppppuStack_990 - (long)ppppuStack_998 >> 6) * -0x3333333333333333;
  }
  pppuVar16 = pppuStack_3e8;
  if (uVar20 == uVar22) {
    pppuVar2 = pppuStack_3e0;
    if (pppuStack_3e8 != (ulong ***)0x0) {
      while (pppuVar16 != pppuVar2) {
        func_0x05fe8450(pppuVar2 + -0x28);
        pppuVar2 = pppuVar2 + -0x28;
      }
      pppuStack_3e0 = pppuVar16;
      thunk_FUN_0ee326a0(pppuStack_3e8,(long)pppuStack_3d8 - (long)pppuStack_3e8);
    }
    pppuStack_3d8 = (ulong ***)uStack_988;
    if (puStack_4d0 < puStack_4c8) {
      *puStack_4d0 = 0;
      puStack_4d0[1] = 0;
      puStack_4d0[2] = 0;
      *puStack_4d0 = uStack_418;
      puStack_4d0[1] = uStack_410;
      puStack_4d0[2] = uStack_408;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      puStack_4d0[5] = uStack_3f0;
      puStack_4d0[3] = uStack_400;
      puStack_4d0[4] = uStack_3f8;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      puStack_4d0[6] = 0;
      puStack_4d0[7] = 0;
      puStack_4d0[8] = 0;
      puStack_4d0[6] = ppppuStack_998;
      puStack_4d0[7] = ppppuStack_990;
      puStack_4d0[8] = uStack_988;
      pppuStack_3e8 = (ulong ***)0x0;
      pppuStack_3e0 = (ulong ***)0x0;
      pppuStack_3d8 = (ulong ***)0x0;
      puStack_4d0[9] = plStack_3d0;
      puStack_4d0[10] = plStack_3c8;
      plStack_3d0 = (long *)0x0;
      plStack_3c8 = (undefined8 *)0x0;
      puStack_4d0[0xb] = 0;
      puStack_4d0[0xc] = 0;
      puStack_4d0[0xd] = 0;
      puStack_4d0[0xb] = uStack_3c0;
      puStack_4d0[0xc] = uStack_3b8;
      puStack_4d0[0xd] = uStack_3b0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      puStack_4d0 = puStack_4d0 + 0xe;
    }
    else {
      pppuStack_3e8 = (ulong ***)ppppuStack_998;
      pppuStack_3e0 = (ulong ***)ppppuStack_990;
      puStack_4d0 = (undefined8 *)func_0x0652ac80(&lStack_4d8,&uStack_418);
    }
    puVar14 = puStack_4d0 + -0xe;
    lVar23 = (long)uStack_838;
    plVar13 = plStack_460;
  }
  else {
LAB_08f637dd:
    ppppuVar5 = ppppuStack_998;
    ppppuVar6 = ppppuStack_990;
    if (ppppuStack_998 != (ulong ****)0x0) {
joined_r0x08f637ed:
      while (ppppuVar8 = ppppuStack_998, ppppuStack_998 != ppppuVar6) {
        ppppuStack_998 = ppppuVar5;
        func_0x05fe8450(ppppuVar6 + -0x28);
        ppppuVar5 = ppppuStack_998;
        ppppuVar6 = ppppuVar6 + -0x28;
        ppppuStack_998 = ppppuVar8;
      }
      ppppuStack_990 = ppppuStack_998;
      ppppuStack_998 = ppppuVar5;
      thunk_FUN_0ee326a0(ppppuVar5,(long)uStack_988 - (long)ppppuVar5);
    }
    puVar14 = (undefined8 *)0xf604b70;
    lVar23 = (long)uStack_838;
    plVar13 = plStack_460;
  }
  uStack_838 = (ulong ***)lVar23;
  plStack_460 = plVar13;
  if (lVar23 != 0) {
    if ((ulong ****)lVar23 != uStack_830) {
      lVar17 = (long)uStack_830 + -0x40;
      do {
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        if (*(code **)(lVar17 + -0x30) != (code *)0x0) {
          (**(code **)(lVar17 + -0x30))(lVar17 + -0x48);
        }
        if (*(code **)(lVar17 + -0x70) != (code *)0x0) {
          (**(code **)(lVar17 + -0x70))(lVar17 + -0x88);
        }
        if (*(code **)(lVar17 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar17 + -0xb0))(lVar17 + -200);
        }
        lVar24 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar24 != lVar23);
    }
    uStack_830 = (ulong ****)lVar23;
    thunk_FUN_0ee326a0(uStack_838,(long)pppuStack_828 - (long)uStack_838);
  }
  func_0x05f93280(&uStack_418);
  uStack_380 = _DAT_0f6422e0;
  uStack_37c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_368 = _DAT_0f6422f8;
    uStack_378 = _DAT_0f6422e8;
    uStack_374 = uRam000000000f6422ec;
    uStack_370 = _DAT_0f6422f0;
    uStack_36c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_378,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(puVar14,&uStack_380,0);
  if ((uStack_378 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_368,CONCAT44(uStack_374,uStack_378) & 0xfffffffffffffffe);
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
    (*pcStack_128)(&uStack_140);
  }
  if (((ulong)uStack_178 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_818 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_808,CONCAT44(uStack_814,auStack_818) & 0xfffffffffffffffe);
  }
  if (pcStack_860 != (code *)0x0) {
    (*pcStack_860)(auStack_878);
  }
  if (pcStack_8a8 != (code *)0x0) {
    (*pcStack_8a8)(auStack_8c0);
  }
  if (pcStack_8e8 != (code *)0x0) {
    (*pcStack_8e8)(auStack_900);
  }
  if (pcStack_928 != (code *)0x0) {
    (*pcStack_928)(auStack_940);
  }
  if ((uStack_978 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_962,
                                CONCAT15(uStack_963,
                                         CONCAT23(uStack_965,CONCAT21(uStack_967,uStack_968)))),
                       CONCAT17(uStack_971,
                                CONCAT16(uStack_972,
                                         CONCAT15(uStack_973,CONCAT14(uStack_974,uStack_978)))) &
                       0xfffffffffffffffe);
  }
  if ((bStack_450 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_440,CONCAT71(uStack_44f,bStack_450) & 0xfffffffffffffffe);
  }
  uStack_3a0 = _DAT_0f6422e0;
  uStack_39c = _DAT_0f6422e4;
  if ((_DAT_0f6422e8 & 1) == 0) {
    uStack_388 = _DAT_0f6422f8;
    uStack_398 = _DAT_0f6422e8;
    uStack_394 = uRam000000000f6422ec;
    uStack_390 = _DAT_0f6422f0;
    uStack_38c = uRam000000000f6422f4;
  }
  else {
    FUN_0412e5e0(&uStack_398,_DAT_0f6422f8,CONCAT44(uRam000000000f6422f4,_DAT_0f6422f0));
  }
  func_0x0730fa70(&lStack_568,&uStack_3a0,0);
  if ((uStack_398 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_388,CONCAT44(uStack_394,uStack_398) & 0xfffffffffffffffe);
  }
  auStack_520 = func_0x08fe5d30();
  lVar17 = lStack_550;
  lVar23 = lStack_548;
  if (lStack_550 != 0) {
    for (; lVar17 != lVar23; lVar23 = lVar23 + -0x30) {
      if ((*(byte *)(lVar23 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar23 + -0x10),
                           *(ulong *)(lVar23 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_548 = lVar17;
    thunk_FUN_0ee326a0(lStack_550,lStack_540 - lStack_550);
  }
  lVar24 = lStack_558;
  lVar17 = lStack_560;
  lVar23 = lStack_568;
  lStack_568 = 0;
  lStack_560 = 0;
  lStack_558 = 0;
  *plVar13 = lVar23;
  plVar13[1] = lVar17;
  plVar13[2] = lVar24;
  lStack_550 = 0;
  lStack_548 = 0;
  lStack_540 = 0;
  plVar13[5] = (long)puStack_528;
  plVar13[3] = uStack_538;
  plVar13[4] = uStack_530;
  uStack_538 = 0;
  uStack_530 = 0;
  puStack_528 = (undefined8 *)0x0;
  *(undefined4 *)(plVar13 + 8) = auStack_510._0_4_;
  *(undefined4 *)((long)plVar13 + 0x44) = auStack_510._4_4_;
  *(undefined4 *)(plVar13 + 9) = auStack_510._8_4_;
  *(undefined4 *)((long)plVar13 + 0x4c) = auStack_510._12_4_;
  *(undefined1 (*) [16])(plVar13 + 6) = auStack_520;
  plVar13[10] = lStack_500;
  plVar13[0xb] = lStack_4f8;
  plVar13[0xc] = lStack_4f0;
  lStack_500 = 0;
  lStack_4f8 = 0;
  lStack_4f0 = 0;
  plVar13[0xd] = lStack_4e8;
  plVar13[0xe] = lStack_4e0;
  lStack_4e8 = 0;
  lStack_4e0 = 0;
  plVar13[0xf] = lStack_4d8;
  plVar13[0x10] = (long)puStack_4d0;
  plVar13[0x11] = (long)puStack_4c8;
  lStack_4d8 = 0;
  puStack_4d0 = (undefined8 *)0x0;
  puStack_4c8 = (undefined8 *)0x0;
  plVar13[0x12] = lStack_4c0;
  plVar13[0x13] = uStack_4b8;
  plVar13[0x14] = uStack_4b0;
  lStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  plVar13[0x15] = lStack_4a8;
  plVar13[0x16] = lStack_4a0;
  plVar13[0x17] = lStack_498;
  lStack_4a8 = 0;
  lStack_4a0 = 0;
  lStack_498 = 0;
  plVar13[0x18] = lStack_490;
  plVar13[0x19] = lStack_488;
  plVar13[0x1a] = lStack_480;
  lStack_490 = 0;
  lStack_488 = 0;
  lStack_480 = 0;
  *(undefined4 *)(plVar13 + 0x1b) = (undefined4)uStack_478;
  *(undefined4 *)((long)plVar13 + 0xdc) = uStack_478._4_4_;
  *(undefined4 *)(plVar13 + 0x1c) = (undefined4)uStack_470;
  *(undefined4 *)((long)plVar13 + 0xe4) = uStack_470._4_4_;
  plVar13[0x1d] = lStack_468;
  uStack_478 = 0;
  uStack_470 = 0;
  lStack_468 = 0;
  func_0x0651ffe0(&lStack_550);
  lVar17 = lStack_568;
  lVar23 = lStack_560;
  if (lStack_568 != 0) {
    for (; lVar17 != lVar23; lVar23 = lVar23 + -0x30) {
      if ((*(byte *)(lVar23 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar23 + -0x10),
                           *(ulong *)(lVar23 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_560 = lVar17;
    thunk_FUN_0ee326a0(lStack_568,lStack_558 - lStack_568);
  }
  if (((ulong)auStack_800 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_7f0,(ulong)auStack_800 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11c0685  EntityProjectileComponent
 * 0x11c068e  jectileComponent
 * 0x125fad3  destroyOnProjectileHurt
 * 0x127a4fa  critParticlesOnProjectileHurt
 * 0x127a507  OnProjectileHurt
 * 0x12df6ee  shouldBounceOnHit
 * 0x149d2fa  lightningStrikeOnHit
 */
