/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x78f0560 (ELF vaddr 0x77f0560)
 * Label: caller-of-callee
 * Body:  [[078f0560, 078f0b57] [078f0b60, 078f2bbc]]
 * Ghidra: FUN_078f0560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_078f0560(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined4 auStack_680 [2];
  undefined8 uStack_678;
  undefined4 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined *puStack_658;
  undefined1 *puStack_650;
  undefined1 *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined4 uStack_630;
  undefined8 uStack_628;
  long *plStack_620;
  long lStack_618;
  long lStack_610;
  undefined4 uStack_608;
  long *aplStack_600 [24];
  long lStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined1 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
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
  undefined1 uStack_488;
  long lStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  int iStack_458;
  undefined4 uStack_454;
  undefined1 uStack_450;
  undefined *puStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined1 uStack_430;
  undefined1 auStack_428 [8];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 uStack_400;
  long *plStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  int iStack_3a0;
  undefined4 uStack_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  int iStack_368;
  undefined4 uStack_364;
  char cStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  char cStack_2f0;
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
  char cStack_2b8;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  char cStack_278;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  char cStack_238;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  char cStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  char cStack_1b8;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined1 uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined1 uStack_138;
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
  char cStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  func_0x07be4b40();
  func_0x07bed8a0(param_1);
  func_0x078210b0(param_1);
  func_0x07b8d2b0(param_1);
  func_0x09bf07d0(param_1);
  func_0x0786dc10(param_1);
  if ((DAT_0f5b3450 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b3450), iVar7 != 0)) {
    func_0x0796aac0(0xf5b3438);
    FUN_0410844d(&DAT_0f5b3450);
  }
  uVar3 = _DAT_0f5b3448;
  uVar11 = _DAT_0f5b3440;
  lVar8 = func_0x0796ab30(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar15 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar13 = lVar8 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar8 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0796f090(&lStack_320,param_1,lVar13,uVar14);
  }
  else {
    func_0x0796f090(&lStack_320,param_1,uVar11,uVar3);
  }
  if (cStack_2f0 != '\0') {
    return;
  }
  func_0x0796f9a0(&lStack_618,&lStack_320,&UNK_01499ed9,0x16);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0ef44b00;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_608);
  uStack_530 = 0;
  uStack_528 = (ulong)uStack_528._4_4_ << 0x20;
  uStack_520 = 1;
  uStack_518 = 0;
  puStack_510 = &UNK_0796ff00;
  puStack_508 = &SUB_048b06d0;
  uStack_500 = &SUB_048b2190;
  uStack_4f8 = &UNK_0796ff10;
  puStack_4f0 = &UNK_079700b0;
  uStack_4e8 = (long *)((ulong)uStack_4e8._4_4_ << 0x20);
  uStack_4e0 = 0;
  plStack_4d8 = (long *)0x0;
  func_0x048b05a0(lStack_610,&uStack_538);
  plVar9 = plStack_4d8;
  if (plStack_4d8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4d8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  lStack_540 = lStack_320;
  uStack_e8 = uStack_318;
  uStack_e0 = uStack_310;
  uStack_d8 = uStack_308;
  uStack_d4 = uStack_304;
  uStack_d0 = uStack_300;
  uStack_cc = uStack_2fc;
  func_0x048b0bc0(aplStack_600);
  uStack_518 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4e0 = 0;
  plStack_4d8 = (long *)0x0;
  puStack_4f0 = (undefined *)0x0;
  uStack_4e8 = (long *)0x0;
  uStack_500 = (undefined1 *)0x0;
  uStack_4f8 = (undefined *)0x0;
  puStack_510 = (undefined *)0x0;
  puStack_508 = (undefined1 *)0x0;
  uStack_4c0 = 0;
  uStack_530 = 0xffffffffffffffff;
  uStack_528 = 0;
  uStack_520 = 0xff;
  uStack_538 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_518);
  puStack_510 = (undefined *)func_0x041681f0(&uStack_518,0xf547a30);
  puStack_508 = (undefined1 *)func_0x041681f0(&uStack_518,0xf547770);
  uStack_500 = (undefined1 *)0x0;
  uStack_4f8 = (undefined *)0x0;
  puStack_4f0 = (undefined *)0x0;
  uStack_4e8 = (long *)0x0;
  uStack_4e0 = 0;
  plStack_4d8 = (long *)0x0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_530 = 0x100;
  uStack_440 = 0x100;
  uStack_43c = 0;
  uStack_438 = (undefined4)uStack_528;
  uStack_434 = uStack_528._4_4_;
  uStack_430 = (undefined1)uStack_520;
  puStack_448 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_428,&uStack_518);
  uStack_420 = puStack_510;
  uStack_418 = puStack_508;
  uStack_410 = (undefined4)uStack_500;
  uStack_40c = uStack_500._4_4_;
  uStack_408 = (undefined4)uStack_4f8;
  uStack_404 = uStack_4f8._4_4_;
  uStack_400 = puStack_4f0;
  plStack_3f8 = uStack_4e8;
  if (uStack_4e8 != (long *)0x0) {
    LOCK();
    uStack_4e8[1] = uStack_4e8[1] + 1;
    UNLOCK();
  }
  uStack_3f0 = uStack_4e0;
  if (((ulong)plStack_4d8 & 1) == 0) {
    uStack_3d8 = uStack_4c8;
    uStack_3e8 = (ulong)plStack_4d8;
    uStack_3e0 = uStack_4d0;
  }
  else {
    func_0x0412e5e0(&uStack_3e8,uStack_4c8,uStack_4d0);
  }
  uStack_3d0 = uStack_4c0;
  if (iStack_2f8 == 4) {
    lVar8 = lStack_540 + 0x18;
    uVar11 = func_0x0796ab30(lVar8);
    lVar8 = FUN_048b1040(lVar8,uVar11,uStack_2f4,1);
    if (lVar8 == 0) {
      lStack_618 = 0;
      lStack_610 = 0;
      func_0x048b10d0(&lStack_618);
      lVar13 = *(long *)(lStack_618 + 0x38);
      lVar8 = lStack_618;
      if (lVar13 == 0) goto LAB_078f0b35;
LAB_078f0b51:
      do {
        lVar8 = lVar13;
        lVar13 = *(long *)(lVar8 + 0x38);
        if (*(long *)(lVar8 + 0x38) == 0) {
          lStack_618 = 0;
          lStack_610 = 0;
          func_0x048b10d0(&lStack_618);
          lVar13 = lStack_618;
        }
      } while (lVar13 != 0);
    }
    else {
      lVar13 = *(long *)(lVar8 + 0x38);
      if (*(long *)(lVar8 + 0x38) != 0) goto LAB_078f0b51;
LAB_078f0b35:
      lStack_618 = 0;
      lStack_610 = 0;
      func_0x048b10d0(&lStack_618);
      lVar13 = lStack_618;
      if (lStack_618 != 0) goto LAB_078f0b51;
    }
    lVar8 = *(long *)(lVar8 + 0x48);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if (iStack_2f8 != 1) goto LAB_078f0c5b;
    lVar8 = lStack_540 + 0x18;
    uVar11 = func_0x0796ab30(lVar8);
    lVar8 = func_0x048b0c90(lVar8,uVar11,uStack_2f4,1);
    if (lVar8 == 0) {
      lStack_618 = 0;
      lStack_610 = 0;
      func_0x048b0d20(&lStack_618);
      lVar8 = lStack_618;
    }
    lVar8 = *(long *)(lVar8 + 0x58);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar12 + 3) = uStack_430;
  *(undefined4 *)(puVar12 + 1) = uStack_440;
  *(undefined4 *)((long)puVar12 + 0xc) = uStack_43c;
  *(undefined4 *)(puVar12 + 2) = uStack_438;
  *(undefined4 *)((long)puVar12 + 0x14) = uStack_434;
  *puVar12 = &UNK_0f4e3c70;
  func_0x04167a20(puVar12 + 4,auStack_428);
  puVar12[5] = uStack_420;
  puVar12[6] = uStack_418;
  puVar12[7] = CONCAT44(uStack_40c,uStack_410);
  puVar12[8] = CONCAT44(uStack_404,uStack_408);
  puVar12[9] = uStack_400;
  puVar12[10] = plStack_3f8;
  uStack_400 = 0;
  plStack_3f8 = (long *)0x0;
  puVar12[0xb] = uStack_3f0;
  puVar12[0xe] = uStack_3d8;
  *(undefined4 *)(puVar12 + 0xc) = (undefined4)uStack_3e8;
  *(undefined4 *)((long)puVar12 + 100) = uStack_3e8._4_4_;
  *(undefined4 *)(puVar12 + 0xd) = (undefined4)uStack_3e0;
  *(undefined4 *)((long)puVar12 + 0x6c) = uStack_3e0._4_4_;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  puVar12[0xf] = uStack_3d0;
  plVar9 = *(long **)(lVar8 + 8);
  *(undefined8 **)(lVar8 + 8) = puVar12;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x28))();
  }
