/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8c0720 (ELF vaddr 0xc7c0720)
 * Label: caller-of-callee
 * Body:  [[0c8c0720, 0c8c0efb] [0c8c0f00, 0c8c1404] [0c8c1410, 0c8c1515] [0c8c1520, 0c8c16ce] [0c8c16d0, 0c8c193d] [0c8c1940, 0c8c19ba] [0c8c19c0, 0c8c1b2b]]
 * Ghidra: FUN_0c8c0720
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0c8c0720(undefined8 *param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 *param_5,
            byte *param_6,undefined1 param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *extraout_RDX;
  ulong uVar15;
  undefined5 *puVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined **ppuVar21;
  long lVar22;
  bool bVar23;
  undefined1 uStack_5f9;
  byte bStack_5f8;
  undefined5 uStack_5f7;
  char cStack_5f2;
  undefined1 uStack_5f1;
  undefined1 uStack_5f0;
  undefined5 uStack_5ef;
  ushort uStack_5ea;
  undefined5 *puStack_5e8;
  code *pcStack_5e0;
  undefined4 uStack_5d8;
  undefined1 uStack_5d4;
  byte *pbStack_5d0;
  undefined8 uStack_5c8;
  undefined *puStack_5c0;
  byte *pbStack_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 uStack_5a0;
  undefined1 uStack_598;
  undefined2 uStack_597;
  undefined1 uStack_595;
  undefined4 uStack_594;
  code *pcStack_590;
  undefined4 uStack_588;
  undefined1 uStack_584;
  byte *pbStack_580;
  undefined8 uStack_578;
  undefined *puStack_570;
  undefined8 *puStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined2 auStack_518 [4];
  undefined8 uStack_510;
  long *plStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined2 uStack_4f0;
  byte *pbStack_4e8;
  byte *pbStack_4e0;
  undefined *puStack_4d8;
  code *pcStack_4d0;
  undefined4 uStack_4c8;
  undefined1 uStack_4c4;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  byte bStack_4a8;
  undefined7 uStack_4a7;
  undefined8 uStack_498;
  byte bStack_490;
  undefined7 uStack_48f;
  undefined8 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  ulong uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  ulong uStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  char cStack_398;
  undefined1 auStack_390 [8];
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  long lStack_370;
  undefined1 auStack_368 [96];
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long lStack_290;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_428 = 0;
  uStack_420 = 0;
  lStack_438 = 0;
  uStack_430 = 0;
  lStack_448 = 0;
  lStack_440 = 0;
  lStack_458 = 0;
  lStack_450 = 0;
  uStack_468 = 0;
  lStack_460 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  pbStack_5b0 = param_6;
  uStack_520 = param_3;
  puStack_410 = param_5;
  (**(code **)(*param_2 + 0x18))(param_2);
  puStack_560 = extraout_RDX;
  if ((DAT_0f6eb7f8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6eb7f8), iVar9 != 0)) {
    func_0x0c8ed330();
    func_0x0410844d(&DAT_0f6eb7f8);
  }
  ppuVar11 = (undefined **)(param_4 + 0x18);
  plVar14 = (long *)(*(long *)(param_4 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18)) >>
                                 3) - 1U & _DAT_0f6eb7e4) * 8);
  do {
    lVar18 = *plVar14;
    if (lVar18 == -1) goto LAB_0c8c07f2;
    plVar14 = (long *)(*(long *)(param_4 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar18 * 0x18) != _DAT_0f6eb7e4);
  if (plVar14 == *(long **)(param_4 + 0x38)) {
LAB_0c8c07f2:
    puStack_308 = (undefined *)0x0;
    ppuStack_300 = (undefined **)0x0;
    func_0x048b1dc0(&puStack_308);
    ppuVar10 = ppuStack_300;
    puVar12 = puStack_308;
  }
  else {
    ppuVar10 = ppuVar11;
    puVar12 = (undefined *)plVar14[2];
  }
  if (puVar12 == (undefined *)0x0) {
    if ((DAT_0f6eb7f8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6eb7f8), iVar9 != 0)) {
      func_0x0c8ed330();
      func_0x0410844d(&DAT_0f6eb7f8);
    }
    if ((DAT_0f6eb7f8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6eb7f8), iVar9 != 0)) {
      func_0x0c8ed330();
      func_0x0410844d(&DAT_0f6eb7f8);
    }
    puStack_308 = &DAT_0f6eb7e0;
    ppuStack_300 = (undefined **)CONCAT44(ppuStack_300._4_4_,_DAT_0f6eb7e4);
    ppuStack_2f8 = (undefined **)0x0;
    uStack_2f0 = (undefined **)CONCAT44(uStack_2f0._4_4_,0x80);
    uStack_2e8 = 1;
    puStack_2e0 = &UNK_0c8ed4c0;
    puStack_2d8 = &UNK_0c8ed580;
    uStack_2d0 = 0;
    puStack_2c8 = &UNK_0c8ed730;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    plStack_298 = (long *)0x0;
    lStack_290 = 0;
    FUN_048aee30(auStack_390,ppuVar11,&puStack_308,0x3bd1bb42);
    lVar18 = lStack_290;
    lStack_290 = 0;
    if (lVar18 != 0) {
      func_0x048ae940(lVar18);
      thunk_FUN_0ee326a0(lVar18,0x78);
    }
    plVar14 = plStack_298;
    if (plStack_298 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_298 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_298 + 0x10))(plStack_298);
        func_0x0412c2d0(plVar14);
      }
    }
    if ((DAT_0f6dcf58 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6dcf58), iVar9 != 0)) {
      func_0x0c24b6b0(0xf6dcf40);
      func_0x0410844d(&DAT_0f6dcf58);
    }
    puStack_308 = (undefined *)CONCAT44(puStack_308._4_4_,_DAT_0f6dcf44);
    ppuVar10 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (ppuVar10 == (undefined **)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    ppuVar10[1] = (undefined *)0x0;
    ppuVar10[2] = (undefined *)0x0;
    *ppuVar10 = &UNK_0f361230;
    ppuStack_300 = ppuVar10 + 3;
    ppuVar10[3] = (undefined *)0x0;
    ppuVar10[4] = (undefined *)0x0;
    ppuVar10[5] = (undefined *)0x0;
    ppuVar10[6] = (undefined *)0x0;
    ppuVar10[7] = (undefined *)0x0;
    ppuVar10[8] = (undefined *)0x0;
    bStack_5f8 = 0;
    uStack_5f7 = 0;
    cStack_5f2 = 0;
    uStack_5f1 = 0;
    uStack_5f0 = 0;
    uStack_5ef = 0;
    uStack_5ea = 0;
    ppuVar21 = &puStack_308;
    ppuStack_2f8 = ppuVar10;
    func_0x048afd20(auStack_390,ppuVar21);
    ppuVar10 = ppuStack_2f8;
    if (ppuStack_2f8 != (undefined **)0x0) {
      LOCK();
      ppuVar2 = ppuStack_2f8 + 1;
      puVar12 = *ppuVar2;
      *ppuVar2 = *ppuVar2 + -1;
      UNLOCK();
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuStack_2f8 + 0x10))(ppuStack_2f8);
        func_0x0412c2d0(ppuVar10);
      }
    }
    plVar14 = (long *)CONCAT26(uStack_5ea,CONCAT51(uStack_5ef,uStack_5f0));
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar1 = plVar14 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    if ((DAT_0f6eb7f8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6eb7f8), iVar9 != 0)) {
      func_0x0c8ed330();
      func_0x0410844d(&DAT_0f6eb7f8);
    }
    plVar14 = (long *)(*(long *)(param_4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18))
                                   >> 3) - 1U & _DAT_0f6eb7e4) * 8);
    do {
      lVar18 = *plVar14;
      if (lVar18 == -1) goto LAB_0c8c0ad1;
      plVar14 = (long *)(*(long *)(param_4 + 0x30) + lVar18 * 0x18);
    } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar18 * 0x18) != _DAT_0f6eb7e4);
    if (plVar14 == *(long **)(param_4 + 0x38)) {
LAB_0c8c0ad1:
      puStack_308 = (undefined *)0x0;
      ppuStack_300 = (undefined **)0x0;
      func_0x048b1dc0(ppuVar21);
      ppuVar11 = ppuStack_300;
    }
    else {
      ppuVar21 = (undefined **)(plVar14 + 2);
    }
    puVar12 = *ppuVar21;
    ppuVar10 = ppuVar11;
  }
  bStack_5f8 = 0;
  uStack_5f7 = 0;
  cStack_5f2 = '\0';
  uStack_5f1 = 0;
  uStack_5f0 = 0;
  uStack_5ef = 0;
  uStack_5ea = 0;
  puStack_5e8 = (undefined5 *)0x0;
  puStack_2d8 = (undefined *)0x0;
  uStack_2d0 = 0;
  uStack_2e8 = 0;
  puStack_2e0 = (undefined *)0x0;
  ppuStack_2f8 = (undefined **)0x0;
  uStack_2f0 = (undefined **)0x0;
  puStack_308 = (undefined *)0x0;
  ppuStack_300 = (undefined **)0x0;
  puStack_2c8 = (undefined *)0x0;
  uStack_2c0 = 0x400;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  ppuVar11 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (ppuVar11 == (undefined **)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *ppuVar11 = (undefined *)0x0;
  ppuVar11[1] = (undefined *)0x10000;
  ppuVar11[2] = (undefined *)0x0;
  ppuVar11[3] = (undefined *)0x0;
  ppuVar11[4] = (undefined *)0x0;
  ppuStack_2f8 = ppuVar11;
  uStack_2f0 = ppuVar11;
  if (puVar12 == (undefined *)0x0) {
    puVar12 = (undefined *)func_0x048aead0(ppuVar10);
  }
  auStack_390[0] = 0;
  uStack_378 = uStack_378 & 0xffffffffffffff00;
  iVar9 = func_0x0b6c6c90(*(undefined8 *)(puVar12 + 0x68),&bStack_5f8,&puStack_308,puStack_560,
                          pbStack_5b0,1,param_7,auStack_390);
  if ((char)uStack_378 == '\x01') {
    if ((uStack_380 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
    }
    uStack_380 = 0;
    if ((uStack_388 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_388 & 0xff00ffffffffffff) - 8);
    }
  }
  if (iVar9 == 0) {
    puStack_3f8 = (undefined *)((ulong)puStack_3f8 & 0xffffffffffffff00);
  }
  else {
    puStack_3f8 = puStack_308;
    uStack_3f0 = (ulong)ppuStack_300;
    ppuStack_300 = (undefined **)((ulong)ppuStack_300 & 0xffffffffffff);
    ppuStack_3e8 = ppuStack_2f8;
    ppuStack_3e0 = uStack_2f0;
    uStack_3d8 = uStack_2e8;
    puStack_3d0 = puStack_2e0;
    uStack_3c8 = puStack_2d8;
    uStack_3c0 = uStack_2d0;
    uStack_3b8 = puStack_2c8;
    uStack_3b0 = uStack_2c0;
    puStack_2c8 = (undefined *)0x0;
    uStack_2c0 = 0;
    puStack_2d8 = (undefined *)0x0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    puStack_2e0 = (undefined *)0x0;
    uStack_3a8 = CONCAT44(uStack_2b4,uStack_2b8);
    uStack_3a0 = CONCAT44(uStack_2ac,uStack_2b0);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    ppuStack_2f8 = (undefined **)0x0;
    uStack_2f0 = (undefined **)0x0;
  }
  cStack_398 = iVar9 != 0;
  func_0x04907660(&puStack_308);
  if (((ulong)puStack_5e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_5e8 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_5e8 = (undefined5 *)0x0;
  if ((uStack_5ea & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT26(uStack_5ea,CONCAT51(uStack_5ef,uStack_5f0)) & 0xff00ffffffffffff) - 8);
  }
  if (cStack_398 == '\0') {
    lStack_538 = 0;
    lStack_530 = 0;
    lStack_528 = 0;
    FUN_0470d9a0(&bStack_490,&UNK_0129b7e3,0x17,0,&puStack_308);
    func_0x0d6b13c0(uStack_520,8,&lStack_538,&bStack_490);
    if ((bStack_490 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_480,CONCAT71(uStack_48f,bStack_490) & 0xfffffffffffffffe);
    }
    lVar22 = lStack_538;
    lVar18 = lStack_530;
    if (lStack_538 != 0) {
      for (; lVar22 != lVar18; lVar18 = lVar18 + -0x20) {
        if ((*(byte *)(lVar18 + -0x18) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar18 + -8),
                             *(ulong *)(lVar18 + -0x18) & 0xfffffffffffffffe);
        }
      }
      lStack_530 = lVar22;
      thunk_FUN_0ee326a0(lStack_538,lStack_528 - lStack_538);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    lStack_460 = 0;
    lStack_458 = 0;
    lStack_450 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    lStack_448 = 0;
    lStack_440 = 0;
    lStack_438 = 0;
    param_1[0xb] = uStack_420;
    param_1[9] = uStack_430;
    param_1[10] = uStack_428;
    uStack_430 = 0;
    uStack_428 = 0;
    uStack_420 = 0;
    goto LAB_0c8c187c;
  }
  uStack_510 = *puStack_410;
  plVar14 = (long *)puStack_410[1];
  if (plVar14 == (long *)0x0) {
    uStack_500 = puStack_410[2];
    auStack_518[0] = 0xd;
    plStack_508 = (long *)0x0;
    uStack_4f8 = 0;
    uStack_4f0 = 0x100;
  }
  else {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    uStack_500 = puStack_410[2];
    auStack_518[0] = 0xd;
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    uStack_4f8 = 0;
    uStack_4f0 = 0x100;
    LOCK();
    plVar1 = plVar14 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    plStack_508 = plVar14;
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  ppuStack_2f8 = (undefined **)CONCAT44(ppuStack_2f8._4_4_,0xffffffff);
  uStack_2f0 = &puStack_2e0;
  uStack_2e8 = 0x800000000;
  puStack_1e0 = auStack_1d0;
  uStack_1d8 = 0x800000000;
  uStack_50 = 0xfffc;
  uStack_4e = 1;
  uStack_4c = 0xffffffff00000000;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_308 = &UNK_0f4e39b8;
  ppuStack_300 = (undefined **)param_4;
  func_0x0ed62d10(auStack_390,&puStack_3f8);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puStack_400 = &UNK_0f3e3378;
  pbVar20 = (byte *)((long)ppuStack_300 + 0x18);
  puStack_5e8 = (undefined5 *)&UNK_04913860;
  uStack_5d8 = 0x8240cd28;
  pcStack_5e0 = (code *)0x0;
  uStack_5d4 = 4;
  bStack_5f8 = (byte)auStack_518;
  uStack_5f7 = (undefined5)((ulong)auStack_518 >> 8);
  cStack_5f2 = (char)((ulong)auStack_518 >> 0x30);
  uStack_5f1 = (undefined1)((ulong)auStack_518 >> 0x38);
  puStack_5c0 = &UNK_04913840;
  pbStack_5d0 = pbVar20;
  puStack_408 = puVar13;
  uStack_5c8 = func_0x04913c20(pbVar20);
  uStack_5a8 = (uint)uStack_5c8;
  uStack_5a4 = (undefined4)((ulong)uStack_5c8 >> 0x20);
  uStack_5a0 = pbVar20;
  pbStack_4e8 = (byte *)func_0x04913c20(pbVar20);
  pbStack_4e0 = pbVar20;
  cVar8 = func_0x04913500(&uStack_5a8,&pbStack_4e8);
  if (cVar8 == '\0') {
    cVar8 = func_0x0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_012cdcb6);
    if (cVar8 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  lStack_4c0 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lStack_4c0 == 0) {
    func_0x048b0de0(&uStack_5a8,&uStack_5f9);
    pbVar19 = uStack_5a0;
    uRam000000000f54fd94 = uStack_5a4;
    _DAT_0f54fd90 = uStack_5a8;
    uStack_5a8 = 0;
    uStack_5a4 = 0;
    uStack_5a0._0_4_ = 0;
    uStack_5a0._4_4_ = 0;
    plVar14 = (long *)CONCAT44(DAT_0f54fd98_4,_DAT_0f54fd98);
    _DAT_0f54fd98 = pbVar19;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar1 = plVar14 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)CONCAT44(uStack_5a0._4_4_,(undefined4)uStack_5a0);
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar1 = plVar14 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    lStack_4c0 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_4d8 = &UNK_0c8d0390;
  uStack_4c8 = 0x4959af14;
  pcStack_4d0 = (code *)0x0;
  uStack_4c4 = 3;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_598 = 0x90;
  uStack_597 = 0x8d03;
  uStack_595 = 0xc;
  uStack_594 = 0;
  pcStack_590 = (code *)0x0;
  uStack_588 = 0x4959af14;
  uStack_584 = 3;
  pbStack_4e8 = (byte *)0x0;
  uStack_5a8 = (uint)puVar13;
  uStack_5a4 = (undefined4)((ulong)puVar13 >> 0x20);
  uStack_578 = 0;
  puStack_570 = &UNK_0c8e15a0;
  pbStack_580 = pbVar20;
  cVar8 = func_0x0ed6b4a0(&puStack_308,auStack_390,&uStack_5a8,&bStack_5f8,&puStack_400);
  if (pcStack_590 != (code *)0x0) {
    (*pcStack_590)(&uStack_5a8);
    if (pcStack_4d0 != (code *)0x0) {
      (*pcStack_4d0)(&pbStack_4e8);
    }
  }
  if (pcStack_5e0 != (code *)0x0) {
    (*pcStack_5e0)(&bStack_5f8);
  }
  if (cVar8 == '\0') {
    uStack_5a8 = CONCAT31((int3)_DAT_014233a2,0x24);
    uStack_5a4._1_3_ = (undefined3)_UNK_014233a6;
    uStack_5a4 = CONCAT31(uStack_5a4._1_3_,(char)((uint)_DAT_014233a2 >> 0x18));
    uStack_5a0._1_3_ = (undefined3)_UNK_014233aa;
    uStack_5a0._0_4_ = CONCAT31(uStack_5a0._1_3_,(char)((uint)_UNK_014233a6 >> 0x18));
    uStack_5a0._5_3_ = (undefined3)_UNK_014233ae;
    uStack_5a0._4_4_ = CONCAT31(uStack_5a0._5_3_,(char)((uint)_UNK_014233aa >> 0x18));
    uStack_598 = (undefined1)((uint)_UNK_014233ae >> 0x18);
    uStack_597 = 0x656c;
    uStack_595 = 0;
    puStack_560 = param_1;
    func_0x0ed6c330(&pbStack_4e8,&ppuStack_2f8);
    pbVar20 = pbStack_4e0;
    bStack_5f8 = 0;
    uStack_5f7 = 0;
    cStack_5f2 = 0;
    uStack_5f1 = 0;
    uStack_5f0 = 0;
    uStack_5ef = 0;
    uStack_5ea = 0;
    puStack_5e8 = (undefined5 *)0x0;
    if (pbStack_4e8 == pbStack_4e0) {
      bStack_5f8 = 0x1a;
      uStack_5f7 = 0x6f6e6b6e75;
      cStack_5f2 = 0x77;
      uStack_5f1 = 0x6e;
      uStack_5f0 = 0x20;
      uStack_5ef = 0x726f727265;
      bVar23 = true;
      if ((uStack_5a8 & 1) == 0) goto LAB_0c8c14ae;
LAB_0c8c1471:
      lVar18 = CONCAT44(uStack_594,CONCAT13(uStack_595,CONCAT21(uStack_597,uStack_598)));
    }
    else {
      pbVar19 = pbStack_4e8;
      do {
        if ((bStack_5f8 & 1) == 0) {
          if (bStack_5f8 >> 1 != 0) goto LAB_0c8c1417;
        }
        else if (CONCAT26(uStack_5ea,CONCAT51(uStack_5ef,uStack_5f0)) != 0) {
LAB_0c8c1417:
          func_0x0412f8c0(&bStack_5f8,&UNK_0121f022,2);
        }
        bVar23 = (*pbVar19 & 1) == 0;
        pbVar17 = *(byte **)(pbVar19 + 0x10);
        if (bVar23) {
          pbVar17 = pbVar19 + 1;
        }
        uVar15 = (ulong)(*pbVar19 >> 1);
        if (!bVar23) {
          uVar15 = *(ulong *)(pbVar19 + 8);
        }
        func_0x0412f8c0(&bStack_5f8,pbVar17,uVar15);
        pbVar19 = pbVar19 + 0x18;
      } while (pbVar19 != pbVar20);
      bVar23 = (bStack_5f8 & 1) == 0;
      if ((uStack_5a8 & 1) != 0) goto LAB_0c8c1471;
LAB_0c8c14ae:
      lVar18 = (long)&uStack_5a8 + 1;
    }
    param_1 = puStack_560;
    pbVar20 = pbStack_5b0 + 1;
    pbVar19 = pbVar20;
    if ((*pbStack_5b0 & 1) != 0) {
      pbVar19 = *(byte **)(pbStack_5b0 + 0x10);
    }
    puVar16 = puStack_5e8;
    if (bVar23) {
      puVar16 = &uStack_5f7;
    }
    func_0x0c8c0580(lVar18,pbVar19,puVar16);
    if ((bStack_5f8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_5e8,
                         CONCAT17(uStack_5f1,CONCAT16(cStack_5f2,CONCAT51(uStack_5f7,bStack_5f8))) &
                         0xfffffffffffffffe);
    }
    pbVar17 = pbStack_4e8;
    pbVar19 = pbStack_4e0;
    if (pbStack_4e8 != (byte *)0x0) {
      for (; pbVar17 != pbVar19; pbVar19 = pbVar19 + -0x18) {
        if ((pbVar19[-0x18] & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(pbVar19 + -8),
                             *(ulong *)(pbVar19 + -0x18) & 0xfffffffffffffffe);
        }
      }
      pbStack_4e0 = pbVar17;
      thunk_FUN_0ee326a0(pbStack_4e8,(long)puStack_4d8 - (long)pbStack_4e8);
    }
    if ((uStack_5a8 & 1) != 0) {
      thunk_FUN_0ee326a0(CONCAT44(uStack_594,CONCAT13(uStack_595,CONCAT21(uStack_597,uStack_598))),
                         CONCAT44(uStack_5a4,uStack_5a8) & 0xfffffffffffffffe);
    }
    if ((*pbStack_5b0 & 1) != 0) {
      pbVar20 = *(byte **)(pbStack_5b0 + 0x10);
    }
    bStack_5f8 = (byte)pbVar20;
    uStack_5f7 = (undefined5)((ulong)pbVar20 >> 8);
    cStack_5f2 = (char)((ulong)pbVar20 >> 0x30);
    uStack_5f1 = (undefined1)((ulong)pbVar20 >> 0x38);
    func_0x07026c90(1,3,5,&UNK_012336fe,&bStack_5f8);
  }
  bStack_5f8 = 0;
  uStack_5f7 = 0;
  cStack_5f2 = '\0';
  uStack_5f1 = 0;
  uStack_5f0 = 0;
  uStack_5ef = 0;
  uStack_5ea = 0;
  puStack_5e8 = (undefined5 *)0x0;
  pbVar20 = (byte *)(puVar13 + 9);
  func_0x0ee32f20(pbVar20,&bStack_5f8,1);
  if (cStack_5f2 == '\x01') {
    cVar8 = func_0x0551ca70(&bStack_5f8,&UNK_0f3e2518);
    if (cVar8 != '\0') goto LAB_0c8c1619;
    cVar8 = func_0x0b5c6170(&UNK_0f0863e8,&bStack_5f8);
    if (cVar8 != '\0') goto LAB_0c8c1619;
    func_0x0c8cf9d0(param_1,puVar13);
    if ((*pbVar20 & 1) == 0) {
      param_1[0xb] = puVar13[0xb];
      uVar3 = *(undefined4 *)((long)puVar13 + 0x4c);
      uVar4 = *(undefined4 *)(puVar13 + 10);
      uVar5 = *(undefined4 *)((long)puVar13 + 0x54);
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)pbVar20;
      *(undefined4 *)((long)param_1 + 0x4c) = uVar3;
      *(undefined4 *)(param_1 + 10) = uVar4;
      *(undefined4 *)((long)param_1 + 0x54) = uVar5;
    }
    else {
      FUN_0412e5e0(param_1 + 9,puVar13[0xb],puVar13[10]);
    }
  }
  else {
LAB_0c8c1619:
    func_0x0b603fc0(1,3,5,&UNK_0148a6a1);
    lStack_558 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    FUN_0470d9a0(&bStack_4a8,&UNK_0148a6a1,0x53,0,&uStack_5a8);
    func_0x0d6b13c0(uStack_520,8,&lStack_558,&bStack_4a8);
    if ((bStack_4a8 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_498,CONCAT71(uStack_4a7,bStack_4a8) & 0xfffffffffffffffe);
    }
    lVar22 = lStack_558;
    lVar18 = lStack_550;
    if (lStack_558 != 0) {
      for (; lVar22 != lVar18; lVar18 = lVar18 + -0x20) {
        if ((*(byte *)(lVar18 + -0x18) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar18 + -8),
                             *(ulong *)(lVar18 + -0x18) & 0xfffffffffffffffe);
        }
      }
      lStack_550 = lVar22;
      thunk_FUN_0ee326a0(lStack_558,lStack_548 - lStack_558);
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (((ulong)puStack_5e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_5e8 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_5e8 = (undefined5 *)0x0;
  if ((uStack_5ea & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT26(uStack_5ea,CONCAT51(uStack_5ef,uStack_5f0)) & 0xff00ffffffffffff) - 8);
  }
  if ((*pbVar20 & 1) != 0) {
    thunk_FUN_0ee326a0(puVar13[0xb],puVar13[9] & 0xfffffffffffffffe);
  }
  func_0x0c8cfb20(puVar13);
  thunk_FUN_0ee326a0(puVar13,0x60);
  func_0x04907660(auStack_368);
  if (uStack_380 != 0) {
    uStack_378 = uStack_380;
    thunk_FUN_0ee326a0(uStack_380,lStack_370 - uStack_380);
  }
  func_0x0490a470(&puStack_308);
  plVar14 = plStack_508;
  uStack_510 = 0;
  plStack_508 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    plVar14 = plStack_508;
    uStack_500 = 0;
    if (plStack_508 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_508 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_508 + 0x10))(plStack_508);
        func_0x0412c2d0(plVar14);
      }
    }
  }
