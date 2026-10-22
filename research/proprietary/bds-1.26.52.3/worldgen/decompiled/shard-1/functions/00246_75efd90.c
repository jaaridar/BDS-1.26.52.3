/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x76efd90 (ELF vaddr 0x75efd90)
 * Label: caller-of-callee
 * Body:  [[076efd90, 076f5928] [076f5930, 076f7cce] [076f7f18, 076f7f33] [076f7f44, 076f7fa7] [076f7fed, 076f801f] [076f8074, 076f8151]]
 * Ghidra: FUN_076efd90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_076efd90(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  bool bVar27;
  undefined *puStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined *puStack_960;
  undefined1 *puStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  long lStack_908;
  long lStack_900;
  undefined *puStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined1 *puStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined *puStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  long *plStack_888;
  long lStack_880;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined *puStack_768;
  undefined *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  long *plStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined *puStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined *puStack_6e8;
  undefined *puStack_6e0;
  undefined8 uStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  int iStack_6c0;
  uint uStack_6bc;
  undefined4 uStack_6b8;
  int iStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  int iStack_640;
  uint uStack_63c;
  undefined8 uStack_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  int iStack_600;
  uint uStack_5fc;
  undefined4 uStack_5f8;
  int iStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  int iStack_5c0;
  uint uStack_5bc;
  undefined4 uStack_5b8;
  int iStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  int iStack_580;
  uint uStack_57c;
  undefined4 uStack_578;
  int iStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined2 uStack_568;
  undefined1 uStack_566;
  undefined1 uStack_565;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  int iStack_540;
  uint uStack_53c;
  undefined4 uStack_538;
  int iStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  long lStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  uint uStack_4ec;
  undefined4 uStack_4e8;
  int iStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  uint uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  uint uStack_4ac;
  undefined4 uStack_4a8;
  int iStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  int iStack_470;
  uint uStack_46c;
  undefined4 uStack_468;
  int iStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  int iStack_430;
  uint uStack_42c;
  undefined4 uStack_428;
  int iStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  undefined4 uStack_3e8;
  int iStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  uint uStack_3ac;
  undefined4 uStack_3a8;
  int iStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  uint uStack_36c;
  undefined4 uStack_368;
  int iStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  uint uStack_32c;
  undefined4 uStack_328;
  int iStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined *puStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined1 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_280;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
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
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined4 uStack_1e8;
  int iStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f5aabe0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aabe0), iVar9 != 0)) {
    func_0x0774b8f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
    func_0x0410844d(&DAT_0f5aabe0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_076efe00;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5aab60 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_076efe00:
    puVar10 = &DAT_0f5aab60;
    if (iRam000000000f5aabc0 != -0x2b3da790) goto LAB_076efe58;
LAB_076efe2b:
    lVar15 = *(long *)(puVar10 + 0x68);
    if (lVar15 == 0) goto LAB_076efe58;
    bVar27 = (*(byte *)(lVar15 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar15 + 9);
    if (bVar27) {
      puVar10 = *(undefined **)(lVar15 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar27) {
      uVar11 = *(ulong *)(lVar15 + 0x10);
    }
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_076efe2b;
LAB_076efe58:
    puVar10 = &UNK_013fd634;
    uVar11 = 0xe;
  }
  FUN_0774bd30(&uStack_828,param_1,puVar10,uVar11);
  uVar17 = uStack_7f8;
  uStack_7f8._0_5_ = (uint5)(uint)uStack_7f8;
  puVar5 = uStack_7f8;
  uStack_7f0 = (undefined1 *)((ulong)uStack_7f0 & 0xffffffffffffff00);
  uStack_7f8._0_1_ = (char)uVar17;
  bVar27 = (char)uStack_7f8 == '\0';
  lStack_908 = param_1;
  uStack_7f8 = puVar5;
  if (bVar27) {
    func_0x0774f5b0(&puStack_8f8,&UNK_01220133,3);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar5 = (undefined1 *)((long)&uStack_8d0 + 1);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uVar18 = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uVar18 = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        uVar23 = 0;
        do {
          uVar18 = ((int)(char)puVar19[uVar23 + 3] ^
                   ((int)(char)puVar19[uVar23 + 2] ^
                   ((int)(char)puVar19[uVar23 + 1] ^
                   ((int)(char)puVar19[uVar23] ^ uVar18) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uVar18 = ((int)(char)puVar19[uVar22 + uVar23] ^ uVar18) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_800 = (undefined *)CONCAT44(uVar18,2);
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_800._4_4_);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_0774fc80;
    uStack_940 = &UNK_0774fc90;
    uStack_938 = (long *)((ulong)uStack_938._4_4_ << 0x20);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&uStack_820,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f00ef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f00ef;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_7f0 == '\0') {
      func_0x0774fce0(&puStack_988,&uStack_828);
    }
    puVar10 = uStack_828;
    iVar9 = uStack_7f8._4_4_;
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f0180;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5aab60 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f0180:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,(long)&uStack_800 + 4,(long)&uStack_800 + 4,&puStack_988);
    uStack_218 = (undefined4)uStack_828;
    uStack_214 = uStack_828._4_4_;
    uStack_210 = (undefined4)uStack_820;
    uStack_20c = uStack_820._4_4_;
    uStack_208 = (undefined4)uStack_818;
    uStack_204 = uStack_818._4_4_;
    uStack_200 = (undefined4)uStack_810;
    uStack_1fc = uStack_810._4_4_;
    uStack_1f8 = (undefined4)uStack_808;
    uStack_1f4 = uStack_808._4_4_;
    uStack_1f0 = (int)uStack_800;
    uStack_1ec = uStack_800._4_4_;
    uStack_1e8 = (uint)uStack_7f8;
    iStack_1e4 = uStack_7f8._4_4_;
    uStack_1e0 = (undefined4)uStack_7f0;
    func_0x048b0bc0(&puStack_8f8);
    uStack_418 = uStack_218;
    uStack_414 = uStack_214;
    uStack_410 = uStack_210;
    uStack_40c = uStack_20c;
    uStack_408 = uStack_208;
    uStack_404 = uStack_204;
    uStack_400 = uStack_200;
    uStack_3fc = uStack_1fc;
    uStack_3f8 = uStack_1f8;
    uStack_3f4 = uStack_1f4;
    uStack_3f0 = uStack_1f0;
    uStack_3ec = uStack_1ec;
    uStack_3e8 = uStack_1e8;
    iStack_3e4 = iStack_1e4;
    uStack_3e0 = uStack_1e0;
    uStack_3dc = uStack_1dc;
    func_0x0774f5b0(&puStack_8f8,&UNK_0144bbed,4);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_3ec = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_3ec = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_3ec = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_3ec = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_3ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_3ec = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_3ec) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_3f0 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_3ec);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_0774fea0;
    uStack_940 = &UNK_0774feb0;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&uStack_410,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_3fc,uStack_400);
    uStack_790 = CONCAT44(uStack_3f4,uStack_3f8);
    uStack_7a8 = (undefined *)CONCAT44(uStack_40c,uStack_410);
    uStack_7a0 = (long *)CONCAT44(uStack_404,uStack_408);
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f052f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f052f;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_3e0 == '\0') {
      func_0x0774fce0(&puStack_988,&uStack_418);
    }
    iVar9 = iStack_3e4;
    lVar15 = CONCAT44(uStack_414,uStack_418);
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar24 = *plVar13;
      if (lVar24 == -1) goto LAB_076f05c0;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar24 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f5aab60 + 4)
            );
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_076f05c0:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_3ec,&uStack_3ec,&puStack_988);
    uStack_1d8 = CONCAT44(uStack_414,uStack_418);
    uStack_1d0 = CONCAT44(uStack_40c,uStack_410);
    uStack_1c8 = uStack_408;
    uStack_1c4 = uStack_404;
    uStack_1c0 = uStack_400;
    uStack_1bc = uStack_3fc;
    uStack_1b8 = uStack_3f8;
    uStack_1b4 = uStack_3f4;
    uStack_1b0 = uStack_3f0;
    uStack_1ac = uStack_3ec;
    uStack_1a8 = uStack_3e8;
    iStack_1a4 = iStack_3e4;
    uStack_1a0 = uStack_3e0;
    func_0x048b0bc0(&puStack_8f8);
    uStack_3d8 = (undefined4)uStack_1d8;
    uStack_3d4 = uStack_1d8._4_4_;
    uStack_3d0 = (undefined4)uStack_1d0;
    uStack_3cc = uStack_1d0._4_4_;
    uStack_3c8 = uStack_1c8;
    uStack_3c4 = uStack_1c4;
    uStack_3c0 = uStack_1c0;
    uStack_3bc = uStack_1bc;
    uStack_3b8 = uStack_1b8;
    uStack_3b4 = uStack_1b4;
    uStack_3b0 = uStack_1b0;
    uStack_3ac = uStack_1ac;
    uStack_3a8 = uStack_1a8;
    iStack_3a4 = iStack_1a4;
    uStack_3a0 = uStack_1a0;
    uStack_39c = uStack_19c;
    func_0x0774f5b0(&puStack_8f8,&UNK_0132623b,9);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_3ac = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_3ac = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_3ac = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_3ac = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_3ac) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_3ac = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_3ac) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_3b0 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_3ac);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_0774ff00;
    uStack_940 = &UNK_0774ff10;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&uStack_3d0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_3bc,uStack_3c0);
    uStack_790 = CONCAT44(uStack_3b4,uStack_3b8);
    uStack_7a8 = (undefined *)CONCAT44(uStack_3cc,uStack_3d0);
    uStack_7a0 = (long *)CONCAT44(uStack_3c4,uStack_3c8);
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f096f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f096f;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_3a0 == '\0') {
      func_0x0774fce0(&puStack_988,&uStack_3d8);
    }
    iVar9 = iStack_3a4;
    lVar15 = CONCAT44(uStack_3d4,uStack_3d8);
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar24 = *plVar13;
      if (lVar24 == -1) goto LAB_076f0a00;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar24 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f5aab60 + 4)
            );
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_076f0a00:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_3ac,&uStack_3ac,&puStack_988);
    uStack_198 = CONCAT44(uStack_3d4,uStack_3d8);
    uStack_190 = CONCAT44(uStack_3cc,uStack_3d0);
    uStack_188 = uStack_3c8;
    uStack_184 = uStack_3c4;
    uStack_180 = uStack_3c0;
    uStack_17c = uStack_3bc;
    uStack_178 = uStack_3b8;
    uStack_174 = uStack_3b4;
    uStack_170 = uStack_3b0;
    uStack_16c = uStack_3ac;
    uStack_168 = uStack_3a8;
    iStack_164 = iStack_3a4;
    uStack_160 = uStack_3a0;
    func_0x048b0bc0(&puStack_8f8);
    uStack_398 = (undefined4)uStack_198;
    uStack_394 = uStack_198._4_4_;
    uStack_390 = (undefined4)uStack_190;
    uStack_38c = uStack_190._4_4_;
    uStack_388 = uStack_188;
    uStack_384 = uStack_184;
    uStack_380 = uStack_180;
    uStack_37c = uStack_17c;
    uStack_378 = uStack_178;
    uStack_374 = uStack_174;
    uStack_370 = uStack_170;
    uStack_36c = uStack_16c;
    uStack_368 = uStack_168;
    iStack_364 = iStack_164;
    uStack_360 = uStack_160;
    uStack_35c = uStack_15c;
    func_0x0774f5b0(&puStack_8f8,&UNK_0128f00b,5);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_36c = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_36c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_36c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_36c = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_36c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_36c = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_36c) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_370 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_36c);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_0774ff60;
    uStack_940 = &UNK_0774ff70;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&uStack_390,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_37c,uStack_380);
    uStack_790 = CONCAT44(uStack_374,uStack_378);
    uStack_7a8 = (undefined *)CONCAT44(uStack_38c,uStack_390);
    uStack_7a0 = (long *)CONCAT44(uStack_384,uStack_388);
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f0daf:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f0daf;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_360 == '\0') {
      func_0x0774fce0(&puStack_988,&uStack_398);
    }
    iVar9 = iStack_364;
    lVar15 = CONCAT44(uStack_394,uStack_398);
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar24 = *plVar13;
      if (lVar24 == -1) goto LAB_076f0e40;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar24 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f5aab60 + 4)
            );
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_076f0e40:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_36c,&uStack_36c,&puStack_988);
    uStack_158 = CONCAT44(uStack_394,uStack_398);
    uStack_150 = CONCAT44(uStack_38c,uStack_390);
    uStack_148 = uStack_388;
    uStack_144 = uStack_384;
    uStack_140 = uStack_380;
    uStack_13c = uStack_37c;
    uStack_138 = uStack_378;
    uStack_134 = uStack_374;
    uStack_130 = uStack_370;
    uStack_12c = uStack_36c;
    uStack_128 = uStack_368;
    iStack_124 = iStack_364;
    uStack_120 = uStack_360;
    func_0x048b0bc0(&puStack_8f8);
    uStack_358 = (undefined4)uStack_158;
    uStack_354 = uStack_158._4_4_;
    uStack_350 = (undefined4)uStack_150;
    uStack_34c = uStack_150._4_4_;
    uStack_348 = uStack_148;
    uStack_344 = uStack_144;
    uStack_340 = uStack_140;
    uStack_33c = uStack_13c;
    uStack_338 = uStack_138;
    uStack_334 = uStack_134;
    uStack_330 = uStack_130;
    uStack_32c = uStack_12c;
    uStack_328 = uStack_128;
    iStack_324 = iStack_124;
    uStack_320 = uStack_120;
    uStack_31c = uStack_11c;
    func_0x0774f5b0(&puStack_8f8,&UNK_013959a1,0xc);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_32c = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_32c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_32c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_32c = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_32c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_32c = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_32c) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_330 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_32c);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_0774ffc0;
    uStack_940 = &UNK_0774ffd0;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&uStack_350,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_33c,uStack_340);
    uStack_790 = CONCAT44(uStack_334,uStack_338);
    uStack_7a8 = (undefined *)CONCAT44(uStack_34c,uStack_350);
    uStack_7a0 = (long *)CONCAT44(uStack_344,uStack_348);
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f11ef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f11ef;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_320 == '\0') {
      func_0x0774fce0(&puStack_988,&uStack_358);
    }
    iVar9 = iStack_324;
    lVar15 = CONCAT44(uStack_354,uStack_358);
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar24 = *plVar13;
      if (lVar24 == -1) goto LAB_076f1280;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar24 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f5aab60 + 4)
            );
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_076f1280:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_32c,&uStack_32c,&puStack_988);
    uStack_118 = CONCAT44(uStack_354,uStack_358);
    uStack_110 = CONCAT44(uStack_34c,uStack_350);
    uStack_108 = uStack_348;
    uStack_104 = uStack_344;
    uStack_100 = uStack_340;
    uStack_fc = uStack_33c;
    uStack_f8 = uStack_338;
    uStack_f4 = uStack_334;
    uStack_f0 = uStack_330;
    uStack_ec = uStack_32c;
    uStack_e8 = uStack_328;
    iStack_e4 = iStack_324;
    uStack_e0 = uStack_320;
    func_0x048b0bc0(&puStack_8f8);
    uStack_4d8 = (undefined4)uStack_118;
    uStack_4d4 = uStack_118._4_4_;
    uStack_4d0 = (undefined4)uStack_110;
    uStack_4cc = uStack_110._4_4_;
    uStack_4c8 = uStack_108;
    uStack_4c4 = uStack_104;
    uStack_4c0 = uStack_100;
    uStack_4bc = uStack_fc;
    uStack_4b8 = uStack_f8;
    uStack_4b4 = uStack_f4;
    uStack_4b0 = uStack_f0;
    uStack_4ac = uStack_ec;
    uStack_4a8 = uStack_e8;
    iStack_4a4 = iStack_e4;
    uStack_4a0 = uStack_e0;
    uStack_49c = uStack_dc;
    func_0x0774f5b0(&puStack_8f8,&UNK_012dbaad,3);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_4ac = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_4ac = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_4ac = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_4ac = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_4ac) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_4ac = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_4ac) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_4b0 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_4ac);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_07750020;
    uStack_940 = &UNK_07750030;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&uStack_4d0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_4bc,uStack_4c0);
    uStack_790 = CONCAT44(uStack_4b4,uStack_4b8);
    uStack_7a8 = (undefined *)CONCAT44(uStack_4cc,uStack_4d0);
    uStack_7a0 = (long *)CONCAT44(uStack_4c4,uStack_4c8);
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f162f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f162f;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_4a0 == '\0') {
      func_0x0774fce0(&puStack_988,&uStack_4d8);
    }
    iVar9 = iStack_4a4;
    lVar15 = CONCAT44(uStack_4d4,uStack_4d8);
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar24 = *plVar13;
      if (lVar24 == -1) goto LAB_076f16c0;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar24 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f5aab60 + 4)
            );
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_076f16c0:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_4ac,&uStack_4ac,&puStack_988);
    uStack_458 = (undefined *)CONCAT44(uStack_4d4,uStack_4d8);
    uStack_450 = (undefined *)CONCAT44(uStack_4cc,uStack_4d0);
    uStack_448 = uStack_4c8;
    uStack_444 = uStack_4c4;
    uStack_440 = uStack_4c0;
    uStack_43c = uStack_4bc;
    uStack_438 = uStack_4b8;
    uStack_434 = uStack_4b4;
    iStack_430 = uStack_4b0;
    uStack_42c = uStack_4ac;
    uStack_428 = uStack_4a8;
    iStack_424 = iStack_4a4;
    uStack_420 = uStack_4a0;
    func_0x048b0bc0(&puStack_8f8);
    uStack_568 = SUB82(uStack_458,0);
    uStack_566 = (undefined1)((ulong)uStack_458 >> 0x10);
    uStack_565 = (undefined1)((ulong)uStack_458 >> 0x18);
    uStack_564 = uStack_458._4_4_;
    uStack_560 = (undefined4)uStack_450;
    uStack_55c = uStack_450._4_4_;
    uStack_558 = uStack_448;
    uStack_554 = uStack_444;
    uStack_550 = uStack_440;
    uStack_54c = uStack_43c;
    uStack_548 = uStack_438;
    uStack_544 = uStack_434;
    iStack_540 = iStack_430;
    uStack_53c = uStack_42c;
    uStack_538 = uStack_428;
    iStack_534 = iStack_424;
    uStack_530 = uStack_420;
    uStack_52c = uStack_41c;
    func_0x0774f5b0(&puStack_8f8,&UNK_0127678b,0xd);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_53c = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_53c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_53c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_53c = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_53c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_53c = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_53c) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    iStack_540 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_53c);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_07750080;
    uStack_940 = &UNK_07750090;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&uStack_560,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_54c,uStack_550);
    uStack_790 = CONCAT44(uStack_544,uStack_548);
    uStack_7a8 = (undefined *)CONCAT44(uStack_55c,uStack_560);
    uStack_7a0 = (long *)CONCAT44(uStack_554,uStack_558);
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f1a6f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f1a6f;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_530 == '\0') {
      func_0x0774fce0(&puStack_988,&uStack_568);
    }
    iVar9 = iStack_534;
    lVar15 = CONCAT44(uStack_564,CONCAT13(uStack_565,CONCAT12(uStack_566,uStack_568)));
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar24 = *plVar13;
      if (lVar24 == -1) goto LAB_076f1b00;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar24 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f5aab60 + 4)
            );
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_076f1b00:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_53c,&uStack_53c,&puStack_988);
    uStack_498 = (undefined *)
                 CONCAT44(uStack_564,CONCAT13(uStack_565,CONCAT12(uStack_566,uStack_568)));
    uStack_490 = (undefined *)CONCAT44(uStack_55c,uStack_560);
    uStack_488 = uStack_558;
    uStack_484 = uStack_554;
    uStack_480 = uStack_550;
    uStack_47c = uStack_54c;
    uStack_478 = uStack_548;
    uStack_474 = uStack_544;
    iStack_470 = iStack_540;
    uStack_46c = uStack_53c;
    uStack_468 = uStack_538;
    iStack_464 = iStack_534;
    uStack_460 = uStack_530;
    func_0x048b0bc0(&puStack_8f8);
    puStack_518 = uStack_498;
    puStack_510 = uStack_490;
    uStack_508 = uStack_488;
    uStack_504 = uStack_484;
    uStack_500 = uStack_480;
    uStack_4fc = uStack_47c;
    uStack_4f8 = uStack_478;
    uStack_4f4 = uStack_474;
    uStack_4f0 = iStack_470;
    uStack_4ec = uStack_46c;
    uStack_4e8 = uStack_468;
    iStack_4e4 = iStack_464;
    uStack_4e0 = uStack_460;
    uStack_4dc = uStack_45c;
    func_0x0774f5b0(&puStack_8f8,&UNK_012c1cb6,7);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_4ec = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_4ec = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_4ec = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_4ec = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_4ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_4ec = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_4ec) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_4f0 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_4ec);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_077500e0;
    uStack_940 = &UNK_077500f0;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&puStack_510,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_4fc,uStack_500);
    uStack_790 = CONCAT44(uStack_4f4,uStack_4f8);
    uStack_7a8 = puStack_510;
    uStack_7a0 = (long *)CONCAT44(uStack_504,uStack_508);
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f1eaf:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f1eaf;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_4e0 == '\0') {
      func_0x0774fce0(&puStack_988,&puStack_518);
    }
    iVar9 = iStack_4e4;
    puVar10 = puStack_518;
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f1f40;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5aab60 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f1f40:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_4ec,&uStack_4ec,&puStack_988);
    puStack_728 = puStack_518;
    uStack_720 = puStack_510;
    uStack_718 = (undefined *)CONCAT44(uStack_504,uStack_508);
    uStack_710 = CONCAT44(uStack_4fc,uStack_500);
    uStack_708 = CONCAT44(uStack_4f4,uStack_4f8);
    uStack_700 = CONCAT44(uStack_4ec,uStack_4f0);
    uStack_6f8 = CONCAT44(iStack_4e4,uStack_4e8);
    uStack_6f0 = uStack_4e0;
    func_0x048b0bc0(&puStack_8f8);
    puStack_6e8 = puStack_728;
    puStack_6e0 = uStack_720;
    uStack_6d8 = uStack_718;
    uStack_6d0 = (undefined4)uStack_710;
    uStack_6cc = uStack_710._4_4_;
    uStack_6c8 = (undefined4)uStack_708;
    uStack_6c4 = uStack_708._4_4_;
    iStack_6c0 = (undefined4)uStack_700;
    uStack_6bc = uStack_700._4_4_;
    uStack_6b8 = (undefined4)uStack_6f8;
    iStack_6b4 = uStack_6f8._4_4_;
    uStack_6b0 = uStack_6f0;
    uStack_6ac = uStack_6ec;
    func_0x0774f5b0(&puStack_8f8,&UNK_01463c7d,0xc);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_6bc = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_6bc = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_6bc = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_6bc = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_6bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_6bc = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_6bc) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    iStack_6c0 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_6bc);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_07750140;
    uStack_940 = &UNK_07750150;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&puStack_6e0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_6cc,uStack_6d0);
    uStack_790 = CONCAT44(uStack_6c4,uStack_6c8);
    uStack_7a8 = puStack_6e0;
    uStack_7a0 = (long *)uStack_6d8;
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f22ef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f22ef;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_6b0 == '\0') {
      func_0x0774fce0(&puStack_988,&puStack_6e8);
    }
    iVar9 = iStack_6b4;
    puVar10 = puStack_6e8;
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f2380;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5aab60 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f2380:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_6bc,&uStack_6bc,&puStack_988);
    uStack_5a8 = puStack_6e8;
    uStack_5a0 = puStack_6e0;
    uStack_598 = (undefined4)uStack_6d8;
    uStack_594 = uStack_6d8._4_4_;
    uStack_590 = uStack_6d0;
    uStack_58c = uStack_6cc;
    uStack_588 = uStack_6c8;
    uStack_584 = uStack_6c4;
    iStack_580 = iStack_6c0;
    uStack_57c = uStack_6bc;
    uStack_578 = uStack_6b8;
    iStack_574 = iStack_6b4;
    uStack_570 = uStack_6b0;
    func_0x048b0bc0(&puStack_8f8);
    puStack_668 = uStack_5a8;
    puStack_660 = uStack_5a0;
    uStack_658 = uStack_598;
    uStack_654 = uStack_594;
    uStack_650 = uStack_590;
    uStack_64c = uStack_58c;
    uStack_648 = uStack_588;
    uStack_644 = uStack_584;
    iStack_640 = iStack_580;
    uStack_63c = uStack_57c;
    uStack_638 = CONCAT44(iStack_574,uStack_578);
    uStack_630 = uStack_570;
    uStack_62c = uStack_56c;
    func_0x0774f5b0(&puStack_8f8,&UNK_012dbab1,0x11);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_63c = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_63c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_63c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_63c = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_63c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_63c = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_63c) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    iStack_640 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_63c);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_077501a0;
    uStack_940 = &UNK_077501b0;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&puStack_660,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_64c,uStack_650);
    uStack_790 = CONCAT44(uStack_644,uStack_648);
    uStack_7a8 = puStack_660;
    uStack_7a0 = (long *)CONCAT44(uStack_654,uStack_658);
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f272f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f272f;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_630 == '\0') {
      func_0x0774fce0(&puStack_988,&puStack_668);
    }
    puVar10 = puStack_668;
    iVar9 = uStack_638._4_4_;
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f27c0;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5aab60 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f27c0:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_63c,&uStack_63c,&puStack_988);
    puStack_6a8 = puStack_668;
    puStack_6a0 = puStack_660;
    uStack_698 = (undefined *)CONCAT44(uStack_654,uStack_658);
    uStack_690 = CONCAT44(uStack_64c,uStack_650);
    uStack_688 = CONCAT44(uStack_644,uStack_648);
    uStack_680 = CONCAT44(uStack_63c,iStack_640);
    uStack_678 = uStack_638;
    uStack_670 = uStack_630;
    func_0x048b0bc0(&puStack_8f8);
    puStack_5e8 = puStack_6a8;
    puStack_5e0 = puStack_6a0;
    uStack_5d8 = uStack_698;
    uStack_5d0 = (undefined4)uStack_690;
    uStack_5cc = uStack_690._4_4_;
    uStack_5c8 = (undefined4)uStack_688;
    uStack_5c4 = uStack_688._4_4_;
    iStack_5c0 = (int)uStack_680;
    uStack_5bc = uStack_680._4_4_;
    uStack_5b8 = (undefined4)uStack_678;
    iStack_5b4 = uStack_678._4_4_;
    uStack_5b0 = uStack_670;
    uStack_5ac = uStack_66c;
    func_0x0774f5b0(&puStack_8f8,&UNK_011f1cdf,10);
    puVar21 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    puVar19 = puVar5;
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar21 = puStack_8c8;
      puVar19 = uStack_8c0;
    }
    if (puVar21 == (undefined1 *)0x0) {
      uStack_5bc = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar21 & 3);
      if (puVar21 < (undefined1 *)0x4) {
        uStack_5bc = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_5bc = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_5bc = ((int)(char)puVar19[uVar23 + 3] ^
                       ((int)(char)puVar19[uVar23 + 2] ^
                       ((int)(char)puVar19[uVar23 + 1] ^
                       ((int)(char)puVar19[uVar23] ^ uStack_5bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar21 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_5bc = ((int)(char)puVar19[uVar22 + uVar23] ^ uStack_5bc) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    iStack_5c0 = 2;
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_5bc);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_07750200;
    uStack_940 = &UNK_07750210;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&puStack_5e0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_798 = (undefined *)CONCAT44(uStack_5cc,uStack_5d0);
    uStack_790 = CONCAT44(uStack_5c4,uStack_5c8);
    uStack_7a8 = puStack_5e0;
    uStack_7a0 = (long *)uStack_5d8;
    func_0x0774f950(&puStack_988,&uStack_7a8,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f2b6f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f2b6f;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)((long)uStack_978 + 0x18) = *(uint *)((long)uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_5b0 == '\0') {
      func_0x0774fce0(&puStack_988,&puStack_5e8);
    }
    iVar9 = iStack_5b4;
    puVar10 = puStack_5e8;
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f2c00;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5aab60 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f2c00:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,&uStack_5bc,&uStack_5bc,&puStack_988);
    puStack_628 = puStack_5e8;
    puStack_620 = puStack_5e0;
    uStack_618 = (undefined4)uStack_5d8;
    uStack_614 = uStack_5d8._4_4_;
    uStack_610 = uStack_5d0;
    uStack_60c = uStack_5cc;
    uStack_608 = uStack_5c8;
    uStack_604 = uStack_5c4;
    iStack_600 = iStack_5c0;
    uStack_5fc = uStack_5bc;
    uStack_5f8 = uStack_5b8;
    iStack_5f4 = iStack_5b4;
    uStack_5f0 = uStack_5b0;
    func_0x048b0bc0(&puStack_8f8);
    uStack_7a8 = puStack_628;
    uStack_7a0 = (long *)puStack_620;
    uStack_798 = (undefined *)CONCAT44(uStack_614,uStack_618);
    uStack_790 = CONCAT44(uStack_60c,uStack_610);
    uStack_788 = CONCAT44(uStack_604,uStack_608);
    uStack_780 = (undefined *)CONCAT44(uStack_5fc,iStack_600);
    uStack_778 = (undefined1 *)CONCAT44(iStack_5f4,uStack_5f8);
    uStack_770 = (undefined1 *)CONCAT44(uStack_5ec,uStack_5f0);
    func_0x0774f5b0(&puStack_8f8,&UNK_0122739a,0x16);
    puVar19 = (undefined1 *)((ulong)uStack_8d0 >> 1 & 0x7f);
    if (((ulong)uStack_8d0 & 1) != 0) {
      puVar19 = puStack_8c8;
      puVar5 = uStack_8c0;
    }
    if (puVar19 == (undefined1 *)0x0) {
      uVar18 = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)puVar19 & 3);
      if (puVar19 < (undefined1 *)0x4) {
        uVar18 = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        uVar23 = 0;
        do {
          uVar18 = ((int)(char)puVar5[uVar23 + 3] ^
                   ((int)(char)puVar5[uVar23 + 2] ^
                   ((int)(char)puVar5[uVar23 + 1] ^ ((int)(char)puVar5[uVar23] ^ uVar18) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar19 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uVar18 = ((int)(char)puVar5[uVar22 + uVar23] ^ uVar18) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_780 = (undefined *)CONCAT44(uVar18,2);
    if ((DAT_0f5aac00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aac00), iVar9 != 0)) {
      func_0x0774ba00();
      func_0x0410844d(&DAT_0f5aac00);
    }
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,uStack_780._4_4_);
    uStack_980 = 0;
    uStack_978 = (undefined *)CONCAT44(uStack_978._4_4_,3);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_07750260;
    uStack_940 = &UNK_07750270;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(&uStack_7a0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_48 = (undefined4)uStack_790;
    uStack_44 = uStack_790._4_4_;
    uStack_40 = (undefined4)uStack_788;
    uStack_3c = uStack_788._4_4_;
    uStack_58 = (undefined4)uStack_7a0;
    uStack_54 = uStack_7a0._4_4_;
    uStack_50 = (undefined4)uStack_798;
    uStack_4c = uStack_798._4_4_;
    func_0x0774f950(&puStack_988,&uStack_58,&puStack_8f8);
    if (uStack_970._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(uStack_978 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_980) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f2f9f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_970._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(uStack_978 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_970) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f2f9f;
      }
      if (uStack_970._4_4_ == 0) {
        *(uint *)(uStack_978 + 0x18) = *(uint *)(uStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_770 == '\0') {
      func_0x0774fce0(&puStack_988,&uStack_7a8);
    }
    puVar10 = uStack_7a8;
    iVar9 = uStack_778._4_4_;
    if ((DAT_0f5aabe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aabe0), iVar8 != 0)) {
      func_0x0774b8f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aab60,0xf53dab8);
      func_0x0410844d(&DAT_0f5aabe0);
    }
    param_1 = lStack_908;
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5aab60 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f3030;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5aab60 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f3030:
      puVar10 = &DAT_0f5aab60;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar12 != piVar3 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012c1cbe),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_988 = (undefined *)((ulong)puStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(piVar12 + 2,(long)&uStack_780 + 4,(long)&uStack_780 + 4,&puStack_988);
    func_0x048b0bc0(&puStack_8f8);
  }
  if ((DAT_0f5ab998 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5ab998), iVar9 != 0)) {
    func_0x0777c860();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ab918,0xf53dab8);
    func_0x0410844d(&DAT_0f5ab998);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ab918 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_076f3140;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5ab918 + 4))
  ;
  if (plVar13 != *(long **)(param_1 + 0x38)) {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_076f316b;
LAB_076f31ad:
    func_0x0777cee0(&uStack_828,param_1,&UNK_0128ef98,0xb);
    if ((char)uStack_7f8 != '\0') goto LAB_076f3c6b;
LAB_076f31d7:
    func_0x0777da80(&puStack_8f8,&uStack_828,&UNK_012f5980,0xc,1);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0e37d8;
    if (uStack_8e0 != (long *)0x0) {
      lVar15 = *uStack_8e0;
      uStack_8e0 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = uStack_8e0;
    }
    uStack_8e0 = plVar13;
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
    uStack_980 = 0;
    uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_0777e040;
    uStack_940 = &UNK_0777e1a0;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(uStack_8f0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0777dd40(&puStack_8f8);
    puVar10 = uStack_828;
    puStack_668 = (undefined *)uStack_820;
    puStack_660 = (undefined *)uStack_818;
    uStack_658 = (undefined4)uStack_810;
    uStack_654 = uStack_810._4_4_;
    uStack_650 = (undefined4)uStack_808;
    uStack_64c = uStack_808._4_4_;
    iVar9 = (int)uStack_800;
    uVar18 = uStack_800._4_4_;
    uVar6 = (char)uStack_7f8;
    func_0x048b0bc0(&uStack_8e0);
    if ((DAT_0f5ab998 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ab998), iVar8 != 0)) {
      func_0x0777c860();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ab918,0xf53dab8);
      func_0x0410844d(&DAT_0f5ab998);
    }
    puVar25 = puVar10 + 0x18;
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5ab918 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f33c0;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5ab918 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f33c0:
      puVar20 = &DAT_0f5ab918;
    }
    else {
      puVar20 = (undefined *)plVar13[2];
    }
    if ((1 < iVar9 - 1U) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0141713b),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar20 = (undefined *)func_0x048b0c90(puVar25,puVar20,uVar18,1);
    if (puVar20 == (undefined *)0x0) {
      puStack_8f8 = (undefined *)0x0;
      uStack_8f0 = 0;
      func_0x048b0d20(&puStack_8f8);
      puVar20 = puStack_8f8;
    }
    *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 5;
    puStack_5e8 = puVar10;
    puStack_5e0 = puStack_668;
    uStack_5d8 = puStack_660;
    uStack_5d0 = uStack_658;
    uStack_5cc = uStack_654;
    uStack_5c8 = uStack_650;
    uStack_5c4 = uStack_64c;
    iStack_5c0 = iVar9;
    uStack_5bc = uVar18;
    uStack_5b8 = CONCAT31(uStack_5b8._1_3_,uVar6);
    uStack_690 = 0xff;
    puStack_6a0 = (undefined *)0xffffffffffffffff;
    uStack_698 = (undefined *)0x0;
    puStack_6a8 = &UNK_0f4e3aa0;
    uStack_688 = 0;
    uStack_680 = 0;
    uStack_678 = 0;
    puStack_6e8 = (undefined *)CONCAT26(puStack_6e8._6_2_,0xa0b09060500);
    func_0x076ef9d0(&puStack_6a8,&puStack_6e8,6);
    lVar15 = uStack_688;
    uStack_598 = CONCAT31(uStack_598._1_3_,(undefined1)uStack_690);
    uStack_5a8 = puStack_6a0;
    uStack_5a0 = uStack_698;
    lVar24 = uStack_680 - uStack_688;
    if (lVar24 == 0) {
      lVar14 = 0;
      lStack_900 = 0;
      if (iVar9 != 4) goto LAB_076f359b;
LAB_076f35fa:
      lVar15 = func_0x0777e750(&puStack_5e8);
      lVar15 = *(long *)(lVar15 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
LAB_076f3630:
      *(undefined1 *)(puVar16 + 3) = (undefined1)uStack_598;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_5a8;
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_5a8._4_4_;
      *(undefined4 *)(puVar16 + 2) = (undefined4)uStack_5a0;
      *(undefined4 *)((long)puVar16 + 0x14) = uStack_5a0._4_4_;
      *puVar16 = &UNK_0f4e3aa0;
      puVar16[4] = lVar14;
      puVar16[5] = lStack_900;
      puVar16[6] = lStack_900;
      plVar13 = *(long **)(lVar15 + 8);
      *(undefined8 **)(lVar15 + 8) = puVar16;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
      lVar14 = 0;
      lStack_900 = 0;
LAB_076f3687:
      uStack_5f8 = CONCAT31(uStack_5f8._1_3_,(undefined1)uStack_5b8);
      uStack_608 = uStack_5c8;
      uStack_604 = uStack_5c4;
      iStack_600 = iStack_5c0;
      uStack_5fc = uStack_5bc;
      uStack_618 = (undefined4)uStack_5d8;
      uStack_614 = uStack_5d8._4_4_;
      uStack_610 = uStack_5d0;
      uStack_60c = uStack_5cc;
      puStack_628 = puStack_5e8;
      puStack_620 = puStack_5e0;
      func_0x0777d4d0(&puStack_8f8,puStack_5e8 + 0x18);
      if (uStack_8e0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x60);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_8e0) {
          piVar12 = piVar12 + 0x16;
          iVar9 = *piVar12;
        }
        lVar15 = *(long *)(piVar12 + 0xc);
        while (lVar15 != uStack_8f0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar15 = *(long *)(piVar12 + 0xc);
        }
LAB_076f373f:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
      }
      else {
        if (uStack_8e0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x48);
          iVar9 = *piVar12;
          while (iVar9 != (int)uStack_8e0) {
            piVar12 = piVar12 + 0x1a;
            iVar9 = *piVar12;
          }
          goto LAB_076f373f;
        }
        if (uStack_8e0._4_4_ == 0) {
          *(uint *)(uStack_8e8 + 0x18) = *(uint *)(uStack_8e8 + 0x18) | 0x40000;
        }
      }
      func_0x0777da80(&puStack_8f8,&puStack_628,&UNK_01496843,7,0x10);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar16 = &UNK_0ef44b00;
      if (uStack_8e0 != (long *)0x0) {
        lVar15 = *uStack_8e0;
        uStack_8e0 = puVar16;
        (**(code **)(lVar15 + 8))();
        puVar16 = uStack_8e0;
      }
      uStack_8e0 = puVar16;
      puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
      uStack_980 = 0;
      uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
      uStack_970 = (long *)0x1;
      uStack_968 = 0;
      puStack_960 = &UNK_048b3f30;
      puStack_958 = &SUB_048b06d0;
      uStack_950 = &SUB_048b2190;
      uStack_948 = &UNK_0777e8d0;
      uStack_940 = &UNK_0777eaa0;
      uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
      uStack_930 = 0;
      uStack_928 = (long *)0x0;
      func_0x048b05a0(uStack_8f0,&puStack_988);
      plVar13 = uStack_928;
      if (uStack_928 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_928 + 1;
        lVar15 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*uStack_928 + 0x10))(uStack_928);
          func_0x0412c2d0(plVar13);
        }
      }
      func_0x0777dd40(&puStack_8f8);
      uStack_778 = (undefined1 *)CONCAT71(uStack_778._1_7_,(char)uStack_5f8);
      uStack_788 = CONCAT44(uStack_604,uStack_608);
      uStack_780 = (undefined *)CONCAT44(uStack_5fc,iStack_600);
      uStack_798 = (undefined *)CONCAT44(uStack_614,uStack_618);
      uStack_790 = CONCAT44(uStack_60c,uStack_610);
      uStack_7a8 = puStack_628;
      uStack_7a0 = (long *)puStack_620;
      func_0x048b0bc0(&uStack_8e0);
      uStack_968 = 0;
      uStack_920 = 0;
      uStack_918 = 0;
      uStack_930 = 0;
      uStack_928 = (long *)0x0;
      uStack_940 = (undefined *)0x0;
      uStack_938 = (long *)0x0;
      uStack_950 = (undefined1 *)0x0;
      uStack_948 = (undefined *)0x0;
      puStack_960 = (undefined *)0x0;
      puStack_958 = (undefined1 *)0x0;
      uStack_910 = 0;
      uStack_980 = 0xffffffffffffffff;
      uStack_978 = (undefined *)0x0;
      uStack_970 = (long *)0xff;
      puStack_988 = &UNK_0f4e3c70;
      func_0x041679a0(&uStack_968);
      puStack_960 = (undefined *)func_0x041681f0(&uStack_968,0xf547a30);
      puStack_958 = (undefined1 *)func_0x041681f0(&uStack_968,0xf547770);
      uStack_950 = (undefined1 *)0x0;
      uStack_948 = (undefined *)0x0;
      uStack_940 = (undefined *)0x0;
      uStack_938 = (long *)0x0;
      uStack_930 = 0;
      uStack_928 = (long *)0x0;
      uStack_920 = 0;
      uStack_918 = 0;
      uStack_910 = 1;
      uStack_980 = 0x10000;
      uStack_8f0 = 0x10000;
      uStack_8e8 = uStack_978;
      uStack_8e0 = (long *)CONCAT71(uStack_8e0._1_7_,(undefined1)uStack_970);
      puStack_8f8 = &UNK_0f4e3c70;
      func_0x04167a20(&uStack_8d8,&uStack_968);
      uStack_8d0 = puStack_960;
      puStack_8c8 = puStack_958;
      uStack_8c0 = uStack_950;
      uStack_8b8 = uStack_948;
      uStack_8b0 = uStack_940;
      uStack_8a8 = uStack_938;
      if (uStack_938 != (long *)0x0) {
        LOCK();
        uStack_938[1] = uStack_938[1] + 1;
        UNLOCK();
      }
      puStack_8a0 = (undefined *)uStack_930;
      if (((ulong)uStack_928 & 1) == 0) {
        plStack_888 = (long *)uStack_918;
        uStack_898 = uStack_928;
        uStack_890 = uStack_920;
      }
      else {
        func_0x0412e5e0(&uStack_898,uStack_918,uStack_920);
      }
      lStack_880 = uStack_910;
      if ((int)uStack_780 == 4) {
        lStack_520 = lVar14;
        lVar15 = func_0x0777e750(&uStack_7a8);
        lVar15 = *(long *)(lVar15 + 0x48);
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x80,0);
        }
