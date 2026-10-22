/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82bdbb0 (ELF vaddr 0x81bdbb0)
 * Label: caller-of-callee
 * Body:  [[082bdbb0, 082bf4c4] [082bf4d0, 082bf507] [082bf510, 082bf556] [082bf560, 082c68a2] [082c68b0, 082c80f4]]
 * Ghidra: FUN_082bdbb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_082bdbb0(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined *puVar18;
  int *piVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  bool bVar30;
  uint uStack_9a8;
  undefined4 uStack_9a4;
  undefined8 uStack_9a0;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined1 *puStack_970;
  undefined *puStack_968;
  undefined *puStack_960;
  undefined4 uStack_958;
  undefined8 uStack_950;
  long *plStack_948;
  byte bStack_939;
  uint uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  int iStack_910;
  uint uStack_90c;
  undefined4 uStack_908;
  uint uStack_904;
  uint uStack_900;
  long lStack_8f0;
  undefined1 *puStack_8e8;
  long *plStack_8e0;
  long *plStack_8d8;
  long *plStack_8d0;
  undefined *puStack_8c8;
  undefined8 uStack_8c0;
  undefined *puStack_8b8;
  long lStack_8b0;
  undefined4 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  int iStack_7f0;
  uint uStack_7ec;
  undefined1 uStack_7e8;
  long *plStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  int iStack_7a0;
  uint uStack_79c;
  undefined8 uStack_798;
  int iStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  int iStack_750;
  uint uStack_74c;
  undefined8 uStack_748;
  ulong uStack_738;
  ulong uStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  int iStack_700;
  uint uStack_6fc;
  undefined1 uStack_6f8;
  long lStack_6f0;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  int iStack_6c8;
  uint uStack_6c4;
  undefined1 uStack_6c0;
  long lStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  int iStack_690;
  uint uStack_68c;
  undefined1 uStack_688;
  long lStack_680;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  int iStack_658;
  uint uStack_654;
  undefined1 uStack_650;
  uint uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  int iStack_620;
  uint uStack_61c;
  undefined8 uStack_618;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  int iStack_5e0;
  uint uStack_5dc;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  int iStack_5a8;
  uint uStack_5a4;
  undefined1 uStack_5a0;
  uint uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  int iStack_570;
  uint uStack_56c;
  undefined8 uStack_568;
  uint uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  int iStack_530;
  uint uStack_52c;
  undefined8 uStack_528;
  uint uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  int iStack_4f0;
  uint uStack_4ec;
  undefined8 uStack_4e8;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  int iStack_4b0;
  uint uStack_4ac;
  undefined8 uStack_4a8;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  int iStack_470;
  uint uStack_46c;
  undefined8 uStack_468;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  int iStack_430;
  uint uStack_42c;
  undefined8 uStack_428;
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
  int iStack_3f0;
  uint uStack_3ec;
  undefined8 uStack_3e8;
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
  int iStack_3b0;
  uint uStack_3ac;
  undefined8 uStack_3a8;
  uint uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  int iStack_370;
  uint uStack_36c;
  char cStack_368;
  undefined7 uStack_367;
  uint uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  int iStack_330;
  uint uStack_32c;
  undefined1 uStack_328;
  undefined7 uStack_327;
  uint uStack_318;
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
  uint uStack_2d8;
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
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
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
  undefined1 uStack_268;
  undefined7 uStack_267;
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
  undefined1 uStack_228;
  undefined7 uStack_227;
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
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  func_0x07821000();
  func_0x078210b0(param_1);
  func_0x07deb370(param_1);
  func_0x07be4b40(param_1);
  lStack_8f0 = param_1;
  lVar13 = func_0x08382a00(param_1 + 0x18);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar30 = (*(byte *)(lVar13 + 8) & 1) != 0;
    puVar18 = (undefined *)(lVar13 + 9);
    if (bVar30) {
      puVar18 = *(undefined **)(lVar13 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar30) {
      uVar24 = *(ulong *)(lVar13 + 0x10);
    }
  }
  else {
    puVar18 = &UNK_011be456;
    uVar24 = 9;
  }
  func_0x08382e60(&uStack_938,lStack_8f0,puVar18,uVar24);
  uStack_904 = uStack_904 & 0xffffff00;
  uStack_900 = uStack_900 & 0xffffff00;
  if ((char)uStack_908 == '\0') {
    func_0x08386580(&puStack_8e8,&UNK_01255dc9,9);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar13 = (long)&uStack_8c0 + 1;
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf3c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf3c8), iVar11 != 0)) {
      func_0x08382bf0(0xf5cf3b0);
      func_0x0410844d(&DAT_0f5cf3c8);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_08386b90;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_08382a00;
    puStack_968 = &UNK_08386ba0;
    puStack_960 = &UNK_08386bb0;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x08386920(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082bdf0a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082bdf0a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      uStack_904 = 0xbb8863ad;
      uStack_900 = CONCAT31(uStack_900._1_3_,1);
      uStack_9a8 = 0xbb8863ad;
      lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
      lVar14 = *(long *)(lVar14 + 0x68);
      piVar17 = *(int **)(lVar14 + 0x28);
      for (piVar19 = *(int **)(lVar14 + 0x20); (piVar19 != piVar17 && (*piVar19 != -0x44779c53));
          piVar19 = piVar19 + 0xe) {
      }
      if (piVar19 == piVar17) {
        if (piVar17 < *(int **)(lVar14 + 0x30)) {
          *piVar17 = -0x44779c53;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = 0x3f800000;
          *(undefined1 *)(piVar17 + 0xc) = 0;
          *(undefined1 *)(piVar17 + 0xd) = 0;
          piVar17 = piVar17 + 0xe;
        }
        else {
          piVar17 = (int *)FUN_05d9c2b0(lVar14 + 0x20,&uStack_9a8);
        }
        *(int **)(lVar14 + 0x28) = piVar17;
      }
      else if ((*(long *)(piVar19 + 8) != 0) &&
              (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01419409
                                      ), cVar8 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar10 = uStack_904;
    lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
    puVar4 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x08386580(&puStack_8e8,&UNK_012bfde7,5);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf3c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf3c8), iVar11 != 0)) {
      func_0x08382bf0(0xf5cf3b0);
      func_0x0410844d(&DAT_0f5cf3c8);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_08386b90;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_08382a00;
    puStack_968 = &UNK_08386c00;
    puStack_960 = &UNK_08386c10;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x08386920(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082be32a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082be32a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      uStack_904 = 0xbb8863ad;
      uStack_900 = CONCAT31(uStack_900._1_3_,1);
      uStack_9a8 = 0xbb8863ad;
      lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
      lVar14 = *(long *)(lVar14 + 0x68);
      piVar17 = *(int **)(lVar14 + 0x28);
      for (piVar19 = *(int **)(lVar14 + 0x20); (piVar19 != piVar17 && (*piVar19 != -0x44779c53));
          piVar19 = piVar19 + 0xe) {
      }
      if (piVar19 == piVar17) {
        if (piVar17 < *(int **)(lVar14 + 0x30)) {
          *piVar17 = -0x44779c53;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = 0x3f800000;
          *(undefined1 *)(piVar17 + 0xc) = 0;
          *(undefined1 *)(piVar17 + 0xd) = 0;
          piVar17 = piVar17 + 0xe;
        }
        else {
          piVar17 = (int *)FUN_05d9c2b0(lVar14 + 0x20,&uStack_9a8);
        }
        *(int **)(lVar14 + 0x28) = piVar17;
      }
      else if ((*(long *)(piVar19 + 8) != 0) &&
              (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01419409
                                      ), cVar8 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar10 = uStack_904;
    lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
    puVar4 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x08386580(&puStack_8e8,&UNK_012439ca,5);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf3c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf3c8), iVar11 != 0)) {
      func_0x08382bf0(0xf5cf3b0);
      func_0x0410844d(&DAT_0f5cf3c8);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_08386b90;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_08382a00;
    puStack_968 = &UNK_08386c60;
    puStack_960 = &UNK_08386c70;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x08386920(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082be74a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082be74a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      uStack_904 = 0xbb8863ad;
      uStack_900 = CONCAT31(uStack_900._1_3_,1);
      uStack_9a8 = 0xbb8863ad;
      lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
      lVar14 = *(long *)(lVar14 + 0x68);
      piVar17 = *(int **)(lVar14 + 0x28);
      for (piVar19 = *(int **)(lVar14 + 0x20); (piVar19 != piVar17 && (*piVar19 != -0x44779c53));
          piVar19 = piVar19 + 0xe) {
      }
      if (piVar19 == piVar17) {
        if (piVar17 < *(int **)(lVar14 + 0x30)) {
          *piVar17 = -0x44779c53;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = 0x3f800000;
          *(undefined1 *)(piVar17 + 0xc) = 0;
          *(undefined1 *)(piVar17 + 0xd) = 0;
          piVar17 = piVar17 + 0xe;
        }
        else {
          piVar17 = (int *)FUN_05d9c2b0(lVar14 + 0x20,&uStack_9a8);
        }
        *(int **)(lVar14 + 0x28) = piVar17;
      }
      else if ((*(long *)(piVar19 + 8) != 0) &&
              (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01419409
                                      ), cVar8 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar10 = uStack_904;
    lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
    puVar4 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x08386580(&puStack_8e8,&UNK_013b2951,7);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf3c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf3c8), iVar11 != 0)) {
      func_0x08382bf0(0xf5cf3b0);
      func_0x0410844d(&DAT_0f5cf3c8);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_08386b90;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_08382a00;
    puStack_968 = &UNK_08386cc0;
    puStack_960 = &UNK_08386cd0;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x08386920(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082beb6a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082beb6a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      uStack_904 = 0xbb8863ad;
      uStack_900 = CONCAT31(uStack_900._1_3_,1);
      uStack_9a8 = 0xbb8863ad;
      lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
      lVar14 = *(long *)(lVar14 + 0x68);
      piVar17 = *(int **)(lVar14 + 0x28);
      for (piVar19 = *(int **)(lVar14 + 0x20); (piVar19 != piVar17 && (*piVar19 != -0x44779c53));
          piVar19 = piVar19 + 0xe) {
      }
      if (piVar19 == piVar17) {
        if (piVar17 < *(int **)(lVar14 + 0x30)) {
          *piVar17 = -0x44779c53;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = 0x3f800000;
          *(undefined1 *)(piVar17 + 0xc) = 0;
          *(undefined1 *)(piVar17 + 0xd) = 0;
          piVar17 = piVar17 + 0xe;
        }
        else {
          piVar17 = (int *)FUN_05d9c2b0(lVar14 + 0x20,&uStack_9a8);
        }
        *(int **)(lVar14 + 0x28) = piVar17;
      }
      else if ((*(long *)(piVar19 + 8) != 0) &&
              (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01419409
                                      ), cVar8 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar10 = uStack_904;
    lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
    puVar4 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x08386580(&puStack_8e8,&UNK_0143364f,0x10);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf3c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf3c8), iVar11 != 0)) {
      func_0x08382bf0(0xf5cf3b0);
      func_0x0410844d(&DAT_0f5cf3c8);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_08386b90;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_08382a00;
    puStack_968 = &UNK_08386d20;
    puStack_960 = &UNK_08386d30;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x08386920(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082bef8a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082bef8a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      uStack_904 = 0xbb8863ad;
      uStack_900 = CONCAT31(uStack_900._1_3_,1);
      uStack_9a8 = 0xbb8863ad;
      lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
      lVar14 = *(long *)(lVar14 + 0x68);
      piVar17 = *(int **)(lVar14 + 0x28);
      for (piVar19 = *(int **)(lVar14 + 0x20); (piVar19 != piVar17 && (*piVar19 != -0x44779c53));
          piVar19 = piVar19 + 0xe) {
      }
      if (piVar19 == piVar17) {
        if (piVar17 < *(int **)(lVar14 + 0x30)) {
          *piVar17 = -0x44779c53;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = 0x3f800000;
          *(undefined1 *)(piVar17 + 0xc) = 0;
          *(undefined1 *)(piVar17 + 0xd) = 0;
          piVar17 = piVar17 + 0xe;
        }
        else {
          piVar17 = (int *)FUN_05d9c2b0(lVar14 + 0x20,&uStack_9a8);
        }
        *(int **)(lVar14 + 0x28) = piVar17;
      }
      else if ((*(long *)(piVar19 + 8) != 0) &&
              (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01419409
                                      ), cVar8 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar10 = uStack_904;
    lVar14 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
    puVar4 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(lVar14 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    uVar6 = uStack_900;
    lVar16 = CONCAT44(uStack_934,uStack_938);
    plStack_7d8 = (long *)CONCAT44(plStack_7d8._4_4_,uStack_904);
    bVar5 = (byte)uStack_900;
    func_0x048b0bc0(&puStack_8e8);
    plVar15 = (long *)func_0x0eee3290();
    lVar14 = *plVar15;
    uVar10 = *(uint *)(lVar14 + 0x10c);
    uVar3 = *(uint *)(lVar14 + 0x134);
    iStack_788 = *(int *)(lVar14 + 0x1d0);
    bVar2 = *(byte *)(lVar14 + 0x1bc);
    uStack_738 = (ulong)*(byte *)(lVar14 + 0x1a4);
    uStack_730 = (ulong)*(byte *)(lVar14 + 0x1b8);
    uStack_784 = *(undefined4 *)(lVar14 + 0x1c8);
    uStack_780 = *(undefined4 *)(lVar14 + 0x1b0);
    uStack_77c = *(undefined4 *)(lVar14 + 0x194);
    bStack_939 = bVar5;
    if ((uVar6 & 1) == 0) {
      puStack_8e8 = (undefined1 *)CONCAT44(puStack_8e8._4_4_,0xbb8863ad);
      lVar14 = func_0x08382a00(lVar16 + 0x18);
      lVar14 = *(long *)(lVar14 + 0x68);
      piVar17 = *(int **)(lVar14 + 0x28);
      for (piVar19 = *(int **)(lVar14 + 0x20); (piVar19 != piVar17 && (*piVar19 != -0x44779c53));
          piVar19 = piVar19 + 0xe) {
      }
      if (piVar19 == piVar17) {
        if (piVar17 < *(int **)(lVar14 + 0x30)) {
          *piVar17 = -0x44779c53;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = 0x3f800000;
          *(undefined1 *)(piVar17 + 0xc) = 0;
          *(undefined1 *)(piVar17 + 0xd) = 0;
          piVar17 = piVar17 + 0xe;
        }
        else {
          piVar17 = (int *)FUN_05d9c2b0(lVar14 + 0x20,&puStack_8e8);
        }
        *(int **)(lVar14 + 0x28) = piVar17;
        bStack_939 = 1;
        plStack_7d8 = (long *)CONCAT44(plStack_7d8._4_4_,0xbb8863ad);
      }
      else {
        bStack_939 = 1;
        plStack_7d8 = (long *)CONCAT44(plStack_7d8._4_4_,0xbb8863ad);
        if ((*(long *)(piVar19 + 8) != 0) &&
           (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01419409),
           cVar8 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
    }
    lStack_7d0 = lVar16 + 0x18;
    lVar14 = func_0x08382a00(lStack_7d0);
    piVar19 = *(int **)(*(long *)(lVar14 + 0x68) + 0x20);
    piVar17 = *(int **)(*(long *)(lVar14 + 0x68) + 0x28);
    if (piVar19 != piVar17) {
      do {
        if (*piVar19 == (int)plStack_7d8) break;
        piVar19 = piVar19 + 0xe;
      } while (piVar19 != piVar17);
    }
    if ((piVar19 == piVar17) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar24 = (ulong)((uint)bVar2 << 0x10 | iStack_788 << 0x18 | (uVar3 & 0xff) << 8) +
             ((ulong)bVar2 << 0x28 | uStack_738 << 0x20) + 0x20 |
             (ulong)uVar10 << 0x38 | uStack_730 << 0x30;
    uVar10 = (uint)(char)bVar2;
    uVar10 = (((int)(char)uStack_77c ^
              (((((((int)(char)uStack_730 ^
                   (((int)(char)(uVar24 >> 0x38) ^
                    ((int)(uVar24 >> 0x18) >> 0x18 ^
                    (((int)(char)uStack_738 ^
                     ((((int)(char)uVar3 ^ 0x811c9dc5U) * 0x1000193 ^ uVar10) * 0x1000193 ^
                     (int)(char)iStack_788) * 0x1000193) * 0x1000193 ^ uVar10) * 0x1000193) *
                    0x1000193) * 0x1000193 ^ uVar10) * 0x1000193) * 0x1000193 ^
                  (int)(char)iStack_788) * 0x1000193 ^ (int)(char)uStack_784) * 0x1000193 ^ uVar10)
                * 0x1000193 ^ (int)(char)uStack_780) * 0x1000193 ^ (int)(char)uStack_780) *
              0x1000193) * 0x1000193 ^ (int)(char)uStack_784) * 0x1000193;
    uStack_9a8 = uVar10;
    if (piVar19 != (int *)0x0) {
      uVar24 = (ulong)uVar10;
      do {
        uVar28 = *(ulong *)(piVar19 + 4);
        if (uVar28 != 0) {
          uVar27 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
          uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
          uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar27 >> 0x38 < 2) {
            uVar25 = (ulong)(uVar10 & (int)uVar28 - 1U);
          }
          else {
            uVar25 = uVar24;
            if (uVar28 <= uVar24) {
              uVar25 = (ulong)uVar10 % (uVar28 & 0xffffffff);
            }
          }
          plVar15 = *(long **)(*(long *)(piVar19 + 2) + uVar25 * 8);
          if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
            if ((byte)(uVar27 >> 0x38) < 2) {
              do {
                if (plVar15[1] == uVar24) {
                  if (*(uint *)(plVar15 + 2) == uVar10) goto LAB_082bf651;
                }
                else if ((plVar15[1] & uVar28 - 1) != uVar25) break;
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
            }
            else {
              do {
                uVar27 = plVar15[1];
                if (uVar27 == uVar24) {
                  if (*(uint *)(plVar15 + 2) == uVar10) goto LAB_082bf651;
                }
                else {
                  if (uVar28 <= uVar27) {
                    if ((uVar27 | uVar28) >> 0x20 == 0) {
                      if ((uVar27 & 0xffffffff) % (uVar28 & 0xffffffff) == uVar25)
                      goto LAB_082bf519;
                      break;
                    }
                    uVar27 = uVar27 % uVar28;
                  }
                  if (uVar27 != uVar25) break;
                }
LAB_082bf519:
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
            }
          }
        }
        if ((char)piVar19[0xd] != '\x01') break;
        iVar11 = piVar19[0xc];
        lVar14 = func_0x08382a00(lStack_7d0);
        piVar17 = *(int **)(*(long *)(lVar14 + 0x68) + 0x28);
        for (piVar19 = *(int **)(*(long *)(lVar14 + 0x68) + 0x20);
            (piVar19 != piVar17 && (*piVar19 != iVar11)); piVar19 = piVar19 + 0xe) {
        }
        if ((piVar19 == piVar17) &&
           (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
           cVar8 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
      } while (piVar19 != (int *)0x0);
    }
    cVar8 = func_0x0eeddcf0(&UNK_011bd148,&UNK_01276d96,0x3b4,&UNK_0119d818,&UNK_01291960);
    if (cVar8 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
LAB_082bf651:
    lVar14 = lStack_7d0;
    if ((bStack_939 & 1) == 0) {
      puStack_8e8 = (undefined1 *)CONCAT44(puStack_8e8._4_4_,0xbb8863ad);
      lVar16 = func_0x08382a00(lStack_7d0);
      lVar16 = *(long *)(lVar16 + 0x68);
      piVar17 = *(int **)(lVar16 + 0x28);
      for (piVar19 = *(int **)(lVar16 + 0x20); (piVar19 != piVar17 && (*piVar19 != -0x44779c53));
          piVar19 = piVar19 + 0xe) {
      }
      if (piVar19 == piVar17) {
        if (piVar17 < *(int **)(lVar16 + 0x30)) {
          *piVar17 = -0x44779c53;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = 0x3f800000;
          *(undefined1 *)(piVar17 + 0xc) = 0;
          *(undefined1 *)(piVar17 + 0xd) = 0;
          piVar17 = piVar17 + 0xe;
        }
        else {
          piVar17 = (int *)FUN_05d9c2b0(lVar16 + 0x20,&puStack_8e8);
          lVar14 = lStack_7d0;
        }
        *(int **)(lVar16 + 0x28) = piVar17;
        plStack_7d8 = (long *)CONCAT44(plStack_7d8._4_4_,0xbb8863ad);
      }
      else {
        plStack_7d8 = (long *)CONCAT44(plStack_7d8._4_4_,0xbb8863ad);
        if ((*(long *)(piVar19 + 8) != 0) &&
           (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01419409),
           lVar14 = lStack_7d0, cVar8 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
    }
    lVar14 = func_0x08382a00(lVar14);
    piVar19 = *(int **)(*(long *)(lVar14 + 0x68) + 0x20);
    piVar17 = *(int **)(*(long *)(lVar14 + 0x68) + 0x28);
    if (piVar19 != piVar17) {
      do {
        if (*piVar19 == (int)plStack_7d8) break;
        piVar19 = piVar19 + 0xe;
      } while (piVar19 != piVar17);
    }
    if ((piVar19 == piVar17) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_8e8 = (undefined1 *)&uStack_9a8;
    lVar14 = func_0x078d52c0(piVar19 + 2,&uStack_9a8,&UNK_01563a4f,&puStack_8e8,&uStack_818);
    *(undefined1 *)(lVar14 + 0x14) = 1;
    func_0x08386580(&puStack_8e8,&UNK_01379ee7,5);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar13 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar13 + 3 + uVar28) ^
                       ((int)*(char *)(lVar13 + 2 + uVar28) ^
                       ((int)*(char *)(lVar13 + 1 + uVar28) ^
                       ((int)*(char *)(lVar13 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar13 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf3c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf3c8), iVar11 != 0)) {
      func_0x08382bf0(0xf5cf3b0);
      func_0x0410844d(&DAT_0f5cf3c8);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_08386b90;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_08382a00;
    puStack_968 = &UNK_08386d80;
    puStack_960 = &UNK_08386d90;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    uStack_818 = CONCAT44(uStack_92c,uStack_930);
    uStack_810 = (long *)CONCAT44(uStack_924,uStack_928);
    func_0x08386920(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar13 = *(long *)(piVar19 + 0xc);
      while (lVar13 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar13 = *(long *)(piVar19 + 0xc);
      }
LAB_082bfa7a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082bfa7a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      uStack_904 = 0xbb8863ad;
      uStack_900 = CONCAT31(uStack_900._1_3_,1);
      uStack_9a8 = 0xbb8863ad;
      lVar13 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
      lVar13 = *(long *)(lVar13 + 0x68);
      piVar17 = *(int **)(lVar13 + 0x28);
      for (piVar19 = *(int **)(lVar13 + 0x20); (piVar19 != piVar17 && (*piVar19 != -0x44779c53));
          piVar19 = piVar19 + 0xe) {
      }
      if (piVar19 == piVar17) {
        if (piVar17 < *(int **)(lVar13 + 0x30)) {
          *piVar17 = -0x44779c53;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = 0x3f800000;
          *(undefined1 *)(piVar17 + 0xc) = 0;
          *(undefined1 *)(piVar17 + 0xd) = 0;
          piVar17 = piVar17 + 0xe;
        }
        else {
          piVar17 = (int *)FUN_05d9c2b0(lVar13 + 0x20,&uStack_9a8);
        }
        *(int **)(lVar13 + 0x28) = piVar17;
      }
      else if ((*(long *)(piVar19 + 8) != 0) &&
              (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01419409
                                      ), cVar8 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar10 = uStack_904;
    lVar13 = func_0x08382a00(CONCAT44(uStack_934,uStack_938) + 0x18);
    puVar4 = *(uint **)(*(long *)(lVar13 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(lVar13 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e5240),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
  }
  if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
    func_0x08386ea0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf460);
  }
  plVar15 = (long *)(*(long *)(lStack_8f0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_8f0 + 0x20) -
                                         *(long *)(lStack_8f0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
  do {
    lVar13 = *plVar15;
    if (lVar13 == -1) goto LAB_082bfc70;
    plVar15 = (long *)(*(long *)(lStack_8f0 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lStack_8f0 + 0x30) + 8 + lVar13 * 0x18) !=
           *(uint *)(_DAT_0f5cf3e0 + 4));
  if (plVar15 == *(long **)(lStack_8f0 + 0x38)) {
LAB_082bfc70:
    puVar18 = &DAT_0f5cf3e0;
    if (iRam000000000f5cf440 != -0x2b3da790) goto LAB_082bfcc5;
LAB_082bfc9b:
    lVar13 = *(long *)(puVar18 + 0x68);
    if (lVar13 == 0) goto LAB_082bfcc5;
    bVar30 = (*(byte *)(lVar13 + 8) & 1) != 0;
    puVar18 = (undefined *)(lVar13 + 9);
    if (bVar30) {
      puVar18 = *(undefined **)(lVar13 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar30) {
      uVar24 = *(ulong *)(lVar13 + 0x10);
    }
  }
  else {
    puVar18 = (undefined *)plVar15[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_082bfc9b;
LAB_082bfcc5:
    puVar18 = &UNK_012f73ee;
    uVar24 = 0xe;
  }
  func_0x083872e0(&uStack_938,lStack_8f0,puVar18,uVar24);
  uStack_904 = uStack_904 & 0xffffff00;
  uStack_900 = uStack_900 & 0xffffff00;
  if ((char)uStack_908 == '\0') {
    func_0x0838ab60(&puStack_8e8,&UNK_012da89a,6);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar13 = (long)&uStack_8c0 + 1;
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b230;
    puStack_960 = &UNK_0838b240;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082bff9a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082bff9a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c0031;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c0031:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x0838ab60(&puStack_8e8,&UNK_013cad17,6);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b450;
    puStack_960 = &UNK_0838b460;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c035a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c035a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c03e1;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c03e1:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x0838ab60(&puStack_8e8,&UNK_013ae7c5,6);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b4b0;
    puStack_960 = &UNK_0838b4c0;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c070a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c070a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c0791;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c0791:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x0838ab60(&puStack_8e8,&UNK_01363080,6);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b510;
    puStack_960 = &UNK_0838b520;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c0aba:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c0aba;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c0b41;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c0b41:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    uStack_9a8 = uStack_938;
    uStack_9a4 = uStack_934;
    uStack_998 = uStack_928;
    uStack_994 = uStack_924;
    uStack_980 = (undefined *)CONCAT44(uStack_90c,iStack_910);
    uStack_978 = (undefined1 *)CONCAT44(uStack_904,uStack_908);
    puStack_970 = (undefined1 *)CONCAT44(puStack_970._4_4_,uStack_900);
    func_0x048b0bc0(&puStack_8e8);
    func_0x082db530(&puStack_8e8,&uStack_9a8,&UNK_01363080,6);
    func_0x0838ab60(&puStack_8e8,&UNK_0132b975,7);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b570;
    puStack_960 = &UNK_0838b580;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c0eba:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c0eba;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c0f41;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c0f41:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    uStack_9a8 = uStack_938;
    uStack_9a4 = uStack_934;
    uStack_998 = uStack_928;
    uStack_994 = uStack_924;
    uStack_980 = (undefined *)CONCAT44(uStack_90c,iStack_910);
    uStack_978 = (undefined1 *)CONCAT44(uStack_904,uStack_908);
    puStack_970 = (undefined1 *)CONCAT44(puStack_970._4_4_,uStack_900);
    func_0x048b0bc0(&puStack_8e8);
    func_0x082db530(&puStack_8e8,&uStack_9a8,&UNK_0132b975,7);
    func_0x0838ab60(&puStack_8e8,&UNK_0141918d,9);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b5d0;
    puStack_960 = &UNK_0838b5e0;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c12ba:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c12ba;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c1341;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c1341:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    uStack_9a8 = uStack_938;
    uStack_9a4 = uStack_934;
    uStack_998 = uStack_928;
    uStack_994 = uStack_924;
    uStack_980 = (undefined *)CONCAT44(uStack_90c,iStack_910);
    uStack_978 = (undefined1 *)CONCAT44(uStack_904,uStack_908);
    puStack_970 = (undefined1 *)CONCAT44(puStack_970._4_4_,uStack_900);
    func_0x048b0bc0(&puStack_8e8);
    func_0x082db530(&puStack_8e8,&uStack_9a8,&UNK_0141918d,9);
    func_0x0838ab60(&puStack_8e8,&UNK_01419197,10);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b630;
    puStack_960 = &UNK_0838b640;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c16ba:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c16ba;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c1741;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c1741:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    uStack_9a8 = uStack_938;
    uStack_9a4 = uStack_934;
    uStack_998 = uStack_928;
    uStack_994 = uStack_924;
    uStack_980 = (undefined *)CONCAT44(uStack_90c,iStack_910);
    uStack_978 = (undefined1 *)CONCAT44(uStack_904,uStack_908);
    puStack_970 = (undefined1 *)CONCAT44(puStack_970._4_4_,uStack_900);
    func_0x048b0bc0(&puStack_8e8);
    func_0x082db530(&puStack_8e8,&uStack_9a8,&UNK_01419197,10);
    func_0x0838ab60(&puStack_8e8,&UNK_012f73fd,9);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b690;
    puStack_960 = &UNK_0838b6a0;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c1aba:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c1aba;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c1b41;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c1b41:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x0838ab60(&puStack_8e8,&UNK_0147e732,0x13);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b6f0;
    puStack_960 = &UNK_0838b700;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c1e6a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c1e6a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c1ef1;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c1ef1:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    uStack_9a8 = uStack_938;
    uStack_9a4 = uStack_934;
    uStack_998 = uStack_928;
    uStack_994 = uStack_924;
    uStack_980 = (undefined *)CONCAT44(uStack_90c,iStack_910);
    uStack_978 = (undefined1 *)CONCAT44(uStack_904,uStack_908);
    puStack_970 = (undefined1 *)CONCAT44(puStack_970._4_4_,uStack_900);
    func_0x048b0bc0(&puStack_8e8);
    func_0x082db530(&puStack_8e8,&uStack_9a8,&UNK_0147e732,0x13);
    func_0x0838ab60(&puStack_8e8,&UNK_011a3650,8);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar13 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar13 + 3 + uVar28) ^
                       ((int)*(char *)(lVar13 + 2 + uVar28) ^
                       ((int)*(char *)(lVar13 + 1 + uVar28) ^
                       ((int)*(char *)(lVar13 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar13 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf480 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf480), iVar11 != 0)) {
      func_0x08386fb0();
      func_0x0410844d(&DAT_0f5cf480);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838b170;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08386de0;
    puStack_968 = &UNK_0838b750;
    puStack_960 = &UNK_0838b760;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    uStack_818 = CONCAT44(uStack_92c,uStack_930);
    uStack_810 = (long *)CONCAT44(uStack_924,uStack_928);
    func_0x0838af00(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar13 = *(long *)(piVar19 + 0xc);
      while (lVar13 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar13 = *(long *)(piVar19 + 0xc);
      }
LAB_082c225a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c225a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838b290(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar13 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf460 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf460), iVar11 != 0)) {
      func_0x08386ea0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf460);
    }
    plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf3e0 + 4)) * 8);
    do {
      lVar14 = *plVar15;
      if (lVar14 == -1) goto LAB_082c22e0;
      plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf3e0 + 4)
            );
    if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c22e0:
      puVar18 = &DAT_0f5cf3e0;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cf4a9),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
  }
  if ((DAT_0f5cf518 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf518), iVar11 != 0)) {
    func_0x0838b870();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf498,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf518);
  }
  plVar15 = (long *)(*(long *)(lStack_8f0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_8f0 + 0x20) -
                                         *(long *)(lStack_8f0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5cf498 + 4)) * 8);
  do {
    lVar13 = *plVar15;
    if (lVar13 == -1) goto LAB_082c23f0;
    plVar15 = (long *)(*(long *)(lStack_8f0 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lStack_8f0 + 0x30) + 8 + lVar13 * 0x18) !=
           *(uint *)(_DAT_0f5cf498 + 4));
  if (plVar15 == *(long **)(lStack_8f0 + 0x38)) {
LAB_082c23f0:
    puVar18 = &DAT_0f5cf498;
    if (iRam000000000f5cf4f8 != -0x2b3da790) goto LAB_082c2445;
LAB_082c241b:
    lVar13 = *(long *)(puVar18 + 0x68);
    if (lVar13 == 0) goto LAB_082c2445;
    bVar30 = (*(byte *)(lVar13 + 8) & 1) != 0;
    puVar18 = (undefined *)(lVar13 + 9);
    if (bVar30) {
      puVar18 = *(undefined **)(lVar13 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar30) {
      uVar24 = *(ulong *)(lVar13 + 0x10);
    }
  }
  else {
    puVar18 = (undefined *)plVar15[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_082c241b;
LAB_082c2445:
    puVar18 = &UNK_01465ad9;
    uVar24 = 0x13;
  }
  func_0x0838bcb0(&uStack_938,lStack_8f0,puVar18,uVar24);
  uStack_904 = uStack_904 & 0xffffff00;
  uStack_900 = uStack_900 & 0xffffff00;
  if ((char)uStack_908 == '\0') {
    func_0x0838f530(&puStack_8e8,&UNK_012439ca,5);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar13 = (long)&uStack_8c0 + 1;
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf538 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf538), iVar11 != 0)) {
      func_0x0838b980();
      func_0x0410844d(&DAT_0f5cf538);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838fb40;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_0838b7b0;
    puStack_968 = &UNK_0838fc00;
    puStack_960 = &UNK_0838fc10;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838f8d0(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c271a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c271a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838fc60(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf518 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf518), iVar11 != 0)) {
      func_0x0838b870();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf498,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf518);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf498 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c27b1;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf498 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c27b1:
      puVar18 = &DAT_0f5cf498;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01310af2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x0838f530(&puStack_8e8,&UNK_011b9da0,9);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf538 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf538), iVar11 != 0)) {
      func_0x0838b980();
      func_0x0410844d(&DAT_0f5cf538);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838fb40;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_0838b7b0;
    puStack_968 = &UNK_0838fe20;
    puStack_960 = &UNK_0838fe30;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838f8d0(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c2ada:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c2ada;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838fc60(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf518 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf518), iVar11 != 0)) {
      func_0x0838b870();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf498,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf518);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf498 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c2b61;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf498 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c2b61:
      puVar18 = &DAT_0f5cf498;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01310af2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x0838f530(&puStack_8e8,&UNK_01363087,7);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    lVar14 = lVar13;
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar14 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + 3 + uVar28) ^
                       ((int)*(char *)(lVar14 + 2 + uVar28) ^
                       ((int)*(char *)(lVar14 + 1 + uVar28) ^
                       ((int)*(char *)(lVar14 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar14 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf538 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf538), iVar11 != 0)) {
      func_0x0838b980();
      func_0x0410844d(&DAT_0f5cf538);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838fb40;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_0838b7b0;
    puStack_968 = &UNK_0838fe80;
    puStack_960 = &UNK_0838fe90;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar14 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    func_0x0838f8d0(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar14 = *(long *)(piVar19 + 0xc);
      while (lVar14 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar14 = *(long *)(piVar19 + 0xc);
      }
LAB_082c2e8a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c2e8a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838fc60(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar14 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf518 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf518), iVar11 != 0)) {
      func_0x0838b870();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf498,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf518);
    }
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf498 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_082c2f11;
      plVar15 = (long *)(*(long *)(lVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5cf498 + 4)
            );
    if (plVar15 == *(long **)(lVar14 + 0x38)) {
LAB_082c2f11:
      puVar18 = &DAT_0f5cf498;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01310af2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
    func_0x0838f530(&puStack_8e8,&UNK_01379ee7,5);
    puVar18 = (undefined *)((ulong)uStack_8c0 >> 1 & 0x7f);
    if (((ulong)uStack_8c0 & 1) != 0) {
      puVar18 = puStack_8b8;
      lVar13 = lStack_8b0;
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_90c = 0x811c9dc5;
    }
    else {
      uVar24 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined *)0x4) {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
      }
      else {
        uStack_90c = 0x811c9dc5;
        uVar28 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar13 + 3 + uVar28) ^
                       ((int)*(char *)(lVar13 + 2 + uVar28) ^
                       ((int)*(char *)(lVar13 + 1 + uVar28) ^
                       ((int)*(char *)(lVar13 + uVar28) ^ uStack_90c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar28 = uVar28 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar28);
      }
      if (uVar24 != 0) {
        uVar27 = 0;
        do {
          uStack_90c = ((int)*(char *)(lVar13 + uVar28 + uVar27) ^ uStack_90c) * 0x1000193;
          uVar27 = uVar27 + 1;
        } while (uVar24 != uVar27);
      }
    }
    iStack_910 = 2;
    if ((DAT_0f5cf538 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf538), iVar11 != 0)) {
      func_0x0838b980();
      func_0x0410844d(&DAT_0f5cf538);
    }
    uStack_9a8 = uStack_90c;
    uStack_9a0 = 0;
    uStack_998 = 3;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0838fb40;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_0838b7b0;
    puStack_968 = &UNK_0838fee0;
    puStack_960 = &UNK_0838fef0;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(&uStack_930,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_808 = uStack_920;
    uStack_804 = uStack_91c;
    uStack_800 = uStack_918;
    uStack_7fc = uStack_914;
    uStack_818 = CONCAT44(uStack_92c,uStack_930);
    uStack_810 = (long *)CONCAT44(uStack_924,uStack_928);
    func_0x0838f8d0(&uStack_9a8,&uStack_818,&puStack_8e8);
    if (uStack_990._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_990) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar13 = *(long *)(piVar19 + 0xc);
      while (lVar13 != uStack_9a0) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar13 = *(long *)(piVar19 + 0xc);
      }
LAB_082c322a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 9;
    }
    else {
      if (uStack_990._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_994,uStack_998) + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_990) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c322a;
      }
      if (uStack_990._4_4_ == 0) {
        puVar29 = (uint *)(CONCAT44(uStack_994,uStack_998) + 0x18);
        *puVar29 = *puVar29 | 0x90000;
      }
    }
    if ((byte)uStack_900 == '\0') {
      func_0x0838fc60(&uStack_9a8,&uStack_938);
    }
    uVar10 = uStack_904;
    lVar13 = CONCAT44(uStack_934,uStack_938);
    if ((DAT_0f5cf518 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf518), iVar11 != 0)) {
      func_0x0838b870();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf498,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf518);
    }
    plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf498 + 4)) * 8);
    do {
      lVar14 = *plVar15;
      if (lVar14 == -1) goto LAB_082c32b0;
      plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf498 + 4)
            );
    if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c32b0:
      puVar18 = &DAT_0f5cf498;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
        (puVar29 != puVar4 && (*puVar29 != uVar10)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01310af2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_9a8 = uStack_9a8 & 0xffffff00;
    func_0x05d9c620(puVar29 + 2,&uStack_90c,&uStack_90c,&uStack_9a8);
    func_0x048b0bc0(&puStack_8e8);
  }
  lVar13 = lStack_8f0;
  func_0x082c9310(lStack_8f0);
  func_0x07dba970(lVar13);
  func_0x07ddabf0(lVar13);
  func_0x07dd3560(lVar13);
  if ((DAT_0f5cf5d0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf5d0), iVar11 != 0)) {
    func_0x08390000();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf550,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf5d0);
  }
  plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5cf550 + 4)) * 8);
  do {
    lVar14 = *plVar15;
    if (lVar14 == -1) goto LAB_082c33e0;
    plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf550 + 4));
  if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c33e0:
    puVar18 = &DAT_0f5cf550;
    if (iRam000000000f5cf5b0 != -0x2b3da790) goto LAB_082c344b;
