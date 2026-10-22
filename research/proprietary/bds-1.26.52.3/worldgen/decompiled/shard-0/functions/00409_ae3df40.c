/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xaf3df40 (ELF vaddr 0xae3df40)
 * Label: caller-of-callee
 * Body:  [[0af3df40, 0af3f662] [0af3f670, 0af4023b] [0af40240, 0af403d9] [0af403e0, 0af40846] [0af40850, 0af408b9] [0af408c0, 0af40921] [0af40930, 0af40afe] [0af40dd4, 0af40ddb] [0af40fa9, 0af40fec] [0af41068, 0af410c7] [0af410d0, 0af41140] [0af41150, 0af41191]]
 * Ghidra: FUN_0af3df40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0af3df40(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ulong *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong ****ppppuVar8;
  ulong ****ppppuVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  ulong **ppuVar16;
  ulong ***pppuVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *unaff_RBX;
  undefined8 *puVar23;
  byte *pbVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong ***pppuVar29;
  ulong ***pppuVar30;
  long lVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  uint uStack_7c0;
  undefined4 uStack_7bc;
  uint uStack_7ac;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  ulong ****ppppuStack_798;
  long lStack_788;
  long lStack_780;
  long lStack_778;
  undefined1 auStack_770 [4];
  undefined4 uStack_76c;
  uint uStack_768;
  undefined4 uStack_764;
  ulong **ppuStack_760;
  byte bStack_758;
  undefined7 uStack_757;
  undefined1 uStack_750;
  undefined1 uStack_74f;
  undefined6 uStack_74e;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  long *plStack_730;
  ulong ****ppppuStack_728;
  ulong ***pppuStack_720;
  ulong ***pppuStack_718;
  ulong uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  ulong ***pppuStack_6f8;
  ulong ***pppuStack_6f0;
  ulong ***pppuStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  byte bStack_6b0;
  undefined7 uStack_6af;
  undefined1 uStack_6a8;
  undefined1 uStack_6a7;
  undefined8 uStack_6a0;
  ulong ****ppppuStack_698;
  undefined1 uStack_690;
  undefined7 uStack_68f;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  undefined1 auStack_658 [4];
  undefined4 uStack_654;
  undefined8 uStack_650;
  ulong **ppuStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  ulong **ppuStack_630;
  undefined1 auStack_628 [16];
  undefined *puStack_618;
  undefined8 uStack_610;
  code *pcStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  code *pcStack_5f0;
  long *plStack_5e8;
  long lStack_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 *puStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  code *pcStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  code *pcStack_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined8 uStack_570;
  code *pcStack_568;
  undefined1 auStack_558 [24];
  code *apcStack_540 [2];
  undefined1 auStack_530 [24];
  ulong **ppuStack_518;
  ulong **ppuStack_510;
  ulong **ppuStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined1 auStack_4f0 [16];
  undefined1 auStack_4e0 [8];
  code *pcStack_4d8;
  code *pcStack_4c8;
  char cStack_4c0;
  ulong **ppuStack_4b8;
  ulong **ppuStack_4b0;
  ulong **ppuStack_4a8;
  char acStack_4a0 [8];
  byte bStack_498;
  undefined7 uStack_497;
  code *pcStack_488;
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [16];
  code *pcStack_450;
  code *pcStack_448;
  undefined1 auStack_418 [24];
  code *pcStack_400;
  long lStack_3d8;
  long lStack_3d0;
  ulong **ppuStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  long *plStack_3a0;
  ulong **ppuStack_398;
  undefined1 auStack_390 [16];
  undefined8 uStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  long *plStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  code *pcStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong ***pppuStack_298;
  ulong ***pppuStack_290;
  ulong ***pppuStack_288;
  long *plStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [24];
  code *pcStack_238;
  undefined1 auStack_210 [24];
  code *pcStack_1f8;
  undefined1 auStack_1c8 [24];
  code *pcStack_1b0;
  ulong ****ppppuStack_180;
  ulong **ppuStack_178;
  ulong **ppuStack_170;
  ulong **ppuStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  code *pcStack_128;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  
  puVar5 = param_1 + 9;
  if (*(char *)(param_1 + 0xc) == '\0') {
    pbVar24 = (byte *)*param_1;
    if ((*pbVar24 & 1) == 0) {
      param_1[0xb] = *(undefined8 *)(pbVar24 + 0x10);
      uVar12 = *(undefined4 *)(pbVar24 + 4);
      uVar6 = *(undefined4 *)(pbVar24 + 8);
      uVar7 = *(undefined4 *)(pbVar24 + 0xc);
      *(undefined4 *)puVar5 = *(undefined4 *)pbVar24;
      *(undefined4 *)((long)param_1 + 0x4c) = uVar12;
      *(undefined4 *)(param_1 + 10) = uVar6;
      *(undefined4 *)((long)param_1 + 0x54) = uVar7;
      *(undefined1 *)(param_1 + 0xc) = 1;
      if ((*(byte *)(param_1 + 9) & 1) != 0) goto LAB_0af3dfab;
LAB_0af3df86:
      unaff_RBX = (long *)((long)param_1 + 0x49);
    }
    else {
      FUN_0412e5e0(puVar5,*(undefined8 *)(pbVar24 + 0x10),*(undefined8 *)(pbVar24 + 8));
      *(undefined1 *)(param_1 + 0xc) = 1;
      if ((*(byte *)(param_1 + 9) & 1) == 0) goto LAB_0af3df86;
LAB_0af3dfab:
      unaff_RBX = (long *)param_1[0xb];
    }
    lVar20 = *unaff_RBX;
    plVar15 = (long *)func_0x0eee3280();
    *(char *)unaff_RBX = *(char *)(*plVar15 + (long)(char)lVar20 * 4);
  }
  lStack_678 = 0;
  lStack_670 = 0;
  lStack_668 = 0;
  puVar23 = (undefined8 *)0xaaaaaaaaaaaaaaab;
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(auStack_658);
    func_0x066dff70(&lStack_678,_auStack_658,uStack_650,
                    ((long)uStack_650 - (long)_auStack_658 >> 4) * -0x5555555555555555);
    func_0x0d84fd50(param_1[1],auStack_658);
    func_0x0651ffe0(auStack_658);
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    if (*(char *)(param_1 + 0xc) != '\0') {
      bVar3 = *(byte *)(param_1 + 9);
      if ((bVar3 & 1) == 0) {
        uVar22 = (ulong)(bVar3 >> 1);
      }
      else {
        uVar22 = param_1[10];
      }
      plVar15 = (long *)(uVar22 + 0x11);
      if ((long *)0xfffffffffffffff7 < plVar15) {
        lVar20 = func_0x04882e30();
        func_0x06523ec0(&uStack_7d8);
        func_0x05f93280(&uStack_2c8);
        func_0x0afdbb90(&ppuStack_178);
        if ((bStack_758 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT44(uStack_744,uStack_748),
                             CONCAT71(uStack_757,bStack_758) & 0xfffffffffffffffe);
        }
        func_0x06685e60(&lStack_788);
        func_0x0afdbc20(&lStack_3d8);
        func_0x06685e60(&lStack_678);
        uVar21 = func_0x0eee2d70();
        if ((*(char *)(lVar20 + 0x80) == '\x01') && (lVar31 = *(long *)(lVar20 + 0x68), lVar31 != 0)
           ) {
          lVar28 = *(long *)(lVar20 + 0x70);
          lVar25 = lVar31;
          if (lVar31 != lVar28) {
            do {
              if ((*(byte *)(lVar28 + -0x20) & 1) != 0) {
                thunk_FUN_0ee326a0(*(undefined8 *)(lVar28 + -0x10),
                                   *(ulong *)(lVar28 + -0x20) & 0xfffffffffffffffe);
              }
              lVar28 = lVar28 + -0x30;
            } while (lVar28 != lVar31);
            lVar25 = *(long *)(lVar20 + 0x68);
          }
          *(long *)(lVar20 + 0x70) = lVar31;
          uVar21 = thunk_FUN_0ee326a0(lVar25,*(long *)(lVar20 + 0x78) - lVar25);
        }
        if ((*(char *)(lVar20 + 0x60) == '\x01') && ((*(byte *)(lVar20 + 0x48) & 1) != 0)) {
          uVar21 = thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + 0x58),
                                      *(ulong *)(lVar20 + 0x48) & 0xfffffffffffffffe);
        }
        if ((*(char *)(lVar20 + 0x40) == '\x01') && (lVar31 = *(long *)(lVar20 + 0x28), lVar31 != 0)
           ) {
          lVar28 = *(long *)(lVar20 + 0x30);
          lVar25 = lVar31;
          if (lVar31 != lVar28) {
            do {
              if ((*(byte *)(lVar28 + -0x20) & 1) != 0) {
                uVar21 = thunk_FUN_0ee326a0(*(undefined8 *)(lVar28 + -0x10),
                                            *(ulong *)(lVar28 + -0x20) & 0xfffffffffffffffe);
              }
              lVar28 = lVar28 + -0x30;
            } while (lVar28 != lVar31);
            lVar25 = *(long *)(lVar20 + 0x28);
          }
          *(long *)(lVar20 + 0x30) = lVar31;
          if (lVar25 != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar25);
          }
          return uVar21;
        }
        return uVar21;
      }
      if (plVar15 < (long *)0x17) {
        uStack_650 = (ulong **)0x0;
        ppuStack_648 = (ulong **)0x0;
        _auStack_658 = (ulong **)(ulong)(byte)((char)plVar15 * '\x02');
        ppuVar16 = (ulong **)((long)auStack_658 + 1);
        if (uVar22 != 0) {
          if ((bVar3 & 1) == 0) goto LAB_0af3e184;
LAB_0af3e0f9:
          lVar20 = param_1[0xb];
          goto LAB_0af3e18d;
        }
      }
      else {
        uVar27 = 0x1a;
        if (((ulong)plVar15 | 7) != 0x17) {
          uVar27 = ((ulong)plVar15 | 7) + 1;
        }
        ppuVar16 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27);
        if (ppuVar16 == (ulong **)0x0) {
          func_0x0eec74c0(uVar27,0);
        }
        _auStack_658 = (ulong **)(uVar27 | 1);
        uStack_650 = (ulong **)plVar15;
        ppuStack_648 = ppuVar16;
        if ((bVar3 & 1) != 0) goto LAB_0af3e0f9;
