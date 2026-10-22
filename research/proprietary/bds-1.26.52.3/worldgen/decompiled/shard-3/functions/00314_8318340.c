/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8418340 (ELF vaddr 0x8318340)
 * Label: caller-of-callee
 * Body:  [[08418340, 084189b1] [084189c0, 08419c73]]
 * Ghidra: FUN_08418340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08418340(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  bool bVar12;
  undefined4 auStack_590 [2];
  long *plStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined *puStack_568;
  undefined1 *puStack_560;
  undefined1 *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined4 uStack_540;
  undefined8 uStack_538;
  long *plStack_530;
  undefined *puStack_528;
  undefined4 *puStack_520;
  undefined4 uStack_518;
  long *plStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  ulong uStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined4 uStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined2 uStack_468;
  undefined2 uStack_466;
  uint uStack_464;
  uint uStack_460;
  undefined1 uStack_45c;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  char cStack_420;
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
  undefined4 uStack_3ec;
  undefined1 uStack_3e8;
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
  undefined4 uStack_3ac;
  undefined8 uStack_3a8;
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
  undefined4 uStack_36c;
  undefined8 uStack_368;
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
  int iStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
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
  undefined4 uStack_2d8;
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
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined2 uStack_260;
  undefined4 uStack_25e;
  undefined2 uStack_25a;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined2 uStack_220;
  undefined4 uStack_21e;
  undefined2 uStack_21a;
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
  char cStack_1e8;
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
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
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
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  int iStack_b8;
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
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
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
  
  func_0x07bf3030();
  func_0x07cb2d80(param_1);
  if ((DAT_0f5d3da0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d3da0), iVar4 != 0)) {
    func_0x084f63d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3d20,0xf53dab8);
    func_0x0410844d(&DAT_0f5d3da0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d3d20 + 4)) * 8);
  do {
    lVar7 = *plVar6;
    if (lVar7 == -1) goto LAB_084183c0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f5d3d20 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_084183c0:
    puVar5 = &DAT_0f5d3d20;
    if (iRam000000000f5d3d80 != -0x2b3da790) goto LAB_0841842d;
LAB_084183eb:
    lVar7 = *(long *)(puVar5 + 0x68);
    if (lVar7 == 0) goto LAB_0841842d;
    bVar12 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar11 = lVar7 + 9;
    if (bVar12) {
      lVar11 = *(long *)(lVar7 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar12) {
      uVar9 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x084f67e0(&uStack_450,param_1,lVar11,uVar9);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_084183eb;
LAB_0841842d:
    func_0x084f67e0(&uStack_450,param_1,&UNK_01465d48,0x28);
  }
  if (cStack_420 == '\0') {
    uStack_580._4_4_ = (uint)((ulong)uStack_580 >> 0x20);
    if ((DAT_0f5d3dc0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d3dc0), iVar4 != 0)) {
      func_0x084f64e0();
      func_0x0410844d(&DAT_0f5d3dc0);
    }
    uStack_428 = 0x7b9de88300000001;
    lVar7 = CONCAT44(uStack_44c,uStack_450);
    if ((DAT_0f5d3da0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d3da0), iVar4 != 0)) {
      func_0x084f63d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3d20,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3da0);
    }
    puStack_520 = (undefined4 *)(lVar7 + 0x18);
    plVar6 = (long *)(*(long *)(lVar7 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5d3d20 + 4)) * 8);
    do {
      lVar11 = *plVar6;
      if (lVar11 == -1) goto LAB_084184f0;
      plVar6 = (long *)(*(long *)(lVar7 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d3d20 + 4))
    ;
    if (plVar6 == *(long **)(lVar7 + 0x38)) {
LAB_084184f0:
      puStack_528 = &DAT_0f5d3d20;
    }
    else {
      puStack_528 = (undefined *)plVar6[2];
    }
    func_0x0ed621a0(&puStack_528,uStack_428._4_4_);
    puStack_528 = (undefined *)CONCAT62(puStack_528._2_6_,1);
    uStack_518 = uStack_428._4_4_;
    plStack_510 = (long *)0x0;
    lStack_508 = 0;
    lStack_500 = 0;
    lStack_4f8 = 0;
    lStack_4f0 = 0;
    lStack_4e8 = 0x644920626f6c420e;
    uStack_4e0 = uStack_4e0 & 0xffffffffffffff00;
    lStack_4d0 = 0;
    lStack_4c8 = 0;
    lStack_4c0 = 0;
    lStack_4b8 = 0;
    lStack_4b0 = 0;
    lStack_4a8 = 0;
    uStack_4a0 = 0x3f600000;
    puStack_520 = &uStack_448;
    func_0x048afb10(&lStack_4d0,8);
    uStack_478 = 0;
    lStack_470 = 0;
    lStack_488 = 0;
    uStack_480 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    uStack_468 = 0xff00;
    uStack_464 = uStack_464 & 0xffffff00;
    uStack_460 = uStack_460 & 0xffffff00;
    uStack_45c = 0;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f01ae00;
    if (plStack_510 != (long *)0x0) {
      lVar7 = *plStack_510;
      plStack_510 = plVar6;
      (**(code **)(lVar7 + 8))();
      plVar6 = plStack_510;
    }
    plStack_510 = plVar6;
    auStack_590[0] = uStack_518;
    plStack_588 = (long *)0x0;
    uStack_580 = (long *)((ulong)uStack_580._4_4_ << 0x20);
    uStack_578 = 1;
    uStack_570 = 0;
    puStack_568 = &UNK_06046510;
    puStack_560 = &SUB_048b06d0;
    puStack_558 = &SUB_0602fbb0;
    puStack_550 = &UNK_084f72f0;
    puStack_548 = &UNK_084f7450;
    uStack_540 = 0;
    uStack_538 = 0;
    plStack_530 = (long *)0x0;
    FUN_048b05a0(puStack_520,auStack_590);
    plVar6 = plStack_530;
    if (plStack_530 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_530 + 0x10))(plStack_530);
        func_0x0412c2d0(plVar6);
      }
    }
    puVar2 = puStack_520;
    if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_590[0] = _DAT_0f550a0c;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar6 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    lVar7 = lStack_508;
    plVar1 = plStack_510;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef439d0;
    plStack_588 = plVar6 + 3;
    plStack_510 = (long *)0x0;
    lStack_508 = 0;
    plVar6[3] = (long)plVar1;
    plVar6[4] = lVar7;
    plVar6[7] = lStack_4f0;
    plVar6[5] = lStack_500;
    plVar6[6] = lStack_4f8;
    lStack_500 = 0;
    lStack_4f8 = 0;
    lStack_4f0 = 0;
    plVar6[10] = lStack_4d8;
    plVar6[8] = lStack_4e8;
    plVar6[9] = uStack_4e0;
    lStack_4e8 = 0;
    uStack_4e0 = 0;
    lStack_4d8 = 0;
    plVar6[0xb] = lStack_4d0;
    plVar6[0xc] = lStack_4c8;
    plVar6[0xd] = lStack_4c0;
    lStack_4d0 = 0;
    lStack_4c8 = 0;
    lStack_4c0 = 0;
    plVar6[0xe] = lStack_4b8;
    plVar6[0xf] = lStack_4b0;
    plVar6[0x10] = lStack_4a8;
    lStack_4b8 = 0;
    lStack_4b0 = 0;
    lStack_4a8 = 0;
    *(undefined4 *)(plVar6 + 0x11) = uStack_4a0;
    plVar6[0x12] = lStack_498;
    plVar6[0x13] = lStack_490;
    plVar6[0x14] = lStack_488;
    lStack_498 = 0;
    lStack_490 = 0;
    lStack_488 = 0;
    plVar6[0x17] = lStack_470;
    *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_480;
    *(undefined4 *)((long)plVar6 + 0xac) = uStack_480._4_4_;
    *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_478;
    *(undefined4 *)((long)plVar6 + 0xb4) = uStack_478._4_4_;
    uStack_480 = 0;
    uStack_478 = 0;
    lStack_470 = 0;
    *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_45c,CONCAT43(uStack_460,uStack_464._1_3_));
    plVar6[0x18] = CONCAT44(uStack_464,CONCAT22(uStack_466,uStack_468));
    uStack_158 = 0;
    uStack_150 = (long *)0x0;
    uStack_580 = plVar6;
    func_0x048afd20(puVar2,auStack_590);
    plVar6 = uStack_580;
    if (uStack_580 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_580 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_580 + 0x10))(uStack_580);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_150;
    if (uStack_150 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_150 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_150 + 0x10))(uStack_150);
        func_0x0412c2d0(plVar6);
      }
    }
    lVar7 = *(long *)(puVar2 + 4);
    iVar4 = puVar2[7];
    if (iVar4 == 2) {
      piVar10 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != puVar2[6]) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar2 + 2); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_084189ca:
      piVar10[4] = piVar10[4] | (int)puStack_528 << 0x10;
    }
    else {
      if (iVar4 == 1) {
        piVar10 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != puVar2[6]) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto LAB_084189ca;
      }
      if (iVar4 == 0) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | (int)puStack_528 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_510);
  }
  if ((DAT_0f5d3c30 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d3c30), iVar4 != 0)) {
    func_0x084f4450();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3bb0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d3c30);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d3bb0 + 4)) * 8);
  do {
    lVar7 = *plVar6;
    if (lVar7 == -1) goto LAB_08418a30;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f5d3bb0 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_08418a30:
    puVar5 = &DAT_0f5d3bb0;
    if (iRam000000000f5d3c10 != -0x2b3da790) goto LAB_08418a9d;
LAB_08418a5b:
    lVar7 = *(long *)(puVar5 + 0x68);
    if (lVar7 == 0) goto LAB_08418a9d;
    bVar12 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar11 = lVar7 + 9;
    if (bVar12) {
      lVar11 = *(long *)(lVar7 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar12) {
      uVar9 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x084f7620(&uStack_450,param_1,lVar11,uVar9);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_08418a5b;
LAB_08418a9d:
    func_0x084f7620(&uStack_450,param_1,&UNK_0144dbe2,0x17);
  }
  if (cStack_420 != '\0') {
    return;
  }
  func_0x084f81a0(&puStack_528,&uStack_450,&UNK_012f7654,0xe,1);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f112920;
  if (plStack_510 != (long *)0x0) {
    lVar7 = *plStack_510;
    plStack_510 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_510;
  }
  plStack_510 = plVar6;
  auStack_590[0] = uStack_518;
  plStack_588 = (long *)0x0;
  uStack_580 = (long *)((ulong)uStack_580 & 0xffffffff00000000);
  uStack_578 = 1;
  uStack_570 = 0;
  puStack_568 = &UNK_084f87c0;
  puStack_560 = &SUB_048b06d0;
  puStack_558 = &SUB_07c98cf0;
  puStack_550 = &UNK_084f87d0;
  puStack_548 = &UNK_084f8930;
  uStack_540 = 0;
  uStack_538 = 0;
  plStack_530 = (long *)0x0;
  FUN_048b05a0(puStack_520,auStack_590);
  plVar6 = plStack_530;
  if (plStack_530 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_530 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_530 + 0x10))(plStack_530);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x084f84c0(&puStack_528);
  cStack_1e8 = cStack_420;
  uStack_1f8 = uStack_430;
  uStack_1f4 = uStack_42c;
  uStack_1f0 = (undefined4)uStack_428;
  uStack_1ec = uStack_428._4_4_;
  uStack_208 = uStack_440;
  uStack_204 = uStack_43c;
  uStack_200 = uStack_438;
  uStack_1fc = uStack_434;
  uStack_218 = uStack_450;
  uStack_214 = uStack_44c;
  uStack_210 = uStack_448;
  uStack_20c = uStack_444;
  func_0x048b0bc0(&plStack_510);
  uStack_3d8 = uStack_218;
  uStack_3d4 = uStack_214;
  uStack_3d0 = uStack_210;
  uStack_3cc = uStack_20c;
  uStack_3c8 = uStack_208;
  uStack_3c4 = uStack_204;
  uStack_3c0 = uStack_200;
  uStack_3bc = uStack_1fc;
  uStack_3b8 = uStack_1f8;
  uStack_3b4 = uStack_1f4;
  uStack_3b0 = uStack_1f0;
  uStack_3ac = uStack_1ec;
  uStack_3a8 = CONCAT71(uStack_1e7,cStack_1e8);
  func_0x084f81a0(&puStack_528,&uStack_3d8,&UNK_013b1f07,0xc,1);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f00b118;
  if (plStack_510 != (long *)0x0) {
    lVar7 = *plStack_510;
    plStack_510 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_510;
  }
  plStack_510 = plVar6;
  auStack_590[0] = uStack_518;
  plStack_588 = (long *)0x0;
  uStack_580 = (long *)((ulong)uStack_580 & 0xffffffff00000000);
  uStack_578 = 1;
  uStack_570 = 0;
  puStack_568 = &UNK_06151e60;
  puStack_560 = &SUB_048b06d0;
  puStack_558 = &SUB_05dee420;
  puStack_550 = &UNK_084f8da0;
  puStack_548 = &UNK_084f8f00;
  uStack_540 = 0;
  uStack_538 = 0;
  plStack_530 = (long *)0x0;
  FUN_048b05a0(puStack_520,auStack_590);
  plVar6 = plStack_530;
  if (plStack_530 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_530 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_530 + 0x10))(plStack_530);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x084f84c0(&puStack_528);
  uStack_1a8 = (undefined1)uStack_3a8;
  uStack_1b8 = uStack_3b8;
  uStack_1b4 = uStack_3b4;
  uStack_1b0 = uStack_3b0;
  uStack_1ac = uStack_3ac;
  uStack_1c8 = uStack_3c8;
  uStack_1c4 = uStack_3c4;
  uStack_1c0 = uStack_3c0;
  uStack_1bc = uStack_3bc;
  uStack_1d8 = uStack_3d8;
  uStack_1d4 = uStack_3d4;
  uStack_1d0 = uStack_3d0;
  uStack_1cc = uStack_3cc;
  func_0x048b0bc0(&plStack_510);
  uStack_398 = uStack_1d8;
  uStack_394 = uStack_1d4;
  uStack_390 = uStack_1d0;
  uStack_38c = uStack_1cc;
  uStack_388 = uStack_1c8;
  uStack_384 = uStack_1c4;
  uStack_380 = uStack_1c0;
  uStack_37c = uStack_1bc;
  uStack_378 = uStack_1b8;
  uStack_374 = uStack_1b4;
  uStack_370 = uStack_1b0;
  uStack_36c = uStack_1ac;
  uStack_368 = CONCAT71(uStack_1a7,uStack_1a8);
  func_0x084f81a0(&puStack_528,&uStack_398,&UNK_01278b03,0x10,1);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f012080;
  if (plStack_510 != (long *)0x0) {
    lVar7 = *plStack_510;
    plStack_510 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_510;
  }
  plStack_510 = plVar6;
  auStack_590[0] = uStack_518;
  plStack_588 = (long *)0x0;
  uStack_580 = (long *)((ulong)uStack_580 & 0xffffffff00000000);
  uStack_578 = 1;
  uStack_570 = 0;
  puStack_568 = &UNK_05dd3ca0;
  puStack_560 = &SUB_048b06d0;
  puStack_558 = &SUB_05dd3990;
  puStack_550 = &UNK_084f90e0;
  puStack_548 = &UNK_084f9240;
  uStack_540 = 0;
  uStack_538 = 0;
  plStack_530 = (long *)0x0;
  FUN_048b05a0(puStack_520,auStack_590);
  plVar6 = plStack_530;
  if (plStack_530 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_530 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_530 + 0x10))(plStack_530);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x084f84c0(&puStack_528);
  uStack_78 = (undefined1)uStack_368;
  uStack_88 = uStack_378;
  uStack_84 = uStack_374;
  uStack_80 = uStack_370;
  uStack_7c = uStack_36c;
  uStack_98 = uStack_388;
  uStack_94 = uStack_384;
  uStack_90 = uStack_380;
  uStack_8c = uStack_37c;
  uStack_a8 = uStack_398;
  uStack_a4 = uStack_394;
  uStack_a0 = uStack_390;
  uStack_9c = uStack_38c;
  func_0x048b0bc0(&plStack_510);
  uStack_21e = 0;
  uStack_21a = 0;
  uStack_250 = 0xffffffffffffffff;
  uStack_248 = 0;
  uStack_240 = 0xff;
  puStack_258 = &UNK_0f0edc68;
  uStack_238 = _DAT_014e1e30;
  uStack_234 = _UNK_014e1e34;
  uStack_230 = _UNK_014e1e38;
  uStack_22c = _UNK_014e1e3c;
  uStack_228 = 0;
  uStack_220 = 0;
  func_0x0841ad80(&uStack_118,&uStack_a8,&puStack_258);
  lVar7 = CONCAT44(uStack_114,uStack_118);
  if ((DAT_0f5d3c30 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d3c30), iVar4 != 0)) {
    func_0x084f4450();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3bb0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d3c30);
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5d3bb0 + 4)) * 8);
  do {
    lVar11 = *plVar6;
    if (lVar11 == -1) goto LAB_08419090;
    plVar6 = (long *)(*(long *)(lVar7 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d3bb0 + 4));
  if (plVar6 == *(long **)(lVar7 + 0x38)) {
LAB_08419090:
    puVar5 = &DAT_0f5d3bb0;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
  }
  if ((1 < iStack_f0 - 1U) &&
     (cVar3 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01291d16),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar5 = (undefined *)func_0x048b0c90(lVar7 + 0x18,puVar5,uStack_ec,1);
  if (puVar5 == (undefined *)0x0) {
    puStack_528 = (undefined *)0x0;
    puStack_520 = (undefined4 *)0x0;
    FUN_048b0d20(&puStack_528);
    puVar5 = puStack_528;
  }
  *(undefined1 *)(*(long *)(puVar5 + 0x58) + 0xa8) = 1;
  uStack_328 = uStack_e8;
  uStack_338 = uStack_f8;
  uStack_334 = uStack_f4;
  iStack_330 = iStack_f0;
  uStack_32c = uStack_ec;
  uStack_348 = uStack_108;
  uStack_344 = uStack_104;
  uStack_340 = uStack_100;
  uStack_33c = uStack_fc;
  uStack_358 = uStack_118;
  uStack_354 = uStack_114;
  uStack_350 = uStack_110;
  uStack_34c = uStack_10c;
  func_0x084f81a0(&puStack_528,&uStack_358,&UNK_014196b5,0x1d,0);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0118f8;
  if (plStack_510 != (long *)0x0) {
    lVar7 = *plStack_510;
    plStack_510 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_510;
  }
  plStack_510 = plVar6;
  auStack_590[0] = uStack_518;
  plStack_588 = (long *)0x0;
  uStack_580 = (long *)((ulong)uStack_580 & 0xffffffff00000000);
  uStack_578 = 1;
  uStack_570 = 0;
  puStack_568 = &UNK_05dc7140;
  puStack_560 = &SUB_048b06d0;
  puStack_558 = &UNK_05dc6e20;
  puStack_550 = &UNK_084f96f0;
  puStack_548 = &UNK_084f9860;
  uStack_540 = 0;
  uStack_538 = 0;
  plStack_530 = (long *)0x0;
  FUN_048b05a0(puStack_520,auStack_590);
  plVar6 = plStack_530;
  if (plStack_530 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_530 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_530 + 0x10))(plStack_530);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x084f84c0(&puStack_528);
  uStack_38 = uStack_328;
  uStack_48 = uStack_338;
  uStack_44 = uStack_334;
  iStack_40 = iStack_330;
  uStack_3c = uStack_32c;
  uStack_58 = uStack_348;
  uStack_54 = uStack_344;
  uStack_50 = uStack_340;
  uStack_4c = uStack_33c;
  uStack_68 = uStack_358;
  uStack_64 = uStack_354;
  uStack_60 = uStack_350;
  uStack_5c = uStack_34c;
  func_0x048b0bc0(&plStack_510);
  uStack_25e = 0;
  uStack_25a = 0;
  uStack_290 = 0xffffffffffffffff;
  uStack_288 = 0;
  uStack_280 = 0xff;
  puStack_298 = &UNK_0f0edc68;
  uStack_278 = _DAT_014e48e0;
  uStack_274 = _UNK_014e48e4;
  uStack_270 = _UNK_014e48e8;
  uStack_26c = _UNK_014e48ec;
  uStack_268 = 0;
  uStack_260 = 0;
  func_0x0841ad80(&uStack_e0,&uStack_68,&puStack_298);
  lVar7 = CONCAT44(uStack_dc,uStack_e0);
  if ((DAT_0f5d3c30 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d3c30), iVar4 != 0)) {
    func_0x084f4450();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3bb0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d3c30);
  }
  plVar6 = (long *)(*(long *)(lVar7 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5d3bb0 + 4)) * 8);
  do {
    lVar11 = *plVar6;
    if (lVar11 == -1) goto LAB_084193d0;
    plVar6 = (long *)(*(long *)(lVar7 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar7 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5d3bb0 + 4));
  if (plVar6 == *(long **)(lVar7 + 0x38)) {
LAB_084193d0:
    puVar5 = &DAT_0f5d3bb0;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
  }
  if ((1 < iStack_b8 - 1U) &&
     (cVar3 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01291d16),
     cVar3 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar5 = (undefined *)func_0x048b0c90(lVar7 + 0x18,puVar5,uStack_b4,1);
  if (puVar5 == (undefined *)0x0) {
    puStack_528 = (undefined *)0x0;
    puStack_520 = (undefined4 *)0x0;
    FUN_048b0d20(&puStack_528);
    puVar5 = puStack_528;
  }
  *(undefined1 *)(*(long *)(puVar5 + 0x58) + 0xa8) = 1;
  uStack_2e8 = uStack_b0;
  uStack_2f8 = uStack_c0;
  uStack_2f4 = uStack_bc;
  iStack_2f0 = iStack_b8;
  uStack_2ec = uStack_b4;
  uStack_308 = uStack_d0;
  uStack_304 = uStack_cc;
  uStack_300 = uStack_c8;
  uStack_2fc = uStack_c4;
  uStack_318 = uStack_e0;
  uStack_314 = uStack_dc;
  uStack_310 = uStack_d8;
  uStack_30c = uStack_d4;
  func_0x084f81a0(&puStack_528,&uStack_318,&UNK_01277f04,0xd,1);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (plStack_510 != (long *)0x0) {
    lVar7 = *plStack_510;
    plStack_510 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_510;
  }
  plStack_510 = plVar6;
  auStack_590[0] = uStack_518;
  plStack_588 = (long *)0x0;
  uStack_580 = (long *)((ulong)uStack_580 & 0xffffffff00000000);
  uStack_578 = 1;
  uStack_570 = 0;
  puStack_568 = &UNK_04906f70;
  puStack_560 = &SUB_048b06d0;
  puStack_558 = &SUB_04906c50;
  puStack_550 = &UNK_084f9a40;
  puStack_548 = &UNK_084f9ba0;
  uStack_540 = 0;
  uStack_538 = 0;
  plStack_530 = (long *)0x0;
  FUN_048b05a0(puStack_520,auStack_590);
  plVar6 = plStack_530;
  if (plStack_530 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_530 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_530 + 0x10))(plStack_530);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x084f84c0(&puStack_528);
  uStack_168 = uStack_2e8;
  uStack_178 = uStack_2f8;
  uStack_174 = uStack_2f4;
  iStack_170 = iStack_2f0;
  uStack_16c = uStack_2ec;
  uStack_188 = uStack_308;
  uStack_184 = uStack_304;
  uStack_180 = uStack_300;
  uStack_17c = uStack_2fc;
  uStack_198 = uStack_318;
  uStack_194 = uStack_314;
  uStack_190 = uStack_310;
  uStack_18c = uStack_30c;
  func_0x048b0bc0(&plStack_510);
  uStack_2d8 = uStack_198;
  uStack_2d4 = uStack_194;
  uStack_2d0 = uStack_190;
  uStack_2cc = uStack_18c;
  uStack_2c8 = uStack_188;
  uStack_2c4 = uStack_184;
  uStack_2c0 = uStack_180;
  uStack_2bc = uStack_17c;
  uStack_2b8 = uStack_178;
  uStack_2b4 = uStack_174;
  iStack_2b0 = iStack_170;
  uStack_2ac = uStack_16c;
  uStack_2a8 = CONCAT71(uStack_167,uStack_168);
  func_0x084f81a0(&puStack_528,&uStack_2d8,&UNK_0137cafc,0xe,1);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f11c480;
  if (plStack_510 != (long *)0x0) {
    lVar7 = *plStack_510;
    plStack_510 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_510;
  }
  plStack_510 = plVar6;
  auStack_590[0] = uStack_518;
  plStack_588 = (long *)0x0;
  uStack_580 = (long *)((ulong)uStack_580 & 0xffffffff00000000);
  uStack_578 = 1;
  uStack_570 = 0;
  puStack_568 = &UNK_084fcb70;
  puStack_560 = &SUB_048b06d0;
  puStack_558 = &UNK_084fba00;
  puStack_550 = &UNK_084fcc30;
  puStack_548 = &UNK_084fce20;
  uStack_540 = 0;
  uStack_538 = 0;
  plStack_530 = (long *)0x0;
  FUN_048b05a0(puStack_520,auStack_590);
  plVar6 = plStack_530;
  if (plStack_530 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_530 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_530 + 0x10))(plStack_530);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x084f84c0(&puStack_528);
  uStack_3e8 = (undefined1)uStack_2a8;
  uStack_3f8 = uStack_2b8;
  uStack_3f4 = uStack_2b4;
  iStack_3f0 = iStack_2b0;
  uStack_3ec = uStack_2ac;
  uStack_408 = uStack_2c8;
  uStack_404 = uStack_2c4;
  uStack_400 = uStack_2c0;
  uStack_3fc = uStack_2bc;
  uStack_418 = uStack_2d8;
  uStack_414 = uStack_2d4;
  uStack_410 = uStack_2d0;
  uStack_40c = uStack_2cc;
  func_0x048b0bc0(&plStack_510);
  if (iStack_3f0 == 4) {
    lVar7 = func_0x084f9570(&uStack_418);
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
  }
  else {
    if (iStack_3f0 != 1) goto LAB_0841989a;
    lVar7 = func_0x084f9420(&uStack_418);
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
  }
  puVar8[1] = 0x41;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 0xff;
  *puVar8 = &UNK_0f4e3cf0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined8 *)((long)puVar8 + 0x29) = 0;
  *(undefined8 *)((long)puVar8 + 0x31) = 0;
  plVar6 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