LAB_082c340b:
    lVar14 = *(long *)(puVar18 + 0x68);
    if (lVar14 == 0) goto LAB_082c344b;
    bVar30 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar16 = lVar14 + 9;
    if (bVar30) {
      lVar16 = *(long *)(lVar14 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar30) {
      uVar24 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x08390640(&uStack_938,lVar13,lVar16,uVar24);
  }
  else {
    puVar18 = (undefined *)plVar15[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_082c340b;
LAB_082c344b:
    func_0x08390640(&uStack_938,lVar13,&UNK_01397b41,0x27);
  }
  if ((char)uStack_908 == '\0') {
    func_0x08391230(&puStack_8e8,&uStack_938,&UNK_014191a2,0x11,1);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f1159c8;
    if (plStack_8d0 != (long *)0x0) {
      lVar13 = *plStack_8d0;
      plStack_8d0 = plVar15;
      (**(code **)(lVar13 + 8))();
      plVar15 = plStack_8d0;
    }
    plStack_8d0 = plVar15;
    uStack_9a8 = (uint)plStack_8d8;
    uStack_9a0 = 0;
    uStack_998 = 0;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_08391a10;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_07e08100;
    puStack_968 = &UNK_08391a20;
    puStack_960 = &UNK_08391b80;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(plStack_8e0,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x083914f0(&puStack_8e8);
    uStack_748 = CONCAT71(uStack_748._1_7_,(char)uStack_908);
    uStack_758 = uStack_918;
    uStack_754 = uStack_914;
    iStack_750 = iStack_910;
    uStack_74c = uStack_90c;
    uStack_768 = uStack_928;
    uStack_764 = uStack_924;
    uStack_760 = uStack_920;
    uStack_75c = uStack_91c;
    uStack_778 = CONCAT44(uStack_934,uStack_938);
    uStack_770._0_4_ = uStack_930;
    uStack_770._4_4_ = uStack_92c;
    func_0x048b0bc0(&plStack_8d0);
    lStack_7c8 = uStack_778;
    uStack_7c0 = (undefined4)uStack_770;
    uStack_7bc = uStack_770._4_4_;
    uStack_7b8 = uStack_768;
    uStack_7b4 = uStack_764;
    uStack_7b0 = uStack_760;
    uStack_7ac = uStack_75c;
    uStack_7a8 = uStack_758;
    uStack_7a4 = uStack_754;
    iStack_7a0 = iStack_750;
    uStack_79c = uStack_74c;
    uStack_798 = uStack_748;
    func_0x08391230(&puStack_8e8,&lStack_7c8,&UNK_0132b97d,0x15,0);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f115a40;
    if (plStack_8d0 != (long *)0x0) {
      lVar13 = *plStack_8d0;
      plStack_8d0 = plVar15;
      (**(code **)(lVar13 + 8))();
      plVar15 = plStack_8d0;
    }
    plStack_8d0 = plVar15;
    uStack_9a8 = (uint)plStack_8d8;
    uStack_9a0 = 0;
    uStack_998 = 0;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_083965d0;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &UNK_08396290;
    puStack_968 = &UNK_083965e0;
    puStack_960 = &UNK_083967c0;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(plStack_8e0,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    iVar11 = *(int *)((long)plStack_8e0 + 0x1c);
    if (iVar11 == 2) {
      piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)plStack_8e0[3]) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar13 = *(long *)(piVar19 + 0xc);
      while (lVar13 != plStack_8e0[1]) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar13 = *(long *)(piVar19 + 0xc);
      }
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else if (iVar11 == 1) {
      piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x48);
      iVar11 = *piVar19;
      while (iVar11 != (int)plStack_8e0[3]) {
        piVar19 = piVar19 + 0x1a;
        iVar11 = *piVar19;
      }
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else if (iVar11 == 0) {
      *(uint *)(plStack_8e0[2] + 0x18) = *(uint *)(plStack_8e0[2] + 0x18) | 0x40000;
    }
    func_0x083914f0(&puStack_8e8);
    uStack_7e8 = (undefined1)uStack_798;
    uStack_7f8 = uStack_7a8;
    uStack_7f4 = uStack_7a4;
    iStack_7f0 = iStack_7a0;
    uStack_7ec = uStack_79c;
    uStack_808 = uStack_7b8;
    uStack_804 = uStack_7b4;
    uStack_800 = uStack_7b0;
    uStack_7fc = uStack_7ac;
    uStack_818 = lStack_7c8;
    uStack_810 = (long *)CONCAT44(uStack_7bc,uStack_7c0);
    func_0x048b0bc0(&plStack_8d0);
    func_0x08391230(&puStack_8e8,&uStack_818,&UNK_014191b4,0x14,1);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f115c38;
    if (plStack_8d0 != (long *)0x0) {
      lVar13 = *plStack_8d0;
      plStack_8d0 = plVar15;
      (**(code **)(lVar13 + 8))();
      plVar15 = plStack_8d0;
    }
    plStack_8d0 = plVar15;
    uStack_9a8 = 0x519f05e1;
    uStack_9a0 = 0;
    uStack_998 = 0;
    uStack_990 = 2;
    uStack_988 = 1;
    uStack_980 = &UNK_08396f70;
    uStack_978 = &UNK_07d98660;
    puStack_970 = &SUB_07e672d0;
    puStack_968 = &UNK_08396f90;
    puStack_960 = &UNK_083971b0;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(plStack_8e0,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    iVar11 = *(int *)((long)plStack_8e0 + 0x1c);
    if (iVar11 == 2) {
      piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)plStack_8e0[3]) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar13 = *(long *)(piVar19 + 0xc);
      while (lVar13 != plStack_8e0[1]) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar13 = *(long *)(piVar19 + 0xc);
      }
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else if (iVar11 == 1) {
      piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x48);
      iVar11 = *piVar19;
      while (iVar11 != (int)plStack_8e0[3]) {
        piVar19 = piVar19 + 0x1a;
        iVar11 = *piVar19;
      }
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else if (iVar11 == 0) {
      *(uint *)(plStack_8e0[2] + 0x18) = *(uint *)(plStack_8e0[2] + 0x18) | 0x40000;
    }
    func_0x083914f0(&puStack_8e8);
    func_0x048b0bc0(&plStack_8d0);
  }
  lVar13 = lStack_8f0;
  func_0x07bed8a0(lStack_8f0);
  func_0x07b9f220(lVar13);
  if ((DAT_0f5cf910 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf910), iVar11 != 0)) {
    func_0x08397840();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf890,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf910);
  }
  plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5cf890 + 4)) * 8);
  do {
    lVar14 = *plVar15;
    if (lVar14 == -1) goto LAB_082c3aa0;
    plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf890 + 4));
  if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c3aa0:
    puVar18 = &DAT_0f5cf890;
    if (iRam000000000f5cf8f0 != -0x2b3da790) goto LAB_082c3b0b;