LAB_0af3e184:
        lVar20 = (long)param_1 + 0x49;
LAB_0af3e18d:
        func_0x0eee2ee0(ppuVar16,lVar20,uVar22);
      }
      *(undefined8 *)((long)ppuVar16 + uVar22) = _DAT_014b94d1;
      ((undefined8 *)((long)ppuVar16 + uVar22))[1] = _UNK_014b94d9;
      *(undefined2 *)((long)ppuVar16 + uVar22 + 0x10) = 0x6c;
      goto LAB_0af3e1ac;
    }
LAB_0af40a1c:
    func_0x048a88b0();
LAB_0af40a21:
    iVar14 = func_0x04108328(&DAT_0f6af458);
    if (iVar14 != 0) {
      func_0x0afde1f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6af3d8,0xf53dab8);
      func_0x0410844d(&DAT_0f6af458);
    }
  }
  else {
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_0af40a1c;
    if ((*puVar5 & 1) == 0) {
      ppuStack_648 = (ulong **)param_1[0xb];
      _auStack_658 = (ulong **)*puVar5;
      uStack_650 = (ulong **)param_1[10];
    }
    else {
      FUN_0412e5e0(auStack_658,param_1[0xb],param_1[10]);
    }
LAB_0af3e1ac:
    uStack_3a8 = 0;
    plStack_3a0 = (long *)0x0;
    lStack_3b8 = 0;
    lStack_3b0 = 0;
    ppuStack_3c8 = (ulong **)0x0;
    lStack_3c0 = 0;
    lStack_3d8 = 0;
    lStack_3d0 = 0;
    ppuStack_398 = (ulong **)0x0;
    func_0x048b1dc0(auStack_390);
    func_0x048b1dc0(&uStack_380);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    pcStack_330 = (code *)0x0;
    uStack_328 = 0;
    uStack_340 = (undefined8 *)0x0;
    puStack_338 = (undefined8 *)0x0;
    uStack_350 = 0;
    lStack_348 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    pcStack_370 = (code *)0x0;
    plStack_368 = (long *)0x0;
    if ((uStack_3a8 & 1) == 0) {
      if (((ulong)_auStack_658 & 1) == 0) {
        ppuStack_398 = ppuStack_648;
        uStack_3a8 = (ulong)_auStack_658;
        plStack_3a0 = (long *)uStack_650;
      }
      else {
        func_0x04885070(&uStack_3a8,ppuStack_648,uStack_650);
      }
    }
    else {
      plVar15 = (long *)((ulong)_auStack_658 >> 1 & 0x7f);
      ppuVar16 = (ulong **)((long)auStack_658 + 1);
      if (((ulong)_auStack_658 & 1) != 0) {
        plVar15 = (long *)uStack_650;
        ppuVar16 = ppuStack_648;
      }
      func_0x04885120(&uStack_3a8,ppuVar16,plVar15);
    }
    if (((ulong)_auStack_658 & 1) != 0) {
      thunk_FUN_0ee326a0(ppuStack_648,(ulong)_auStack_658 & 0xfffffffffffffffe);
    }
    lStack_788 = 0;
    lStack_780 = 0;
    lStack_778 = 0;
    plStack_730 = &lStack_788;
    func_0x0652b220();
    func_0x066dff70(&lStack_3d8,lStack_788,lStack_780,
                    (lStack_780 - lStack_788 >> 4) * -0x5555555555555555);
    bStack_6b0 = 0x10;
    uStack_6af = 0x6361626c6c6163;
    uStack_6a8 = 0x6b;
    uStack_6a7 = 0;
    func_0x0afdba30(&ppuStack_178,&bStack_6b0);
    auStack_770 = (undefined1  [4])0x74706f0e;
    uStack_76c = 0x736e6f69;
    uStack_768 = uStack_768 & 0xffffff00;
    uStack_2c8 = (ulong **)0x0;
    uStack_2c0 = (ulong **)0x0;
    ppuStack_2b8 = (ulong **)0x0;
    func_0x048b1dc0(&uStack_2b0);
    puVar23 = &uStack_2a0;
    func_0x0652b590(puVar23);
    if (((ulong)uStack_2c8 & 1) == 0) {
      if (((uint)auStack_770 & 1) == 0) {
        ppuStack_2b8 = ppuStack_760;
        uStack_2c8 = (ulong **)CONCAT44(uStack_76c,auStack_770);
        uStack_2c0 = (ulong **)CONCAT44(uStack_764,uStack_768);
      }
      else {
        func_0x04885070(&uStack_2c8,ppuStack_760,CONCAT44(uStack_764,uStack_768));
      }
    }
    else {
      bVar32 = ((uint)auStack_770 & 1) != 0;
      ppuVar16 = (ulong **)(auStack_770 + 1);
      if (bVar32) {
        ppuVar16 = ppuStack_760;
      }
      uVar22 = (ulong)(auStack_770[0] >> 1);
      if (bVar32) {
        uVar22 = CONCAT44(uStack_764,uStack_768);
      }
      func_0x04885120(&uStack_2c8,ppuVar16,uVar22);
    }
    unaff_RBX = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (unaff_RBX == (long *)0x0) {
      func_0x048b0de0(auStack_658,&ppppuStack_728);
      _DAT_0f54fd90 = auStack_658;
      uRam000000000f54fd94 = uStack_654;
      uVar12 = (undefined4)uStack_650;
      uVar6 = uStack_650._4_4_;
      _auStack_658 = (ulong **)0x0;
      uStack_650 = (ulong **)0x0;
      plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar12;
      uRam000000000f54fd9c = uVar6;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar20 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar20 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
        }
      }
      plVar15 = (long *)uStack_650;
      if (uStack_650 != (ulong **)0x0) {
        LOCK();
        plVar1 = (long *)(uStack_650 + 1);
        lVar20 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar20 == 0) {
          (**(code **)((long)*uStack_650 + 0x10))(uStack_650);
          func_0x0412c2d0(plVar15);
        }
      }
      unaff_RBX = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    if (DAT_0f6af458 == '\0') goto LAB_0af40a21;
  }
  plVar15 = (long *)(*unaff_RBX +
                    (ulong)((int)((ulong)(unaff_RBX[1] - *unaff_RBX) >> 3) - 1U &
                           *(uint *)(_DAT_0f6af3d8 + 4)) * 8);
  do {
    lVar20 = *plVar15;
    if (lVar20 == -1) goto LAB_0af3e590;
    plVar15 = (long *)(unaff_RBX[3] + lVar20 * 0x18);
  } while (*(uint *)(unaff_RBX[3] + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6af3d8 + 4));
  if (plVar15 == (long *)unaff_RBX[4]) {
LAB_0af3e590:
    uStack_2b0 = &DAT_0f6af3d8;
  }
  else {
    uStack_2b0 = (undefined *)plVar15[2];
  }
  _auStack_658 = (ulong **)((ulong)_auStack_658 & 0xffffffffffffff00);
  bStack_498 = 0;
  uStack_2a8 = unaff_RBX;
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(&pppuStack_290);
  }
  plStack_280 = (long *)&UNK_0afde5e0;
  pcStack_278 = (code *)&UNK_0afde730;
  uStack_270 = CONCAT35(uStack_270._5_3_,0x115ac0803);
  pppuVar17 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c8);
  if (pppuVar17 == (ulong ***)0x0) {
    func_0x0eec74c0(0x1c8,0);
  }
  *(undefined1 *)pppuVar17 = 0;
  *(undefined1 *)(pppuVar17 + 0x38) = 0;
  if (bStack_498 == 1) {
    *(undefined1 *)(pppuVar17 + 0x33) = 0;
    if (cStack_4c0 == '\x01') {
      func_0x09449970(pppuVar17,auStack_658);
      *(undefined1 *)(pppuVar17 + 0x33) = 1;
    }
    *(undefined1 *)(pppuVar17 + 0x34) = 0;
    *(undefined1 *)(pppuVar17 + 0x37) = 0;
    if (acStack_4a0[0] == '\x01') {
      pppuVar17[0x34] = ppuStack_4b8;
      pppuVar17[0x35] = ppuStack_4b0;
      pppuVar17[0x36] = ppuStack_4a8;
      ppuStack_4b8 = (ulong **)0x0;
      ppuStack_4b0 = (ulong **)0x0;
      ppuStack_4a8 = (ulong **)0x0;
      *(undefined1 *)(pppuVar17 + 0x37) = 1;
    }
    *(undefined1 *)(pppuVar17 + 0x38) = 1;
  }
  puVar11 = puStack_258;
  puStack_258 = &UNK_0afde430;
  if (puVar11 != &UNK_0afde430) {
    uStack_260 = 0;
  }
  pppuStack_290 = pppuVar17;
  if ((bStack_498 & 1) != 0) {
    if ((acStack_4a0[0] == '\x01') && (ppuStack_4b8 != (ulong **)0x0)) {
      ppuStack_4b0 = ppuStack_4b8;
      thunk_FUN_0ee326a0(ppuStack_4b8,(long)ppuStack_4a8 - (long)ppuStack_4b8);
    }
    if (cStack_4c0 == '\x01') {
      func_0x095c7300(auStack_658);
    }
  }
  pppuStack_718 = (ulong ***)0x0;
  uStack_700 = 0;
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  plStack_6d8 = (long *)0x0;
  uStack_6d0 = 0;
  pppuStack_6e8 = (ulong ***)0x0;
  plStack_6e0 = (long *)0x0;
  pppuStack_6f8 = (ulong ***)0x0;
  pppuStack_6f0 = (ulong ***)0x0;
  ppppuStack_728 = (ulong ****)0x0;
  pppuStack_720 = (ulong ***)0x0;
  uStack_710 = 0x6972637362757312;
  uStack_708 = 0x6562;
  func_0x06523ef0(auStack_658,auStack_150);
  func_0x06523ef0(apcStack_540,puVar23);
  uStack_7a8 = (ulong ****)0x0;
  uStack_7a0 = (ulong ****)0x0;
  ppppuStack_798 = (ulong ****)0x0;
  bStack_758 = (byte)&uStack_7a8;
  uStack_757 = (undefined7)((ulong)&uStack_7a8 >> 8);
  uStack_750 = 0;
  ppppuStack_698 = (ulong ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (ppppuStack_698 == (ulong ****)0x0) {
    func_0x0eec74c0(0x230,0);
  }
  ppppuStack_798 = ppppuStack_698 + 0x46;
  uStack_7d0 = (ulong ****)&ppppuStack_180;
  uStack_7c8 = &ppppuStack_698;
  uStack_7c0 = uStack_7c0 & 0xffffff00;
  uStack_7d8 = (ulong ***)&uStack_7a8;
  uStack_7a8 = ppppuStack_698;
  uStack_7a0 = ppppuStack_698;
  ppppuStack_180 = ppppuStack_698;
  func_0x06523ef0(ppppuStack_698,auStack_658);
  ppppuStack_698 = ppppuStack_698 + 0x23;
  func_0x06523ef0(ppppuStack_698,apcStack_540);
  uStack_7a0 = ppppuStack_698 + 0x23;
  if (pcStack_450 != (code *)0x0) {
    (*pcStack_450)(auStack_468);
  }
  if ((code *)CONCAT71(uStack_497,bStack_498) != (code *)0x0) {
    (*(code *)CONCAT71(uStack_497,bStack_498))(&ppuStack_4b0);
  }
  if (pcStack_4d8 != (code *)0x0) {
    (*pcStack_4d8)(auStack_4f0);
  }
  if (ppuStack_518 != (ulong **)0x0) {
    (*(code *)ppuStack_518)(auStack_530);
  }
  if (pcStack_568 != (code *)0x0) {
    (*pcStack_568)(&uStack_580);
  }
  if (pcStack_5b0 != (code *)0x0) {
    (*pcStack_5b0)(&pcStack_5c8);
  }
  if (pcStack_5f0 != (code *)0x0) {
    (*pcStack_5f0)(&pcStack_608);
  }
  if (ppuStack_630 != (ulong **)0x0) {
    (*(code *)ppuStack_630)(&ppuStack_648);
  }
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0f27cee8;
  uVar12 = func_0x0d858500(&uStack_7a8);
  plVar15 = puVar18 + 3;
  *(undefined1 *)(puVar18 + 4) = 2;
  *(undefined4 *)((long)puVar18 + 0x24) = uVar12;
  *(undefined4 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[8] = 0;
  puVar18[3] = &UNK_0f27cf38;
  *(undefined4 *)(puVar18 + 9) = (undefined4)uStack_7a8;
  *(undefined4 *)((long)puVar18 + 0x4c) = uStack_7a8._4_4_;
  *(undefined4 *)(puVar18 + 10) = (undefined4)uStack_7a0;
  *(undefined4 *)((long)puVar18 + 0x54) = uStack_7a0._4_4_;
  puVar18[0xb] = ppppuStack_798;
  uStack_7a8 = (ulong ****)0x0;
  uStack_7a0 = (ulong ****)0x0;
  ppppuStack_798 = (ulong ****)0x0;
  uVar12 = func_0x0d858620(plVar15);
  plVar1 = plStack_6d8;
  *(undefined4 *)(puVar18 + 5) = uVar12;
  plStack_6e0 = plVar15;
  if (plStack_6d8 == (long *)0x0) {
LAB_0af3ea51:
    lVar20 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    plStack_6d8 = puVar18;
  }
  else {
    LOCK();
    plVar15 = plStack_6d8 + 1;
    lVar20 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0af3ea51;
    lVar20 = *plStack_6d8;
    plStack_6d8 = puVar18;
    (**(code **)(lVar20 + 0x10))(plVar1);
    func_0x0412c2d0(plVar1);
    lVar20 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (lVar20 == 0) {
    func_0x048b0de0(auStack_658,&uStack_7d8);
    _DAT_0f54fd90 = auStack_658;
    uRam000000000f54fd94 = uStack_654;
    uVar12 = (undefined4)uStack_650;
    uVar6 = uStack_650._4_4_;
    _auStack_658 = (ulong **)0x0;
    uStack_650 = (ulong **)0x0;
    plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar6;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar1 = plVar15 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = (long *)uStack_650;
    if (uStack_650 != (ulong **)0x0) {
      LOCK();
      plVar1 = (long *)(uStack_650 + 1);
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)((long)*uStack_650 + 0x10))(uStack_650);
        func_0x0412c2d0(plVar15);
      }
    }
    lVar20 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6af478 == '\0') && (iVar14 = func_0x04108328(&DAT_0f6af478), iVar14 != 0)) {
    func_0x0afde320();
    func_0x0410844d(&DAT_0f6af478);
  }
  if ((DAT_0f6af478 == '\0') && (iVar14 = func_0x04108328(&DAT_0f6af478), iVar14 != 0)) {
    func_0x0afde320();
    func_0x0410844d(&DAT_0f6af478);
  }
  _auStack_658 = (ulong **)&DAT_0f6af460;
  uStack_650 = (ulong **)CONCAT44(uStack_650._4_4_,_DAT_0f6af464);
  ppuStack_648 = (ulong **)0x0;
  uStack_640 = (undefined *)CONCAT44(uStack_640._4_4_,0x80);
  uStack_638 = (long *)0x1c8;
  ppuStack_630 = (ulong **)&UNK_0afde130;
  auStack_628._0_8_ = &UNK_0afde3a0;
  auStack_628._8_8_ = 0;
  puStack_618 = &UNK_0afde7a0;
  uStack_610 = 1;
  pcStack_608 = (code *)&SUB_048b5640;
  plStack_600 = (long *)&UNK_0afde830;
  uStack_5f8 = (ulong)uStack_5f8._4_4_ << 0x20;
  pcStack_5f0 = (code *)0x0;
  plStack_5e8 = (long *)0x0;
  lStack_5e0 = 0;
  FUN_048aee30(&ppppuStack_698,lVar20,auStack_658,0x15ac0803);
  lVar20 = lStack_5e0;
  lStack_5e0 = 0;
  if (lVar20 != 0) {
    func_0x048ae940(lVar20);
    thunk_FUN_0ee326a0(lVar20,0x78);
  }
  plVar15 = plStack_5e8;
  if (plStack_5e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5e8 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_5e8 + 0x10))(plStack_5e8);
      func_0x0412c2d0(plVar15);
    }
  }
  if ((DAT_0f6af4a8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f6af4a8), iVar14 != 0)) {
    func_0x0afdf1f0();
    func_0x0410844d(&DAT_0f6af4a8);
  }
  auStack_658 = (undefined1  [4])_DAT_0f6af494;
  uStack_650 = (ulong **)0x1;
  ppuStack_648 = (ulong **)&UNK_0afde840;
  uStack_640 = &UNK_0afde850;
  func_0x065abe60(&ppppuStack_698);
  uStack_748 = uStack_688;
  uStack_744 = uStack_684;
  uStack_740 = uStack_680;
  uStack_73c = uStack_67c;
  bStack_758 = (byte)ppppuStack_698;
  uStack_757 = (undefined7)((ulong)ppppuStack_698 >> 8);
  uStack_750 = uStack_690;
  uStack_74f = (undefined1)uStack_68f;
  uStack_74e = (undefined6)((uint7)uStack_68f >> 8);
  auStack_658 = (undefined1  [4])0xf55160ec;
  uStack_650 = (ulong **)0x0;
  ppuStack_648 = (ulong **)((ulong)ppuStack_648 & 0xffffffff00000000);
  uStack_640 = (undefined *)0x0;
  uStack_638 = (long *)&UNK_065b4120;
  ppuStack_630 = (ulong **)&SUB_048b06d0;
  auStack_628._0_8_ = &UNK_0afdf510;
  auStack_628._8_8_ = 0;
  puStack_618 = (undefined *)((ulong)puStack_618 & 0xffffffff00000000);
  uStack_610 = 0;
  pcStack_608 = (code *)0x0;
  func_0x049057f0(&bStack_758,auStack_658);
  func_0x048aea50(auStack_658);
  uStack_7d8 = (ulong ***)CONCAT71(uStack_757,bStack_758);
  uStack_7d0 = (ulong ****)CONCAT62(uStack_74e,CONCAT11(uStack_74f,uStack_750));
  uStack_7c8 = (ulong *****)CONCAT44(uStack_744,uStack_748);
  uStack_7c0 = uStack_740;
  uStack_7bc = uStack_73c;
  _auStack_658 = (ulong **)CONCAT44(uStack_654,0xf55160ec);
  uStack_650 = (ulong **)0x0;
  ppuStack_648 = (ulong **)CONCAT44(ppuStack_648._4_4_,1);
  uStack_640 = (undefined *)0x0;
  uStack_638 = (long *)&UNK_065b4120;
  ppuStack_630 = (ulong **)&SUB_048b06d0;
  auStack_628._0_8_ = &UNK_0afdf7c0;
  auStack_628._8_8_ = 0;
  puStack_618 = (undefined *)((ulong)puStack_618 & 0xffffffff00000000);
  uStack_610 = 0;
  pcStack_608 = (code *)0x0;
  func_0x049057f0(&uStack_7d8,auStack_658);
  func_0x048aea50(auStack_658);
  ppuStack_648 = ppuStack_168;
  _auStack_658 = ppuStack_178;
  uStack_650 = ppuStack_170;
  ppuStack_178 = (ulong **)0x0;
  ppuStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  uStack_640 = (undefined *)CONCAT44(uStack_15c,uStack_160);
  uStack_638 = (long *)CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&ppuStack_630,auStack_150);
  ppuStack_508 = ppuStack_2b8;
  ppuStack_518 = uStack_2c8;
  ppuStack_510 = uStack_2c0;
  uStack_2c8 = (ulong **)0x0;
  uStack_2c0 = (ulong **)0x0;
  ppuStack_2b8 = (ulong **)0x0;
  uStack_500 = (undefined4)uStack_2b0;
  uStack_4fc = uStack_2b0._4_4_;
  uStack_4f8 = (undefined4)uStack_2a8;
  uStack_4f4 = uStack_2a8._4_4_;
  func_0x065281f0(auStack_4f0,puVar23);
  uStack_7d8 = (ulong ***)0x0;
  uStack_7d0 = (ulong ****)0x0;
  uStack_7c8 = (ulong *****)0x0;
  bStack_758 = (byte)&uStack_7d8;
  uStack_757 = (undefined7)((ulong)&uStack_7d8 >> 8);
  uStack_750 = 0;
  pppuVar17 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (pppuVar17 == (ulong ***)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  pppuVar30 = pppuVar17 + 0x50;
  uStack_7d8 = pppuVar17;
  uStack_7d0 = (ulong ****)pppuVar17;
  uStack_7c8 = (ulong *****)pppuVar30;
  if (((ulong)_auStack_658 & 1) == 0) {
    pppuVar17[2] = ppuStack_648;
    *pppuVar17 = _auStack_658;
    pppuVar17[1] = uStack_650;
  }
  else {
    FUN_0412e5e0(pppuVar17,ppuStack_648,uStack_650);
  }
  *(undefined4 *)(pppuVar17 + 3) = (undefined4)uStack_640;
  *(undefined4 *)((long)pppuVar17 + 0x1c) = uStack_640._4_4_;
  *(undefined4 *)(pppuVar17 + 4) = (undefined4)uStack_638;
  *(undefined4 *)((long)pppuVar17 + 0x24) = uStack_638._4_4_;
  func_0x06523ef0(pppuVar17 + 5,&ppuStack_630);
  if (((ulong)ppuStack_518 & 1) == 0) {
    pppuVar17[0x2a] = ppuStack_508;
    pppuVar17[0x28] = ppuStack_518;
    pppuVar17[0x29] = ppuStack_510;
  }
  else {
    FUN_0412e5e0(pppuVar17 + 0x28,ppuStack_508,ppuStack_510);
  }
  *(undefined4 *)(pppuVar17 + 0x2b) = uStack_500;
  *(undefined4 *)((long)pppuVar17 + 0x15c) = uStack_4fc;
  *(undefined4 *)(pppuVar17 + 0x2c) = uStack_4f8;
  *(undefined4 *)((long)pppuVar17 + 0x164) = uStack_4f4;
  func_0x06523ef0(pppuVar17 + 0x2d,auStack_4f0);
  uStack_7d0 = (ulong ****)pppuVar30;
  if (pcStack_400 != (code *)0x0) {
    (*pcStack_400)(auStack_418);
  }
  if (pcStack_448 != (code *)0x0) {
    (*pcStack_448)(auStack_460);
  }
  if (pcStack_488 != (code *)0x0) {
    (*pcStack_488)(acStack_4a0);
  }
  if (pcStack_4c8 != (code *)0x0) {
    (*pcStack_4c8)(auStack_4e0);
  }
  if (((ulong)ppuStack_518 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_508,(ulong)ppuStack_518 & 0xfffffffffffffffe);
  }
  if (apcStack_540[0] != (code *)0x0) {
    (*apcStack_540[0])(auStack_558);
  }
  if (pcStack_588 != (code *)0x0) {
    (*pcStack_588)(&uStack_5a0);
  }
  if (pcStack_5c8 != (code *)0x0) {
    (*pcStack_5c8)(&lStack_5e0);
  }
  if (pcStack_608 != (code *)0x0) {
    (*pcStack_608)(auStack_628 + 8);
  }
  if (((ulong)_auStack_658 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_648,(ulong)_auStack_658 & 0xfffffffffffffffe);
  }
  uVar13 = (**(code **)(*plStack_6e0 + 0x20))();
  uVar27 = ((long)uStack_7d0 - (long)uStack_7d8 >> 6) * -0x3333333333333333;
  uVar22 = 0;
  if ((uVar13 != 0) && ((uint)uVar27 != 0)) {
    uVar26 = 0;
    uVar22 = 0;
    uStack_7ac = uVar13;
    do {
      auVar33 = (**(code **)(*plStack_6e0 + 0x28))(plStack_6e0,uVar26);
      ppuVar16 = auVar33._8_8_;
      lVar20 = auVar33._0_8_;
      auVar33 = func_0x06527d70();
      if (auVar33._8_8_ == ppuVar16) {
        if (auVar33._0_8_ == 0) {
          lVar31 = func_0x048aead0(auVar33._8_8_);
          iVar14 = *(int *)(lVar31 + 8);
          if (lVar20 != 0) goto LAB_0af3f1b2;
LAB_0af3f1d1:
          lVar31 = func_0x048aead0(ppuVar16);
          if (iVar14 != *(int *)(lVar31 + 8)) goto LAB_0af3f1f0;
        }
        else {
          iVar14 = *(int *)(auVar33._0_8_ + 8);
          if (lVar20 == 0) goto LAB_0af3f1d1;
LAB_0af3f1b2:
          if (iVar14 != *(int *)(lVar20 + 8)) goto LAB_0af3f1f0;
        }
      }
      else {
LAB_0af3f1f0:
        auVar33 = func_0x06527e30();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3f3e5;
        }
        auVar33 = func_0x06527ef0();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3f3e5;
        }
        auVar33 = func_0x06527fb0();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3f3e5;
        }
        auVar33 = func_0x06528070();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3f3e5;
        }
        auVar33 = func_0x06528130();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3f3e5;
        }
        pppuVar17 = uStack_7d8;
        pppuVar30 = (ulong ***)uStack_7d0;
        if (uStack_7d8[uVar22 * 0x28 + 4] != ppuVar16) goto joined_r0x0af3f604;
        if (uStack_7d8[uVar22 * 0x28 + 3] == (ulong **)0x0) {
          lVar31 = func_0x048aead0();
          iVar14 = *(int *)(lVar31 + 8);
          if (lVar20 != 0) goto LAB_0af3f3b5;
LAB_0af3f3ce:
          lVar20 = func_0x048aead0(ppuVar16);
          if (iVar14 != *(int *)(lVar20 + 8)) goto LAB_0af3f5f4;
        }
        else {
          iVar14 = *(int *)(uStack_7d8[uVar22 * 0x28 + 3] + 1);
          if (lVar20 == 0) goto LAB_0af3f3ce;
LAB_0af3f3b5:
          if (iVar14 != *(int *)(lVar20 + 8)) goto LAB_0af3f5f4;
        }
        uVar22 = (ulong)((int)uVar22 + 1);
      }
