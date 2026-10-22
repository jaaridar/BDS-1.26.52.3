/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6248270 (ELF vaddr 0x6148270)
 * Label: callee-of:0x6146460
 * Body:  [[06248270, 06248436] [06248440, 06248a2a] [06248a30, 06248b54] [06248b60, 06248e8c] [06248e90, 06249343] [06249350, 06249589] [06249590, 0624972d] [06249730, 06249798] [062497a0, 062497b8] [062497c0, 0624980e] [06249810, 06249840] [06249850, 06249877] [06249880, 062498de] [062498e0, 06249970] [06249980, 06249adc] [06249ae0, 06249b42] [06249b50, 06249bcd] [06249bd0, 06249c57] [06249c60, 06249c85] [06249c90, 06249cde] [06249ce0, 06249d95] [06249da0, 06249e3d] [06249e40, 06249ea7] [06249eb0, 06249ec5] [06249ed0, 06249f1d] [06249f20, 06249f52] [06249f60, 06249f88] [06249f90, 06249fe9] [06249ff0, 0624a070] [0624a080, 0624a1dc] [0624a1e0, 0624a22d] [0624a230, 0624a2d0] [0624a2e0, 0624a43c] [0624a440, 0624a48b] [0624a490, 0624a60d] [0624a610, 0624a67a] [0624a680, 0624a698] [0624a6a0, 0624a6ed] [0624a6f0, 0624a720] [0624a730, 0624a757] [0624a760, 0624a809] [0624a810, 0624a851] [0624a860, 0624a9ac] [0624a9b0, 0624aa0b] [0624aa10, 0624aa9d] [0624aaa0, 0624ab1d] [0624ab20, 0624ab42] [0624ab50, 0624ac55] [0624ac60, 0624acfd] [0624ad00, 0624ad67] [0624ad70, 0624ad85] [0624ad90, 0624addd] [0624ade0, 0624ae12] [0624ae20, 0624ae48] [0624ae50, 0624aea9] [0624aeb0, 0624aeee] [0624aef0, 0624af31] [0624af40, 0624b08c] [0624b090, 0624b0dd] [0624b0e0, 0624b180] [0624b190, 0624b2ec] [0624b2f0, 0624b33e] [0624b340, 0624b404] [0624b410, 0624b475] [0624b480, 0624b576] [0624b580, 0624b5c9] [0624b5d0, 0624b66c] [0624b670, 0624b720] [0624b730, 0624b75c] [0624b760, 0624b93c] [0624b940, 0624b997] [0624b9a0, 0624babc] [0624bac0, 0624bb08] [0624bb10, 0624bba8] [0624bbb0, 0624bc08] [0624bc10, 0624bc51] [0624bc60, 0624bc81] [0624bc90, 0624c0f8] [0624c100, 0624c12d] [0624c130, 0624c22c] [0624c230, 0624c25d] [0624c260, 0624c3c2] [0624c3d0, 0624c416] [0624c420, 0624c77b] [0624c780, 0624c84c] [0624c850, 0624c897] [0624c8a0, 0624c8fe] [0624c900, 0624c959] [0624c960, 0624cac2] [0624cad0, 0624cbe3] [0624cbf0, 0624cd8c] [0624cd90, 0624cdb2] [0624cdc0, 0624d193] [0624d89c, 0624d952]]
 * Ghidra: FUN_06248270
 */