LAB_082c3acb:
    lVar14 = *(long *)(puVar18 + 0x68);
    if (lVar14 == 0) goto LAB_082c3b0b;
    bVar30 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar16 = lVar14 + 9;
    if (bVar30) {
      lVar16 = *(long *)(lVar14 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar30) {
      uVar24 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x08397ca0(&uStack_938,lVar13,lVar16,uVar24);
  }
  else {
    puVar18 = (undefined *)plVar15[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_082c3acb;
LAB_082c3b0b:
    func_0x08397ca0(&uStack_938,lVar13,&UNK_01291590,0x15);
  }
  if ((char)uStack_908 == '\0') {
    func_0x083987f0(&puStack_8e8,&uStack_938,&UNK_012dd874,0x12);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0f00e0;
    if (plStack_8d0 != (long *)0x0) {
      lVar13 = *plStack_8d0;
      plStack_8d0 = plVar15;
      (**(code **)(lVar13 + 8))();
      plVar15 = plStack_8d0;
    }
    plStack_8d0 = plVar15;
    uStack_9a8 = (uint)plStack_8d8;
    uStack_9a0 = 0;
    uStack_998 = 0;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_07be1630;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_07bdd460;
    puStack_968 = &UNK_08398da0;
    puStack_960 = &UNK_08398f00;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(plStack_8e0,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x08398aa0(&puStack_8e8);
    cVar8 = (char)uStack_908;
    uVar10 = uStack_90c;
    iVar11 = iStack_910;
    lVar13 = CONCAT44(uStack_934,uStack_938);
    uStack_778 = CONCAT44(uStack_92c,uStack_930);
    uStack_770 = CONCAT44(uStack_924,uStack_928);
    uStack_768 = uStack_920;
    uStack_764 = uStack_91c;
    uStack_760 = uStack_918;
    uStack_75c = uStack_914;
    func_0x048b0bc0(&plStack_8d0);
    if ((DAT_0f5cf910 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5cf910), iVar12 != 0)) {
      func_0x08397840();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf890,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf910);
    }
    plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf890 + 4)) * 8);
    do {
      lVar14 = *plVar15;
      if (lVar14 == -1) goto LAB_082c3d00;
      plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf890 + 4)
            );
    if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c3d00:
      puVar18 = &DAT_0f5cf890;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012294f5),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar20 = (undefined1 *)func_0x048b0c90(lVar13 + 0x18,puVar18,uVar10,1);
    if (puVar20 == (undefined1 *)0x0) {
      puStack_8e8 = (undefined1 *)0x0;
      plStack_8e0 = (long *)0x0;
      FUN_048b0d20(&puStack_8e8);
      puVar20 = puStack_8e8;
    }
    *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 5;
    uStack_7c0 = (undefined4)uStack_778;
    uStack_7bc = uStack_778._4_4_;
    uStack_7b8 = (undefined4)uStack_770;
    uStack_7b4 = uStack_770._4_4_;
    uStack_7b0 = uStack_768;
    uStack_7ac = uStack_764;
    uStack_7a8 = uStack_760;
    uStack_7a4 = uStack_75c;
    iStack_7a0 = iVar11;
    uStack_79c = uVar10;
    uStack_798 = CONCAT71(uStack_798._1_7_,cVar8);
    lStack_7c8 = lVar13;
    func_0x083987f0(&puStack_8e8,&lStack_7c8,&UNK_011a0bc2,8);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f011f18;
    if (plStack_8d0 != (long *)0x0) {
      lVar13 = *plStack_8d0;
      plStack_8d0 = plVar15;
      (**(code **)(lVar13 + 8))();
      plVar15 = plStack_8d0;
    }
    plStack_8d0 = plVar15;
    uStack_9a8 = (uint)plStack_8d8;
    uStack_9a0 = 0;
    uStack_998 = 0;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_05f27580;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_05f23890;
    puStack_968 = &UNK_083990d0;
    puStack_960 = &UNK_08399240;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(plStack_8e0,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x08398aa0(&puStack_8e8);
    uStack_7e8 = (undefined1)uStack_798;
    uStack_7f8 = uStack_7a8;
    uStack_7f4 = uStack_7a4;
    iStack_7f0 = iStack_7a0;
    uStack_7ec = uStack_79c;
    uStack_808 = uStack_7b8;
    uStack_804 = uStack_7b4;
    uStack_800 = uStack_7b0;
    uStack_7fc = uStack_7ac;
    uStack_818 = lStack_7c8;
    uStack_810 = (long *)CONCAT44(uStack_7bc,uStack_7c0);
    func_0x048b0bc0(&plStack_8d0);
    func_0x083987f0(&puStack_8e8,&uStack_818,&UNK_0132b993,6);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0ef46ce8;
    if (plStack_8d0 != (long *)0x0) {
      lVar13 = *plStack_8d0;
      plStack_8d0 = plVar15;
      (**(code **)(lVar13 + 8))();
      plVar15 = plStack_8d0;
    }
    plStack_8d0 = plVar15;
    uStack_9a8 = (uint)plStack_8d8;
    uStack_9a0 = 0;
    uStack_998 = 0;
    uStack_990 = 1;
    uStack_988 = 0;
    uStack_980 = &UNK_0490ce30;
    uStack_978 = &SUB_048b06d0;
    puStack_970 = &SUB_0490cb20;
    puStack_968 = &UNK_08399420;
    puStack_960 = &UNK_08399580;
    uStack_958 = 0;
    uStack_950 = 0;
    plStack_948 = (long *)0x0;
    FUN_048b05a0(plStack_8e0,&uStack_9a8);
    plVar15 = plStack_948;
    if (plStack_948 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_948 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_948 + 0x10))(plStack_948);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x08398aa0(&puStack_8e8);
    uVar10 = uStack_7ec;
    iVar11 = iStack_7f0;
    lVar13 = uStack_818;
    func_0x048b0bc0(&plStack_8d0);
    if ((DAT_0f5cf910 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5cf910), iVar12 != 0)) {
      func_0x08397840();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf890,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf910);
    }
    plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf890 + 4)) * 8);
    do {
      lVar14 = *plVar15;
      if (lVar14 == -1) goto LAB_082c4100;
      plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf890 + 4)
            );
    if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c4100:
      puVar18 = &DAT_0f5cf890;
    }
    else {
      puVar18 = (undefined *)plVar15[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012294f5),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar20 = (undefined1 *)func_0x048b0c90(lVar13 + 0x18,puVar18,uVar10,1);
    if (puVar20 == (undefined1 *)0x0) {
      puStack_8e8 = (undefined1 *)0x0;
      plStack_8e0 = (long *)0x0;
      FUN_048b0d20(&puStack_8e8);
      puVar20 = puStack_8e8;
    }
    *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5cf998 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf998), iVar11 != 0)) {
    func_0x08399820();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf918,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf998);
  }
  plVar15 = (long *)(*(long *)(lStack_8f0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_8f0 + 0x20) -
                                         *(long *)(lStack_8f0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5cf918 + 4)) * 8);
  do {
    lVar13 = *plVar15;
    if (lVar13 == -1) goto LAB_082c4210;
    plVar15 = (long *)(*(long *)(lStack_8f0 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lStack_8f0 + 0x30) + 8 + lVar13 * 0x18) !=
           *(uint *)(_DAT_0f5cf918 + 4));
  if (plVar15 == *(long **)(lStack_8f0 + 0x38)) {
LAB_082c4210:
    puVar18 = &DAT_0f5cf918;
    if (iRam000000000f5cf978 != -0x2b3da790) goto LAB_082c4263;
LAB_082c423b:
    lVar13 = *(long *)(puVar18 + 0x68);
    if (lVar13 == 0) goto LAB_082c4263;
    bVar30 = (*(byte *)(lVar13 + 8) & 1) != 0;
    puVar18 = (undefined *)(lVar13 + 9);
    if (bVar30) {
      puVar18 = *(undefined **)(lVar13 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar30) {
      uVar24 = *(ulong *)(lVar13 + 0x10);
    }
  }
  else {
    puVar18 = (undefined *)plVar15[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_082c423b;
LAB_082c4263:
    puVar18 = &UNK_0144d8d4;
    uVar24 = 0x12;
  }
  func_0x08399fd0(&uStack_9a8,lStack_8f0,puVar18,uVar24);
  if ((char)uStack_978 == '\0') {
    uStack_980 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f5cf9b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf9b8), iVar11 != 0)) {
      func_0x08399930();
      func_0x0410844d(&DAT_0f5cf9b8);
    }
    puStack_8e8 = (undefined1 *)CONCAT44(puStack_8e8._4_4_,uStack_980._4_4_);
    plStack_8e0 = (long *)0x0;
    plStack_8d8 = (long *)((ulong)plStack_8d8 & 0xffffffff00000000);
    plStack_8d0 = (long *)0x1;
    puStack_8c8 = &SUB_048aead0;
    uStack_8c0 = &UNK_0839ab30;
    puStack_8b8 = &UNK_0839abf0;
    lStack_8b0 = 0;
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    func_0x049057f0(&uStack_9a0,&puStack_8e8);
    func_0x048aea50(&puStack_8e8);
    uStack_928 = (int)uStack_990;
    uStack_924 = uStack_990._4_4_;
    uStack_920 = (int)uStack_988;
    uStack_91c = uStack_988._4_4_;
    uStack_938 = (uint)uStack_9a0;
    uStack_934 = uStack_9a0._4_4_;
    uStack_930 = uStack_998;
    uStack_92c = uStack_994;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f115db0;
    if ((DAT_0f551bc8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f551bc8), iVar11 != 0)) {
      FUN_04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    puStack_8e8 = (undefined1 *)CONCAT44(puStack_8e8._4_4_,_DAT_0f551bb4);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&UNK_0ef46c48;
    plStack_8e0 = plVar15 + 3;
    plVar15[3] = (long)puVar21;
    plVar15[4] = 0;
    *(undefined1 *)(plVar15 + 5) = 0xff;
    uStack_818 = 0;
    uStack_810 = (long *)0x0;
    plStack_8d8 = plVar15;
    func_0x048afd20(&uStack_938,&puStack_8e8);
    plVar15 = plStack_8d8;
    if (plStack_8d8 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_8d8 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_8d8 + 0x10))(plStack_8d8);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_810;
    if (uStack_810 != (long *)0x0) {
      LOCK();
      plVar26 = uStack_810 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_810 + 0x10))(uStack_810);
        func_0x0412c2d0(plVar15);
      }
    }
    if ((DAT_0f5cf9b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf9b8), iVar11 != 0)) {
      func_0x08399930();
      func_0x0410844d(&DAT_0f5cf9b8);
    }
    if (uStack_988._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(uStack_990 + 0x78) + 0x60);
      iVar11 = *piVar19;
      while (iVar11 != (int)uStack_988) {
        piVar19 = piVar19 + 0x16;
        iVar11 = *piVar19;
      }
      lVar13 = *(long *)(piVar19 + 0xc);
      while (lVar13 != CONCAT44(uStack_994,uStack_998)) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar13 = *(long *)(piVar19 + 0xc);
      }
