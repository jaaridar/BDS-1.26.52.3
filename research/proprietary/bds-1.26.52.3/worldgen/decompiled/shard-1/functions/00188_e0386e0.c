/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe1386e0 (ELF vaddr 0xe0386e0)
 * Label: caller-of-callee
 * Body:  [[0e1386e0, 0e138d51] [0e138d60, 0e139cca] [0e139cd0, 0e13bae4]]
 * Ghidra: FUN_0e1386e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e1386e0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  bool bVar23;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined *puStack_760;
  undefined1 *puStack_758;
  undefined1 *puStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined *puStack_708;
  undefined8 *puStack_700;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined8 uStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  undefined1 uStack_6c8;
  undefined7 uStack_6c7;
  undefined1 uStack_6c0;
  undefined1 uStack_6bf;
  undefined6 uStack_6be;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  undefined4 uStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined2 uStack_648;
  undefined2 uStack_646;
  uint uStack_644;
  uint uStack_640;
  undefined1 uStack_63c;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined4 uStack_568;
  undefined8 uStack_560;
  long *plStack_558;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  int iStack_520;
  undefined4 uStack_51c;
  undefined8 uStack_518;
  byte bStack_510;
  undefined7 uStack_50f;
  undefined1 uStack_508;
  undefined2 uStack_507;
  undefined1 uStack_505;
  undefined8 uStack_500;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  undefined4 *puStack_4e8;
  ulong uStack_4e0;
  undefined8 uStack_4d8;
  undefined4 *puStack_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 *puStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 *puStack_4a0;
  byte bStack_498;
  undefined4 uStack_497;
  undefined1 uStack_493;
  undefined2 uStack_492;
  undefined8 uStack_488;
  byte bStack_480;
  undefined7 uStack_47f;
  undefined1 uStack_478;
  undefined2 uStack_477;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  byte bStack_430;
  undefined7 uStack_42f;
  undefined4 uStack_428;
  undefined1 uStack_424;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
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
  undefined4 uStack_3ac;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
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
  int iStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined4 uStack_358;
  undefined2 uStack_354;
  undefined2 uStack_352;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  undefined7 uStack_327;
  long lStack_320;
  undefined4 uStack_318;
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
  undefined4 uStack_2ec;
  undefined1 uStack_2e8;
  undefined *puStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined1 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  uint uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 uStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
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
  undefined4 uStack_1ac;
  undefined1 uStack_1a8;
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
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
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
  undefined4 uStack_fc;
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
  undefined4 uStack_bc;
  undefined1 uStack_b8;
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
  undefined1 uStack_78;
  undefined1 auStack_68 [56];
  
  func_0x0d8a4910();
  if ((DAT_0f747030 == '\0') && (iVar10 = func_0x04108328(&DAT_0f747030), iVar10 != 0)) {
    func_0x0e188da0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f746fb0,0xf53dab8);
    func_0x0410844d(&DAT_0f747030);
  }
  lStack_320 = param_1 + 0x18;
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f746fb0 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_0e138760;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f746fb0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e138760:
    puVar12 = &DAT_0f746fb0;
    if (iRam000000000f747010 != -0x2b3da790) goto LAB_0e1387cd;
