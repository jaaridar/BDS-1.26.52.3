/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa5fe650 (ELF vaddr 0xa4fe650)
 * Label: caller-of-callee
 * Body:  [[0a5fe650, 0a5ffcab] [0a5ffcb0, 0a6001a9] [0a6001b0, 0a600ccb] [0a600cd0, 0a60191d] [0a601920, 0a601e0c] [0a601e10, 0a6029b2] [0a6029c0, 0a60343c] [0a603440, 0a603658] [0a603660, 0a603a79]]
 * Ghidra: FUN_0a5fe650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0a5fe650(long *param_1)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  code *pcVar18;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined *puVar27;
  undefined8 uStack_938;
  undefined8 uStack_930;
  byte *pbStack_928;
  byte bStack_918;
  undefined7 uStack_917;
  byte bStack_910;
  undefined2 uStack_90f;
  undefined5 uStack_90d;
  ulong *puStack_908;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined4 uStack_8f0;
  undefined1 uStack_8ec;
  undefined2 uStack_8eb;
  undefined1 uStack_8e9;
  undefined1 uStack_8e8;
  undefined1 uStack_8e7;
  undefined2 uStack_8e6;
  undefined4 uStack_8e4;
  undefined *puStack_8e0;
  undefined8 uStack_8d8;
  undefined1 uStack_8d0;
  undefined2 uStack_8cf;
  undefined1 uStack_8cd;
  undefined4 uStack_8cc;
  byte **ppbStack_8c8;
  uint uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 uStack_8b8;
  undefined7 uStack_8b7;
  undefined8 uStack_8b0;
  long lStack_8a8;
  long lStack_8a0;
  ulong *puStack_898;
  long *plStack_890;
  long *plStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  uint uStack_85c;
  undefined4 uStack_858;
  undefined1 uStack_854;
  undefined2 uStack_853;
  undefined1 uStack_851;
  undefined1 uStack_850;
  undefined1 uStack_84f;
  undefined1 uStack_84e;
  undefined1 uStack_84d;
  uint uStack_84c;
  code *pcStack_848;
  undefined *puStack_840;
  long *plStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  code *pcStack_810;
  code *pcStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined1 auStack_7e0 [24];
  code *pcStack_7c8;
  undefined1 auStack_7a0 [24];
  code *pcStack_788;
  undefined1 auStack_758 [24];
  code *pcStack_740;
  byte *apbStack_710 [2];
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined *puStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  code *pcStack_6d0;
  undefined1 auStack_6c8 [16];
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  code *pcStack_690;
  long *plStack_688;
  long alStack_680 [3];
  code *apcStack_668 [3];
  code *pcStack_650;
  undefined1 auStack_640 [24];
  code *pcStack_628;
  undefined1 auStack_620 [24];
  code *pcStack_608;
  undefined1 auStack_5f8 [24];
  code *pcStack_5e0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined1 auStack_590 [16];
  undefined1 auStack_580 [24];
  code *pcStack_568;
  undefined1 auStack_540 [24];
  code *pcStack_528;
  undefined1 auStack_500 [24];
  code *pcStack_4e8;
  undefined1 auStack_4b8 [24];
  code *pcStack_4a0;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined1 uStack_460;
  undefined2 uStack_45f;
  undefined5 uStack_45d;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  undefined1 auStack_410 [16];
  undefined1 auStack_400 [16];
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 uStack_348;
  undefined8 uStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  ulong *puStack_308;
  code *pcStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d0 [24];
  code *pcStack_2b8;
  undefined1 auStack_290 [24];
  code *pcStack_278;
  undefined1 auStack_248 [24];
  code *pcStack_230;
  undefined4 uStack_208;
  undefined2 uStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined2 uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined2 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined2 uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined2 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined2 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  byte *pbStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  
  uStack_470 = CONCAT31((int3)_DAT_0143934f,0x22);
  uStack_46c = (undefined4)((ulong)_DAT_0143934f >> 0x18);
  uStack_468._0_1_ = (undefined1)((ulong)_DAT_0143934f >> 0x38);
  uStack_468._1_3_ = (undefined3)_UNK_01439357;
  uStack_464 = (undefined4)((ulong)_UNK_01439357 >> 0x18);
  uStack_460 = (undefined1)((ulong)_UNK_01439357 >> 0x38);
  uStack_45f = 0x74;
  uStack_428 = 0;
  uStack_420 = 0;
  lStack_438 = 0;
  lStack_430 = 0;
  lStack_448 = 0;
  lStack_440 = 0;
  lStack_458 = 0;
  lStack_450 = 0;
  lStack_418 = 0;
  func_0x048b1dc0(auStack_410);
  func_0x048b1dc0(auStack_400);
  uStack_360 = 0;
  lStack_358 = 0;
  lStack_370 = 0;
  uStack_368 = 0;
  lStack_380 = 0;
  lStack_378 = 0;
  lStack_390 = 0;
  lStack_388 = 0;
  uStack_3a0 = 0;
  lStack_398 = 0;
  lStack_3b0 = 0;
  uStack_3a8 = 0;
  puStack_3c0 = (undefined8 *)0x0;
  puStack_3b8 = (undefined8 *)0x0;
  lStack_3d0 = 0;
  lStack_3c8 = 0;
  lStack_3e0 = 0;
  lStack_3d8 = 0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  if ((uStack_428 & 1) == 0) {
    lStack_418 = CONCAT53(uStack_45d,CONCAT21(uStack_45f,uStack_460));
    uStack_428 = CONCAT44(uStack_46c,uStack_470);
    uStack_420 = CONCAT44(uStack_464,uStack_468);
  }
  else {
    func_0x04885120(&uStack_428,(long)&uStack_470 + 1,0x11);
  }
  lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar21 == 0) {
    func_0x048b0de0(&uStack_6f8,&uStack_858);
    _DAT_0f54fd90 = (undefined4)uStack_6f8;
    uRam000000000f54fd94 = uStack_6f8._4_4_;
    uVar9 = (undefined4)uStack_6f0;
    uVar26 = uStack_6f0._4_4_;
    uStack_6f8 = (undefined *)0x0;
    uStack_6f0 = (long *)0x0;
    plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar26;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_6f0;
    if (uStack_6f0 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_6f0 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_6f0 + 0x10))(uStack_6f0);
        func_0x0412c2d0(plVar15);
      }
    }
    lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  plStack_38 = param_1;
  if ((DAT_0f6722a0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6722a0), iVar11 != 0)) {
    func_0x0a648440();
    func_0x0410844d(&DAT_0f6722a0);
  }
  if ((DAT_0f6722a0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6722a0), iVar11 != 0)) {
    func_0x0a648440();
    func_0x0410844d(&DAT_0f6722a0);
  }
  uStack_6f8 = &DAT_0f672288;
  uStack_6f0 = (long *)CONCAT44(uStack_6f0._4_4_,_DAT_0f67228c);
  puStack_6e8 = (undefined *)0x0;
  uStack_6e0 = (undefined *)CONCAT44(uStack_6e0._4_4_,0x80);
  uStack_6d8 = (long *)0x70;
  pcStack_6d0 = (code *)&UNK_0a648380;
  auStack_6c8._0_8_ = 0;
  auStack_6c8._8_8_ = 0;
  puStack_6b8 = &UNK_0a6484c0;
  uStack_6b0 = 0;
  uStack_6a8._0_4_ = 0;
  uStack_6a8._4_4_ = 0;
  uStack_6a0 = 0;
  uStack_69c = 0;
  uStack_698 = 0;
  pcStack_690 = (code *)0x0;
  plStack_688 = (long *)0x0;
  alStack_680[0] = 0;
  FUN_048aee30(&uStack_858,lVar21,&uStack_6f8,0x79842ce3);
  lVar21 = alStack_680[0];
  alStack_680[0] = 0;
  if (lVar21 != 0) {
    func_0x048ae940(lVar21);
    thunk_FUN_0ee326a0(lVar21,0x78);
  }
  plVar15 = plStack_688;
  if (plStack_688 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_688 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_688 + 0x10))(plStack_688);
      func_0x0412c2d0(plVar15);
    }
  }
  if ((DAT_0f642200 == '\0') && (iVar11 = func_0x04108328(&DAT_0f642200), iVar11 != 0)) {
    func_0x099efc30(0xf6421e8);
    func_0x0410844d(&DAT_0f642200);
  }
  uStack_6f8._0_4_ = _DAT_0f6421ec;
  uStack_6f0 = (long *)&SUB_099efa50;
  plVar15 = uStack_6f0;
  puStack_6e8 = &UNK_0a648810;
  puVar27 = &UNK_0a648810;
  uStack_6f0._0_4_ = 0x99efa50;
  uVar9 = _DAT_0f6421ec;
  uVar26 = (undefined4)uStack_6f0;
  uStack_6f0 = plVar15;
  func_0x05da1460(&uStack_858);
  lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar21 == 0) {
    func_0x048b0de0(&uStack_6f8,&uStack_858);
    uRam000000000f54fd94 = uStack_6f8._4_4_;
    _DAT_0f54fd90 = (undefined4)uStack_6f8;
    uVar6 = (undefined4)uStack_6f0;
    uVar7 = uStack_6f0._4_4_;
    uStack_6f8._0_4_ = 0;
    uStack_6f8._4_4_ = 0;
    uStack_6f0 = (long *)0x0;
    plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar6;
    uRam000000000f54fd9c = uVar7;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_6f0;
    if (uStack_6f0 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_6f0 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_6f0 + 0x10))(uStack_6f0);
        func_0x0412c2d0(plVar15);
      }
    }
    lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f672358 == '\0') && (iVar11 = func_0x04108328(&DAT_0f672358), iVar11 != 0)) {
    func_0x0a648a00();
    func_0x0410844d(&DAT_0f672358);
  }
  if ((DAT_0f672358 == '\0') && (iVar11 = func_0x04108328(&DAT_0f672358), iVar11 != 0)) {
    func_0x0a648a00();
    func_0x0410844d(&DAT_0f672358);
  }
  uStack_6f8 = &DAT_0f672340;
  uStack_6f0 = (long *)CONCAT44(uStack_6f0._4_4_,_DAT_0f672344);
  puStack_6e8 = (undefined *)0x0;
  uStack_6e0 = (undefined *)CONCAT44(uStack_6e0._4_4_,0x280);
  uStack_6d8 = (long *)0x20;
  pcStack_6d0 = (code *)&UNK_0a648940;
  auStack_6c8._0_8_ = 0;
  auStack_6c8._8_8_ = 0;
  puStack_6b8 = &UNK_0a648a80;
  uStack_6b0 = 1;
  uStack_6a8._0_4_ = 0x65b1ed0;
  uStack_6a8._4_4_ = 0;
  uStack_6a0 = 0xa649110;
  uStack_69c = 0;
  uStack_698 = 0;
  pcStack_690 = (code *)0x0;
  plStack_688 = (long *)0x0;
  alStack_680[0] = 0;
  FUN_048aee30(&uStack_858,lVar21,&uStack_6f8,0xd8f069be,in_R8,in_R9,uVar9,uVar26,puVar27);
  lVar21 = alStack_680[0];
  alStack_680[0] = 0;
  if (lVar21 != 0) {
    func_0x048ae940(lVar21);
    thunk_FUN_0ee326a0(lVar21,0x78);
  }
  plVar15 = plStack_688;
  if (plStack_688 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_688 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_688 + 0x10))(plStack_688);
      func_0x0412c2d0(plVar15);
    }
  }
  if ((DAT_0f6784f0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6784f0), iVar11 != 0)) {
    func_0x0a63af90(0xf6784d8);
    func_0x0410844d(&DAT_0f6784f0);
  }
  func_0x065ac270(&uStack_858,_DAT_0f6784dc,&UNK_0a6491d0);
  lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar21 == 0) {
    func_0x048b0de0(&uStack_6f8,&uStack_858);
    _DAT_0f54fd90 = (undefined4)uStack_6f8;
    uRam000000000f54fd94 = uStack_6f8._4_4_;
    uVar9 = (undefined4)uStack_6f0;
    uVar26 = uStack_6f0._4_4_;
    uStack_6f8 = (undefined *)0x0;
    uStack_6f0 = (long *)0x0;
    plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar26;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_6f0;
    if (uStack_6f0 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_6f0 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_6f0 + 0x10))(uStack_6f0);
        func_0x0412c2d0(plVar15);
      }
    }
    lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f672410 == '\0') && (iVar11 = func_0x04108328(&DAT_0f672410), iVar11 != 0)) {
    func_0x0a6494b0();
    func_0x0410844d(&DAT_0f672410);
  }
  if ((DAT_0f672410 == '\0') && (iVar11 = func_0x04108328(&DAT_0f672410), iVar11 != 0)) {
    func_0x0a6494b0();
    func_0x0410844d(&DAT_0f672410);
  }
  uStack_6f8 = &DAT_0f6723f8;
  uStack_6f0 = (long *)CONCAT44(uStack_6f0._4_4_,_DAT_0f6723fc);
  puStack_6e8 = (undefined *)0x0;
  uStack_6e0 = (undefined *)CONCAT44(uStack_6e0._4_4_,0x280);
  uStack_6d8 = (long *)0x20;
  pcStack_6d0 = (code *)&UNK_0a6493f0;
  auStack_6c8._0_8_ = &UNK_0a649530;
  auStack_6c8._8_8_ = 0;
  puStack_6b8 = &UNK_0a649960;
  uStack_6b0 = 1;
  uStack_6a8._0_4_ = 0x65bd0c0;
  uStack_6a8._4_4_ = 0;
  uStack_6a0 = 0xa6499f0;
  uStack_69c = 0;
  uStack_698 = 0;
  pcStack_690 = (code *)0x0;
  plStack_688 = (long *)0x0;
  alStack_680[0] = 0;
  FUN_048aee30(&uStack_858,lVar21,&uStack_6f8,0x802781e3);
  lVar21 = alStack_680[0];
  alStack_680[0] = 0;
  if (lVar21 != 0) {
    func_0x048ae940(lVar21);
    thunk_FUN_0ee326a0(lVar21,0x78);
  }
  plVar15 = plStack_688;
  if (plStack_688 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_688 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_688 + 0x10))(plStack_688);
      func_0x0412c2d0(plVar15);
    }
  }
  if ((DAT_0f671a00 == '\0') && (iVar11 = func_0x04108328(&DAT_0f671a00), iVar11 != 0)) {
    func_0x0a63c180();
    func_0x0410844d(&DAT_0f671a00);
  }
  func_0x065ac270(&uStack_858,_DAT_0f6719ec,&UNK_0a649ab0);
  lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar21 == 0) {
    func_0x048b0de0(&uStack_6f8,&uStack_858);
    _DAT_0f54fd90 = (undefined4)uStack_6f8;
    uRam000000000f54fd94 = uStack_6f8._4_4_;
    uVar9 = (undefined4)uStack_6f0;
    uVar26 = uStack_6f0._4_4_;
    uStack_6f8 = (undefined *)0x0;
    uStack_6f0 = (long *)0x0;
    plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar26;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_6f0;
    if (uStack_6f0 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_6f0 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_6f0 + 0x10))(uStack_6f0);
        func_0x0412c2d0(plVar15);
      }
    }
    lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6724c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6724c8), iVar11 != 0)) {
    func_0x0a649d70();
    func_0x0410844d(&DAT_0f6724c8);
  }
  if ((DAT_0f6724c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6724c8), iVar11 != 0)) {
    func_0x0a649d70();
    func_0x0410844d(&DAT_0f6724c8);
  }
  uStack_6f8 = &DAT_0f6724b0;
  uStack_6f0 = (long *)CONCAT44(uStack_6f0._4_4_,_DAT_0f6724b4);
  puStack_6e8 = (undefined *)0x0;
  uStack_6e0 = (undefined *)CONCAT44(uStack_6e0._4_4_,0x280);
  uStack_6d8 = (long *)0x10;
  pcStack_6d0 = (code *)&UNK_0a649cb0;
  auStack_6c8._0_8_ = &UNK_0a649df0;
  auStack_6c8._8_8_ = 0;
  puStack_6b8 = &UNK_0a64a080;
  uStack_6b0 = 1;
  uStack_6a8._0_4_ = 0x65bc1f0;
  uStack_6a8._4_4_ = 0;
  uStack_6a0 = 0xa64a130;
  uStack_69c = 0;
  uStack_698 = 0;
  pcStack_690 = (code *)0x0;
  plStack_688 = (long *)0x0;
  alStack_680[0] = 0;
  FUN_048aee30(&uStack_858,lVar21,&uStack_6f8,0x36de4da3);
  lVar21 = alStack_680[0];
  alStack_680[0] = 0;
  if (lVar21 != 0) {
    func_0x048ae940(lVar21);
    thunk_FUN_0ee326a0(lVar21,0x78);
  }
  plVar15 = plStack_688;
  if (plStack_688 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_688 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_688 + 0x10))(plStack_688);
      func_0x0412c2d0(plVar15);
    }
  }
  if ((DAT_0f671b70 == '\0') && (iVar11 = func_0x04108328(&DAT_0f671b70), iVar11 != 0)) {
    func_0x0a63cf80();
    func_0x0410844d(&DAT_0f671b70);
  }
  func_0x065ac270(&uStack_858,_DAT_0f671b5c,&UNK_0a64a1f0);
  auStack_400 = func_0x099ef990();
  uStack_8f0 = 0x6e6f6310;
  uStack_8ec = 0x74;
  uStack_8eb = 0x6e65;
  uStack_8e9 = 0x74;
  uStack_8e8 = 0x73;
  uStack_8e7 = 0;
  uStack_858 = 0;
  uStack_854 = 0;
  uStack_853 = 0;
  uStack_851 = 0;
  uStack_850 = 0;
  uStack_84f = 0;
  uStack_84e = 0;
  uStack_84d = 0;
  uStack_84c = 0;
  pcStack_848 = (code *)0x0;
  func_0x048b1dc0(&puStack_840);
  func_0x0652b590(&uStack_830);
  if ((uStack_858 & 1) == 0) {
    if ((uStack_8f0 & 1) == 0) {
      pcStack_848 = (code *)puStack_8e0;
      uStack_858 = uStack_8f0;
      uStack_854 = uStack_8ec;
      uStack_853 = uStack_8eb;
      uStack_851 = uStack_8e9;
      uStack_850 = uStack_8e8;
      uStack_84f = uStack_8e7;
      uStack_84e = (undefined1)uStack_8e6;
      uStack_84d = (undefined1)((ushort)uStack_8e6 >> 8);
      uStack_84c = uStack_8e4;
    }
    else {
      func_0x04885070(&uStack_858,puStack_8e0,
                      CONCAT44(uStack_8e4,CONCAT22(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8))));
    }
  }
  else {
    bVar24 = (uStack_8f0 & 1) != 0;
    puVar27 = (undefined *)((long)&uStack_8f0 + 1);
    if (bVar24) {
      puVar27 = puStack_8e0;
    }
    uVar23 = (ulong)((byte)uStack_8f0 >> 1);
    if (bVar24) {
      uVar23 = CONCAT44(uStack_8e4,CONCAT22(uStack_8e6,CONCAT11(uStack_8e7,uStack_8e8)));
    }
    func_0x04885120(&uStack_858,puVar27,uVar23);
  }
  plVar15 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar15 == (long *)0x0) {
    func_0x048b0de0(&uStack_6f8,&uStack_348);
    _DAT_0f54fd90 = (undefined4)uStack_6f8;
    uRam000000000f54fd94 = uStack_6f8._4_4_;
    uVar9 = (undefined4)uStack_6f0;
    uVar26 = uStack_6f0._4_4_;
    uStack_6f8 = (undefined *)0x0;
    uStack_6f0 = (long *)0x0;
    plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar26;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_6f0;
    if (uStack_6f0 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_6f0 + 1;
      lVar21 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_6f0 + 0x10))(uStack_6f0);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f6725e8 == '\0') {
    iVar11 = func_0x04108328(&DAT_0f6725e8);
    if (iVar11 != 0) {
      func_0x0a64a300();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f672568,0xf53dab8);
      func_0x0410844d(&DAT_0f6725e8);
    }
  }
  plVar16 = (long *)(*plVar15 +
                    (ulong)((int)((ulong)(plVar15[1] - *plVar15) >> 3) - 1U &
                           *(uint *)(_DAT_0f672568 + 4)) * 8);
  do {
    lVar21 = *plVar16;
    if (lVar21 == -1) goto LAB_0a5ff1c0;
    plVar16 = (long *)(plVar15[3] + lVar21 * 0x18);
  } while (*(uint *)(plVar15[3] + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f672568 + 4));
  if (plVar16 == (long *)plVar15[4]) {
LAB_0a5ff1c0:
    puStack_840 = &DAT_0f672568;
  }
  else {
    puStack_840 = (undefined *)plVar16[2];
  }
  uStack_338 = 0;
  uStack_320 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  pcStack_2f8 = (code *)0x0;
  uStack_2f0 = 0;
  puStack_308 = (ulong *)0x0;
  pcStack_300 = (code *)0x0;
  lStack_318 = 0;
  lStack_310 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_330 = 0x746e6f4374657316;
  uStack_328 = 0x73746e65;
  plStack_838 = plVar15;
  func_0x06523ef0(&uStack_6f8,&uStack_830);
  uStack_938 = (byte *)0x0;
  uStack_930 = (byte *)0x0;
  pbStack_928 = (byte *)0x0;
  bStack_918 = (byte)&uStack_938;
  uStack_917 = (undefined7)((ulong)&uStack_938 >> 8);
  bStack_910 = 0;
  apbStack_710[0] = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (apbStack_710[0] == (byte *)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  pbStack_928 = apbStack_710[0] + 0x118;
  uStack_8d0 = SUB81(&pbStack_48,0);
  uStack_8cf = (undefined2)((ulong)&pbStack_48 >> 8);
  uStack_8cd = (undefined1)((ulong)&pbStack_48 >> 0x18);
  uStack_8cc = (undefined4)((ulong)&pbStack_48 >> 0x20);
  ppbStack_8c8 = apbStack_710;
  uStack_8c0 = uStack_8c0 & 0xffffff00;
  uStack_938 = apbStack_710[0];
  uStack_930 = apbStack_710[0];
  pbStack_48 = apbStack_710[0];
  uStack_8d8 = &uStack_938;
  func_0x06523ef0(apbStack_710[0],&uStack_6f8);
  uStack_930 = apbStack_710[0] + 0x118;
  if (pcStack_608 != (code *)0x0) {
    (*pcStack_608)(auStack_620);
  }
  if (pcStack_650 != (code *)0x0) {
    (*pcStack_650)(apcStack_668);
  }
  if (pcStack_690 != (code *)0x0) {
    (*pcStack_690)(&uStack_6a8);
  }
  if (pcStack_6d0 != (code *)0x0) {
    (*pcStack_6d0)(&puStack_6e8);
  }
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar12 + 8) = 0;
  *(undefined8 *)((long)pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f2322b8;
  uVar9 = func_0x0d858500(&uStack_938);
  plVar15 = (long *)((long)pcVar12 + 0x18);
  *(undefined1 *)((long)pcVar12 + 0x20) = 0;
  *(undefined4 *)((long)pcVar12 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar12 + 0x28) = 0;
  *(undefined8 *)((long)pcVar12 + 0x30) = 0;
  *(undefined8 *)((long)pcVar12 + 0x38) = 0;
  *(undefined8 *)((long)pcVar12 + 0x40) = 0;
  *(undefined **)((long)pcVar12 + 0x18) = &UNK_0f232308;
  *(undefined4 *)((long)pcVar12 + 0x48) = (undefined4)uStack_938;
  *(undefined4 *)((long)pcVar12 + 0x4c) = uStack_938._4_4_;
  *(undefined4 *)((long)pcVar12 + 0x50) = (undefined4)uStack_930;
  *(undefined4 *)((long)pcVar12 + 0x54) = uStack_930._4_4_;
  *(byte **)((long)pcVar12 + 0x58) = pbStack_928;
  uStack_938 = (byte *)0x0;
  uStack_930 = (byte *)0x0;
  pbStack_928 = (byte *)0x0;
  uVar9 = func_0x0d858620(plVar15);
  pcVar18 = pcStack_2f8;
  *(undefined4 *)((long)pcVar12 + 0x28) = uVar9;
  pcStack_300 = (code *)plVar15;
  if (pcStack_2f8 != (code *)0x0) {
    LOCK();
    plVar15 = (long *)((long)pcStack_2f8 + 8);
    lVar21 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *(long *)pcStack_2f8;
      pcStack_2f8 = pcVar12;
      (**(code **)(lVar21 + 0x10))(pcVar18);
      func_0x0412c2d0(pcVar18);
      pcVar12 = pcStack_2f8;
    }
  }
  pcStack_2f8 = pcVar12;
  func_0x094e1300(&bStack_918);
  uStack_6f8._0_4_ = 0xf55160ec;
  uStack_6f0 = (long *)0x0;
  puStack_6e8 = (undefined *)((ulong)puStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (undefined *)0x0;
  uStack_6d8 = (long *)&UNK_065b4120;
  pcStack_6d0 = (code *)&SUB_048b06d0;
  auStack_6c8._0_8_ = &UNK_094e1640;
  auStack_6c8._8_8_ = 0;
  puStack_6b8 = (undefined *)((ulong)puStack_6b8 & 0xffffffff00000000);
  uStack_6b0 = 0;
  uStack_6a8._0_4_ = 0;
  uStack_6a8._4_4_ = 0;
  func_0x049057f0(&bStack_918,&uStack_6f8);
  func_0x048aea50(&uStack_6f8);
  uStack_8c0 = uStack_900;
  uStack_8bc = uStack_8fc;
  uStack_8d8._0_4_ = (uint)CONCAT71(uStack_917,bStack_918);
  uStack_8d8._4_4_ = (undefined4)((uint7)uStack_917 >> 0x18);
  uStack_8d0 = bStack_910;
  uStack_8cd = (undefined1)uStack_90d;
  uStack_8cc = (undefined4)((uint5)uStack_90d >> 8);
  uStack_6f8 = (undefined *)CONCAT44(uStack_6f8._4_4_,0xf55160ec);
  uStack_6f0 = (long *)0x0;
  puStack_6e8 = (undefined *)CONCAT44(puStack_6e8._4_4_,1);
  uStack_6e0 = (undefined *)0x0;
  uStack_6d8 = (long *)&UNK_065b4120;
  pcStack_6d0 = (code *)&SUB_048b06d0;
  auStack_6c8._0_8_ = &UNK_094e19b0;
  auStack_6c8._8_8_ = 0;
  puStack_6b8 = (undefined *)((ulong)puStack_6b8 & 0xffffffff00000000);
  uStack_6b0 = 0;
  uStack_6a8._0_4_ = 0;
  uStack_6a8._4_4_ = 0;
  func_0x049057f0(&uStack_8d8,&uStack_6f8);
  func_0x048aea50(&uStack_6f8);
  func_0x094e13c0();
  func_0x094e11c0();
  func_0x094e3240();
  func_0x08e56bb0();
  func_0x08e56bb0();
  func_0x094e11c0();
  func_0x094e3240();
  func_0x08e56bb0();
  func_0x08e56bb0();
  puStack_6e8 = pcStack_848;
  uStack_6f8 = (undefined *)
               CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858)));
  uStack_6f0 = (long *)CONCAT44(uStack_84c,
                                CONCAT13(uStack_84d,
                                         CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
  uStack_858 = 0;
  uStack_854 = 0;
  uStack_853 = 0;
  uStack_851 = 0;
  uStack_850 = 0;
  uStack_84f = 0;
  uStack_84e = 0;
  uStack_84d = 0;
  uStack_84c = 0;
  pcStack_848 = (code *)0x0;
  uStack_6e0 = puStack_840;
  uStack_6d8 = plStack_838;
  func_0x065281f0(&pcStack_6d0,&uStack_830);
  uStack_8d8._0_4_ = 0;
  uStack_8d8._4_4_ = 0;
  uStack_8d0 = 0;
  uStack_8cf = 0;
  uStack_8cd = 0;
  uStack_8cc = 0;
  ppbStack_8c8 = (byte **)0x0;
  bStack_918 = (byte)&uStack_8d8;
  uStack_917 = (undefined7)((ulong)&uStack_8d8 >> 8);
  bStack_910 = 0;
  puVar13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar13 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  uStack_8d8._0_4_ = (uint)puVar13;
  uStack_8d8._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
  uStack_8d0 = SUB81(puVar13,0);
  uStack_8cf = (undefined2)((ulong)puVar13 >> 8);
  uStack_8cd = (undefined1)((ulong)puVar13 >> 0x18);
  puVar1 = puVar13 + 0x28;
  ppbStack_8c8 = (byte **)puVar1;
  if (((ulong)uStack_6f8 & 1) == 0) {
    puVar13[2] = (ulong)puStack_6e8;
    *puVar13 = (ulong)uStack_6f8;
    puVar13[1] = (ulong)uStack_6f0;
    uStack_8cc = uStack_8d8._4_4_;
  }
  else {
    uStack_8cc = uStack_8d8._4_4_;
    FUN_0412e5e0(puVar13,puStack_6e8,uStack_6f0);
  }
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_6e0;
  *(undefined4 *)((long)puVar13 + 0x1c) = uStack_6e0._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)uStack_6d8;
  *(undefined4 *)((long)puVar13 + 0x24) = uStack_6d8._4_4_;
  func_0x06523ef0(puVar13 + 5,&pcStack_6d0);
  uStack_8d0 = SUB81(puVar1,0);
  uStack_8cf = (undefined2)((ulong)puVar1 >> 8);
  uStack_8cd = (undefined1)((ulong)puVar1 >> 0x18);
  uStack_8cc = (undefined4)((ulong)puVar1 >> 0x20);
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(auStack_5f8);
  }
  if (pcStack_628 != (code *)0x0) {
    (*pcStack_628)(auStack_640);
  }
  if (apcStack_668[0] != (code *)0x0) {
    (*apcStack_668[0])(alStack_680);
  }
  if ((code *)CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8))(auStack_6c8 + 8);
  }
  if (((ulong)uStack_6f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_6e8,(ulong)uStack_6f8 & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*(long *)pcStack_300 + 0x20))();
  lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
  lVar17 = CONCAT44(uStack_8cc,CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0)));
  uVar19 = (lVar17 - lVar21 >> 6) * -0x3333333333333333;
  uVar23 = 0;
  if ((uVar10 != 0) && ((uint)uVar19 != 0)) {
    uVar20 = 0;
    uVar23 = 0;
    uStack_85c = uVar10;
    do {
      auVar25 = (**(code **)(*(long *)pcStack_300 + 0x28))(pcStack_300,uVar20);
      lVar22 = auVar25._8_8_;
      lVar17 = auVar25._0_8_;
      auVar25 = func_0x06527d70();
      if (auVar25._8_8_ != lVar22) {
LAB_0a5ff830:
        auVar25 = func_0x06527e30();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a5ffa26;
        }
        auVar25 = func_0x06527ef0();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a5ffa26;
        }
        auVar25 = func_0x06527fb0();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a5ffa26;
        }
        auVar25 = func_0x06528070();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a5ffa26;
        }
        auVar25 = func_0x06528130();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a5ffa26;
        }
        lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
        if (*(long *)(lVar21 + 0x20 + uVar23 * 0x140) != lVar22) goto LAB_0a5ffc32;
        lVar21 = *(long *)(uVar23 * 0x140 + lVar21 + 0x18);
        if (lVar21 == 0) {
          lVar21 = func_0x048aead0();
          iVar11 = *(int *)(lVar21 + 8);
          if (lVar17 != 0) goto LAB_0a5ff9f7;
LAB_0a5ffa0f:
          lVar21 = func_0x048aead0(lVar22);
          if (iVar11 == *(int *)(lVar21 + 8)) {
LAB_0a5ffa24:
            uVar23 = (ulong)((int)uVar23 + 1);
            goto LAB_0a5ffa26;
          }
        }
        else {
          iVar11 = *(int *)(lVar21 + 8);
          if (lVar17 == 0) goto LAB_0a5ffa0f;
LAB_0a5ff9f7:
          if (iVar11 == *(int *)(lVar17 + 8)) goto LAB_0a5ffa24;
        }
        lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
        goto LAB_0a5ffc2d;
      }
      if (auVar25._0_8_ == 0) {
        lVar21 = func_0x048aead0(auVar25._8_8_);
        iVar11 = *(int *)(lVar21 + 8);
        if (lVar17 != 0) goto LAB_0a5ff801;
LAB_0a5ff81e:
        lVar21 = func_0x048aead0(lVar22);
        if (iVar11 != *(int *)(lVar21 + 8)) goto LAB_0a5ff830;
      }
      else {
        iVar11 = *(int *)(auVar25._0_8_ + 8);
        if (lVar17 == 0) goto LAB_0a5ff81e;
LAB_0a5ff801:
        if (iVar11 != *(int *)(lVar17 + 8)) goto LAB_0a5ff830;
      }