LAB_082c453a:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 2;
    }
    else {
      if (uStack_988._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(uStack_990 + 0x78) + 0x48);
        iVar11 = *piVar19;
        while (iVar11 != (int)uStack_988) {
          piVar19 = piVar19 + 0x1a;
          iVar11 = *piVar19;
        }
        goto LAB_082c453a;
      }
      if (uStack_988._4_4_ == 0) {
        *(uint *)(uStack_990 + 0x18) = *(uint *)(uStack_990 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f5cf9b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf9b8), iVar11 != 0)) {
      func_0x08399930();
      func_0x0410844d(&DAT_0f5cf9b8);
    }
    puStack_8e8 = (undefined1 *)CONCAT44(puStack_8e8._4_4_,0xbf75c8f8);
    plStack_8e0 = (long *)0x0;
    plStack_8d8 = (long *)CONCAT44(plStack_8d8._4_4_,1);
    plStack_8d0 = (long *)0x0;
    puStack_8c8 = &UNK_0839ae30;
    uStack_8c0 = &SUB_048b06d0;
    puStack_8b8 = &UNK_0839ca10;
    lStack_8b0 = 0;
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    func_0x049057f0(&uStack_9a0,&puStack_8e8);
    func_0x048aea50(&puStack_8e8);
    uStack_928 = (int)uStack_990;
    uStack_924 = uStack_990._4_4_;
    uStack_920 = (int)uStack_988;
    uStack_91c = uStack_988._4_4_;
    uStack_938 = (uint)uStack_9a0;
    uStack_934 = uStack_9a0._4_4_;
    uStack_930 = uStack_998;
    uStack_92c = uStack_994;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f115db0;
    if ((DAT_0f551cb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f551cb0), iVar11 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    puStack_8e8 = (undefined1 *)CONCAT44(puStack_8e8._4_4_,_DAT_0f551c9c);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&UNK_0ef46c98;
    plStack_8e0 = plVar15 + 3;
    plVar15[3] = (long)puVar21;
    *(undefined1 *)(plVar15 + 4) = 0xff;
    uStack_818 = 0;
    uStack_810 = (long *)0x0;
    plStack_8d8 = plVar15;
    func_0x048afd20(&uStack_938,&puStack_8e8);
    plVar15 = plStack_8d8;
    if (plStack_8d8 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_8d8 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_8d8 + 0x10))(plStack_8d8);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_810;
    if (uStack_810 != (long *)0x0) {
      LOCK();
      plVar26 = uStack_810 + 1;
      lVar13 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_810 + 0x10))(uStack_810);
        func_0x0412c2d0(plVar15);
      }
    }
  }
  lVar13 = lStack_8f0;
  func_0x07dd1be0();
  if ((DAT_0f5cf1b0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5cf1b0), iVar11 != 0)) {
    func_0x0837aff0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf130,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf1b0);
  }
  plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5cf130 + 4)) * 8);
  do {
    lVar14 = *plVar15;
    if (lVar14 == -1) goto LAB_082c4790;
    plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf130 + 4));
  if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c4790:
    puVar18 = &DAT_0f5cf130;
    if (iRam000000000f5cf190 != -0x2b3da790) goto LAB_082c47f8;