/* WARNING: Removing unreachable block (ram,0x06249706) */
/* WARNING: Removing unreachable block (ram,0x0624a5e3) */
/* WARNING: Removing unreachable block (ram,0x06248559) */
/* WARNING: Removing unreachable block (ram,0x0624856b) */
/* WARNING: Removing unreachable block (ram,0x0624857c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_06248270(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  byte ******ppppppbVar11;
  byte *****pppppbVar12;
  long *plVar13;
  undefined7 uVar22;
  byte *******pppppppbVar14;
  undefined1 auVar15 [8];
  byte *pbVar16;
  byte *******pppppppbVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar23;
  byte ******ppppppbVar24;
  byte *******pppppppbVar25;
  byte ******ppppppbVar26;
  ulong uVar27;
  long lVar28;
  byte ******ppppppbVar29;
  byte ******ppppppbVar30;
  long lVar31;
  byte *****pppppbVar32;
  long lVar33;
  byte *******pppppppbVar34;
  byte *******pppppppbVar35;
  long lVar36;
  byte *******pppppppbVar37;
  byte bVar38;
  bool bVar39;
  undefined1 uStack_6b1;
  undefined1 auStack_6a8 [8];
  undefined1 auStack_6a0 [4];
  undefined4 uStack_69c;
  undefined8 uStack_698;
  byte *******pppppppbStack_690;
  undefined8 uStack_688;
  byte *******pppppppbStack_680;
  undefined1 auStack_678 [8];
  byte *******pppppppbStack_670;
  byte *******pppppppbStack_668;
  long *plStack_658;
  uint uStack_64c;
  byte *******pppppppbStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  byte *******pppppppbStack_630;
  byte *******pppppppbStack_628;
  long lStack_620;
  byte *******pppppppbStack_618;
  byte *******pppppppbStack_610;
  long lStack_608;
  undefined1 auStack_600 [8];
  byte *******pppppppbStack_5f8;
  byte *******pppppppbStack_5f0;
  undefined1 uStack_5e8;
  undefined8 uStack_5e4;
  undefined1 uStack_5dc;
  byte *******pppppppbStack_5d8;
  byte *******pppppppbStack_5d0;
  byte *******pppppppbStack_5c8;
  byte *******pppppppbStack_5c0;
  byte *******pppppppbStack_5b0;
  byte *******pppppppbStack_5a8;
  uint uStack_59c;
  byte *******pppppppbStack_598;
  byte *******pppppppbStack_590;
  long lStack_588;
  undefined8 uStack_580;
  long lStack_578;
  byte *****pppppbStack_570;
  byte *******pppppppbStack_568;
  byte *******pppppppbStack_560;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  byte ******ppppppbStack_540;
  byte ******ppppppbStack_538;
  byte ******ppppppbStack_530;
  byte *pbStack_528;
  byte *******pppppppbStack_520;
  byte *******pppppppbStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  byte *******pppppppbStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  char *pcStack_4d8;
  long *plStack_4d0;
  long lStack_4c8;
  byte *****pppppbStack_4c0;
  long lStack_4b8;
  byte *******pppppppbStack_4b0;
  byte *******pppppppbStack_4a8;
  byte *******pppppppbStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  byte *******pppppppbStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  byte *******pppppppbStack_450;
  byte *******pppppppbStack_448;
  undefined *puStack_440;
  undefined *puStack_420;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  char cStack_3f0;
  byte bStack_3e0;
  undefined7 uStack_3df;
  undefined8 uStack_3d0;
  byte bStack_3c8;
  undefined7 uStack_3c7;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  undefined8 uStack_3a0;
  long *plStack_370;
  long lStack_360;
  byte ******ppppppbStack_358;
  byte *******pppppppbStack_350;
  long lStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 *puStack_308;
  uint uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 *puStack_2c8;
  uint uStack_2a0;
  char cStack_298;
  undefined1 auStack_290 [8];
  byte ******ppppppbStack_288;
  ulong uStack_280;
  byte *******pppppppbStack_278;
  uint uStack_200;
  undefined1 auStack_1f8 [8];
  byte ******ppppppbStack_1f0;
  ulong uStack_1e8;
  byte *******pppppppbStack_1e0;
  uint uStack_168;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_d0;
  undefined1 auStack_c8 [8];
  byte ******ppppppbStack_c0;
  ulong uStack_b8;
  byte *******pppppppbStack_b0;
  uint uStack_38;
  
  puStack_480 = &uStack_478;
  uStack_478 = 0;
  uStack_470 = 0;
  pppppppbStack_520 = (byte *******)&pppppppbStack_518;
  pppppppbStack_518 = (byte *******)0x0;
  lStack_510 = 0;
  pppppppbStack_4f8 = (byte *******)0x0;
  uStack_4f0 = 0;
  lStack_508 = 0;
  lStack_500 = 0;
  uStack_4e8 = 0x3f800000;
  plStack_658 = param_3;
  lStack_360 = param_1;
  lVar10 = func_0x06339cc0(param_1 + 0x220,param_2,param_2);
  lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x1a8);
  ppppppbStack_538 = (byte ******)0x0;
  ppppppbStack_530 = (byte ******)0x0;
  pbStack_528 = (byte *)0x0;
  lVar19 = *(long *)(lVar10 + 0x18);
  lVar10 = *(long *)(lVar10 + 0x20);
  pppppppbStack_468 = &ppppppbStack_538;
  uStack_460 = (byte ******)((ulong)uStack_460 & 0xffffffffffffff00);
  lVar28 = lVar10 - lVar19;
  if (lVar28 == 0) {
    uStack_59c = (uint)CONCAT71((int7)((ulong)pppppppbStack_468 >> 8),1);
  }
  else {
    if (0x38e38e38e38e38e < (ulong)((lVar28 >> 3) * -0x71c71c71c71c71c7)) {
LAB_0624d16a:
      uVar20 = func_0x0629e680();
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      func_0x060a99b0(&uStack_318);
      ppppppbVar29 = ppppppbStack_538;
      ppppppbVar11 = ppppppbStack_530;
      if (ppppppbStack_538 != (byte ******)0x0) {
        while (ppppppbVar29 != ppppppbVar11) {
          func_0x049ea190(ppppppbVar11 + -9);
          ppppppbVar11 = ppppppbVar11 + -9;
        }
        ppppppbStack_530 = ppppppbVar29;
        func_0x0412a280(ppppppbStack_538,(long)pbStack_528 - (long)ppppppbStack_538);
      }
      func_0x0633bd60(pppppppbStack_4f8);
      lVar10 = lStack_508;
      lStack_508 = 0;
      if (lVar10 != 0) {
        func_0x0412a280(lVar10,lStack_500 << 3);
      }
      func_0x0629f1d0(pppppppbStack_518);
      func_0x049dc470(&puStack_480,uStack_478);
      func_0x0eee2d70(uVar20);
      pcVar2 = (code *)swi(3);
      uVar21 = (*pcVar2)();
      return uVar21;
    }
    ppppppbVar11 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar28);
    if (ppppppbVar11 == (byte ******)0x0) {
      func_0x0eec74c0(lVar28,0);
    }
    pbStack_528 = (byte *)((long)ppppppbVar11 + lVar28);
    lVar28 = 0;
    ppppppbStack_538 = ppppppbVar11;
    ppppppbStack_530 = ppppppbVar11;
    do {
      lVar31 = lVar28;
      func_0x0629e690((byte *)((long)ppppppbVar11 + lVar31),lVar19 + lVar31);
      lVar28 = lVar31 + 0x48;
    } while (lVar19 + lVar31 + 0x48 != lVar10);
    ppppppbStack_530 = (byte ******)((long)ppppppbVar11 + lVar31 + 0x48);
    if (ppppppbStack_530 != ppppppbStack_538) {
      ppppppbStack_358 = (byte ******)((long)ppppppbVar11 + lVar31);
      lStack_4b8 = lStack_360 + 0x80;
      uStack_6b1 = 1;
      uStack_64c = 0;
      uStack_59c = (uint)CONCAT71((int7)((ulong)lStack_4b8 >> 8),1);
      ppppppbVar11 = ppppppbStack_538;
      do {
        func_0x049dcb70(&puStack_480,ppppppbVar11,ppppppbVar11);
        pppppbVar32 = ppppppbVar11[3];
        pppppbVar12 = ppppppbVar11[4];
        ppppppbStack_540 = ppppppbVar11;
        pppppbStack_4c0 = pppppbVar12;
        if (pppppbVar32 != pppppbVar12) {
          pppppppbStack_350 = (byte *******)((long)ppppppbVar11 + 1);
          do {
            pppppbStack_570 = pppppbVar32;
            if ((pppppbVar32 != (byte *****)0x0) && (*(int *)(pppppbVar32 + 7) == 1)) {
              cVar7 = func_0x06427110(lStack_4b8);
              if (cVar7 == '\0') {
                if ((*plStack_658 == 0) &&
                   (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                            &UNK_013fab0f), cVar7 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if ((*(char *)*plStack_658 == '\0') &&
                   (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                            &UNK_013fab0f), cVar7 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
                uStack_458 = (byte *******)0x0;
                pppppppbStack_450 = (byte *******)0x0;
                pppppppbStack_468 = (byte *******)0x0;
                uStack_460 = (byte ******)0x0;
                pppppppbStack_448 = (byte *******)0x0;
                if ((DAT_0f569528 & 1) == 0) {
                  pppppppbStack_450 = _DAT_0f569538;
                  uStack_460 = (byte ******)CONCAT71(uRam000000000f569529,DAT_0f569528);
                  uStack_458 = _DAT_0f569530;
                }
                else {
                  func_0x04885070(&uStack_460,_DAT_0f569538,_DAT_0f569530);
                }
                pppppppbStack_468 = _DAT_0f569520;
                auStack_6a8 = (undefined1  [8])0x0;
                _auStack_6a0 = (byte *******)0x0;
                uStack_698 = (byte *******)0x0;
                pppppppbStack_5d8 = (byte *******)auStack_6a8;
                pppppppbStack_5d0 = (byte *******)((ulong)pppppppbStack_5d0 & 0xffffffffffffff00);
                pppppppbVar37 =
                     (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                if (pppppppbVar37 == (byte *******)0x0) {
                  func_0x0eec74c0(0x28,0);
                }
                uStack_698 = pppppppbVar37 + 5;
                pppppppbStack_648 = (byte *******)auStack_6a8;
                uStack_640 = (byte *******)auStack_678;
                uStack_638 = (byte *******)&pppppppbStack_598;
                pppppppbStack_630 = (byte *******)((ulong)pppppppbStack_630 & 0xffffffffffffff00);
                pppppppbVar37[2] = (byte ******)0x0;
                pppppppbVar37[3] = (byte ******)0x0;
                *pppppppbVar37 = (byte ******)0x0;
                pppppppbVar37[1] = (byte ******)0x0;
                pppppppbVar37[4] = (byte ******)0x0;
                auStack_6a8 = (undefined1  [8])pppppppbVar37;
                auStack_678 = (undefined1  [8])pppppppbVar37;
                pppppppbStack_598 = pppppppbVar37;
                if ((byte ********)pppppppbVar37 != &pppppppbStack_468) {
                  if (((ulong)uStack_460 & 1) == 0) {
                    pppppppbVar37[3] = (byte ******)pppppppbStack_450;
                    *(undefined4 *)(pppppppbVar37 + 1) = (undefined4)uStack_460;
                    *(undefined4 *)((long)pppppppbVar37 + 0xc) = uStack_460._4_4_;
                    *(undefined4 *)(pppppppbVar37 + 2) = (undefined4)uStack_458;
                    *(undefined4 *)((long)pppppppbVar37 + 0x14) = uStack_458._4_4_;
                  }
                  else {
                    _auStack_6a0 = pppppppbVar37;
                    func_0x04885070(pppppppbVar37 + 1,pppppppbStack_450,uStack_458);
                  }
                }
                *pppppppbVar37 = (byte ******)pppppppbStack_468;
                _auStack_6a0 = pppppppbStack_598 + 5;
                bVar39 = (*(byte *)pppppbStack_570 & 1) != 0;
                pppppppbStack_648 = (byte *******)((long)pppppbStack_570 + 1);
                if (bVar39) {
                  pppppppbStack_648 = (byte *******)pppppbStack_570[2];
                }
                uStack_640 = (byte *******)(ulong)(*(byte *)pppppbStack_570 >> 1);
                if (bVar39) {
                  uStack_640 = (byte *******)pppppbStack_570[1];
                }
                uStack_638 = (byte *******)ppppppbStack_540[2];
                pppppppbStack_630 = (byte *******)ppppppbStack_540[1];
                if ((*(byte *)ppppppbStack_540 & 1) == 0) {
                  uStack_638 = pppppppbStack_350;
                  pppppppbStack_630 = (byte *******)(ulong)(*(byte *)ppppppbStack_540 >> 1);
                }
                func_0x0470d9a0(&pppppppbStack_5d8,&UNK_012d8b7c,0x60,0xdd,&pppppppbStack_648);
                pppppppbStack_b0 = pppppppbStack_5c8;
                ppppppbStack_c0 = (byte ******)pppppppbStack_5d8;
                uStack_b8 = (ulong)pppppppbStack_5d0;
                pppppppbStack_5d8 = (byte *******)0x0;
                pppppppbStack_5d0 = (byte *******)0x0;
                pppppppbStack_5c8 = (byte *******)0x0;
                uStack_38 = 0;
                func_0x060aeeb0(uVar20,0,2,auStack_6a8,auStack_c8,1);
                uVar21 = (ulong)uStack_38;
                if (uVar21 != 0xffffffff) {
                  uVar21 = (**(code **)(&UNK_0f023e00 + uVar21 * 8))
                                     (&pppppppbStack_648,&ppppppbStack_c0);
                }
                uStack_38 = 0xffffffff;
                if (((ulong)pppppppbStack_5d8 & 1) != 0) {
                  uVar21 = func_0x0412a280(pppppppbStack_5c8,
                                           (ulong)pppppppbStack_5d8 & 0xfffffffffffffffe);
                }
                auVar15 = auStack_6a8;
                pppppppbVar37 = _auStack_6a0;
                if (auStack_6a8 != (undefined1  [8])0x0) {
                  for (; auVar15 != (undefined1  [8])pppppppbVar37;
                      pppppppbVar37 = pppppppbVar37 + -5) {
                    if (((ulong)pppppppbVar37[-4] & 1) != 0) {
                      func_0x0412a280(pppppppbVar37[-2],
                                      (ulong)pppppppbVar37[-4] & 0xfffffffffffffffe);
                    }
                  }
                  _auStack_6a0 = (byte *******)auVar15;
                  uVar21 = func_0x0412a280(auStack_6a8,(long)uStack_698 - (long)auStack_6a8);
                }
                if (((ulong)uStack_460 & 1) != 0) {
                  uVar21 = func_0x0412a280(pppppppbStack_450,(ulong)uStack_460 & 0xfffffffffffffffe)
                  ;
                }
                uStack_6b1 = 2;
                uStack_64c = (uint)CONCAT71((int7)(uVar21 >> 8),1);
                uStack_59c = 0;
                pppppbVar12 = pppppbStack_4c0;
              }
              else {
                pcStack_4d8 = *(char **)(lStack_360 + 0x88);
                plStack_4d0 = *(long **)(lStack_360 + 0x90);
                if (plStack_4d0 == (long *)0x0) {
                  plStack_4d0 = (long *)0x0;
                }
                else {
                  LOCK();
                  plStack_4d0[1] = plStack_4d0[1] + 1;
                  UNLOCK();
                }
                lStack_4c8 = 0;
                if ((pcStack_4d8 == (char *)0x0) || (lStack_4c8 = lStack_4b8, *pcStack_4d8 == '\0'))
                {
LAB_0624d165:
                  func_0x04890760();
                  goto LAB_0624d16a;
                }
                uStack_338 = 0;
                uStack_330 = 0;
                uStack_328 = 0;
                uStack_320 = CONCAT13(uStack_320._3_1_,0x302);
                func_0x0d335e80(&pppppppbStack_468,&pcStack_4d8,pppppbStack_570);
                plVar13 = plStack_4d0;
                pcStack_4d8 = (char *)0x0;
                plStack_4d0 = (long *)0x0;
                if (plVar13 == (long *)0x0) {
                  lStack_4c8 = 0;
                }
                else {
                  LOCK();
                  plVar1 = plVar13 + 1;
                  lVar10 = *plVar1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (lVar10 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    func_0x0412c2d0(plVar13);
                    plVar13 = plStack_4d0;
                    lStack_4c8 = 0;
                    if (plStack_4d0 != (long *)0x0) {
                      lStack_4c8 = 0;
                      LOCK();
                      plVar1 = plStack_4d0 + 1;
                      lVar10 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar10 == 0) {
                        (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
                        func_0x0412c2d0(plVar13);
                      }
                    }
                  }
                  else {
                    lStack_4c8 = 0;
                  }
                }
                uVar20 = func_0x06425580(lStack_4b8,pppppbStack_570);
                puStack_340 = &UNK_0f087d20;
                func_0x0d36cbb0(&pppppppbStack_598,uVar20);
                if (pppppppbStack_598 == pppppppbStack_590) {
                  uStack_580 = (byte *******)((ulong)uStack_580._4_4_ << 0x20);
                  pppppppbVar37 = pppppppbStack_598;
                  pppppppbVar14 = pppppppbStack_590;
                  pppppppbVar35 = pppppppbStack_590;
                  if (pppppppbStack_598 == (byte *******)0x0) goto LAB_0624bee3;
joined_r0x06249586:
                  for (; pppppppbVar17 = pppppppbStack_598, pppppppbStack_598 != pppppppbVar14;
                      pppppppbVar14 = pppppppbVar14 + -4) {
                    ppppppbVar11 = pppppppbVar14[-1];
                    pppppppbVar14[-1] = (byte ******)0x0;
                    pppppppbStack_598 = pppppppbVar37;
                    pppppppbStack_590 = pppppppbVar35;
                    if (ppppppbVar11 != (byte ******)0x0) {
                      (*(code *)(*ppppppbVar11)[1])();
                    }
                    pppppppbVar37 = pppppppbStack_598;
                    pppppppbVar35 = pppppppbStack_590;
                    pppppppbStack_598 = pppppppbVar17;
                  }
                  pppppppbStack_590 = pppppppbStack_598;
                  pppppppbStack_598 = pppppppbVar37;
                  func_0x0412a280(pppppppbVar37,lStack_588 - (long)pppppppbVar37);
                  if (((ulong)uStack_580 & 1) == 0) goto LAB_062495e0;
LAB_0624bef1:
                  plVar13 = plStack_370;
                  pppppppbStack_468 = (byte *******)&UNK_0f461228;
                  if (plStack_370 != (long *)0x0) {
                    LOCK();
                    plVar1 = plStack_370 + 1;
                    lVar10 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar10 == 0) {
                      (**(code **)(*plStack_370 + 0x10))(plStack_370);
                      func_0x0412c2d0(plVar13);
                    }
                  }
                  plVar13 = plStack_3a8;
                  uStack_3b0 = 0;
                  plStack_3a8 = (long *)0x0;
                  if (plVar13 == (long *)0x0) {
                    uStack_3a0 = 0;
joined_r0x0624bf94:
                    if ((bStack_3c8 & 1) != 0) goto LAB_0624bf9a;
LAB_0624c0a8:
                    if ((bStack_3e0 & 1) == 0) goto LAB_0624c0b6;
LAB_0624bfc1:
                    func_0x0412a280(uStack_3d0,CONCAT71(uStack_3df,bStack_3e0) & 0xfffffffffffffffe)
                    ;
                    if (cStack_3f0 == '\x01') goto LAB_0624c0c4;
                    goto LAB_0624c2de;
                  }
                  LOCK();
                  plVar1 = plVar13 + 1;
                  lVar10 = *plVar1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (lVar10 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    func_0x0412c2d0(plVar13);
                    plVar13 = plStack_3a8;
                    if (plStack_3a8 != (long *)0x0) {
                      uStack_3a0 = 0;
                      LOCK();
                      plVar1 = plStack_3a8 + 1;
                      lVar10 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar10 == 0) {
                        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
                        func_0x0412c2d0(plVar13);
                        goto joined_r0x0624bf94;
                      }
                    }
                  }
                  uStack_3a0 = 0;
                  if ((bStack_3c8 & 1) == 0) goto LAB_0624c0a8;
LAB_0624bf9a:
                  func_0x0412a280(uStack_3b8,CONCAT71(uStack_3c7,bStack_3c8) & 0xfffffffffffffffe);
                  if ((bStack_3e0 & 1) != 0) goto LAB_0624bfc1;
LAB_0624c0b6:
                  if (cStack_3f0 != '\x01') goto LAB_0624c2de;
LAB_0624c0c4:
                  lVar19 = lStack_408;
                  puStack_420 = &UNK_0f4612c8;
                  lVar10 = lStack_400;
                  if (lStack_408 == 0) goto LAB_0624c2de;
                  for (; lVar19 != lVar10; lVar10 = lVar10 + -0x90) {
                    if ((*(byte *)(lVar10 + -0x28) & 1) == 0) {
                      if ((*(byte *)(lVar10 + -0x40) & 1) == 0) goto LAB_0624c11e;
LAB_0624c148:
                      func_0x0412a280(*(undefined8 *)(lVar10 + -0x30),
                                      *(ulong *)(lVar10 + -0x40) & 0xfffffffffffffffe);
                      if ((*(byte *)(lVar10 + -0x58) & 1) != 0) goto LAB_0624c160;
LAB_0624c125:
                      bVar38 = *(byte *)(lVar10 + -0x70);
                    }
                    else {
                      func_0x0412a280(*(undefined8 *)(lVar10 + -0x18),
                                      *(ulong *)(lVar10 + -0x28) & 0xfffffffffffffffe);
                      if ((*(byte *)(lVar10 + -0x40) & 1) != 0) goto LAB_0624c148;
LAB_0624c11e:
                      if ((*(byte *)(lVar10 + -0x58) & 1) == 0) goto LAB_0624c125;
LAB_0624c160:
                      func_0x0412a280(*(undefined8 *)(lVar10 + -0x48),
                                      *(ulong *)(lVar10 + -0x58) & 0xfffffffffffffffe);
                      bVar38 = *(byte *)(lVar10 + -0x70);
                    }
                    if ((bVar38 & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar10 + -0x60),
                                      *(ulong *)(lVar10 + -0x70) & 0xfffffffffffffffe);
                    }
                  }
LAB_0624c2c6:
                  lStack_400 = lVar19;
                  func_0x0412a280(lStack_408,lStack_3f8 - lStack_408);
                }
                else {
                  pppppppbStack_5b0 = (byte *******)((long)pppppbStack_570 + 1);
                  uStack_580 = (byte *******)((ulong)uStack_580._4_4_ << 0x20);
                  pppppppbStack_680 = pppppppbStack_590;
                  pppppppbVar37 = pppppppbStack_590;
                  pppppppbVar14 = pppppppbStack_598;
                  do {
                    ppppppbVar11 = pppppppbVar14[3];
                    if ((ppppppbVar11 != (byte ******)0x0) && (ppppppbVar11[3] != (byte *****)0x0))
                    {
                      pppppppbStack_5f8 = (byte *******)0x0;
                      pppppppbStack_5f0 = (byte *******)0x0;
                      lStack_608 = 0;
                      auStack_600 = (undefined1  [8])0x0;
                      pppppppbStack_618 = (byte *******)0x0;
                      pppppppbStack_610 = (byte *******)0x0;
                      pppppppbStack_628 = (byte *******)0x0;
                      lStack_620 = 0;
                      uStack_638 = (byte *******)0x0;
                      pppppppbStack_630 = (byte *******)0x0;
                      pppppppbStack_648 = (byte *******)0x0;
                      uStack_640 = (byte *******)0x0;
                      uStack_5e8 = 0;
                      uStack_5dc = 0;
                      uStack_5e4 = 0;
                      func_0x0d3b00e0(&pppppppbStack_648,ppppppbVar11,&puStack_340);
                      if (((ulong)auStack_600 & 1) == 0) {
                        pppppppbStack_668 = pppppppbStack_5f0;
                        auStack_678 = auStack_600;
                        pppppppbStack_670 = pppppppbStack_5f8;
                      }
                      else {
                        func_0x0412e5e0(auStack_678,pppppppbStack_5f0,pppppppbStack_5f8);
                      }
                      pppppppbVar37 = pppppppbStack_670;
                      uVar21 = (ulong)auStack_678 & 0xff;
                      pppppppbVar17 = (byte *******)(ulong)(auStack_678[0] >> 1);
                      bVar38 = auStack_678[0] & 1;
                      pppppppbVar35 = pppppppbStack_670;
                      if (((ulong)auStack_678 & 1) == 0) {
                        pppppppbVar35 = pppppppbVar17;
                      }
                      if (pppppppbVar35 != (byte *******)0x0) {
                        pppppppbVar34 = (byte *******)(auStack_678 + 1);
                        if (((ulong)auStack_678 & 1) != 0) {
                          pppppppbVar34 = pppppppbStack_668;
                        }
                        lVar10 = func_0x0eee2ef0(pppppppbVar34,0x3a,pppppppbVar35);
                        pppppppbStack_5a8 = pppppppbVar34;
                        pppppppbVar34 = (byte *******)(lVar10 - (long)pppppppbVar34);
                        if (pppppppbVar34 == (byte *******)0xffffffffffffffff || lVar10 == 0)
                        goto LAB_06248d1a;
                        if (pppppppbVar34 < pppppppbVar35) {
                          pppppppbVar37 =
                               (byte *******)((long)pppppppbVar35 - ((long)pppppppbVar34 + 1));
                          if (pppppppbVar37 < (byte *******)0xfffffffffffffff8) {
                            if (pppppppbVar37 < (byte *******)0x17) {
                              auStack_6a8[0] = (char)pppppppbVar37 * '\x02';
                              pppppppbVar17 = (byte *******)(auStack_6a8 + 1);
                              if (pppppppbVar35 != (byte *******)((long)pppppppbVar34 + 1))
                              goto LAB_06249178;
                              *(byte *)((long)pppppppbVar17 + (long)pppppppbVar37) = 0;
                            }
                            else {
                              uVar21 = ((ulong)pppppppbVar37 | 7) + 1;
                              if (((ulong)pppppppbVar37 | 7) == 0x17) {
                                uVar21 = 0x1a;
                              }
                              pppppppbVar17 =
                                   (byte *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
                              if (pppppppbVar17 == (byte *******)0x0) {
                                func_0x0eec74c0(uVar21,0);
                              }
                              auStack_6a8 = (undefined1  [8])(uVar21 | 1);
                              _auStack_6a0 = pppppppbVar37;
                              uStack_698 = pppppppbVar17;
LAB_06249178:
                              memmove(pppppppbVar17,
                                      (byte *)((long)pppppppbStack_5a8 + (long)pppppppbVar34) + 1,
                                      pppppppbVar37);
                              *(byte *)((long)pppppppbVar17 + (long)pppppppbVar37) = 0;
                            }
                            if (((ulong)auStack_678 & 1) != 0) {
                              func_0x0412a280(pppppppbStack_668,
                                              (ulong)auStack_678 & 0xfffffffffffffffe);
                            }
                            pppppppbStack_668 = uStack_698;
                            auStack_678 = auStack_6a8;
                            auVar15 = auStack_678;
                            pppppppbStack_670 = _auStack_6a0;
                            auStack_678[0] = auStack_6a8[0];
                            uVar21 = (ulong)auStack_6a8 & 0xff;
                            bVar38 = auStack_678[0] & 1;
                            pppppppbVar17 = (byte *******)(ulong)(auStack_678[0] >> 1);
                            pppppppbVar37 = _auStack_6a0;
                            auStack_678 = auVar15;
                            goto LAB_06248d1a;
                          }
                          func_0x04882e30();
LAB_0624d15b:
                          func_0x04882e30();
                        }
                        func_0x04882ee0();
                        goto LAB_0624d165;
                      }
LAB_06248d1a:
                      if (bVar38 != 0) {
                        pppppppbVar17 = pppppppbVar37;
                      }
                      if (pppppppbVar17 != (byte *******)0x0) {
                        pppppppbVar37 = (byte *******)(auStack_678 + 1);
                        if (bVar38 != 0) {
                          pppppppbVar37 = pppppppbStack_668;
                        }
                        pppppppbVar34 =
                             (byte *******)func_0x0eee2ef0(pppppppbVar37,0x5b,pppppppbVar17);
                        pppppppbVar35 = (byte *******)((long)pppppppbVar34 - (long)pppppppbVar37);
                        if (pppppppbVar35 != (byte *******)0xffffffffffffffff &&
                            pppppppbVar34 != (byte *******)0x0) {
                          if (pppppppbVar17 < pppppppbVar35) {
                            pppppppbVar35 = pppppppbVar17;
                          }
                          if ((byte *******)0xfffffffffffffff7 < pppppppbVar35) goto LAB_0624d15b;
                          if (pppppppbVar35 < (byte *******)0x17) {
                            auStack_6a8[0] = (char)pppppppbVar35 * '\x02';
                            pppppppbVar17 = (byte *******)(auStack_6a8 + 1);
                            if (pppppppbVar34 != pppppppbVar37) goto LAB_0624910a;
                            *(byte *)((long)pppppppbVar17 + (long)pppppppbVar35) = 0;
                          }
                          else {
                            uVar21 = ((ulong)pppppppbVar35 | 7) + 1;
                            if (((ulong)pppppppbVar35 | 7) == 0x17) {
                              uVar21 = 0x1a;
                            }
                            pppppppbVar17 =
                                 (byte *******)
                                 (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
                            if (pppppppbVar17 == (byte *******)0x0) {
                              func_0x0eec74c0(uVar21,0);
                            }
                            auStack_6a8 = (undefined1  [8])(uVar21 | 1);
                            _auStack_6a0 = pppppppbVar35;
                            uStack_698 = pppppppbVar17;
LAB_0624910a:
                            memmove(pppppppbVar17,pppppppbVar37,pppppppbVar35);
                            *(byte *)((long)pppppppbVar17 + (long)pppppppbVar35) = 0;
                          }
                          if (((ulong)auStack_678 & 1) != 0) {
                            func_0x0412a280(pppppppbStack_668,
                                            (ulong)auStack_678 & 0xfffffffffffffffe);
                          }
                          pppppppbStack_668 = uStack_698;
                          auStack_678 = auStack_6a8;
                          pppppppbStack_670 = _auStack_6a0;
                          uVar21 = (ulong)auStack_6a8 & 0xff;
                        }
                      }
                      auStack_6a8 = (undefined1  [8])0x0;
                      if ((uVar21 & 1) == 0) {
                        pppppppbStack_690 = pppppppbStack_668;
                        _auStack_6a0 = (byte *******)auStack_678;
                        uStack_698 = pppppppbStack_670;
                      }
                      else {
                        func_0x0412e5e0(auStack_6a0,pppppppbStack_668,pppppppbStack_670);
                      }
                      uStack_688 = 0;
                      if (((ulong)_auStack_6a0 & 1) == 0) {
                        if (auStack_6a0[0] >> 1 != 0) goto LAB_06248e45;
LAB_06248e90:
                        auStack_6a8 = (undefined1  [8])0x0;
                      }
                      else {
                        if (uStack_698 == (byte *******)0x0) goto LAB_06248e90;
LAB_06248e45:
                        pppppppbVar37 = (byte *******)(auStack_6a0 + 1);
                        if (((ulong)_auStack_6a0 & 1) != 0) {
                          pppppppbVar37 = pppppppbStack_690;
                        }
                        if ((pppppppbVar37 == (byte *******)0x0) || (*(byte *)pppppppbVar37 == 0))
                        goto LAB_06248e90;
                        uVar21 = func_0x0eee2e90(pppppppbVar37);
                        auStack_6a8 = (undefined1  [8])0xcbf29ce484222325;
                        if (uVar21 != 0) {
                          if (7 < uVar21) {
                            uVar23 = uVar21 & 0xfffffffffffffff8;
                            do {
                              auStack_6a8 = (undefined1  [8])
                                            (((((((((long)auStack_6a8 * 0x100000001b3 ^
                                                   (ulong)*(byte *)pppppppbVar37) * 0x100000001b3 ^
                                                  (ulong)*(byte *)((long)pppppppbVar37 + 1)) *
                                                  0x100000001b3 ^
                                                 (ulong)*(byte *)((long)pppppppbVar37 + 2)) *
                                                 0x100000001b3 ^
                                                (ulong)*(byte *)((long)pppppppbVar37 + 3)) *
                                                0x100000001b3 ^
                                               (ulong)*(byte *)((long)pppppppbVar37 + 4)) *
                                               0x100000001b3 ^
                                              (ulong)*(byte *)((long)pppppppbVar37 + 5)) *
                                              0x100000001b3 ^
                                             (ulong)*(byte *)((long)pppppppbVar37 + 6)) *
                                             0x100000001b3 ^
                                            (ulong)*(byte *)((long)pppppppbVar37 + 7));
                              pppppppbVar37 = pppppppbVar37 + 1;
                              uVar23 = uVar23 - 8;
                            } while (uVar23 != 0);
                          }
                          if ((uVar21 & 7) != 0) {
                            uVar23 = 0;
                            do {
                              auStack_6a8 = (undefined1  [8])
                                            ((long)auStack_6a8 * 0x100000001b3 ^
                                            (ulong)*(byte *)((long)pppppppbVar37 + uVar23));
                              uVar23 = uVar23 + 1;
                            } while (((uint)uVar21 & 7) != uVar23);
                          }
                        }
                      }
                      lVar10 = func_0x0cc422f0(0xf6ff9e0,auStack_6a8,0,0,0);
                      if (((ulong)_auStack_6a0 & 1) != 0) {
                        func_0x0412a280(pppppppbStack_690,(ulong)_auStack_6a0 & 0xfffffffffffffffe);
                      }
                      if (lVar10 == 0) {
                        if ((*plStack_658 == 0) &&
                           (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                                    &UNK_013fab0f), cVar7 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        if ((*(char *)*plStack_658 == '\0') &&
                           (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                                    &UNK_013fab0f), cVar7 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
                        uStack_698 = (byte *******)0x0;
                        pppppppbStack_690 = (byte *******)0x0;
                        auStack_6a8 = (undefined1  [8])0x0;
                        _auStack_6a0 = (byte *******)0x0;
                        uStack_688 = 0;
                        if ((DAT_0f569528 & 1) == 0) {
                          pppppppbStack_690 = _DAT_0f569538;
                          _auStack_6a0 = (byte *******)CONCAT71(uRam000000000f569529,DAT_0f569528);
                          uStack_698 = _DAT_0f569530;
                        }
                        else {
                          func_0x04885070(auStack_6a0,_DAT_0f569538,_DAT_0f569530);
                        }
                        auStack_6a8 = (undefined1  [8])_DAT_0f569520;
                        plStack_558 = (long *)0x0;
                        plStack_550 = (long *)0x0;
                        plStack_548 = (long *)0x0;
                        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                        if (plVar13 == (long *)0x0) {
                          func_0x0eec74c0(0x28,0);
                        }
                        plVar1 = plVar13 + 5;
                        plVar13[2] = 0;
                        plVar13[3] = 0;
                        *plVar13 = 0;
                        plVar13[1] = 0;
                        plVar13[4] = 0;
                        plStack_558 = plVar13;
                        plStack_548 = plVar1;
                        if (plVar13 != (long *)auStack_6a8) {
                          if (((ulong)_auStack_6a0 & 1) == 0) {
                            plVar13[3] = (long)pppppppbStack_690;
                            *(undefined1 (*) [4])(plVar13 + 1) = auStack_6a0;
                            *(undefined4 *)((long)plVar13 + 0xc) = uStack_69c;
                            *(undefined4 *)(plVar13 + 2) = (undefined4)uStack_698;
                            *(undefined4 *)((long)plVar13 + 0x14) = uStack_698._4_4_;
                          }
                          else {
                            plStack_550 = plVar13;
                            func_0x04885070(plVar13 + 1,pppppppbStack_690,uStack_698);
                          }
                        }
                        *plVar13 = (long)auStack_6a8;
                        pppppppbStack_5d8 = (byte *******)pppppbStack_570[2];
                        pppppppbStack_5d0 = (byte *******)pppppbStack_570[1];
                        if ((*(byte *)pppppbStack_570 & 1) == 0) {
                          pppppppbStack_5d8 = pppppppbStack_5b0;
                          pppppppbStack_5d0 = (byte *******)(ulong)(*(byte *)pppppbStack_570 >> 1);
                        }
                        pppppppbStack_5c8 = pppppppbStack_5f0;
                        pppppppbStack_5c0 = pppppppbStack_5f8;
                        if (((ulong)auStack_600 & 1) == 0) {
                          pppppppbStack_5c8 = (byte *******)(auStack_600 + 1);
                          pppppppbStack_5c0 = (byte *******)((ulong)auStack_600 >> 1 & 0x7f);
                        }
                        plStack_550 = plVar1;
                        func_0x0470d9a0(&uStack_498,&UNK_012d8bdd,99,0xdd,&pppppppbStack_5d8);
                        uStack_148 = uStack_488;
                        uStack_158 = uStack_498;
                        uStack_150 = uStack_490;
                        uStack_498 = 0;
                        uStack_490 = 0;
                        uStack_488 = 0;
                        uStack_d0 = 0;
                        func_0x060aeeb0(uVar20,0,2,&plStack_558,auStack_160,1);
                        uVar21 = (ulong)uStack_d0;
                        if (uVar21 != 0xffffffff) {
                          uVar21 = (**(code **)(&UNK_0f023e00 + uVar21 * 8))
                                             (&pppppppbStack_5d8,&uStack_158);
                        }
                        uStack_d0 = 0xffffffff;
                        if ((uStack_498 & 1) != 0) {
                          uVar21 = func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
                        }
                        plVar1 = plStack_558;
                        plVar13 = plStack_550;
                        if (plStack_558 != (long *)0x0) {
                          for (; plVar1 != plVar13; plVar13 = plVar13 + -5) {
                            if ((*(byte *)(plVar13 + -4) & 1) != 0) {
                              func_0x0412a280(plVar13[-2],plVar13[-4] & 0xfffffffffffffffe);
                            }
                          }
                          plStack_550 = plVar1;
                          uVar21 = func_0x0412a280(plStack_558,(long)plStack_548 - (long)plStack_558
                                                  );
                        }
                        if (((ulong)_auStack_6a0 & 1) != 0) {
                          uVar21 = func_0x0412a280(pppppppbStack_690,
                                                   (ulong)_auStack_6a0 & 0xfffffffffffffffe);
                        }
                        uStack_6b1 = 2;
                        uVar22 = (undefined7)(uVar21 >> 8);
                        uStack_580 = (byte *******)
                                     CONCAT44(uStack_580._4_4_,(int)CONCAT71(uVar22,1));
                        uStack_59c = 0;
                        uStack_64c = (uint)CONCAT71(uVar22,1);
                      }
                      pppppppbVar37 = pppppppbStack_680;
                      if (((ulong)auStack_678 & 1) != 0) {
                        func_0x0412a280(pppppppbStack_668,(ulong)auStack_678 & 0xfffffffffffffffe);
                        pppppppbVar37 = pppppppbStack_680;
                      }
                      pppppppbStack_680 = pppppppbVar37;
                      if (((ulong)auStack_600 & 1) != 0) {
                        func_0x0412a280(pppppppbStack_5f0,(ulong)auStack_600 & 0xfffffffffffffffe);
                      }
                      if (((ulong)pppppppbStack_618 & 1) != 0) {
                        func_0x0412a280(lStack_608,(ulong)pppppppbStack_618 & 0xfffffffffffffffe);
                      }
                      if (((ulong)pppppppbStack_630 & 1) != 0) {
                        func_0x0412a280(lStack_620,(ulong)pppppppbStack_630 & 0xfffffffffffffffe);
                      }
                      if (((ulong)pppppppbStack_648 & 1) != 0) {
                        func_0x0412a280(uStack_638,(ulong)pppppppbStack_648 & 0xfffffffffffffffe);
                      }
                    }
                    pppppppbVar14 = pppppppbVar14 + 4;
                  } while (pppppppbVar14 != pppppppbVar37);
                  pppppppbVar37 = pppppppbStack_598;
                  pppppppbVar14 = pppppppbStack_590;
                  pppppppbVar35 = pppppppbStack_590;
                  if (pppppppbStack_598 != (byte *******)0x0) goto joined_r0x06249586;
LAB_0624bee3:
                  if (((ulong)uStack_580 & 1) != 0) goto LAB_0624bef1;
LAB_062495e0:
                  func_0x06425450(&plStack_558,lStack_4b8,&pppppppbStack_468);
                  lVar10 = plStack_558[2];
                  lStack_348 = plStack_558[3];
                  if (lVar10 != lStack_348) {
                    do {
                      pppppppbStack_568 = (byte *******)(lVar10 + 0x18);
                      lStack_578 = lVar10;
                      lVar10 = func_0x0633bde0(&lStack_508);
                      if (lVar10 == 0) {
                        pppppppbStack_590 = (byte *******)0x0;
                        lStack_588 = 0;
                        pppppppbStack_598 = (byte *******)&pppppppbStack_590;
                        pppppppbStack_670 = (byte *******)0x0;
                        pppppppbStack_668 = (byte *******)0x0;
                        auStack_678 = (undefined1  [8])&pppppppbStack_670;
                        if (((ulong)*pppppppbStack_568 & 1) == 0) {
                          uStack_638 = (byte *******)pppppppbStack_568[2];
                          pppppppbStack_648 = (byte *******)*pppppppbStack_568;
                          uStack_640 = (byte *******)pppppppbStack_568[1];
                          pppppppbStack_628 = (byte *******)0x0;
                          lStack_620 = 0;
                          pppppppbStack_630 = (byte *******)&pppppppbStack_628;
                        }
                        else {
                          func_0x0412e5e0(&pppppppbStack_648,*(undefined8 *)(lStack_578 + 0x28),
                                          *(undefined8 *)(lStack_578 + 0x20));
                          pppppppbVar37 = (byte *******)&pppppppbStack_628;
                          pppppppbStack_628 = (byte *******)0x0;
                          lStack_620 = 0;
                          pppppppbStack_630 = pppppppbVar37;
                          if ((byte ********)pppppppbStack_598 != &pppppppbStack_590) {
                            pppppppbVar14 = (byte *******)0x0;
                            pppppppbStack_680 = pppppppbVar37;
                            pppppppbVar35 = pppppppbStack_598;
LAB_06249850:
                            pppppppbVar17 = pppppppbVar37 + 1;
                            if (pppppppbVar14 == (byte *******)0x0) {
                              pppppppbVar17 = (byte *******)&pppppppbStack_628;
                              pppppppbVar37 = (byte *******)&pppppppbStack_628;
                            }
                            if (*pppppppbVar17 == (byte ******)0x0) goto LAB_06249880;
LAB_06249866:
                            pppppppbVar37 = (byte *******)pppppppbVar35[1];
                            pppppppbVar14 = pppppppbVar35;
                            if ((byte *******)pppppppbVar35[1] == (byte *******)0x0)
                            goto LAB_06249ae0;
LAB_06249ad0:
                            do {
                              pppppppbVar35 = pppppppbVar37;
                              pppppppbVar37 = (byte *******)*pppppppbVar35;
                            } while ((byte *******)*pppppppbVar35 != (byte *******)0x0);
                            do {
                              pppppppbVar14 = pppppppbStack_628;
                              pppppppbVar37 = (byte *******)&pppppppbStack_628;
                              if ((byte ********)pppppppbVar35 == &pppppppbStack_590) break;
                              pppppppbStack_680 = pppppppbStack_630;
                              if (pppppppbVar37 == pppppppbStack_630) goto LAB_06249850;
                              pppppppbVar17 = pppppppbStack_628;
                              pppppppbVar34 = (byte *******)&pppppppbStack_628;
                              if (pppppppbStack_628 == (byte *******)0x0) {
                                do {
                                  pppppppbVar37 = (byte *******)pppppppbVar34[2];
                                  bVar39 = pppppppbVar34 == (byte *******)*pppppppbVar37;
                                  pppppppbVar34 = pppppppbVar37;
                                } while (bVar39);
                              }
                              else {
                                do {
                                  pppppppbVar37 = pppppppbVar17;
                                  pppppppbVar17 = (byte *******)pppppppbVar37[1];
                                } while ((byte *******)pppppppbVar37[1] != (byte *******)0x0);
                              }
                              bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                              ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                              if (bVar39) {
                                ppppppbVar11 = pppppppbVar37[6];
                              }
                              ppppppbVar29 = (byte ******)(ulong)(*(byte *)(pppppppbVar37 + 4) >> 1)
                              ;
                              if (bVar39) {
                                ppppppbVar29 = pppppppbVar37[5];
                              }
                              bVar39 = (*(byte *)(pppppppbVar35 + 4) & 1) != 0;
                              ppppppbVar30 = (byte ******)((long)pppppppbVar35 + 0x21);
                              if (bVar39) {
                                ppppppbVar30 = pppppppbVar35[6];
                              }
                              ppppppbVar26 = (byte ******)(ulong)(*(byte *)(pppppppbVar35 + 4) >> 1)
                              ;
                              if (bVar39) {
                                ppppppbVar26 = pppppppbVar35[5];
                              }
                              ppppppbVar24 = ppppppbVar29;
                              if (ppppppbVar26 < ppppppbVar29) {
                                ppppppbVar24 = ppppppbVar26;
                              }
                              iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                              if (iVar8 == 0) {
                                if (ppppppbVar29 < ppppppbVar26) goto LAB_06249850;
                              }
                              else if (iVar8 < 0) goto LAB_06249850;
                              pppppppbVar37 = (byte *******)&pppppppbStack_628;
LAB_062497c7:
                              pppppppbVar17 = pppppppbVar37;
                              if (pppppppbVar14 != (byte *******)0x0) {
                                do {
                                  pppppppbVar37 = pppppppbVar14;
                                  bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                                  ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                                  if (bVar39) {
                                    ppppppbVar11 = pppppppbVar37[6];
                                  }
                                  ppppppbVar29 = (byte ******)
                                                 (ulong)(*(byte *)(pppppppbVar37 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppbVar29 = pppppppbVar37[5];
                                  }
                                  ppppppbVar24 = ppppppbVar26;
                                  if (ppppppbVar29 < ppppppbVar26) {
                                    ppppppbVar24 = ppppppbVar29;
                                  }
                                  iVar8 = memcmp(ppppppbVar30,ppppppbVar11,ppppppbVar24);
                                  if (iVar8 == 0) {
                                    if (ppppppbVar26 < ppppppbVar29) goto LAB_062497c0;
                                  }
                                  else if (iVar8 < 0) goto LAB_062497c0;
                                  iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                                  if (iVar8 == 0) {
                                    if (ppppppbVar26 <= ppppppbVar29) goto LAB_06249866;
                                  }
                                  else if (-1 < iVar8) goto LAB_06249866;
                                  pppppppbVar14 = (byte *******)pppppppbVar37[1];
                                  if ((byte *******)pppppppbVar37[1] == (byte *******)0x0) {
                                    pppppppbVar17 = pppppppbVar37 + 1;
                                    break;
                                  }
                                } while( true );
                              }
LAB_06249880:
                              pppppppbVar14 =
                                   (byte *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                              if (pppppppbVar14 == (byte *******)0x0) {
                                func_0x0eec74c0(0x38,0);
                              }
                              _auStack_6a0 = (byte *******)&pppppppbStack_630;
                              uStack_698 = (byte *******)0x0;
                              auStack_6a8 = (undefined1  [8])pppppppbVar14;
                              if (((ulong)pppppppbVar35[4] & 1) == 0) {
                                pppppppbVar14[6] = pppppppbVar35[6];
                                ppppppbVar11 = pppppppbVar35[5];
                                pppppppbVar14[4] = pppppppbVar35[4];
                                pppppppbVar14[5] = ppppppbVar11;
                                pppppppbVar34 = pppppppbStack_680;
                              }
                              else {
                                func_0x0412e5e0(pppppppbVar14 + 4,pppppppbVar35[6],pppppppbVar35[5])
                                ;
                                pppppppbVar34 = pppppppbStack_630;
                              }
                              *pppppppbVar14 = (byte ******)0x0;
                              pppppppbVar14[1] = (byte ******)0x0;
                              pppppppbVar14[2] = (byte ******)pppppppbVar37;
                              *pppppppbVar17 = (byte ******)pppppppbVar14;
                              if ((byte *******)*pppppppbVar34 != (byte *******)0x0) {
                                pppppppbStack_630 = (byte *******)*pppppppbVar34;
                              }
                              *(bool *)(pppppppbVar14 + 3) = pppppppbVar14 == pppppppbStack_628;
                              if (pppppppbVar14 != pppppppbStack_628) {
                                do {
                                  while( true ) {
                                    pppppppbVar37 = (byte *******)pppppppbVar14[2];
                                    if (*(byte *)(pppppppbVar37 + 3) != 0) goto LAB_06249ab0;
                                    pppppppbVar17 = (byte *******)pppppppbVar37[2];
                                    pppppppbVar34 = (byte *******)*pppppppbVar17;
                                    if (pppppppbVar37 == pppppppbVar34) break;
                                    if ((pppppppbVar34 == (byte *******)0x0) ||
                                       (*(byte *)(pppppppbVar34 + 3) != 0)) {
                                      pppppppbVar34 = (byte *******)*pppppppbVar37;
                                      if (pppppppbVar14 == pppppppbVar34) {
                                        ppppppbVar11 = pppppppbVar34[1];
                                        *pppppppbVar37 = ppppppbVar11;
                                        if (ppppppbVar11 != (byte ******)0x0) {
                                          ppppppbVar11[2] = (byte *****)pppppppbVar37;
                                          pppppppbVar17 = (byte *******)pppppppbVar37[2];
                                        }
                                        pppppppbVar34[2] = (byte ******)pppppppbVar17;
                                        if (pppppppbVar37 == (byte *******)*pppppppbVar17) {
                                          *pppppppbVar17 = (byte ******)pppppppbVar34;
                                        }
                                        else {
                                          pppppppbVar17[1] = (byte ******)pppppppbVar34;
                                        }
                                        pppppppbVar34[1] = (byte ******)pppppppbVar37;
                                        pppppppbVar37[2] = (byte ******)pppppppbVar34;
                                        pppppppbVar17 = (byte *******)pppppppbVar34[2];
                                        pppppppbVar37 = pppppppbVar34;
                                      }
                                      *(byte *)(pppppppbVar37 + 3) = 1;
                                      *(byte *)(pppppppbVar17 + 3) = 0;
                                      ppppppbVar11 = pppppppbVar17[1];
                                      ppppppbVar29 = (byte ******)*ppppppbVar11;
                                      pppppppbVar17[1] = ppppppbVar29;
                                      if (ppppppbVar29 != (byte ******)0x0) {
                                        ppppppbVar29[2] = (byte *****)pppppppbVar17;
                                      }
                                      ppppppbVar29 = pppppppbVar17[2];
                                      ppppppbVar11[2] = (byte *****)ppppppbVar29;
                                      if (pppppppbVar17 == (byte *******)*ppppppbVar29) {
                                        *ppppppbVar29 = (byte *****)ppppppbVar11;
                                      }
                                      else {
                                        ppppppbVar29[1] = (byte *****)ppppppbVar11;
                                      }
                                      *ppppppbVar11 = (byte *****)pppppppbVar17;
                                      pppppppbVar17[2] = ppppppbVar11;
                                      goto LAB_06249ab0;
                                    }
                                    *(byte *)(pppppppbVar37 + 3) = 1;
                                    *(bool *)(pppppppbVar17 + 3) =
                                         pppppppbVar17 == pppppppbStack_628;
                                    *(byte *)(pppppppbVar34 + 3) = 1;
                                    pppppppbVar14 = pppppppbVar17;
                                    if (pppppppbVar17 == pppppppbStack_628) goto LAB_06249ab0;
                                  }
                                  ppppppbVar11 = pppppppbVar17[1];
                                  if ((ppppppbVar11 == (byte ******)0x0) ||
                                     (*(byte *)(ppppppbVar11 + 3) != 0)) {
                                    if (pppppppbVar14 != (byte *******)*pppppppbVar37) {
                                      pppppppbVar14 = (byte *******)pppppppbVar37[1];
                                      ppppppbVar11 = *pppppppbVar14;
                                      pppppppbVar37[1] = ppppppbVar11;
                                      if (ppppppbVar11 == (byte ******)0x0) {
                                        pppppppbVar14[2] = (byte ******)pppppppbVar17;
LAB_06249a13:
                                        *pppppppbVar17 = (byte ******)pppppppbVar14;
                                      }
                                      else {
                                        ppppppbVar11[2] = (byte *****)pppppppbVar37;
                                        pppppppbVar17 = (byte *******)pppppppbVar37[2];
                                        pppppppbVar34 = (byte *******)*pppppppbVar17;
                                        pppppppbVar14[2] = (byte ******)pppppppbVar17;
                                        if (pppppppbVar37 == pppppppbVar34) goto LAB_06249a13;
                                        pppppppbVar17[1] = (byte ******)pppppppbVar14;
                                      }
                                      *pppppppbVar14 = (byte ******)pppppppbVar37;
                                      pppppppbVar37[2] = (byte ******)pppppppbVar14;
                                      pppppppbVar17 = (byte *******)pppppppbVar14[2];
                                      pppppppbVar34 = (byte *******)*pppppppbVar17;
                                      pppppppbVar37 = pppppppbVar14;
                                    }
                                    *(byte *)(pppppppbVar37 + 3) = 1;
                                    *(byte *)(pppppppbVar17 + 3) = 0;
                                    ppppppbVar11 = pppppppbVar34[1];
                                    *pppppppbVar17 = ppppppbVar11;
                                    if (ppppppbVar11 != (byte ******)0x0) {
                                      ppppppbVar11[2] = (byte *****)pppppppbVar17;
                                    }
                                    ppppppbVar11 = pppppppbVar17[2];
                                    pppppppbVar34[2] = ppppppbVar11;
                                    if (pppppppbVar17 == (byte *******)*ppppppbVar11) {
                                      *ppppppbVar11 = (byte *****)pppppppbVar34;
                                    }
                                    else {
                                      ppppppbVar11[1] = (byte *****)pppppppbVar34;
                                    }
                                    pppppppbVar34[1] = (byte ******)pppppppbVar17;
                                    pppppppbVar17[2] = (byte ******)pppppppbVar34;
                                    break;
                                  }
                                  *(byte *)(pppppppbVar37 + 3) = 1;
                                  *(bool *)(pppppppbVar17 + 3) = pppppppbVar17 == pppppppbStack_628;
                                  *(byte *)(ppppppbVar11 + 3) = 1;
                                  pppppppbVar14 = pppppppbVar17;
                                } while (pppppppbVar17 != pppppppbStack_628);
                              }
LAB_06249ab0:
                              lStack_620 = lStack_620 + 1;
                              pppppppbVar37 = (byte *******)pppppppbVar35[1];
                              pppppppbVar14 = pppppppbVar35;
                              if ((byte *******)pppppppbVar35[1] != (byte *******)0x0)
                              goto LAB_06249ad0;
LAB_06249ae0:
                              do {
                                pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                bVar39 = pppppppbVar14 != (byte *******)*pppppppbVar35;
                                pppppppbVar14 = pppppppbVar35;
                              } while (bVar39);
                            } while( true );
                          }
                        }
                        pppppppbStack_610 = (byte *******)0x0;
                        lStack_608 = 0;
                        pppppppbStack_618 = (byte *******)&pppppppbStack_610;
                        if (auStack_678 != (undefined1  [8])&pppppppbStack_670) {
                          pppppppbStack_560 = (byte *******)auStack_678;
                          do {
                            pppppppbVar14 = pppppppbStack_610;
                            pppppppbVar37 = (byte *******)&pppppppbStack_610;
                            if (pppppppbVar37 != pppppppbStack_618) {
                              pppppppbVar35 = pppppppbStack_610;
                              pppppppbVar17 = pppppppbVar37;
                              if (pppppppbStack_610 == (byte *******)0x0) {
                                do {
                                  pppppppbVar37 = (byte *******)pppppppbVar17[2];
                                  bVar39 = pppppppbVar17 == (byte *******)*pppppppbVar37;
                                  pppppppbVar17 = pppppppbVar37;
                                } while (bVar39);
                              }
                              else {
                                do {
                                  pppppppbVar37 = pppppppbVar35;
                                  pppppppbVar35 = (byte *******)pppppppbVar37[1];
                                } while ((byte *******)pppppppbVar37[1] != (byte *******)0x0);
                              }
                              bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                              ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                              if (bVar39) {
                                ppppppbVar11 = pppppppbVar37[6];
                              }
                              ppppppbVar29 = (byte ******)(ulong)(*(byte *)(pppppppbVar37 + 4) >> 1)
                              ;
                              if (bVar39) {
                                ppppppbVar29 = pppppppbVar37[5];
                              }
                              bVar39 = (*(byte *)(pppppppbStack_560 + 4) & 1) != 0;
                              ppppppbVar30 = (byte ******)((long)pppppppbStack_560 + 0x21);
                              if (bVar39) {
                                ppppppbVar30 = pppppppbStack_560[6];
                              }
                              ppppppbVar26 = (byte ******)
                                             (ulong)(*(byte *)(pppppppbStack_560 + 4) >> 1);
                              if (bVar39) {
                                ppppppbVar26 = pppppppbStack_560[5];
                              }
                              ppppppbVar24 = ppppppbVar29;
                              if (ppppppbVar26 < ppppppbVar29) {
                                ppppppbVar24 = ppppppbVar26;
                              }
                              iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                              if (iVar8 == 0) {
                                if (ppppppbVar26 <= ppppppbVar29) goto LAB_06249c70;
                              }
                              else if (-1 < iVar8) {
LAB_06249c70:
                                pppppppbVar37 = (byte *******)&pppppppbStack_610;
joined_r0x06249c79:
                                pppppppbVar35 = pppppppbVar37;
                                if (pppppppbVar14 != (byte *******)0x0) {
                                  do {
                                    pppppppbVar37 = pppppppbVar14;
                                    bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                                    ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                                    if (bVar39) {
                                      ppppppbVar11 = pppppppbVar37[6];
                                    }
                                    ppppppbVar29 = (byte ******)
                                                   (ulong)(*(byte *)(pppppppbVar37 + 4) >> 1);
                                    if (bVar39) {
                                      ppppppbVar29 = pppppppbVar37[5];
                                    }
                                    ppppppbVar24 = ppppppbVar26;
                                    if (ppppppbVar29 < ppppppbVar26) {
                                      ppppppbVar24 = ppppppbVar29;
                                    }
                                    iVar8 = memcmp(ppppppbVar30,ppppppbVar11,ppppppbVar24);
                                    if (iVar8 == 0) {
                                      if (ppppppbVar26 < ppppppbVar29) goto LAB_06249c90;
                                    }
                                    else if (iVar8 < 0) goto LAB_06249c90;
                                    iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                                    if (iVar8 == 0) {
                                      if (ppppppbVar26 <= ppppppbVar29) goto LAB_0624a418;
                                    }
                                    else if (-1 < iVar8) goto LAB_0624a418;
                                    pppppppbVar14 = (byte *******)pppppppbVar37[1];
                                    if ((byte *******)pppppppbVar37[1] == (byte *******)0x0) {
                                      pppppppbVar35 = pppppppbVar37 + 1;
                                      break;
                                    }
                                  } while( true );
                                }
                                goto LAB_06249d20;
                              }
                            }
                            pppppppbVar35 = pppppppbVar37 + 1;
                            if (pppppppbVar14 == (byte *******)0x0) {
                              pppppppbVar35 = (byte *******)&pppppppbStack_610;
                              pppppppbVar37 = (byte *******)&pppppppbStack_610;
                            }
                            if (*pppppppbVar35 == (byte ******)0x0) {
LAB_06249d20:
                              pppppppbStack_4a0 = pppppppbVar37;
                              pppppppbVar37 =
                                   (byte *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                              if (pppppppbVar37 == (byte *******)0x0) {
                                func_0x0eec74c0(0x50,0);
                              }
                              pppppppbVar17 = pppppppbStack_560;
                              pppppppbStack_5d8 = pppppppbVar37;
                              pppppppbStack_5d0 = (byte *******)&pppppppbStack_618;
                              pppppppbStack_5c8 = (byte *******)0x0;
                              pppppppbVar14 = pppppppbVar37 + 4;
                              if (((ulong)pppppppbStack_560[4] & 1) == 0) {
                                pppppppbVar37[6] = pppppppbStack_560[6];
                                ppppppbVar11 = pppppppbStack_560[5];
                                *pppppppbVar14 = pppppppbStack_560[4];
                                pppppppbVar37[5] = ppppppbVar11;
                              }
                              else {
                                func_0x0412e5e0(pppppppbVar14,pppppppbStack_560[6],
                                                pppppppbStack_560[5]);
                              }
                              pppppppbStack_4b0 = pppppppbVar14;
                              pppppppbStack_4a8 = pppppppbVar35;
                              pppppppbVar14 = pppppppbVar37 + 8;
                              pppppppbVar37[8] = (byte ******)0x0;
                              pppppppbVar37[9] = (byte ******)0x0;
                              pppppppbStack_5b0 = pppppppbVar37;
                              pppppppbVar37[7] = (byte ******)pppppppbVar14;
                              pppppppbVar35 = (byte *******)pppppppbVar17[7];
                              uStack_580 = pppppppbVar17 + 8;
                              if (pppppppbVar35 != uStack_580) {
                                pppppppbStack_5a8 = pppppppbVar37 + 7;
                                pppppppbVar37 = (byte *******)0x0;
                                pppppppbStack_680 = pppppppbVar14;
LAB_06249f60:
                                pppppppbVar17 = pppppppbVar14 + 1;
                                pppppppbVar34 = pppppppbVar14;
                                if (pppppppbVar37 == (byte *******)0x0) {
                                  pppppppbVar17 = pppppppbStack_680;
                                  pppppppbVar34 = pppppppbStack_680;
                                }
                                if (*pppppppbVar17 == (byte ******)0x0) goto LAB_06249f90;
LAB_06249f77:
                                pppppppbVar37 = (byte *******)pppppppbVar35[1];
                                pppppppbVar14 = pppppppbVar35;
                                if ((byte *******)pppppppbVar35[1] == (byte *******)0x0)
                                goto LAB_0624a1e0;
LAB_0624a1d0:
                                do {
                                  pppppppbVar35 = pppppppbVar37;
                                  pppppppbVar37 = (byte *******)*pppppppbVar35;
                                } while ((byte *******)*pppppppbVar35 != (byte *******)0x0);
                                do {
                                  if (pppppppbVar35 == uStack_580) break;
                                  pppppppbVar37 = (byte *******)*pppppppbStack_680;
                                  pppppppbVar14 = pppppppbStack_680;
                                  if (pppppppbStack_680 == (byte *******)*pppppppbStack_5a8)
                                  goto LAB_06249f60;
                                  pppppppbVar17 = pppppppbVar37;
                                  pppppppbVar34 = pppppppbStack_680;
                                  if (pppppppbVar37 == (byte *******)0x0) {
                                    do {
                                      pppppppbVar14 = (byte *******)pppppppbVar34[2];
                                      bVar39 = pppppppbVar34 == (byte *******)*pppppppbVar14;
                                      pppppppbVar34 = pppppppbVar14;
                                    } while (bVar39);
                                  }
                                  else {
                                    do {
                                      pppppppbVar14 = pppppppbVar17;
                                      pppppppbVar17 = (byte *******)pppppppbVar14[1];
                                    } while ((byte *******)pppppppbVar14[1] != (byte *******)0x0);
                                  }
                                  bVar39 = (*(byte *)(pppppppbVar14 + 4) & 1) != 0;
                                  ppppppbVar11 = (byte ******)((long)pppppppbVar14 + 0x21);
                                  if (bVar39) {
                                    ppppppbVar11 = pppppppbVar14[6];
                                  }
                                  ppppppbVar29 = (byte ******)
                                                 (ulong)(*(byte *)(pppppppbVar14 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppbVar29 = pppppppbVar14[5];
                                  }
                                  bVar39 = (*(byte *)(pppppppbVar35 + 4) & 1) != 0;
                                  ppppppbVar30 = (byte ******)((long)pppppppbVar35 + 0x21);
                                  if (bVar39) {
                                    ppppppbVar30 = pppppppbVar35[6];
                                  }
                                  ppppppbVar26 = (byte ******)
                                                 (ulong)(*(byte *)(pppppppbVar35 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppbVar26 = pppppppbVar35[5];
                                  }
                                  ppppppbVar24 = ppppppbVar29;
                                  if (ppppppbVar26 < ppppppbVar29) {
                                    ppppppbVar24 = ppppppbVar26;
                                  }
                                  iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                                  pppppppbVar34 = pppppppbStack_680;
                                  if (iVar8 == 0) {
                                    if (ppppppbVar29 < ppppppbVar26) goto LAB_06249f60;
                                  }
                                  else if (iVar8 < 0) goto LAB_06249f60;
LAB_06249ed7:
                                  pppppppbVar17 = pppppppbVar34;
                                  if (pppppppbVar37 != (byte *******)0x0) {
                                    do {
                                      pppppppbVar34 = pppppppbVar37;
                                      bVar39 = (*(byte *)(pppppppbVar34 + 4) & 1) != 0;
                                      ppppppbVar11 = (byte ******)((long)pppppppbVar34 + 0x21);
                                      if (bVar39) {
                                        ppppppbVar11 = pppppppbVar34[6];
                                      }
                                      ppppppbVar29 = (byte ******)
                                                     (ulong)(*(byte *)(pppppppbVar34 + 4) >> 1);
                                      if (bVar39) {
                                        ppppppbVar29 = pppppppbVar34[5];
                                      }
                                      ppppppbVar24 = ppppppbVar26;
                                      if (ppppppbVar29 < ppppppbVar26) {
                                        ppppppbVar24 = ppppppbVar29;
                                      }
                                      iVar8 = memcmp(ppppppbVar30,ppppppbVar11,ppppppbVar24);
                                      if (iVar8 == 0) {
                                        if (ppppppbVar26 < ppppppbVar29) goto LAB_06249ed0;
                                      }
                                      else if (iVar8 < 0) goto LAB_06249ed0;
                                      iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                                      if (iVar8 == 0) {
                                        if (ppppppbVar26 <= ppppppbVar29) goto LAB_06249f77;
                                      }
                                      else if (-1 < iVar8) goto LAB_06249f77;
                                      pppppppbVar37 = (byte *******)pppppppbVar34[1];
                                      if ((byte *******)pppppppbVar34[1] == (byte *******)0x0) {
                                        pppppppbVar17 = pppppppbVar34 + 1;
                                        break;
                                      }
                                    } while( true );
                                  }
LAB_06249f90:
                                  pppppppbVar37 =
                                       (byte *******)
                                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                                  if (pppppppbVar37 == (byte *******)0x0) {
                                    func_0x0eec74c0(0x38,0);
                                  }
                                  pppppppbVar14 = pppppppbStack_5a8;
                                  _auStack_6a0 = pppppppbStack_5a8;
                                  uStack_698 = (byte *******)0x0;
                                  auStack_6a8 = (undefined1  [8])pppppppbVar37;
                                  if (((ulong)pppppppbVar35[4] & 1) == 0) {
                                    pppppppbVar37[6] = pppppppbVar35[6];
                                    ppppppbVar11 = pppppppbVar35[5];
                                    pppppppbVar37[4] = pppppppbVar35[4];
                                    pppppppbVar37[5] = ppppppbVar11;
                                  }
                                  else {
                                    func_0x0412e5e0(pppppppbVar37 + 4,pppppppbVar35[6],
                                                    pppppppbVar35[5]);
                                  }
                                  *pppppppbVar37 = (byte ******)0x0;
                                  pppppppbVar37[1] = (byte ******)0x0;
                                  pppppppbVar37[2] = (byte ******)pppppppbVar34;
                                  *pppppppbVar17 = (byte ******)pppppppbVar37;
                                  ppppppbVar11 = (byte ******)**pppppppbVar14;
                                  if (ppppppbVar11 != (byte ******)0x0) {
                                    *pppppppbVar14 = ppppppbVar11;
                                  }
                                  pppppppbVar14 = (byte *******)*pppppppbStack_680;
                                  *(bool *)(pppppppbVar37 + 3) = pppppppbVar37 == pppppppbVar14;
                                  if (pppppppbVar37 != pppppppbVar14) {
                                    do {
                                      while( true ) {
                                        pppppppbVar17 = (byte *******)pppppppbVar37[2];
                                        if (*(byte *)(pppppppbVar17 + 3) != 0) goto LAB_0624a1b0;
                                        pppppppbVar34 = (byte *******)pppppppbVar17[2];
                                        pppppppbVar25 = (byte *******)*pppppppbVar34;
                                        if (pppppppbVar17 == pppppppbVar25) break;
                                        if ((pppppppbVar25 == (byte *******)0x0) ||
                                           (*(byte *)(pppppppbVar25 + 3) != 0)) {
                                          pppppppbVar14 = (byte *******)*pppppppbVar17;
                                          if (pppppppbVar37 == pppppppbVar14) {
                                            ppppppbVar11 = pppppppbVar14[1];
                                            *pppppppbVar17 = ppppppbVar11;
                                            if (ppppppbVar11 != (byte ******)0x0) {
                                              ppppppbVar11[2] = (byte *****)pppppppbVar17;
                                              pppppppbVar34 = (byte *******)pppppppbVar17[2];
                                            }
                                            pppppppbVar14[2] = (byte ******)pppppppbVar34;
                                            if (pppppppbVar17 == (byte *******)*pppppppbVar34) {
                                              *pppppppbVar34 = (byte ******)pppppppbVar14;
                                            }
                                            else {
                                              pppppppbVar34[1] = (byte ******)pppppppbVar14;
                                            }
                                            pppppppbVar14[1] = (byte ******)pppppppbVar17;
                                            pppppppbVar17[2] = (byte ******)pppppppbVar14;
                                            pppppppbVar34 = (byte *******)pppppppbVar14[2];
                                            pppppppbVar17 = pppppppbVar14;
                                          }
                                          *(byte *)(pppppppbVar17 + 3) = 1;
                                          *(byte *)(pppppppbVar34 + 3) = 0;
                                          ppppppbVar11 = pppppppbVar34[1];
                                          ppppppbVar29 = (byte ******)*ppppppbVar11;
                                          pppppppbVar34[1] = ppppppbVar29;
                                          if (ppppppbVar29 != (byte ******)0x0) {
                                            ppppppbVar29[2] = (byte *****)pppppppbVar34;
                                          }
                                          ppppppbVar29 = pppppppbVar34[2];
                                          ppppppbVar11[2] = (byte *****)ppppppbVar29;
                                          if (pppppppbVar34 == (byte *******)*ppppppbVar29) {
                                            *ppppppbVar29 = (byte *****)ppppppbVar11;
                                          }
                                          else {
                                            ppppppbVar29[1] = (byte *****)ppppppbVar11;
                                          }
                                          *ppppppbVar11 = (byte *****)pppppppbVar34;
                                          pppppppbVar34[2] = ppppppbVar11;
                                          goto LAB_0624a1b0;
                                        }
                                        *(byte *)(pppppppbVar17 + 3) = 1;
                                        *(bool *)(pppppppbVar34 + 3) =
                                             pppppppbVar34 == pppppppbVar14;
                                        *(byte *)(pppppppbVar25 + 3) = 1;
                                        pppppppbVar37 = pppppppbVar34;
                                        if (pppppppbVar34 == pppppppbVar14) goto LAB_0624a1b0;
                                      }
                                      ppppppbVar11 = pppppppbVar34[1];
                                      if ((ppppppbVar11 == (byte ******)0x0) ||
                                         (*(byte *)(ppppppbVar11 + 3) != 0)) {
                                        if (pppppppbVar37 != (byte *******)*pppppppbVar17) {
                                          pppppppbVar37 = (byte *******)pppppppbVar17[1];
                                          ppppppbVar11 = *pppppppbVar37;
                                          pppppppbVar17[1] = ppppppbVar11;
                                          if (ppppppbVar11 == (byte ******)0x0) {
                                            pppppppbVar37[2] = (byte ******)pppppppbVar34;
LAB_0624a113:
                                            *pppppppbVar34 = (byte ******)pppppppbVar37;
                                          }
                                          else {
                                            ppppppbVar11[2] = (byte *****)pppppppbVar17;
                                            pppppppbVar34 = (byte *******)pppppppbVar17[2];
                                            pppppppbVar14 = (byte *******)*pppppppbVar34;
                                            pppppppbVar37[2] = (byte ******)pppppppbVar34;
                                            if (pppppppbVar17 == pppppppbVar14) goto LAB_0624a113;
                                            pppppppbVar34[1] = (byte ******)pppppppbVar37;
                                          }
                                          *pppppppbVar37 = (byte ******)pppppppbVar17;
                                          pppppppbVar17[2] = (byte ******)pppppppbVar37;
                                          pppppppbVar34 = (byte *******)pppppppbVar37[2];
                                          pppppppbVar25 = (byte *******)*pppppppbVar34;
                                          pppppppbVar17 = pppppppbVar37;
                                        }
                                        *(byte *)(pppppppbVar17 + 3) = 1;
                                        *(byte *)(pppppppbVar34 + 3) = 0;
                                        ppppppbVar11 = pppppppbVar25[1];
                                        *pppppppbVar34 = ppppppbVar11;
                                        if (ppppppbVar11 != (byte ******)0x0) {
                                          ppppppbVar11[2] = (byte *****)pppppppbVar34;
                                        }
                                        ppppppbVar11 = pppppppbVar34[2];
                                        pppppppbVar25[2] = ppppppbVar11;
                                        if (pppppppbVar34 == (byte *******)*ppppppbVar11) {
                                          *ppppppbVar11 = (byte *****)pppppppbVar25;
                                        }
                                        else {
                                          ppppppbVar11[1] = (byte *****)pppppppbVar25;
                                        }
                                        pppppppbVar25[1] = (byte ******)pppppppbVar34;
                                        pppppppbVar34[2] = (byte ******)pppppppbVar25;
                                        break;
                                      }
                                      *(byte *)(pppppppbVar17 + 3) = 1;
                                      *(bool *)(pppppppbVar34 + 3) = pppppppbVar34 == pppppppbVar14;
                                      *(byte *)(ppppppbVar11 + 3) = 1;
                                      pppppppbVar37 = pppppppbVar34;
                                    } while (pppppppbVar34 != pppppppbVar14);
                                  }
LAB_0624a1b0:
                                  pppppppbStack_5b0[9] =
                                       (byte ******)((long)pppppppbStack_5b0[9] + 1);
                                  pppppppbVar37 = (byte *******)pppppppbVar35[1];
                                  pppppppbVar14 = pppppppbVar35;
                                  if ((byte *******)pppppppbVar35[1] != (byte *******)0x0)
                                  goto LAB_0624a1d0;
LAB_0624a1e0:
                                  do {
                                    pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                    bVar39 = pppppppbVar14 != (byte *******)*pppppppbVar35;
                                    pppppppbVar14 = pppppppbVar35;
                                  } while (bVar39);
                                } while( true );
                              }
                              pppppppbVar37 = pppppppbStack_5b0;
                              *pppppppbStack_5b0 = (byte ******)0x0;
                              pppppppbStack_5b0[1] = (byte ******)0x0;
                              pppppppbStack_5b0[2] = (byte ******)pppppppbStack_4a0;
                              *pppppppbStack_4a8 = (byte ******)pppppppbStack_5b0;
                              if ((byte *******)*pppppppbStack_618 != (byte *******)0x0) {
                                pppppppbStack_618 = (byte *******)*pppppppbStack_618;
                              }
                              *(bool *)(pppppppbVar37 + 3) = pppppppbVar37 == pppppppbStack_610;
                              if (pppppppbVar37 != pppppppbStack_610) {
                                do {
                                  while( true ) {
                                    pppppppbVar14 = (byte *******)pppppppbVar37[2];
                                    if (*(byte *)(pppppppbVar14 + 3) != 0) goto LAB_0624a410;
                                    pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                    pppppppbVar17 = (byte *******)*pppppppbVar35;
                                    if (pppppppbVar14 == pppppppbVar17) break;
                                    if ((pppppppbVar17 == (byte *******)0x0) ||
                                       (*(byte *)(pppppppbVar17 + 3) != 0)) {
                                      pppppppbVar17 = (byte *******)*pppppppbVar14;
                                      if (pppppppbVar37 == pppppppbVar17) {
                                        ppppppbVar11 = pppppppbVar17[1];
                                        *pppppppbVar14 = ppppppbVar11;
                                        if (ppppppbVar11 != (byte ******)0x0) {
                                          ppppppbVar11[2] = (byte *****)pppppppbVar14;
                                          pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                        }
                                        pppppppbVar17[2] = (byte ******)pppppppbVar35;
                                        if (pppppppbVar14 == (byte *******)*pppppppbVar35) {
                                          *pppppppbVar35 = (byte ******)pppppppbVar17;
                                        }
                                        else {
                                          pppppppbVar35[1] = (byte ******)pppppppbVar17;
                                        }
                                        pppppppbVar17[1] = (byte ******)pppppppbVar14;
                                        pppppppbVar14[2] = (byte ******)pppppppbVar17;
                                        pppppppbVar35 = (byte *******)pppppppbVar17[2];
                                        pppppppbVar14 = pppppppbVar17;
                                      }
                                      *(byte *)(pppppppbVar14 + 3) = 1;
                                      *(byte *)(pppppppbVar35 + 3) = 0;
                                      ppppppbVar11 = pppppppbVar35[1];
                                      ppppppbVar29 = (byte ******)*ppppppbVar11;
                                      pppppppbVar35[1] = ppppppbVar29;
                                      if (ppppppbVar29 != (byte ******)0x0) {
                                        ppppppbVar29[2] = (byte *****)pppppppbVar35;
                                      }
                                      ppppppbVar29 = pppppppbVar35[2];
                                      ppppppbVar11[2] = (byte *****)ppppppbVar29;
                                      if (pppppppbVar35 == (byte *******)*ppppppbVar29) {
                                        *ppppppbVar29 = (byte *****)ppppppbVar11;
                                      }
                                      else {
                                        ppppppbVar29[1] = (byte *****)ppppppbVar11;
                                      }
                                      *ppppppbVar11 = (byte *****)pppppppbVar35;
                                      pppppppbVar35[2] = ppppppbVar11;
                                      goto LAB_0624a410;
                                    }
                                    *(byte *)(pppppppbVar14 + 3) = 1;
                                    *(bool *)(pppppppbVar35 + 3) =
                                         pppppppbVar35 == pppppppbStack_610;
                                    *(byte *)(pppppppbVar17 + 3) = 1;
                                    pppppppbVar37 = pppppppbVar35;
                                    if (pppppppbVar35 == pppppppbStack_610) goto LAB_0624a410;
                                  }
                                  ppppppbVar11 = pppppppbVar35[1];
                                  if ((ppppppbVar11 == (byte ******)0x0) ||
                                     (*(char *)(ppppppbVar11 + 3) != '\0')) {
                                    if (pppppppbVar37 != (byte *******)*pppppppbVar14) {
                                      pppppppbVar37 = (byte *******)pppppppbVar14[1];
                                      ppppppbVar11 = *pppppppbVar37;
                                      pppppppbVar14[1] = ppppppbVar11;
                                      if (ppppppbVar11 == (byte ******)0x0) {
                                        pppppppbVar37[2] = (byte ******)pppppppbVar35;
LAB_0624a373:
                                        *pppppppbVar35 = (byte ******)pppppppbVar37;
                                      }
                                      else {
                                        ppppppbVar11[2] = (byte *****)pppppppbVar14;
                                        pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                        pppppppbVar17 = (byte *******)*pppppppbVar35;
                                        pppppppbVar37[2] = (byte ******)pppppppbVar35;
                                        if (pppppppbVar14 == pppppppbVar17) goto LAB_0624a373;
                                        pppppppbVar35[1] = (byte ******)pppppppbVar37;
                                      }
                                      *pppppppbVar37 = (byte ******)pppppppbVar14;
                                      pppppppbVar14[2] = (byte ******)pppppppbVar37;
                                      pppppppbVar35 = (byte *******)pppppppbVar37[2];
                                      pppppppbVar17 = (byte *******)*pppppppbVar35;
                                      pppppppbVar14 = pppppppbVar37;
                                    }
                                    *(byte *)(pppppppbVar14 + 3) = 1;
                                    *(byte *)(pppppppbVar35 + 3) = 0;
                                    ppppppbVar11 = pppppppbVar17[1];
                                    *pppppppbVar35 = ppppppbVar11;
                                    if (ppppppbVar11 != (byte ******)0x0) {
                                      ppppppbVar11[2] = (byte *****)pppppppbVar35;
                                    }
                                    ppppppbVar11 = pppppppbVar35[2];
                                    pppppppbVar17[2] = ppppppbVar11;
                                    if (pppppppbVar35 == (byte *******)*ppppppbVar11) {
                                      *ppppppbVar11 = (byte *****)pppppppbVar17;
                                    }
                                    else {
                                      ppppppbVar11[1] = (byte *****)pppppppbVar17;
                                    }
                                    pppppppbVar17[1] = (byte ******)pppppppbVar35;
                                    pppppppbVar35[2] = (byte ******)pppppppbVar17;
                                    break;
                                  }
                                  *(byte *)(pppppppbVar14 + 3) = 1;
                                  *(bool *)(pppppppbVar35 + 3) = pppppppbVar35 == pppppppbStack_610;
                                  *(undefined1 *)(ppppppbVar11 + 3) = 1;
                                  pppppppbVar37 = pppppppbVar35;
                                } while (pppppppbVar35 != pppppppbStack_610);
                              }
LAB_0624a410:
                              lStack_608 = lStack_608 + 1;
                            }
LAB_0624a418:
                            pppppppbVar37 = (byte *******)pppppppbStack_560[1];
                            pppppppbVar14 = pppppppbStack_560;
                            if ((byte *******)pppppppbStack_560[1] == (byte *******)0x0) {
                              do {
                                pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                bVar39 = pppppppbVar14 != (byte *******)*pppppppbVar35;
                                pppppppbVar14 = pppppppbVar35;
                              } while (bVar39);
                            }
                            else {
                              do {
                                pppppppbVar35 = pppppppbVar37;
                                pppppppbVar37 = (byte *******)*pppppppbVar35;
                              } while ((byte *******)*pppppppbVar35 != (byte *******)0x0);
                            }
                            if ((byte ********)pppppppbVar35 == &pppppppbStack_670) break;
                            pppppppbStack_560 = pppppppbVar35;
                          } while( true );
                        }
                        func_0x0629f1d0(pppppppbStack_670);
                        func_0x049dc470(&pppppppbStack_598,pppppppbStack_590);
                        func_0x0633c060(&lStack_508,pppppppbStack_568,pppppppbStack_568,
                                        &pppppppbStack_648);
                        func_0x0629f1d0(pppppppbStack_610);
                        func_0x049dc470(&pppppppbStack_630,pppppppbStack_628);
                        if (((ulong)pppppppbStack_648 & 1) != 0) {
                          func_0x0412a280(uStack_638,(ulong)pppppppbStack_648 & 0xfffffffffffffffe);
                        }
                      }
                      lVar10 = func_0x0633bde0(&lStack_508,ppppppbStack_540);
                      if (lVar10 == 0) {
                        pppppppbStack_590 = (byte *******)0x0;
                        lStack_588 = 0;
                        pppppppbStack_598 = (byte *******)&pppppppbStack_590;
                        pppppppbStack_670 = (byte *******)0x0;
                        pppppppbStack_668 = (byte *******)0x0;
                        auStack_678 = (undefined1  [8])&pppppppbStack_670;
                        if (((ulong)*ppppppbStack_540 & 1) == 0) {
                          uStack_638 = (byte *******)ppppppbStack_540[2];
                          pppppppbStack_648 = (byte *******)*ppppppbStack_540;
                          uStack_640 = (byte *******)ppppppbStack_540[1];
                          pppppppbStack_628 = (byte *******)0x0;
                          lStack_620 = 0;
                          pppppppbStack_630 = (byte *******)&pppppppbStack_628;
                        }
                        else {
                          func_0x0412e5e0(&pppppppbStack_648,ppppppbStack_540[2],ppppppbStack_540[1]
                                         );
                          pppppppbVar37 = (byte *******)&pppppppbStack_628;
                          pppppppbStack_628 = (byte *******)0x0;
                          lStack_620 = 0;
                          pppppppbStack_630 = pppppppbVar37;
                          if ((byte ********)pppppppbStack_598 != &pppppppbStack_590) {
                            pppppppbVar14 = (byte *******)0x0;
                            pppppppbStack_680 = pppppppbVar37;
                            pppppppbVar35 = pppppppbStack_598;
LAB_0624a730:
                            pppppppbVar17 = pppppppbVar37 + 1;
                            if (pppppppbVar14 == (byte *******)0x0) {
                              pppppppbVar17 = (byte *******)&pppppppbStack_628;
                              pppppppbVar37 = (byte *******)&pppppppbStack_628;
                            }
                            if (*pppppppbVar17 == (byte ******)0x0) goto LAB_0624a760;
LAB_0624a745:
                            pppppppbVar37 = (byte *******)pppppppbVar35[1];
                            pppppppbVar14 = pppppppbVar35;
                            if ((byte *******)pppppppbVar35[1] == (byte *******)0x0)
                            goto LAB_0624a9b0;
LAB_0624a9a0:
                            do {
                              pppppppbVar35 = pppppppbVar37;
                              pppppppbVar37 = (byte *******)*pppppppbVar35;
                            } while ((byte *******)*pppppppbVar35 != (byte *******)0x0);
                            do {
                              pppppppbVar14 = pppppppbStack_628;
                              pppppppbVar37 = (byte *******)&pppppppbStack_628;
                              if ((byte ********)pppppppbVar35 == &pppppppbStack_590) break;
                              pppppppbStack_680 = pppppppbStack_630;
                              if (pppppppbVar37 == pppppppbStack_630) goto LAB_0624a730;
                              pppppppbVar17 = pppppppbStack_628;
                              pppppppbVar34 = (byte *******)&pppppppbStack_628;
                              if (pppppppbStack_628 == (byte *******)0x0) {
                                do {
                                  pppppppbVar37 = (byte *******)pppppppbVar34[2];
                                  bVar39 = pppppppbVar34 == (byte *******)*pppppppbVar37;
                                  pppppppbVar34 = pppppppbVar37;
                                } while (bVar39);
                              }
                              else {
                                do {
                                  pppppppbVar37 = pppppppbVar17;
                                  pppppppbVar17 = (byte *******)pppppppbVar37[1];
                                } while ((byte *******)pppppppbVar37[1] != (byte *******)0x0);
                              }
                              bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                              ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                              if (bVar39) {
                                ppppppbVar11 = pppppppbVar37[6];
                              }
                              ppppppbVar29 = (byte ******)(ulong)(*(byte *)(pppppppbVar37 + 4) >> 1)
                              ;
                              if (bVar39) {
                                ppppppbVar29 = pppppppbVar37[5];
                              }
                              bVar39 = (*(byte *)(pppppppbVar35 + 4) & 1) != 0;
                              ppppppbVar30 = (byte ******)((long)pppppppbVar35 + 0x21);
                              if (bVar39) {
                                ppppppbVar30 = pppppppbVar35[6];
                              }
                              ppppppbVar26 = (byte ******)(ulong)(*(byte *)(pppppppbVar35 + 4) >> 1)
                              ;
                              if (bVar39) {
                                ppppppbVar26 = pppppppbVar35[5];
                              }
                              ppppppbVar24 = ppppppbVar29;
                              if (ppppppbVar26 < ppppppbVar29) {
                                ppppppbVar24 = ppppppbVar26;
                              }
                              iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                              if (iVar8 == 0) {
                                if (ppppppbVar29 < ppppppbVar26) goto LAB_0624a730;
                              }
                              else if (iVar8 < 0) goto LAB_0624a730;
                              pppppppbVar37 = (byte *******)&pppppppbStack_628;
LAB_0624a6a7:
                              pppppppbVar17 = pppppppbVar37;
                              if (pppppppbVar14 != (byte *******)0x0) {
                                do {
                                  pppppppbVar37 = pppppppbVar14;
                                  bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                                  ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                                  if (bVar39) {
                                    ppppppbVar11 = pppppppbVar37[6];
                                  }
                                  ppppppbVar29 = (byte ******)
                                                 (ulong)(*(byte *)(pppppppbVar37 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppbVar29 = pppppppbVar37[5];
                                  }
                                  ppppppbVar24 = ppppppbVar26;
                                  if (ppppppbVar29 < ppppppbVar26) {
                                    ppppppbVar24 = ppppppbVar29;
                                  }
                                  iVar8 = memcmp(ppppppbVar30,ppppppbVar11,ppppppbVar24);
                                  if (iVar8 == 0) {
                                    if (ppppppbVar26 < ppppppbVar29) goto LAB_0624a6a0;
                                  }
                                  else if (iVar8 < 0) goto LAB_0624a6a0;
                                  iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                                  if (iVar8 == 0) {
                                    if (ppppppbVar26 <= ppppppbVar29) goto LAB_0624a745;
                                  }
                                  else if (-1 < iVar8) goto LAB_0624a745;
                                  pppppppbVar14 = (byte *******)pppppppbVar37[1];
                                  if ((byte *******)pppppppbVar37[1] == (byte *******)0x0) {
                                    pppppppbVar17 = pppppppbVar37 + 1;
                                    break;
                                  }
                                } while( true );
                              }
LAB_0624a760:
                              pppppppbVar14 =
                                   (byte *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                              if (pppppppbVar14 == (byte *******)0x0) {
                                func_0x0eec74c0(0x38,0);
                              }
                              _auStack_6a0 = (byte *******)&pppppppbStack_630;
                              uStack_698 = (byte *******)0x0;
                              auStack_6a8 = (undefined1  [8])pppppppbVar14;
                              if (((ulong)pppppppbVar35[4] & 1) == 0) {
                                pppppppbVar14[6] = pppppppbVar35[6];
                                ppppppbVar11 = pppppppbVar35[5];
                                pppppppbVar14[4] = pppppppbVar35[4];
                                pppppppbVar14[5] = ppppppbVar11;
                                pppppppbVar34 = pppppppbStack_680;
                              }
                              else {
                                func_0x0412e5e0(pppppppbVar14 + 4,pppppppbVar35[6],pppppppbVar35[5])
                                ;
                                pppppppbVar34 = pppppppbStack_630;
                              }
                              *pppppppbVar14 = (byte ******)0x0;
                              pppppppbVar14[1] = (byte ******)0x0;
                              pppppppbVar14[2] = (byte ******)pppppppbVar37;
                              *pppppppbVar17 = (byte ******)pppppppbVar14;
                              if ((byte *******)*pppppppbVar34 != (byte *******)0x0) {
                                pppppppbStack_630 = (byte *******)*pppppppbVar34;
                              }
                              *(bool *)(pppppppbVar14 + 3) = pppppppbVar14 == pppppppbStack_628;
                              if (pppppppbVar14 != pppppppbStack_628) {
                                do {
                                  pppppppbVar37 = (byte *******)pppppppbVar14[2];
                                  if (*(byte *)(pppppppbVar37 + 3) != 0) break;
                                  pppppppbVar17 = (byte *******)pppppppbVar37[2];
                                  pppppppbVar34 = (byte *******)*pppppppbVar17;
                                  if (pppppppbVar37 == pppppppbVar34) {
                                    ppppppbVar11 = pppppppbVar17[1];
                                    if ((ppppppbVar11 != (byte ******)0x0) &&
                                       (*(byte *)(ppppppbVar11 + 3) == 0)) {
                                      *(byte *)(pppppppbVar37 + 3) = 1;
                                      *(bool *)(pppppppbVar17 + 3) =
                                           pppppppbVar17 == pppppppbStack_628;
                                      *(byte *)(ppppppbVar11 + 3) = 1;
                                      goto LAB_0624a810;
                                    }
                                    if (pppppppbVar14 != (byte *******)*pppppppbVar37) {
                                      pppppppbVar14 = (byte *******)pppppppbVar37[1];
                                      ppppppbVar11 = *pppppppbVar14;
                                      pppppppbVar37[1] = ppppppbVar11;
                                      if (ppppppbVar11 == (byte ******)0x0) {
                                        pppppppbVar14[2] = (byte ******)pppppppbVar17;
LAB_0624a8e8:
                                        *pppppppbVar17 = (byte ******)pppppppbVar14;
                                      }
                                      else {
                                        ppppppbVar11[2] = (byte *****)pppppppbVar37;
                                        pppppppbVar17 = (byte *******)pppppppbVar37[2];
                                        pppppppbVar34 = (byte *******)*pppppppbVar17;
                                        pppppppbVar14[2] = (byte ******)pppppppbVar17;
                                        if (pppppppbVar37 == pppppppbVar34) goto LAB_0624a8e8;
                                        pppppppbVar17[1] = (byte ******)pppppppbVar14;
                                      }
                                      *pppppppbVar14 = (byte ******)pppppppbVar37;
                                      pppppppbVar37[2] = (byte ******)pppppppbVar14;
                                      pppppppbVar17 = (byte *******)pppppppbVar14[2];
                                      pppppppbVar34 = (byte *******)*pppppppbVar17;
                                      pppppppbVar37 = pppppppbVar14;
                                    }
                                    *(byte *)(pppppppbVar37 + 3) = 1;
                                    *(byte *)(pppppppbVar17 + 3) = 0;
                                    ppppppbVar11 = pppppppbVar34[1];
                                    *pppppppbVar17 = ppppppbVar11;
                                    if (ppppppbVar11 != (byte ******)0x0) {
                                      ppppppbVar11[2] = (byte *****)pppppppbVar17;
                                    }
                                    ppppppbVar11 = pppppppbVar17[2];
                                    pppppppbVar34[2] = ppppppbVar11;
                                    if (pppppppbVar17 == (byte *******)*ppppppbVar11) {
                                      *ppppppbVar11 = (byte *****)pppppppbVar34;
                                    }
                                    else {
                                      ppppppbVar11[1] = (byte *****)pppppppbVar34;
                                    }
                                    pppppppbVar34[1] = (byte ******)pppppppbVar17;
                                    pppppppbVar17[2] = (byte ******)pppppppbVar34;
                                    break;
                                  }
                                  if ((pppppppbVar34 == (byte *******)0x0) ||
                                     (*(byte *)(pppppppbVar34 + 3) != 0)) {
                                    pppppppbVar34 = (byte *******)*pppppppbVar37;
                                    if (pppppppbVar14 == pppppppbVar34) {
                                      ppppppbVar11 = pppppppbVar34[1];
                                      *pppppppbVar37 = ppppppbVar11;
                                      if (ppppppbVar11 != (byte ******)0x0) {
                                        ppppppbVar11[2] = (byte *****)pppppppbVar37;
                                        pppppppbVar17 = (byte *******)pppppppbVar37[2];
                                      }
                                      pppppppbVar34[2] = (byte ******)pppppppbVar17;
                                      if (pppppppbVar37 == (byte *******)*pppppppbVar17) {
                                        *pppppppbVar17 = (byte ******)pppppppbVar34;
                                      }
                                      else {
                                        pppppppbVar17[1] = (byte ******)pppppppbVar34;
                                      }
                                      pppppppbVar34[1] = (byte ******)pppppppbVar37;
                                      pppppppbVar37[2] = (byte ******)pppppppbVar34;
                                      pppppppbVar17 = (byte *******)pppppppbVar34[2];
                                      pppppppbVar37 = pppppppbVar34;
                                    }
                                    *(byte *)(pppppppbVar37 + 3) = 1;
                                    *(byte *)(pppppppbVar17 + 3) = 0;
                                    ppppppbVar11 = pppppppbVar17[1];
                                    ppppppbVar29 = (byte ******)*ppppppbVar11;
                                    pppppppbVar17[1] = ppppppbVar29;
                                    if (ppppppbVar29 != (byte ******)0x0) {
                                      ppppppbVar29[2] = (byte *****)pppppppbVar17;
                                    }
                                    ppppppbVar29 = pppppppbVar17[2];
                                    ppppppbVar11[2] = (byte *****)ppppppbVar29;
                                    if (pppppppbVar17 == (byte *******)*ppppppbVar29) {
                                      *ppppppbVar29 = (byte *****)ppppppbVar11;
                                    }
                                    else {
                                      ppppppbVar29[1] = (byte *****)ppppppbVar11;
                                    }
                                    *ppppppbVar11 = (byte *****)pppppppbVar17;
                                    pppppppbVar17[2] = ppppppbVar11;
                                    break;
                                  }
                                  *(byte *)(pppppppbVar37 + 3) = 1;
                                  *(bool *)(pppppppbVar17 + 3) = pppppppbVar17 == pppppppbStack_628;
                                  *(byte *)(pppppppbVar34 + 3) = 1;
LAB_0624a810:
                                  pppppppbVar14 = pppppppbVar17;
                                } while (pppppppbVar17 != pppppppbStack_628);
                              }
                              lStack_620 = lStack_620 + 1;
                              pppppppbVar37 = (byte *******)pppppppbVar35[1];
                              pppppppbVar14 = pppppppbVar35;
                              if ((byte *******)pppppppbVar35[1] != (byte *******)0x0)
                              goto LAB_0624a9a0;
LAB_0624a9b0:
                              do {
                                pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                bVar39 = pppppppbVar14 != (byte *******)*pppppppbVar35;
                                pppppppbVar14 = pppppppbVar35;
                              } while (bVar39);
                            } while( true );
                          }
                        }
                        pppppppbStack_610 = (byte *******)0x0;
                        lStack_608 = 0;
                        pppppppbStack_618 = (byte *******)&pppppppbStack_610;
                        auVar15 = auStack_678;
                        if (auStack_678 != (undefined1  [8])&pppppppbStack_670) {
                          do {
                            pppppppbVar14 = pppppppbStack_610;
                            pppppppbVar37 = (byte *******)&pppppppbStack_610;
                            pppppppbStack_560 = (byte *******)auVar15;
                            if (pppppppbVar37 != pppppppbStack_618) {
                              pppppppbVar35 = pppppppbStack_610;
                              pppppppbVar17 = pppppppbVar37;
                              if (pppppppbStack_610 == (byte *******)0x0) {
                                do {
                                  pppppppbVar37 = (byte *******)pppppppbVar17[2];
                                  bVar39 = pppppppbVar17 == (byte *******)*pppppppbVar37;
                                  pppppppbVar17 = pppppppbVar37;
                                } while (bVar39);
                              }
                              else {
                                do {
                                  pppppppbVar37 = pppppppbVar35;
                                  pppppppbVar35 = (byte *******)pppppppbVar37[1];
                                } while ((byte *******)pppppppbVar37[1] != (byte *******)0x0);
                              }
                              bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                              ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                              if (bVar39) {
                                ppppppbVar11 = pppppppbVar37[6];
                              }
                              ppppppbVar29 = (byte ******)(ulong)(*(byte *)(pppppppbVar37 + 4) >> 1)
                              ;
                              if (bVar39) {
                                ppppppbVar29 = pppppppbVar37[5];
                              }
                              bVar39 = (*(byte *)((long)auVar15 + 0x20) & 1) != 0;
                              ppppppbVar30 = (byte ******)((long)auVar15 + 0x21);
                              if (bVar39) {
                                ppppppbVar30 = *(byte *******)((long)auVar15 + 0x30);
                              }
                              ppppppbVar26 = (byte ******)
                                             (ulong)(*(byte *)((long)auVar15 + 0x20) >> 1);
                              if (bVar39) {
                                ppppppbVar26 = *(byte *******)((long)auVar15 + 0x28);
                              }
                              ppppppbVar24 = ppppppbVar29;
                              if (ppppppbVar26 < ppppppbVar29) {
                                ppppppbVar24 = ppppppbVar26;
                              }
                              iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                              if (iVar8 == 0) {
                                if (ppppppbVar26 <= ppppppbVar29) goto LAB_0624ab2d;
                              }
                              else if (-1 < iVar8) {
LAB_0624ab2d:
                                pppppppbVar35 = (byte *******)&pppppppbStack_610;
joined_r0x0624ab36:
                                pppppppbVar37 = pppppppbVar35;
                                if (pppppppbVar14 != (byte *******)0x0) {
                                  do {
                                    pppppppbVar37 = pppppppbVar14;
                                    bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                                    ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                                    if (bVar39) {
                                      ppppppbVar11 = pppppppbVar37[6];
                                    }
                                    ppppppbVar29 = (byte ******)
                                                   (ulong)(*(byte *)(pppppppbVar37 + 4) >> 1);
                                    if (bVar39) {
                                      ppppppbVar29 = pppppppbVar37[5];
                                    }
                                    ppppppbVar24 = ppppppbVar26;
                                    if (ppppppbVar29 < ppppppbVar26) {
                                      ppppppbVar24 = ppppppbVar29;
                                    }
                                    iVar8 = memcmp(ppppppbVar30,ppppppbVar11,ppppppbVar24);
                                    if (iVar8 == 0) {
                                      if (ppppppbVar26 < ppppppbVar29) goto LAB_0624ab50;
                                    }
                                    else if (iVar8 < 0) goto LAB_0624ab50;
                                    iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                                    if (iVar8 == 0) {
                                      if (ppppppbVar26 <= ppppppbVar29) goto LAB_0624b2c8;
                                    }
                                    else if (-1 < iVar8) goto LAB_0624b2c8;
                                    pppppppbVar14 = (byte *******)pppppppbVar37[1];
                                    if ((byte *******)pppppppbVar37[1] == (byte *******)0x0) {
                                      pppppppbVar35 = pppppppbVar37 + 1;
                                      break;
                                    }
                                  } while( true );
                                }
                                goto LAB_0624abe0;
                              }
                            }
                            pppppppbVar35 = pppppppbVar37 + 1;
                            if (pppppppbVar14 == (byte *******)0x0) {
                              pppppppbVar35 = (byte *******)&pppppppbStack_610;
                              pppppppbVar37 = (byte *******)&pppppppbStack_610;
                            }
                            if (*pppppppbVar35 == (byte ******)0x0) {
LAB_0624abe0:
                              pppppppbStack_4a0 = pppppppbVar35;
                              pppppppbVar14 =
                                   (byte *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                              if (pppppppbVar14 == (byte *******)0x0) {
                                func_0x0eec74c0(0x50,0);
                              }
                              pppppppbVar17 = pppppppbStack_560;
                              pppppppbStack_5d8 = pppppppbVar14;
                              pppppppbStack_5d0 = (byte *******)&pppppppbStack_618;
                              pppppppbStack_5c8 = (byte *******)0x0;
                              pppppppbVar35 = pppppppbVar14 + 4;
                              if (((ulong)pppppppbStack_560[4] & 1) == 0) {
                                pppppppbVar14[6] = pppppppbStack_560[6];
                                ppppppbVar11 = pppppppbStack_560[5];
                                *pppppppbVar35 = pppppppbStack_560[4];
                                pppppppbVar14[5] = ppppppbVar11;
                              }
                              else {
                                func_0x0412e5e0(pppppppbVar35,pppppppbStack_560[6],
                                                pppppppbStack_560[5]);
                              }
                              pppppppbStack_4b0 = pppppppbVar35;
                              pppppppbStack_4a8 = pppppppbVar37;
                              pppppppbVar37 = pppppppbVar14 + 8;
                              pppppppbVar14[8] = (byte ******)0x0;
                              pppppppbVar14[9] = (byte ******)0x0;
                              pppppppbStack_5b0 = pppppppbVar14;
                              pppppppbVar14[7] = (byte ******)pppppppbVar37;
                              pppppppbVar35 = (byte *******)pppppppbVar17[7];
                              uStack_580 = pppppppbVar17 + 8;
                              if (pppppppbVar35 != uStack_580) {
                                pppppppbStack_5a8 = pppppppbVar14 + 7;
                                pppppppbVar14 = (byte *******)0x0;
                                pppppppbStack_680 = pppppppbVar37;
LAB_0624ae20:
                                pppppppbVar17 = pppppppbVar37 + 1;
                                pppppppbVar34 = pppppppbVar37;
                                if (pppppppbVar14 == (byte *******)0x0) {
                                  pppppppbVar17 = pppppppbStack_680;
                                  pppppppbVar34 = pppppppbStack_680;
                                }
                                if (*pppppppbVar17 == (byte ******)0x0) goto LAB_0624ae50;
LAB_0624ae37:
                                pppppppbVar37 = (byte *******)pppppppbVar35[1];
                                pppppppbVar14 = pppppppbVar35;
                                if ((byte *******)pppppppbVar35[1] == (byte *******)0x0)
                                goto LAB_0624b090;
LAB_0624b080:
                                do {
                                  pppppppbVar35 = pppppppbVar37;
                                  pppppppbVar37 = (byte *******)*pppppppbVar35;
                                } while ((byte *******)*pppppppbVar35 != (byte *******)0x0);
                                do {
                                  if (pppppppbVar35 == uStack_580) break;
                                  pppppppbVar14 = (byte *******)*pppppppbStack_680;
                                  pppppppbVar37 = pppppppbStack_680;
                                  if (pppppppbStack_680 == (byte *******)*pppppppbStack_5a8)
                                  goto LAB_0624ae20;
                                  pppppppbVar17 = pppppppbVar14;
                                  pppppppbVar34 = pppppppbStack_680;
                                  if (pppppppbVar14 == (byte *******)0x0) {
                                    do {
                                      pppppppbVar37 = (byte *******)pppppppbVar34[2];
                                      bVar39 = pppppppbVar34 == (byte *******)*pppppppbVar37;
                                      pppppppbVar34 = pppppppbVar37;
                                    } while (bVar39);
                                  }
                                  else {
                                    do {
                                      pppppppbVar37 = pppppppbVar17;
                                      pppppppbVar17 = (byte *******)pppppppbVar37[1];
                                    } while ((byte *******)pppppppbVar37[1] != (byte *******)0x0);
                                  }
                                  bVar39 = (*(byte *)(pppppppbVar37 + 4) & 1) != 0;
                                  ppppppbVar11 = (byte ******)((long)pppppppbVar37 + 0x21);
                                  if (bVar39) {
                                    ppppppbVar11 = pppppppbVar37[6];
                                  }
                                  ppppppbVar29 = (byte ******)
                                                 (ulong)(*(byte *)(pppppppbVar37 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppbVar29 = pppppppbVar37[5];
                                  }
                                  bVar39 = (*(byte *)(pppppppbVar35 + 4) & 1) != 0;
                                  ppppppbVar30 = (byte ******)((long)pppppppbVar35 + 0x21);
                                  if (bVar39) {
                                    ppppppbVar30 = pppppppbVar35[6];
                                  }
                                  ppppppbVar26 = (byte ******)
                                                 (ulong)(*(byte *)(pppppppbVar35 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppbVar26 = pppppppbVar35[5];
                                  }
                                  ppppppbVar24 = ppppppbVar29;
                                  if (ppppppbVar26 < ppppppbVar29) {
                                    ppppppbVar24 = ppppppbVar26;
                                  }
                                  iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                                  pppppppbVar34 = pppppppbStack_680;
                                  if (iVar8 == 0) {
                                    if (ppppppbVar29 < ppppppbVar26) goto LAB_0624ae20;
                                  }
                                  else if (iVar8 < 0) goto LAB_0624ae20;
LAB_0624ad97:
                                  pppppppbVar17 = pppppppbVar34;
                                  if (pppppppbVar14 != (byte *******)0x0) {
                                    do {
                                      pppppppbVar34 = pppppppbVar14;
                                      bVar39 = (*(byte *)(pppppppbVar34 + 4) & 1) != 0;
                                      ppppppbVar11 = (byte ******)((long)pppppppbVar34 + 0x21);
                                      if (bVar39) {
                                        ppppppbVar11 = pppppppbVar34[6];
                                      }
                                      ppppppbVar29 = (byte ******)
                                                     (ulong)(*(byte *)(pppppppbVar34 + 4) >> 1);
                                      if (bVar39) {
                                        ppppppbVar29 = pppppppbVar34[5];
                                      }
                                      ppppppbVar24 = ppppppbVar26;
                                      if (ppppppbVar29 < ppppppbVar26) {
                                        ppppppbVar24 = ppppppbVar29;
                                      }
                                      iVar8 = memcmp(ppppppbVar30,ppppppbVar11,ppppppbVar24);
                                      if (iVar8 == 0) {
                                        if (ppppppbVar26 < ppppppbVar29) goto LAB_0624ad90;
                                      }
                                      else if (iVar8 < 0) goto LAB_0624ad90;
                                      iVar8 = memcmp(ppppppbVar11,ppppppbVar30,ppppppbVar24);
                                      if (iVar8 == 0) {
                                        if (ppppppbVar26 <= ppppppbVar29) goto LAB_0624ae37;
                                      }
                                      else if (-1 < iVar8) goto LAB_0624ae37;
                                      pppppppbVar14 = (byte *******)pppppppbVar34[1];
                                      if ((byte *******)pppppppbVar34[1] == (byte *******)0x0) {
                                        pppppppbVar17 = pppppppbVar34 + 1;
                                        break;
                                      }
                                    } while( true );
                                  }
LAB_0624ae50:
                                  pppppppbVar37 =
                                       (byte *******)
                                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                                  if (pppppppbVar37 == (byte *******)0x0) {
                                    func_0x0eec74c0(0x38,0);
                                  }
                                  pppppppbVar14 = pppppppbStack_5a8;
                                  _auStack_6a0 = pppppppbStack_5a8;
                                  uStack_698 = (byte *******)0x0;
                                  auStack_6a8 = (undefined1  [8])pppppppbVar37;
                                  if (((ulong)pppppppbVar35[4] & 1) == 0) {
                                    pppppppbVar37[6] = pppppppbVar35[6];
                                    ppppppbVar11 = pppppppbVar35[5];
                                    pppppppbVar37[4] = pppppppbVar35[4];
                                    pppppppbVar37[5] = ppppppbVar11;
                                  }
                                  else {
                                    func_0x0412e5e0(pppppppbVar37 + 4,pppppppbVar35[6],
                                                    pppppppbVar35[5]);
                                  }
                                  *pppppppbVar37 = (byte ******)0x0;
                                  pppppppbVar37[1] = (byte ******)0x0;
                                  pppppppbVar37[2] = (byte ******)pppppppbVar34;
                                  *pppppppbVar17 = (byte ******)pppppppbVar37;
                                  ppppppbVar11 = (byte ******)**pppppppbVar14;
                                  if (ppppppbVar11 != (byte ******)0x0) {
                                    *pppppppbVar14 = ppppppbVar11;
                                  }
                                  pppppppbVar14 = (byte *******)*pppppppbStack_680;
                                  *(bool *)(pppppppbVar37 + 3) = pppppppbVar37 == pppppppbVar14;
                                  if (pppppppbVar37 != pppppppbVar14) {
                                    do {
                                      pppppppbVar17 = (byte *******)pppppppbVar37[2];
                                      if (*(byte *)(pppppppbVar17 + 3) != 0) break;
                                      pppppppbVar34 = (byte *******)pppppppbVar17[2];
                                      pppppppbVar25 = (byte *******)*pppppppbVar34;
                                      if (pppppppbVar17 == pppppppbVar25) {
                                        ppppppbVar11 = pppppppbVar34[1];
                                        if ((ppppppbVar11 != (byte ******)0x0) &&
                                           (*(byte *)(ppppppbVar11 + 3) == 0)) {
                                          *(byte *)(pppppppbVar17 + 3) = 1;
                                          *(bool *)(pppppppbVar34 + 3) =
                                               pppppppbVar34 == pppppppbVar14;
                                          *(byte *)(ppppppbVar11 + 3) = 1;
                                          goto LAB_0624aef0;
                                        }
                                        if (pppppppbVar37 != (byte *******)*pppppppbVar17) {
                                          pppppppbVar37 = (byte *******)pppppppbVar17[1];
                                          ppppppbVar11 = *pppppppbVar37;
                                          pppppppbVar17[1] = ppppppbVar11;
                                          if (ppppppbVar11 == (byte ******)0x0) {
                                            pppppppbVar37[2] = (byte ******)pppppppbVar34;
LAB_0624afc8:
                                            *pppppppbVar34 = (byte ******)pppppppbVar37;
                                          }
                                          else {
                                            ppppppbVar11[2] = (byte *****)pppppppbVar17;
                                            pppppppbVar34 = (byte *******)pppppppbVar17[2];
                                            pppppppbVar14 = (byte *******)*pppppppbVar34;
                                            pppppppbVar37[2] = (byte ******)pppppppbVar34;
                                            if (pppppppbVar17 == pppppppbVar14) goto LAB_0624afc8;
                                            pppppppbVar34[1] = (byte ******)pppppppbVar37;
                                          }
                                          *pppppppbVar37 = (byte ******)pppppppbVar17;
                                          pppppppbVar17[2] = (byte ******)pppppppbVar37;
                                          pppppppbVar34 = (byte *******)pppppppbVar37[2];
                                          pppppppbVar25 = (byte *******)*pppppppbVar34;
                                          pppppppbVar17 = pppppppbVar37;
                                        }
                                        *(byte *)(pppppppbVar17 + 3) = 1;
                                        *(byte *)(pppppppbVar34 + 3) = 0;
                                        ppppppbVar11 = pppppppbVar25[1];
                                        *pppppppbVar34 = ppppppbVar11;
                                        if (ppppppbVar11 != (byte ******)0x0) {
                                          ppppppbVar11[2] = (byte *****)pppppppbVar34;
                                        }
                                        ppppppbVar11 = pppppppbVar34[2];
                                        pppppppbVar25[2] = ppppppbVar11;
                                        if (pppppppbVar34 == (byte *******)*ppppppbVar11) {
                                          *ppppppbVar11 = (byte *****)pppppppbVar25;
                                        }
                                        else {
                                          ppppppbVar11[1] = (byte *****)pppppppbVar25;
                                        }
                                        pppppppbVar25[1] = (byte ******)pppppppbVar34;
                                        pppppppbVar34[2] = (byte ******)pppppppbVar25;
                                        break;
                                      }
                                      if ((pppppppbVar25 == (byte *******)0x0) ||
                                         (*(byte *)(pppppppbVar25 + 3) != 0)) {
                                        pppppppbVar14 = (byte *******)*pppppppbVar17;
                                        if (pppppppbVar37 == pppppppbVar14) {
                                          ppppppbVar11 = pppppppbVar14[1];
                                          *pppppppbVar17 = ppppppbVar11;
                                          if (ppppppbVar11 != (byte ******)0x0) {
                                            ppppppbVar11[2] = (byte *****)pppppppbVar17;
                                            pppppppbVar34 = (byte *******)pppppppbVar17[2];
                                          }
                                          pppppppbVar14[2] = (byte ******)pppppppbVar34;
                                          if (pppppppbVar17 == (byte *******)*pppppppbVar34) {
                                            *pppppppbVar34 = (byte ******)pppppppbVar14;
                                          }
                                          else {
                                            pppppppbVar34[1] = (byte ******)pppppppbVar14;
                                          }
                                          pppppppbVar14[1] = (byte ******)pppppppbVar17;
                                          pppppppbVar17[2] = (byte ******)pppppppbVar14;
                                          pppppppbVar34 = (byte *******)pppppppbVar14[2];
                                          pppppppbVar17 = pppppppbVar14;
                                        }
                                        *(byte *)(pppppppbVar17 + 3) = 1;
                                        *(byte *)(pppppppbVar34 + 3) = 0;
                                        ppppppbVar11 = pppppppbVar34[1];
                                        ppppppbVar29 = (byte ******)*ppppppbVar11;
                                        pppppppbVar34[1] = ppppppbVar29;
                                        if (ppppppbVar29 != (byte ******)0x0) {
                                          ppppppbVar29[2] = (byte *****)pppppppbVar34;
                                        }
                                        ppppppbVar29 = pppppppbVar34[2];
                                        ppppppbVar11[2] = (byte *****)ppppppbVar29;
                                        if (pppppppbVar34 == (byte *******)*ppppppbVar29) {
                                          *ppppppbVar29 = (byte *****)ppppppbVar11;
                                        }
                                        else {
                                          ppppppbVar29[1] = (byte *****)ppppppbVar11;
                                        }
                                        *ppppppbVar11 = (byte *****)pppppppbVar34;
                                        pppppppbVar34[2] = ppppppbVar11;
                                        break;
                                      }
                                      *(byte *)(pppppppbVar17 + 3) = 1;
                                      *(bool *)(pppppppbVar34 + 3) = pppppppbVar34 == pppppppbVar14;
                                      *(byte *)(pppppppbVar25 + 3) = 1;
LAB_0624aef0:
                                      pppppppbVar37 = pppppppbVar34;
                                    } while (pppppppbVar34 != pppppppbVar14);
                                  }
                                  pppppppbStack_5b0[9] =
                                       (byte ******)((long)pppppppbStack_5b0[9] + 1);
                                  pppppppbVar37 = (byte *******)pppppppbVar35[1];
                                  pppppppbVar14 = pppppppbVar35;
                                  if ((byte *******)pppppppbVar35[1] != (byte *******)0x0)
                                  goto LAB_0624b080;
LAB_0624b090:
                                  do {
                                    pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                    bVar39 = pppppppbVar14 != (byte *******)*pppppppbVar35;
                                    pppppppbVar14 = pppppppbVar35;
                                  } while (bVar39);
                                } while( true );
                              }
                              pppppppbVar37 = pppppppbStack_5b0;
                              *pppppppbStack_5b0 = (byte ******)0x0;
                              pppppppbStack_5b0[1] = (byte ******)0x0;
                              pppppppbStack_5b0[2] = (byte ******)pppppppbStack_4a8;
                              *pppppppbStack_4a0 = (byte ******)pppppppbStack_5b0;
                              if ((byte *******)*pppppppbStack_618 != (byte *******)0x0) {
                                pppppppbStack_618 = (byte *******)*pppppppbStack_618;
                              }
                              *(bool *)(pppppppbVar37 + 3) = pppppppbVar37 == pppppppbStack_610;
                              if (pppppppbVar37 != pppppppbStack_610) {
                                do {
                                  while( true ) {
                                    pppppppbVar14 = (byte *******)pppppppbVar37[2];
                                    if (*(byte *)(pppppppbVar14 + 3) != 0) goto LAB_0624b2c0;
                                    pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                    pppppppbVar17 = (byte *******)*pppppppbVar35;
                                    if (pppppppbVar14 == pppppppbVar17) break;
                                    if ((pppppppbVar17 == (byte *******)0x0) ||
                                       (*(byte *)(pppppppbVar17 + 3) != 0)) {
                                      pppppppbVar17 = (byte *******)*pppppppbVar14;
                                      if (pppppppbVar37 == pppppppbVar17) {
                                        ppppppbVar11 = pppppppbVar17[1];
                                        *pppppppbVar14 = ppppppbVar11;
                                        if (ppppppbVar11 != (byte ******)0x0) {
                                          ppppppbVar11[2] = (byte *****)pppppppbVar14;
                                          pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                        }
                                        pppppppbVar17[2] = (byte ******)pppppppbVar35;
                                        if (pppppppbVar14 == (byte *******)*pppppppbVar35) {
                                          *pppppppbVar35 = (byte ******)pppppppbVar17;
                                        }
                                        else {
                                          pppppppbVar35[1] = (byte ******)pppppppbVar17;
                                        }
                                        pppppppbVar17[1] = (byte ******)pppppppbVar14;
                                        pppppppbVar14[2] = (byte ******)pppppppbVar17;
                                        pppppppbVar35 = (byte *******)pppppppbVar17[2];
                                        pppppppbVar14 = pppppppbVar17;
                                      }
                                      *(byte *)(pppppppbVar14 + 3) = 1;
                                      *(byte *)(pppppppbVar35 + 3) = 0;
                                      ppppppbVar11 = pppppppbVar35[1];
                                      ppppppbVar29 = (byte ******)*ppppppbVar11;
                                      pppppppbVar35[1] = ppppppbVar29;
                                      if (ppppppbVar29 != (byte ******)0x0) {
                                        ppppppbVar29[2] = (byte *****)pppppppbVar35;
                                      }
                                      ppppppbVar29 = pppppppbVar35[2];
                                      ppppppbVar11[2] = (byte *****)ppppppbVar29;
                                      if (pppppppbVar35 == (byte *******)*ppppppbVar29) {
                                        *ppppppbVar29 = (byte *****)ppppppbVar11;
                                      }
                                      else {
                                        ppppppbVar29[1] = (byte *****)ppppppbVar11;
                                      }
                                      *ppppppbVar11 = (byte *****)pppppppbVar35;
                                      pppppppbVar35[2] = ppppppbVar11;
                                      goto LAB_0624b2c0;
                                    }
                                    *(byte *)(pppppppbVar14 + 3) = 1;
                                    *(bool *)(pppppppbVar35 + 3) =
                                         pppppppbVar35 == pppppppbStack_610;
                                    *(byte *)(pppppppbVar17 + 3) = 1;
                                    pppppppbVar37 = pppppppbVar35;
                                    if (pppppppbVar35 == pppppppbStack_610) goto LAB_0624b2c0;
                                  }
                                  ppppppbVar11 = pppppppbVar35[1];
                                  if ((ppppppbVar11 == (byte ******)0x0) ||
                                     (*(char *)(ppppppbVar11 + 3) != '\0')) {
                                    if (pppppppbVar37 != (byte *******)*pppppppbVar14) {
                                      pppppppbVar37 = (byte *******)pppppppbVar14[1];
                                      ppppppbVar11 = *pppppppbVar37;
                                      pppppppbVar14[1] = ppppppbVar11;
                                      if (ppppppbVar11 == (byte ******)0x0) {
                                        pppppppbVar37[2] = (byte ******)pppppppbVar35;
LAB_0624b223:
                                        *pppppppbVar35 = (byte ******)pppppppbVar37;
                                      }
                                      else {
                                        ppppppbVar11[2] = (byte *****)pppppppbVar14;
                                        pppppppbVar35 = (byte *******)pppppppbVar14[2];
                                        pppppppbVar17 = (byte *******)*pppppppbVar35;
                                        pppppppbVar37[2] = (byte ******)pppppppbVar35;
                                        if (pppppppbVar14 == pppppppbVar17) goto LAB_0624b223;
                                        pppppppbVar35[1] = (byte ******)pppppppbVar37;
                                      }
                                      *pppppppbVar37 = (byte ******)pppppppbVar14;
                                      pppppppbVar14[2] = (byte ******)pppppppbVar37;
                                      pppppppbVar35 = (byte *******)pppppppbVar37[2];
                                      pppppppbVar17 = (byte *******)*pppppppbVar35;
                                      pppppppbVar14 = pppppppbVar37;
                                    }
                                    *(byte *)(pppppppbVar14 + 3) = 1;
                                    *(byte *)(pppppppbVar35 + 3) = 0;
                                    ppppppbVar11 = pppppppbVar17[1];
                                    *pppppppbVar35 = ppppppbVar11;
                                    if (ppppppbVar11 != (byte ******)0x0) {
                                      ppppppbVar11[2] = (byte *****)pppppppbVar35;
                                    }
                                    ppppppbVar11 = pppppppbVar35[2];
                                    pppppppbVar17[2] = ppppppbVar11;
                                    if (pppppppbVar35 == (byte *******)*ppppppbVar11) {
                                      *ppppppbVar11 = (byte *****)pppppppbVar17;
                                    }
                                    else {
                                      ppppppbVar11[1] = (byte *****)pppppppbVar17;
                                    }
                                    pppppppbVar17[1] = (byte ******)pppppppbVar35;
                                    pppppppbVar35[2] = (byte ******)pppppppbVar17;
                                    break;
                                  }
                                  *(byte *)(pppppppbVar14 + 3) = 1;
                                  *(bool *)(pppppppbVar35 + 3) = pppppppbVar35 == pppppppbStack_610;
                                  *(undefined1 *)(ppppppbVar11 + 3) = 1;
                                  pppppppbVar37 = pppppppbVar35;
                                } while (pppppppbVar35 != pppppppbStack_610);
                              }
LAB_0624b2c0:
                              lStack_608 = lStack_608 + 1;
                            }
LAB_0624b2c8:
                            pppppppbVar37 = (byte *******)pppppppbStack_560[1];
                            pppppppbVar14 = pppppppbStack_560;
                            if ((byte *******)pppppppbStack_560[1] == (byte *******)0x0) {
                              do {
                                auVar15 = (undefined1  [8])pppppppbVar14[2];
                                bVar39 = pppppppbVar14 != *(byte ********)auVar15;
                                pppppppbVar14 = (byte *******)auVar15;
                              } while (bVar39);
                            }
                            else {
                              do {
                                auVar15 = (undefined1  [8])pppppppbVar37;
                                pppppppbVar37 = *(byte ********)auVar15;
                              } while (*(byte ********)auVar15 != (byte *******)0x0);
                            }
                          } while (auVar15 != (undefined1  [8])&pppppppbStack_670);
                        }
                        func_0x0629f1d0(pppppppbStack_670);
                        func_0x049dc470(&pppppppbStack_598,pppppppbStack_590);
                        func_0x0633c060(&lStack_508,ppppppbStack_540,ppppppbStack_540,
                                        &pppppppbStack_648);
                        func_0x0629f1d0(pppppppbStack_610);
                        func_0x049dc470(&pppppppbStack_630,pppppppbStack_628);
                        if (((ulong)pppppppbStack_648 & 1) != 0) {
                          func_0x0412a280(uStack_638,(ulong)pppppppbStack_648 & 0xfffffffffffffffe);
                        }
                      }
                      pppppppbVar37 = pppppppbStack_518;
                      if (pppppppbStack_518 == (byte *******)0x0) {
LAB_0624b4f0:
                        pppppppbStack_648 = (byte *******)&uStack_640;
                        uStack_640 = (byte *******)0x0;
                        uStack_638 = (byte *******)0x0;
                        func_0x0633ccd0(&pppppppbStack_520,pppppppbStack_568,pppppppbStack_568,
                                        &pppppppbStack_648);
                        func_0x049dc470(&pppppppbStack_648,uStack_640);
                        pppppppbVar37 = pppppppbStack_518;
                      }
                      else {
                        bVar39 = (*(byte *)(lStack_578 + 0x18) & 1) != 0;
                        lVar10 = lStack_578 + 0x19;
                        if (bVar39) {
                          lVar10 = *(long *)(lStack_578 + 0x28);
                        }
                        ppppppbVar11 = (byte ******)(ulong)(*(byte *)(lStack_578 + 0x18) >> 1);
                        if (bVar39) {
                          ppppppbVar11 = *(byte *******)(lStack_578 + 0x20);
                        }
                        pppppppbVar14 = pppppppbStack_518;
                        pppppppbVar35 = (byte *******)&pppppppbStack_518;
                        do {
                          pppppppbVar34 = pppppppbVar35;
                          pppppppbVar17 = pppppppbVar14;
                          bVar39 = (*(byte *)(pppppppbVar17 + 4) & 1) == 0;
                          ppppppbVar29 = pppppppbVar17[6];
                          if (bVar39) {
                            ppppppbVar29 = (byte ******)((long)pppppppbVar17 + 0x21);
                          }
                          ppppppbVar30 = (byte ******)(ulong)(*(byte *)(pppppppbVar17 + 4) >> 1);
                          if (!bVar39) {
                            ppppppbVar30 = pppppppbVar17[5];
                          }
                          ppppppbVar26 = ppppppbVar30;
                          if (ppppppbVar11 < ppppppbVar30) {
                            ppppppbVar26 = ppppppbVar11;
                          }
                          uVar9 = memcmp(ppppppbVar29,lVar10,ppppppbVar26);
                          if (uVar9 == 0) {
                            bVar39 = ppppppbVar30 < ppppppbVar11;
                            uVar9 = (uint)bVar39 << 3;
                          }
                          else {
                            bVar39 = SUB41(uVar9 >> 0x1f,0);
                            uVar9 = uVar9 >> 0x1c & 0xfffffff8;
                          }
                          pppppppbVar35 = pppppppbVar17;
                          if (bVar39 != false) {
                            pppppppbVar35 = pppppppbVar34;
                          }
                          pppppppbVar14 = *(byte ********)((long)pppppppbVar17 + (ulong)uVar9);
                        } while (*(byte ********)((long)pppppppbVar17 + (ulong)uVar9) !=
                                 (byte *******)0x0);
                        if ((byte ********)pppppppbVar35 == &pppppppbStack_518) goto LAB_0624b4f0;
                        pppppppbVar14 = pppppppbVar17;
                        if (bVar39 != false) {
                          pppppppbVar14 = pppppppbVar34;
                        }
                        ppppppbVar29 = (byte ******)((long)pppppppbVar17 + 0x21);
                        if (bVar39 != false) {
                          ppppppbVar29 = (byte ******)((long)pppppppbVar34 + 0x21);
                        }
                        bVar39 = (*(byte *)(pppppppbVar14 + 4) & 1) != 0;
                        if (bVar39) {
                          ppppppbVar29 = pppppppbVar14[6];
                        }
                        ppppppbVar30 = (byte ******)(ulong)(*(byte *)(pppppppbVar14 + 4) >> 1);
                        if (bVar39) {
                          ppppppbVar30 = pppppppbVar14[5];
                        }
                        ppppppbVar26 = ppppppbVar11;
                        if (ppppppbVar30 < ppppppbVar11) {
                          ppppppbVar26 = ppppppbVar30;
                        }
                        iVar8 = memcmp(lVar10,ppppppbVar29,ppppppbVar26);
                        if (iVar8 == 0) {
                          if (ppppppbVar11 < ppppppbVar30) goto LAB_0624b4f0;
                        }
                        else if (iVar8 < 0) goto LAB_0624b4f0;
                      }
                      pppppppbVar14 = (byte *******)&pppppppbStack_518;
                      pppppppbVar35 = pppppppbVar14;
                      if (pppppppbVar37 != (byte *******)0x0) {
                        bVar39 = (*(byte *)(lStack_578 + 0x18) & 1) != 0;
                        lVar10 = lStack_578 + 0x19;
                        if (bVar39) {
                          lVar10 = *(long *)(lStack_578 + 0x28);
                        }
                        ppppppbVar11 = (byte ******)(ulong)(*(byte *)(lStack_578 + 0x18) >> 1);
                        if (bVar39) {
                          ppppppbVar11 = *(byte *******)(lStack_578 + 0x20);
                        }
                        do {
                          while( true ) {
                            pppppppbVar14 = pppppppbVar37;
                            bVar39 = (*(byte *)(pppppppbVar14 + 4) & 1) != 0;
                            ppppppbVar29 = (byte ******)((long)pppppppbVar14 + 0x21);
                            if (bVar39) {
                              ppppppbVar29 = pppppppbVar14[6];
                            }
                            ppppppbVar30 = (byte ******)(ulong)(*(byte *)(pppppppbVar14 + 4) >> 1);
                            if (bVar39) {
                              ppppppbVar30 = pppppppbVar14[5];
                            }
                            ppppppbVar26 = ppppppbVar11;
                            if (ppppppbVar30 < ppppppbVar11) {
                              ppppppbVar26 = ppppppbVar30;
                            }
                            iVar8 = memcmp(lVar10,ppppppbVar29,ppppppbVar26);
                            if (iVar8 == 0) break;
                            if (-1 < iVar8) goto LAB_0624b5d5;
LAB_0624b580:
                            pppppppbVar35 = pppppppbVar14;
                            pppppppbVar37 = (byte *******)*pppppppbVar14;
                            if ((byte *******)*pppppppbVar14 == (byte *******)0x0)
                            goto LAB_0624b606;
                          }
                          if (ppppppbVar11 < ppppppbVar30) goto LAB_0624b580;
LAB_0624b5d5:
                          iVar8 = memcmp(ppppppbVar29,lVar10,ppppppbVar26);
                          if (iVar8 == 0) {
                            if (ppppppbVar11 <= ppppppbVar30) goto LAB_0624b878;
                          }
                          else if (-1 < iVar8) goto LAB_0624b878;
                          pppppppbVar37 = (byte *******)pppppppbVar14[1];
                        } while ((byte *******)pppppppbVar14[1] != (byte *******)0x0);
                        pppppppbVar35 = pppppppbVar14 + 1;
                      }
LAB_0624b606:
                      pppppppbVar37 =
                           (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                      if (pppppppbVar37 == (byte *******)0x0) {
                        func_0x0eec74c0(0x50,0);
                      }
                      uStack_640 = (byte *******)&pppppppbStack_520;
                      uStack_638 = (byte *******)0x0;
                      pppppppbStack_648 = pppppppbVar37;
                      if (((ulong)*pppppppbStack_568 & 1) == 0) {
                        pppppppbVar37[6] = pppppppbStack_568[2];
                        ppppppbVar11 = pppppppbStack_568[1];
                        pppppppbVar37[4] = *pppppppbStack_568;
                        pppppppbVar37[5] = ppppppbVar11;
                      }
                      else {
                        func_0x0412e5e0(pppppppbVar37 + 4,*(undefined8 *)(lStack_578 + 0x28),
                                        *(undefined8 *)(lStack_578 + 0x20));
                      }
                      pppppppbVar37[8] = (byte ******)0x0;
                      pppppppbVar37[9] = (byte ******)0x0;
                      pppppppbVar37[7] = (byte ******)(pppppppbVar37 + 8);
                      *pppppppbVar37 = (byte ******)0x0;
                      pppppppbVar37[1] = (byte ******)0x0;
                      pppppppbVar37[2] = (byte ******)pppppppbVar14;
                      *pppppppbVar35 = (byte ******)pppppppbVar37;
                      if ((byte *******)*pppppppbStack_520 != (byte *******)0x0) {
                        pppppppbStack_520 = (byte *******)*pppppppbStack_520;
                      }
                      *(bool *)(pppppppbVar37 + 3) = pppppppbVar37 == pppppppbStack_518;
                      pppppppbVar14 = pppppppbVar37;
                      if (pppppppbVar37 != pppppppbStack_518) {
                        do {
                          while( true ) {
                            pppppppbVar35 = (byte *******)pppppppbVar14[2];
                            if (*(byte *)(pppppppbVar35 + 3) != 0) goto LAB_0624b870;
                            pppppppbVar17 = (byte *******)pppppppbVar35[2];
                            pppppppbVar34 = (byte *******)*pppppppbVar17;
                            if (pppppppbVar35 == pppppppbVar34) break;
                            if ((pppppppbVar34 == (byte *******)0x0) ||
                               (*(byte *)(pppppppbVar34 + 3) != 0)) {
                              pppppppbVar34 = (byte *******)*pppppppbVar35;
                              if (pppppppbVar14 == pppppppbVar34) {
                                ppppppbVar11 = pppppppbVar34[1];
                                *pppppppbVar35 = ppppppbVar11;
                                if (ppppppbVar11 != (byte ******)0x0) {
                                  ppppppbVar11[2] = (byte *****)pppppppbVar35;
                                  pppppppbVar17 = (byte *******)pppppppbVar35[2];
                                }
                                pppppppbVar34[2] = (byte ******)pppppppbVar17;
                                if (pppppppbVar35 == (byte *******)*pppppppbVar17) {
                                  *pppppppbVar17 = (byte ******)pppppppbVar34;
                                }
                                else {
                                  pppppppbVar17[1] = (byte ******)pppppppbVar34;
                                }
                                pppppppbVar34[1] = (byte ******)pppppppbVar35;
                                pppppppbVar35[2] = (byte ******)pppppppbVar34;
                                pppppppbVar17 = (byte *******)pppppppbVar34[2];
                                pppppppbVar35 = pppppppbVar34;
                              }
                              *(byte *)(pppppppbVar35 + 3) = 1;
                              *(byte *)(pppppppbVar17 + 3) = 0;
                              ppppppbVar11 = pppppppbVar17[1];
                              ppppppbVar29 = (byte ******)*ppppppbVar11;
                              pppppppbVar17[1] = ppppppbVar29;
                              if (ppppppbVar29 != (byte ******)0x0) {
                                ppppppbVar29[2] = (byte *****)pppppppbVar17;
                              }
                              ppppppbVar29 = pppppppbVar17[2];
                              ppppppbVar11[2] = (byte *****)ppppppbVar29;
                              if (pppppppbVar17 == (byte *******)*ppppppbVar29) {
                                *ppppppbVar29 = (byte *****)ppppppbVar11;
                              }
                              else {
                                ppppppbVar29[1] = (byte *****)ppppppbVar11;
                              }
                              *ppppppbVar11 = (byte *****)pppppppbVar17;
                              pppppppbVar17[2] = ppppppbVar11;
                              goto LAB_0624b870;
                            }
                            *(byte *)(pppppppbVar35 + 3) = 1;
                            *(bool *)(pppppppbVar17 + 3) = pppppppbVar17 == pppppppbStack_518;
                            *(byte *)(pppppppbVar34 + 3) = 1;
                            pppppppbVar14 = pppppppbVar17;
                            if (pppppppbVar17 == pppppppbStack_518) goto LAB_0624b870;
                          }
                          ppppppbVar11 = pppppppbVar17[1];
                          if ((ppppppbVar11 == (byte ******)0x0) ||
                             (*(byte *)(ppppppbVar11 + 3) != 0)) {
                            if (pppppppbVar14 != (byte *******)*pppppppbVar35) {
                              pppppppbVar14 = (byte *******)pppppppbVar35[1];
                              ppppppbVar11 = *pppppppbVar14;
                              pppppppbVar35[1] = ppppppbVar11;
                              if (ppppppbVar11 == (byte ******)0x0) {
                                pppppppbVar14[2] = (byte ******)pppppppbVar17;
LAB_0624b7d0:
                                *pppppppbVar17 = (byte ******)pppppppbVar14;
                              }
                              else {
                                ppppppbVar11[2] = (byte *****)pppppppbVar35;
                                pppppppbVar17 = (byte *******)pppppppbVar35[2];
                                pppppppbVar34 = (byte *******)*pppppppbVar17;
                                pppppppbVar14[2] = (byte ******)pppppppbVar17;
                                if (pppppppbVar35 == pppppppbVar34) goto LAB_0624b7d0;
                                pppppppbVar17[1] = (byte ******)pppppppbVar14;
                              }
                              *pppppppbVar14 = (byte ******)pppppppbVar35;
                              pppppppbVar35[2] = (byte ******)pppppppbVar14;
                              pppppppbVar17 = (byte *******)pppppppbVar14[2];
                              pppppppbVar34 = (byte *******)*pppppppbVar17;
                              pppppppbVar35 = pppppppbVar14;
                            }
                            *(byte *)(pppppppbVar35 + 3) = 1;
                            *(byte *)(pppppppbVar17 + 3) = 0;
                            ppppppbVar11 = pppppppbVar34[1];
                            *pppppppbVar17 = ppppppbVar11;
                            if (ppppppbVar11 != (byte ******)0x0) {
                              ppppppbVar11[2] = (byte *****)pppppppbVar17;
                            }
                            ppppppbVar11 = pppppppbVar17[2];
                            pppppppbVar34[2] = ppppppbVar11;
                            if (pppppppbVar17 == (byte *******)*ppppppbVar11) {
                              *ppppppbVar11 = (byte *****)pppppppbVar34;
                            }
                            else {
                              ppppppbVar11[1] = (byte *****)pppppppbVar34;
                            }
                            pppppppbVar34[1] = (byte ******)pppppppbVar17;
                            pppppppbVar17[2] = (byte ******)pppppppbVar34;
                            break;
                          }
                          *(byte *)(pppppppbVar35 + 3) = 1;
                          *(bool *)(pppppppbVar17 + 3) = pppppppbVar17 == pppppppbStack_518;
                          *(byte *)(ppppppbVar11 + 3) = 1;
                          pppppppbVar14 = pppppppbVar17;
                        } while (pppppppbVar17 != pppppppbStack_518);
                      }
LAB_0624b870:
                      lStack_510 = lStack_510 + 1;
                      pppppppbVar14 = pppppppbVar37;
LAB_0624b878:
                      func_0x049dcb70(pppppppbVar14 + 7,pppppbStack_570);
                      pppppppbStack_648 = (byte *******)ppppppbStack_540;
                      lVar10 = func_0x0633cec0(&lStack_508,ppppppbStack_540,&pppppppbStack_648);
                      func_0x049dcb70(lVar10 + 0x40,lStack_578);
                      pppppppbStack_648 = pppppppbStack_568;
                      lVar28 = func_0x0633cec0(&lStack_508,pppppppbStack_568,&pppppppbStack_648);
                      lVar19 = lStack_578;
                      pbVar16 = (byte *)(lStack_578 + 0x30);
                      lVar10 = *(long *)(lVar28 + 0x60);
                      if (lVar10 == 0) {
LAB_0624b9e0:
                        pppppppbStack_648 = pppppppbStack_568;
                        lVar10 = func_0x0633cec0(&lStack_508,pppppppbStack_568,&pppppppbStack_648);
                        pppppppbStack_648 = (byte *******)&uStack_640;
                        uStack_640 = (byte *******)0x0;
                        uStack_638 = (byte *******)0x0;
                        func_0x0633ccd0(lVar10 + 0x58,pbVar16,pbVar16,&pppppppbStack_648);
                        func_0x049dc470(&pppppppbStack_648,uStack_640);
                      }
                      else {
                        lVar28 = lVar28 + 0x60;
                        bVar39 = (*(byte *)(lStack_578 + 0x30) & 1) != 0;
                        lVar31 = lStack_578 + 0x31;
                        if (bVar39) {
                          lVar31 = *(long *)(lStack_578 + 0x40);
                        }
                        lVar36 = lVar28;
                        uVar21 = (ulong)(*(byte *)(lStack_578 + 0x30) >> 1);
                        if (bVar39) {
                          uVar21 = *(ulong *)(lStack_578 + 0x38);
                        }
                        do {
                          bVar39 = (*(byte *)(lVar10 + 0x20) & 1) != 0;
                          lVar33 = lVar10 + 0x21;
                          if (bVar39) {
                            lVar33 = *(long *)(lVar10 + 0x30);
                          }
                          uVar23 = (ulong)(*(byte *)(lVar10 + 0x20) >> 1);
                          if (bVar39) {
                            uVar23 = *(ulong *)(lVar10 + 0x28);
                          }
                          uVar27 = uVar23;
                          if (uVar21 < uVar23) {
                            uVar27 = uVar21;
                          }
                          uVar9 = memcmp(lVar33,lVar31,uVar27);
                          if (uVar9 == 0) {
                            bVar39 = uVar23 < uVar21;
                            uVar9 = (uint)bVar39 << 3;
                          }
                          else {
                            bVar39 = SUB41(uVar9 >> 0x1f,0);
                            uVar9 = uVar9 >> 0x1c & 0xfffffff8;
                          }
                          if (bVar39 == false) {
                            lVar36 = lVar10;
                          }
                          lVar10 = *(long *)(lVar10 + (ulong)uVar9);
                        } while (lVar10 != 0);
                        if (lVar36 == lVar28) goto LAB_0624b9e0;
                        bVar39 = (*(byte *)(lVar36 + 0x20) & 1) != 0;
                        lVar10 = lVar36 + 0x21;
                        if (bVar39) {
                          lVar10 = *(long *)(lVar36 + 0x30);
                        }
                        uVar23 = (ulong)(*(byte *)(lVar36 + 0x20) >> 1);
                        if (bVar39) {
                          uVar23 = *(ulong *)(lVar36 + 0x28);
                        }
                        uVar27 = uVar21;
                        if (uVar23 < uVar21) {
                          uVar27 = uVar23;
                        }
                        iVar8 = memcmp(lVar31,lVar10,uVar27);
                        if (iVar8 == 0) {
                          if (uVar21 < uVar23) goto LAB_0624b9e0;
                        }
                        else if (iVar8 < 0) goto LAB_0624b9e0;
                      }
                      pppppppbStack_648 = pppppppbStack_568;
                      pppppppbStack_680 =
                           (byte *******)
                           func_0x0633cec0(&lStack_508,pppppppbStack_568,&pppppppbStack_648);
                      uStack_580 = pppppppbStack_680 + 0xc;
                      pppppppbVar37 = (byte *******)pppppppbStack_680[0xc];
                      pppppppbVar14 = uStack_580;
                      pppppppbVar35 = uStack_580;
                      pppppppbStack_5a8 = pppppppbStack_680;
                      if (pppppppbVar37 != (byte *******)0x0) {
                        bVar39 = (*(byte *)(lStack_578 + 0x30) & 1) != 0;
                        lVar10 = lStack_578 + 0x31;
                        if (bVar39) {
                          lVar10 = *(long *)(lStack_578 + 0x40);
                        }
                        ppppppbVar11 = (byte ******)(ulong)(*(byte *)(lStack_578 + 0x30) >> 1);
                        if (bVar39) {
                          ppppppbVar11 = *(byte *******)(lStack_578 + 0x38);
                        }
                        do {
                          while( true ) {
                            pppppppbVar17 = pppppppbVar37;
                            bVar39 = (*(byte *)(pppppppbVar17 + 4) & 1) != 0;
                            ppppppbVar29 = (byte ******)((long)pppppppbVar17 + 0x21);
                            if (bVar39) {
                              ppppppbVar29 = pppppppbVar17[6];
                            }
                            ppppppbVar30 = (byte ******)(ulong)(*(byte *)(pppppppbVar17 + 4) >> 1);
                            if (bVar39) {
                              ppppppbVar30 = pppppppbVar17[5];
                            }
                            ppppppbVar26 = ppppppbVar11;
                            if (ppppppbVar30 < ppppppbVar11) {
                              ppppppbVar26 = ppppppbVar30;
                            }
                            iVar8 = memcmp(lVar10,ppppppbVar29,ppppppbVar26);
                            pppppppbVar14 = pppppppbVar17;
                            if (iVar8 == 0) break;
                            if (-1 < iVar8) goto LAB_0624bb15;
LAB_0624bac0:
                            pppppppbVar37 = (byte *******)*pppppppbVar17;
                            pppppppbVar35 = pppppppbVar17;
                            if ((byte *******)*pppppppbVar17 == (byte *******)0x0)
                            goto LAB_0624bb44;
                          }
                          if (ppppppbVar11 < ppppppbVar30) goto LAB_0624bac0;
LAB_0624bb15:
                          iVar8 = memcmp(ppppppbVar29,lVar10,ppppppbVar26);
                          if (iVar8 == 0) {
                            if (ppppppbVar11 <= ppppppbVar30) goto LAB_0624bdac;
                          }
                          else if (-1 < iVar8) goto LAB_0624bdac;
                          pppppppbVar37 = (byte *******)pppppppbVar17[1];
                        } while ((byte *******)pppppppbVar17[1] != (byte *******)0x0);
                        pppppppbVar35 = pppppppbVar17 + 1;
                      }
LAB_0624bb44:
                      pppppppbVar17 =
                           (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                      pppppppbVar37 = pppppppbStack_680;
                      if (pppppppbVar17 == (byte *******)0x0) {
                        func_0x0eec74c0(0x50,0);
                      }
                      pppppppbVar37 = pppppppbVar37 + 0xb;
                      uStack_638 = (byte *******)0x0;
                      pppppppbStack_648 = pppppppbVar17;
                      uStack_640 = pppppppbVar37;
                      if ((*pbVar16 & 1) == 0) {
                        pppppppbVar17[6] = *(byte *******)(lVar19 + 0x40);
                        ppppppbVar11 = *(byte *******)(lVar19 + 0x38);
                        pppppppbVar17[4] = *(byte *******)pbVar16;
                        pppppppbVar17[5] = ppppppbVar11;
                      }
                      else {
                        func_0x0412e5e0(pppppppbVar17 + 4,*(undefined8 *)(lStack_578 + 0x40),
                                        *(undefined8 *)(lStack_578 + 0x38));
                      }
                      pppppppbVar17[8] = (byte ******)0x0;
                      pppppppbVar17[9] = (byte ******)0x0;
                      pppppppbVar17[7] = (byte ******)(pppppppbVar17 + 8);
                      *pppppppbVar17 = (byte ******)0x0;
                      pppppppbVar17[1] = (byte ******)0x0;
                      pppppppbVar17[2] = (byte ******)pppppppbVar14;
                      *pppppppbVar35 = (byte ******)pppppppbVar17;
                      if ((byte ******)**pppppppbVar37 != (byte ******)0x0) {
                        *pppppppbVar37 = (byte ******)**pppppppbVar37;
                      }
                      pppppppbVar37 = (byte *******)*uStack_580;
                      *(bool *)(pppppppbVar17 + 3) = pppppppbVar17 == pppppppbVar37;
                      pppppppbVar14 = pppppppbVar17;
                      if (pppppppbVar17 != pppppppbVar37) {
                        do {
                          pppppppbVar35 = (byte *******)pppppppbVar14[2];
                          if (*(byte *)(pppppppbVar35 + 3) != 0) break;
                          pppppppbVar34 = (byte *******)pppppppbVar35[2];
                          pppppppbVar25 = (byte *******)*pppppppbVar34;
                          if (pppppppbVar35 == pppppppbVar25) {
                            ppppppbVar11 = pppppppbVar34[1];
                            if ((ppppppbVar11 == (byte ******)0x0) ||
                               (*(byte *)(ppppppbVar11 + 3) != 0)) {
                              if (pppppppbVar14 != (byte *******)*pppppppbVar35) {
                                pppppppbVar37 = (byte *******)pppppppbVar35[1];
                                ppppppbVar11 = *pppppppbVar37;
                                pppppppbVar35[1] = ppppppbVar11;
                                if (ppppppbVar11 == (byte ******)0x0) {
                                  pppppppbVar37[2] = (byte ******)pppppppbVar34;
LAB_0624bd00:
                                  *pppppppbVar34 = (byte ******)pppppppbVar37;
                                }
                                else {
                                  ppppppbVar11[2] = (byte *****)pppppppbVar35;
                                  pppppppbVar34 = (byte *******)pppppppbVar35[2];
                                  pppppppbVar14 = (byte *******)*pppppppbVar34;
                                  pppppppbVar37[2] = (byte ******)pppppppbVar34;
                                  if (pppppppbVar35 == pppppppbVar14) goto LAB_0624bd00;
                                  pppppppbVar34[1] = (byte ******)pppppppbVar37;
                                }
                                *pppppppbVar37 = (byte ******)pppppppbVar35;
                                pppppppbVar35[2] = (byte ******)pppppppbVar37;
                                pppppppbVar34 = (byte *******)pppppppbVar37[2];
                                pppppppbVar25 = (byte *******)*pppppppbVar34;
                                pppppppbVar35 = pppppppbVar37;
                              }
                              *(byte *)(pppppppbVar35 + 3) = 1;
                              *(byte *)(pppppppbVar34 + 3) = 0;
                              ppppppbVar11 = pppppppbVar25[1];
                              *pppppppbVar34 = ppppppbVar11;
                              if (ppppppbVar11 != (byte ******)0x0) {
                                ppppppbVar11[2] = (byte *****)pppppppbVar34;
                              }
                              ppppppbVar11 = pppppppbVar34[2];
                              pppppppbVar25[2] = ppppppbVar11;
                              if (pppppppbVar34 == (byte *******)*ppppppbVar11) {
                                *ppppppbVar11 = (byte *****)pppppppbVar25;
                              }
                              else {
                                ppppppbVar11[1] = (byte *****)pppppppbVar25;
                              }
                              pppppppbVar25[1] = (byte ******)pppppppbVar34;
                              pppppppbVar34[2] = (byte ******)pppppppbVar25;
                              break;
                            }
                            *(byte *)(pppppppbVar35 + 3) = 1;
                            *(bool *)(pppppppbVar34 + 3) = pppppppbVar34 == pppppppbVar37;
                            *(byte *)(ppppppbVar11 + 3) = 1;
                          }
                          else {
                            if ((pppppppbVar25 == (byte *******)0x0) ||
                               (*(byte *)(pppppppbVar25 + 3) != 0)) {
                              pppppppbVar37 = (byte *******)*pppppppbVar35;
                              if (pppppppbVar14 == pppppppbVar37) {
                                ppppppbVar11 = pppppppbVar37[1];
                                *pppppppbVar35 = ppppppbVar11;
                                if (ppppppbVar11 != (byte ******)0x0) {
                                  ppppppbVar11[2] = (byte *****)pppppppbVar35;
                                  pppppppbVar34 = (byte *******)pppppppbVar35[2];
                                }
                                pppppppbVar37[2] = (byte ******)pppppppbVar34;
                                if (pppppppbVar35 == (byte *******)*pppppppbVar34) {
                                  *pppppppbVar34 = (byte ******)pppppppbVar37;
                                }
                                else {
                                  pppppppbVar34[1] = (byte ******)pppppppbVar37;
                                }
                                pppppppbVar37[1] = (byte ******)pppppppbVar35;
                                pppppppbVar35[2] = (byte ******)pppppppbVar37;
                                pppppppbVar34 = (byte *******)pppppppbVar37[2];
                                pppppppbVar35 = pppppppbVar37;
                              }
                              *(byte *)(pppppppbVar35 + 3) = 1;
                              *(byte *)(pppppppbVar34 + 3) = 0;
                              ppppppbVar11 = pppppppbVar34[1];
                              ppppppbVar29 = (byte ******)*ppppppbVar11;
                              pppppppbVar34[1] = ppppppbVar29;
                              if (ppppppbVar29 != (byte ******)0x0) {
                                ppppppbVar29[2] = (byte *****)pppppppbVar34;
                              }
                              ppppppbVar29 = pppppppbVar34[2];
                              ppppppbVar11[2] = (byte *****)ppppppbVar29;
                              if (pppppppbVar34 == (byte *******)*ppppppbVar29) {
                                *ppppppbVar29 = (byte *****)ppppppbVar11;
                              }
                              else {
                                ppppppbVar29[1] = (byte *****)ppppppbVar11;
                              }
                              *ppppppbVar11 = (byte *****)pppppppbVar34;
                              pppppppbVar34[2] = ppppppbVar11;
                              break;
                            }
                            *(byte *)(pppppppbVar35 + 3) = 1;
                            *(bool *)(pppppppbVar34 + 3) = pppppppbVar34 == pppppppbVar37;
                            *(byte *)(pppppppbVar25 + 3) = 1;
                          }
                          pppppppbVar14 = pppppppbVar34;
                        } while (pppppppbVar34 != pppppppbVar37);
                      }
                      pppppppbStack_5a8[0xd] = (byte ******)((long)pppppppbStack_5a8[0xd] + 1);
LAB_0624bdac:
                      func_0x049dcb70(pppppppbVar17 + 7,pppppbStack_570);
                      lVar10 = lStack_578 + 0x90;
                    } while (lVar10 != lStack_348);
                  }
                  plVar13 = plStack_550;
                  if (plStack_550 != (long *)0x0) {
                    LOCK();
                    plVar1 = plStack_550 + 1;
                    lVar10 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar10 == 0) {
                      (**(code **)(*plStack_550 + 0x10))(plStack_550);
                      func_0x0412c2d0(plVar13);
                    }
                  }
                  plVar13 = plStack_370;
                  pppppppbStack_468 = (byte *******)&UNK_0f461228;
                  if (plStack_370 != (long *)0x0) {
                    LOCK();
                    plVar1 = plStack_370 + 1;
                    lVar10 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar10 == 0) {
                      (**(code **)(*plStack_370 + 0x10))(plStack_370);
                      func_0x0412c2d0(plVar13);
                    }
                  }
                  plVar13 = plStack_3a8;
                  uStack_3b0 = 0;
                  plStack_3a8 = (long *)0x0;
                  if (plVar13 == (long *)0x0) {
                    uStack_3a0 = 0;
joined_r0x0624c001:
                    if ((bStack_3c8 & 1) != 0) goto LAB_0624c007;
LAB_0624c1dc:
                    if ((bStack_3e0 & 1) == 0) goto LAB_0624c1ea;
LAB_0624c02e:
                    func_0x0412a280(uStack_3d0,CONCAT71(uStack_3df,bStack_3e0) & 0xfffffffffffffffe)
                    ;
                    if (cStack_3f0 != '\x01') goto LAB_0624c2de;
LAB_0624c1f8:
                    lVar19 = lStack_408;
                    puStack_420 = &UNK_0f4612c8;
                    lVar10 = lStack_400;
                    if (lStack_408 != 0) {
                      for (; lVar19 != lVar10; lVar10 = lVar10 + -0x90) {
                        if ((*(byte *)(lVar10 + -0x28) & 1) == 0) {
                          if ((*(byte *)(lVar10 + -0x40) & 1) == 0) goto LAB_0624c24e;
LAB_0624c278:
                          func_0x0412a280(*(undefined8 *)(lVar10 + -0x30),
                                          *(ulong *)(lVar10 + -0x40) & 0xfffffffffffffffe);
                          if ((*(byte *)(lVar10 + -0x58) & 1) != 0) goto LAB_0624c290;
LAB_0624c255:
                          bVar38 = *(byte *)(lVar10 + -0x70);
                        }
                        else {
                          func_0x0412a280(*(undefined8 *)(lVar10 + -0x18),
                                          *(ulong *)(lVar10 + -0x28) & 0xfffffffffffffffe);
                          if ((*(byte *)(lVar10 + -0x40) & 1) != 0) goto LAB_0624c278;
LAB_0624c24e:
                          if ((*(byte *)(lVar10 + -0x58) & 1) == 0) goto LAB_0624c255;
LAB_0624c290:
                          func_0x0412a280(*(undefined8 *)(lVar10 + -0x48),
                                          *(ulong *)(lVar10 + -0x58) & 0xfffffffffffffffe);
                          bVar38 = *(byte *)(lVar10 + -0x70);
                        }
                        if ((bVar38 & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar10 + -0x60),
                                          *(ulong *)(lVar10 + -0x70) & 0xfffffffffffffffe);
                        }
                      }
                      goto LAB_0624c2c6;
                    }
                  }
                  else {
                    LOCK();
                    plVar1 = plVar13 + 1;
                    lVar10 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar10 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                      func_0x0412c2d0(plVar13);
                      plVar13 = plStack_3a8;
                      if (plStack_3a8 != (long *)0x0) {
                        uStack_3a0 = 0;
                        LOCK();
                        plVar1 = plStack_3a8 + 1;
                        lVar10 = *plVar1;
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (lVar10 == 0) {
                          (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
                          func_0x0412c2d0(plVar13);
                          goto joined_r0x0624c001;
                        }
                      }
                    }
                    uStack_3a0 = 0;
                    if ((bStack_3c8 & 1) == 0) goto LAB_0624c1dc;
LAB_0624c007:
                    func_0x0412a280(uStack_3b8,CONCAT71(uStack_3c7,bStack_3c8) & 0xfffffffffffffffe)
                    ;
                    if ((bStack_3e0 & 1) != 0) goto LAB_0624c02e;
LAB_0624c1ea:
                    if (cStack_3f0 == '\x01') goto LAB_0624c1f8;
                  }
                }
LAB_0624c2de:
                pppppppbVar37 = uStack_458;
                pppppbVar12 = pppppbStack_4c0;
                if (uStack_458 != (byte *******)0x0) {
                  LOCK();
                  pppppppbVar14 = uStack_458 + 1;
                  ppppppbVar11 = *pppppppbVar14;
                  *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + -1);
                  UNLOCK();
                  if (ppppppbVar11 == (byte ******)0x0) {
                    (*(code *)(*uStack_458)[2])(uStack_458);
                    func_0x0412c2d0(pppppppbVar37);
                    pppppbVar12 = pppppbStack_4c0;
                  }
                }
              }
            }
            pppppbVar32 = pppppbStack_570 + 9;
          } while (pppppbVar32 != pppppbVar12);
        }
        ppppppbVar11 = ppppppbStack_540 + 9;
      } while (ppppppbStack_358 != ppppppbStack_540);
      goto LAB_0624c3a3;
    }
    uStack_59c = (uint)CONCAT71((int7)((ulong)ppppppbStack_530 >> 8),1);
  }
  uStack_64c = 0;
  uStack_6b1 = 1;
LAB_0624c3a3:
  pppppppbVar37 = pppppppbStack_4f8;
  if ((byte ********)pppppppbStack_520 != &pppppppbStack_518) {
    pppppppbVar14 = pppppppbStack_520;
    do {
      puVar18 = (undefined8 *)func_0x0633d4e0(&puStack_480,pppppppbVar14 + 4);
      if (puVar18 == &uStack_478) {
        if ((*plStack_658 == 0) &&
           (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)*plStack_658 == '\0') &&
           (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
        uStack_458 = (byte *******)0x0;
        pppppppbStack_450 = (byte *******)0x0;
        pppppppbStack_468 = (byte *******)0x0;
        uStack_460 = (byte ******)0x0;
        pppppppbStack_448 = (byte *******)0x0;
        if ((DAT_0f569528 & 1) == 0) {
          pppppppbStack_450 = _DAT_0f569538;
          uStack_460 = (byte ******)CONCAT71(uRam000000000f569529,DAT_0f569528);
          uStack_458 = _DAT_0f569530;
        }
        else {
          func_0x04885070(&uStack_460,_DAT_0f569538,_DAT_0f569530);
        }
        pppppppbStack_468 = _DAT_0f569520;
        auStack_6a8 = (undefined1  [8])0x0;
        _auStack_6a0 = (byte *******)0x0;
        uStack_698 = (byte *******)0x0;
        pppppppbStack_5d0 = (byte *******)((ulong)pppppppbStack_5d0 & 0xffffffffffffff00);
        pppppppbStack_5d8 = (byte *******)auStack_6a8;
        pppppppbVar37 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (pppppppbVar37 == (byte *******)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        uStack_698 = pppppppbVar37 + 5;
        uStack_640 = (byte *******)auStack_678;
        uStack_638 = (byte *******)&pppppppbStack_598;
        pppppppbStack_630 = (byte *******)((ulong)pppppppbStack_630 & 0xffffffffffffff00);
        pppppppbVar37[2] = (byte ******)0x0;
        pppppppbVar37[3] = (byte ******)0x0;
        *pppppppbVar37 = (byte ******)0x0;
        pppppppbVar37[1] = (byte ******)0x0;
        pppppppbVar37[4] = (byte ******)0x0;
        auStack_6a8 = (undefined1  [8])pppppppbVar37;
        auStack_678 = (undefined1  [8])pppppppbVar37;
        pppppppbStack_598 = pppppppbVar37;
        if ((byte ********)pppppppbVar37 != &pppppppbStack_468) {
          if (((ulong)uStack_460 & 1) == 0) {
            pppppppbVar37[3] = (byte ******)pppppppbStack_450;
            *(undefined4 *)(pppppppbVar37 + 1) = (undefined4)uStack_460;
            *(undefined4 *)((long)pppppppbVar37 + 0xc) = uStack_460._4_4_;
            *(undefined4 *)(pppppppbVar37 + 2) = (undefined4)uStack_458;
            *(undefined4 *)((long)pppppppbVar37 + 0x14) = uStack_458._4_4_;
          }
          else {
            _auStack_6a0 = pppppppbVar37;
            pppppppbStack_648 = (byte *******)auStack_6a8;
            func_0x04885070(pppppppbVar37 + 1,pppppppbStack_450,uStack_458);
          }
        }
        *pppppppbVar37 = (byte ******)pppppppbStack_468;
        _auStack_6a0 = pppppppbStack_598 + 5;
        uStack_638 = pppppppbVar14 + 7;
        uStack_640 = (byte *******)&UNK_0633d5d0;
        pppppppbStack_630 = (byte *******)&UNK_0633e820;
        pppppppbStack_648 = pppppppbVar14 + 4;
        func_0x0470d9a0(&pppppppbStack_5d8,&UNK_011ee744,0xa8,0xff,&pppppppbStack_648);
        pppppppbStack_1e0 = pppppppbStack_5c8;
        ppppppbStack_1f0 = (byte ******)pppppppbStack_5d8;
        uStack_1e8 = (ulong)pppppppbStack_5d0;
        pppppppbStack_5d8 = (byte *******)0x0;
        pppppppbStack_5d0 = (byte *******)0x0;
        pppppppbStack_5c8 = (byte *******)0x0;
        uStack_168 = 0;
        func_0x060aeeb0(uVar20,0,2,auStack_6a8,auStack_1f8,1);
        uVar21 = (ulong)uStack_168;
        if (uVar21 != 0xffffffff) {
          uVar21 = (**(code **)(&UNK_0f023e00 + uVar21 * 8))(&pppppppbStack_648,&ppppppbStack_1f0);
        }
        uStack_168 = 0xffffffff;
        if (((ulong)pppppppbStack_5d8 & 1) != 0) {
          uVar21 = func_0x0412a280(pppppppbStack_5c8,(ulong)pppppppbStack_5d8 & 0xfffffffffffffffe);
        }
        auVar15 = auStack_6a8;
        pppppppbVar37 = _auStack_6a0;
        if (auStack_6a8 != (undefined1  [8])0x0) {
          for (; auVar15 != (undefined1  [8])pppppppbVar37; pppppppbVar37 = pppppppbVar37 + -5) {
            if (((ulong)pppppppbVar37[-4] & 1) != 0) {
              func_0x0412a280(pppppppbVar37[-2],(ulong)pppppppbVar37[-4] & 0xfffffffffffffffe);
            }
          }
          _auStack_6a0 = (byte *******)auVar15;
          uVar21 = func_0x0412a280(auStack_6a8,(long)uStack_698 - (long)auStack_6a8);
        }
        if (((ulong)uStack_460 & 1) != 0) {
          uVar21 = func_0x0412a280(pppppppbStack_450,(ulong)uStack_460 & 0xfffffffffffffffe);
        }
        uStack_6b1 = 2;
        uStack_64c = (uint)CONCAT71((int7)(uVar21 >> 8),1);
        uStack_59c = 0;
        pppppppbVar37 = (byte *******)pppppppbVar14[1];
        if ((byte *******)pppppppbVar14[1] != (byte *******)0x0) goto LAB_0624c800;
LAB_0624c810:
        do {
          pppppppbVar35 = (byte *******)pppppppbVar14[2];
          bVar39 = pppppppbVar14 != (byte *******)*pppppppbVar35;
          pppppppbVar14 = pppppppbVar35;
        } while (bVar39);
      }
      else {
        pppppppbVar37 = (byte *******)pppppppbVar14[1];
        if ((byte *******)pppppppbVar14[1] == (byte *******)0x0) goto LAB_0624c810;
LAB_0624c800:
        do {
          pppppppbVar35 = pppppppbVar37;
          pppppppbVar37 = (byte *******)*pppppppbVar35;
        } while ((byte *******)*pppppppbVar35 != (byte *******)0x0);
      }
      pppppppbVar14 = pppppppbVar35;
      pppppppbVar37 = pppppppbStack_4f8;
    } while ((byte ********)pppppppbVar35 != &pppppppbStack_518);
  }
  do {
    if (pppppppbVar37 == (byte *******)0x0) {
      if ((uStack_64c & 1) != 0) {
        if ((*plStack_658 == 0) &&
           (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)*plStack_658 == '\0') &&
           (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
        puStack_308 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_308 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar6 = _UNK_01259aaf;
        uStack_318 = 0x21;
        uStack_310 = 0x1c;
        *(ulong *)(puStack_308 + 3) = CONCAT44(_UNK_01259aab,_DAT_01259aa7);
        *(undefined8 *)(puStack_308 + 5) = uVar6;
        uVar5 = _DAT_01259aa7;
        uVar4 = _UNK_01259aa3;
        uVar3 = _UNK_01259a9f;
        *puStack_308 = _DAT_01259a9b;
        puStack_308[1] = uVar3;
        puStack_308[2] = uVar4;
        puStack_308[3] = uVar5;
        *(undefined1 *)(puStack_308 + 7) = 0;
        uStack_2e0 = 0;
        puStack_2c8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_2c8 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar6 = _UNK_014609fb;
        uStack_2d8 = 0x21;
        uStack_2d0 = 0x1e;
        *(ulong *)((long)puStack_2c8 + 0xe) = CONCAT62(_UNK_014609f5,_DAT_014609f3);
        *(undefined8 *)((long)puStack_2c8 + 0x16) = uVar6;
        uVar5 = _UNK_014609ed;
        uVar4 = _UNK_014609e9;
        uVar3 = CONCAT22(_DAT_014609f3,_UNK_014609f1);
        *puStack_2c8 = _DAT_014609e5;
        puStack_2c8[1] = uVar4;
        puStack_2c8[2] = uVar5;
        puStack_2c8[3] = uVar3;
        *(undefined1 *)((long)puStack_2c8 + 0x1e) = 0;
        uStack_2a0 = 0;
        cStack_298 = '\x01';
        func_0x060af960(uVar20,0,uStack_6b1,&uStack_318);
        if (cStack_298 == '\x01') {
          if ((ulong)uStack_2a0 != 0xffffffff) {
            (**(code **)(&UNK_0f023ee0 + (ulong)uStack_2a0 * 8))(&pppppppbStack_468,&uStack_2d8);
          }
          uStack_2a0 = 0xffffffff;
        }
        if ((ulong)uStack_2e0 != 0xffffffff) {
          (**(code **)(&UNK_0f023ee0 + (ulong)uStack_2e0 * 8))(&pppppppbStack_468,&uStack_318);
        }
        uStack_2e0 = 0xffffffff;
      }
      ppppppbVar29 = ppppppbStack_538;
      ppppppbVar11 = ppppppbStack_530;
      if (ppppppbStack_538 != (byte ******)0x0) {
        while (ppppppbVar29 != ppppppbVar11) {
          func_0x049ea190(ppppppbVar11 + -9);
          ppppppbVar11 = ppppppbVar11 + -9;
        }
        ppppppbStack_530 = ppppppbVar29;
        func_0x0412a280(ppppppbStack_538,(long)pbStack_528 - (long)ppppppbStack_538);
      }
      func_0x0633bd60(pppppppbStack_4f8);
      lVar10 = lStack_508;
      lStack_508 = 0;
      if (lVar10 != 0) {
        func_0x0412a280(lVar10,lStack_500 << 3);
      }
      func_0x0629f1d0(pppppppbStack_518);
      func_0x049dc470(&puStack_480,uStack_478);
      return (ulong)uStack_59c & 0xffffffffffffff01;
    }
    pppppppbStack_680 = pppppppbVar37 + 0xc;
    uStack_580 = pppppppbVar37;
    if ((byte *******)pppppppbVar37[0xb] != pppppppbStack_680) {
      pppppppbStack_5a8 = pppppppbVar37 + 5;
      pppppppbStack_5b0 = (byte *******)((long)pppppppbVar37 + 0x29);
      pppppppbVar37 = (byte *******)pppppppbVar37[0xb];
      do {
        pppppppbStack_468 = pppppppbStack_5a8;
        lVar19 = func_0x0633cec0(&lStack_508,pppppppbStack_5a8,&pppppppbStack_468);
        lVar10 = *(long *)(lVar19 + 0x48);
        if (lVar10 == 0) {
LAB_0624c9d0:
          if ((*plStack_658 == 0) &&
             (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
             cVar7 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)*plStack_658 == '\0') &&
             (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f)
             , cVar7 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
          uStack_638 = (byte *******)0x0;
          pppppppbStack_630 = (byte *******)0x0;
          pppppppbStack_648 = (byte *******)0x0;
          uStack_640 = (byte *******)0x0;
          pppppppbStack_628 = (byte *******)0x0;
          if ((DAT_0f569528 & 1) == 0) {
            pppppppbStack_630 = _DAT_0f569538;
            uStack_640 = (byte *******)CONCAT71(uRam000000000f569529,DAT_0f569528);
            uStack_638 = _DAT_0f569530;
          }
      
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x1259a9b  Something unexpected occured
 * 0x1259aa7  expected occured
 * 0x14609e5  See Log Panel for more details
 * 0x14609f3  for more details
 */
