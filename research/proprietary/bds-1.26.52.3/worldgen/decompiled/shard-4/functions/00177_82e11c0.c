/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83e11c0 (ELF vaddr 0x82e11c0)
 * Label: caller-of-callee
 * Body:  [[083e11c0, 083e27c1] [083e27d0, 083e29ea] [083e29f0, 083e2d61]]
 * Ghidra: FUN_083e11c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083e11c0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined *puVar13;
  bool bVar14;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined *puStack_520;
  undefined1 *puStack_518;
  undefined1 *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  undefined *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined4 uStack_4b8;
  long *plStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined1 uStack_488;
  undefined7 uStack_487;
  undefined1 uStack_480;
  undefined1 uStack_47f;
  undefined6 uStack_47e;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  undefined4 uStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined2 uStack_408;
  undefined2 uStack_406;
  uint uStack_404;
  uint uStack_400;
  undefined1 uStack_3fc;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long *plStack_3a8;
  long lStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
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
  char cStack_348;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  undefined1 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  undefined1 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  char cStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
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
  char cStack_120;
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
  char cStack_e8;
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
  
  func_0x07dd2aa0();
  func_0x07dbb550(param_1);
  func_0x07dc0570(param_1);
  if ((DAT_0f5d1190 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5d1190), iVar5 != 0)) {
    func_0x0845e160();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d1110,0xf53dab8);
    func_0x0410844d(&DAT_0f5d1190);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d1110 + 4)) * 8);
  do {
    lVar8 = *plVar7;
    if (lVar8 == -1) goto LAB_083e1250;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d1110 + 4));
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_083e1250:
    puVar6 = &DAT_0f5d1110;
    if (iRam000000000f5d1170 != -0x2b3da790) goto LAB_083e12bd;