LAB_082c47bb:
    lVar14 = *(long *)(puVar18 + 0x68);
    if (lVar14 == 0) goto LAB_082c47f8;
    bVar30 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar16 = lVar14 + 9;
    if (bVar30) {
      lVar16 = *(long *)(lVar14 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar30) {
      uVar24 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0839e350(&uStack_938,lVar13,lVar16,uVar24);
  }
  else {
    puVar18 = (undefined *)plVar15[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_082c47bb;
LAB_082c47f8:
    func_0x0839e350(&uStack_938,lVar13,&UNK_011a3659,0x1c);
  }
  if ((char)uStack_908 != '\0') {
    return;
  }
  func_0x0839eef0(&puStack_8e8,&uStack_938,&UNK_0132b99a,0xf,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f012250;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05e81fb0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_05e2f040;
  puStack_968 = &UNK_0839f510;
  puStack_960 = &UNK_0839f670;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  cStack_368 = (char)uStack_908;
  uStack_378 = uStack_918;
  uStack_374 = uStack_914;
  iStack_370 = iStack_910;
  uStack_36c = uStack_90c;
  uStack_388 = uStack_928;
  uStack_384 = uStack_924;
  uStack_380 = uStack_920;
  uStack_37c = uStack_91c;
  uStack_398 = uStack_938;
  uStack_394 = uStack_934;
  uStack_390 = uStack_930;
  uStack_38c = uStack_92c;
  func_0x048b0bc0(&plStack_8d0);
  uStack_598 = uStack_398;
  uStack_594 = uStack_394;
  uStack_590 = uStack_390;
  uStack_58c = uStack_38c;
  uStack_588 = uStack_388;
  uStack_584 = uStack_384;
  uStack_580 = uStack_380;
  uStack_57c = uStack_37c;
  uStack_578 = uStack_378;
  uStack_574 = uStack_374;
  iStack_570 = iStack_370;
  uStack_56c = uStack_36c;
  uStack_568 = CONCAT71(uStack_367,cStack_368);
  func_0x0839eef0(&puStack_8e8,&uStack_598,&UNK_011a0bc2,8,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0124a8;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05da29c0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_05da26d0;
  puStack_968 = &UNK_0839f840;
  puStack_960 = &UNK_0839f9b0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uStack_328 = (undefined1)uStack_568;
  uStack_338 = uStack_578;
  uStack_334 = uStack_574;
  iStack_330 = iStack_570;
  uStack_32c = uStack_56c;
  uStack_348 = uStack_588;
  uStack_344 = uStack_584;
  uStack_340 = uStack_580;
  uStack_33c = uStack_57c;
  uStack_358 = uStack_598;
  uStack_354 = uStack_594;
  uStack_350 = uStack_590;
  uStack_34c = uStack_58c;
  func_0x048b0bc0(&plStack_8d0);
  uStack_558 = uStack_358;
  uStack_554 = uStack_354;
  uStack_550 = uStack_350;
  uStack_54c = uStack_34c;
  uStack_548 = uStack_348;
  uStack_544 = uStack_344;
  uStack_540 = uStack_340;
  uStack_53c = uStack_33c;
  uStack_538 = uStack_338;
  uStack_534 = uStack_334;
  iStack_530 = iStack_330;
  uStack_52c = uStack_32c;
  uStack_528 = CONCAT71(uStack_327,uStack_328);
  func_0x0839eef0(&puStack_8e8,&uStack_558,&UNK_0136308f,0xb,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f012250;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05e81fb0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_05e2f040;
  puStack_968 = &UNK_0839fb90;
  puStack_960 = &UNK_0839fcf0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uStack_2e8 = (undefined1)uStack_528;
  uStack_2f8 = uStack_538;
  uStack_2f4 = uStack_534;
  iStack_2f0 = iStack_530;
  uStack_2ec = uStack_52c;
  uStack_308 = uStack_548;
  uStack_304 = uStack_544;
  uStack_300 = uStack_540;
  uStack_2fc = uStack_53c;
  uStack_318 = uStack_558;
  uStack_314 = uStack_554;
  uStack_310 = uStack_550;
  uStack_30c = uStack_54c;
  func_0x048b0bc0(&plStack_8d0);
  uStack_518 = uStack_318;
  uStack_514 = uStack_314;
  uStack_510 = uStack_310;
  uStack_50c = uStack_30c;
  uStack_508 = uStack_308;
  uStack_504 = uStack_304;
  uStack_500 = uStack_300;
  uStack_4fc = uStack_2fc;
  uStack_4f8 = uStack_2f8;
  uStack_4f4 = uStack_2f4;
  iStack_4f0 = iStack_2f0;
  uStack_4ec = uStack_2ec;
  uStack_4e8 = CONCAT71(uStack_2e7,uStack_2e8);
  func_0x0839eef0(&puStack_8e8,&uStack_518,&UNK_012c3db6,0x14,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0126a0;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05daeda0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_05daea90;
  puStack_968 = &UNK_0839fed0;
  puStack_960 = &UNK_083a0030;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uStack_2a8 = (undefined1)uStack_4e8;
  uStack_2b8 = uStack_4f8;
  uStack_2b4 = uStack_4f4;
  iStack_2b0 = iStack_4f0;
  uStack_2ac = uStack_4ec;
  uStack_2c8 = uStack_508;
  uStack_2c4 = uStack_504;
  uStack_2c0 = uStack_500;
  uStack_2bc = uStack_4fc;
  uStack_2d8 = uStack_518;
  uStack_2d4 = uStack_514;
  uStack_2d0 = uStack_510;
  uStack_2cc = uStack_50c;
  func_0x048b0bc0(&plStack_8d0);
  uStack_648 = uStack_2d8;
  uStack_644 = uStack_2d4;
  uStack_640 = uStack_2d0;
  uStack_63c = uStack_2cc;
  uStack_638 = uStack_2c8;
  uStack_634 = uStack_2c4;
  uStack_630 = uStack_2c0;
  uStack_62c = uStack_2bc;
  uStack_628 = uStack_2b8;
  uStack_624 = uStack_2b4;
  iStack_620 = iStack_2b0;
  uStack_61c = uStack_2ac;
  uStack_618 = CONCAT71(uStack_2a7,uStack_2a8);
  func_0x0839eef0(&puStack_8e8,&uStack_648,&UNK_0137c71c,10,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f115f90;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_083a1940;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_083a12a0;
  puStack_968 = &UNK_083a1a00;
  puStack_960 = &UNK_083a1b60;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uVar10 = uStack_61c;
  iVar11 = iStack_620;
  lVar13 = CONCAT44(uStack_644,uStack_648);
  uStack_d8 = CONCAT44(uStack_63c,uStack_640);
  uStack_d0 = CONCAT44(uStack_634,uStack_638);
  uStack_c8 = uStack_630;
  uStack_c4 = uStack_62c;
  uStack_c0 = uStack_628;
  uStack_bc = uStack_624;
  uVar7 = (undefined1)uStack_618;
  func_0x048b0bc0(&plStack_8d0);
  if ((DAT_0f5cf1b0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5cf1b0), iVar12 != 0)) {
    func_0x0837aff0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf130,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf1b0);
  }
  plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5cf130 + 4)) * 8);
  do {
    lVar14 = *plVar15;
    if (lVar14 == -1) goto LAB_082c50c1;
    plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf130 + 4));
  if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c50c1:
    puVar18 = &DAT_0f5cf130;
  }
  else {
    puVar18 = (undefined *)plVar15[2];
  }
  if ((1 < iVar11 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310b87),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar20 = (undefined1 *)func_0x048b0c90(lVar13 + 0x18,puVar18,uVar10,1);
  if (puVar20 == (undefined1 *)0x0) {
    puStack_8e8 = (undefined1 *)0x0;
    plStack_8e0 = (long *)0x0;
    FUN_048b0d20(&puStack_8e8);
    puVar20 = puStack_8e8;
  }
  *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 5;
  uStack_6e8 = (undefined4)uStack_d8;
  uStack_6e4 = uStack_d8._4_4_;
  uStack_6e0 = (undefined4)uStack_d0;
  uStack_6dc = uStack_d0._4_4_;
  uStack_6d8 = uStack_c8;
  uStack_6d4 = uStack_c4;
  uStack_6d0 = uStack_c0;
  uStack_6cc = uStack_bc;
  iStack_6c8 = iVar11;
  uStack_6c4 = uVar10;
  uStack_6c0 = uVar7;
  lStack_6f0 = lVar13;
  func_0x0839eef0(&puStack_8e8,&lStack_6f0,&UNK_012a9cb0,10,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f115740;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_08386b90;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_08382a00;
  puStack_968 = &UNK_083a1fe0;
  puStack_960 = &UNK_083a2140;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uVar7 = uStack_6c0;
  uVar10 = uStack_6c4;
  iVar11 = iStack_6c8;
  lVar13 = lStack_6f0;
  uStack_b8 = uStack_6e8;
  uStack_b4 = uStack_6e4;
  uStack_b0 = uStack_6e0;
  uStack_ac = uStack_6dc;
  uStack_a8 = uStack_6d8;
  uStack_a4 = uStack_6d4;
  uStack_a0 = uStack_6d0;
  uStack_9c = uStack_6cc;
  func_0x048b0bc0(&plStack_8d0);
  if ((DAT_0f5cf1b0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5cf1b0), iVar12 != 0)) {
    func_0x0837aff0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf130,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf1b0);
  }
  plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5cf130 + 4)) * 8);
  do {
    lVar14 = *plVar15;
    if (lVar14 == -1) goto LAB_082c5391;
    plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf130 + 4));
  if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c5391:
    puVar18 = &DAT_0f5cf130;
  }
  else {
    puVar18 = (undefined *)plVar15[2];
  }
  if ((1 < iVar11 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310b87),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar20 = (undefined1 *)func_0x048b0c90(lVar13 + 0x18,puVar18,uVar10,1);
  if (puVar20 == (undefined1 *)0x0) {
    puStack_8e8 = (undefined1 *)0x0;
    plStack_8e0 = (long *)0x0;
    FUN_048b0d20(&puStack_8e8);
    puVar20 = puStack_8e8;
  }
  *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 5;
  lStack_6b8 = lVar13;
  uStack_6b0 = uStack_b8;
  uStack_6ac = uStack_b4;
  uStack_6a8 = uStack_b0;
  uStack_6a4 = uStack_ac;
  uStack_6a0 = uStack_a8;
  uStack_69c = uStack_a4;
  uStack_698 = uStack_a0;
  uStack_694 = uStack_9c;
  iStack_690 = iVar11;
  uStack_68c = uVar10;
  uStack_688 = uVar7;
  func_0x0839eef0(&puStack_8e8,&lStack_6b8,&UNK_013fef60,9,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f115820;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_0838b170;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_08386de0;
  puStack_968 = &UNK_083a25b0;
  puStack_960 = &UNK_083a2710;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uVar7 = uStack_688;
  uVar10 = uStack_68c;
  iVar11 = iStack_690;
  lVar13 = lStack_6b8;
  uStack_98 = uStack_6b0;
  uStack_94 = uStack_6ac;
  uStack_90 = uStack_6a8;
  uStack_8c = uStack_6a4;
  uStack_88 = uStack_6a0;
  uStack_84 = uStack_69c;
  uStack_80 = uStack_698;
  uStack_7c = uStack_694;
  func_0x048b0bc0(&plStack_8d0);
  if ((DAT_0f5cf1b0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5cf1b0), iVar12 != 0)) {
    func_0x0837aff0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf130,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf1b0);
  }
  plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5cf130 + 4)) * 8);
  do {
    lVar14 = *plVar15;
    if (lVar14 == -1) goto LAB_082c5661;
    plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf130 + 4));
  if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c5661:
    puVar18 = &DAT_0f5cf130;
  }
  else {
    puVar18 = (undefined *)plVar15[2];
  }
  if ((1 < iVar11 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310b87),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar20 = (undefined1 *)func_0x048b0c90(lVar13 + 0x18,puVar18,uVar10,1);
  if (puVar20 == (undefined1 *)0x0) {
    puStack_8e8 = (undefined1 *)0x0;
    plStack_8e0 = (long *)0x0;
    FUN_048b0d20(&puStack_8e8);
    puVar20 = puStack_8e8;
  }
  *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 5;
  lStack_680 = lVar13;
  uStack_678 = uStack_98;
  uStack_674 = uStack_94;
  uStack_670 = uStack_90;
  uStack_66c = uStack_8c;
  uStack_668 = uStack_88;
  uStack_664 = uStack_84;
  uStack_660 = uStack_80;
  uStack_65c = uStack_7c;
  iStack_658 = iVar11;
  uStack_654 = uVar10;
  uStack_650 = uVar7;
  func_0x0839eef0(&puStack_8e8,&lStack_680,&UNK_011be460,0x15,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f115900;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_0838fb40;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_0838b7b0;
  puStack_968 = &UNK_083a2b80;
  puStack_960 = &UNK_083a2ce0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uVar7 = uStack_650;
  uVar10 = uStack_654;
  iVar11 = iStack_658;
  lVar13 = lStack_680;
  uStack_78 = uStack_678;
  uStack_74 = uStack_674;
  uStack_70 = uStack_670;
  uStack_6c = uStack_66c;
  uStack_68 = uStack_668;
  uStack_64 = uStack_664;
  uStack_60 = uStack_660;
  uStack_5c = uStack_65c;
  func_0x048b0bc0(&plStack_8d0);
  if ((DAT_0f5cf1b0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5cf1b0), iVar12 != 0)) {
    func_0x0837aff0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf130,0xf53dab8);
    func_0x0410844d(&DAT_0f5cf1b0);
  }
  plVar15 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5cf130 + 4)) * 8);
  do {
    lVar14 = *plVar15;
    if (lVar14 == -1) goto LAB_082c5931;
    plVar15 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf130 + 4));
  if (plVar15 == *(long **)(lVar13 + 0x38)) {
LAB_082c5931:
    puVar18 = &DAT_0f5cf130;
  }
  else {
    puVar18 = (undefined *)plVar15[2];
  }
  if ((1 < iVar11 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310b87),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar20 = (undefined1 *)func_0x048b0c90(lVar13 + 0x18,puVar18,uVar10,1);
  if (puVar20 == (undefined1 *)0x0) {
    puStack_8e8 = (undefined1 *)0x0;
    plStack_8e0 = (long *)0x0;
    FUN_048b0d20(&puStack_8e8);
    puVar20 = puStack_8e8;
  }
  *(undefined1 *)(*(long *)(puVar20 + 0x58) + 0xa8) = 5;
  uStack_5d0 = lVar13;
  uStack_5c8 = uStack_78;
  uStack_5c4 = uStack_74;
  uStack_5c0 = uStack_70;
  uStack_5bc = uStack_6c;
  uStack_5b8 = uStack_68;
  uStack_5b4 = uStack_64;
  uStack_5b0 = uStack_60;
  uStack_5ac = uStack_5c;
  iStack_5a8 = iVar11;
  uStack_5a4 = uVar10;
  uStack_5a0 = uVar7;
  func_0x0839eef0(&puStack_8e8,&uStack_5d0,&UNK_012c3dcb,0x11,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f012250;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05e81fb0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_05e2f040;
  puStack_968 = &UNK_083a3150;
  puStack_960 = &UNK_083a32b0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uStack_268 = uStack_5a0;
  uStack_278 = uStack_5b0;
  uStack_274 = uStack_5ac;
  iStack_270 = iStack_5a8;
  uStack_26c = uStack_5a4;
  uStack_288 = uStack_5c0;
  uStack_284 = uStack_5bc;
  uStack_280 = uStack_5b8;
  uStack_27c = uStack_5b4;
  uStack_298 = (undefined4)uStack_5d0;
  uStack_294 = uStack_5d0._4_4_;
  uStack_290 = uStack_5c8;
  uStack_28c = uStack_5c4;
  func_0x048b0bc0(&plStack_8d0);
  uStack_4d8 = uStack_298;
  uStack_4d4 = uStack_294;
  uStack_4d0 = uStack_290;
  uStack_4cc = uStack_28c;
  uStack_4c8 = uStack_288;
  uStack_4c4 = uStack_284;
  uStack_4c0 = uStack_280;
  uStack_4bc = uStack_27c;
  uStack_4b8 = uStack_278;
  uStack_4b4 = uStack_274;
  iStack_4b0 = iStack_270;
  uStack_4ac = uStack_26c;
  uStack_4a8 = CONCAT71(uStack_267,uStack_268);
  func_0x0839eef0(&puStack_8e8,&uStack_4d8,&UNK_0147e746,0xb,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0e94d8;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_077d0140;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_077cfe60;
  puStack_968 = &UNK_083a3490;
  puStack_960 = &UNK_083a35f0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uStack_228 = (undefined1)uStack_4a8;
  uStack_238 = uStack_4b8;
  uStack_234 = uStack_4b4;
  iStack_230 = iStack_4b0;
  uStack_22c = uStack_4ac;
  uStack_248 = uStack_4c8;
  uStack_244 = uStack_4c4;
  uStack_240 = uStack_4c0;
  uStack_23c = uStack_4bc;
  uStack_258 = uStack_4d8;
  uStack_254 = uStack_4d4;
  uStack_250 = uStack_4d0;
  uStack_24c = uStack_4cc;
  func_0x048b0bc0(&plStack_8d0);
  uStack_498 = uStack_258;
  uStack_494 = uStack_254;
  uStack_490 = uStack_250;
  uStack_48c = uStack_24c;
  uStack_488 = uStack_248;
  uStack_484 = uStack_244;
  uStack_480 = uStack_240;
  uStack_47c = uStack_23c;
  uStack_478 = uStack_238;
  uStack_474 = uStack_234;
  iStack_470 = iStack_230;
  uStack_46c = uStack_22c;
  uStack_468 = CONCAT71(uStack_227,uStack_228);
  func_0x0839eef0(&puStack_8e8,&uStack_498,&UNK_014cf430,9,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0124a8;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05da29c0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_05da26d0;
  puStack_968 = &UNK_083a37d0;
  puStack_960 = &UNK_083a3940;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uStack_1e8 = (undefined1)uStack_468;
  uStack_1f8 = uStack_478;
  uStack_1f4 = uStack_474;
  iStack_1f0 = iStack_470;
  uStack_1ec = uStack_46c;
  uStack_208 = uStack_488;
  uStack_204 = uStack_484;
  uStack_200 = uStack_480;
  uStack_1fc = uStack_47c;
  uStack_218 = uStack_498;
  uStack_214 = uStack_494;
  uStack_210 = uStack_490;
  uStack_20c = uStack_48c;
  func_0x048b0bc0(&plStack_8d0);
  uStack_458 = uStack_218;
  uStack_454 = uStack_214;
  uStack_450 = uStack_210;
  uStack_44c = uStack_20c;
  uStack_448 = uStack_208;
  uStack_444 = uStack_204;
  uStack_440 = uStack_200;
  uStack_43c = uStack_1fc;
  uStack_438 = uStack_1f8;
  uStack_434 = uStack_1f4;
  iStack_430 = iStack_1f0;
  uStack_42c = uStack_1ec;
  uStack_428 = CONCAT71(uStack_1e7,uStack_1e8);
  func_0x0839eef0(&puStack_8e8,&uStack_458,&UNK_014191b4,0x14,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f116008;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_083a4f40;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_083a4b70;
  puStack_968 = &UNK_083a5000;
  puStack_960 = &UNK_083a5200;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  iVar11 = *(int *)((long)plStack_8e0 + 0x1c);
  if (iVar11 == 2) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    lVar13 = *(long *)(piVar19 + 0xc);
    while (lVar13 != plStack_8e0[1]) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar13 = *(long *)(piVar19 + 0xc);
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 1) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x48);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x1a;
      iVar11 = *piVar19;
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 0) {
    *(uint *)(plStack_8e0[2] + 0x18) = *(uint *)(plStack_8e0[2] + 0x18) | 0x40000;
  }
  func_0x0839f210(&puStack_8e8);
  uStack_1a8 = (undefined1)uStack_428;
  uStack_1b8 = uStack_438;
  uStack_1b4 = uStack_434;
  iStack_1b0 = iStack_430;
  uStack_1ac = uStack_42c;
  uStack_1c8 = uStack_448;
  uStack_1c4 = uStack_444;
  uStack_1c0 = uStack_440;
  uStack_1bc = uStack_43c;
  uStack_1d8 = uStack_458;
  uStack_1d4 = uStack_454;
  uStack_1d0 = uStack_450;
  uStack_1cc = uStack_44c;
  func_0x048b0bc0(&plStack_8d0);
  uStack_418 = uStack_1d8;
  uStack_414 = uStack_1d4;
  uStack_410 = uStack_1d0;
  uStack_40c = uStack_1cc;
  uStack_408 = uStack_1c8;
  uStack_404 = uStack_1c4;
  uStack_400 = uStack_1c0;
  uStack_3fc = uStack_1bc;
  uStack_3f8 = uStack_1b8;
  uStack_3f4 = uStack_1b4;
  iStack_3f0 = iStack_1b0;
  uStack_3ec = uStack_1ac;
  uStack_3e8 = CONCAT71(uStack_1a7,uStack_1a8);
  func_0x0839eef0(&puStack_8e8,&uStack_418,&UNK_011a3676,0x12,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f1160f8;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_083a6920;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_083a6600;
  puStack_968 = &UNK_083a69e0;
  puStack_960 = &UNK_083a6da0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  iVar11 = *(int *)((long)plStack_8e0 + 0x1c);
  if (iVar11 == 2) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    lVar13 = *(long *)(piVar19 + 0xc);
    while (lVar13 != plStack_8e0[1]) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar13 = *(long *)(piVar19 + 0xc);
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 1) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x48);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x1a;
      iVar11 = *piVar19;
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 0) {
    *(uint *)(plStack_8e0[2] + 0x18) = *(uint *)(plStack_8e0[2] + 0x18) | 0x40000;
  }
  func_0x0839f210(&puStack_8e8);
  uStack_168 = (undefined1)uStack_3e8;
  uStack_178 = uStack_3f8;
  uStack_174 = uStack_3f4;
  iStack_170 = iStack_3f0;
  uStack_16c = uStack_3ec;
  uStack_188 = uStack_408;
  uStack_184 = uStack_404;
  uStack_180 = uStack_400;
  uStack_17c = uStack_3fc;
  uStack_198 = uStack_418;
  uStack_194 = uStack_414;
  uStack_190 = uStack_410;
  uStack_18c = uStack_40c;
  func_0x048b0bc0(&plStack_8d0);
  uStack_608 = uStack_198;
  uStack_604 = uStack_194;
  uStack_600 = uStack_190;
  uStack_5fc = uStack_18c;
  uStack_5f8 = uStack_188;
  uStack_5f4 = uStack_184;
  uStack_5f0 = uStack_180;
  uStack_5ec = uStack_17c;
  uStack_5e8 = uStack_178;
  uStack_5e4 = uStack_174;
  iStack_5e0 = iStack_170;
  uStack_5dc = uStack_16c;
  uStack_5d8 = CONCAT71(uStack_167,uStack_168);
  func_0x0839eef0(&puStack_8e8,&uStack_608,&UNK_01433660,0x14,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f1161e8;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar15;
    (**(code **)(lVar13 + 8))();
    plVar15 = plStack_8d0;
  }
  plStack_8d0 = plVar15;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_083a8400;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_083a8030;
  puStack_968 = &UNK_083a84c0;
  puStack_960 = &UNK_083a86a0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar15 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_948 + 1;
    lVar13 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar15);
    }
  }
  iVar11 = *(int *)((long)plStack_8e0 + 0x1c);
  if (iVar11 == 2) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    lVar13 = *(long *)(piVar19 + 0xc);
    while (lVar13 != plStack_8e0[1]) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar13 = *(long *)(piVar19 + 0xc);
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 1) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x48);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x1a;
      iVar11 = *piVar19;
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 0) {
    *(uint *)(plStack_8e0[2] + 0x18) = *(uint *)(plStack_8e0[2] + 0x18) | 0x40000;
  }
  func_0x0839f210(&puStack_8e8);
  uVar10 = uStack_5dc;
  iVar11 = iStack_5e0;
  lVar13 = CONCAT44(uStack_604,uStack_608);
  uStack_58 = CONCAT44(uStack_5fc,uStack_600);
  uStack_50 = CONCAT44(uStack_5f4,uStack_5f8);
  uStack_48 = uStack_5f0;
  uStack_44 = uStack_5ec;
  uStack_40 = uStack_5e8;
  uStack_3c = uStack_5e4;
  uVar7 = (undefined1)uStack_5d8;
  func_0x048b0bc0(&plStack_8d0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f116260;
  plStack_7d8 = plVar15 + 3;
  plVar15[4] = -1;
  plVar15[5] = 0;
  *(undefined1 *)(plVar15 + 6) = 0xff;
  plVar15[3] = (long)&UNK_0f111bc0;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  if (iVar11 == 4) {
    if ((DAT_0f5cf1b0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5cf1b0), iVar12 != 0)) {
      func_0x0837aff0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf130,0xf53dab8);
      func_0x0410844d(&DAT_0f5cf1b0);
    }
    plVar26 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5cf130 + 4)) * 8);
    do {
      lVar14 = *plVar26;
      if (lVar14 == -1) goto LAB_082c6780;
      plVar26 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cf130 + 4)
            );
    if (plVar26 == *(long **)(lVar13 + 0x38)) {
LAB_082c6780:
      puVar18 = &DAT_0f5cf130;
    }
    else {
      puVar18 = (undefined *)plVar26[2];
    }
    lStack_8f0 = CONCAT71(lStack_8f0._1_7_,uVar7);
    puVar20 = (undefined1 *)func_0x048b1040(lVar13 + 0x18,puVar18,uVar10,1);
    if (puVar20 == (undefined1 *)0x0) {
      puStack_8e8 = (undefined1 *)0x0;
      plStack_8e0 = (long *)0x0;
      func_0x048b10d0(&puStack_8e8);
      puVar22 = *(undefined1 **)(puStack_8e8 + 0x38);
      puVar20 = puStack_8e8;
      if (puVar22 == (undefined1 *)0x0) goto LAB_082c6874;
LAB_082c6899:
      do {
        puVar20 = puVar22;
        puVar22 = *(undefined1 **)(puVar20 + 0x38);
        if (*(undefined1 **)(puVar20 + 0x38) == (undefined1 *)0x0) {
          puStack_8e8 = (undefined1 *)0x0;
          plStack_8e0 = (long *)0x0;
          func_0x048b10d0(&puStack_8e8);
          puVar22 = puStack_8e8;
        }
      } while (puVar22 != (undefined1 *)0x0);
    }
    else {
      puVar22 = *(undefined1 **)(puVar20 + 0x38);
      if (*(undefined1 **)(puVar20 + 0x38) != (undefined1 *)0x0) goto LAB_082c6899;
LAB_082c6874:
      puStack_8e8 = (undefined1 *)0x0;
      plStack_8e0 = (long *)0x0;
      func_0x048b10d0(&puStack_8e8);
      puVar22 = puStack_8e8;
      if (puStack_8e8 != (undefined1 *)0x0) goto LAB_082c6899;
    }
    lVar14 = *(long *)(puVar20 + 0x48);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
