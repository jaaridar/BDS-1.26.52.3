/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d03b0 (ELF vaddr 0xd1d03b0)
 * Label: caller-of-callee
 * Body:  [[0d2d03b0, 0d2d09de] [0d2d09e0, 0d2d1579] [0d2d1587, 0d2d158b] [0d2d15d1, 0d2d15e9] [0d2d165b, 0d2d168e] [0d2d16c1, 0d2d16d2] [0d2d1778, 0d2d17b4]]
 * Ghidra: FUN_0d2d03b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d2d03b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 uVar6;
  char cVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined1 uVar21;
  long lVar22;
  ulong uVar23;
  bool bVar24;
  bool bVar25;
  undefined4 *puStack_568;
  undefined1 uStack_559;
  long lStack_558;
  undefined4 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined *puStack_538;
  code *pcStack_530;
  undefined4 uStack_528;
  undefined1 uStack_524;
  long *plStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined2 uStack_500;
  undefined4 *puStack_4f8;
  undefined4 *puStack_4f0;
  undefined4 *puStack_4e8;
  undefined *puStack_4e0;
  long lStack_4d8;
  undefined2 *puStack_4d0;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  code *pcStack_4b8;
  undefined4 uStack_4b0;
  undefined1 uStack_4ac;
  long *plStack_4a8;
  undefined8 uStack_4a0;
  undefined *puStack_498;
  undefined8 *puStack_490;
  ulong uStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined *puStack_478;
  long *plStack_470;
  undefined *puStack_468;
  code *pcStack_460;
  undefined4 uStack_458;
  undefined1 uStack_454;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  uint uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined4 *puStack_420;
  undefined8 *puStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 uStack_3c8;
  undefined4 *puStack_3c0;
  undefined4 *puStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined2 auStack_378 [4];
  undefined8 uStack_370;
  long *plStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined2 uStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  ulong uStack_300;
  uint uStack_2f8;
  undefined1 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [256];
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  auStack_378[0] = 0xd;
  uStack_370 = 0;
  plStack_368 = (long *)0x0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0x100;
  puStack_3c0 = (undefined4 *)0x0;
  puStack_3b8 = (undefined4 *)0x0;
  lStack_3b0 = 0;
  uStack_408 = (undefined *)0x0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3e8 = 0;
  uStack_3e4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  uStack_3c8 = 0;
  puStack_308 = &UNK_011cb7e1;
  uStack_300 = 0x10;
  lStack_558 = param_2 + 8;
  lVar8 = func_0x0d6c97a0(lStack_558,&puStack_308);
  param_2 = param_2 + 0x10;
  if ((lVar8 == param_2) || (*(int *)(lVar8 + 0x60) != 10)) {
LAB_0d2d1564:
    func_0x04890760();
LAB_0d2d1569:
    func_0x0629e090();
LAB_0d2d156e:
    func_0x0629e090();
LAB_0d2d1573:
    uVar12 = func_0x04931450();
    if (pcStack_4b8 != (code *)0x0) {
      (*pcStack_4b8)(&puStack_4d0);
    }
    func_0x0490a470(&puStack_308);
    if (puStack_4f8 != (undefined4 *)0x0) {
      puStack_4f0 = puStack_4f8;
      func_0x0412a280(puStack_4f8,(long)puStack_4e8 - (long)puStack_4f8);
    }
    func_0x0629e050(&puStack_418);
    if (puStack_568 != (undefined4 *)0x0) {
      func_0x0412a280(puStack_568,(long)puStack_550 - (long)puStack_568);
    }
    func_0x0d2ca020(&uStack_408);
    func_0x049084c0(auStack_378);
    func_0x0eee2d70(uVar12);
    pcVar4 = (code *)swi(3);
    puVar10 = (undefined8 *)(*pcVar4)();
    return puVar10;
  }
  puStack_4e0 = (undefined *)(lVar8 + 0x38);
  uStack_500 = 0;
  puStack_508 = &UNK_0f47e490;
  puStack_4f8 = (undefined4 *)0x0;
  puStack_4f0 = (undefined4 *)0x0;
  puStack_4e8 = (undefined4 *)0x0;
  uStack_300 = uStack_300 & 0xffffffffffffff00;
  uStack_2f8 = uStack_2f8 & 0xffffff00;
  puStack_308 = puStack_4e0;
  func_0x0d6c4470(&puStack_4f8,&puStack_308);
  uStack_300 = _DAT_0f71e6d8;
  puStack_308 = &UNK_0ef46eb0;
  uStack_2f8 = 0xffffffff;
  puStack_2f0 = auStack_2e0;
  uStack_2e8 = 0x800000000;
  puStack_1e0 = auStack_1d0;
  uStack_1d8 = 0x800000000;
  uStack_50 = 0xfbf8;
  uStack_4e = 1;
  uStack_4c = 0xffffffff00000000;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_348 = &UNK_0f45f1b8;
  plVar15 = (long *)(_DAT_0f71e6d8 + 0x18);
  puStack_4c0 = &UNK_04913860;
  uStack_4b0 = 0x8240cd28;
  pcStack_4b8 = (code *)0x0;
  uStack_4ac = 4;
  puStack_4d0 = auStack_378;
  puStack_498 = &UNK_04913840;
  plStack_4a8 = plVar15;
  uStack_548 = (undefined **)func_0x04913c20(plVar15);
  uStack_540 = plVar15;
  uStack_4a0 = uStack_548;
  puStack_478 = (undefined *)func_0x04913c20(plVar15);
  plStack_470 = plVar15;
  cVar7 = func_0x04913500(&uStack_548,&puStack_478);
  if ((cVar7 == '\0') &&
     (cVar7 = func_0x0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_01388cf9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lStack_450 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lStack_450 == 0) {
    func_0x048b0de0(&uStack_548,&puStack_410);
    _DAT_0f54fd90 = (undefined4)uStack_548;
    uRam000000000f54fd94 = uStack_548._4_4_;
    uVar14 = (undefined4)uStack_540;
    uVar2 = uStack_540._4_4_;
    uStack_548 = (undefined **)0x0;
    uStack_540 = (long *)0x0;
    plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar14;
    uRam000000000f54fd9c = uVar2;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        func_0x0412c2d0(plVar5);
      }
    }
    plVar5 = uStack_540;
    if (uStack_540 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_540 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_540 + 0x10))(uStack_540);
        func_0x0412c2d0(plVar5);
      }
    }
    lStack_450 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_468 = &UNK_0d2e63c0;
  uStack_458 = 0x222a670a;
  pcStack_460 = (code *)0x0;
  uStack_454 = 3;
  uStack_448 = 0;
  uStack_440 = 0;
  puStack_538 = &UNK_0d2e63c0;
  pcStack_530 = (code *)0x0;
  uStack_528 = 0x222a670a;
  uStack_524 = 3;
  puStack_478 = (undefined *)0x0;
  uStack_548 = (undefined **)&uStack_408;
  uStack_518 = 0;
  puStack_510 = &UNK_0d2e63a0;
  plStack_520 = plVar15;
  cVar7 = func_0x0ed6b4a0(&puStack_308,&puStack_508,&uStack_548,&puStack_4d0,&puStack_348);
  if ((pcStack_530 != (code *)0x0) && ((*pcStack_530)(&uStack_548), pcStack_460 != (code *)0x0)) {
    (*pcStack_460)(&puStack_478);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(&puStack_4d0);
  }
  if (cVar7 == '\0') {
    *param_1 = 0;
    func_0x0490a470(&puStack_308);
    if (puStack_4f8 == (undefined4 *)0x0) goto LAB_0d2d1446;
    puStack_4f0 = puStack_4f8;
    puVar16 = puStack_4e8;
    puStack_568 = puStack_4f8;
  }
  else {
    func_0x0490a470(&puStack_308);
    if (puStack_4f8 != (undefined4 *)0x0) {
      puStack_4f0 = puStack_4f8;
      func_0x0412a280(puStack_4f8,(long)puStack_4e8 - (long)puStack_4f8);
    }
    if (((ulong)uStack_408 & 1) == 0) {
      uStack_428 = uStack_3f8;
      uStack_438 = (uint)uStack_408;
      uStack_434 = uStack_408._4_4_;
      uStack_430 = (undefined4)uStack_400;
      uStack_42c = uStack_400._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_438,uStack_3f8,uStack_400);
    }
    lVar8 = func_0x0d328580(param_3,&uStack_438);
    if ((uStack_438 & 1) != 0) {
      func_0x0412a280(uStack_428,CONCAT44(uStack_434,uStack_438) & 0xfffffffffffffffe);
    }
    puVar19 = puStack_3b8;
    puVar16 = puStack_3c0;
    uVar6 = uStack_3c8;
    if (lVar8 == 0) {
      *param_1 = 0;
      goto LAB_0d2d1446;
    }
    uStack_388 = CONCAT44(uStack_3d0,uStack_3d4);
    uStack_318 = CONCAT44(uStack_3e8,uStack_3ec);
    uStack_310 = CONCAT44(uStack_3e0,uStack_3e4);
    uStack_328 = CONCAT44(uStack_3d8,uStack_3dc);
    uStack_320 = 0;
    lVar22 = (long)puStack_3b8 - (long)puStack_3c0;
    uStack_47c = uStack_3cc;
    uStack_480 = uStack_3f0;
    lStack_4d8 = param_2;
    puStack_490 = param_1;
    lStack_380 = lVar8;
    if (lVar22 != 0) {
      if ((ulong)((lVar22 >> 2) * -0x3333333333333333) < 0xccccccccccccccd) {
        puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
        if (puVar9 == (undefined4 *)0x0) {
          func_0x0eec74c0(lVar22,0);
        }
        puStack_550 = (undefined4 *)(lVar22 + (long)puVar9);
        puStack_420 = puVar19;
        puVar17 = puVar9;
        do {
          while( true ) {
            cVar7 = *(char *)(puVar16 + 4);
            uVar14 = puVar16[1];
            uVar2 = puVar16[2];
            uVar3 = puVar16[3];
            puStack_568 = puVar17;
            if (puStack_550 <= puVar9) break;
            *puVar9 = *puVar16;
            puVar9[1] = uVar14;
            puVar9[2] = uVar2;
            puVar9[3] = uVar3;
            *(bool *)(puVar9 + 4) = cVar7 != '\0';
            puVar9 = puVar9 + 5;
            puVar16 = puVar16 + 5;
            if (puVar16 == puVar19) goto LAB_0d2d0bbd;
          }
          uStack_3a8 = CONCAT44(uStack_3a8._4_4_,*puVar16);
          puStack_398 = (undefined *)CONCAT44(puStack_398._4_4_,uVar14);
          uStack_488 = CONCAT44(uStack_488._4_4_,uVar2);
          lVar8 = (long)puVar9 - (long)puVar17;
          uVar18 = (lVar8 >> 2) * -0x3333333333333333 + 1;
          if (0xccccccccccccccc < uVar18) {
            func_0x0629e090();
LAB_0d2d155f:
            FUN_04882eb0();
            goto LAB_0d2d1564;
          }
          lVar20 = (long)puStack_550 - (long)puVar17;
          lVar22 = lVar20 >> 2;
          uVar23 = lVar22 * -0x6666666666666666;
          if (uVar18 < uVar23) {
            uVar18 = uVar23;
          }
          if (0x666666666666665 < (ulong)(lVar22 * -0x3333333333333333)) {
            uVar18 = 0xccccccccccccccc;
          }
          if (0xccccccccccccccc < uVar18) goto LAB_0d2d155f;
          lVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x14);
          if (lVar22 == 0) {
            func_0x0eec74c0(uVar18 * 0x14,0);
          }
          puStack_550 = (undefined4 *)(lVar22 + uVar18 * 0x14);
          *(undefined4 *)(lVar22 + lVar8) = (undefined4)uStack_3a8;
          *(undefined4 *)(lVar22 + 4 + lVar8) = puStack_398._0_4_;
          *(undefined4 *)(lVar22 + 8 + lVar8) = (undefined4)uStack_488;
          *(undefined4 *)(lVar22 + 0xc + lVar8) = uVar3;
          *(bool *)(lVar22 + 0x10 + lVar8) = cVar7 != '\0';
          lVar13 = SUB168(SEXT816(lVar8) * SEXT816(-0x6666666666666667),8);
          puVar9 = (undefined4 *)(lVar22 + lVar8 + 0x14);
          puStack_568 = (undefined4 *)(lVar22 + lVar8 + ((lVar13 >> 3) - (lVar13 >> 0x3f)) * 0x14);
          func_0x0eee2f00(puStack_568,puVar17,lVar8);
          if (puVar17 != (undefined4 *)0x0) {
            func_0x0412a280(puVar17,lVar20);
          }
          puVar16 = puVar16 + 5;
          puVar17 = puStack_568;
          puVar19 = puStack_420;
        } while (puVar16 != puStack_420);
        goto LAB_0d2d0bbd;
      }
      goto LAB_0d2d1569;
    }
    puStack_550 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x0;
    puStack_568 = (undefined4 *)0x0;
