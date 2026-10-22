/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8dae3b0 (ELF vaddr 0x8cae3b0)
 * Label: caller-of-callee
 * Body:  [[08dae3b0, 08db0092] [08db00a0, 08db0650] [08db0660, 08db0aa4] [08db0ab0, 08db0ef4] [08db0f00, 08db1344] [08db1350, 08db1794] [08db17a0, 08db1988] [08db1990, 08db1baa] [08db1bb0, 08db1ff3]]
 * Ghidra: FUN_08dae3b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08dae3b0(long *param_1)

{
  ulong ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  ulong ****ppppuVar4;
  ulong ****ppppuVar5;
  ulong ****ppppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  ulong **ppuVar13;
  undefined8 *puVar14;
  ulong ***pppuVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong **ppuVar21;
  ulong **ppuVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined *puVar29;
  ulong ****ppppuStack_878;
  ulong ****ppppuStack_870;
  undefined8 uStack_868;
  uint uStack_860;
  undefined4 uStack_85c;
  undefined8 uStack_858;
  undefined8 uStack_850;
  ulong ***pppuStack_848;
  undefined1 auStack_838 [4];
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  ulong **ppuStack_828;
  undefined1 auStack_820 [8];
  ulong uStack_818;
  undefined8 *puStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  ulong **ppuStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  code *pcStack_7e0;
  undefined *puStack_7d8;
  long lStack_7d0;
  undefined *puStack_7c8;
  long *plStack_7c0;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  code *pcStack_7a0;
  long *plStack_798;
  long alStack_790 [3];
  code *apcStack_778 [3];
  code *pcStack_760;
  undefined1 auStack_750 [24];
  code *pcStack_738;
  undefined1 auStack_730 [24];
  code *pcStack_718;
  undefined1 auStack_708 [24];
  code *apcStack_6f0 [2];
  undefined1 auStack_6e0 [24];
  ulong **ppuStack_6c8;
  ulong **ppuStack_6c0;
  ulong **ppuStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined1 auStack_6a0 [16];
  undefined1 auStack_690 [8];
  code *pcStack_688;
  code *pcStack_678;
  undefined1 auStack_660 [16];
  undefined1 auStack_650 [8];
  code *pcStack_648;
  code *pcStack_638;
  undefined1 auStack_618 [8];
  undefined1 auStack_610 [16];
  code *pcStack_600;
  code *pcStack_5f8;
  undefined1 auStack_5c8 [24];
  code *pcStack_5b0;
  uint uStack_584;
  byte bStack_580;
  undefined7 uStack_57f;
  undefined1 uStack_578;
  undefined4 uStack_577;
  undefined1 uStack_573;
  undefined8 uStack_570;
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
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  ulong ****ppppuStack_458;
  ulong uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong ***pppuStack_408;
  ulong ***pppuStack_400;
  ulong ***pppuStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3c4;
  uint uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined2 uStack_3a4;
  uint uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined2 uStack_384;
  uint uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined2 uStack_364;
  uint uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined2 uStack_344;
  uint uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined2 uStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined2 uStack_304;
  uint uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  ulong ****ppppuStack_2e8;
  ulong uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulong **ppuStack_2c8;
  ulong **ppuStack_2c0;
  ulong **ppuStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined *puStack_280;
  code *pcStack_278;
  undefined4 uStack_270;
  undefined1 uStack_26c;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [24];
  code *pcStack_238;
  undefined1 auStack_210 [24];
  code *pcStack_1f8;
  undefined1 auStack_1c8 [24];
  code *pcStack_1b0;
  long *plStack_188;
  ulong ***pppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong **ppuStack_168;
  undefined *puStack_160;
  long *plStack_158;
  undefined1 auStack_150 [16];
  ulong **appuStack_140 [2];
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
  
  plStack_188 = param_1;
  puStack_810 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_810 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01279dde;
  auStack_820 = (undefined1  [8])0x21;
  uStack_818 = 0x1a;
  *(ulong *)((long)puStack_810 + 10) = CONCAT26(_UNK_01279ddc,_DAT_01279dd6);
  *(undefined8 *)((long)puStack_810 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_01279dd6,_UNK_01279dd4);
  *puStack_810 = _DAT_01279dcc;
  puStack_810[1] = uVar3;
  *(undefined1 *)((long)puStack_810 + 0x1a) = 0;
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
  lStack_4b0 = 0;
  lStack_4a8 = 0;
  lStack_4c0 = 0;
  lStack_4b8 = 0;
  puStack_4d0 = (undefined8 *)0x0;
  puStack_4c8 = (undefined8 *)0x0;
  lStack_4e0 = 0;
  lStack_4d8 = 0;
  lStack_4f0 = 0;
  lStack_4e8 = 0;
  lStack_500 = 0;
  lStack_4f8 = 0;
  if ((uStack_538 & 1) == 0) {
    if (((ulong)auStack_820 & 1) == 0) {
      puStack_528 = puStack_810;
      uStack_538 = (ulong)auStack_820;
      uStack_530 = uStack_818;
    }
    else {
      func_0x04885070(&uStack_538,puStack_810,uStack_818);
    }
  }
  else {
    uVar19 = (ulong)auStack_820 >> 1 & 0x7f;
    puVar14 = (undefined8 *)(auStack_820 + 1);
    if (((ulong)auStack_820 & 1) != 0) {
      uVar19 = uStack_818;
      puVar14 = puStack_810;
    }
    FUN_04885120(&uStack_538,puVar14,uVar19);
  }
  lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar17 == 0) {
    func_0x048b0de0(&uStack_808,&uStack_178);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar10 = (undefined4)uStack_800;
    uVar28 = uStack_800._4_4_;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar28;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)uStack_800;
    if (uStack_800 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_800 + 1);
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)((long)*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar20);
      }
    }
    lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5fa248 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5fa248), iVar12 != 0)) {
    func_0x08e3a770();
    func_0x0410844d(&DAT_0f5fa248);
  }
  if ((DAT_0f5fa248 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5fa248), iVar12 != 0)) {
    func_0x08e3a770();
    func_0x0410844d(&DAT_0f5fa248);
  }
  uStack_808 = (ulong **)&DAT_0f5fa230;
  uStack_800 = (ulong **)CONCAT44(uStack_800._4_4_,_DAT_0f5fa234);
  ppuStack_7f8 = (ulong **)0x0;
  uStack_7f0 = (undefined *)CONCAT44(uStack_7f0._4_4_,0x80);
  uStack_7e8 = (long *)0x58;
  pcStack_7e0 = (code *)&UNK_08e3a810;
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  puStack_7c8 = &UNK_08e3a9d0;
  plStack_7c0 = (long *)0x0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  uStack_7a8 = 0;
  pcStack_7a0 = (code *)0x0;
  plStack_798 = (long *)0x0;
  alStack_790[0] = 0;
  func_0x048aee30(&uStack_178,lVar17,&uStack_808,0x9cba50be);
  lVar17 = alStack_790[0];
  alStack_790[0] = 0;
  if (lVar17 != 0) {
    func_0x048ae940(lVar17);
    func_0x0412a280(lVar17,0x78);
  }
  plVar20 = plStack_798;
  if (plStack_798 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_798 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_798 + 0x10))(plStack_798);
      func_0x0412c2d0(plVar20);
    }
  }
  if ((DAT_0f5f4888 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5f4888), iVar12 != 0)) {
    func_0x08d17420(0xf5f4870);
    func_0x0410844d(&DAT_0f5f4888);
  }
  uStack_808._0_4_ = _DAT_0f5f4874;
  uStack_800 = (ulong **)&SUB_08d17240;
  plVar20 = (long *)uStack_800;
  ppuStack_7f8 = (ulong **)&UNK_08e3d030;
  puVar29 = &UNK_08e3d030;
  uStack_800._0_4_ = 0x8d17240;
  uVar10 = _DAT_0f5f4874;
  uVar28 = (undefined4)uStack_800;
  uStack_800 = (ulong **)plVar20;
  func_0x05da1460(&uStack_178);
  lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar17 == 0) {
    func_0x048b0de0(&uStack_808,&uStack_178);
    uRam000000000f54fd94 = uStack_808._4_4_;
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uVar7 = (undefined4)uStack_800;
    uVar8 = uStack_800._4_4_;
    uStack_808._0_4_ = 0;
    uStack_808._4_4_ = 0;
    uStack_800 = (ulong **)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar7;
    uRam000000000f54fd9c = uVar8;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)uStack_800;
    if (uStack_800 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_800 + 1);
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)((long)*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar20);
      }
    }
    lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5fa470 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5fa470), iVar12 != 0)) {
    func_0x08e3bec0();
    func_0x0410844d(&DAT_0f5fa470);
  }
  if ((DAT_0f5fa470 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5fa470), iVar12 != 0)) {
    func_0x08e3bec0();
    func_0x0410844d(&DAT_0f5fa470);
  }
  uStack_808 = (ulong **)&DAT_0f5fa458;
  uStack_800 = (ulong **)CONCAT44(uStack_800._4_4_,_DAT_0f5fa45c);
  ppuStack_7f8 = (ulong **)0x0;
  uStack_7f0 = (undefined *)CONCAT44(uStack_7f0._4_4_,0x280);
  uStack_7e8 = (long *)0x20;
  pcStack_7e0 = (code *)&UNK_08e3bf40;
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  puStack_7c8 = &UNK_08e3c120;
  plStack_7c0 = (long *)0x1;
  uStack_7b8 = 0x65b1ed0;
  uStack_7b4 = 0;
  uStack_7b0 = 0x8e3c1b0;
  uStack_7ac = 0;
  uStack_7a8 = 0;
  pcStack_7a0 = (code *)0x0;
  plStack_798 = (long *)0x0;
  alStack_790[0] = 0;
  func_0x048aee30(&uStack_178,lVar17,&uStack_808,0x162726bb,in_R8,in_R9,uVar10,uVar28,puVar29);
  lVar17 = alStack_790[0];
  alStack_790[0] = 0;
  if (lVar17 != 0) {
    func_0x048ae940(lVar17);
    func_0x0412a280(lVar17,0x78);
  }
  plVar20 = plStack_798;
  if (plStack_798 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_798 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_798 + 0x10))(plStack_798);
      func_0x0412c2d0(plVar20);
    }
  }
  if ((DAT_0f5f1218 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5f1218), iVar12 != 0)) {
    func_0x08d16ed0(0xf5f1200);
    func_0x0410844d(&DAT_0f5f1218);
  }
  func_0x065ac270(&uStack_178,_DAT_0f5f1204,&UNK_08e3d040);
  lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar17 == 0) {
    func_0x048b0de0(&uStack_808,&uStack_178);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar10 = (undefined4)uStack_800;
    uVar28 = uStack_800._4_4_;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar28;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)uStack_800;
    if (uStack_800 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_800 + 1);
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)((long)*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar20);
      }
    }
    lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5fa3b8 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5fa3b8), iVar12 != 0)) {
    func_0x08e3b460();
    func_0x0410844d(&DAT_0f5fa3b8);
  }
  if ((DAT_0f5fa3b8 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5fa3b8), iVar12 != 0)) {
    func_0x08e3b460();
    func_0x0410844d(&DAT_0f5fa3b8);
  }
  uStack_808 = (ulong **)&DAT_0f5fa3a0;
  uStack_800 = (ulong **)CONCAT44(uStack_800._4_4_,_DAT_0f5fa3a4);
  ppuStack_7f8 = (ulong **)0x0;
  uStack_7f0 = (undefined *)CONCAT44(uStack_7f0._4_4_,0x280);
  uStack_7e8 = (long *)0x20;
  pcStack_7e0 = (code *)&UNK_08e3b4e0;
  puStack_7d8 = &UNK_08e3b6d0;
  lStack_7d0 = 0;
  puStack_7c8 = &UNK_08e3b770;
  plStack_7c0 = (long *)0x1;
  uStack_7b8 = 0x65bd0c0;
  uStack_7b4 = 0;
  uStack_7b0 = 0x8e3b800;
  uStack_7ac = 0;
  uStack_7a8 = 0;
  pcStack_7a0 = (code *)0x0;
  plStack_798 = (long *)0x0;
  alStack_790[0] = 0;
  func_0x048aee30(&uStack_178,lVar17,&uStack_808,0xa091b1e4);
  lVar17 = alStack_790[0];
  alStack_790[0] = 0;
  if (lVar17 != 0) {
    func_0x048ae940(lVar17);
    func_0x0412a280(lVar17,0x78);
  }
  plVar20 = plStack_798;
  if (plStack_798 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_798 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_798 + 0x10))(plStack_798);
      func_0x0412c2d0(plVar20);
    }
  }
  if ((DAT_0f5f6ee0 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5f6ee0), iVar12 != 0)) {
    func_0x08dbeb20();
    func_0x0410844d(&DAT_0f5f6ee0);
  }
  func_0x065ac270(&uStack_178,_DAT_0f5f6ecc,&UNK_08e3d130);
  lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar17 == 0) {
    func_0x048b0de0(&uStack_808,&uStack_178);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar10 = (undefined4)uStack_800;
    uVar28 = uStack_800._4_4_;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar28;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)uStack_800;
    if (uStack_800 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_800 + 1);
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)((long)*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar20);
      }
    }
    lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5fa300 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5fa300), iVar12 != 0)) {
    func_0x08e3aca0();
    func_0x0410844d(&DAT_0f5fa300);
  }
  if ((DAT_0f5fa300 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5fa300), iVar12 != 0)) {
    func_0x08e3aca0();
    func_0x0410844d(&DAT_0f5fa300);
  }
  uStack_808 = (ulong **)&DAT_0f5fa2e8;
  uStack_800 = (ulong **)CONCAT44(uStack_800._4_4_,_DAT_0f5fa2ec);
  ppuStack_7f8 = (ulong **)0x0;
  uStack_7f0 = (undefined *)CONCAT44(uStack_7f0._4_4_,0x280);
  uStack_7e8 = (long *)0x10;
  pcStack_7e0 = (code *)&UNK_08e3ad20;
  puStack_7d8 = &UNK_08e3af10;
  lStack_7d0 = 0;
  puStack_7c8 = &UNK_08e3af60;
  plStack_7c0 = (long *)0x1;
  uStack_7b8 = 0x65bc1f0;
  uStack_7b4 = 0;
  uStack_7b0 = 0x8e3b010;
  uStack_7ac = 0;
  uStack_7a8 = 0;
  pcStack_7a0 = (code *)0x0;
  plStack_798 = (long *)0x0;
  alStack_790[0] = 0;
  func_0x048aee30(&uStack_178,lVar17,&uStack_808,0x916566a4);
  lVar17 = alStack_790[0];
  alStack_790[0] = 0;
  if (lVar17 != 0) {
    func_0x048ae940(lVar17);
    func_0x0412a280(lVar17,0x78);
  }
  plVar20 = plStack_798;
  if (plStack_798 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_798 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_798 + 0x10))(plStack_798);
      func_0x0412c2d0(plVar20);
    }
  }
  if ((DAT_0f5f6f98 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5f6f98), iVar12 != 0)) {
    func_0x08dbf9c0();
    func_0x0410844d(&DAT_0f5f6f98);
  }
  func_0x065ac270(&uStack_178,_DAT_0f5f6f84,&UNK_08e3d200);
  auStack_510 = func_0x08dc07a0();
  auStack_838 = (undefined1  [4])0x6365721c;
  uStack_834 = 0x4964726f;
  uStack_830 = 0x546d6574;
  uStack_82c = 0x657079;
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  func_0x048b1dc0(&puStack_160);
  func_0x0652b590(auStack_150);
  if (((ulong)uStack_178 & 1) == 0) {
    if (((uint)auStack_838 & 1) == 0) {
      ppuStack_168 = ppuStack_828;
      uStack_178 = (ulong **)CONCAT44(uStack_834,auStack_838);
      uStack_170 = (ulong **)CONCAT44(uStack_82c,uStack_830);
    }
    else {
      func_0x04885070(&uStack_178,ppuStack_828,CONCAT44(uStack_82c,uStack_830));
    }
  }
  else {
    bVar26 = ((uint)auStack_838 & 1) != 0;
    ppuVar13 = (ulong **)(auStack_838 + 1);
    if (bVar26) {
      ppuVar13 = ppuStack_828;
    }
    uVar19 = (ulong)(auStack_838[0] >> 1);
    if (bVar26) {
      uVar19 = CONCAT44(uStack_82c,uStack_830);
    }
    FUN_04885120(&uStack_178,ppuVar13,uVar19);
  }
  plVar20 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar20 == (long *)0x0) {
    func_0x048b0de0(&uStack_808,&ppuStack_2c8);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar10 = (undefined4)uStack_800;
    uVar28 = uStack_800._4_4_;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar28;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)uStack_800;
    if (uStack_800 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_800 + 1);
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)((long)*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f5fa590 == '\0') {
    iVar12 = FUN_04108328(&DAT_0f5fa590);
    if (iVar12 != 0) {
      func_0x08e3d360();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5fa510,0xf53dab8);
      func_0x0410844d(&DAT_0f5fa590);
    }
  }
  plVar18 = (long *)(*plVar20 +
                    (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                           *(uint *)(_DAT_0f5fa510 + 4)) * 8);
  do {
    lVar17 = *plVar18;
    if (lVar17 == -1) goto LAB_08daef90;
    plVar18 = (long *)(plVar20[3] + lVar17 * 0x18);
  } while (*(uint *)(plVar20[3] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5fa510 + 4));
  if (plVar18 == (long *)plVar20[4]) {
LAB_08daef90:
    puStack_160 = &DAT_0f5fa510;
  }
  else {
    puStack_160 = (undefined *)plVar18[2];
  }
  uStack_808 = (ulong **)((ulong)uStack_808 & 0xffffffffffffff00);
  pcStack_7e0 = (code *)((ulong)pcStack_7e0 & 0xffffffffffffff00);
  plStack_158 = plVar20;
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(appuStack_140);
  }
  puStack_130 = &UNK_08e3d750;
  uStack_120 = 0x69b81111;
  pcStack_128 = (code *)&UNK_08e3dae0;
  uStack_11c = 1;
  ppuVar13 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppuVar13 == (ulong **)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *(undefined1 *)ppuVar13 = 0;
  *(undefined1 *)(ppuVar13 + 5) = 0;
  bVar9 = (byte)pcStack_7e0;
  if ((byte)pcStack_7e0 == 1) {
    *(undefined4 *)(ppuVar13 + 4) = 0xffffffff;
    uVar10 = (undefined4)uStack_7e8;
    if (((ulong)uStack_7e8 & 0xffffffff) != 0xffffffff) {
      ppuStack_2c8 = ppuVar13;
      (**(code **)(&UNK_0f15e950 + ((ulong)uStack_7e8 & 0xffffffff) * 8))(&ppuStack_2c8,&uStack_808)
      ;
      *(undefined4 *)(ppuVar13 + 4) = uVar10;
      bVar9 = (byte)pcStack_7e0;
    }
    *(undefined1 *)(ppuVar13 + 5) = 1;
  }
  puVar29 = puStack_108;
  puStack_108 = &UNK_08e3d5a0;
  if (puVar29 != &UNK_08e3d5a0) {
    uStack_110 = 0;
  }
  appuStack_140[0] = ppuVar13;
  if (((bVar9 & 1) != 0) && (((ulong)uStack_7e8 & 0xffffffff) != 0xffffffff)) {
    (**(code **)(&UNK_0f15e930 + ((ulong)uStack_7e8 & 0xffffffff) * 8))(&ppuStack_2c8,&uStack_808);
  }
  bStack_580 = 0x18;
  uStack_57f = 0x6c507472617473;
  uStack_578 = 0x61;
  uStack_577 = 0x676e6979;
  uStack_573 = 0;
  func_0x064fd070(&ppuStack_2c8,&bStack_580);
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(auStack_290);
  }
  puVar29 = puStack_258;
  puStack_280 = &UNK_04906b20;
  uStack_270 = 0xc894953d;
  pcStack_278 = (code *)0x0;
  uStack_26c = 2;
  auStack_290[0] = 1;
  puStack_258 = &UNK_04906b00;
  if (puVar29 != &UNK_04906b00) {
    uStack_260 = 0;
  }
  uStack_428 = 0;
  uStack_410 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  plStack_3e8 = (long *)0x0;
  uStack_3e0 = 0;
  pppuStack_3f8 = (ulong ***)0x0;
  plStack_3f0 = (long *)0x0;
  pppuStack_408 = (ulong ***)0x0;
  pppuStack_400 = (ulong ***)0x0;
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_420 = 0x6f63655274657312;
  uStack_418 = 0x6472;
  func_0x06523ef0(&uStack_808,auStack_150);
  func_0x06523ef0(apcStack_6f0,auStack_2a0);
  uStack_858 = (ulong ***)0x0;
  uStack_850 = (ulong ****)0x0;
  pppuStack_848 = (ulong ***)0x0;
  uStack_450 = uStack_450 & 0xffffffffffffff00;
  ppppuStack_458 = (ulong ****)&uStack_858;
  ppppuStack_2e8 = (ulong ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (ppppuStack_2e8 == (ulong ****)0x0) {
    func_0x0eec74c0(0x230,0);
  }
  pppuStack_848 = (ulong ***)(ppppuStack_2e8 + 0x46);
  ppppuStack_870 = &pppuStack_180;
  uStack_868 = (ulong ****)&ppppuStack_2e8;
  uStack_860 = uStack_860 & 0xffffff00;
  ppppuStack_878 = (ulong ****)&uStack_858;
  uStack_858 = (ulong ***)ppppuStack_2e8;
  uStack_850 = ppppuStack_2e8;
  pppuStack_180 = (ulong ***)ppppuStack_2e8;
  func_0x06523ef0(ppppuStack_2e8,&uStack_808);
  ppppuStack_2e8 = ppppuStack_2e8 + 0x23;
  func_0x06523ef0(ppppuStack_2e8,apcStack_6f0);
  uStack_850 = ppppuStack_2e8 + 0x23;
  if (pcStack_600 != (code *)0x0) {
    (*pcStack_600)(auStack_618);
  }
  if (pcStack_648 != (code *)0x0) {
    (*pcStack_648)(auStack_660);
  }
  if (pcStack_688 != (code *)0x0) {
    (*pcStack_688)(auStack_6a0);
  }
  if (ppuStack_6c8 != (ulong **)0x0) {
    (*(code *)ppuStack_6c8)(auStack_6e0);
  }
  if (pcStack_718 != (code *)0x0) {
    (*pcStack_718)(auStack_730);
  }
  if (pcStack_760 != (code *)0x0) {
    (*pcStack_760)(apcStack_778);
  }
  if (pcStack_7a0 != (code *)0x0) {
    (*pcStack_7a0)(&uStack_7b8);
  }
  if (pcStack_7e0 != (code *)0x0) {
    (*pcStack_7e0)(&ppuStack_7f8);
  }
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f15e9b0;
  uVar10 = func_0x0d858500(&uStack_858);
  plVar20 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 0;
  *(undefined4 *)((long)puVar14 + 0x24) = uVar10;
  *(undefined4 *)(puVar14 + 5) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[3] = &UNK_0f15ea00;
  *(undefined4 *)(puVar14 + 9) = (undefined4)uStack_858;
  *(undefined4 *)((long)puVar14 + 0x4c) = uStack_858._4_4_;
  *(undefined4 *)(puVar14 + 10) = (undefined4)uStack_850;
  *(undefined4 *)((long)puVar14 + 0x54) = uStack_850._4_4_;
  puVar14[0xb] = pppuStack_848;
  uStack_858 = (ulong ***)0x0;
  uStack_850 = (ulong ****)0x0;
  pppuStack_848 = (ulong ***)0x0;
  uVar10 = func_0x0d858620(plVar20);
  plVar18 = plStack_3e8;
  *(undefined4 *)(puVar14 + 5) = uVar10;
  plStack_3f0 = plVar20;
  if (plStack_3e8 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_3e8 + 1;
    lVar17 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      lVar17 = *plStack_3e8;
      plStack_3e8 = puVar14;
      (**(code **)(lVar17 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
      lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      goto joined_r0x08daf4bf;
    }
  }
  lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  plStack_3e8 = puVar14;
joined_r0x08daf4bf:
  if (lVar17 == 0) {
    func_0x048b0de0(&uStack_808,&ppppuStack_878);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar10 = (undefined4)uStack_800;
    uVar28 = uStack_800._4_4_;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar28;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)uStack_800;
    if (uStack_800 != (ulong **)0x0) {
      LOCK();
      plVar18 = (long *)(uStack_800 + 1);
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)((long)*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar20);
      }
    }
    lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f5fa5b0 == '\0') {
    iVar12 = FUN_04108328(&DAT_0f5fa5b0);
    if (iVar12 != 0) {
      func_0x08e3d490();
      func_0x0410844d(&DAT_0f5fa5b0);
    }
  }
  if (DAT_0f5fa5b0 == '\0') {
    iVar12 = FUN_04108328(&DAT_0f5fa5b0);
    if (iVar12 != 0) {
      func_0x08e3d490();
      func_0x0410844d(&DAT_0f5fa5b0);
    }
  }
  uStack_808 = (ulong **)&DAT_0f5fa598;
  uStack_800 = (ulong **)CONCAT44(uStack_800._4_4_,_DAT_0f5fa59c);
  ppuStack_7f8 = (ulong **)0x0;
  uStack_7f0 = (undefined *)CONCAT44(uStack_7f0._4_4_,0x80);
  uStack_7e8 = (long *)0x30;
  pcStack_7e0 = (code *)&UNK_08e3d2a0;
  puStack_7d8 = &UNK_08e3d510;
  lStack_7d0 = 0;
  puStack_7c8 = &UNK_08e3f160;
  plStack_7c0 = (long *)0x1;
  uStack_7b8 = 0x48b5640;
  uStack_7b4 = 0;
  uStack_7b0 = 0x8e3f1f0;
  uStack_7ac = 0;
  uStack_7a8 = 0;
  pcStack_7a0 = (code *)0x0;
  plStack_798 = (long *)0x0;
  alStack_790[0] = 0;
  func_0x048aee30(&ppppuStack_2e8,lVar17,&uStack_808,0x69b81111);
  lVar17 = alStack_790[0];
  alStack_790[0] = 0;
  if (lVar17 != 0) {
    func_0x048ae940(lVar17);
    func_0x0412a280(lVar17,0x78);
  }
  plVar20 = plStack_798;
  if (plStack_798 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_798 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_798 + 0x10))(plStack_798);
      func_0x0412c2d0(plVar20);
    }
  }
  if (DAT_0f5fa5e0 == '\0') {
    iVar12 = FUN_04108328(&DAT_0f5fa5e0);
    if (iVar12 != 0) {
      func_0x08e40ad0();
      func_0x0410844d(&DAT_0f5fa5e0);
    }
  }
  uStack_808._0_4_ = _DAT_0f5fa5cc;
  uStack_800 = (ulong **)0x1;
  ppuStack_7f8 = (ulong **)&UNK_08e406a0;
  uStack_7f0 = &UNK_08e406b0;
  func_0x065abe60(&ppppuStack_2e8);
  uStack_448 = uStack_2d8;
  uStack_444 = uStack_2d4;
  uStack_440 = uStack_2d0;
  uStack_43c = uStack_2cc;
  ppppuStack_458 = ppppuStack_2e8;
  uStack_450 = uStack_2e0;
  uStack_808._0_4_ = 0xf55160ec;
  uStack_800 = (ulong **)0x0;
  ppuStack_7f8 = (ulong **)((ulong)ppuStack_7f8 & 0xffffffff00000000);
  uStack_7f0 = (undefined *)0x0;
  uStack_7e8 = (long *)&UNK_065b4120;
  pcStack_7e0 = (code *)&SUB_048b06d0;
  puStack_7d8 = &UNK_08e40de0;
  lStack_7d0 = 0;
  puStack_7c8 = (undefined *)((ulong)puStack_7c8 & 0xffffffff00000000);
  plStack_7c0 = (long *)0x0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  FUN_049057f0(&ppppuStack_458,&uStack_808);
  func_0x048aea50(&uStack_808);
  uStack_868 = (ulong ****)CONCAT44(uStack_444,uStack_448);
  uStack_860 = uStack_440;
  uStack_85c = uStack_43c;
  ppppuStack_878 = ppppuStack_458;
  ppppuStack_870 = (ulong ****)uStack_450;
  uStack_808 = (ulong **)CONCAT44(uStack_808._4_4_,0xf55160ec);
  uStack_800 = (ulong **)0x0;
  ppuStack_7f8 = (ulong **)CONCAT44(ppuStack_7f8._4_4_,1);
  uStack_7f0 = (undefined *)0x0;
  uStack_7e8 = (long *)&UNK_065b4120;
  pcStack_7e0 = (code *)&SUB_048b06d0;
  puStack_7d8 = &UNK_08e41090;
  lStack_7d0 = 0;
  puStack_7c8 = (undefined *)((ulong)puStack_7c8 & 0xffffffff00000000);
  plStack_7c0 = (long *)0x0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  FUN_049057f0(&ppppuStack_878,&uStack_808);
  func_0x048aea50(&uStack_808);
  func_0x08e41330();
  ppuStack_7f8 = ppuStack_168;
  uStack_808 = uStack_178;
  uStack_800 = uStack_170;
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  uStack_7f0 = puStack_160;
  uStack_7e8 = plStack_158;
  func_0x065281f0(&pcStack_7e0,auStack_150);
  ppuStack_6b8 = ppuStack_2b8;
  ppuStack_6c8 = ppuStack_2c8;
  ppuStack_6c0 = ppuStack_2c0;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  uStack_6b0 = uStack_2b0;
  uStack_6ac = uStack_2ac;
  uStack_6a8 = uStack_2a8;
  uStack_6a4 = uStack_2a4;
  func_0x065281f0(auStack_6a0,auStack_2a0);
  ppppuStack_878 = (ulong ****)0x0;
  ppppuStack_870 = (ulong ****)0x0;
  uStack_868 = (ulong ****)0x0;
  uStack_450 = uStack_450 & 0xffffffffffffff00;
  ppppuStack_458 = (ulong ****)&ppppuStack_878;
  pppuVar15 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (pppuVar15 == (ulong ***)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  pppuVar1 = pppuVar15 + 0x50;
  ppppuStack_878 = (ulong ****)pppuVar15;
  ppppuStack_870 = (ulong ****)pppuVar15;
  uStack_868 = (ulong ****)pppuVar1;
  if (((ulong)uStack_808 & 1) == 0) {
    pppuVar15[2] = ppuStack_7f8;
    *pppuVar15 = uStack_808;
    pppuVar15[1] = uStack_800;
  }
  else {
    func_0x0412e5e0(pppuVar15,ppuStack_7f8,uStack_800);
  }
  *(undefined4 *)(pppuVar15 + 3) = (undefined4)uStack_7f0;
  *(undefined4 *)((long)pppuVar15 + 0x1c) = uStack_7f0._4_4_;
  *(undefined4 *)(pppuVar15 + 4) = (undefined4)uStack_7e8;
  *(undefined4 *)((long)pppuVar15 + 0x24) = uStack_7e8._4_4_;
  func_0x06523ef0(pppuVar15 + 5,&pcStack_7e0);
  if (((ulong)ppuStack_6c8 & 1) == 0) {
    pppuVar15[0x2a] = ppuStack_6b8;
    pppuVar15[0x28] = ppuStack_6c8;
    pppuVar15[0x29] = ppuStack_6c0;
  }
  else {
    func_0x0412e5e0(pppuVar15 + 0x28,ppuStack_6b8,ppuStack_6c0);
  }
  *(undefined4 *)(pppuVar15 + 0x2b) = uStack_6b0;
  *(undefined4 *)((long)pppuVar15 + 0x15c) = uStack_6ac;
  *(undefined4 *)(pppuVar15 + 0x2c) = uStack_6a8;
  *(undefined4 *)((long)pppuVar15 + 0x164) = uStack_6a4;
  func_0x06523ef0(pppuVar15 + 0x2d,auStack_6a0);
  ppppuStack_870 = (ulong ****)pppuVar1;
  if (pcStack_5b0 != (code *)0x0) {
    (*pcStack_5b0)(auStack_5c8);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(auStack_610);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(auStack_650);
  }
  if (pcStack_678 != (code *)0x0) {
    (*pcStack_678)(auStack_690);
  }
  if (((ulong)ppuStack_6c8 & 1) != 0) {
    func_0x0412a280(ppuStack_6b8,(ulong)ppuStack_6c8 & 0xfffffffffffffffe);
  }
  if (apcStack_6f0[0] != (code *)0x0) {
    (*apcStack_6f0[0])(auStack_708);
  }
  if (pcStack_738 != (code *)0x0) {
    (*pcStack_738)(auStack_750);
  }
  if (apcStack_778[0] != (code *)0x0) {
    (*apcStack_778[0])(alStack_790);
  }
  if ((code *)CONCAT44(uStack_7b4,uStack_7b8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_7b4,uStack_7b8))(&lStack_7d0);
  }
  if (((ulong)uStack_808 & 1) != 0) {
    func_0x0412a280(ppuStack_7f8,(ulong)uStack_808 & 0xfffffffffffffffe);
  }
  uVar11 = (**(code **)(*plStack_3f0 + 0x20))();
  uVar23 = ((long)ppppuStack_870 - (long)ppppuStack_878 >> 6) * -0x3333333333333333;
  uVar19 = 0;
  if ((uVar11 != 0) && ((uint)uVar23 != 0)) {
    uVar24 = 0;
    uVar19 = 0;
    uStack_584 = uVar11;
    do {
      auVar27 = (**(code **)(*plStack_3f0 + 0x28))(plStack_3f0,uVar24);
      ppuVar13 = auVar27._8_8_;
      lVar17 = auVar27._0_8_;
      auVar27 = func_0x06527d70();
      if (auVar27._8_8_ == ppuVar13) {
        if (auVar27._0_8_ == 0) {
          lVar16 = func_0x048aead0(auVar27._8_8_);
          iVar12 = *(int *)(lVar16 + 8);
          if (lVar17 == 0) goto LAB_08dafc2e;
LAB_08dafc11:
          if (iVar12 != *(int *)(lVar17 + 8)) goto LAB_08dafc40;
        }
        else {
          iVar12 = *(int *)(auVar27._0_8_ + 8);
          if (lVar17 != 0) goto LAB_08dafc11;
LAB_08dafc2e:
          lVar16 = func_0x048aead0(ppuVar13);
          if (iVar12 != *(int *)(lVar16 + 8)) goto LAB_08dafc40;
        }
      }
      else {
LAB_08dafc40:
        auVar27 = func_0x06527e30();
        if (auVar27._8_8_ == ppuVar13) {
          if (auVar27._0_8_ == 0) {
            lVar16 = func_0x048aead0(auVar27._8_8_);
            iVar12 = *(int *)(lVar16 + 8);
          }
          else {
            iVar12 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar16 = func_0x048aead0(ppuVar13);
            iVar2 = *(int *)(lVar16 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar12 == iVar2) goto LAB_08dafe35;
        }
        auVar27 = func_0x06527ef0();
        if (auVar27._8_8_ == ppuVar13) {
          if (auVar27._0_8_ == 0) {
            lVar16 = func_0x048aead0(auVar27._8_8_);
            iVar12 = *(int *)(lVar16 + 8);
          }
          else {
            iVar12 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar16 = func_0x048aead0(ppuVar13);
            iVar2 = *(int *)(lVar16 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar12 == iVar2) goto LAB_08dafe35;
        }
        auVar27 = func_0x06527fb0();
        if (auVar27._8_8_ == ppuVar13) {
          if (auVar27._0_8_ == 0) {
            lVar16 = func_0x048aead0(auVar27._8_8_);
            iVar12 = *(int *)(lVar16 + 8);
          }
          else {
            iVar12 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar16 = func_0x048aead0(ppuVar13);
            iVar2 = *(int *)(lVar16 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar12 == iVar2) goto LAB_08dafe35;
        }
        auVar27 = func_0x06528070();
        if (auVar27._8_8_ == ppuVar13) {
          if (auVar27._0_8_ == 0) {
            lVar16 = func_0x048aead0(auVar27._8_8_);
            iVar12 = *(int *)(lVar16 + 8);
          }
          else {
            iVar12 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar16 = func_0x048aead0(ppuVar13);
            iVar2 = *(int *)(lVar16 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar12 == iVar2) goto LAB_08dafe35;
        }
        auVar27 = func_0x06528130();
        if (auVar27._8_8_ == ppuVar13) {
          if (auVar27._0_8_ == 0) {
            lVar16 = func_0x048aead0(auVar27._8_8_);
            iVar12 = *(int *)(lVar16 + 8);
          }
          else {
            iVar12 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar16 = func_0x048aead0(ppuVar13);
            iVar2 = *(int *)(lVar16 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar12 == iVar2) goto LAB_08dafe35;
        }
        ppppuVar4 = ppppuStack_878;
        ppppuVar5 = ppppuStack_870;
        if (ppppuStack_878[uVar19 * 0x28 + 4] != (ulong ***)ppuVar13) goto joined_r0x08db002d;
        if (ppppuStack_878[uVar19 * 0x28 + 3] == (ulong ***)0x0) {
          lVar16 = func_0x048aead0();
          iVar12 = *(int *)(lVar16 + 8);
          if (lVar17 == 0) goto LAB_08dafe1d;
LAB_08dafe04:
          if (iVar12 != *(int *)(lVar17 + 8)) goto LAB_08db001d;
        }
        else {
          iVar12 = *(int *)(ppppuStack_878[uVar19 * 0x28 + 3] + 1);
          if (lVar17 != 0) goto LAB_08dafe04;
LAB_08dafe1d:
          lVar17 = func_0x048aead0(ppuVar13);
          if (iVar12 != *(int *)(lVar17 + 8)) goto LAB_08db001d;
        }
        uVar19 = (ulong)((int)uVar19 + 1);
      }
LAB_08dafe35:
    } while (((uint)uVar19 < (uint)uVar23) && (uVar24 = uVar24 + 1, uVar24 < uStack_584));
    uVar23 = ((long)ppppuStack_870 - (long)ppppuStack_878 >> 6) * -0x3333333333333333;
  }
  pppuVar15 = pppuStack_408;
  if (uVar23 == uVar19) {
    pppuVar1 = pppuStack_400;
    if (pppuStack_408 != (ulong ***)0x0) {
      while (pppuVar15 != pppuVar1) {
        func_0x05fe8450(pppuVar1 + -0x28);
        pppuVar1 = pppuVar1 + -0x28;
      }
      pppuStack_400 = pppuVar15;
      func_0x0412a280(pppuStack_408,(long)pppuStack_3f8 - (long)pppuStack_408);
    }
    pppuStack_3f8 = (ulong ***)uStack_868;
    if (puStack_4d0 < puStack_4c8) {
      *puStack_4d0 = 0;
      puStack_4d0[1] = 0;
      puStack_4d0[2] = 0;
      *puStack_4d0 = uStack_438;
      puStack_4d0[1] = uStack_430;
      puStack_4d0[2] = uStack_428;
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      puStack_4d0[5] = uStack_410;
      puStack_4d0[3] = uStack_420;
      puStack_4d0[4] = uStack_418;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      puStack_4d0[6] = 0;
      puStack_4d0[7] = 0;
      puStack_4d0[8] = 0;
      puStack_4d0[6] = ppppuStack_878;
      puStack_4d0[7] = ppppuStack_870;
      puStack_4d0[8] = uStack_868;
      pppuStack_408 = (ulong ***)0x0;
      pppuStack_400 = (ulong ***)0x0;
      pppuStack_3f8 = (ulong ***)0x0;
      puStack_4d0[9] = plStack_3f0;
      puStack_4d0[10] = plStack_3e8;
      plStack_3f0 = (long *)0x0;
      plStack_3e8 = (undefined8 *)0x0;
      puStack_4d0[0xb] = 0;
      puStack_4d0[0xc] = 0;
      puStack_4d0[0xd] = 0;
      puStack_4d0[0xb] = uStack_3e0;
      puStack_4d0[0xc] = uStack_3d8;
      puStack_4d0[0xd] = uStack_3d0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      puStack_4d0 = puStack_4d0 + 0xe;
    }
    else {
      pppuStack_408 = (ulong ***)ppppuStack_878;
      pppuStack_400 = (ulong ***)ppppuStack_870;
      puStack_4d0 = (undefined8 *)func_0x0652ac80(&lStack_4d8,&uStack_438);
    }
    puVar14 = puStack_4d0 + -0xe;
  }
  else {
LAB_08db001d:
    ppppuVar4 = ppppuStack_878;
    ppppuVar5 = ppppuStack_870;
    if (ppppuStack_878 != (ulong ****)0x0) {
joined_r0x08db002d:
      while (ppppuVar6 = ppppuStack_878, ppppuStack_878 != ppppuVar5) {
        ppppuStack_878 = ppppuVar4;
        func_0x05fe8450(ppppuVar5 + -0x28);
        ppppuVar4 = ppppuStack_878;
        ppppuVar5 = ppppuVar5 + -0x28;
        ppppuStack_878 = ppppuVar6;
      }
      ppppuStack_870 = ppppuStack_878;
      ppppuStack_878 = ppppuVar4;
      func_0x0412a280(ppppuVar4,(long)uStack_868 - (long)ppppuVar4);
    }
    puVar14 = (undefined8 *)0xf5f6b90;
  }
  lVar17 = (long)uStack_858;
  if (uStack_858 != (ulong ***)0x0) {
    if ((ulong ****)uStack_858 != uStack_850) {
      lVar16 = (long)uStack_850 + -0x40;
      do {
        if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
          (**(code **)(lVar16 + 0x18))(lVar16);
        }
        if (*(code **)(lVar16 + -0x30) != (code *)0x0) {
          (**(code **)(lVar16 + -0x30))(lVar16 + -0x48);
        }
        if (*(code **)(lVar16 + -0x70) != (code *)0x0) {
          (**(code **)(lVar16 + -0x70))(lVar16 + -0x88);
        }
        if (*(code **)(lVar16 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar16 + -0xb0))(lVar16 + -200);
        }
        lVar25 = lVar16 + -0xd8;
        lVar16 = lVar16 + -0x118;
      } while (lVar25 != lVar17);
    }
    uStack_850 = (ulong ****)lVar17;
    func_0x0412a280(uStack_858,(long)pppuStack_848 - (long)uStack_858);
  }
  func_0x05f93280(&uStack_438);
  uStack_308 = _DAT_0f641a68;
  uStack_304 = _DAT_0f641a6c;
  if ((_DAT_0f641a70 & 1) == 0) {
    uStack_2f0 = _DAT_0f641a80;
    uStack_300 = _DAT_0f641a70;
    uStack_2fc = uRam000000000f641a74;
    uStack_2f8 = _DAT_0f641a78;
    uStack_2f4 = uRam000000000f641a7c;
  }
  else {
    func_0x0412e5e0(&uStack_300,_DAT_0f641a80,CONCAT44(uRam000000000f641a7c,_DAT_0f641a78));
  }
  func_0x0730fa70(puVar14,&uStack_308,0);
  if ((uStack_300 & 1) != 0) {
    func_0x0412a280(uStack_2f0,CONCAT44(uStack_2fc,uStack_300) & 0xfffffffffffffffe);
  }
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
  if (((ulong)ppuStack_2c8 & 1) != 0) {
    func_0x0412a280(ppuStack_2b8,(ulong)ppuStack_2c8 & 0xfffffffffffffffe);
  }
  if ((bStack_580 & 1) != 0) {
    func_0x0412a280(uStack_570,CONCAT71(uStack_57f,bStack_580) & 0xfffffffffffffffe);
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
    (*pcStack_128)(appuStack_140);
  }
  if (((ulong)uStack_178 & 1) != 0) {
    func_0x0412a280(ppuStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_838 & 1) != 0) {
    func_0x0412a280(ppuStack_828,CONCAT44(uStack_834,auStack_838) & 0xfffffffffffffffe);
  }
  ppuStack_7f8 = (ulong **)0x0;
  pcStack_7e0 = (code *)0x0;
  uStack_7a8 = 0;
  uStack_7a4 = 0;
  pcStack_7a0 = (code *)0x0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  puStack_7c8 = (undefined *)0x0;
  plStack_7c0 = (long *)0x0;
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  uStack_808 = (ulong **)0x0;
  uStack_800 = (ulong **)0x0;
  uStack_7f0 = (undefined *)0x6f63655274656712;
  uStack_7e8 = (long *)0x6472;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  func_0x08d20920();
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f15eab0;
  uVar10 = func_0x0d858500(&ppuStack_2c8);
  plVar20 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  *(undefined4 *)((long)puVar14 + 0x24) = uVar10;
  *(undefined4 *)(puVar14 + 5) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[3] = &UNK_0f15eb00;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  uVar10 = func_0x0d858620(plVar20);
  *(undefined4 *)(puVar14 + 5) = uVar10;
  plVar18 = (long *)CONCAT44(uStack_7b4,uStack_7b8);
  uStack_7b8 = SUB84(puVar14,0);
  uStack_7b4 = (undefined4)((ulong)puVar14 >> 0x20);
  plStack_7c0 = plVar20;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar20 = plVar18 + 1;
    lVar17 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  (**(code **)(*plStack_7c0 + 0x20))();
  puVar29 = puStack_7d8;
  lVar17 = lStack_7d0;
  if (puStack_7d8 != (undefined *)0x0) {
    while (puVar29 != (undefined *)lVar17) {
      func_0x05fe8450(lVar17 + -0x140);
      lVar17 = lVar17 + -0x140;
    }
    lStack_7d0 = (long)puVar29;
    func_0x0412a280(puStack_7d8,(long)puStack_7c8 - (long)puStack_7d8);
  }
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  puStack_7c8 = (undefined *)0x0;
  if (puStack_4d0 < puStack_4c8) {
    *puStack_4d0 = 0;
    puStack_4d0[1] = 0;
    puStack_4d0[2] = 0;
    *puStack_4d0 = uStack_808;
    puStack_4d0[1] = uStack_800;
    puStack_4d0[2] = ppuStack_7f8;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    ppuStack_7f8 = (ulong **)0x0;
    puStack_4d0[5] = pcStack_7e0;
    puStack_4d0[3] = uStack_7f0;
    puStack_4d0[4] = uStack_7e8;
    uStack_7f0 = (undefined *)0x0;
    uStack_7e8 = (long *)0x0;
    pcStack_7e0 = (code *)0x0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_7d8 = (undefined *)0x0;
    lStack_7d0 = 0;
    puStack_7c8 = (undefined *)0x0;
    puStack_4d0[9] = plStack_7c0;
    puStack_4d0[10] = CONCAT44(uStack_7b4,uStack_7b8);
    plStack_7c0 = (long *)0x0;
    uStack_7b8 = 0;
    uStack_7b4 = 0;
    puStack_4d0[0xb] = 0;
    puStack_4d0[0xc] = 0;
    puStack_4d0[0xd] = 0;
    puStack_4d0[0xb] = CONCAT44(uStack_7ac,uStack_7b0);
    puStack_4d0[0xc] = CONCAT44(uStack_7a4,uStack_7a8);
    puStack_4d0[0xd] = pcStack_7a0;
    uStack_7b0 = 0;
    uStack_7ac = 0;
    uStack_7a8 = 0;
    uStack_7a4 = 0;
    pcStack_7a0 = (code *)0x0;
    puVar14 = puStack_4d0 + 0xe;
    ppuVar13 = ppuStack_2c8;
  }
  else {
    puVar14 = (undefined8 *)func_0x0652ac80(&lStack_4d8,&uStack_808);
    ppuVar13 = ppuStack_2c8;
  }
  puStack_4d0 = puVar14;
  ppuStack_2c8 = ppuVar13;
  if (ppuVar13 != (ulong **)0x0) {
    if (ppuVar13 != ppuStack_2c0) {
      ppuVar22 = ppuStack_2c0 + -8;
      do {
        if ((code *)ppuVar22[3] != (code *)0x0) {
          (*(code *)ppuVar22[3])(ppuVar22);
        }
        if ((code *)ppuVar22[-6] != (code *)0x0) {
          (*(code *)ppuVar22[-6])(ppuVar22 + -9);
        }
        if ((code *)ppuVar22[-0xe] != (code *)0x0) {
          (*(code *)ppuVar22[-0xe])(ppuVar22 + -0x11);
        }
        if ((code *)ppuVar22[-0x16] != (code *)0x0) {
          (*(code *)ppuVar22[-0x16])(ppuVar22 + -0x19);
        }
        ppuVar21 = ppuVar22 + -0x1b;
        ppuVar22 = ppuVar22 + -0x23;
      } while (ppuVar21 != ppuVar13);
    }
    func_0x0412a280(ppuStack_2c8,(long)ppuStack_2b8 - (long)ppuStack_2c8);
  }
  func_0x05f93280(&uStack_808);
  uStack_328 = _DAT_0f641a68;
  uStack_324 = _DAT_0f641a6c;
  if ((_DAT_0f641a70 & 1) == 0) {
    uStack_310 = _DAT_0f641a80;
    uStack_320 = _DAT_0f641a70;
    uStack_31c = uRam000000000f641a74;
    uStack_318 = _DAT_0f641a78;
    uStack_314 = uRam000000000f641a7c;
  }
  else {
    func_0x0412e5e0(&uStack_320,_DAT_0f641a80,CONCAT44(uRam000000000f641a7c,_DAT_0f641a78));
  }
  func_0x0730fa70(puVar14 + -0xe,&uStack_328,0);
  if ((uStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,CONCAT44(uStack_31c,uStack_320) & 0xfffffffffffffffe);
  }
  ppuStack_7f8 = (ulong **)0x0;
  pcStack_7e0 = (code *)0x0;
  uStack_7a8 = 0;
  uStack_7a4 = 0;
  pcStack_7a0 = (code *)0x0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  puStack_7c8 = (undefined *)0x0;
  plStack_7c0 = (long *)0x0;
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  uStack_808 = (ulong **)0x0;
  uStack_800 = (ulong **)0x0;
  uStack_7f0 = (undefined *)0x6979616c50736912;
  uStack_7e8 = (long *)0x676e;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f15eb80;
  uVar10 = func_0x0d858500(&ppuStack_2c8);
  plVar20 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 1;
  *(undefined4 *)((long)puVar14 + 0x24) = uVar10;
  *(undefined4 *)(puVar14 + 5) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[3] = &UNK_0f15ebd0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  uVar10 = func_0x0d858620(plVar20);
  *(undefined4 *)(puVar14 + 5) = uVar10;
  plVar18 = (long *)CONCAT44(uStack_7b4,uStack_7b8);
  uStack_7b8 = SUB84(puVar14,0);
  uStack_7b4 = (undefined4)((ulong)puVar14 >> 0x20);
  plStack_7c0 = plVar20;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar20 = plVar18 + 1;
    lVar17 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  (**(code **)(*plStack_7c0 + 0x20))();
  puVar29 = puStack_7d8;
  lVar17 = lStack_7d0;
  if (puStack_7d8 != (undefined *)0x0) {
    while (puVar29 != (undefined *)lVar17) {
      func_0x05fe8450(lVar17 + -0x140);
      lVar17 = lVar17 + -0x140;
    }
    lStack_7d0 = (long)puVar29;
    func_0x0412a280(puStack_7d8,(long)puStack_7c8 - (long)puStack_7d8);
  }
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  puStack_7c8 = (undefined *)0x0;
  if (puStack_4d0 < puStack_4c8) {
    *puStack_4d0 = 0;
    puStack_4d0[1] = 0;
    puStack_4d0[2] = 0;
    *puStack_4d0 = uStack_808;
    puStack_4d0[1] = uStack_800;
    puStack_4d0[2] = ppuStack_7f8;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    ppuStack_7f8 = (ulong **)0x0;
    puStack_4d0[5] = pcStack_7e0;
    puStack_4d0[3] = uStack_7f0;
    puStack_4d0[4] = uStack_7e8;
    uStack_7f0 = (undefined *)0x0;
    uStack_7e8 = (long *)0x0;
    pcStack_7e0 = (code *)0x0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_7d8 = (undefined *)0x0;
    lStack_7d0 = 0;
    puStack_7c8 = (undefined *)0x0;
    puStack_4d0[9] = plStack_7c0;
    puStack_4d0[10] = CONCAT44(uStack_7b4,uStack_7b8);
    plStack_7c0 = (long *)0x0;
    uStack_7b8 = 0;
    uStack_7b4 = 0;
    puStack_4d0[0xb] = 0;
    puStack_4d0[0xc] = 0;
    puStack_4d0[0xd] = 0;
    puStack_4d0[0xb] = CONCAT44(uStack_7ac,uStack_7b0);
    puStack_4d0[0xc] = CONCAT44(uStack_7a4,uStack_7a8);
    puStack_4d0[0xd] = pcStack_7a0;
    uStack_7b0 = 0;
    uStack_7ac = 0;
    uStack_7a8 = 0;
    uStack_7a4 = 0;
    pcStack_7a0 = (code *)0x0;
    puVar14 = puStack_4d0 + 0xe;
    ppuVar13 = ppuStack_2c8;
  }
  else {
    puVar14 = (undefined8 *)func_0x0652ac80(&lStack_4d8,&uStack_808);
    ppuVar13 = ppuStack_2c8;
  }
  puStack_4d0 = puVar14;
  ppuStack_2c8 = ppuVar13;
  if (ppuVar13 != (ulong **)0x0) {
    if (ppuVar13 != ppuStack_2c0) {
      ppuVar22 = ppuStack_2c0 + -8;
      do {
        if ((code *)ppuVar22[3] != (code *)0x0) {
          (*(code *)ppuVar22[3])(ppuVar22);
        }
        if ((code *)ppuVar22[-6] != (code *)0x0) {
          (*(code *)ppuVar22[-6])(ppuVar22 + -9);
        }
        if ((code *)ppuVar22[-0xe] != (code *)0x0) {
          (*(code *)ppuVar22[-0xe])(ppuVar22 + -0x11);
        }
        if ((code *)ppuVar22[-0x16] != (code *)0x0) {
          (*(code *)ppuVar22[-0x16])(ppuVar22 + -0x19);
        }
        ppuVar21 = ppuVar22 + -0x1b;
        ppuVar22 = ppuVar22 + -0x23;
      } while (ppuVar21 != ppuVar13);
    }
    func_0x0412a280(ppuStack_2c8,(long)ppuStack_2b8 - (long)ppuStack_2c8);
  }
  func_0x05f93280(&uStack_808);
  uStack_348 = _DAT_0f641a68;
  uStack_344 = _DAT_0f641a6c;
  if ((_DAT_0f641a70 & 1) == 0) {
    uStack_330 = _DAT_0f641a80;
    uStack_340 = _DAT_0f641a70;
    uStack_33c = uRam000000000f641a74;
    uStack_338 = _DAT_0f641a78;
    uStack_334 = uRam000000000f641a7c;
  }
  else {
    func_0x0412e5e0(&uStack_340,_DAT_0f641a80,CONCAT44(uRam000000000f641a7c,_DAT_0f641a78));
  }
  func_0x0730fa70(puVar14 + -0xe,&uStack_348,0);
  if ((uStack_340 & 1) != 0) {
    func_0x0412a280(uStack_330,CONCAT44(uStack_33c,uStack_340) & 0xfffffffffffffffe);
  }
  ppuStack_7f8 = (ulong **)0x0;
  pcStack_7e0 = (code *)0x0;
  uStack_7a8 = 0;
  uStack_7a4 = 0;
  pcStack_7a0 = (code *)0x0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  puStack_7c8 = (undefined *)0x0;
  plStack_7c0 = (long *)0x0;
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  uStack_808 = (ulong **)0x0;
  uStack_800 = (ulong **)0x0;
  uStack_7f0 = (undefined *)0x63655279616c7014;
  uStack_7e8 = (long *)0x64726f;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f15ec50;
  uVar10 = func_0x0d858500(&ppuStack_2c8);
  plVar20 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 0;
  *(undefined4 *)((long)puVar14 + 0x24) = uVar10;
  *(undefined4 *)(puVar14 + 5) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[3] = &UNK_0f15eca0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  uVar10 = func_0x0d858620(plVar20);
  *(undefined4 *)(puVar14 + 5) = uVar10;
  plVar18 = (long *)CONCAT44(uStack_7b4,uStack_7b8);
  uStack_7b8 = SUB84(puVar14,0);
  uStack_7b4 = (undefined4)((ulong)puVar14 >> 0x20);
  plStack_7c0 = plVar20;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar20 = plVar18 + 1;
    lVar17 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  (**(code **)(*plStack_7c0 + 0x20))();
  puVar29 = puStack_7d8;
  lVar17 = lStack_7d0;
  if (puStack_7d8 != (undefined *)0x0) {
    while (puVar29 != (undefined *)lVar17) {
      func_0x05fe8450(lVar17 + -0x140);
      lVar17 = lVar17 + -0x140;
    }
    lStack_7d0 = (long)puVar29;
    func_0x0412a280(puStack_7d8,(long)puStack_7c8 - (long)puStack_7d8);
  }
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  puStack_7c8 = (undefined *)0x0;
  if (puStack_4d0 < puStack_4c8) {
    *puStack_4d0 = 0;
    puStack_4d0[1] = 0;
    puStack_4d0[2] = 0;
    *puStack_4d0 = uStack_808;
    puStack_4d0[1] = uStack_800;
    puStack_4d0[2] = ppuStack_7f8;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    ppuStack_7f8 = (ulong **)0x0;
    puStack_4d0[5] = pcStack_7e0;
    puStack_4d0[3] = uStack_7f0;
    puStack_4d0[4] = uStack_7e8;
    uStack_7f0 = (undefined *)0x0;
    uStack_7e8 = (long *)0x0;
    pcStack_7e0 = (code *)0x0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_7d8 = (undefined *)0x0;
    lStack_7d0 = 0;
    puStack_7c8 = (undefined *)0x0;
    puStack_4d0[9] = plStack_7c0;
    puStack_4d0[10] = CONCAT44(uStack_7b4,uStack_7b8);
    plStack_7c0 = (long *)0x0;
    uStack_7b8 = 0;
    uStack_7b4 = 0;
    puStack_4d0[0xb] = 0;
    puStack_4d0[0xc] = 0;
    puStack_4d0[0xd] = 0;
    puStack_4d0[0xb] = CONCAT44(uStack_7ac,uStack_7b0);
    puStack_4d0[0xc] = CONCAT44(uStack_7a4,uStack_7a8);
    puStack_4d0[0xd] = pcStack_7a0;
    uStack_7b0 = 0;
    uStack_7ac = 0;
    uStack_7a8 = 0;
    uStack_7a4 = 0;
    pcStack_7a0 = (code *)0x0;
    puVar14 = puStack_4d0 + 0xe;
    ppuVar13 = ppuStack_2c8;
  }
  else {
    puVar14 = (undefined8 *)func_0x0652ac80(&lStack_4d8,&uStack_808);
    ppuVar13 = ppuStack_2c8;
  }
  puStack_4d0 = puVar14;
  ppuStack_2c8 = ppuVar13;
  if (ppuVar13 != (ulong **)0x0) {
    if (ppuVar13 != ppuStack_2c0) {
      ppuVar22 = ppuStack_2c0 + -8;
      do {
        if ((code *)ppuVar22[3] != (code *)0x0) {
          (*(code *)ppuVar22[3])(ppuVar22);
        }
        if ((code *)ppuVar22[-6] != (code *)0x0) {
          (*(code *)ppuVar22[-6])(ppuVar22 + -9);
        }
        if ((code *)ppuVar22[-0xe] != (code *)0x0) {
          (*(code *)ppuVar22[-0xe])(ppuVar22 + -0x11);
        }
        if ((code *)ppuVar22[-0x16] != (code *)0x0) {
          (*(code *)ppuVar22[-0x16])(ppuVar22 + -0x19);
        }
        ppuVar21 = ppuVar22 + -0x1b;
        ppuVar22 = ppuVar22 + -0x23;
      } while (ppuVar21 != ppuVar13);
    }
    func_0x0412a280(ppuStack_2c8,(long)ppuStack_2b8 - (long)ppuStack_2c8);
  }
  func_0x05f93280(&uStack_808);
  uStack_368 = _DAT_0f641a68;
  uStack_364 = _DAT_0f641a6c;
  if ((_DAT_0f641a70 & 1) == 0) {
    uStack_350 = _DAT_0f641a80;
    uStack_360 = _DAT_0f641a70;
    uStack_35c = uRam000000000f641a74;
    uStack_358 = _DAT_0f641a78;
    uStack_354 = uRam000000000f641a7c;
  }
  else {
    func_0x0412e5e0(&uStack_360,_DAT_0f641a80,CONCAT44(uRam000000000f641a7c,_DAT_0f641a78));
  }
  func_0x0730fa70(puVar14 + -0xe,&uStack_368,0);
  if ((uStack_360 & 1) != 0) {
    func_0x0412a280(uStack_350,CONCAT44(uStack_35c,uStack_360) & 0xfffffffffffffffe);
  }
  ppuStack_7f8 = (ulong **)0x0;
  pcStack_7e0 = (code *)0x0;
  uStack_7a8 = 0;
  uStack_7a4 = 0;
  pcStack_7a0 = (code *)0x0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  puStack_7c8 = (undefined *)0x0;
  plStack_7c0 = (long *)0x0;
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  uStack_808 = (ulong **)0x0;
  uStack_800 = (ulong **)0x0;
  uStack_7f0 = (undefined *)0x6552657375617016;
  uStack_7e8 = (long *)0x64726f63;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f15ed20;
  uVar10 = func_0x0d858500(&ppuStack_2c8);
  plVar20 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 0;
  *(undefined4 *)((long)puVar14 + 0x24) = uVar10;
  *(undefined4 *)(puVar14 + 5) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[3] = &UNK_0f15ed70;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  uVar10 = func_0x0d858620(plVar20);
  *(undefined4 *)(puVar14 + 5) = uVar10;
  plVar18 = (long *)CONCAT44(uStack_7b4,uStack_7b8);
  uStack_7b8 = SUB84(puVar14,0);
  uStack_7b4 = (undefined4)((ulong)puVar14 >> 0x20);
  plStack_7c0 = plVar20;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar20 = plVar18 + 1;
    lVar17 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  (**(code **)(*plStack_7c0 + 0x20))();
  puVar29 = puStack_7d8;
  lVar17 = lStack_7d0;
  if (puStack_7d8 != (undefined *)0x0) {
    while (puVar29 != (undefined *)lVar17) {
      func_0x05fe8450(lVar17 + -0x140);
      lVar17 = lVar17 + -0x140;
    }
    lStack_7d0 = (long)puVar29;
    func_0x0412a280(puStack_7d8,(long)puStack_7c8 - (long)puStack_7d8);
  }
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  puStack_7c8 = (undefined *)0x0;
  if (puStack_4d0 < puStack_4c8) {
    *puStack_4d0 = 0;
    puStack_4d0[1] = 0;
    puStack_4d0[2] = 0;
    *puStack_4d0 = uStack_808;
    puStack_4d0[1] = uStack_800;
    puStack_4d0[2] = ppuStack_7f8;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    ppuStack_7f8 = (ulong **)0x0;
    puStack_4d0[5] = pcStack_7e0;
    puStack_4d0[3] = uStack_7f0;
    puStack_4d0[4] = uStack_7e8;
    uStack_7f0 = (undefined *)0x0;
    uStack_7e8 = (long *)0x0;
    pcStack_7e0 = (code *)0x0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_7d8 = (undefined *)0x0;
    lStack_7d0 = 0;
    puStack_7c8 = (undefined *)0x0;
    puStack_4d0[9] = plStack_7c0;
    puStack_4d0[10] = CONCAT44(uStack_7b4,uStack_7b8);
    plStack_7c0 = (long *)0x0;
    uStack_7b8 = 0;
    uStack_7b4 = 0;
    puStack_4d0[0xb] = 0;
    puStack_4d0[0xc] = 0;
    puStack_4d0[0xd] = 0;
    puStack_4d0[0xb] = CONCAT44(uStack_7ac,uStack_7b0);
    puStack_4d0[0xc] = CONCAT44(uStack_7a4,uStack_7a8);
    puStack_4d0[0xd] = pcStack_7a0;
    uStack_7b0 = 0;
    uStack_7ac = 0;
    uStack_7a8 = 0;
    uStack_7a4 = 0;
    pcStack_7a0 = (code *)0x0;
    puVar14 = puStack_4d0 + 0xe;
    ppuVar13 = ppuStack_2c8;
  }
  else {
    puVar14 = (undefined8 *)func_0x0652ac80(&lStack_4d8,&uStack_808);
    ppuVar13 = ppuStack_2c8;
  }
  puStack_4d0 = puVar14;
  ppuStack_2c8 = ppuVar13;
  if (ppuVar13 != (ulong **)0x0) {
    if (ppuVar13 != ppuStack_2c0) {
      ppuVar22 = ppuStack_2c0 + -8;
      do {
        if ((code *)ppuVar22[3] != (code *)0x0) {
          (*(code *)ppuVar22[3])(ppuVar22);
        }
        if ((code *)ppuVar22[-6] != (code *)0x0) {
          (*(code *)ppuVar22[-6])(ppuVar22 + -9);
        }
        if ((code *)ppuVar22[-0xe] != (code *)0x0) {
          (*(code *)ppuVar22[-0xe])(ppuVar22 + -0x11);
        }
        if ((code *)ppuVar22[-0x16] != (code *)0x0) {
          (*(code *)ppuVar22[-0x16])(ppuVar22 + -0x19);
        }
        ppuVar21 = ppuVar22 + -0x1b;
        ppuVar22 = ppuVar22 + -0x23;
      } while (ppuVar21 != ppuVar13);
    }
    func_0x0412a280(ppuStack_2c8,(long)ppuStack_2b8 - (long)ppuStack_2c8);
  }
  func_0x05f93280(&uStack_808);
  uStack_388 = _DAT_0f641a68;
  uStack_384 = _DAT_0f641a6c;
  if ((_DAT_0f641a70 & 1) == 0) {
    uStack_370 = _DAT_0f641a80;
    uStack_380 = _DAT_0f641a70;
    uStack_37c = uRam000000000f641a74;
    uStack_378 = _DAT_0f641a78;
    uStack_374 = uRam000000000f641a7c;
  }
  else {
    func_0x0412e5e0(&uStack_380,_DAT_0f641a80,CONCAT44(uRam000000000f641a7c,_DAT_0f641a78));
  }
  func_0x0730fa70(puVar14 + -0xe,&uStack_388,0);
  if ((uStack_380 & 1) != 0) {
    func_0x0412a280(uStack_370,CONCAT44(uStack_37c,uStack_380) & 0xfffffffffffffffe);
  }
  ppuStack_7f8 = (ulong **)0x0;
  pcStack_7e0 = (code *)0x0;
  uStack_7a8 = 0;
  uStack_7a4 = 0;
  pcStack_7a0 = (code *)0x0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  puStack_7c8 = (undefined *)0x0;
  plStack_7c0 = (long *)0x0;
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  uStack_808 = (ulong **)0x0;
  uStack_800 = (ulong **)0x0;
  uStack_7f0 = (undefined *)0x65527463656a6516;
  uStack_7e8 = (long *)0x64726f63;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f15edf0;
  uVar10 = func_0x0d858500(&ppuStack_2c8);
  plVar20 = puVar14 + 3;
  *(undefined1 *)(puVar14 + 4) = 0;
  *(undefined4 *)((long)puVar14 + 0x24) = uVar10;
  *(undefined4 *)(puVar14 + 5) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[3] = &UNK_0f15ee40;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  ppuStack_2c8 = (ulong **)0x0;
  ppuStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  uVar10 = func_0x0d858620(plVar20);
  *(undefined4 *)(puVar14 + 5) = uVar10;
  plVar18 = (long *)CONCAT44(uStack_7b4,uStack_7b8);
  uStack_7b8 = SUB84(puVar14,0);
  uStack_7b4 = (undefined4)((ulong)puVar14 >> 0x20);
  plStack_7c0 = plVar20;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar20 = plVar18 + 1;
    lVar17 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  uStack_178 = (ulong **)0x0;
  uStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  (**(code **)(*plStack_7c0 + 0x20))();
  puVar29 = puStack_7d8;
  lVar17 = lStack_7d0;
  if (puStack_7d8 != (undefined *)0x0) {
    while (puVar29 != (undefined *)lVar17) {
      func_0x05fe8450(lVar17 + -0x140);
      lVar17 = lVar17 + -0x140;
    }
    lStack_7d0 = (long)puVar29;
    func_0x0412a280(puStack_7d8,(long)puStack_7c8 - (long)puStack_7d8);
  }
  puStack_7d8 = (undefined *)0x0;
  lStack_7d0 = 0;
  puStack_7c8 = (undefined *)0x0;
  if (puStack_4d0 < puStack_4c8) {
    *puStack_4d0 = 0;
    puStack_4d0[1] = 0;
    puStack_4d0[2] = 0;
    *puStack_4d0 = uStack_808;
    puStack_4d0[1] = uStack_800;
    puStack_4d0[2] = ppuStack_7f8;
    uStack_808 = (ulong **)0x0;
    uStack_800 = (ulong **)0x0;
    ppuStack_7f8 = (ulong **)0x0;
    puStack_4d0[5] = pcStack_7e0;
    puStack_4d0[3] = uStack_7f0;
    puStack_4d0[4] = uStack_7e8;
    uStack_7f0 = (undefined *)0x0;
    uStack_7e8 = (long *)0x0;
    pcStack_7e0 = (code *)0x0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_4d0[6] = 0;
    puStack_4d0[7] = 0;
    puStack_4d0[8] = 0;
    puStack_7d8 = (undefined *)0x0;
    lStack_7d0 = 0;
    puStack_7c8 = (undefined *)0x0;
    puStack_4d0[9] = plStack_7c0;
    puStack_4d0[10] = CONCAT44(uStack_7b4,uStack_7b8);
    plStack_7c0 = (long *)0x0;
    uStack_7b8 = 0;
    uStack_7b4 = 0;
    puStack_4d0[0xb] = 0;
    puStack_4d0[0xc] = 0;
    puStack_4d0[0xd] = 0;
    puStack_4d0[0xb] = CONCAT44(uStack_7ac,uStack_7b0);
    puStack_4d0[0xc] = CONCAT44(uStack_7a4,uStack_7a8);
    puStack_4d0[0xd] = pcStack_7a0;
    uStack_7b0 = 0;
    uStack_7ac = 0;
    uStack_7a8 = 0;
    uStack_7a4 = 0;
    pcStack_7a0 = (code *)0x0;
    puVar14 = puStack_4d0 + 0xe;
    ppuVar13 = ppuStack_2c8;
  }
  else {
    puVar14 = (undefined8 *)func_0x0652ac80(&lStack_4d8,&uStack_808);
    ppuVar13 = ppuStack_2c8;
  }
  puStack_4d0 = puVar14;
  ppuStack_2c8 = ppuVar13;
  if (ppuVar13 != (ulong **)0x0) {
    if (ppuVar13 != ppuStack_2c0) {
      ppuVar22 = ppuStack_2c0 + -8;
      do {
        if ((code *)ppuVar22[3] != (code *)0x0) {
          (*(code *)ppuVar22[3])(ppuVar22);
        }
        if ((code *)ppuVar22[-6] != (code *)0x0) {
          (*(code *)ppuVar22[-6])(ppuVar22 + -9);
        }
        if ((code *)ppuVar22[-0xe] != (code *)0x0) {
          (*(code *)ppuVar22[-0xe])(ppuVar22 + -0x11);
        }
        if ((code *)ppuVar22[-0x16] != (code *)0x0) {
          (*(code *)ppuVar22[-0x16])(ppuVar22 + -0x19);
        }
        ppuVar21 = ppuVar22 + -0x1b;
        ppuVar22 = ppuVar22 + -0x23;
      } while (ppuVar21 != ppuVar13);
    }
    func_0x0412a280(ppuStack_2c8,(long)ppuStack_2b8 - (long)ppuStack_2c8);
  }
  func_0x05f93280(&uStack_808);
  uStack_3a8 = _DAT_0f641a68;
  uStack_3a4 = _DAT_0f641a6c;
  if ((_DAT_0f641a70 & 1) == 0) {
    uStack_390 = _DAT_0f641a80;
    uStack_3a0 = _DAT_0f641a70;
    uStack_39c = uRam000000000f641a74;
    uStack_398 = _DAT_0f641a78;
    uStack_394 = uRam000000000f641a7c;
  }
  else {
    func_0x0412e5e0(&uStack_3a0,_DAT_0f641a80,CONCAT44(uRam000000000f641a7c,_DAT_0f641a78));
  }
  func_0x0730fa70(puVar14 + -0xe,&uStack_3a8,0);
  if ((uStack_3a0 & 1) != 0) {
    func_0x0412a280(uStack_390,CONCAT44(uStack_39c,uStack_3a0) & 0xfffffffffffffffe);
  }
  uStack_3c4 = _DAT_0f641a6c;
  uStack_3c8 = _DAT_0f641a68;
  if ((_DAT_0f641a70 & 1) == 0) {
    uStack_3b0 = _DAT_0f641a80;
    uStack_3c0 = _DAT_0f641a70;
    uStack_3bc = uRam000000000f641a74;
    uStack_3b8 = _DAT_0f641a78;
    uStack_3b4 = uRam000000000f641a7c;
  }
  else {
    func_0x0412e5e0(&uStack_3c0,_DAT_0f641a80,CONCAT44(uRam000000000f641a7c,_DAT_0f641a78));
  }
  func_0x0730fa70(&lStack_568,&uStack_3c8,0);
  if ((uStack_3c0 & 1) != 0) {
    func_0x0412a280(uStack_3b0,CONCAT44(uStack_3bc,uStack_3c0) & 0xfffffffffffffffe);
  }
  auStack_520 = func_0x08e3c370();
  lVar16 = lStack_550;
  lVar17 = lStack_548;
  if (lStack_550 != 0) {
    for (; lVar16 != lVar17; lVar17 = lVar17 + -0x30) {
      if ((*(byte *)(lVar17 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar17 + -0x10),
                        *(ulong *)(lVar17 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_548 = lVar16;
    func_0x0412a280(lStack_550,lStack_540 - lStack_550);
  }
  lVar25 = lStack_558;
  lVar16 = lStack_560;
  lVar17 = lStack_568;
  lStack_568 = 0;
  lStack_560 = 0;
  lStack_558 = 0;
  *plStack_188 = lVar17;
  plStack_188[1] = lVar16;
  plStack_188[2] = lVar25;
  lStack_550 = 0;
  lStack_548 = 0;
  lStack_540 = 0;
  plStack_188[5] = (long)puStack_528;
  plStack_188[3] = uStack_538;
  plStack_188[4] = uStack_530;
  uStack_538 = 0;
  uStack_530 = 0;
  puStack_528 = (undefined8 *)0x0;
  *(undefined4 *)(plStack_188 + 8) = auStack_510._0_4_;
  *(undefined4 *)((long)plStack_188 + 0x44) = auStack_510._4_4_;
  *(undefined4 *)(plStack_188 + 9) = auStack_510._8_4_;
  *(undefined4 *)((long)plStack_188 + 0x4c) = auStack_510._12_4_;
  *(undefined1 (*) [16])(plStack_188 + 6) = auStack_520;
  plStack_188[10] = lStack_500;
  plStack_188[0xb] = lStack_4f8;
  plStack_188[0xc] = lStack_4f0;
  lStack_500 = 0;
  lStack_4f8 = 0;
  lStack_4f0 = 0;
  plStack_188[0xd] = lStack_4e8;
  plStack_188[0xe] = lStack_4e0;
  lStack_4e8 = 0;
  lStack_4e0 = 0;
  plStack_188[0xf] = lStack_4d8;
  plStack_188[0x10] = (long)puStack_4d0;
  plStack_188[0x11] = (long)puStack_4c8;
  lStack_4d8 = 0;
  puStack_4d0 = (undefined8 *)0x0;
  puStack_4c8 = (undefined8 *)0x0;
  plStack_188[0x12] = lStack_4c0;
  plStack_188[0x13] = lStack_4b8;
  plStack_188[0x14] = lStack_4b0;
  lStack_4c0 = 0;
  lStack_4b8 = 0;
  lStack_4b0 = 0;
  plStack_188[0x15] = lStack_4a8;
  plStack_188[0x16] = lStack_4a0;
  plStack_188[0x17] = lStack_498;
  lStack_4a8 = 0;
  lStack_4a0 = 0;
  lStack_498 = 0;
  plStack_188[0x18] = lStack_490;
  plStack_188[0x19] = lStack_488;
  plStack_188[0x1a] = lStack_480;
  lStack_490 = 0;
  lStack_488 = 0;
  lStack_480 = 0;
  *(undefined4 *)(plStack_188 + 0x1b) = (undefined4)uStack_478;
  *(undefined4 *)((long)plStack_188 + 0xdc) = uStack_478._4_4_;
  *(undefined4 *)(plStack_188 + 0x1c) = (undefined4)uStack_470;
  *(undefined4 *)((long)plStack_188 + 0xe4) = uStack_470._4_4_;
  plStack_188[0x1d] = lStack_468;
  uStack_478 = 0;
  uStack_470 = 0;
  lStack_468 = 0;
  func_0x0651ffe0(&lStack_550);
  lVar16 = lStack_568;
  lVar17 = lStack_560;
  if (lStack_568 != 0) {
    for (; lVar16 != lVar17; lVar17 = lVar17 + -0x30) {
      if ((*(byte *)(lVar17 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar17 + -0x10),
                        *(ulong *)(lVar17 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_560 = lVar16;
    func_0x0412a280(lStack_568,lStack_558 - lStack_568);
  }
  if (((ulong)auStack_820 & 1) != 0) {
    func_0x0412a280(puStack_810,(ulong)auStack_820 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1279dcc  BlockRecordPlayerComponent
 * 0x1279dd6  dPlayerComponent
 */