LAB_083e127b:
    lVar8 = *(long *)(puVar6 + 0x68);
    if (lVar8 == 0) goto LAB_083e12bd;
    bVar14 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar11 = lVar8 + 9;
    if (bVar14) {
      lVar11 = *(long *)(lVar8 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar14) {
      uVar10 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0845ea70(&uStack_150,param_1,lVar11,uVar10);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_083e127b;
LAB_083e12bd:
    func_0x0845ea70(&uStack_150,param_1,&UNK_0128f784,0x10);
  }
  if (cStack_120 == '\0') {
    uStack_278._4_4_ = (undefined4)((ulong)uStack_278 >> 0x20);
    uStack_4f8._4_4_ = (uint)((ulong)uStack_4f8 >> 0x20);
    uStack_538._4_4_ = (uint)((ulong)uStack_538 >> 0x20);
    uStack_548._4_4_ = (undefined4)((ulong)uStack_548 >> 0x20);
    func_0x0845f5e0(&puStack_4c8,&uStack_150,&UNK_012dd008,0x11);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f0fade0;
    if (plStack_4b0 != (long *)0x0) {
      lVar8 = *plStack_4b0;
      plStack_4b0 = plVar7;
      (**(code **)(lVar8 + 8))();
      plVar7 = plStack_4b0;
    }
    plStack_4b0 = plVar7;
    uStack_548 = (undefined *)CONCAT44(uStack_548._4_4_,uStack_4b8);
    uStack_540 = (long *)0x0;
    uStack_538 = (long *)((ulong)uStack_538._4_4_ << 0x20);
    uStack_530 = 1;
    uStack_528 = 0;
    puStack_520 = &UNK_07e3b870;
    puStack_518 = &SUB_048b06d0;
    puStack_510 = &SUB_07e3b560;
    puStack_508 = &UNK_0845fb90;
    puStack_500 = &UNK_0845fcf0;
    uStack_4f8 = (long *)((ulong)uStack_4f8._4_4_ << 0x20);
    lStack_4f0 = 0;
    uStack_4e8 = (long *)0x0;
    func_0x048b05a0(puStack_4c0,&uStack_548);
    plVar7 = uStack_4e8;
    if (uStack_4e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4e8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_4e8 + 0x10))(uStack_4e8);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0845f890(&puStack_4c8);
    cStack_348 = cStack_120;
    uStack_358 = uStack_130;
    uStack_354 = uStack_12c;
    iStack_350 = iStack_128;
    uStack_34c = uStack_124;
    uStack_368 = uStack_140;
    uStack_364 = uStack_13c;
    uStack_360 = uStack_138;
    uStack_35c = uStack_134;
    uStack_378 = uStack_150;
    uStack_374 = uStack_14c;
    uStack_370 = uStack_148;
    uStack_36c = uStack_144;
    func_0x048b0bc0(&plStack_4b0);
    if (iStack_350 == 4) {
      lVar8 = func_0x0845fec0(&uStack_378);
      lVar8 = *(long *)(lVar8 + 0x48);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
LAB_083e15f5:
      puVar9[1] = 0xffffffffffffffff;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0xff;
      *puVar9 = &UNK_0f118718;
      plVar7 = *(long **)(lVar8 + 8);
      *(undefined8 **)(lVar8 + 8) = puVar9;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x28))();
      }
    }
    else if (iStack_350 == 1) {
      lVar8 = CONCAT44(uStack_374,uStack_378);
      if ((DAT_0f5d1190 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5d1190), iVar5 != 0)) {
        func_0x0845e160();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5d1110,0xf53dab8);
        func_0x0410844d(&DAT_0f5d1190);
      }
      plVar7 = (long *)(*(long *)(lVar8 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar8 + 0x20) - *(long *)(lVar8 + 0x18)) >> 3
                                    ) - 1U & *(uint *)(_DAT_0f5d1110 + 4)) * 8);
      do {
        lVar11 = *plVar7;
        if (lVar11 == -1) goto LAB_083e14e0;
        plVar7 = (long *)(*(long *)(lVar8 + 0x30) + lVar11 * 0x18);
      } while (*(uint *)(*(long *)(lVar8 + 0x30) + 8 + lVar11 * 0x18) !=
               *(uint *)(_DAT_0f5d1110 + 4));
      if (plVar7 == *(long **)(lVar8 + 0x38)) {
LAB_083e14e0:
        puVar6 = &DAT_0f5d1110;
      }
      else {
        puVar6 = (undefined *)plVar7[2];
      }
      if ((1 < iStack_350 - 1U) &&
         (cVar3 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012f7676),
         cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      puVar6 = (undefined *)FUN_048b0c90(lVar8 + 0x18,puVar6,uStack_34c,1);
      if (puVar6 == (undefined *)0x0) {
        puStack_4c8 = (undefined *)0x0;
        puStack_4c0 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_4c8);
        puVar6 = puStack_4c8;
      }
      lVar8 = *(long *)(puVar6 + 0x58);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      goto LAB_083e15f5;
    }
    cStack_1d8 = cStack_348;
    uStack_1e8 = uStack_358;
    uStack_1e4 = uStack_354;
    iStack_1e0 = iStack_350;
    uStack_1dc = uStack_34c;
    uStack_1f8 = uStack_368;
    uStack_1f4 = uStack_364;
    uStack_1f0 = uStack_360;
    uStack_1ec = uStack_35c;
    uStack_208 = uStack_378;
    uStack_204 = uStack_374;
    uStack_200 = uStack_370;
    uStack_1fc = uStack_36c;
    func_0x0845f5e0(&puStack_4c8,&uStack_208,&UNK_011bda56,7);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f0fae58;
    if (plStack_4b0 != (long *)0x0) {
      lVar8 = *plStack_4b0;
      plStack_4b0 = plVar7;
      (**(code **)(lVar8 + 8))();
      plVar7 = plStack_4b0;
    }
    plStack_4b0 = plVar7;
    uStack_548 = (undefined *)CONCAT44(uStack_548._4_4_,uStack_4b8);
    uStack_540 = (long *)0x0;
    uStack_538 = (long *)((ulong)uStack_538 & 0xffffffff00000000);
    uStack_530 = 1;
    uStack_528 = 0;
    puStack_520 = &UNK_07e53230;
    puStack_518 = &SUB_048b06d0;
    puStack_510 = &UNK_07e51a10;
    puStack_508 = &UNK_08460510;
    puStack_500 = &UNK_08460750;
    uStack_4f8 = (long *)((ulong)uStack_4f8 & 0xffffffff00000000);
    lStack_4f0 = 0;
    uStack_4e8 = (long *)0x0;
    func_0x048b05a0(puStack_4c0,&uStack_548);
    plVar7 = uStack_4e8;
    if (uStack_4e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4e8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_4e8 + 0x10))(uStack_4e8);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0845f890(&puStack_4c8);
    cStack_e8 = cStack_1d8;
    uStack_f8 = uStack_1e8;
    uStack_f4 = uStack_1e4;
    iStack_f0 = iStack_1e0;
    uStack_ec = uStack_1dc;
    uStack_108 = uStack_1f8;
    uStack_104 = uStack_1f4;
    uStack_100 = uStack_1f0;
    uStack_fc = uStack_1ec;
    uStack_118 = uStack_208;
    uStack_114 = uStack_204;
    uStack_110 = uStack_200;
    uStack_10c = uStack_1fc;
    func_0x048b0bc0(&plStack_4b0);
    uStack_2e8 = 0;
    uStack_2e0 = 0xff;
    puStack_2f8 = &UNK_0f4e3cf0;
    uStack_2d0 = 0;
    plStack_2c8 = (long *)0x0;
    uStack_2c0 = 0;
    uStack_2d8 = 1;
    uStack_2f0 = 100;
    uStack_2b0 = 100;
    uStack_2a8 = 0;
    uStack_2a0 = 0xff;
    puStack_2b8 = &UNK_0f4e3cf0;
    uStack_298 = 1;
    uStack_290 = 0;
    plStack_288 = (long *)0x0;
    uStack_280 = 0;
    func_0x0845de30(&uStack_a0,&uStack_118,&puStack_2b8);
    uStack_198 = uStack_70;
    uStack_1a8 = uStack_80;
    uStack_1a4 = uStack_7c;
    uStack_1a0 = uStack_78;
    uStack_19c = uStack_74;
    uStack_1b8 = uStack_90;
    uStack_1b4 = uStack_8c;
    uStack_1b0 = uStack_88;
    uStack_1ac = uStack_84;
    uStack_1c8 = uStack_a0;
    uStack_1c4 = uStack_9c;
    uStack_1c0 = uStack_98;
    uStack_1bc = uStack_94;
    func_0x0845f5e0(&puStack_4c8,&uStack_1c8,&UNK_01345c27,0x11);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef474e0;
    if (plStack_4b0 != (long *)0x0) {
      lVar8 = *plStack_4b0;
      plStack_4b0 = plVar7;
      (**(code **)(lVar8 + 8))();
      plVar7 = plStack_4b0;
    }
    plStack_4b0 = plVar7;
    uStack_548 = (undefined *)CONCAT44(uStack_548._4_4_,uStack_4b8);
    uStack_540 = (long *)0x0;
    uStack_538 = (long *)((ulong)uStack_538 & 0xffffffff00000000);
    uStack_530 = 1;
    uStack_528 = 0;
    puStack_520 = &UNK_049119f0;
    puStack_518 = &SUB_048b06d0;
    puStack_510 = &SUB_0490fc00;
    puStack_508 = &UNK_08460930;
    puStack_500 = &UNK_08460b30;
    uStack_4f8 = (long *)((ulong)uStack_4f8 & 0xffffffff00000000);
    lStack_4f0 = 0;
    uStack_4e8 = (long *)0x0;
    func_0x048b05a0(puStack_4c0,&uStack_548);
    plVar7 = uStack_4e8;
    if (uStack_4e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4e8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_4e8 + 0x10))(uStack_4e8);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0845f890(&puStack_4c8);
    uStack_a8 = (undefined1)uStack_198;
    uStack_b8 = uStack_1a8;
    uStack_b4 = uStack_1a4;
    uStack_b0 = uStack_1a0;
    uStack_ac = uStack_19c;
    uStack_c8 = uStack_1b8;
    uStack_c4 = uStack_1b4;
    uStack_c0 = uStack_1b0;
    uStack_bc = uStack_1ac;
    uStack_d8 = uStack_1c8;
    uStack_d4 = uStack_1c4;
    uStack_d0 = uStack_1c0;
    uStack_cc = uStack_1bc;
    func_0x048b0bc0(&plStack_4b0);
    uStack_3d8 = 0;
    uStack_390 = 0;
    lStack_388 = 0;
    lStack_3a0 = 0;
    plStack_398 = (long *)0x0;
    lStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uStack_3d0 = 0;
    lStack_3c8 = 0;
    lStack_380 = 0;
    uStack_3f0 = 0xffffffffffffffff;
    uStack_3e8 = 0;
    uStack_3e0 = 0xff;
    puStack_3f8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_3d8);
    uStack_3d0 = FUN_041681f0(&uStack_3d8,0xf547a30);
    lStack_3c8 = FUN_041681f0(&uStack_3d8,0xf547770);
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    lStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    lStack_3a0 = 0;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    lStack_388 = 0;
    lStack_380 = 0;
    uStack_3f0 = 1000;
    uStack_540 = (long *)0x3e8;
    uStack_538 = (long *)uStack_3e8;
    uStack_530 = CONCAT71(uStack_530._1_7_,(undefined1)uStack_3e0);
    uStack_548 = &UNK_0f4e3c70;
    FUN_04167a20(&uStack_528,&uStack_3d8);
    puStack_520 = (undefined *)uStack_3d0;
    puStack_518 = (undefined1 *)lStack_3c8;
    puStack_510 = (undefined1 *)lStack_3c0;
    puStack_508 = (undefined *)lStack_3b8;
    puStack_500 = (undefined *)lStack_3b0;
    uStack_4f8 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plStack_3a8[1] = plStack_3a8[1] + 1;
      UNLOCK();
    }
    lStack_4f0 = lStack_3a0;
    if (((ulong)plStack_398 & 1) == 0) {
      lStack_4d8 = lStack_388;
      uStack_4e8 = plStack_398;
      uStack_4e0 = uStack_390;
    }
    else {
      func_0x0412e5e0(&uStack_4e8,lStack_388,uStack_390);
    }
    lStack_4d0 = lStack_380;
    uStack_330 = 0xffffffffffffffff;
    uStack_328 = 0;
    uStack_320 = 0xff;
    puStack_338 = &UNK_0f4e3cf0;
    uStack_318 = 0;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x98,0);
    }
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0f0fb8c0;
    *(undefined4 *)(plVar7 + 4) = (undefined4)uStack_540;
    *(undefined4 *)((long)plVar7 + 0x24) = uStack_540._4_4_;
    *(undefined4 *)(plVar7 + 5) = (undefined4)uStack_538;
    *(uint *)((long)plVar7 + 0x2c) = uStack_538._4_4_;
    *(undefined1 *)(plVar7 + 6) = (undefined1)uStack_530;
    plVar7[3] = (long)&UNK_0f4e3c70;
    FUN_04167a20(plVar7 + 7,&uStack_528);
    plVar7[8] = (long)puStack_520;
    plVar7[9] = (long)puStack_518;
    plVar7[10] = (long)puStack_510;
    plVar7[0xb] = (long)puStack_508;
    plVar7[0xc] = (long)puStack_500;
    plVar7[0xd] = (long)uStack_4f8;
    puStack_500 = (undefined *)0x0;
    uStack_4f8 = (long *)0x0;
    plVar7[0xe] = lStack_4f0;
    plVar7[0x11] = lStack_4d8;
    *(undefined4 *)(plVar7 + 0xf) = (undefined4)uStack_4e8;
    *(undefined4 *)((long)plVar7 + 0x7c) = uStack_4e8._4_4_;
    *(undefined4 *)(plVar7 + 0x10) = (undefined4)uStack_4e0;
    *(undefined4 *)((long)plVar7 + 0x84) = uStack_4e0._4_4_;
    uStack_4e8 = (long *)0x0;
    uStack_4e0 = 0;
    lStack_4d8 = 0;
    plVar7[0x12] = lStack_4d0;
    uStack_300 = 0;
    plStack_310 = plVar7 + 3;
    plStack_308 = plVar7;
    func_0x0845de30(&uStack_68,&uStack_d8,&puStack_338);
    uStack_158 = uStack_38;
    uStack_168 = uStack_48;
    uStack_164 = uStack_44;
    iStack_160 = iStack_40;
    uStack_15c = uStack_3c;
    uStack_178 = uStack_58;
    uStack_174 = uStack_54;
    uStack_170 = uStack_50;
    uStack_16c = uStack_4c;
    uStack_188 = uStack_68;
    uStack_184 = uStack_64;
    uStack_180 = uStack_60;
    uStack_17c = uStack_5c;
    func_0x0845f5e0(&puStack_4c8,&uStack_188,&UNK_012c2e19,0x15);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f0fb910;
    if (plStack_4b0 != (long *)0x0) {
      lVar8 = *plStack_4b0;
      plStack_4b0 = plVar7;
      (**(code **)(lVar8 + 8))();
      plVar7 = plStack_4b0;
    }
    plStack_4b0 = plVar7;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_4b8);
    plStack_270 = (long *)0x0;
    uStack_268 = 0;
    uStack_260 = 1;
    uStack_258 = 0;
    puStack_250 = &UNK_07e10310;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_07e0bfd0;
    puStack_238 = &UNK_08460d10;
    puStack_230 = &UNK_08460e70;
    uStack_228 = 0;
    uStack_220 = 0;
    plStack_218 = (long *)0x0;
    func_0x048b05a0(puStack_4c0,&uStack_278);
    plVar7 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_218 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0845f890(&puStack_4c8);
    uVar2 = uStack_15c;
    iVar5 = iStack_160;
    lVar8 = CONCAT44(uStack_184,uStack_188);
    func_0x048b0bc0(&plStack_4b0);
    if ((DAT_0f5d1190 == '\0') && (iVar4 = FUN_04108328(&DAT_0f5d1190), iVar4 != 0)) {
      func_0x0845e160();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5d1110,0xf53dab8);
      func_0x0410844d(&DAT_0f5d1190);
    }
    plVar7 = (long *)(*(long *)(lVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar8 + 0x20) - *(long *)(lVar8 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5d1110 + 4)) * 8);
    do {
      lVar11 = *plVar7;
      if (lVar11 == -1) goto LAB_083e1f40;
      plVar7 = (long *)(*(long *)(lVar8 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(lVar8 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d1110 + 4))
    ;
    if (plVar7 == *(long **)(lVar8 + 0x38)) {
LAB_083e1f40:
      puVar6 = &DAT_0f5d1110;
    }
    else {
      puVar6 = (undefined *)plVar7[2];
    }
    if ((1 < iVar5 - 1U) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012f7676),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar6 = (undefined *)FUN_048b0c90(lVar8 + 0x18,puVar6,uVar2,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_4c8 = (undefined *)0x0;
      puStack_4c0 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_4c8);
      puVar6 = puStack_4c8;
    }
    plVar7 = plStack_308;
    *(undefined1 *)(*(long *)(puVar6 + 0x58) + 0xa8) = 4;
    puStack_338 = &UNK_0f4e3cf0;
    if (plStack_308 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_308 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_308 + 0x10))(plStack_308);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_548 = &UNK_0f4e3c70;
    if (((ulong)uStack_4e8 & 1) != 0) {
      func_0x0412a280(lStack_4d8,(ulong)uStack_4e8 & 0xfffffffffffffffe);
    }
    plVar7 = uStack_4f8;
    if (uStack_4f8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4f8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_4f8 + 0x10))(uStack_4f8);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x04167a40(&uStack_528);
    puStack_3f8 = &UNK_0f4e3c70;
    if (((ulong)plStack_398 & 1) != 0) {
      func_0x0412a280(lStack_388,(ulong)plStack_398 & 0xfffffffffffffffe);
    }
    plVar7 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3a8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x04167a40(&uStack_3d8);
    plVar7 = plStack_288;
    puStack_2b8 = &UNK_0f4e3cf0;
    if (plStack_288 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_288 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_288 + 0x10))(plStack_288);
        func_0x0412c2d0(plVar7);
      }
    }
    plVar7 = plStack_2c8;
    puStack_2f8 = &UNK_0f4e3cf0;
    if (plStack_2c8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
        func_0x0412c2d0(plVar7);
      }
    }
  }
  if ((DAT_0f5d1578 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5d1578), iVar5 != 0)) {
    func_0x0846d410();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d14f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5d1578);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d14f8 + 4)) * 8);
  do {
    lVar8 = *plVar7;
    if (lVar8 == -1) goto LAB_083e21d0;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d14f8 + 4));
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_083e21d0:
    puVar6 = &DAT_0f5d14f8;
    if (iRam000000000f5d1558 != -0x2b3da790) goto LAB_083e223d;