LAB_0841989a:
  uStack_128 = uStack_3e8;
  uStack_138 = uStack_3f8;
  uStack_134 = uStack_3f4;
  iStack_130 = iStack_3f0;
  uStack_12c = uStack_3ec;
  uStack_148 = uStack_408;
  uStack_144 = uStack_404;
  uStack_140 = uStack_400;
  uStack_13c = uStack_3fc;
  uStack_158 = CONCAT44(uStack_414,uStack_418);
  uStack_150 = (long *)CONCAT44(uStack_40c,uStack_410);
  func_0x084f81a0(&puStack_528,&uStack_158,&UNK_0136354e,0x15,1);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef44b00;
  if (plStack_510 != (long *)0x0) {
    lVar7 = *plStack_510;
    plStack_510 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = plStack_510;
  }
  plStack_510 = plVar6;
  auStack_590[0] = uStack_518;
  plStack_588 = (long *)0x0;
  uStack_580 = (long *)((ulong)uStack_580 & 0xffffffff00000000);
  uStack_578 = 1;
  uStack_570 = 0;
  puStack_568 = &UNK_048b3f30;
  puStack_560 = &SUB_048b06d0;
  puStack_558 = &SUB_048b2190;
  puStack_550 = &UNK_084fd2a0;
  puStack_548 = &UNK_084fd470;
  uStack_540 = 0;
  uStack_538 = 0;
  plStack_530 = (long *)0x0;
  FUN_048b05a0(puStack_520,auStack_590);
  plVar6 = plStack_530;
  if (plStack_530 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_530 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_530 + 0x10))(plStack_530);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x084f84c0(&puStack_528);
  func_0x048b0bc0(&plStack_510);
  return;
}


