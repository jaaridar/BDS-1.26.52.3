/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6c8ad0 (ELF vaddr 0xe5c8ad0)
 * Label: caller-of-callee
 * Body:  [[0e6c8ad0, 0e6ca1f5] [0e6ca200, 0e6caa31] [0e6caa40, 0e6cabea] [0e6cabf0, 0e6cb7f5]]
 * Ghidra: FUN_0e6c8ad0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6c8ad0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  bool bVar18;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  undefined *puStack_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined1 uStack_598;
  undefined2 uStack_597;
  undefined1 uStack_595;
  undefined4 uStack_594;
  long lStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long *plStack_578;
  long lStack_570;
  long lStack_568;
  undefined4 uStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  undefined2 uStack_528;
  undefined2 uStack_526;
  uint uStack_524;
  uint uStack_520;
  undefined1 uStack_51c;
  undefined8 uStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  long *plStack_4b8;
  undefined8 uStack_4b0;
  long *plStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 uStack_450;
  long *plStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f0;
  long *plStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined *puStack_3a8;
  long *plStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined1 *puStack_318;
  undefined1 *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined4 uStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
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
  undefined4 uStack_22c;
  char cStack_228;
  long lStack_220;
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
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
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
  undefined4 uStack_16c;
  char cStack_168;
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
  undefined4 uStack_12c;
  undefined1 uStack_128;
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
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  undefined1 uStack_b0;
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
  int iStack_80;
  undefined4 uStack_7c;
  char cStack_78;
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
  
  func_0x0d8a0ff0();
  func_0x0e6cbb40(param_1);
  if ((DAT_0f75dad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75dad8), iVar6 != 0)) {
    func_0x0e6e01f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75da58,0xf53dab8);
    func_0x0410844d(&DAT_0f75dad8);
  }
  lStack_220 = param_1 + 0x18;
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f75da58 + 4)) * 8);
  do {
    lVar9 = *plVar8;
    if (lVar9 == -1) goto LAB_0e6c8b60;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f75da58 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0e6c8b60:
    puVar7 = &DAT_0f75da58;
    if (iRam000000000f75dab8 != -0x2b3da790) goto LAB_0e6c8bcd;
LAB_0e6c8b8b:
    lVar9 = *(long *)(puVar7 + 0x68);
    if (lVar9 == 0) goto LAB_0e6c8bcd;
    bVar18 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar16 = lVar9 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e6e8fc0(&uStack_258,param_1,lVar16,uVar15);
    uStack_190 = uStack_250;
    uStack_18c = uStack_24c;
    uStack_180 = uStack_240;
    uStack_17c = uStack_23c;
    uStack_178 = uStack_238;
    uStack_174 = uStack_234;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e6c8b8b;
LAB_0e6c8bcd:
    func_0x0e6e8fc0(&uStack_258,param_1,&UNK_0133bd10,8);
    uStack_190 = uStack_250;
    uStack_18c = uStack_24c;
    uStack_180 = uStack_240;
    uStack_17c = uStack_23c;
    uStack_178 = uStack_238;
    uStack_174 = uStack_234;
  }
  if (cStack_228 == '\0') {
    uStack_4c8._4_4_ = (uint)((ulong)uStack_4c8 >> 0x20);
    uStack_508._4_4_ = (uint)((ulong)uStack_508 >> 0x20);
    uStack_518._4_4_ = (undefined4)((ulong)uStack_518 >> 0x20);
    uStack_198 = uStack_258;
    uStack_194 = uStack_254;
    uStack_188 = uStack_248;
    uStack_184 = uStack_244;
    iStack_170 = iStack_230;
    uStack_16c = uStack_22c;
    cStack_168 = cStack_228;
    func_0x0e6e9b60(&uStack_5e8,&uStack_198,&UNK_01410416,4,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012348;
    if (uStack_5d0 != (long *)0x0) {
      lVar9 = *uStack_5d0;
      uStack_5d0 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = uStack_5d0;
    }
    uStack_5d0 = plVar8;
    uStack_518 = (long *)CONCAT44(uStack_518._4_4_,(undefined4)uStack_5d8);
    plStack_510 = (long *)0x0;
    uStack_508 = (long *)((ulong)uStack_508._4_4_ << 0x20);
    puStack_500 = (undefined *)0x1;
    puStack_4f8 = (undefined *)0x0;
    uStack_4f0 = (long *)&UNK_05ea71a0;
    uStack_4e8 = (long *)&SUB_048b06d0;
    puStack_4e0 = &SUB_05e9fca0;
    uStack_4d8 = &UNK_0e6ea110;
    uStack_4d0 = &UNK_0e6ea320;
    uStack_4c8 = (long *)((ulong)uStack_4c8._4_4_ << 0x20);
    lStack_4c0 = 0;
    plStack_4b8 = (long *)0x0;
    func_0x048b05a0(uStack_5e0,&uStack_518);
    plVar8 = plStack_4b8;
    if (plStack_4b8 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_4b8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0e6e9e10(&uStack_5e8);
    cStack_78 = cStack_168;
    uStack_88 = uStack_178;
    uStack_84 = uStack_174;
    iStack_80 = iStack_170;
    uStack_7c = uStack_16c;
    uStack_98 = uStack_188;
    uStack_94 = uStack_184;
    uStack_90 = uStack_180;
    uStack_8c = uStack_17c;
    uStack_a8 = uStack_198;
    uStack_a4 = uStack_194;
    uStack_a0 = uStack_190;
    uStack_9c = uStack_18c;
    FUN_048b0bc0(&uStack_5d0);
    func_0x0e6cff00(&uStack_118,&uStack_a8);
    uStack_2b8 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    plStack_288 = (long *)0x0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    puStack_2b0 = (undefined *)0x0;
    plStack_2a8 = (long *)0x0;
    uStack_260 = 0;
    plStack_2d0 = (long *)0xffffffffffffffff;
    uStack_2c8 = 0;
    uStack_2c0._0_1_ = 0xff;
    uStack_2c0._1_7_ = 0;
    uStack_2d8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_2b8);
    puStack_2b0 = (undefined *)func_0x041681f0(&uStack_2b8,0xf547a30);
    plStack_2a8 = (long *)func_0x041681f0(&uStack_2b8,0xf547770);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    plStack_288 = (long *)0x0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 1;
    uStack_2c0 = CONCAT71(uStack_2c0._1_7_,4);
    uStack_470 = plStack_2d0;
    uStack_468 = (undefined4)uStack_2c8;
    uStack_464 = uStack_2c8._4_4_;
    uStack_460 = CONCAT31(uStack_460._1_3_,4);
    uStack_478 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_458,&uStack_2b8);
    uStack_450 = (long *)puStack_2b0;
    plStack_448 = plStack_2a8;
    uStack_440 = (undefined4)uStack_2a0;
    uStack_43c = uStack_2a0._4_4_;
    uStack_438 = (undefined4)uStack_298;
    uStack_434 = uStack_298._4_4_;
    uStack_430 = uStack_290;
    plStack_428 = plStack_288;
    if (plStack_288 != (long *)0x0) {
      LOCK();
      plStack_288[1] = plStack_288[1] + 1;
      UNLOCK();
    }
    uStack_420 = uStack_280;
    lStack_350 = param_1;
    if ((uStack_278 & 1) == 0) {
      uStack_408 = uStack_268;
      uStack_418 = uStack_278;
      uStack_410 = uStack_270;
    }
    else {
      FUN_0412e5e0(&uStack_418,uStack_268,uStack_270);
    }
    uStack_400 = uStack_260;
    plStack_3e8 = (long *)0xffffffffffffffff;
    uStack_3e0 = (long *)0x0;
    uStack_3d8._0_1_ = 0xff;
    puStack_3f0 = &UNK_0f48a648;
    uStack_3c8 = uStack_470;
    uStack_3c0 = (long *)CONCAT44(uStack_464,uStack_468);
    uStack_3b8 = CONCAT71(uStack_3b8._1_7_,(undefined1)uStack_460);
    uStack_3d0 = &UNK_0f4e3c70;
    func_0x04167a20(&plStack_3b0,&uStack_458);
    puStack_3a8 = (undefined *)uStack_450;
    plStack_3a0 = plStack_448;
    lStack_398 = CONCAT44(uStack_43c,uStack_440);
    plStack_390 = (long *)CONCAT44(uStack_434,uStack_438);
    uStack_388 = uStack_430;
    plStack_380 = plStack_428;
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    uStack_378 = uStack_420;
    uStack_360 = uStack_408;
    uStack_370 = uStack_418;
    uStack_368 = uStack_410;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_358 = uStack_400;
    uStack_3d8 = CONCAT71(uStack_3d8._1_7_,4);
    plStack_510 = plStack_3e8;
    uStack_508 = uStack_3e0;
    puStack_500 = (undefined *)CONCAT71(puStack_500._1_7_,4);
    uStack_518 = (long *)&UNK_0f48a648;
    uStack_4f0 = uStack_3c8;
    uStack_4e8 = uStack_3c0;
    puStack_4e0 = (undefined *)CONCAT71(puStack_4e0._1_7_,(undefined1)uStack_3b8);
    puStack_4f8 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_4d8,&plStack_3b0);
    uStack_4d0 = puStack_3a8;
    uStack_4c8 = plStack_3a0;
    lStack_4c0 = lStack_398;
    plStack_4b8 = plStack_390;
    uStack_4b0 = uStack_388;
    plStack_4a8 = plStack_380;
    if (plStack_380 != (long *)0x0) {
      LOCK();
      plStack_380[1] = plStack_380[1] + 1;
      UNLOCK();
    }
    uStack_4a0 = uStack_378;
    if ((uStack_370 & 1) == 0) {
      uStack_488 = uStack_360;
      uStack_498 = uStack_370;
      uStack_490 = uStack_368;
    }
    else {
      FUN_0412e5e0(&uStack_498,uStack_360,uStack_368);
    }
    param_1 = lStack_350;
    uStack_480 = uStack_358;
    if (iStack_f0 == 4) {
      lVar9 = func_0x0e6ea640(&uStack_118);
      lVar9 = *(long *)(lVar9 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xa0,0);
      }
