/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7ee7400 (ELF vaddr 0x7de7400)
 * Label: caller-of-callee
 * Body:  [[07ee7400, 07ee7fb1] [07ee7fc0, 07eeb8b7]]
 * Ghidra: FUN_07ee7400
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07ee7400(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  bool bVar15;
  undefined4 auStack_928 [2];
  long *plStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined *puStack_900;
  undefined1 *puStack_8f8;
  undefined1 *puStack_8f0;
  undefined *puStack_8e8;
  undefined *puStack_8e0;
  undefined4 uStack_8d8;
  undefined8 uStack_8d0;
  long *plStack_8c8;
  char cStack_8b9;
  undefined *puStack_8b8;
  undefined4 *puStack_8b0;
  undefined4 uStack_8a8;
  long *plStack_8a0;
  long lStack_898;
  long lStack_890;
  long lStack_888;
  long lStack_880;
  long lStack_878;
  long lStack_870;
  undefined8 *puStack_868;
  long lStack_860;
  long lStack_858;
  long lStack_850;
  long lStack_848;
  long lStack_840;
  long lStack_838;
  undefined4 uStack_830;
  long lStack_828;
  long lStack_820;
  long lStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  long lStack_800;
  undefined2 uStack_7f8;
  undefined2 uStack_7f6;
  uint uStack_7f4;
  uint uStack_7f0;
  undefined1 uStack_7ec;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined8 uStack_7b8;
  char cStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  int iStack_780;
  undefined4 uStack_77c;
  char cStack_778;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined4 uStack_744;
  int iStack_740;
  undefined4 uStack_73c;
  char cStack_738;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  int iStack_700;
  undefined4 uStack_6fc;
  char cStack_6f8;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  int iStack_6c0;
  undefined4 uStack_6bc;
  char cStack_6b8;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  int iStack_680;
  undefined4 uStack_67c;
  char cStack_678;
  undefined8 uStack_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  int iStack_640;
  undefined4 uStack_63c;
  char cStack_638;
  undefined8 uStack_630;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  int iStack_608;
  undefined4 uStack_604;
  char cStack_600;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  int iStack_5d0;
  undefined4 uStack_5cc;
  char cStack_5c8;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  int iStack_590;
  undefined4 uStack_58c;
  char cStack_588;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  int iStack_550;
  undefined4 uStack_54c;
  char cStack_548;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  int iStack_510;
  undefined4 uStack_50c;
  char cStack_508;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  int iStack_4d0;
  undefined4 uStack_4cc;
  char cStack_4c8;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  int iStack_490;
  undefined4 uStack_48c;
  char cStack_488;
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
  undefined4 uStack_44c;
  char cStack_448;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  char cStack_408;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  int iStack_3d0;
  undefined4 uStack_3cc;
  char cStack_3c8;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  char cStack_388;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  undefined8 uStack_348;
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
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
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
  undefined4 uStack_28c;
  undefined1 uStack_288;
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
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  char cStack_188;
  undefined7 uStack_187;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined7 uStack_87;
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
  
  func_0x07be4b40();
  func_0x07be4c70(param_1);
  func_0x079ea3d0(param_1);
  func_0x078210b0(param_1);
  func_0x07821000(param_1);
  func_0x07eecf50(param_1);
  func_0x07cab540(param_1);
  func_0x07820f40(param_1);
  if ((DAT_0f5c0cb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c0cb8), iVar7 != 0)) {
    func_0x07f3f130();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0c38,0xf53dab8);
    FUN_0410844d(&DAT_0f5c0cb8);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c0c38 + 4)) * 8);
  do {
    lVar1 = *plVar10;
    if (lVar1 == -1) goto LAB_07ee74b0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5c0c38 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07ee74b0:
    puVar9 = &DAT_0f5c0c38;
    if (iRam000000000f5c0c98 != -0x2b3da790) goto LAB_07ee751d;
LAB_07ee74db:
    lVar1 = *(long *)(puVar9 + 0x68);
    if (lVar1 == 0) goto LAB_07ee751d;
    bVar15 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar14 = lVar1 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar1 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x07f3f550(&uStack_7e0,param_1,lVar14,uVar12);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_07ee74db;
LAB_07ee751d:
    func_0x07f3f550(&uStack_7e0,param_1,&UNK_012c34f9,0x1c);
  }
  if (cStack_7b0 == '\0') {
    uStack_918._4_4_ = (uint)((ulong)uStack_918 >> 0x20);
    func_0x07f40070(&puStack_8b8,&uStack_7e0,&UNK_014cedc5,0x13);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ce8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918._4_4_ << 0x20);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_0490ce30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_0490cb20;
    puStack_8e8 = &UNK_07f40680;
    puStack_8e0 = &UNK_07f407e0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07f40380(&puStack_8b8);
    plVar10 = (long *)CONCAT44(uStack_7dc,uStack_7e0);
    uStack_768 = (long *)CONCAT44(uStack_7d4,uStack_7d8);
    uStack_760 = (long *)CONCAT44(uStack_7cc,uStack_7d0);
    uStack_758 = uStack_7c8;
    uStack_754 = uStack_7c4;
    uStack_750 = uStack_7c0;
    uStack_74c = uStack_7bc;
    iVar7 = (int)uStack_7b8;
    uVar4 = uStack_7b8._4_4_;
    cStack_8b9 = cStack_7b0;
    func_0x048b0bc0(&plStack_8a0);
    if ((DAT_0f5c0cb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c0cb8), iVar8 != 0)) {
      func_0x07f3f130();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0c38,0xf53dab8);
      FUN_0410844d(&DAT_0f5c0cb8);
    }
    plVar11 = (long *)(plVar10[3] +
                      (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5c0c38 + 4)) * 8);
    do {
      lVar1 = *plVar11;
      if (lVar1 == -1) goto LAB_07ee7720;
      plVar11 = (long *)(plVar10[6] + lVar1 * 0x18);
    } while (*(uint *)(plVar10[6] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5c0c38 + 4));
    if (plVar11 == (long *)plVar10[7]) {
LAB_07ee7720:
      puVar9 = &DAT_0f5c0c38;
    }
    else {
      puVar9 = (undefined *)plVar11[2];
    }
    if ((1 < iVar7 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120d6d6),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar9 = (undefined *)func_0x048b0c90(plVar10 + 3,puVar9,uVar4,1);
    if (puVar9 == (undefined *)0x0) {
      puStack_8b8 = (undefined *)0x0;
      puStack_8b0 = (undefined4 *)0x0;
      func_0x048b0d20(&puStack_8b8);
      puVar9 = puStack_8b8;
    }
    *(undefined1 *)(*(long *)(puVar9 + 0x58) + 0xa8) = 1;
    uStack_7a0 = uStack_768;
    uStack_798 = (undefined4)uStack_760;
    uStack_794 = uStack_760._4_4_;
    uStack_790 = uStack_758;
    uStack_78c = uStack_754;
    uStack_788 = uStack_750;
    uStack_784 = uStack_74c;
    iStack_780 = iVar7;
    uStack_77c = uVar4;
    cStack_778 = cStack_8b9;
    uStack_7a8 = plVar10;
    func_0x07f40070(&puStack_8b8,&uStack_7a8,&UNK_012c3516,0x23);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ef8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_04906f70;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_04906c50;
    puStack_8e8 = &UNK_07f409b0;
    puStack_8e0 = &UNK_07f40b10;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07f40380(&puStack_8b8);
    func_0x048b0bc0(&plStack_8a0);
  }
  if ((DAT_0f5c0d70 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c0d70), iVar7 != 0)) {
    func_0x07f40db0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0cf0,0xf53dab8);
    FUN_0410844d(&DAT_0f5c0d70);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c0cf0 + 4)) * 8);
  do {
    lVar1 = *plVar10;
    if (lVar1 == -1) goto LAB_07ee7990;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5c0cf0 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07ee7990:
    puVar9 = &DAT_0f5c0cf0;
    if (iRam000000000f5c0d50 != -0x2b3da790) goto LAB_07ee79fd;
LAB_07ee79bb:
    lVar1 = *(long *)(puVar9 + 0x68);
    if (lVar1 == 0) goto LAB_07ee79fd;
    bVar15 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar14 = lVar1 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar1 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x07f411d0(&uStack_7e0,param_1,lVar14,uVar12);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_07ee79bb;
LAB_07ee79fd:
    func_0x07f411d0(&uStack_7e0,param_1,&UNK_01397225,0x12);
  }
  if (cStack_7b0 != '\0') goto LAB_07ee7fd2;
  if ((DAT_0f5c0d90 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c0d90), iVar7 != 0)) {
    func_0x07f40ec0();
    FUN_0410844d(&DAT_0f5c0d90);
  }
  uStack_7b8 = 0x251db0ba00000001;
  lVar1 = CONCAT44(uStack_7dc,uStack_7e0);
  if ((DAT_0f5c0d70 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c0d70), iVar7 != 0)) {
    func_0x07f40db0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0cf0,0xf53dab8);
    FUN_0410844d(&DAT_0f5c0d70);
  }
  puStack_8b0 = (undefined4 *)(lVar1 + 0x18);
  plVar10 = (long *)(*(long *)(lVar1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5c0cf0 + 4)) * 8);
  do {
    lVar14 = *plVar10;
    if (lVar14 == -1) goto LAB_07ee7ac0;
    plVar10 = (long *)(*(long *)(lVar1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c0cf0 + 4));
  if (plVar10 == *(long **)(lVar1 + 0x38)) {
LAB_07ee7ac0:
    puStack_8b8 = &DAT_0f5c0cf0;
  }
  else {
    puStack_8b8 = (undefined *)plVar10[2];
  }
  func_0x0ed621a0(&puStack_8b8,uStack_7b8._4_4_);
  puStack_8b8 = (undefined *)CONCAT62(puStack_8b8._2_6_,1);
  uStack_8a8 = uStack_7b8._4_4_;
  plStack_8a0 = (long *)0x0;
  lStack_898 = 0;
  lStack_890 = 0;
  lStack_888 = 0;
  lStack_880 = 0;
  puStack_8b0 = &uStack_7d8;
  puStack_868 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_868 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar2 = _UNK_012289e9;
  lStack_878 = 0x21;
  lStack_870 = 0x19;
  *(ulong *)((long)puStack_868 + 9) = CONCAT17(UNK_012289e8,_DAT_012289e1);
  *(undefined8 *)((long)puStack_868 + 0x11) = uVar2;
  uVar2 = CONCAT71(_DAT_012289e1,UNK_012289e0);
  *puStack_868 = _DAT_012289d8;
  puStack_868[1] = uVar2;
  *(undefined1 *)((long)puStack_868 + 0x19) = 0;
  lStack_840 = 0;
  lStack_838 = 0;
  lStack_850 = 0;
  lStack_848 = 0;
  lStack_860 = 0;
  lStack_858 = 0;
  uStack_830 = 0x3f600000;
  FUN_048afb10(&lStack_860,8);
  uStack_808 = 0;
  lStack_800 = 0;
  lStack_818 = 0;
  uStack_810 = 0;
  lStack_828 = 0;
  lStack_820 = 0;
  uStack_7f8 = 0xff00;
  uStack_7f4 = uStack_7f4 & 0xffffff00;
  uStack_7f0 = uStack_7f0 & 0xffffff00;
  uStack_7ec = 0;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0ef46ef8;
  if (plStack_8a0 != (long *)0x0) {
    lVar1 = *plStack_8a0;
    plStack_8a0 = plVar10;
    (**(code **)(lVar1 + 8))();
    plVar10 = plStack_8a0;
  }
  plStack_8a0 = plVar10;
  auStack_928[0] = uStack_8a8;
  plStack_920 = (long *)0x0;
  uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
  uStack_910 = 1;
  uStack_908 = 0;
  puStack_900 = &UNK_04906f70;
  puStack_8f8 = &SUB_048b06d0;
  puStack_8f0 = &SUB_04906c50;
  puStack_8e8 = &UNK_07f41ce0;
  puStack_8e0 = &UNK_07f41e40;
  uStack_8d8 = 0;
  uStack_8d0 = 0;
  plStack_8c8 = (long *)0x0;
  func_0x048b05a0(puStack_8b0,auStack_928);
  plVar10 = plStack_8c8;
  if (plStack_8c8 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_8c8 + 1;
    lVar1 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
      func_0x0412c2d0(plVar10);
    }
  }
  puVar3 = puStack_8b0;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_928[0] = _DAT_0f550a0c;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar1 = lStack_898;
  plVar11 = plStack_8a0;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  plStack_920 = plVar10 + 3;
  plStack_8a0 = (long *)0x0;
  lStack_898 = 0;
  plVar10[3] = (long)plVar11;
  plVar10[4] = lVar1;
  plVar10[7] = lStack_880;
  plVar10[5] = lStack_890;
  plVar10[6] = lStack_888;
  lStack_890 = 0;
  lStack_888 = 0;
  lStack_880 = 0;
  plVar10[10] = (long)puStack_868;
  plVar10[8] = lStack_878;
  plVar10[9] = lStack_870;
  lStack_878 = 0;
  lStack_870 = 0;
  puStack_868 = (undefined8 *)0x0;
  plVar10[0xb] = lStack_860;
  plVar10[0xc] = lStack_858;
  plVar10[0xd] = lStack_850;
  lStack_860 = 0;
  lStack_858 = 0;
  lStack_850 = 0;
  plVar10[0xe] = lStack_848;
  plVar10[0xf] = lStack_840;
  plVar10[0x10] = lStack_838;
  lStack_848 = 0;
  lStack_840 = 0;
  lStack_838 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_830;
  plVar10[0x12] = lStack_828;
  plVar10[0x13] = lStack_820;
  plVar10[0x14] = lStack_818;
  lStack_828 = 0;
  lStack_820 = 0;
  lStack_818 = 0;
  plVar10[0x17] = lStack_800;
  *(undefined4 *)(plVar10 + 0x15) = (undefined4)uStack_810;
  *(undefined4 *)((long)plVar10 + 0xac) = uStack_810._4_4_;
  *(undefined4 *)(plVar10 + 0x16) = (undefined4)uStack_808;
  *(undefined4 *)((long)plVar10 + 0xb4) = uStack_808._4_4_;
  uStack_810 = 0;
  uStack_808 = 0;
  lStack_800 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_7ec,CONCAT43(uStack_7f0,uStack_7f4._1_3_));
  plVar10[0x18] = CONCAT44(uStack_7f4,CONCAT22(uStack_7f6,uStack_7f8));
  uStack_7a8 = (long *)0x0;
  uStack_7a0 = (long *)0x0;
  uStack_918 = plVar10;
  func_0x048afd20(puVar3,auStack_928);
  plVar10 = uStack_918;
  if (uStack_918 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_918 + 1;
    lVar1 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*uStack_918 + 0x10))(uStack_918);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = uStack_7a0;
  if (uStack_7a0 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_7a0 + 1;
    lVar1 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*uStack_7a0 + 0x10))(uStack_7a0);
      func_0x0412c2d0(plVar10);
    }
  }
  lVar1 = *(long *)(puVar3 + 4);
  iVar7 = puVar3[7];
  if (iVar7 == 2) {
    piVar13 = *(int **)(*(long *)(lVar1 + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != puVar3[6]) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != *(long *)(puVar3 + 2); piVar13 = *(int **)(piVar13 + 0xe)) {
    }
LAB_07ee7fca:
    piVar13[4] = piVar13[4] | (int)puStack_8b8 << 0x10;
  }
  else {
    if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(lVar1 + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != puVar3[6]) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      goto LAB_07ee7fca;
    }
    if (iVar7 == 0) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | (int)puStack_8b8 << 0x10;
    }
  }
  func_0x048b0bc0(&plStack_8a0);
