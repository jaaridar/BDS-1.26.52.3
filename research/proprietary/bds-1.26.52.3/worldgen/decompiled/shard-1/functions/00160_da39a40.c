/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb39a40 (ELF vaddr 0xda39a40)
 * Label: callee-of:0xda370f0
 * Body:  [[0db39a40, 0db3a459] [0db3a460, 0db3b02f]]
 * Ghidra: FUN_0db39a40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db39a40(long param_1)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  bool bVar11;
  byte bStack_750;
  undefined6 uStack_74f;
  undefined1 uStack_749;
  undefined1 uStack_748;
  undefined6 uStack_747;
  undefined1 uStack_741;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined *puStack_710;
  undefined1 *puStack_708;
  undefined1 *puStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  long *plStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  byte bStack_6b8;
  undefined4 uStack_6b7;
  undefined2 uStack_6b3;
  undefined1 uStack_6b1;
  undefined8 uStack_6a8;
  undefined4 auStack_6a0 [2];
  undefined8 uStack_698;
  undefined4 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined *puStack_678;
  undefined1 *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined4 uStack_650;
  undefined8 uStack_648;
  long *plStack_640;
  long lStack_638;
  long lStack_630;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined8 uStack_620;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 uStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  char cStack_528;
  undefined *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  byte bStack_478;
  undefined7 uStack_477;
  undefined8 uStack_468;
  char cStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  int iStack_430;
  undefined4 uStack_42c;
  char cStack_428;
  long lStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  int iStack_3f8;
  undefined4 uStack_3f4;
  char cStack_3f0;
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
  undefined *puStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined1 uStack_390;
  undefined1 auStack_388 [8];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  uint uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined1 auStack_308 [8];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
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
  undefined7 uStack_277;
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
  undefined1 uStack_238;
  undefined7 uStack_237;
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
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [384];
  
  func_0x0e97e540();
  func_0x0d89f0d0(param_1);
  if ((DAT_0f734f38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f734f38), iVar3 != 0)) {
    func_0x0db6eb00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f734eb8,0xf53dab8);
    func_0x0410844d(&DAT_0f734f38);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f734eb8 + 4)) * 8);
  do {
    lVar6 = *plVar5;
    if (lVar6 == -1) goto LAB_0db39ac0;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f734eb8 + 4));
  if (plVar5 == *(long **)(param_1 + 0x38)) {
LAB_0db39ac0:
    puVar4 = &DAT_0f734eb8;
    if (iRam000000000f734f18 != -0x2b3da790) goto LAB_0db39b2d;
LAB_0db39aeb:
    lVar6 = *(long *)(puVar4 + 0x68);
    if (lVar6 == 0) goto LAB_0db39b2d;
    bVar11 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar8 = lVar6 + 9;
    if (bVar11) {
      lVar8 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar11) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    FUN_0db8bc60(&lStack_420,param_1,lVar8,uVar10);
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0db39aeb;
LAB_0db39b2d:
    FUN_0db8bc60(&lStack_420,param_1,&UNK_013a5475,0x13);
  }
  if (cStack_3f0 != '\0') {
    return;
  }
  func_0x0db8c250(&lStack_638,lStack_420 + 0x18);
  if (uStack_620._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_624,uStack_628) + 0x78) + 0x60);
    iVar3 = *piVar9;
    while (iVar3 != (int)uStack_620) {
      piVar9 = piVar9 + 0x16;
      iVar3 = *piVar9;
    }
    lVar6 = *(long *)(piVar9 + 0xc);
    while (lVar6 != lStack_630) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar6 = *(long *)(piVar9 + 0xc);
    }