LAB_076f3ac0:
        *(undefined1 *)(puVar16 + 3) = (undefined1)uStack_8e0;
        *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_8f0;
        *(undefined4 *)((long)puVar16 + 0xc) = uStack_8f0._4_4_;
        *(undefined4 *)(puVar16 + 2) = (undefined4)uStack_8e8;
        *(undefined4 *)((long)puVar16 + 0x14) = uStack_8e8._4_4_;
        *puVar16 = &UNK_0f4e3c70;
        func_0x04167a20(puVar16 + 4,&uStack_8d8);
        lVar14 = lStack_520;
        puVar16[5] = uStack_8d0;
        puVar16[6] = puStack_8c8;
        puVar16[7] = uStack_8c0;
        puVar16[8] = uStack_8b8;
        puVar16[9] = uStack_8b0;
        puVar16[10] = uStack_8a8;
        uStack_8b0 = (undefined *)0x0;
        uStack_8a8 = (long *)0x0;
        puVar16[0xb] = puStack_8a0;
        puVar16[0xe] = plStack_888;
        *(uint *)(puVar16 + 0xc) = (uint)uStack_898;
        *(undefined4 *)((long)puVar16 + 100) = uStack_898._4_4_;
        *(undefined4 *)(puVar16 + 0xd) = (undefined4)uStack_890;
        *(undefined4 *)((long)puVar16 + 0x6c) = uStack_890._4_4_;
        uStack_898 = (long *)0x0;
        uStack_890 = 0;
        plStack_888 = (long *)0x0;
        puVar16[0xf] = lStack_880;
        plVar13 = *(long **)(lVar15 + 8);
        *(undefined8 **)(lVar15 + 8) = puVar16;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x28))();
        }
      }
      else if ((int)uStack_780 == 1) {
        lStack_520 = lVar14;
        lVar15 = func_0x0777e600(&uStack_7a8);
        lVar15 = *(long *)(lVar15 + 0x58);
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        goto LAB_076f3ac0;
      }
      puStack_8f8 = &UNK_0f4e3c70;
      if (((ulong)uStack_898 & 1) != 0) {
        func_0x0412a280(plStack_888,(ulong)uStack_898 & 0xfffffffffffffffe);
      }
      plVar13 = uStack_8a8;
      if (uStack_8a8 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_8a8 + 1;
        lVar15 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*uStack_8a8 + 0x10))(uStack_8a8);
          func_0x0412c2d0(plVar13);
        }
      }
      func_0x04167a40(&uStack_8d8);
      puStack_988 = &UNK_0f4e3c70;
      if (((ulong)uStack_928 & 1) != 0) {
        func_0x0412a280(uStack_918,(ulong)uStack_928 & 0xfffffffffffffffe);
      }
      plVar13 = uStack_938;
      if (uStack_938 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_938 + 1;
        lVar15 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*uStack_938 + 0x10))(uStack_938);
          func_0x0412c2d0(plVar13);
        }
      }
      func_0x04167a40(&uStack_968);
      if (lVar14 != 0) {
        func_0x0412a280(lVar14,lStack_900 - lVar14);
      }
      param_1 = lStack_908;
      puStack_6a8 = &UNK_0f4e3aa0;
      if (uStack_688 != 0) {
        uStack_680 = uStack_688;
        func_0x0412a280(uStack_688,uStack_678 - uStack_688);
      }
      goto LAB_076f3c6b;
    }
    if (-1 < lVar24) {
      lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar24);
      if (lVar14 == 0) {
        func_0x0eec74c0(lVar24,0);
      }
      lStack_900 = lVar14 + lVar24;
      memcpy(lVar14,lVar15,lVar24);
      if (iVar9 == 4) goto LAB_076f35fa;