LAB_0af3f3e5:
    } while (((uint)uVar22 < (uint)uVar27) && (uVar26 = uVar26 + 1, uVar26 < uStack_7ac));
    uVar27 = ((long)uStack_7d0 - (long)uStack_7d8 >> 6) * -0x3333333333333333;
  }
  pppuVar17 = pppuStack_6f8;
  if (uVar27 == uVar22) {
    pppuVar30 = pppuStack_6f0;
    if (pppuStack_6f8 != (ulong ***)0x0) {
      while (pppuVar17 != pppuVar30) {
        func_0x05fe8450(pppuVar30 + -0x28);
        pppuVar30 = pppuVar30 + -0x28;
      }
      pppuStack_6f0 = pppuVar17;
      thunk_FUN_0ee326a0(pppuStack_6f8,(long)pppuStack_6e8 - (long)pppuStack_6f8);
    }
    pppuStack_6e8 = (ulong ***)uStack_7c8;
    if (uStack_340 < puStack_338) {
      *uStack_340 = 0;
      uStack_340[1] = 0;
      uStack_340[2] = 0;
      *uStack_340 = ppppuStack_728;
      uStack_340[1] = pppuStack_720;
      uStack_340[2] = pppuStack_718;
      ppppuStack_728 = (ulong ****)0x0;
      pppuStack_720 = (ulong ***)0x0;
      pppuStack_718 = (ulong ***)0x0;
      uStack_340[5] = uStack_700;
      uStack_340[3] = uStack_710;
      uStack_340[4] = uStack_708;
      uStack_710 = 0;
      uStack_708 = 0;
      uStack_700 = 0;
      uStack_340[6] = 0;
      uStack_340[7] = 0;
      uStack_340[8] = 0;
      uStack_340[6] = uStack_7d8;
      uStack_340[7] = uStack_7d0;
      uStack_340[8] = uStack_7c8;
      pppuStack_6f8 = (ulong ***)0x0;
      pppuStack_6f0 = (ulong ***)0x0;
      pppuStack_6e8 = (ulong ***)0x0;
      uStack_340[9] = plStack_6e0;
      uStack_340[10] = plStack_6d8;
      plStack_6e0 = (long *)0x0;
      plStack_6d8 = (undefined8 *)0x0;
      uStack_340[0xb] = 0;
      uStack_340[0xc] = 0;
      uStack_340[0xd] = 0;
      *(undefined4 *)(uStack_340 + 0xb) = (undefined4)uStack_6d0;
      *(undefined4 *)((long)uStack_340 + 0x5c) = uStack_6d0._4_4_;
      *(undefined4 *)(uStack_340 + 0xc) = (undefined4)uStack_6c8;
      *(undefined4 *)((long)uStack_340 + 100) = uStack_6c8._4_4_;
      uStack_340[0xd] = uStack_6c0;
      uStack_6d0 = 0;
      uStack_6c8 = 0;
      uStack_6c0 = 0;
      uStack_340 = uStack_340 + 0xe;
    }
    else {
      pppuStack_6f8 = uStack_7d8;
      pppuStack_6f0 = (ulong ***)uStack_7d0;
      uStack_340 = (undefined8 *)func_0x0652ac80(&lStack_348,&ppppuStack_728);
    }
    plVar15 = uStack_340 + -0xe;
    lVar20 = (long)uStack_7a8;
  }
  else {
LAB_0af3f5f4:
    pppuVar17 = uStack_7d8;
    pppuVar30 = (ulong ***)uStack_7d0;
    if (uStack_7d8 != (ulong ***)0x0) {
joined_r0x0af3f604:
      while (uVar21 = uStack_7d8, uStack_7d8 != pppuVar30) {
        uStack_7d8 = pppuVar17;
        func_0x05fe8450(pppuVar30 + -0x28);
        pppuVar17 = uStack_7d8;
        pppuVar30 = pppuVar30 + -0x28;
        uStack_7d8 = (ulong ***)uVar21;
      }
      uStack_7d0 = (ulong ****)uStack_7d8;
      uStack_7d8 = pppuVar17;
      thunk_FUN_0ee326a0(pppuVar17,(long)uStack_7c8 - (long)pppuVar17);
    }
    plVar15 = (long *)0xf6aa600;
    lVar20 = (long)uStack_7a8;
  }
  uStack_7a8 = (ulong ****)lVar20;
  if (lVar20 != 0) {
    if ((ulong ****)lVar20 != uStack_7a0) {
      lVar31 = (long)uStack_7a0 + -0x40;
      do {
        if (*(code **)(lVar31 + 0x18) != (code *)0x0) {
          (**(code **)(lVar31 + 0x18))(lVar31);
        }
        if (*(code **)(lVar31 + -0x30) != (code *)0x0) {
          (**(code **)(lVar31 + -0x30))(lVar31 + -0x48);
        }
        if (*(code **)(lVar31 + -0x70) != (code *)0x0) {
          (**(code **)(lVar31 + -0x70))(lVar31 + -0x88);
        }
        if (*(code **)(lVar31 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar31 + -0xb0))(lVar31 + -200);
        }
        lVar28 = lVar31 + -0xd8;
        lVar31 = lVar31 + -0x118;
      } while (lVar28 != lVar20);
    }
    uStack_7a0 = (ulong ****)lVar20;
    thunk_FUN_0ee326a0(uStack_7a8,(long)ppppuStack_798 - (long)uStack_7a8);
  }
  func_0x05f93280(&ppppuStack_728);
  if (plVar15 != &lStack_788) {
    func_0x066dff70(plVar15,lStack_788,lStack_780,
                    (lStack_780 - lStack_788 >> 4) * -0x5555555555555555);
  }
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(auStack_250);
  }
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(&pppuStack_290);
  }
  if (((ulong)uStack_2c8 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_770 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_760,CONCAT44(uStack_76c,auStack_770) & 0xfffffffffffffffe);
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
  if (((ulong)ppuStack_178 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_168,(ulong)ppuStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_6b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_6a0,CONCAT71(uStack_6af,bStack_6b0) & 0xfffffffffffffffe);
  }
  bStack_758 = 0x10;
  uStack_757 = 0x6361626c6c6163;
  uStack_750 = 0x6b;
  uStack_74f = 0;
  func_0x0afdba30(&ppuStack_178,&bStack_758);
  ppuStack_2b8 = (ulong **)0x0;
  uStack_2a0 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  pcStack_278 = (code *)0x0;
  uStack_270 = 0;
  pppuStack_288 = (ulong ***)0x0;
  plStack_280 = (long *)0x0;
  pppuStack_298 = (ulong ***)0x0;
  pppuStack_290 = (ulong ***)0x0;
  uStack_2c8 = (ulong **)0x0;
  uStack_2c0 = (ulong **)0x0;
  uStack_2b0 = (undefined *)0x63736275736e7516;
  uStack_2a8 = (long *)0x65626972;
  func_0x06523ef0(auStack_658,auStack_150);
  uStack_7d8 = (ulong ***)0x0;
  uStack_7d0 = (ulong ****)0x0;
  uStack_7c8 = (ulong *****)0x0;
  uStack_690 = 0;
  ppppuStack_698 = (ulong ****)&uStack_7d8;
  pppuVar17 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (pppuVar17 == (ulong ***)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  uStack_7c8 = (ulong *****)(pppuVar17 + 0x23);
  bStack_6b0 = (byte)pppuVar17;
  uStack_6af = (undefined7)((ulong)pppuVar17 >> 8);
  pppuStack_720 = (ulong ***)&bStack_6b0;
  pppuStack_718 = (ulong ***)&uStack_7a8;
  uStack_710 = uStack_710 & 0xffffffffffffff00;
  uStack_7d8 = pppuVar17;
  uStack_7d0 = (ulong ****)pppuVar17;
  uStack_7a8 = (ulong ****)pppuVar17;
  ppppuStack_728 = (ulong ****)&uStack_7d8;
  func_0x06523ef0(pppuVar17,auStack_658);
  uStack_7d0 = uStack_7a8 + 0x23;
  if (pcStack_568 != (code *)0x0) {
    (*pcStack_568)(&uStack_580);
  }
  if (pcStack_5b0 != (code *)0x0) {
    (*pcStack_5b0)(&pcStack_5c8);
  }
  if (pcStack_5f0 != (code *)0x0) {
    (*pcStack_5f0)(&pcStack_608);
  }
  if (ppuStack_630 != (ulong **)0x0) {
    (*(code *)ppuStack_630)(&ppuStack_648);
  }
  pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar19 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar19 + 8) = 0;
  *(undefined8 *)((long)pcVar19 + 0x10) = 0;
  *(undefined **)pcVar19 = &UNK_0f27cfd8;
  uVar12 = func_0x0d858500(&uStack_7d8);
  plVar15 = (long *)((long)pcVar19 + 0x18);
  *(undefined1 *)((long)pcVar19 + 0x20) = 2;
  *(undefined4 *)((long)pcVar19 + 0x24) = uVar12;
  *(undefined4 *)((long)pcVar19 + 0x28) = 0;
  *(undefined8 *)((long)pcVar19 + 0x30) = 0;
  *(undefined8 *)((long)pcVar19 + 0x38) = 0;
  *(undefined8 *)((long)pcVar19 + 0x40) = 0;
  *(undefined **)((long)pcVar19 + 0x18) = &UNK_0f27d028;
  *(undefined4 *)((long)pcVar19 + 0x48) = (undefined4)uStack_7d8;
  *(undefined4 *)((long)pcVar19 + 0x4c) = uStack_7d8._4_4_;
  *(undefined4 *)((long)pcVar19 + 0x50) = (undefined4)uStack_7d0;
  *(undefined4 *)((long)pcVar19 + 0x54) = uStack_7d0._4_4_;
  *(ulong ******)((long)pcVar19 + 0x58) = uStack_7c8;
  uStack_7d8 = (ulong ***)0x0;
  uStack_7d0 = (ulong ****)0x0;
  uStack_7c8 = (ulong *****)0x0;
  uVar12 = func_0x0d858620(plVar15);
  pcVar10 = pcStack_278;
  *(undefined4 *)((long)pcVar19 + 0x28) = uVar12;
  plStack_280 = plVar15;
  if (pcStack_278 != (code *)0x0) {
    LOCK();
    plVar15 = (long *)((long)pcStack_278 + 8);
    lVar20 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      lVar20 = *(long *)pcStack_278;
      pcStack_278 = pcVar19;
      (**(code **)(lVar20 + 0x10))(pcVar10);
      func_0x0412c2d0(pcVar10);
      pcVar19 = pcStack_278;
    }
  }
  pcStack_278 = pcVar19;
  ppuStack_648 = ppuStack_168;
  _auStack_658 = ppuStack_178;
  uStack_650 = ppuStack_170;
  ppuStack_178 = (ulong **)0x0;
  ppuStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  uStack_640 = (undefined *)CONCAT44(uStack_15c,uStack_160);
  uStack_638 = (long *)CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&ppuStack_630,auStack_150);
  ppppuStack_728 = (ulong ****)0x0;
  pppuStack_720 = (ulong ***)0x0;
  pppuStack_718 = (ulong ***)0x0;
  uStack_690 = 0;
  ppppuStack_698 = (ulong ****)&ppppuStack_728;
  pppuVar17 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (pppuVar17 == (ulong ***)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  pppuVar30 = pppuVar17 + 0x28;
  ppppuStack_728 = (ulong ****)pppuVar17;
  pppuStack_718 = pppuVar30;
  if (((ulong)_auStack_658 & 1) == 0) {
    pppuVar17[2] = ppuStack_648;
    *pppuVar17 = _auStack_658;
    pppuVar17[1] = uStack_650;
    pppuStack_720 = pppuVar17;
  }
  else {
    pppuStack_720 = pppuVar17;
    FUN_0412e5e0(pppuVar17,ppuStack_648,uStack_650);
  }
  *(undefined4 *)(pppuVar17 + 3) = (undefined4)uStack_640;
  *(undefined4 *)((long)pppuVar17 + 0x1c) = uStack_640._4_4_;
  *(undefined4 *)(pppuVar17 + 4) = (undefined4)uStack_638;
  *(undefined4 *)((long)pppuVar17 + 0x24) = uStack_638._4_4_;
  func_0x06523ef0(pppuVar17 + 5,&ppuStack_630);
  pppuStack_720 = pppuVar30;
  if (apcStack_540[0] != (code *)0x0) {
    (*apcStack_540[0])(auStack_558);
  }
  if (pcStack_588 != (code *)0x0) {
    (*pcStack_588)(&uStack_5a0);
  }
  if (pcStack_5c8 != (code *)0x0) {
    (*pcStack_5c8)(&lStack_5e0);
  }
  if (pcStack_608 != (code *)0x0) {
    (*pcStack_608)(auStack_628 + 8);
  }
  if (((ulong)_auStack_658 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_648,(ulong)_auStack_658 & 0xfffffffffffffffe);
  }
  uVar13 = (**(code **)(*plStack_280 + 0x20))();
  uVar27 = ((long)pppuStack_720 - (long)ppppuStack_728 >> 6) * -0x3333333333333333;
  uVar22 = 0;
  if ((uVar13 != 0) && ((uint)uVar27 != 0)) {
    uVar26 = 0;
    uVar22 = 0;
    uStack_7ac = uVar13;
    do {
      auVar33 = (**(code **)(*plStack_280 + 0x28))(plStack_280,uVar26);
      ppuVar16 = auVar33._8_8_;
      lVar20 = auVar33._0_8_;
      auVar33 = func_0x06527d70();
      if (auVar33._8_8_ == ppuVar16) {
        if (auVar33._0_8_ == 0) {
          lVar31 = func_0x048aead0(auVar33._8_8_);
          iVar14 = *(int *)(lVar31 + 8);
          if (lVar20 != 0) goto LAB_0af3fd62;
LAB_0af3fd81:
          lVar31 = func_0x048aead0(ppuVar16);
          if (iVar14 != *(int *)(lVar31 + 8)) goto LAB_0af3fda0;
        }
        else {
          iVar14 = *(int *)(auVar33._0_8_ + 8);
          if (lVar20 == 0) goto LAB_0af3fd81;
LAB_0af3fd62:
          if (iVar14 != *(int *)(lVar20 + 8)) goto LAB_0af3fda0;
        }
      }
      else {
LAB_0af3fda0:
        auVar33 = func_0x06527e30();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3ff98;
        }
        auVar33 = func_0x06527ef0();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3ff98;
        }
        auVar33 = func_0x06527fb0();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3ff98;
        }
        auVar33 = func_0x06528070();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3ff98;
        }
        auVar33 = func_0x06528130();
        if (auVar33._8_8_ == ppuVar16) {
          if (auVar33._0_8_ == 0) {
            lVar31 = func_0x048aead0(auVar33._8_8_);
            iVar14 = *(int *)(lVar31 + 8);
          }
          else {
            iVar14 = *(int *)(auVar33._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar31 = func_0x048aead0(ppuVar16);
            iVar2 = *(int *)(lVar31 + 8);
          }
          else {
            iVar2 = *(int *)(lVar20 + 8);
          }
          if (iVar14 == iVar2) goto LAB_0af3ff98;
        }
        ppppuVar8 = ppppuStack_728;
        pppuVar17 = pppuStack_720;
        if (ppppuStack_728[uVar22 * 0x28 + 4] != (ulong ***)ppuVar16) goto joined_r0x0af401da;
        if (ppppuStack_728[uVar22 * 0x28 + 3] == (ulong ***)0x0) {
          lVar31 = func_0x048aead0();
          iVar14 = *(int *)(lVar31 + 8);
          if (lVar20 != 0) goto LAB_0af3ff68;
LAB_0af3ff81:
          lVar20 = func_0x048aead0(ppuVar16);
          if (iVar14 != *(int *)(lVar20 + 8)) goto LAB_0af401c7;
        }
        else {
          iVar14 = *(int *)(ppppuStack_728[uVar22 * 0x28 + 3] + 1);
          if (lVar20 == 0) goto LAB_0af3ff81;
LAB_0af3ff68:
          if (iVar14 != *(int *)(lVar20 + 8)) goto LAB_0af401c7;
        }
        uVar22 = (ulong)((int)uVar22 + 1);
      }