LAB_0db39bcf:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
  else {
    if (uStack_620._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_624,uStack_628) + 0x78) + 0x48);
      iVar3 = *piVar9;
      while (iVar3 != (int)uStack_620) {
        piVar9 = piVar9 + 0x1a;
        iVar3 = *piVar9;
      }
      goto LAB_0db39bcf;
    }
    if (uStack_620._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_624,uStack_628) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0db8c820(&lStack_638,&lStack_420,&UNK_0147f594,5,0x10);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef44b00;
  if (uStack_620 != (long *)0x0) {
    lVar6 = *uStack_620;
    uStack_620 = plVar5;
    (**(code **)(lVar6 + 8))();
    plVar5 = uStack_620;
  }
  uStack_620 = plVar5;
  uStack_738 = (undefined *)CONCAT44(uStack_738._4_4_,uStack_628);
  uStack_730 = 0;
  uStack_728 = (ulong)uStack_728._4_4_ << 0x20;
  uStack_720 = 1;
  uStack_718 = 0;
  puStack_710 = &UNK_048b3f30;
  puStack_708 = &SUB_048b06d0;
  puStack_700 = &SUB_048b2190;
  puStack_6f8 = &UNK_0db8cde0;
  uStack_6f0 = &UNK_0db8cfa0;
  uStack_6e8 = (long *)((ulong)uStack_6e8._4_4_ << 0x20);
  uStack_6e0 = 0;
  plStack_6d8 = (long *)0x0;
  func_0x048b05a0(lStack_630,&uStack_738);
  plVar5 = plStack_6d8;
  if (plStack_6d8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_6d8 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_6d8 + 0x10))(plStack_6d8);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0db8cae0(&lStack_638);
  uStack_228 = uStack_418;
  uStack_220 = uStack_410;
  uStack_218 = uStack_408;
  uStack_214 = uStack_404;
  uStack_210 = uStack_400;
  uStack_20c = uStack_3fc;
  func_0x048b0bc0(&uStack_620);
  uStack_558 = 0xffffffffffffffff;
  uStack_550 = 0;
  uStack_548 = 1;
  puStack_560 = &UNK_0f489570;
  uStack_540 = 0x617263656e696d12;
  uStack_538 = 0x7466;
  uStack_530 = 0;
  cStack_528 = '\x01';
  uStack_490 = 0xffffffffffffffff;
  uStack_488 = 0;
  uStack_480 = 2;
  puStack_498 = &UNK_0f489570;
  bStack_478 = 0;
  cStack_460 = '\0';
  uStack_718 = 0;
  uStack_6d0 = 0;
  uStack_6c8 = 0;
  uStack_6e0 = 0;
  plStack_6d8 = (long *)0x0;
  uStack_6f0 = (undefined *)0x0;
  uStack_6e8 = (long *)0x0;
  puStack_700 = (undefined1 *)0x0;
  puStack_6f8 = (undefined *)0x0;
  puStack_710 = (undefined *)0x0;
  puStack_708 = (undefined1 *)0x0;
  uStack_6c0 = 0;
  uStack_730 = 0xffffffffffffffff;
  uStack_728 = 0;
  uStack_720._0_1_ = 0xff;
  uStack_720._1_7_ = 0;
  uStack_738 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_718);
  puStack_710 = (undefined *)func_0x041681f0(&uStack_718,0xf547a30);
  puStack_708 = (undefined1 *)func_0x041681f0(&uStack_718,0xf547770);
  puStack_700 = (undefined1 *)0x0;
  puStack_6f8 = (undefined *)0x0;
  uStack_6f0 = (undefined *)0x0;
  uStack_6e8 = (long *)0x0;
  uStack_6e0 = 0;
  plStack_6d8 = (long *)0x0;
  uStack_6d0 = 0;
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  bStack_750 = 0x1c;
  uStack_74f = 0x63656e696d5e;
  uStack_749 = 0x72;
  uStack_748 = 0x61;
  uStack_747 = 0x242a2e3a7466;
  uStack_741 = 0;
  func_0x0ed60210(&uStack_738,&bStack_750,1);
  uStack_720 = CONCAT71(uStack_720._1_7_,2);
  uStack_320 = (undefined4)uStack_730;
  uStack_31c = uStack_730._4_4_;
  uStack_318 = (undefined4)uStack_728;
  uStack_314 = uStack_728._4_4_;
  uStack_310 = 2;
  puStack_328 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_308,&uStack_718);
  uStack_300 = puStack_710;
  uStack_2f8 = puStack_708;
  uStack_2f0 = puStack_700;
  uStack_2e8 = puStack_6f8;
  uStack_2e0 = (undefined4)uStack_6f0;
  uStack_2dc = uStack_6f0._4_4_;
  uStack_2d8 = (undefined4)uStack_6e8;
  uStack_2d4 = uStack_6e8._4_4_;
  if (uStack_6e8 != (long *)0x0) {
    LOCK();
    uStack_6e8[1] = uStack_6e8[1] + 1;
    UNLOCK();
  }
  uStack_2d0 = uStack_6e0;
  if (((ulong)plStack_6d8 & 1) == 0) {
    uStack_2b8 = uStack_6c8;
    uStack_2c8 = (ulong)plStack_6d8;
    uStack_2c0 = uStack_6d0;
  }
  else {
    func_0x0412e5e0(&uStack_2c8,uStack_6c8,uStack_6d0);
  }
  uStack_2b0 = uStack_6c0;
  uStack_500 = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = (long *)0x0;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4a8 = 0;
  uStack_518 = 0xffffffffffffffff;
  uStack_510 = 0;
  uStack_508 = 0xff;
  puStack_520 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_500);
  uStack_4f8 = func_0x041681f0(&uStack_500,0xf547a30);
  uStack_4f0 = func_0x041681f0(&uStack_500,0xf547770);
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = (long *)0x0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  bStack_6b8 = 10;
  uStack_6b7 = 0x2b535c5e;
  uStack_6b3 = 0x24;
  func_0x0ed60210(&puStack_520,&bStack_6b8,0);
  uStack_390 = (undefined1)uStack_508;
  uStack_3a0 = (undefined4)uStack_518;
  uStack_39c = uStack_518._4_4_;
  uStack_398 = (undefined4)uStack_510;
  uStack_394 = uStack_510._4_4_;
  puStack_3a8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_388,&uStack_500);
  uStack_380 = uStack_4f8;
  uStack_378 = uStack_4f0;
  uStack_370 = uStack_4e8;
  uStack_368 = uStack_4e0;
  uStack_360 = (undefined4)uStack_4d8;
  uStack_35c = uStack_4d8._4_4_;
  uStack_358 = (undefined4)uStack_4d0;
  uStack_354 = uStack_4d0._4_4_;
  if (uStack_4d0 != (long *)0x0) {
    LOCK();
    uStack_4d0[1] = uStack_4d0[1] + 1;
    UNLOCK();
  }
  uStack_350 = uStack_4c8;
  if ((uStack_4c0 & 1) == 0) {
    uStack_338 = uStack_4b0;
    uStack_348 = (uint)uStack_4c0;
    uStack_344 = uStack_4c0._4_4_;
    uStack_340 = (undefined4)uStack_4b8;
    uStack_33c = uStack_4b8._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_348,uStack_4b0,uStack_4b8);
  }
  uStack_330 = uStack_4a8;
  uStack_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0;
  uStack_1b8 = 0xff;
  puStack_1d0 = &UNK_0f497470;
  func_0x0db8d170(auStack_1b0,&puStack_560,&puStack_498,&puStack_328,&puStack_3a8);
  uStack_1b8 = 0xff;
  if (iStack_3f8 == 4) {
    if ((DAT_0f734f38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f734f38), iVar3 != 0)) {
      func_0x0db6eb00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f734eb8,0xf53dab8);
      func_0x0410844d(&DAT_0f734f38);
    }
    plVar5 = (long *)(*(long *)(lStack_420 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_420 + 0x20) -
                                          *(long *)(lStack_420 + 0x18)) >> 3) - 1U &
                            *(uint *)(_DAT_0f734eb8 + 4)) * 8);
    do {
      lVar6 = *plVar5;
      if (lVar6 == -1) goto LAB_0db3a2d8;
      plVar5 = (long *)(*(long *)(lStack_420 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(lStack_420 + 0x30) + 8 + lVar6 * 0x18) !=
             *(uint *)(_DAT_0f734eb8 + 4));
    if (plVar5 == *(long **)(lStack_420 + 0x38)) {
LAB_0db3a2d8:
      puVar4 = &DAT_0f734eb8;
    }
    else {
      puVar4 = (undefined *)plVar5[2];
    }
    lVar6 = func_0x048b1040(lStack_420 + 0x18,puVar4,uStack_3f4,1);
    if (lVar6 == 0) {
      lStack_638 = 0;
      lStack_630 = 0;
      FUN_048b10d0(&lStack_638);
      lVar8 = *(long *)(lStack_638 + 0x38);
      lVar6 = lStack_638;
      if (lVar8 == 0) goto LAB_0db3a42b;
LAB_0db3a450:
      do {
        lVar6 = lVar8;
        lVar8 = *(long *)(lVar6 + 0x38);
        if (*(long *)(lVar6 + 0x38) == 0) {
          lStack_638 = 0;
          lStack_630 = 0;
          FUN_048b10d0(&lStack_638);
          lVar8 = lStack_638;
        }
      } while (lVar8 != 0);
    }
    else {
      lVar8 = *(long *)(lVar6 + 0x38);
      if (*(long *)(lVar6 + 0x38) != 0) goto LAB_0db3a450;
LAB_0db3a42b:
      lStack_638 = 0;
      lStack_630 = 0;
      FUN_048b10d0(&lStack_638);
      lVar8 = lStack_638;
      if (lStack_638 != 0) goto LAB_0db3a450;
    }
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
LAB_0db3a4b5:
    *(undefined1 *)(puVar7 + 3) = uStack_1b8;
    *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_1c8;
    *(undefined4 *)((long)puVar7 + 0xc) = uStack_1c8._4_4_;
    *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_1c0;
    *(undefined4 *)((long)puVar7 + 0x14) = uStack_1c0._4_4_;
    *puVar7 = &UNK_0f497470;
    func_0x0db8d440(puVar7 + 4,auStack_1b0);
    plVar5 = *(long **)(lVar6 + 8);
    *(undefined8 **)(lVar6 + 8) = puVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
  }
  else if (iStack_3f8 == 1) {
    if ((DAT_0f734f38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f734f38), iVar3 != 0)) {
      func_0x0db6eb00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f734eb8,0xf53dab8);
      func_0x0410844d(&DAT_0f734f38);
    }
    plVar5 = (long *)(*(long *)(lStack_420 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_420 + 0x20) -
                                          *(long *)(lStack_420 + 0x18)) >> 3) - 1U &
                            *(uint *)(_DAT_0f734eb8 + 4)) * 8);
    do {
      lVar6 = *plVar5;
      if (lVar6 == -1) goto LAB_0db3a268;
      plVar5 = (long *)(*(long *)(lStack_420 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(lStack_420 + 0x30) + 8 + lVar6 * 0x18) !=
             *(uint *)(_DAT_0f734eb8 + 4));
    if (plVar5 == *(long **)(lStack_420 + 0x38)) {
LAB_0db3a268:
      puVar4 = &DAT_0f734eb8;
    }
    else {
      puVar4 = (undefined *)plVar5[2];
    }
    lVar6 = func_0x048b0c90(lStack_420 + 0x18,puVar4,uStack_3f4,1);
    if (lVar6 == 0) {
      lStack_638 = 0;
      lStack_630 = 0;
      func_0x048b0d20(&lStack_638);
      lVar6 = lStack_638;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    goto LAB_0db3a4b5;
  }
  uStack_440 = uStack_218;
  uStack_43c = uStack_214;
  uStack_438 = uStack_210;
  uStack_434 = uStack_20c;
  uStack_450 = (undefined4)uStack_228;
  uStack_44c = uStack_228._4_4_;
  uStack_448 = (undefined4)uStack_220;
  uStack_444 = uStack_220._4_4_;
  uStack_458 = lStack_420;
  iStack_430 = iStack_3f8;
  uStack_42c = uStack_3f4;
  cStack_428 = cStack_3f0;
  func_0x0db8c250(&lStack_638,lStack_420 + 0x18);
  if (uStack_620._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_624,uStack_628) + 0x78) + 0x60);
    iVar3 = *piVar9;
    while (iVar3 != (int)uStack_620) {
      piVar9 = piVar9 + 0x16;
      iVar3 = *piVar9;
    }
    lVar6 = *(long *)(piVar9 + 0xc);
    while (lVar6 != lStack_630) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar6 = *(long *)(piVar9 + 0xc);
    }