LAB_076f359b:
      if (iVar9 == 1) {
        lVar15 = func_0x0777e600(&puStack_5e8);
        lVar15 = *(long *)(lVar15 + 0x58);
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        goto LAB_076f3630;
      }
      goto LAB_076f3687;
    }
    func_0x0774b760();
LAB_076f7ca3:
    func_0x0774b760();
    goto LAB_076f7ca8;
  }
LAB_076f3140:
  puVar10 = &DAT_0f5ab918;
  if (iRam000000000f5ab978 != -0x2b3da790) goto LAB_076f31ad;
LAB_076f316b:
  lVar15 = *(long *)(puVar10 + 0x68);
  if (lVar15 == 0) goto LAB_076f31ad;
  bVar27 = (*(byte *)(lVar15 + 8) & 1) != 0;
  lVar24 = lVar15 + 9;
  if (bVar27) {
    lVar24 = *(long *)(lVar15 + 0x18);
  }
  uVar11 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
  if (bVar27) {
    uVar11 = *(ulong *)(lVar15 + 0x10);
  }
  func_0x0777cee0(&uStack_828,param_1,lVar24,uVar11);
  if ((char)uStack_7f8 == '\0') goto LAB_076f31d7;
LAB_076f3c6b:
  if ((DAT_0f5aba50 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5aba50), iVar9 != 0)) {
    func_0x0777ed40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ab9d0,0xf53dab8);
    func_0x0410844d(&DAT_0f5aba50);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ab9d0 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_076f3cd0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5ab9d0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_076f3cd0:
    puVar10 = &DAT_0f5ab9d0;
    if (iRam000000000f5aba30 != -0x2b3da790) goto LAB_076f3d3d;