LAB_0e13878b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_0e1387cd;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar21 = lVar17 + 9;
    if (bVar23) {
      lVar21 = *(long *)(lVar17 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar20 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0e1891f0(&uStack_638,param_1,lVar21,uVar20);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0e13878b;
LAB_0e1387cd:
    func_0x0e1891f0(&uStack_638,param_1,&UNK_012370e0,0x18);
  }
  if ((char)puStack_608 == '\0') {
    uStack_738._4_4_ = (uint)((ulong)uStack_738 >> 0x20);
    uStack_778._4_4_ = (uint)((ulong)uStack_778 >> 0x20);
    uStack_788._4_4_ = (undefined4)((ulong)uStack_788 >> 0x20);
    if ((DAT_0f747050 == '\0') && (iVar10 = func_0x04108328(&DAT_0f747050), iVar10 != 0)) {
      func_0x0e188eb0();
      func_0x0410844d(&DAT_0f747050);
    }
    puVar12 = uStack_638;
    uStack_610 = (undefined *)0x934f4e0a00000001;
    if ((DAT_0f747030 == '\0') && (iVar10 = func_0x04108328(&DAT_0f747030), iVar10 != 0)) {
      func_0x0e188da0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f746fb0,0xf53dab8);
      func_0x0410844d(&DAT_0f747030);
    }
    puStack_700 = (undefined8 *)(puVar12 + 0x18);
    plVar14 = (long *)(*(long *)(puVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar12 + 0x20) - *(long *)(puVar12 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f746fb0 + 4)) * 8);
    do {
      lVar17 = *plVar14;
      if (lVar17 == -1) goto LAB_0e138890;
      plVar14 = (long *)(*(long *)(puVar12 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(puVar12 + 0x30) + 8 + lVar17 * 0x18) !=
             *(uint *)(_DAT_0f746fb0 + 4));
    if (plVar14 == *(long **)(puVar12 + 0x38)) {
LAB_0e138890:
      puStack_708 = &DAT_0f746fb0;
    }
    else {
      puStack_708 = (undefined *)plVar14[2];
    }
    func_0x0ed621a0(&puStack_708,uStack_610._4_4_);
    puStack_708 = (undefined *)CONCAT62(puStack_708._2_6_,1);
    uStack_6f8 = uStack_610._4_4_;
    uStack_6f0 = (long *)0x0;
    lStack_6e8 = 0;
    lStack_6e0 = 0;
    lStack_6d8 = 0;
    lStack_6d0 = 0;
    uStack_6c8 = 0x10;
    uStack_6c7 = 0x6f697469736f70;
    uStack_6c0 = 0x6e;
    uStack_6bf = 0;
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    lStack_6a0 = 0;
    lStack_698 = 0;
    lStack_690 = 0;
    lStack_688 = 0;
    uStack_680 = 0x3f600000;
    puStack_700 = &uStack_630;
    func_0x048afb10(&lStack_6b0,8);
    uStack_658 = 0;
    lStack_650 = 0;
    lStack_668 = 0;
    uStack_660 = 0;
    lStack_678 = 0;
    lStack_670 = 0;
    uStack_648 = 0xff00;
    uStack_644 = uStack_644 & 0xffffff00;
    uStack_640 = uStack_640 & 0xffffff00;
    uStack_63c = 0;
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar13 = &UNK_0f0124a8;
    if (uStack_6f0 != (long *)0x0) {
      lVar17 = *uStack_6f0;
      uStack_6f0 = puVar13;
      (**(code **)(lVar17 + 8))();
      puVar13 = uStack_6f0;
    }
    uStack_6f0 = puVar13;
    uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,uStack_6f8);
    uStack_780 = (long *)0x0;
    uStack_778 = (long *)((ulong)uStack_778._4_4_ << 0x20);
    uStack_770 = 1;
    uStack_768 = 0;
    puStack_760 = &UNK_05da29c0;
    puStack_758 = &SUB_048b06d0;
    puStack_750 = &SUB_05da26d0;
    puStack_748 = &UNK_0e189d10;
    uStack_740 = &UNK_0e189e80;
    uStack_738 = (long *)((ulong)uStack_738._4_4_ << 0x20);
    uStack_730 = 0;
    uStack_728 = (long *)0x0;
    func_0x048b05a0(puStack_700,&uStack_788);
    plVar14 = uStack_728;
    if (uStack_728 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_728 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_728 + 0x10))(uStack_728);
        func_0x0412c2d0(plVar14);
      }
    }
    puVar13 = puStack_700;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,_DAT_0f550a0c);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar17 = lStack_6e8;
    puVar8 = uStack_6f0;
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&UNK_0ef439d0;
    uStack_780 = plVar14 + 3;
    uStack_6f0 = (long *)0x0;
    lStack_6e8 = 0;
    plVar14[3] = (long)puVar8;
    plVar14[4] = lVar17;
    plVar14[7] = lStack_6d0;
    plVar14[5] = lStack_6e0;
    plVar14[6] = lStack_6d8;
    lStack_6e0 = 0;
    lStack_6d8 = 0;
    lStack_6d0 = 0;
    plVar14[10] = lStack_6b8;
    plVar14[8] = CONCAT71(uStack_6c7,uStack_6c8);
    plVar14[9] = CONCAT62(uStack_6be,CONCAT11(uStack_6bf,uStack_6c0));
    uStack_6c8 = 0;
    uStack_6c7 = 0;
    uStack_6c0 = 0;
    uStack_6bf = 0;
    uStack_6be = 0;
    lStack_6b8 = 0;
    plVar14[0xb] = lStack_6b0;
    plVar14[0xc] = lStack_6a8;
    plVar14[0xd] = lStack_6a0;
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    lStack_6a0 = 0;
    plVar14[0xe] = lStack_698;
    plVar14[0xf] = lStack_690;
    plVar14[0x10] = lStack_688;
    lStack_698 = 0;
    lStack_690 = 0;
    lStack_688 = 0;
    *(undefined4 *)(plVar14 + 0x11) = uStack_680;
    plVar14[0x12] = lStack_678;
    plVar14[0x13] = lStack_670;
    plVar14[0x14] = lStack_668;
    lStack_678 = 0;
    lStack_670 = 0;
    lStack_668 = 0;
    plVar14[0x17] = lStack_650;
    *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_660;
    *(undefined4 *)((long)plVar14 + 0xac) = uStack_660._4_4_;
    *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_658;
    *(undefined4 *)((long)plVar14 + 0xb4) = uStack_658._4_4_;
    uStack_660 = 0;
    uStack_658 = 0;
    lStack_650 = 0;
    *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_63c,CONCAT43(uStack_640,uStack_644._1_3_));
    plVar14[0x18] = CONCAT44(uStack_644,CONCAT22(uStack_646,uStack_648));
    puStack_5b8 = (undefined *)0x0;
    uStack_5b0 = (long *)0x0;
    uStack_778 = plVar14;
    func_0x048afd20(puVar13,&uStack_788);
    plVar14 = uStack_778;
    if (uStack_778 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_778 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_778 + 0x10))(uStack_778);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = uStack_5b0;
    if (uStack_5b0 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_5b0 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_5b0 + 0x10))(uStack_5b0);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar17 = puVar13[2];
    iVar10 = *(int *)((long)puVar13 + 0x1c);
    if (iVar10 == 2) {
      piVar19 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
      iVar10 = *piVar19;
      while (iVar10 != *(int *)(puVar13 + 3)) {
        piVar19 = piVar19 + 0x16;
        iVar10 = *piVar19;
      }
      for (; *(long *)(piVar19 + 0xc) != puVar13[1]; piVar19 = *(int **)(piVar19 + 0xe)) {
      }
LAB_0e138d6a:
      piVar19[4] = piVar19[4] | (int)puStack_708 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar19 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
        iVar10 = *piVar19;
        while (iVar10 != *(int *)(puVar13 + 3)) {
          piVar19 = piVar19 + 0x1a;
          iVar10 = *piVar19;
        }
        goto LAB_0e138d6a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | (int)puStack_708 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0d91f630(param_1);
  if ((DAT_0f7470e8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7470e8), iVar10 != 0)) {
    func_0x0e18a110();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f747068,0xf53dab8);
    func_0x0410844d(&DAT_0f7470e8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f747068 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_0e138de0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f747068 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e138de0:
    puVar12 = &DAT_0f747068;
    if (iRam000000000f7470c8 != -0x2b3da790) goto LAB_0e138e4d;
LAB_0e138e0b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_0e138e4d;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar21 = lVar17 + 9;
    if (bVar23) {
      lVar21 = *(long *)(lVar17 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar20 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0e18a550(&uStack_548,param_1,lVar21,uVar20);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0e138e0b;
LAB_0e138e4d:
    func_0x0e18a550(&uStack_548,param_1,&UNK_013bfc2d,0x1c);
  }
  if ((char)uStack_518 == '\0') {
    func_0x0e18b060(&puStack_708,&uStack_548,&UNK_01473037,8,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (long *)0x0) {
      lVar17 = *uStack_6f0;
      uStack_6f0 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_6f0;
    }
    uStack_6f0 = plVar14;
    uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,uStack_6f8);
    uStack_780 = (long *)0x0;
    uStack_778 = (long *)((ulong)uStack_778 & 0xffffffff00000000);
    uStack_770 = 1;
    uStack_768 = 0;
    puStack_760 = &UNK_05daeda0;
    puStack_758 = &SUB_048b06d0;
    puStack_750 = &UNK_05daea90;
    puStack_748 = &UNK_0e18b610;
    uStack_740 = &UNK_0e18b770;
    uStack_738 = (long *)((ulong)uStack_738 & 0xffffffff00000000);
    uStack_730 = 0;
    uStack_728 = (long *)0x0;
    func_0x048b05a0(puStack_700,&uStack_788);
    plVar14 = uStack_728;
    if (uStack_728 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_728 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_728 + 0x10))(uStack_728);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0e18b310(&puStack_708);
    uStack_1a8 = (char)uStack_518;
    uStack_1b8 = uStack_528;
    uStack_1b4 = uStack_524;
    iStack_1b0 = iStack_520;
    uStack_1ac = uStack_51c;
    uStack_1c8 = uStack_538;
    uStack_1c4 = uStack_534;
    uStack_1c0 = uStack_530;
    uStack_1bc = uStack_52c;
    uStack_1d8 = uStack_548;
    uStack_1d4 = uStack_544;
    uStack_1d0 = uStack_540;
    uStack_1cc = uStack_53c;
    func_0x048b0bc0(&uStack_6f0);
    uStack_630 = 0xffffffffffffffff;
    uStack_628 = 0;
    uStack_620 = CONCAT71(uStack_620._1_7_,0xff);
    uStack_638 = &UNK_0f0edc68;
    uStack_618 = 0;
    uStack_610 = (undefined *)_DAT_014f0478;
    puStack_608 = (undefined1 *)0x0;
    puStack_600 = (undefined *)0x0;
    func_0x0e138310(&uStack_358,&uStack_1d8,&uStack_638);
    puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar15 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    uVar18 = _UNK_012eb74a;
    *(undefined8 *)(puVar15 + 8) = _DAT_012eb742;
    *(undefined8 *)(puVar15 + 10) = uVar18;
    uVar18 = _UNK_012eb73a;
    *(undefined8 *)(puVar15 + 4) = _DAT_012eb732;
    *(undefined8 *)(puVar15 + 6) = uVar18;
    uVar6 = _UNK_012eb72e;
    uVar5 = _UNK_012eb72a;
    uVar4 = _UNK_012eb726;
    *puVar15 = _DAT_012eb722;
    puVar15[1] = uVar4;
    puVar15[2] = uVar5;
    puVar15[3] = uVar6;
    *(undefined1 *)(puVar15 + 0xc) = 0;
    lVar17 = CONCAT26(uStack_352,CONCAT24(uStack_354,uStack_358));
    if ((DAT_0f7470e8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7470e8), iVar10 != 0)) {
      func_0x0e18a110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f747068,0xf53dab8);
      func_0x0410844d(&DAT_0f7470e8);
    }
    plVar14 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f747068 + 4)) * 8);
    do {
      lVar21 = *plVar14;
      if (lVar21 == -1) goto LAB_0e139130;
      plVar14 = (long *)(*(long *)(lVar17 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f747068 + 4)
            );
    if (plVar14 == *(long **)(lVar17 + 0x38)) {
LAB_0e139130:
      bVar3 = *(byte *)(_DAT_0f7470d0 + 0x88);
      lVar17 = _DAT_0f7470d0;
    }
    else {
      bVar3 = *(byte *)(*(long *)(plVar14[2] + 0x68) + 0x88);
      lVar17 = *(long *)(plVar14[2] + 0x68);
    }
    if ((bVar3 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar17 + 0x98),*(ulong *)(lVar17 + 0x88) & 0xfffffffffffffffe)
      ;
    }
    *(undefined8 *)(lVar17 + 0x88) = 0x39;
    *(undefined8 *)(lVar17 + 0x90) = 0x30;
    *(undefined4 **)(lVar17 + 0x98) = puVar15;
    uStack_438 = CONCAT71(uStack_327,uStack_328);
    uStack_464 = CONCAT22(uStack_352,uStack_354);
    uStack_448 = uStack_338;
    uStack_444 = uStack_334;
    uStack_440 = uStack_330;
    uStack_43c = uStack_32c;
    uStack_458 = uStack_348;
    uStack_454 = uStack_344;
    uStack_450 = uStack_340;
    uStack_44c = uStack_33c;
    uStack_468 = uStack_358;
    uStack_460 = uStack_350;
    uStack_45c = uStack_34c;
    func_0x0e18b060(&puStack_708,&uStack_468,&UNK_011eb0a8,4,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (long *)0x0) {
      lVar17 = *uStack_6f0;
      uStack_6f0 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_6f0;
    }
    uStack_6f0 = plVar14;
    uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,uStack_6f8);
    uStack_780 = (long *)0x0;
    uStack_778 = (long *)((ulong)uStack_778 & 0xffffffff00000000);
    uStack_770 = 1;
    uStack_768 = 0;
    puStack_760 = &UNK_05daeda0;
    puStack_758 = &SUB_048b06d0;
    puStack_750 = &UNK_05daea90;
    puStack_748 = &UNK_0e18b940;
    uStack_740 = &UNK_0e18baa0;
    uStack_738 = (long *)((ulong)uStack_738 & 0xffffffff00000000);
    uStack_730 = 0;
    uStack_728 = (long *)0x0;
    func_0x048b05a0(puStack_700,&uStack_788);
    plVar14 = uStack_728;
    if (uStack_728 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_728 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_728 + 0x10))(uStack_728);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0e18b310(&puStack_708);
    uStack_3e8 = CONCAT71(uStack_3e8._1_7_,(undefined1)uStack_438);
    uStack_3f8 = uStack_448;
    uStack_3f4 = uStack_444;
    uStack_3f0 = uStack_440;
    uStack_3ec = uStack_43c;
    uStack_408 = uStack_458;
    uStack_404 = uStack_454;
    uStack_400 = uStack_450;
    uStack_3fc = uStack_44c;
    uStack_418 = CONCAT44(uStack_464,uStack_468);
    uStack_410 = CONCAT44(uStack_45c,uStack_460);
    func_0x048b0bc0(&uStack_6f0);
    uStack_5b0 = (long *)0xffffffffffffffff;
    uStack_5a8 = 0;
    uStack_5a0 = CONCAT71(uStack_5a0._1_7_,0xff);
    puStack_5b8 = &UNK_0f0edc68;
    uStack_598 = 0;
    uStack_590 = (undefined *)_DAT_014f0238;
    uStack_588 = (undefined1 *)0x0;
    puStack_580 = (undefined *)0x0;
    func_0x0e138310(&uStack_3d8,&uStack_418,&puStack_5b8);
    puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar15 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar18 = _UNK_013bfc62;
    *(undefined8 *)(puVar15 + 4) = _DAT_013bfc5a;
    *(undefined8 *)(puVar15 + 6) = uVar18;
    uVar6 = _UNK_013bfc56;
    uVar5 = _UNK_013bfc52;
    uVar4 = _UNK_013bfc4e;
    *puVar15 = _DAT_013bfc4a;
    puVar15[1] = uVar4;
    puVar15[2] = uVar5;
    puVar15[3] = uVar6;
    *(undefined1 *)(puVar15 + 8) = 0;
    lVar17 = CONCAT44(uStack_3d4,uStack_3d8);
    if ((DAT_0f7470e8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7470e8), iVar10 != 0)) {
      func_0x0e18a110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f747068,0xf53dab8);
      func_0x0410844d(&DAT_0f7470e8);
    }
    plVar14 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f747068 + 4)) * 8);
    do {
      lVar21 = *plVar14;
      if (lVar21 == -1) goto LAB_0e139470;
      plVar14 = (long *)(*(long *)(lVar17 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f747068 + 4)
            );
    if (plVar14 == *(long **)(lVar17 + 0x38)) {
LAB_0e139470:
      bVar3 = *(byte *)(_DAT_0f7470d0 + 0x88);
      lVar17 = _DAT_0f7470d0;
    }
    else {
      bVar3 = *(byte *)(*(long *)(plVar14[2] + 0x68) + 0x88);
      lVar17 = *(long *)(plVar14[2] + 0x68);
    }
    if ((bVar3 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar17 + 0x98),*(ulong *)(lVar17 + 0x88) & 0xfffffffffffffffe)
      ;
    }
    *(undefined8 *)(lVar17 + 0x88) = 0x29;
    *(undefined8 *)(lVar17 + 0x90) = 0x20;
    *(undefined4 **)(lVar17 + 0x98) = puVar15;
    uStack_368 = CONCAT71(uStack_3a7,uStack_3a8);
    uStack_378 = uStack_3b8;
    uStack_374 = uStack_3b4;
    iStack_370 = iStack_3b0;
    uStack_36c = uStack_3ac;
    uStack_388 = uStack_3c8;
    uStack_384 = uStack_3c4;
    uStack_380 = uStack_3c0;
    uStack_37c = uStack_3bc;
    uStack_398 = uStack_3d8;
    uStack_394 = uStack_3d4;
    uStack_390 = uStack_3d0;
    uStack_38c = uStack_3cc;
    func_0x0e18b060(&puStack_708,&uStack_398,&UNK_01252223,6,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f4aec48;
    if (uStack_6f0 != (long *)0x0) {
      lVar17 = *uStack_6f0;
      uStack_6f0 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_6f0;
    }
    uStack_6f0 = plVar14;
    uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,uStack_6f8);
    uStack_780 = (long *)0x0;
    uStack_778 = (long *)((ulong)uStack_778 & 0xffffffff00000000);
    uStack_770 = 1;
    uStack_768 = 0;
    puStack_760 = &UNK_0e18c280;
    puStack_758 = &SUB_048b06d0;
    puStack_750 = &UNK_092b8b30;
    puStack_748 = &UNK_0e18c290;
    uStack_740 = &UNK_0e18c400;
    uStack_738 = (long *)((ulong)uStack_738 & 0xffffffff00000000);
    uStack_730 = 0;
    uStack_728 = (long *)0x0;
    func_0x048b05a0(puStack_700,&uStack_788);
    plVar14 = uStack_728;
    if (uStack_728 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_728 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_728 + 0x10))(uStack_728);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0e18b310(&puStack_708);
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0d91f630(param_1);
  func_0x0d8a4910(param_1);
  if ((DAT_0f7471a0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7471a0), iVar10 != 0)) {
    func_0x0e18c6a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f747120,0xf53dab8);
    func_0x0410844d(&DAT_0f7471a0);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f747120 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_0e1396c0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f747120 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e1396c0:
    puVar12 = &DAT_0f747120;
    if (iRam000000000f747180 != -0x2b3da790) goto LAB_0e139747;