LAB_0db3a5df:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
  else {
    if (uStack_620._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_624,uStack_628) + 0x78) + 0x48);
      iVar3 = *piVar9;
      while (iVar3 != (int)uStack_620) {
        piVar9 = piVar9 + 0x1a;
        iVar3 = *piVar9;
      }
      goto LAB_0db3a5df;
    }
    if (uStack_620._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_624,uStack_628) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0db8c820(&lStack_638,&uStack_458,&UNK_012791a5,9,0x10);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0f0126a0;
  if (uStack_620 != (long *)0x0) {
    lVar6 = *uStack_620;
    uStack_620 = plVar5;
    (**(code **)(lVar6 + 8))();
    plVar5 = uStack_620;
  }
  uStack_620 = plVar5;
  auStack_6a0[0] = uStack_628;
  uStack_698 = 0;
  uStack_690 = 0;
  uStack_688 = 1;
  uStack_680 = 0;
  puStack_678 = &UNK_05daeda0;
  puStack_670 = &SUB_048b06d0;
  puStack_668 = &UNK_05daea90;
  puStack_660 = &UNK_0db8d690;
  puStack_658 = &UNK_0db8d7f0;
  uStack_650 = 0;
  uStack_648 = 0;
  plStack_640 = (long *)0x0;
  func_0x048b05a0(lStack_630,auStack_6a0);
  plVar5 = plStack_640;
  if (plStack_640 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_640 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_640 + 0x10))(plStack_640);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0db8cae0(&lStack_638);
  cStack_278 = cStack_428;
  uStack_288 = uStack_438;
  uStack_284 = uStack_434;
  iStack_280 = iStack_430;
  uStack_27c = uStack_42c;
  uStack_298 = uStack_448;
  uStack_294 = uStack_444;
  uStack_290 = uStack_440;
  uStack_28c = uStack_43c;
  uStack_2a8 = (undefined4)uStack_458;
  uStack_2a4 = uStack_458._4_4_;
  uStack_2a0 = uStack_450;
  uStack_29c = uStack_44c;
  func_0x048b0bc0(&uStack_620);
  uStack_3e8 = uStack_2a8;
  uStack_3e4 = uStack_2a4;
  uStack_3e0 = uStack_2a0;
  uStack_3dc = uStack_29c;
  uStack_3d8 = uStack_298;
  uStack_3d4 = uStack_294;
  uStack_3d0 = uStack_290;
  uStack_3cc = uStack_28c;
  uStack_3c8 = uStack_288;
  uStack_3c4 = uStack_284;
  iStack_3c0 = iStack_280;
  uStack_3bc = uStack_27c;
  uStack_3b8 = CONCAT71(uStack_277,cStack_278);
  func_0x0db8c250(&lStack_638,CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
  if (uStack_620._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_624,uStack_628) + 0x78) + 0x60);
    iVar3 = *piVar9;
    while (iVar3 != (int)uStack_620) {
      piVar9 = piVar9 + 0x16;
      iVar3 = *piVar9;
    }
    lVar6 = *(long *)(piVar9 + 0xc);
    while (lVar6 != lStack_630) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar6 = *(long *)(piVar9 + 0xc);
    }
  }
  else {
    if (uStack_620._4_4_ != 1) {
      if (uStack_620._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_624,uStack_628) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_0db3a8b3;
    }
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_624,uStack_628) + 0x78) + 0x48);
    iVar3 = *piVar9;
    while (iVar3 != (int)uStack_620) {
      piVar9 = piVar9 + 0x1a;
      iVar3 = *piVar9;
    }
  }
  *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
