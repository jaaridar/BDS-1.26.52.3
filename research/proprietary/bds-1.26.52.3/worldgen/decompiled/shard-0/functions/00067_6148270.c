/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6248270 (ELF vaddr 0x6148270)
 * Label: string:[JIGSAW GENERATION FAILURE] Jigsaw block in structure [{}] h
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
  code ******ppppppcVar11;
  code *****pppppcVar12;
  long *plVar13;
  undefined7 uVar22;
  code *******pppppppcVar14;
  undefined1 auVar15 [8];
  byte *pbVar16;
  code *******pppppppcVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar23;
  code ******ppppppcVar24;
  code *******pppppppcVar25;
  code ******ppppppcVar26;
  ulong uVar27;
  long lVar28;
  code ******ppppppcVar29;
  code ******ppppppcVar30;
  long lVar31;
  code *****pppppcVar32;
  long lVar33;
  code *******pppppppcVar34;
  code *******pppppppcVar35;
  long lVar36;
  code *******pppppppcVar37;
  byte bVar38;
  bool bVar39;
  undefined1 uStack_6b1;
  undefined1 auStack_6a8 [8];
  undefined1 auStack_6a0 [4];
  undefined4 uStack_69c;
  undefined8 uStack_698;
  code *******pppppppcStack_690;
  undefined8 uStack_688;
  code *******pppppppcStack_680;
  undefined1 auStack_678 [8];
  code *******pppppppcStack_670;
  code *******pppppppcStack_668;
  long *plStack_658;
  uint uStack_64c;
  code *******pppppppcStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  code *******pppppppcStack_630;
  code *******pppppppcStack_628;
  long lStack_620;
  code *******pppppppcStack_618;
  code *******pppppppcStack_610;
  long lStack_608;
  undefined1 auStack_600 [8];
  code *******pppppppcStack_5f8;
  code *******pppppppcStack_5f0;
  undefined1 uStack_5e8;
  undefined8 uStack_5e4;
  undefined1 uStack_5dc;
  code *******pppppppcStack_5d8;
  code *******pppppppcStack_5d0;
  code *******pppppppcStack_5c8;
  code *******pppppppcStack_5c0;
  code *******pppppppcStack_5b0;
  code *******pppppppcStack_5a8;
  uint uStack_59c;
  code *******pppppppcStack_598;
  code *******pppppppcStack_590;
  long lStack_588;
  undefined8 uStack_580;
  long lStack_578;
  code *****pppppcStack_570;
  code *******pppppppcStack_568;
  code *******pppppppcStack_560;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  code ******ppppppcStack_540;
  code ******ppppppcStack_538;
  code ******ppppppcStack_530;
  byte *pbStack_528;
  code *******pppppppcStack_520;
  code *******pppppppcStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  code *******pppppppcStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  char *pcStack_4d8;
  long *plStack_4d0;
  long lStack_4c8;
  code *****pppppcStack_4c0;
  long lStack_4b8;
  code *******pppppppcStack_4b0;
  code *******pppppppcStack_4a8;
  code *******pppppppcStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  code *******pppppppcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  code *******pppppppcStack_450;
  code *******pppppppcStack_448;
  code *pcStack_440;
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
  code ******ppppppcStack_358;
  code *******pppppppcStack_350;
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
  code ******ppppppcStack_288;
  ulong uStack_280;
  code *******pppppppcStack_278;
  uint uStack_200;
  undefined1 auStack_1f8 [8];
  code ******ppppppcStack_1f0;
  ulong uStack_1e8;
  code *******pppppppcStack_1e0;
  uint uStack_168;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_d0;
  undefined1 auStack_c8 [8];
  code ******ppppppcStack_c0;
  ulong uStack_b8;
  code *******pppppppcStack_b0;
  uint uStack_38;
  
  puStack_480 = &uStack_478;
  uStack_478 = 0;
  uStack_470 = 0;
  pppppppcStack_520 = (code *******)&pppppppcStack_518;
  pppppppcStack_518 = (code *******)0x0;
  lStack_510 = 0;
  pppppppcStack_4f8 = (code *******)0x0;
  uStack_4f0 = 0;
  lStack_508 = 0;
  lStack_500 = 0;
  uStack_4e8 = 0x3f800000;
  plStack_658 = param_3;
  lStack_360 = param_1;
  lVar10 = func_0x06339cc0(param_1 + 0x220,param_2,param_2);
  lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x1a8);
  ppppppcStack_538 = (code ******)0x0;
  ppppppcStack_530 = (code ******)0x0;
  pbStack_528 = (byte *)0x0;
  lVar19 = *(long *)(lVar10 + 0x18);
  lVar10 = *(long *)(lVar10 + 0x20);
  pppppppcStack_468 = &ppppppcStack_538;
  uStack_460 = (code ******)((ulong)uStack_460 & 0xffffffffffffff00);
  lVar28 = lVar10 - lVar19;
  if (lVar28 == 0) {
    uStack_59c = (uint)CONCAT71((int7)((ulong)pppppppcStack_468 >> 8),1);
  }
  else {
    if (0x38e38e38e38e38e < (ulong)((lVar28 >> 3) * -0x71c71c71c71c71c7)) {
LAB_0624d16a:
      uVar20 = func_0x0629e680();
      uVar20 = FUN_04882e20(uVar20);
      uVar20 = FUN_04882e20(uVar20);
      func_0x060a99b0(&uStack_318);
      ppppppcVar29 = ppppppcStack_538;
      ppppppcVar11 = ppppppcStack_530;
      if (ppppppcStack_538 != (code ******)0x0) {
        while (ppppppcVar29 != ppppppcVar11) {
          func_0x049ea190(ppppppcVar11 + -9);
          ppppppcVar11 = ppppppcVar11 + -9;
        }
        ppppppcStack_530 = ppppppcVar29;
        func_0x0412a280(ppppppcStack_538,(long)pbStack_528 - (long)ppppppcStack_538);
      }
      func_0x0633bd60(pppppppcStack_4f8);
      lVar10 = lStack_508;
      lStack_508 = 0;
      if (lVar10 != 0) {
        func_0x0412a280(lVar10,lStack_500 << 3);
      }
      func_0x0629f1d0(pppppppcStack_518);
      func_0x049dc470(&puStack_480,uStack_478);
      _Unwind_Resume(uVar20);
      pcVar2 = (code *)swi(3);
      uVar21 = (*pcVar2)();
      return uVar21;
    }
    ppppppcVar11 = (code ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar28);
    if (ppppppcVar11 == (code ******)0x0) {
      FUN_0eec74c0(lVar28,0);
    }
    pbStack_528 = (byte *)((long)ppppppcVar11 + lVar28);
    lVar28 = 0;
    ppppppcStack_538 = ppppppcVar11;
    ppppppcStack_530 = ppppppcVar11;
    do {
      lVar31 = lVar28;
      func_0x0629e690((byte *)((long)ppppppcVar11 + lVar31),lVar19 + lVar31);
      lVar28 = lVar31 + 0x48;
    } while (lVar19 + lVar31 + 0x48 != lVar10);
    ppppppcStack_530 = (code ******)((long)ppppppcVar11 + lVar31 + 0x48);
    if (ppppppcStack_530 != ppppppcStack_538) {
      ppppppcStack_358 = (code ******)((long)ppppppcVar11 + lVar31);
      lStack_4b8 = lStack_360 + 0x80;
      uStack_6b1 = 1;
      uStack_64c = 0;
      uStack_59c = (uint)CONCAT71((int7)((ulong)lStack_4b8 >> 8),1);
      ppppppcVar11 = ppppppcStack_538;
      do {
        func_0x049dcb70(&puStack_480,ppppppcVar11,ppppppcVar11);
        pppppcVar32 = ppppppcVar11[3];
        pppppcVar12 = ppppppcVar11[4];
        ppppppcStack_540 = ppppppcVar11;
        pppppcStack_4c0 = pppppcVar12;
        if (pppppcVar32 != pppppcVar12) {
          pppppppcStack_350 = (code *******)((long)ppppppcVar11 + 1);
          do {
            pppppcStack_570 = pppppcVar32;
            if ((pppppcVar32 != (code *****)0x0) && (*(int *)(pppppcVar32 + 7) == 1)) {
              cVar7 = func_0x06427110(lStack_4b8);
              if (cVar7 == '\0') {
                if ((*plStack_658 == 0) &&
                   (cVar7 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f
                                        ), cVar7 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if ((*(char *)*plStack_658 == '\0') &&
                   (cVar7 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                         &UNK_013fab0f), cVar7 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
                uStack_458 = (code *******)0x0;
                pppppppcStack_450 = (code *******)0x0;
                pppppppcStack_468 = (code *******)0x0;
                uStack_460 = (code ******)0x0;
                pppppppcStack_448 = (code *******)0x0;
                if ((DAT_0f569528 & 1) == 0) {
                  pppppppcStack_450 = _DAT_0f569538;
                  uStack_460 = (code ******)CONCAT71(uRam000000000f569529,DAT_0f569528);
                  uStack_458 = _DAT_0f569530;
                }
                else {
                  func_0x04885070(&uStack_460,_DAT_0f569538,_DAT_0f569530);
                }
                pppppppcStack_468 = _DAT_0f569520;
                auStack_6a8 = (undefined1  [8])0x0;
                _auStack_6a0 = (code *******)0x0;
                uStack_698 = (code *******)0x0;
                pppppppcStack_5d8 = (code *******)auStack_6a8;
                pppppppcStack_5d0 = (code *******)((ulong)pppppppcStack_5d0 & 0xffffffffffffff00);
                pppppppcVar37 =
                     (code *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                if (pppppppcVar37 == (code *******)0x0) {
                  FUN_0eec74c0(0x28,0);
                }
                uStack_698 = pppppppcVar37 + 5;
                pppppppcStack_648 = (code *******)auStack_6a8;
                uStack_640 = (code *******)auStack_678;
                uStack_638 = (code *******)&pppppppcStack_598;
                pppppppcStack_630 = (code *******)((ulong)pppppppcStack_630 & 0xffffffffffffff00);
                pppppppcVar37[2] = (code ******)0x0;
                pppppppcVar37[3] = (code ******)0x0;
                *pppppppcVar37 = (code ******)0x0;
                pppppppcVar37[1] = (code ******)0x0;
                pppppppcVar37[4] = (code ******)0x0;
                auStack_6a8 = (undefined1  [8])pppppppcVar37;
                auStack_678 = (undefined1  [8])pppppppcVar37;
                pppppppcStack_598 = pppppppcVar37;
                if ((code ********)pppppppcVar37 != &pppppppcStack_468) {
                  if (((ulong)uStack_460 & 1) == 0) {
                    pppppppcVar37[3] = (code ******)pppppppcStack_450;
                    *(undefined4 *)(pppppppcVar37 + 1) = (undefined4)uStack_460;
                    *(undefined4 *)((long)pppppppcVar37 + 0xc) = uStack_460._4_4_;
                    *(undefined4 *)(pppppppcVar37 + 2) = (undefined4)uStack_458;
                    *(undefined4 *)((long)pppppppcVar37 + 0x14) = uStack_458._4_4_;
                  }
                  else {
                    _auStack_6a0 = pppppppcVar37;
                    func_0x04885070(pppppppcVar37 + 1,pppppppcStack_450,uStack_458);
                  }
                }
                *pppppppcVar37 = (code ******)pppppppcStack_468;
                _auStack_6a0 = pppppppcStack_598 + 5;
                bVar39 = (*(byte *)pppppcStack_570 & 1) != 0;
                pppppppcStack_648 = (code *******)((long)pppppcStack_570 + 1);
                if (bVar39) {
                  pppppppcStack_648 = (code *******)pppppcStack_570[2];
                }
                uStack_640 = (code *******)(ulong)(*(byte *)pppppcStack_570 >> 1);
                if (bVar39) {
                  uStack_640 = (code *******)pppppcStack_570[1];
                }
                uStack_638 = (code *******)ppppppcStack_540[2];
                pppppppcStack_630 = (code *******)ppppppcStack_540[1];
                if ((*(byte *)ppppppcStack_540 & 1) == 0) {
                  uStack_638 = pppppppcStack_350;
                  pppppppcStack_630 = (code *******)(ulong)(*(byte *)ppppppcStack_540 >> 1);
                }
                func_0x0470d9a0(&pppppppcStack_5d8,&UNK_012d8b7c,0x60,0xdd,&pppppppcStack_648);
                pppppppcStack_b0 = pppppppcStack_5c8;
                ppppppcStack_c0 = (code ******)pppppppcStack_5d8;
                uStack_b8 = (ulong)pppppppcStack_5d0;
                pppppppcStack_5d8 = (code *******)0x0;
                pppppppcStack_5d0 = (code *******)0x0;
                pppppppcStack_5c8 = (code *******)0x0;
                uStack_38 = 0;
                func_0x060aeeb0(uVar20,0,2,auStack_6a8,auStack_c8,1);
                uVar21 = (ulong)uStack_38;
                if (uVar21 != 0xffffffff) {
                  uVar21 = (**(code **)(&UNK_0f023e00 + uVar21 * 8))
                                     (&pppppppcStack_648,&ppppppcStack_c0);
                }
                uStack_38 = 0xffffffff;
                if (((ulong)pppppppcStack_5d8 & 1) != 0) {
                  uVar21 = func_0x0412a280(pppppppcStack_5c8,
                                           (ulong)pppppppcStack_5d8 & 0xfffffffffffffffe);
                }
                auVar15 = auStack_6a8;
                pppppppcVar37 = _auStack_6a0;
                if (auStack_6a8 != (undefined1  [8])0x0) {
                  for (; auVar15 != (undefined1  [8])pppppppcVar37;
                      pppppppcVar37 = pppppppcVar37 + -5) {
                    if (((ulong)pppppppcVar37[-4] & 1) != 0) {
                      func_0x0412a280(pppppppcVar37[-2],
                                      (ulong)pppppppcVar37[-4] & 0xfffffffffffffffe);
                    }
                  }
                  _auStack_6a0 = (code *******)auVar15;
                  uVar21 = func_0x0412a280(auStack_6a8,(long)uStack_698 - (long)auStack_6a8);
                }
                if (((ulong)uStack_460 & 1) != 0) {
                  uVar21 = func_0x0412a280(pppppppcStack_450,(ulong)uStack_460 & 0xfffffffffffffffe)
                  ;
                }
                uStack_6b1 = 2;
                uStack_64c = (uint)CONCAT71((int7)(uVar21 >> 8),1);
                uStack_59c = 0;
                pppppcVar12 = pppppcStack_4c0;
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
                func_0x0d335e80(&pppppppcStack_468,&pcStack_4d8,pppppcStack_570);
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
                uVar20 = func_0x06425580(lStack_4b8,pppppcStack_570);
                puStack_340 = &UNK_0f087d20;
                func_0x0d36cbb0(&pppppppcStack_598,uVar20);
                if (pppppppcStack_598 == pppppppcStack_590) {
                  uStack_580 = (code *******)((ulong)uStack_580._4_4_ << 0x20);
                  pppppppcVar37 = pppppppcStack_598;
                  pppppppcVar14 = pppppppcStack_590;
                  pppppppcVar35 = pppppppcStack_590;
                  if (pppppppcStack_598 == (code *******)0x0) goto LAB_0624bee3;
joined_r0x06249586:
                  for (; pppppppcVar17 = pppppppcStack_598, pppppppcStack_598 != pppppppcVar14;
                      pppppppcVar14 = pppppppcVar14 + -4) {
                    ppppppcVar11 = pppppppcVar14[-1];
                    pppppppcVar14[-1] = (code ******)0x0;
                    pppppppcStack_598 = pppppppcVar37;
                    pppppppcStack_590 = pppppppcVar35;
                    if (ppppppcVar11 != (code ******)0x0) {
                      (*(code *)(*ppppppcVar11)[1])();
                    }
                    pppppppcVar37 = pppppppcStack_598;
                    pppppppcVar35 = pppppppcStack_590;
                    pppppppcStack_598 = pppppppcVar17;
                  }
                  pppppppcStack_590 = pppppppcStack_598;
                  pppppppcStack_598 = pppppppcVar37;
                  func_0x0412a280(pppppppcVar37,lStack_588 - (long)pppppppcVar37);
                  if (((ulong)uStack_580 & 1) == 0) goto LAB_062495e0;
LAB_0624bef1:
                  plVar13 = plStack_370;
                  pppppppcStack_468 = (code *******)&UNK_0f461228;
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
                  pppppppcStack_5b0 = (code *******)((long)pppppcStack_570 + 1);
                  uStack_580 = (code *******)((ulong)uStack_580._4_4_ << 0x20);
                  pppppppcStack_680 = pppppppcStack_590;
                  pppppppcVar37 = pppppppcStack_590;
                  pppppppcVar14 = pppppppcStack_598;
                  do {
                    ppppppcVar11 = pppppppcVar14[3];
                    if ((ppppppcVar11 != (code ******)0x0) && (ppppppcVar11[3] != (code *****)0x0))
                    {
                      pppppppcStack_5f8 = (code *******)0x0;
                      pppppppcStack_5f0 = (code *******)0x0;
                      lStack_608 = 0;
                      auStack_600 = (undefined1  [8])0x0;
                      pppppppcStack_618 = (code *******)0x0;
                      pppppppcStack_610 = (code *******)0x0;
                      pppppppcStack_628 = (code *******)0x0;
                      lStack_620 = 0;
                      uStack_638 = (code *******)0x0;
                      pppppppcStack_630 = (code *******)0x0;
                      pppppppcStack_648 = (code *******)0x0;
                      uStack_640 = (code *******)0x0;
                      uStack_5e8 = 0;
                      uStack_5dc = 0;
                      uStack_5e4 = 0;
                      func_0x0d3b00e0(&pppppppcStack_648,ppppppcVar11,&puStack_340);
                      if (((ulong)auStack_600 & 1) == 0) {
                        pppppppcStack_668 = pppppppcStack_5f0;
                        auStack_678 = auStack_600;
                        pppppppcStack_670 = pppppppcStack_5f8;
                      }
                      else {
                        func_0x0412e5e0(auStack_678,pppppppcStack_5f0,pppppppcStack_5f8);
                      }
                      pppppppcVar37 = pppppppcStack_670;
                      uVar21 = (ulong)auStack_678 & 0xff;
                      pppppppcVar17 = (code *******)(ulong)(auStack_678[0] >> 1);
                      bVar38 = auStack_678[0] & 1;
                      pppppppcVar35 = pppppppcStack_670;
                      if (((ulong)auStack_678 & 1) == 0) {
                        pppppppcVar35 = pppppppcVar17;
                      }
                      if (pppppppcVar35 != (code *******)0x0) {
                        pppppppcVar34 = (code *******)(auStack_678 + 1);
                        if (((ulong)auStack_678 & 1) != 0) {
                          pppppppcVar34 = pppppppcStack_668;
                        }
                        lVar10 = func_0x0eee2ef0(pppppppcVar34,0x3a,pppppppcVar35);
                        pppppppcStack_5a8 = pppppppcVar34;
                        pppppppcVar34 = (code *******)(lVar10 - (long)pppppppcVar34);
                        if (pppppppcVar34 == (code *******)0xffffffffffffffff || lVar10 == 0)
                        goto LAB_06248d1a;
                        if (pppppppcVar34 < pppppppcVar35) {
                          pppppppcVar37 =
                               (code *******)((long)pppppppcVar35 - ((long)pppppppcVar34 + 1));
                          if (pppppppcVar37 < (code *******)0xfffffffffffffff8) {
                            if (pppppppcVar37 < (code *******)0x17) {
                              auStack_6a8[0] = (char)pppppppcVar37 * '\x02';
                              pppppppcVar17 = (code *******)(auStack_6a8 + 1);
                              if (pppppppcVar35 != (code *******)((long)pppppppcVar34 + 1))
                              goto LAB_06249178;
                              *(code *)((long)pppppppcVar17 + (long)pppppppcVar37) = (code)0x0;
                            }
                            else {
                              uVar21 = ((ulong)pppppppcVar37 | 7) + 1;
                              if (((ulong)pppppppcVar37 | 7) == 0x17) {
                                uVar21 = 0x1a;
                              }
                              pppppppcVar17 =
                                   (code *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
                              if (pppppppcVar17 == (code *******)0x0) {
                                FUN_0eec74c0(uVar21,0);
                              }
                              auStack_6a8 = (undefined1  [8])(uVar21 | 1);
                              _auStack_6a0 = pppppppcVar37;
                              uStack_698 = pppppppcVar17;
LAB_06249178:
                              func_0x0eee2ee0(pppppppcVar17,
                                              (code *)((long)pppppppcStack_5a8 + (long)pppppppcVar34
                                                      ) + 1,pppppppcVar37);
                              *(code *)((long)pppppppcVar17 + (long)pppppppcVar37) = (code)0x0;
                            }
                            if (((ulong)auStack_678 & 1) != 0) {
                              func_0x0412a280(pppppppcStack_668,
                                              (ulong)auStack_678 & 0xfffffffffffffffe);
                            }
                            pppppppcStack_668 = uStack_698;
                            auStack_678 = auStack_6a8;
                            auVar15 = auStack_678;
                            pppppppcStack_670 = _auStack_6a0;
                            auStack_678[0] = auStack_6a8[0];
                            uVar21 = (ulong)auStack_6a8 & 0xff;
                            bVar38 = auStack_678[0] & 1;
                            pppppppcVar17 = (code *******)(ulong)(auStack_678[0] >> 1);
                            pppppppcVar37 = _auStack_6a0;
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
                        pppppppcVar17 = pppppppcVar37;
                      }
                      if (pppppppcVar17 != (code *******)0x0) {
                        pppppppcVar37 = (code *******)(auStack_678 + 1);
                        if (bVar38 != 0) {
                          pppppppcVar37 = pppppppcStack_668;
                        }
                        pppppppcVar34 =
                             (code *******)func_0x0eee2ef0(pppppppcVar37,0x5b,pppppppcVar17);
                        pppppppcVar35 = (code *******)((long)pppppppcVar34 - (long)pppppppcVar37);
                        if (pppppppcVar35 != (code *******)0xffffffffffffffff &&
                            pppppppcVar34 != (code *******)0x0) {
                          if (pppppppcVar17 < pppppppcVar35) {
                            pppppppcVar35 = pppppppcVar17;
                          }
                          if ((code *******)0xfffffffffffffff7 < pppppppcVar35) goto LAB_0624d15b;
                          if (pppppppcVar35 < (code *******)0x17) {
                            auStack_6a8[0] = (char)pppppppcVar35 * '\x02';
                            pppppppcVar17 = (code *******)(auStack_6a8 + 1);
                            if (pppppppcVar34 != pppppppcVar37) goto LAB_0624910a;
                            *(code *)((long)pppppppcVar17 + (long)pppppppcVar35) = (code)0x0;
                          }
                          else {
                            uVar21 = ((ulong)pppppppcVar35 | 7) + 1;
                            if (((ulong)pppppppcVar35 | 7) == 0x17) {
                              uVar21 = 0x1a;
                            }
                            pppppppcVar17 =
                                 (code *******)
                                 (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
                            if (pppppppcVar17 == (code *******)0x0) {
                              FUN_0eec74c0(uVar21,0);
                            }
                            auStack_6a8 = (undefined1  [8])(uVar21 | 1);
                            _auStack_6a0 = pppppppcVar35;
                            uStack_698 = pppppppcVar17;
LAB_0624910a:
                            func_0x0eee2ee0(pppppppcVar17,pppppppcVar37,pppppppcVar35);
                            *(code *)((long)pppppppcVar17 + (long)pppppppcVar35) = (code)0x0;
                          }
                          if (((ulong)auStack_678 & 1) != 0) {
                            func_0x0412a280(pppppppcStack_668,
                                            (ulong)auStack_678 & 0xfffffffffffffffe);
                          }
                          pppppppcStack_668 = uStack_698;
                          auStack_678 = auStack_6a8;
                          pppppppcStack_670 = _auStack_6a0;
                          uVar21 = (ulong)auStack_6a8 & 0xff;
                        }
                      }
                      auStack_6a8 = (undefined1  [8])0x0;
                      if ((uVar21 & 1) == 0) {
                        pppppppcStack_690 = pppppppcStack_668;
                        _auStack_6a0 = (code *******)auStack_678;
                        uStack_698 = pppppppcStack_670;
                      }
                      else {
                        func_0x0412e5e0(auStack_6a0,pppppppcStack_668,pppppppcStack_670);
                      }
                      uStack_688 = 0;
                      if (((ulong)_auStack_6a0 & 1) == 0) {
                        if (auStack_6a0[0] >> 1 != 0) goto LAB_06248e45;
LAB_06248e90:
                        auStack_6a8 = (undefined1  [8])0x0;
                      }
                      else {
                        if (uStack_698 == (code *******)0x0) goto LAB_06248e90;
LAB_06248e45:
                        pppppppcVar37 = (code *******)(auStack_6a0 + 1);
                        if (((ulong)_auStack_6a0 & 1) != 0) {
                          pppppppcVar37 = pppppppcStack_690;
                        }
                        if ((pppppppcVar37 == (code *******)0x0) ||
                           (*(code *)pppppppcVar37 == (code)0x0)) goto LAB_06248e90;
                        uVar21 = func_0x0eee2e90(pppppppcVar37);
                        auStack_6a8 = (undefined1  [8])0xcbf29ce484222325;
                        if (uVar21 != 0) {
                          if (7 < uVar21) {
                            uVar23 = uVar21 & 0xfffffffffffffff8;
                            do {
                              auStack_6a8 = (undefined1  [8])
                                            (((((((((long)auStack_6a8 * 0x100000001b3 ^
                                                   (ulong)(byte)*(code *)pppppppcVar37) *
                                                   0x100000001b3 ^
                                                  (ulong)(byte)*(code *)((long)pppppppcVar37 + 1)) *
                                                  0x100000001b3 ^
                                                 (ulong)(byte)*(code *)((long)pppppppcVar37 + 2)) *
                                                 0x100000001b3 ^
                                                (ulong)(byte)*(code *)((long)pppppppcVar37 + 3)) *
                                                0x100000001b3 ^
                                               (ulong)(byte)*(code *)((long)pppppppcVar37 + 4)) *
                                               0x100000001b3 ^
                                              (ulong)(byte)*(code *)((long)pppppppcVar37 + 5)) *
                                              0x100000001b3 ^
                                             (ulong)(byte)*(code *)((long)pppppppcVar37 + 6)) *
                                             0x100000001b3 ^
                                            (ulong)(byte)*(code *)((long)pppppppcVar37 + 7));
                              pppppppcVar37 = pppppppcVar37 + 1;
                              uVar23 = uVar23 - 8;
                            } while (uVar23 != 0);
                          }
                          if ((uVar21 & 7) != 0) {
                            uVar23 = 0;
                            do {
                              auStack_6a8 = (undefined1  [8])
                                            ((long)auStack_6a8 * 0x100000001b3 ^
                                            (ulong)(byte)*(code *)((long)pppppppcVar37 + uVar23));
                              uVar23 = uVar23 + 1;
                            } while (((uint)uVar21 & 7) != uVar23);
                          }
                        }
                      }
                      lVar10 = func_0x0cc422f0(&DAT_0f6ff9e0,auStack_6a8,0,0,0);
                      if (((ulong)_auStack_6a0 & 1) != 0) {
                        func_0x0412a280(pppppppcStack_690,(ulong)_auStack_6a0 & 0xfffffffffffffffe);
                      }
                      if (lVar10 == 0) {
                        if ((*plStack_658 == 0) &&
                           (cVar7 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                                 &UNK_013fab0f), cVar7 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        if ((*(char *)*plStack_658 == '\0') &&
                           (cVar7 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                                 &UNK_013fab0f), cVar7 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
                        uStack_698 = (code *******)0x0;
                        pppppppcStack_690 = (code *******)0x0;
                        auStack_6a8 = (undefined1  [8])0x0;
                        _auStack_6a0 = (code *******)0x0;
                        uStack_688 = 0;
                        if ((DAT_0f569528 & 1) == 0) {
                          pppppppcStack_690 = _DAT_0f569538;
                          _auStack_6a0 = (code *******)CONCAT71(uRam000000000f569529,DAT_0f569528);
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
                          FUN_0eec74c0(0x28,0);
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
                            plVar13[3] = (long)pppppppcStack_690;
                            *(undefined1 (*) [4])(plVar13 + 1) = auStack_6a0;
                            *(undefined4 *)((long)plVar13 + 0xc) = uStack_69c;
                            *(undefined4 *)(plVar13 + 2) = (undefined4)uStack_698;
                            *(undefined4 *)((long)plVar13 + 0x14) = uStack_698._4_4_;
                          }
                          else {
                            plStack_550 = plVar13;
                            func_0x04885070(plVar13 + 1,pppppppcStack_690,uStack_698);
                          }
                        }
                        *plVar13 = (long)auStack_6a8;
                        pppppppcStack_5d8 = (code *******)pppppcStack_570[2];
                        pppppppcStack_5d0 = (code *******)pppppcStack_570[1];
                        if ((*(byte *)pppppcStack_570 & 1) == 0) {
                          pppppppcStack_5d8 = pppppppcStack_5b0;
                          pppppppcStack_5d0 = (code *******)(ulong)(*(byte *)pppppcStack_570 >> 1);
                        }
                        pppppppcStack_5c8 = pppppppcStack_5f0;
                        pppppppcStack_5c0 = pppppppcStack_5f8;
                        if (((ulong)auStack_600 & 1) == 0) {
                          pppppppcStack_5c8 = (code *******)(auStack_600 + 1);
                          pppppppcStack_5c0 = (code *******)((ulong)auStack_600 >> 1 & 0x7f);
                        }
                        plStack_550 = plVar1;
                        func_0x0470d9a0(&uStack_498,&UNK_012d8bdd,99,0xdd,&pppppppcStack_5d8);
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
                                             (&pppppppcStack_5d8,&uStack_158);
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
                          uVar21 = func_0x0412a280(pppppppcStack_690,
                                                   (ulong)_auStack_6a0 & 0xfffffffffffffffe);
                        }
                        uStack_6b1 = 2;
                        uVar22 = (undefined7)(uVar21 >> 8);
                        uStack_580 = (code *******)
                                     CONCAT44(uStack_580._4_4_,(int)CONCAT71(uVar22,1));
                        uStack_59c = 0;
                        uStack_64c = (uint)CONCAT71(uVar22,1);
                      }
                      pppppppcVar37 = pppppppcStack_680;
                      if (((ulong)auStack_678 & 1) != 0) {
                        func_0x0412a280(pppppppcStack_668,(ulong)auStack_678 & 0xfffffffffffffffe);
                        pppppppcVar37 = pppppppcStack_680;
                      }
                      pppppppcStack_680 = pppppppcVar37;
                      if (((ulong)auStack_600 & 1) != 0) {
                        func_0x0412a280(pppppppcStack_5f0,(ulong)auStack_600 & 0xfffffffffffffffe);
                      }
                      if (((ulong)pppppppcStack_618 & 1) != 0) {
                        func_0x0412a280(lStack_608,(ulong)pppppppcStack_618 & 0xfffffffffffffffe);
                      }
                      if (((ulong)pppppppcStack_630 & 1) != 0) {
                        func_0x0412a280(lStack_620,(ulong)pppppppcStack_630 & 0xfffffffffffffffe);
                      }
                      if (((ulong)pppppppcStack_648 & 1) != 0) {
                        func_0x0412a280(uStack_638,(ulong)pppppppcStack_648 & 0xfffffffffffffffe);
                      }
                    }
                    pppppppcVar14 = pppppppcVar14 + 4;
                  } while (pppppppcVar14 != pppppppcVar37);
                  pppppppcVar37 = pppppppcStack_598;
                  pppppppcVar14 = pppppppcStack_590;
                  pppppppcVar35 = pppppppcStack_590;
                  if (pppppppcStack_598 != (code *******)0x0) goto joined_r0x06249586;
LAB_0624bee3:
                  if (((ulong)uStack_580 & 1) != 0) goto LAB_0624bef1;
LAB_062495e0:
                  func_0x06425450(&plStack_558,lStack_4b8,&pppppppcStack_468);
                  lVar10 = plStack_558[2];
                  lStack_348 = plStack_558[3];
                  if (lVar10 != lStack_348) {
                    do {
                      pppppppcStack_568 = (code *******)(lVar10 + 0x18);
                      lStack_578 = lVar10;
                      lVar10 = func_0x0633bde0(&lStack_508);
                      if (lVar10 == 0) {
                        pppppppcStack_590 = (code *******)0x0;
                        lStack_588 = 0;
                        pppppppcStack_598 = (code *******)&pppppppcStack_590;
                        pppppppcStack_670 = (code *******)0x0;
                        pppppppcStack_668 = (code *******)0x0;
                        auStack_678 = (undefined1  [8])&pppppppcStack_670;
                        if (((ulong)*pppppppcStack_568 & 1) == 0) {
                          uStack_638 = (code *******)pppppppcStack_568[2];
                          pppppppcStack_648 = (code *******)*pppppppcStack_568;
                          uStack_640 = (code *******)pppppppcStack_568[1];
                          pppppppcStack_628 = (code *******)0x0;
                          lStack_620 = 0;
                          pppppppcStack_630 = (code *******)&pppppppcStack_628;
                        }
                        else {
                          func_0x0412e5e0(&pppppppcStack_648,*(undefined8 *)(lStack_578 + 0x28),
                                          *(undefined8 *)(lStack_578 + 0x20));
                          pppppppcVar37 = (code *******)&pppppppcStack_628;
                          pppppppcStack_628 = (code *******)0x0;
                          lStack_620 = 0;
                          pppppppcStack_630 = pppppppcVar37;
                          if ((code ********)pppppppcStack_598 != &pppppppcStack_590) {
                            pppppppcVar14 = (code *******)0x0;
                            pppppppcStack_680 = pppppppcVar37;
                            pppppppcVar35 = pppppppcStack_598;
LAB_06249850:
                            pppppppcVar17 = pppppppcVar37 + 1;
                            if (pppppppcVar14 == (code *******)0x0) {
                              pppppppcVar17 = (code *******)&pppppppcStack_628;
                              pppppppcVar37 = (code *******)&pppppppcStack_628;
                            }
                            if (*pppppppcVar17 == (code ******)0x0) goto LAB_06249880;
LAB_06249866:
                            pppppppcVar37 = (code *******)pppppppcVar35[1];
                            pppppppcVar14 = pppppppcVar35;
                            if ((code *******)pppppppcVar35[1] == (code *******)0x0)
                            goto LAB_06249ae0;
LAB_06249ad0:
                            do {
                              pppppppcVar35 = pppppppcVar37;
                              pppppppcVar37 = (code *******)*pppppppcVar35;
                            } while ((code *******)*pppppppcVar35 != (code *******)0x0);
                            do {
                              pppppppcVar14 = pppppppcStack_628;
                              pppppppcVar37 = (code *******)&pppppppcStack_628;
                              if ((code ********)pppppppcVar35 == &pppppppcStack_590) break;
                              pppppppcStack_680 = pppppppcStack_630;
                              if (pppppppcVar37 == pppppppcStack_630) goto LAB_06249850;
                              pppppppcVar17 = pppppppcStack_628;
                              pppppppcVar34 = (code *******)&pppppppcStack_628;
                              if (pppppppcStack_628 == (code *******)0x0) {
                                do {
                                  pppppppcVar37 = (code *******)pppppppcVar34[2];
                                  bVar39 = pppppppcVar34 == (code *******)*pppppppcVar37;
                                  pppppppcVar34 = pppppppcVar37;
                                } while (bVar39);
                              }
                              else {
                                do {
                                  pppppppcVar37 = pppppppcVar17;
                                  pppppppcVar17 = (code *******)pppppppcVar37[1];
                                } while ((code *******)pppppppcVar37[1] != (code *******)0x0);
                              }
                              bVar39 = ((byte)*(code *)(pppppppcVar37 + 4) & 1) != 0;
                              ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                              if (bVar39) {
                                ppppppcVar11 = pppppppcVar37[6];
                              }
                              ppppppcVar29 = (code ******)
                                             (ulong)((byte)*(code *)(pppppppcVar37 + 4) >> 1);
                              if (bVar39) {
                                ppppppcVar29 = pppppppcVar37[5];
                              }
                              bVar39 = ((byte)*(code *)(pppppppcVar35 + 4) & 1) != 0;
                              ppppppcVar30 = (code ******)((long)pppppppcVar35 + 0x21);
                              if (bVar39) {
                                ppppppcVar30 = pppppppcVar35[6];
                              }
                              ppppppcVar26 = (code ******)
                                             (ulong)((byte)*(code *)(pppppppcVar35 + 4) >> 1);
                              if (bVar39) {
                                ppppppcVar26 = pppppppcVar35[5];
                              }
                              ppppppcVar24 = ppppppcVar29;
                              if (ppppppcVar26 < ppppppcVar29) {
                                ppppppcVar24 = ppppppcVar26;
                              }
                              iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                              if (iVar8 == 0) {
                                if (ppppppcVar29 < ppppppcVar26) goto LAB_06249850;
                              }
                              else if (iVar8 < 0) goto LAB_06249850;
                              pppppppcVar37 = (code *******)&pppppppcStack_628;
LAB_062497c7:
                              pppppppcVar17 = pppppppcVar37;
                              if (pppppppcVar14 != (code *******)0x0) {
                                do {
                                  pppppppcVar37 = pppppppcVar14;
                                  bVar39 = ((byte)*(code *)(pppppppcVar37 + 4) & 1) != 0;
                                  ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                                  if (bVar39) {
                                    ppppppcVar11 = pppppppcVar37[6];
                                  }
                                  ppppppcVar29 = (code ******)
                                                 (ulong)((byte)*(code *)(pppppppcVar37 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppcVar29 = pppppppcVar37[5];
                                  }
                                  ppppppcVar24 = ppppppcVar26;
                                  if (ppppppcVar29 < ppppppcVar26) {
                                    ppppppcVar24 = ppppppcVar29;
                                  }
                                  iVar8 = func_0x0eee2ff0(ppppppcVar30,ppppppcVar11,ppppppcVar24);
                                  if (iVar8 == 0) {
                                    if (ppppppcVar26 < ppppppcVar29) goto LAB_062497c0;
                                  }
                                  else if (iVar8 < 0) goto LAB_062497c0;
                                  iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                                  if (iVar8 == 0) {
                                    if (ppppppcVar26 <= ppppppcVar29) goto LAB_06249866;
                                  }
                                  else if (-1 < iVar8) goto LAB_06249866;
                                  pppppppcVar14 = (code *******)pppppppcVar37[1];
                                  if ((code *******)pppppppcVar37[1] == (code *******)0x0) {
                                    pppppppcVar17 = pppppppcVar37 + 1;
                                    break;
                                  }
                                } while( true );
                              }
LAB_06249880:
                              pppppppcVar14 =
                                   (code *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                              if (pppppppcVar14 == (code *******)0x0) {
                                FUN_0eec74c0(0x38,0);
                              }
                              _auStack_6a0 = (code *******)&pppppppcStack_630;
                              uStack_698 = (code *******)0x0;
                              auStack_6a8 = (undefined1  [8])pppppppcVar14;
                              if (((ulong)pppppppcVar35[4] & 1) == 0) {
                                pppppppcVar14[6] = pppppppcVar35[6];
                                ppppppcVar11 = pppppppcVar35[5];
                                pppppppcVar14[4] = pppppppcVar35[4];
                                pppppppcVar14[5] = ppppppcVar11;
                                pppppppcVar34 = pppppppcStack_680;
                              }
                              else {
                                func_0x0412e5e0(pppppppcVar14 + 4,pppppppcVar35[6],pppppppcVar35[5])
                                ;
                                pppppppcVar34 = pppppppcStack_630;
                              }
                              *pppppppcVar14 = (code ******)0x0;
                              pppppppcVar14[1] = (code ******)0x0;
                              pppppppcVar14[2] = (code ******)pppppppcVar37;
                              *pppppppcVar17 = (code ******)pppppppcVar14;
                              if ((code *******)*pppppppcVar34 != (code *******)0x0) {
                                pppppppcStack_630 = (code *******)*pppppppcVar34;
                              }
                              *(bool *)(pppppppcVar14 + 3) = pppppppcVar14 == pppppppcStack_628;
                              if (pppppppcVar14 != pppppppcStack_628) {
                                do {
                                  while( true ) {
                                    pppppppcVar37 = (code *******)pppppppcVar14[2];
                                    if (*(byte *)(pppppppcVar37 + 3) != 0) goto LAB_06249ab0;
                                    pppppppcVar17 = (code *******)pppppppcVar37[2];
                                    pppppppcVar34 = (code *******)*pppppppcVar17;
                                    if (pppppppcVar37 == pppppppcVar34) break;
                                    if ((pppppppcVar34 == (code *******)0x0) ||
                                       (*(byte *)(pppppppcVar34 + 3) != 0)) {
                                      pppppppcVar34 = (code *******)*pppppppcVar37;
                                      if (pppppppcVar14 == pppppppcVar34) {
                                        ppppppcVar11 = pppppppcVar34[1];
                                        *pppppppcVar37 = ppppppcVar11;
                                        if (ppppppcVar11 != (code ******)0x0) {
                                          ppppppcVar11[2] = (code *****)pppppppcVar37;
                                          pppppppcVar17 = (code *******)pppppppcVar37[2];
                                        }
                                        pppppppcVar34[2] = (code ******)pppppppcVar17;
                                        if (pppppppcVar37 == (code *******)*pppppppcVar17) {
                                          *pppppppcVar17 = (code ******)pppppppcVar34;
                                        }
                                        else {
                                          pppppppcVar17[1] = (code ******)pppppppcVar34;
                                        }
                                        pppppppcVar34[1] = (code ******)pppppppcVar37;
                                        pppppppcVar37[2] = (code ******)pppppppcVar34;
                                        pppppppcVar17 = (code *******)pppppppcVar34[2];
                                        pppppppcVar37 = pppppppcVar34;
                                      }
                                      *(byte *)(pppppppcVar37 + 3) = 1;
                                      *(code *)(pppppppcVar17 + 3) = (code)0x0;
                                      ppppppcVar11 = pppppppcVar17[1];
                                      ppppppcVar29 = (code ******)*ppppppcVar11;
                                      pppppppcVar17[1] = ppppppcVar29;
                                      if (ppppppcVar29 != (code ******)0x0) {
                                        ppppppcVar29[2] = (code *****)pppppppcVar17;
                                      }
                                      ppppppcVar29 = pppppppcVar17[2];
                                      ppppppcVar11[2] = (code *****)ppppppcVar29;
                                      if (pppppppcVar17 == (code *******)*ppppppcVar29) {
                                        *ppppppcVar29 = (code *****)ppppppcVar11;
                                      }
                                      else {
                                        ppppppcVar29[1] = (code *****)ppppppcVar11;
                                      }
                                      *ppppppcVar11 = (code *****)pppppppcVar17;
                                      pppppppcVar17[2] = ppppppcVar11;
                                      goto LAB_06249ab0;
                                    }
                                    *(byte *)(pppppppcVar37 + 3) = 1;
                                    *(bool *)(pppppppcVar17 + 3) =
                                         pppppppcVar17 == pppppppcStack_628;
                                    *(byte *)(pppppppcVar34 + 3) = 1;
                                    pppppppcVar14 = pppppppcVar17;
                                    if (pppppppcVar17 == pppppppcStack_628) goto LAB_06249ab0;
                                  }
                                  ppppppcVar11 = pppppppcVar17[1];
                                  if ((ppppppcVar11 == (code ******)0x0) ||
                                     (*(code *)(ppppppcVar11 + 3) != (code)0x0)) {
                                    if (pppppppcVar14 != (code *******)*pppppppcVar37) {
                                      pppppppcVar14 = (code *******)pppppppcVar37[1];
                                      ppppppcVar11 = *pppppppcVar14;
                                      pppppppcVar37[1] = ppppppcVar11;
                                      if (ppppppcVar11 == (code ******)0x0) {
                                        pppppppcVar14[2] = (code ******)pppppppcVar17;
LAB_06249a13:
                                        *pppppppcVar17 = (code ******)pppppppcVar14;
                                      }
                                      else {
                                        ppppppcVar11[2] = (code *****)pppppppcVar37;
                                        pppppppcVar17 = (code *******)pppppppcVar37[2];
                                        pppppppcVar34 = (code *******)*pppppppcVar17;
                                        pppppppcVar14[2] = (code ******)pppppppcVar17;
                                        if (pppppppcVar37 == pppppppcVar34) goto LAB_06249a13;
                                        pppppppcVar17[1] = (code ******)pppppppcVar14;
                                      }
                                      *pppppppcVar14 = (code ******)pppppppcVar37;
                                      pppppppcVar37[2] = (code ******)pppppppcVar14;
                                      pppppppcVar17 = (code *******)pppppppcVar14[2];
                                      pppppppcVar34 = (code *******)*pppppppcVar17;
                                      pppppppcVar37 = pppppppcVar14;
                                    }
                                    *(byte *)(pppppppcVar37 + 3) = 1;
                                    *(code *)(pppppppcVar17 + 3) = (code)0x0;
                                    ppppppcVar11 = pppppppcVar34[1];
                                    *pppppppcVar17 = ppppppcVar11;
                                    if (ppppppcVar11 != (code ******)0x0) {
                                      ppppppcVar11[2] = (code *****)pppppppcVar17;
                                    }
                                    ppppppcVar11 = pppppppcVar17[2];
                                    pppppppcVar34[2] = ppppppcVar11;
                                    if (pppppppcVar17 == (code *******)*ppppppcVar11) {
                                      *ppppppcVar11 = (code *****)pppppppcVar34;
                                    }
                                    else {
                                      ppppppcVar11[1] = (code *****)pppppppcVar34;
                                    }
                                    pppppppcVar34[1] = (code ******)pppppppcVar17;
                                    pppppppcVar17[2] = (code ******)pppppppcVar34;
                                    break;
                                  }
                                  *(byte *)(pppppppcVar37 + 3) = 1;
                                  *(bool *)(pppppppcVar17 + 3) = pppppppcVar17 == pppppppcStack_628;
                                  *(code *)(ppppppcVar11 + 3) = (code)0x1;
                                  pppppppcVar14 = pppppppcVar17;
                                } while (pppppppcVar17 != pppppppcStack_628);
                              }
LAB_06249ab0:
                              lStack_620 = lStack_620 + 1;
                              pppppppcVar37 = (code *******)pppppppcVar35[1];
                              pppppppcVar14 = pppppppcVar35;
                              if ((code *******)pppppppcVar35[1] != (code *******)0x0)
                              goto LAB_06249ad0;
LAB_06249ae0:
                              do {
                                pppppppcVar35 = (code *******)pppppppcVar14[2];
                                bVar39 = pppppppcVar14 != (code *******)*pppppppcVar35;
                                pppppppcVar14 = pppppppcVar35;
                              } while (bVar39);
                            } while( true );
                          }
                        }
                        pppppppcStack_610 = (code *******)0x0;
                        lStack_608 = 0;
                        pppppppcStack_618 = (code *******)&pppppppcStack_610;
                        if (auStack_678 != (undefined1  [8])&pppppppcStack_670) {
                          pppppppcStack_560 = (code *******)auStack_678;
                          do {
                            pppppppcVar14 = pppppppcStack_610;
                            pppppppcVar37 = (code *******)&pppppppcStack_610;
                            if (pppppppcVar37 != pppppppcStack_618) {
                              pppppppcVar35 = pppppppcStack_610;
                              pppppppcVar17 = pppppppcVar37;
                              if (pppppppcStack_610 == (code *******)0x0) {
                                do {
                                  pppppppcVar37 = (code *******)pppppppcVar17[2];
                                  bVar39 = pppppppcVar17 == (code *******)*pppppppcVar37;
                                  pppppppcVar17 = pppppppcVar37;
                                } while (bVar39);
                              }
                              else {
                                do {
                                  pppppppcVar37 = pppppppcVar35;
                                  pppppppcVar35 = (code *******)pppppppcVar37[1];
                                } while ((code *******)pppppppcVar37[1] != (code *******)0x0);
                              }
                              bVar39 = ((byte)*(code *)(pppppppcVar37 + 4) & 1) != 0;
                              ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                              if (bVar39) {
                                ppppppcVar11 = pppppppcVar37[6];
                              }
                              ppppppcVar29 = (code ******)
                                             (ulong)((byte)*(code *)(pppppppcVar37 + 4) >> 1);
                              if (bVar39) {
                                ppppppcVar29 = pppppppcVar37[5];
                              }
                              bVar39 = ((byte)*(code *)(pppppppcStack_560 + 4) & 1) != 0;
                              ppppppcVar30 = (code ******)((long)pppppppcStack_560 + 0x21);
                              if (bVar39) {
                                ppppppcVar30 = pppppppcStack_560[6];
                              }
                              ppppppcVar26 = (code ******)
                                             (ulong)((byte)*(code *)(pppppppcStack_560 + 4) >> 1);
                              if (bVar39) {
                                ppppppcVar26 = pppppppcStack_560[5];
                              }
                              ppppppcVar24 = ppppppcVar29;
                              if (ppppppcVar26 < ppppppcVar29) {
                                ppppppcVar24 = ppppppcVar26;
                              }
                              iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                              if (iVar8 == 0) {
                                if (ppppppcVar26 <= ppppppcVar29) goto LAB_06249c70;
                              }
                              else if (-1 < iVar8) {
LAB_06249c70:
                                pppppppcVar37 = (code *******)&pppppppcStack_610;
joined_r0x06249c79:
                                pppppppcVar35 = pppppppcVar37;
                                if (pppppppcVar14 != (code *******)0x0) {
                                  do {
                                    pppppppcVar37 = pppppppcVar14;
                                    bVar39 = (*(byte *)(pppppppcVar37 + 4) & 1) != 0;
                                    ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                                    if (bVar39) {
                                      ppppppcVar11 = pppppppcVar37[6];
                                    }
                                    ppppppcVar29 = (code ******)
                                                   (ulong)(*(byte *)(pppppppcVar37 + 4) >> 1);
                                    if (bVar39) {
                                      ppppppcVar29 = pppppppcVar37[5];
                                    }
                                    ppppppcVar24 = ppppppcVar26;
                                    if (ppppppcVar29 < ppppppcVar26) {
                                      ppppppcVar24 = ppppppcVar29;
                                    }
                                    iVar8 = func_0x0eee2ff0(ppppppcVar30,ppppppcVar11,ppppppcVar24);
                                    if (iVar8 == 0) {
                                      if (ppppppcVar26 < ppppppcVar29) goto LAB_06249c90;
                                    }
                                    else if (iVar8 < 0) goto LAB_06249c90;
                                    iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                                    if (iVar8 == 0) {
                                      if (ppppppcVar26 <= ppppppcVar29) goto LAB_0624a418;
                                    }
                                    else if (-1 < iVar8) goto LAB_0624a418;
                                    pppppppcVar14 = (code *******)pppppppcVar37[1];
                                    if ((code *******)pppppppcVar37[1] == (code *******)0x0) {
                                      pppppppcVar35 = pppppppcVar37 + 1;
                                      break;
                                    }
                                  } while( true );
                                }
                                goto LAB_06249d20;
                              }
                            }
                            pppppppcVar35 = pppppppcVar37 + 1;
                            if (pppppppcVar14 == (code *******)0x0) {
                              pppppppcVar35 = (code *******)&pppppppcStack_610;
                              pppppppcVar37 = (code *******)&pppppppcStack_610;
                            }
                            if (*pppppppcVar35 == (code ******)0x0) {
LAB_06249d20:
                              pppppppcStack_4a0 = pppppppcVar37;
                              pppppppcVar37 =
                                   (code *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                              if (pppppppcVar37 == (code *******)0x0) {
                                FUN_0eec74c0(0x50,0);
                              }
                              pppppppcVar17 = pppppppcStack_560;
                              pppppppcStack_5d8 = pppppppcVar37;
                              pppppppcStack_5d0 = (code *******)&pppppppcStack_618;
                              pppppppcStack_5c8 = (code *******)0x0;
                              pppppppcVar14 = pppppppcVar37 + 4;
                              if (((ulong)pppppppcStack_560[4] & 1) == 0) {
                                pppppppcVar37[6] = pppppppcStack_560[6];
                                ppppppcVar11 = pppppppcStack_560[5];
                                *pppppppcVar14 = pppppppcStack_560[4];
                                pppppppcVar37[5] = ppppppcVar11;
                              }
                              else {
                                func_0x0412e5e0(pppppppcVar14,pppppppcStack_560[6],
                                                pppppppcStack_560[5]);
                              }
                              pppppppcStack_4b0 = pppppppcVar14;
                              pppppppcStack_4a8 = pppppppcVar35;
                              pppppppcVar14 = pppppppcVar37 + 8;
                              pppppppcVar37[8] = (code ******)0x0;
                              pppppppcVar37[9] = (code ******)0x0;
                              pppppppcStack_5b0 = pppppppcVar37;
                              pppppppcVar37[7] = (code ******)pppppppcVar14;
                              pppppppcVar35 = (code *******)pppppppcVar17[7];
                              uStack_580 = pppppppcVar17 + 8;
                              if (pppppppcVar35 != uStack_580) {
                                pppppppcStack_5a8 = pppppppcVar37 + 7;
                                pppppppcVar37 = (code *******)0x0;
                                pppppppcStack_680 = pppppppcVar14;
LAB_06249f60:
                                pppppppcVar17 = pppppppcVar14 + 1;
                                pppppppcVar34 = pppppppcVar14;
                                if (pppppppcVar37 == (code *******)0x0) {
                                  pppppppcVar17 = pppppppcStack_680;
                                  pppppppcVar34 = pppppppcStack_680;
                                }
                                if (*pppppppcVar17 == (code ******)0x0) goto LAB_06249f90;
LAB_06249f77:
                                pppppppcVar37 = (code *******)pppppppcVar35[1];
                                pppppppcVar14 = pppppppcVar35;
                                if ((code *******)pppppppcVar35[1] == (code *******)0x0)
                                goto LAB_0624a1e0;
LAB_0624a1d0:
                                do {
                                  pppppppcVar35 = pppppppcVar37;
                                  pppppppcVar37 = (code *******)*pppppppcVar35;
                                } while ((code *******)*pppppppcVar35 != (code *******)0x0);
                                do {
                                  if (pppppppcVar35 == uStack_580) break;
                                  pppppppcVar37 = (code *******)*pppppppcStack_680;
                                  pppppppcVar14 = pppppppcStack_680;
                                  if (pppppppcStack_680 == (code *******)*pppppppcStack_5a8)
                                  goto LAB_06249f60;
                                  pppppppcVar17 = pppppppcVar37;
                                  pppppppcVar34 = pppppppcStack_680;
                                  if (pppppppcVar37 == (code *******)0x0) {
                                    do {
                                      pppppppcVar14 = (code *******)pppppppcVar34[2];
                                      bVar39 = pppppppcVar34 == (code *******)*pppppppcVar14;
                                      pppppppcVar34 = pppppppcVar14;
                                    } while (bVar39);
                                  }
                                  else {
                                    do {
                                      pppppppcVar14 = pppppppcVar17;
                                      pppppppcVar17 = (code *******)pppppppcVar14[1];
                                    } while ((code *******)pppppppcVar14[1] != (code *******)0x0);
                                  }
                                  bVar39 = ((byte)*(code *)(pppppppcVar14 + 4) & 1) != 0;
                                  ppppppcVar11 = (code ******)((long)pppppppcVar14 + 0x21);
                                  if (bVar39) {
                                    ppppppcVar11 = pppppppcVar14[6];
                                  }
                                  ppppppcVar29 = (code ******)
                                                 (ulong)((byte)*(code *)(pppppppcVar14 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppcVar29 = pppppppcVar14[5];
                                  }
                                  bVar39 = ((byte)*(code *)(pppppppcVar35 + 4) & 1) != 0;
                                  ppppppcVar30 = (code ******)((long)pppppppcVar35 + 0x21);
                                  if (bVar39) {
                                    ppppppcVar30 = pppppppcVar35[6];
                                  }
                                  ppppppcVar26 = (code ******)
                                                 (ulong)((byte)*(code *)(pppppppcVar35 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppcVar26 = pppppppcVar35[5];
                                  }
                                  ppppppcVar24 = ppppppcVar29;
                                  if (ppppppcVar26 < ppppppcVar29) {
                                    ppppppcVar24 = ppppppcVar26;
                                  }
                                  iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                                  pppppppcVar34 = pppppppcStack_680;
                                  if (iVar8 == 0) {
                                    if (ppppppcVar29 < ppppppcVar26) goto LAB_06249f60;
                                  }
                                  else if (iVar8 < 0) goto LAB_06249f60;
LAB_06249ed7:
                                  pppppppcVar17 = pppppppcVar34;
                                  if (pppppppcVar37 != (code *******)0x0) {
                                    do {
                                      pppppppcVar34 = pppppppcVar37;
                                      bVar39 = ((byte)*(code *)(pppppppcVar34 + 4) & 1) != 0;
                                      ppppppcVar11 = (code ******)((long)pppppppcVar34 + 0x21);
                                      if (bVar39) {
                                        ppppppcVar11 = pppppppcVar34[6];
                                      }
                                      ppppppcVar29 = (code ******)
                                                     (ulong)((byte)*(code *)(pppppppcVar34 + 4) >> 1
                                                            );
                                      if (bVar39) {
                                        ppppppcVar29 = pppppppcVar34[5];
                                      }
                                      ppppppcVar24 = ppppppcVar26;
                                      if (ppppppcVar29 < ppppppcVar26) {
                                        ppppppcVar24 = ppppppcVar29;
                                      }
                                      iVar8 = func_0x0eee2ff0(ppppppcVar30,ppppppcVar11,ppppppcVar24
                                                             );
                                      if (iVar8 == 0) {
                                        if (ppppppcVar26 < ppppppcVar29) goto LAB_06249ed0;
                                      }
                                      else if (iVar8 < 0) goto LAB_06249ed0;
                                      iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24
                                                             );
                                      if (iVar8 == 0) {
                                        if (ppppppcVar26 <= ppppppcVar29) goto LAB_06249f77;
                                      }
                                      else if (-1 < iVar8) goto LAB_06249f77;
                                      pppppppcVar37 = (code *******)pppppppcVar34[1];
                                      if ((code *******)pppppppcVar34[1] == (code *******)0x0) {
                                        pppppppcVar17 = pppppppcVar34 + 1;
                                        break;
                                      }
                                    } while( true );
                                  }
LAB_06249f90:
                                  pppppppcVar37 =
                                       (code *******)
                                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                                  if (pppppppcVar37 == (code *******)0x0) {
                                    FUN_0eec74c0(0x38,0);
                                  }
                                  pppppppcVar14 = pppppppcStack_5a8;
                                  _auStack_6a0 = pppppppcStack_5a8;
                                  uStack_698 = (code *******)0x0;
                                  auStack_6a8 = (undefined1  [8])pppppppcVar37;
                                  if (((ulong)pppppppcVar35[4] & 1) == 0) {
                                    pppppppcVar37[6] = pppppppcVar35[6];
                                    ppppppcVar11 = pppppppcVar35[5];
                                    pppppppcVar37[4] = pppppppcVar35[4];
                                    pppppppcVar37[5] = ppppppcVar11;
                                  }
                                  else {
                                    func_0x0412e5e0(pppppppcVar37 + 4,pppppppcVar35[6],
                                                    pppppppcVar35[5]);
                                  }
                                  *pppppppcVar37 = (code ******)0x0;
                                  pppppppcVar37[1] = (code ******)0x0;
                                  pppppppcVar37[2] = (code ******)pppppppcVar34;
                                  *pppppppcVar17 = (code ******)pppppppcVar37;
                                  ppppppcVar11 = (code ******)**pppppppcVar14;
                                  if (ppppppcVar11 != (code ******)0x0) {
                                    *pppppppcVar14 = ppppppcVar11;
                                  }
                                  pppppppcVar14 = (code *******)*pppppppcStack_680;
                                  *(bool *)(pppppppcVar37 + 3) = pppppppcVar37 == pppppppcVar14;
                                  if (pppppppcVar37 != pppppppcVar14) {
                                    do {
                                      while( true ) {
                                        pppppppcVar17 = (code *******)pppppppcVar37[2];
                                        if (*(code *)(pppppppcVar17 + 3) != (code)0x0)
                                        goto LAB_0624a1b0;
                                        pppppppcVar34 = (code *******)pppppppcVar17[2];
                                        pppppppcVar25 = (code *******)*pppppppcVar34;
                                        if (pppppppcVar17 == pppppppcVar25) break;
                                        if ((pppppppcVar25 == (code *******)0x0) ||
                                           (*(code *)(pppppppcVar25 + 3) != (code)0x0)) {
                                          pppppppcVar14 = (code *******)*pppppppcVar17;
                                          if (pppppppcVar37 == pppppppcVar14) {
                                            ppppppcVar11 = pppppppcVar14[1];
                                            *pppppppcVar17 = ppppppcVar11;
                                            if (ppppppcVar11 != (code ******)0x0) {
                                              ppppppcVar11[2] = (code *****)pppppppcVar17;
                                              pppppppcVar34 = (code *******)pppppppcVar17[2];
                                            }
                                            pppppppcVar14[2] = (code ******)pppppppcVar34;
                                            if (pppppppcVar17 == (code *******)*pppppppcVar34) {
                                              *pppppppcVar34 = (code ******)pppppppcVar14;
                                            }
                                            else {
                                              pppppppcVar34[1] = (code ******)pppppppcVar14;
                                            }
                                            pppppppcVar14[1] = (code ******)pppppppcVar17;
                                            pppppppcVar17[2] = (code ******)pppppppcVar14;
                                            pppppppcVar34 = (code *******)pppppppcVar14[2];
                                            pppppppcVar17 = pppppppcVar14;
                                          }
                                          *(code *)(pppppppcVar17 + 3) = (code)0x1;
                                          *(code *)(pppppppcVar34 + 3) = (code)0x0;
                                          ppppppcVar11 = pppppppcVar34[1];
                                          ppppppcVar29 = (code ******)*ppppppcVar11;
                                          pppppppcVar34[1] = ppppppcVar29;
                                          if (ppppppcVar29 != (code ******)0x0) {
                                            ppppppcVar29[2] = (code *****)pppppppcVar34;
                                          }
                                          ppppppcVar29 = pppppppcVar34[2];
                                          ppppppcVar11[2] = (code *****)ppppppcVar29;
                                          if (pppppppcVar34 == (code *******)*ppppppcVar29) {
                                            *ppppppcVar29 = (code *****)ppppppcVar11;
                                          }
                                          else {
                                            ppppppcVar29[1] = (code *****)ppppppcVar11;
                                          }
                                          *ppppppcVar11 = (code *****)pppppppcVar34;
                                          pppppppcVar34[2] = ppppppcVar11;
                                          goto LAB_0624a1b0;
                                        }
                                        *(code *)(pppppppcVar17 + 3) = (code)0x1;
                                        *(bool *)(pppppppcVar34 + 3) =
                                             pppppppcVar34 == pppppppcVar14;
                                        *(code *)(pppppppcVar25 + 3) = (code)0x1;
                                        pppppppcVar37 = pppppppcVar34;
                                        if (pppppppcVar34 == pppppppcVar14) goto LAB_0624a1b0;
                                      }
                                      ppppppcVar11 = pppppppcVar34[1];
                                      if ((ppppppcVar11 == (code ******)0x0) ||
                                         (*(code *)(ppppppcVar11 + 3) != (code)0x0)) {
                                        if (pppppppcVar37 != (code *******)*pppppppcVar17) {
                                          pppppppcVar37 = (code *******)pppppppcVar17[1];
                                          ppppppcVar11 = *pppppppcVar37;
                                          pppppppcVar17[1] = ppppppcVar11;
                                          if (ppppppcVar11 == (code ******)0x0) {
                                            pppppppcVar37[2] = (code ******)pppppppcVar34;
LAB_0624a113:
                                            *pppppppcVar34 = (code ******)pppppppcVar37;
                                          }
                                          else {
                                            ppppppcVar11[2] = (code *****)pppppppcVar17;
                                            pppppppcVar34 = (code *******)pppppppcVar17[2];
                                            pppppppcVar14 = (code *******)*pppppppcVar34;
                                            pppppppcVar37[2] = (code ******)pppppppcVar34;
                                            if (pppppppcVar17 == pppppppcVar14) goto LAB_0624a113;
                                            pppppppcVar34[1] = (code ******)pppppppcVar37;
                                          }
                                          *pppppppcVar37 = (code ******)pppppppcVar17;
                                          pppppppcVar17[2] = (code ******)pppppppcVar37;
                                          pppppppcVar34 = (code *******)pppppppcVar37[2];
                                          pppppppcVar25 = (code *******)*pppppppcVar34;
                                          pppppppcVar17 = pppppppcVar37;
                                        }
                                        *(code *)(pppppppcVar17 + 3) = (code)0x1;
                                        *(code *)(pppppppcVar34 + 3) = (code)0x0;
                                        ppppppcVar11 = pppppppcVar25[1];
                                        *pppppppcVar34 = ppppppcVar11;
                                        if (ppppppcVar11 != (code ******)0x0) {
                                          ppppppcVar11[2] = (code *****)pppppppcVar34;
                                        }
                                        ppppppcVar11 = pppppppcVar34[2];
                                        pppppppcVar25[2] = ppppppcVar11;
                                        if (pppppppcVar34 == (code *******)*ppppppcVar11) {
                                          *ppppppcVar11 = (code *****)pppppppcVar25;
                                        }
                                        else {
                                          ppppppcVar11[1] = (code *****)pppppppcVar25;
                                        }
                                        pppppppcVar25[1] = (code ******)pppppppcVar34;
                                        pppppppcVar34[2] = (code ******)pppppppcVar25;
                                        break;
                                      }
                                      *(code *)(pppppppcVar17 + 3) = (code)0x1;
                                      *(bool *)(pppppppcVar34 + 3) = pppppppcVar34 == pppppppcVar14;
                                      *(code *)(ppppppcVar11 + 3) = (code)0x1;
                                      pppppppcVar37 = pppppppcVar34;
                                    } while (pppppppcVar34 != pppppppcVar14);
                                  }
LAB_0624a1b0:
                                  pppppppcStack_5b0[9] =
                                       (code ******)((long)pppppppcStack_5b0[9] + 1);
                                  pppppppcVar37 = (code *******)pppppppcVar35[1];
                                  pppppppcVar14 = pppppppcVar35;
                                  if ((code *******)pppppppcVar35[1] != (code *******)0x0)
                                  goto LAB_0624a1d0;
LAB_0624a1e0:
                                  do {
                                    pppppppcVar35 = (code *******)pppppppcVar14[2];
                                    bVar39 = pppppppcVar14 != (code *******)*pppppppcVar35;
                                    pppppppcVar14 = pppppppcVar35;
                                  } while (bVar39);
                                } while( true );
                              }
                              pppppppcVar37 = pppppppcStack_5b0;
                              *pppppppcStack_5b0 = (code ******)0x0;
                              pppppppcStack_5b0[1] = (code ******)0x0;
                              pppppppcStack_5b0[2] = (code ******)pppppppcStack_4a0;
                              *pppppppcStack_4a8 = (code ******)pppppppcStack_5b0;
                              if ((code *******)*pppppppcStack_618 != (code *******)0x0) {
                                pppppppcStack_618 = (code *******)*pppppppcStack_618;
                              }
                              *(bool *)(pppppppcVar37 + 3) = pppppppcVar37 == pppppppcStack_610;
                              if (pppppppcVar37 != pppppppcStack_610) {
                                do {
                                  while( true ) {
                                    pppppppcVar14 = (code *******)pppppppcVar37[2];
                                    if (*(byte *)(pppppppcVar14 + 3) != 0) goto LAB_0624a410;
                                    pppppppcVar35 = (code *******)pppppppcVar14[2];
                                    pppppppcVar17 = (code *******)*pppppppcVar35;
                                    if (pppppppcVar14 == pppppppcVar17) break;
                                    if ((pppppppcVar17 == (code *******)0x0) ||
                                       (*(byte *)(pppppppcVar17 + 3) != 0)) {
                                      pppppppcVar17 = (code *******)*pppppppcVar14;
                                      if (pppppppcVar37 == pppppppcVar17) {
                                        ppppppcVar11 = pppppppcVar17[1];
                                        *pppppppcVar14 = ppppppcVar11;
                                        if (ppppppcVar11 != (code ******)0x0) {
                                          ppppppcVar11[2] = (code *****)pppppppcVar14;
                                          pppppppcVar35 = (code *******)pppppppcVar14[2];
                                        }
                                        pppppppcVar17[2] = (code ******)pppppppcVar35;
                                        if (pppppppcVar14 == (code *******)*pppppppcVar35) {
                                          *pppppppcVar35 = (code ******)pppppppcVar17;
                                        }
                                        else {
                                          pppppppcVar35[1] = (code ******)pppppppcVar17;
                                        }
                                        pppppppcVar17[1] = (code ******)pppppppcVar14;
                                        pppppppcVar14[2] = (code ******)pppppppcVar17;
                                        pppppppcVar35 = (code *******)pppppppcVar17[2];
                                        pppppppcVar14 = pppppppcVar17;
                                      }
                                      *(byte *)(pppppppcVar14 + 3) = 1;
                                      *(byte *)(pppppppcVar35 + 3) = 0;
                                      ppppppcVar11 = pppppppcVar35[1];
                                      ppppppcVar29 = (code ******)*ppppppcVar11;
                                      pppppppcVar35[1] = ppppppcVar29;
                                      if (ppppppcVar29 != (code ******)0x0) {
                                        ppppppcVar29[2] = (code *****)pppppppcVar35;
                                      }
                                      ppppppcVar29 = pppppppcVar35[2];
                                      ppppppcVar11[2] = (code *****)ppppppcVar29;
                                      if (pppppppcVar35 == (code *******)*ppppppcVar29) {
                                        *ppppppcVar29 = (code *****)ppppppcVar11;
                                      }
                                      else {
                                        ppppppcVar29[1] = (code *****)ppppppcVar11;
                                      }
                                      *ppppppcVar11 = (code *****)pppppppcVar35;
                                      pppppppcVar35[2] = ppppppcVar11;
                                      goto LAB_0624a410;
                                    }
                                    *(byte *)(pppppppcVar14 + 3) = 1;
                                    *(bool *)(pppppppcVar35 + 3) =
                                         pppppppcVar35 == pppppppcStack_610;
                                    *(byte *)(pppppppcVar17 + 3) = 1;
                                    pppppppcVar37 = pppppppcVar35;
                                    if (pppppppcVar35 == pppppppcStack_610) goto LAB_0624a410;
                                  }
                                  ppppppcVar11 = pppppppcVar35[1];
                                  if ((ppppppcVar11 == (code ******)0x0) ||
                                     (*(char *)(ppppppcVar11 + 3) != '\0')) {
                                    if (pppppppcVar37 != (code *******)*pppppppcVar14) {
                                      pppppppcVar37 = (code *******)pppppppcVar14[1];
                                      ppppppcVar11 = *pppppppcVar37;
                                      pppppppcVar14[1] = ppppppcVar11;
                                      if (ppppppcVar11 == (code ******)0x0) {
                                        pppppppcVar37[2] = (code ******)pppppppcVar35;
LAB_0624a373:
                                        *pppppppcVar35 = (code ******)pppppppcVar37;
                                      }
                                      else {
                                        ppppppcVar11[2] = (code *****)pppppppcVar14;
                                        pppppppcVar35 = (code *******)pppppppcVar14[2];
                                        pppppppcVar17 = (code *******)*pppppppcVar35;
                                        pppppppcVar37[2] = (code ******)pppppppcVar35;
                                        if (pppppppcVar14 == pppppppcVar17) goto LAB_0624a373;
                                        pppppppcVar35[1] = (code ******)pppppppcVar37;
                                      }
                                      *pppppppcVar37 = (code ******)pppppppcVar14;
                                      pppppppcVar14[2] = (code ******)pppppppcVar37;
                                      pppppppcVar35 = (code *******)pppppppcVar37[2];
                                      pppppppcVar17 = (code *******)*pppppppcVar35;
                                      pppppppcVar14 = pppppppcVar37;
                                    }
                                    *(byte *)(pppppppcVar14 + 3) = 1;
                                    *(code *)(pppppppcVar35 + 3) = (code)0x0;
                                    ppppppcVar11 = pppppppcVar17[1];
                                    *pppppppcVar35 = ppppppcVar11;
                                    if (ppppppcVar11 != (code ******)0x0) {
                                      ppppppcVar11[2] = (code *****)pppppppcVar35;
                                    }
                                    ppppppcVar11 = pppppppcVar35[2];
                                    pppppppcVar17[2] = ppppppcVar11;
                                    if (pppppppcVar35 == (code *******)*ppppppcVar11) {
                                      *ppppppcVar11 = (code *****)pppppppcVar17;
                                    }
                                    else {
                                      ppppppcVar11[1] = (code *****)pppppppcVar17;
                                    }
                                    pppppppcVar17[1] = (code ******)pppppppcVar35;
                                    pppppppcVar35[2] = (code ******)pppppppcVar17;
                                    break;
                                  }
                                  *(byte *)(pppppppcVar14 + 3) = 1;
                                  *(bool *)(pppppppcVar35 + 3) = pppppppcVar35 == pppppppcStack_610;
                                  *(undefined1 *)(ppppppcVar11 + 3) = 1;
                                  pppppppcVar37 = pppppppcVar35;
                                } while (pppppppcVar35 != pppppppcStack_610);
                              }
LAB_0624a410:
                              lStack_608 = lStack_608 + 1;
                            }
LAB_0624a418:
                            pppppppcVar37 = (code *******)pppppppcStack_560[1];
                            pppppppcVar14 = pppppppcStack_560;
                            if ((code *******)pppppppcStack_560[1] == (code *******)0x0) {
                              do {
                                pppppppcVar35 = (code *******)pppppppcVar14[2];
                                bVar39 = pppppppcVar14 != (code *******)*pppppppcVar35;
                                pppppppcVar14 = pppppppcVar35;
                              } while (bVar39);
                            }
                            else {
                              do {
                                pppppppcVar35 = pppppppcVar37;
                                pppppppcVar37 = (code *******)*pppppppcVar35;
                              } while ((code *******)*pppppppcVar35 != (code *******)0x0);
                            }
                            if ((code ********)pppppppcVar35 == &pppppppcStack_670) break;
                            pppppppcStack_560 = pppppppcVar35;
                          } while( true );
                        }
                        func_0x0629f1d0(pppppppcStack_670);
                        func_0x049dc470(&pppppppcStack_598,pppppppcStack_590);
                        func_0x0633c060(&lStack_508,pppppppcStack_568,pppppppcStack_568,
                                        &pppppppcStack_648);
                        func_0x0629f1d0(pppppppcStack_610);
                        func_0x049dc470(&pppppppcStack_630,pppppppcStack_628);
                        if (((ulong)pppppppcStack_648 & 1) != 0) {
                          func_0x0412a280(uStack_638,(ulong)pppppppcStack_648 & 0xfffffffffffffffe);
                        }
                      }
                      lVar10 = func_0x0633bde0(&lStack_508,ppppppcStack_540);
                      if (lVar10 == 0) {
                        pppppppcStack_590 = (code *******)0x0;
                        lStack_588 = 0;
                        pppppppcStack_598 = (code *******)&pppppppcStack_590;
                        pppppppcStack_670 = (code *******)0x0;
                        pppppppcStack_668 = (code *******)0x0;
                        auStack_678 = (undefined1  [8])&pppppppcStack_670;
                        if (((ulong)*ppppppcStack_540 & 1) == 0) {
                          uStack_638 = (code *******)ppppppcStack_540[2];
                          pppppppcStack_648 = (code *******)*ppppppcStack_540;
                          uStack_640 = (code *******)ppppppcStack_540[1];
                          pppppppcStack_628 = (code *******)0x0;
                          lStack_620 = 0;
                          pppppppcStack_630 = (code *******)&pppppppcStack_628;
                        }
                        else {
                          func_0x0412e5e0(&pppppppcStack_648,ppppppcStack_540[2],ppppppcStack_540[1]
                                         );
                          pppppppcVar37 = (code *******)&pppppppcStack_628;
                          pppppppcStack_628 = (code *******)0x0;
                          lStack_620 = 0;
                          pppppppcStack_630 = pppppppcVar37;
                          if ((code ********)pppppppcStack_598 != &pppppppcStack_590) {
                            pppppppcVar14 = (code *******)0x0;
                            pppppppcStack_680 = pppppppcVar37;
                            pppppppcVar35 = pppppppcStack_598;
LAB_0624a730:
                            pppppppcVar17 = pppppppcVar37 + 1;
                            if (pppppppcVar14 == (code *******)0x0) {
                              pppppppcVar17 = (code *******)&pppppppcStack_628;
                              pppppppcVar37 = (code *******)&pppppppcStack_628;
                            }
                            if (*pppppppcVar17 == (code ******)0x0) goto LAB_0624a760;
LAB_0624a745:
                            pppppppcVar37 = (code *******)pppppppcVar35[1];
                            pppppppcVar14 = pppppppcVar35;
                            if ((code *******)pppppppcVar35[1] == (code *******)0x0)
                            goto LAB_0624a9b0;
LAB_0624a9a0:
                            do {
                              pppppppcVar35 = pppppppcVar37;
                              pppppppcVar37 = (code *******)*pppppppcVar35;
                            } while ((code *******)*pppppppcVar35 != (code *******)0x0);
                            do {
                              pppppppcVar14 = pppppppcStack_628;
                              pppppppcVar37 = (code *******)&pppppppcStack_628;
                              if ((code ********)pppppppcVar35 == &pppppppcStack_590) break;
                              pppppppcStack_680 = pppppppcStack_630;
                              if (pppppppcVar37 == pppppppcStack_630) goto LAB_0624a730;
                              pppppppcVar17 = pppppppcStack_628;
                              pppppppcVar34 = (code *******)&pppppppcStack_628;
                              if (pppppppcStack_628 == (code *******)0x0) {
                                do {
                                  pppppppcVar37 = (code *******)pppppppcVar34[2];
                                  bVar39 = pppppppcVar34 == (code *******)*pppppppcVar37;
                                  pppppppcVar34 = pppppppcVar37;
                                } while (bVar39);
                              }
                              else {
                                do {
                                  pppppppcVar37 = pppppppcVar17;
                                  pppppppcVar17 = (code *******)pppppppcVar37[1];
                                } while ((code *******)pppppppcVar37[1] != (code *******)0x0);
                              }
                              bVar39 = (*(byte *)(pppppppcVar37 + 4) & 1) != 0;
                              ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                              if (bVar39) {
                                ppppppcVar11 = pppppppcVar37[6];
                              }
                              ppppppcVar29 = (code ******)(ulong)(*(byte *)(pppppppcVar37 + 4) >> 1)
                              ;
                              if (bVar39) {
                                ppppppcVar29 = pppppppcVar37[5];
                              }
                              bVar39 = ((byte)*(code *)(pppppppcVar35 + 4) & 1) != 0;
                              ppppppcVar30 = (code ******)((long)pppppppcVar35 + 0x21);
                              if (bVar39) {
                                ppppppcVar30 = pppppppcVar35[6];
                              }
                              ppppppcVar26 = (code ******)
                                             (ulong)((byte)*(code *)(pppppppcVar35 + 4) >> 1);
                              if (bVar39) {
                                ppppppcVar26 = pppppppcVar35[5];
                              }
                              ppppppcVar24 = ppppppcVar29;
                              if (ppppppcVar26 < ppppppcVar29) {
                                ppppppcVar24 = ppppppcVar26;
                              }
                              iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                              if (iVar8 == 0) {
                                if (ppppppcVar29 < ppppppcVar26) goto LAB_0624a730;
                              }
                              else if (iVar8 < 0) goto LAB_0624a730;
                              pppppppcVar37 = (code *******)&pppppppcStack_628;
LAB_0624a6a7:
                              pppppppcVar17 = pppppppcVar37;
                              if (pppppppcVar14 != (code *******)0x0) {
                                do {
                                  pppppppcVar37 = pppppppcVar14;
                                  bVar39 = (*(byte *)(pppppppcVar37 + 4) & 1) != 0;
                                  ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                                  if (bVar39) {
                                    ppppppcVar11 = pppppppcVar37[6];
                                  }
                                  ppppppcVar29 = (code ******)
                                                 (ulong)(*(byte *)(pppppppcVar37 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppcVar29 = pppppppcVar37[5];
                                  }
                                  ppppppcVar24 = ppppppcVar26;
                                  if (ppppppcVar29 < ppppppcVar26) {
                                    ppppppcVar24 = ppppppcVar29;
                                  }
                                  iVar8 = func_0x0eee2ff0(ppppppcVar30,ppppppcVar11,ppppppcVar24);
                                  if (iVar8 == 0) {
                                    if (ppppppcVar26 < ppppppcVar29) goto LAB_0624a6a0;
                                  }
                                  else if (iVar8 < 0) goto LAB_0624a6a0;
                                  iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                                  if (iVar8 == 0) {
                                    if (ppppppcVar26 <= ppppppcVar29) goto LAB_0624a745;
                                  }
                                  else if (-1 < iVar8) goto LAB_0624a745;
                                  pppppppcVar14 = (code *******)pppppppcVar37[1];
                                  if ((code *******)pppppppcVar37[1] == (code *******)0x0) {
                                    pppppppcVar17 = pppppppcVar37 + 1;
                                    break;
                                  }
                                } while( true );
                              }
LAB_0624a760:
                              pppppppcVar14 =
                                   (code *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                              if (pppppppcVar14 == (code *******)0x0) {
                                FUN_0eec74c0(0x38,0);
                              }
                              _auStack_6a0 = (code *******)&pppppppcStack_630;
                              uStack_698 = (code *******)0x0;
                              auStack_6a8 = (undefined1  [8])pppppppcVar14;
                              if (((ulong)pppppppcVar35[4] & 1) == 0) {
                                pppppppcVar14[6] = pppppppcVar35[6];
                                ppppppcVar11 = pppppppcVar35[5];
                                pppppppcVar14[4] = pppppppcVar35[4];
                                pppppppcVar14[5] = ppppppcVar11;
                                pppppppcVar34 = pppppppcStack_680;
                              }
                              else {
                                func_0x0412e5e0(pppppppcVar14 + 4,pppppppcVar35[6],pppppppcVar35[5])
                                ;
                                pppppppcVar34 = pppppppcStack_630;
                              }
                              *pppppppcVar14 = (code ******)0x0;
                              pppppppcVar14[1] = (code ******)0x0;
                              pppppppcVar14[2] = (code ******)pppppppcVar37;
                              *pppppppcVar17 = (code ******)pppppppcVar14;
                              if ((code *******)*pppppppcVar34 != (code *******)0x0) {
                                pppppppcStack_630 = (code *******)*pppppppcVar34;
                              }
                              *(bool *)(pppppppcVar14 + 3) = pppppppcVar14 == pppppppcStack_628;
                              if (pppppppcVar14 != pppppppcStack_628) {
                                do {
                                  pppppppcVar37 = (code *******)pppppppcVar14[2];
                                  if (*(code *)(pppppppcVar37 + 3) != (code)0x0) break;
                                  pppppppcVar17 = (code *******)pppppppcVar37[2];
                                  pppppppcVar34 = (code *******)*pppppppcVar17;
                                  if (pppppppcVar37 == pppppppcVar34) {
                                    ppppppcVar11 = pppppppcVar17[1];
                                    if ((ppppppcVar11 != (code ******)0x0) &&
                                       (*(code *)(ppppppcVar11 + 3) == (code)0x0)) {
                                      *(code *)(pppppppcVar37 + 3) = (code)0x1;
                                      *(bool *)(pppppppcVar17 + 3) =
                                           pppppppcVar17 == pppppppcStack_628;
                                      *(code *)(ppppppcVar11 + 3) = (code)0x1;
                                      goto LAB_0624a810;
                                    }
                                    if (pppppppcVar14 != (code *******)*pppppppcVar37) {
                                      pppppppcVar14 = (code *******)pppppppcVar37[1];
                                      ppppppcVar11 = *pppppppcVar14;
                                      pppppppcVar37[1] = ppppppcVar11;
                                      if (ppppppcVar11 == (code ******)0x0) {
                                        pppppppcVar14[2] = (code ******)pppppppcVar17;
LAB_0624a8e8:
                                        *pppppppcVar17 = (code ******)pppppppcVar14;
                                      }
                                      else {
                                        ppppppcVar11[2] = (code *****)pppppppcVar37;
                                        pppppppcVar17 = (code *******)pppppppcVar37[2];
                                        pppppppcVar34 = (code *******)*pppppppcVar17;
                                        pppppppcVar14[2] = (code ******)pppppppcVar17;
                                        if (pppppppcVar37 == pppppppcVar34) goto LAB_0624a8e8;
                                        pppppppcVar17[1] = (code ******)pppppppcVar14;
                                      }
                                      *pppppppcVar14 = (code ******)pppppppcVar37;
                                      pppppppcVar37[2] = (code ******)pppppppcVar14;
                                      pppppppcVar17 = (code *******)pppppppcVar14[2];
                                      pppppppcVar34 = (code *******)*pppppppcVar17;
                                      pppppppcVar37 = pppppppcVar14;
                                    }
                                    *(code *)(pppppppcVar37 + 3) = (code)0x1;
                                    *(code *)(pppppppcVar17 + 3) = (code)0x0;
                                    ppppppcVar11 = pppppppcVar34[1];
                                    *pppppppcVar17 = ppppppcVar11;
                                    if (ppppppcVar11 != (code ******)0x0) {
                                      ppppppcVar11[2] = (code *****)pppppppcVar17;
                                    }
                                    ppppppcVar11 = pppppppcVar17[2];
                                    pppppppcVar34[2] = ppppppcVar11;
                                    if (pppppppcVar17 == (code *******)*ppppppcVar11) {
                                      *ppppppcVar11 = (code *****)pppppppcVar34;
                                    }
                                    else {
                                      ppppppcVar11[1] = (code *****)pppppppcVar34;
                                    }
                                    pppppppcVar34[1] = (code ******)pppppppcVar17;
                                    pppppppcVar17[2] = (code ******)pppppppcVar34;
                                    break;
                                  }
                                  if ((pppppppcVar34 == (code *******)0x0) ||
                                     (*(code *)(pppppppcVar34 + 3) != (code)0x0)) {
                                    pppppppcVar34 = (code *******)*pppppppcVar37;
                                    if (pppppppcVar14 == pppppppcVar34) {
                                      ppppppcVar11 = pppppppcVar34[1];
                                      *pppppppcVar37 = ppppppcVar11;
                                      if (ppppppcVar11 != (code ******)0x0) {
                                        ppppppcVar11[2] = (code *****)pppppppcVar37;
                                        pppppppcVar17 = (code *******)pppppppcVar37[2];
                                      }
                                      pppppppcVar34[2] = (code ******)pppppppcVar17;
                                      if (pppppppcVar37 == (code *******)*pppppppcVar17) {
                                        *pppppppcVar17 = (code ******)pppppppcVar34;
                                      }
                                      else {
                                        pppppppcVar17[1] = (code ******)pppppppcVar34;
                                      }
                                      pppppppcVar34[1] = (code ******)pppppppcVar37;
                                      pppppppcVar37[2] = (code ******)pppppppcVar34;
                                      pppppppcVar17 = (code *******)pppppppcVar34[2];
                                      pppppppcVar37 = pppppppcVar34;
                                    }
                                    *(code *)(pppppppcVar37 + 3) = (code)0x1;
                                    *(code *)(pppppppcVar17 + 3) = (code)0x0;
                                    ppppppcVar11 = pppppppcVar17[1];
                                    ppppppcVar29 = (code ******)*ppppppcVar11;
                                    pppppppcVar17[1] = ppppppcVar29;
                                    if (ppppppcVar29 != (code ******)0x0) {
                                      ppppppcVar29[2] = (code *****)pppppppcVar17;
                                    }
                                    ppppppcVar29 = pppppppcVar17[2];
                                    ppppppcVar11[2] = (code *****)ppppppcVar29;
                                    if (pppppppcVar17 == (code *******)*ppppppcVar29) {
                                      *ppppppcVar29 = (code *****)ppppppcVar11;
                                    }
                                    else {
                                      ppppppcVar29[1] = (code *****)ppppppcVar11;
                                    }
                                    *ppppppcVar11 = (code *****)pppppppcVar17;
                                    pppppppcVar17[2] = ppppppcVar11;
                                    break;
                                  }
                                  *(code *)(pppppppcVar37 + 3) = (code)0x1;
                                  *(bool *)(pppppppcVar17 + 3) = pppppppcVar17 == pppppppcStack_628;
                                  *(code *)(pppppppcVar34 + 3) = (code)0x1;
LAB_0624a810:
                                  pppppppcVar14 = pppppppcVar17;
                                } while (pppppppcVar17 != pppppppcStack_628);
                              }
                              lStack_620 = lStack_620 + 1;
                              pppppppcVar37 = (code *******)pppppppcVar35[1];
                              pppppppcVar14 = pppppppcVar35;
                              if ((code *******)pppppppcVar35[1] != (code *******)0x0)
                              goto LAB_0624a9a0;
LAB_0624a9b0:
                              do {
                                pppppppcVar35 = (code *******)pppppppcVar14[2];
                                bVar39 = pppppppcVar14 != (code *******)*pppppppcVar35;
                                pppppppcVar14 = pppppppcVar35;
                              } while (bVar39);
                            } while( true );
                          }
                        }
                        pppppppcStack_610 = (code *******)0x0;
                        lStack_608 = 0;
                        pppppppcStack_618 = (code *******)&pppppppcStack_610;
                        auVar15 = auStack_678;
                        if (auStack_678 != (undefined1  [8])&pppppppcStack_670) {
                          do {
                            pppppppcVar14 = pppppppcStack_610;
                            pppppppcVar37 = (code *******)&pppppppcStack_610;
                            pppppppcStack_560 = (code *******)auVar15;
                            if (pppppppcVar37 != pppppppcStack_618) {
                              pppppppcVar35 = pppppppcStack_610;
                              pppppppcVar17 = pppppppcVar37;
                              if (pppppppcStack_610 == (code *******)0x0) {
                                do {
                                  pppppppcVar37 = (code *******)pppppppcVar17[2];
                                  bVar39 = pppppppcVar17 == (code *******)*pppppppcVar37;
                                  pppppppcVar17 = pppppppcVar37;
                                } while (bVar39);
                              }
                              else {
                                do {
                                  pppppppcVar37 = pppppppcVar35;
                                  pppppppcVar35 = (code *******)pppppppcVar37[1];
                                } while ((code *******)pppppppcVar37[1] != (code *******)0x0);
                              }
                              bVar39 = ((byte)*(code *)(pppppppcVar37 + 4) & 1) != 0;
                              ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                              if (bVar39) {
                                ppppppcVar11 = pppppppcVar37[6];
                              }
                              ppppppcVar29 = (code ******)
                                             (ulong)((byte)*(code *)(pppppppcVar37 + 4) >> 1);
                              if (bVar39) {
                                ppppppcVar29 = pppppppcVar37[5];
                              }
                              bVar39 = (*(byte *)((long)auVar15 + 0x20) & 1) != 0;
                              ppppppcVar30 = (code ******)((long)auVar15 + 0x21);
                              if (bVar39) {
                                ppppppcVar30 = *(code *******)((long)auVar15 + 0x30);
                              }
                              ppppppcVar26 = (code ******)
                                             (ulong)(*(byte *)((long)auVar15 + 0x20) >> 1);
                              if (bVar39) {
                                ppppppcVar26 = *(code *******)((long)auVar15 + 0x28);
                              }
                              ppppppcVar24 = ppppppcVar29;
                              if (ppppppcVar26 < ppppppcVar29) {
                                ppppppcVar24 = ppppppcVar26;
                              }
                              iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                              if (iVar8 == 0) {
                                if (ppppppcVar26 <= ppppppcVar29) goto LAB_0624ab2d;
                              }
                              else if (-1 < iVar8) {
LAB_0624ab2d:
                                pppppppcVar35 = (code *******)&pppppppcStack_610;
joined_r0x0624ab36:
                                pppppppcVar37 = pppppppcVar35;
                                if (pppppppcVar14 != (code *******)0x0) {
                                  do {
                                    pppppppcVar37 = pppppppcVar14;
                                    bVar39 = ((byte)*(code *)(pppppppcVar37 + 4) & 1) != 0;
                                    ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                                    if (bVar39) {
                                      ppppppcVar11 = pppppppcVar37[6];
                                    }
                                    ppppppcVar29 = (code ******)
                                                   (ulong)((byte)*(code *)(pppppppcVar37 + 4) >> 1);
                                    if (bVar39) {
                                      ppppppcVar29 = pppppppcVar37[5];
                                    }
                                    ppppppcVar24 = ppppppcVar26;
                                    if (ppppppcVar29 < ppppppcVar26) {
                                      ppppppcVar24 = ppppppcVar29;
                                    }
                                    iVar8 = func_0x0eee2ff0(ppppppcVar30,ppppppcVar11,ppppppcVar24);
                                    if (iVar8 == 0) {
                                      if (ppppppcVar26 < ppppppcVar29) goto LAB_0624ab50;
                                    }
                                    else if (iVar8 < 0) goto LAB_0624ab50;
                                    iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                                    if (iVar8 == 0) {
                                      if (ppppppcVar26 <= ppppppcVar29) goto LAB_0624b2c8;
                                    }
                                    else if (-1 < iVar8) goto LAB_0624b2c8;
                                    pppppppcVar14 = (code *******)pppppppcVar37[1];
                                    if ((code *******)pppppppcVar37[1] == (code *******)0x0) {
                                      pppppppcVar35 = pppppppcVar37 + 1;
                                      break;
                                    }
                                  } while( true );
                                }
                                goto LAB_0624abe0;
                              }
                            }
                            pppppppcVar35 = pppppppcVar37 + 1;
                            if (pppppppcVar14 == (code *******)0x0) {
                              pppppppcVar35 = (code *******)&pppppppcStack_610;
                              pppppppcVar37 = (code *******)&pppppppcStack_610;
                            }
                            if (*pppppppcVar35 == (code ******)0x0) {
LAB_0624abe0:
                              pppppppcStack_4a0 = pppppppcVar35;
                              pppppppcVar14 =
                                   (code *******)
                                   (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                              if (pppppppcVar14 == (code *******)0x0) {
                                FUN_0eec74c0(0x50,0);
                              }
                              pppppppcVar17 = pppppppcStack_560;
                              pppppppcStack_5d8 = pppppppcVar14;
                              pppppppcStack_5d0 = (code *******)&pppppppcStack_618;
                              pppppppcStack_5c8 = (code *******)0x0;
                              pppppppcVar35 = pppppppcVar14 + 4;
                              if (((ulong)pppppppcStack_560[4] & 1) == 0) {
                                pppppppcVar14[6] = pppppppcStack_560[6];
                                ppppppcVar11 = pppppppcStack_560[5];
                                *pppppppcVar35 = pppppppcStack_560[4];
                                pppppppcVar14[5] = ppppppcVar11;
                              }
                              else {
                                func_0x0412e5e0(pppppppcVar35,pppppppcStack_560[6],
                                                pppppppcStack_560[5]);
                              }
                              pppppppcStack_4b0 = pppppppcVar35;
                              pppppppcStack_4a8 = pppppppcVar37;
                              pppppppcVar37 = pppppppcVar14 + 8;
                              pppppppcVar14[8] = (code ******)0x0;
                              pppppppcVar14[9] = (code ******)0x0;
                              pppppppcStack_5b0 = pppppppcVar14;
                              pppppppcVar14[7] = (code ******)pppppppcVar37;
                              pppppppcVar35 = (code *******)pppppppcVar17[7];
                              uStack_580 = pppppppcVar17 + 8;
                              if (pppppppcVar35 != uStack_580) {
                                pppppppcStack_5a8 = pppppppcVar14 + 7;
                                pppppppcVar14 = (code *******)0x0;
                                pppppppcStack_680 = pppppppcVar37;
LAB_0624ae20:
                                pppppppcVar17 = pppppppcVar37 + 1;
                                pppppppcVar34 = pppppppcVar37;
                                if (pppppppcVar14 == (code *******)0x0) {
                                  pppppppcVar17 = pppppppcStack_680;
                                  pppppppcVar34 = pppppppcStack_680;
                                }
                                if (*pppppppcVar17 == (code ******)0x0) goto LAB_0624ae50;
LAB_0624ae37:
                                pppppppcVar37 = (code *******)pppppppcVar35[1];
                                pppppppcVar14 = pppppppcVar35;
                                if ((code *******)pppppppcVar35[1] == (code *******)0x0)
                                goto LAB_0624b090;
LAB_0624b080:
                                do {
                                  pppppppcVar35 = pppppppcVar37;
                                  pppppppcVar37 = (code *******)*pppppppcVar35;
                                } while ((code *******)*pppppppcVar35 != (code *******)0x0);
                                do {
                                  if (pppppppcVar35 == uStack_580) break;
                                  pppppppcVar14 = (code *******)*pppppppcStack_680;
                                  pppppppcVar37 = pppppppcStack_680;
                                  if (pppppppcStack_680 == (code *******)*pppppppcStack_5a8)
                                  goto LAB_0624ae20;
                                  pppppppcVar17 = pppppppcVar14;
                                  pppppppcVar34 = pppppppcStack_680;
                                  if (pppppppcVar14 == (code *******)0x0) {
                                    do {
                                      pppppppcVar37 = (code *******)pppppppcVar34[2];
                                      bVar39 = pppppppcVar34 == (code *******)*pppppppcVar37;
                                      pppppppcVar34 = pppppppcVar37;
                                    } while (bVar39);
                                  }
                                  else {
                                    do {
                                      pppppppcVar37 = pppppppcVar17;
                                      pppppppcVar17 = (code *******)pppppppcVar37[1];
                                    } while ((code *******)pppppppcVar37[1] != (code *******)0x0);
                                  }
                                  bVar39 = ((byte)*(code *)(pppppppcVar37 + 4) & 1) != 0;
                                  ppppppcVar11 = (code ******)((long)pppppppcVar37 + 0x21);
                                  if (bVar39) {
                                    ppppppcVar11 = pppppppcVar37[6];
                                  }
                                  ppppppcVar29 = (code ******)
                                                 (ulong)((byte)*(code *)(pppppppcVar37 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppcVar29 = pppppppcVar37[5];
                                  }
                                  bVar39 = ((byte)*(code *)(pppppppcVar35 + 4) & 1) != 0;
                                  ppppppcVar30 = (code ******)((long)pppppppcVar35 + 0x21);
                                  if (bVar39) {
                                    ppppppcVar30 = pppppppcVar35[6];
                                  }
                                  ppppppcVar26 = (code ******)
                                                 (ulong)((byte)*(code *)(pppppppcVar35 + 4) >> 1);
                                  if (bVar39) {
                                    ppppppcVar26 = pppppppcVar35[5];
                                  }
                                  ppppppcVar24 = ppppppcVar29;
                                  if (ppppppcVar26 < ppppppcVar29) {
                                    ppppppcVar24 = ppppppcVar26;
                                  }
                                  iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24);
                                  pppppppcVar34 = pppppppcStack_680;
                                  if (iVar8 == 0) {
                                    if (ppppppcVar29 < ppppppcVar26) goto LAB_0624ae20;
                                  }
                                  else if (iVar8 < 0) goto LAB_0624ae20;
LAB_0624ad97:
                                  pppppppcVar17 = pppppppcVar34;
                                  if (pppppppcVar14 != (code *******)0x0) {
                                    do {
                                      pppppppcVar34 = pppppppcVar14;
                                      bVar39 = ((byte)*(code *)(pppppppcVar34 + 4) & 1) != 0;
                                      ppppppcVar11 = (code ******)((long)pppppppcVar34 + 0x21);
                                      if (bVar39) {
                                        ppppppcVar11 = pppppppcVar34[6];
                                      }
                                      ppppppcVar29 = (code ******)
                                                     (ulong)((byte)*(code *)(pppppppcVar34 + 4) >> 1
                                                            );
                                      if (bVar39) {
                                        ppppppcVar29 = pppppppcVar34[5];
                                      }
                                      ppppppcVar24 = ppppppcVar26;
                                      if (ppppppcVar29 < ppppppcVar26) {
                                        ppppppcVar24 = ppppppcVar29;
                                      }
                                      iVar8 = func_0x0eee2ff0(ppppppcVar30,ppppppcVar11,ppppppcVar24
                                                             );
                                      if (iVar8 == 0) {
                                        if (ppppppcVar26 < ppppppcVar29) goto LAB_0624ad90;
                                      }
                                      else if (iVar8 < 0) goto LAB_0624ad90;
                                      iVar8 = func_0x0eee2ff0(ppppppcVar11,ppppppcVar30,ppppppcVar24
                                                             );
                                      if (iVar8 == 0) {
                                        if (ppppppcVar26 <= ppppppcVar29) goto LAB_0624ae37;
                                      }
                                      else if (-1 < iVar8) goto LAB_0624ae37;
                                      pppppppcVar14 = (code *******)pppppppcVar34[1];
                                      if ((code *******)pppppppcVar34[1] == (code *******)0x0) {
                                        pppppppcVar17 = pppppppcVar34 + 1;
                                        break;
                                      }
                                    } while( true );
                                  }
LAB_0624ae50:
                                  pppppppcVar37 =
                                       (code *******)
                                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                                  if (pppppppcVar37 == (code *******)0x0) {
                                    FUN_0eec74c0(0x38,0);
                                  }
                                  pppppppcVar14 = pppppppcStack_5a8;
                                  _auStack_6a0 = pppppppcStack_5a8;
                                  uStack_698 = (code *******)0x0;
                                  auStack_6a8 = (undefined1  [8])pppppppcVar37;
                                  if (((ulong)pppppppcVar35[4] & 1) == 0) {
                                    pppppppcVar37[6] = pppppppcVar35[6];
                                    ppppppcVar11 = pppppppcVar35[5];
                                    pppppppcVar37[4] = pppppppcVar35[4];
                                    pppppppcVar37[5] = ppppppcVar11;
                                  }
                                  else {
                                    func_0x0412e5e0(pppppppcVar37 + 4,pppppppcVar35[6],
                                                    pppppppcVar35[5]);
                                  }
                                  *pppppppcVar37 = (code ******)0x0;
                                  pppppppcVar37[1] = (code ******)0x0;
                                  pppppppcVar37[2] = (code ******)pppppppcVar34;
                                  *pppppppcVar17 = (code ******)pppppppcVar37;
                                  ppppppcVar11 = (code ******)**pppppppcVar14;
                                  if (ppppppcVar11 != (code ******)0x0) {
                                    *pppppppcVar14 = ppppppcVar11;
                                  }
                                  pppppppcVar14 = (code *******)*pppppppcStack_680;
                                  *(bool *)(pppppppcVar37 + 3) = pppppppcVar37 == pppppppcVar14;
                                  if (pppppppcVar37 != pppppppcVar14) {
                                    do {
                                      pppppppcVar17 = (code *******)pppppppcVar37[2];
                                      if (*(byte *)(pppppppcVar17 + 3) != 0) break;
                                      pppppppcVar34 = (code *******)pppppppcVar17[2];
                                      pppppppcVar25 = (code *******)*pppppppcVar34;
                                      if (pppppppcVar17 == pppppppcVar25) {
                                        ppppppcVar11 = pppppppcVar34[1];
                                        if ((ppppppcVar11 != (code ******)0x0) &&
                                           (*(code *)(ppppppcVar11 + 3) == (code)0x0)) {
                                          *(byte *)(pppppppcVar17 + 3) = 1;
                                          *(bool *)(pppppppcVar34 + 3) =
                                               pppppppcVar34 == pppppppcVar14;
                                          *(code *)(ppppppcVar11 + 3) = (code)0x1;
                                          goto LAB_0624aef0;
                                        }
                                        if (pppppppcVar37 != (code *******)*pppppppcVar17) {
                                          pppppppcVar37 = (code *******)pppppppcVar17[1];
                                          ppppppcVar11 = *pppppppcVar37;
                                          pppppppcVar17[1] = ppppppcVar11;
                                          if (ppppppcVar11 == (code ******)0x0) {
                                            pppppppcVar37[2] = (code ******)pppppppcVar34;
LAB_0624afc8:
                                            *pppppppcVar34 = (code ******)pppppppcVar37;
                                          }
                                          else {
                                            ppppppcVar11[2] = (code *****)pppppppcVar17;
                                            pppppppcVar34 = (code *******)pppppppcVar17[2];
                                            pppppppcVar14 = (code *******)*pppppppcVar34;
                                            pppppppcVar37[2] = (code ******)pppppppcVar34;
                                            if (pppppppcVar17 == pppppppcVar14) goto LAB_0624afc8;
                                            pppppppcVar34[1] = (code ******)pppppppcVar37;
                                          }
                                          *pppppppcVar37 = (code ******)pppppppcVar17;
                                          pppppppcVar17[2] = (code ******)pppppppcVar37;
                                          pppppppcVar34 = (code *******)pppppppcVar37[2];
                                          pppppppcVar25 = (code *******)*pppppppcVar34;
                                          pppppppcVar17 = pppppppcVar37;
                                        }
                                        *(byte *)(pppppppcVar17 + 3) = 1;
                                        *(code *)(pppppppcVar34 + 3) = (code)0x0;
                                        ppppppcVar11 = pppppppcVar25[1];
                                        *pppppppcVar34 = ppppppcVar11;
                                        if (ppppppcVar11 != (code ******)0x0) {
                                          ppppppcVar11[2] = (code *****)pppppppcVar34;
                                        }
                                        ppppppcVar11 = pppppppcVar34[2];
                                        pppppppcVar25[2] = ppppppcVar11;
                                        if (pppppppcVar34 == (code *******)*ppppppcVar11) {
                                          *ppppppcVar11 = (code *****)pppppppcVar25;
                                        }
                                        else {
                                          ppppppcVar11[1] = (code *****)pppppppcVar25;
                                        }
                                        pppppppcVar25[1] = (code ******)pppppppcVar34;
                                        pppppppcVar34[2] = (code ******)pppppppcVar25;
                                        break;
                                      }
                                      if ((pppppppcVar25 == (code *******)0x0) ||
                                         (*(byte *)(pppppppcVar25 + 3) != 0)) {
                                        pppppppcVar14 = (code *******)*pppppppcVar17;
                                        if (pppppppcVar37 == pppppppcVar14) {
                                          ppppppcVar11 = pppppppcVar14[1];
                                          *pppppppcVar17 = ppppppcVar11;
                                          if (ppppppcVar11 != (code ******)0x0) {
                                            ppppppcVar11[2] = (code *****)pppppppcVar17;
                                            pppppppcVar34 = (code *******)pppppppcVar17[2];
                                          }
                                          pppppppcVar14[2] = (code ******)pppppppcVar34;
                                          if (pppppppcVar17 == (code *******)*pppppppcVar34) {
                                            *pppppppcVar34 = (code ******)pppppppcVar14;
                                          }
                                          else {
                                            pppppppcVar34[1] = (code ******)pppppppcVar14;
                                          }
                                          pppppppcVar14[1] = (code ******)pppppppcVar17;
                                          pppppppcVar17[2] = (code ******)pppppppcVar14;
                                          pppppppcVar34 = (code *******)pppppppcVar14[2];
                                          pppppppcVar17 = pppppppcVar14;
                                        }
                                        *(byte *)(pppppppcVar17 + 3) = 1;
                                        *(code *)(pppppppcVar34 + 3) = (code)0x0;
                                        ppppppcVar11 = pppppppcVar34[1];
                                        ppppppcVar29 = (code ******)*ppppppcVar11;
                                        pppppppcVar34[1] = ppppppcVar29;
                                        if (ppppppcVar29 != (code ******)0x0) {
                                          ppppppcVar29[2] = (code *****)pppppppcVar34;
                                        }
                                        ppppppcVar29 = pppppppcVar34[2];
                                        ppppppcVar11[2] = (code *****)ppppppcVar29;
                                        if (pppppppcVar34 == (code *******)*ppppppcVar29) {
                                          *ppppppcVar29 = (code *****)ppppppcVar11;
                                        }
                                        else {
                                          ppppppcVar29[1] = (code *****)ppppppcVar11;
                                        }
                                        *ppppppcVar11 = (code *****)pppppppcVar34;
                                        pppppppcVar34[2] = ppppppcVar11;
                                        break;
                                      }
                                      *(byte *)(pppppppcVar17 + 3) = 1;
                                      *(bool *)(pppppppcVar34 + 3) = pppppppcVar34 == pppppppcVar14;
                                      *(byte *)(pppppppcVar25 + 3) = 1;
LAB_0624aef0:
                                      pppppppcVar37 = pppppppcVar34;
                                    } while (pppppppcVar34 != pppppppcVar14);
                                  }
                                  pppppppcStack_5b0[9] =
                                       (code ******)((long)pppppppcStack_5b0[9] + 1);
                                  pppppppcVar37 = (code *******)pppppppcVar35[1];
                                  pppppppcVar14 = pppppppcVar35;
                                  if ((code *******)pppppppcVar35[1] != (code *******)0x0)
                                  goto LAB_0624b080;
LAB_0624b090:
                                  do {
                                    pppppppcVar35 = (code *******)pppppppcVar14[2];
                                    bVar39 = pppppppcVar14 != (code *******)*pppppppcVar35;
                                    pppppppcVar14 = pppppppcVar35;
                                  } while (bVar39);
                                } while( true );
                              }
                              pppppppcVar37 = pppppppcStack_5b0;
                              *pppppppcStack_5b0 = (code ******)0x0;
                              pppppppcStack_5b0[1] = (code ******)0x0;
                              pppppppcStack_5b0[2] = (code ******)pppppppcStack_4a8;
                              *pppppppcStack_4a0 = (code ******)pppppppcStack_5b0;
                              if ((code *******)*pppppppcStack_618 != (code *******)0x0) {
                                pppppppcStack_618 = (code *******)*pppppppcStack_618;
                              }
                              *(bool *)(pppppppcVar37 + 3) = pppppppcVar37 == pppppppcStack_610;
                              if (pppppppcVar37 != pppppppcStack_610) {
                                do {
                                  while( true ) {
                                    pppppppcVar14 = (code *******)pppppppcVar37[2];
                                    if (*(byte *)(pppppppcVar14 + 3) != 0) goto LAB_0624b2c0;
                                    pppppppcVar35 = (code *******)pppppppcVar14[2];
                                    pppppppcVar17 = (code *******)*pppppppcVar35;
                                    if (pppppppcVar14 == pppppppcVar17) break;
                                    if ((pppppppcVar17 == (code *******)0x0) ||
                                       (*(byte *)(pppppppcVar17 + 3) != 0)) {
                                      pppppppcVar17 = (code *******)*pppppppcVar14;
                                      if (pppppppcVar37 == pppppppcVar17) {
                                        ppppppcVar11 = pppppppcVar17[1];
                                        *pppppppcVar14 = ppppppcVar11;
                                        if (ppppppcVar11 != (code ******)0x0) {
                                          ppppppcVar11[2] = (code *****)pppppppcVar14;
                                          pppppppcVar35 = (code *******)pppppppcVar14[2];
                                        }
                                        pppppppcVar17[2] = (code ******)pppppppcVar35;
                                        if (pppppppcVar14 == (code *******)*pppppppcVar35) {
                                          *pppppppcVar35 = (code ******)pppppppcVar17;
                                        }
                                        else {
                                          pppppppcVar35[1] = (code ******)pppppppcVar17;
                                        }
                                        pppppppcVar17[1] = (code ******)pppppppcVar14;
                                        pppppppcVar14[2] = (code ******)pppppppcVar17;
                                        pppppppcVar35 = (code *******)pppppppcVar17[2];
                                        pppppppcVar14 = pppppppcVar17;
                                      }
                                      *(byte *)(pppppppcVar14 + 3) = 1;
                                      *(byte *)(pppppppcVar35 + 3) = 0;
                                      ppppppcVar11 = pppppppcVar35[1];
                                      ppppppcVar29 = (code ******)*ppppppcVar11;
                                      pppppppcVar35[1] = ppppppcVar29;
                                      if (ppppppcVar29 != (code ******)0x0) {
                                        ppppppcVar29[2] = (code *****)pppppppcVar35;
                                      }
                                      ppppppcVar29 = pppppppcVar35[2];
                                      ppppppcVar11[2] = (code *****)ppppppcVar29;
                                      if (pppppppcVar35 == (code *******)*ppppppcVar29) {
                                        *ppppppcVar29 = (code *****)ppppppcVar11;
                                      }
                                      else {
                                        ppppppcVar29[1] = (code *****)ppppppcVar11;
                                      }
                                      *ppppppcVar11 = (code *****)pppppppcVar35;
                                      pppppppcVar35[2] = ppppppcVar11;
                                      goto LAB_0624b2c0;
                                    }
                                    *(byte *)(pppppppcVar14 + 3) = 1;
                                    *(bool *)(pppppppcVar35 + 3) =
                                         pppppppcVar35 == pppppppcStack_610;
                                    *(byte *)(pppppppcVar17 + 3) = 1;
                                    pppppppcVar37 = pppppppcVar35;
                                    if (pppppppcVar35 == pppppppcStack_610) goto LAB_0624b2c0;
                                  }
                                  ppppppcVar11 = pppppppcVar35[1];
                                  if ((ppppppcVar11 == (code ******)0x0) ||
                                     (*(char *)(ppppppcVar11 + 3) != '\0')) {
                                    if (pppppppcVar37 != (code *******)*pppppppcVar14) {
                                      pppppppcVar37 = (code *******)pppppppcVar14[1];
                                      ppppppcVar11 = *pppppppcVar37;
                                      pppppppcVar14[1] = ppppppcVar11;
                                      if (ppppppcVar11 == (code ******)0x0) {
                                        pppppppcVar37[2] = (code ******)pppppppcVar35;
LAB_0624b223:
                                        *pppppppcVar35 = (code ******)pppppppcVar37;
                                      }
                                      else {
                                        ppppppcVar11[2] = (code *****)pppppppcVar14;
                                        pppppppcVar35 = (code *******)pppppppcVar14[2];
                                        pppppppcVar17 = (code *******)*pppppppcVar35;
                                        pppppppcVar37[2] = (code ******)pppppppcVar35;
                                        if (pppppppcVar14 == pppppppcVar17) goto LAB_0624b223;
                                        pppppppcVar35[1] = (code ******)pppppppcVar37;
                                      }
                                      *pppppppcVar37 = (code ******)pppppppcVar14;
                                      pppppppcVar14[2] = (code ******)pppppppcVar37;
                                      pppppppcVar35 = (code *******)pppppppcVar37[2];
                                      pppppppcVar17 = (code *******)*pppppppcVar35;
                                      pppppppcVar14 = pppppppcVar37;
                                    }
                                    *(byte *)(pppppppcVar14 + 3) = 1;
                                    *(code *)(pppppppcVar35 + 3) = (code)0x0;
                                    ppppppcVar11 = pppppppcVar17[1];
                                    *pppppppcVar35 = ppppppcVar11;
                                    if (ppppppcVar11 != (code ******)0x0) {
                                      ppppppcVar11[2] = (code *****)pppppppcVar35;
                                    }
                                    ppppppcVar11 = pppppppcVar35[2];
                                    pppppppcVar17[2] = ppppppcVar11;
                                    if (pppppppcVar35 == (code *******)*ppppppcVar11) {
                                      *ppppppcVar11 = (code *****)pppppppcVar17;
                                    }
                                    else {
                                      ppppppcVar11[1] = (code *****)pppppppcVar17;
                                    }
                                    pppppppcVar17[1] = (code ******)pppppppcVar35;
                                    pppppppcVar35[2] = (code ******)pppppppcVar17;
                                    break;
                                  }
                                  *(byte *)(pppppppcVar14 + 3) = 1;
                                  *(bool *)(pppppppcVar35 + 3) = pppppppcVar35 == pppppppcStack_610;
                                  *(undefined1 *)(ppppppcVar11 + 3) = 1;
                                  pppppppcVar37 = pppppppcVar35;
                                } while (pppppppcVar35 != pppppppcStack_610);
                              }
LAB_0624b2c0:
                              lStack_608 = lStack_608 + 1;
                            }
LAB_0624b2c8:
                            pppppppcVar37 = (code *******)pppppppcStack_560[1];
                            pppppppcVar14 = pppppppcStack_560;
                            if ((code *******)pppppppcStack_560[1] == (code *******)0x0) {
                              do {
                                auVar15 = (undefined1  [8])pppppppcVar14[2];
                                bVar39 = pppppppcVar14 != *(code ********)auVar15;
                                pppppppcVar14 = (code *******)auVar15;
                              } while (bVar39);
                            }
                            else {
                              do {
                                auVar15 = (undefined1  [8])pppppppcVar37;
                                pppppppcVar37 = *(code ********)auVar15;
                              } while (*(code ********)auVar15 != (code *******)0x0);
                            }
                          } while (auVar15 != (undefined1  [8])&pppppppcStack_670);
                        }
                        func_0x0629f1d0(pppppppcStack_670);
                        func_0x049dc470(&pppppppcStack_598,pppppppcStack_590);
                        func_0x0633c060(&lStack_508,ppppppcStack_540,ppppppcStack_540,
                                        &pppppppcStack_648);
                        func_0x0629f1d0(pppppppcStack_610);
                        func_0x049dc470(&pppppppcStack_630,pppppppcStack_628);
                        if (((ulong)pppppppcStack_648 & 1) != 0) {
                          func_0x0412a280(uStack_638,(ulong)pppppppcStack_648 & 0xfffffffffffffffe);
                        }
                      }
                      pppppppcVar37 = pppppppcStack_518;
                      if (pppppppcStack_518 == (code *******)0x0) {
LAB_0624b4f0:
                        pppppppcStack_648 = (code *******)&uStack_640;
                        uStack_640 = (code *******)0x0;
                        uStack_638 = (code *******)0x0;
                        func_0x0633ccd0(&pppppppcStack_520,pppppppcStack_568,pppppppcStack_568,
                                        &pppppppcStack_648);
                        func_0x049dc470(&pppppppcStack_648,uStack_640);
                        pppppppcVar37 = pppppppcStack_518;
                      }
                      else {
                        bVar39 = (*(byte *)(lStack_578 + 0x18) & 1) != 0;
                        lVar10 = lStack_578 + 0x19;
                        if (bVar39) {
                          lVar10 = *(long *)(lStack_578 + 0x28);
                        }
                        ppppppcVar11 = (code ******)(ulong)(*(byte *)(lStack_578 + 0x18) >> 1);
                        if (bVar39) {
                          ppppppcVar11 = *(code *******)(lStack_578 + 0x20);
                        }
                        pppppppcVar14 = pppppppcStack_518;
                        pppppppcVar35 = (code *******)&pppppppcStack_518;
                        do {
                          pppppppcVar34 = pppppppcVar35;
                          pppppppcVar17 = pppppppcVar14;
                          bVar39 = ((byte)*(code *)(pppppppcVar17 + 4) & 1) == 0;
                          ppppppcVar29 = pppppppcVar17[6];
                          if (bVar39) {
                            ppppppcVar29 = (code ******)((long)pppppppcVar17 + 0x21);
                          }
                          ppppppcVar30 = (code ******)
                                         (ulong)((byte)*(code *)(pppppppcVar17 + 4) >> 1);
                          if (!bVar39) {
                            ppppppcVar30 = pppppppcVar17[5];
                          }
                          ppppppcVar26 = ppppppcVar30;
                          if (ppppppcVar11 < ppppppcVar30) {
                            ppppppcVar26 = ppppppcVar11;
                          }
                          uVar9 = func_0x0eee2ff0(ppppppcVar29,lVar10,ppppppcVar26);
                          if (uVar9 == 0) {
                            bVar39 = ppppppcVar30 < ppppppcVar11;
                            uVar9 = (uint)bVar39 << 3;
                          }
                          else {
                            bVar39 = SUB41(uVar9 >> 0x1f,0);
                            uVar9 = uVar9 >> 0x1c & 0xfffffff8;
                          }
                          pppppppcVar35 = pppppppcVar17;
                          if (bVar39 != false) {
                            pppppppcVar35 = pppppppcVar34;
                          }
                          pppppppcVar14 = *(code ********)((long)pppppppcVar17 + (ulong)uVar9);
                        } while (*(code ********)((long)pppppppcVar17 + (ulong)uVar9) !=
                                 (code *******)0x0);
                        if ((code ********)pppppppcVar35 == &pppppppcStack_518) goto LAB_0624b4f0;
                        pppppppcVar14 = pppppppcVar17;
                        if (bVar39 != false) {
                          pppppppcVar14 = pppppppcVar34;
                        }
                        ppppppcVar29 = (code ******)((long)pppppppcVar17 + 0x21);
                        if (bVar39 != false) {
                          ppppppcVar29 = (code ******)((long)pppppppcVar34 + 0x21);
                        }
                        bVar39 = ((byte)*(code *)(pppppppcVar14 + 4) & 1) != 0;
                        if (bVar39) {
                          ppppppcVar29 = pppppppcVar14[6];
                        }
                        ppppppcVar30 = (code ******)(ulong)((byte)*(code *)(pppppppcVar14 + 4) >> 1)
                        ;
                        if (bVar39) {
                          ppppppcVar30 = pppppppcVar14[5];
                        }
                        ppppppcVar26 = ppppppcVar11;
                        if (ppppppcVar30 < ppppppcVar11) {
                          ppppppcVar26 = ppppppcVar30;
                        }
                        iVar8 = func_0x0eee2ff0(lVar10,ppppppcVar29,ppppppcVar26);
                        if (iVar8 == 0) {
                          if (ppppppcVar11 < ppppppcVar30) goto LAB_0624b4f0;
                        }
                        else if (iVar8 < 0) goto LAB_0624b4f0;
                      }
                      pppppppcVar14 = (code *******)&pppppppcStack_518;
                      pppppppcVar35 = pppppppcVar14;
                      if (pppppppcVar37 != (code *******)0x0) {
                        bVar39 = (*(byte *)(lStack_578 + 0x18) & 1) != 0;
                        lVar10 = lStack_578 + 0x19;
                        if (bVar39) {
                          lVar10 = *(long *)(lStack_578 + 0x28);
                        }
                        ppppppcVar11 = (code ******)(ulong)(*(byte *)(lStack_578 + 0x18) >> 1);
                        if (bVar39) {
                          ppppppcVar11 = *(code *******)(lStack_578 + 0x20);
                        }
                        do {
                          while( true ) {
                            pppppppcVar14 = pppppppcVar37;
                            bVar39 = ((byte)*(code *)(pppppppcVar14 + 4) & 1) != 0;
                            ppppppcVar29 = (code ******)((long)pppppppcVar14 + 0x21);
                            if (bVar39) {
                              ppppppcVar29 = pppppppcVar14[6];
                            }
                            ppppppcVar30 = (code ******)
                                           (ulong)((byte)*(code *)(pppppppcVar14 + 4) >> 1);
                            if (bVar39) {
                              ppppppcVar30 = pppppppcVar14[5];
                            }
                            ppppppcVar26 = ppppppcVar11;
                            if (ppppppcVar30 < ppppppcVar11) {
                              ppppppcVar26 = ppppppcVar30;
                            }
                            iVar8 = func_0x0eee2ff0(lVar10,ppppppcVar29,ppppppcVar26);
                            if (iVar8 == 0) break;
                            if (-1 < iVar8) goto LAB_0624b5d5;
LAB_0624b580:
                            pppppppcVar35 = pppppppcVar14;
                            pppppppcVar37 = (code *******)*pppppppcVar14;
                            if ((code *******)*pppppppcVar14 == (code *******)0x0)
                            goto LAB_0624b606;
                          }
                          if (ppppppcVar11 < ppppppcVar30) goto LAB_0624b580;
LAB_0624b5d5:
                          iVar8 = func_0x0eee2ff0(ppppppcVar29,lVar10,ppppppcVar26);
                          if (iVar8 == 0) {
                            if (ppppppcVar11 <= ppppppcVar30) goto LAB_0624b878;
                          }
                          else if (-1 < iVar8) goto LAB_0624b878;
                          pppppppcVar37 = (code *******)pppppppcVar14[1];
                        } while ((code *******)pppppppcVar14[1] != (code *******)0x0);
                        pppppppcVar35 = pppppppcVar14 + 1;
                      }
LAB_0624b606:
                      pppppppcVar37 =
                           (code *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                      if (pppppppcVar37 == (code *******)0x0) {
                        FUN_0eec74c0(0x50,0);
                      }
                      uStack_640 = (code *******)&pppppppcStack_520;
                      uStack_638 = (code *******)0x0;
                      pppppppcStack_648 = pppppppcVar37;
                      if (((ulong)*pppppppcStack_568 & 1) == 0) {
                        pppppppcVar37[6] = pppppppcStack_568[2];
                        ppppppcVar11 = pppppppcStack_568[1];
                        pppppppcVar37[4] = *pppppppcStack_568;
                        pppppppcVar37[5] = ppppppcVar11;
                      }
                      else {
                        func_0x0412e5e0(pppppppcVar37 + 4,*(undefined8 *)(lStack_578 + 0x28),
                                        *(undefined8 *)(lStack_578 + 0x20));
                      }
                      pppppppcVar37[8] = (code ******)0x0;
                      pppppppcVar37[9] = (code ******)0x0;
                      pppppppcVar37[7] = (code ******)(pppppppcVar37 + 8);
                      *pppppppcVar37 = (code ******)0x0;
                      pppppppcVar37[1] = (code ******)0x0;
                      pppppppcVar37[2] = (code ******)pppppppcVar14;
                      *pppppppcVar35 = (code ******)pppppppcVar37;
                      if ((code *******)*pppppppcStack_520 != (code *******)0x0) {
                        pppppppcStack_520 = (code *******)*pppppppcStack_520;
                      }
                      *(bool *)(pppppppcVar37 + 3) = pppppppcVar37 == pppppppcStack_518;
                      pppppppcVar14 = pppppppcVar37;
                      if (pppppppcVar37 != pppppppcStack_518) {
                        do {
                          while( true ) {
                            pppppppcVar35 = (code *******)pppppppcVar14[2];
                            if (*(code *)(pppppppcVar35 + 3) != (code)0x0) goto LAB_0624b870;
                            pppppppcVar17 = (code *******)pppppppcVar35[2];
                            pppppppcVar34 = (code *******)*pppppppcVar17;
                            if (pppppppcVar35 == pppppppcVar34) break;
                            if ((pppppppcVar34 == (code *******)0x0) ||
                               (*(code *)(pppppppcVar34 + 3) != (code)0x0)) {
                              pppppppcVar34 = (code *******)*pppppppcVar35;
                              if (pppppppcVar14 == pppppppcVar34) {
                                ppppppcVar11 = pppppppcVar34[1];
                                *pppppppcVar35 = ppppppcVar11;
                                if (ppppppcVar11 != (code ******)0x0) {
                                  ppppppcVar11[2] = (code *****)pppppppcVar35;
                                  pppppppcVar17 = (code *******)pppppppcVar35[2];
                                }
                                pppppppcVar34[2] = (code ******)pppppppcVar17;
                                if (pppppppcVar35 == (code *******)*pppppppcVar17) {
                                  *pppppppcVar17 = (code ******)pppppppcVar34;
                                }
                                else {
                                  pppppppcVar17[1] = (code ******)pppppppcVar34;
                                }
                                pppppppcVar34[1] = (code ******)pppppppcVar35;
                                pppppppcVar35[2] = (code ******)pppppppcVar34;
                                pppppppcVar17 = (code *******)pppppppcVar34[2];
                                pppppppcVar35 = pppppppcVar34;
                              }
                              *(code *)(pppppppcVar35 + 3) = (code)0x1;
                              *(code *)(pppppppcVar17 + 3) = (code)0x0;
                              ppppppcVar11 = pppppppcVar17[1];
                              ppppppcVar29 = (code ******)*ppppppcVar11;
                              pppppppcVar17[1] = ppppppcVar29;
                              if (ppppppcVar29 != (code ******)0x0) {
                                ppppppcVar29[2] = (code *****)pppppppcVar17;
                              }
                              ppppppcVar29 = pppppppcVar17[2];
                              ppppppcVar11[2] = (code *****)ppppppcVar29;
                              if (pppppppcVar17 == (code *******)*ppppppcVar29) {
                                *ppppppcVar29 = (code *****)ppppppcVar11;
                              }
                              else {
                                ppppppcVar29[1] = (code *****)ppppppcVar11;
                              }
                              *ppppppcVar11 = (code *****)pppppppcVar17;
                              pppppppcVar17[2] = ppppppcVar11;
                              goto LAB_0624b870;
                            }
                            *(code *)(pppppppcVar35 + 3) = (code)0x1;
                            *(bool *)(pppppppcVar17 + 3) = pppppppcVar17 == pppppppcStack_518;
                            *(code *)(pppppppcVar34 + 3) = (code)0x1;
                            pppppppcVar14 = pppppppcVar17;
                            if (pppppppcVar17 == pppppppcStack_518) goto LAB_0624b870;
                          }
                          ppppppcVar11 = pppppppcVar17[1];
                          if ((ppppppcVar11 == (code ******)0x0) ||
                             (*(code *)(ppppppcVar11 + 3) != (code)0x0)) {
                            if (pppppppcVar14 != (code *******)*pppppppcVar35) {
                              pppppppcVar14 = (code *******)pppppppcVar35[1];
                              ppppppcVar11 = *pppppppcVar14;
                              pppppppcVar35[1] = ppppppcVar11;
                              if (ppppppcVar11 == (code ******)0x0) {
                                pppppppcVar14[2] = (code ******)pppppppcVar17;
LAB_0624b7d0:
                                *pppppppcVar17 = (code ******)pppppppcVar14;
                              }
                              else {
                                ppppppcVar11[2] = (code *****)pppppppcVar35;
                                pppppppcVar17 = (code *******)pppppppcVar35[2];
                                pppppppcVar34 = (code *******)*pppppppcVar17;
                                pppppppcVar14[2] = (code ******)pppppppcVar17;
                                if (pppppppcVar35 == pppppppcVar34) goto LAB_0624b7d0;
                                pppppppcVar17[1] = (code ******)pppppppcVar14;
                              }
                              *pppppppcVar14 = (code ******)pppppppcVar35;
                              pppppppcVar35[2] = (code ******)pppppppcVar14;
                              pppppppcVar17 = (code *******)pppppppcVar14[2];
                              pppppppcVar34 = (code *******)*pppppppcVar17;
                              pppppppcVar35 = pppppppcVar14;
                            }
                            *(code *)(pppppppcVar35 + 3) = (code)0x1;
                            *(code *)(pppppppcVar17 + 3) = (code)0x0;
                            ppppppcVar11 = pppppppcVar34[1];
                            *pppppppcVar17 = ppppppcVar11;
                            if (ppppppcVar11 != (code ******)0x0) {
                              ppppppcVar11[2] = (code *****)pppppppcVar17;
                            }
                            ppppppcVar11 = pppppppcVar17[2];
                            pppppppcVar34[2] = ppppppcVar11;
                            if (pppppppcVar17 == (code *******)*ppppppcVar11) {
                              *ppppppcVar11 = (code *****)pppppppcVar34;
                            }
                            else {
                              ppppppcVar11[1] = (code *****)pppppppcVar34;
                            }
                            pppppppcVar34[1] = (code ******)pppppppcVar17;
                            pppppppcVar17[2] = (code ******)pppppppcVar34;
                            break;
                          }
                          *(code *)(pppppppcVar35 + 3) = (code)0x1;
                          *(bool *)(pppppppcVar17 + 3) = pppppppcVar17 == pppppppcStack_518;
                          *(code *)(ppppppcVar11 + 3) = (code)0x1;
                          pppppppcVar14 = pppppppcVar17;
                        } while (pppppppcVar17 != pppppppcStack_518);
                      }
LAB_0624b870:
                      lStack_510 = lStack_510 + 1;
                      pppppppcVar14 = pppppppcVar37;
LAB_0624b878:
                      func_0x049dcb70(pppppppcVar14 + 7,pppppcStack_570);
                      pppppppcStack_648 = (code *******)ppppppcStack_540;
                      lVar10 = func_0x0633cec0(&lStack_508,ppppppcStack_540,&pppppppcStack_648);
                      func_0x049dcb70(lVar10 + 0x40,lStack_578);
                      pppppppcStack_648 = pppppppcStack_568;
                      lVar28 = func_0x0633cec0(&lStack_508,pppppppcStack_568,&pppppppcStack_648);
                      lVar19 = lStack_578;
                      pbVar16 = (byte *)(lStack_578 + 0x30);
                      lVar10 = *(long *)(lVar28 + 0x60);
                      if (lVar10 == 0) {
LAB_0624b9e0:
                        pppppppcStack_648 = pppppppcStack_568;
                        lVar10 = func_0x0633cec0(&lStack_508,pppppppcStack_568,&pppppppcStack_648);
                        pppppppcStack_648 = (code *******)&uStack_640;
                        uStack_640 = (code *******)0x0;
                        uStack_638 = (code *******)0x0;
                        func_0x0633ccd0(lVar10 + 0x58,pbVar16,pbVar16,&pppppppcStack_648);
                        func_0x049dc470(&pppppppcStack_648,uStack_640);
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
                          uVar9 = func_0x0eee2ff0(lVar33,lVar31,uVar27);
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
                        iVar8 = func_0x0eee2ff0(lVar31,lVar10,uVar27);
                        if (iVar8 == 0) {
                          if (uVar21 < uVar23) goto LAB_0624b9e0;
                        }
                        else if (iVar8 < 0) goto LAB_0624b9e0;
                      }
                      pppppppcStack_648 = pppppppcStack_568;
                      pppppppcStack_680 =
                           (code *******)
                           func_0x0633cec0(&lStack_508,pppppppcStack_568,&pppppppcStack_648);
                      uStack_580 = pppppppcStack_680 + 0xc;
                      pppppppcVar37 = (code *******)pppppppcStack_680[0xc];
                      pppppppcVar14 = uStack_580;
                      pppppppcVar35 = uStack_580;
                      pppppppcStack_5a8 = pppppppcStack_680;
                      if (pppppppcVar37 != (code *******)0x0) {
                        bVar39 = (*(byte *)(lStack_578 + 0x30) & 1) != 0;
                        lVar10 = lStack_578 + 0x31;
                        if (bVar39) {
                          lVar10 = *(long *)(lStack_578 + 0x40);
                        }
                        ppppppcVar11 = (code ******)(ulong)(*(byte *)(lStack_578 + 0x30) >> 1);
                        if (bVar39) {
                          ppppppcVar11 = *(code *******)(lStack_578 + 0x38);
                        }
                        do {
                          while( true ) {
                            pppppppcVar17 = pppppppcVar37;
                            bVar39 = ((byte)*(code *)(pppppppcVar17 + 4) & 1) != 0;
                            ppppppcVar29 = (code ******)((long)pppppppcVar17 + 0x21);
                            if (bVar39) {
                              ppppppcVar29 = pppppppcVar17[6];
                            }
                            ppppppcVar30 = (code ******)
                                           (ulong)((byte)*(code *)(pppppppcVar17 + 4) >> 1);
                            if (bVar39) {
                              ppppppcVar30 = pppppppcVar17[5];
                            }
                            ppppppcVar26 = ppppppcVar11;
                            if (ppppppcVar30 < ppppppcVar11) {
                              ppppppcVar26 = ppppppcVar30;
                            }
                            iVar8 = func_0x0eee2ff0(lVar10,ppppppcVar29,ppppppcVar26);
                            pppppppcVar14 = pppppppcVar17;
                            if (iVar8 == 0) break;
                            if (-1 < iVar8) goto LAB_0624bb15;
LAB_0624bac0:
                            pppppppcVar37 = (code *******)*pppppppcVar17;
                            pppppppcVar35 = pppppppcVar17;
                            if ((code *******)*pppppppcVar17 == (code *******)0x0)
                            goto LAB_0624bb44;
                          }
                          if (ppppppcVar11 < ppppppcVar30) goto LAB_0624bac0;
LAB_0624bb15:
                          iVar8 = func_0x0eee2ff0(ppppppcVar29,lVar10,ppppppcVar26);
                          if (iVar8 == 0) {
                            if (ppppppcVar11 <= ppppppcVar30) goto LAB_0624bdac;
                          }
                          else if (-1 < iVar8) goto LAB_0624bdac;
                          pppppppcVar37 = (code *******)pppppppcVar17[1];
                        } while ((code *******)pppppppcVar17[1] != (code *******)0x0);
                        pppppppcVar35 = pppppppcVar17 + 1;
                      }
LAB_0624bb44:
                      pppppppcVar17 =
                           (code *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                      pppppppcVar37 = pppppppcStack_680;
                      if (pppppppcVar17 == (code *******)0x0) {
                        FUN_0eec74c0(0x50,0);
                      }
                      pppppppcVar37 = pppppppcVar37 + 0xb;
                      uStack_638 = (code *******)0x0;
                      pppppppcStack_648 = pppppppcVar17;
                      uStack_640 = pppppppcVar37;
                      if ((*pbVar16 & 1) == 0) {
                        pppppppcVar17[6] = *(code *******)(lVar19 + 0x40);
                        ppppppcVar11 = *(code *******)(lVar19 + 0x38);
                        pppppppcVar17[4] = *(code *******)pbVar16;
                        pppppppcVar17[5] = ppppppcVar11;
                      }
                      else {
                        func_0x0412e5e0(pppppppcVar17 + 4,*(undefined8 *)(lStack_578 + 0x40),
                                        *(undefined8 *)(lStack_578 + 0x38));
                      }
                      pppppppcVar17[8] = (code ******)0x0;
                      pppppppcVar17[9] = (code ******)0x0;
                      pppppppcVar17[7] = (code ******)(pppppppcVar17 + 8);
                      *pppppppcVar17 = (code ******)0x0;
                      pppppppcVar17[1] = (code ******)0x0;
                      pppppppcVar17[2] = (code ******)pppppppcVar14;
                      *pppppppcVar35 = (code ******)pppppppcVar17;
                      if ((code ******)**pppppppcVar37 != (code ******)0x0) {
                        *pppppppcVar37 = (code ******)**pppppppcVar37;
                      }
                      pppppppcVar37 = (code *******)*uStack_580;
                      *(bool *)(pppppppcVar17 + 3) = pppppppcVar17 == pppppppcVar37;
                      pppppppcVar14 = pppppppcVar17;
                      if (pppppppcVar17 != pppppppcVar37) {
                        do {
                          pppppppcVar35 = (code *******)pppppppcVar14[2];
                          if (*(code *)(pppppppcVar35 + 3) != (code)0x0) break;
                          pppppppcVar34 = (code *******)pppppppcVar35[2];
                          pppppppcVar25 = (code *******)*pppppppcVar34;
                          if (pppppppcVar35 == pppppppcVar25) {
                            ppppppcVar11 = pppppppcVar34[1];
                            if ((ppppppcVar11 == (code ******)0x0) ||
                               (*(code *)(ppppppcVar11 + 3) != (code)0x0)) {
                              if (pppppppcVar14 != (code *******)*pppppppcVar35) {
                                pppppppcVar37 = (code *******)pppppppcVar35[1];
                                ppppppcVar11 = *pppppppcVar37;
                                pppppppcVar35[1] = ppppppcVar11;
                                if (ppppppcVar11 == (code ******)0x0) {
                                  pppppppcVar37[2] = (code ******)pppppppcVar34;
LAB_0624bd00:
                                  *pppppppcVar34 = (code ******)pppppppcVar37;
                                }
                                else {
                                  ppppppcVar11[2] = (code *****)pppppppcVar35;
                                  pppppppcVar34 = (code *******)pppppppcVar35[2];
                                  pppppppcVar14 = (code *******)*pppppppcVar34;
                                  pppppppcVar37[2] = (code ******)pppppppcVar34;
                                  if (pppppppcVar35 == pppppppcVar14) goto LAB_0624bd00;
                                  pppppppcVar34[1] = (code ******)pppppppcVar37;
                                }
                                *pppppppcVar37 = (code ******)pppppppcVar35;
                                pppppppcVar35[2] = (code ******)pppppppcVar37;
                                pppppppcVar34 = (code *******)pppppppcVar37[2];
                                pppppppcVar25 = (code *******)*pppppppcVar34;
                                pppppppcVar35 = pppppppcVar37;
                              }
                              *(code *)(pppppppcVar35 + 3) = (code)0x1;
                              *(code *)(pppppppcVar34 + 3) = (code)0x0;
                              ppppppcVar11 = pppppppcVar25[1];
                              *pppppppcVar34 = ppppppcVar11;
                              if (ppppppcVar11 != (code ******)0x0) {
                                ppppppcVar11[2] = (code *****)pppppppcVar34;
                              }
                              ppppppcVar11 = pppppppcVar34[2];
                              pppppppcVar25[2] = ppppppcVar11;
                              if (pppppppcVar34 == (code *******)*ppppppcVar11) {
                                *ppppppcVar11 = (code *****)pppppppcVar25;
                              }
                              else {
                                ppppppcVar11[1] = (code *****)pppppppcVar25;
                              }
                              pppppppcVar25[1] = (code ******)pppppppcVar34;
                              pppppppcVar34[2] = (code ******)pppppppcVar25;
                              break;
                            }
                            *(code *)(pppppppcVar35 + 3) = (code)0x1;
                            *(bool *)(pppppppcVar34 + 3) = pppppppcVar34 == pppppppcVar37;
                            *(code *)(ppppppcVar11 + 3) = (code)0x1;
                          }
                          else {
                            if ((pppppppcVar25 == (code *******)0x0) ||
                               (*(code *)(pppppppcVar25 + 3) != (code)0x0)) {
                              pppppppcVar37 = (code *******)*pppppppcVar35;
                              if (pppppppcVar14 == pppppppcVar37) {
                                ppppppcVar11 = pppppppcVar37[1];
                                *pppppppcVar35 = ppppppcVar11;
                                if (ppppppcVar11 != (code ******)0x0) {
                                  ppppppcVar11[2] = (code *****)pppppppcVar35;
                                  pppppppcVar34 = (code *******)pppppppcVar35[2];
                                }
                                pppppppcVar37[2] = (code ******)pppppppcVar34;
                                if (pppppppcVar35 == (code *******)*pppppppcVar34) {
                                  *pppppppcVar34 = (code ******)pppppppcVar37;
                                }
                                else {
                                  pppppppcVar34[1] = (code ******)pppppppcVar37;
                                }
                                pppppppcVar37[1] = (code ******)pppppppcVar35;
                                pppppppcVar35[2] = (code ******)pppppppcVar37;
                                pppppppcVar34 = (code *******)pppppppcVar37[2];
                                pppppppcVar35 = pppppppcVar37;
                              }
                              *(code *)(pppppppcVar35 + 3) = (code)0x1;
                              *(code *)(pppppppcVar34 + 3) = (code)0x0;
                              ppppppcVar11 = pppppppcVar34[1];
                              ppppppcVar29 = (code ******)*ppppppcVar11;
                              pppppppcVar34[1] = ppppppcVar29;
                              if (ppppppcVar29 != (code ******)0x0) {
                                ppppppcVar29[2] = (code *****)pppppppcVar34;
                              }
                              ppppppcVar29 = pppppppcVar34[2];
                              ppppppcVar11[2] = (code *****)ppppppcVar29;
                              if (pppppppcVar34 == (code *******)*ppppppcVar29) {
                                *ppppppcVar29 = (code *****)ppppppcVar11;
                              }
                              else {
                                ppppppcVar29[1] = (code *****)ppppppcVar11;
                              }
                              *ppppppcVar11 = (code *****)pppppppcVar34;
                              pppppppcVar34[2] = ppppppcVar11;
                              break;
                            }
                            *(code *)(pppppppcVar35 + 3) = (code)0x1;
                            *(bool *)(pppppppcVar34 + 3) = pppppppcVar34 == pppppppcVar37;
                            *(code *)(pppppppcVar25 + 3) = (code)0x1;
                          }
                          pppppppcVar14 = pppppppcVar34;
                        } while (pppppppcVar34 != pppppppcVar37);
                      }
                      pppppppcStack_5a8[0xd] = (code ******)((long)pppppppcStack_5a8[0xd] + 1);
LAB_0624bdac:
                      func_0x049dcb70(pppppppcVar17 + 7,pppppcStack_570);
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
                  pppppppcStack_468 = (code *******)&UNK_0f461228;
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
                pppppppcVar37 = uStack_458;
                pppppcVar12 = pppppcStack_4c0;
                if (uStack_458 != (code *******)0x0) {
                  LOCK();
                  pppppppcVar14 = uStack_458 + 1;
                  ppppppcVar11 = *pppppppcVar14;
                  *pppppppcVar14 = (code ******)((long)*pppppppcVar14 + -1);
                  UNLOCK();
                  if (ppppppcVar11 == (code ******)0x0) {
                    (*(code *)(*uStack_458)[2])(uStack_458);
                    func_0x0412c2d0(pppppppcVar37);
                    pppppcVar12 = pppppcStack_4c0;
                  }
                }
              }
            }
            pppppcVar32 = pppppcStack_570 + 9;
          } while (pppppcVar32 != pppppcVar12);
        }
        ppppppcVar11 = ppppppcStack_540 + 9;
      } while (ppppppcStack_358 != ppppppcStack_540);
      goto LAB_0624c3a3;
    }
    uStack_59c = (uint)CONCAT71((int7)((ulong)ppppppcStack_530 >> 8),1);
  }
  uStack_64c = 0;
  uStack_6b1 = 1;
LAB_0624c3a3:
  pppppppcVar37 = pppppppcStack_4f8;
  if ((code ********)pppppppcStack_520 != &pppppppcStack_518) {
    pppppppcVar14 = pppppppcStack_520;
    do {
      puVar18 = (undefined8 *)func_0x0633d4e0(&puStack_480,pppppppcVar14 + 4);
      if (puVar18 == &uStack_478) {
        if ((*plStack_658 == 0) &&
           (cVar7 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)*plStack_658 == '\0') &&
           (cVar7 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
        uStack_458 = (code *******)0x0;
        pppppppcStack_450 = (code *******)0x0;
        pppppppcStack_468 = (code *******)0x0;
        uStack_460 = (code ******)0x0;
        pppppppcStack_448 = (code *******)0x0;
        if ((DAT_0f569528 & 1) == 0) {
          pppppppcStack_450 = _DAT_0f569538;
          uStack_460 = (code ******)CONCAT71(uRam000000000f569529,DAT_0f569528);
          uStack_458 = _DAT_0f569530;
        }
        else {
          func_0x04885070(&uStack_460,_DAT_0f569538,_DAT_0f569530);
        }
        pppppppcStack_468 = _DAT_0f569520;
        auStack_6a8 = (undefined1  [8])0x0;
        _auStack_6a0 = (code *******)0x0;
        uStack_698 = (code *******)0x0;
        pppppppcStack_5d0 = (code *******)((ulong)pppppppcStack_5d0 & 0xffffffffffffff00);
        pppppppcStack_5d8 = (code *******)auStack_6a8;
        pppppppcVar37 = (code *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (pppppppcVar37 == (code *******)0x0) {
          FUN_0eec74c0(0x28,0);
        }
        uStack_698 = pppppppcVar37 + 5;
        uStack_640 = (code *******)auStack_678;
        uStack_638 = (code *******)&pppppppcStack_598;
        pppppppcStack_630 = (code *******)((ulong)pppppppcStack_630 & 0xffffffffffffff00);
        pppppppcVar37[2] = (code ******)0x0;
        pppppppcVar37[3] = (code ******)0x0;
        *pppppppcVar37 = (code ******)0x0;
        pppppppcVar37[1] = (code ******)0x0;
        pppppppcVar37[4] = (code ******)0x0;
        auStack_6a8 = (undefined1  [8])pppppppcVar37;
        auStack_678 = (undefined1  [8])pppppppcVar37;
        pppppppcStack_598 = pppppppcVar37;
        if ((code ********)pppppppcVar37 != &pppppppcStack_468) {
          if (((ulong)uStack_460 & 1) == 0) {
            pppppppcVar37[3] = (code ******)pppppppcStack_450;
            *(undefined4 *)(pppppppcVar37 + 1) = (undefined4)uStack_460;
            *(undefined4 *)((long)pppppppcVar37 + 0xc) = uStack_460._4_4_;
            *(undefined4 *)(pppppppcVar37 + 2) = (undefined4)uStack_458;
            *(undefined4 *)((long)pppppppcVar37 + 0x14) = uStack_458._4_4_;
          }
          else {
            _auStack_6a0 = pppppppcVar37;
            pppppppcStack_648 = (code *******)auStack_6a8;
            func_0x04885070(pppppppcVar37 + 1,pppppppcStack_450,uStack_458);
          }
        }
        *pppppppcVar37 = (code ******)pppppppcStack_468;
        _auStack_6a0 = pppppppcStack_598 + 5;
        uStack_638 = pppppppcVar14 + 7;
        uStack_640 = (code *******)&UNK_0633d5d0;
        pppppppcStack_630 = (code *******)FUN_0633e820;
        pppppppcStack_648 = pppppppcVar14 + 4;
        func_0x0470d9a0(&pppppppcStack_5d8,&UNK_011ee744,0xa8,0xff,&pppppppcStack_648);
        pppppppcStack_1e0 = pppppppcStack_5c8;
        ppppppcStack_1f0 = (code ******)pppppppcStack_5d8;
        uStack_1e8 = (ulong)pppppppcStack_5d0;
        pppppppcStack_5d8 = (code *******)0x0;
        pppppppcStack_5d0 = (code *******)0x0;
        pppppppcStack_5c8 = (code *******)0x0;
        uStack_168 = 0;
        func_0x060aeeb0(uVar20,0,2,auStack_6a8,auStack_1f8,1);
        uVar21 = (ulong)uStack_168;
        if (uVar21 != 0xffffffff) {
          uVar21 = (**(code **)(&UNK_0f023e00 + uVar21 * 8))(&pppppppcStack_648,&ppppppcStack_1f0);
        }
        uStack_168 = 0xffffffff;
        if (((ulong)pppppppcStack_5d8 & 1) != 0) {
          uVar21 = func_0x0412a280(pppppppcStack_5c8,(ulong)pppppppcStack_5d8 & 0xfffffffffffffffe);
        }
        auVar15 = auStack_6a8;
        pppppppcVar37 = _auStack_6a0;
        if (auStack_6a8 != (undefined1  [8])0x0) {
          for (; auVar15 != (undefined1  [8])pppppppcVar37; pppppppcVar37 = pppppppcVar37 + -5) {
            if (((ulong)pppppppcVar37[-4] & 1) != 0) {
              func_0x0412a280(pppppppcVar37[-2],(ulong)pppppppcVar37[-4] & 0xfffffffffffffffe);
            }
          }
          _auStack_6a0 = (code *******)auVar15;
          uVar21 = func_0x0412a280(auStack_6a8,(long)uStack_698 - (long)auStack_6a8);
        }
        if (((ulong)uStack_460 & 1) != 0) {
          uVar21 = func_0x0412a280(pppppppcStack_450,(ulong)uStack_460 & 0xfffffffffffffffe);
        }
        uStack_6b1 = 2;
        uStack_64c = (uint)CONCAT71((int7)(uVar21 >> 8),1);
        uStack_59c = 0;
        pppppppcVar37 = (code *******)pppppppcVar14[1];
        if ((code *******)pppppppcVar14[1] != (code *******)0x0) goto LAB_0624c800;
LAB_0624c810:
        do {
          pppppppcVar35 = (code *******)pppppppcVar14[2];
          bVar39 = pppppppcVar14 != (code *******)*pppppppcVar35;
          pppppppcVar14 = pppppppcVar35;
        } while (bVar39);
      }
      else {
        pppppppcVar37 = (code *******)pppppppcVar14[1];
        if ((code *******)pppppppcVar14[1] == (code *******)0x0) goto LAB_0624c810;
LAB_0624c800:
        do {
          pppppppcVar35 = pppppppcVar37;
          pppppppcVar37 = (code *******)*pppppppcVar35;
        } while ((code *******)*pppppppcVar35 != (code *******)0x0);
      }
      pppppppcVar14 = pppppppcVar35;
      pppppppcVar37 = pppppppcStack_4f8;
    } while ((code ********)pppppppcVar35 != &pppppppcStack_518);
  }
  do {
    if (pppppppcVar37 == (code *******)0x0) {
      if ((uStack_64c & 1) != 0) {
        if ((*plStack_658 == 0) &&
           (cVar7 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)*plStack_658 == '\0') &&
           (cVar7 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar20 = (**(code **)(*(long *)plStack_658[2] + 0x30))();
        puStack_308 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puStack_308 == (undefined4 *)0x0) {
          FUN_0eec74c0(0x20,0);
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
          FUN_0eec74c0(0x20,0);
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
            (**(code **)(&UNK_0f023ee0 + (ulong)uStack_2a0 * 8))(&pppppppcStack_468,&uStack_2d8);
          }
          uStack_2a0 = 0xffffffff;
        }
        if ((ulong)uStack_2e0 != 0xffffffff) {
          (**(code **)(&UNK_0f023ee0 + (ulong)uStack_2e0 * 8))(&pppppppcStack_468,&uStack_318);
        }
        uStack_2e0 = 0xffffffff;
      }
      ppppppcVar29 = ppppppcStack_538;
      ppppppcVar11 = ppppppcStack_530;
      if (ppppppcStack_538 != (code ******)0x0) {
        while (ppppppcVar29 != ppppppcVar11) {
          func_0x049ea190(ppppppcVar11 + -9);
          ppppppcVar11 = ppppppcVar11 + -9;
        }
        ppppppcStack_530 = ppppppcVar29;
        func_0x0412a280(ppppppcStack_538,(long)pbStack_528 - (long)ppppppcStack_538);
      }
      func_0x0633bd60(pppppppcStack_4f8);
      lVar10 = lStack_508;
      lStack_508 = 0;
      if (lVar10 != 0) {
        func_0x0412a280(lVar10,lStack_500 << 3);
      }
      func_0x0629f1d0(pppppppcStack_518);
      func_0x0
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x1259a9b  Something unexpected occured
 * 0x1259aa7  expected occured
 * 0x14609e5  See Log Panel for more details
 * 0x14609f3  for more details
 */