LAB_0e1396eb:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_0e139747;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar21 = lVar17 + 9;
    if (bVar23) {
      lVar21 = *(long *)(lVar17 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar20 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0e18cbb0(&uStack_638,param_1,lVar21,uVar20);
    if ((char)puStack_608 != '\0') goto LAB_0e139728;
LAB_0e13976d:
    func_0x0e18d710(&puStack_708,&uStack_638,&UNK_0119d6bf,8,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0124a8;
    if (uStack_6f0 != (long *)0x0) {
      lVar17 = *uStack_6f0;
      uStack_6f0 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_6f0;
    }
    uStack_6f0 = plVar14;
    uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,uStack_6f8);
    uStack_780 = (long *)0x0;
    uStack_778 = (long *)((ulong)uStack_778 & 0xffffffff00000000);
    uStack_770 = 1;
    uStack_768 = 0;
    puStack_760 = &UNK_05da29c0;
    puStack_758 = &SUB_048b06d0;
    puStack_750 = &SUB_05da26d0;
    puStack_748 = &UNK_0e18dcc0;
    uStack_740 = &UNK_0e18de30;
    uStack_738 = (long *)((ulong)uStack_738 & 0xffffffff00000000);
    uStack_730 = 0;
    uStack_728 = (long *)0x0;
    func_0x048b05a0(puStack_700,&uStack_788);
    plVar14 = uStack_728;
    if (uStack_728 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_728 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_728 + 0x10))(uStack_728);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0e18d9c0(&puStack_708);
    uStack_368 = CONCAT71(uStack_368._1_7_,(char)puStack_608);
    uStack_378 = (undefined4)uStack_618;
    uStack_374 = uStack_618._4_4_;
    iStack_370 = (int)uStack_610;
    uStack_36c = uStack_610._4_4_;
    uStack_388 = (undefined4)uStack_628;
    uStack_384 = uStack_628._4_4_;
    uStack_380 = (undefined4)uStack_620;
    uStack_37c = uStack_620._4_4_;
    uStack_398 = (undefined4)uStack_638;
    uStack_394 = uStack_638._4_4_;
    uStack_390 = (undefined4)uStack_630;
    uStack_38c = uStack_630._4_4_;
    func_0x048b0bc0(&uStack_6f0);
    uStack_548 = uStack_398;
    uStack_544 = uStack_394;
    uStack_540 = uStack_390;
    uStack_53c = uStack_38c;
    uStack_538 = uStack_388;
    uStack_534 = uStack_384;
    uStack_530 = uStack_380;
    uStack_52c = uStack_37c;
    uStack_528 = uStack_378;
    uStack_524 = uStack_374;
    iStack_520 = iStack_370;
    uStack_51c = uStack_36c;
    uStack_518 = uStack_368;
    func_0x0e18d710(&puStack_708,&uStack_548,&UNK_011eb0a8,4,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (long *)0x0) {
      lVar17 = *uStack_6f0;
      uStack_6f0 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_6f0;
    }
    uStack_6f0 = plVar14;
    uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,uStack_6f8);
    uStack_780 = (long *)0x0;
    uStack_778 = (long *)((ulong)uStack_778 & 0xffffffff00000000);
    uStack_770 = 1;
    uStack_768 = 0;
    puStack_760 = &UNK_05daeda0;
    puStack_758 = &SUB_048b06d0;
    puStack_750 = &UNK_05daea90;
    puStack_748 = &UNK_0e18e000;
    uStack_740 = &UNK_0e18e160;
    uStack_738 = (long *)((ulong)uStack_738 & 0xffffffff00000000);
    uStack_730 = 0;
    uStack_728 = (long *)0x0;
    func_0x048b05a0(puStack_700,&uStack_788);
    plVar14 = uStack_728;
    if (uStack_728 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_728 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_728 + 0x10))(uStack_728);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0e18d9c0(&puStack_708);
    uVar4 = uStack_51c;
    iVar10 = iStack_520;
    puVar12 = (undefined *)CONCAT44(uStack_544,uStack_548);
    uStack_418 = CONCAT44(uStack_53c,uStack_540);
    uStack_410 = CONCAT44(uStack_534,uStack_538);
    uStack_408 = uStack_530;
    uStack_404 = uStack_52c;
    uStack_400 = uStack_528;
    uStack_3fc = uStack_524;
    uVar9 = (char)uStack_518;
    func_0x048b0bc0(&uStack_6f0);
    uStack_358 = 0;
    uStack_354 = 0;
    if (iVar10 == 4) {
      if ((DAT_0f7471a0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7471a0), iVar11 != 0)) {
        func_0x0e18c6a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f747120,0xf53dab8);
        func_0x0410844d(&DAT_0f7471a0);
      }
      plVar14 = (long *)(*(long *)(puVar12 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar12 + 0x20) - *(long *)(puVar12 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f747120 + 4)) * 8);
      do {
        lVar17 = *plVar14;
        if (lVar17 == -1) goto LAB_0e139bb8;
        plVar14 = (long *)(*(long *)(puVar12 + 0x30) + lVar17 * 0x18);
      } while (*(uint *)(*(long *)(puVar12 + 0x30) + 8 + lVar17 * 0x18) !=
               *(uint *)(_DAT_0f747120 + 4));
      if (plVar14 == *(long **)(puVar12 + 0x38)) {
LAB_0e139bb8:
        puVar22 = &DAT_0f747120;
      }
      else {
        puVar22 = (undefined *)plVar14[2];
      }
      puVar22 = (undefined *)func_0x048b1040(puVar12 + 0x18,puVar22,uVar4,1);
      if (puVar22 == (undefined *)0x0) {
        puStack_708 = (undefined *)0x0;
        puStack_700 = (undefined8 *)0x0;
        FUN_048b10d0(&puStack_708);
        puVar16 = *(undefined **)(puStack_708 + 0x38);
        puVar22 = puStack_708;
        if (puVar16 == (undefined *)0x0) goto LAB_0e139c9c;
LAB_0e139cc1:
        do {
          puVar22 = puVar16;
          puVar16 = *(undefined **)(puVar22 + 0x38);
          if (*(undefined **)(puVar22 + 0x38) == (undefined *)0x0) {
            puStack_708 = (undefined *)0x0;
            puStack_700 = (undefined8 *)0x0;
            FUN_048b10d0(&puStack_708);
            puVar16 = puStack_708;
          }
        } while (puVar16 != (undefined *)0x0);
      }
      else {
        puVar16 = *(undefined **)(puVar22 + 0x38);
        if (*(undefined **)(puVar22 + 0x38) != (undefined *)0x0) goto LAB_0e139cc1;
LAB_0e139c9c:
        puStack_708 = (undefined *)0x0;
        puStack_700 = (undefined8 *)0x0;
        FUN_048b10d0(&puStack_708);
        puVar16 = puStack_708;
        if (puStack_708 != (undefined *)0x0) goto LAB_0e139cc1;
      }
      lVar17 = *(long *)(puVar22 + 0x48);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0e139d24:
      puVar13[1] = 0xffffffffffffffff;
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 0xff;
      *puVar13 = &UNK_0f0edc68;
      uVar18 = _DAT_014f0238;
      puVar13[4] = 0;
      puVar13[5] = uVar18;
      puVar13[6] = 0;
      *(undefined2 *)(puVar13 + 7) = 0;
      *(undefined4 *)((long)puVar13 + 0x3a) = uStack_358;
      *(undefined2 *)((long)puVar13 + 0x3e) = uStack_354;
      plVar14 = *(long **)(lVar17 + 8);
      *(undefined8 **)(lVar17 + 8) = puVar13;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
    }
    else if (iVar10 == 1) {
      if ((DAT_0f7471a0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7471a0), iVar11 != 0)) {
        func_0x0e18c6a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f747120,0xf53dab8);
        func_0x0410844d(&DAT_0f7471a0);
      }
      plVar14 = (long *)(*(long *)(puVar12 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar12 + 0x20) - *(long *)(puVar12 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f747120 + 4)) * 8);
      do {
        lVar17 = *plVar14;
        if (lVar17 == -1) goto LAB_0e139b38;
        plVar14 = (long *)(*(long *)(puVar12 + 0x30) + lVar17 * 0x18);
      } while (*(uint *)(*(long *)(puVar12 + 0x30) + 8 + lVar17 * 0x18) !=
               *(uint *)(_DAT_0f747120 + 4));
      if (plVar14 == *(long **)(puVar12 + 0x38)) {
LAB_0e139b38:
        puVar22 = &DAT_0f747120;
      }
      else {
        puVar22 = (undefined *)plVar14[2];
      }
      puVar22 = (undefined *)func_0x048b0c90(puVar12 + 0x18,puVar22,uVar4,1);
      if (puVar22 == (undefined *)0x0) {
        puStack_708 = (undefined *)0x0;
        puStack_700 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_708);
        puVar22 = puStack_708;
      }
      lVar17 = *(long *)(puVar22 + 0x58);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0e139d24;
    }
    uStack_3c8 = uStack_408;
    uStack_3c4 = uStack_404;
    uStack_3c0 = uStack_400;
    uStack_3bc = uStack_3fc;
    uStack_3d8 = (undefined4)uStack_418;
    uStack_3d4 = uStack_418._4_4_;
    uStack_3d0 = (undefined4)uStack_410;
    uStack_3cc = uStack_410._4_4_;
    puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar15 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar18 = _UNK_01459db4;
    *(ulong *)((long)puVar15 + 0xf) = CONCAT71(_UNK_01459dad,DAT_01459dac);
    *(undefined8 *)((long)puVar15 + 0x17) = uVar18;
    uVar7 = _UNK_01459da9;
    uVar6 = _UNK_01459da5;
    uVar5 = _UNK_01459da1;
    *puVar15 = _DAT_01459d9d;
    puVar15[1] = uVar5;
    puVar15[2] = uVar6;
    puVar15[3] = uVar7;
    *(undefined1 *)((long)puVar15 + 0x1f) = 0;
    if ((DAT_0f7471a0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7471a0), iVar11 != 0)) {
      func_0x0e18c6a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f747120,0xf53dab8);
      func_0x0410844d(&DAT_0f7471a0);
    }
    plVar14 = (long *)(*(long *)(puVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar12 + 0x20) - *(long *)(puVar12 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f747120 + 4)) * 8);
    do {
      lVar17 = *plVar14;
      if (lVar17 == -1) goto LAB_0e139e50;
      plVar14 = (long *)(*(long *)(puVar12 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(puVar12 + 0x30) + 8 + lVar17 * 0x18) !=
             *(uint *)(_DAT_0f747120 + 4));
    if (plVar14 == *(long **)(puVar12 + 0x38)) {
LAB_0e139e50:
      bVar3 = *(byte *)(_DAT_0f747188 + 0x88);
      lVar17 = _DAT_0f747188;
    }
    else {
      bVar3 = *(byte *)(*(long *)(plVar14[2] + 0x68) + 0x88);
      lVar17 = *(long *)(plVar14[2] + 0x68);
    }
    if ((bVar3 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar17 + 0x98),*(ulong *)(lVar17 + 0x88) & 0xfffffffffffffffe)
      ;
    }
    *(undefined8 *)(lVar17 + 0x88) = 0x21;
    *(undefined8 *)(lVar17 + 0x90) = 0x1f;
    *(undefined4 **)(lVar17 + 0x98) = puVar15;
    uStack_5b0 = (long *)CONCAT44(uStack_3d4,uStack_3d8);
    uStack_5a8 = CONCAT44(uStack_3cc,uStack_3d0);
    uStack_5a0 = CONCAT44(uStack_3c4,uStack_3c8);
    uStack_598 = CONCAT44(uStack_3bc,uStack_3c0);
    uStack_590 = (undefined *)CONCAT44(uVar4,iVar10);
    uStack_588._0_5_ = CONCAT41(uStack_468,uVar9);
    uStack_588 = (undefined1 *)
                 CONCAT44(CONCAT31((undefined3)uStack_464,uStack_468._3_1_),(undefined4)uStack_588);
    puStack_5b8 = puVar12;
    func_0x0e18d710(&puStack_708,&puStack_5b8,&UNK_01252223,6,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f4aec48;
    if (uStack_6f0 != (long *)0x0) {
      lVar17 = *uStack_6f0;
      uStack_6f0 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_6f0;
    }
    uStack_6f0 = plVar14;
    uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,uStack_6f8);
    uStack_780 = (long *)0x0;
    uStack_778 = (long *)((ulong)uStack_778 & 0xffffffff00000000);
    uStack_770 = 1;
    uStack_768 = 0;
    puStack_760 = &UNK_0e18c280;
    puStack_758 = &SUB_048b06d0;
    puStack_750 = &UNK_092b8b30;
    puStack_748 = &UNK_0e18e340;
    uStack_740 = &UNK_0e18e4b0;
    uStack_738 = (long *)((ulong)uStack_738 & 0xffffffff00000000);
    uStack_730 = 0;
    uStack_728 = (long *)0x0;
    func_0x048b05a0(puStack_700,&uStack_788);
    plVar14 = uStack_728;
    if (uStack_728 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_728 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_728 + 0x10))(uStack_728);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x0e18d9c0(&puStack_708);
    func_0x048b0bc0(&uStack_6f0);
    lVar17 = func_0x089cd320(lStack_320);
    if (*(int *)(lVar17 + 0x60) != -0x2b3da790) goto LAB_0e13a0b5;
