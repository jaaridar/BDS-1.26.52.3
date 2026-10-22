/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88583c0 (ELF vaddr 0x87583c0)
 * Label: caller-of-callee
 * Body:  [[088583c0, 0885a211] [0885a220, 0885c08a]]
 * Ghidra: FUN_088583c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088583c0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long **pplVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  undefined8 uStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined1 *puStack_508;
  undefined1 *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 uStack_4e0;
  long *plStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long *plStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined1 *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  long **pplStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  long *plStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  long lStack_388;
  long lStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined1 uStack_370;
  undefined2 uStack_36f;
  undefined1 uStack_36d;
  undefined4 uStack_36c;
  long *plStack_368;
  long lStack_360;
  long *plStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined4 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined2 uStack_2f8;
  undefined2 uStack_2f6;
  uint uStack_2f4;
  uint uStack_2f0;
  undefined1 uStack_2ec;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long lStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
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
  char cStack_170;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
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
  undefined4 uStack_c0;
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
  char cStack_78;
  undefined1 auStack_68 [56];
  
  if ((DAT_0f5e4690 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e4690), iVar6 != 0)) {
    func_0x0897c010();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4610,0xf53dab8);
    func_0x0410844d(&DAT_0f5e4690);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e4610 + 4)) * 8);
  do {
    lVar1 = *plVar9;
    if (lVar1 == -1) goto LAB_08858430;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e4610 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_08858430:
    puVar8 = &DAT_0f5e4610;
    if (iRam000000000f5e4670 != -0x2b3da790) goto LAB_0885849d;
LAB_0885845b:
    lVar1 = *(long *)(puVar8 + 0x68);
    if (lVar1 == 0) goto LAB_0885849d;
    bVar16 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar13 = lVar1 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar1 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x0897c750(&plStack_2e8,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0885845b;
LAB_0885849d:
    func_0x0897c750(&plStack_2e8,param_1,&UNK_01229f04,0x1b);
  }
  if ((char)uStack_2b8 == '\0') {
    uStack_468._4_4_ = (uint)((ulong)uStack_468 >> 0x20);
    uStack_4a8._4_4_ = (uint)((ulong)uStack_4a8 >> 0x20);
    uStack_4b8._4_4_ = (undefined4)((ulong)uStack_4b8 >> 0x20);
    uStack_528._4_4_ = (uint)((ulong)uStack_528 >> 0x20);
    uStack_538._4_4_ = (undefined4)((ulong)uStack_538 >> 0x20);
    func_0x0897d2c0(&puStack_3b8,&plStack_2e8,&UNK_01466403,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528._4_4_ << 0x20);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_0490ce30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &SUB_0490cb20;
    puStack_4f8 = &UNK_0897d870;
    puStack_4f0 = &UNK_0897d9d0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x0897d570(&puStack_3b8);
    plVar9 = plStack_2e8;
    uStack_128 = plStack_2e0;
    uStack_120 = plStack_2d8;
    uStack_118 = (undefined4)uStack_2d0;
    uStack_114 = uStack_2d0._4_4_;
    uStack_110 = (undefined4)uStack_2c8;
    uStack_10c = uStack_2c8._4_4_;
    iVar6 = (int)uStack_2c0;
    uVar2 = uStack_2c0._4_4_;
    uVar3 = (char)uStack_2b8;
    func_0x048b0bc0(&plStack_3a0);
    if ((DAT_0f5e4690 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5e4690), iVar7 != 0)) {
      func_0x0897c010();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4610,0xf53dab8);
      func_0x0410844d(&DAT_0f5e4690);
    }
    plVar10 = (long *)(plVar9[3] +
                      (ulong)((int)((ulong)(plVar9[4] - plVar9[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5e4610 + 4)) * 8);
    do {
      lVar1 = *plVar10;
      if (lVar1 == -1) goto LAB_088586b1;
      plVar10 = (long *)(plVar9[6] + lVar1 * 0x18);
    } while (*(uint *)(plVar9[6] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e4610 + 4));
    if (plVar10 == (long *)plVar9[7]) {
LAB_088586b1:
      puVar8 = &DAT_0f5e4610;
    }
    else {
      puVar8 = (undefined *)plVar10[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01244cc6),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(plVar9 + 3,puVar8,uVar2,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_3b8 = (undefined *)0x0;
      pplStack_3b0 = (long **)0x0;
      FUN_048b0d20(&puStack_3b8);
      puVar8 = puStack_3b8;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    uStack_260 = plVar9;
    uStack_258 = (undefined4)uStack_128;
    uStack_254 = uStack_128._4_4_;
    uStack_250 = (undefined4)uStack_120;
    uStack_24c = uStack_120._4_4_;
    uStack_248 = uStack_118;
    uStack_244 = uStack_114;
    uStack_240 = uStack_110;
    uStack_23c = uStack_10c;
    iStack_238 = iVar6;
    uStack_234 = uVar2;
    uStack_230 = uVar3;
    func_0x0897d2c0(&puStack_3b8,&uStack_260,&UNK_011dac76,9);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_048b3f30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &SUB_048b2190;
    puStack_4f8 = &UNK_0897dba0;
    puStack_4f0 = &UNK_0897dd70;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x0897d570(&puStack_3b8);
    uStack_138 = uStack_230;
    uStack_148 = uStack_240;
    uStack_144 = uStack_23c;
    iStack_140 = iStack_238;
    uStack_13c = uStack_234;
    uStack_158 = uStack_250;
    uStack_154 = uStack_24c;
    uStack_150 = uStack_248;
    uStack_14c = uStack_244;
    uStack_168 = (undefined4)uStack_260;
    uStack_164 = uStack_260._4_4_;
    uStack_160 = uStack_258;
    uStack_15c = uStack_254;
    func_0x048b0bc0(&plStack_3a0);
    uStack_418 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3e0 = 0;
    plStack_3d8 = (long *)0x0;
    puStack_3f0 = (undefined *)0x0;
    uStack_3e8 = (long *)0x0;
    puStack_400 = (undefined1 *)0x0;
    puStack_3f8 = (undefined *)0x0;
    uStack_410 = (undefined *)0x0;
    puStack_408 = (undefined1 *)0x0;
    uStack_3c0 = 0;
    plStack_430 = (long *)0xffffffffffffffff;
    plStack_428 = (long *)0x0;
    plStack_420 = (long *)0xff;
    puStack_438 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_418);
    uStack_410 = (undefined *)func_0x041681f0(&uStack_418,0xf547a30);
    puStack_408 = (undefined1 *)func_0x041681f0(&uStack_418,0xf547770);
    puStack_400 = (undefined1 *)0x0;
    puStack_3f8 = (undefined *)0x0;
    puStack_3f0 = (undefined *)0x0;
    uStack_3e8 = (long *)0x0;
    uStack_3e0 = 0;
    plStack_3d8 = (long *)0x0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_430 = (long *)0x300;
    plStack_530 = (long *)0x300;
    uStack_528 = plStack_428;
    uStack_520 = CONCAT71(uStack_520._1_7_,plStack_420._0_1_);
    uStack_538 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_518,&uStack_418);
    puStack_510 = uStack_410;
    puStack_508 = puStack_408;
    puStack_500 = puStack_400;
    puStack_4f8 = puStack_3f8;
    puStack_4f0 = puStack_3f0;
    uStack_4e8 = (undefined4)uStack_3e8;
    uStack_4e4 = uStack_3e8._4_4_;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      uStack_3e8[1] = uStack_3e8[1] + 1;
      UNLOCK();
    }
    uStack_4e0 = uStack_3e0;
    if (((ulong)plStack_3d8 & 1) == 0) {
      uStack_4c8 = uStack_3c8;
      plStack_4d8 = plStack_3d8;
      uStack_4d0 = (undefined4)uStack_3d0;
      uStack_4cc = uStack_3d0._4_4_;
    }
    else {
      func_0x0412e5e0(&plStack_4d8,uStack_3c8,uStack_3d0);
    }
    uStack_4c0 = uStack_3c0;
    func_0x0885d4d0(&uStack_1a0,&uStack_168,&uStack_538);
    func_0x0897d2c0(&puStack_3b8,&uStack_1a0,&UNK_012a9b85,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_4b8 = (undefined *)CONCAT44(uStack_4b8._4_4_,uStack_3a8);
    plStack_4b0 = (long *)0x0;
    uStack_4a8 = (long *)((ulong)uStack_4a8._4_4_ << 0x20);
    plStack_4a0 = (long *)0x1;
    uStack_498 = 0;
    uStack_490 = &UNK_048b3f30;
    puStack_488 = &SUB_048b06d0;
    puStack_480 = &SUB_048b2190;
    uStack_478 = &UNK_0897df50;
    uStack_470 = &UNK_0897e120;
    uStack_468 = (long *)((ulong)uStack_468._4_4_ << 0x20);
    lStack_460 = 0;
    plStack_458 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_4b8);
    plVar9 = plStack_458;
    if (plStack_458 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_458 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_458 + 0x10))(plStack_458);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x0897d570(&puStack_3b8);
    puStack_1f8 = (undefined1 *)CONCAT71(puStack_1f8._1_7_,cStack_170);
    uStack_208 = CONCAT44(uStack_17c,uStack_180);
    uStack_200 = (undefined *)CONCAT44(uStack_174,uStack_178);
    uStack_218 = CONCAT44(uStack_18c,uStack_190);
    uStack_210 = CONCAT44(uStack_184,uStack_188);
    uStack_228 = (undefined *)CONCAT44(uStack_19c,uStack_1a0);
    uStack_220 = CONCAT44(uStack_194,uStack_198);
    func_0x048b0bc0(&plStack_3a0);
    uStack_498 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    lStack_460 = 0;
    plStack_458 = (long *)0x0;
    uStack_470 = (undefined *)0x0;
    uStack_468 = (long *)0x0;
    puStack_480 = (undefined1 *)0x0;
    uStack_478 = (undefined *)0x0;
    uStack_490 = (undefined *)0x0;
    puStack_488 = (undefined1 *)0x0;
    uStack_440 = 0;
    plStack_4b0 = (long *)0xffffffffffffffff;
    uStack_4a8 = (long *)0x0;
    plStack_4a0 = (long *)0xff;
    uStack_4b8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_498);
    uStack_490 = (undefined *)func_0x041681f0(&uStack_498,0xf547a30);
    puStack_488 = (undefined1 *)func_0x041681f0(&uStack_498,0xf547770);
    puStack_480 = (undefined1 *)0x0;
    uStack_478 = (undefined *)0x0;
    uStack_470 = (undefined *)0x0;
    uStack_468 = (long *)0x0;
    lStack_460 = 0;
    plStack_458 = (long *)0x0;
    uStack_450 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    plStack_4b0 = (long *)0x300;
    pplStack_3b0 = (long **)0x300;
    uStack_3a8 = (undefined4)uStack_4a8;
    uStack_3a4 = uStack_4a8._4_4_;
    plStack_3a0 = (long *)CONCAT71(plStack_3a0._1_7_,plStack_4a0._0_1_);
    puStack_3b8 = &UNK_0f4e3c70;
    func_0x04167a20(&lStack_398,&uStack_498);
    puStack_390 = uStack_490;
    lStack_388 = (long)puStack_488;
    lStack_380 = (long)puStack_480;
    uStack_378 = (undefined4)uStack_478;
    uStack_374 = uStack_478._4_4_;
    uStack_370 = SUB81(uStack_470,0);
    uStack_36f = (undefined2)((ulong)uStack_470 >> 8);
    uStack_36d = (undefined1)((ulong)uStack_470 >> 0x18);
    uStack_36c = uStack_470._4_4_;
    plStack_368 = uStack_468;
    if (uStack_468 != (long *)0x0) {
      LOCK();
      uStack_468[1] = uStack_468[1] + 1;
      UNLOCK();
    }
    lStack_360 = lStack_460;
    if (((ulong)plStack_458 & 1) == 0) {
      lStack_348 = uStack_448;
      plStack_358 = plStack_458;
      lStack_350 = uStack_450;
    }
    else {
      func_0x0412e5e0(&plStack_358,uStack_448,uStack_450);
    }
    lStack_340 = uStack_440;
    func_0x0885d4d0(&uStack_e8,&uStack_228,&puStack_3b8);
    puStack_3b8 = &UNK_0f4e3c70;
    if (((ulong)plStack_358 & 1) != 0) {
      func_0x0412a280(lStack_348,(ulong)plStack_358 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_368;
    if (plStack_368 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_368 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_368 + 0x10))(plStack_368);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&lStack_398);
    uStack_4b8 = &UNK_0f4e3c70;
    if (((ulong)plStack_458 & 1) != 0) {
      func_0x0412a280(uStack_448,(ulong)plStack_458 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_468;
    if (uStack_468 != (long *)0x0) {
      LOCK();
      plVar10 = uStack_468 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*uStack_468 + 0x10))(uStack_468);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_498);
    uStack_538 = &UNK_0f4e3c70;
    if (((ulong)plStack_4d8 & 1) != 0) {
      func_0x0412a280(uStack_4c8,(ulong)plStack_4d8 & 0xfffffffffffffffe);
    }
    plVar9 = (long *)CONCAT44(uStack_4e4,uStack_4e8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_518);
    puStack_438 = &UNK_0f4e3c70;
    if (((ulong)plStack_3d8 & 1) != 0) {
      func_0x0412a280(uStack_3c8,(ulong)plStack_3d8 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_3e8;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      plVar10 = uStack_3e8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_418);
  }
  if ((DAT_0f5e4748 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e4748), iVar6 != 0)) {
    func_0x0897e3c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e46c8,0xf53dab8);
    func_0x0410844d(&DAT_0f5e4748);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e46c8 + 4)) * 8);
  do {
    lVar1 = *plVar9;
    if (lVar1 == -1) goto LAB_08859020;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e46c8 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_08859020:
    puVar8 = &DAT_0f5e46c8;
    if (iRam000000000f5e4728 != -0x2b3da790) goto LAB_0885908d;
LAB_0885904b:
    lVar1 = *(long *)(puVar8 + 0x68);
    if (lVar1 == 0) goto LAB_0885908d;
    bVar16 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar13 = lVar1 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar1 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x0897eb00(&plStack_2e8,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0885904b;
LAB_0885908d:
    func_0x0897eb00(&plStack_2e8,param_1,&UNK_01229f20,0x17);
  }
  if ((char)uStack_2b8 == '\0') {
    func_0x0897f670(&puStack_3b8,&plStack_2e8,&UNK_01466403,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_0490ce30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &SUB_0490cb20;
    puStack_4f8 = &UNK_0897fc20;
    puStack_4f0 = &UNK_0897fd80;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x0897f920(&puStack_3b8);
    plVar9 = plStack_2e8;
    uStack_128 = plStack_2e0;
    uStack_120 = plStack_2d8;
    uStack_118 = (undefined4)uStack_2d0;
    uStack_114 = uStack_2d0._4_4_;
    uStack_110 = (undefined4)uStack_2c8;
    uStack_10c = uStack_2c8._4_4_;
    iVar6 = (int)uStack_2c0;
    uVar2 = uStack_2c0._4_4_;
    uVar3 = (char)uStack_2b8;
    func_0x048b0bc0(&plStack_3a0);
    if ((DAT_0f5e4748 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5e4748), iVar7 != 0)) {
      func_0x0897e3c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e46c8,0xf53dab8);
      func_0x0410844d(&DAT_0f5e4748);
    }
    plVar10 = (long *)(plVar9[3] +
                      (ulong)((int)((ulong)(plVar9[4] - plVar9[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5e46c8 + 4)) * 8);
    do {
      lVar1 = *plVar10;
      if (lVar1 == -1) goto LAB_088592a1;
      plVar10 = (long *)(plVar9[6] + lVar1 * 0x18);
    } while (*(uint *)(plVar9[6] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e46c8 + 4));
    if (plVar10 == (long *)plVar9[7]) {
LAB_088592a1:
      puVar8 = &DAT_0f5e46c8;
    }
    else {
      puVar8 = (undefined *)plVar10[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01347a08),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(plVar9 + 3,puVar8,uVar2,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_3b8 = (undefined *)0x0;
      pplStack_3b0 = (long **)0x0;
      FUN_048b0d20(&puStack_3b8);
      puVar8 = puStack_3b8;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    uStack_260 = plVar9;
    uStack_258 = (undefined4)uStack_128;
    uStack_254 = uStack_128._4_4_;
    uStack_250 = (undefined4)uStack_120;
    uStack_24c = uStack_120._4_4_;
    uStack_248 = uStack_118;
    uStack_244 = uStack_114;
    uStack_240 = uStack_110;
    uStack_23c = uStack_10c;
    iStack_238 = iVar6;
    uStack_234 = uVar2;
    uStack_230 = uVar3;
    func_0x0897f670(&puStack_3b8,&uStack_260,&UNK_011dac76,9);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_048b3f30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &SUB_048b2190;
    puStack_4f8 = &UNK_0897ff50;
    puStack_4f0 = &UNK_08980120;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x0897f920(&puStack_3b8);
    uStack_138 = uStack_230;
    uStack_148 = uStack_240;
    uStack_144 = uStack_23c;
    iStack_140 = iStack_238;
    uStack_13c = uStack_234;
    uStack_158 = uStack_250;
    uStack_154 = uStack_24c;
    uStack_150 = uStack_248;
    uStack_14c = uStack_244;
    uStack_168 = (undefined4)uStack_260;
    uStack_164 = uStack_260._4_4_;
    uStack_160 = uStack_258;
    uStack_15c = uStack_254;
    func_0x048b0bc0(&plStack_3a0);
    uStack_418 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3e0 = 0;
    plStack_3d8 = (long *)0x0;
    puStack_3f0 = (undefined *)0x0;
    uStack_3e8 = (long *)0x0;
    puStack_400 = (undefined1 *)0x0;
    puStack_3f8 = (undefined *)0x0;
    uStack_410 = (undefined *)0x0;
    puStack_408 = (undefined1 *)0x0;
    uStack_3c0 = 0;
    plStack_430 = (long *)0xffffffffffffffff;
    plStack_428 = (long *)0x0;
    plStack_420 = (long *)0xff;
    puStack_438 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_418);
    uStack_410 = (undefined *)func_0x041681f0(&uStack_418,0xf547a30);
    puStack_408 = (undefined1 *)func_0x041681f0(&uStack_418,0xf547770);
    puStack_400 = (undefined1 *)0x0;
    puStack_3f8 = (undefined *)0x0;
    puStack_3f0 = (undefined *)0x0;
    uStack_3e8 = (long *)0x0;
    uStack_3e0 = 0;
    plStack_3d8 = (long *)0x0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_430 = (long *)0x300;
    plStack_530 = (long *)0x300;
    uStack_528 = plStack_428;
    uStack_520 = CONCAT71(uStack_520._1_7_,plStack_420._0_1_);
    uStack_538 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_518,&uStack_418);
    puStack_510 = uStack_410;
    puStack_508 = puStack_408;
    puStack_500 = puStack_400;
    puStack_4f8 = puStack_3f8;
    puStack_4f0 = puStack_3f0;
    uStack_4e8 = (undefined4)uStack_3e8;
    uStack_4e4 = uStack_3e8._4_4_;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      uStack_3e8[1] = uStack_3e8[1] + 1;
      UNLOCK();
    }
    uStack_4e0 = uStack_3e0;
    if (((ulong)plStack_3d8 & 1) == 0) {
      uStack_4c8 = uStack_3c8;
      plStack_4d8 = plStack_3d8;
      uStack_4d0 = (undefined4)uStack_3d0;
      uStack_4cc = uStack_3d0._4_4_;
    }
    else {
      func_0x0412e5e0(&plStack_4d8,uStack_3c8,uStack_3d0);
    }
    uStack_4c0 = uStack_3c0;
    func_0x0885d8f0(&uStack_1a0,&uStack_168,&uStack_538);
    func_0x0897f670(&puStack_3b8,&uStack_1a0,&UNK_012a9b85,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_4b8 = (undefined *)CONCAT44(uStack_4b8._4_4_,uStack_3a8);
    plStack_4b0 = (long *)0x0;
    uStack_4a8 = (long *)((ulong)uStack_4a8 & 0xffffffff00000000);
    plStack_4a0 = (long *)0x1;
    uStack_498 = 0;
    uStack_490 = &UNK_048b3f30;
    puStack_488 = &SUB_048b06d0;
    puStack_480 = &SUB_048b2190;
    uStack_478 = &UNK_08980300;
    uStack_470 = &UNK_089804d0;
    uStack_468 = (long *)((ulong)uStack_468 & 0xffffffff00000000);
    lStack_460 = 0;
    plStack_458 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_4b8);
    plVar9 = plStack_458;
    if (plStack_458 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_458 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_458 + 0x10))(plStack_458);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x0897f920(&puStack_3b8);
    puStack_1f8 = (undefined1 *)CONCAT71(puStack_1f8._1_7_,cStack_170);
    uStack_208 = CONCAT44(uStack_17c,uStack_180);
    uStack_200 = (undefined *)CONCAT44(uStack_174,uStack_178);
    uStack_218 = CONCAT44(uStack_18c,uStack_190);
    uStack_210 = CONCAT44(uStack_184,uStack_188);
    uStack_228 = (undefined *)CONCAT44(uStack_19c,uStack_1a0);
    uStack_220 = CONCAT44(uStack_194,uStack_198);
    func_0x048b0bc0(&plStack_3a0);
    uStack_498 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    lStack_460 = 0;
    plStack_458 = (long *)0x0;
    uStack_470 = (undefined *)0x0;
    uStack_468 = (long *)0x0;
    puStack_480 = (undefined1 *)0x0;
    uStack_478 = (undefined *)0x0;
    uStack_490 = (undefined *)0x0;
    puStack_488 = (undefined1 *)0x0;
    uStack_440 = 0;
    plStack_4b0 = (long *)0xffffffffffffffff;
    uStack_4a8 = (long *)0x0;
    plStack_4a0 = (long *)0xff;
    uStack_4b8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_498);
    uStack_490 = (undefined *)func_0x041681f0(&uStack_498,0xf547a30);
    puStack_488 = (undefined1 *)func_0x041681f0(&uStack_498,0xf547770);
    puStack_480 = (undefined1 *)0x0;
    uStack_478 = (undefined *)0x0;
    uStack_470 = (undefined *)0x0;
    uStack_468 = (long *)0x0;
    lStack_460 = 0;
    plStack_458 = (long *)0x0;
    uStack_450 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    plStack_4b0 = (long *)0x300;
    pplStack_3b0 = (long **)0x300;
    uStack_3a8 = (undefined4)uStack_4a8;
    uStack_3a4 = uStack_4a8._4_4_;
    plStack_3a0 = (long *)CONCAT71(plStack_3a0._1_7_,plStack_4a0._0_1_);
    puStack_3b8 = &UNK_0f4e3c70;
    func_0x04167a20(&lStack_398,&uStack_498);
    puStack_390 = uStack_490;
    lStack_388 = (long)puStack_488;
    lStack_380 = (long)puStack_480;
    uStack_378 = (undefined4)uStack_478;
    uStack_374 = uStack_478._4_4_;
    uStack_370 = SUB81(uStack_470,0);
    uStack_36f = (undefined2)((ulong)uStack_470 >> 8);
    uStack_36d = (undefined1)((ulong)uStack_470 >> 0x18);
    uStack_36c = uStack_470._4_4_;
    plStack_368 = uStack_468;
    if (uStack_468 != (long *)0x0) {
      LOCK();
      uStack_468[1] = uStack_468[1] + 1;
      UNLOCK();
    }
    lStack_360 = lStack_460;
    if (((ulong)plStack_458 & 1) == 0) {
      lStack_348 = uStack_448;
      plStack_358 = plStack_458;
      lStack_350 = uStack_450;
    }
    else {
      func_0x0412e5e0(&plStack_358,uStack_448,uStack_450);
    }
    lStack_340 = uStack_440;
    func_0x0885d8f0(&uStack_e8,&uStack_228,&puStack_3b8);
    puStack_3b8 = &UNK_0f4e3c70;
    if (((ulong)plStack_358 & 1) != 0) {
      func_0x0412a280(lStack_348,(ulong)plStack_358 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_368;
    if (plStack_368 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_368 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_368 + 0x10))(plStack_368);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&lStack_398);
    uStack_4b8 = &UNK_0f4e3c70;
    if (((ulong)plStack_458 & 1) != 0) {
      func_0x0412a280(uStack_448,(ulong)plStack_458 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_468;
    if (uStack_468 != (long *)0x0) {
      LOCK();
      plVar10 = uStack_468 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*uStack_468 + 0x10))(uStack_468);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_498);
    uStack_538 = &UNK_0f4e3c70;
    if (((ulong)plStack_4d8 & 1) != 0) {
      func_0x0412a280(uStack_4c8,(ulong)plStack_4d8 & 0xfffffffffffffffe);
    }
    plVar9 = (long *)CONCAT44(uStack_4e4,uStack_4e8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_518);
    puStack_438 = &UNK_0f4e3c70;
    if (((ulong)plStack_3d8 & 1) != 0) {
      func_0x0412a280(uStack_3c8,(ulong)plStack_3d8 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_3e8;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      plVar10 = uStack_3e8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_418);
  }
  if ((DAT_0f5e4800 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e4800), iVar6 != 0)) {
    func_0x08980770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4780,0xf53dab8);
    func_0x0410844d(&DAT_0f5e4800);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e4780 + 4)) * 8);
  do {
    lVar1 = *plVar9;
    if (lVar1 == -1) goto LAB_08859c10;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e4780 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_08859c10:
    puVar8 = &DAT_0f5e4780;
    if (iRam000000000f5e47e0 != -0x2b3da790) goto LAB_08859c7d;
LAB_08859c3b:
    lVar1 = *(long *)(puVar8 + 0x68);
    if (lVar1 == 0) goto LAB_08859c7d;
    bVar16 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar13 = lVar1 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar1 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x08980b90(&puStack_438,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_08859c3b;
LAB_08859c7d:
    func_0x08980b90(&puStack_438,param_1,&UNK_0146640e,0x1a);
  }
  if ((char)puStack_408 != '\0') goto LAB_0885a35a;
  if ((DAT_0f5e4820 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e4820), iVar6 != 0)) {
    func_0x08980880();
    func_0x0410844d(&DAT_0f5e4820);
  }
  puVar8 = puStack_438;
  uStack_410 = (undefined *)0xf5d6713600000001;
  if ((DAT_0f5e4800 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e4800), iVar6 != 0)) {
    func_0x08980770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4780,0xf53dab8);
    func_0x0410844d(&DAT_0f5e4800);
  }
  pplStack_3b0 = (long **)(puVar8 + 0x18);
  plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5e4780 + 4)) * 8);
  do {
    lVar1 = *plVar9;
    if (lVar1 == -1) goto LAB_08859d40;
    plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e4780 + 4));
  if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_08859d40:
    puStack_3b8 = &DAT_0f5e4780;
  }
  else {
    puStack_3b8 = (undefined *)plVar9[2];
  }
  func_0x0ed621a0(&puStack_3b8,uStack_410._4_4_);
  puStack_3b8 = (undefined *)CONCAT62(puStack_3b8._2_6_,1);
  uStack_3a8 = uStack_410._4_4_;
  plStack_3a0 = (long *)0x0;
  lStack_398 = 0;
  puStack_390 = (undefined *)0x0;
  lStack_388 = 0;
  lStack_380 = 0;
  uStack_378 = 0x67615014;
  uStack_374 = 0x6e492065;
  uStack_370 = 100;
  uStack_36f = 0x7865;
  uStack_36d = 0;
  lStack_360 = 0;
  plStack_358 = (long *)0x0;
  lStack_350 = 0;
  lStack_348 = 0;
  lStack_340 = 0;
  lStack_338 = 0;
  uStack_330 = 0x3f600000;
  pplStack_3b0 = &plStack_430;
  func_0x048afb10(&lStack_360,8);
  uStack_308 = 0;
  lStack_300 = 0;
  lStack_318 = 0;
  uStack_310 = 0;
  lStack_328 = 0;
  lStack_320 = 0;
  uStack_2f8 = 0xff00;
  uStack_2f4 = uStack_2f4 & 0xffffff00;
  uStack_2f0 = uStack_2f0 & 0xffffff00;
  uStack_2ec = 0;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0ef46ce8;
  if (plStack_3a0 != (long *)0x0) {
    lVar1 = *plStack_3a0;
    plStack_3a0 = plVar9;
    (**(code **)(lVar1 + 8))();
    plVar9 = plStack_3a0;
  }
  plStack_3a0 = plVar9;
  uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
  plStack_530 = (long *)0x0;
  uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
  uStack_520 = 1;
  uStack_518 = 0;
  puStack_510 = &UNK_0490ce30;
  puStack_508 = &SUB_048b06d0;
  puStack_500 = &SUB_0490cb20;
  puStack_4f8 = &UNK_089816a0;
  puStack_4f0 = &UNK_08981800;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  plStack_4d8 = (long *)0x0;
  FUN_048b05a0(pplStack_3b0,&uStack_538);
  plVar9 = plStack_4d8;
  if (plStack_4d8 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_4d8 + 1;
    lVar1 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
      func_0x0412c2d0(plVar9);
    }
  }
  pplVar4 = pplStack_3b0;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,_DAT_0f550a0c);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  lVar1 = lStack_398;
  plVar10 = plStack_3a0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_530 = plVar9 + 3;
  plStack_3a0 = (long *)0x0;
  lStack_398 = 0;
  plVar9[3] = (long)plVar10;
  plVar9[4] = lVar1;
  plVar9[7] = lStack_380;
  plVar9[5] = (long)puStack_390;
  plVar9[6] = lStack_388;
  puStack_390 = (undefined *)0x0;
  lStack_388 = 0;
  lStack_380 = 0;
  plVar9[10] = (long)plStack_368;
  plVar9[8] = CONCAT44(uStack_374,uStack_378);
  plVar9[9] = CONCAT44(uStack_36c,CONCAT13(uStack_36d,CONCAT21(uStack_36f,uStack_370)));
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_36f = 0;
  uStack_36d = 0;
  uStack_36c = 0;
  plStack_368 = (long *)0x0;
  plVar9[0xb] = lStack_360;
  plVar9[0xc] = (long)plStack_358;
  plVar9[0xd] = lStack_350;
  lStack_360 = 0;
  plStack_358 = (long *)0x0;
  lStack_350 = 0;
  plVar9[0xe] = lStack_348;
  plVar9[0xf] = lStack_340;
  plVar9[0x10] = lStack_338;
  lStack_348 = 0;
  lStack_340 = 0;
  lStack_338 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_330;
  plVar9[0x12] = lStack_328;
  plVar9[0x13] = lStack_320;
  plVar9[0x14] = lStack_318;
  lStack_328 = 0;
  lStack_320 = 0;
  lStack_318 = 0;
  plVar9[0x17] = lStack_300;
  *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_310;
  *(undefined4 *)((long)plVar9 + 0xac) = uStack_310._4_4_;
  *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_308;
  *(undefined4 *)((long)plVar9 + 0xb4) = uStack_308._4_4_;
  uStack_310 = 0;
  uStack_308 = 0;
  lStack_300 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_2ec,CONCAT43(uStack_2f0,uStack_2f4._1_3_));
  plVar9[0x18] = CONCAT44(uStack_2f4,CONCAT22(uStack_2f6,uStack_2f8));
  uStack_4b8 = (undefined *)0x0;
  plStack_4b0 = (long *)0x0;
  uStack_528 = plVar9;
  func_0x048afd20(pplVar4,&uStack_538);
  plVar9 = uStack_528;
  if (uStack_528 != (long *)0x0) {
    LOCK();
    plVar10 = uStack_528 + 1;
    lVar1 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*uStack_528 + 0x10))(uStack_528);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_4b0;
  if (plStack_4b0 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_4b0 + 1;
    lVar1 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_4b0 + 0x10))(plStack_4b0);
      func_0x0412c2d0(plVar9);
    }
  }
  puVar8 = puStack_438;
  plVar9 = pplVar4[2];
  iVar6 = *(int *)((long)pplVar4 + 0x1c);
  if (iVar6 == 2) {
    piVar12 = *(int **)(plVar9[0xf] + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != *(int *)(pplVar4 + 3)) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    for (; *(long **)(piVar12 + 0xc) != pplVar4[1]; piVar12 = *(int **)(piVar12 + 0xe)) {
    }
LAB_0885a22a:
    piVar12[4] = piVar12[4] | (int)puStack_3b8 << 0x10;
  }
  else {
    if (iVar6 == 1) {
      piVar12 = *(int **)(plVar9[0xf] + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)(pplVar4 + 3)) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0885a22a;
    }
    if (iVar6 == 0) {
      *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | (int)puStack_3b8 << 0x10;
    }
  }
  iVar6 = (int)uStack_410;
  uVar2 = uStack_410._4_4_;
  func_0x048b0bc0(&plStack_3a0);
  if ((DAT_0f5e4800 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5e4800), iVar7 != 0)) {
    func_0x08980770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4780,0xf53dab8);
    func_0x0410844d(&DAT_0f5e4800);
  }
  plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5e4780 + 4)) * 8);
  do {
    lVar1 = *plVar9;
    if (lVar1 == -1) goto LAB_0885a2b0;
    plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e4780 + 4));
  if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_0885a2b0:
    puVar14 = &DAT_0f5e4780;
  }
  else {
    puVar14 = (undefined *)plVar9[2];
  }
  if ((1 < iVar6 - 1U) &&
     (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0122a02c),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar14,uVar2,1);
  if (puVar8 == (undefined *)0x0) {
    puStack_3b8 = (undefined *)0x0;
    pplStack_3b0 = (long **)0x0;
    FUN_048b0d20(&puStack_3b8);
    puVar8 = puStack_3b8;
  }
  *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