LAB_0d2d0bbd:
    puStack_308 = &UNK_0140265c;
    uStack_300 = 0xe;
    lVar8 = func_0x0d6c97a0(lStack_558,&puStack_308);
    param_1 = puStack_490;
    if ((lVar8 == lStack_4d8) || (*(int *)(lVar8 + 0x60) != 1)) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(undefined1 *)(lVar8 + 0x40);
    }
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x58,0);
    }
    *puVar10 = uStack_318;
    puVar10[1] = uStack_310;
    puVar10[2] = uStack_328;
    puVar10[3] = lStack_380;
    *(undefined4 *)(puVar10 + 4) = uStack_480;
    *(undefined1 *)((long)puVar10 + 0x24) = uVar6;
    puVar10[5] = uStack_388;
    *(undefined4 *)(puVar10 + 6) = uStack_47c;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    lVar8 = (long)puVar9 - (long)puStack_568;
    if (lVar8 != 0) {
      if ((ulong)((lVar8 >> 2) * -0x3333333333333333) < 0xccccccccccccccd) {
        lVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
        if (lVar22 == 0) {
          func_0x0eec74c0(lVar8,0);
        }
        puVar10[7] = lVar22;
        puVar10[9] = lVar22 + lVar8;
        func_0x0eee2f00(lVar22,puStack_568,lVar8);
        puVar10[8] = lVar22 + lVar8;
        param_1 = puStack_490;
        goto LAB_0d2d0d2a;
      }
      goto LAB_0d2d156e;
    }