LAB_0e13a073:
    lVar17 = *(long *)(lVar17 + 0x68);
    if (lVar17 == 0) goto LAB_0e13a0b5;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar21 = lVar17 + 9;
    if (bVar23) {
      lVar21 = *(long *)(lVar17 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar20 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0e18e690(&uStack_548,param_1,lVar21,uVar20);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0e1396eb;
LAB_0e139747:
    func_0x0e18cbb0(&uStack_638,param_1,&UNK_011b2715,0x1c);
    if ((char)puStack_608 == '\0') goto LAB_0e13976d;
LAB_0e139728:
    lVar17 = func_0x089cd320(lStack_320);
    if (*(int *)(lVar17 + 0x60) == -0x2b3da790) goto LAB_0e13a073;
LAB_0e13a0b5:
    func_0x0e18e690(&uStack_548,param_1,&UNK_01303bce,0x16);
  }
  if ((char)uStack_518 != '\0') {
    return;
  }
  func_0x0e18efc0(&puStack_708,&uStack_548,&UNK_01410416,4,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0ef44b00;
  if (uStack_6f0 != (long *)0x0) {
    lVar17 = *uStack_6f0;
    uStack_6f0 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_6f0;
  }
  uStack_6f0 = plVar14;
  uStack_788 = (undefined *)CONCAT44(uStack_788._4_4_,uStack_6f8);
  uStack_780 = (long *)0x0;
  uStack_778 = (long *)((ulong)uStack_778 & 0xffffffff00000000);
  uStack_770 = 1;
  uStack_768 = 0;
  puStack_760 = &UNK_048b3f30;
  puStack_758 = &SUB_048b06d0;
  puStack_750 = &SUB_048b2190;
  puStack_748 = &UNK_0e18f4c0;
  uStack_740 = &UNK_0e18f680;
  uStack_738 = (long *)((ulong)uStack_738 & 0xffffffff00000000);
  uStack_730 = 0;
  uStack_728 = (long *)0x0;
  func_0x048b05a0(puStack_700,&uStack_788);
  plVar14 = uStack_728;
  if (uStack_728 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_728 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_728 + 0x10))(uStack_728);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0e18f1c0(&puStack_708);
  uStack_f8 = (char)uStack_518;
  uStack_108 = uStack_528;
  uStack_104 = uStack_524;
  iStack_100 = iStack_520;
  uStack_fc = uStack_51c;
  uStack_118 = uStack_538;
  uStack_114 = uStack_534;
  uStack_110 = uStack_530;
  uStack_10c = uStack_52c;
  uStack_128 = uStack_548;
  uStack_124 = uStack_544;
  uStack_120 = uStack_540;
  uStack_11c = uStack_53c;
  func_0x048b0bc0(&uStack_6f0);
  uStack_768 = 0;
  uStack_720 = 0;
  uStack_718 = 0;
  uStack_730 = 0;
  uStack_728 = (long *)0x0;
  uStack_740 = (undefined *)0x0;
  uStack_738 = (long *)0x0;
  puStack_750 = (undefined1 *)0x0;
  puStack_748 = (undefined *)0x0;
  puStack_760 = (undefined *)0x0;
  puStack_758 = (undefined1 *)0x0;
  uStack_710 = 0;
  uStack_780 = (long *)0xffffffffffffffff;
  uStack_778 = (long *)0x0;
  uStack_770 = 0xff;
  uStack_788 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_768);
  puStack_760 = (undefined *)func_0x041681f0(&uStack_768,0xf547a30);
  puStack_758 = (undefined1 *)func_0x041681f0(&uStack_768,0xf547770);
  puStack_750 = (undefined1 *)0x0;
  puStack_748 = (undefined *)0x0;
  uStack_740 = (undefined *)0x0;
  uStack_738 = (long *)0x0;
  uStack_730 = 0;
  uStack_728 = (long *)0x0;
  uStack_720 = 0;
  uStack_718 = 0;
  uStack_710 = 0;
  bStack_480 = 0x12;
  uStack_47f = 0x775c3a2b775c5e;
  uStack_478 = 0x2b;
  uStack_477 = 0x24;
  func_0x0ed60210(&uStack_788,&bStack_480,0);
  uStack_2c0 = (undefined1)uStack_770;
  uStack_2d0 = (undefined4)uStack_780;
  uStack_2cc = uStack_780._4_4_;
  uStack_2c8 = (undefined4)uStack_778;
  uStack_2c4 = uStack_778._4_4_;
  puStack_2d8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_2b8,&uStack_768);
  uStack_2b0 = puStack_760;
  uStack_2a8 = puStack_758;
  uStack_2a0 = puStack_750;
  uStack_298 = puStack_748;
  uStack_290 = (undefined4)uStack_740;
  uStack_28c = uStack_740._4_4_;
  uStack_288 = (undefined4)uStack_738;
  uStack_284 = uStack_738._4_4_;
  if (uStack_738 != (long *)0x0) {
    LOCK();
    uStack_738[1] = uStack_738[1] + 1;
    UNLOCK();
  }
  uStack_280 = uStack_730;
  if (((ulong)uStack_728 & 1) == 0) {
    uStack_268 = uStack_718;
    uStack_278 = (uint)uStack_728;
    uStack_274 = uStack_728._4_4_;
    uStack_270 = (undefined4)uStack_720;
    uStack_26c = uStack_720._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_278,uStack_718,uStack_720);
  }
  uStack_260 = uStack_710;
  func_0x0e13be50(auStack_68,&uStack_128,&puStack_2d8);
  bStack_498 = 8;
  uStack_497 = 0x656d616e;
  uStack_493 = 0;
  puStack_4a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_4a0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar18 = _UNK_014c32de;
  uStack_4b0 = 0x31;
  uStack_4a8 = 0x2a;
  *(ulong *)((long)puStack_4a0 + 0x1a) = CONCAT26(_UNK_014c32dc,_DAT_014c32d6);
  *(undefined8 *)((long)puStack_4a0 + 0x22) = uVar18;
  uVar18 = CONCAT62(_DAT_014c32d6,_UNK_014c32d4);
  *(undefined8 *)(puStack_4a0 + 4) = _DAT_014c32cc;
  *(undefined8 *)(puStack_4a0 + 6) = uVar18;
  uVar6 = _UNK_014c32c8;
  uVar5 = _UNK_014c32c4;
  uVar4 = _UNK_014c32c0;
  *puStack_4a0 = _DAT_014c32bc;
  puStack_4a0[1] = uVar4;
  puStack_4a0[2] = uVar5;
  puStack_4a0[3] = uVar6;
  *(undefined1 *)((long)puStack_4a0 + 0x2a) = 0;
  func_0x0e13c040(&uStack_160,auStack_68,&bStack_498,&uStack_4b0);
  func_0x0e18efc0(&puStack_708,&uStack_160,&UNK_013e2f90,10,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0126a0;
  if (uStack_6f0 != (long *)0x0) {
    lVar17 = *uStack_6f0;
    uStack_6f0 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_6f0;
  }
  uStack_6f0 = plVar14;
  uStack_638 = (undefined *)CONCAT44(uStack_638._4_4_,uStack_6f8);
  uStack_630 = 0;
  uStack_628 = uStack_628 & 0xffffffff00000000;
  uStack_620 = 1;
  uStack_618 = 0;
  uStack_610 = &UNK_05daeda0;
  puStack_608 = &SUB_048b06d0;
  puStack_600 = &UNK_05daea90;
  puStack_5f8 = &UNK_0e18f910;
  uStack_5f0 = &UNK_0e18fa70;
  uStack_5e8 = (long *)((ulong)uStack_5e8._4_4_ << 0x20);
  uStack_5e0 = 0;
  uStack_5d8 = (long *)0x0;
  func_0x048b05a0(puStack_700,&uStack_638);
  plVar14 = uStack_5d8;
  if (uStack_5d8 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_5d8 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_5d8 + 0x10))(uStack_5d8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0e18f1c0(&puStack_708);
  uStack_2e8 = uStack_130;
  uStack_2f8 = uStack_140;
  uStack_2f4 = uStack_13c;
  iStack_2f0 = iStack_138;
  uStack_2ec = uStack_134;
  uStack_308 = uStack_150;
  uStack_304 = uStack_14c;
  uStack_300 = uStack_148;
  uStack_2fc = uStack_144;
  uStack_318 = uStack_160;
  uStack_314 = uStack_15c;
  uStack_310 = uStack_158;
  uStack_30c = uStack_154;
  func_0x048b0bc0(&uStack_6f0);
  if (iStack_2f0 == 4) {
    lVar17 = func_0x0e18f850(&uStack_318);
    lVar17 = *(long *)(lVar17 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
LAB_0e13a72f:
    puVar13[1] = 0xffffffffffffffff;
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0xff;
    *puVar13 = &UNK_0f0edc68;
    uVar18 = _DAT_014f0238;
    puVar13[4] = 0;
    puVar13[5] = uVar18;
    puVar13[6] = 0;
    puVar13[7] = 0;
    plVar14 = *(long **)(lVar17 + 8);
    *(undefined8 **)(lVar17 + 8) = puVar13;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x28))();
    }
  }
  else if (iStack_2f0 == 1) {
    lVar17 = CONCAT44(uStack_314,uStack_318) + 0x18;
    uVar18 = func_0x089cd320(lVar17);
    puVar12 = (undefined *)func_0x048b0c90(lVar17,uVar18,uStack_2ec,1);
    if (puVar12 == (undefined *)0x0) {
      puStack_708 = (undefined *)0x0;
      puStack_700 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_708);
      puVar12 = puStack_708;
    }
    lVar17 = *(long *)(puVar12 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0e13a72f;
  }
  uStack_b8 = uStack_2e8;
  uStack_c8 = uStack_2f8;
  uStack_c4 = uStack_2f4;
  iStack_c0 = iStack_2f0;
  uStack_bc = uStack_2ec;
  uStack_d8 = uStack_308;
  uStack_d4 = uStack_304;
  uStack_d0 = uStack_300;
  uStack_cc = uStack_2fc;
  uStack_e8 = uStack_318;
  uStack_e4 = uStack_314;
  uStack_e0 = uStack_310;
  uStack_dc = uStack_30c;
  bStack_510 = 0x14;
  uStack_50f = 0x745f6c61746f74;
  uStack_508 = 0x69;
  uStack_507 = 0x656d;
  uStack_505 = 0;
  puStack_4b8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_4b8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar18 = _UNK_011ce397;
  uStack_4c8 = 0x29;
  uStack_4c0 = 0x26;
  *(undefined8 *)(puStack_4b8 + 4) = _DAT_011ce38f;
  *(undefined8 *)(puStack_4b8 + 6) = uVar18;
  uVar6 = _UNK_011ce38b;
  uVar5 = _UNK_011ce387;
  uVar4 = _UNK_011ce383;
  *puStack_4b8 = _DAT_011ce37f;
  puStack_4b8[1] = uVar4;
  puStack_4b8[2] = uVar5;
  puStack_4b8[3] = uVar6;
  *(undefined8 *)((long)puStack_4b8 + 0x1e) = 0x2e65756c61762065;
  *(undefined1 *)((long)puStack_4b8 + 0x26) = 0;
  func_0x0e13c040(&uStack_198,&uStack_e8,&bStack_510,&uStack_4c8);
  func_0x0e18ebd0(&puStack_708,CONCAT44(uStack_194,uStack_198) + 0x18);
  if (uStack_6f0._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(CONCAT44(uStack_6f4,uStack_6f8) + 0x78) + 0x60);
    iVar10 = *piVar19;
    while (iVar10 != (int)uStack_6f0) {
      piVar19 = piVar19 + 0x16;
      iVar10 = *piVar19;
    }
    puVar13 = *(undefined8 **)(piVar19 + 0xc);
    while (puVar13 != puStack_700) {
      piVar19 = *(int **)(piVar19 + 0xe);
      puVar13 = *(undefined8 **)(piVar19 + 0xc);
    }
  }
  else {
    if (uStack_6f0._4_4_ != 1) {
      if (uStack_6f0._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_6f4,uStack_6f8) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_0e13a8f3;
    }
    piVar19 = *(int **)(*(long *)(CONCAT44(uStack_6f4,uStack_6f8) + 0x78) + 0x48);
    iVar10 = *piVar19;
    while (iVar10 != (int)uStack_6f0) {
      piVar19 = piVar19 + 0x1a;
      iVar10 = *piVar19;
    }
  }
  *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