LAB_0c8c187c:
  if (cStack_398 == '\x01') {
    func_0x04907660(&puStack_3f8);
  }
  lVar18 = lStack_448;
  if ((uStack_430 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_420,uStack_430 & 0xfffffffffffffffe);
    lVar18 = lStack_448;
  }
  lStack_448 = lVar18;
  lVar6 = lStack_440;
  lVar7 = lStack_460;
  lVar22 = lStack_458;
  if (lVar18 != 0) {
    while (lVar18 != lVar6) {
      lVar22 = lVar6 + -0x40;
      puVar13 = (undefined8 *)(lVar6 + -0x28);
      lVar6 = lVar22;
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(lVar22);
      }
    }
    thunk_FUN_0ee326a0(lStack_448,lStack_438 - lStack_448);
    lVar7 = lStack_460;
    lVar22 = lStack_458;
  }
  lStack_460 = lVar7;
  lStack_458 = lVar22;
  if (lVar7 != 0) {
    for (; lVar7 != lVar22; lVar22 = lVar22 + -0x18) {
      if ((*(byte *)(lVar22 + -0x18) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar22 + -8),
                           *(ulong *)(lVar22 + -0x18) & 0xfffffffffffffffe);
      }
    }
    thunk_FUN_0ee326a0(lVar7,lStack_450 - lVar7);
  }
  pbVar20 = _DAT_0f54fd98;
  if ((uStack_478 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_468,uStack_478 & 0xfffffffffffffffe);
    pbVar20 = _DAT_0f54fd98;
  }
  DAT_0f54fd98_4 = (undefined4)((ulong)pbVar20 >> 0x20);
  _DAT_0f54fd98 = SUB84(pbVar20,0);
  return param_1;
}



/* ---- referenced strings ----
 * 0x14233a2  Invalid Biome file
 */