LAB_0e6c9231:
      *(undefined1 *)(puVar10 + 3) = puStack_500._0_1_;
      puVar10[1] = plStack_510;
      puVar10[2] = uStack_508;
      *puVar10 = &UNK_0f48a648;
      *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_4f0;
      *(undefined4 *)((long)puVar10 + 0x2c) = uStack_4f0._4_4_;
      *(undefined4 *)(puVar10 + 6) = (undefined4)uStack_4e8;
      *(undefined4 *)((long)puVar10 + 0x34) = uStack_4e8._4_4_;
      *(undefined1 *)(puVar10 + 7) = puStack_4e0._0_1_;
      puVar10[4] = &UNK_0f4e3c70;
      func_0x04167a20(puVar10 + 8,&uStack_4d8);
      puVar10[9] = uStack_4d0;
      puVar10[10] = uStack_4c8;
      puVar10[0xb] = lStack_4c0;
      puVar10[0xc] = plStack_4b8;
      puVar10[0xd] = uStack_4b0;
      puVar10[0xe] = plStack_4a8;
      uStack_4b0 = 0;
      plStack_4a8 = (long *)0x0;
      puVar10[0xf] = uStack_4a0;
      puVar10[0x12] = uStack_488;
      *(undefined4 *)(puVar10 + 0x10) = (undefined4)uStack_498;
      *(undefined4 *)((long)puVar10 + 0x84) = uStack_498._4_4_;
      *(undefined4 *)(puVar10 + 0x11) = (undefined4)uStack_490;
      *(undefined4 *)((long)puVar10 + 0x8c) = uStack_490._4_4_;
      uStack_498 = 0;
      uStack_490 = 0;
      uStack_488 = 0;
      puVar10[0x13] = uStack_480;
      plVar8 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x28))();
      }
    }
    else if (iStack_f0 == 1) {
      lVar9 = func_0x0e6ea4f0(&uStack_118);
      lVar9 = *(long *)(lVar9 + 0x58);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xa0,0);
      }
      goto LAB_0e6c9231;
    }
    uStack_128 = uStack_e8;
    uStack_138 = uStack_f8;
    uStack_134 = uStack_f4;
    iStack_130 = iStack_f0;
    uStack_12c = uStack_ec;
    uStack_148 = uStack_108;
    uStack_144 = uStack_104;
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    uStack_158 = uStack_118;
    uStack_154 = uStack_114;
    uStack_150 = uStack_110;
    uStack_14c = uStack_10c;
    func_0x0e6e9b60(&uStack_5e8,&uStack_158,&UNK_0142a5c6,4,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f4c7528;
    if (uStack_5d0 != (long *)0x0) {
      lVar9 = *uStack_5d0;
      uStack_5d0 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = uStack_5d0;
    }
    uStack_5d0 = plVar8;
    uStack_348 = (undefined4)uStack_5d8;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 1;
    uStack_328 = 0;
    puStack_320 = &UNK_0e6eddd0;
    puStack_318 = &SUB_048b06d0;
    puStack_310 = &UNK_0e6ed800;
    puStack_308 = &UNK_0e6ede90;
    puStack_300 = &UNK_0e6edff0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    plStack_2e8 = (long *)0x0;
    func_0x048b05a0(uStack_5e0,&uStack_348);
    plVar8 = plStack_2e8;
    if (plStack_2e8 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_2e8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0e6e9e10(&uStack_5e8);
    uStack_38 = uStack_128;
    uStack_48 = uStack_138;
    uStack_44 = uStack_134;
    iStack_40 = iStack_130;
    uStack_3c = uStack_12c;
    uStack_58 = uStack_148;
    uStack_54 = uStack_144;
    uStack_50 = uStack_140;
    uStack_4c = uStack_13c;
    uStack_68 = uStack_158;
    uStack_64 = uStack_154;
    uStack_60 = uStack_150;
    uStack_5c = uStack_14c;
    FUN_048b0bc0(&uStack_5d0);
    func_0x0e6cff00(&uStack_e0,&uStack_68);
    func_0x0e6e95b0(&uStack_5e8,CONCAT44(uStack_dc,uStack_e0) + 0x18);
    if (uStack_5d0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_5d8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_5d0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar8 = *(long **)(piVar11 + 0xc);
      while (plVar8 != uStack_5e0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar8 = *(long **)(piVar11 + 0xc);
      }
LAB_0e6c954f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_5d0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_5d8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_5d0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e6c954f;
      }
      if (uStack_5d0._4_4_ == 0) {
        *(uint *)(uStack_5d8 + 3) = *(uint *)(uStack_5d8 + 3) | 0x40000;
      }
    }
    func_0x0e6e9b60(&uStack_5e8,&uStack_e0,&UNK_0133bd19,8,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (uStack_5d0 != (long *)0x0) {
      lVar9 = *uStack_5d0;
      uStack_5d0 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = uStack_5d0;
    }
    uStack_5d0 = plVar8;
    uStack_348 = (undefined4)uStack_5d8;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 1;
    uStack_328 = 0;
    puStack_320 = &UNK_04906f70;
    puStack_318 = &SUB_048b06d0;
    puStack_310 = &SUB_04906c50;
    puStack_308 = &UNK_0e6ee460;
    puStack_300 = &UNK_0e6ee5c0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    plStack_2e8 = (long *)0x0;
    func_0x048b05a0(uStack_5e0,&uStack_348);
    plVar8 = plStack_2e8;
    if (plStack_2e8 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_2e8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0e6e9e10(&uStack_5e8);
    uStack_1e8 = uStack_b0;
    uStack_1f8 = uStack_c0;
    uStack_1f4 = uStack_bc;
    uStack_1f0 = uStack_b8;
    uStack_1ec = uStack_b4;
    uStack_208 = uStack_d0;
    uStack_204 = uStack_cc;
    uStack_200 = uStack_c8;
    uStack_1fc = uStack_c4;
    uStack_218 = uStack_e0;
    uStack_214 = uStack_dc;
    uStack_210 = uStack_d8;
    uStack_20c = uStack_d4;
    FUN_048b0bc0(&uStack_5d0);
    func_0x0e6cff00(&uStack_5e8,&uStack_218);
    uStack_518 = (long *)&UNK_0f48a648;
    puStack_4f8 = &UNK_0f4e3c70;
    if ((uStack_498 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_488,uStack_498 & 0xfffffffffffffffe);
    }
    plVar8 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_4a8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x04167a40(&uStack_4d8);
    puStack_3f0 = &UNK_0f48a648;
    uStack_3d0 = &UNK_0f4e3c70;
    if ((uStack_370 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_360,uStack_370 & 0xfffffffffffffffe);
    }
    plVar8 = plStack_380;
    if (plStack_380 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_380 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_380 + 0x10))(plStack_380);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x04167a40(&plStack_3b0);
    uStack_478 = &UNK_0f4e3c70;
    if ((uStack_418 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_408,uStack_418 & 0xfffffffffffffffe);
    }
    plVar8 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_428 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x04167a40(&uStack_458);
    uStack_2d8 = &UNK_0f4e3c70;
    if ((uStack_278 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_268,uStack_278 & 0xfffffffffffffffe);
    }
    plVar8 = plStack_288;
    if (plStack_288 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_288 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_288 + 0x10))(plStack_288);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x04167a40(&uStack_2b8);
  }
  if ((DAT_0f75df58 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75df58), iVar6 != 0)) {
    func_0x0e6e4d50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ded8,0xf53dab8);
    func_0x0410844d(&DAT_0f75df58);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f75ded8 + 4)) * 8);
  do {
    lVar9 = *plVar8;
    if (lVar9 == -1) goto LAB_0e6c9900;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f75ded8 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0e6c9900:
    puVar7 = &DAT_0f75ded8;
    if (_DAT_0f75df38 != -0x2b3da790) goto LAB_0e6c996d;
LAB_0e6c992b:
    lVar9 = *(long *)(puVar7 + 0x68);
    if (lVar9 == 0) goto LAB_0e6c996d;
    bVar18 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar16 = lVar9 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e6e5400(&puStack_3f0,param_1,lVar16,uVar15);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e6c992b;
LAB_0e6c996d:
    func_0x0e6e5400(&puStack_3f0,param_1,&UNK_014dd69d,0x11);
  }
  if ((char)uStack_3c0 == '\0') {
    uStack_5d8._4_4_ = (uint)((ulong)uStack_5d8 >> 0x20);
    uStack_5e8._4_4_ = (undefined4)((ulong)uStack_5e8 >> 0x20);
    uStack_3c8 = (long *)0x1e1bc4d500000004;
    if ((DAT_0f75df78 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75df78), iVar6 != 0)) {
      func_0x0e6e4e80();
      func_0x0410844d(&DAT_0f75df78);
    }
    uStack_5e8 = (undefined *)CONCAT44(uStack_5e8._4_4_,uStack_3c8._4_4_);
    uStack_5e0 = (long *)0x0;
    uStack_5d8 = (long *)((ulong)uStack_5d8._4_4_ << 0x20);
    uStack_5d0 = (long *)0x2;
    puStack_5c8 = &SUB_048aead0;
    plStack_5c0 = (long *)&UNK_0d89b2d0;
    plStack_5b8 = (long *)&UNK_0e6e5f80;
    puStack_5b0 = (undefined *)0x0;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_59c = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_595 = 0;
    uStack_594 = 0;
    func_0x049057f0(&plStack_3e8,&uStack_5e8);
    func_0x048aea50(&uStack_5e8);
    uStack_508 = (long *)uStack_3d8;
    puStack_500 = uStack_3d0;
    uStack_518 = plStack_3e8;
    plStack_510 = uStack_3e0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    uStack_5e8 = (undefined *)CONCAT44(uStack_5e8._4_4_,_DAT_0f551bb4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c48;
    uStack_5e0 = plVar8 + 3;
    plVar8[3] = (long)puVar10;
    plVar8[4] = 0;
    *(undefined1 *)(plVar8 + 5) = 0xff;
    uStack_478 = (undefined *)0x0;
    uStack_470 = (long *)0x0;
    uStack_5d8 = plVar8;
    func_0x048afd20(&uStack_518,&uStack_5e8);
    plVar8 = uStack_5d8;
    if (uStack_5d8 != (long *)0x0) {
      LOCK();
      plVar12 = uStack_5d8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_5d8 + 0x10))(uStack_5d8);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = uStack_470;
    if (uStack_470 != (long *)0x0) {
      LOCK();
      plVar12 = uStack_470 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_470 + 0x10))(uStack_470);
        func_0x0412c2d0(plVar8);
      }
    }
    if ((DAT_0f75df78 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75df78), iVar6 != 0)) {
      func_0x0e6e4e80();
      func_0x0410844d(&DAT_0f75df78);
    }
    if (uStack_3d0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(uStack_3d8 + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_3d0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar8 = *(long **)(piVar11 + 0xc);
      while (plVar8 != uStack_3e0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar8 = *(long **)(piVar11 + 0xc);
      }
LAB_0e6c9c1f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
    }
    else {
      if (uStack_3d0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(uStack_3d8 + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_3d0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e6c9c1f;
      }
      if (uStack_3d0._4_4_ == 0) {
        *(uint *)(uStack_3d8 + 0x18) = *(uint *)(uStack_3d8 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f75df78 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75df78), iVar6 != 0)) {
      func_0x0e6e4e80();
      func_0x0410844d(&DAT_0f75df78);
    }
    uStack_5e8 = (undefined *)CONCAT44(uStack_5e8._4_4_,0xbf75c8f8);
    uStack_5e0 = (long *)0x0;
    uStack_5d8 = (long *)CONCAT44(uStack_5d8._4_4_,1);
    uStack_5d0 = (long *)0x0;
    puStack_5c8 = &SUB_048b2190;
    plStack_5c0 = (long *)&SUB_048b06d0;
    plStack_5b8 = (long *)&UNK_0e6e6640;
    puStack_5b0 = (undefined *)0x0;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_59c = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_595 = 0;
    uStack_594 = 0;
    func_0x049057f0(&plStack_3e8,&uStack_5e8);
    func_0x048aea50(&uStack_5e8);
    uStack_508 = (long *)uStack_3d8;
    puStack_500 = uStack_3d0;
    uStack_518 = plStack_3e8;
    plStack_510 = uStack_3e0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    uStack_5e8 = (undefined *)CONCAT44(uStack_5e8._4_4_,_DAT_0f551c9c);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c98;
    uStack_5e0 = plVar8 + 3;
    plVar8[3] = (long)puVar10;
    *(undefined1 *)(plVar8 + 4) = 0xff;
    uStack_478 = (undefined *)0x0;
    uStack_470 = (long *)0x0;
    uStack_5d8 = plVar8;
    func_0x048afd20(&uStack_518,&uStack_5e8);
    plVar8 = uStack_5d8;
    if (uStack_5d8 != (long *)0x0) {
      LOCK();
      plVar12 = uStack_5d8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_5d8 + 0x10))(uStack_5d8);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = uStack_470;
    if (uStack_470 != (long *)0x0) {
      LOCK();
      plVar12 = uStack_470 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_470 + 0x10))(uStack_470);
        func_0x0412c2d0(plVar8);
      }
    }
    puVar7 = puStack_3f0;
    iVar6 = (int)uStack_3c8;
    uVar5 = uStack_3c8._4_4_;
    puStack_4f8 = (undefined *)0x0;
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    lStack_4c0 = 0;
    plStack_4b8 = (long *)0x0;
    uStack_4d0 = (undefined *)0x0;
    uStack_4c8 = (long *)0x0;
    puStack_4e0 = (undefined *)0x0;
    uStack_4d8 = (undefined *)0x0;
    uStack_4f0 = (long *)0x0;
    uStack_4e8 = (long *)0x0;
    uStack_4a0 = 0;
    plStack_510 = (long *)0xffffffffffffffff;
    uStack_508 = (long *)0x0;
    puStack_500._0_1_ = 0xff;
    puStack_500._1_7_ = 0;
    uStack_518 = (long *)&UNK_0f4e3c70;
    func_0x041679a0(&puStack_4f8);
    uStack_4f0 = (long *)func_0x041681f0(&puStack_4f8,0xf547a30);
    uStack_4e8 = (long *)func_0x041681f0(&puStack_4f8,0xf547770);
    puStack_4e0 = (undefined *)0x0;
    uStack_4d8 = (undefined *)0x0;
    uStack_4d0 = (undefined *)0x0;
    uStack_4c8 = (long *)0x0;
    lStack_4c0 = 0;
    plStack_4b8 = (long *)0x0;
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    uStack_4a0 = 1;
    puStack_500 = (undefined *)CONCAT71(puStack_500._1_7_,4);
    uStack_5e0 = plStack_510;
    uStack_5d8 = uStack_508;
    uStack_5d0 = (long *)CONCAT71(uStack_5d0._1_7_,4);
    uStack_5e8 = &UNK_0f4e3c70;
    func_0x04167a20(&puStack_5c8,&puStack_4f8);
    plStack_5c0 = uStack_4f0;
    plStack_5b8 = uStack_4e8;
    puStack_5b0 = puStack_4e0;
    uStack_5a8 = (undefined4)uStack_4d8;
    uStack_5a4 = uStack_4d8._4_4_;
    uStack_5a0 = (undefined4)uStack_4d0;
    uStack_59c = uStack_4d0._4_4_;
    uStack_598 = SUB81(uStack_4c8,0);
    uStack_597 = (undefined2)((ulong)uStack_4c8 >> 8);
    uStack_595 = (undefined1)((ulong)uStack_4c8 >> 0x18);
    uStack_594 = uStack_4c8._4_4_;
    if (uStack_4c8 != (long *)0x0) {
      LOCK();
      uStack_4c8[1] = uStack_4c8[1] + 1;
      UNLOCK();
    }
    lStack_590 = lStack_4c0;
    if (((ulong)plStack_4b8 & 1) == 0) {
      plStack_578 = plStack_4a8;
      uStack_588 = plStack_4b8;
      uStack_580 = uStack_4b0;
    }
    else {
      FUN_0412e5e0(&uStack_588,plStack_4a8,uStack_4b0);
    }
    lStack_570 = uStack_4a0;
    if (iVar6 == 4) {
      if ((DAT_0f75df58 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75df58), iVar6 != 0)) {
        func_0x0e6e4d50();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ded8,0xf53dab8);
        func_0x0410844d(&DAT_0f75df58);
      }
      plVar8 = (long *)(*(long *)(puVar7 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar7 + 0x20) - *(long *)(puVar7 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f75ded8 + 4)) * 8);
      do {
        lVar9 = *plVar8;
        if (lVar9 == -1) goto LAB_0e6ca078;
        plVar8 = (long *)(*(long *)(puVar7 + 0x30) + lVar9 * 0x18);
      } while (*(uint *)(*(long *)(puVar7 + 0x30) + 8 + lVar9 * 0x18) !=
               *(uint *)(_DAT_0f75ded8 + 4));
      if (plVar8 == *(long **)(puVar7 + 0x38)) {
LAB_0e6ca078:
        puVar17 = &DAT_0f75ded8;
      }
      else {
        puVar17 = (undefined *)plVar8[2];
      }
      puVar7 = (undefined *)func_0x048b1040(puVar7 + 0x18,puVar17,uVar5,1);
      if (puVar7 == (undefined *)0x0) {
        uStack_478 = (undefined *)0x0;
        uStack_470 = (long *)0x0;
        func_0x048b10d0(&uStack_478);
        puVar17 = *(undefined **)(uStack_478 + 0x38);
        puVar7 = uStack_478;
        if (puVar17 == (undefined *)0x0) goto LAB_0e6ca1c7;
LAB_0e6ca1ec:
        do {
          puVar7 = puVar17;
          puVar17 = *(undefined **)(puVar7 + 0x38);
          if (*(undefined **)(puVar7 + 0x38) == (undefined *)0x0) {
            uStack_478 = (undefined *)0x0;
            uStack_470 = (long *)0x0;
            func_0x048b10d0(&uStack_478);
            puVar17 = uStack_478;
          }
        } while (puVar17 != (undefined *)0x0);
      }
      else {
        puVar17 = *(undefined **)(puVar7 + 0x38);
        if (*(undefined **)(puVar7 + 0x38) != (undefined *)0x0) goto LAB_0e6ca1ec;
LAB_0e6ca1c7:
        uStack_478 = (undefined *)0x0;
        uStack_470 = (long *)0x0;
        func_0x048b10d0(&uStack_478);
        puVar17 = uStack_478;
        if (uStack_478 != (undefined *)0x0) goto LAB_0e6ca1ec;
      }
      lVar9 = *(long *)(puVar7 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0e6ca254:
      *(undefined1 *)(puVar10 + 3) = (undefined1)uStack_5d0;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_5e0;
      *(undefined4 *)((long)puVar10 + 0xc) = uStack_5e0._4_4_;
      *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_5d8;
      *(uint *)((long)puVar10 + 0x14) = uStack_5d8._4_4_;
      *puVar10 = &UNK_0f4e3c70;
      func_0x04167a20(puVar10 + 4,&puStack_5c8);
      puVar10[5] = plStack_5c0;
      puVar10[6] = plStack_5b8;
      puVar10[7] = puStack_5b0;
      puVar10[8] = CONCAT44(uStack_5a4,uStack_5a8);
      puVar10[9] = CONCAT44(uStack_59c,uStack_5a0);
      puVar10[10] = CONCAT44(uStack_594,CONCAT13(uStack_595,CONCAT21(uStack_597,uStack_598)));
      uStack_5a0 = 0;
      uStack_59c = 0;
      uStack_598 = 0;
      uStack_597 = 0;
      uStack_595 = 0;
      uStack_594 = 0;
      puVar10[0xb] = lStack_590;
      puVar10[0xe] = plStack_578;
      *(undefined4 *)(puVar10 + 0xc) = (undefined4)uStack_588;
      *(undefined4 *)((long)puVar10 + 100) = uStack_588._4_4_;
      *(undefined4 *)(puVar10 + 0xd) = (undefined4)uStack_580;
      *(undefined4 *)((long)puVar10 + 0x6c) = uStack_580._4_4_;
      uStack_588 = (long *)0x0;
      uStack_580 = 0;
      plStack_578 = (long *)0x0;
      puVar10[0xf] = lStack_570;
      plVar8 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x28))();
      }
    }
    else if (iVar6 == 1) {
      if ((DAT_0f75df58 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75df58), iVar6 != 0)) {
        func_0x0e6e4d50();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ded8,0xf53dab8);
        func_0x0410844d(&DAT_0f75df58);
      }
      plVar8 = (long *)(*(long *)(puVar7 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar7 + 0x20) - *(long *)(puVar7 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f75ded8 + 4)) * 8);
      do {
        lVar9 = *plVar8;
        if (lVar9 == -1) goto LAB_0e6c9ff8;
        plVar8 = (long *)(*(long *)(puVar7 + 0x30) + lVar9 * 0x18);
      } while (*(uint *)(*(long *)(puVar7 + 0x30) + 8 + lVar9 * 0x18) !=
               *(uint *)(_DAT_0f75ded8 + 4));
      if (plVar8 == *(long **)(puVar7 + 0x38)) {
LAB_0e6c9ff8:
        puVar17 = &DAT_0f75ded8;
      }
      else {
        puVar17 = (undefined *)plVar8[2];
      }
      puVar7 = (undefined *)func_0x048b0c90(puVar7 + 0x18,puVar17,uVar5,1);
      if (puVar7 == (undefined *)0x0) {
        uStack_478 = (undefined *)0x0;
        uStack_470 = (long *)0x0;
        func_0x048b0d20(&uStack_478);
        puVar7 = uStack_478;
      }
      lVar9 = *(long *)(puVar7 + 0x58);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0e6ca254;
    }
    uStack_5e8 = &UNK_0f4e3c70;
    if (((ulong)uStack_588 & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_578,(ulong)uStack_588 & 0xfffffffffffffffe);
    }
    plVar8 = (long *)CONCAT44(uStack_594,CONCAT13(uStack_595,CONCAT21(uStack_597,uStack_598)));
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar12 = plVar8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x04167a40(&puStack_5c8);
    uStack_518 = (long *)&UNK_0f4e3c70;
    if (((ulong)plStack_4b8 & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_4a8,(ulong)plStack_4b8 & 0xfffffffffffffffe);
    }
    plVar8 = uStack_4c8;
    if (uStack_4c8 != (long *)0x0) {
      LOCK();
      plVar12 = uStack_4c8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_4c8 + 0x10))(uStack_4c8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x04167a40(&puStack_4f8);
  }
  if ((DAT_0f75de18 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75de18), iVar6 != 0)) {
    func_0x0e6e39a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75dd98,0xf53dab8);
    func_0x0410844d(&DAT_0f75de18);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f75dd98 + 4)) * 8);
  do {
    lVar9 = *plVar8;
    if (lVar9 == -1) goto LAB_0e6ca420;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f75dd98 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0e6ca420:
    puVar7 = &DAT_0f75dd98;
    if (iRam000000000f75ddf8 != -0x2b3da790) goto LAB_0e6ca48d;
LAB_0e6ca44b:
    lVar9 = *(long *)(puVar7 + 0x68);
    if (lVar9 == 0) goto LAB_0e6ca48d;
    bVar18 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar16 = lVar9 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e6e67e0(&puStack_3f0,param_1,lVar16,uVar15);
    puVar7 = uStack_478;
    plVar8 = uStack_470;
    puVar17 = (undefined *)uStack_450;
    plVar12 = plStack_448;
    uStack_478 = puStack_3f0;
    uStack_470 = plStack_3e8;
    uStack_450 = uStack_3c8;
    plStack_448 = uStack_3c0;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e6ca44b;
LAB_0e6ca48d:
    func_0x0e6e67e0(&puStack_3f0,param_1,&UNK_011cf4ee,0x1f);
    puVar7 = uStack_478;
    plVar8 = uStack_470;
    puVar17 = (undefined *)uStack_450;
    plVar12 = plStack_448;
    uStack_478 = puStack_3f0;
    uStack_470 = plStack_3e8;
    uStack_450 = uStack_3c8;
    plStack_448 = uStack_3c0;
  }
  bVar18 = (char)uStack_3c0 == '\0';
  puStack_3f0 = uStack_478;
  plStack_3e8 = uStack_470;
  uStack_3c8 = uStack_450;
  uStack_3c0 = plStack_448;
  if (bVar18) {
    uStack_3e0._4_4_ = (undefined4)((ulong)uStack_3e0 >> 0x20);
    uStack_3d8._4_4_ = (undefined4)((ulong)uStack_3d8 >> 0x20);
    uStack_3d0._4_4_ = (int)((ulong)uStack_3d0 >> 0x20);
    uStack_458 = (int)uStack_3d0;
    uStack_454 = uStack_3d0._4_4_;
    uStack_468 = (undefined4)uStack_3e0;
    uStack_464 = uStack_3e0._4_4_;
    uStack_460 = (undefined4)uStack_3d8;
    uStack_45c = uStack_3d8._4_4_;
    if ((DAT_0f75dd80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75dd80), iVar6 != 0)) {
      func_0x0e6e3860();
      func_0x0410844d(&DAT_0f75dd80);
    }
    puVar7 = uStack_478;
    uStack_450 = (long *)0x1ed1ffa00000001;
    if ((DAT_0f75de18 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75de18), iVar6 != 0)) {
      func_0x0e6e39a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75dd98,0xf53dab8);
      func_0x0410844d(&DAT_0f75de18);
    }
    uStack_5e0 = (long *)(puVar7 + 0x18);
    plVar8 = (long *)(*(long *)(puVar7 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar7 + 0x20) - *(long *)(puVar7 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f75dd98 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_0e6ca590;
      plVar8 = (long *)(*(long *)(puVar7 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(puVar7 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f75dd98 + 4))
    ;
    if (plVar8 == *(long **)(puVar7 + 0x38)) {
LAB_0e6ca590:
      uStack_5e8 = &DAT_0f75dd98;
    }
    else {
      uStack_5e8 = (undefined *)plVar8[2];
    }
    func_0x0ed621a0(&uStack_5e8,uStack_450._4_4_);
    uStack_5e8 = (undefined *)((ulong)uStack_5e8 & 0xffffffffffff0000);
    uStack_5d8 = (long *)CONCAT44(uStack_5d8._4_4_,uStack_450._4_4_);
    uStack_5d0 = (long *)0x0;
    puStack_5c8 = (undefined1 *)0x0;
    plStack_5c0 = (long *)0x0;
    plStack_5b8 = (long *)0x0;
    puStack_5b0 = (undefined *)0x0;
    uStack_5a8 = CONCAT31((int3)_DAT_011cf50e,0x24);
    uStack_5a4._1_3_ = (undefined3)_UNK_011cf512;
    uStack_5a4 = CONCAT31(uStack_5a4._1_3_,(char)((uint)_DAT_011cf50e >> 0x18));
    uStack_5a0._1_3_ = (undefined3)_UNK_011cf516;
    uStack_5a0 = CONCAT31(uStack_5a0._1_3_,(char)((uint)_UNK_011cf512 >> 0x18));
    uStack_59c._1_3_ = (undefined3)_UNK_011cf51a;
    uStack_59c = CONCAT31(uStack_59c._1_3_,(char)((uint)_UNK_011cf516 >> 0x18));
    uStack_598 = (undefined1)((uint)_UNK_011cf51a >> 0x18);
    uStack_597 = 0x7261;
    uStack_595 = 0;
    lStack_590 = 0;
    uStack_588 = (long *)0x0;
    uStack_580 = 0;
    plStack_578 = (long *)0x0;
    lStack_570 = 0;
    lStack_568 = 0;
    uStack_560 = 0x3f600000;
    uStack_5e0 = &uStack_470;
    func_0x048afb10(&lStack_590,8);
    uStack_538 = 0;
    lStack_530 = 0;
    lStack_548 = 0;
    uStack_540 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    uStack_528 = 0xff00;
    uStack_524 = uStack_524 & 0xffffff00;
    uStack_520 = uStack_520 & 0xffffff00;
    uStack_51c = 0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4c73c8;
    if (uStack_5d0 != (long *)0x0) {
      lVar9 = *uStack_5d0;
      uStack_5d0 = puVar10;
      (**(code **)(lVar9 + 8))();
      puVar10 = uStack_5d0;
    }
    uStack_5d0 = puVar10;
    uStack_518 = (long *)CONCAT44(uStack_518._4_4_,(undefined4)uStack_5d8);
    plStack_510 = (long *)0x0;
    uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
    puStack_500 = (undefined *)0x1;
    puStack_4f8 = (undefined *)0x0;
    uStack_4f0 = (long *)&UNK_0e6e8780;
    uStack_4e8 = (long *)&SUB_048b06d0;
    puStack_4e0 = &UNK_0e6e83b0;
    uStack_4d8 = &UNK_0e6e8840;
    uStack_4d0 = &UNK_0e6e8b50;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    lStack_4c0 = 0;
    plStack_4b8 = (long *)0x0;
    func_0x048b05a0(uStack_5e0,&uStack_518);
    plVar8 = plStack_4b8;
    if (plStack_4b8 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_4b8 + 1;
      lVar9 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = uStack_5e0;
    if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_518 = (long *)CONCAT44(uStack_518._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    puVar3 = puStack_5c8;
    puVar10 = uStack_5d0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_510 = plVar12 + 3;
    uStack_5d0 = (long *)0x0;
    puStack_5c8 = (undefined1 *)0x0;
    plVar12[3] = (long)puVar10;
    plVar12[4] = (long)puVar3;
    plVar12[7] = (long)puStack_5b0;
    plVar12[5] = (long)plStack_5c0;
    plVar12[6] = (long)plStack_5b8;
    plStack_5c0 = (long *)0x0;
    plStack_5b8 = (long *)0x0;
    puStack_5b0 = (undefined *)0x0;
    plVar12[10] = CONCAT44(uStack_594,CONCAT13(uStack_595,CONCAT21(uStack_597,uStack_598)));
    plVar12[8] = CONCAT44(uStack_5a4,uStack_5a8);
    plVar12[9] = CONCAT44(uStack_59c,uStack_5a0);
    uStack_5a8 = 0;
    uStack_5a4 = 0;
    uStack_5a0 = 0;
    uStack_59c = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_595 = 0;
    uStack_594 = 0;
    plVar12[0xb] = lStack_590;
    plVar12[0xc] = (long)uStack_588;
    plVar12[0xd] = uStack_580;
    lStack_590 = 0;
    uStack_588 = (long *)0x0;
    uStack_580 = 0;
    plVar12[0xe] = (long)plStack_578;
    plVar12[0xf] = lStack_570;
    plVar12[0x10] = lStack_568;
    plStack_578 = (long *)0x0;
    lStack_570 = 0;
    lStack_568 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_560;
    plVar12[0x12] = lStack_558;
    plVar12[0x13] = lStack_550;
    plVar12[0x14] = lStack_548;
    lStack_558 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    plVar12[0x17] = lStack_530;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_540;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_540._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_538;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_538._4_4_;
    uStack_540 = 0;
    uStack_538 = 0;
    lStack_530 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_51c,CONCAT43(uStack_520,uStack_524._1_3_));
    plVar12[0x18] = CONCAT44(uStack_524,CONCAT22(uStack_526,uStack_528));
    uStack_2d8 = (undefined *)0x0;
    plStack_2d0 = (long *)0x0;
    uStack_508 = plVar12;
    func_0x048afd20(plVar8,&uStack_518);
    plVar12 = uStack_508;
    if (uStack_508 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_508 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_508 + 0x10))(uStack_508);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2d0 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar4 = uStack_478;
    lVar9 = plVar8[2];
    iVar6 = *(int *)((long)plVar8 + 0x1c);
    if (iVar6 == 2) {
      piVar11 = *(int **)(*(long *)(lVar9 + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)plVar8[3]) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      for (; *(long *)(piVar11 + 0xc) != plVar8[1]; piVar11 = *(int **)(piVar11 + 0xe)) {
      }
LAB_0e6caa4a:
      piVar11[4] = piVar11[4] | (int)uStack_5e8 << 0x10;
    }
    else {
      if (iVar6 == 1) {
        piVar11 = *(int **)(*(long *)(lVar9 + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)plVar8[3]) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e6caa4a;
      }
      if (iVar6 == 0) {
        *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | (int)uStack_5e8 << 0x10;
      }
    }
    iVar6 = (int)uStack_450;
    uVar5 = uStack_450._4_4_;
    FUN_048b0bc0(&uStack_5d0);
    puVar2 = puVar4 + 0x18;
    if (iVar6 == 1) {
      if ((DAT_0f75de18 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75de18), iVar6 != 0)) {
        func_0x0e6e39a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75dd98,0xf53dab8);
        func_0x0410844d(&DAT_0f75de18);
      }
      plVar8 = (long *)(*(long *)(puVar4 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar4 + 0x20) - *(long *)(puVar4 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f75dd98 + 4)) * 8);
      do {
        lVar9 = *plVar8;
        if (lVar9 == -1) goto LAB_0e6caad4;
        plVar8 = (long *)(*(long *)(puVar4 + 0x30) + lVar9 * 0x18);
      } while (*(uint *)(*(long *)(puVar4 + 0x30) + 8 + lVar9 * 0x18) !=
               *(uint *)(_DAT_0f75dd98 + 4));
      if (plVar8 == *(long **)(puVar4 + 0x38)) {
LAB_0e6caad4:
        puVar7 = &DAT_0f75dd98;
      }
      else {
        puVar7 = (undefined *)plVar8[2];
      }
      puVar7 = (undefined *)func_0x048b0c90(puVar2,puVar7,uVar5,1);
      if (puVar7 == (undefined *)0x0) {
        uStack_5e8 = (undefined *)0x0;
        uStack_5e0 = (long *)0x0;
        func_0x048b0d20(&uStack_5e8);
        puVar7 = uStack_5e8;
      }
      *(undefined1 *)(*(long *)(puVar7 + 0x58) + 0xa9) = 4;
      puVar7 = uStack_478;
      plVar8 = uStack_470;
      puVar17 = (undefined *)uStack_450;
      plVar12 = plStack_448;
    }
    else {
      if ((DAT_0f75de18 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75de18), iVar6 != 0)) {
        func_0x0e6e39a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75dd98,0xf53dab8);
        func_0x0410844d(&DAT_0f75de18);
      }
      plVar8 = (long *)(*(long *)(puVar4 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar4 + 0x20) - *(long *)(puVar4 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f75dd98 + 4)) * 8);
      do {
        lVar9 = *plVar8;
        if (lVar9 == -1) goto LAB_0e6cab30;
        plVar8 = (long *)(*(long *)(puVar4 + 0x30) + lVar9 * 0x18);
      } while (*(uint *)(*(long *)(puVar4 + 0x30) + 8 + lVar9 * 0x18) !=
               *(uint *)(_DAT_0f75dd98 + 4));
      if (plVar8 == *(long **)(puVar4 + 0x38)) {
LAB_0e6cab30:
        puVar7 = &DAT_0f75dd98;
      }
      else {
        puVar7 = (undefined *)plVar8[2];
      }
      puVar13 = (undefined *)func_0x048b1040(puVar2,puVar7,uVar5,1);
      if (puVar13 == (undefined *)0x0) {
        uStack_5e8 = (undefined *)0x0;
        uStack_5e0 = (long *)0x0;
        func_0x048b10d0(&uStack_5e8);
        puVar7 = *(undefined **)(uStack_5e8 + 0x38);
        puVar13 = uStack_5e8;
      }
      else {
        puVar7 = *(undefined **)(puVar13 + 0x38);
      }
      if (puVar7 != (undefined *)0x0) goto LAB_0e6cabf5;
      uStack_5e8 = (undefined *)0x0;
      uStack_5e0 = (long *)0x0;
      func_0x048b10d0(&uStack_5e8);
      puVar17 = uStack_5e8;
      while (puVar7 = puVar17, puVar7 != (undefined *)0x0) {
LAB_0e6cabf5:
        puVar13 = puVar7;
        puVar17 = *(undefined **)(puVar7 + 0x38);
        if (*(undefined **)(puVar7 + 0x38) == (undefined *)0x0) {
          uStack_5e8 = (undefined *)0x0;
          uStack_5e0 = (long *)0x0;
          func_0x048b10d0(&uStack_5e8);
          puVar17 = uStack_5e8;
        }
      }
      *(undefined1 *)(*(long *)(puVar13 + 0x48) + 0x10) = 4;
      puVar7 = uStack_478;
      plVar8 = uStack_470;
      puVar17 = (undefined *)uStack_450;
      plVar12 = plStack_448;
      if ((puVar13[0x12] & 2) != 0) {
        if ((DAT_0f75de18 == '\0') && (iVar6 = func_0x04108328(&DAT_0f75de18), iVar6 != 0)) {
          func_0x0e6e39a0();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f75dd98,0xf53dab8);
          func_0x0410844d(&DAT_0f75de18);
        }
        plVar8 = (long *)(*(long *)(puVar4 + 0x18) +
                         (ulong)((int)((ulong)(*(long *)(puVar4 + 0x20) - *(long *)(puVar4 + 0x18))
                                      >> 3) - 1U & *(uint *)(_DAT_0f75dd98 + 4)) * 8);
        do {
          lVar9 = *plVar8;
          if (lVar9 == -1) goto LAB_0e6cac90;
          plVar8 = (long *)(*(long *)(puVar4 + 0x30) + lVar9 * 0x18);
        } while (*(uint *)(*(long *)(puVar4 + 0x30) + 8 + lVar9 * 0x18) !=
                 *(uint *)(_DAT_0f75dd98 + 4));
        if (plVar8 == *(long **)(puVar4 + 0x38)) {
LAB_0e6cac90:
          puVar7 = &DAT_0f75dd98;
        }
        else {
          puVar7 = (undefined *)plVar8[2];
        }
        puVar7 = (undefined *)func_0x048b1040(puVar2,puVar7,0xbf75c8f8,1);
        if (puVar7 == (undefined *)0x0) {
          uStack_5e8 = (undefined *)0x0;
          uStack_5e0 = (long *)0x0;
          func_0x048b10d0(&uStack_5e8);
          puVar7 = uStack_5e8;
        }
        *(undefined1 *)(*(long *)(puVar7 + 0x48) + 8) = 4;
        puVar7 = uStack_478;
        plVar8 = uStack_470;
        puVar17 = (undefined *)uStack_450;
        plVar12 = plStack_448;
      }
    }
  }
  plStack_448 = plVar12;
  uStack_450 = (long *)puVar17;
  uStack_470 = plVar8;
  uStack_478 = puVar7;
  lVar9 = func_0x0dad2bf0(lStack_220);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar18 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar16 = lVar9 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e6dd550(&uStack_478,param_1,lVar16,uVar15);
  }
  else {
    func_0x0e6dd550(&uStack_478,param_1,&UNK_011ccec2,5);
  }
  if ((char)plStack_448 != '\0') {
    return;
  }
  func_0x0e6dde10(&uStack_5e8,&uStack_478,&UNK_0133bd10,8,1);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f4c70f0;
  if (uStack_5d0 != (long *)0x0) {
    lVar9 = *uStack_5d0;
    uStack_5d0 = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = uStack_5d0;
  }
  uStack_5d0 = plVar8;
  uStack_518 = (long *)CONCAT44(uStack_518._4_4_,(undefined4)uStack_5d8);
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  puStack_500 = (undefined *)0x1;
  puStack_4f8 = (undefined *)0x0;
  uStack_4f0 = (long *)&UNK_0e6e21a0;
  uStack_4e8 = (long *)&SUB_048b06d0;
  puStack_4e0 = &UNK_0e6dfbd0;
  uStack_4d8 = &UNK_0e6e2260;
  uStack_4d0 = &UNK_0e6e2430;
  uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
  lStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(uStack_5e0,&uStack_518);
  plVar8 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_4b8 + 1;
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x0e6de070(&uStack_5e8);
  uStack_1e8 = (char)plStack_448;
  uStack_1f8 = uStack_458;
  uStack_1f4 = uStack_454;
  uStack_1f0 = (int)uStack_450;
  uStack_1ec = uStack_450._4_4_;
  uStack_208 = uStack_468;
  uStack_204 = uStack_464;
  uStack_200 = uStack_460;
  uStack_1fc = uStack_45c;
  uStack_218 = (undefined4)uStack_478;
  uStack_214 = uStack_478._4_4_;
  uStack_210 = (undefined4)uStack_470;
  uStack_20c = uStack_470._4_4_;
  FUN_048b0bc0(&uStack_5d0);
  func_0x0e6cba10(&uStack_258,&uStack_218);
  uStack_3d8 = 4;
  plStack_3e8 = (long *)0xffffffffffffffff;
  uStack_3e0 = (long *)0x0;
  puStack_3f0 = &UNK_0f4e3d70;
  uStack_3c8 = (long *)0x0;
  uStack_3c0 = (long *)0x0;
  uStack_3b8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_3d0 = (undefined *)0x1;
  uStack_1d8 = 0xffffffffffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = 4;
  puStack_1e0 = &UNK_0f4e3d70;
  uStack_1c0 = 1;
  uStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_1a0 = (long *)0x0;
  if (iStack_230 == 4) {
    lVar9 = func_0x0e6e28a0(&uStack_258);
    lVar9 = *(long *)(lVar9 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  else {
    if (iStack_230 != 1) goto LAB_0e6cb0b1;
    lVar9 = CONCAT44(uStack_254,uStack_258) + 0x18;
    uVar14 = func_0x0dad2bf0(lVar9);
    puVar7 = (undefined *)func_0x048b0c90(lVar9,uVar14,uStack_22c,1);
    if (puVar7 == (undefined *)0x0) {
      uStack_5e8 = (undefined *)0x0;
      uStack_5e0 = (long *)0x0;
      func_0x048b0d20(&uStack_5e8);
      puVar7 = uStack_5e8;
    }
    lVar9 = *(long *)(puVar7 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  *(undefined1 *)(puVar10 + 3) = (undefined1)uStack_3d8;
  puVar10[1] = plStack_3e8;
  puVar10[2] = uStack_3e0;
  *puVar10 = &UNK_0f4e3d70;
  puVar10[4] = 1;
  puVar10[5] = 0;
  puVar10[6] = 0;
  uStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  uStack_1a8 = 0;
  plStack_1a0 = (long *)0x0;
  plVar8 = *(long **)(lVar9 + 8);
  *(undefined8 **)(lVar9 + 8) = puVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
LAB_0e6cb0b1:
  puStack_318 = (undefined1 *)CONCAT71(puStack_318._1_7_,cStack_228);
  uStack_338 = uStack_248;
  uStack_334 = uStack_244;
  uStack_348 = uStack_258;
  uStack_344 = uStack_254;
  func_0x0e6dde10(&uStack_5e8,&uStack_348,&UNK_011cf4ee,0x1f,0);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4c71f8;
  if (uStack_5d0 != (long *)0x0) {
    lVar9 = *uStack_5d0;
    uStack_5d0 = puVar10;
    (**(code **)(lVar9 + 8))();
    puVar10 = uStack_5d0;
  }
  uStack_5d0 = puVar10;
  uStack_518 = (long *)CONCAT44(uStack_518._4_4_,(undefined4)uStack_5d8);
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  puStack_500 = (undefined *)0x1;
  puStack_4f8 = (undefined *)0x0;
  uStack_4f0 = (long *)&UNK_0e6e44b0;
  uStack_4e8 = (long *)&SUB_048b06d0;
  puStack_4e0 = &UNK_0e6e40e0;
  uStack_4d8 = &UNK_0e6e4570;
  uStack_4d0 = &UNK_0e6e4810;
  uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
  lStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(uStack_5e0,&uStack_518);
  plVar8 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_4b8 + 1;
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x0e6de070(&uStack_5e8);
  plStack_2a8 = (long *)CONCAT71(plStack_2a8._1_7_,puStack_318._0_1_);
  uStack_2c8 = CONCAT44(uStack_334,uStack_338);
  uStack_2d8 = (undefined *)CONCAT44(uStack_344,uStack_348);
  FUN_048b0bc0(&uStack_5d0);
  func_0x0e6cba10(&uStack_5e8,&uStack_2d8);
  plVar8 = plStack_1a0;
  puStack_1e0 = &UNK_0f4e3d70;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_1a0 + 1;
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_1b0 + 1;
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_3b0;
  puStack_3f0 = &UNK_0f4e3d70;
  if (plStack_3b0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_3b0 + 1;
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_3c0;
  if (uStack_3c0 != (long *)0x0) {
    LOCK();
    plVar12 = uStack_3c0 + 1;
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_3c0 + 0x10))(uStack_3c0);
      func_0x0412c2d0(plVar8);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x11cf50e  beehive_has_nectar
 */