LAB_0d2d0d2a:
    *(undefined1 *)(puVar10 + 10) = uVar21;
    puStack_308 = &UNK_014a667e;
    uStack_300 = 9;
    puStack_418 = puVar10;
    lVar8 = func_0x0d6c97a0(lStack_558,&puStack_308);
    if ((lVar8 == lStack_4d8) || (*(int *)(lVar8 + 0x60) != 10)) {
      uVar18 = 0;
      uVar14 = 0;
    }
    else {
      puStack_308 = &UNK_011e935e;
      uStack_300 = 1;
      lVar22 = lVar8 + 0x40;
      lVar20 = func_0x0d6c97a0(lVar22,&puStack_308);
      lVar8 = lVar8 + 0x48;
      if ((lVar20 == lVar8) || (*(int *)(lVar20 + 0x60) != 3)) {
        uVar23 = 0;
      }
      else {
        uVar23 = (ulong)*(uint *)(lVar20 + 0x40);
      }
      puStack_308 = &UNK_01358537;
      uStack_300 = 1;
      lVar20 = func_0x0d6c97a0(lVar22,&puStack_308);
      if ((lVar20 == lVar8) || (*(int *)(lVar20 + 0x60) != 3)) {
        uVar18 = 0;
      }
      else {
        uVar18 = (ulong)*(uint *)(lVar20 + 0x40) << 0x20;
      }
      puStack_308 = &UNK_01358539;
      uStack_300 = 1;
      lVar22 = func_0x0d6c97a0(lVar22,&puStack_308);
      uVar18 = uVar18 | uVar23;
      if ((lVar22 == lVar8) || (*(int *)(lVar22 + 0x60) != 3)) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)(lVar22 + 0x40);
      }
    }
    lVar8 = lStack_4d8;
    puStack_308 = &UNK_01388ce5;
    uStack_300 = 0xb;
    lVar22 = func_0x0d6c97a0(lStack_558,&puStack_308);
    if ((lVar22 == lVar8) || (*(int *)(lVar22 + 0x60) != 10)) goto LAB_0d2d1564;
    puStack_4e0 = (undefined *)(lVar22 + 0x38);
    uStack_500 = 0;
    puStack_508 = &UNK_0f47e490;
    puStack_4f8 = (undefined4 *)0x0;
    puStack_4f0 = (undefined4 *)0x0;
    puStack_4e8 = (undefined4 *)0x0;
    uStack_300 = uStack_300 & 0xffffffffffffff00;
    uStack_2f8 = uStack_2f8 & 0xffffff00;
    puStack_308 = puStack_4e0;
    func_0x0d6c4470(&puStack_4f8,&puStack_308);
    uStack_300 = _DAT_0f71e6d8;
    puStack_308 = &UNK_0ef46eb0;
    uStack_2f8 = 0xffffffff;
    puStack_2f0 = auStack_2e0;
    uStack_2e8 = 0x800000000;
    puStack_1e0 = auStack_1d0;
    uStack_1d8 = 0x800000000;
    uStack_50 = 0xfbf8;
    uStack_4e = 1;
    uStack_4c = 0xffffffff00000000;
    uStack_40 = 0;
    uStack_38 = 0;
    puStack_410 = &UNK_0f45f410;
    plVar15 = (long *)(_DAT_0f71e6d8 + 0x18);
    puStack_4c0 = &UNK_04913860;
    uStack_4b0 = 0x8240cd28;
    pcStack_4b8 = (code *)0x0;
    uStack_4ac = 4;
    puStack_4d0 = auStack_378;
    puStack_498 = &UNK_04913840;
    plStack_4a8 = plVar15;
    uStack_548 = (undefined **)func_0x04913c20(plVar15);
    uStack_540 = plVar15;
    uStack_4a0 = uStack_548;
    puStack_478 = (undefined *)func_0x04913c20(plVar15);
    plStack_470 = plVar15;
    cVar7 = func_0x04913500(&uStack_548,&puStack_478);
    if ((cVar7 == '\0') &&
       (cVar7 = func_0x0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_0136f363),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar22 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    uStack_488 = uVar18;
    if (lVar22 == 0) {
      func_0x048b0de0(&uStack_548,&uStack_559);
      _DAT_0f54fd90 = (undefined4)uStack_548;
      uRam000000000f54fd94 = uStack_548._4_4_;
      uVar2 = (undefined4)uStack_540;
      uVar3 = uStack_540._4_4_;
      uStack_548 = (undefined **)0x0;
      uStack_540 = (long *)0x0;
      plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar2;
      uRam000000000f54fd9c = uVar3;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar22 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          func_0x0412c2d0(plVar5);
        }
      }
      plVar5 = uStack_540;
      if (uStack_540 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_540 + 1;
        lVar22 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*uStack_540 + 0x10))(uStack_540);
          func_0x0412c2d0(plVar5);
        }
      }
      lVar22 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    puStack_468 = &UNK_0d2ea6c0;
    uStack_458 = 0xe3381109;
    pcStack_460 = (code *)0x0;
    uStack_454 = 3;
    uStack_448 = 0;
    uStack_440 = 0;
    puStack_538 = &UNK_0d2ea6c0;
    pcStack_530 = (code *)0x0;
    uStack_528 = 0xe3381109;
    uStack_524 = 3;
    puStack_478 = (undefined *)0x0;
    uStack_548 = &puStack_348;
    uStack_518 = 0;
    puStack_510 = &UNK_0d2ea6a0;
    plStack_520 = plVar15;
    lStack_450 = lVar22;
    cVar7 = func_0x0ed6b4a0(&puStack_308,&puStack_508,&uStack_548,&puStack_4d0,&puStack_410);
    if ((pcStack_530 != (code *)0x0) && ((*pcStack_530)(&uStack_548), pcStack_460 != (code *)0x0)) {
      (*pcStack_460)(&puStack_478);
    }
    if (pcStack_4b8 != (code *)0x0) {
      (*pcStack_4b8)(&puStack_4d0);
    }
    if (cVar7 == '\0') {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puStack_398 = puStack_348;
      uStack_390 = uStack_340;
      uStack_3a8 = uStack_338;
      uStack_3a0 = 0;
      puStack_4d0 = (undefined2 *)&UNK_014249aa;
      uStack_4c8 = 0x11;
      lVar22 = func_0x0d6c97a0(lStack_558,&puStack_4d0);
      if ((lVar22 == lVar8) || (*(int *)(lVar22 + 0x60) != 1)) {
        bVar24 = false;
      }
      else {
        bVar24 = *(char *)(lVar22 + 0x40) != '\0';
      }
      puStack_4d0 = (undefined2 *)&UNK_01458328;
      uStack_4c8 = 0xf;
      lVar22 = func_0x0d6c97a0(lStack_558,&puStack_4d0);
      if (lVar22 == lVar8) goto LAB_0d2d1339;
      if ((ulong)*(uint *)(lVar22 + 0x60) == 0xffffffff) goto LAB_0d2d1573;
      uStack_548 = &puStack_478;
      plVar15 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar22 + 0x60) * 8))
                                  (&uStack_548,lVar22 + 0x38);
      if ((plVar15 == (long *)0x0) ||
         (cVar7 = (**(code **)(*plVar15 + 0x30))(plVar15), cVar7 != '\x01')) {
LAB_0d2d1339:
        bVar25 = false;
      }
      else {
        puStack_4d0 = (undefined2 *)&UNK_01458328;
        uStack_4c8 = 0xf;
        lVar22 = func_0x0d6c97a0(lStack_558,&puStack_4d0);
        if ((lVar22 == lVar8) || (*(int *)(lVar22 + 0x60) != 1)) goto LAB_0d2d1339;
        bVar25 = *(char *)(lVar22 + 0x40) != '\0';
      }
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x50,0);
      }
      puStack_418 = (undefined8 *)0x0;
      *(undefined1 *)(puVar11 + 1) = 3;
      *puVar11 = &UNK_0f45e7a0;
      puVar11[2] = puVar10;
      puVar11[3] = uStack_488;
      *(undefined4 *)(puVar11 + 4) = uVar14;
      *(undefined **)((long)puVar11 + 0x24) = puStack_398;
      *(undefined8 *)((long)puVar11 + 0x2c) = uStack_390;
      *(undefined4 *)((long)puVar11 + 0x34) = (undefined4)uStack_3a8;
      *(undefined4 *)(puVar11 + 7) = uStack_3a8._4_4_;
      puVar11[8] = 0;
      *(bool *)(puVar11 + 9) = bVar24;
      *(bool *)((long)puVar11 + 0x49) = bVar25;
      *(undefined1 *)((long)puVar11 + 0x4a) = uVar21;
      puVar10 = (undefined8 *)0x0;
      param_1 = puStack_490;
    }
    *param_1 = puVar11;
    func_0x0490a470(&puStack_308);
    if (puStack_4f8 != (undefined4 *)0x0) {
      puStack_4f0 = puStack_4f8;
      func_0x0412a280(puStack_4f8,(long)puStack_4e8 - (long)puStack_4f8);
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar8 = puVar10[7];
      if (lVar8 != 0) {
        puVar10[8] = lVar8;
        func_0x0412a280(lVar8,puVar10[9] - lVar8);
      }
      func_0x0412a280(puVar10,0x58);
    }
    puVar16 = puStack_550;
    if (puStack_568 == (undefined4 *)0x0) goto LAB_0d2d1446;
  }
  func_0x0412a280(puStack_568,(long)puVar16 - (long)puStack_568);
LAB_0d2d1446:
  if (puStack_3c0 != (undefined4 *)0x0) {
    puStack_3b8 = puStack_3c0;
    func_0x0412a280(puStack_3c0,lStack_3b0 - (long)puStack_3c0);
  }
  if (((ulong)uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,(ulong)uStack_408 & 0xfffffffffffffffe);
  }
  plVar15 = plStack_368;
  uStack_370 = 0;
  plStack_368 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar5 = plVar15 + 1;
    lVar8 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
    plVar15 = plStack_368;
    uStack_360 = 0;
    if (plStack_368 != (long *)0x0) {
      LOCK();
      plVar5 = plStack_368 + 1;
      lVar8 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_368 + 0x10))(plStack_368);
        func_0x0412c2d0(plVar15);
      }
    }
  }
  return param_1;
}