LAB_078f0c5b:
  uStack_390 = lStack_540;
  uStack_388 = (undefined4)uStack_e8;
  uStack_384 = uStack_e8._4_4_;
  uStack_380 = (undefined4)uStack_e0;
  uStack_37c = uStack_e0._4_4_;
  uStack_378 = uStack_d8;
  uStack_374 = uStack_d4;
  uStack_370 = uStack_d0;
  uStack_36c = uStack_cc;
  iStack_368 = iStack_2f8;
  uStack_364 = uStack_2f4;
  cStack_360 = cStack_2f0;
  func_0x0796f9a0(&lStack_618,&uStack_390,&UNK_012dbf3a,0x17);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0ef46ef8;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_079523d0;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_04906c50;
  puStack_640 = &UNK_079701b0;
  puStack_638 = &UNK_07970200;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  cStack_2b8 = cStack_360;
  uStack_2c8 = uStack_370;
  uStack_2c4 = uStack_36c;
  iStack_2c0 = iStack_368;
  uStack_2bc = uStack_364;
  uStack_2d8 = uStack_380;
  uStack_2d4 = uStack_37c;
  uStack_2d0 = uStack_378;
  uStack_2cc = uStack_374;
  uStack_2e8 = (undefined4)uStack_390;
  uStack_2e4 = uStack_390._4_4_;
  uStack_2e0 = uStack_388;
  uStack_2dc = uStack_384;
  func_0x048b0bc0(aplStack_600);
  func_0x0796f9a0(&lStack_618,&uStack_2e8,&UNK_013b0f69,0x15);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0ef46ef8;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_079523d0;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_04906c50;
  puStack_640 = &UNK_07970550;
  puStack_638 = &UNK_079705a0;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  cStack_278 = cStack_2b8;
  uStack_288 = uStack_2c8;
  uStack_284 = uStack_2c4;
  iStack_280 = iStack_2c0;
  uStack_27c = uStack_2bc;
  uStack_298 = uStack_2d8;
  uStack_294 = uStack_2d4;
  uStack_290 = uStack_2d0;
  uStack_28c = uStack_2cc;
  uStack_2a8 = uStack_2e8;
  uStack_2a4 = uStack_2e4;
  uStack_2a0 = uStack_2e0;
  uStack_29c = uStack_2dc;
  func_0x048b0bc0(aplStack_600);
  func_0x0796f9a0(&lStack_618,&uStack_2a8,&UNK_01431413,0x37);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0ef46ef8;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_079523d0;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_04906c50;
  puStack_640 = &UNK_079705d0;
  puStack_638 = &UNK_07970620;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  cStack_238 = cStack_278;
  uStack_248 = uStack_288;
  uStack_244 = uStack_284;
  iStack_240 = iStack_280;
  uStack_23c = uStack_27c;
  uStack_258 = uStack_298;
  uStack_254 = uStack_294;
  uStack_250 = uStack_290;
  uStack_24c = uStack_28c;
  uStack_268 = uStack_2a8;
  uStack_264 = uStack_2a4;
  uStack_260 = uStack_2a0;
  uStack_25c = uStack_29c;
  func_0x048b0bc0(aplStack_600);
  func_0x0796f9a0(&lStack_618,&uStack_268,&UNK_0132a432,0xe);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f011f18;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_07970660;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_05f23890;
  puStack_640 = &UNK_07970670;
  puStack_638 = &UNK_079706c0;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  cStack_1f8 = cStack_238;
  uStack_208 = uStack_248;
  uStack_204 = uStack_244;
  iStack_200 = iStack_240;
  uStack_1fc = uStack_23c;
  uStack_218 = uStack_258;
  uStack_214 = uStack_254;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  uStack_228 = uStack_268;
  uStack_224 = uStack_264;
  uStack_220 = uStack_260;
  uStack_21c = uStack_25c;
  func_0x048b0bc0(aplStack_600);
  func_0x0796f9a0(&lStack_618,&uStack_228,&UNK_0120c8b5,0x10);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f011f18;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_07970660;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_05f23890;
  puStack_640 = &UNK_079709d0;
  puStack_638 = &UNK_07970a20;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  cStack_1b8 = cStack_1f8;
  uStack_1c8 = uStack_208;
  uStack_1c4 = uStack_204;
  iStack_1c0 = iStack_200;
  uStack_1bc = uStack_1fc;
  uStack_1d8 = uStack_218;
  uStack_1d4 = uStack_214;
  uStack_1d0 = uStack_210;
  uStack_1cc = uStack_20c;
  uStack_1e8 = uStack_228;
  uStack_1e4 = uStack_224;
  uStack_1e0 = uStack_220;
  uStack_1dc = uStack_21c;
  func_0x048b0bc0(aplStack_600);
  func_0x0796f9a0(&lStack_618,&uStack_1e8,&UNK_0136129b,0x10);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0e95d0;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_07970b30;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_077e7b00;
  puStack_640 = &UNK_07970b40;
  puStack_638 = &UNK_07970ca0;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  cStack_f8 = cStack_1b8;
  uStack_108 = uStack_1c8;
  uStack_104 = uStack_1c4;
  iStack_100 = iStack_1c0;
  uStack_fc = uStack_1bc;
  uStack_118 = uStack_1d8;
  uStack_114 = uStack_1d4;
  uStack_110 = uStack_1d0;
  uStack_10c = uStack_1cc;
  uStack_128 = uStack_1e8;
  uStack_124 = uStack_1e4;
  uStack_120 = uStack_1e0;
  uStack_11c = uStack_1dc;
  func_0x048b0bc0(aplStack_600);
  uStack_3c8 = uStack_128;
  uStack_3c4 = uStack_124;
  uStack_3c0 = uStack_120;
  uStack_3bc = uStack_11c;
  uStack_3b8 = uStack_118;
  uStack_3b4 = uStack_114;
  uStack_3b0 = uStack_110;
  uStack_3ac = uStack_10c;
  uStack_3a8 = uStack_108;
  uStack_3a4 = uStack_104;
  iStack_3a0 = iStack_100;
  uStack_39c = uStack_fc;
  uStack_398 = CONCAT71(uStack_f7,cStack_f8);
  func_0x0796f9a0(&lStack_618,&uStack_3c8,&UNK_0128f37c,8);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f011988;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_07970da0;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_05dcd5a0;
  puStack_640 = &UNK_07970db0;
  puStack_638 = &UNK_07970f10;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  uVar4 = uStack_39c;
  iVar7 = iStack_3a0;
  lVar13 = CONCAT44(uStack_3c4,uStack_3c8);
  uStack_c8 = CONCAT44(uStack_3bc,uStack_3c0);
  uStack_c0 = CONCAT44(uStack_3b4,uStack_3b8);
  uStack_b8 = uStack_3b0;
  uStack_b4 = uStack_3ac;
  uStack_b0 = uStack_3a8;
  uStack_ac = uStack_3a4;
  uVar5 = (undefined1)uStack_398;
  func_0x048b0bc0(aplStack_600);
  lVar8 = lVar13 + 0x18;
  uVar11 = func_0x0796ab30(lVar8);
  if ((1 < iVar7 - 1U) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0136167d),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar8 = func_0x048b0c90(lVar8,uVar11,uVar4,1);
  if (lVar8 == 0) {
    lStack_618 = 0;
    lStack_610 = 0;
    func_0x048b0d20(&lStack_618);
    lVar8 = lStack_618;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0x58) + 0xa8) = 4;
  uStack_4b0 = (undefined4)uStack_c8;
  uStack_4ac = uStack_c8._4_4_;
  uStack_4a8 = (undefined4)uStack_c0;
  uStack_4a4 = uStack_c0._4_4_;
  uStack_4a0 = uStack_b8;
  uStack_49c = uStack_b4;
  uStack_498 = uStack_b0;
  uStack_494 = uStack_ac;
  iStack_490 = iVar7;
  uStack_48c = uVar4;
  uStack_488 = uVar5;
  lStack_4b8 = lVar13;
  func_0x0796f9a0(&lStack_618,&lStack_4b8,&UNK_0125c4ee,6);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0119f8;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_07971020;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_05dd1a00;
  puStack_640 = &UNK_07971030;
  puStack_638 = &UNK_07971190;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  uVar5 = uStack_488;
  uVar4 = uStack_48c;
  iVar7 = iStack_490;
  lVar13 = lStack_4b8;
  uStack_a8 = uStack_4b0;
  uStack_a4 = uStack_4ac;
  uStack_a0 = uStack_4a8;
  uStack_9c = uStack_4a4;
  uStack_98 = uStack_4a0;
  uStack_94 = uStack_49c;
  uStack_90 = uStack_498;
  uStack_8c = uStack_494;
  func_0x048b0bc0(aplStack_600);
  lVar8 = lVar13 + 0x18;
  uVar11 = func_0x0796ab30(lVar8);
  if ((1 < iVar7 - 1U) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0136167d),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar8 = func_0x048b0c90(lVar8,uVar11,uVar4,1);
  if (lVar8 == 0) {
    lStack_618 = 0;
    lStack_610 = 0;
    func_0x048b0d20(&lStack_618);
    lVar8 = lStack_618;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0x58) + 0xa8) = 4;
  lStack_480 = lVar13;
  uStack_478 = uStack_a8;
  uStack_474 = uStack_a4;
  uStack_470 = uStack_a0;
  uStack_46c = uStack_9c;
  uStack_468 = uStack_98;
  uStack_464 = uStack_94;
  uStack_460 = uStack_90;
  uStack_45c = uStack_8c;
  iStack_458 = iVar7;
  uStack_454 = uVar4;
  uStack_450 = uVar5;
  func_0x0796f9a0(&lStack_618,&lStack_480,&UNK_01227875,0xe);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0ea688;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_079712a0;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_078b68c0;
  puStack_640 = &UNK_079712b0;
  puStack_638 = &UNK_07971410;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  uVar5 = uStack_450;
  uVar4 = uStack_454;
  iVar7 = iStack_458;
  lVar13 = lStack_480;
  uStack_88 = uStack_478;
  uStack_84 = uStack_474;
  uStack_80 = uStack_470;
  uStack_7c = uStack_46c;
  uStack_78 = uStack_468;
  uStack_74 = uStack_464;
  uStack_70 = uStack_460;
  uStack_6c = uStack_45c;
  func_0x048b0bc0(aplStack_600);
  lVar8 = lVar13 + 0x18;
  uVar11 = func_0x0796ab30(lVar8);
  if ((1 < iVar7 - 1U) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0136167d),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar8 = func_0x048b0c90(lVar8,uVar11,uVar4,1);
  if (lVar8 == 0) {
    lStack_618 = 0;
    lStack_610 = 0;
    func_0x048b0d20(&lStack_618);
    lVar8 = lStack_618;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0x58) + 0xa8) = 4;
  uStack_358 = lVar13;
  uStack_350 = uStack_88;
  uStack_34c = uStack_84;
  uStack_348 = uStack_80;
  uStack_344 = uStack_7c;
  uStack_340 = uStack_78;
  uStack_33c = uStack_74;
  uStack_338 = uStack_70;
  uStack_334 = uStack_6c;
  iStack_330 = iVar7;
  uStack_32c = uVar4;
  uStack_328 = uVar5;
  func_0x0796f9a0(&lStack_618,&uStack_358,&UNK_0137af86,0x11);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0126a0;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_079717a0;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &UNK_05daea90;
  puStack_640 = &UNK_079717b0;
  puStack_638 = &UNK_07971800;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  uStack_178 = uStack_328;
  uStack_188 = uStack_338;
  uStack_184 = uStack_334;
  iStack_180 = iStack_330;
  uStack_17c = uStack_32c;
  uStack_198 = uStack_348;
  uStack_194 = uStack_344;
  uStack_190 = uStack_340;
  uStack_18c = uStack_33c;
  uStack_1a8 = (undefined4)uStack_358;
  uStack_1a4 = uStack_358._4_4_;
  uStack_1a0 = uStack_350;
  uStack_19c = uStack_34c;
  func_0x048b0bc0(aplStack_600);
  func_0x0796f9a0(&lStack_618,&uStack_1a8,&UNK_01227884,0xf);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0126a0;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_079717a0;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &UNK_05daea90;
  puStack_640 = &UNK_07971b50;
  puStack_638 = &UNK_07971ba0;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  uStack_138 = uStack_178;
  uStack_148 = uStack_188;
  uStack_144 = uStack_184;
  iStack_140 = iStack_180;
  uStack_13c = uStack_17c;
  uStack_158 = uStack_198;
  uStack_154 = uStack_194;
  uStack_150 = uStack_190;
  uStack_14c = uStack_18c;
  uStack_168 = uStack_1a8;
  uStack_164 = uStack_1a4;
  uStack_160 = uStack_1a0;
  uStack_15c = uStack_19c;
  func_0x048b0bc0(aplStack_600);
  func_0x0796f9a0(&lStack_618,&uStack_168,&UNK_014cdd79,0xe);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f012080;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_077d4a20;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &UNK_05dd3990;
  puStack_640 = &UNK_07971bf0;
  puStack_638 = &UNK_07971d50;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  uStack_38 = uStack_138;
  uStack_48 = uStack_148;
  uStack_44 = uStack_144;
  iStack_40 = iStack_140;
  uStack_3c = uStack_13c;
  uStack_58 = uStack_158;
  uStack_54 = uStack_154;
  uStack_50 = uStack_150;
  uStack_4c = uStack_14c;
  uStack_68 = uStack_168;
  uStack_64 = uStack_164;
  uStack_60 = uStack_160;
  uStack_5c = uStack_15c;
  func_0x048b0bc0(aplStack_600);
  func_0x0796f9a0(&lStack_618,&uStack_68,&UNK_0130f1da,0xe);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0124a8;
  if (aplStack_600[0] != (long *)0x0) {
    lVar8 = *aplStack_600[0];
    aplStack_600[0] = plVar9;
    (**(code **)(lVar8 + 8))();
    plVar9 = aplStack_600[0];
  }
  aplStack_600[0] = plVar9;
  auStack_680[0] = uStack_608;
  uStack_678 = 0;
  uStack_670 = 0;
  uStack_668 = 1;
  uStack_660 = 0;
  puStack_658 = &UNK_07971e60;
  puStack_650 = &SUB_048b06d0;
  puStack_648 = &SUB_05da26d0;
  puStack_640 = &UNK_07971e70;
  puStack_638 = &UNK_07971fd0;
  uStack_630 = 0;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  func_0x048b05a0(lStack_610,auStack_680);
  plVar9 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_620 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      func_0x0412c2d0(plVar9);
    }
  }
  iVar7 = *(int *)(lStack_610 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != *(long *)(lStack_610 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar10 = *(int **)(*(long *)(*(long *)(lStack_610 + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(lStack_610 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_610 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0796fc00(&lStack_618);
  func_0x048b0bc0(aplStack_600);
  puStack_448 = &UNK_0f4e3c70;
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  plVar9 = plStack_3f8;
  if (plStack_3f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3f8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
      func_0x0412c2d0(plVar9);
    }
  }
  func_0x04167a40(auStack_428);
  uStack_538 = &UNK_0f4e3c70;
  if (((ulong)plStack_4d8 & 1) != 0) {
    func_0x0412a280(uStack_4c8,(ulong)plStack_4d8 & 0xfffffffffffffffe);
  }
  plVar9 = uStack_4e8;
  if (uStack_4e8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_4e8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_4e8 + 0x10))(uStack_4e8);
      func_0x0412c2d0(plVar9);
    }
  }
  func_0x04167a40(&uStack_518);
  return;
}