LAB_0db3a8b3:
  func_0x0db8c820(&lStack_638,&uStack_3e8,&UNK_011a11b7,5,0x10);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0f0c2710;
  if (uStack_620 != (long *)0x0) {
    lVar6 = *uStack_620;
    uStack_620 = plVar5;
    (**(code **)(lVar6 + 8))();
    plVar5 = uStack_620;
  }
  uStack_620 = plVar5;
  auStack_6a0[0] = uStack_628;
  uStack_698 = 0;
  uStack_690 = 0;
  uStack_688 = 1;
  uStack_680 = 0;
  puStack_678 = &UNK_072a3520;
  puStack_670 = &SUB_048b06d0;
  puStack_668 = &SUB_072a3240;
  puStack_660 = &UNK_0db8d9d0;
  puStack_658 = &UNK_0db8db30;
  uStack_650 = 0;
  uStack_648 = 0;
  plStack_640 = (long *)0x0;
  func_0x048b05a0(lStack_630,auStack_6a0);
  plVar5 = plStack_640;
  if (plStack_640 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_640 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_640 + 0x10))(plStack_640);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0db8cae0(&lStack_638);
  uStack_238 = (undefined1)uStack_3b8;
  uStack_248 = uStack_3c8;
  uStack_244 = uStack_3c4;
  iStack_240 = iStack_3c0;
  uStack_23c = uStack_3bc;
  uStack_258 = uStack_3d8;
  uStack_254 = uStack_3d4;
  uStack_250 = uStack_3d0;
  uStack_24c = uStack_3cc;
  uStack_268 = uStack_3e8;
  uStack_264 = uStack_3e4;
  uStack_260 = uStack_3e0;
  uStack_25c = uStack_3dc;
  func_0x048b0bc0(&uStack_620);
  uStack_208 = uStack_268;
  uStack_204 = uStack_264;
  uStack_200 = uStack_260;
  uStack_1fc = uStack_25c;
  uStack_1f8 = uStack_258;
  uStack_1f4 = uStack_254;
  uStack_1f0 = uStack_250;
  uStack_1ec = uStack_24c;
  uStack_1e8 = uStack_248;
  uStack_1e4 = uStack_244;
  iStack_1e0 = iStack_240;
  uStack_1dc = uStack_23c;
  uStack_1d8 = CONCAT71(uStack_237,uStack_238);
  func_0x0db8c820(&lStack_638,&uStack_208,&UNK_01447599,5,1);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f4726f8;
  if (uStack_620 != (long *)0x0) {
    lVar6 = *uStack_620;
    uStack_620 = puVar7;
    (**(code **)(lVar6 + 8))();
    puVar7 = uStack_620;
  }
  uStack_620 = puVar7;
  auStack_6a0[0] = uStack_628;
  uStack_698 = 0;
  uStack_690 = 0;
  uStack_688 = 1;
  uStack_680 = 0;
  puStack_678 = &UNK_0db8dd10;
  puStack_670 = &SUB_048b06d0;
  puStack_668 = &SUB_0d4858f0;
  puStack_660 = &UNK_0db8dd20;
  puStack_658 = &UNK_0db8df20;
  uStack_650 = 0;
  uStack_648 = 0;
  plStack_640 = (long *)0x0;
  func_0x048b05a0(lStack_630,auStack_6a0);
  plVar5 = plStack_640;
  if (plStack_640 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_640 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_640 + 0x10))(plStack_640);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0db8cae0(&lStack_638);
  func_0x048b0bc0(&uStack_620);
  puStack_1d0 = &UNK_0f497470;
  func_0x0db72800(auStack_1b0);
  puStack_3a8 = &UNK_0f4e3c70;
  if ((uStack_348 & 1) != 0) {
    func_0x0412a280(uStack_338,CONCAT44(uStack_344,uStack_348) & 0xfffffffffffffffe);
  }
  plVar5 = (long *)CONCAT44(uStack_354,uStack_358);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x04167a40(auStack_388);
  if ((bStack_6b8 & 1) != 0) {
    func_0x0412a280(uStack_6a8,
                    CONCAT17(uStack_6b1,CONCAT25(uStack_6b3,CONCAT41(uStack_6b7,bStack_6b8))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_4c0 & 1) == 0) {
    puStack_520 = &UNK_0f4e3c70;
    plVar5 = uStack_4d0;
  }
  else {
    puStack_520 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_4b0,uStack_4c0 & 0xfffffffffffffffe);
    plVar5 = uStack_4d0;
  }
  uStack_4d0 = plVar5;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x04167a40(&uStack_500);
  puStack_328 = &UNK_0f4e3c70;
  if ((uStack_2c8 & 1) != 0) {
    func_0x0412a280(uStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
  }
  plVar5 = (long *)CONCAT44(uStack_2d4,uStack_2d8);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x04167a40(auStack_308);
  if ((bStack_750 & 1) != 0) {
    func_0x0412a280(uStack_740,
                    CONCAT17(uStack_749,CONCAT61(uStack_74f,bStack_750)) & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_6d8 & 1) == 0) {
    uStack_738 = &UNK_0f4e3c70;
    plVar5 = uStack_6e8;
  }
  else {
    uStack_738 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_6c8,(ulong)plStack_6d8 & 0xfffffffffffffffe);
    plVar5 = uStack_6e8;
  }
  uStack_6e8 = plVar5;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x04167a40(&uStack_718);
  puStack_498 = &UNK_0f489570;
  if ((cStack_460 == '\x01') && ((bStack_478 & 1) != 0)) {
    func_0x0412a280(uStack_468,CONCAT71(uStack_477,bStack_478) & 0xfffffffffffffffe);
  }
  puStack_560 = &UNK_0f489570;
  if ((cStack_528 == '\x01') && ((uStack_540 & 1) != 0)) {
    func_0x0412a280(uStack_530,uStack_540 & 0xfffffffffffffffe);
  }
  return;
}


