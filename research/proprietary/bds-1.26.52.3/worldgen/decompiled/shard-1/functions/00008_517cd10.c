/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527cd10 (ELF vaddr 0x517cd10)
 * Label: OverworldGeneratorMultinoise::vslot11
 * Body:  [[0527cd10, 0527ceb1] [0527cec0, 0527cf73] [0527cf80, 0527de36] [0527de40, 0527de81] [0527de90, 0527df03] [0527df10, 0527e0a3] [0527e0b0, 0527e142] [0527e150, 0527e169] [0527e170, 0527e5bd] [0527e5c0, 0527e66e]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot11
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte wg_OverworldGeneratorMultinoise__vslot11(long *param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  uint uVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  undefined *puVar26;
  long *plVar27;
  bool bVar28;
  undefined1 auVar29 [12];
  undefined8 in_stack_fffffffffffff958;
  long lStack_670;
  long *plStack_668;
  uint uStack_65c;
  undefined8 uStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  ulong uStack_638;
  undefined1 auStack_630 [12];
  long lStack_620;
  ulong uStack_618;
  long lStack_610;
  undefined8 uStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  byte bStack_5e0;
  undefined7 uStack_5df;
  undefined8 uStack_5d0;
  byte bStack_5b8;
  undefined7 uStack_5b7;
  undefined8 uStack_5a8;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  uint uStack_580;
  uint uStack_57c;
  undefined8 uStack_578;
  ulong uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  int iStack_520;
  int iStack_51c;
  ulong uStack_518;
  undefined4 uStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4d8;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  undefined2 uStack_450;
  int *piStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined2 uStack_400;
  undefined6 uStack_3fe;
  undefined2 uStack_3f8;
  undefined6 uStack_3f6;
  undefined2 uStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  byte bStack_3d0;
  int iStack_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  long *plStack_3a0;
  short sStack_386;
  undefined8 *puStack_2e0;
  int **ppiStack_2d8;
  undefined *apuStack_258 [4];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_1d8 [144];
  undefined1 auStack_148 [144];
  int iStack_b8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a4;
  int iStack_90;
  
  lVar14 = (**(code **)(*(long *)param_1[4] + 0x568))();
  puVar18 = (undefined *)(lVar14 + 0x50);
  puVar21 = puVar18;
  if ((*(char *)(lVar14 + 0x77) == '\0') &&
     (((puVar26 = (undefined *)(lVar14 + 0x70), *(char *)(lVar14 + 0x68) != '\0' ||
       (puVar21 = puVar26, (*(byte *)(lVar14 + 0x56) & 1) != 0)) &&
      (cVar4 = FUN_04fa7a10(puVar26,puVar18), puVar21 = puVar18, cVar4 != '\0')))) {
    puVar21 = puVar26;
  }
  puVar18 = &DAT_0f72b850;
  if (((puVar21[6] | puVar21[0x18]) & 1) != 0) {
    puVar18 = puVar21;
  }
  bVar5 = 1;
  if ((DAT_0f5a2858 == '\0') && (puVar18[0x18] == '\0')) {
    if (((DAT_0f5a2846 & 1) == 0) || (puVar18[7] != '\0')) {
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_04fa7a10(puVar18,0xf5a2840);
    }
  }
  func_0x0412d550(param_2 + 0x22);
  lVar14 = param_2[0x34];
  lVar20 = param_2[0x35];
  func_0x0412d610(param_2 + 0x22);
  iStack_520 = (int)lVar14 + 1;
  iStack_51c = (int)lVar20 + 1;
  (**(code **)(*param_2 + 0x20))(&lStack_670,param_2,&iStack_520);
  lVar14 = lStack_670;
  func_0x0ca8a1f0(&lStack_3e8,*(undefined8 *)(*(long *)(lStack_670 + 0x30) + 0x198),
                  lStack_670 + 0x50,param_2);
  bVar3 = bStack_3d0;
  if (bStack_3d0 == 0) goto LAB_0527e597;
  FUN_0cb35860(apuStack_258,param_2);
  func_0x0412d550(auStack_148);
  lStack_610 = lVar14;
  func_0x0412d610(auStack_148);
  uVar13 = (undefined4)((ulong)in_stack_fffffffffffff958 >> 0x20);
  iVar10 = iStack_b8;
  iVar11 = iStack_b0;
  for (iVar24 = iStack_90; iVar24 != 0; iVar24 = iVar24 + -1) {
    uStack_4a8 = CONCAT44(iVar11,iVar10);
    (**(code **)(apuStack_258[0] + 0x20))(&iStack_3c8,apuStack_258,&uStack_4a8);
    if ((CONCAT44(uStack_3c4,iStack_3c8) == 0) ||
       (*(byte *)(CONCAT44(uStack_3c4,iStack_3c8) + 0xb8) < 2)) {
      uStack_608 = (undefined *)0x0;
      plStack_600 = (long *)0x0;
joined_r0x0527cf96:
      if (CONCAT44(uStack_3bc,iStack_3c0) != 0) {
        plVar27 = (long *)CONCAT44(uStack_3bc,iStack_3c0);
        LOCK();
        plVar17 = plVar27 + 1;
        lVar14 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          func_0x0412c2d0(plVar27);
        }
      }
    }
    else {
      uStack_608 = (undefined *)CONCAT44(uStack_3c4,iStack_3c8);
      plStack_600 = (long *)CONCAT44(uStack_3bc,iStack_3c0);
      if (plStack_600 != (long *)0x0) {
        LOCK();
        plStack_600[1] = plStack_600[1] + 1;
        UNLOCK();
        goto joined_r0x0527cf96;
      }
    }
    if ((uStack_608 != (undefined *)0x0) && (6 < (byte)uStack_608[0xb8])) {
      iStack_3c8 = (int)uStack_4a8 << 4;
      iStack_3c0 = uStack_4a8._4_4_ << 4;
      uStack_3c4 = 0;
      piStack_448 = &iStack_3c8;
      FUN_0cb59800(auStack_148,&piStack_448);
    }
    plVar17 = plStack_600;
    if (plStack_600 != (long *)0x0) {
      LOCK();
      plVar27 = plStack_600 + 1;
      lVar14 = *plVar27;
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_600 + 0x10))(plStack_600);
        func_0x0412c2d0(plVar17);
      }
    }
    uVar13 = (undefined4)((ulong)in_stack_fffffffffffff958 >> 0x20);
    iVar12 = iVar11 + 1;
    if (iStack_a4 <= iVar11) {
      iVar12 = iStack_b0;
    }
    iVar8 = iVar10 + 1;
    bVar28 = iVar10 < iStack_ac;
    iVar10 = iStack_b8;
    if (bVar28) {
      iVar12 = iVar11;
      iVar10 = iVar8;
    }
    iVar11 = iVar12;
  }
  func_0x0c9d0c10(&iStack_3c8,uStack_238,uStack_230,apuStack_258,0,1,CONCAT44(uVar13,1),0);
  piStack_448 = (int *)0x0;
  uStack_440 = 1;
  lStack_438 = 0;
  lStack_430 = 0;
  lStack_428 = 0;
  lStack_420 = 0;
  lStack_418 = 0;
  lStack_410 = 0;
  lStack_408 = 0;
  uStack_400 = 0;
  uStack_3fe = 0;
  uStack_3f8 = 0;
  uStack_3f6 = 0;
  uStack_3f0 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 1;
  lStack_498 = 0;
  lStack_490 = 0;
  lStack_488 = 0;
  lStack_480 = 0;
  lStack_478 = 0;
  lStack_470 = 0;
  lStack_468 = 0;
  lStack_460 = 0;
  lStack_458 = 0;
  uStack_450 = 1;
  ppiStack_2d8 = &piStack_448;
  puStack_2e0 = &uStack_4a8;
  uStack_618 = func_0x0c9e2ed0(&iStack_3c8,lStack_670 + 0x44);
  lVar20 = lStack_610;
  lStack_620 = FUN_052be680(param_1 + 0x28);
  iVar10 = *(int *)(lVar20 + 0x50);
  iVar11 = *(int *)(lVar20 + 0x54);
  uVar15 = (**(code **)(*(long *)param_1[4] + 0x438))();
  plVar17 = (long *)(lStack_620 + 0xa1810);
  lVar14 = *(long *)(lStack_620 + 0xa2208);
  if (*(char *)(lVar14 + 0x9e7) == '\x01') {
    *(int *)(lVar14 + 8) = (int)uVar15;
    *(undefined2 *)(lVar14 + 0x9e4) = 0;
    *(undefined4 *)(lVar14 + 0x9d4) = 0;
    *(undefined8 *)(lVar14 + 0x9d8) = 0;
    *(int *)(lVar14 + 0xc) = (int)uVar15;
    lVar19 = 5;
    while( true ) {
      uVar15 = ((ulong)(((uint)(uVar15 >> 0x1e) & 3 ^ (uint)uVar15) * 0x6c078965) + lVar19) - 4;
      uVar7 = (uint)uVar15;
      *(uint *)(lVar14 + -4 + lVar19 * 4) = uVar7;
      if (lVar19 == 0x191) break;
      uVar7 = (((uint)(uVar15 >> 0x1e) & 3 ^ uVar7) * 0x6c078965 + (int)lVar19) - 3;
      uVar15 = (ulong)uVar7;
      *(uint *)(lVar14 + lVar19 * 4) = uVar7;
      lVar19 = lVar19 + 2;
    }
    *(undefined8 *)(lVar14 + 0x9cc) = 0x18e00000270;
  }
  iVar8 = (**(code **)(*plVar17 + 0x10))();
  iVar9 = (**(code **)(*plVar17 + 0x10))();
  iVar24 = *(int *)(lVar20 + 0x50);
  iVar12 = *(int *)(lVar20 + 0x54);
  uVar7 = (**(code **)(*(long *)param_1[4] + 0x438))();
  uStack_57c = iVar8 - (iVar8 >> 0x1f) | 1;
  uStack_580 = iVar9 - (iVar9 >> 0x1f) | 1;
  lVar14 = *(long *)(lStack_620 + 0xa2208);
  if (*(char *)(lVar14 + 0x9e7) == '\x01') {
    uVar7 = uVar7 ^ iVar24 * uStack_57c + iVar12 * uStack_580;
    *(uint *)(lVar14 + 8) = uVar7;
    *(undefined2 *)(lVar14 + 0x9e4) = 0;
    *(undefined4 *)(lVar14 + 0x9d4) = 0;
    *(undefined8 *)(lVar14 + 0x9d8) = 0;
    *(uint *)(lVar14 + 0xc) = uVar7;
    lVar20 = 5;
    while( true ) {
      uVar15 = ((ulong)((uVar7 >> 0x1e ^ uVar7) * 0x6c078965) + lVar20) - 4;
      uVar7 = (uint)uVar15;
      *(uint *)(lVar14 + -4 + lVar20 * 4) = uVar7;
      if (lVar20 == 0x191) break;
      uVar7 = (((uint)(uVar15 >> 0x1e) & 3 ^ uVar7) * 0x6c078965 + (int)lVar20) - 3;
      *(uint *)(lVar14 + lVar20 * 4) = uVar7;
      lVar20 = lVar20 + 2;
    }
    *(undefined8 *)(lVar14 + 0x9cc) = 0x18e00000270;
  }
  iVar24 = (int)*(short *)(param_1[5] + 0xac);
  uVar1 = *(ushort *)(uStack_618 + 0x168);
  cVar4 = (**(code **)(**(long **)(lStack_670 + 0x28) + 0xbe8))();
  uVar25 = iVar10 * 0x10;
  uStack_638 = (ulong)uVar25;
  uVar7 = iVar11 * 0x10;
  if (cVar4 == '\0') {
    bVar28 = uVar1 != 2 && uVar1 != 0x11;
LAB_0527d3c8:
    if ((bVar28 & bVar5) != 1) goto LAB_0527d405;
    cVar4 = (**(code **)(**(long **)(lStack_670 + 0x28) + 0xbe8))();
    uVar23 = 4;
    if (cVar4 != '\0') {
      uVar23 = 0x20;
    }
    iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,uVar23);
    if (iVar10 != 0) goto LAB_0527d405;
    iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,9);
    iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x80);
    iVar12 = (**(code **)(*plVar17 + 0x18))(plVar17,9);
    if ((iVar11 < iVar24 + -3) && ((char)param_1[0x26] != '\0')) goto LAB_0527d405;
    auStack_630._8_4_ = iVar12 + uVar7 + 3;
    auStack_630._0_8_ = CONCAT44(iVar11,iVar10 + uVar25 + 3);
    lStack_548 = 0;
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    uStack_528 = 0;
    if ((DAT_0f713f08 & 1) == 0) {
      uStack_530 = _DAT_0f713f18;
      uStack_540 = CONCAT71(uRam000000000f713f09,DAT_0f713f08);
      uStack_538 = _DAT_0f713f10;
    }
    else {
      func_0x04885070(&uStack_540,_DAT_0f713f18,_DAT_0f713f10);
    }
    lStack_548 = _DAT_0f713f00;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    if ((DAT_0f71bd90 & 1) == 0) {
      uStack_4c0 = _DAT_0f71bda0;
      uStack_4d0 = CONCAT71(uRam000000000f71bd91,DAT_0f71bd90);
      uStack_4c8 = _DAT_0f71bd98;
    }
    else {
      func_0x04885070(&uStack_4d0,_DAT_0f71bda0,_DAT_0f71bd98);
    }
    uStack_4d8 = _DAT_0f71bd88;
    uStack_658 = 0;
    plStack_650 = (long *)0x0;
    uStack_648 = 0;
    func_0x052ce620(&uStack_608,&lStack_548,&uStack_4d8,&uStack_658);
    if ((uStack_4d0 & 1) != 0) {
      func_0x0412a280(uStack_4c0,uStack_4d0 & 0xfffffffffffffffe);
    }
    if ((uStack_540 & 1) != 0) {
      func_0x0412a280(uStack_530,uStack_540 & 0xfffffffffffffffe);
    }
    func_0x052ce810(&uStack_608,&iStack_3c8,auStack_630);
