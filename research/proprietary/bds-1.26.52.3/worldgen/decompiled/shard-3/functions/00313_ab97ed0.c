/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xac97ed0 (ELF vaddr 0xab97ed0)
 * Label: caller-of-callee
 * Body:  [[0ac97ed0, 0ac99542] [0ac99550, 0ac99abe] [0ac99ac0, 0ac99c84] [0ac99c90, 0ac99ef6] [0ac99f00, 0ac99f5b] [0ac99f60, 0ac9a185] [0ac9a190, 0ac9a374]]
 * Ghidra: FUN_0ac97ed0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ac97ed0(long param_1,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  int iVar3;
  byte bVar4;
  undefined1 auVar5 [8];
  undefined1 auVar6 [8];
  long *plVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined *puVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  undefined **unaff_RBP;
  long lVar23;
  undefined1 *unaff_R12;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long **pplVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_7a8 [8];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  uint uStack_790;
  undefined4 uStack_78c;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long lStack_778;
  long *plStack_768;
  long *plStack_760;
  code *pcStack_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  uint uStack_748;
  undefined4 uStack_744;
  ulong uStack_740;
  undefined1 auStack_738 [16];
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  byte bStack_718;
  undefined7 uStack_717;
  undefined1 uStack_710;
  undefined1 uStack_70f;
  undefined6 uStack_70e;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  ulong *puStack_6e8;
  ulong *puStack_6e0;
  ulong *puStack_6d8;
  long *plStack_6d0;
  long *plStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  byte bStack_6a8;
  undefined7 uStack_6a7;
  undefined1 uStack_6a0;
  undefined1 uStack_69f;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 auStack_688 [8];
  undefined8 uStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  code *pcStack_660;
  undefined1 auStack_658 [16];
  undefined *puStack_648;
  undefined8 uStack_640;
  code *pcStack_638;
  long *plStack_630;
  undefined8 uStack_628;
  code *pcStack_620;
  long *plStack_618;
  long lStack_610;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined8 *puStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  code *pcStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  code *pcStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 uStack_5a0;
  code *pcStack_598;
  undefined1 auStack_588 [24];
  code *apcStack_570 [2];
  undefined1 auStack_560 [24];
  code *pcStack_548;
  ulong uStack_540;
  ulong uStack_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [8];
  code *pcStack_508;
  code *pcStack_4f8;
  undefined1 auStack_4e0 [16];
  undefined1 auStack_4d0 [8];
  code *pcStack_4c8;
  code *pcStack_4b8;
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [8];
  char cStack_488;
  code *pcStack_480;
  code *pcStack_478;
  long lStack_470;
  char cStack_468;
  char cStack_460;
  undefined1 auStack_448 [24];
  code *pcStack_430;
  long *plStack_408;
  long *plStack_400;
  long lStack_3f8;
  long lStack_3f0;
  code *pcStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  code *pcStack_3b8;
  undefined1 auStack_3b0 [16];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  code *pcStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2e8;
  ulong uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  long *plStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_240 [24];
  code *pcStack_228;
  undefined1 auStack_200 [24];
  code *pcStack_1e8;
  undefined1 auStack_1b8 [24];
  code *pcStack_1a0;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  long *plStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  code *pcStack_128;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  
  cVar11 = *(char *)((long)param_3 + 0x24);
  if (cVar11 == '\x04') {
    return;
  }
  plVar14 = (long *)*param_3;
  plStack_2c8 = plVar14;
  if (cVar11 == '\x02') {
    plStack_2c8 = param_3;
  }
  uStack_690 = param_2;
  if (plStack_2c8 == (long *)0x0 || (int)param_3[4] != -0x6c312afa) {
    if ((code *)param_3[7] == (code *)0x0) {
      return;
    }
    lVar16 = param_3[5];
    lVar27 = param_3[6];
    if (lVar27 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar27 = param_3[6];
      cVar11 = *(char *)((long)param_3 + 0x24);
      plVar14 = (long *)*param_3;
    }
    if (cVar11 == '\x02') {
      plVar14 = param_3;
    }
    plStack_2c8 = (long *)func_0x0488e200(lVar16,lVar27,0x93ced506,plVar14);
    if (plStack_2c8 == (long *)0x0) {
      return;
    }
  }
  if (*plStack_2c8 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)0x0;
    pcStack_758 = (code *)0x0;
    func_0x0652b220(&plStack_768,*(long *)(param_1 + 0x68),*(long *)(param_1 + 0x70),
                    (*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 4) *
                    -0x5555555555555555);
    pcVar17 = *(code **)(param_1 + 0x38);
  }
  else {
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      (**(code **)(param_1 + 0x40))(auStack_688);
    }
    else {
      (**(code **)(param_1 + 0x38))();
    }
    pcVar9 = pcStack_678;
    plStack_408 = (long *)auStack_688;
    plStack_400 = uStack_680;
    auStack_688 = (undefined1  [8])0x0;
    uStack_680 = (long *)0x0;
    pcStack_678 = (code *)0x0;
    func_0x0651ffe0(auStack_688);
    pcVar17 = *(code **)(param_1 + 0x38);
    pcStack_758 = pcVar9;
    plStack_768 = plStack_408;
    plStack_760 = plStack_400;
  }
  if (pcVar17 != (code *)0x0) {
    (*pcVar17)(auStack_688);
    func_0x0d84fd50(uStack_690,auStack_688);
    func_0x0651ffe0(auStack_688);
  }
  func_0x0ac9cf50(auStack_688);
  if ((DAT_0f69a958 == '\0') && (iVar13 = func_0x04108328(&DAT_0f69a958), iVar13 != 0)) {
    func_0x0ac9f770();
    func_0x0410844d(&DAT_0f69a958);
  }
  uStack_2b8 = CONCAT44(uStack_2b8._4_4_,_DAT_0f69a944);
  puStack_2b0 = &UNK_0ac9f6a0;
  pcStack_2a8 = (code *)&UNK_0ac9f760;
  func_0x05da1460(auStack_688);
  bVar4 = *(byte *)(param_1 + 0x20);
  plVar14 = (long *)(ulong)bVar4;
  if ((bVar4 & 1) == 0) {
    uVar21 = (ulong)(bVar4 >> 1);
  }
  else {
    uVar21 = *(ulong *)(param_1 + 0x28);
  }
  plVar20 = (long *)(uVar21 + 0x10);
  if (plVar20 < (long *)0xfffffffffffffff8) {
    if (plVar20 < (long *)0x17) {
      uStack_680 = (long *)0x0;
      pcStack_678 = (code *)0x0;
      auStack_688._1_7_ = 0;
      auStack_688[0] = (char)plVar20 * '\x02';
      pcVar17 = (code *)(auStack_688 + 1);
      if (uVar21 != 0) {
        if ((bVar4 & 1) == 0) goto LAB_0ac981c3;
LAB_0ac9815e:
        lVar16 = *(long *)(param_1 + 0x30);
        goto LAB_0ac981cc;
      }
    }
    else {
      uVar25 = 0x1a;
      if (((ulong)plVar20 | 7) != 0x17) {
        uVar25 = ((ulong)plVar20 | 7) + 1;
      }
      pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
      if (pcVar17 == (code *)0x0) {
        FUN_0eec74c0(uVar25,0);
      }
      auStack_688 = (undefined1  [8])(uVar25 | 1);
      uStack_680 = plVar20;
      pcStack_678 = pcVar17;
      if ((bVar4 & 1) != 0) goto LAB_0ac9815e;
LAB_0ac981c3:
      lVar16 = param_1 + 0x21;
LAB_0ac981cc:
      func_0x0eee2ee0(pcVar17,lVar16,uVar21);
    }
    *(undefined8 *)(pcVar17 + uVar21) = _DAT_0147b3d0;
    *(undefined8 *)(pcVar17 + uVar21 + 8) = _UNK_0147b3d8;
    pcVar17[uVar21 + 0x10] = (code)0x0;
    plStack_3c8 = (long *)0x0;
    plStack_3c0 = (long *)0x0;
    lStack_3d8 = 0;
    lStack_3d0 = 0;
    pcStack_3e8 = (code *)0x0;
    lStack_3e0 = 0;
    lStack_3f8 = 0;
    lStack_3f0 = 0;
    pcStack_3b8 = (code *)0x0;
    func_0x048b1dc0(auStack_3b0);
    func_0x048b1dc0(&uStack_3a0);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    pcStack_350 = (code *)0x0;
    uStack_348 = 0;
    uStack_360 = (undefined8 *)0x0;
    puStack_358 = (undefined8 *)0x0;
    uStack_370 = 0;
    lStack_368 = 0;
    uStack_380 = 0;
    pcStack_378 = (code *)0x0;
    pcStack_390 = (code *)0x0;
    plStack_388 = (long *)0x0;
    if (((ulong)plStack_3c8 & 1) == 0) {
      if (((ulong)auStack_688 & 1) == 0) {
        pcStack_3b8 = pcStack_678;
        plStack_3c8 = (long *)auStack_688;
        plStack_3c0 = uStack_680;
      }
      else {
        FUN_04885070(&plStack_3c8,pcStack_678,uStack_680);
      }
    }
    else {
      plVar14 = (long *)((ulong)auStack_688 >> 1 & 0x7f);
      pcVar17 = (code *)(auStack_688 + 1);
      if (((ulong)auStack_688 & 1) != 0) {
        plVar14 = uStack_680;
        pcVar17 = pcStack_678;
      }
      func_0x04885120(&plStack_3c8,pcVar17,plVar14);
    }
    if (((ulong)auStack_688 & 1) != 0) {
      func_0x0412a280(pcStack_678,(ulong)auStack_688 & 0xfffffffffffffffe);
    }
    bStack_6a8 = 0x10;
    uStack_6a7 = 0x6361626c6c6163;
    uStack_6a0 = 0x6b;
    uStack_69f = 0;
    func_0x0aa7ffa0(&uStack_2b8,&bStack_6a8);
    uStack_750 = 0x74706f0e;
    uStack_74c = 0x736e6f69;
    uStack_748 = uStack_748 & 0xffffff00;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    unaff_RBP = &puStack_160;
    func_0x048b1dc0(unaff_RBP);
    unaff_R12 = auStack_150;
    func_0x0652b590(unaff_R12);
    if ((uStack_178 & 1) == 0) {
      if ((uStack_750 & 1) == 0) {
        uStack_168 = uStack_740;
        uStack_178 = CONCAT44(uStack_74c,uStack_750);
        uStack_170 = CONCAT44(uStack_744,uStack_748);
      }
      else {
        FUN_04885070(&uStack_178,uStack_740,CONCAT44(uStack_744,uStack_748));
      }
    }
    else {
      bVar29 = (uStack_750 & 1) != 0;
      uVar21 = (long)&uStack_750 + 1;
      if (bVar29) {
        uVar21 = uStack_740;
      }
      uVar25 = (ulong)((byte)uStack_750 >> 1);
      if (bVar29) {
        uVar25 = CONCAT44(uStack_744,uStack_748);
      }
      func_0x04885120(&uStack_178,uVar21,uVar25);
    }
    plVar14 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (plVar14 == (long *)0x0) {
      func_0x048b0de0(auStack_688,&bStack_718);
      _DAT_0f54fd90 = auStack_688._0_4_;
      uRam000000000f54fd94 = auStack_688._4_4_;
      uVar12 = (undefined4)uStack_680;
      uVar8 = uStack_680._4_4_;
      auStack_688 = (undefined1  [8])0x0;
      uStack_680 = (long *)0x0;
      plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar12;
      uRam000000000f54fd9c = uVar8;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar20 = plVar14 + 1;
        lVar16 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
        }
      }
      plVar14 = uStack_680;
      if (uStack_680 != (long *)0x0) {
        LOCK();
        plVar20 = uStack_680 + 1;
        lVar16 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*uStack_680 + 0x10))(uStack_680);
          func_0x0412c2d0(plVar14);
        }
      }
      plVar14 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    if (DAT_0f69aa78 == '\0') goto LAB_0ac9a2a1;
  }
  else {
    func_0x04882e30();
LAB_0ac9a2a1:
    iVar13 = func_0x04108328(&DAT_0f69aa78);
    if (iVar13 != 0) {
      func_0x0aca1f60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f69a9f8,0xf53dab8);
      func_0x0410844d(&DAT_0f69aa78);
    }
  }
  plVar20 = (long *)(*plVar14 +
                    (ulong)((int)((ulong)(plVar14[1] - *plVar14) >> 3) - 1U &
                           *(uint *)(_DAT_0f69a9f8 + 4)) * 8);
  do {
    lVar16 = *plVar20;
    if (lVar16 == -1) goto LAB_0ac98540;
    plVar20 = (long *)(plVar14[3] + lVar16 * 0x18);
  } while (*(uint *)(plVar14[3] + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f69a9f8 + 4));
  if (plVar20 == (long *)plVar14[4]) {
LAB_0ac98540:
    puStack_160 = &DAT_0f69a9f8;
  }
  else {
    puStack_160 = (undefined *)plVar20[2];
  }
  auStack_688 = (undefined1  [8])((ulong)auStack_688 & 0xffffffffffffff00);
  cStack_460 = '\0';
  plStack_158 = plVar14;
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  func_0x0aca33b0(auStack_140,auStack_688);
  puVar10 = puStack_108;
  puStack_108 = &UNK_0aca21a0;
  if (puVar10 != &UNK_0aca21a0) {
    uStack_110 = 0;
  }
  if (cStack_460 == '\x01') {
    auStack_688 = (undefined1  [8])&UNK_0f245a60;
    if ((cStack_468 == '\x01') && (pcStack_480 != (code *)0x0)) {
      pcStack_478 = pcStack_480;
      func_0x0412a280(pcStack_480,lStack_470 - (long)pcStack_480);
    }
    if (cStack_488 == '\x01') {
      func_0x095c7300(&pcStack_620);
    }
    func_0x0a7ef860(auStack_688);
  }
  uStack_708 = 0;
  uStack_6f0 = 0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = 0;
  puStack_6d8 = (ulong *)0x0;
  plStack_6d0 = (long *)0x0;
  puStack_6e8 = (ulong *)0x0;
  puStack_6e0 = (ulong *)0x0;
  bStack_718 = 0;
  uStack_717 = 0;
  uStack_710 = 0;
  uStack_70f = 0;
  uStack_70e = 0;
  uStack_700 = 0x6972637362757312;
  uStack_6f8 = 0x6562;
  func_0x06523ef0(auStack_688,&uStack_290);
  func_0x06523ef0(apcStack_570,unaff_R12);
  uStack_788 = 0;
  uStack_780 = 0;
  lStack_778 = 0;
  auStack_738._8_8_ = auStack_738._8_8_ & 0xffffffffffffff00;
  auStack_738._0_8_ = &uStack_788;
  lStack_2e8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (lStack_2e8 == 0) {
    FUN_0eec74c0(0x230,0);
  }
  lStack_778 = lStack_2e8 + 0x230;
  uStack_7a0 = (undefined1  [8])&lStack_2c0;
  uStack_798 = (ulong *)&lStack_2e8;
  uStack_790 = uStack_790 & 0xffffff00;
  auStack_7a8 = (undefined1  [8])&uStack_788;
  uStack_788 = lStack_2e8;
  uStack_780 = lStack_2e8;
  lStack_2c0 = lStack_2e8;
  func_0x06523ef0(lStack_2e8,auStack_688);
  lStack_2e8 = lStack_2e8 + 0x118;
  func_0x06523ef0(lStack_2e8,apcStack_570);
  uStack_780 = lStack_2e8 + 0x118;
  if (pcStack_480 != (code *)0x0) {
    (*pcStack_480)(auStack_498);
  }
  if (pcStack_4c8 != (code *)0x0) {
    (*pcStack_4c8)(auStack_4e0);
  }
  if (pcStack_508 != (code *)0x0) {
    (*pcStack_508)(auStack_520);
  }
  if (pcStack_548 != (code *)0x0) {
    (*pcStack_548)(auStack_560);
  }
  if (pcStack_598 != (code *)0x0) {
    (*pcStack_598)(&uStack_5b0);
  }
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(&pcStack_5f8);
  }
  if (pcStack_620 != (code *)0x0) {
    (*pcStack_620)(&pcStack_638);
  }
  if (pcStack_660 != (code *)0x0) {
    (*pcStack_660)(&pcStack_678);
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar14 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f267610;
  uVar12 = func_0x0d858500(&uStack_788);
  plVar20 = plVar14 + 3;
  *(undefined1 *)(plVar14 + 4) = 2;
  *(undefined4 *)((long)plVar14 + 0x24) = uVar12;
  *(undefined4 *)(plVar14 + 5) = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[3] = (long)&UNK_0f267660;
  *(undefined4 *)(plVar14 + 9) = (undefined4)uStack_788;
  *(undefined4 *)((long)plVar14 + 0x4c) = uStack_788._4_4_;
  *(undefined4 *)(plVar14 + 10) = (undefined4)uStack_780;
  *(undefined4 *)((long)plVar14 + 0x54) = uStack_780._4_4_;
  plVar14[0xb] = lStack_778;
  uStack_788 = 0;
  uStack_780 = 0;
  lStack_778 = 0;
  uVar12 = func_0x0d858620(plVar20);
  plVar7 = plStack_6c8;
  *(undefined4 *)(plVar14 + 5) = uVar12;
  plStack_6d0 = plVar20;
  if (plStack_6c8 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_6c8 + 1;
    lVar16 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      lVar16 = *plStack_6c8;
      plStack_6c8 = plVar14;
      (**(code **)(lVar16 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
      plVar14 = plStack_6c8;
    }
  }
  plStack_6c8 = plVar14;
  _auStack_688 = func_0x0aca25c0();
  _auStack_7a8 = func_0x0aafcbf0();
  func_0x0d850780(auStack_688,auStack_7a8);
  lVar16 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar16 == 0) {
    func_0x048b0de0(auStack_688,auStack_7a8);
    _DAT_0f54fd90 = auStack_688._0_4_;
    uRam000000000f54fd94 = auStack_688._4_4_;
    uVar12 = (undefined4)uStack_680;
    uVar8 = uStack_680._4_4_;
    auStack_688 = (undefined1  [8])0x0;
    uStack_680 = (long *)0x0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar8;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar20 = plVar14 + 1;
      lVar16 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = uStack_680;
    if (uStack_680 != (long *)0x0) {
      LOCK();
      plVar20 = uStack_680 + 1;
      lVar16 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_680 + 0x10))(uStack_680);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar16 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f69aa98 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f69aa98);
    if (iVar13 != 0) {
      func_0x0aca2090();
      func_0x0410844d(&DAT_0f69aa98);
    }
  }
  if (DAT_0f69aa98 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f69aa98);
    if (iVar13 != 0) {
      func_0x0aca2090();
      func_0x0410844d(&DAT_0f69aa98);
    }
  }
  auStack_688 = (undefined1  [8])&DAT_0f69aa80;
  uStack_680 = (long *)CONCAT44(uStack_680._4_4_,_DAT_0f69aa84);
  pcStack_678 = (code *)0x0;
  uStack_670 = (long *)CONCAT44(uStack_670._4_4_,0x80);
  uStack_668 = (long *)0x230;
  pcStack_660 = (code *)&UNK_0aca1ea0;
  auStack_658._0_8_ = &UNK_0aca2110;
  auStack_658._8_8_ = 0;
  puStack_648 = &UNK_0aca2520;
  uStack_640 = 1;
  pcStack_638 = (code *)&SUB_048b5640;
  plStack_630 = (long *)&UNK_0aca25b0;
  uStack_628 = (ulong)uStack_628._4_4_ << 0x20;
  pcStack_620 = (code *)0x0;
  plStack_618 = (long *)0x0;
  lStack_610 = 0;
  func_0x048aee30(&lStack_2e8,lVar16,auStack_688,0x1f19905e);
  lVar16 = lStack_610;
  lStack_610 = 0;
  if (lVar16 != 0) {
    func_0x048ae940(lVar16);
    func_0x0412a280(lVar16,0x78);
  }
  plVar14 = plStack_618;
  if (plStack_618 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_618 + 1;
    lVar16 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_618 + 0x10))(plStack_618);
      func_0x0412c2d0(plVar14);
    }
  }
  if (DAT_0f69aac8 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f69aac8);
    if (iVar13 != 0) {
      func_0x0aca3090();
      func_0x0410844d(&DAT_0f69aac8);
    }
  }
  auStack_688._0_4_ = _DAT_0f69aab4;
  uStack_680 = (long *)0x1;
  pcStack_678 = (code *)&UNK_0aca2730;
  uStack_670 = (long *)&UNK_0aca2740;
  func_0x065abe60(&lStack_2e8);
  uStack_728 = uStack_2d8;
  uStack_724 = uStack_2d4;
  uStack_720 = uStack_2d0;
  uStack_71c = uStack_2cc;
  auStack_738._0_8_ = lStack_2e8;
  auStack_738._8_8_ = uStack_2e0;
  auStack_688._0_4_ = 0xf55160ec;
  uStack_680 = (long *)0x0;
  pcStack_678 = (code *)((ulong)pcStack_678 & 0xffffffff00000000);
  uStack_670 = (long *)0x0;
  uStack_668 = (long *)&UNK_065b4120;
  pcStack_660 = (code *)&SUB_048b06d0;
  auStack_658._0_8_ = &UNK_0aca3510;
  auStack_658._8_8_ = 0;
  puStack_648 = (undefined *)((ulong)puStack_648 & 0xffffffff00000000);
  uStack_640 = 0;
  pcStack_638 = (code *)0x0;
  func_0x049057f0(auStack_738,auStack_688);
  func_0x048aea50(auStack_688);
  uStack_798 = (ulong *)CONCAT44(uStack_724,uStack_728);
  uStack_790 = uStack_720;
  uStack_78c = uStack_71c;
  auStack_7a8 = (undefined1  [8])auStack_738._0_8_;
  uStack_7a0 = (undefined1  [8])auStack_738._8_8_;
  auStack_688._0_4_ = 0xf55160ec;
  uStack_680 = (long *)0x0;
  pcStack_678 = (code *)CONCAT44(pcStack_678._4_4_,1);
  uStack_670 = (long *)0x0;
  uStack_668 = (long *)&UNK_065b4120;
  pcStack_660 = (code *)&SUB_048b06d0;
  auStack_658._0_8_ = &UNK_0aca37c0;
  auStack_658._8_8_ = 0;
  puStack_648 = (undefined *)((ulong)puStack_648 & 0xffffffff00000000);
  uStack_640 = 0;
  pcStack_638 = (code *)0x0;
  func_0x049057f0(auStack_7a8,auStack_688);
  func_0x048aea50(auStack_688);
  pcStack_678 = pcStack_2a8;
  auStack_688 = (undefined1  [8])uStack_2b8;
  uStack_680 = (long *)puStack_2b0;
  uStack_2b8 = 0;
  puStack_2b0 = (undefined *)0x0;
  pcStack_2a8 = (code *)0x0;
  uStack_670 = (long *)uStack_2a0;
  uStack_668 = (long *)uStack_298;
  func_0x065281f0(&pcStack_660,&uStack_290);
  uStack_538 = uStack_168;
  pcStack_548 = (code *)uStack_178;
  uStack_540 = uStack_170;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_530 = *(undefined4 *)unaff_RBP;
  uStack_52c = *(undefined4 *)((long)unaff_RBP + 4);
  uStack_528 = *(undefined4 *)(unaff_RBP + 1);
  uStack_524 = *(undefined4 *)((long)unaff_RBP + 0xc);
  func_0x065281f0(auStack_520,auStack_150);
  auStack_7a8 = (undefined1  [8])0x0;
  uStack_7a0 = (undefined1  [8])0x0;
  uStack_798 = (ulong *)0x0;
  auStack_738._8_8_ = auStack_738._8_8_ & 0xffffffffffffff00;
  auStack_738._0_8_ = auStack_7a8;
  puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar15 == (ulong *)0x0) {
    FUN_0eec74c0(0x280,0);
  }
  puVar2 = puVar15 + 0x50;
  auStack_7a8 = (undefined1  [8])puVar15;
  uStack_7a0 = (undefined1  [8])puVar15;
  uStack_798 = puVar2;
  if (((ulong)auStack_688 & 1) == 0) {
    puVar15[2] = (ulong)pcStack_678;
    *puVar15 = (ulong)auStack_688;
    puVar15[1] = (ulong)uStack_680;
  }
  else {
    func_0x0412e5e0(puVar15,pcStack_678,uStack_680);
  }
  *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_670;
  *(undefined4 *)((long)puVar15 + 0x1c) = uStack_670._4_4_;
  *(undefined4 *)(puVar15 + 4) = (undefined4)uStack_668;
  *(undefined4 *)((long)puVar15 + 0x24) = uStack_668._4_4_;
  func_0x06523ef0(puVar15 + 5,&pcStack_660);
  if (((ulong)pcStack_548 & 1) == 0) {
    puVar15[0x2a] = uStack_538;
    puVar15[0x28] = (ulong)pcStack_548;
    puVar15[0x29] = uStack_540;
  }
  else {
    func_0x0412e5e0(puVar15 + 0x28,uStack_538,uStack_540);
  }
  *(undefined4 *)(puVar15 + 0x2b) = uStack_530;
  *(undefined4 *)((long)puVar15 + 0x15c) = uStack_52c;
  *(undefined4 *)(puVar15 + 0x2c) = uStack_528;
  *(undefined4 *)((long)puVar15 + 0x164) = uStack_524;
  func_0x06523ef0(puVar15 + 0x2d,auStack_520);
  uStack_7a0 = (undefined1  [8])puVar2;
  if (pcStack_430 != (code *)0x0) {
    (*pcStack_430)(auStack_448);
  }
  if (pcStack_478 != (code *)0x0) {
    (*pcStack_478)(auStack_490);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(auStack_4d0);
  }
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_510);
  }
  if (((ulong)pcStack_548 & 1) != 0) {
    func_0x0412a280(uStack_538,(ulong)pcStack_548 & 0xfffffffffffffffe);
  }
  if (apcStack_570[0] != (code *)0x0) {
    (*apcStack_570[0])(auStack_588);
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(&uStack_5d0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(&lStack_610);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(auStack_658 + 8);
  }
  if (((ulong)auStack_688 & 1) != 0) {
    func_0x0412a280(pcStack_678,(ulong)auStack_688 & 0xfffffffffffffffe);
  }
  iVar13 = (**(code **)(*plStack_6d0 + 0x20))();
  uVar25 = ((long)uStack_7a0 - (long)auStack_7a8 >> 6) * -0x3333333333333333;
  uVar21 = 0;
  if ((iVar13 != 0) && ((uint)uVar25 != 0)) {
    plStack_408 = (long *)CONCAT44(plStack_408._4_4_,iVar13);
    uVar24 = 0;
    uVar21 = 0;
    do {
      auVar30 = (**(code **)(*plStack_6d0 + 0x28))(plStack_6d0,uVar24);
      uVar22 = auVar30._8_8_;
      lVar16 = auVar30._0_8_;
      auVar30 = func_0x06527d70();
      if (auVar30._8_8_ == uVar22) {
        if (auVar30._0_8_ == 0) {
          lVar27 = func_0x048aead0(auVar30._8_8_);
          iVar13 = *(int *)(lVar27 + 8);
          if (lVar16 == 0) goto LAB_0ac990d1;
LAB_0ac990b2:
          if (iVar13 != *(int *)(lVar16 + 8)) goto LAB_0ac990f0;
        }
        else {
          iVar13 = *(int *)(auVar30._0_8_ + 8);
          if (lVar16 != 0) goto LAB_0ac990b2;
LAB_0ac990d1:
          lVar27 = func_0x048aead0(uVar22);
          if (iVar13 != *(int *)(lVar27 + 8)) goto LAB_0ac990f0;
        }
      }
      else {
LAB_0ac990f0:
        auVar30 = func_0x06527e30();
        if (auVar30._8_8_ == uVar22) {
          if (auVar30._0_8_ == 0) {
            lVar27 = func_0x048aead0(auVar30._8_8_);
            iVar13 = *(int *)(lVar27 + 8);
          }
          else {
            iVar13 = *(int *)(auVar30._0_8_ + 8);
          }
          if (lVar16 == 0) {
            lVar27 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar27 + 8);
          }
          else {
            iVar3 = *(int *)(lVar16 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0ac992e5;
        }
        auVar30 = func_0x06527ef0();
        if (auVar30._8_8_ == uVar22) {
          if (auVar30._0_8_ == 0) {
            lVar27 = func_0x048aead0(auVar30._8_8_);
            iVar13 = *(int *)(lVar27 + 8);
          }
          else {
            iVar13 = *(int *)(auVar30._0_8_ + 8);
          }
          if (lVar16 == 0) {
            lVar27 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar27 + 8);
          }
          else {
            iVar3 = *(int *)(lVar16 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0ac992e5;
        }
        auVar30 = func_0x06527fb0();
        if (auVar30._8_8_ == uVar22) {
          if (auVar30._0_8_ == 0) {
            lVar27 = func_0x048aead0(auVar30._8_8_);
            iVar13 = *(int *)(lVar27 + 8);
          }
          else {
            iVar13 = *(int *)(auVar30._0_8_ + 8);
          }
          if (lVar16 == 0) {
            lVar27 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar27 + 8);
          }
          else {
            iVar3 = *(int *)(lVar16 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0ac992e5;
        }
        auVar30 = func_0x06528070();
        if (auVar30._8_8_ == uVar22) {
          if (auVar30._0_8_ == 0) {
            lVar27 = func_0x048aead0(auVar30._8_8_);
            iVar13 = *(int *)(lVar27 + 8);
          }
          else {
            iVar13 = *(int *)(auVar30._0_8_ + 8);
          }
          if (lVar16 == 0) {
            lVar27 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar27 + 8);
          }
          else {
            iVar3 = *(int *)(lVar16 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0ac992e5;
        }
        auVar30 = func_0x06528130();
        if (auVar30._8_8_ == uVar22) {
          if (auVar30._0_8_ == 0) {
            lVar27 = func_0x048aead0(auVar30._8_8_);
            iVar13 = *(int *)(lVar27 + 8);
          }
          else {
            iVar13 = *(int *)(auVar30._0_8_ + 8);
          }
          if (lVar16 == 0) {
            lVar27 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar27 + 8);
          }
          else {
            iVar3 = *(int *)(lVar16 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0ac992e5;
        }
        auVar5 = auStack_7a8;
        puVar15 = (ulong *)uStack_7a0;
        if (*(ulong *)((long)auStack_7a8 + (uVar21 * 0x28 + 4) * 8) != uVar22)
        goto joined_r0x0ac994ea;
        if (*(ulong *)((long)auStack_7a8 + (uVar21 * 0x28 + 3) * 8) == 0) {
          lVar27 = func_0x048aead0();
          iVar13 = *(int *)(lVar27 + 8);
          if (lVar16 == 0) goto LAB_0ac992ce;
LAB_0ac992b5:
          if (iVar13 != *(int *)(lVar16 + 8)) goto LAB_0ac994da;
        }
        else {
          iVar13 = *(int *)(*(ulong *)((long)auStack_7a8 + (uVar21 * 0x28 + 3) * 8) + 8);
          if (lVar16 != 0) goto LAB_0ac992b5;
LAB_0ac992ce:
          lVar16 = func_0x048aead0(uVar22);
          if (iVar13 != *(int *)(lVar16 + 8)) goto LAB_0ac994da;
        }
        uVar21 = (ulong)((int)uVar21 + 1);
      }
LAB_0ac992e5:
      if ((uint)uVar25 <= (uint)uVar21) break;
      uVar24 = uVar24 + 1;
    } while (uVar24 < (uint)plStack_408);
    uVar25 = ((long)uStack_7a0 - (long)auStack_7a8 >> 6) * -0x3333333333333333;
  }
  puVar15 = puStack_6e8;
  if (uVar25 == uVar21) {
    puVar2 = puStack_6e0;
    if (puStack_6e8 != (ulong *)0x0) {
      while (puVar15 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_6e0 = puVar15;
      func_0x0412a280(puStack_6e8,(long)puStack_6d8 - (long)puStack_6e8);
    }
    puStack_6d8 = uStack_798;
    if (uStack_360 < puStack_358) {
      *uStack_360 = 0;
      uStack_360[1] = 0;
      uStack_360[2] = 0;
      *uStack_360 = CONCAT71(uStack_717,bStack_718);
      uStack_360[1] = CONCAT62(uStack_70e,CONCAT11(uStack_70f,uStack_710));
      uStack_360[2] = uStack_708;
      bStack_718 = 0;
      uStack_717 = 0;
      uStack_710 = 0;
      uStack_70f = 0;
      uStack_70e = 0;
      uStack_708 = 0;
      uStack_360[5] = uStack_6f0;
      uStack_360[3] = uStack_700;
      uStack_360[4] = uStack_6f8;
      uStack_700 = 0;
      uStack_6f8 = 0;
      uStack_6f0 = 0;
      uStack_360[6] = 0;
      uStack_360[7] = 0;
      uStack_360[8] = 0;
      uStack_360[6] = auStack_7a8;
      uStack_360[7] = uStack_7a0;
      uStack_360[8] = uStack_798;
      puStack_6e8 = (ulong *)0x0;
      puStack_6e0 = (ulong *)0x0;
      puStack_6d8 = (ulong *)0x0;
      uStack_360[9] = plStack_6d0;
      uStack_360[10] = plStack_6c8;
      plStack_6d0 = (long *)0x0;
      plStack_6c8 = (undefined8 *)0x0;
      uStack_360[0xb] = 0;
      uStack_360[0xc] = 0;
      uStack_360[0xd] = 0;
      *(undefined4 *)(uStack_360 + 0xb) = (undefined4)uStack_6c0;
      *(undefined4 *)((long)uStack_360 + 0x5c) = uStack_6c0._4_4_;
      *(undefined4 *)(uStack_360 + 0xc) = (undefined4)uStack_6b8;
      *(undefined4 *)((long)uStack_360 + 100) = uStack_6b8._4_4_;
      uStack_360[0xd] = uStack_6b0;
      uStack_6c0 = 0;
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      uStack_360 = uStack_360 + 0xe;
    }
    else {
      puStack_6e8 = (ulong *)auStack_7a8;
      puStack_6e0 = (ulong *)uStack_7a0;
      uStack_360 = (undefined8 *)func_0x0652ac80(&lStack_368,&bStack_718);
    }
    pplVar28 = (long **)(uStack_360 + -0xe);
    lVar16 = uStack_788;
  }
  else {
LAB_0ac994da:
    auVar5 = auStack_7a8;
    puVar15 = (ulong *)uStack_7a0;
    if (auStack_7a8 != (undefined1  [8])0x0) {
joined_r0x0ac994ea:
      while (auVar6 = auStack_7a8, auStack_7a8 != (undefined1  [8])puVar15) {
        auStack_7a8 = auVar5;
        func_0x05fe8450(puVar15 + -0x28);
        auVar5 = auStack_7a8;
        puVar15 = puVar15 + -0x28;
        auStack_7a8 = auVar6;
      }
      uStack_7a0 = auStack_7a8;
      auStack_7a8 = auVar5;
      func_0x0412a280(auVar5,(long)uStack_798 - (long)auVar5);
    }
    pplVar28 = (long **)0xf6968f8;
    lVar16 = uStack_788;
  }
  uStack_788 = lVar16;
  if (lVar16 != 0) {
    if (lVar16 != uStack_780) {
      lVar27 = uStack_780 + -0x40;
      do {
        if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
          (**(code **)(lVar27 + 0x18))(lVar27);
        }
        if (*(code **)(lVar27 + -0x30) != (code *)0x0) {
          (**(code **)(lVar27 + -0x30))(lVar27 + -0x48);
        }
        if (*(code **)(lVar27 + -0x70) != (code *)0x0) {
          (**(code **)(lVar27 + -0x70))(lVar27 + -0x88);
        }
        if (*(code **)(lVar27 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar27 + -0xb0))(lVar27 + -200);
        }
        lVar26 = lVar27 + -0xd8;
        lVar27 = lVar27 + -0x118;
      } while (lVar26 != lVar16);
    }
    uStack_780 = lVar16;
    func_0x0412a280(uStack_788,lStack_778 - uStack_788);
  }
  func_0x05f93280(&bStack_718);
  if (pplVar28 != &plStack_768) {
    func_0x066dff70(pplVar28,plStack_768,plStack_760,
                    ((long)plStack_760 - (long)plStack_768 >> 4) * -0x5555555555555555);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((uStack_750 & 1) != 0) {
    func_0x0412a280(uStack_740,CONCAT44(uStack_74c,uStack_750) & 0xfffffffffffffffe);
  }
  if (pcStack_1a0 != (code *)0x0) {
    (*pcStack_1a0)(auStack_1b8);
  }
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(auStack_200);
  }
  if (pcStack_228 != (code *)0x0) {
    (*pcStack_228)(auStack_240);
  }
  if (pcStack_268 != (code *)0x0) {
    (*pcStack_268)(&uStack_280);
  }
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(pcStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  if ((bStack_6a8 & 1) != 0) {
    func_0x0412a280(uStack_698,CONCAT71(uStack_6a7,bStack_6a8) & 0xfffffffffffffffe);
  }
  bStack_718 = 0x10;
  uStack_717 = 0x6361626c6c6163;
  uStack_710 = 0x6b;
  uStack_70f = 0;
  func_0x0aa7ffa0(auStack_688,&bStack_718);
  pcStack_2a8 = (code *)0x0;
  uStack_290 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  pcStack_268 = (code *)0x0;
  uStack_260 = 0;
  uStack_278 = 0;
  puStack_270 = (undefined8 *)0x0;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_2b8 = 0;
  puStack_2b0 = (undefined *)0x0;
  uStack_2a0 = 0x63736275736e7516;
  uStack_298 = 0x65626972;
  func_0x0aa82a30(&uStack_178,auStack_688);
  pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar17 == (code *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar17 + 8) = 0;
  *(undefined8 *)((long)pcVar17 + 0x10) = 0;
  *(undefined **)pcVar17 = &UNK_0f2676f0;
  uVar12 = func_0x0d858500(&uStack_178);
  puVar19 = (undefined8 *)((long)pcVar17 + 0x18);
  *(undefined1 *)((long)pcVar17 + 0x20) = 2;
  *(undefined4 *)((long)pcVar17 + 0x24) = uVar12;
  *(undefined4 *)((long)pcVar17 + 0x28) = 0;
  *(undefined8 *)((long)pcVar17 + 0x30) = 0;
  *(undefined8 *)((long)pcVar17 + 0x38) = 0;
  *(undefined8 *)((long)pcVar17 + 0x40) = 0;
  *(undefined **)((long)pcVar17 + 0x18) = &UNK_0f267740;
  *(undefined4 *)((long)pcVar17 + 0x48) = (undefined4)uStack_178;
  *(undefined4 *)((long)pcVar17 + 0x4c) = uStack_178._4_4_;
  *(undefined4 *)((long)pcVar17 + 0x50) = (undefined4)uStack_170;
  *(undefined4 *)((long)pcVar17 + 0x54) = uStack_170._4_4_;
  *(ulong *)((long)pcVar17 + 0x58) = uStack_168;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uVar12 = func_0x0d858620(puVar19);
  pcVar9 = pcStack_268;
  *(undefined4 *)((long)pcVar17 + 0x28) = uVar12;
  puStack_270 = puVar19;
  if (pcStack_268 != (code *)0x0) {
    LOCK();
    plVar14 = (long *)((long)pcStack_268 + 8);
    lVar16 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      lVar16 = *(long *)pcStack_268;
      pcStack_268 = pcVar17;
      (**(code **)(lVar16 + 0x10))(pcVar9);
      func_0x0412c2d0(pcVar9);
      pcVar17 = pcStack_268;
    }
  }
  pcStack_268 = pcVar17;
  _auStack_7a8 = func_0x0aca25c0();
  auStack_738 = func_0x0aafcbf0();
  func_0x0d850780(auStack_7a8,auStack_738);
  cVar11 = func_0x0aa82bb0(&uStack_2b8,auStack_688);
  if (cVar11 == '\0') {
    pplVar28 = (long **)0xf6968f8;
    if (uStack_178 == 0) goto LAB_0ac99a5d;
LAB_0ac99aa9:
    lVar16 = uStack_178;
    if (uStack_178 != uStack_170) {
      lVar27 = uStack_170 + -0x40;
      do {
        if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
          (**(code **)(lVar27 + 0x18))(lVar27);
        }
        if (*(code **)(lVar27 + -0x30) != (code *)0x0) {
          (**(code **)(lVar27 + -0x30))(lVar27 + -0x48);
        }
        if (*(code **)(lVar27 + -0x70) != (code *)0x0) {
          (**(code **)(lVar27 + -0x70))(lVar27 + -0x88);
        }
        if (*(code **)(lVar27 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar27 + -0xb0))(lVar27 + -200);
        }
        lVar26 = lVar27 + -0xd8;
        lVar27 = lVar27 + -0x118;
      } while (lVar26 != lVar16);
    }
    uStack_170 = lVar16;
    func_0x0412a280(uStack_178,uStack_168 - uStack_178);
    func_0x05f93280(&uStack_2b8);
  }
  else {
    if (uStack_360 < puStack_358) {
      *uStack_360 = 0;
      uStack_360[1] = 0;
      uStack_360[2] = 0;
      *uStack_360 = uStack_2b8;
      uStack_360[1] = puStack_2b0;
      uStack_360[2] = pcStack_2a8;
      uStack_2b8 = 0;
      puStack_2b0 = (undefined *)0x0;
      pcStack_2a8 = (code *)0x0;
      uStack_360[5] = uStack_290;
      uStack_360[3] = uStack_2a0;
      uStack_360[4] = uStack_298;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_360[6] = 0;
      uStack_360[7] = 0;
      uStack_360[8] = 0;
      uStack_360[6] = uStack_288;
      uStack_360[7] = uStack_280;
      uStack_360[8] = uStack_278;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_360[9] = puStack_270;
      uStack_360[10] = pcStack_268;
      puStack_270 = (undefined8 *)0x0;
      pcStack_268 = (code *)0x0;
      uStack_360[0xb] = 0;
      uStack_360[0xc] = 0;
      uStack_360[0xd] = 0;
      uStack_360[0xb] = uStack_260;
      uStack_360[0xc] = uStack_258;
      uStack_360[0xd] = uStack_250;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_360 = uStack_360 + 0xe;
    }
    else {
      uStack_360 = (undefined8 *)func_0x0652ac80(&lStack_368,&uStack_2b8);
    }
    pplVar28 = (long **)(uStack_360 + -0xe);
    if (uStack_178 != 0) goto LAB_0ac99aa9;
LAB_0ac99a5d:
    func_0x05f93280(&uStack_2b8);
  }
  if (pplVar28 != &plStack_768) {
    func_0x066dff70(pplVar28,plStack_768,plStack_760,
                    ((long)plStack_760 - (long)plStack_768 >> 4) * -0x5555555555555555);
  }
  if (apcStack_570[0] != (code *)0x0) {
    (*apcStack_570[0])(auStack_588);
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(&uStack_5d0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(&lStack_610);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(auStack_658 + 8);
  }
  if (((ulong)auStack_688 & 1) != 0) {
    func_0x0412a280(pcStack_678,(ulong)auStack_688 & 0xfffffffffffffffe);
  }
  if ((bStack_718 & 1) != 0) {
    func_0x0412a280(uStack_708,CONCAT71(uStack_717,bStack_718) & 0xfffffffffffffffe);
  }
  func_0x066dff70(&lStack_3f8,plStack_768,plStack_760,
                  ((long)plStack_760 - (long)plStack_768 >> 4) * -0x5555555555555555);
  auStack_3b0 = func_0x0aafcbf0();
  lVar27 = lStack_3e0;
  lVar16 = lStack_3d8;
  if (lStack_3e0 != 0) {
    for (; lVar27 != lVar16; lVar16 = lVar16 + -0x30) {
      if ((*(byte *)(lVar16 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar16 + -0x10),
                        *(ulong *)(lVar16 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_3d8 = lVar27;
    func_0x0412a280(lStack_3e0,lStack_3d0 - lStack_3e0);
  }
  pcStack_678 = pcStack_3e8;
  uStack_680 = (long *)lStack_3f0;
  auStack_688 = (undefined1  [8])lStack_3f8;
  lStack_3f8 = 0;
  lStack_3f0 = 0;
  pcStack_3e8 = (code *)0x0;
  lStack_3e0 = 0;
  lStack_3d8 = 0;
  lStack_3d0 = 0;
  pcStack_660 = pcStack_3b8;
  uStack_670 = plStack_3c8;
  uStack_668 = plStack_3c0;
  plStack_3c8 = (long *)0x0;
  plStack_3c0 = (long *)0x0;
  pcStack_3b8 = (code *)0x0;
  puStack_648 = (undefined *)uStack_3a0;
  uStack_640 = uStack_398;
  pcStack_638 = pcStack_390;
  plStack_630 = plStack_388;
  uStack_628 = uStack_380;
  pcStack_390 = (code *)0x0;
  plStack_388 = (long *)0x0;
  uStack_380 = 0;
  pcStack_620 = pcStack_378;
  plStack_618 = (long *)uStack_370;
  pcStack_378 = (code *)0x0;
  uStack_370 = 0;
  lStack_610 = lStack_368;
  uStack_608 = (undefined4)uStack_360;
  uStack_604 = uStack_360._4_4_;
  puStack_600 = puStack_358;
  lStack_368 = 0;
  uStack_360 = (undefined8 *)0x0;
  puStack_358 = (undefined8 *)0x0;
  pcStack_5f8 = pcStack_350;
  uStack_5f0 = uStack_348;
  uStack_5e8 = uStack_340;
  pcStack_350 = (code *)0x0;
  uStack_348 = 0;
  uStack_340 = 0;
  pcStack_5e0 = (code *)uStack_338;
  uStack_5d8 = uStack_330;
  uStack_5d0 = uStack_328;
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_5c8 = uStack_320;
  uStack_5c0 = uStack_318;
  pcStack_5b8 = (code *)uStack_310;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_5b0 = (undefined4)uStack_308;
  uStack_5ac = uStack_308._4_4_;
  uStack_5a8 = (undefined4)uStack_300;
  uStack_5a4 = uStack_300._4_4_;
  uStack_5a0 = uStack_2f8;
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  auStack_658 = auStack_3b0;
  func_0x0d84fd50(uStack_690,auStack_688);
  func_0x0651ffe0(auStack_688);
  func_0x0651ffe0(&lStack_3e0);
  lVar27 = lStack_3f8;
  lVar16 = lStack_3f0;
  if (lStack_3f8 != 0) {
    for (; lVar27 != lVar16; lVar16 = lVar16 + -0x30) {
      if ((*(byte *)(lVar16 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar16 + -0x10),
                        *(ulong *)(lVar16 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_3f0 = lVar27;
    func_0x0412a280(lStack_3f8,(long)pcStack_3e8 - lStack_3f8);
  }
  plVar20 = plStack_768;
  plVar14 = plStack_760;
  if (plStack_768 != (long *)0x0) {
    for (; plVar20 != plVar14; plVar14 = plVar14 + -6) {
      if ((*(byte *)(plVar14 + -4) & 1) != 0) {
        func_0x0412a280(plVar14[-2],plVar14[-4] & 0xfffffffffffffffe);
      }
    }
    plStack_760 = plVar20;
    func_0x0412a280(plStack_768,(long)pcStack_758 - (long)plStack_768);
  }
  uVar18 = func_0x0a716770(param_1,&UNK_01b12d12);
  func_0x0a716640(&uStack_2b8,param_1);
  lVar16 = *plStack_2c8;
  func_0x065af670(auStack_688);
  pbVar1 = (byte *)(param_1 + 8);
  if ((byte *)&uStack_670 != pbVar1) {
    bVar4 = *pbVar1;
    if (((ulong)uStack_670 & 1) == 0) {
      if ((bVar4 & 1) == 0) {
        pcStack_660 = *(code **)(param_1 + 0x18);
        uStack_670 = *(long **)pbVar1;
        uStack_668 = *(long **)(param_1 + 0x10);
      }
      else {
        FUN_04885070(&uStack_670,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
      }
    }
    else {
      bVar29 = (bVar4 & 1) != 0;
      lVar27 = param_1 + 9;
      if (bVar29) {
        lVar27 = *(long *)(param_1 + 0x18);
      }
      uVar21 = (ulong)(bVar4 >> 1);
      if (bVar29) {
        uVar21 = *(ulong *)(param_1 + 0x10);
      }
      func_0x04885120(&uStack_670,lVar27,uVar21);
    }
  }
  auVar30 = func_0x0aca4150();
  auStack_658 = auVar30;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar19 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x48,0);
  }
  plVar14 = plStack_630;
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = &UNK_0f2677c0;
  pcStack_638 = (code *)(puVar19 + 3);
  *(undefined1 *)(puVar19 + 4) = 3;
  puVar19[5] = 0;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[3] = &UNK_0f267810;
  puVar19[8] = uVar18;
  if (plStack_630 == (long *)0x0) {
LAB_0ac9a0df:
    uVar21 = *(ulong *)(lVar16 + 0xb0);
    plStack_630 = puVar19;
    if (*(ulong *)(lVar16 + 0xb8) <= uVar21) {
LAB_0ac9a135:
      lVar27 = func_0x065b01f0(lVar16 + 0xa8,auStack_688);
      goto LAB_0ac9a14d;
    }
  }
  else {
    LOCK();
    plVar20 = plStack_630 + 1;
    lVar27 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar27 != 0) goto LAB_0ac9a0df;
    lVar27 = *plStack_630;
    plStack_630 = puVar19;
    (**(code **)(lVar27 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    uVar21 = *(ulong *)(lVar16 + 0xb0);
    if (*(ulong *)(lVar16 + 0xb8) <= uVar21) goto LAB_0ac9a135;
  }
  func_0x065b0410(uVar21,auStack_688);
  lVar27 = uVar21 + 0x1b0;
  *(long *)(lVar16 + 0xb0) = lVar27;
LAB_0ac9a14d:
  *(long *)(lVar16 + 0xb0) = lVar27;
  func_0x0652dc20(auStack_688);
  lVar16 = *(long *)(lVar27 + -0x1b0);
  if (lVar16 != 0) {
    lVar26 = *(long *)(lVar27 + -0x1a8);
    lVar23 = lVar16;
    if (lVar16 != lVar26) {
      do {
        if ((*(byte *)(lVar26 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar26 + -0x10),
                          *(ulong *)(lVar26 + -0x20) & 0xfffffffffffffffe);
        }
        lVar26 = lVar26 + -0x30;
      } while (lVar26 != lVar16);
      lVar23 = *(long *)(lVar27 + -0x1b0);
    }
    *(long *)(lVar27 + -0x1a8) = lVar16;
    func_0x0412a280(lVar23,*(long *)(lVar27 + -0x1a0) - lVar23);
    *(long *)(lVar27 + -0x1b0) = 0;
    *(undefined8 *)(lVar27 + -0x1a8) = 0;
    *(undefined8 *)(lVar27 + -0x1a0) = 0;
  }
  *(ulong *)(lVar27 + -0x1b0) = uStack_2b8;
  *(undefined **)(lVar27 + -0x1a8) = puStack_2b0;
  *(code **)(lVar27 + -0x1a0) = pcStack_2a8;
  return;
}



/* ---- referenced strings ----
 * 0x147b3d0  AfterEventSignal
 */