LAB_082c6904:
    puVar21[1] = 100;
    puVar21[2] = 0;
    *(undefined1 *)(puVar21 + 3) = 0xff;
    *puVar21 = &UNK_0f4e3cf0;
    puVar21[4] = 0;
    puVar21[5] = plStack_7d8;
    puVar21[6] = plVar15;
    *(undefined1 *)(puVar21 + 7) = 0;
    plVar26 = *(long **)(lVar14 + 8);
    *(undefined8 **)(lVar14 + 8) = puVar21;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 0x28))();
    }
    plVar26 = (long *)0x0;
    uStack_6f8 = (undefined1)lStack_8f0;
  }
  else {
    plVar26 = plVar15;
    uStack_6f8 = uVar7;
    if (iVar11 == 1) {
      if ((DAT_0f5cf1b0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5cf1b0), iVar12 != 0)) {
        func_0x0837aff0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cf130,0xf53dab8);
        func_0x0410844d(&DAT_0f5cf1b0);
      }
      plVar26 = (long *)(*(long *)(lVar13 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5cf130 + 4)) * 8);
      do {
        lVar14 = *plVar26;
        if (lVar14 == -1) goto LAB_082c6700;
        plVar26 = (long *)(*(long *)(lVar13 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f5cf130 + 4));
      if (plVar26 == *(long **)(lVar13 + 0x38)) {
LAB_082c6700:
        puVar18 = &DAT_0f5cf130;
      }
      else {
        puVar18 = (undefined *)plVar26[2];
      }
      lStack_8f0 = CONCAT71(lStack_8f0._1_7_,uVar7);
      puVar20 = (undefined1 *)func_0x048b0c90(lVar13 + 0x18,puVar18,uVar10,1);
      if (puVar20 == (undefined1 *)0x0) {
        puStack_8e8 = (undefined1 *)0x0;
        plStack_8e0 = (long *)0x0;
        FUN_048b0d20(&puStack_8e8);
        puVar20 = puStack_8e8;
      }
      lVar14 = *(long *)(puVar20 + 0x58);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar21 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
      goto LAB_082c6904;
    }
  }
  uStack_710 = uStack_48;
  uStack_70c = uStack_44;
  uStack_708 = uStack_40;
  uStack_704 = uStack_3c;
  uStack_720 = (undefined4)uStack_58;
  uStack_71c = uStack_58._4_4_;
  uStack_718 = (undefined4)uStack_50;
  uStack_714 = uStack_50._4_4_;
  iStack_700 = iVar11;
  uStack_6fc = uVar10;
  uStack_728 = lVar13;
  func_0x0839eef0(&puStack_8e8,&uStack_728,&UNK_011f38cc,0x10,0);
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar23 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar23 = (long)&UNK_0f0121e0;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar23;
    (**(code **)(lVar13 + 8))();
    plVar23 = plStack_8d0;
  }
  plStack_8d0 = plVar23;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_083a8cb0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_05e2f5b0;
  puStack_968 = &UNK_083a8cc0;
  puStack_960 = &UNK_083a8e40;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar23 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_948 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar23);
    }
  }
  iVar11 = *(int *)((long)plStack_8e0 + 0x1c);
  if (iVar11 == 2) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    lVar13 = *(long *)(piVar19 + 0xc);
    while (lVar13 != plStack_8e0[1]) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar13 = *(long *)(piVar19 + 0xc);
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 1) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x48);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x1a;
      iVar11 = *piVar19;
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 0) {
    *(uint *)(plStack_8e0[2] + 0x18) = *(uint *)(plStack_8e0[2] + 0x18) | 0x40000;
  }
  func_0x0839f210(&puStack_8e8);
  uStack_128 = uStack_6f8;
  uStack_138 = uStack_708;
  uStack_134 = uStack_704;
  iStack_130 = iStack_700;
  uStack_12c = uStack_6fc;
  uStack_148 = uStack_718;
  uStack_144 = uStack_714;
  uStack_140 = uStack_710;
  uStack_13c = uStack_70c;
  uStack_158 = (undefined4)uStack_728;
  uStack_154 = uStack_728._4_4_;
  uStack_150 = uStack_720;
  uStack_14c = uStack_71c;
  func_0x048b0bc0(&plStack_8d0);
  uStack_3d8 = uStack_158;
  uStack_3d4 = uStack_154;
  uStack_3d0 = uStack_150;
  uStack_3cc = uStack_14c;
  uStack_3c8 = uStack_148;
  uStack_3c4 = uStack_144;
  uStack_3c0 = uStack_140;
  uStack_3bc = uStack_13c;
  uStack_3b8 = uStack_138;
  uStack_3b4 = uStack_134;
  iStack_3b0 = iStack_130;
  uStack_3ac = uStack_12c;
  uStack_3a8 = CONCAT71(uStack_127,uStack_128);
  func_0x0839eef0(&puStack_8e8,&uStack_3d8,&UNK_01310883,0x18,0);
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar23 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar23 = (long)&UNK_0f0ec6d8;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar23;
    (**(code **)(lVar13 + 8))();
    plVar23 = plStack_8d0;
  }
  plStack_8d0 = plVar23;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_07e82f70;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &UNK_07961d00;
  puStack_968 = &UNK_083a8f70;
  puStack_960 = &UNK_083a90f0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar23 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_948 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar23);
    }
  }
  iVar11 = *(int *)((long)plStack_8e0 + 0x1c);
  if (iVar11 == 2) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x60);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x16;
      iVar11 = *piVar19;
    }
    lVar13 = *(long *)(piVar19 + 0xc);
    while (lVar13 != plStack_8e0[1]) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar13 = *(long *)(piVar19 + 0xc);
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 1) {
    piVar19 = *(int **)(*(long *)(plStack_8e0[2] + 0x78) + 0x48);
    iVar11 = *piVar19;
    while (iVar11 != (int)plStack_8e0[3]) {
      piVar19 = piVar19 + 0x1a;
      iVar11 = *piVar19;
    }
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else if (iVar11 == 0) {
    *(uint *)(plStack_8e0[2] + 0x18) = *(uint *)(plStack_8e0[2] + 0x18) | 0x40000;
  }
  func_0x0839f210(&puStack_8e8);
  uStack_e8 = (undefined1)uStack_3a8;
  uStack_f8 = uStack_3b8;
  uStack_f4 = uStack_3b4;
  iStack_f0 = iStack_3b0;
  uStack_ec = uStack_3ac;
  uStack_108 = uStack_3c8;
  uStack_104 = uStack_3c4;
  uStack_100 = uStack_3c0;
  uStack_fc = uStack_3bc;
  uStack_118 = uStack_3d8;
  uStack_114 = uStack_3d4;
  uStack_110 = uStack_3d0;
  uStack_10c = uStack_3cc;
  func_0x048b0bc0(&plStack_8d0);
  uStack_778 = CONCAT44(uStack_114,uStack_118);
  uStack_770 = CONCAT44(uStack_10c,uStack_110);
  uStack_768 = uStack_108;
  uStack_764 = uStack_104;
  uStack_760 = uStack_100;
  uStack_75c = uStack_fc;
  uStack_758 = uStack_f8;
  uStack_754 = uStack_f4;
  iStack_750 = iStack_f0;
  uStack_74c = uStack_ec;
  uStack_748 = CONCAT71(uStack_e7,uStack_e8);
  func_0x0839eef0(&puStack_8e8,&uStack_778,&UNK_0147e752,0x12,1);
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar23 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar23 = (long)&UNK_0f012250;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar23;
    (**(code **)(lVar13 + 8))();
    plVar23 = plStack_8d0;
  }
  plStack_8d0 = plVar23;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05e81fb0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_05e2f040;
  puStack_968 = &UNK_083a9220;
  puStack_960 = &UNK_083a9380;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar23 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_948 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar23);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uStack_798 = CONCAT71(uStack_798._1_7_,(undefined1)uStack_748);
  uStack_7a8 = uStack_758;
  uStack_7a4 = uStack_754;
  iStack_7a0 = iStack_750;
  uStack_79c = uStack_74c;
  uStack_7b8 = uStack_768;
  uStack_7b4 = uStack_764;
  uStack_7b0 = uStack_760;
  uStack_7ac = uStack_75c;
  lStack_7c8 = uStack_778;
  uStack_7c0 = (undefined4)uStack_770;
  uStack_7bc = uStack_770._4_4_;
  func_0x048b0bc0(&plStack_8d0);
  func_0x0839eef0(&puStack_8e8,&lStack_7c8,&UNK_0136309b,0x12,1);
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar23 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar23 = (long)&UNK_0f0124a8;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar23;
    (**(code **)(lVar13 + 8))();
    plVar23 = plStack_8d0;
  }
  plStack_8d0 = plVar23;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05da29c0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_05da26d0;
  puStack_968 = &UNK_083a9560;
  puStack_960 = &UNK_083a96d0;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar23 = plStack_948;
  if (plStack_948 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_948 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_948 + 0x10))(plStack_948);
      func_0x0412c2d0(plVar23);
    }
  }
  func_0x0839f210(&puStack_8e8);
  uStack_7e8 = (undefined1)uStack_798;
  uStack_7f8 = uStack_7a8;
  uStack_7f4 = uStack_7a4;
  iStack_7f0 = iStack_7a0;
  uStack_7ec = uStack_79c;
  uStack_808 = uStack_7b8;
  uStack_804 = uStack_7b4;
  uStack_800 = uStack_7b0;
  uStack_7fc = uStack_7ac;
  uStack_818 = lStack_7c8;
  uStack_810 = (long *)CONCAT44(uStack_7bc,uStack_7c0);
  func_0x048b0bc0(&plStack_8d0);
  func_0x0839eef0(&puStack_8e8,&uStack_818,&UNK_012c3ddd,0xf,1);
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar23 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar23 = (long)&UNK_0f012250;
  if (plStack_8d0 != (long *)0x0) {
    lVar13 = *plStack_8d0;
    plStack_8d0 = plVar23;
    (**(code **)(lVar13 + 8))();
    plVar23 = plStack_8d0;
  }
  plStack_8d0 = plVar23;
  uStack_9a8 = (uint)plStack_8d8;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 1;
  uStack_988 = 0;
  uStack_980 = &UNK_05e81fb0;
  uStack_978 = &SUB_048b06d0;
  puStack_970 = &SUB_05e2f040;
  puStack_968 = &UNK_083a98b0;
  puStack_960 = &UNK_083a9a10;
  uStack_958 = 0;
  uStack_950 = 0;
  plStack_948 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,&uStack_9a8);
  plVar23
/* truncated by DecompileTargets.java */