LAB_0af3ff98:
    } while (((uint)uVar22 < (uint)uVar27) && (uVar26 = uVar26 + 1, uVar26 < uStack_7ac));
    uVar27 = ((long)pppuStack_720 - (long)ppppuStack_728 >> 6) * -0x3333333333333333;
  }
  pppuVar17 = pppuStack_298;
  if (uVar27 == uVar22) {
    pppuVar30 = pppuStack_290;
    if (pppuStack_298 != (ulong ***)0x0) {
      while (pppuVar17 != pppuVar30) {
        func_0x05fe8450(pppuVar30 + -0x28);
        pppuVar30 = pppuVar30 + -0x28;
      }
      pppuStack_290 = pppuVar17;
      thunk_FUN_0ee326a0(pppuStack_298,(long)pppuStack_288 - (long)pppuStack_298);
    }
    pppuStack_288 = pppuStack_718;
    if (uStack_340 < puStack_338) {
      *uStack_340 = 0;
      uStack_340[1] = 0;
      uStack_340[2] = 0;
      *uStack_340 = uStack_2c8;
      uStack_340[1] = uStack_2c0;
      uStack_340[2] = ppuStack_2b8;
      uStack_2c8 = (ulong **)0x0;
      uStack_2c0 = (ulong **)0x0;
      ppuStack_2b8 = (ulong **)0x0;
      uStack_340[5] = uStack_2a0;
      uStack_340[3] = uStack_2b0;
      uStack_340[4] = uStack_2a8;
      uStack_2b0 = (undefined *)0x0;
      uStack_2a8 = (long *)0x0;
      uStack_2a0 = 0;
      uStack_340[6] = 0;
      uStack_340[7] = 0;
      uStack_340[8] = 0;
      uStack_340[6] = ppppuStack_728;
      uStack_340[7] = pppuStack_720;
      uStack_340[8] = pppuStack_718;
      pppuStack_298 = (ulong ***)0x0;
      pppuStack_290 = (ulong ***)0x0;
      pppuStack_288 = (ulong ***)0x0;
      uStack_340[9] = plStack_280;
      uStack_340[10] = pcStack_278;
      plStack_280 = (long *)0x0;
      pcStack_278 = (code *)0x0;
      uStack_340[0xb] = 0;
      uStack_340[0xc] = 0;
      uStack_340[0xd] = 0;
      uStack_340[0xb] = uStack_270;
      uStack_340[0xc] = uStack_268;
      uStack_340[0xd] = uStack_260;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_340 = uStack_340 + 0xe;
    }
    else {
      pppuStack_298 = (ulong ***)ppppuStack_728;
      pppuStack_290 = pppuStack_720;
      uStack_340 = (undefined8 *)func_0x0652ac80(&lStack_348,&uStack_2c8);
    }
    plVar15 = uStack_340 + -0xe;
    pppuVar17 = uStack_7d8;
  }
  else {
LAB_0af401c7:
    ppppuVar8 = ppppuStack_728;
    pppuVar17 = pppuStack_720;
    if (ppppuStack_728 != (ulong ****)0x0) {
joined_r0x0af401da:
      while (ppppuVar9 = ppppuStack_728, ppppuStack_728 != (ulong ****)pppuVar17) {
        ppppuStack_728 = ppppuVar8;
        func_0x05fe8450(pppuVar17 + -0x28);
        ppppuVar8 = ppppuStack_728;
        pppuVar17 = pppuVar17 + -0x28;
        ppppuStack_728 = ppppuVar9;
      }
      pppuStack_720 = (ulong ***)ppppuStack_728;
      ppppuStack_728 = ppppuVar8;
      thunk_FUN_0ee326a0(ppppuVar8,(long)pppuStack_718 - (long)ppppuVar8);
    }
    plVar15 = (long *)0xf6aa600;
    pppuVar17 = uStack_7d8;
  }
  uStack_7d8 = pppuVar17;
  if (pppuVar17 != (ulong ***)0x0) {
    if ((ulong ****)pppuVar17 != uStack_7d0) {
      pppuVar30 = (ulong ***)(uStack_7d0 + -8);
      do {
        if (pppuVar30[3] != (ulong **)0x0) {
          (*(code *)pppuVar30[3])(pppuVar30);
        }
        if (pppuVar30[-6] != (ulong **)0x0) {
          (*(code *)pppuVar30[-6])(pppuVar30 + -9);
        }
        if (pppuVar30[-0xe] != (ulong **)0x0) {
          (*(code *)pppuVar30[-0xe])(pppuVar30 + -0x11);
        }
        if (pppuVar30[-0x16] != (ulong **)0x0) {
          (*(code *)pppuVar30[-0x16])(pppuVar30 + -0x19);
        }
        pppuVar29 = pppuVar30 + -0x1b;
        pppuVar30 = pppuVar30 + -0x23;
      } while (pppuVar29 != pppuVar17);
    }
    uStack_7d0 = (ulong ****)pppuVar17;
    thunk_FUN_0ee326a0(uStack_7d8,(long)uStack_7c8 - (long)uStack_7d8);
  }
  func_0x05f93280(&uStack_2c8);
  if (plVar15 != &lStack_788) {
    func_0x066dff70(plVar15,lStack_788,lStack_780,
                    (lStack_780 - lStack_788 >> 4) * -0x5555555555555555);
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
  if (((ulong)ppuStack_178 & 1) != 0) {
    thunk_FUN_0ee326a0(ppuStack_168,(ulong)ppuStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_758 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT44(uStack_744,uStack_748),
                       CONCAT71(uStack_757,bStack_758) & 0xfffffffffffffffe);
  }
  uVar21 = param_1[1];
  auStack_390 = func_0x0af7a670();
  lVar31 = lStack_3c0;
  lVar20 = lStack_3b8;
  if (lStack_3c0 != 0) {
    for (; lVar31 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + -0x10),
                           *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_3b8 = lVar31;
    thunk_FUN_0ee326a0(lStack_3c0,lStack_3b0 - lStack_3c0);
  }
  ppuStack_648 = ppuStack_3c8;
  uStack_650 = (ulong **)lStack_3d0;
  _auStack_658 = (ulong **)lStack_3d8;
  lStack_3d8 = 0;
  lStack_3d0 = 0;
  ppuStack_3c8 = (ulong **)0x0;
  lStack_3c0 = 0;
  lStack_3b8 = 0;
  lStack_3b0 = 0;
  ppuStack_630 = ppuStack_398;
  uStack_640 = (undefined *)uStack_3a8;
  uStack_638 = plStack_3a0;
  uStack_3a8 = 0;
  plStack_3a0 = (long *)0x0;
  ppuStack_398 = (ulong **)0x0;
  puStack_618 = (undefined *)uStack_380;
  uStack_610 = uStack_378;
  pcStack_608 = pcStack_370;
  plStack_600 = plStack_368;
  uStack_5f8 = uStack_360;
  pcStack_370 = (code *)0x0;
  plStack_368 = (long *)0x0;
  uStack_360 = 0;
  pcStack_5f0 = (code *)uStack_358;
  plStack_5e8 = (long *)uStack_350;
  uStack_358 = 0;
  uStack_350 = 0;
  lStack_5e0 = lStack_348;
  uStack_5d8 = (undefined4)uStack_340;
  uStack_5d4 = uStack_340._4_4_;
  puStack_5d0 = puStack_338;
  lStack_348 = 0;
  uStack_340 = (undefined8 *)0x0;
  puStack_338 = (undefined8 *)0x0;
  pcStack_5c8 = pcStack_330;
  uStack_5c0 = uStack_328;
  uStack_5b8 = uStack_320;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_320 = 0;
  pcStack_5b0 = (code *)uStack_318;
  uStack_5a8 = uStack_310;
  uStack_5a0 = uStack_308;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_598 = uStack_300;
  uStack_590 = uStack_2f8;
  pcStack_588 = (code *)uStack_2f0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_580 = (undefined4)uStack_2e8;
  uStack_57c = uStack_2e8._4_4_;
  uStack_578 = (undefined4)uStack_2e0;
  uStack_574 = uStack_2e0._4_4_;
  uStack_570 = uStack_2d8;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  auStack_628 = auStack_390;
  func_0x0d84fd50(uVar21,auStack_658);
  func_0x0651ffe0(auStack_658);
  cVar4 = *(char *)(param_1 + 8);
  if (cVar4 != '\0') {
    plStack_730 = param_1 + 5;
  }
  puVar5 = (ulong *)*param_1;
  lVar20 = param_1[2];
  func_0x065af670(auStack_658);
  if (&uStack_640 != puVar5) {
    bVar3 = (byte)*puVar5;
    if (((ulong)uStack_640 & 1) == 0) {
      if ((bVar3 & 1) == 0) {
        ppuStack_630 = (ulong **)puVar5[2];
        uStack_640 = (undefined *)*puVar5;
        uStack_638 = (long *)puVar5[1];
      }
      else {
        func_0x04885070(&uStack_640,puVar5[2],puVar5[1]);
      }
    }
    else {
      bVar32 = (bVar3 & 1) != 0;
      pbVar24 = (byte *)((long)puVar5 + 1);
      if (bVar32) {
        pbVar24 = (byte *)puVar5[2];
      }
      uVar22 = (ulong)(bVar3 >> 1);
      if (bVar32) {
        uVar22 = puVar5[1];
      }
      func_0x04885120(&uStack_640,pbVar24,uVar22);
    }
  }
  auVar33 = func_0x0afe0620();
  auStack_628 = auVar33;
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar15 = plStack_600;
  puVar23[1] = 0;
  puVar23[2] = 0;
  *puVar23 = &UNK_0f27d0a8;
  pcStack_608 = (code *)(puVar23 + 3);
  *(undefined1 *)(puVar23 + 4) = 3;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  puVar23[3] = &UNK_0f27d0f8;
  if (plStack_600 == (long *)0x0) {
LAB_0af4075f:
    uVar22 = *(ulong *)(lVar20 + 0xb0);
    plStack_600 = puVar23;
    if (*(ulong *)(lVar20 + 0xb8) <= uVar22) {
LAB_0af407b1:
      lVar31 = func_0x065b01f0(lVar20 + 0xa8,auStack_658);
      goto LAB_0af407c8;
    }
  }
  else {
    LOCK();
    plVar1 = plStack_600 + 1;
    lVar31 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar31 != 0) goto LAB_0af4075f;
    lVar31 = *plStack_600;
    plStack_600 = puVar23;
    (**(code **)(lVar31 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    uVar22 = *(ulong *)(lVar20 + 0xb0);
    if (*(ulong *)(lVar20 + 0xb8) <= uVar22) goto LAB_0af407b1;
  }
  func_0x065b0410(uVar22,auStack_658);
  lVar31 = uVar22 + 0x1b0;
  *(long *)(lVar20 + 0xb0) = lVar31;
LAB_0af407c8:
  *(long *)(lVar20 + 0xb0) = lVar31;
  func_0x0652dc20(auStack_658);
  if ((long *)(lVar31 + -0x1b0) != plStack_730) {
    plVar15 = &lStack_780;
    if (cVar4 != '\0') {
      plVar15 = param_1 + 6;
    }
    func_0x066dff70((long *)(lVar31 + -0x1b0),*plStack_730,*plVar15,
                    (*plVar15 - *plStack_730 >> 4) * -0x5555555555555555);
  }
  lVar31 = lStack_788;
  lVar20 = lStack_780;
  if (lStack_788 != 0) {
    for (; lVar31 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + -0x10),
                           *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_780 = lVar31;
    thunk_FUN_0ee326a0(lStack_788,lStack_778 - lStack_788);
  }
  uVar21 = func_0x0651ffe0(&lStack_3c0);
  lVar31 = lStack_3d8;
  lVar20 = lStack_3d0;
  if (lStack_3d8 != 0) {
    for (; lVar31 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + -0x10),
                           *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_3d0 = lVar31;
    uVar21 = thunk_FUN_0ee326a0(lStack_3d8,(long)ppuStack_3c8 - lStack_3d8);
  }
  lVar31 = lStack_678;
  lVar20 = lStack_670;
  if (lStack_678 != 0) {
    for (; lVar31 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar20 + -0x10),
                           *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_670 = lVar31;
    uVar21 = thunk_FUN_0ee326a0(lStack_678,lStack_668 - lStack_678);
  }
  return uVar21;
}



/* ---- referenced strings ----
 * 0x14b94d1  BeforeEventSignal
 */