LAB_083e21fb:
    lVar8 = *(long *)(puVar6 + 0x68);
    if (lVar8 == 0) goto LAB_083e223d;
    bVar14 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar11 = lVar8 + 9;
    if (bVar14) {
      lVar11 = *(long *)(lVar8 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar14) {
      uVar10 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0846f0a0(&puStack_3f8,param_1,lVar11,uVar10);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_083e21fb;
LAB_083e223d:
    func_0x0846f0a0(&puStack_3f8,param_1,&UNK_012c3f40,0x1d);
  }
  if ((char)lStack_3c8 != '\0') {
    return;
  }
  if ((DAT_0f5d14e0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5d14e0), iVar5 != 0)) {
    func_0x0846d2d0();
    func_0x0410844d(&DAT_0f5d14e0);
  }
  puVar6 = puStack_3f8;
  uStack_3d0 = 0x340586f300000001;
  if ((DAT_0f5d1578 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5d1578), iVar5 != 0)) {
    func_0x0846d410();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d14f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5d1578);
  }
  puStack_4c0 = (undefined8 *)(puVar6 + 0x18);
  plVar7 = (long *)(*(long *)(puVar6 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(puVar6 + 0x20) - *(long *)(puVar6 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5d14f8 + 4)) * 8);
  do {
    lVar8 = *plVar7;
    if (lVar8 == -1) goto LAB_083e2300;
    plVar7 = (long *)(*(long *)(puVar6 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(puVar6 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d14f8 + 4));
  if (plVar7 == *(long **)(puVar6 + 0x38)) {
LAB_083e2300:
    puStack_4c8 = &DAT_0f5d14f8;
  }
  else {
    puStack_4c8 = (undefined *)plVar7[2];
  }
  func_0x0ed621a0(&puStack_4c8,uStack_3d0._4_4_);
  puStack_4c8 = (undefined *)CONCAT62(puStack_4c8._2_6_,1);
  uStack_4b8 = uStack_3d0._4_4_;
  plStack_4b0 = (long *)0x0;
  lStack_4a8 = 0;
  lStack_4a0 = 0;
  lStack_498 = 0;
  lStack_490 = 0;
  uStack_488 = 0x10;
  uStack_487 = 0x74736575716552;
  uStack_480 = 0x73;
  uStack_47f = 0;
  lStack_470 = 0;
  lStack_468 = 0;
  lStack_460 = 0;
  lStack_458 = 0;
  lStack_450 = 0;
  lStack_448 = 0;
  uStack_440 = 0x3f600000;
  puStack_4c0 = &uStack_3f0;
  func_0x048afb10(&lStack_470,8);
  uStack_418 = 0;
  lStack_410 = 0;
  lStack_428 = 0;
  uStack_420 = 0;
  lStack_438 = 0;
  lStack_430 = 0;
  uStack_408 = 0xff00;
  uStack_404 = uStack_404 & 0xffffff00;
  uStack_400 = uStack_400 & 0xffffff00;
  uStack_3fc = 0;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f118e60;
  if (plStack_4b0 != (long *)0x0) {
    lVar8 = *plStack_4b0;
    plStack_4b0 = plVar7;
    (**(code **)(lVar8 + 8))();
    plVar7 = plStack_4b0;
  }
  plStack_4b0 = plVar7;
  uStack_548 = (undefined *)CONCAT44(uStack_548._4_4_,uStack_4b8);
  uStack_540 = (long *)0x0;
  uStack_538 = (long *)((ulong)uStack_538 & 0xffffffff00000000);
  uStack_530 = 1;
  uStack_528 = 0;
  puStack_520 = &UNK_08472e50;
  puStack_518 = &SUB_048b06d0;
  puStack_510 = &UNK_08471a50;
  puStack_508 = &UNK_08472f10;
  puStack_500 = &UNK_084731a0;
  uStack_4f8 = (long *)((ulong)uStack_4f8 & 0xffffffff00000000);
  lStack_4f0 = 0;
  uStack_4e8 = (long *)0x0;
  func_0x048b05a0(puStack_4c0,&uStack_548);
  plVar7 = uStack_4e8;
  if (uStack_4e8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_4e8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_4e8 + 0x10))(uStack_4e8);
      func_0x0412c2d0(plVar7);
    }
  }
  puVar9 = puStack_4c0;
  if ((DAT_0f550a20 == '\0') && (iVar5 = FUN_04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_548 = (undefined *)CONCAT44(uStack_548._4_4_,_DAT_0f550a0c);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar8 = lStack_4a8;
  plVar1 = plStack_4b0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef439d0;
  uStack_540 = plVar7 + 3;
  plStack_4b0 = (long *)0x0;
  lStack_4a8 = 0;
  plVar7[3] = (long)plVar1;
  plVar7[4] = lVar8;
  plVar7[7] = lStack_490;
  plVar7[5] = lStack_4a0;
  plVar7[6] = lStack_498;
  lStack_4a0 = 0;
  lStack_498 = 0;
  lStack_490 = 0;
  plVar7[10] = lStack_478;
  plVar7[8] = CONCAT71(uStack_487,uStack_488);
  plVar7[9] = CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480));
  uStack_488 = 0;
  uStack_487 = 0;
  uStack_480 = 0;
  uStack_47f = 0;
  uStack_47e = 0;
  lStack_478 = 0;
  plVar7[0xb] = lStack_470;
  plVar7[0xc] = lStack_468;
  plVar7[0xd] = lStack_460;
  lStack_470 = 0;
  lStack_468 = 0;
  lStack_460 = 0;
  plVar7[0xe] = lStack_458;
  plVar7[0xf] = lStack_450;
  plVar7[0x10] = lStack_448;
  lStack_458 = 0;
  lStack_450 = 0;
  lStack_448 = 0;
  *(undefined4 *)(plVar7 + 0x11) = uStack_440;
  plVar7[0x12] = lStack_438;
  plVar7[0x13] = lStack_430;
  plVar7[0x14] = lStack_428;
  lStack_438 = 0;
  lStack_430 = 0;
  lStack_428 = 0;
  plVar7[0x17] = lStack_410;
  *(undefined4 *)(plVar7 + 0x15) = (undefined4)uStack_420;
  *(undefined4 *)((long)plVar7 + 0xac) = uStack_420._4_4_;
  *(undefined4 *)(plVar7 + 0x16) = (undefined4)uStack_418;
  *(undefined4 *)((long)plVar7 + 0xb4) = uStack_418._4_4_;
  uStack_420 = 0;
  uStack_418 = 0;
  lStack_410 = 0;
  *(ulong *)((long)plVar7 + 0xc5) = CONCAT17(uStack_3fc,CONCAT43(uStack_400,uStack_404._1_3_));
  plVar7[0x18] = CONCAT44(uStack_404,CONCAT22(uStack_406,uStack_408));
  uStack_278 = 0;
  plStack_270 = (long *)0x0;
  uStack_538 = plVar7;
  func_0x048afd20(puVar9,&uStack_548);
  plVar7 = uStack_538;
  if (uStack_538 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_538 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_538 + 0x10))(uStack_538);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_270;
  if (plStack_270 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_270 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar7);
    }
  }
  puVar6 = puStack_3f8;
  lVar8 = puVar9[2];
  iVar5 = *(int *)((long)puVar9 + 0x1c);
  if (iVar5 == 2) {
    piVar12 = *(int **)(*(long *)(lVar8 + 0x78) + 0x60);
    iVar5 = *piVar12;
    while (iVar5 != *(int *)(puVar9 + 3)) {
      piVar12 = piVar12 + 0x16;
      iVar5 = *piVar12;
    }
    for (; *(long *)(piVar12 + 0xc) != puVar9[1]; piVar12 = *(int **)(piVar12 + 0xe)) {
    }
LAB_083e27da:
    piVar12[4] = piVar12[4] | (int)puStack_4c8 << 0x10;
  }
  else {
    if (iVar5 == 1) {
      piVar12 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
      iVar5 = *piVar12;
      while (iVar5 != *(int *)(puVar9 + 3)) {
        piVar12 = piVar12 + 0x1a;
        iVar5 = *piVar12;
      }
      goto LAB_083e27da;
    }
    if (iVar5 == 0) {
      *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | (int)puStack_4c8 << 0x10;
    }
  }
  iVar5 = (int)uStack_3d0;
  uVar2 = uStack_3d0._4_4_;
  func_0x048b0bc0(&plStack_4b0);
  if (iVar5 != 4) {
    if (iVar5 != 1) {
      return;
    }
    if ((DAT_0f5d1578 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5d1578), iVar5 != 0)) {
      func_0x0846d410();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5d14f8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d1578);
    }
    plVar7 = (long *)(*(long *)(puVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar6 + 0x20) - *(long *)(puVar6 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d14f8 + 4)) * 8);
    do {
      lVar8 = *plVar7;
      if (lVar8 == -1) goto LAB_083e2868;
      plVar7 = (long *)(*(long *)(puVar6 + 0x30) + lVar8 * 0x18);
    } while (*(uint *)(*(long *)(puVar6 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d14f8 + 4))
    ;
    if (plVar7 == *(long **)(puVar6 + 0x38)) {
LAB_083e2868:
      puVar13 = &DAT_0f5d14f8;
    }
    else {
      puVar13 = (undefined *)plVar7[2];
    }
    puVar6 = (undefined *)FUN_048b0c90(puVar6 + 0x18,puVar13,uVar2,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_4c8 = (undefined *)0x0;
      puStack_4c0 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_4c8);
      puVar6 = puStack_4c8;
    }
    lVar8 = *(long *)(puVar6 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_083e2a44;
  }
  if ((DAT_0f5d1578 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5d1578), iVar5 != 0)) {
    func_0x0846d410();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d14f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5d1578);
  }
  plVar7 = (long *)(*(long *)(puVar6 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(puVar6 + 0x20) - *(long *)(puVar6 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5d14f8 + 4)) * 8);
  do {
    lVar8 = *plVar7;
    if (lVar8 == -1) goto LAB_083e28d8;
    plVar7 = (long *)(*(long *)(puVar6 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(puVar6 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5d14f8 + 4));
  if (plVar7 == *(long **)(puVar6 + 0x38)) {
LAB_083e28d8:
    puVar13 = &DAT_0f5d14f8;
  }
  else {
    puVar13 = (undefined *)plVar7[2];
  }
  puVar6 = (undefined *)func_0x048b1040(puVar6 + 0x18,puVar13,uVar2,1);
  if (puVar6 == (undefined *)0x0) {
    puStack_4c8 = (undefined *)0x0;
    puStack_4c0 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_4c8);
    puVar13 = *(undefined **)(puStack_4c8 + 0x38);
    puVar6 = puStack_4c8;
    if (puVar13 == (undefined *)0x0) goto LAB_083e29bc;
LAB_083e29e1:
    do {
      puVar6 = puVar13;
      puVar13 = *(undefined **)(puVar6 + 0x38);
      if (*(undefined **)(puVar6 + 0x38) == (undefined *)0x0) {
        puStack_4c8 = (undefined *)0x0;
        puStack_4c0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_4c8);
        puVar13 = puStack_4c8;
      }
    } while (puVar13 != (undefined *)0x0);
  }
  else {
    puVar13 = *(undefined **)(puVar6 + 0x38);
    if (*(undefined **)(puVar6 + 0x38) != (undefined *)0x0) goto LAB_083e29e1;
LAB_083e29bc:
    puStack_4c8 = (undefined *)0x0;
    puStack_4c0 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_4c8);
    puVar13 = puStack_4c8;
    if (puStack_4c8 != (undefined *)0x0) goto LAB_083e29e1;
  }
  lVar8 = *(long *)(puVar6 + 0x48);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_083e2a44:
  puVar9[1] = 100;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 0xff;
  *puVar9 = &UNK_0f4e3cf0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined8 *)((long)puVar9 + 0x29) = 0;
  *(undefined8 *)((long)puVar9 + 0x31) = 0;
  plVar7 = *(long **)(lVar8 + 8);
  *(undefined8 **)(lVar8 + 8) = puVar9;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
  return;
}