LAB_0527d82a:
    uStack_608 = &UNK_0efa00a8;
    if (lStack_598 != 0) {
      lStack_590 = lStack_598;
      func_0x0412a280(lStack_598,lStack_588 - lStack_598);
    }
    if ((bStack_5b8 & 1) != 0) {
      func_0x0412a280(uStack_5a8,CONCAT71(uStack_5b7,bStack_5b8) & 0xfffffffffffffffe);
    }
    if ((bStack_5e0 & 1) != 0) {
      func_0x0412a280(uStack_5d0,CONCAT71(uStack_5df,bStack_5e0) & 0xfffffffffffffffe);
    }
  }
  else {
    uVar22 = (uint)uVar1;
    if (((0x27 < uVar22) || ((0xf800030884U >> ((ulong)uVar22 & 0x3f) & 1) == 0)) &&
       (1 < uVar22 - 0xa3)) {
      bVar28 = true;
      goto LAB_0527d3c8;
    }
LAB_0527d405:
    if (((char)param_1[0x26] == '\0') &&
       (iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,8), iVar10 == 0)) {
      iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,9);
      iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x78);
      iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar11 + 8);
      iVar12 = (**(code **)(*plVar17 + 0x18))(plVar17,9);
      if ((iVar24 + -3 <= iVar11) &&
         ((iVar11 <= iVar24 || (iVar24 = (**(code **)(*plVar17 + 0x18))(plVar17,10), iVar24 == 0))))
      {
        auStack_630._8_4_ = uVar7 + iVar12 + 3;
        auStack_630._0_8_ = CONCAT44(iVar11,(int)uStack_638 + iVar10 + 3);
        uStack_578 = 0;
        uStack_570 = 0;
        uStack_568 = 0;
        uStack_560 = 0;
        uStack_558 = 0;
        if ((DAT_0f713b98 & 1) == 0) {
          uStack_560 = _DAT_0f713ba8;
          uStack_570 = CONCAT71(uRam000000000f713b99,DAT_0f713b98);
          uStack_568 = _DAT_0f713ba0;
        }
        else {
          func_0x04885070(&uStack_570,_DAT_0f713ba8,_DAT_0f713ba0);
        }
        uStack_578 = _DAT_0f713b90;
        uStack_508 = 0;
        uStack_500 = 0;
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        uStack_4e8 = 0;
        if ((DAT_0f71bd90 & 1) == 0) {
          uStack_4f0 = _DAT_0f71bda0;
          uStack_500 = CONCAT71(uRam000000000f71bd91,DAT_0f71bd90);
          uStack_4f8 = _DAT_0f71bd98;
        }
        else {
          func_0x04885070(&uStack_500,_DAT_0f71bda0,_DAT_0f71bd98);
        }
        uStack_508 = _DAT_0f71bd88;
        uStack_658 = 0;
        plStack_650 = (long *)0x0;
        uStack_648 = 0;
        func_0x052ce620(&uStack_608,&uStack_578,&uStack_508,&uStack_658);
        if ((uStack_500 & 1) != 0) {
          func_0x0412a280(uStack_4f0,uStack_500 & 0xfffffffffffffffe);
        }
        if ((uStack_570 & 1) != 0) {
          func_0x0412a280(uStack_560,uStack_570 & 0xfffffffffffffffe);
        }
        func_0x052ce810(&uStack_608,&iStack_3c8,auStack_630);
        goto LAB_0527d82a;
      }
    }
  }
  if ((char)param_1[0x26] == '\0') {
    iVar10 = 8;
    if (bVar5 == 0) {
      uVar25 = (uint)uStack_638;
      if (*(short *)(param_1[5] + 0xa8) < 0) {
        iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        iVar24 = *(short *)(param_1[5] + 0xa8) + 6;
        iVar10 = -iVar24;
        if (iVar10 < 0) {
          iVar10 = iVar24;
        }
        iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar10);
        sVar2 = *(short *)(param_1[5] + 0xa8);
        iVar24 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        uVar25 = (uint)uStack_638 | 8;
        uStack_65c = uVar7 | 8;
        plVar27 = param_1 + 0x36;
        uStack_608 = (undefined *)CONCAT44(iVar10 + sVar2 + 6,iVar11 + uVar25);
        plStack_600._0_4_ = iVar24 + uStack_65c;
        func_0x052d8680(plVar27,&iStack_3c8,&uStack_608,plVar17);
        iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        iVar24 = *(short *)(param_1[5] + 0xa8) + 6;
        iVar10 = -iVar24;
        if (iVar10 < 0) {
          iVar10 = iVar24;
        }
        iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar10);
        sVar2 = *(short *)(param_1[5] + 0xa8);
        plStack_600._0_4_ = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        plStack_600._0_4_ = (int)plStack_600 + uStack_65c;
        uStack_608 = (undefined *)CONCAT44(iVar10 + sVar2 + 6,iVar11 + uVar25);
        func_0x052d8680(plVar27,&iStack_3c8,&uStack_608,plVar17);
        iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        iVar24 = *(short *)(param_1[5] + 0xa8) + 6;
        iVar10 = -iVar24;
        if (iVar10 < 0) {
          iVar10 = iVar24;
        }
        iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar10);
        sVar2 = *(short *)(param_1[5] + 0xa8);
        plStack_600._0_4_ = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        plStack_600._0_4_ = (int)plStack_600 + uStack_65c;
        uStack_608 = (undefined *)CONCAT44(iVar10 + sVar2 + 6,iVar11 + uVar25);
        func_0x052d8680(plVar27,&iStack_3c8,&uStack_608,plVar17);
        iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        iVar24 = *(short *)(param_1[5] + 0xa8) + 6;
        iVar10 = -iVar24;
        if (iVar10 < 0) {
          iVar10 = iVar24;
        }
        iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar10);
        sVar2 = *(short *)(param_1[5] + 0xa8);
        iVar24 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        uStack_608 = (undefined *)CONCAT44(iVar10 + sVar2 + 6,iVar11 + uVar25);
        plStack_600 = (long *)CONCAT44(plStack_600._4_4_,iVar24 + uStack_65c);
        func_0x052d8680(plVar27,&iStack_3c8,&uStack_608,plVar17);
        iVar10 = 10;
        goto LAB_0527db48;
      }
    }
    else {
LAB_0527db48:
      uVar25 = (uint)uStack_638;
    }
    do {
      iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
      uVar13 = (**(code **)(*param_1 + 0x1d0))();
      uVar13 = (**(code **)(*plVar17 + 0x18))(plVar17,uVar13);
      iVar24 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
      uStack_608 = (undefined *)CONCAT44(uVar13,iVar11 + (uVar25 | 8));
      plStack_600 = (long *)CONCAT44(plStack_600._4_4_,iVar24 + (uVar7 | 8));
      func_0x052d8680(param_1 + 0x36,&iStack_3c8,&uStack_608);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  lVar20 = (**(code **)(*plStack_3a0 + 0x568))();
  lVar14 = lStack_610;
  uVar15 = uStack_638;
  if ((*(char *)(lVar20 + 0x4b9) == '\x01') &&
     (lVar20 = (**(code **)(*plStack_3a0 + 0x568))(), *(char *)(lVar20 + 0x4ba) == '\0')) {
    plStack_600 = (long *)CONCAT62(plStack_600._2_6_,0x101);
    uStack_5f8 = _DAT_0f6b3a90;
    uStack_5f0 = 0;
    uStack_608 = &UNK_0f474ec0;
    lVar20 = (**(code **)(*(long *)param_1[4] + 0x568))();
    lVar19 = func_0x0d2279e0(lVar20 + 0x518,0xf71d600);
    if ((lVar19 == 0) && (lVar19 = func_0x0d2279e0(lVar20 + 0x4f0,0xf71d600), lVar19 == 0)) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = (undefined *)0x0;
      if (*(int *)(lVar19 + 0x50) == 6) {
        puVar18 = (undefined *)(lVar19 + 0x38);
      }
    }
    puVar21 = &UNK_01de6224;
    if (puVar18 != (undefined *)0x0) {
      puVar21 = puVar18;
    }
    func_0x0d50a850(&uStack_608,&iStack_3c8,puVar21,plVar17);
  }
  iVar10 = *(int *)(lVar14 + 0x50);
  iVar11 = *(int *)(lVar14 + 0x54);
  uVar25 = (**(code **)(*(long *)param_1[4] + 0x438))();
  lVar14 = *(long *)(lStack_620 + 0xa2208);
  if (*(char *)(lVar14 + 0x9e7) == '\x01') {
    uVar25 = uVar25 ^ iVar10 * uStack_57c + iVar11 * uStack_580;
    *(uint *)(lVar14 + 8) = uVar25;
    *(undefined2 *)(lVar14 + 0x9e4) = 0;
    *(undefined4 *)(lVar14 + 0x9d4) = 0;
    *(undefined8 *)(lVar14 + 0x9d8) = 0;
    *(uint *)(lVar14 + 0xc) = uVar25;
    lVar20 = 5;
    while( true ) {
      uVar16 = ((ulong)((uVar25 >> 0x1e ^ uVar25) * 0x6c078965) + lVar20) - 4;
      uVar25 = (uint)uVar16;
      *(uint *)(lVar14 + -4 + lVar20 * 4) = uVar25;
      if (lVar20 == 0x191) break;
      uVar25 = (((uint)(uVar16 >> 0x1e) & 3 ^ uVar25) * 0x6c078965 + (int)lVar20) - 3;
      *(uint *)(lVar14 + lVar20 * 4) = uVar25;
      lVar20 = lVar20 + 2;
    }
    *(undefined8 *)(lVar14 + 0x9cc) = 0x18e00000270;
  }
  (**(code **)(*param_1 + 0x1c0))(param_1,uStack_618,lStack_670,&iStack_3c8,plVar17);
  uVar23 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf712e90,1);
  lStack_620 = FUN_0cc41df0(&DAT_0f6ff9e0,&DAT_0f715218,1);
  uStack_618 = uVar15 & 0xffffffff;
  lVar14 = 0;
  do {
    lVar20 = uStack_618 + lVar14;
    iVar10 = 0;
    lStack_610 = lVar14;
    do {
      uStack_608 = (undefined *)CONCAT44((int)(uVar7 + iVar10) >> 4,(int)lVar20 >> 4);
      lVar19 = (**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x148))(&iStack_3c8,&uStack_608);
      if (lVar19 == 0) {
        auVar29._8_4_ = 0xffffffff;
        auVar29._0_8_ = 0xffffffffffffffff;
      }
      else {
        uStack_608 = (undefined *)
                     (CONCAT44(uStack_608._4_4_,
                               CONCAT22((short)((ulong)lVar20 >> 0x20) -
                                        *(short *)(*(long *)(lVar19 + 0x30) + 0xa8),
                                        CONCAT11((char)iVar10,(char)lVar14))) & 0xffffffffffffff0f);
        auVar29 = func_0x0cafbac0(lVar19,&uStack_608);
      }
      uStack_510 = auVar29._8_4_;
      uStack_518 = auVar29._0_8_ & 0xffffffff | (auVar29._0_8_ & 0xffffffff00000000) - 0x100000000;
      auStack_630 = auVar29;
      cVar4 = func_0x0c902a10(&iStack_3c8,&uStack_518,0);
      if (cVar4 != '\0') {
        uStack_5f8 = 0;
        uStack_5f0 = 0;
        uStack_608 = (undefined *)0x0;
        plStack_600 = (long *)0x0;
        uStack_5e8 = 1;
        uStack_658 = 0;
        plStack_650 = (long *)0x0;
        func_0x0c9d4820(&iStack_3c8,&uStack_518,uVar23,2,&uStack_658,0,&uStack_608);
        plVar17 = plStack_650;
        if (plStack_650 != (long *)0x0) {
          LOCK();
          plVar27 = plStack_650 + 1;
          lVar19 = *plVar27;
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plStack_650 + 0x10))(plStack_650);
            func_0x0412c2d0(plVar17);
          }
        }
      }
      cVar4 = func_0x0c9028a0(&iStack_3c8,auStack_630);
      if (cVar4 != '\0') {
        uStack_5f8 = 0;
        uStack_5f0 = 0;
        uStack_608 = (undefined *)0x0;
        plStack_600 = (long *)0x0;
        uStack_5e8 = 1;
        uStack_658 = 0;
        plStack_650 = (long *)0x0;
        func_0x0c9d4820(&iStack_3c8,auStack_630,lStack_620,2,&uStack_658,0,&uStack_608);
        plVar17 = plStack_650;
        if (plStack_650 != (long *)0x0) {
          LOCK();
          plVar27 = plStack_650 + 1;
          lVar19 = *plVar27;
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plStack_650 + 0x10))(plStack_650);
            func_0x0412c2d0(plVar17);
          }
        }
      }
      lVar19 = lStack_670;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x10);
    lVar14 = lStack_610 + 1;
  } while (lVar14 != 0x10);
  lVar14 = 0;
  do {
    uStack_658 = CONCAT44(*(int *)(&UNK_01641944 + lVar14) + *(int *)(lVar19 + 0x3c),
                          *(int *)(&UNK_01641940 + lVar14) + *(int *)(lVar19 + 0x38));
    plStack_650 = (long *)CONCAT44(plStack_650._4_4_,
                                   *(int *)(&UNK_01641948 + lVar14) + *(int *)(lVar19 + 0x40));
    lVar20 = (**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x138))(&iStack_3c8,&uStack_658);
    sVar2 = sStack_386;
    if (lVar20 != 0) {
      sVar2 = *(short *)(*(long *)(lVar20 + 0x30) + 0xa8) +
              *(short *)(lVar20 + 0xbd0 +
                        (ulong)(((uint)plStack_650 & 0xf) << 4 | (uint)uStack_658 & 0xf) * 2);
    }
    if (uStack_658._4_4_ < sVar2) {
      bVar5 = 1;
      do {
        lVar20 = (**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x10))(&iStack_3c8,&uStack_658);
        bVar28 = *(long *)(*(long *)(lVar20 + 0x68) + 200) != _DAT_0f713f00;
        if ((bool)(~bVar5 & 1) || bVar28) {
          bVar5 = bVar28 | bVar5;
        }
        else {
          uVar23 = FUN_0cc41df0(&DAT_0f6ff9e0,&DAT_0f713f00,1);
          uStack_5f8 = 0;
          uStack_5f0 = 0;
          uStack_608 = (undefined *)0x0;
          plStack_600 = (long *)0x0;
          uStack_5e8 = 1;
          (**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0xf8))
                    (&iStack_3c8,&uStack_658,uVar23,0,0,&uStack_608);
          uVar23 = FUN_0cc41df0(&DAT_0f6ff9e0,&DAT_0f713f00,1);
          bVar5 = 0;
          func_0x0c9d2c20(&piStack_448,&iStack_3c8,&uStack_658,uVar23,1,0);
        }
        iVar10 = uStack_658._4_4_ + 1;
        uStack_658 = CONCAT44(iVar10,(uint)uStack_658);
      } while (iVar10 < sVar2);
    }
    lVar14 = lVar14 + 0xc;
  } while (lVar14 != 0x2d0);
  cVar4 = func_0x0cafcba0(lStack_670);
  if (cVar4 != '\0') {
    func_0x0cafad60(lStack_670,0);
    func_0x0cafca30(lStack_670,&iStack_3c8);
  }
  func_0x0c9e7730(&piStack_448,*(undefined8 *)(lStack_670 + 0xf8));
  plVar17 = (long *)(**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x150))(&iStack_3c8);
  bVar5 = (**(code **)(*plVar17 + 0xc38))(plVar17);
  bVar6 = (**(code **)(*plStack_3a0 + 0x9f0))();
  if (((byte)(bVar5 | bVar6 ^ 1) == 1) && (lStack_430 != lStack_438)) {
    uVar15 = 0;
    do {
      func_0x0c9e4770(&piStack_448,&iStack_3c8,&UNK_01d38818,0x7fffffff,1);
      if (lStack_430 == lStack_438) break;
      bVar28 = uVar15 < 0x7f;
      uVar15 = uVar15 + 1;
    } while (bVar28);
  }
  plVar17 = (long *)(**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x150))(&iStack_3c8);
  bVar5 = (**(code **)(*plVar17 + 0xc38))(plVar17);
  bVar6 = (**(code **)(*plStack_3a0 + 0x9f0))();
  if (((byte)(bVar5 | bVar6 ^ 1) == 1) && (lStack_490 != lStack_498)) {
    uVar15 = 0;
    do {
      func_0x0c9e4770(&uStack_4a8,&iStack_3c8,&UNK_01d38818,0x7fffffff,1);
      if (lStack_490 == lStack_498) break;
      bVar28 = uVar15 < 0x7f;
      uVar15 = uVar15 + 1;
    } while (bVar28);
  }
  func_0x0c9e7730(*(undefined8 *)(lStack_670 + 0xf8),&piStack_448);
  func_0x0c9e7730(*(undefined8 *)(lStack_670 + 0x100),&uStack_4a8);
  plVar17 = *(long **)(lStack_670 + 0xfd0);
  *(undefined8 *)(lStack_670 + 0xfd0) = 0;
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    if (lVar14 != 0) {
      plVar17[1] = lVar14;
      func_0x0412a280(lVar14,plVar17[2] - lVar14);
    }
    func_0x0412a280(plVar17,0x18);
  }
  func_0x0cafd630(lStack_670);
  if (lStack_468 != 0) {
    lStack_460 = lStack_468;
    func_0x0412a280(lStack_468,lStack_458 - lStack_468);
  }
  if (lStack_480 != 0) {
    lStack_478 = lStack_480;
    func_0x0412a280(lStack_480,lStack_470 - lStack_480);
  }
  if (lStack_498 != 0) {
    lStack_490 = lStack_498;
    func_0x0412a280(lStack_498,lStack_488 - lStack_498);
  }
  if (lStack_408 != 0) {
    uStack_400 = (undefined2)lStack_408;
    uStack_3fe = (undefined6)((ulong)lStack_408 >> 0x10);
    func_0x0412a280(lStack_408,CONCAT62(uStack_3f6,uStack_3f8) - lStack_408);
  }
  if (lStack_420 != 0) {
    lStack_418 = lStack_420;
    func_0x0412a280(lStack_420,lStack_410 - lStack_420);
  }
  if (lStack_438 != 0) {
    lStack_430 = lStack_438;
    func_0x0412a280(lStack_438,lStack_428 - lStack_438);
  }
  func_0x0c9d0f40(&iStack_3c8);
  apuStack_258[0] = &UNK_0f3f24c8;
  FUN_052a3830(auStack_1d8);
  func_0x0cb3ae10(apuStack_258);