LAB_0e13a8f3:
  func_0x0e18efc0(&puStack_708,&uStack_198,&UNK_013bfc6b,0xb,0x10);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0ef44b00;
  if (uStack_6f0 != (long *)0x0) {
    lVar17 = *uStack_6f0;
    uStack_6f0 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_6f0;
  }
  uStack_6f0 = plVar14;
  uStack_638 = (undefined *)CONCAT44(uStack_638._4_4_,uStack_6f8);
  uStack_630 = 0;
  uStack_628 = uStack_628 & 0xffffffff00000000;
  uStack_620 = 1;
  uStack_618 = 0;
  uStack_610 = &UNK_048b3f30;
  puStack_608 = &SUB_048b06d0;
  puStack_600 = &SUB_048b2190;
  puStack_5f8 = &UNK_0e18fc50;
  uStack_5f0 = &UNK_0e18fe20;
  uStack_5e8 = (long *)((ulong)uStack_5e8 & 0xffffffff00000000);
  uStack_5e0 = 0;
  uStack_5d8 = (long *)0x0;
  func_0x048b05a0(puStack_700,&uStack_638);
  plVar14 = uStack_5d8;
  if (uStack_5d8 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_5d8 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_5d8 + 0x10))(uStack_5d8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0e18f1c0(&puStack_708);
  uStack_78 = uStack_168;
  uStack_88 = uStack_178;
  uStack_84 = uStack_174;
  uStack_80 = uStack_170;
  uStack_7c = uStack_16c;
  uStack_98 = uStack_188;
  uStack_94 = uStack_184;
  uStack_90 = uStack_180;
  uStack_8c = uStack_17c;
  uStack_a8 = uStack_198;
  uStack_a4 = uStack_194;
  uStack_a0 = uStack_190;
  uStack_9c = uStack_18c;
  func_0x048b0bc0(&uStack_6f0);
  uStack_618 = 0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  uStack_5e0 = 0;
  uStack_5d8 = (long *)0x0;
  uStack_5f0 = (undefined *)0x0;
  uStack_5e8 = (long *)0x0;
  puStack_600 = (undefined *)0x0;
  puStack_5f8 = (undefined *)0x0;
  uStack_610 = (undefined *)0x0;
  puStack_608 = (undefined1 *)0x0;
  uStack_5c0 = 0;
  uStack_630 = 0xffffffffffffffff;
  uStack_628 = 0;
  uStack_620 = 0xff;
  uStack_638 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_618);
  uStack_610 = (undefined *)func_0x041681f0(&uStack_618,0xf547a30);
  puStack_608 = (undefined1 *)func_0x041681f0(&uStack_618,0xf547770);
  puStack_600 = (undefined *)0x0;
  puStack_5f8 = (undefined *)0x0;
  uStack_5f0 = (undefined *)0x0;
  uStack_5e8 = (long *)0x0;
  uStack_5e0 = 0;
  uStack_5d8 = (long *)0x0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  uStack_5c0 = 0;
  puStack_4d0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puStack_4d0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar6 = _UNK_013d9c63;
  uVar5 = _UNK_013d9c5f;
  uVar4 = _UNK_013d9c5b;
  uStack_4e0 = 0x1b;
  uStack_4d8 = 0x17;
  *puStack_4d0 = _DAT_013d9c57;
  puStack_4d0[1] = uVar4;
  puStack_4d0[2] = uVar5;
  puStack_4d0[3] = uVar6;
  *(undefined8 *)((long)puStack_4d0 + 0xf) = 0x24297261656e696c;
  *(undefined1 *)((long)puStack_4d0 + 0x17) = 0;
  func_0x0ed60210(&uStack_638,&uStack_4e0,0);
  uStack_240 = (undefined1)uStack_620;
  uStack_250 = (undefined4)uStack_630;
  uStack_24c = uStack_630._4_4_;
  uStack_248 = (undefined4)uStack_628;
  uStack_244 = uStack_628._4_4_;
  puStack_258 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_238,&uStack_618);
  uStack_230 = uStack_610;
  uStack_228 = puStack_608;
  uStack_220 = puStack_600;
  uStack_218 = puStack_5f8;
  uStack_210 = (undefined4)uStack_5f0;
  uStack_20c = uStack_5f0._4_4_;
  uStack_208 = (undefined4)uStack_5e8;
  uStack_204 = uStack_5e8._4_4_;
  if (uStack_5e8 != (long *)0x0) {
    LOCK();
    uStack_5e8[1] = uStack_5e8[1] + 1;
    UNLOCK();
  }
  uStack_200 = uStack_5e0;
  if (((ulong)uStack_5d8 & 1) == 0) {
    uStack_1e8 = uStack_5c8;
    uStack_1f8 = (uint)uStack_5d8;
    uStack_1f4 = uStack_5d8._4_4_;
    uStack_1f0 = (undefined4)uStack_5d0;
    uStack_1ec = uStack_5d0._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_1f8,uStack_5c8,uStack_5d0);
  }
  uStack_1e0 = uStack_5c0;
  func_0x0e13be50(&uStack_1d8,&uStack_a8,&puStack_258);
  bStack_430 = 0x16;
  uStack_42f = 0x5f656e696c7073;
  uStack_428 = 0x65707974;
  uStack_424 = 0;
  puStack_4e8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puStack_4e8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar18 = _UNK_01320147;
  uStack_4f8 = 0x39;
  uStack_4f0 = 0x36;
  *(undefined8 *)(puStack_4e8 + 8) = _DAT_0132013f;
  *(undefined8 *)(puStack_4e8 + 10) = uVar18;
  uVar18 = _UNK_01320137;
  *(undefined8 *)(puStack_4e8 + 4) = _DAT_0132012f;
  *(undefined8 *)(puStack_4e8 + 6) = uVar18;
  uVar6 = _UNK_0132012b;
  uVar5 = _UNK_01320127;
  uVar4 = _UNK_01320123;
  *puStack_4e8 = _DAT_0132011f;
  puStack_4e8[1] = uVar4;
  puStack_4e8[2] = uVar5;
  puStack_4e8[3] = uVar6;
  *(undefined8 *)((long)puStack_4e8 + 0x2e) = 0x2e227261656e696c;
  *(undefined1 *)((long)puStack_4e8 + 0x36) = 0;
  func_0x0e13c040(&uStack_358,&uStack_1d8,&bStack_430,&uStack_4f8);
  func_0x0e18efc0(&puStack_708,&uStack_358,&UNK_012b7c31,0xe,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f4aeda0;
  if (uStack_6f0 != (long *)0x0) {
    lVar17 = *uStack_6f0;
    uStack_6f0 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_6f0;
  }
  uStack_6f0 = plVar14;
  puStack_5b8 = (undefined *)CONCAT44(puStack_5b8._4_4_,uStack_6f8);
  uStack_5b0 = (long *)0x0;
  uStack_5a8 = uStack_5a8 & 0xffffffff00000000;
  uStack_5a0 = 1;
  uStack_598 = 0;
  uStack_590 = &UNK_0e193030;
  uStack_588 = &SUB_048b06d0;
  puStack_580 = &UNK_0e191df0;
  puStack_578 = &UNK_0e1930f0;
  puStack_570 = &UNK_0e193300;
  uStack_568 = 0;
  uStack_560 = 0;
  plStack_558 = (long *)0x0;
  func_0x048b05a0(puStack_700,&puStack_5b8);
  plVar14 = plStack_558;
  if (plStack_558 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_558 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_558 + 0x10))(plStack_558);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0e18f1c0(&puStack_708);
  uStack_438 = CONCAT71(uStack_438._1_7_,uStack_328);
  uStack_464 = CONCAT22(uStack_352,uStack_354);
  uStack_448 = uStack_338;
  uStack_444 = uStack_334;
  uStack_440 = uStack_330;
  uStack_43c = uStack_32c;
  uStack_458 = uStack_348;
  uStack_454 = uStack_344;
  uStack_450 = uStack_340;
  uStack_44c = uStack_33c;
  uStack_468 = uStack_358;
  uStack_460 = uStack_350;
  uStack_45c = uStack_34c;
  func_0x048b0bc0(&uStack_6f0);
  uStack_418 = CONCAT44(uStack_464,uStack_468);
  uStack_410 = CONCAT44(uStack_45c,uStack_460);
  uStack_408 = uStack_458;
  uStack_404 = uStack_454;
  uStack_400 = uStack_450;
  uStack_3fc = uStack_44c;
  uStack_3f8 = uStack_448;
  uStack_3f4 = uStack_444;
  uStack_3f0 = uStack_440;
  uStack_3ec = uStack_43c;
  uStack_3e8 = uStack_438;
  func_0x0e18efc0(&puStack_708,&uStack_418,&UNK_0129e7d9,0x13,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f4aef20;
  if (uStack_6f0 != (long *)0x0) {
    lVar17 = *uStack_6f0;
    uStack_6f0 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_6f0;
  }
  uStack_6f0 = plVar14;
  puStack_5b8 = (undefined *)CONCAT44(puStack_5b8._4_4_,uStack_6f8);
  uStack_5b0 = (long *)0x0;
  uStack_5a8 = uStack_5a8 & 0xffffffff00000000;
  uStack_5a0 = 1;
  uStack_598 = 0;
  uStack_590 = &UNK_0e196600;
  uStack_588 = &SUB_048b06d0;
  puStack_580 = &UNK_0e195480;
  puStack_578 = &UNK_0e1966c0;
  puStack_570 = &UNK_0e1968b0;
  uStack_568 = 0;
  uStack_560 = 0;
  plStack_558 = (long *)0x0;
  func_0x048b05a0(puStack_700,&puStack_5b8);
  plVar14 = plStack_558;
  if (plStack_558 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_558 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_558 + 0x10))(plStack_558);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0e18f1c0(&puStack_708);
  uStack_3a8 = (undefined1)uStack_3e8;
  uStack_3b8 = uStack_3f8;
  uStack_3b4 = uStack_3f4;
  iStack_3b0 = uStack_3f0;
  uStack_3ac = uStack_3ec;
  uStack_3c8 = uStack_408;
  uStack_3c4 = uStack_404;
  uStack_3c0 = uStack_400;
  uStack_3bc = uStack_3fc;
  uStack_3d8 = (undefined4)uStack_418;
  uStack_3d4 = uStack_418._4_4_;
  uStack_3d0 = (undefined4)uStack_410;
  uStack_3cc = uStack_410._4_4_;
  func_0x048b0bc0(&uStack_6f0);
  uStack_398 = uStack_3d8;
  uStack_394 = uStack_3d4;
  uStack_390 = uStack_3d0;
  uStack_38c = uStack_3cc;
  uStack_388 = uStack_3c8;
  uStack_384 = uStack_3c4;
  uStack_380 = uStack_3c0;
  uStack_37c = uStack_3bc;
  uStack_378 = uStack_3b8;
  uStack_374 = uStack_3b4;
  iStack_370 = iStack_3b0;
  uStack_36c = uStack_3ac;
  uStack_368 = CONCAT71(uStack_3a7,uStack_3a8);
  func_0x0e18efc0(&puStack_708,&uStack_398,&UNK_01370e61,0x13,1);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4af0a0;
  if (uStack_6f0 != (long *)0x0) {
    lVar17 = *uStack_6f0;
    uStack_6f0 = puVar13;
    (**(code **)(lVar17 + 8))();
    puVar13 = uStack_6f0;
  }
  uStack_6f0 = puVar13;
  puStack_5b8 = (undefined *)CONCAT44(puStack_5b8._4_4_,uStack_6f8);
  uStack_5b0 = (long *)0x0;
  uStack_5a8 = uStack_5a8 & 0xffffffff00000000;
  uStack_5a0 = 1;
  uStack_598 = 0;
  uStack_590 = &UNK_0e199dd0;
  uStack_588 = &SUB_048b06d0;
  puStack_580 = &UNK_0e198b80;
  puStack_578 = &UNK_0e199e90;
  puStack_570 = &UNK_0e19a0a0;
  uStack_568 = 0;
  uStack_560 = 0;
  plStack_558 = (long *)0x0;
  func_0x048b05a0(puStack_700,&puStack_5b8);
  plVar14 = plStack_558;
  if (plStack_558 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_558 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_558 + 0x10))(plStack_558);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0e18f1c0(&puStack_708);
  func_0x048b0bc0(&uStack_6f0);
  if ((uStack_4f8 & 1) != 0) {
    func_0x0412a280(puStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
  }
  if ((bStack_430 & 1) != 0) {
    func_0x0412a280(uStack_420,CONCAT71(uStack_42f,bStack_430) & 0xfffffffffffffffe);
  }
  if ((uStack_1f8 & 1) == 0) {
    puStack_258 = &UNK_0f4e3c70;
    plVar14 = (long *)CONCAT44(uStack_204,uStack_208);
  }
  else {
    puStack_258 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_1e8,CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
    plVar14 = (long *)CONCAT44(uStack_204,uStack_208);
  }
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(auStack_238);
  if ((uStack_4e0 & 1) != 0) {
    func_0x0412a280(puStack_4d0,uStack_4e0 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_5d8 & 1) == 0) {
    uStack_638 = &UNK_0f4e3c70;
    plVar14 = uStack_5e8;
  }
  else {
    uStack_638 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_5c8,(ulong)uStack_5d8 & 0xfffffffffffffffe);
    plVar14 = uStack_5e8;
  }
  uStack_5e8 = plVar14;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&uStack_618);
  if ((uStack_4c8 & 1) != 0) {
    func_0x0412a280(puStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
  }
  if ((bStack_510 & 1) != 0) {
    func_0x0412a280(uStack_500,CONCAT71(uStack_50f,bStack_510) & 0xfffffffffffffffe);
  }
  if ((uStack_4b0 & 1) != 0) {
    func_0x0412a280(puStack_4a0,uStack_4b0 & 0xfffffffffffffffe);
  }
  if ((bStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,
                    CONCAT26(uStack_492,CONCAT15(uStack_493,CONCAT41(uStack_497,bStack_498))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) == 0) {
    puStack_2d8 = &UNK_0f4e3c70;
    plVar14 = (long *)CONCAT44(uStack_284,uStack_288);
  }
  else {
    puStack_2d8 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
    plVar14 = (long *)CONCAT44(uStack_284,uStack_288);
  }
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(auStack_2b8);
  if ((bStack_480 & 1) != 0) {
    func_0x0412a280(uStack_470,CONCAT71(uStack_47f,bStack_480) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_728 & 1) == 0) {
    uStack_788 = &UNK_0f4e3c70;
    plVar14 = uStack_738;
  }
  else {
    uStack_788 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_718,(ulong)uStack_728 & 0xfffffffffffffffe);
    plVar14 = uStack_738;
  }
  uStack_738 = plVar14;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&uStack_768);
  return;
}



/* ---- referenced strings ----
 * 0x11ce37f  Total time cannot be a negative value.
 * 0x11ce38f  t be a negative value.
 * 0x12eb722  The progress values must be between 0.0 and 1.0.
 * 0x12eb732  ues must be between 0.0 and 1.0.
 * 0x12eb742  een 0.0 and 1.0.
 * 0x132011f  "spline_type" must be either "catmullrom" or "linear".
 * 0x132012f  st be either "catmullrom" or "linear".
 * 0x132013f  tmullrom" or "linear".
 * 0x13bfc4a  Time cannot be a negative value.
 * 0x13bfc5a   negative value.
 * 0x13d9c57  ^(?:catmullrom|linear)$
 * 0x1459d9d  Time cannot be a negative value
 * 0x1459dac  a negative value
 * 0x14c32bc  "name" must be in "namespace:name" format.
 * 0x14c32cc  n "namespace:name" format.
 * 0x14c32d6  ce:name" format.
 */