LAB_07ee7fd2:
  func_0x07cab540(param_1);
  if ((DAT_0f5c0e28 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c0e28), iVar7 != 0)) {
    func_0x07f420d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0da8,0xf53dab8);
    FUN_0410844d(&DAT_0f5c0e28);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c0da8 + 4)) * 8);
  do {
    lVar1 = *plVar10;
    if (lVar1 == -1) goto LAB_07ee8040;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5c0da8 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07ee8040:
    puVar9 = &DAT_0f5c0da8;
    iVar7 = iRam000000000f5c0e08;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    iVar7 = *(int *)(puVar9 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar1 = *(long *)((long)puVar9 + 0x68), lVar1 != 0)) {
    bVar15 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar14 = lVar1 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar1 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x07f42930(&uStack_7e0,param_1,lVar14,uVar12);
  }
  else {
    func_0x07f42930(&uStack_7e0,param_1,&UNK_0130ff6d,0x13);
  }
  if (cStack_7b0 == '\0') {
    func_0x07f434a0(&puStack_8b8,&uStack_7e0,&UNK_0137b834,10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07f43a50;
    puStack_8e0 = &UNK_07f43c10;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07f43750(&puStack_8b8);
    cStack_778 = cStack_7b0;
    uStack_788 = uStack_7c0;
    uStack_784 = uStack_7bc;
    iStack_780 = (int)uStack_7b8;
    uStack_77c = uStack_7b8._4_4_;
    uStack_798 = uStack_7d0;
    uStack_794 = uStack_7cc;
    uStack_790 = uStack_7c8;
    uStack_78c = uStack_7c4;
    uStack_7a8 = (long *)CONCAT44(uStack_7dc,uStack_7e0);
    uStack_7a0 = (long *)CONCAT44(uStack_7d4,uStack_7d8);
    func_0x048b0bc0(&plStack_8a0);
    func_0x07f434a0(&puStack_8b8,&uStack_7a8,&UNK_011bdecd,0x10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0f7d80;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_07f43de0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &UNK_077e83d0;
    puStack_8e8 = &UNK_07f43df0;
    puStack_8e0 = &UNK_07f44010;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    iVar7 = puStack_8b0[7];
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_8b0 + 4) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != puStack_8b0[6]) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar1 = *(long *)(piVar13 + 0xc);
      while (lVar1 != *(long *)(puStack_8b0 + 2)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar1 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_8b0 + 4) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != puStack_8b0[6]) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      *(uint *)(*(long *)(puStack_8b0 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_8b0 + 4) + 0x18) | 0x40000;
    }
    func_0x07f43750(&puStack_8b8);
    func_0x048b0bc0(&plStack_8a0);
  }
  func_0x07820f40(param_1);
  func_0x0b9eed40(param_1);
  func_0x0b9ee010(param_1);
  if ((DAT_0f5c0ee0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c0ee0), iVar7 != 0)) {
    func_0x07f441e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0e60,0xf53dab8);
    FUN_0410844d(&DAT_0f5c0ee0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c0e60 + 4)) * 8);
  do {
    lVar1 = *plVar10;
    if (lVar1 == -1) goto LAB_07ee8490;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5c0e60 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07ee8490:
    puVar9 = &DAT_0f5c0e60;
    iVar7 = iRam000000000f5c0ec0;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    iVar7 = *(int *)(puVar9 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar1 = *(long *)(puVar9 + 0x68), lVar1 != 0)) {
    bVar15 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar14 = lVar1 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar1 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar1 + 0x10);
    }
    FUN_07f449b0(&uStack_7e0,param_1,lVar14,uVar12);
  }
  else {
    FUN_07f449b0(&uStack_7e0,param_1,&UNK_0141871b,0x13);
  }
  if (cStack_7b0 == '\0') {
    func_0x07f45520(&puStack_8b8,&uStack_7e0,&UNK_012f6deb,9);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07f45ad0;
    puStack_8e0 = &UNK_07f45c90;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07f457d0(&puStack_8b8);
    cStack_6f8 = cStack_7b0;
    uStack_708 = uStack_7c0;
    uStack_704 = uStack_7bc;
    iStack_700 = (int)uStack_7b8;
    uStack_6fc = uStack_7b8._4_4_;
    uStack_718 = uStack_7d0;
    uStack_714 = uStack_7cc;
    uStack_710 = uStack_7c8;
    uStack_70c = uStack_7c4;
    uStack_728 = uStack_7e0;
    uStack_724 = uStack_7dc;
    uStack_720 = uStack_7d8;
    uStack_71c = uStack_7d4;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07f45520(&puStack_8b8,&uStack_728,&UNK_0129090b,0xb);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07f45e60;
    puStack_8e0 = &UNK_07f46030;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07f457d0(&puStack_8b8);
    cStack_738 = cStack_6f8;
    uStack_748 = uStack_708;
    uStack_744 = uStack_704;
    iStack_740 = iStack_700;
    uStack_73c = uStack_6fc;
    uStack_758 = uStack_718;
    uStack_754 = uStack_714;
    uStack_750 = uStack_710;
    uStack_74c = uStack_70c;
    uStack_768 = (long *)CONCAT44(uStack_724,uStack_728);
    uStack_760 = (long *)CONCAT44(uStack_71c,uStack_720);
    func_0x048b0bc0(&plStack_8a0);
    func_0x07f45520(&puStack_8b8,&uStack_768,&UNK_011bdede,8);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07f46210;
    puStack_8e0 = &UNK_07f463e0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07f457d0(&puStack_8b8);
    cStack_778 = cStack_738;
    uStack_788 = uStack_748;
    uStack_784 = uStack_744;
    iStack_780 = iStack_740;
    uStack_77c = uStack_73c;
    uStack_798 = uStack_758;
    uStack_794 = uStack_754;
    uStack_790 = uStack_750;
    uStack_78c = uStack_74c;
    uStack_7a8 = uStack_768;
    uStack_7a0 = uStack_760;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07f45520(&puStack_8b8,&uStack_7a8,&UNK_01465447,8);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07f465c0;
    puStack_8e0 = &UNK_07f46790;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07f457d0(&puStack_8b8);
    func_0x048b0bc0(&plStack_8a0);
  }
  if ((DAT_0f5c3a50 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c3a50), iVar7 != 0)) {
    func_0x07fdb8d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c39d0,0xf53dab8);
    FUN_0410844d(&DAT_0f5c3a50);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c39d0 + 4)) * 8);
  do {
    lVar1 = *plVar10;
    if (lVar1 == -1) goto LAB_07ee8ab0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5c39d0 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07ee8ab0:
    puVar9 = &DAT_0f5c39d0;
    iVar7 = iRam000000000f5c3a30;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    iVar7 = *(int *)(puVar9 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar1 = *(long *)(puVar9 + 0x68), lVar1 != 0)) {
    bVar15 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar14 = lVar1 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar1 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x07fec660(&uStack_7e0,param_1,lVar14,uVar12);
  }
  else {
    func_0x07fec660(&uStack_7e0,param_1,&UNK_013e473a,0x16);
  }
  if (cStack_7b0 == '\0') {
    func_0x07fed2f0(&puStack_8b8,&uStack_7e0,&UNK_0149a9e2,9,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0e95d0;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_077e7de0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_077e7b00;
    puStack_8e8 = &UNK_07fed910;
    puStack_8e0 = &UNK_07feda70;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_5c8 = cStack_7b0;
    uStack_5d8 = uStack_7c0;
    uStack_5d4 = uStack_7bc;
    iStack_5d0 = (int)uStack_7b8;
    uStack_5cc = uStack_7b8._4_4_;
    uStack_5e8 = uStack_7d0;
    uStack_5e4 = uStack_7cc;
    uStack_5e0 = uStack_7c8;
    uStack_5dc = uStack_7c4;
    uStack_5f8 = uStack_7e0;
    uStack_5f4 = uStack_7dc;
    uStack_5f0 = uStack_7d8;
    uStack_5ec = uStack_7d4;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_5f8,&UNK_01345e9c,10,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0e9460;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_0777bd00;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_0777ba20;
    puStack_8e8 = &UNK_07fedc50;
    puStack_8e0 = &UNK_07feddb0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_6b8 = cStack_5c8;
    uStack_6c8 = uStack_5d8;
    uStack_6c4 = uStack_5d4;
    iStack_6c0 = iStack_5d0;
    uStack_6bc = uStack_5cc;
    uStack_6d8 = uStack_5e8;
    uStack_6d4 = uStack_5e4;
    uStack_6d0 = uStack_5e0;
    uStack_6cc = uStack_5dc;
    uStack_6e8 = uStack_5f8;
    uStack_6e4 = uStack_5f4;
    uStack_6e0 = uStack_5f0;
    uStack_6dc = uStack_5ec;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_6e8,&UNK_011d932d,9,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0e93b8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_06bdfa80;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_06bdf6b0;
    puStack_8e8 = &UNK_07fedf90;
    puStack_8e0 = &UNK_07fee0f0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cVar5 = cStack_6b8;
    uVar4 = uStack_6bc;
    iVar7 = iStack_6c0;
    lVar1 = CONCAT44(uStack_6e4,uStack_6e8);
    uStack_78 = CONCAT44(uStack_6dc,uStack_6e0);
    uStack_70 = CONCAT44(uStack_6d4,uStack_6d8);
    uStack_68 = uStack_6d0;
    uStack_64 = uStack_6cc;
    uStack_60 = uStack_6c8;
    uStack_5c = uStack_6c4;
    func_0x048b0bc0(&plStack_8a0);
    if ((DAT_0f5c3a50 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c3a50), iVar8 != 0)) {
      func_0x07fdb8d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c39d0,0xf53dab8);
      FUN_0410844d(&DAT_0f5c3a50);
    }
    plVar10 = (long *)(*(long *)(lVar1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c39d0 + 4)) * 8);
    do {
      lVar14 = *plVar10;
      if (lVar14 == -1) goto LAB_07ee9000;
      plVar10 = (long *)(*(long *)(lVar1 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c39d0 + 4))
    ;
    if (plVar10 == *(long **)(lVar1 + 0x38)) {
LAB_07ee9000:
      puVar9 = &DAT_0f5c39d0;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    if ((1 < iVar7 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011f31ad),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar9 = (undefined *)func_0x048b0c90(lVar1 + 0x18,puVar9,uVar4,1);
    if (puVar9 == (undefined *)0x0) {
      puStack_8b8 = (undefined *)0x0;
      puStack_8b0 = (undefined4 *)0x0;
      func_0x048b0d20(&puStack_8b8);
      puVar9 = puStack_8b8;
    }
    *(undefined1 *)(*(long *)(puVar9 + 0x58) + 0xa8) = 0x25;
    uStack_660 = (undefined4)uStack_78;
    uStack_65c = uStack_78._4_4_;
    uStack_658 = (undefined4)uStack_70;
    uStack_654 = uStack_70._4_4_;
    uStack_650 = uStack_68;
    uStack_64c = uStack_64;
    uStack_648 = uStack_60;
    uStack_644 = uStack_5c;
    iStack_640 = iVar7;
    uStack_63c = uVar4;
    cStack_638 = cVar5;
    uStack_668 = lVar1;
    func_0x07fed2f0(&puStack_8b8,&uStack_668,&UNK_011a0bc2,8,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0124a8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_05da29c0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_05da26d0;
    puStack_8e8 = &UNK_07fee2d0;
    puStack_8e0 = &UNK_07fee440;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_588 = cStack_638;
    uStack_598 = uStack_648;
    uStack_594 = uStack_644;
    iStack_590 = iStack_640;
    uStack_58c = uStack_63c;
    uStack_5a8 = uStack_658;
    uStack_5a4 = uStack_654;
    uStack_5a0 = uStack_650;
    uStack_59c = uStack_64c;
    uStack_5b8 = (undefined4)uStack_668;
    uStack_5b4 = uStack_668._4_4_;
    uStack_5b0 = uStack_660;
    uStack_5ac = uStack_65c;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_5b8,&UNK_0128f37c,8,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f012250;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_05e81fb0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_05e2f040;
    puStack_8e8 = &UNK_07fee620;
    puStack_8e0 = &UNK_07fee790;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_548 = cStack_588;
    uStack_558 = uStack_598;
    uStack_554 = uStack_594;
    iStack_550 = iStack_590;
    uStack_54c = uStack_58c;
    uStack_568 = uStack_5a8;
    uStack_564 = uStack_5a4;
    uStack_560 = uStack_5a0;
    uStack_55c = uStack_59c;
    uStack_578 = uStack_5b8;
    uStack_574 = uStack_5b4;
    uStack_570 = uStack_5b0;
    uStack_56c = uStack_5ac;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_578,&UNK_01394955,8,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f100cc0;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_07feeba0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &UNK_07fdd4a0;
    puStack_8e8 = &UNK_07feec60;
    puStack_8e0 = &UNK_07feee00;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_508 = cStack_548;
    uStack_518 = uStack_558;
    uStack_514 = uStack_554;
    iStack_510 = iStack_550;
    uStack_50c = uStack_54c;
    uStack_528 = uStack_568;
    uStack_524 = uStack_564;
    uStack_520 = uStack_560;
    uStack_51c = uStack_55c;
    uStack_538 = uStack_578;
    uStack_534 = uStack_574;
    uStack_530 = uStack_570;
    uStack_52c = uStack_56c;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_538,&UNK_0141854f,8,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07fef270;
    puStack_8e0 = &UNK_07fef450;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_4c8 = cStack_508;
    uStack_4d8 = uStack_518;
    uStack_4d4 = uStack_514;
    iStack_4d0 = iStack_510;
    uStack_4cc = uStack_50c;
    uStack_4e8 = uStack_528;
    uStack_4e4 = uStack_524;
    uStack_4e0 = uStack_520;
    uStack_4dc = uStack_51c;
    uStack_4f8 = uStack_538;
    uStack_4f4 = uStack_534;
    uStack_4f0 = uStack_530;
    uStack_4ec = uStack_52c;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_4f8,&UNK_013ca50a,10,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07fef630;
    puStack_8e0 = &UNK_07fef810;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_488 = cStack_4c8;
    uStack_498 = uStack_4d8;
    uStack_494 = uStack_4d4;
    iStack_490 = iStack_4d0;
    uStack_48c = uStack_4cc;
    uStack_4a8 = uStack_4e8;
    uStack_4a4 = uStack_4e4;
    uStack_4a0 = uStack_4e0;
    uStack_49c = uStack_4dc;
    uStack_4b8 = uStack_4f8;
    uStack_4b4 = uStack_4f4;
    uStack_4b0 = uStack_4f0;
    uStack_4ac = uStack_4ec;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_4b8,&UNK_013b1f90,0x19,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_0796ff00;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07fef9f0;
    puStack_8e0 = &UNK_07fefbe0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    iVar7 = puStack_8b0[7];
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_8b0 + 4) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != puStack_8b0[6]) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar1 = *(long *)(piVar13 + 0xc);
      while (lVar1 != *(long *)(puStack_8b0 + 2)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar1 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_8b0 + 4) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != puStack_8b0[6]) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      *(uint *)(*(long *)(puStack_8b0 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_8b0 + 4) + 0x18) | 0x40000;
    }
    func_0x07fed610(&puStack_8b8);
    cStack_448 = cStack_488;
    uStack_458 = uStack_498;
    uStack_454 = uStack_494;
    iStack_450 = iStack_490;
    uStack_44c = uStack_48c;
    uStack_468 = uStack_4a8;
    uStack_464 = uStack_4a4;
    uStack_460 = uStack_4a0;
    uStack_45c = uStack_49c;
    uStack_478 = uStack_4b8;
    uStack_474 = uStack_4b4;
    uStack_470 = uStack_4b0;
    uStack_46c = uStack_4ac;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_478,&UNK_0120d4b8,8,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ef8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_04906f70;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_04906c50;
    puStack_8e8 = &UNK_07fefdc0;
    puStack_8e0 = &UNK_07feff20;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_408 = cStack_448;
    uStack_418 = uStack_458;
    uStack_414 = uStack_454;
    iStack_410 = iStack_450;
    uStack_40c = uStack_44c;
    uStack_428 = uStack_468;
    uStack_424 = uStack_464;
    uStack_420 = uStack_460;
    uStack_41c = uStack_45c;
    uStack_438 = uStack_478;
    uStack_434 = uStack_474;
    uStack_430 = uStack_470;
    uStack_42c = uStack_46c;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_438,&UNK_012a92b9,0x11,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f100d38;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_07ff02f0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &UNK_07f3f070;
    puStack_8e8 = &UNK_07ff03b0;
    puStack_8e0 = &UNK_07ff0520;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_3c8 = cStack_408;
    uStack_3d8 = uStack_418;
    uStack_3d4 = uStack_414;
    iStack_3d0 = iStack_410;
    uStack_3cc = uStack_40c;
    uStack_3e8 = uStack_428;
    uStack_3e4 = uStack_424;
    uStack_3e0 = uStack_420;
    uStack_3dc = uStack_41c;
    uStack_3f8 = uStack_438;
    uStack_3f4 = uStack_434;
    uStack_3f0 = uStack_430;
    uStack_3ec = uStack_42c;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_3f8,&UNK_0147df21,0x12,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f01ae00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_06046510;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_0602fbb0;
    puStack_8e8 = &UNK_07ff09a0;
    puStack_8e0 = &UNK_07ff0b00;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_678 = cStack_3c8;
    uStack_688 = uStack_3d8;
    uStack_684 = uStack_3d4;
    iStack_680 = iStack_3d0;
    uStack_67c = uStack_3cc;
    uStack_698 = uStack_3e8;
    uStack_694 = uStack_3e4;
    uStack_690 = uStack_3e0;
    uStack_68c = uStack_3dc;
    uStack_6a8 = uStack_3f8;
    uStack_6a4 = uStack_3f4;
    uStack_6a0 = uStack_3f0;
    uStack_69c = uStack_3ec;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_6a8,&UNK_012dd1e4,0x10,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ce8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_0490ce30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_0490cb20;
    puStack_8e8 = &UNK_07ff0ce0;
    puStack_8e0 = &UNK_07ff0e40;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cVar5 = cStack_678;
    uVar4 = uStack_67c;
    iVar7 = iStack_680;
    lVar1 = CONCAT44(uStack_6a4,uStack_6a8);
    uStack_58 = CONCAT44(uStack_69c,uStack_6a0);
    uStack_50 = CONCAT44(uStack_694,uStack_698);
    uStack_48 = uStack_690;
    uStack_44 = uStack_68c;
    uStack_40 = uStack_688;
    uStack_3c = uStack_684;
    func_0x048b0bc0(&plStack_8a0);
    if ((DAT_0f5c3a50 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c3a50), iVar8 != 0)) {
      func_0x07fdb8d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c39d0,0xf53dab8);
      FUN_0410844d(&DAT_0f5c3a50);
    }
    plVar10 = (long *)(*(long *)(lVar1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c39d0 + 4)) * 8);
    do {
      lVar14 = *plVar10;
      if (lVar14 == -1) goto LAB_07eea010;
      plVar10 = (long *)(*(long *)(lVar1 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c39d0 + 4))
    ;
    if (plVar10 == *(long **)(lVar1 + 0x38)) {
LAB_07eea010:
      puVar9 = &DAT_0f5c39d0;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    if ((1 < iVar7 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011f31ad),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar9 = (undefined *)func_0x048b0c90(lVar1 + 0x18,puVar9,uVar4,1);
    if (puVar9 == (undefined *)0x0) {
      puStack_8b8 = (undefined *)0x0;
      puStack_8b0 = (undefined4 *)0x0;
      func_0x048b0d20(&puStack_8b8);
      puVar9 = puStack_8b8;
    }
    *(undefined1 *)(*(long *)(puVar9 + 0x58) + 0xa8) = 1;
    uStack_628 = (undefined4)uStack_58;
    uStack_624 = uStack_58._4_4_;
    uStack_620 = (undefined4)uStack_50;
    uStack_61c = uStack_50._4_4_;
    uStack_618 = uStack_48;
    uStack_614 = uStack_44;
    uStack_610 = uStack_40;
    uStack_60c = uStack_3c;
    iStack_608 = iVar7;
    uStack_604 = uVar4;
    cStack_600 = cVar5;
    uStack_630 = lVar1;
    func_0x07fed2f0(&puStack_8b8,&uStack_630,&UNK_01362596,0x10,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f100db0;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_07ff4df0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &UNK_07ff37e0;
    puStack_8e8 = &UNK_07ff4eb0;
    puStack_8e0 = &UNK_07ff50f0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_388 = cStack_600;
    uStack_398 = uStack_610;
    uStack_394 = uStack_60c;
    iStack_390 = iStack_608;
    uStack_38c = uStack_604;
    uStack_3a8 = uStack_620;
    uStack_3a4 = uStack_61c;
    uStack_3a0 = uStack_618;
    uStack_39c = uStack_614;
    uStack_3b8 = (undefined4)uStack_630;
    uStack_3b4 = uStack_630._4_4_;
    uStack_3b0 = uStack_628;
    uStack_3ac = uStack_624;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_3b8,&UNK_01432b23,0x1a,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07ff5570;
    puStack_8e0 = &UNK_07ff5750;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_188 = cStack_388;
    uStack_198 = uStack_398;
    uStack_194 = uStack_394;
    iStack_190 = iStack_390;
    uStack_18c = uStack_38c;
    uStack_1a8 = uStack_3a8;
    uStack_1a4 = uStack_3a4;
    uStack_1a0 = uStack_3a0;
    uStack_19c = uStack_39c;
    uStack_1b8 = uStack_3b8;
    uStack_1b4 = uStack_3b4;
    uStack_1b0 = uStack_3b0;
    uStack_1ac = uStack_3ac;
    func_0x048b0bc0(&plStack_8a0);
    uStack_378 = uStack_1b8;
    uStack_374 = uStack_1b4;
    uStack_370 = uStack_1b0;
    uStack_36c = uStack_1ac;
    uStack_368 = uStack_1a8;
    uStack_364 = uStack_1a4;
    uStack_360 = uStack_1a0;
    uStack_35c = uStack_19c;
    uStack_358 = uStack_198;
    uStack_354 = uStack_194;
    iStack_350 = iStack_190;
    uStack_34c = uStack_18c;
    uStack_348 = CONCAT71(uStack_187,cStack_188);
    func_0x07fed2f0(&puStack_8b8,&uStack_378,&UNK_012dd1f5,0x1d,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ef8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_04906f70;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_04906c50;
    puStack_8e8 = &UNK_07ff5930;
    puStack_8e0 = &UNK_07ff5a90;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    uStack_148 = (undefined1)uStack_348;
    uStack_158 = uStack_358;
    uStack_154 = uStack_354;
    iStack_150 = iStack_350;
    uStack_14c = uStack_34c;
    uStack_168 = uStack_368;
    uStack_164 = uStack_364;
    uStack_160 = uStack_360;
    uStack_15c = uStack_35c;
    uStack_178 = uStack_378;
    uStack_174 = uStack_374;
    uStack_170 = uStack_370;
    uStack_16c = uStack_36c;
    func_0x048b0bc0(&plStack_8a0);
    uStack_338 = uStack_178;
    uStack_334 = uStack_174;
    uStack_330 = uStack_170;
    uStack_32c = uStack_16c;
    uStack_328 = uStack_168;
    uStack_324 = uStack_164;
    uStack_320 = uStack_160;
    uStack_31c = uStack_15c;
    uStack_318 = uStack_158;
    uStack_314 = uStack_154;
    iStack_310 = iStack_150;
    uStack_30c = uStack_14c;
    uStack_308 = CONCAT71(uStack_147,uStack_148);
    func_0x07fed2f0(&puStack_8b8,&uStack_338,&UNK_011bde8f,0xe,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b3f30;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b2190;
    puStack_8e8 = &UNK_07ff5c70;
    puStack_8e0 = &UNK_07ff5e50;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    uStack_108 = (undefined1)uStack_308;
    uStack_118 = uStack_318;
    uStack_114 = uStack_314;
    iStack_110 = iStack_310;
    uStack_10c = uStack_30c;
    uStack_128 = uStack_328;
    uStack_124 = uStack_324;
    uStack_120 = uStack_320;
    uStack_11c = uStack_31c;
    uStack_138 = uStack_338;
    uStack_134 = uStack_334;
    uStack_130 = uStack_330;
    uStack_12c = uStack_32c;
    func_0x048b0bc0(&plStack_8a0);
    uStack_2f8 = uStack_138;
    uStack_2f4 = uStack_134;
    uStack_2f0 = uStack_130;
    uStack_2ec = uStack_12c;
    uStack_2e8 = uStack_128;
    uStack_2e4 = uStack_124;
    uStack_2e0 = uStack_120;
    uStack_2dc = uStack_11c;
    uStack_2d8 = uStack_118;
    uStack_2d4 = uStack_114;
    iStack_2d0 = iStack_110;
    uStack_2cc = uStack_10c;
    uStack_2c8 = CONCAT71(uStack_107,uStack_108);
    func_0x07fed2f0(&puStack_8b8,&uStack_2f8,&UNK_0120d4c1,0x14,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0f7d80;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_07f43de0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &UNK_077e83d0;
    puStack_8e8 = &UNK_07ff6030;
    puStack_8e0 = &UNK_07ff6260;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    iVar7 = puStack_8b0[7];
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_8b0 + 4) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != puStack_8b0[6]) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar1 = *(long *)(piVar13 + 0xc);
      while (lVar1 != *(long *)(puStack_8b0 + 2)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar1 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_8b0 + 4) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != puStack_8b0[6]) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      *(uint *)(*(long *)(puStack_8b0 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_8b0 + 4) + 0x18) | 0x40000;
    }
    func_0x07fed610(&puStack_8b8);
    uStack_288 = (undefined1)uStack_2c8;
    uStack_298 = uStack_2d8;
    uStack_294 = uStack_2d4;
    iStack_290 = iStack_2d0;
    uStack_28c = uStack_2cc;
    uStack_2a8 = uStack_2e8;
    uStack_2a4 = uStack_2e4;
    uStack_2a0 = uStack_2e0;
    uStack_29c = uStack_2dc;
    uStack_2b8 = uStack_2f8;
    uStack_2b4 = uStack_2f4;
    uStack_2b0 = uStack_2f0;
    uStack_2ac = uStack_2ec;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_2b8,&UNK_012c333f,0x23,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f01ae00;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_06046510;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_0602fbb0;
    puStack_8e8 = &UNK_07ff6370;
    puStack_8e0 = &UNK_07ff64d0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    uStack_c8 = uStack_288;
    uStack_d8 = uStack_298;
    uStack_d4 = uStack_294;
    iStack_d0 = iStack_290;
    uStack_cc = uStack_28c;
    uStack_e8 = uStack_2a8;
    uStack_e4 = uStack_2a4;
    uStack_e0 = uStack_2a0;
    uStack_dc = uStack_29c;
    uStack_f8 = uStack_2b8;
    uStack_f4 = uStack_2b4;
    uStack_f0 = uStack_2b0;
    uStack_ec = uStack_2ac;
    func_0x048b0bc0(&plStack_8a0);
    uStack_278 = uStack_f8;
    uStack_274 = uStack_f4;
    uStack_270 = uStack_f0;
    uStack_26c = uStack_ec;
    uStack_268 = uStack_e8;
    uStack_264 = uStack_e4;
    uStack_260 = uStack_e0;
    uStack_25c = uStack_dc;
    uStack_258 = uStack_d8;
    uStack_254 = uStack_d4;
    iStack_250 = iStack_d0;
    uStack_24c = uStack_cc;
    uStack_248 = CONCAT71(uStack_c7,uStack_c8);
    func_0x07fed2f0(&puStack_8b8,&uStack_278,&UNK_0147df34,0x11,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef42d08;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_048b06c0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_048b02c0;
    puStack_8e8 = &UNK_07ff66b0;
    puStack_8e0 = &UNK_07ff6810;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    uStack_208 = (undefined1)uStack_248;
    uStack_218 = uStack_258;
    uStack_214 = uStack_254;
    iStack_210 = iStack_250;
    uStack_20c = uStack_24c;
    uStack_228 = uStack_268;
    uStack_224 = uStack_264;
    uStack_220 = uStack_260;
    uStack_21c = uStack_25c;
    uStack_238 = uStack_278;
    uStack_234 = uStack_274;
    uStack_230 = uStack_270;
    uStack_22c = uStack_26c;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_238,&UNK_013625a7,0x24,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ef8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_04906f70;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_04906c50;
    puStack_8e8 = &UNK_07ff69f0;
    puStack_8e0 = &UNK_07ff6b50;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    uStack_88 = uStack_208;
    uStack_98 = uStack_218;
    uStack_94 = uStack_214;
    iStack_90 = iStack_210;
    uStack_8c = uStack_20c;
    uStack_a8 = uStack_228;
    uStack_a4 = uStack_224;
    uStack_a0 = uStack_220;
    uStack_9c = uStack_21c;
    uStack_b8 = uStack_238;
    uStack_b4 = uStack_234;
    uStack_b0 = uStack_230;
    uStack_ac = uStack_22c;
    func_0x048b0bc0(&plStack_8a0);
    uStack_1f8 = uStack_b8;
    uStack_1f4 = uStack_b4;
    uStack_1f0 = uStack_b0;
    uStack_1ec = uStack_ac;
    uStack_1e8 = uStack_a8;
    uStack_1e4 = uStack_a4;
    uStack_1e0 = uStack_a0;
    uStack_1dc = uStack_9c;
    uStack_1d8 = uStack_98;
    uStack_1d4 = uStack_94;
    iStack_1d0 = iStack_90;
    uStack_1cc = uStack_8c;
    uStack_1c8 = CONCAT71(uStack_87,uStack_88);
    func_0x07fed2f0(&puStack_8b8,&uStack_1f8,&UNK_0129076a,0x1a,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ef8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_04906f70;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &SUB_04906c50;
    puStack_8e8 = &UNK_07ff6d30;
    puStack_8e0 = &UNK_07ff6e90;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_6f8 = (undefined1)uStack_1c8;
    uStack_708 = uStack_1d8;
    uStack_704 = uStack_1d4;
    iStack_700 = iStack_1d0;
    uStack_6fc = uStack_1cc;
    uStack_718 = uStack_1e8;
    uStack_714 = uStack_1e4;
    uStack_710 = uStack_1e0;
    uStack_70c = uStack_1dc;
    uStack_728 = uStack_1f8;
    uStack_724 = uStack_1f4;
    uStack_720 = uStack_1f0;
    uStack_71c = uStack_1ec;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_728,&UNK_01397225,0x12,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f100f30;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_07ff7260;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &UNK_07f40cf0;
    puStack_8e8 = &UNK_07ff7320;
    puStack_8e0 = &UNK_07ff7480;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_738 = cStack_6f8;
    uStack_748 = uStack_708;
    uStack_744 = uStack_704;
    iStack_740 = iStack_700;
    uStack_73c = uStack_6fc;
    uStack_758 = uStack_718;
    uStack_754 = uStack_714;
    uStack_750 = uStack_710;
    uStack_74c = uStack_70c;
    uStack_768 = (long *)CONCAT44(uStack_724,uStack_728);
    uStack_760 = (long *)CONCAT44(uStack_71c,uStack_720);
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_768,&UNK_01242ea1,0x1e,0);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f100fa8;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_07ff8f90;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &UNK_07ff8c70;
    puStack_8e8 = &UNK_07ff9050;
    puStack_8e0 = &UNK_07ff9230;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    cStack_778 = cStack_738;
    uStack_788 = uStack_748;
    uStack_784 = uStack_744;
    iStack_780 = iStack_740;
    uStack_77c = uStack_73c;
    uStack_798 = uStack_758;
    uStack_794 = uStack_754;
    uStack_790 = uStack_750;
    uStack_78c = uStack_74c;
    uStack_7a8 = uStack_768;
    uStack_7a0 = uStack_760;
    func_0x048b0bc0(&plStack_8a0);
    func_0x07fed2f0(&puStack_8b8,&uStack_7a8,&UNK_01242ec0,0x15,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f101098;
    if (plStack_8a0 != (long *)0x0) {
      lVar1 = *plStack_8a0;
      plStack_8a0 = plVar10;
      (**(code **)(lVar1 + 8))();
      plVar10 = plStack_8a0;
    }
    plStack_8a0 = plVar10;
    auStack_928[0] = uStack_8a8;
    plStack_920 = (long *)0x0;
    uStack_918 = (long *)((ulong)uStack_918 & 0xffffffff00000000);
    uStack_910 = 1;
    uStack_908 = 0;
    puStack_900 = &UNK_07ff98f0;
    puStack_8f8 = &SUB_048b06d0;
    puStack_8f0 = &UNK_07f44120;
    puStack_8e8 = &UNK_07ff99b0;
    puStack_8e0 = &UNK_07ff9ca0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    plStack_8c8 = (long *)0x0;
    func_0x048b05a0(puStack_8b0,auStack_928);
    plVar10 = plStack_8c8;
    if (plStack_8c8 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_8c8 + 1;
      lVar1 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07fed610(&puStack_8b8);
    func_0x048b0bc0(&plStack_8a0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12289d8  Server Auth Sound Enabled
 * 0x12289e1  th Sound Enabled
 */
