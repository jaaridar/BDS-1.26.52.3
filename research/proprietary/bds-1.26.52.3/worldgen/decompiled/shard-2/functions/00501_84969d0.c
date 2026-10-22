/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x85969d0 (ELF vaddr 0x84969d0)
 * Label: caller-of-callee
 * Body:  [[085969d0, 0859806d]]
 * Ghidra: FUN_085969d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_085969d0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined *puStack_748;
  undefined1 *puStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined *puStack_6c8;
  undefined1 *puStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined4 auStack_670 [2];
  undefined8 uStack_668;
  undefined4 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined *puStack_648;
  undefined1 *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined4 uStack_620;
  undefined8 uStack_618;
  long *plStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  long *aplStack_5f0 [23];
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
  undefined8 uStack_4c8;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  long *plStack_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  int iStack_400;
  undefined4 uStack_3fc;
  char cStack_3f8;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined4 uStack_368;
  undefined4 uStack_364;
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
  undefined8 uStack_338;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  int iStack_300;
  undefined4 uStack_2fc;
  char cStack_2f8;
  undefined7 uStack_2f7;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  char cStack_280;
  undefined *puStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  uint uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  uint uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
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
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
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
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  func_0x08599030();
  func_0x0d8a4910(param_1);
  if ((DAT_0f5d86a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d86a0), iVar5 != 0)) {
    func_0x0863de30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d8620,0xf53dab8);
    func_0x0410844d(&DAT_0f5d86a0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d8620 + 4)) * 8);
  do {
    lVar9 = *plVar8;
    if (lVar9 == -1) goto LAB_08596a50;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5d8620 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_08596a50:
    puVar7 = &DAT_0f5d8620;
    if (iRam000000000f5d8680 != -0x2b3da790) goto LAB_08596abd;
LAB_08596a7b:
    lVar9 = *(long *)(puVar7 + 0x68);
    if (lVar9 == 0) goto LAB_08596abd;
    bVar13 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar11 = lVar9 + 9;
    if (bVar13) {
      lVar11 = *(long *)(lVar9 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar13) {
      uVar12 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x08645610(&uStack_2b0,param_1,lVar11,uVar12);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_08596a7b;
LAB_08596abd:
    func_0x08645610(&uStack_2b0,param_1,&UNK_012aa411,0x26);
  }
  if (cStack_280 != '\0') {
    return;
  }
  func_0x08646190(&lStack_608,&uStack_2b0,&UNK_013b312d,0x19,1);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f123e80;
  if (aplStack_5f0[0] != (long *)0x0) {
    lVar9 = *aplStack_5f0[0];
    aplStack_5f0[0] = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = aplStack_5f0[0];
  }
  aplStack_5f0[0] = plVar8;
  uStack_770 = (undefined *)CONCAT44(uStack_770._4_4_,uStack_5f8);
  uStack_768 = 0;
  uStack_760 = (ulong)uStack_760._4_4_ << 0x20;
  uStack_758 = 1;
  uStack_750 = 0;
  puStack_748 = &UNK_0864c6b0;
  puStack_740 = &SUB_048b06d0;
  uStack_738 = &UNK_08649ad0;
  uStack_730 = &UNK_0864c770;
  uStack_728 = &UNK_0864c920;
  uStack_720 = (long *)((ulong)uStack_720._4_4_ << 0x20);
  uStack_718 = 0;
  uStack_710 = (long *)0x0;
  func_0x048b05a0(uStack_600,&uStack_770);
  plVar8 = uStack_710;
  if (uStack_710 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_710 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_710 + 0x10))(uStack_710);
      FUN_0412c2d0(plVar8);
    }
  }
  func_0x086464b0(&lStack_608);
  cStack_508 = cStack_280;
  uStack_518 = uStack_290;
  uStack_514 = uStack_28c;
  iStack_510 = iStack_288;
  uStack_50c = uStack_284;
  uStack_528 = uStack_2a0;
  uStack_524 = uStack_29c;
  uStack_520 = uStack_298;
  uStack_51c = uStack_294;
  uStack_538 = uStack_2b0;
  uStack_534 = uStack_2ac;
  uStack_530 = uStack_2a8;
  uStack_52c = uStack_2a4;
  func_0x048b0bc0(aplStack_5f0);
  uStack_4a0 = 0xff;
  uStack_4a8 = 0;
  puStack_4b8 = &UNK_0f4e3d70;
  uStack_498 = 0;
  uStack_490 = 0;
  plStack_488 = (long *)0x0;
  uStack_480 = 0;
  plStack_478 = (long *)0x0;
  uStack_4b0 = 0xff;
  uStack_468 = 0xff;
  uStack_460 = 0;
  uStack_458 = 0xff;
  puStack_470 = &UNK_0f4e3d70;
  uStack_450 = 0;
  uStack_448 = 0;
  plStack_440 = (long *)0x0;
  uStack_438 = 0;
  plStack_430 = (long *)0x0;
  if (iStack_510 == 4) {
    lVar9 = func_0x0864cee0(&uStack_538);
    lVar9 = *(long *)(lVar9 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  else {
    if (iStack_510 != 1) goto LAB_08596dde;
    lVar9 = func_0x0864cd90(&uStack_538);
    lVar9 = *(long *)(lVar9 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  *(undefined1 *)(puVar10 + 3) = (undefined1)uStack_4a0;
  puVar10[1] = uStack_4b0;
  puVar10[2] = uStack_4a8;
  *puVar10 = &UNK_0f4e3d70;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  uStack_448 = 0;
  plStack_440 = (long *)0x0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  uStack_438 = 0;
  plStack_430 = (long *)0x0;
  plVar8 = *(long **)(lVar9 + 8);
  *(undefined8 **)(lVar9 + 8) = puVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
LAB_08596dde:
  cStack_3f8 = cStack_508;
  uStack_408 = uStack_518;
  uStack_404 = uStack_514;
  iStack_400 = iStack_510;
  uStack_3fc = uStack_50c;
  uStack_418 = uStack_528;
  uStack_414 = uStack_524;
  uStack_410 = uStack_520;
  uStack_40c = uStack_51c;
  uStack_428 = uStack_538;
  uStack_424 = uStack_534;
  uStack_420 = uStack_530;
  uStack_41c = uStack_52c;
  func_0x08646190(&lStack_608,&uStack_428,&UNK_011a3b10,0xb,1);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0122d0;
  if (aplStack_5f0[0] != (long *)0x0) {
    lVar9 = *aplStack_5f0[0];
    aplStack_5f0[0] = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = aplStack_5f0[0];
  }
  aplStack_5f0[0] = plVar8;
  uStack_770 = (undefined *)CONCAT44(uStack_770._4_4_,uStack_5f8);
  uStack_768 = 0;
  uStack_760 = uStack_760 & 0xffffffff00000000;
  uStack_758 = 1;
  uStack_750 = 0;
  puStack_748 = &UNK_05de9430;
  puStack_740 = &SUB_048b06d0;
  uStack_738 = &UNK_05de9110;
  uStack_730 = &UNK_0864d060;
  uStack_728 = &UNK_0864d1d0;
  uStack_720 = (long *)((ulong)uStack_720 & 0xffffffff00000000);
  uStack_718 = 0;
  uStack_710 = (long *)0x0;
  func_0x048b05a0(uStack_600,&uStack_770);
  plVar8 = uStack_710;
  if (uStack_710 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_710 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_710 + 0x10))(uStack_710);
      FUN_0412c2d0(plVar8);
    }
  }
  func_0x086464b0(&lStack_608);
  cStack_2f8 = cStack_3f8;
  uStack_308 = uStack_408;
  uStack_304 = uStack_404;
  iStack_300 = iStack_400;
  uStack_2fc = uStack_3fc;
  uStack_318 = uStack_418;
  uStack_314 = uStack_414;
  uStack_310 = uStack_410;
  uStack_30c = uStack_40c;
  uStack_328 = uStack_428;
  uStack_324 = uStack_424;
  uStack_320 = uStack_420;
  uStack_31c = uStack_41c;
  func_0x048b0bc0(aplStack_5f0);
  uStack_3e8 = uStack_328;
  uStack_3e4 = uStack_324;
  uStack_3e0 = uStack_320;
  uStack_3dc = uStack_31c;
  uStack_3d8 = uStack_318;
  uStack_3d4 = uStack_314;
  uStack_3d0 = uStack_310;
  uStack_3cc = uStack_30c;
  uStack_3c8 = uStack_308;
  uStack_3c4 = uStack_304;
  iStack_3c0 = iStack_300;
  uStack_3bc = uStack_2fc;
  uStack_3b8 = CONCAT71(uStack_2f7,cStack_2f8);
  func_0x08646190(&lStack_608,&uStack_3e8,&UNK_0149bf59,10,1);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f012168;
  if (aplStack_5f0[0] != (long *)0x0) {
    lVar9 = *aplStack_5f0[0];
    aplStack_5f0[0] = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = aplStack_5f0[0];
  }
  aplStack_5f0[0] = plVar8;
  uStack_770 = (undefined *)CONCAT44(uStack_770._4_4_,uStack_5f8);
  uStack_768 = 0;
  uStack_760 = uStack_760 & 0xffffffff00000000;
  uStack_758 = 1;
  uStack_750 = 0;
  puStack_748 = &UNK_05dc3f10;
  puStack_740 = &SUB_048b06d0;
  uStack_738 = &UNK_05dc3bf0;
  uStack_730 = &UNK_0864d3b0;
  uStack_728 = &UNK_0864d520;
  uStack_720 = (long *)((ulong)uStack_720 & 0xffffffff00000000);
  uStack_718 = 0;
  uStack_710 = (long *)0x0;
  func_0x048b05a0(uStack_600,&uStack_770);
  plVar8 = uStack_710;
  if (uStack_710 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_710 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_710 + 0x10))(uStack_710);
      FUN_0412c2d0(plVar8);
    }
  }
  func_0x086464b0(&lStack_608);
  uStack_2b8 = (undefined1)uStack_3b8;
  uStack_2c8 = uStack_3c8;
  uStack_2c4 = uStack_3c4;
  iStack_2c0 = iStack_3c0;
  uStack_2bc = uStack_3bc;
  uStack_2d8 = uStack_3d8;
  uStack_2d4 = uStack_3d4;
  uStack_2d0 = uStack_3d0;
  uStack_2cc = uStack_3cc;
  uStack_2e8 = uStack_3e8;
  uStack_2e4 = uStack_3e4;
  uStack_2e0 = uStack_3e0;
  uStack_2dc = uStack_3dc;
  func_0x048b0bc0(aplStack_5f0);
  uStack_3a8 = uStack_2e8;
  uStack_3a4 = uStack_2e4;
  uStack_3a0 = uStack_2e0;
  uStack_39c = uStack_2dc;
  uStack_398 = uStack_2d8;
  uStack_394 = uStack_2d4;
  uStack_390 = uStack_2d0;
  uStack_38c = uStack_2cc;
  uStack_388 = uStack_2c8;
  uStack_384 = uStack_2c4;
  iStack_380 = iStack_2c0;
  uStack_37c = uStack_2bc;
  uStack_378 = CONCAT71(uStack_2b7,uStack_2b8);
  func_0x08646190(&lStack_608,&uStack_3a8,&UNK_0132c50e,0x10,1);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef44b00;
  if (aplStack_5f0[0] != (long *)0x0) {
    lVar9 = *aplStack_5f0[0];
    aplStack_5f0[0] = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = aplStack_5f0[0];
  }
  aplStack_5f0[0] = plVar8;
  uStack_770 = (undefined *)CONCAT44(uStack_770._4_4_,uStack_5f8);
  uStack_768 = 0;
  uStack_760 = uStack_760 & 0xffffffff00000000;
  uStack_758 = 1;
  uStack_750 = 0;
  puStack_748 = &UNK_048b3f30;
  puStack_740 = &SUB_048b06d0;
  uStack_738 = &SUB_048b2190;
  uStack_730 = &UNK_0864d700;
  uStack_728 = &UNK_0864d8d0;
  uStack_720 = (long *)((ulong)uStack_720 & 0xffffffff00000000);
  uStack_718 = 0;
  uStack_710 = (long *)0x0;
  func_0x048b05a0(uStack_600,&uStack_770);
  plVar8 = uStack_710;
  if (uStack_710 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_710 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_710 + 0x10))(uStack_710);
      FUN_0412c2d0(plVar8);
    }
  }
  func_0x086464b0(&lStack_608);
  uStack_e8 = (undefined1)uStack_378;
  uStack_f8 = uStack_388;
  uStack_f4 = uStack_384;
  iStack_f0 = iStack_380;
  uStack_ec = uStack_37c;
  uStack_108 = uStack_398;
  uStack_104 = uStack_394;
  uStack_100 = uStack_390;
  uStack_fc = uStack_38c;
  uStack_118 = uStack_3a8;
  uStack_114 = uStack_3a4;
  uStack_110 = uStack_3a0;
  uStack_10c = uStack_39c;
  func_0x048b0bc0(aplStack_5f0);
  uStack_750 = 0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_718 = 0;
  uStack_710 = (long *)0x0;
  uStack_728 = (undefined *)0x0;
  uStack_720 = (long *)0x0;
  uStack_738 = (undefined *)0x0;
  uStack_730 = (undefined *)0x0;
  puStack_748 = (undefined *)0x0;
  puStack_740 = (undefined1 *)0x0;
  uStack_6f8 = 0;
  uStack_768 = 0xffffffffffffffff;
  uStack_760 = 0;
  uStack_758 = 0xff;
  uStack_770 = &UNK_0f4e3c70;
  FUN_041679a0(&uStack_750);
  puStack_748 = (undefined *)func_0x041681f0(&uStack_750,0xf547a30);
  puStack_740 = (undefined1 *)func_0x041681f0(&uStack_750,0xf547770);
  uStack_738 = (undefined *)0x0;
  uStack_730 = (undefined *)0x0;
  uStack_728 = (undefined *)0x0;
  uStack_720 = (long *)0x0;
  uStack_718 = 0;
  uStack_710 = (long *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_6f8 = 0;
  uStack_768 = 0xff;
  uStack_1f0 = 0xff;
  uStack_1ec = 0;
  uStack_1e8 = (undefined4)uStack_760;
  uStack_1e4 = uStack_760._4_4_;
  uStack_1e0 = (undefined1)uStack_758;
  puStack_1f8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_1d8,&uStack_750);
  uStack_1d0 = puStack_748;
  uStack_1c8 = puStack_740;
  uStack_1c0 = (undefined4)uStack_738;
  uStack_1bc = uStack_738._4_4_;
  uStack_1b8 = (undefined4)uStack_730;
  uStack_1b4 = uStack_730._4_4_;
  uStack_1b0 = (undefined4)uStack_728;
  uStack_1ac = uStack_728._4_4_;
  uStack_1a8 = (undefined4)uStack_720;
  uStack_1a4 = uStack_720._4_4_;
  if (uStack_720 != (long *)0x0) {
    LOCK();
    uStack_720[1] = uStack_720[1] + 1;
    UNLOCK();
  }
  uStack_1a0 = uStack_718;
  if (((ulong)uStack_710 & 1) == 0) {
    uStack_188 = uStack_700;
    uStack_198 = (uint)uStack_710;
    uStack_194 = uStack_710._4_4_;
    uStack_190 = (undefined4)uStack_708;
    uStack_18c = uStack_708._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_198,uStack_700,uStack_708);
  }
  uStack_180 = uStack_6f8;
  func_0x085a6e20(&uStack_a0,&uStack_118,&puStack_1f8);
  uStack_338 = uStack_70;
  uStack_348 = uStack_80;
  uStack_344 = uStack_7c;
  uStack_340 = uStack_78;
  uStack_33c = uStack_74;
  uStack_358 = uStack_90;
  uStack_354 = uStack_8c;
  uStack_350 = uStack_88;
  uStack_34c = uStack_84;
  uStack_368 = uStack_a0;
  uStack_364 = uStack_9c;
  uStack_360 = uStack_98;
  uStack_35c = uStack_94;
  func_0x08646190(&lStack_608,&uStack_368,&UNK_011bebde,0x11,0);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0123c0;
  if (aplStack_5f0[0] != (long *)0x0) {
    lVar9 = *aplStack_5f0[0];
    aplStack_5f0[0] = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = aplStack_5f0[0];
  }
  aplStack_5f0[0] = plVar8;
  uStack_6f0 = (undefined *)CONCAT44(uStack_6f0._4_4_,uStack_5f8);
  uStack_6e8 = 0;
  uStack_6e0 = (ulong)uStack_6e0._4_4_ << 0x20;
  uStack_6d8 = 1;
  uStack_6d0 = 0;
  puStack_6c8 = &UNK_05e08030;
  puStack_6c0 = &SUB_048b06d0;
  uStack_6b8 = &UNK_05e07cf0;
  uStack_6b0 = &UNK_0864dab0;
  uStack_6a8 = &UNK_0864dc60;
  uStack_6a0 = (long *)((ulong)uStack_6a0._4_4_ << 0x20);
  uStack_698 = 0;
  uStack_690 = (long *)0x0;
  func_0x048b05a0(uStack_600,&uStack_6f0);
  plVar8 = uStack_690;
  if (uStack_690 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_690 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_690 + 0x10))(uStack_690);
      FUN_0412c2d0(plVar8);
    }
  }
  func_0x086464b0(&lStack_608);
  uStack_a8 = (undefined1)uStack_338;
  uStack_b8 = uStack_348;
  uStack_b4 = uStack_344;
  uStack_b0 = uStack_340;
  uStack_ac = uStack_33c;
  uStack_c8 = uStack_358;
  uStack_c4 = uStack_354;
  uStack_c0 = uStack_350;
  uStack_bc = uStack_34c;
  uStack_d8 = uStack_368;
  uStack_d4 = uStack_364;
  uStack_d0 = uStack_360;
  uStack_cc = uStack_35c;
  func_0x048b0bc0(aplStack_5f0);
  uStack_6d0 = 0;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_698 = 0;
  uStack_690 = (long *)0x0;
  uStack_6a8 = (undefined *)0x0;
  uStack_6a0 = (long *)0x0;
  uStack_6b8 = (undefined *)0x0;
  uStack_6b0 = (undefined *)0x0;
  puStack_6c8 = (undefined *)0x0;
  puStack_6c0 = (undefined1 *)0x0;
  uStack_678 = 0;
  uStack_6e8 = 0xffffffffffffffff;
  uStack_6e0 = 0;
  uStack_6d8 = 0xff;
  uStack_6f0 = &UNK_0f4e3c70;
  FUN_041679a0(&uStack_6d0);
  puStack_6c8 = (undefined *)func_0x041681f0(&uStack_6d0,0xf547a30);
  puStack_6c0 = (undefined1 *)func_0x041681f0(&uStack_6d0,0xf547770);
  uStack_6b8 = (undefined *)0x0;
  uStack_6b0 = (undefined *)0x0;
  uStack_6a8 = (undefined *)0x0;
  uStack_6a0 = (long *)0x0;
  uStack_698 = 0;
  uStack_690 = (long *)0x0;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uStack_6e8 = 0xff;
  uStack_270 = 0xff;
  uStack_26c = 0;
  uStack_268 = (undefined4)uStack_6e0;
  uStack_264 = uStack_6e0._4_4_;
  uStack_260 = (undefined1)uStack_6d8;
  puStack_278 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_258,&uStack_6d0);
  uStack_250 = puStack_6c8;
  uStack_248 = puStack_6c0;
  uStack_240 = (undefined4)uStack_6b8;
  uStack_23c = uStack_6b8._4_4_;
  uStack_238 = (undefined4)uStack_6b0;
  uStack_234 = uStack_6b0._4_4_;
  uStack_230 = (undefined4)uStack_6a8;
  uStack_22c = uStack_6a8._4_4_;
  uStack_228 = (undefined4)uStack_6a0;
  uStack_224 = uStack_6a0._4_4_;
  if (uStack_6a0 != (long *)0x0) {
    LOCK();
    uStack_6a0[1] = uStack_6a0[1] + 1;
    UNLOCK();
  }
  uStack_220 = uStack_698;
  if (((ulong)uStack_690 & 1) == 0) {
    uStack_208 = uStack_680;
    uStack_218 = (uint)uStack_690;
    uStack_214 = uStack_690._4_4_;
    uStack_210 = (undefined4)uStack_688;
    uStack_20c = uStack_688._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_218,uStack_680,uStack_688);
  }
  uStack_200 = uStack_678;
  func_0x085a6e20(&uStack_68,&uStack_d8,&puStack_278);
  uStack_4c8 = uStack_38;
  uStack_4d8 = uStack_48;
  uStack_4d4 = uStack_44;
  iStack_4d0 = iStack_40;
  uStack_4cc = uStack_3c;
  uStack_4e8 = uStack_58;
  uStack_4e4 = uStack_54;
  uStack_4e0 = uStack_50;
  uStack_4dc = uStack_4c;
  uStack_4f8 = uStack_68;
  uStack_4f4 = uStack_64;
  uStack_4f0 = uStack_60;
  uStack_4ec = uStack_5c;
  func_0x08646190(&lStack_608,&uStack_4f8,&UNK_013ff66b,0x18,1);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f123db8;
  if (aplStack_5f0[0] != (long *)0x0) {
    lVar9 = *aplStack_5f0[0];
    aplStack_5f0[0] = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = aplStack_5f0[0];
  }
  aplStack_5f0[0] = plVar8;
  auStack_670[0] = uStack_5f8;
  uStack_668 = 0;
  uStack_660 = 0;
  uStack_658 = 1;
  uStack_650 = 0;
  puStack_648 = &UNK_08644010;
  puStack_640 = &SUB_048b06d0;
  puStack_638 = &UNK_0863fc60;
  puStack_630 = &UNK_0864de40;
  puStack_628 = &UNK_0864dfa0;
  uStack_620 = 0;
  uStack_618 = 0;
  plStack_610 = (long *)0x0;
  func_0x048b05a0(uStack_600,auStack_670);
  plVar8 = plStack_610;
  if (plStack_610 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_610 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_610 + 0x10))(plStack_610);
      FUN_0412c2d0(plVar8);
    }
  }
  func_0x086464b0(&lStack_608);
  uVar2 = uStack_4cc;
  iVar5 = iStack_4d0;
  lVar9 = CONCAT44(uStack_4f4,uStack_4f8);
  uStack_178 = CONCAT44(uStack_4ec,uStack_4f0);
  uStack_170 = CONCAT44(uStack_4e4,uStack_4e8);
  uStack_168 = uStack_4e0;
  uStack_164 = uStack_4dc;
  uStack_160 = uStack_4d8;
  uStack_15c = uStack_4d4;
  uVar3 = (undefined1)uStack_4c8;
  func_0x048b0bc0(aplStack_5f0);
  if ((DAT_0f5d86a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d86a0), iVar6 != 0)) {
    func_0x0863de30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d8620,0xf53dab8);
    func_0x0410844d(&DAT_0f5d86a0);
  }
  plVar8 = (long *)(*(long *)(lVar9 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5d8620 + 4)) * 8);
  do {
    lVar11 = *plVar8;
    if (lVar11 == -1) goto LAB_08597a90;
    plVar8 = (long *)(*(long *)(lVar9 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d8620 + 4));
  if (plVar8 == *(long **)(lVar9 + 0x38)) {
LAB_08597a90:
    puVar7 = &DAT_0f5d8620;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
  }
  if ((1 < iVar5 - 1U) &&
     (cVar4 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120e6aa),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar11 = func_0x048b0c90(lVar9 + 0x18,puVar7,uVar2,1);
  if (lVar11 == 0) {
    lStack_608 = 0;
    uStack_600 = 0;
    func_0x048b0d20(&lStack_608);
    lVar11 = lStack_608;
  }
  *(undefined1 *)(*(long *)(lVar11 + 0x58) + 0xa8) = 4;
  uStack_148 = (undefined4)uStack_178;
  uStack_144 = uStack_178._4_4_;
  uStack_140 = (undefined4)uStack_170;
  uStack_13c = uStack_170._4_4_;
  uStack_138 = uStack_168;
  uStack_134 = uStack_164;
  uStack_130 = uStack_160;
  uStack_12c = uStack_15c;
  iStack_128 = iVar5;
  uStack_124 = uVar2;
  uStack_120 = uVar3;
  lStack_150 = lVar9;
  func_0x08646190(&lStack_608,&lStack_150,&UNK_0149bf64,0xf,1);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef46ef8;
  if (aplStack_5f0[0] != (long *)0x0) {
    lVar9 = *aplStack_5f0[0];
    aplStack_5f0[0] = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = aplStack_5f0[0];
  }
  aplStack_5f0[0] = plVar8;
  auStack_670[0] = uStack_5f8;
  uStack_668 = 0;
  uStack_660 = 0;
  uStack_658 = 1;
  uStack_650 = 0;
  puStack_648 = &UNK_04906f70;
  puStack_640 = &SUB_048b06d0;
  puStack_638 = &UNK_04906c50;
  puStack_630 = &UNK_0864e410;
  puStack_628 = &UNK_0864e570;
  uStack_620 = 0;
  uStack_618 = 0;
  plStack_610 = (long *)0x0;
  func_0x048b05a0(uStack_600,auStack_670);
  plVar8 = plStack_610;
  if (plStack_610 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_610 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_610 + 0x10))(plStack_610);
      FUN_0412c2d0(plVar8);
    }
  }
  func_0x086464b0(&lStack_608);
  func_0x048b0bc0(aplStack_5f0);
  puStack_278 = &UNK_0f4e3c70;
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,CONCAT44(uStack_214,uStack_218) & 0xfffffffffffffffe);
  }
  plVar8 = (long *)CONCAT44(uStack_224,uStack_228);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0412c2d0(plVar8);
    }
  }
  FUN_04167a40(auStack_258);
  uStack_6f0 = &UNK_0f4e3c70;
  if (((ulong)uStack_690 & 1) != 0) {
    func_0x0412a280(uStack_680,(ulong)uStack_690 & 0xfffffffffffffffe);
  }
  plVar8 = uStack_6a0;
  if (uStack_6a0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_6a0 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_6a0 + 0x10))(uStack_6a0);
      FUN_0412c2d0(plVar8);
    }
  }
  FUN_04167a40(&uStack_6d0);
  puStack_1f8 = &UNK_0f4e3c70;
  if ((uStack_198 & 1) != 0) {
    func_0x0412a280(uStack_188,CONCAT44(uStack_194,uStack_198) & 0xfffffffffffffffe);
  }
  plVar8 = (long *)CONCAT44(uStack_1a4,uStack_1a8);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0412c2d0(plVar8);
    }
  }
  FUN_04167a40(auStack_1d8);
  uStack_770 = &UNK_0f4e3c70;
  if (((ulong)uStack_710 & 1) != 0) {
    func_0x0412a280(uStack_700,(ulong)uStack_710 & 0xfffffffffffffffe);
  }
  plVar8 = uStack_720;
  if (uStack_720 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_720 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_720 + 0x10))(uStack_720);
      FUN_0412c2d0(plVar8);
    }
  }
  FUN_04167a40(&uStack_750);
  plVar8 = plStack_430;
  puStack_470 = &UNK_0f4e3d70;
  if (plStack_430 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_430 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_430 + 0x10))(plStack_430);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_440;
  if (plStack_440 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_440 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_440 + 0x10))(plStack_440);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_478;
  puStack_4b8 = &UNK_0f4e3d70;
  if (plStack_478 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_478 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_488;
  if (plStack_488 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_488 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_488 + 0x10))(plStack_488);
      FUN_0412c2d0(plVar8);
    }
  }
  return;
}