LAB_0a5ffa26:
    } while (((uint)uVar23 < (uint)uVar19) && (uVar20 = uVar20 + 1, uVar20 < uStack_85c));
    lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
    lVar17 = CONCAT44(uStack_8cc,CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0)));
    uVar19 = (lVar17 - lVar21 >> 6) * -0x3333333333333333;
  }
  lVar22 = lStack_318;
  if (uVar19 == uVar23) {
    lVar3 = lStack_310;
    if (lStack_318 != 0) {
      while (lVar22 != lVar3) {
        func_0x05fe8450(lVar3 + -0x140);
        lVar3 = lVar3 + -0x140;
      }
      lStack_310 = lVar22;
      thunk_FUN_0ee326a0(lStack_318,(long)puStack_308 - lStack_318);
      lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
      lVar17 = CONCAT44(uStack_8cc,CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0)));
    }
    puStack_308 = (ulong *)ppbStack_8c8;
    if (puStack_3c0 < puStack_3b8) {
      *puStack_3c0 = 0;
      puStack_3c0[1] = 0;
      puStack_3c0[2] = 0;
      *puStack_3c0 = uStack_348;
      puStack_3c0[1] = uStack_340;
      puStack_3c0[2] = uStack_338;
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_338 = 0;
      puStack_3c0[5] = uStack_320;
      puStack_3c0[3] = uStack_330;
      puStack_3c0[4] = uStack_328;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      puStack_3c0[6] = 0;
      puStack_3c0[7] = 0;
      puStack_3c0[8] = 0;
      puStack_3c0[6] = lVar21;
      puStack_3c0[7] = lVar17;
      puStack_3c0[8] = ppbStack_8c8;
      lStack_318 = 0;
      lStack_310 = 0;
      puStack_308 = (ulong *)0x0;
      puStack_3c0[9] = pcStack_300;
      puStack_3c0[10] = pcStack_2f8;
      pcStack_300 = (code *)0x0;
      pcStack_2f8 = (code *)0x0;
      puStack_3c0[0xb] = 0;
      puStack_3c0[0xc] = 0;
      puStack_3c0[0xd] = 0;
      *(undefined4 *)(puStack_3c0 + 0xb) = (undefined4)uStack_2f0;
      *(undefined4 *)((long)puStack_3c0 + 0x5c) = uStack_2f0._4_4_;
      *(undefined4 *)(puStack_3c0 + 0xc) = (undefined4)uStack_2e8;
      *(undefined4 *)((long)puStack_3c0 + 100) = uStack_2e8._4_4_;
      puStack_3c0[0xd] = uStack_2e0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      puStack_3c0 = puStack_3c0 + 0xe;
    }
    else {
      lStack_318 = lVar21;
      lStack_310 = lVar17;
      puStack_3c0 = (undefined8 *)func_0x0652ac80(&lStack_3c8,&uStack_348);
    }
    puVar14 = puStack_3c0 + -0xe;
    uVar23 = (ulong)uStack_938;
  }
  else {
LAB_0a5ffc2d:
    if (lVar21 != 0) {
LAB_0a5ffc32:
      lVar22 = CONCAT44(uStack_8cc,CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0)));
      lVar17 = lVar21;
      if (lVar21 != lVar22) {
        do {
          lVar22 = lVar22 + -0x140;
          func_0x05fe8450(lVar22);
        } while (lVar22 != lVar21);
        lVar17 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
      }
      uStack_8d0 = (undefined1)lVar21;
      uStack_8cf = (undefined2)((ulong)lVar21 >> 8);
      uStack_8cd = (undefined1)((ulong)lVar21 >> 0x18);
      uStack_8cc = (undefined4)((ulong)lVar21 >> 0x20);
      thunk_FUN_0ee326a0(lVar17,(long)ppbStack_8c8 - lVar17);
    }
    puVar14 = (undefined8 *)0xf670de8;
    uVar23 = (ulong)uStack_938;
  }
  uStack_938 = (byte *)uVar23;
  if (uVar23 != 0) {
    if ((byte *)uVar23 != uStack_930) {
      lVar21 = (long)uStack_930 - 0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        uVar19 = lVar21 - 0xd8;
        lVar21 = lVar21 + -0x118;
      } while (uVar19 != uVar23);
    }
    uStack_930 = (byte *)uVar23;
    thunk_FUN_0ee326a0(uStack_938,(long)pbStack_928 - (long)uStack_938);
  }
  func_0x05f93280(&uStack_348);
  uStack_68 = _DAT_0f6421a8;
  uStack_64 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_50 = _DAT_0f6421c0;
    uStack_60 = _DAT_0f6421b0;
    uStack_5c = uRam000000000f6421b4;
    uStack_58 = _DAT_0f6421b8;
    uStack_54 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_60,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(puVar14,&uStack_68,0);
  if ((uStack_60 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_50,CONCAT44(uStack_5c,uStack_60) & 0xfffffffffffffffe);
  }
  if (pcStack_740 != (code *)0x0) {
    (*pcStack_740)(auStack_758);
  }
  if (pcStack_788 != (code *)0x0) {
    (*pcStack_788)(auStack_7a0);
  }
  if (pcStack_7c8 != (code *)0x0) {
    (*pcStack_7c8)(auStack_7e0);
  }
  if (pcStack_808 != (code *)0x0) {
    (*pcStack_808)(&uStack_820);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  if ((uStack_8f0 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_8e0,
                       CONCAT17(uStack_8e9,CONCAT25(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0))) &
                       0xfffffffffffffffe);
  }
  bStack_918 = 0x12;
  uStack_917 = 0x646e4965676170;
  bStack_910 = 0x65;
  uStack_90f = 0x78;
  func_0x065f98b0(&uStack_6f8,&bStack_918);
  uStack_938 = (byte *)0x746e65746e6f630e;
  uStack_930 = (byte *)((ulong)uStack_930 & 0xffffffffffffff00);
  func_0x0a604610(&uStack_858,&uStack_938);
  uStack_338 = 0;
  uStack_320 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  pcStack_2f8 = (code *)0x0;
  uStack_2f0 = 0;
  puStack_308 = (ulong *)0x0;
  pcStack_300 = (code *)0x0;
  lStack_318 = 0;
  lStack_310 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_330 = 0x656761507465731c;
  uStack_328 = 0x746e65746e6f43;
  func_0x0a64ec40(&uStack_8d8,&uStack_6f8,&uStack_858);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar12 + 8) = 0;
  *(undefined8 *)((long)pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f2323a8;
  uVar9 = func_0x0d858500(&uStack_8d8);
  puVar14 = (undefined8 *)((long)pcVar12 + 0x18);
  *(undefined1 *)((long)pcVar12 + 0x20) = 0;
  *(undefined4 *)((long)pcVar12 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar12 + 0x28) = 0;
  *(undefined8 *)((long)pcVar12 + 0x30) = 0;
  *(undefined8 *)((long)pcVar12 + 0x38) = 0;
  *(undefined8 *)((long)pcVar12 + 0x40) = 0;
  *(undefined **)((long)pcVar12 + 0x18) = &UNK_0f2323f8;
  *(uint *)((long)pcVar12 + 0x48) = (uint)uStack_8d8;
  *(undefined4 *)((long)pcVar12 + 0x4c) = uStack_8d8._4_4_;
  *(uint *)((long)pcVar12 + 0x50) = CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0));
  *(undefined4 *)((long)pcVar12 + 0x54) = uStack_8cc;
  *(byte ***)((long)pcVar12 + 0x58) = ppbStack_8c8;
  uStack_8d8._0_4_ = 0;
  uStack_8d8._4_4_ = 0;
  uStack_8d0 = 0;
  uStack_8cf = 0;
  uStack_8cd = 0;
  uStack_8cc = 0;
  ppbStack_8c8 = (byte **)0x0;
  uVar9 = func_0x0d858620(puVar14);
  pcVar18 = pcStack_2f8;
  *(undefined4 *)((long)pcVar12 + 0x28) = uVar9;
  pcStack_300 = (code *)puVar14;
  if (pcStack_2f8 != (code *)0x0) {
    LOCK();
    plVar15 = (long *)((long)pcStack_2f8 + 8);
    lVar21 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *(long *)pcStack_2f8;
      pcStack_2f8 = pcVar12;
      (**(code **)(lVar21 + 0x10))(pcVar18);
      func_0x0412c2d0(pcVar18);
      pcVar12 = pcStack_2f8;
    }
  }
  pcStack_2f8 = pcVar12;
  cVar8 = func_0x0a64ee70(&uStack_348,&uStack_6f8,&uStack_858);
  if (cVar8 == '\0') {
    puVar14 = (undefined8 *)0xf670de8;
    lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
  }
  else {
    if (puStack_3c0 < puStack_3b8) {
      *puStack_3c0 = 0;
      puStack_3c0[1] = 0;
      puStack_3c0[2] = 0;
      *puStack_3c0 = uStack_348;
      puStack_3c0[1] = uStack_340;
      puStack_3c0[2] = uStack_338;
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_338 = 0;
      puStack_3c0[5] = uStack_320;
      puStack_3c0[3] = uStack_330;
      puStack_3c0[4] = uStack_328;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      puStack_3c0[6] = 0;
      puStack_3c0[7] = 0;
      puStack_3c0[8] = 0;
      puStack_3c0[6] = lStack_318;
      puStack_3c0[7] = lStack_310;
      puStack_3c0[8] = puStack_308;
      lStack_318 = 0;
      lStack_310 = 0;
      puStack_308 = (ulong *)0x0;
      puStack_3c0[9] = pcStack_300;
      puStack_3c0[10] = pcStack_2f8;
      pcStack_300 = (code *)0x0;
      pcStack_2f8 = (code *)0x0;
      puStack_3c0[0xb] = 0;
      puStack_3c0[0xc] = 0;
      puStack_3c0[0xd] = 0;
      *(undefined4 *)(puStack_3c0 + 0xb) = (undefined4)uStack_2f0;
      *(undefined4 *)((long)puStack_3c0 + 0x5c) = uStack_2f0._4_4_;
      *(undefined4 *)(puStack_3c0 + 0xc) = (undefined4)uStack_2e8;
      *(undefined4 *)((long)puStack_3c0 + 100) = uStack_2e8._4_4_;
      puStack_3c0[0xd] = uStack_2e0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      puStack_3c0 = puStack_3c0 + 0xe;
    }
    else {
      puStack_3c0 = (undefined8 *)func_0x0652ac80(&lStack_3c8,&uStack_348);
    }
    puVar14 = puStack_3c0 + -0xe;
    lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
  }
  if (lVar21 != 0) {
    lVar22 = CONCAT44(uStack_8cc,CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0)));
    lVar17 = lVar21;
    if (lVar21 != lVar22) {
      lVar17 = lVar22 + -0x40;
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
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar21);
      lVar17 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
    }
    uStack_8d0 = (undefined1)lVar21;
    uStack_8cf = (undefined2)((ulong)lVar21 >> 8);
    uStack_8cd = (undefined1)((ulong)lVar21 >> 0x18);
    uStack_8cc = (undefined4)((ulong)lVar21 >> 0x20);
    thunk_FUN_0ee326a0(lVar17,(long)ppbStack_8c8 - lVar17);
  }
  func_0x05f93280(&uStack_348);
  uStack_88 = _DAT_0f6421a8;
  uStack_84 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_70 = _DAT_0f6421c0;
    uStack_80 = _DAT_0f6421b0;
    uStack_7c = uRam000000000f6421b4;
    uStack_78 = _DAT_0f6421b8;
    uStack_74 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_80,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(puVar14,&uStack_88,0);
  if ((uStack_80 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_70,CONCAT44(uStack_7c,uStack_80) & 0xfffffffffffffffe);
  }
  if (pcStack_740 != (code *)0x0) {
    (*pcStack_740)(auStack_758);
  }
  if (pcStack_788 != (code *)0x0) {
    (*pcStack_788)(auStack_7a0);
  }
  if (pcStack_7c8 != (code *)0x0) {
    (*pcStack_7c8)(auStack_7e0);
  }
  if (pcStack_808 != (code *)0x0) {
    (*pcStack_808)(&uStack_820);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  if (((ulong)uStack_938 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_928,(ulong)uStack_938 & 0xfffffffffffffffe);
  }
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(auStack_5f8);
  }
  if (pcStack_628 != (code *)0x0) {
    (*pcStack_628)(auStack_640);
  }
  if (apcStack_668[0] != (code *)0x0) {
    (*apcStack_668[0])(alStack_680);
  }
  if ((code *)CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8))(auStack_6c8 + 8);
  }
  if (((ulong)uStack_6f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_6e8,(ulong)uStack_6f8 & 0xfffffffffffffffe);
  }
  if ((bStack_918 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_908,CONCAT71(uStack_917,bStack_918) & 0xfffffffffffffffe);
  }
  bStack_918 = 0x12;
  uStack_917 = 0x646e4965676170;
  bStack_910 = 0x65;
  uStack_90f = 0x78;
  func_0x065f98b0(&uStack_6f8,&bStack_918);
  uStack_938 = (byte *)0x746e65746e6f630e;
  uStack_930 = (byte *)((ulong)uStack_930 & 0xffffffffffffff00);
  func_0x0a604610(&uStack_858,&uStack_938);
  uStack_338 = 0;
  uStack_320 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  pcStack_2f8 = (code *)0x0;
  uStack_2f0 = 0;
  puStack_308 = (ulong *)0x0;
  pcStack_300 = (code *)0x0;
  lStack_318 = 0;
  lStack_310 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_330 = 0x50747265736e6914;
  uStack_328 = 0x656761;
  func_0x0a64ec40(&uStack_8d8,&uStack_6f8,&uStack_858);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar12 + 8) = 0;
  *(undefined8 *)(pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f232488;
  uVar9 = func_0x0d858500(&uStack_8d8);
  pcVar18 = pcVar12 + 0x18;
  pcVar12[0x20] = (code)0x0;
  *(undefined4 *)(pcVar12 + 0x24) = uVar9;
  *(undefined4 *)(pcVar12 + 0x28) = 0;
  *(undefined8 *)(pcVar12 + 0x30) = 0;
  *(undefined8 *)(pcVar12 + 0x38) = 0;
  *(undefined8 *)(pcVar12 + 0x40) = 0;
  *(undefined **)(pcVar12 + 0x18) = &UNK_0f2324d8;
  *(uint *)(pcVar12 + 0x48) = (uint)uStack_8d8;
  *(undefined4 *)(pcVar12 + 0x4c) = uStack_8d8._4_4_;
  *(uint *)(pcVar12 + 0x50) = CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0));
  *(undefined4 *)(pcVar12 + 0x54) = uStack_8cc;
  *(byte ***)(pcVar12 + 0x58) = ppbStack_8c8;
  uStack_8d8._0_4_ = 0;
  uStack_8d8._4_4_ = 0;
  uStack_8d0 = 0;
  uStack_8cf = 0;
  uStack_8cd = 0;
  uStack_8cc = 0;
  ppbStack_8c8 = (byte **)0x0;
  uVar9 = func_0x0d858620(pcVar18);
  pcVar5 = pcStack_2f8;
  *(undefined4 *)(pcVar12 + 0x28) = uVar9;
  pcStack_300 = pcVar18;
  if (pcStack_2f8 != (code *)0x0) {
    LOCK();
    plVar15 = (long *)((long)pcStack_2f8 + 8);
    lVar21 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *(long *)pcStack_2f8;
      pcStack_2f8 = pcVar12;
      (**(code **)(lVar21 + 0x10))(pcVar5);
      func_0x0412c2d0(pcVar5);
      pcVar12 = pcStack_2f8;
    }
  }
  pcStack_2f8 = pcVar12;
  cVar8 = func_0x0a64ee70(&uStack_348,&uStack_6f8,&uStack_858);
  if (cVar8 == '\0') {
    puVar14 = (undefined8 *)0xf670de8;
    lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
  }
  else {
    if (puStack_3c0 < puStack_3b8) {
      *puStack_3c0 = 0;
      puStack_3c0[1] = 0;
      puStack_3c0[2] = 0;
      *puStack_3c0 = uStack_348;
      puStack_3c0[1] = uStack_340;
      puStack_3c0[2] = uStack_338;
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_338 = 0;
      puStack_3c0[5] = uStack_320;
      puStack_3c0[3] = uStack_330;
      puStack_3c0[4] = uStack_328;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      puStack_3c0[6] = 0;
      puStack_3c0[7] = 0;
      puStack_3c0[8] = 0;
      puStack_3c0[6] = lStack_318;
      puStack_3c0[7] = lStack_310;
      puStack_3c0[8] = puStack_308;
      lStack_318 = 0;
      lStack_310 = 0;
      puStack_308 = (ulong *)0x0;
      puStack_3c0[9] = pcStack_300;
      puStack_3c0[10] = pcStack_2f8;
      pcStack_300 = (code *)0x0;
      pcStack_2f8 = (code *)0x0;
      puStack_3c0[0xb] = 0;
      puStack_3c0[0xc] = 0;
      puStack_3c0[0xd] = 0;
      *(undefined4 *)(puStack_3c0 + 0xb) = (undefined4)uStack_2f0;
      *(undefined4 *)((long)puStack_3c0 + 0x5c) = uStack_2f0._4_4_;
      *(undefined4 *)(puStack_3c0 + 0xc) = (undefined4)uStack_2e8;
      *(undefined4 *)((long)puStack_3c0 + 100) = uStack_2e8._4_4_;
      puStack_3c0[0xd] = uStack_2e0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      puStack_3c0 = puStack_3c0 + 0xe;
    }
    else {
      puStack_3c0 = (undefined8 *)func_0x0652ac80(&lStack_3c8,&uStack_348);
    }
    puVar14 = puStack_3c0 + -0xe;
    lVar21 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
  }
  if (lVar21 != 0) {
    lVar22 = CONCAT44(uStack_8cc,CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0)));
    lVar17 = lVar21;
    if (lVar21 != lVar22) {
      lVar17 = lVar22 + -0x40;
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
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar21);
      lVar17 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
    }
    uStack_8d0 = (undefined1)lVar21;
    uStack_8cf = (undefined2)((ulong)lVar21 >> 8);
    uStack_8cd = (undefined1)((ulong)lVar21 >> 0x18);
    uStack_8cc = (undefined4)((ulong)lVar21 >> 0x20);
    thunk_FUN_0ee326a0(lVar17,(long)ppbStack_8c8 - lVar17);
  }
  func_0x05f93280(&uStack_348);
  uStack_a8 = _DAT_0f6421a8;
  uStack_a4 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_90 = _DAT_0f6421c0;
    uStack_a0 = _DAT_0f6421b0;
    uStack_9c = uRam000000000f6421b4;
    uStack_98 = _DAT_0f6421b8;
    uStack_94 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_a0,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(puVar14,&uStack_a8,0);
  if ((uStack_a0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_90,CONCAT44(uStack_9c,uStack_a0) & 0xfffffffffffffffe);
  }
  if (pcStack_740 != (code *)0x0) {
    (*pcStack_740)(auStack_758);
  }
  if (pcStack_788 != (code *)0x0) {
    (*pcStack_788)(auStack_7a0);
  }
  if (pcStack_7c8 != (code *)0x0) {
    (*pcStack_7c8)(auStack_7e0);
  }
  if (pcStack_808 != (code *)0x0) {
    (*pcStack_808)(&uStack_820);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  if (((ulong)uStack_938 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_928,(ulong)uStack_938 & 0xfffffffffffffffe);
  }
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(auStack_5f8);
  }
  if (pcStack_628 != (code *)0x0) {
    (*pcStack_628)(auStack_640);
  }
  if (apcStack_668[0] != (code *)0x0) {
    (*apcStack_668[0])(alStack_680);
  }
  if ((code *)CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8))(auStack_6c8 + 8);
  }
  if (((ulong)uStack_6f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_6e8,(ulong)uStack_6f8 & 0xfffffffffffffffe);
  }
  if ((bStack_918 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_908,CONCAT71(uStack_917,bStack_918) & 0xfffffffffffffffe);
  }
  uStack_8d8._0_4_ = 0x67617012;
  uStack_8d8._4_4_ = 0x646e4965;
  uStack_8d0 = 0x65;
  uStack_8cf = 0x78;
  func_0x065f98b0(&uStack_6f8,&uStack_8d8);
  pcStack_848 = (code *)0x0;
  uStack_830 = 0;
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  pcStack_808 = (code *)0x0;
  uStack_800 = 0;
  uStack_818 = 0;
  pcStack_810 = (code *)0x0;
  uStack_828 = 0;
  uStack_820 = 0;
  uStack_858 = 0;
  uStack_854 = 0;
  uStack_853 = 0;
  uStack_851 = 0;
  uStack_850 = 0;
  uStack_84f = 0;
  uStack_84e = 0;
  uStack_84d = 0;
  uStack_84c = 0;
  puStack_840 = (undefined *)0x5065766f6d657214;
  plStack_838 = (long *)0x656761;
  func_0x06c5e7c0(&uStack_348,&uStack_6f8);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar12 + 8) = 0;
  *(undefined8 *)((long)pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f232558;
  uVar9 = func_0x0d858500(&uStack_348);
  puVar14 = (undefined8 *)((long)pcVar12 + 0x18);
  *(undefined1 *)((long)pcVar12 + 0x20) = 0;
  *(undefined4 *)((long)pcVar12 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar12 + 0x28) = 0;
  *(undefined8 *)((long)pcVar12 + 0x30) = 0;
  *(undefined8 *)((long)pcVar12 + 0x38) = 0;
  *(undefined8 *)((long)pcVar12 + 0x40) = 0;
  *(undefined **)((long)pcVar12 + 0x18) = &UNK_0f2325a8;
  *(undefined4 *)((long)pcVar12 + 0x48) = (undefined4)uStack_348;
  *(undefined4 *)((long)pcVar12 + 0x4c) = uStack_348._4_4_;
  *(undefined4 *)((long)pcVar12 + 0x50) = (undefined4)uStack_340;
  *(undefined4 *)((long)pcVar12 + 0x54) = uStack_340._4_4_;
  *(ulong *)((long)pcVar12 + 0x58) = uStack_338;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  uVar9 = func_0x0d858620(puVar14);
  pcVar18 = pcStack_808;
  *(undefined4 *)((long)pcVar12 + 0x28) = uVar9;
  pcStack_810 = (code *)puVar14;
  if (pcStack_808 != (code *)0x0) {
    LOCK();
    plVar15 = (long *)((long)pcStack_808 + 8);
    lVar21 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *(long *)pcStack_808;
      pcStack_808 = pcVar12;
      (**(code **)(lVar21 + 0x10))(pcVar18);
      func_0x0412c2d0(pcVar18);
      pcVar12 = pcStack_808;
    }
  }
  pcStack_808 = pcVar12;
  cVar8 = func_0x06c5e940(&uStack_858,&uStack_6f8);
  if (cVar8 == '\0') {
    puVar14 = (undefined8 *)0xf670de8;
    lVar21 = uStack_348;
  }
  else {
    if (puStack_3c0 < puStack_3b8) {
      *puStack_3c0 = 0;
      puStack_3c0[1] = 0;
      puStack_3c0[2] = 0;
      *puStack_3c0 = CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858)));
      puStack_3c0[1] =
           CONCAT44(uStack_84c,
                    CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
      puStack_3c0[2] = pcStack_848;
      uStack_858 = 0;
      uStack_854 = 0;
      uStack_853 = 0;
      uStack_851 = 0;
      uStack_850 = 0;
      uStack_84f = 0;
      uStack_84e = 0;
      uStack_84d = 0;
      uStack_84c = 0;
      pcStack_848 = (code *)0x0;
      puStack_3c0[5] = uStack_830;
      puStack_3c0[3] = puStack_840;
      puStack_3c0[4] = plStack_838;
      puStack_840 = (undefined *)0x0;
      plStack_838 = (long *)0x0;
      uStack_830 = 0;
      puStack_3c0[6] = 0;
      puStack_3c0[7] = 0;
      puStack_3c0[8] = 0;
      puStack_3c0[6] = uStack_828;
      puStack_3c0[7] = uStack_820;
      puStack_3c0[8] = uStack_818;
      uStack_828 = 0;
      uStack_820 = 0;
      uStack_818 = 0;
      puStack_3c0[9] = pcStack_810;
      puStack_3c0[10] = pcStack_808;
      pcStack_810 = (code *)0x0;
      pcStack_808 = (code *)0x0;
      puStack_3c0[0xb] = 0;
      puStack_3c0[0xc] = 0;
      puStack_3c0[0xd] = 0;
      *(undefined4 *)(puStack_3c0 + 0xb) = (undefined4)uStack_800;
      *(undefined4 *)((long)puStack_3c0 + 0x5c) = uStack_800._4_4_;
      *(undefined4 *)(puStack_3c0 + 0xc) = (undefined4)uStack_7f8;
      *(undefined4 *)((long)puStack_3c0 + 100) = uStack_7f8._4_4_;
      puStack_3c0[0xd] = uStack_7f0;
      uStack_800 = 0;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      puStack_3c0 = puStack_3c0 + 0xe;
    }
    else {
      puStack_3c0 = (undefined8 *)func_0x0652ac80(&lStack_3c8,&uStack_858);
    }
    puVar14 = puStack_3c0 + -0xe;
    lVar21 = uStack_348;
  }
  uStack_348 = lVar21;
  if (lVar21 != 0) {
    if (lVar21 != uStack_340) {
      lVar17 = uStack_340 + -0x40;
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
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar21);
    }
    uStack_340 = lVar21;
    thunk_FUN_0ee326a0(uStack_348,uStack_338 - uStack_348);
  }
  func_0x05f93280(&uStack_858);
  uStack_c8 = _DAT_0f6421a8;
  uStack_c4 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_b0 = _DAT_0f6421c0;
    uStack_c0 = _DAT_0f6421b0;
    uStack_bc = uRam000000000f6421b4;
    uStack_b8 = _DAT_0f6421b8;
    uStack_b4 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_c0,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(puVar14,&uStack_c8,0);
  if ((uStack_c0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_b0,CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
  }
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(auStack_5f8);
  }
  if (pcStack_628 != (code *)0x0) {
    (*pcStack_628)(auStack_640);
  }
  if (apcStack_668[0] != (code *)0x0) {
    (*apcStack_668[0])(alStack_680);
  }
  if ((code *)CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_6a8._4_4_,(undefined4)uStack_6a8))(auStack_6c8 + 8);
  }
  if (((ulong)uStack_6f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_6e8,(ulong)uStack_6f8 & 0xfffffffffffffffe);
  }
  if (((uint)uStack_8d8 & 1) != 0) {
    thunk_FUN_0ee326a0(ppbStack_8c8,CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8) & 0xfffffffffffffffe
                      );
  }
  uStack_858 = 0x67617012;
  uStack_854 = 0x65;
  uStack_853 = 0x6f43;
  uStack_851 = 0x75;
  uStack_850 = 0x6e;
  uStack_84f = 0x74;
  uStack_84e = 0;
  func_0x065af670(&uStack_6f8);
  pcVar12 = (code *)((long)&uStack_858 + 1);
  if (((ulong)uStack_6e0 & 1) == 0) {
    if ((uStack_858 & 1) == 0) {
      pcStack_6d0 = pcStack_848;
      uStack_6e0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_851,CONCAT21(uStack_853,uStack_854)),uStack_858);
      uStack_6d8 = (long *)CONCAT44(uStack_84c,
                                    CONCAT13(uStack_84d,
                                             CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    else {
      func_0x04885070(&uStack_6e0,pcStack_848,
                      CONCAT44(uStack_84c,
                               CONCAT13(uStack_84d,
                                        CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850)))));
    }
  }
  else {
    bVar24 = (uStack_858 & 1) == 0;
    pcVar18 = pcStack_848;
    if (bVar24) {
      pcVar18 = pcVar12;
    }
    uVar23 = (ulong)((byte)uStack_858 >> 1);
    if (!bVar24) {
      uVar23 = CONCAT44(uStack_84c,
                        CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    func_0x04885120(&uStack_6e0,pcVar18,uVar23);
  }
  auStack_6c8 = func_0x0a646b50();
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f232638;
  uStack_6a8 = (code *)(puVar14 + 3);
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f232688;
  plVar15 = (long *)CONCAT44(uStack_69c,uStack_6a0);
  uStack_6a0 = SUB84(puVar14,0);
  uStack_69c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar15 == (long *)0x0) {
LAB_0a600fe1:
    if (uStack_3a8 < uStack_3a0) goto LAB_0a600ff3;
LAB_0a601030:
    uVar23 = func_0x065b01f0(&lStack_3b0,&uStack_6f8);
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0a600fe1;
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    if (uStack_3a0 <= uStack_3a8) goto LAB_0a601030;
LAB_0a600ff3:
    uVar23 = uStack_3a8;
    func_0x065b0410(uStack_3a8,&uStack_6f8);
    uVar23 = uVar23 + 0x1b0;
  }
  uStack_3a8 = uVar23;
  func_0x0652dc20(&uStack_6f8);
  uStack_e8 = _DAT_0f6421a8;
  uStack_e4 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_d0 = _DAT_0f6421c0;
    uStack_e0 = _DAT_0f6421b0;
    uStack_dc = uRam000000000f6421b4;
    uStack_d8 = _DAT_0f6421b8;
    uStack_d4 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_e0,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(uVar23 - 0x1b0,&uStack_e8,0);
  if ((uStack_e0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_d0,CONCAT44(uStack_dc,uStack_e0) & 0xfffffffffffffffe);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  uStack_858 = 0x6e6f6310;
  uStack_854 = 0x74;
  uStack_853 = 0x6e65;
  uStack_851 = 0x74;
  uStack_850 = 0x73;
  uStack_84f = 0;
  func_0x065af670(&uStack_6f8);
  if (((ulong)uStack_6e0 & 1) == 0) {
    if ((uStack_858 & 1) == 0) {
      pcStack_6d0 = pcStack_848;
      uStack_6e0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_851,CONCAT21(uStack_853,uStack_854)),uStack_858);
      uStack_6d8 = (long *)CONCAT44(uStack_84c,
                                    CONCAT13(uStack_84d,
                                             CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    else {
      func_0x04885070(&uStack_6e0,pcStack_848,
                      CONCAT44(uStack_84c,
                               CONCAT13(uStack_84d,
                                        CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850)))));
    }
  }
  else {
    bVar24 = (uStack_858 & 1) == 0;
    pcVar18 = pcStack_848;
    if (bVar24) {
      pcVar18 = pcVar12;
    }
    uVar23 = (ulong)((byte)uStack_858 >> 1);
    if (!bVar24) {
      uVar23 = CONCAT44(uStack_84c,
                        CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    func_0x04885120(&uStack_6e0,pcVar18,uVar23);
  }
  func_0x066baa80();
  func_0x066baa80();
  auVar25 = func_0x0a651db0();
  auStack_6c8 = auVar25;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f232708;
  uStack_6a8 = (code *)(puVar14 + 3);
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f232758;
  plVar15 = (long *)CONCAT44(uStack_69c,uStack_6a0);
  uStack_6a0 = SUB84(puVar14,0);
  uStack_69c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar15 == (long *)0x0) {
LAB_0a601255:
    if (uStack_3a8 < uStack_3a0) goto LAB_0a601267;
LAB_0a6012a4:
    uVar23 = func_0x065b01f0(&lStack_3b0,&uStack_6f8);
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0a601255;
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    if (uStack_3a0 <= uStack_3a8) goto LAB_0a6012a4;
LAB_0a601267:
    uVar23 = uStack_3a8;
    func_0x065b0410(uStack_3a8,&uStack_6f8);
    uVar23 = uVar23 + 0x1b0;
  }
  uStack_3a8 = uVar23;
  func_0x0652dc20(&uStack_6f8);
  uStack_108 = _DAT_0f6421a8;
  uStack_104 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_f0 = _DAT_0f6421c0;
    uStack_100 = _DAT_0f6421b0;
    uStack_fc = uRam000000000f6421b4;
    uStack_f8 = _DAT_0f6421b8;
    uStack_f4 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_100,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(uVar23 - 0x1b0,&uStack_108,0);
  if ((uStack_100 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_f0,CONCAT44(uStack_fc,uStack_100) & 0xfffffffffffffffe);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  uStack_858 = 0x77617216;
  uStack_854 = 0x43;
  uStack_853 = 0x6e6f;
  uStack_851 = 0x74;
  uStack_850 = 0x65;
  uStack_84f = 0x6e;
  uStack_84e = 0x74;
  uStack_84d = 0x73;
  uStack_84c = uStack_84c & 0xffffff00;
  func_0x065af670(&uStack_6f8);
  if (((ulong)uStack_6e0 & 1) == 0) {
    if ((uStack_858 & 1) == 0) {
      pcStack_6d0 = pcStack_848;
      uStack_6e0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_851,CONCAT21(uStack_853,uStack_854)),uStack_858);
      uStack_6d8 = (long *)CONCAT44(uStack_84c,
                                    CONCAT13(uStack_84d,
                                             CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    else {
      func_0x04885070(&uStack_6e0,pcStack_848,
                      CONCAT44(uStack_84c,
                               CONCAT13(uStack_84d,
                                        CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850)))));
    }
  }
  else {
    bVar24 = (uStack_858 & 1) == 0;
    pcVar18 = pcStack_848;
    if (bVar24) {
      pcVar18 = pcVar12;
    }
    uVar23 = (ulong)((byte)uStack_858 >> 1);
    if (!bVar24) {
      uVar23 = CONCAT44(uStack_84c,
                        CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    func_0x04885120(&uStack_6e0,pcVar18,uVar23);
  }
  func_0x0a654fa0();
  func_0x0a654fa0();
  auVar25 = func_0x0a6567e0();
  auStack_6c8 = auVar25;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f2327d8;
  uStack_6a8 = (code *)(puVar14 + 3);
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f232828;
  plVar15 = (long *)CONCAT44(uStack_69c,uStack_6a0);
  uStack_6a0 = SUB84(puVar14,0);
  uStack_69c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar15 == (long *)0x0) {
LAB_0a6014d4:
    if (uStack_3a8 < uStack_3a0) goto LAB_0a6014e6;
LAB_0a601523:
    uVar23 = func_0x065b01f0(&lStack_3b0,&uStack_6f8);
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0a6014d4;
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    if (uStack_3a0 <= uStack_3a8) goto LAB_0a601523;
LAB_0a6014e6:
    uVar23 = uStack_3a8;
    func_0x065b0410(uStack_3a8,&uStack_6f8);
    uVar23 = uVar23 + 0x1b0;
  }
  uStack_3a8 = uVar23;
  func_0x0652dc20(&uStack_6f8);
  uStack_128 = _DAT_0f6421a8;
  uStack_124 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_110 = _DAT_0f6421c0;
    uStack_120 = _DAT_0f6421b0;
    uStack_11c = uRam000000000f6421b4;
    uStack_118 = _DAT_0f6421b8;
    uStack_114 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_120,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(uVar23 - 0x1b0,&uStack_128,0);
  if ((uStack_120 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_110,CONCAT44(uStack_11c,uStack_120) & 0xfffffffffffffffe);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  uStack_8d8._0_4_ = 0x67617012;
  uStack_8d8._4_4_ = 0x646e4965;
  uStack_8d0 = 0x65;
  uStack_8cf = 0x78;
  func_0x065f98b0(&uStack_6f8,&uStack_8d8);
  pcStack_848 = (code *)0x0;
  uStack_830 = 0;
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  pcStack_808 = (code *)0x0;
  uStack_800 = 0;
  uStack_818 = 0;
  pcStack_810 = (code *)0x0;
  uStack_828 = 0;
  uStack_820 = 0;
  uStack_858 = 0;
  uStack_854 = 0;
  uStack_853 = 0;
  uStack_851 = 0;
  uStack_850 = 0;
  uStack_84f = 0;
  uStack_84e = 0;
  uStack_84d = 0;
  uStack_84c = 0;
  puStack_840 = (undefined *)0x656761507465671c;
  plStack_838 = (long *)0x746e65746e6f43;
  func_0x06c5e7c0(&uStack_348,&uStack_6f8);
  func_0x066baa80();
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar12 + 8) = 0;
  *(undefined8 *)((long)pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f232888;
  uVar9 = func_0x0d858500(&uStack_348);
  puVar14 = (undefined8 *)((long)pcVar12 + 0x18);
  *(undefined1 *)((long)pcVar12 + 0x20) = 1;
  *(undefined4 *)((long)pcVar12 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar12 + 0x28) = 0;
  *(undefined8 *)((long)pcVar12 + 0x30) = 0;
  *(undefined8 *)((long)pcVar12 + 0x38) = 0;
  *(undefined8 *)((long)pcVar12 + 0x40) = 0;
  *(undefined **)((long)pcVar12 + 0x18) = &UNK_0f2328d8;
  *(undefined4 *)((long)pcVar12 + 0x48) = (undefined4)uStack_348;
  *(undefined4 *)((long)pcVar12 + 0x4c) = uStack_348._4_4_;
  *(undefined4 *)((long)pcVar12 + 0x50) = (undefined4)uStack_340;
  *(undefined4 *)((long)pcVar12 + 0x54) = uStack_340._4_4_;
  *(ulong *)((long)pcVar12 + 0x58) = uStack_338;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  uVar9 = func_0x0d858620(puVar14);
  pcVar18 = pcStack_808;
  *(undefined4 *)((long)pcVar12 + 0x28) = uVar9;
  pcStack_810 = (code *)puVar14;
  if (pcStack_808 != (code *)0x0) {
    LOCK();
    plVar15 = (long *)((long)pcStack_808 + 8);
    lVar21 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *(long *)pcStack_808;
      pcStack_808 = pcVar12;
      (**(code **)(lVar21 + 0x10))(pcVar18);
      func_0x0412c2d0(pcVar18);
      pcVar12 = pcStack_808;
    }
  }
  pcStack_808 = pcVar12;
  cVar8 = func_0x06c5e940(&uStack_858,&uStack_6f8);
  if (cVar8 == '\0') {
    puVar14 = (undefined8 *)0xf670de8;
    lVar21 = uStack_348;
  }
  else {
    if (puStack_3c0 < puStack_3b8) {
      *puStack_3c0 = 0;
      puStack_3c0[1] = 0;
      puStack_3c0[2] = 0;
      *puStack_3c0 = CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858)));
      puStack_3c0[1] =
           CONCAT44(uStack_84c,
                    CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
      puStack_3c0[2] = pcStack_848;
      uStack_858 = 0;
      uStack_854 = 0;
      uStack_853 = 0;
      uStack_851 = 0;
      uStack_850 = 0;
      uStack_84f = 0;
      uStack_84e = 0;
      uStack_84d = 0;
      uStack_84c = 0;
      pcStack_848 = (code *)0x0;
      puStack_3c0[5] = uStack_830;
      puStack_3c0[3] = puStack_840;
      puStack_3c0[4] = plStack_838;
      puStack_840 = (undefined *)0x0;
      plStack_838 = (long *)0x0;
      uStack_830 = 0;
      puStack_3c0[6] = 0;
      puStack_3c0[7] = 0;
      puStack_3c0[8] = 0;
      puStack_3c0[6] = uStack_828;
      puStack_3c0[7] = uStack_820;
      puStack_3c0[8] = uStack_818;
      uStack_828 = 0;
      uStack_820 = 0;
      uStack_818 = 0;
      puStack_3c0[9] = pcStack_810;
      puStack_3c0[10] = pcStack_808;
      pcStack_810 = (code *)0x0;
      pcStack_808 = (code *)0x0;
      puStack_3c0[0xb] = 0;
      puStack_3c0[0xc] = 0;
      puStack_3c0[0xd] = 0;
      *(undefined4 *)(puStack_3c0 + 0xb) = (undefined4)uStack_800;
      *(undefined4 *)((long)puStack_3c0 + 0x5c) = uStack_800._4_4_;
      *(undefined4 *)(puStack_3c0 + 0xc) = (undefined4)uStack_7f8;
      *(undefined4 *)((long)puStack_3c0 + 100) = uStack_7f8._4_4_;
      puStack_3c0[0xd] = uStack_7f0;
      uStack_800 = 0;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      puStack_3c0 = puStack_3c0 + 0xe;
    }
    else {
      puStack_3c0 = (undefined8 *)func_0x0652ac80(&lStack_3c8,&uStack_858);
    }
    puVar14 = puStack_3c0 + -0xe;
    lVar21 = uStack_348;
  }
  uStack_348 = lVar21;
  if (lVar21 != 0) {
    if (lVar21 != uStack_340) {
      lVar17 = uStack_340 + -0x40;
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
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar21);
    }
    uStack_340 = lVar21;
    thunk_FUN_0ee326a0(uStack_348,uStack_338 - uStack_348);
  }
  func_0x05f93280(&uStack_858);
  uStack_148 = _DAT_0f6421a8;
  uStack_144 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_130 = _DAT_0f6421c0;
    uStack_140 = _DAT_0f6421b0;
    uStack_13c = uRam000000000f6421b4;
    uStack_138 = _DAT_0f6421b8;
    uStack_134 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_140,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(puVar14,&uStack_148,0);
  if ((uStack_140 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_130,CONCAT44(uStack_13c,uStack_140) & 0xfffffffffffffffe);
  }
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(auStack_5f8);
  }
  if (pcStack_628 != (code *)0x0) {
    (*pcStack_628)(auStack_640);
  }
  if (apcStack_668[0] != (code *)0x0) {
    (*apcStack_668[0])(alStack_680);
  }
  if (uStack_6a8 != (code *)0x0) {
    (*uStack_6a8)(auStack_6c8 + 8);
  }
  if (((ulong)uStack_6f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_6e8,(ulong)uStack_6f8 & 0xfffffffffffffffe);
  }
  if (((uint)uStack_8d8 & 1) != 0) {
    thunk_FUN_0ee326a0(ppbStack_8c8,CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8) & 0xfffffffffffffffe
                      );
  }
  uStack_8d8._0_4_ = 0x67617012;
  uStack_8d8._4_4_ = 0x646e4965;
  uStack_8d0 = 0x65;
  uStack_8cf = 0x78;
  func_0x065f98b0(&uStack_6f8,&uStack_8d8);
  pcStack_848 = (code *)0x0;
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  pcStack_808 = (code *)0x0;
  uStack_800 = 0;
  uStack_818 = 0;
  pcStack_810 = (code *)0x0;
  uStack_828 = 0;
  uStack_820 = 0;
  uStack_858 = 0;
  uStack_854 = 0;
  uStack_853 = 0;
  uStack_851 = 0;
  uStack_850 = 0;
  uStack_84f = 0;
  uStack_84e = 0;
  uStack_84d = 0;
  uStack_84c = 0;
  puStack_840 = (undefined *)0x5077615274656722;
  plStack_838 = (long *)0x65746e6f43656761;
  uStack_830 = 0x746e;
  func_0x06c5e7c0(&uStack_348,&uStack_6f8);
  func_0x0a654fa0();
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar12 + 8) = 0;
  *(undefined8 *)(pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f232968;
  uVar9 = func_0x0d858500(&uStack_348);
  pcVar18 = pcVar12 + 0x18;
  pcVar12[0x20] = (code)0x1;
  *(undefined4 *)(pcVar12 + 0x24) = uVar9;
  *(undefined4 *)(pcVar12 + 0x28) = 0;
  *(undefined8 *)(pcVar12 + 0x30) = 0;
  *(undefined8 *)(pcVar12 + 0x38) = 0;
  *(undefined8 *)(pcVar12 + 0x40) = 0;
  *(undefined **)(pcVar12 + 0x18) = &UNK_0f2329b8;
  *(undefined4 *)(pcVar12 + 0x48) = (undefined4)uStack_348;
  *(undefined4 *)(pcVar12 + 0x4c) = uStack_348._4_4_;
  *(undefined4 *)(pcVar12 + 0x50) = (undefined4)uStack_340;
  *(undefined4 *)(pcVar12 + 0x54) = uStack_340._4_4_;
  *(ulong *)(pcVar12 + 0x58) = uStack_338;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  uVar9 = func_0x0d858620(pcVar18);
  pcVar5 = pcStack_808;
  *(undefined4 *)(pcVar12 + 0x28) = uVar9;
  pcStack_810 = pcVar18;
  if (pcStack_808 != (code *)0x0) {
    LOCK();
    plVar15 = (long *)((long)pcStack_808 + 8);
    lVar21 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *(long *)pcStack_808;
      pcStack_808 = pcVar12;
      (**(code **)(lVar21 + 0x10))(pcVar5);
      func_0x0412c2d0(pcVar5);
      pcVar12 = pcStack_808;
    }
  }
  pcStack_808 = pcVar12;
  cVar8 = func_0x06c5e940(&uStack_858,&uStack_6f8);
  if (cVar8 == '\0') {
    puVar14 = (undefined8 *)0xf670de8;
    uVar23 = uStack_348;
  }
  else {
    if (puStack_3c0 < puStack_3b8) {
      *puStack_3c0 = 0;
      puStack_3c0[1] = 0;
      puStack_3c0[2] = 0;
      *puStack_3c0 = CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858)));
      puStack_3c0[1] =
           CONCAT44(uStack_84c,
                    CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
      puStack_3c0[2] = pcStack_848;
      uStack_858 = 0;
      uStack_854 = 0;
      uStack_853 = 0;
      uStack_851 = 0;
      uStack_850 = 0;
      uStack_84f = 0;
      uStack_84e = 0;
      uStack_84d = 0;
      uStack_84c = 0;
      pcStack_848 = (code *)0x0;
      puStack_3c0[5] = uStack_830;
      puStack_3c0[3] = puStack_840;
      puStack_3c0[4] = plStack_838;
      puStack_840 = (undefined *)0x0;
      plStack_838 = (long *)0x0;
      uStack_830 = 0;
      puStack_3c0[6] = 0;
      puStack_3c0[7] = 0;
      puStack_3c0[8] = 0;
      puStack_3c0[6] = uStack_828;
      puStack_3c0[7] = uStack_820;
      puStack_3c0[8] = uStack_818;
      uStack_828 = 0;
      uStack_820 = 0;
      uStack_818 = 0;
      puStack_3c0[9] = pcStack_810;
      puStack_3c0[10] = pcStack_808;
      pcStack_810 = (code *)0x0;
      pcStack_808 = (code *)0x0;
      puStack_3c0[0xb] = 0;
      puStack_3c0[0xc] = 0;
      puStack_3c0[0xd] = 0;
      *(undefined4 *)(puStack_3c0 + 0xb) = (undefined4)uStack_800;
      *(undefined4 *)((long)puStack_3c0 + 0x5c) = uStack_800._4_4_;
      *(undefined4 *)(puStack_3c0 + 0xc) = (undefined4)uStack_7f8;
      *(undefined4 *)((long)puStack_3c0 + 100) = uStack_7f8._4_4_;
      puStack_3c0[0xd] = uStack_7f0;
      uStack_800 = 0;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      puStack_3c0 = puStack_3c0 + 0xe;
    }
    else {
      puStack_3c0 = (undefined8 *)func_0x0652ac80(&lStack_3c8,&uStack_858);
    }
    puVar14 = puStack_3c0 + -0xe;
    uVar23 = uStack_348;
  }
  uStack_348 = uVar23;
  if (uVar23 != 0) {
    if (uVar23 != uStack_340) {
      lVar21 = uStack_340 - 0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        uVar19 = lVar21 - 0xd8;
        lVar21 = lVar21 + -0x118;
      } while (uVar19 != uVar23);
    }
    uStack_340 = uVar23;
    thunk_FUN_0ee326a0(uStack_348,uStack_338 - uStack_348);
  }
  func_0x05f93280(&uStack_858);
  uStack_168 = _DAT_0f6421a8;
  uStack_164 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_150 = _DAT_0f6421c0;
    uStack_160 = _DAT_0f6421b0;
    uStack_15c = uRam000000000f6421b4;
    uStack_158 = _DAT_0f6421b8;
    uStack_154 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_160,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(puVar14,&uStack_168,0);
  if ((uStack_160 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_150,CONCAT44(uStack_15c,uStack_160) & 0xfffffffffffffffe);
  }
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(auStack_5f8);
  }
  if (pcStack_628 != (code *)0x0) {
    (*pcStack_628)(auStack_640);
  }
  if (apcStack_668[0] != (code *)0x0) {
    (*apcStack_668[0])(alStack_680);
  }
  if (uStack_6a8 != (code *)0x0) {
    (*uStack_6a8)(auStack_6c8 + 8);
  }
  if (((ulong)uStack_6f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_6e8,(ulong)uStack_6f8 & 0xfffffffffffffffe);
  }
  if (((uint)uStack_8d8 & 1) != 0) {
    thunk_FUN_0ee326a0(ppbStack_8c8,CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8) & 0xfffffffffffffffe
                      );
  }
  uStack_8f0 = 0x7469740a;
  uStack_8ec = 0x6c;
  uStack_8eb = 0x65;
  func_0x0665b2c0(&uStack_858,&uStack_8f0);
  apbStack_710[0] = (byte *)0x726f687475610c;
  func_0x0665b2c0(&uStack_348,apbStack_710);
  ppbStack_8c8 = (byte **)0x0;
  uStack_8b7 = 0;
  uStack_8b0 = 0;
  uStack_878 = 0;
  uStack_870 = 0;
  plStack_888 = (long *)0x0;
  uStack_880 = 0;
  puStack_898 = (ulong *)0x0;
  plStack_890 = (long *)0x0;
  lStack_8a8 = 0;
  lStack_8a0 = 0;
  uStack_8d8._0_4_ = 0;
  uStack_8d8._4_4_ = 0;
  uStack_8d0 = 0;
  uStack_8cf = 0;
  uStack_8cd = 0;
  uStack_8cc = 0;
  uStack_8c0 = 0x67697310;
  uStack_8bc = 0x6f6f426e;
  uStack_8b8 = 0x6b;
  func_0x066ca8e0(&uStack_938,&uStack_858,&uStack_348);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f232a48;
  uVar9 = func_0x0d858500(&uStack_938);
  plVar16 = plVar15 + 3;
  *(undefined1 *)(plVar15 + 4) = 0;
  *(undefined4 *)((long)plVar15 + 0x24) = uVar9;
  *(undefined4 *)(plVar15 + 5) = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[3] = (long)&UNK_0f232a98;
  *(undefined4 *)(plVar15 + 9) = (undefined4)uStack_938;
  *(undefined4 *)((long)plVar15 + 0x4c) = uStack_938._4_4_;
  *(undefined4 *)(plVar15 + 10) = (undefined4)uStack_930;
  *(undefined4 *)((long)plVar15 + 0x54) = uStack_930._4_4_;
  plVar15[0xb] = (long)pbStack_928;
  uStack_938 = (byte *)0x0;
  uStack_930 = (byte *)0x0;
  pbStack_928 = (byte *)0x0;
  uVar9 = func_0x0d858620(plVar16);
  plVar4 = plStack_888;
  *(undefined4 *)(plVar15 + 5) = uVar9;
  plStack_890 = plVar16;
  if (plStack_888 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_888 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *plStack_888;
      plStack_888 = plVar15;
      (**(code **)(lVar21 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
      plVar15 = plStack_888;
    }
  }
  plStack_888 = plVar15;
  puStack_6e8 = pcStack_848;
  uStack_6f8 = (undefined *)
               CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858)));
  uStack_6f0 = (long *)CONCAT44(uStack_84c,
                                CONCAT13(uStack_84d,
                                         CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
  uStack_858 = 0;
  uStack_854 = 0;
  uStack_853 = 0;
  uStack_851 = 0;
  uStack_850 = 0;
  uStack_84f = 0;
  uStack_84e = 0;
  uStack_84d = 0;
  uStack_84c = 0;
  pcStack_848 = (code *)0x0;
  uStack_6e0 = puStack_840;
  uStack_6d8 = plStack_838;
  func_0x065281f0(&pcStack_6d0,&uStack_830);
  uStack_5a8 = uStack_338;
  uStack_5b8 = uStack_348;
  uStack_5b0 = uStack_340;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_5a0 = (undefined4)uStack_330;
  uStack_59c = uStack_330._4_4_;
  uStack_598 = (undefined4)uStack_328;
  uStack_594 = uStack_328._4_4_;
  func_0x065281f0(auStack_590,&uStack_320);
  bStack_918 = 0;
  uStack_917 = 0;
  bStack_910 = 0;
  uStack_90f = 0;
  uStack_90d = 0;
  puStack_908 = (ulong *)0x0;
  pbStack_48 = &bStack_918;
  uStack_40 = 0;
  puVar13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar13 == (ulong *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  bStack_918 = (byte)puVar13;
  uStack_917 = (undefined7)((ulong)puVar13 >> 8);
  uStack_90f = (undefined2)((ulong)puVar13 >> 8);
  uStack_90d = (undefined5)((ulong)puVar13 >> 0x18);
  puVar1 = puVar13 + 0x50;
  bStack_910 = bStack_918;
  puStack_908 = puVar1;
  if (((ulong)uStack_6f8 & 1) == 0) {
    puVar13[2] = (ulong)puStack_6e8;
    *puVar13 = (ulong)uStack_6f8;
    puVar13[1] = (ulong)uStack_6f0;
  }
  else {
    FUN_0412e5e0(puVar13,puStack_6e8,uStack_6f0);
  }
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_6e0;
  *(undefined4 *)((long)puVar13 + 0x1c) = uStack_6e0._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)uStack_6d8;
  *(undefined4 *)((long)puVar13 + 0x24) = uStack_6d8._4_4_;
  func_0x06523ef0(puVar13 + 5,&pcStack_6d0);
  if ((uStack_5b8 & 1) == 0) {
    puVar13[0x2a] = uStack_5a8;
    puVar13[0x28] = uStack_5b8;
    puVar13[0x29] = uStack_5b0;
  }
  else {
    FUN_0412e5e0(puVar13 + 0x28,uStack_5a8,uStack_5b0);
  }
  *(undefined4 *)(puVar13 + 0x2b) = uStack_5a0;
  *(undefined4 *)((long)puVar13 + 0x15c) = uStack_59c;
  *(undefined4 *)(puVar13 + 0x2c) = uStack_598;
  *(undefined4 *)((long)puVar13 + 0x164) = uStack_594;
  func_0x06523ef0(puVar13 + 0x2d,auStack_590);
  bStack_910 = (byte)puVar1;
  uStack_90f = (undefined2)((ulong)puVar1 >> 8);
  uStack_90d = (undefined5)((ulong)puVar1 >> 0x18);
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(auStack_4b8);
  }
  if (pcStack_4e8 != (code *)0x0) {
    (*pcStack_4e8)(auStack_500);
  }
  if (pcStack_528 != (code *)0x0) {
    (*pcStack_528)(auStack_540);
  }
  if (pcStack_568 != (code *)0x0) {
    (*pcStack_568)(auStack_580);
  }
  if ((uStack_5b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_5a8,uStack_5b8 & 0xfffffffffffffffe);
  }
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(auStack_5f8);
  }
  if (pcStack_628 != (code *)0x0) {
    (*pcStack_628)(auStack_640);
  }
  if (apcStack_668[0] != (code *)0x0) {
    (*apcStack_668[0])(alStack_680);
  }
  if (uStack_6a8 != (code *)0x0) {
    (*uStack_6a8)(auStack_6c8 + 8);
  }
  if (((ulong)uStack_6f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_6e8,(ulong)uStack_6f8 & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_890 + 0x20))();
  lVar21 = CONCAT71(uStack_917,bStack_918);
  lVar17 = CONCAT53(uStack_90d,CONCAT21(uStack_90f,bStack_910));
  uVar19 = (lVar17 - lVar21 >> 6) * -0x3333333333333333;
  uVar23 = 0;
  if ((uVar10 != 0) && ((uint)uVar19 != 0)) {
    uVar20 = 0;
    uVar23 = 0;
    uStack_85c = uVar10;
    do {
      auVar25 = (**(code **)(*plStack_890 + 0x28))(plStack_890,uVar20);
      lVar22 = auVar25._8_8_;
      lVar17 = auVar25._0_8_;
      auVar25 = func_0x06527d70();
      if (auVar25._8_8_ != lVar22) {
LAB_0a602520:
        auVar25 = func_0x06527e30();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a602713;
        }
        auVar25 = func_0x06527ef0();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a602713;
        }
        auVar25 = func_0x06527fb0();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a602713;
        }
        auVar25 = func_0x06528070();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a602713;
        }
        auVar25 = func_0x06528130();
        if (auVar25._8_8_ == lVar22) {
          if (auVar25._0_8_ == 0) {
            lVar21 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar21 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar17 == 0) {
            lVar21 = func_0x048aead0(lVar22);
            iVar2 = *(int *)(lVar21 + 8);
          }
          else {
            iVar2 = *(int *)(lVar17 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0a602713;
        }
        lVar21 = CONCAT71(uStack_917,bStack_918);
        if (*(long *)(lVar21 + 0x20 + uVar23 * 0x140) != lVar22) goto LAB_0a602945;
        lVar21 = *(long *)(uVar23 * 0x140 + lVar21 + 0x18);
        if (lVar21 == 0) {
          lVar21 = func_0x048aead0();
          iVar11 = *(int *)(lVar21 + 8);
          if (lVar17 != 0) goto LAB_0a6026e4;
LAB_0a6026fc:
          lVar21 = func_0x048aead0(lVar22);
          if (iVar11 == *(int *)(lVar21 + 8)) {
LAB_0a602711:
            uVar23 = (ulong)((int)uVar23 + 1);
            goto LAB_0a602713;
          }
        }
        else {
          iVar11 = *(int *)(lVar21 + 8);
          if (lVar17 == 0) goto LAB_0a6026fc;
LAB_0a6026e4:
          if (iVar11 == *(int *)(lVar17 + 8)) goto LAB_0a602711;
        }
        lVar21 = CONCAT71(uStack_917,bStack_918);
        goto LAB_0a602940;
      }
      if (auVar25._0_8_ == 0) {
        lVar21 = func_0x048aead0(auVar25._8_8_);
        iVar11 = *(int *)(lVar21 + 8);
        if (lVar17 != 0) goto LAB_0a6024f1;
LAB_0a60250e:
        lVar21 = func_0x048aead0(lVar22);
        if (iVar11 != *(int *)(lVar21 + 8)) goto LAB_0a602520;
      }
      else {
        iVar11 = *(int *)(auVar25._0_8_ + 8);
        if (lVar17 == 0) goto LAB_0a60250e;
LAB_0a6024f1:
        if (iVar11 != *(int *)(lVar17 + 8)) goto LAB_0a602520;
      }
LAB_0a602713:
    } while (((uint)uVar23 < (uint)uVar19) && (uVar20 = uVar20 + 1, uVar20 < uStack_85c));
    lVar21 = CONCAT71(uStack_917,bStack_918);
    lVar17 = CONCAT53(uStack_90d,CONCAT21(uStack_90f,bStack_910));
    uVar19 = (lVar17 - lVar21 >> 6) * -0x3333333333333333;
  }
  lVar22 = lStack_8a8;
  if (uVar19 == uVar23) {
    lVar3 = lStack_8a0;
    if (lStack_8a8 != 0) {
      while (lVar22 != lVar3) {
        func_0x05fe8450(lVar3 + -0x140);
        lVar3 = lVar3 + -0x140;
      }
      lStack_8a0 = lVar22;
      thunk_FUN_0ee326a0(lStack_8a8,(long)puStack_898 - lStack_8a8);
      lVar21 = CONCAT71(uStack_917,bStack_918);
      lVar17 = CONCAT53(uStack_90d,CONCAT21(uStack_90f,bStack_910));
    }
    puStack_898 = puStack_908;
    if (puStack_3c0 < puStack_3b8) {
      *puStack_3c0 = 0;
      puStack_3c0[1] = 0;
      puStack_3c0[2] = 0;
      *puStack_3c0 = CONCAT44(uStack_8d8._4_4_,(uint)uStack_8d8);
      puStack_3c0[1] = CONCAT44(uStack_8cc,CONCAT13(uStack_8cd,CONCAT21(uStack_8cf,uStack_8d0)));
      puStack_3c0[2] = ppbStack_8c8;
      uStack_8d8._0_4_ = 0;
      uStack_8d8._4_4_ = 0;
      uStack_8d0 = 0;
      uStack_8cf = 0;
      uStack_8cd = 0;
      uStack_8cc = 0;
      ppbStack_8c8 = (byte **)0x0;
      puStack_3c0[5] = uStack_8b0;
      puStack_3c0[3] = CONCAT44(uStack_8bc,uStack_8c0);
      puStack_3c0[4] = CONCAT71(uStack_8b7,uStack_8b8);
      uStack_8c0 = 0;
      uStack_8bc = 0;
      uStack_8b8 = 0;
      uStack_8b7 = 0;
      uStack_8b0 = 0;
      puStack_3c0[6] = 0;
      puStack_3c0[7] = 0;
      puStack_3c0[8] = 0;
      puStack_3c0[6] = lVar21;
      puStack_3c0[7] = lVar17;
      puStack_3c0[8] = puStack_908;
      lStack_8a8 = 0;
      lStack_8a0 = 0;
      puStack_898 = (ulong *)0x0;
      puStack_3c0[9] = plStack_890;
      puStack_3c0[10] = plStack_888;
      plStack_890 = (long *)0x0;
      plStack_888 = (undefined8 *)0x0;
      puStack_3c0[0xb] = 0;
      puStack_3c0[0xc] = 0;
      puStack_3c0[0xd] = 0;
      puStack_3c0[0xb] = uStack_880;
      puStack_3c0[0xc] = uStack_878;
      puStack_3c0[0xd] = uStack_870;
      uStack_880 = 0;
      uStack_878 = 0;
      uStack_870 = 0;
      puStack_3c0 = puStack_3c0 + 0xe;
    }
    else {
      lStack_8a8 = lVar21;
      lStack_8a0 = lVar17;
      puStack_3c0 = (undefined8 *)func_0x0652ac80(&lStack_3c8,&uStack_8d8);
    }
    puVar14 = puStack_3c0 + -0xe;
    lVar21 = (long)uStack_938;
  }
  else {
LAB_0a602940:
    if (lVar21 != 0) {
LAB_0a602945:
      lVar22 = CONCAT53(uStack_90d,CONCAT21(uStack_90f,bStack_910));
      lVar17 = lVar21;
      if (lVar21 != lVar22) {
        do {
          lVar22 = lVar22 + -0x140;
          func_0x05fe8450(lVar22);
        } while (lVar22 != lVar21);
        lVar17 = CONCAT71(uStack_917,bStack_918);
      }
      bStack_910 = (byte)lVar21;
      uStack_90f = (undefined2)((ulong)lVar21 >> 8);
      uStack_90d = (undefined5)((ulong)lVar21 >> 0x18);
      thunk_FUN_0ee326a0(lVar17,(long)puStack_908 - lVar17);
    }
    puVar14 = (undefined8 *)0xf670de8;
    lVar21 = (long)uStack_938;
  }
  uStack_938 = (byte *)lVar21;
  if (lVar21 != 0) {
    if ((byte *)lVar21 != uStack_930) {
      lVar17 = (long)uStack_930 + -0x40;
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
        lVar22 = lVar17 + -0xd8;
        lVar17 = lVar17 + -0x118;
      } while (lVar22 != lVar21);
    }
    uStack_930 = (byte *)lVar21;
    thunk_FUN_0ee326a0(uStack_938,(long)pbStack_928 - (long)uStack_938);
  }
  pcVar12 = (code *)((long)&uStack_858 + 1);
  func_0x05f93280(&uStack_8d8);
  uStack_188 = _DAT_0f6421a8;
  uStack_184 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_170 = _DAT_0f6421c0;
    uStack_180 = _DAT_0f6421b0;
    uStack_17c = uRam000000000f6421b4;
    uStack_178 = _DAT_0f6421b8;
    uStack_174 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_180,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(puVar14,&uStack_188,0);
  if ((uStack_180 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_170,CONCAT44(uStack_17c,uStack_180) & 0xfffffffffffffffe);
  }
  if (pcStack_230 != (code *)0x0) {
    (*pcStack_230)(auStack_248);
  }
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(auStack_290);
  }
  if (pcStack_2b8 != (code *)0x0) {
    (*pcStack_2b8)(auStack_2d0);
  }
  if (pcStack_2f8 != (code *)0x0) {
    (*pcStack_2f8)(&lStack_310);
  }
  if ((uStack_348 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_338,uStack_348 & 0xfffffffffffffffe);
  }
  if (((ulong)apbStack_710[0] & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_700,(ulong)apbStack_710[0] & 0xfffffffffffffffe);
  }
  if (pcStack_740 != (code *)0x0) {
    (*pcStack_740)(auStack_758);
  }
  if (pcStack_788 != (code *)0x0) {
    (*pcStack_788)(auStack_7a0);
  }
  if (pcStack_7c8 != (code *)0x0) {
    (*pcStack_7c8)(auStack_7e0);
  }
  if (pcStack_808 != (code *)0x0) {
    (*pcStack_808)(&uStack_820);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  if ((uStack_8f0 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_8e0,
                       CONCAT17(uStack_8e9,CONCAT25(uStack_8eb,CONCAT14(uStack_8ec,uStack_8f0))) &
                       0xfffffffffffffffe);
  }
  uStack_858 = 0x53736910;
  uStack_854 = 0x69;
  uStack_853 = 0x6e67;
  uStack_851 = 0x65;
  uStack_850 = 100;
  uStack_84f = 0;
  func_0x065af670(&uStack_6f8);
  if (((ulong)uStack_6e0 & 1) == 0) {
    if ((uStack_858 & 1) == 0) {
      pcStack_6d0 = pcStack_848;
      uStack_6e0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_851,CONCAT21(uStack_853,uStack_854)),uStack_858);
      uStack_6d8 = (long *)CONCAT44(uStack_84c,
                                    CONCAT13(uStack_84d,
                                             CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    else {
      func_0x04885070(&uStack_6e0,pcStack_848,
                      CONCAT44(uStack_84c,
                               CONCAT13(uStack_84d,
                                        CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850)))));
    }
  }
  else {
    bVar24 = (uStack_858 & 1) == 0;
    pcVar18 = pcStack_848;
    if (bVar24) {
      pcVar18 = pcVar12;
    }
    uVar23 = (ulong)((byte)uStack_858 >> 1);
    if (!bVar24) {
      uVar23 = CONCAT44(uStack_84c,
                        CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    func_0x04885120(&uStack_6e0,pcVar18,uVar23);
  }
  auVar25 = func_0x0a65e570();
  auStack_6c8 = auVar25;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f232b48;
  uStack_6a8 = (code *)(puVar14 + 3);
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f232b98;
  plVar15 = (long *)CONCAT44(uStack_69c,uStack_6a0);
  uStack_6a0 = SUB84(puVar14,0);
  uStack_69c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar15 == (long *)0x0) {
LAB_0a602d67:
    if (uStack_3a8 < uStack_3a0) goto LAB_0a602d79;
LAB_0a602db5:
    uVar23 = func_0x065b01f0(&lStack_3b0,&uStack_6f8);
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0a602d67;
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    if (uStack_3a0 <= uStack_3a8) goto LAB_0a602db5;
LAB_0a602d79:
    uVar23 = uStack_3a8;
    func_0x065b0410(uStack_3a8,&uStack_6f8);
    uVar23 = uVar23 + 0x1b0;
  }
  uStack_3a8 = uVar23;
  func_0x0652dc20(&uStack_6f8);
  uStack_1a8 = _DAT_0f6421a8;
  uStack_1a4 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_190 = _DAT_0f6421c0;
    uStack_1a0 = _DAT_0f6421b0;
    uStack_19c = uRam000000000f6421b4;
    uStack_198 = _DAT_0f6421b8;
    uStack_194 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_1a0,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(uVar23 - 0x1b0,&uStack_1a8,0);
  if ((uStack_1a0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_190,CONCAT44(uStack_19c,uStack_1a0) & 0xfffffffffffffffe);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  uStack_858 = 0x7475610c;
  uStack_854 = 0x68;
  uStack_853 = 0x726f;
  uStack_851 = 0;
  func_0x065af670(&uStack_6f8);
  if (((ulong)uStack_6e0 & 1) == 0) {
    if ((uStack_858 & 1) == 0) {
      pcStack_6d0 = pcStack_848;
      uStack_6e0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_851,CONCAT21(uStack_853,uStack_854)),uStack_858);
      uStack_6d8 = (long *)CONCAT44(uStack_84c,
                                    CONCAT13(uStack_84d,
                                             CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    else {
      func_0x04885070(&uStack_6e0,pcStack_848,
                      CONCAT44(uStack_84c,
                               CONCAT13(uStack_84d,
                                        CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850)))));
    }
  }
  else {
    bVar24 = (uStack_858 & 1) == 0;
    pcVar18 = pcStack_848;
    if (bVar24) {
      pcVar18 = pcVar12;
    }
    uVar23 = (ulong)((byte)uStack_858 >> 1);
    if (!bVar24) {
      uVar23 = CONCAT44(uStack_84c,
                        CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    func_0x04885120(&uStack_6e0,pcVar18,uVar23);
  }
  func_0x066baa80();
  auVar25 = func_0x0a65b7b0();
  auStack_6c8 = auVar25;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f232bf8;
  uStack_6a8 = (code *)(puVar14 + 3);
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f232c48;
  plVar15 = (long *)CONCAT44(uStack_69c,uStack_6a0);
  uStack_6a0 = SUB84(puVar14,0);
  uStack_69c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar15 == (long *)0x0) {
LAB_0a602fd7:
    if (uStack_3a8 < uStack_3a0) goto LAB_0a602fe9;
LAB_0a603025:
    uVar23 = func_0x065b01f0(&lStack_3b0,&uStack_6f8);
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0a602fd7;
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    if (uStack_3a0 <= uStack_3a8) goto LAB_0a603025;
LAB_0a602fe9:
    uVar23 = uStack_3a8;
    func_0x065b0410(uStack_3a8,&uStack_6f8);
    uVar23 = uVar23 + 0x1b0;
  }
  uStack_3a8 = uVar23;
  func_0x0652dc20(&uStack_6f8);
  uStack_1c8 = _DAT_0f6421a8;
  uStack_1c4 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_1b0 = _DAT_0f6421c0;
    uStack_1c0 = _DAT_0f6421b0;
    uStack_1bc = uRam000000000f6421b4;
    uStack_1b8 = _DAT_0f6421b8;
    uStack_1b4 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_1c0,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(uVar23 - 0x1b0,&uStack_1c8,0);
  if ((uStack_1c0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_1b0,CONCAT44(uStack_1bc,uStack_1c0) & 0xfffffffffffffffe);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  uStack_858 = 0x7469740a;
  uStack_854 = 0x6c;
  uStack_853 = 0x65;
  func_0x065af670(&uStack_6f8);
  if (((ulong)uStack_6e0 & 1) == 0) {
    if ((uStack_858 & 1) == 0) {
      pcStack_6d0 = pcStack_848;
      uStack_6e0 = (undefined *)
                   CONCAT44(CONCAT13(uStack_851,CONCAT21(uStack_853,uStack_854)),uStack_858);
      uStack_6d8 = (long *)CONCAT44(uStack_84c,
                                    CONCAT13(uStack_84d,
                                             CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    else {
      func_0x04885070(&uStack_6e0,pcStack_848,
                      CONCAT44(uStack_84c,
                               CONCAT13(uStack_84d,
                                        CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850)))));
    }
  }
  else {
    bVar24 = (uStack_858 & 1) != 0;
    if (bVar24) {
      pcVar12 = pcStack_848;
    }
    uVar23 = (ulong)((byte)uStack_858 >> 1);
    if (bVar24) {
      uVar23 = CONCAT44(uStack_84c,
                        CONCAT13(uStack_84d,CONCAT12(uStack_84e,CONCAT11(uStack_84f,uStack_850))));
    }
    func_0x04885120(&uStack_6e0,pcVar12,uVar23);
  }
  func_0x066baa80();
  auVar25 = func_0x0a65b7b0();
  auStack_6c8 = auVar25;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0f232ca8;
  uStack_6a8 = (code *)(puVar14 + 3);
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[3] = &UNK_0f232cf8;
  plVar15 = (long *)CONCAT44(uStack_69c,uStack_6a0);
  uStack_6a0 = SUB84(puVar14,0);
  uStack_69c = (undefined4)((ulong)puVar14 >> 0x20);
  if (plVar15 == (long *)0x0) {
LAB_0a60323f:
    if (uStack_3a0 <= uStack_3a8) {
LAB_0a60328d:
      lVar21 = func_0x065b01f0(&lStack_3b0,&uStack_6f8);
      goto LAB_0a6032a5;
    }
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar21 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0a60323f;
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    if (uStack_3a0 <= uStack_3a8) goto LAB_0a60328d;
  }
  uVar23 = uStack_3a8;
  func_0x065b0410(uStack_3a8,&uStack_6f8);
  lVar21 = uVar23 + 0x1b0;
LAB_0a6032a5:
  uStack_3a8 = lVar21;
  func_0x0652dc20(&uStack_6f8);
  uStack_1e8 = _DAT_0f6421a8;
  uStack_1e4 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_1d0 = _DAT_0f6421c0;
    uStack_1e0 = _DAT_0f6421b0;
    uStack_1dc = uRam000000000f6421b4;
    uStack_1d8 = _DAT_0f6421b8;
    uStack_1d4 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_1e0,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(lVar21 + -0x1b0,&uStack_1e8,0);
  if ((uStack_1e0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_1d0,CONCAT44(uStack_1dc,uStack_1e0) & 0xfffffffffffffffe);
  }
  if ((uStack_858 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_848,
                       CONCAT17(uStack_851,CONCAT25(uStack_853,CONCAT14(uStack_854,uStack_858))) &
                       0xfffffffffffffffe);
  }
  uStack_208 = _DAT_0f6421a8;
  uStack_204 = _DAT_0f6421ac;
  if ((_DAT_0f6421b0 & 1) == 0) {
    uStack_1f0 = _DAT_0f6421c0;
    uStack_200 = _DAT_0f6421b0;
    uStack_1fc = uRam000000000f6421b4;
    uStack_1f8 = _DAT_0f6421b8;
    uStack_1f4 = uRam000000000f6421bc;
  }
  else {
    FUN_0412e5e0(&uStack_200,_DAT_0f6421c0,CONCAT44(uRam000000000f6421bc,_DAT_0f6421b8));
  }
  func_0x0730fa70(&lStack_458,&uStack_208,0);
  if ((uStack_200 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_1f0,CONCAT44(uStack_1fc,uStack_200) & 0xfffffffffffffffe);
  }
  auStack_410 = func_0x0a64ead0();
  lVar17 = lStack_440;
  lVar21 = lStack_438;
  if (lStack_440 != 0) {
    for (; lVar17 != lVar21; lVar21 = lVar21 + -0x30) {
      if ((*(byte *)(lVar21 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar21 + -0x10),
                           *(ulong *)(lVar21 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_438 = lVar17;
    thunk_FUN_0ee326a0(lStack_440,lStack_430 - lStack_440);
  }
  lVar22 = lStack_448;
  lVar17 = lStack_450;
  lVar21 = lStack_458;
  lStack_458 = 0;
  lStack_450 = 0;
  lStack_448 = 0;
  *plStack_38 = lVar21;
  plStack_38[1] = lVar17;
  plStack_38[2] = lVar22;
  lStack_440 = 0;
  lStack_438 = 0;
  lStack_430 = 0;
  plStack_38[5] = lStack_418;
  plStack_38[3] = uStack_428;
  plStack_38[4] = uStack_420;
  uStack_428 = 0;
  uStack_420 = 0;
  lStack_418 = 0;
  *(undefined4 *)(plStack_38 + 8) = auStack_400._0_4_;
  *(undefined4 *)((long)plStack_38 + 0x44) = auStack_400._4_4_;
  *(undefined4 *)(plStack_38 + 9) = auStack_400._8_4_;
  *(undefined4 *)((long)plStack_38 + 0x4c) = auStack_400._12_4_;
  *(undefined1 (*) [16])(plStack_38 + 6) = auStack_410;
  plStack_38[10] = lStack_3f0;
  plStack_38[0xb] = lStack_3e8;
  plStack_38[0xc] = lStack_3e0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  lStack_3e0 = 0;
  plStack_38[0xd] = lStack_3d8;
  plStack_38[0xe] = lStack_3d0;
  lStack_3d8 = 0;
  lStack_3d0 = 0;
  plStack_38[0xf] = lStack_3c8;
  plStack_38[0x10] = (long)puStack_3c0;
  plStack_38[0x11] = (long)puStack_3b8;
  lStack_3c8 = 0;
  puStack_3c0 = (undefined8 *)0x0;
  puStack_3b8 = (undefined8 *)0x0;
  plStack_38[0x12] = lStack_3b0;
  plStack_38[0x13] = uStack_3a8;
  plStack_38[0x14] = uStack_3a0;
  lStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  plStack_38[0x15] = lStack_398;
  plStack_38[0x16] = lStack_390;
  plStack_38[0x17] = lStack_388;
  lStack_398 = 0;
  lStack_390 = 0;
  lStack_388 = 0;
  plStack_38[0x18] = lStack_380;
  plStack_38[0x19] = lStack_378;
  plStack_38[0x1a] = lStack_370;
  lStack_380 = 0;
  lStack_378 = 0;
  lStack_370 = 0;
  *(undefined4 *)(plStack_38 + 0x1b) = (undefined4)uStack_368;
  *(undefined4 *)((long)plStack_38 + 0xdc) = uStack_368._4_4_;
  *(undefined4 *)(plStack_38 + 0x1c) = (undefined4)uStack_360;
  *(undefined4 *)((long)plStack_38 + 0xe4) = uStack_360._4_4_;
  plStack_38[0x1d] = lStack_358;
  uStack_368 = 0;
  uStack_360 = 0;
  lStack_358 = 0;
  func_0x0651ffe0(&lStack_440);
  lVar17 = lStack_458;
  lVar21 = lStack_450;
  if (lStack_458 != 0) {
    for (; lVar17 != lVar21; lVar21 = lVar21 + -0x30) {
      if ((*(byte *)(lVar21 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar21 + -0x10),
                           *(ulong *)(lVar21 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_450 = lVar17;
    thunk_FUN_0ee326a0(lStack_458,lStack_448 - lStack_458);
  }
  if ((uStack_470 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT53(uStack_45d,CONCAT21(uStack_45f,uStack_460)),
                       CONCAT44(uStack_46c,uStack_470) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x143934f  ItemBookComponent
 */