LAB_076f3cfb:
    lVar15 = *(long *)(puVar10 + 0x68);
    if (lVar15 == 0) goto LAB_076f3d3d;
    bVar27 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar24 = lVar15 + 9;
    if (bVar27) {
      lVar24 = *(long *)(lVar15 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar27) {
      uVar11 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0777f560(&puStack_628,param_1,lVar24,uVar11);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_076f3cfb;
LAB_076f3d3d:
    func_0x0777f560(&puStack_628,param_1,&UNK_01227357,0x10);
  }
  if ((char)uStack_5f8 == '\0') {
    func_0x07780110(&puStack_8f8,&puStack_628,&UNK_012f5980,0xc,1);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0e37d8;
    if (uStack_8e0 != (long *)0x0) {
      lVar15 = *uStack_8e0;
      uStack_8e0 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = uStack_8e0;
    }
    uStack_8e0 = plVar13;
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
    uStack_980 = 0;
    uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_077806d0;
    uStack_940 = &UNK_07780830;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(uStack_8f0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x077803d0(&puStack_8f8);
    uVar18 = uStack_5fc;
    iVar9 = iStack_600;
    puVar10 = puStack_628;
    uStack_490 = (undefined *)CONCAT44(uStack_614,uStack_618);
    uStack_498 = puStack_620;
    uStack_488 = uStack_610;
    uStack_484 = uStack_60c;
    uStack_480 = uStack_608;
    uStack_47c = uStack_604;
    uVar6 = (char)uStack_5f8;
    func_0x048b0bc0(&uStack_8e0);
    if ((DAT_0f5aba50 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5aba50), iVar8 != 0)) {
      func_0x0777ed40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ab9d0,0xf53dab8);
      func_0x0410844d(&DAT_0f5aba50);
    }
    puVar25 = puVar10 + 0x18;
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5ab9d0 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f3f50;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5ab9d0 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f3f50:
      puVar20 = &DAT_0f5ab9d0;
    }
    else {
      puVar20 = (undefined *)plVar13[2];
    }
    if ((1 < iVar9 - 1U) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011f1d93),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar20 = (undefined *)func_0x048b0c90(puVar25,puVar20,uVar18,1);
    if (puVar20 == (undefined *)0x0) {
      puStack_8f8 = (undefined *)0x0;
      uStack_8f0 = 0;
      func_0x048b0d20(&puStack_8f8);
      puVar20 = puStack_8f8;
    }
    *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 5;
    puStack_6e8 = puVar10;
    puStack_6e0 = uStack_498;
    uStack_6d8 = uStack_490;
    uStack_6d0 = uStack_488;
    uStack_6cc = uStack_484;
    uStack_6c8 = uStack_480;
    uStack_6c4 = uStack_47c;
    iStack_6c0 = iVar9;
    uStack_6bc = uVar18;
    uStack_6b8 = CONCAT31(uStack_6b8._1_3_,uVar6);
    uStack_710 = 0xff;
    uStack_720 = (undefined *)0xffffffffffffffff;
    uStack_718 = (undefined *)0x0;
    puStack_728 = &UNK_0f4e3aa0;
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_6f8 = 0;
    uStack_458 = (undefined *)CONCAT53(uStack_458._3_5_,0x80701);
    func_0x076ef9d0(&puStack_728,&uStack_458,3);
    lVar15 = uStack_708;
    uStack_558 = CONCAT31(uStack_558._1_3_,(undefined1)uStack_710);
    uStack_568 = SUB82(uStack_720,0);
    uStack_566 = (undefined1)((ulong)uStack_720 >> 0x10);
    uStack_565 = (undefined1)((ulong)uStack_720 >> 0x18);
    uStack_564 = uStack_720._4_4_;
    uStack_560 = (undefined4)uStack_718;
    uStack_55c = uStack_718._4_4_;
    lVar24 = uStack_700 - uStack_708;
    if (lVar24 == 0) {
      lVar14 = 0;
      lVar26 = 0;
      if (iVar9 != 4) goto LAB_076f4120;
LAB_076f4173:
      lVar15 = func_0x07780b50(&puStack_6e8);
      lVar15 = *(long *)(lVar15 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
LAB_076f41a6:
      *(undefined1 *)(puVar16 + 3) = (undefined1)uStack_558;
      *(uint *)(puVar16 + 1) = CONCAT13(uStack_565,CONCAT12(uStack_566,uStack_568));
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_564;
      *(undefined4 *)(puVar16 + 2) = uStack_560;
      *(undefined4 *)((long)puVar16 + 0x14) = uStack_55c;
      *puVar16 = &UNK_0f4e3aa0;
      puVar16[4] = lVar14;
      puVar16[5] = lVar26;
      puVar16[6] = lVar26;
      plVar13 = *(long **)(lVar15 + 8);
      *(undefined8 **)(lVar15 + 8) = puVar16;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
      lVar14 = 0;
      lVar26 = 0;
    }
    else {
      if (lVar24 < 0) goto LAB_076f7ca3;
      lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar24);
      if (lVar14 == 0) {
        func_0x0eec74c0(lVar24,0);
      }
      lVar26 = lVar14 + lVar24;
      memcpy(lVar14,lVar15,lVar24);
      if (iVar9 == 4) goto LAB_076f4173;
LAB_076f4120:
      if (iVar9 == 1) {
        lVar15 = func_0x07780a00(&puStack_6e8);
        lVar15 = *(long *)(lVar15 + 0x58);
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        goto LAB_076f41a6;
      }
    }
    uStack_578 = CONCAT31(uStack_578._1_3_,(undefined1)uStack_6b8);
    uStack_588 = uStack_6c8;
    uStack_584 = uStack_6c4;
    iStack_580 = iStack_6c0;
    uStack_57c = uStack_6bc;
    uStack_598 = (undefined4)uStack_6d8;
    uStack_594 = uStack_6d8._4_4_;
    uStack_590 = uStack_6d0;
    uStack_58c = uStack_6cc;
    uStack_5a8 = puStack_6e8;
    uStack_5a0 = puStack_6e0;
    func_0x0777fb50(&puStack_8f8,puStack_6e8 + 0x18);
    if (uStack_8e0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_8e0) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_8f0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f430f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_8e0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_8e0) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f430f;
      }
      if (uStack_8e0._4_4_ == 0) {
        *(uint *)(uStack_8e8 + 0x18) = *(uint *)(uStack_8e8 + 0x18) | 0x40000;
      }
    }
    func_0x07780110(&puStack_8f8,&uStack_5a8,&UNK_011a18c3,0xb,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (uStack_8e0 != (long *)0x0) {
      lVar15 = *uStack_8e0;
      uStack_8e0 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = uStack_8e0;
    }
    uStack_8e0 = plVar13;
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
    uStack_980 = 0;
    uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_048b3f30;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &SUB_048b2190;
    uStack_948 = &UNK_07780cd0;
    uStack_940 = &UNK_07780ea0;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(uStack_8f0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x077803d0(&puStack_8f8);
    uStack_638 = CONCAT71(uStack_638._1_7_,(undefined1)uStack_578);
    uStack_648 = uStack_588;
    uStack_644 = uStack_584;
    iStack_640 = iStack_580;
    uStack_63c = uStack_57c;
    uStack_658 = uStack_598;
    uStack_654 = uStack_594;
    uStack_650 = uStack_590;
    uStack_64c = uStack_58c;
    puStack_668 = uStack_5a8;
    puStack_660 = uStack_5a0;
    func_0x048b0bc0(&uStack_8e0);
    uStack_808 = 0;
    uStack_7c0 = 0;
    uStack_7b8 = 0;
    uStack_7d0 = 0;
    uStack_7c8 = (long *)0x0;
    uStack_7e0 = (undefined *)0x0;
    uStack_7d8 = (long *)0x0;
    uStack_7f0 = (undefined1 *)0x0;
    uStack_7e8 = (undefined *)0x0;
    uStack_800 = (undefined *)0x0;
    uStack_7f8 = (undefined1 *)0x0;
    uStack_7b0 = 0;
    uStack_820 = (long *)0xffffffffffffffff;
    uStack_818 = (long *)0x0;
    uStack_810 = 0xff;
    uStack_828 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_808);
    uStack_800 = (undefined *)func_0x041681f0(&uStack_808,0xf547a30);
    uStack_7f8 = (undefined1 *)func_0x041681f0(&uStack_808,0xf547770);
    uStack_7f0 = (undefined1 *)0x0;
    uStack_7e8 = (undefined *)0x0;
    uStack_7e0 = (undefined *)0x0;
    uStack_7d8 = (long *)0x0;
    uStack_7d0 = 0;
    uStack_7c8 = (long *)0x0;
    uStack_7c0 = 0;
    uStack_7b8 = 0;
    uStack_7b0 = 0;
    uStack_820 = (long *)0x100;
    uStack_980 = 0x100;
    uStack_978 = (undefined *)uStack_818;
    uStack_970 = (long *)CONCAT71(uStack_970._1_7_,(undefined1)uStack_810);
    puStack_988 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_968,&uStack_808);
    puStack_960 = uStack_800;
    puStack_958 = uStack_7f8;
    uStack_950 = uStack_7f0;
    uStack_948 = uStack_7e8;
    uStack_940 = uStack_7e0;
    uStack_938 = uStack_7d8;
    if (uStack_7d8 != (long *)0x0) {
      LOCK();
      uStack_7d8[1] = uStack_7d8[1] + 1;
      UNLOCK();
    }
    uStack_930 = uStack_7d0;
    if (((ulong)uStack_7c8 & 1) == 0) {
      uStack_918 = uStack_7b8;
      uStack_928 = uStack_7c8;
      uStack_920 = uStack_7c0;
    }
    else {
      func_0x0412e5e0(&uStack_928,uStack_7b8,uStack_7c0);
    }
    uStack_910 = uStack_7b0;
    func_0x076efc20(&puStack_6a8,&puStack_668,&puStack_988);
    func_0x0777fb50(&puStack_8f8,puStack_6a8 + 0x18);
    if (uStack_8e0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_8e0) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_8f0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f471f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_8e0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_8e0) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f471f;
      }
      if (uStack_8e0._4_4_ == 0) {
        *(uint *)(uStack_8e8 + 0x18) = *(uint *)(uStack_8e8 + 0x18) | 0x40000;
      }
    }
    func_0x07780110(&puStack_8f8,&puStack_6a8,&UNK_01496843,7,0x10);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef44b00;
    if (uStack_8e0 != (long *)0x0) {
      lVar15 = *uStack_8e0;
      uStack_8e0 = puVar16;
      (**(code **)(lVar15 + 8))();
      puVar16 = uStack_8e0;
    }
    uStack_8e0 = puVar16;
    uStack_7a8 = (undefined *)CONCAT44(uStack_7a8._4_4_,(undefined4)uStack_8e8);
    uStack_7a0 = (long *)0x0;
    uStack_798 = (undefined *)((ulong)uStack_798 & 0xffffffff00000000);
    uStack_790 = 1;
    uStack_788 = 0;
    uStack_780 = &UNK_048b3f30;
    uStack_778 = &SUB_048b06d0;
    uStack_770 = &SUB_048b2190;
    puStack_768 = &UNK_07781080;
    puStack_760 = &UNK_07781250;
    uStack_758 = (long *)((ulong)uStack_758._4_4_ << 0x20);
    uStack_750 = 0;
    plStack_748 = (long *)0x0;
    func_0x048b05a0(uStack_8f0,&uStack_7a8);
    plVar13 = plStack_748;
    if (plStack_748 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_748 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_748 + 0x10))(plStack_748);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x077803d0(&puStack_8f8);
    uStack_5b8 = CONCAT31(uStack_5b8._1_3_,(undefined1)uStack_678);
    uStack_5c8 = (undefined4)uStack_688;
    uStack_5c4 = uStack_688._4_4_;
    iStack_5c0 = (int)uStack_680;
    uStack_5bc = uStack_680._4_4_;
    uStack_5d8 = uStack_698;
    uStack_5d0 = (undefined4)uStack_690;
    uStack_5cc = uStack_690._4_4_;
    puStack_5e8 = puStack_6a8;
    puStack_5e0 = puStack_6a0;
    func_0x048b0bc0(&uStack_8e0);
    uStack_788 = 0;
    uStack_740 = 0;
    uStack_738 = 0;
    uStack_750 = 0;
    plStack_748 = (long *)0x0;
    puStack_760 = (undefined *)0x0;
    uStack_758 = (long *)0x0;
    uStack_770 = (undefined1 *)0x0;
    puStack_768 = (undefined *)0x0;
    uStack_780 = (undefined *)0x0;
    uStack_778 = (undefined1 *)0x0;
    uStack_730 = 0;
    uStack_7a0 = (long *)0xffffffffffffffff;
    uStack_798 = (undefined *)0x0;
    uStack_790 = 0xff;
    uStack_7a8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_788);
    uStack_780 = (undefined *)func_0x041681f0(&uStack_788,0xf547a30);
    uStack_778 = (undefined1 *)func_0x041681f0(&uStack_788,0xf547770);
    uStack_770 = (undefined1 *)0x0;
    puStack_768 = (undefined *)0x0;
    puStack_760 = (undefined *)0x0;
    uStack_758 = (long *)0x0;
    uStack_750 = 0;
    plStack_748 = (long *)0x0;
    uStack_740 = 0;
    uStack_738 = 0;
    uStack_730 = 1;
    uStack_7a0 = (long *)0x10000;
    uStack_8f0 = 0x10000;
    uStack_8e8 = uStack_798;
    uStack_8e0 = (long *)CONCAT71(uStack_8e0._1_7_,(undefined1)uStack_790);
    puStack_8f8 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_8d8,&uStack_788);
    uStack_8d0 = uStack_780;
    puStack_8c8 = uStack_778;
    uStack_8c0 = uStack_770;
    uStack_8b8 = puStack_768;
    uStack_8b0 = puStack_760;
    uStack_8a8 = uStack_758;
    if (uStack_758 != (long *)0x0) {
      LOCK();
      uStack_758[1] = uStack_758[1] + 1;
      UNLOCK();
    }
    puStack_8a0 = (undefined *)uStack_750;
    if (((ulong)plStack_748 & 1) == 0) {
      plStack_888 = (long *)uStack_738;
      uStack_898 = plStack_748;
      uStack_890 = uStack_740;
    }
    else {
      func_0x0412e5e0(&uStack_898,uStack_738,uStack_740);
    }
    lStack_880 = uStack_730;
    func_0x076efc20(&puStack_518,&puStack_5e8,&puStack_8f8);
    puStack_8f8 = &UNK_0f4e3c70;
    if (((ulong)uStack_898 & 1) != 0) {
      func_0x0412a280(plStack_888,(ulong)uStack_898 & 0xfffffffffffffffe);
    }
    plVar13 = uStack_8a8;
    if (uStack_8a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_8a8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_8a8 + 0x10))(uStack_8a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_8d8);
    uStack_7a8 = &UNK_0f4e3c70;
    if (((ulong)plStack_748 & 1) != 0) {
      func_0x0412a280(uStack_738,(ulong)plStack_748 & 0xfffffffffffffffe);
    }
    plVar13 = uStack_758;
    if (uStack_758 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_758 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_758 + 0x10))(uStack_758);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_788);
    puStack_988 = &UNK_0f4e3c70;
    if (((ulong)uStack_928 & 1) != 0) {
      func_0x0412a280(uStack_918,(ulong)uStack_928 & 0xfffffffffffffffe);
    }
    plVar13 = uStack_938;
    if (uStack_938 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_938 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_938 + 0x10))(uStack_938);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_968);
    uStack_828 = &UNK_0f4e3c70;
    if (((ulong)uStack_7c8 & 1) != 0) {
      func_0x0412a280(uStack_7b8,(ulong)uStack_7c8 & 0xfffffffffffffffe);
    }
    plVar13 = uStack_7d8;
    if (uStack_7d8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_7d8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_7d8 + 0x10))(uStack_7d8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_808);
    if (lVar14 != 0) {
      func_0x0412a280(lVar14,lVar26 - lVar14);
    }
    param_1 = lStack_908;
    puStack_728 = &UNK_0f4e3aa0;
    if (uStack_708 != 0) {
      uStack_700 = uStack_708;
      func_0x0412a280(uStack_708,uStack_6f8 - uStack_708);
    }
  }
  if ((DAT_0f5abb08 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5abb08), iVar9 != 0)) {
    func_0x077814f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aba88,0xf53dab8);
    func_0x0410844d(&DAT_0f5abb08);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5aba88 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_076f4cc0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5aba88 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_076f4cc0:
    puVar10 = &DAT_0f5aba88;
    if (iRam000000000f5abae8 != -0x2b3da790) goto LAB_076f4d2d;