LAB_0527e597:
  lVar14 = lStack_3e8;
  if (((bStack_3d0 & 1) != 0) && (lVar20 = lStack_3e0, lStack_3e8 != 0)) {
    for (; lVar14 != lVar20; lVar20 = lVar20 + -0x20) {
      if (*(char *)(lVar20 + -8) == '\x01') {
        func_0x0412d6b0(*(undefined8 *)(lVar20 + -0x10));
      }
      plVar17 = *(long **)(lVar20 + -0x18);
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar27 = plVar17 + 1;
        lVar19 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
    }
    lStack_3e0 = lVar14;
    func_0x0412a280(lStack_3e8,lStack_3d8 - lStack_3e8);
  }
  if (plStack_668 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_668 + 1;
    lVar14 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_668 + 0x10))(plStack_668);
      func_0x0412c2d0(plStack_668);
    }
  }
  return bVar3;
}



/* ---- assembly ---- */
/* 0527cd10 */  PUSH RBP
/* 0527cd11 */  PUSH R15
/* 0527cd13 */  PUSH R14
/* 0527cd15 */  PUSH R13
/* 0527cd17 */  PUSH R12
/* 0527cd19 */  PUSH RBX
/* 0527cd1a */  SUB RSP,0x678
/* 0527cd21 */  MOV R15,RSI
/* 0527cd24 */  MOV R12,RDI
/* 0527cd27 */  MOV RDI,qword ptr [RDI + 0x20]
/* 0527cd2b */  MOV RAX,qword ptr [RDI]
/* 0527cd2e */  CALL qword ptr [RAX + 0x568]
/* 0527cd34 */  LEA RBX,[RAX + 0x50]
/* 0527cd38 */  CMP byte ptr [RAX + 0x77],0x0
/* 0527cd3c */  JNZ 0x0527cd67
/* 0527cd3e */  MOV R14,RAX
/* 0527cd41 */  ADD R14,0x70
/* 0527cd45 */  CMP byte ptr [RAX + 0x68],0x0
/* 0527cd49 */  JNZ 0x0527cd56
/* 0527cd4b */  TEST byte ptr [RAX + 0x56],0x1
/* 0527cd4f */  JNZ 0x0527cd56
/* 0527cd51 */  MOV RBX,R14
/* 0527cd54 */  JMP 0x0527cd67
/* 0527cd56 */  MOV RDI,R14
/* 0527cd59 */  MOV RSI,RBX
/* 0527cd5c */  CALL 0x04fa7a10
/* 0527cd61 */  TEST AL,AL
/* 0527cd63 */  CMOVNZ RBX,R14
/* 0527cd67 */  MOVZX EAX,byte ptr [RBX + 0x6]
/* 0527cd6b */  OR AL,byte ptr [RBX + 0x18]
/* 0527cd6e */  LEA RDI,[0xf72b850]
/* 0527cd75 */  TEST AL,0x1
/* 0527cd77 */  CMOVNZ RDI,RBX
/* 0527cd7b */  MOV R13B,0x1
/* 0527cd7e */  CMP byte ptr [0x0f5a2858],0x0
/* 0527cd85 */  JNZ 0x0527cdb0
/* 0527cd87 */  CMP byte ptr [RDI + 0x18],0x0
/* 0527cd8b */  JNZ 0x0527cdb0
/* 0527cd8d */  TEST byte ptr [0x0f5a2846],0x1
/* 0527cd94 */  JZ 0x0527cd9c
/* 0527cd96 */  CMP byte ptr [RDI + 0x7],0x0
/* 0527cd9a */  JZ 0x0527cda1
/* 0527cd9c */  XOR R13D,R13D
/* 0527cd9f */  JMP 0x0527cdb0
/* 0527cda1 */  LEA RSI,[0xf5a2840]
/* 0527cda8 */  CALL 0x04fa7a10
/* 0527cdad */  MOV R13D,EAX
/* 0527cdb0 */  LEA RBX,[R15 + 0x110]
/* 0527cdb7 */  MOV RDI,RBX
/* 0527cdba */  CALL 0x0412d550
/* 0527cdbf */  MOV EBP,dword ptr [R15 + 0x1a0]
/* 0527cdc6 */  MOV R14D,dword ptr [R15 + 0x1a8]
/* 0527cdcd */  MOV RDI,RBX
/* 0527cdd0 */  CALL 0x0412d610
/* 0527cdd5 */  INC EBP
/* 0527cdd7 */  INC R14D
/* 0527cdda */  MOV dword ptr [RSP + 0x188],EBP
/* 0527cde1 */  MOV dword ptr [RSP + 0x18c],R14D
/* 0527cde9 */  MOV RAX,qword ptr [R15]
/* 0527cdec */  LEA RDI,[RSP + 0x38]
/* 0527cdf1 */  LEA RDX,[RSP + 0x188]
/* 0527cdf9 */  MOV RSI,R15
/* 0527cdfc */  CALL qword ptr [RAX + 0x20]
/* 0527cdff */  MOV RBX,qword ptr [RSP + 0x38]
/* 0527ce04 */  LEA RDX,[RBX + 0x50]
/* 0527ce08 */  MOV RAX,qword ptr [RBX + 0x30]
/* 0527ce0c */  MOV RSI,qword ptr [RAX + 0x198]
/* 0527ce13 */  LEA RDI,[RSP + 0x2c0]
/* 0527ce1b */  MOV RCX,R15
/* 0527ce1e */  CALL 0x0ca8a1f0
/* 0527ce23 */  MOVZX EBP,byte ptr [RSP + 0x2d8]
/* 0527ce2b */  MOV EAX,EBP
/* 0527ce2d */  TEST BPL,BPL
/* 0527ce30 */  JZ 0x0527e597
/* 0527ce36 */  LEA RDI,[RSP + 0x450]
/* 0527ce3e */  MOV RSI,R15
/* 0527ce41 */  CALL 0x0cb35860
/* 0527ce46 */  MOV qword ptr [RSP + 0x30],R12
/* 0527ce4b */  LEA R14,[RSP + 0x560]
/* 0527ce53 */  MOV RDI,R14
/* 0527ce56 */  CALL 0x0412d550
/* 0527ce5b */  MOV dword ptr [RSP + 0x28],R13D
/* 0527ce60 */  MOV qword ptr [RSP + 0x98],RBX
/* 0527ce68 */  MOV byte ptr [RSP + 0x1f],BPL
/* 0527ce6d */  MOV EBX,dword ptr [RSP + 0x5f0]
/* 0527ce74 */  MOV R15D,dword ptr [RSP + 0x5f8]
/* 0527ce7c */  MOV EAX,dword ptr [RSP + 0x5fc]
/* 0527ce83 */  MOV dword ptr [RSP + 0x20],EAX
/* 0527ce87 */  MOV EAX,dword ptr [RSP + 0x604]
/* 0527ce8e */  MOV dword ptr [RSP + 0x10],EAX
/* 0527ce92 */  MOV R12D,dword ptr [RSP + 0x618]
/* 0527ce9a */  MOV RDI,R14
/* 0527ce9d */  CALL 0x0412d610
/* 0527cea2 */  TEST R12D,R12D
/* 0527cea5 */  JZ 0x0527d062
/* 0527ceab */  MOV R13D,R15D
/* 0527ceae */  MOV EBP,EBX
/* 0527ceb0 */  JMP 0x0527cee9
/* 0527cec0 */  LEA EAX,[R13 + 0x1]
/* 0527cec4 */  CMP R13D,dword ptr [RSP + 0x10]
/* 0527cec9 */  CMOVGE EAX,R15D
/* 0527cecd */  CMP EBP,dword ptr [RSP + 0x20]
/* 0527ced1 */  LEA ECX,[RBP + 0x1]
/* 0527ced4 */  CMOVGE ECX,EBX
/* 0527ced7 */  CMOVL EAX,R13D
/* 0527cedb */  MOV R13D,EAX
/* 0527cede */  MOV EBP,ECX
/* 0527cee0 */  DEC R12D
/* 0527cee3 */  JZ 0x0527d062
/* 0527cee9 */  MOV dword ptr [RSP + 0x200],EBP
/* 0527cef0 */  MOV dword ptr [RSP + 0x204],R13D
/* 0527cef8 */  MOV RAX,qword ptr [RSP + 0x450]
/* 0527cf00 */  LEA RDI,[RSP + 0x2e0]
/* 0527cf08 */  LEA RSI,[RSP + 0x450]
/* 0527cf10 */  LEA RDX,[RSP + 0x200]
/* 0527cf18 */  CALL qword ptr [RAX + 0x20]
/* 0527cf1b */  MOV RAX,qword ptr [RSP + 0x2e0]
/* 0527cf23 */  TEST RAX,RAX
/* 0527cf26 */  LEA RDI,[RSP + 0x560]
/* 0527cf2e */  JZ 0x0527cf80
/* 0527cf30 */  MOVZX EAX,byte ptr [RAX + 0xb8]
/* 0527cf37 */  CMP AL,0x2
/* 0527cf39 */  JC 0x0527cf80
/* 0527cf3b */  MOV RAX,qword ptr [RSP + 0x2e0]
/* 0527cf43 */  MOV RCX,qword ptr [RSP + 0x2e8]
/* 0527cf4b */  MOV qword ptr [RSP + 0xa0],RAX
/* 0527cf53 */  MOV qword ptr [RSP + 0xa8],RCX
/* 0527cf5b */  TEST RCX,RCX
/* 0527cf5e */  JZ 0x0527cfcb
/* 0527cf60 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0527cf65 */  MOV R14,qword ptr [RSP + 0x2e8]
/* 0527cf6d */  TEST R14,R14
/* 0527cf70 */  JNZ 0x0527cf98
/* 0527cf72 */  JMP 0x0527cfc3
/* 0527cf80 */  XORPS XMM0,XMM0
/* 0527cf83 */  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
/* 0527cf8b */  MOV R14,qword ptr [RSP + 0x2e8]
/* 0527cf93 */  TEST R14,R14
/* 0527cf96 */  JZ 0x0527cfc3
/* 0527cf98 */  MOV RAX,-0x1
/* 0527cf9f */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0527cfa5 */  TEST RAX,RAX
/* 0527cfa8 */  JNZ 0x0527cfc3
/* 0527cfaa */  MOV RAX,qword ptr [R14]
/* 0527cfad */  MOV RDI,R14
/* 0527cfb0 */  CALL qword ptr [RAX + 0x10]
/* 0527cfb3 */  MOV RDI,R14
/* 0527cfb6 */  CALL 0x0412c2d0
/* 0527cfbb */  LEA RDI,[RSP + 0x560]
/* 0527cfc3 */  MOV RAX,qword ptr [RSP + 0xa0]
/* 0527cfcb */  TEST RAX,RAX
/* 0527cfce */  JZ 0x0527d025
/* 0527cfd0 */  MOVZX EAX,byte ptr [RAX + 0xb8]
/* 0527cfd7 */  CMP AL,0x7
/* 0527cfd9 */  JC 0x0527d025
/* 0527cfdb */  MOV EAX,dword ptr [RSP + 0x200]
/* 0527cfe2 */  MOV ECX,dword ptr [RSP + 0x204]
/* 0527cfe9 */  SHL EAX,0x4
/* 0527cfec */  SHL ECX,0x4
/* 0527cfef */  MOV dword ptr [RSP + 0x2e0],EAX
/* 0527cff6 */  MOV dword ptr [RSP + 0x2e4],0x0
/* 0527d001 */  MOV dword ptr [RSP + 0x2e8],ECX
/* 0527d008 */  LEA RAX,[RSP + 0x2e0]
/* 0527d010 */  MOV qword ptr [RSP + 0x260],RAX
/* 0527d018 */  LEA RSI,[RSP + 0x260]
/* 0527d020 */  CALL 0x0cb59800
/* 0527d025 */  MOV R14,qword ptr [RSP + 0xa8]
/* 0527d02d */  TEST R14,R14
/* 0527d030 */  JZ 0x0527cec0
/* 0527d036 */  MOV RAX,-0x1
/* 0527d03d */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0527d043 */  TEST RAX,RAX
/* 0527d046 */  JNZ 0x0527cec0
/* 0527d04c */  MOV RAX,qword ptr [R14]
/* 0527d04f */  MOV RDI,R14
/* 0527d052 */  CALL qword ptr [RAX + 0x10]
/* 0527d055 */  MOV RDI,R14
/* 0527d058 */  CALL 0x0412c2d0
/* 0527d05d */  JMP 0x0527cec0
/* 0527d062 */  MOV RSI,qword ptr [RSP + 0x470]
/* 0527d06a */  MOV RDX,qword ptr [RSP + 0x478]
/* 0527d072 */  MOV dword ptr [RSP + 0x8],0x0
/* 0527d07a */  MOV dword ptr [RSP],0x1
/* 0527d081 */  LEA RDI,[RSP + 0x2e0]
/* 0527d089 */  LEA RCX,[RSP + 0x450]
/* 0527d091 */  XOR R8D,R8D
/* 0527d094 */  MOV R9D,0x1
/* 0527d09a */  CALL 0x0c9d0c10
/* 0527d09f */  MOV qword ptr [RSP + 0x260],0x0
/* 0527d0ab */  MOV qword ptr [RSP + 0x268],0x1
/* 0527d0b7 */  XORPS XMM0,XMM0
/* 0527d0ba */  MOVUPS xmmword ptr [RSP + 0x270],XMM0
/* 0527d0c2 */  MOVUPS xmmword ptr [RSP + 0x280],XMM0
/* 0527d0ca */  MOVUPS xmmword ptr [RSP + 0x290],XMM0
/* 0527d0d2 */  MOVUPS xmmword ptr [RSP + 0x2a0],XMM0
/* 0527d0da */  MOVUPS xmmword ptr [RSP + 0x2aa],XMM0
/* 0527d0e2 */  MOV qword ptr [RSP + 0x200],0x0
/* 0527d0ee */  MOV qword ptr [RSP + 0x208],0x1
/* 0527d0fa */  MOVUPS xmmword ptr [RSP + 0x210],XMM0
/* 0527d102 */  MOVUPS xmmword ptr [RSP + 0x220],XMM0
/* 0527d10a */  MOVUPS xmmword ptr [RSP + 0x230],XMM0
/* 0527d112 */  MOVUPS xmmword ptr [RSP + 0x240],XMM0
/* 0527d11a */  MOV qword ptr [RSP + 0x250],0x0
/* 0527d126 */  MOV word ptr [RSP + 0x258],0x1
/* 0527d130 */  LEA RAX,[RSP + 0x260]
/* 0527d138 */  MOV qword ptr [RSP + 0x3d0],RAX
/* 0527d140 */  LEA RAX,[RSP + 0x200]
/* 0527d148 */  MOV qword ptr [RSP + 0x3c8],RAX
/* 0527d150 */  MOV RSI,qword ptr [RSP + 0x38]
/* 0527d155 */  ADD RSI,0x44
/* 0527d159 */  LEA RDI,[RSP + 0x2e0]
/* 0527d161 */  CALL 0x0c9e2ed0
/* 0527d166 */  MOV qword ptr [RSP + 0x90],RAX
/* 0527d16e */  MOV R12,qword ptr [RSP + 0x30]
/* 0527d173 */  MOV R15,qword ptr [RSP + 0x98]
/* 0527d17b */  LEA RDI,[R12 + 0x140]
/* 0527d183 */  CALL 0x052be680
/* 0527d188 */  MOV qword ptr [RSP + 0x88],RAX
/* 0527d190 */  MOV R13D,dword ptr [R15 + 0x50]
/* 0527d194 */  MOV EAX,dword ptr [R15 + 0x54]
/* 0527d198 */  MOV qword ptr [RSP + 0x20],RAX
/* 0527d19d */  MOV RDI,qword ptr [R12 + 0x20]
/* 0527d1a2 */  MOV RAX,qword ptr [RDI]
/* 0527d1a5 */  CALL qword ptr [RAX + 0x438]
/* 0527d1ab */  MOV RDX,qword ptr [RSP + 0x88]
/* 0527d1b3 */  MOV RCX,RDX
/* 0527d1b6 */  ADD RCX,0xa1810
/* 0527d1bd */  MOV qword ptr [RSP + 0x10],RCX
/* 0527d1c2 */  MOV RCX,qword ptr [RDX + 0xa2208]
/* 0527d1c9 */  CMP byte ptr [RCX + 0x9e7],0x1
/* 0527d1d0 */  JNZ 0x0527d24d
/* 0527d1d2 */  MOV dword ptr [RCX + 0x8],EAX
/* 0527d1d5 */  MOV word ptr [RCX + 0x9e4],0x0
/* 0527d1de */  MOV dword ptr [RCX + 0x9d4],0x0
/* 0527d1e8 */  MOV qword ptr [RCX + 0x9d8],0x0
/* 0527d1f3 */  MOV dword ptr [RCX + 0xc],EAX
/* 0527d1f6 */  MOV EDX,0x5
/* 0527d1fb */  NOP dword ptr [RAX + RAX*0x1]
/* 0527d200 */  MOV ESI,EAX
/* 0527d202 */  SHR ESI,0x1e
/* 0527d205 */  XOR ESI,EAX
/* 0527d207 */  IMUL EAX,ESI,0x6c078965
/* 0527d20d */  ADD RAX,RDX
/* 0527d210 */  ADD RAX,-0x4
/* 0527d214 */  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
/* 0527d218 */  CMP RDX,0x191
/* 0527d21f */  JZ 0x0527d23c
/* 0527d221 */  MOV ESI,EAX
/* 0527d223 */  SHR ESI,0x1e
/* 0527d226 */  XOR ESI,EAX
/* 0527d228 */  IMUL EAX,ESI,0x6c078965
/* 0527d22e */  ADD EAX,EDX
/* 0527d230 */  ADD EAX,-0x3
/* 0527d233 */  MOV dword ptr [RCX + RDX*0x4],EAX
/* 0527d236 */  ADD RDX,0x2
/* 0527d23a */  JMP 0x0527d200
/* 0527d23c */  MOV RAX,0x18e00000270
/* 0527d246 */  MOV qword ptr [RCX + 0x9cc],RAX
/* 0527d24d */  MOV RDI,qword ptr [RSP + 0x10]
/* 0527d252 */  MOV RAX,qword ptr [RDI]
/* 0527d255 */  CALL qword ptr [RAX + 0x10]
/* 0527d258 */  MOV EBX,EAX
/* 0527d25a */  MOV RDI,qword ptr [RSP + 0x10]
/* 0527d25f */  MOV RAX,qword ptr [RDI]
/* 0527d262 */  CALL qword ptr [RAX + 0x10]
/* 0527d265 */  MOV EBP,EAX
/* 0527d267 */  MOV R14D,dword ptr [R15 + 0x50]
/* 0527d26b */  MOV R15D,dword ptr [R15 + 0x54]
/* 0527d26f */  MOV RDI,qword ptr [R12 + 0x20]
/* 0527d274 */  MOV RAX,qword ptr [RDI]
/* 0527d277 */  CALL qword ptr [RAX + 0x438]
/* 0527d27d */  MOV EDI,EBX
/* 0527d27f */  SHR EDI,0x1f
/* 0527d282 */  ADD EDI,EBX
/* 0527d284 */  OR EDI,0x1
/* 0527d287 */  MOV R8D,EBP
/* 0527d28a */  SHR R8D,0x1f
/* 0527d28e */  ADD R8D,EBP
/* 0527d291 */  OR R8D,0x1
/* 0527d295 */  MOV RCX,qword ptr [RSP + 0x88]
/* 0527d29d */  MOV RCX,qword ptr [RCX + 0xa2208]
/* 0527d2a4 */  CMP byte ptr [RCX + 0x9e7],0x1
/* 0527d2ab */  JNZ 0x0527d33d
/* 0527d2b1 */  IMUL R15D,R8D
/* 0527d2b5 */  IMUL R14D,EDI
/* 0527d2b9 */  ADD R14D,R15D
/* 0527d2bc */  XOR EAX,R14D
/* 0527d2bf */  MOV dword ptr [RCX + 0x8],EAX
/* 0527d2c2 */  MOV word ptr [RCX + 0x9e4],0x0
/* 0527d2cb */  MOV dword ptr [RCX + 0x9d4],0x0
/* 0527d2d5 */  MOV qword ptr [RCX + 0x9d8],0x0
/* 0527d2e0 */  MOV dword ptr [RCX + 0xc],EAX
/* 0527d2e3 */  MOV EDX,0x5
/* 0527d2e8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0527d2f0 */  MOV ESI,EAX
/* 0527d2f2 */  SHR ESI,0x1e
/* 0527d2f5 */  XOR ESI,EAX
/* 0527d2f7 */  IMUL EAX,ESI,0x6c078965
/* 0527d2fd */  ADD RAX,RDX
/* 0527d300 */  ADD RAX,-0x4
/* 0527d304 */  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
/* 0527d308 */  CMP RDX,0x191
/* 0527d30f */  JZ 0x0527d32c
/* 0527d311 */  MOV ESI,EAX
/* 0527d313 */  SHR ESI,0x1e
/* 0527d316 */  XOR ESI,EAX
/* 0527d318 */  IMUL EAX,ESI,0x6c078965
/* 0527d31e */  ADD EAX,EDX
/* 0527d320 */  ADD EAX,-0x3
/* 0527d323 */  MOV dword ptr [RCX + RDX*0x4],EAX
/* 0527d326 */  ADD RDX,0x2
/* 0527d32a */  JMP 0x0527d2f0
/* 0527d32c */  MOV RAX,0x18e00000270
/* 0527d336 */  MOV qword ptr [RCX + 0x9cc],RAX
/* 0527d33d */  MOV dword ptr [RSP + 0x128],R8D
/* 0527d345 */  MOV dword ptr [RSP + 0x12c],EDI
/* 0527d34c */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527d351 */  MOVSX R14D,word ptr [RAX + 0xac]
/* 0527d359 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0527d361 */  MOVZX EBX,word ptr [RAX + 0x168]
/* 0527d368 */  MOV RAX,qword ptr [RSP + 0x38]
/* 0527d36d */  MOV RDI,qword ptr [RAX + 0x28]
/* 0527d371 */  MOV RAX,qword ptr [RDI]
/* 0527d374 */  CALL qword ptr [RAX + 0xbe8]
/* 0527d37a */  SHL R13D,0x4
/* 0527d37e */  MOV RCX,qword ptr [RSP + 0x20]
/* 0527d383 */  SHL ECX,0x4
/* 0527d386 */  MOV qword ptr [RSP + 0x20],RCX
/* 0527d38b */  CMP EBX,0x2
/* 0527d38e */  SETNZ CL
/* 0527d391 */  CMP EBX,0x11
/* 0527d394 */  SETNZ DL
/* 0527d397 */  TEST AL,AL
/* 0527d399 */  MOV qword ptr [RSP + 0x70],R13
/* 0527d39e */  JZ 0x0527d3c6
/* 0527d3a0 */  CMP EBX,0x27
/* 0527d3a3 */  JA 0x0527d3b7
/* 0527d3a5 */  MOV EAX,EBX
/* 0527d3a7 */  MOV RCX,0xf800030884
/* 0527d3b1 */  BT RCX,RAX
/* 0527d3b5 */  JC 0x0527d405
/* 0527d3b7 */  ADD EBX,0xffffff5d
/* 0527d3bd */  CMP EBX,0x2
/* 0527d3c0 */  JC 0x0527d405
/* 0527d3c2 */  MOV CL,0x1
/* 0527d3c4 */  JMP 0x0527d3c8
/* 0527d3c6 */  AND CL,DL
/* 0527d3c8 */  AND CL,byte ptr [RSP + 0x28]
/* 0527d3cc */  CMP CL,0x1
/* 0527d3cf */  JNZ 0x0527d405
/* 0527d3d1 */  MOV RAX,qword ptr [RSP + 0x38]
/* 0527d3d6 */  MOV RDI,qword ptr [RAX + 0x28]
/* 0527d3da */  MOV RAX,qword ptr [RDI]
/* 0527d3dd */  CALL qword ptr [RAX + 0xbe8]
/* 0527d3e3 */  TEST AL,AL
/* 0527d3e5 */  MOV EAX,0x20
/* 0527d3ea */  MOV ESI,0x4
/* 0527d3ef */  CMOVNZ ESI,EAX
/* 0527d3f2 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0527d3f7 */  MOV RAX,qword ptr [RDI]
/* 0527d3fa */  CALL qword ptr [RAX + 0x18]
/* 0527d3fd */  TEST EAX,EAX
/* 0527d3ff */  JZ 0x0527d51a
/* 0527d405 */  CMP byte ptr [R12 + 0x130],0x0
/* 0527d40e */  JNZ 0x0527d8a4
/* 0527d414 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0527d419 */  MOV RAX,qword ptr [RDI]
/* 0527d41c */  MOV ESI,0x8
/* 0527d421 */  CALL qword ptr [RAX + 0x18]
/* 0527d424 */  TEST EAX,EAX
/* 0527d426 */  JNZ 0x0527d8a4
/* 0527d42c */  MOV R13,qword ptr [RSP + 0x10]
/* 0527d431 */  MOV RAX,qword ptr [R13]
/* 0527d435 */  MOV RDI,R13
/* 0527d438 */  MOV ESI,0x9
/* 0527d43d */  CALL qword ptr [RAX + 0x18]
/* 0527d440 */  MOV EBX,EAX
/* 0527d442 */  MOV RAX,qword ptr [R13]
/* 0527d446 */  MOV RDI,R13
/* 0527d449 */  MOV ESI,0x78
/* 0527d44e */  CALL qword ptr [RAX + 0x18]
/* 0527d451 */  ADD EAX,0x8
/* 0527d454 */  MOV RCX,qword ptr [R13]
/* 0527d458 */  MOV RDI,R13
/* 0527d45b */  MOV ESI,EAX
/* 0527d45d */  CALL qword ptr [RCX + 0x18]
/* 0527d460 */  MOV R15D,EAX
/* 0527d463 */  MOV RAX,qword ptr [R13]
/* 0527d467 */  MOV RDI,R13
/* 0527d46a */  MOV ESI,0x9
/* 0527d46f */  CALL qword ptr [RAX + 0x18]
/* 0527d472 */  MOV R13D,EAX
/* 0527d475 */  LEA EAX,[R14 + -0x3]
/* 0527d479 */  CMP R15D,EAX
/* 0527d47c */  JL 0x0527d8a4
/* 0527d482 */  CMP R15D,R14D
/* 0527d485 */  JLE 0x0527d49f
/* 0527d487 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0527d48c */  MOV RAX,qword ptr [RDI]
/* 0527d48f */  MOV ESI,0xa
/* 0527d494 */  CALL qword ptr [RAX + 0x18]
/* 0527d497 */  TEST EAX,EAX
/* 0527d499 */  JNZ 0x0527d8a4
/* 0527d49f */  MOV RAX,qword ptr [RSP + 0x70]
/* 0527d4a4 */  ADD EAX,EBX
/* 0527d4a6 */  ADD EAX,0x3
/* 0527d4a9 */  MOV RCX,qword ptr [RSP + 0x20]
/* 0527d4ae */  ADD ECX,R13D
/* 0527d4b1 */  ADD ECX,0x3
/* 0527d4b4 */  SHL R15,0x20
/* 0527d4b8 */  OR RAX,R15
/* 0527d4bb */  MOV qword ptr [RSP + 0x78],RAX
/* 0527d4c0 */  MOV dword ptr [RSP + 0x80],ECX
/* 0527d4c7 */  LEA RDI,[RSP + 0x138]
/* 0527d4cf */  XORPS XMM0,XMM0
/* 0527d4d2 */  MOVAPS xmmword ptr [RSP + 0x130],XMM0
/* 0527d4da */  MOVAPS xmmword ptr [RSP + 0x140],XMM0
/* 0527d4e2 */  MOV qword ptr [RSP + 0x150],0x0
/* 0527d4ee */  TEST byte ptr [0x0f713b98],0x1
/* 0527d4f5 */  JNZ 0x0527d704
/* 0527d4fb */  MOV RAX,qword ptr [0x0f713ba8]
/* 0527d502 */  MOV qword ptr [RDI + 0x10],RAX
/* 0527d506 */  MOVUPS XMM0,xmmword ptr [0x0f713b98]
/* 0527d50d */  MOVUPS xmmword ptr [RDI],XMM0
/* 0527d510 */  MOV RBX,qword ptr [RSP + 0x10]
/* 0527d515 */  JMP 0x0527d71c
/* 0527d51a */  MOV RBP,qword ptr [RSP + 0x10]
/* 0527d51f */  MOV RAX,qword ptr [RBP]
/* 0527d523 */  MOV RDI,RBP
/* 0527d526 */  MOV ESI,0x9
/* 0527d52b */  CALL qword ptr [RAX + 0x18]
/* 0527d52e */  MOV EBX,EAX
/* 0527d530 */  MOV RAX,qword ptr [RBP]
/* 0527d534 */  MOV RDI,RBP
/* 0527d537 */  MOV ESI,0x80
/* 0527d53c */  CALL qword ptr [RAX + 0x18]
/* 0527d53f */  MOV R15D,EAX
/* 0527d542 */  MOV RAX,qword ptr [RBP]
/* 0527d546 */  MOV RDI,RBP
/* 0527d549 */  MOV ESI,0x9
/* 0527d54e */  CALL qword ptr [RAX + 0x18]
/* 0527d551 */  LEA ECX,[R14 + -0x3]
/* 0527d555 */  CMP R15D,ECX
/* 0527d558 */  JGE 0x0527d569
/* 0527d55a */  CMP byte ptr [R12 + 0x130],0x0
/* 0527d563 */  JNZ 0x0527d405
/* 0527d569 */  LEA ECX,[RBX + R13*0x1]
/* 0527d56d */  ADD ECX,0x3
/* 0527d570 */  MOV RDX,qword ptr [RSP + 0x20]
/* 0527d575 */  ADD EAX,EDX
/* 0527d577 */  ADD EAX,0x3
/* 0527d57a */  SHL R15,0x20
/* 0527d57e */  OR RCX,R15
/* 0527d581 */  MOV qword ptr [RSP + 0x78],RCX
/* 0527d586 */  MOV dword ptr [RSP + 0x80],EAX
/* 0527d58d */  LEA RDI,[RSP + 0x168]
/* 0527d595 */  XORPS XMM0,XMM0
/* 0527d598 */  MOVAPS xmmword ptr [RSP + 0x160],XMM0
/* 0527d5a0 */  MOVAPS xmmword ptr [RSP + 0x170],XMM0
/* 0527d5a8 */  MOV qword ptr [RSP + 0x180],0x0
/* 0527d5b4 */  TEST byte ptr [0x0f713f08],0x1
/* 0527d5bb */  JNZ 0x0527d5d9
/* 0527d5bd */  MOV RAX,qword ptr [0x0f713f18]
/* 0527d5c4 */  MOV qword ptr [RDI + 0x10],RAX
/* 0527d5c8 */  MOVUPS XMM0,xmmword ptr [0x0f713f08]
/* 0527d5cf */  MOVUPS xmmword ptr [RDI],XMM0
/* 0527d5d2 */  MOV RBX,qword ptr [RSP + 0x10]
/* 0527d5d7 */  JMP 0x0527d5f1
/* 0527d5d9 */  MOV RSI,qword ptr [0x0f713f18]
/* 0527d5e0 */  MOV RDX,qword ptr [0x0f713f10]
/* 0527d5e7 */  CALL 0x04885070
/* 0527d5ec */  MOV RBX,qword ptr [RSP + 0x10]
/* 0527d5f1 */  MOV RAX,qword ptr [0x0f713f00]
/* 0527d5f8 */  MOV qword ptr [RSP + 0x160],RAX
/* 0527d600 */  LEA RDI,[RSP + 0x1d8]
/* 0527d608 */  XORPS XMM0,XMM0
/* 0527d60b */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
/* 0527d613 */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
/* 0527d61b */  MOV qword ptr [RSP + 0x1f0],0x0
/* 0527d627 */  TEST byte ptr [0x0f71bd90],0x1
/* 0527d62e */  JNZ 0x0527d647
/* 0527d630 */  MOV RAX,qword ptr [0x0f71bda0]
/* 0527d637 */  MOV qword ptr [RDI + 0x10],RAX
/* 0527d63b */  MOVUPS XMM0,xmmword ptr [0x0f71bd90]
/* 0527d642 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0527d645 */  JMP 0x0527d65a
/* 0527d647 */  MOV RSI,qword ptr [0x0f71bda0]
/* 0527d64e */  MOV RDX,qword ptr [0x0f71bd98]
/* 0527d655 */  CALL 0x04885070
/* 0527d65a */  MOV RAX,qword ptr [0x0f71bd88]
/* 0527d661 */  MOV qword ptr [RSP + 0x1d0],RAX
/* 0527d669 */  XORPS XMM0,XMM0
/* 0527d66c */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 0527d671 */  MOV qword ptr [RSP + 0x60],0x0
/* 0527d67a */  LEA RDI,[RSP + 0xa0]
/* 0527d682 */  LEA RSI,[RSP + 0x160]
/* 0527d68a */  LEA RDX,[RSP + 0x1d0]
/* 0527d692 */  LEA RCX,[RSP + 0x50]
/* 0527d697 */  CALL 0x052ce620
/* 0527d69c */  TEST byte ptr [RSP + 0x1d8],0x1
/* 0527d6a4 */  JZ 0x0527d6bf
/* 0527d6a6 */  MOV RSI,qword ptr [RSP + 0x1d8]
/* 0527d6ae */  MOV RDI,qword ptr [RSP + 0x1e8]
/* 0527d6b6 */  AND RSI,-0x2
/* 0527d6ba */  CALL 0x0412a280
/* 0527d6bf */  TEST byte ptr [RSP + 0x168],0x1
/* 0527d6c7 */  JZ 0x0527d6e2
/* 0527d6c9 */  MOV RSI,qword ptr [RSP + 0x168]
/* 0527d6d1 */  MOV RDI,qword ptr [RSP + 0x178]
/* 0527d6d9 */  AND RSI,-0x2
/* 0527d6dd */  CALL 0x0412a280
/* 0527d6e2 */  LEA RDI,[RSP + 0xa0]
/* 0527d6ea */  LEA RSI,[RSP + 0x2e0]
/* 0527d6f2 */  LEA RDX,[RSP + 0x78]
/* 0527d6f7 */  MOV RCX,RBX
/* 0527d6fa */  CALL 0x052ce810
/* 0527d6ff */  JMP 0x0527d82a
/* 0527d704 */  MOV RSI,qword ptr [0x0f713ba8]
/* 0527d70b */  MOV RDX,qword ptr [0x0f713ba0]
/* 0527d712 */  CALL 0x04885070
/* 0527d717 */  MOV RBX,qword ptr [RSP + 0x10]
/* 0527d71c */  MOV RAX,qword ptr [0x0f713b90]
/* 0527d723 */  MOV qword ptr [RSP + 0x130],RAX
/* 0527d72b */  LEA RDI,[RSP + 0x1a8]
/* 0527d733 */  XORPS XMM0,XMM0
/* 0527d736 */  MOVAPS xmmword ptr [RSP + 0x1a0],XMM0
/* 0527d73e */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM0
/* 0527d746 */  MOV qword ptr [RSP + 0x1c0],0x0
/* 0527d752 */  TEST byte ptr [0x0f71bd90],0x1
/* 0527d759 */  JNZ 0x0527d772
/* 0527d75b */  MOV RAX,qword ptr [0x0f71bda0]
/* 0527d762 */  MOV qword ptr [RDI + 0x10],RAX
/* 0527d766 */  MOVUPS XMM0,xmmword ptr [0x0f71bd90]
/* 0527d76d */  MOVUPS xmmword ptr [RDI],XMM0
/* 0527d770 */  JMP 0x0527d785
/* 0527d772 */  MOV RSI,qword ptr [0x0f71bda0]
/* 0527d779 */  MOV RDX,qword ptr [0x0f71bd98]
/* 0527d780 */  CALL 0x04885070
/* 0527d785 */  MOV RAX,qword ptr [0x0f71bd88]
/* 0527d78c */  MOV qword ptr [RSP + 0x1a0],RAX
/* 0527d794 */  XORPS XMM0,XMM0
/* 0527d797 */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 0527d79c */  MOV qword ptr [RSP + 0x60],0x0
/* 0527d7a5 */  LEA RDI,[RSP + 0xa0]
/* 0527d7ad */  LEA RSI,[RSP + 0x130]
/* 0527d7b5 */  LEA RDX,[RSP + 0x1a0]
/* 0527d7bd */  LEA RCX,[RSP + 0x50]
/* 0527d7c2 */  CALL 0x052ce620
/* 0527d7c7 */  TEST byte ptr [RSP + 0x1a8],0x1
/* 0527d7cf */  JZ 0x0527d7ea
/* 0527d7d1 */  MOV RSI,qword ptr [RSP + 0x1a8]
/* 0527d7d9 */  MOV RDI,qword ptr [RSP + 0x1b8]
/* 0527d7e1 */  AND RSI,-0x2
/* 0527d7e5 */  CALL 0x0412a280
/* 0527d7ea */  TEST byte ptr [RSP + 0x138],0x1
/* 0527d7f2 */  JZ 0x0527d80d
/* 0527d7f4 */  MOV RSI,qword ptr [RSP + 0x138]
/* 0527d7fc */  MOV RDI,qword ptr [RSP + 0x148]
/* 0527d804 */  AND RSI,-0x2
/* 0527d808 */  CALL 0x0412a280
/* 0527d80d */  LEA RDI,[RSP + 0xa0]
/* 0527d815 */  LEA RSI,[RSP + 0x2e0]
/* 0527d81d */  LEA RDX,[RSP + 0x78]
/* 0527d822 */  MOV RCX,RBX
/* 0527d825 */  CALL 0x052ce810
/* 0527d82a */  LEA RAX,[0xefa00a8]
/* 0527d831 */  MOV qword ptr [RSP + 0xa0],RAX
/* 0527d839 */  MOV RDI,qword ptr [RSP + 0x110]
/* 0527d841 */  TEST RDI,RDI
/* 0527d844 */  JZ 0x0527d85e
/* 0527d846 */  MOV qword ptr [RSP + 0x118],RDI
/* 0527d84e */  MOV RSI,qword ptr [RSP + 0x120]
/* 0527d856 */  SUB RSI,RDI
/* 0527d859 */  CALL 0x0412a280
/* 0527d85e */  TEST byte ptr [RSP + 0xf0],0x1
/* 0527d866 */  JZ 0x0527d881
/* 0527d868 */  MOV RSI,qword ptr [RSP + 0xf0]
/* 0527d870 */  MOV RDI,qword ptr [RSP + 0x100]
/* 0527d878 */  AND RSI,-0x2
/* 0527d87c */  CALL 0x0412a280
/* 0527d881 */  TEST byte ptr [RSP + 0xc8],0x1
/* 0527d889 */  JZ 0x0527d8a4
/* 0527d88b */  MOV RSI,qword ptr [RSP + 0xc8]
/* 0527d893 */  MOV RDI,qword ptr [RSP + 0xd8]
/* 0527d89b */  AND RSI,-0x2
/* 0527d89f */  CALL 0x0412a280
/* 0527d8a4 */  CMP byte ptr [R12 + 0x130],0x0
/* 0527d8ad */  MOV R13,qword ptr [RSP + 0x10]
/* 0527d8b2 */  JNZ 0x0527dbef
/* 0527d8b8 */  MOV EBP,0x8
/* 0527d8bd */  CMP byte ptr [RSP + 0x28],0x0
/* 0527d8c2 */  JNZ 0x0527db48
/* 0527d8c8 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0527d8cd */  MOV RAX,qword ptr [RAX + 0x28]
/* 0527d8d1 */  CMP word ptr [RAX + 0xa8],0x0
/* 0527d8d9 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0527d8de */  JNS 0x0527db4d
/* 0527d8e4 */  MOV RAX,qword ptr [R13]
/* 0527d8e8 */  MOV RDI,R13
/* 0527d8eb */  MOV ESI,0x10
/* 0527d8f0 */  CALL qword ptr [RAX + 0x18]
/* 0527d8f3 */  MOV R12,qword ptr [RSP + 0x30]
/* 0527d8f8 */  MOV EBP,EAX
/* 0527d8fa */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527d8ff */  MOVSX EAX,word ptr [RAX + 0xa8]
/* 0527d906 */  ADD EAX,0x6
/* 0527d909 */  MOV ESI,EAX
/* 0527d90b */  NEG ESI
/* 0527d90d */  CMOVS ESI,EAX
/* 0527d910 */  MOV RAX,qword ptr [R13]
/* 0527d914 */  MOV RDI,R13
/* 0527d917 */  CALL qword ptr [RAX + 0x18]
/* 0527d91a */  MOV R15D,EAX
/* 0527d91d */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527d922 */  MOVSX R14D,word ptr [RAX + 0xa8]
/* 0527d92a */  MOV RAX,qword ptr [R13]
/* 0527d92e */  MOV RDI,R13
/* 0527d931 */  MOV ESI,0x10
/* 0527d936 */  CALL qword ptr [RAX + 0x18]
/* 0527d939 */  MOV RCX,qword ptr [RSP + 0x70]
/* 0527d93e */  MOV EBX,ECX
/* 0527d940 */  OR EBX,0x8
/* 0527d943 */  MOV RCX,qword ptr [RSP + 0x20]
/* 0527d948 */  MOV EDX,ECX
/* 0527d94a */  OR EDX,0x8
/* 0527d94d */  LEA RDI,[R12 + 0x1b0]
/* 0527d955 */  ADD EBP,EBX
/* 0527d957 */  LEA ECX,[R15 + R14*0x1]
/* 0527d95b */  ADD ECX,0x6
/* 0527d95e */  MOV dword ptr [RSP + 0x4c],EDX
/* 0527d962 */  ADD EAX,EDX
/* 0527d964 */  MOV dword ptr [RSP + 0xa0],EBP
/* 0527d96b */  MOV dword ptr [RSP + 0xa4],ECX
/* 0527d972 */  MOV dword ptr [RSP + 0xa8],EAX
/* 0527d979 */  LEA RSI,[RSP + 0x2e0]
/* 0527d981 */  LEA RDX,[RSP + 0xa0]
/* 0527d989 */  MOV qword ptr [RSP + 0x28],RDI
/* 0527d98e */  MOV RCX,R13
/* 0527d991 */  CALL 0x052d8680
/* 0527d996 */  MOV RAX,qword ptr [R13]
/* 0527d99a */  MOV RDI,R13
/* 0527d99d */  MOV ESI,0x10
/* 0527d9a2 */  CALL qword ptr [RAX + 0x18]
/* 0527d9a5 */  MOV EBP,EAX
/* 0527d9a7 */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527d9ac */  MOVSX EAX,word ptr [RAX + 0xa8]
/* 0527d9b3 */  ADD EAX,0x6
/* 0527d9b6 */  MOV ESI,EAX
/* 0527d9b8 */  NEG ESI
/* 0527d9ba */  CMOVS ESI,EAX
/* 0527d9bd */  MOV RAX,qword ptr [R13]
/* 0527d9c1 */  MOV RDI,R13
/* 0527d9c4 */  CALL qword ptr [RAX + 0x18]
/* 0527d9c7 */  MOV R14D,EAX
/* 0527d9ca */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527d9cf */  MOVSX R15D,word ptr [RAX + 0xa8]
/* 0527d9d7 */  MOV RAX,qword ptr [R13]
/* 0527d9db */  MOV RDI,R13
/* 0527d9de */  MOV ESI,0x10
/* 0527d9e3 */  CALL qword ptr [RAX + 0x18]
/* 0527d9e6 */  ADD EBP,EBX
/* 0527d9e8 */  LEA ECX,[R14 + R15*0x1]
/* 0527d9ec */  ADD ECX,0x6
/* 0527d9ef */  ADD EAX,dword ptr [RSP + 0x4c]
/* 0527d9f3 */  MOV dword ptr [RSP + 0xa0],EBP
/* 0527d9fa */  MOV dword ptr [RSP + 0xa4],ECX
/* 0527da01 */  MOV dword ptr [RSP + 0xa8],EAX
/* 0527da08 */  LEA RSI,[RSP + 0x2e0]
/* 0527da10 */  LEA RDX,[RSP + 0xa0]
/* 0527da18 */  MOV RDI,qword ptr [RSP + 0x28]
/* 0527da1d */  MOV RCX,R13
/* 0527da20 */  CALL 0x052d8680
/* 0527da25 */  MOV RAX,qword ptr [R13]
/* 0527da29 */  MOV RDI,R13
/* 0527da2c */  MOV ESI,0x10
/* 0527da31 */  CALL qword ptr [RAX + 0x18]
/* 0527da34 */  MOV EBP,EAX
/* 0527da36 */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527da3b */  MOVSX EAX,word ptr [RAX + 0xa8]
/* 0527da42 */  ADD EAX,0x6
/* 0527da45 */  MOV ESI,EAX
/* 0527da47 */  NEG ESI
/* 0527da49 */  CMOVS ESI,EAX
/* 0527da4c */  MOV RAX,qword ptr [R13]
/* 0527da50 */  MOV RDI,R13
/* 0527da53 */  CALL qword ptr [RAX + 0x18]
/* 0527da56 */  MOV R14D,EAX
/* 0527da59 */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527da5e */  MOVSX R15D,word ptr [RAX + 0xa8]
/* 0527da66 */  MOV RAX,qword ptr [R13]
/* 0527da6a */  MOV RDI,R13
/* 0527da6d */  MOV ESI,0x10
/* 0527da72 */  CALL qword ptr [RAX + 0x18]
/* 0527da75 */  ADD EBP,EBX
/* 0527da77 */  LEA ECX,[R14 + R15*0x1]
/* 0527da7b */  ADD ECX,0x6
/* 0527da7e */  ADD EAX,dword ptr [RSP + 0x4c]
/* 0527da82 */  MOV dword ptr [RSP + 0xa0],EBP
/* 0527da89 */  MOV dword ptr [RSP + 0xa4],ECX
/* 0527da90 */  MOV dword ptr [RSP + 0xa8],EAX
/* 0527da97 */  LEA RSI,[RSP + 0x2e0]
/* 0527da9f */  LEA RDX,[RSP + 0xa0]
/* 0527daa7 */  MOV RDI,qword ptr [RSP + 0x28]
/* 0527daac */  MOV RCX,R13
/* 0527daaf */  CALL 0x052d8680
/* 0527dab4 */  MOV RAX,qword ptr [R13]
/* 0527dab8 */  MOV RDI,R13
/* 0527dabb */  MOV ESI,0x10
/* 0527dac0 */  CALL qword ptr [RAX + 0x18]
/* 0527dac3 */  MOV EBP,EAX
/* 0527dac5 */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527daca */  MOVSX EAX,word ptr [RAX + 0xa8]
/* 0527dad1 */  ADD EAX,0x6
/* 0527dad4 */  MOV ESI,EAX
/* 0527dad6 */  NEG ESI
/* 0527dad8 */  CMOVS ESI,EAX
/* 0527dadb */  MOV RAX,qword ptr [R13]
/* 0527dadf */  MOV RDI,R13
/* 0527dae2 */  CALL qword ptr [RAX + 0x18]
/* 0527dae5 */  MOV R14D,EAX
/* 0527dae8 */  MOV RAX,qword ptr [R12 + 0x28]
/* 0527daed */  MOVSX R15D,word ptr [RAX + 0xa8]
/* 0527daf5 */  MOV RAX,qword ptr [R13]
/* 0527daf9 */  MOV RDI,R13
/* 0527dafc */  MOV ESI,0x10
/* 0527db01 */  CALL qword ptr [RAX + 0x18]
/* 0527db04 */  ADD EBP,EBX
/* 0527db06 */  LEA ECX,[R14 + R15*0x1]
/* 0527db0a */  ADD ECX,0x6
/* 0527db0d */  ADD EAX,dword ptr [RSP + 0x4c]
/* 0527db11 */  MOV dword ptr [RSP + 0xa0],EBP
/* 0527db18 */  MOV dword ptr [RSP + 0xa4],ECX
/* 0527db1f */  MOV dword ptr [RSP + 0xa8],EAX
/* 0527db26 */  LEA RSI,[RSP + 0x2e0]
/* 0527db2e */  LEA RDX,[RSP + 0xa0]
/* 0527db36 */  MOV RDI,qword ptr [RSP + 0x28]
/* 0527db3b */  MOV RCX,R13
/* 0527db3e */  CALL 0x052d8680
/* 0527db43 */  MOV EBP,0xa
/* 0527db48 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0527db4d */  MOV R15D,EAX
/* 0527db50 */  OR R15D,0x8
/* 0527db54 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0527db59 */  MOV R12D,EAX
/* 0527db5c */  OR R12D,0x8
/* 0527db60 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0527db65 */  ADD RAX,0x1b0
/* 0527db6b */  MOV qword ptr [RSP + 0x28],RAX
/* 0527db70 */  MOV RAX,qword ptr [R13]
/* 0527db74 */  MOV RDI,R13
/* 0527db77 */  MOV ESI,0x10
/* 0527db7c */  CALL qword ptr [RAX + 0x18]
/* 0527db7f */  MOV EBX,EAX
/* 0527db81 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0527db86 */  MOV RAX,qword ptr [RDI]
/* 0527db89 */  CALL qword ptr [RAX + 0x1d0]
/* 0527db8f */  MOV R13,qword ptr [RSP + 0x10]
/* 0527db94 */  MOV RCX,qword ptr [R13]
/* 0527db98 */  MOV RDI,R13
/* 0527db9b */  MOV ESI,EAX
/* 0527db9d */  CALL qword ptr [RCX + 0x18]
/* 0527dba0 */  MOV R14D,EAX
/* 0527dba3 */  MOV RAX,qword ptr [R13]
/* 0527dba7 */  MOV RDI,R13
/* 0527dbaa */  MOV ESI,0x10
/* 0527dbaf */  CALL qword ptr [RAX + 0x18]
/* 0527dbb2 */  ADD EBX,R15D
/* 0527dbb5 */  ADD EAX,R12D
/* 0527dbb8 */  MOV dword ptr [RSP + 0xa0],EBX
/* 0527dbbf */  MOV dword ptr [RSP + 0xa4],R14D
/* 0527dbc7 */  MOV dword ptr [RSP + 0xa8],EAX
/* 0527dbce */  MOV RDI,qword ptr [RSP + 0x28]
/* 0527dbd3 */  LEA RSI,[RSP + 0x2e0]
/* 0527dbdb */  LEA RDX,[RSP + 0xa0]
/* 0527dbe3 */  MOV RCX,R13
/* 0527dbe6 */  CALL 0x052d8680
/* 0527dbeb */  DEC EBP
/* 0527dbed */  JNZ 0x0527db70
/* 0527dbef */  MOV RDI,qword ptr [RSP + 0x308]
/* 0527dbf7 */  MOV RAX,qword ptr [RDI]
/* 0527dbfa */  CALL qword ptr [RAX + 0x568]
/* 0527dc00 */  MOV R14,qword ptr [RSP + 0x30]
/* 0527dc05 */  MOV R15,qword ptr [RSP + 0x98]
/* 0527dc0d */  MOV R12,qword ptr [RSP + 0x70]
/* 0527dc12 */  CMP byte ptr [RAX + 0x4b9],0x1
/* 0527dc19 */  JNZ 0x0527dcec
/* 0527dc1f */  MOV RDI,qword ptr [RSP + 0x308]
/* 0527dc27 */  MOV RAX,qword ptr [RDI]
/* 0527dc2a */  CALL qword ptr [RAX + 0x568]
/* 0527dc30 */  CMP byte ptr [RAX + 0x4ba],0x0
/* 0527dc37 */  JNZ 0x0527dcec
/* 0527dc3d */  MOV word ptr [RSP + 0xa8],0x101
/* 0527dc47 */  MOV RAX,qword ptr [0x0f6b3a90]
/* 0527dc4e */  MOV qword ptr [RSP + 0xb0],RAX
/* 0527dc56 */  MOV qword ptr [RSP + 0xb8],0x0
/* 0527dc62 */  LEA RAX,[0xf474ec0]
/* 0527dc69 */  MOV qword ptr [RSP + 0xa0],RAX
/* 0527dc71 */  MOV RDI,qword ptr [R14 + 0x20]
/* 0527dc75 */  MOV RAX,qword ptr [RDI]
/* 0527dc78 */  CALL qword ptr [RAX + 0x568]
/* 0527dc7e */  MOV RBX,RAX
/* 0527dc81 */  LEA RDI,[RAX + 0x518]
/* 0527dc88 */  LEA RSI,[0xf71d600]
/* 0527dc8f */  CALL 0x0d2279e0
/* 0527dc94 */  TEST RAX,RAX
/* 0527dc97 */  JNZ 0x0527dcb8
/* 0527dc99 */  ADD RBX,0x4f0
/* 0527dca0 */  LEA RSI,[0xf71d600]
/* 0527dca7 */  MOV RDI,RBX
/* 0527dcaa */  CALL 0x0d2279e0
/* 0527dcaf */  TEST RAX,RAX
/* 0527dcb2 */  JZ 0x0527e668
/* 0527dcb8 */  LEA RDX,[RAX + 0x38]
/* 0527dcbc */  XOR ECX,ECX
/* 0527dcbe */  CMP dword ptr [RAX + 0x50],0x6
/* 0527dcc2 */  CMOVZ RCX,RDX
/* 0527dcc6 */  TEST RCX,RCX
/* 0527dcc9 */  LEA RDX,[0x1de6224]
/* 0527dcd0 */  CMOVNZ RDX,RCX
/* 0527dcd4 */  LEA RDI,[RSP + 0xa0]
/* 0527dcdc */  LEA RSI,[RSP + 0x2e0]
/* 0527dce4 */  MOV RCX,R13
/* 0527dce7 */  CALL 0x0d50a850
/* 0527dcec */  MOV EBX,dword ptr [R15 + 0x50]
/* 0527dcf0 */  MOV EBP,dword ptr [R15 + 0x54]
/* 0527dcf4 */  MOV RDI,qword ptr [R14 + 0x20]
/* 0527dcf8 */  MOV RAX,qword ptr [RDI]
/* 0527dcfb */  CALL qword ptr [RAX + 0x438]
/* 0527dd01 */  MOV RCX,qword ptr [RSP + 0x88]
/* 0527dd09 */  MOV RCX,qword ptr [RCX + 0xa2208]
/* 0527dd10 */  CMP byte ptr [RCX + 0x9e7],0x1
/* 0527dd17 */  JNZ 0x0527ddad
/* 0527dd1d */  IMUL EBP,dword ptr [RSP + 0x128]
/* 0527dd25 */  IMUL EBX,dword ptr [RSP + 0x12c]
/* 0527dd2d */  ADD EBX,EBP
/* 0527dd2f */  XOR EAX,EBX
/* 0527dd31 */  MOV dword ptr [RCX + 0x8],EAX
/* 0527dd34 */  MOV word ptr [RCX + 0x9e4],0x0
/* 0527dd3d */  MOV dword ptr [RCX + 0x9d4],0x0
/* 0527dd47 */  MOV qword ptr [RCX + 0x9d8],0x0
/* 0527dd52 */  MOV dword ptr [RCX + 0xc],EAX
/* 0527dd55 */  MOV EDX,0x5
/* 0527dd5a */  NOP word ptr [RAX + RAX*0x1]
/* 0527dd60 */  MOV ESI,EAX
/* 0527dd62 */  SHR ESI,0x1e
/* 0527dd65 */  XOR ESI,EAX
/* 0527dd67 */  IMUL EAX,ESI,0x6c078965
/* 0527dd6d */  ADD RAX,RDX
/* 0527dd70 */  ADD RAX,-0x4
/* 0527dd74 */  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
/* 0527dd78 */  CMP RDX,0x191
/* 0527dd7f */  JZ 0x0527dd9c
/* 0527dd81 */  MOV ESI,EAX
/* 0527dd83 */  SHR ESI,0x1e
/* 0527dd86 */  XOR ESI,EAX
/* 0527dd88 */  IMUL EAX,ESI,0x6c078965
/* 0527dd8e */  ADD EAX,EDX
/* 0527dd90 */  ADD EAX,-0x3
/* 0527dd93 */  MOV dword ptr [RCX + RDX*0x4],EAX
/* 0527dd96 */  ADD RDX,0x2
/* 0527dd9a */  JMP 0x0527dd60
/* 0527dd9c */  MOV RAX,0x18e00000270
/* 0527dda6 */  MOV qword ptr [RCX + 0x9cc],RAX
/* 0527ddad */  MOV RDX,qword ptr [RSP + 0x38]
/* 0527ddb2 */  MOV RAX,qword ptr [R14]
/* 0527ddb5 */  LEA RCX,[RSP + 0x2e0]
/* 0527ddbd */  MOV RDI,R14
/* 0527ddc0 */  MOV RSI,qword ptr [RSP + 0x90]
/* 0527ddc8 */  MOV R8,R13
/* 0527ddcb */  CALL qword ptr [RAX + 0x1c0]
/* 0527ddd1 */  LEA RDI,[0xf6ff9e0]
/* 0527ddd8 */  LEA RSI,[0xf712e90]
/* 0527dddf */  MOV EDX,0x1
/* 0527dde4 */  CALL 0x0cc41df0
/* 0527dde9 */  MOV qword ptr [RSP + 0x28],RAX
/* 0527ddee */  LEA RDI,[0xf6ff9e0]
/* 0527ddf5 */  LEA RSI,[0xf715218]
/* 0527ddfc */  MOV EDX,0x1
/* 0527de01 */  CALL 0x0cc41df0
/* 0527de06 */  MOV qword ptr [RSP + 0x88],RAX
/* 0527de0e */  MOV RBP,-0x100000000
/* 0527de18 */  MOV EAX,R12D
/* 0527de1b */  MOV qword ptr [RSP + 0x90],RAX
/* 0527de23 */  XOR ECX,ECX
/* 0527de25 */  LEA R15,[RSP + 0x2e0]
/* 0527de2d */  LEA R12,[RSP + 0xa0]
/* 0527de35 */  JMP 0x0527de55
/* 0527de40 */  MOV RCX,qword ptr [RSP + 0x98]
/* 0527de48 */  INC RCX
/* 0527de4b */  CMP RCX,0x10
/* 0527de4f */  JZ 0x0527e081
/* 0527de55 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0527de5d */  ADD RAX,RCX
/* 0527de60 */  MOV EBX,EAX
/* 0527de62 */  SAR EBX,0x4
/* 0527de65 */  MOV qword ptr [RSP + 0x98],RCX
/* 0527de6d */  AND CL,0xf
/* 0527de70 */  MOV byte ptr [RSP + 0x30],CL
/* 0527de74 */  SHR RAX,0x20
/* 0527de78 */  MOV qword ptr [RSP + 0x10],RAX
/* 0527de7d */  XOR R13D,R13D
/* 0527de80 */  JMP 0x0527de99
/* 0527de90 */  INC R13D
/* 0527de93 */  CMP R13D,0x10
/* 0527de97 */  JZ 0x0527de40
/* 0527de99 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0527de9e */  ADD EAX,R13D
/* 0527dea1 */  MOV dword ptr [RSP + 0xa0],EBX
/* 0527dea8 */  SAR EAX,0x4
/* 0527deab */  MOV dword ptr [RSP + 0xa4],EAX
/* 0527deb2 */  MOV RAX,qword ptr [RSP + 0x2e0]
/* 0527deba */  MOV RDI,R15
/* 0527debd */  MOV RSI,R12
/* 0527dec0 */  CALL qword ptr [RAX + 0x148]
/* 0527dec6 */  TEST RAX,RAX
/* 0527dec9 */  JZ 0x0527df10
/* 0527decb */  MOV RCX,qword ptr [RAX + 0x30]
/* 0527decf */  MOV RDX,qword ptr [RSP + 0x10]
/* 0527ded4 */  SUB DX,word ptr [RCX + 0xa8]
/* 0527dedb */  MOVZX ECX,byte ptr [RSP + 0x30]
/* 0527dee0 */  MOV byte ptr [RSP + 0xa0],CL
/* 0527dee7 */  MOV byte ptr [RSP + 0xa1],R13B
/* 0527deef */  MOV word ptr [RSP + 0xa2],DX
/* 0527def7 */  MOV RDI,RAX
/* 0527defa */  MOV RSI,R12
/* 0527defd */  CALL 0x0cafbac0
/* 0527df02 */  JMP 0x0527df1c
/* 0527df10 */  MOV RAX,-0x1
/* 0527df17 */  MOV EDX,0xffffffff
/* 0527df1c */  MOV qword ptr [RSP + 0x78],RAX
/* 0527df21 */  MOV dword ptr [RSP + 0x80],EDX
/* 0527df28 */  MOV RCX,RAX
/* 0527df2b */  AND RCX,RBP
/* 0527df2e */  ADD RCX,RBP
/* 0527df31 */  MOV EAX,EAX
/* 0527df33 */  OR RAX,RCX
/* 0527df36 */  MOV qword ptr [RSP + 0x190],RAX
/* 0527df3e */  MOV dword ptr [RSP + 0x198],EDX
/* 0527df45 */  MOV RDI,R15
/* 0527df48 */  LEA RSI,[RSP + 0x190]
/* 0527df50 */  XOR EDX,EDX
/* 0527df52 */  CALL 0x0c902a10
/* 0527df57 */  TEST AL,AL
/* 0527df59 */  JZ 0x0527dfe0
/* 0527df5f */  XORPS XMM0,XMM0
/* 0527df62 */  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
/* 0527df6a */  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
/* 0527df72 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0527df7e */  MOV byte ptr [RSP + 0xc0],0x1
/* 0527df86 */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 0527df8b */  MOV qword ptr [RSP],R12
/* 0527df8f */  MOV RDI,R15
/* 0527df92 */  LEA RSI,[RSP + 0x190]
/* 0527df9a */  MOV RDX,qword ptr [RSP + 0x28]
/* 0527df9f */  MOV ECX,0x2
/* 0527dfa4 */  LEA R8,[RSP + 0x50]
/* 0527dfa9 */  XOR R9D,R9D
/* 0527dfac */  CALL 0x0c9d4820
/* 0527dfb1 */  MOV R14,qword ptr [RSP + 0x58]
/* 0527dfb6 */  TEST R14,R14
/* 0527dfb9 */  JZ 0x0527dfe0
/* 0527dfbb */  MOV RAX,-0x1
/* 0527dfc2 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0527dfc8 */  TEST RAX,RAX
/* 0527dfcb */  JNZ 0x0527dfe0
/* 0527dfcd */  MOV RAX,qword ptr [R14]
/* 0527dfd0 */  MOV RDI,R14
/* 0527dfd3 */  CALL qword ptr [RAX + 0x10]
/* 0527dfd6 */  MOV RDI,R14
/* 0527dfd9 */  CALL 0x0412c2d0
/* 0527dfde */  NOP
/* 0527dfe0 */  MOV RDI,R15
/* 0527dfe3 */  LEA RSI,[RSP + 0x78]
/* 0527dfe8 */  CALL 0x0c9028a0
/* 0527dfed */  TEST AL,AL
/* 0527dfef */  JZ 0x0527de90
/* 0527dff5 */  XORPS XMM0,XMM0
/* 0527dff8 */  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
/* 0527e000 */  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
/* 0527e008 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0527e014 */  MOV byte ptr [RSP + 0xc0],0x1
/* 0527e01c */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 0527e021 */  MOV qword ptr [RSP],R12
/* 0527e025 */  MOV RDI,R15
/* 0527e028 */  LEA RSI,[RSP + 0x78]
/* 0527e02d */  MOV RDX,qword ptr [RSP + 0x88]
/* 0527e035 */  MOV ECX,0x2
/* 0527e03a */  LEA R8,[RSP + 0x50]
/* 0527e03f */  XOR R9D,R9D
/* 0527e042 */  CALL 0x0c9d4820
/* 0527e047 */  MOV R14,qword ptr [RSP + 0x58]
/* 0527e04c */  TEST R14,R14
/* 0527e04f */  JZ 0x0527de90
/* 0527e055 */  MOV RAX,-0x1
/* 0527e05c */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0527e062 */  TEST RAX,RAX
/* 0527e065 */  JNZ 0x0527de90
/* 0527e06b */  MOV RAX,qword ptr [R14]
/* 0527e06e */  MOV RDI,R14
/* 0527e071 */  CALL qword ptr [RAX + 0x10]
/* 0527e074 */  MOV RDI,R14
/* 0527e077 */  CALL 0x0412c2d0
/* 0527e07c */  JMP 0x0527de90
/* 0527e081 */  MOV RAX,qword ptr [RSP + 0x38]
/* 0527e086 */  MOV qword ptr [RSP + 0x20],RAX
/* 0527e08b */  XOR R13D,R13D
/* 0527e08e */  LEA RBX,[RSP + 0x2e0]
/* 0527e096 */  LEA R14,[RSP + 0x50]
/* 0527e09b */  LEA R12,[0xf713f00]
/* 0527e0a2 */  JMP 0x0527e0c1
/* 0527e0b0 */  ADD R13,0xc
/* 0527e0b4 */  CMP R13,0x2d0
/* 0527e0bb */  JZ 0x0527e255
/* 0527e0c1 */  LEA RDX,[0x1641940]
/* 0527e0c8 */  MOV EAX,dword ptr [R13 + RDX*0x1]
/* 0527e0cd */  MOV ECX,dword ptr [R13 + RDX*0x1 + 0x4]
/* 0527e0d2 */  MOV RSI,qword ptr [RSP + 0x20]
/* 0527e0d7 */  ADD EAX,dword ptr [RSI + 0x38]
/* 0527e0da */  ADD ECX,dword ptr [RSI + 0x3c]
/* 0527e0dd */  MOV EDX,dword ptr [R13 + RDX*0x1 + 0x8]
/* 0527e0e2 */  ADD EDX,dword ptr [RSI + 0x40]
/* 0527e0e5 */  SHL RCX,0x20
/* 0527e0e9 */  OR RAX,RCX
/* 0527e0ec */  MOV qword ptr [RSP + 0x50],RAX
/* 0527e0f1 */  MOV dword ptr [RSP + 0x58],EDX
/* 0527e0f5 */  MOV RAX,qword ptr [RSP + 0x2e0]
/* 0527e0fd */  MOV RDI,RBX
/* 0527e100 */  MOV RSI,R14
/* 0527e103 */  CALL qword ptr [RAX + 0x138]
/* 0527e109 */  TEST RAX,RAX
/* 0527e10c */  JZ 0x0527e150
/* 0527e10e */  MOV ECX,dword ptr [RSP + 0x50]
/* 0527e112 */  MOV EDX,dword ptr [RSP + 0x58]
/* 0527e116 */  AND ECX,0xf
/* 0527e119 */  SHL EDX,0x4
/* 0527e11c */  MOVZX EDX,DL
/* 0527e11f */  OR EDX,ECX
/* 0527e121 */  MOV RCX,qword ptr [RAX + 0x30]
/* 0527e125 */  MOVZX ECX,word ptr [RCX + 0xa8]
/* 0527e12c */  ADD CX,word ptr [RAX + RDX*0x2 + 0xbd0]
/* 0527e134 */  MOVSX EBP,CX
/* 0527e137 */  CMP dword ptr [RSP + 0x54],EBP
/* 0527e13b */  JGE 0x0527e0b0
/* 0527e141 */  JMP 0x0527e165
/* 0527e150 */  MOVZX ECX,word ptr [RSP + 0x322]
/* 0527e158 */  MOVSX EBP,CX
/* 0527e15b */  CMP dword ptr [RSP + 0x54],EBP
/* 0527e15f */  JGE 0x0527e0b0
/* 0527e165 */  MOV R15B,0x1
/* 0527e168 */  JMP 0x0527e188
/* 0527e170 */  OR AL,R15B
/* 0527e173 */  MOV R15D,EAX
/* 0527e176 */  MOV EAX,dword ptr [RSP + 0x54]
/* 0527e17a */  INC EAX
/* 0527e17c */  MOV dword ptr [RSP + 0x54],EAX
/* 0527e180 */  CMP EAX,EBP
/* 0527e182 */  JGE 0x0527e0b0
/* 0527e188 */  MOV RAX,qword ptr [RSP + 0x2e0]
/* 0527e190 */  MOV RDI,RBX
/* 0527e193 */  MOV RSI,R14
/* 0527e196 */  CALL qword ptr [RAX + 0x10]
/* 0527e199 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0527e19d */  MOV RAX,qword ptr [RAX + 0xc8]
/* 0527e1a4 */  CMP RAX,qword ptr [0x0f713f00]
/* 0527e1ab */  SETNZ AL
/* 0527e1ae */  MOV ECX,R15D
/* 0527e1b1 */  NOT CL
/* 0527e1b3 */  OR CL,AL
/* 0527e1b5 */  TEST CL,0x1
/* 0527e1b8 */  JNZ 0x0527e170
/* 0527e1ba */  LEA RDI,[0xf6ff9e0]
/* 0527e1c1 */  MOV RSI,R12
/* 0527e1c4 */  MOV EDX,0x1
/* 0527e1c9 */  CALL 0x0cc41df0
/* 0527e1ce */  XORPS XMM0,XMM0
/* 0527e1d1 */  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
/* 0527e1d9 */  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
/* 0527e1e1 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0527e1ed */  MOV byte ptr [RSP + 0xc0],0x1
/* 0527e1f5 */  MOV R10,qword ptr [RSP + 0x2e0]
/* 0527e1fd */  MOV RDI,RBX
/* 0527e200 */  MOV RSI,R14
/* 0527e203 */  MOV RDX,RAX
/* 0527e206 */  XOR ECX,ECX
/* 0527e208 */  XOR R8D,R8D
/* 0527e20b */  LEA R9,[RSP + 0xa0]
/* 0527e213 */  CALL qword ptr [R10 + 0xf8]
/* 0527e21a */  LEA RDI,[0xf6ff9e0]
/* 0527e221 */  MOV RSI,R12
/* 0527e224 */  MOV EDX,0x1
/* 0527e229 */  CALL 0x0cc41df0
/* 0527e22e */  XOR R15D,R15D
/* 0527e231 */  LEA RDI,[RSP + 0x260]
/* 0527e239 */  MOV RSI,RBX
/* 0527e23c */  MOV RDX,R14
/* 0527e23f */  MOV RCX,RAX
/* 0527e242 */  MOV R8D,0x1
/* 0527e248 */  XOR R9D,R9D
/* 0527e24b */  CALL 0x0c9d2c20
/* 0527e250 */  JMP 0x0527e176
/* 0527e255 */  MOV RDI,qword ptr [RSP + 0x38]
/* 0527e25a */  CALL 0x0cafcba0
/* 0527e25f */  TEST AL,AL
/* 0527e261 */  JZ 0x0527e281
/* 0527e263 */  MOV RDI,qword ptr [RSP + 0x38]
/* 0527e268 */  XOR ESI,ESI
/* 0527e26a */  CALL 0x0cafad60
/* 0527e26f */  MOV RDI,qword ptr [RSP + 0x38]
/* 0527e274 */  LEA RSI,[RSP + 0x2e0]
/* 0527e27c */  CALL 0x0cafca30
/* 0527e281 */  MOV RAX,qword ptr [RSP + 0x38]
/* 0527e286 */  MOV RSI,qword ptr [RAX + 0xf8]
/* 0527e28d */  LEA RDI,[RSP + 0x260]
/* 0527e295 */  CALL 0x0c9e7730
/* 0527e29a */  MOV RAX,qword ptr [RSP + 0x2e0]
/* 0527e2a2 */  LEA RDI,[RSP + 0x2e0]
/* 0527e2aa */  CALL qword ptr [RAX + 0x150]
/* 0527e2b0 */  MOV RCX,qword ptr [RAX]
/* 0527e2b3 */  MOV RDI,RAX
/* 0527e2b6 */  CALL qword ptr [RCX + 0xc38]
/* 0527e2bc */  MOV EBX,EAX
/* 0527e2be */  MOV RDI,qword ptr [RSP + 0x308]
/* 0527e2c6 */  MOV RAX,qword ptr [RDI]
/* 0527e2c9 */  CALL qword ptr [RAX + 0x9f0]
/* 0527e2cf */  XOR AL,0x1
/* 0527e2d1 */  OR BL,AL
/* 0527e2d3 */  CMP BL,0x1
/* 0527e2d6 */  JNZ 0x0527e349
/* 0527e2d8 */  MOV RAX,qword ptr [RSP + 0x278]
/* 0527e2e0 */  CMP RAX,qword ptr [RSP + 0x270]
/* 0527e2e8 */  JZ 0x0527e349
/* 0527e2ea */  XOR R12D,R12D
/* 0527e2ed */  LEA RBX,[0x1d38818]
/* 0527e2f4 */  LEA R14,[RSP + 0x260]
/* 0527e2fc */  LEA R15,[RSP + 0x2e0]
/* 0527e304 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0527e310 */  MOV RDI,R14
/* 0527e313 */  MOV RSI,R15
/* 0527e316 */  MOV RDX,RBX
/* 0527e319 */  MOV ECX,0x7fffffff
/* 0527e31e */  MOV R8D,0x1
/* 0527e324 */  CALL 0x0c9e4770
/* 0527e329 */  MOV RAX,qword ptr [RSP + 0x278]
/* 0527e331 */  CMP RAX,qword ptr [RSP + 0x270]
/* 0527e339 */  JZ 0x0527e349
/* 0527e33b */  LEA RAX,[R12 + 0x1]
/* 0527e340 */  CMP R12,0x7f
/* 0527e344 */  MOV R12,RAX
/* 0527e347 */  JC 0x0527e310
/* 0527e349 */  MOV RAX,qword ptr [RSP + 0x2e0]
/* 0527e351 */  LEA RDI,[RSP + 0x2e0]
/* 0527e359 */  CALL qword ptr [RAX + 0x150]
/* 0527e35f */  MOV RCX,qword ptr [RAX]
/* 0527e362 */  MOV RDI,RAX
/* 0527e365 */  CALL qword ptr [RCX + 0xc38]
/* 0527e36b */  MOV EBX,EAX
/* 0527e36d */  MOV RDI,qword ptr [RSP + 0x308]
/* 0527e375 */  MOV RAX,qword ptr [RDI]
/* 0527e378 */  CALL qword ptr [RAX + 0x9f0]
/* 0527e37e */  XOR AL,0x1
/* 0527e380 */  OR BL,AL
/* 0527e382 */  CMP BL,0x1
/* 0527e385 */  JNZ 0x0527e3f9
/* 0527e387 */  MOV RAX,qword ptr [RSP + 0x218]
/* 0527e38f */  CMP RAX,qword ptr [RSP + 0x210]
/* 0527e397 */  JZ 0x0527e3f9
/* 0527e399 */  XOR R12D,R12D
/* 0527e39c */  LEA RBX,[0x1d38818]
/* 0527e3a3 */  LEA R14,[RSP + 0x200]
/* 0527e3ab */  LEA R15,[RSP + 0x2e0]
/* 0527e3b3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0527e3c0 */  MOV RDI,R14
/* 0527e3c3 */  MOV RSI,R15
/* 0527e3c6 */  MOV RDX,RBX
/* 0527e3c9 */  MOV ECX,0x7fffffff
/* 0527e3ce */  MOV R8D,0x1
/* 0527e3d4 */  CALL 0x0c9e4770
/* 0527e3d9 */  MOV RAX,qword ptr [RSP + 0x218]
/* 0527e3e1 */  CMP RAX,qword ptr [RSP + 0x210]
/* 0527e3e9 */  JZ 0x0527e3f9
/* 0527e3eb */  LEA RAX,[R12 + 0x1]
/* 0527e3f0 */  CMP R12,0x7f
/* 0527e3f4 */  MOV R12,RAX
/* 0527e3f7 */  JC 0x0527e3c0
/* 0527e3f9 */  MOV RAX,qword ptr [RSP + 0x38]
/* 0527e3fe */  MOV RDI,qword ptr [RAX + 0xf8]
/* 0527e405 */  LEA RSI,[RSP + 0x260]
/* 0527e40d */  CALL 0x0c9e7730
/* 0527e412 */  MOV RAX,qword ptr [RSP + 0x38]
/* 0527e417 */  MOV RDI,qword ptr [RAX + 0x100]
/* 0527e41e */  LEA RSI,[RSP + 0x200]
/* 0527e426 */  CALL 0x0c9e7730
/* 0527e42b */  MOV RDI,qword ptr [RSP + 0x38]
/* 0527e430 */  MOV RBX,qword ptr [RDI + 0xfd0]
/* 0527e437 */  MOV qword ptr [RDI + 0xfd0],0x0
/* 0527e442 */  TEST RBX,RBX
/* 0527e445 */  JZ 0x0527e471
/* 0527e447 */  MOV RDI,qword ptr [RBX]
/* 0527e44a */  TEST RDI,RDI
/* 0527e44d */  JZ 0x0527e45f
/* 0527e44f */  MOV qword ptr [RBX + 0x8],RDI
/* 0527e453 */  MOV RSI,qword ptr [RBX + 0x10]
/* 0527e457 */  SUB RSI,RDI
/* 0527e45a */  CALL 0x0412a280
/* 0527e45f */  MOV ESI,0x18
/* 0527e464 */  MOV RDI,RBX
/* 0527e467 */  CALL 0x0412a280
/* 0527e46c */  MOV RDI,qword ptr [RSP + 0x38]
/* 0527e471 */  CALL 0x0cafd630
/* 0527e476 */  MOV RDI,qword ptr [RSP + 0x240]
/* 0527e47e */  TEST RDI,RDI
/* 0527e481 */  JZ 0x0527e49b
/* 0527e483 */  MOV qword ptr [RSP + 0x248],RDI
/* 0527e48b */  MOV RSI,qword ptr [RSP + 0x250]
/* 0527e493 */  SUB RSI,RDI
/* 0527e496 */  CALL 0x0412a280
/* 0527e49b */  MOV RDI,qword ptr [RSP + 0x228]
/* 0527e4a3 */  TEST RDI,RDI
/* 0527e4a6 */  MOVZX EBP,byte ptr [RSP + 0x1f]
/* 0527e4ab */  JZ 0x0527e4c5
/* 0527e4ad */  MOV qword ptr [RSP + 0x230],RDI
/* 0527e4b5 */  MOV RSI,qword ptr [RSP + 0x238]
/* 0527e4bd */  SUB RSI,RDI
/* 0527e4c0 */  CALL 0x0412a280
/* 0527e4c5 */  MOV RDI,qword ptr [RSP + 0x210]
/* 0527e4cd */  TEST RDI,RDI
/* 0527e4d0 */  JZ 0x0527e4ea
/* 0527e4d2 */  MOV qword ptr [RSP + 0x218],RDI
/* 0527e4da */  MOV RSI,qword ptr [RSP + 0x220]
/* 0527e4e2 */  SUB RSI,RDI
/* 0527e4e5 */  CALL 0x0412a280
/* 0527e4ea */  MOV RDI,qword ptr [RSP + 0x2a0]
/* 0527e4f2 */  TEST RDI,RDI
/* 0527e4f5 */  JZ 0x0527e50f
/* 0527e4f7 */  MOV qword ptr [RSP + 0x2a8],RDI
/* 0527e4ff */  MOV RSI,qword ptr [RSP + 0x2b0]
/* 0527e507 */  SUB RSI,RDI
/* 0527e50a */  CALL 0x0412a280
/* 0527e50f */  MOV RDI,qword ptr [RSP + 0x288]
/* 0527e517 */  TEST RDI,RDI
/* 0527e51a */  JZ 0x0527e534
/* 0527e51c */  MOV qword ptr [RSP + 0x290],RDI
/* 0527e524 */  MOV RSI,qword ptr [RSP + 0x298]
/* 0527e52c */  SUB RSI,RDI
/* 0527e52f */  CALL 0x0412a280
/* 0527e534 */  MOV RDI,qword ptr [RSP + 0x270]
/* 0527e53c */  TEST RDI,RDI
/* 0527e53f */  JZ 0x0527e559
/* 0527e541 */  MOV qword ptr [RSP + 0x278],RDI
/* 0527e549 */  MOV RSI,qword ptr [RSP + 0x280]
/* 0527e551 */  SUB RSI,RDI
/* 0527e554 */  CALL 0x0412a280
/* 0527e559 */  LEA RDI,[RSP + 0x2e0]
/* 0527e561 */  CALL 0x0c9d0f40
/* 0527e566 */  LEA RAX,[0xf3f24c8]
/* 0527e56d */  MOV qword ptr [RSP + 0x450],RAX
/* 0527e575 */  LEA RDI,[RSP + 0x4d0]
/* 0527e57d */  CALL 0x052a3830
/* 0527e582 */  LEA RDI,[RSP + 0x450]
/* 0527e58a */  CALL 0x0cb3ae10
/* 0527e58f */  MOVZX EAX,byte ptr [RSP + 0x2d8]
/* 0527e597 */  TEST AL,0x1
/* 0527e599 */  JZ 0x0527e627
/* 0527e59f */  MOV R14,qword ptr [RSP + 0x2c0]
/* 0527e5a7 */  TEST R14,R14
/* 0527e5aa */  JZ 0x0527e627
/* 0527e5ac */  MOV R15,qword ptr [RSP + 0x2c8]
/* 0527e5b4 */  MOV RDI,R14
/* 0527e5b7 */  CMP R14,R15
/* 0527e5ba */  JNZ 0x0527e5c9
/* 0527e5bc */  JMP 0x0527e60f
/* 0527e5c0 */  ADD R15,-0x20
/* 0527e5c4 */  CMP R15,R14
/* 0527e5c7 */  JZ 0x0527e607
/* 0527e5c9 */  CMP byte ptr [R15 + -0x8],0x1
/* 0527e5ce */  JNZ 0x0527e5d9
/* 0527e5d0 */  MOV RDI,qword ptr [R15 + -0x10]
/* 0527e5d4 */  CALL 0x0412d6b0
/* 0527e5d9 */  MOV RBX,qword ptr [R15 + -0x18]
/* 0527e5dd */  TEST RBX,RBX
/* 0527e5e0 */  JZ 0x0527e5c0
/* 0527e5e2 */  MOV RAX,-0x1
/* 0527e5e9 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0527e5ef */  TEST RAX,RAX
/* 0527e5f2 */  JNZ 0x0527e5c0
/* 0527e5f4 */  MOV RAX,qword ptr [RBX]
/* 0527e5f7 */  MOV RDI,RBX
/* 0527e5fa */  CALL qword ptr [RAX + 0x10]
/* 0527e5fd */  MOV RDI,RBX
/* 0527e600 */  CALL 0x0412c2d0
/* 0527e605 */  JMP 0x0527e5c0
/* 0527e607 */  MOV RDI,qword ptr [RSP + 0x2c0]
/* 0527e60f */  MOV qword ptr [RSP + 0x2c8],R14
/* 0527e617 */  MOV RSI,qword ptr [RSP + 0x2d0]
/* 0527e61f */  SUB RSI,RDI
/* 0527e622 */  CALL 0x0412a280
/* 0527e627 */  MOV RBX,qword ptr [RSP + 0x40]
/* 0527e62c */  TEST RBX,RBX
/* 0527e62f */  JZ 0x0527e654
/* 0527e631 */  MOV RAX,-0x1
/* 0527e638 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0527e63e */  TEST RAX,RAX
/* 0527e641 */  JNZ 0x0527e654
/* 0527e643 */  MOV RAX,qword ptr [RBX]
/* 0527e646 */  MOV RDI,RBX
/* 0527e649 */  CALL qword ptr [RAX + 0x10]
/* 0527e64c */  MOV RDI,RBX
/* 0527e64f */  CALL 0x0412c2d0
/* 0527e654 */  MOV EAX,EBP
/* 0527e656 */  ADD RSP,0x678
/* 0527e65d */  POP RBX
/* 0527e65e */  POP R12
/* 0527e660 */  POP R13
/* 0527e662 */  POP R14
/* 0527e664 */  POP R15
/* 0527e666 */  POP RBP
/* 0527e667 */  RET
/* 0527e668 */  XOR ECX,ECX
/* 0527e66a */  JMP 0x0527dcc6