LAB_0885a35a:
  if ((DAT_0f5e48b8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e48b8), iVar6 != 0)) {
    func_0x08981a90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4838,0xf53dab8);
    func_0x0410844d(&DAT_0f5e48b8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e4838 + 4)) * 8);
  do {
    lVar1 = *plVar9;
    if (lVar1 == -1) goto LAB_0885a3b0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e4838 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0885a3b0:
    puVar8 = &DAT_0f5e4838;
    iVar6 = iRam000000000f5e4898;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar6 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar1 = *(long *)((long)puVar8 + 0x68), lVar1 != 0)) {
    bVar16 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar13 = lVar1 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar1 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x08981eb0(&puStack_438,param_1,lVar13,uVar11);
  }
  else {
    func_0x08981eb0(&puStack_438,param_1,&UNK_011dac80,0x19);
  }
  if ((char)puStack_408 == '\0') {
    func_0x089829c0(&puStack_3b8,&puStack_438,&UNK_01466403,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_0490ce30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &SUB_0490cb20;
    puStack_4f8 = &UNK_08982f70;
    puStack_4f0 = &UNK_089830d0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08982c70(&puStack_3b8);
    puVar14 = uStack_410;
    puVar8 = puStack_438;
    plStack_2e8 = plStack_430;
    plStack_2e0 = plStack_428;
    plStack_2d8 = plStack_420;
    uStack_2d0 = uStack_418;
    iVar6 = (int)uStack_410;
    uVar2 = uStack_410._4_4_;
    uVar3 = (char)puStack_408;
    func_0x048b0bc0(&plStack_3a0);
    if ((DAT_0f5e48b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5e48b8), iVar7 != 0)) {
      func_0x08981a90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4838,0xf53dab8);
      func_0x0410844d(&DAT_0f5e48b8);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5e4838 + 4)) * 8);
    do {
      lVar1 = *plVar9;
      if (lVar1 == -1) goto LAB_0885a631;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar1 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e4838 + 4))
    ;
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_0885a631:
      puVar15 = &DAT_0f5e4838;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013b39eb),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar2,1);
    if (puVar15 == (undefined *)0x0) {
      puStack_3b8 = (undefined *)0x0;
      pplStack_3b0 = (long **)0x0;
      FUN_048b0d20(&puStack_3b8);
      puVar15 = puStack_3b8;
    }
    *(undefined1 *)(*(long *)(puVar15 + 0x58) + 0xa8) = 1;
    uStack_4b8 = puVar8;
    plStack_4b0 = plStack_2e8;
    uStack_4a8 = plStack_2e0;
    plStack_4a0 = plStack_2d8;
    uStack_498 = uStack_2d0;
    uStack_490 = puVar14;
    puStack_488 = (undefined1 *)CONCAT71(puStack_488._1_7_,uVar3);
    func_0x089829c0(&puStack_3b8,&uStack_4b8,&UNK_0144e5df,0xf);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_0490ce30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &SUB_0490cb20;
    puStack_4f8 = &UNK_089832a0;
    puStack_4f0 = &UNK_08983400;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08982c70(&puStack_3b8);
    puVar8 = uStack_4b8;
    iVar6 = (int)uStack_490;
    uVar2 = uStack_490._4_4_;
    func_0x048b0bc0(&plStack_3a0);
    if ((DAT_0f5e48b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5e48b8), iVar7 != 0)) {
      func_0x08981a90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e4838,0xf53dab8);
      func_0x0410844d(&DAT_0f5e48b8);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5e4838 + 4)) * 8);
    do {
      lVar1 = *plVar9;
      if (lVar1 == -1) goto LAB_0885a8d0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar1 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e4838 + 4))
    ;
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_0885a8d0:
      puVar14 = &DAT_0f5e4838;
    }
    else {
      puVar14 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013b39eb),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar14,uVar2,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_3b8 = (undefined *)0x0;
      pplStack_3b0 = (long **)0x0;
      FUN_048b0d20(&puStack_3b8);
      puVar8 = puStack_3b8;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5e4970 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e4970), iVar6 != 0)) {
    func_0x089836a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e48f0,0xf53dab8);
    func_0x0410844d(&DAT_0f5e4970);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e48f0 + 4)) * 8);
  do {
    lVar1 = *plVar9;
    if (lVar1 == -1) goto LAB_0885a9d0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e48f0 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0885a9d0:
    puVar8 = &DAT_0f5e48f0;
    iVar6 = iRam000000000f5e4950;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar6 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar1 = *(long *)(puVar8 + 0x68), lVar1 != 0)) {
    bVar16 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar13 = lVar1 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar1 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar1 + 0x10);
    }
    FUN_08983df0(&uStack_1a0,param_1,lVar13,uVar11);
  }
  else {
    FUN_08983df0(&uStack_1a0,param_1,&UNK_01311356,0x18);
  }
  if (cStack_170 == '\0') {
    uStack_228._4_4_ = (undefined4)((ulong)uStack_228 >> 0x20);
    uStack_1d8._4_4_ = (uint)((ulong)uStack_1d8 >> 0x20);
    func_0x08984960(&puStack_3b8,&uStack_1a0,&UNK_012c0d9f,5);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_048b3f30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &SUB_048b2190;
    puStack_4f8 = &UNK_08984ef0;
    puStack_4f0 = &UNK_089850b0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08984bf0(&puStack_3b8);
    cStack_78 = cStack_170;
    uStack_88 = uStack_180;
    uStack_84 = uStack_17c;
    uStack_80 = uStack_178;
    uStack_7c = uStack_174;
    uStack_98 = uStack_190;
    uStack_94 = uStack_18c;
    uStack_90 = uStack_188;
    uStack_8c = uStack_184;
    uStack_a8 = uStack_1a0;
    uStack_a4 = uStack_19c;
    uStack_a0 = uStack_198;
    uStack_9c = uStack_194;
    func_0x048b0bc0(&plStack_3a0);
    uStack_418 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3e0 = 0;
    plStack_3d8 = (long *)0x0;
    puStack_3f0 = (undefined *)0x0;
    uStack_3e8 = (long *)0x0;
    puStack_400 = (undefined1 *)0x0;
    puStack_3f8 = (undefined *)0x0;
    uStack_410 = (undefined *)0x0;
    puStack_408 = (undefined1 *)0x0;
    uStack_3c0 = 0;
    plStack_430 = (long *)0xffffffffffffffff;
    plStack_428 = (long *)0x0;
    plStack_420 = (long *)0xff;
    puStack_438 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_418);
    uStack_410 = (undefined *)func_0x041681f0(&uStack_418,0xf547a30);
    puStack_408 = (undefined1 *)func_0x041681f0(&uStack_418,0xf547770);
    puStack_400 = (undefined1 *)0x0;
    puStack_3f8 = (undefined *)0x0;
    puStack_3f0 = (undefined *)0x0;
    uStack_3e8 = (long *)0x0;
    uStack_3e0 = 0;
    plStack_3d8 = (long *)0x0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_430 = (long *)0x300;
    plStack_530 = (long *)0x300;
    uStack_528 = plStack_428;
    uStack_520 = CONCAT71(uStack_520._1_7_,plStack_420._0_1_);
    uStack_538 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_518,&uStack_418);
    puStack_510 = uStack_410;
    puStack_508 = puStack_408;
    puStack_500 = puStack_400;
    puStack_4f8 = puStack_3f8;
    puStack_4f0 = puStack_3f0;
    uStack_4e8 = (undefined4)uStack_3e8;
    uStack_4e4 = uStack_3e8._4_4_;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      uStack_3e8[1] = uStack_3e8[1] + 1;
      UNLOCK();
    }
    uStack_4e0 = uStack_3e0;
    if (((ulong)plStack_3d8 & 1) == 0) {
      uStack_4c8 = uStack_3c8;
      plStack_4d8 = plStack_3d8;
      uStack_4d0 = (undefined4)uStack_3d0;
      uStack_4cc = uStack_3d0._4_4_;
    }
    else {
      func_0x0412e5e0(&plStack_4d8,uStack_3c8,uStack_3d0);
    }
    uStack_4c0 = uStack_3c0;
    func_0x0885dd10(&uStack_128,&uStack_a8,&uStack_538);
    func_0x08984960(&puStack_3b8,&uStack_128,&UNK_012446c1,6);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_4b8 = (undefined *)CONCAT44(uStack_4b8._4_4_,uStack_3a8);
    plStack_4b0 = (long *)0x0;
    uStack_4a8 = (long *)((ulong)uStack_4a8 & 0xffffffff00000000);
    plStack_4a0 = (long *)0x1;
    uStack_498 = 0;
    uStack_490 = &UNK_048b3f30;
    puStack_488 = &SUB_048b06d0;
    puStack_480 = &SUB_048b2190;
    uStack_478 = &UNK_08985280;
    uStack_470 = &UNK_08985450;
    uStack_468 = (long *)((ulong)uStack_468 & 0xffffffff00000000);
    lStack_460 = 0;
    plStack_458 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_4b8);
    plVar9 = plStack_458;
    if (plStack_458 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_458 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_458 + 0x10))(plStack_458);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08984bf0(&puStack_3b8);
    uStack_b8 = uStack_f8;
    uStack_c8 = uStack_108;
    uStack_c4 = uStack_104;
    uStack_c0 = uStack_100;
    uStack_bc = uStack_fc;
    uStack_d8 = uStack_118;
    uStack_d4 = uStack_114;
    uStack_d0 = uStack_110;
    uStack_cc = uStack_10c;
    uStack_e8 = (undefined4)uStack_128;
    uStack_e4 = uStack_128._4_4_;
    uStack_e0 = (undefined4)uStack_120;
    uStack_dc = uStack_120._4_4_;
    func_0x048b0bc0(&plStack_3a0);
    uStack_2c8 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    lStack_290 = 0;
    plStack_288 = (long *)0x0;
    uStack_2a0 = 0;
    plStack_298 = (long *)0x0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = (undefined *)0x0;
    uStack_2b8 = 0;
    uStack_270 = 0;
    plStack_2e0 = (long *)0xffffffffffffffff;
    plStack_2d8 = (long *)0x0;
    uStack_2d0 = 0xff;
    plStack_2e8 = (long *)&UNK_0f4e3c70;
    func_0x041679a0(&uStack_2c8);
    uStack_2c0 = (undefined *)func_0x041681f0(&uStack_2c8,0xf547a30);
    uStack_2b8 = func_0x041681f0(&uStack_2c8,0xf547770);
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    plStack_298 = (long *)0x0;
    lStack_290 = 0;
    plStack_288 = (long *)0x0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_2e0 = (long *)0x300;
    plStack_4b0 = (long *)0x300;
    uStack_4a8 = plStack_2d8;
    plStack_4a0 = (long *)CONCAT71(plStack_4a0._1_7_,(undefined1)uStack_2d0);
    uStack_4b8 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_498,&uStack_2c8);
    uStack_490 = uStack_2c0;
    puStack_488 = (undefined1 *)uStack_2b8;
    puStack_480 = (undefined1 *)uStack_2b0;
    uStack_478 = (undefined *)uStack_2a8;
    uStack_470 = (undefined *)uStack_2a0;
    uStack_468 = plStack_298;
    if (plStack_298 != (long *)0x0) {
      LOCK();
      plStack_298[1] = plStack_298[1] + 1;
      UNLOCK();
    }
    lStack_460 = lStack_290;
    if (((ulong)plStack_288 & 1) == 0) {
      uStack_448 = uStack_278;
      plStack_458 = plStack_288;
      uStack_450 = uStack_280;
    }
    else {
      func_0x0412e5e0(&plStack_458,uStack_278,uStack_280);
    }
    uStack_440 = uStack_270;
    func_0x0885dd10(&uStack_260,&uStack_e8,&uStack_4b8);
    func_0x08984960(&puStack_3b8,&uStack_260,&UNK_012925ec,4);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_228 = (undefined *)CONCAT44(uStack_228._4_4_,uStack_3a8);
    uStack_220 = 0;
    uStack_218 = uStack_218 & 0xffffffff00000000;
    uStack_210 = 1;
    uStack_208 = 0;
    uStack_200 = &UNK_048b3f30;
    puStack_1f8 = &SUB_048b06d0;
    puStack_1f0 = &SUB_048b2190;
    uStack_1e8 = &UNK_08985630;
    uStack_1e0 = &UNK_08985800;
    uStack_1d8 = (long *)((ulong)uStack_1d8._4_4_ << 0x20);
    lStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_228);
    plVar9 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_1c8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08984bf0(&puStack_3b8);
    uStack_138 = uStack_230;
    uStack_148 = uStack_240;
    uStack_144 = uStack_23c;
    iStack_140 = iStack_238;
    uStack_13c = uStack_234;
    uStack_158 = uStack_250;
    uStack_154 = uStack_24c;
    uStack_150 = uStack_248;
    uStack_14c = uStack_244;
    uStack_168 = (undefined4)uStack_260;
    uStack_164 = uStack_260._4_4_;
    uStack_160 = uStack_258;
    uStack_15c = uStack_254;
    func_0x048b0bc0(&plStack_3a0);
    uStack_208 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    lStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    uStack_1e0 = (undefined *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1f0 = (undefined1 *)0x0;
    uStack_1e8 = (undefined *)0x0;
    uStack_200 = (undefined *)0x0;
    puStack_1f8 = (undefined1 *)0x0;
    uStack_1b0 = 0;
    uStack_220 = 0xffffffffffffffff;
    uStack_218 = 0;
    uStack_210 = 0xff;
    uStack_228 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_208);
    uStack_200 = (undefined *)func_0x041681f0(&uStack_208,0xf547a30);
    puStack_1f8 = (undefined1 *)func_0x041681f0(&uStack_208,0xf547770);
    puStack_1f0 = (undefined1 *)0x0;
    uStack_1e8 = (undefined *)0x0;
    uStack_1e0 = (undefined *)0x0;
    uStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_220 = 0x300;
    pplStack_3b0 = (long **)0x300;
    uStack_3a8 = (undefined4)uStack_218;
    uStack_3a4 = uStack_218._4_4_;
    plStack_3a0 = (long *)CONCAT71(plStack_3a0._1_7_,(undefined1)uStack_210);
    puStack_3b8 = &UNK_0f4e3c70;
    func_0x04167a20(&lStack_398,&uStack_208);
    puStack_390 = uStack_200;
    lStack_388 = (long)puStack_1f8;
    lStack_380 = (long)puStack_1f0;
    uStack_378 = (undefined4)uStack_1e8;
    uStack_374 = uStack_1e8._4_4_;
    uStack_370 = SUB81(uStack_1e0,0);
    uStack_36f = (undefined2)((ulong)uStack_1e0 >> 8);
    uStack_36d = (undefined1)((ulong)uStack_1e0 >> 0x18);
    uStack_36c = uStack_1e0._4_4_;
    plStack_368 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      uStack_1d8[1] = uStack_1d8[1] + 1;
      UNLOCK();
    }
    lStack_360 = lStack_1d0;
    if (((ulong)plStack_1c8 & 1) == 0) {
      lStack_348 = uStack_1b8;
      plStack_358 = plStack_1c8;
      lStack_350 = uStack_1c0;
    }
    else {
      func_0x0412e5e0(&plStack_358,uStack_1b8,uStack_1c0);
    }
    lStack_340 = uStack_1b0;
    func_0x0885dd10(auStack_68,&uStack_168,&puStack_3b8);
    puStack_3b8 = &UNK_0f4e3c70;
    if (((ulong)plStack_358 & 1) != 0) {
      func_0x0412a280(lStack_348,(ulong)plStack_358 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_368;
    if (plStack_368 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_368 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_368 + 0x10))(plStack_368);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&lStack_398);
    uStack_228 = &UNK_0f4e3c70;
    if (((ulong)plStack_1c8 & 1) != 0) {
      func_0x0412a280(uStack_1b8,(ulong)plStack_1c8 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar10 = uStack_1d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_208);
    uStack_4b8 = &UNK_0f4e3c70;
    if (((ulong)plStack_458 & 1) != 0) {
      func_0x0412a280(uStack_448,(ulong)plStack_458 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_468;
    if (uStack_468 != (long *)0x0) {
      LOCK();
      plVar10 = uStack_468 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*uStack_468 + 0x10))(uStack_468);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_498);
    plStack_2e8 = (long *)&UNK_0f4e3c70;
    if (((ulong)plStack_288 & 1) != 0) {
      func_0x0412a280(uStack_278,(ulong)plStack_288 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_298;
    if (plStack_298 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_298 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_298 + 0x10))(plStack_298);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_2c8);
    uStack_538 = &UNK_0f4e3c70;
    if (((ulong)plStack_4d8 & 1) != 0) {
      func_0x0412a280(uStack_4c8,(ulong)plStack_4d8 & 0xfffffffffffffffe);
    }
    plVar9 = (long *)CONCAT44(uStack_4e4,uStack_4e8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_518);
    puStack_438 = &UNK_0f4e3c70;
    if (((ulong)plStack_3d8 & 1) != 0) {
      func_0x0412a280(uStack_3c8,(ulong)plStack_3d8 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_3e8;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      plVar10 = uStack_3e8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_418);
  }
  if ((DAT_0f5e4550 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e4550), iVar6 != 0)) {
    func_0x0897a2c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e44d0,0xf53dab8);
    func_0x0410844d(&DAT_0f5e4550);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e44d0 + 4)) * 8);
  do {
    lVar1 = *plVar9;
    if (lVar1 == -1) goto LAB_0885b720;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e44d0 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0885b720:
    puVar8 = &DAT_0f5e44d0;
    iVar6 = iRam000000000f5e4530;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar6 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar1 = *(long *)(puVar8 + 0x68), lVar1 != 0)) {
    bVar16 = (*(byte *)(lVar1 + 8) & 1) != 0;
    lVar13 = lVar1 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar1 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar1 + 0x10);
    }
    func_0x089859e0(&puStack_438,param_1,lVar13,uVar11);
  }
  else {
    func_0x089859e0(&puStack_438,param_1,&UNK_0120ebaf,0x15);
  }
  if ((char)puStack_408 == '\0') {
    func_0x08986560(&puStack_3b8,&puStack_438,&UNK_01434c3b);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_0490ce30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &SUB_0490cb20;
    puStack_4f8 = &UNK_08986af0;
    puStack_4f0 = &UNK_08986c50;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x089867f0(&puStack_3b8);
    puVar14 = uStack_410;
    puVar8 = puStack_438;
    plStack_2e8 = plStack_430;
    plStack_2e0 = plStack_428;
    plStack_2d8 = plStack_420;
    uStack_2d0 = uStack_418;
    iVar6 = (int)uStack_410;
    uVar2 = uStack_410._4_4_;
    uVar3 = (char)puStack_408;
    func_0x048b0bc0(&plStack_3a0);
    if ((DAT_0f5e4550 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5e4550), iVar7 != 0)) {
      func_0x0897a2c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e44d0,0xf53dab8);
      func_0x0410844d(&DAT_0f5e4550);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5e44d0 + 4)) * 8);
    do {
      lVar1 = *plVar9;
      if (lVar1 == -1) goto LAB_0885b990;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar1 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5e44d0 + 4))
    ;
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_0885b990:
      puVar15 = &DAT_0f5e44d0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120edbb),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar2,1);
    if (puVar15 == (undefined *)0x0) {
      puStack_3b8 = (undefined *)0x0;
      pplStack_3b0 = (long **)0x0;
      FUN_048b0d20(&puStack_3b8);
      puVar15 = puStack_3b8;
    }
    *(undefined1 *)(*(long *)(puVar15 + 0x58) + 0xa8) = 1;
    uStack_4b8 = puVar8;
    plStack_4b0 = plStack_2e8;
    uStack_4a8 = plStack_2e0;
    plStack_4a0 = plStack_2d8;
    uStack_498 = uStack_2d0;
    uStack_490 = puVar14;
    puStack_488 = (undefined1 *)CONCAT71(puStack_488._1_7_,uVar3);
    func_0x08986560(&puStack_3b8,&uStack_4b8,&UNK_0130dd5a);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f134148;
    if (plStack_3a0 != (long *)0x0) {
      lVar1 = *plStack_3a0;
      plStack_3a0 = plVar9;
      (**(code **)(lVar1 + 8))();
      plVar9 = plStack_3a0;
    }
    plStack_3a0 = plVar9;
    uStack_538 = (undefined *)CONCAT44(uStack_538._4_4_,uStack_3a8);
    plStack_530 = (long *)0x0;
    uStack_528 = (long *)((ulong)uStack_528 & 0xffffffff00000000);
    uStack_520 = 1;
    uStack_518 = 0;
    puStack_510 = &UNK_0898de30;
    puStack_508 = &SUB_048b06d0;
    puStack_500 = &UNK_0898b5b0;
    puStack_4f8 = &UNK_0898def0;
    puStack_4f0 = &UNK_0898e130;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    plStack_4d8 = (long *)0x0;
    FUN_048b05a0(pplStack_3b0,&uStack_538);
    plVar9 = plStack_4d8;
    if (plStack_4d8 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_4d8 + 1;
      lVar1 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x089867f0(&puStack_3b8);
    func_0x048b0bc0(&plStack_3a0);
  }
  return;
}