LAB_076f4ceb:
    lVar15 = *(long *)(puVar10 + 0x68);
    if (lVar15 == 0) goto LAB_076f4d2d;
    bVar27 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar24 = lVar15 + 9;
    if (bVar27) {
      lVar24 = *(long *)(lVar15 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar27) {
      uVar11 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x07781da0(&puStack_628,param_1,lVar24,uVar11);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_076f4ceb;
LAB_076f4d2d:
    func_0x07781da0(&puStack_628,param_1,&UNK_0125c0ba,0x10);
  }
  if ((char)uStack_5f8 == '\0') {
    func_0x07782950(&puStack_8f8,&puStack_628,&UNK_012f5980,0xc,1);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0e37d8;
    if (uStack_8e0 != (long *)0x0) {
      lVar15 = *uStack_8e0;
      uStack_8e0 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = uStack_8e0;
    }
    uStack_8e0 = plVar13;
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
    uStack_980 = 0;
    uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_0774fbc0;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &UNK_0774b830;
    uStack_948 = &UNK_07782f10;
    uStack_940 = &UNK_07783070;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(uStack_8f0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x07782c10(&puStack_8f8);
    uVar18 = uStack_5fc;
    iVar9 = iStack_600;
    puVar10 = puStack_628;
    puStack_510 = (undefined *)CONCAT44(uStack_614,uStack_618);
    puStack_518 = puStack_620;
    uStack_508 = uStack_610;
    uStack_504 = uStack_60c;
    uStack_500 = uStack_608;
    uStack_4fc = uStack_604;
    uVar6 = (char)uStack_5f8;
    func_0x048b0bc0(&uStack_8e0);
    if ((DAT_0f5abb08 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5abb08), iVar8 != 0)) {
      func_0x077814f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aba88,0xf53dab8);
      func_0x0410844d(&DAT_0f5abb08);
    }
    puVar25 = puVar10 + 0x18;
    plVar13 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5aba88 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_076f4f40;
      plVar13 = (long *)(*(long *)(puVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5aba88 + 4));
    if (plVar13 == *(long **)(puVar10 + 0x38)) {
LAB_076f4f40:
      puVar20 = &DAT_0f5aba88;
    }
    else {
      puVar20 = (undefined *)plVar13[2];
    }
    if ((1 < iVar9 - 1U) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01499a6e),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar20 = (undefined *)func_0x048b0c90(puVar25,puVar20,uVar18,1);
    if (puVar20 == (undefined *)0x0) {
      puStack_8f8 = (undefined *)0x0;
      uStack_8f0 = 0;
      func_0x048b0d20(&puStack_8f8);
      puVar20 = puStack_8f8;
    }
    *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 5;
    puStack_6e8 = puVar10;
    puStack_6e0 = puStack_518;
    uStack_6d8 = puStack_510;
    uStack_6d0 = uStack_508;
    uStack_6cc = uStack_504;
    uStack_6c8 = uStack_500;
    uStack_6c4 = uStack_4fc;
    iStack_6c0 = iVar9;
    uStack_6bc = uVar18;
    uStack_6b8 = CONCAT31(uStack_6b8._1_3_,uVar6);
    uStack_710 = 0xff;
    uStack_720 = (undefined *)0xffffffffffffffff;
    uStack_718 = (undefined *)0x0;
    puStack_728 = &UNK_0f4e3aa0;
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_6f8 = 0;
    uStack_568 = 0x302;
    uStack_566 = 4;
    func_0x076ef9d0(&puStack_728,&uStack_568,3);
    lVar15 = uStack_708;
    uStack_488 = CONCAT31(uStack_488._1_3_,(undefined1)uStack_710);
    uStack_498 = uStack_720;
    uStack_490 = uStack_718;
    lVar24 = uStack_700 - uStack_708;
    if (lVar24 == 0) {
      lVar26 = 0;
      lVar14 = 0;
      if (iVar9 != 4) goto LAB_076f5110;
LAB_076f5163:
      lVar15 = func_0x07783390(&puStack_6e8);
      lVar15 = *(long *)(lVar15 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
LAB_076f5196:
      *(undefined1 *)(puVar16 + 3) = (undefined1)uStack_488;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_498;
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_498._4_4_;
      *(undefined4 *)(puVar16 + 2) = (undefined4)uStack_490;
      *(undefined4 *)((long)puVar16 + 0x14) = uStack_490._4_4_;
      *puVar16 = &UNK_0f4e3aa0;
      puVar16[4] = lVar14;
      puVar16[5] = lVar26;
      puVar16[6] = lVar26;
      plVar13 = *(long **)(lVar15 + 8);
      *(undefined8 **)(lVar15 + 8) = puVar16;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
      lVar26 = 0;
      lVar14 = 0;
    }
    else {
      if (lVar24 < 0) {
LAB_076f7ca8:
        lStack_908 = func_0x0774b760();
        func_0x0488e520(uVar18);
        func_0x04885660(&puStack_8f8);
        func_0x04885660(&puStack_298);
        func_0x04885660(&uStack_828);
        func_0x04885660(&puStack_318);
        func_0x04885660(&puStack_988);
        lStack_908 = _Unwind_Resume(lStack_908);
        func_0x04167a40(lVar15);
        lStack_908 = _Unwind_Resume(lStack_908);
        func_0x04167a40(lVar15);
        if (puVar25 != (undefined *)0x0) {
          func_0x0412a280(puVar25,lStack_900 - (long)puVar25);
        }
        puStack_728 = &UNK_0f4e3aa0;
        if (uStack_708 != 0) {
          uStack_700 = uStack_708;
          func_0x0412a280(uStack_708,uStack_6f8 - uStack_708);
        }
        uVar17 = _Unwind_Resume(lStack_908);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        uVar17 = func_0x04882e20(uVar17);
        func_0x04882e20(uVar17);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar24);
      if (lVar14 == 0) {
        func_0x0eec74c0(lVar24,0);
      }
      lVar26 = lVar14 + lVar24;
      memcpy(lVar14,lVar15,lVar24);
      if (iVar9 == 4) goto LAB_076f5163;
LAB_076f5110:
      if (iVar9 == 1) {
        lVar15 = func_0x07783240(&puStack_6e8);
        lVar15 = *(long *)(lVar15 + 0x58);
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        goto LAB_076f5196;
      }
    }
    uStack_578 = CONCAT31(uStack_578._1_3_,(undefined1)uStack_6b8);
    uStack_588 = uStack_6c8;
    uStack_584 = uStack_6c4;
    iStack_580 = iStack_6c0;
    uStack_57c = uStack_6bc;
    uStack_598 = (undefined4)uStack_6d8;
    uStack_594 = uStack_6d8._4_4_;
    uStack_590 = uStack_6d0;
    uStack_58c = uStack_6cc;
    uStack_5a8 = puStack_6e8;
    uStack_5a0 = puStack_6e0;
    func_0x07782390(&puStack_8f8,puStack_6e8 + 0x18);
    if (uStack_8e0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_8e0) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while (lVar15 != uStack_8f0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_076f534f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_8e0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_8e0) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f534f;
      }
      if (uStack_8e0._4_4_ == 0) {
        *(uint *)(uStack_8e8 + 0x18) = *(uint *)(uStack_8e8 + 0x18) | 0x40000;
      }
    }
    func_0x07782950(&puStack_8f8,&uStack_5a8,&UNK_01496843,7,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (uStack_8e0 != (long *)0x0) {
      lVar15 = *uStack_8e0;
      uStack_8e0 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = uStack_8e0;
    }
    uStack_8e0 = plVar13;
    puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
    uStack_980 = 0;
    uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
    uStack_970 = (long *)0x1;
    uStack_968 = 0;
    puStack_960 = &UNK_048b3f30;
    puStack_958 = &SUB_048b06d0;
    uStack_950 = &SUB_048b2190;
    uStack_948 = &UNK_07783510;
    uStack_940 = &UNK_077836e0;
    uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
    uStack_930 = 0;
    uStack_928 = (long *)0x0;
    func_0x048b05a0(uStack_8f0,&puStack_988);
    plVar13 = uStack_928;
    if (uStack_928 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_928 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_928 + 0x10))(uStack_928);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x07782c10(&puStack_8f8);
    uStack_638 = CONCAT71(uStack_638._1_7_,(undefined1)uStack_578);
    uStack_648 = uStack_588;
    uStack_644 = uStack_584;
    iStack_640 = iStack_580;
    uStack_63c = uStack_57c;
    uStack_658 = uStack_598;
    uStack_654 = uStack_594;
    uStack_650 = uStack_590;
    uStack_64c = uStack_58c;
    puStack_668 = uStack_5a8;
    puStack_660 = uStack_5a0;
    lStack_900 = lVar26;
    func_0x048b0bc0(&uStack_8e0);
    uStack_808 = 0;
    uStack_7c0 = 0;
    uStack_7b8 = 0;
    uStack_7d0 = 0;
    uStack_7c8 = (long *)0x0;
    uStack_7e0 = (undefined *)0x0;
    uStack_7d8 = (long *)0x0;
    uStack_7f0 = (undefined1 *)0x0;
    uStack_7e8 = (undefined *)0x0;
    uStack_800 = (undefined *)0x0;
    uStack_7f8 = (undefined1 *)0x0;
    uStack_7b0 = 0;
    uStack_820 = (long *)0xffffffffffffffff;
    uStack_818 = (long *)0x0;
    uStack_810 = 0xff;
    uStack_828 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_808);
    uStack_800 = (undefined *)func_0x041681f0(&uStack_808,0xf547a30);
    uStack_7f8 = (undefined1 *)func_0x041681f0(&uStack_808,0xf547770);
    uStack_7f0 = (undefined1 *)0x0;
    uStack_7e8 = (undefined *)0x0;
    uStack_7e0 = (undefined *)0x0;
    uStack_7d8 = (long *)0x0;
    uStack_7d0 = 0;
    uStack_7c8 = (long *)0x0;
    uStack_7c0 = 0;
    uStack_7b8 = 0;
    uStack_7b0 = 1;
    uStack_820 = (long *)0x10000;
    uStack_980 = 0x10000;
    uStack_978 = (undefined *)uStack_818;
    uStack_970 = (long *)CONCAT71(uStack_970._1_7_,(undefined1)uStack_810);
    puStack_988 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_968,&uStack_808);
    puStack_960 = uStack_800;
    puStack_958 = uStack_7f8;
    uStack_950 = uStack_7f0;
    uStack_948 = uStack_7e8;
    uStack_940 = uStack_7e0;
    uStack_938 = uStack_7d8;
    if (uStack_7d8 != (long *)0x0) {
      LOCK();
      uStack_7d8[1] = uStack_7d8[1] + 1;
      UNLOCK();
    }
    uStack_930 = uStack_7d0;
    if (((ulong)uStack_7c8 & 1) == 0) {
      uStack_918 = uStack_7b8;
      uStack_928 = uStack_7c8;
      uStack_920 = uStack_7c0;
    }
    else {
      func_0x0412e5e0(&uStack_928,uStack_7b8,uStack_7c0);
    }
    uStack_910 = uStack_7b0;
    if (iStack_640 == 4) {
      lVar15 = func_0x07783390(&puStack_668);
      lVar15 = *(long *)(lVar15 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_076f5701:
      *(undefined1 *)(puVar16 + 3) = (undefined1)uStack_970;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_980;
      *(undefined4 *)((long)puVar16 + 0xc) = uStack_980._4_4_;
      *(undefined4 *)(puVar16 + 2) = (undefined4)uStack_978;
      *(undefined4 *)((long)puVar16 + 0x14) = uStack_978._4_4_;
      *puVar16 = &UNK_0f4e3c70;
      func_0x04167a20(puVar16 + 4,&uStack_968);
      puVar16[5] = puStack_960;
      puVar16[6] = puStack_958;
      puVar16[7] = uStack_950;
      puVar16[8] = uStack_948;
      puVar16[9] = uStack_940;
      puVar16[10] = uStack_938;
      uStack_940 = (undefined *)0x0;
      uStack_938 = (long *)0x0;
      puVar16[0xb] = uStack_930;
      puVar16[0xe] = uStack_918;
      *(uint *)(puVar16 + 0xc) = (uint)uStack_928;
      *(undefined4 *)((long)puVar16 + 100) = uStack_928._4_4_;
      *(undefined4 *)(puVar16 + 0xd) = (undefined4)uStack_920;
      *(undefined4 *)((long)puVar16 + 0x6c) = uStack_920._4_4_;
      uStack_928 = (long *)0x0;
      uStack_920 = 0;
      uStack_918 = 0;
      puVar16[0xf] = uStack_910;
      plVar13 = *(long **)(lVar15 + 8);
      *(undefined8 **)(lVar15 + 8) = puVar16;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iStack_640 == 1) {
      lVar15 = func_0x07783240(&puStack_668);
      lVar15 = *(long *)(lVar15 + 0x58);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_076f5701;
    }
    uStack_678 = CONCAT71(uStack_678._1_7_,(undefined1)uStack_638);
    uStack_688 = CONCAT44(uStack_644,uStack_648);
    uStack_680 = CONCAT44(uStack_63c,iStack_640);
    uStack_698 = (undefined *)CONCAT44(uStack_654,uStack_658);
    uStack_690 = CONCAT44(uStack_64c,uStack_650);
    puStack_6a8 = puStack_668;
    puStack_6a0 = puStack_660;
    func_0x07782390(&puStack_8f8,puStack_668 + 0x18);
    lVar15 = lStack_900;
    if (uStack_8e0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_8e0) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      for (; *(long *)(piVar12 + 0xc) != uStack_8f0; piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_076f593a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_8e0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(uStack_8e8 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_8e0) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_076f593a;
      }
      if (uStack_8e0._4_4_ == 0) {
        *(uint *)(uStack_8e8 + 0x18) = *(uint *)(uStack_8e8 + 0x18) | 0x40000;
      }
    }
    func_0x07782950(&puStack_8f8,&puStack_6a8,&UNK_0127665f,0xe,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef474e0;
    if (uStack_8e0 != (long *)0x0) {
      lVar24 = *uStack_8e0;
      uStack_8e0 = plVar13;
      (**(code **)(lVar24 + 8))();
      plVar13 = uStack_8e0;
    }
    uStack_8e0 = plVar13;
    uStack_7a8 = (undefined *)CONCAT44(uStack_7a8._4_4_,(undefined4)uStack_8e8);
    uStack_7a0 = (long *)0x0;
    uStack_798 = (undefined *)((ulong)uStack_798 & 0xffffffff00000000);
    uStack_790 = 1;
    uStack_788 = 0;
    uStack_780 = &UNK_049119f0;
    uStack_778 = &SUB_048b06d0;
    uStack_770 = &SUB_0490fc00;
    puStack_768 = &UNK_077838c0;
    puStack_760 = &UNK_07783ac0;
    uStack_758 = (long *)((ulong)uStack_758 & 0xffffffff00000000);
    uStack_750 = 0;
    plStack_748 = (long *)0x0;
    func_0x048b05a0(uStack_8f0,&uStack_7a8);
    plVar13 = plStack_748;
    if (plStack_748 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_748 + 1;
      lVar24 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_748 + 0x10))(plStack_748);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x07782c10(&puStack_8f8);
    uStack_5b8 = CONCAT31(uStack_5b8._1_3_,(undefined1)uStack_678);
    uStack_5c8 = (undefined4)uStack_688;
    uStack_5c4 = uStack_688._4_4_;
    iStack_5c0 = (int)uStack_680;
    uStack_5bc = uStack_680._4_4_;
    uStack_5d8 = uStack_698;
    uStack_5d0 = (undefined4)uStack_690;
    uStack_5cc = uStack_690._4_4_;
    puStack_5e8 = puStack_6a8;
    puStack_5e0 = puStack_6a0;
    func_0x048b0bc0(&uStack_8e0);
    if (iStack_5c0 == 4) {
      lVar24 = func_0x07783390(&puStack_5e8);
      lVar24 = *(long *)(lVar24 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_076f5b6d:
      puVar16[1] = 4;
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 0xff;
      *puVar16 = &UNK_0f4e3cf0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      *(undefined8 *)((long)puVar16 + 0x29) = 0;
      *(undefined8 *)((long)puVar16 + 0x31) = 0;
      plVar13 = *(long **)(lVar24 + 8);
      *(undefined8 **)(lVar24 + 8) = puVar16;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iStack_5c0 == 1) {
      lVar24 = func_0x07783240(&puStack_5e8);
      lVar24 = *(long *)(lVar24 + 0x58);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_076f5b6d;
    }
    puStack_988 = &UNK_0f4e3c70;
    if (((ulong)uStack_928 & 1) != 0) {
      func_0x0412a280(uStack_918,(ulong)uStack_928 & 0xfffffffffffffffe);
    }
    plVar13 = uStack_938;
    if (uStack_938 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_938 + 1;
      lVar24 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_938 + 0x10))(uStack_938);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_968);
    uStack_828 = &UNK_0f4e3c70;
    if (((ulong)uStack_7c8 & 1) != 0) {
      func_0x0412a280(uStack_7b8,(ulong)uStack_7c8 & 0xfffffffffffffffe);
    }
    plVar13 = uStack_7d8;
    if (uStack_7d8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_7d8 + 1;
      lVar24 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_7d8 + 0x10))(uStack_7d8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_808);
    if (lVar14 != 0) {
      func_0x0412a280(lVar14,lVar15 - lVar14);
    }
    param_1 = lStack_908;
    puStack_728 = &UNK_0f4e3aa0;
    if (uStack_708 != 0) {
      uStack_700 = uStack_708;
      func_0x0412a280(uStack_708,uStack_6f8 - uStack_708);
    }
  }
  if ((DAT_0f5abbc0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5abbc0), iVar9 != 0)) {
    func_0x07783d60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5abb40,0xf53dab8);
    func_0x0410844d(&DAT_0f5abbc0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5abb40 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_076f5d10;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5abb40 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_076f5d10:
    puVar10 = &DAT_0f5abb40;
    if (iRam000000000f5abba0 != -0x2b3da790) goto LAB_076f5d7d;
LAB_076f5d3b:
    lVar15 = *(long *)(puVar10 + 0x68);
    if (lVar15 == 0) goto LAB_076f5d7d;
    bVar27 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar24 = lVar15 + 9;
    if (bVar27) {
      lVar24 = *(long *)(lVar15 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar27) {
      uVar11 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x07784e10(&puStack_628,param_1,lVar24,uVar11);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_076f5d3b;
LAB_076f5d7d:
    func_0x07784e10(&puStack_628,param_1,&UNK_012414b8,0x11);
  }
  if ((char)uStack_5f8 != '\0') {
    return;
  }
  func_0x077859e0(&puStack_8f8,&puStack_628,&UNK_012dba3f,9,1);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ef8;
  if (uStack_8e0 != (long *)0x0) {
    lVar15 = *uStack_8e0;
    uStack_8e0 = puVar16;
    (**(code **)(lVar15 + 8))();
    puVar16 = uStack_8e0;
  }
  uStack_8e0 = puVar16;
  puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
  uStack_980 = 0;
  uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
  uStack_970 = (long *)0x1;
  uStack_968 = 0;
  puStack_960 = &UNK_04906f70;
  puStack_958 = &SUB_048b06d0;
  uStack_950 = &SUB_04906c50;
  uStack_948 = &UNK_07785fa0;
  uStack_940 = &UNK_07786100;
  uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
  uStack_930 = 0;
  uStack_928 = (long *)0x0;
  func_0x048b05a0(uStack_8f0,&puStack_988);
  plVar13 = uStack_928;
  if (uStack_928 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_928 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_928 + 0x10))(uStack_928);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x07785ca0(&puStack_8f8);
  uStack_428 = CONCAT31(uStack_428._1_3_,(char)uStack_5f8);
  uStack_438 = uStack_608;
  uStack_434 = uStack_604;
  iStack_430 = iStack_600;
  uStack_42c = uStack_5fc;
  uStack_448 = uStack_618;
  uStack_444 = uStack_614;
  uStack_440 = uStack_610;
  uStack_43c = uStack_60c;
  uStack_458 = puStack_628;
  uStack_450 = puStack_620;
  func_0x048b0bc0(&uStack_8e0);
  puVar10 = uStack_458;
  if ((DAT_0f5abc10 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5abc10), iVar9 != 0)) {
    func_0x077864c0();
    func_0x0410844d(&DAT_0f5abc10);
  }
  if ((DAT_0f5abc10 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5abc10), iVar9 != 0)) {
    func_0x077864c0();
    func_0x0410844d(&DAT_0f5abc10);
  }
  puStack_8f8 = &DAT_0f5abbf8;
  uStack_8f0 = CONCAT44(uStack_8f0._4_4_,_DAT_0f5abbfc);
  uStack_8e8 = (undefined *)0x0;
  uStack_8e0 = (long *)CONCAT44(uStack_8e0._4_4_,0x80);
  uStack_8d8 = 0x40;
  uStack_8d0 = &UNK_07786400;
  puStack_8c8 = &UNK_07786540;
  uStack_8c0 = (undefined1 *)0x0;
  uStack_8b8 = &UNK_077869c0;
  uStack_8b0 = (undefined *)0x3;
  uStack_8a8 = (long *)&UNK_05e26240;
  puStack_8a0 = &UNK_07786a50;
  uStack_898 = (long *)((ulong)uStack_898 & 0xffffffff00000000);
  uStack_890 = 0;
  plStack_888 = (long *)0x0;
  lStack_880 = 0;
  func_0x048aee30(&puStack_988,puVar10 + 0x18,&puStack_8f8,0x3f3ce64e);
  lVar15 = lStack_880;
  lStack_880 = 0;
  if (lVar15 != 0) {
    FUN_048ae940(lVar15);
    func_0x0412a280(lVar15,0x78);
  }
  plVar13 = plStack_888;
  if (plStack_888 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_888 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_888 + 0x10))(plStack_888);
      func_0x0412c2d0(plVar13);
    }
  }
  if (uStack_970._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_970) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while (lVar15 != uStack_980) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_076f60df:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 1;
  }
  else {
    if (uStack_970._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)uStack_978 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_970) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_076f60df;
    }
    if (uStack_970._4_4_ == 0) {
      *(uint *)((long)uStack_978 + 0x18U) = *(uint *)((long)uStack_978 + 0x18U) | 0x10000;
    }
  }
  uStack_8e8 = uStack_978;
  uStack_8e0 = uStack_970;
  puStack_8f8 = puStack_988;
  uStack_8f0 = uStack_980;
  uStack_4d4 = CONCAT31(uStack_4d4._1_3_,0x65);
  uStack_4d8 = 0x70795420;
  if ((DAT_0f5af3d0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5af3d0), iVar9 != 0)) {
    func_0x07786a90(0xf5af3b8);
    func_0x0410844d(&DAT_0f5af3d0);
  }
  uStack_828 = (undefined *)CONCAT44(uStack_828._4_4_,_DAT_0f5af3bc);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f0e9768;
  uStack_820 = plVar13 + 3;
  plVar13[3] = (long)&UNK_0774b770;
  plVar13[4] = 0x6567617373654d18;
  *(undefined4 *)(plVar13 + 5) = uStack_4d8;
  *(undefined1 *)((long)plVar13 + 0x2c) = (undefined1)uStack_4d4;
  *(undefined1 *)((long)plVar13 + 0x2d) = 0;
  *(undefined2 *)((long)plVar13 + 0x2e) = 0;
  plVar13[6] = 0;
  uStack_4d4 = uStack_4d4 & 0xffffff00;
  uStack_4d8 = 0;
  uStack_7a8 = (undefined *)0x0;
  uStack_7a0 = (long *)0x0;
  uStack_818 = plVar13;
  func_0x048afd20(&puStack_8f8,&uStack_828);
  plVar13 = uStack_818;
  if (uStack_818 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_818 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_818 + 0x10))(uStack_818);
      func_0x0412c2d0(plVar13);
    }
  }
  plVar13 = uStack_7a0;
  if (uStack_7a0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_7a0 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_7a0 + 0x10))(uStack_7a0);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x077859e0(&puStack_8f8,&uStack_458,&UNK_013448de,4,1);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f0e4868;
  if (uStack_8e0 != (long *)0x0) {
    lVar15 = *uStack_8e0;
    uStack_8e0 = plVar13;
    (**(code **)(lVar15 + 8))();
    plVar13 = uStack_8e0;
  }
  uStack_8e0 = plVar13;
  puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
  uStack_980 = 0;
  uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
  uStack_970 = (long *)0x1;
  uStack_968 = 0;
  puStack_960 = &UNK_0778b400;
  puStack_958 = &SUB_048b06d0;
  uStack_950 = &UNK_07786400;
  uStack_948 = &UNK_0778b4c0;
  uStack_940 = &UNK_0778b700;
  uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
  uStack_930 = 0;
  uStack_928 = (long *)0x0;
  func_0x048b05a0(uStack_8f0,&puStack_988);
  plVar13 = uStack_928;
  if (uStack_928 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_928 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_928 + 0x10))(uStack_928);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x07785ca0(&puStack_8f8);
  func_0x048b0bc0(&uStack_8e0);
  uStack_568 = SUB82(uStack_458,0);
  uStack_566 = (undefined1)((ulong)uStack_458 >> 0x10);
  uStack_565 = (undefined1)((ulong)uStack_458 >> 0x18);
  uStack_564 = uStack_458._4_4_;
  uStack_560 = (undefined4)uStack_450;
  uStack_55c = uStack_450._4_4_;
  uStack_558 = uStack_448;
  uStack_554 = uStack_444;
  uStack_550 = uStack_440;
  uStack_54c = uStack_43c;
  uStack_548 = uStack_438;
  uStack_544 = uStack_434;
  iStack_540 = iStack_430;
  uStack_53c = uStack_42c;
  uStack_538 = CONCAT31(uStack_538._1_3_,(undefined1)uStack_428);
  func_0x07785400(&puStack_8f8,uStack_458 + 0x18);
  if (uStack_8e0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)uStack_8e8 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_8e0) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while (lVar15 != uStack_8f0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_076f647f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_8e0._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)uStack_8e8 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_8e0) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_076f647f;
    }
    if (uStack_8e0._4_4_ == 0) {
      *(uint *)((long)uStack_8e8 + 0x18U) = *(uint *)((long)uStack_8e8 + 0x18U) | 0x40000;
    }
  }
  func_0x077859e0(&puStack_8f8,&uStack_568,&UNK_011bcd21,0xd,0x10);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0ef44b00;
  if (uStack_8e0 != (long *)0x0) {
    lVar15 = *uStack_8e0;
    uStack_8e0 = plVar13;
    (**(code **)(lVar15 + 8))();
    plVar13 = uStack_8e0;
  }
  uStack_8e0 = plVar13;
  puStack_988 = (undefined *)CONCAT44(puStack_988._4_4_,(undefined4)uStack_8e8);
  uStack_980 = 0;
  uStack_978 = (undefined *)((ulong)uStack_978 & 0xffffffff00000000);
  uStack_970 = (long *)0x1;
  uStack_968 = 0;
  puStack_960 = &UNK_048b3f30;
  puStack_958 = &SUB_048b06d0;
  uStack_950 = &SUB_048b2190;
  uStack_948 = &UNK_0778bb80;
  uStack_940 = &UNK_0778bd50;
  uStack_938 = (long *)((ulong)uStack_938 & 0xffffffff00000000);
  uStack_930 = 0;
  uStack_928 = (long *)0x0;
  func_0x048b05a0(uStack_8f0,&puStack_988);
  plVar13 = uStack_928;
  if (uStack_928 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_928 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_928 + 0x10))(uStack_928);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x07785ca0(&puStack_8f8);
  uStack_468 = CONCAT31(uStack_468._1_3_,(undefined1)uStack_538);
  uStack_478 = uStack_548;
  uStack_474 = uStack_544;
  iStack_470 = iStack_540;
  uStack_46c = uStack_53c;
  uStack_488 = uStack_558;
  uStack_484 = uStack_554;
  uStack_480 = uStack_550;
  uStack_47c = uStack_54c;
  uStack_498 = (undefined *)
               CONCAT44(uStack_564,CONCAT13(uStack_565,CONCAT12(uStack_566,uStack_568)));
  uStack_490 = (undefined *)CONCAT44(uStack_55c,uStack_560);
  func_0x048b0bc0(&uStack_8e0);
  uStack_968 = 0;
  uStack_920 = 0;
  uStack_918 = 0;
  uStack_930 = 0;
  uStack_928 = (long *)0x0;
  uStack_940 = (undefined *)0x0;
  uStack_938 = (long *)0x0;
  uStack_950 = (undefined1 *)0x0;
  uStack_948 = (undefined *)0x0;
  puStack_960 = (undefined *)0x0;
  puStack_958 = (undefined1 *)0x0;
  uStack_910 = 0;
  uStack_980 = 0xffffffffffffffff;
  uStack_978 = (undefined *)0x0;
  uStack_970 = (long *)0xff;
  puStack_988 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_968);
  puStack_960 = (undefined *)func_0x041681f0(&uStack_968,0xf547a30);
  puStack_958 = (undefined1 *)func_0x041681f0(&uStack_968,0xf547770);
  uStack_950 = (undefined1 *)0x0;
  uStack_948 = (undefined *)0x0;
  uStack_940 = (undefined *)0x0;
  uStack_938 = (long *)0x0;
  uStack_930 = 0;
  uStack_928 = (long *)0x0;
  uStack_920 = 0;
  uStack_918 = 0;
  uStack_910 = 0;
  uStack_980 = 0x40;
  uStack_310 = 0x40;
  uStack_30c = 0;
  uStack_308 = (undefined4)uStack_978;
  uStack_304 = uStack_978._4_4_;
  uStack_300 = (undefined1)uStack_970;
  puStack_318 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_2f8,&uStack_968);
  uStack_2f0 = puStack_960;
  uStack_2e8 = puStack_958;
  uStack_2e0 = (undefined4)uStack_950;
  uStack_2dc = uStack_950._4_4_;
  uStack_2d8 = (undefined4)uStack_948;
  uStack_2d4 = uStack_948._4_4_;
  uStack_2d0 = (undefined4)uStack_940;
  uStack_2cc = uStack_940._4_4_;
  uStack_2c8 = (undefined4)uStack_938;
  uStack_2c4 = uStack_938._4_4_;
  if (uStack_938 != (long *)0x0) {
    LOCK();
    uStack_938[1] = uStack_938[1] + 1;
    UNLOCK();
  }
  uStack_2c0 = uStack_930;
  if (((ulong)uStack_928 & 1) == 0) {
    uStack_2a8 = uStack_918;
    uStack_2b8 = (uint)uStack_928;
    uStack_2b4 = uStack_928._4_4_;
    uStack_2b0 = (undefined4)uStack_920;
    uStack_2ac = uStack_920._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_2b8,uStack_918,uStack_920);
  }
  uStack_2a0 = uStack_910;
  func_0x076f8160(&puStack_518,&uStack_498,&puStack_318);
  uStack_6f8 = CONCAT44(iStack_4e4,uStack_4e8);
  uStack_708 = CONCAT44(uStack_4f4,uStack_4f8);
  uStack_700 = CONCAT44(uStack_4ec,uStack_4f0);
  uStack_718 = (undefined *)CONCAT44(uStack_504,uStack_508);
  uStack_710 = CONCAT44(uStack_4fc,uStack_500);
  puStack_728 = puStack_518;
  uStack_720 = puStack_510;
  func_0x07785400(&puStack_8f8,puStack_518 + 0x18);
  if (uStack_8e0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)uStack_8e8 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_8e0) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while (lVar15 != uStack_8f0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
  }
  else {
    if (uStack_8e0._4_4_ != 1) {
      if (uStack_8e0._4_4_ == 0) {
        *(uint *)((long)uStack_8e8 + 0x18U) = *(uint *)((long)uStack_8e8 + 0x18U) | 0x40000;
      }
      goto LAB_076f68a3;
    }
    piVar12 = *(int **)(*(long *)((long)uStack_8e8 + 0x78) + 0x48);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_8e0) {
      piVar12 = piVar12 + 0x1a;
      iVar9 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
LAB_076f68a3:
  func_0x077859e0(&puStack_8f8,&puStack_728,&UNK_012f598d,0xb,0x10);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0ef44b00;
  if (uStack_8e0 != (long *)0x0) {
    lVar15 = *uStack_8e0;
    uStack_8e0 = plVar13;
    (**(code **)(lVar15 + 8))();
    plVar13 = uStack_8e0;
  }
  uStack_8e0 = plVar13;
  uStack_828 = (undefined *)CONCAT44(uStack_828._4_4_,(undefined4)uStack_8e8);
  uStack_820 = (long *)0x0;
  uStack_818 = (long *)((ulong)uStack_818 & 0xffffffff00000000);
  uStack_810 = 1;
  uStack_808 = 0;
  uStack_800 = &UNK_048b3f30;
  uStack_7f8 = &SUB_048b06d0;
  uStack_7f0 = &SUB_048b2190;
  uStack_7e8 = &UNK_0778bf30;
  uStack_7e0 = &UNK_0778c100;
  uStack_7d8 = (long *)((ulong)uStack_7d8 & 0xffffffff00000000);
  uStack_7d0 = 0;
  uStack_7c8 = (long *)0x0;
  func_0x048b05a0(uStack_8f0,&uStack_828);
  plVar13 = uStack_7c8;
  if (uStack_7c8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_7c8 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_7c8 + 0x10))(uStack_7c8);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x07785ca0(&puStack_8f8);
  uStack_6b8 = CONCAT31(uStack_6b8._1_3_,(undefined1)uStack_6f8);
  uStack_6c8 = (undefined4)uStack_708;
  uStack_6c4 = uStack_708._4_4_;
  iStack_6c0 = (undefined4)uStack_700;
  uStack_6bc = uStack_700._4_4_;
  uStack_6d8 = uStack_718;
  uStack_6d0 = (undefined4)uStack_710;
  uStack_6cc = uStack_710._4_4_;
  puStack_6e8 = puStack_728;
  puStack_6e0 = uStack_720;
  func_0x048b0bc0(&uStack_8e0);
  uStack_808 = 0;
  uStack_7c0 = 0;
  uStack_7b8 = 0;
  uStack_7d0 = 0;
  uStack_7c8 = (long *)0x0;
  uStack_7e0 = (undefined *)0x0;
  uStack_7d8 = (long *)0x0;
  uStack_7f0 = (undefined1 *)0x0;
  uStack_7e8 = (undefined *)0x0;
  uStack_800 = (undefined *)0x0;
  uStack_7f8 = (undefined1 *)0x0;
  uStack_7b0 = 0;
  uStack_820 = (long *)0xffffffffffffffff;
  uStack_818 = (long *)0x0;
  uStack_810 = 0xff;
  uStack_828 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_808);
  uStack_800 = (undefined *)func_0x041681f0(&uStack_808,0xf547a30);
  uStack_7f8 = (undefined1 *)func_0x041681f0(&uStack_808,0xf547770);
  uStack_7f0 = (undefined1 *)0x0;
  uStack_7e8 = (undefined *)0x0;
  uStack_7e0 = (undefined *)0x0;
  uStack_7d8 = (long *)0x0;
  uStack_7d0 = 0;
  uStack_7c8 = (long *)0x0;
  uStack_7c0 = 0;
  uStack_7b8 = 0;
  uStack_7b0 = 0;
  uStack_820 = (long *)0x100;
  uStack_290 = 0x100;
  uStack_28c = 0;
  uStack_288 = (undefined4)uStack_818;
  uStack_284 = uStack_818._4_4_;
  uStack_280 = (undefined1)uStack_810;
  puStack_298 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_278,&uStack_808);
  uStack_270 = uStack_800;
  uStack_268 = uStack_7f8;
  uStack_260 = (undefined4)uStack_7f0;
  uStack_25c = uStack_7f0._4_4_;
  uStack_258 = (undefined4)uStack_7e8;
  uStack_254 = uStack_7e8._4_4_;
  uStack_250 = (undefined4)uStack_7e0;
  uStack_24c = uStack_7e0._4_4_;
  uStack_248 = (undefined4)uStack_7d8;
  uStack_244 = uStack_7d8._4_4_;
  if (uStack_7d8 != (long *)0x0) {
    LOCK();
    uStack_7d8[1] = uStack_7d8[1] + 1;
    UNLOCK();
  }
  uStack_240 = uStack_7d0;
  if (((ulong)uStack_7c8 & 1) == 0) {
    uStack_228 = uStack_7b8;
    uStack_238 = (uint)uStack_7c8;
    uStack_234 = uStack_7c8._4_4_;
    uStack_230 = (undefined4)uStack_7c0;
    uStack_22c = uStack_7c0._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_238,uStack_7b8,uStack_7c0);
  }
  uStack_220 = uStack_7b0;
  func_0x076f8160(&uStack_5a8,&puStack_6e8,&puStack_298);
  uStack_638 = CONCAT44(iStack_574,uStack_578);
  uStack_648 = uStack_588;
  uStack_644 = uStack_584;
  iStack_640 = iStack_580;
  uStack_63c = uStack_57c;
  uStack_658 = uStack_598;
  uStack_654 = uStack_594;
  uStack_650 = uStack_590;
  uStack_64c = uStack_58c;
  puStack_668 = uStack_5a8;
  puStack_660 = uStack_5a0;
  func_0x077859e0(&puStack_8f8,&puStack_668,&UNK_01430ef7,0x10,0);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f0123c0;
  if (uStack_8e0 != (long *)0x0) {
    lVar15 = *uStack_8e0;
    uStack_8e0 = puVar16;
    (**(code **)(lVar15 + 8))();
    puVar16 = uStack_8e0;
  }
  uStack_8e0 = puVar16;
  uStack_7a8 = (undefined *)CONCAT44(uStack_7a8._4_4_,(undefined4)uStack_8e8);
  uStack_7a0 = (long *)0x0;
  uStack_798 = (undefined *)((ulong)uStack_798 & 0xffffffff00000000);
  uStack_790 = 1;
  uStack_788 = 0;
  uStack_780 = &UNK_0778c2e0;
  uStack_778 = &SUB_048b06d0;
  uStack_770 = &UNK_05e07cf0;
  puStack_768 = &UNK_0778c2f0;
  puStack_760 = &UNK_0778c580;
  uStack_758 = (long *)((ulong)uStack_758 & 0xffffffff00000000);
  uStack_750 = 0;
  plStack_748 = (long *)0x0;
  func_0x048b05a0(uStack_8f0,&uStack_7a8);
  plVar13 = plStack_748;
  if (plStack_748 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_748 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_748 + 0x10))(plStack_748);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar9 = *(int *)(uStack_8f0 + 0x1c);
  if (iVar9 == 2) {
    piVar12 = *(int **)(*(long *)(*(long *)(uStack_8f0 + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != *(int *)(uStack_8f0 + 0x18)) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while (lVar15 != *(long *)(uStack_8f0 + 8)) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar12 = *(int **)(*(long *)(*(long *)(uStack_8f0 + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar12;
    while (iVar9 != *(int *)(uStack_8f0 + 0x18)) {
      piVar12 = piVar12 + 0x1a;
      iVar9 = *piVar12;
    }
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar2 = (uint *)(*(long *)(uStack_8f0 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x07785ca0(&puStack_8f8);
  uStack_678 = CONCAT71(uStack_678._1_7_,(undefined1)uStack_638);
  uStack_688 = CONCAT44(uStack_644,uStack_648);
  uStack_680 = CONCAT44(uStack_63c,iStack_640);
  uStack_698 = (undefined *)CONCAT44(uStack_654,uStack_658);
  uStack_690 = CONCAT44(uStack_64c,uStack_650);
  puStack_6a8 = puStack_668;
  puStack_6a0 = puStack_660;
  func_0x048b0bc0(&uStack_8e0);
  uStack_8d8 = 0;
  uStack_890 = 0;
  plStack_888 = (long *)0x0;
  puStack_8a0 = (undefined *)0x0;
  uStack_898 = (long *)0x0;
  uStack_8b0 = (undefined *)0x0;
  uStack_8a8 = (long *)0x0;
  uStack_8c0 = (undefined1 *)0x0;
  uStack_8b8 = (undefined *)0x0;
  uStack_8d0 = (undefined *)0x0;
  puStack_8c8 = (undefined1 *)0x0;
  lStack_880 = 0;
  uStack_8f0 = 0xffffffffffffffff;
  uStack_8e8 = (undefined *)0x0;
  uStack_8e0 = (long *)0xff;
  puStack_8f8 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_8d8);
  uStack_8d0 = (undefined *)func_0x041681f0(&uStack_8d8,0xf547a30);
  puStack_8c8 = (undefined1 *)func_0x041681f0(&uStack_8d8,0xf547770);
  uStack_8c0 = (undefined1 *)0x0;
  uStack_8b8 = (undefined *)0x0;
  uStack_8b0 = (undefined *)0x0;
  uStack_8a8 = (long *)0x0;
  puStack_8a0 = (undefined *)0x0;
  uStack_898 = (long *)0x0;
  uStack_890 = 0;
  plStack_888 = (long *)0x0;
  lStack_880 = 0;
  uStack_8f0 = 0x10000;
  uStack_d0 = 0x10000;
  uStack_cc = 0;
  uStack_c8 = (undefined4)uStack_8e8;
  uStack_c4 = uStack_8e8._4_4_;
  uStack_c0 = (undefined1)uStack_8e0;
  puStack_d8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_b8,&uStack_8d8);
  uStack_b0 = uStack_8d0;
  uStack_a8 = puStack_8c8;
  uStack_a0 = (undefined4)uStack_8c0;
  uStack_9c = uStack_8c0._4_4_;
  uStack_98 = (undefined4)uStack_8b8;
  uStack_94 = uStack_8b8._4_4_;
  uStack_90 = (undefined4)uStack_8b0;
  uStack_8c = uStack_8b0._4_4_;
  uStack_88 = (undefined4)uStack_8a8;
  uStack_84 = uStack_8a8._4_4_;
  if (uStack_8a8 != (long *)0x0) {
    LOCK();
    uStack_8a8[1] = uStack_8a8[1] + 1;
    UNLOCK();
  }
  uStack_80 = puStack_8a0;
  if (((ulong)uStack_898 & 1) == 0) {
    uStack_68 = plStack_888;
    uStack_78 = (uint)uStack_898;
    uStack_74 = uStack_898._4_4_;
    uStack_70 = (undefined4)uStack_890;
    uStack_6c = uStack_890._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_78,plStack_888,uStack_890);
  }
  uStack_60 = lStack_880;
  func_0x076f8160(&puStack_5e8,&puStack_6a8,&puStack_d8);
  puStack_d8 = &UNK_0f4e3c70;
  if ((uStack_78 & 1) != 0) {
    func_0x0412a280(uStack_68,CONCAT44(uStack_74,uStack_78) & 0xfffffffffffffffe);
  }
  plVar13 = (long *)CONCAT44(uStack_84,uStack_88);
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(auStack_b8);
  puStack_8f8 = &UNK_0f4e3c70;
  if (((ulong)uStack_898 & 1) != 0) {
    func_0x0412a280(plStack_888,(ulong)uStack_898 & 0xfffffffffffffffe);
  }
  plVar13 = uStack_8a8;
  if (uStack_8a8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_8a8 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_8a8 + 0x10))(uStack_8a8);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(&uStack_8d8);
  puStack_298 = &UNK_0f4e3c70;
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(uStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
  }
  plVar13 = (long *)CONCAT44(uStack_244,uStack_248);
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(auStack_278);
  uStack_828 = &UNK_0f4e3c70;
  if (((ulong)uStack_7c8 & 1) != 0) {
    func_0x0412a280(uStack_7b8,(ulong)uStack_7c8 & 0xfffffffffffffffe);
  }
  plVar13 = uStack_7d8;
  if (uStack_7d8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_7d8 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_7d8 + 0x10))(uStack_7d8);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(&uStack_808);
  puStack_318 = &UNK_0f4e3c70;
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,CONCAT44(uStack_2b4,uStack_2b8) & 0xfffffffffffffffe);
  }
  plVar13 = (long *)CONCAT44(uStack_2c4,uStack_2c8);
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(auStack_2f8);
  puStack_988 = &UNK_0f4e3c70;
  if (((ulong)uStack_928 & 1) != 0) {
    func_0x0412a280(uStack_918,(ulong)uStack_928 & 0xfffffffffffffffe);
  }
  plVar13 = uStack_938;
  if (uStack_938 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_938 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_938 + 0x10))(uStack_938);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(&uStack_968);
  return;
}


