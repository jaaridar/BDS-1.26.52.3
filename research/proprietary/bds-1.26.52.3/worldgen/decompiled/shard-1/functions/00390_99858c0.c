/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9a858c0 (ELF vaddr 0x99858c0)
 * Label: caller-of-callee
 * Body:  [[09a858c0, 09a859d1] [09a859e0, 09a85ba3] [09a85bb0, 09a860a1] [09a860b0, 09a8675a] [09a86760, 09a867c6] [09a867d0, 09a868aa] [09a868b0, 09a86970] [09a86980, 09a86b1e] [09a86c23, 09a86c4d]]
 * Ghidra: FUN_09a858c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09a858c0(undefined4 *param_1,byte *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined7 *puVar18;
  bool bVar19;
  undefined1 uStack_521;
  byte bStack_520;
  undefined7 uStack_51f;
  ulong uStack_518;
  undefined7 *puStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  long lStack_4f8;
  undefined4 uStack_4ec;
  undefined1 auStack_4e8 [8];
  byte *pbStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  long lStack_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 *puStack_4b8;
  long lStack_4b0;
  byte bStack_4a8;
  undefined7 *puStack_4a0;
  undefined4 *apuStack_498 [2];
  undefined *puStack_488;
  code *pcStack_480;
  undefined4 uStack_478;
  undefined1 uStack_474;
  byte *pbStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined *puStack_448;
  code *pcStack_440;
  undefined4 uStack_438;
  undefined1 uStack_434;
  byte *pbStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  byte *pbStack_410;
  undefined *puStack_408;
  undefined7 *puStack_400;
  ulong uStack_3f8;
  undefined7 *puStack_3f0;
  ulong uStack_3e8;
  undefined *puStack_3e0;
  ulong uStack_3d8;
  byte *pbStack_3d0;
  byte *pbStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined1 auStack_3a8 [96];
  undefined8 auStack_348 [2];
  undefined *puStack_338;
  code *pcStack_330;
  undefined4 uStack_328;
  undefined1 uStack_324;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  byte *pbStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  long lStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined2 uStack_288;
  undefined6 uStack_286;
  undefined2 uStack_280;
  undefined6 uStack_27e;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_2f8 = (long *)0x0;
  plStack_2f0 = (long *)0x0;
  puStack_308 = (undefined *)0x0;
  pbStack_300 = (byte *)0x0;
  uStack_276 = 0;
  lStack_2e8 = 0x3f800000;
  uStack_2e0 = (undefined8 *)0x0;
  puStack_2d8 = (undefined8 *)0x0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0x3f800000;
  uStack_298 = 0x3f800000;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_286 = 0;
  uStack_280 = 0;
  uStack_27e = 0;
  uStack_278 = 0;
  func_0x09aaed10(param_1 + 0x18,&puStack_308);
  func_0x06042870(param_1 + 0x22,&uStack_2e0);
  func_0x09aaee50(param_1 + 0x2c,&uStack_2b8);
  pbVar15 = *(byte **)(param_1 + 0x36);
  if (pbVar15 != (byte *)0x0) {
    pbVar17 = *(byte **)(param_1 + 0x38);
    pbVar13 = pbVar15;
    if (pbVar15 != pbVar17) {
      do {
        if ((pbVar17[-0x18] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(pbVar17 + -8),
                          *(ulong *)(pbVar17 + -0x18) & 0xfffffffffffffffe);
        }
        pbVar17 = pbVar17 + -0x18;
      } while (pbVar17 != pbVar15);
      pbVar13 = *(byte **)(param_1 + 0x36);
    }
    *(byte **)(param_1 + 0x38) = pbVar15;
    func_0x0412a280(pbVar13,*(long *)(param_1 + 0x3a) - (long)pbVar13);
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x3a) = 0;
  }
  *(undefined8 *)(param_1 + 0x36) = uStack_290;
  *(ulong *)(param_1 + 0x38) = CONCAT62(uStack_286,uStack_288);
  *(ulong *)(param_1 + 0x3a) = CONCAT62(uStack_27e,uStack_280);
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_286 = 0;
  uStack_280 = 0;
  uStack_27e = 0;
  *(undefined2 *)(param_1 + 0x3c) = uStack_278;
  func_0x048f69d0(&puStack_308);
  if (*(long *)(param_1 + 0x14) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x12);
    while (puVar8 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)*puVar8;
      func_0x048f69d0(puVar8 + 5);
      if ((*(byte *)(puVar8 + 2) & 1) != 0) {
        func_0x0412a280(puVar8[4],puVar8[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar8,0xc0);
      puVar8 = puVar14;
    }
    *(undefined8 *)(param_1 + 0x12) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0eee2dd0(*(undefined8 *)(param_1 + 0xe),0,*(long *)(param_1 + 0x10) << 3);
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined **)(param_1 + 0x3e) = &UNK_0ef46be8;
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    while (puVar8 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)*puVar8;
      if ((*(byte *)(puVar8 + 2) & 1) != 0) {
        func_0x0412a280(puVar8[4],puVar8[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar8,0x30);
      puVar8 = puVar14;
    }
    lVar10 = *(long *)(param_1 + 0x44);
    *(undefined8 *)(param_1 + 0x44) = 0;
    if (lVar10 != 0) {
      func_0x0412a280(lVar10,*(long *)(param_1 + 0x46) << 3);
    }
    *(undefined **)(param_1 + 0x3e) = &UNK_0f534768;
    plVar7 = *(long **)(param_1 + 0x42);
    if (plVar7 == (long *)0x0) {
      **(undefined1 **)(param_1 + 0x40) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x40) = 0;
      LOCK();
      plVar1 = plVar7 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0xc) != '\x01') {
    return;
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pbStack_410 = param_2;
  if (*(char *)(param_1 + 0xc) == '\0') {
    func_0x048a88b0();
LAB_09a86a6e:
    iVar6 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar6 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
  else {
    pbVar15 = (byte *)0x74e8f49157620b10;
    bVar19 = (*(byte *)(param_1 + 6) & 1) == 0;
    puStack_3e0 = *(undefined **)(param_1 + 10);
    if (bVar19) {
      puStack_3e0 = (undefined *)((long)param_1 + 0x19);
    }
    uStack_3d8 = (ulong)(*(byte *)(param_1 + 6) >> 1);
    if (!bVar19) {
      uStack_3d8 = *(ulong *)(param_1 + 8);
    }
    apuStack_498[0] = param_1;
    (**(code **)(_DAT_0f7b8f98 + 0xb0))
              (&puStack_308,&DAT_0f7b8f98,&puStack_3e0,0x106,&UNK_09aaf0f0,apuStack_498);
    pbStack_3d0 = (byte *)0x74e8f49157620b10;
    param_2 = &UNK_0140f690;
    pbStack_3c8 = &UNK_0140f690;
    lStack_3c0 = 1;
    lStack_3b8 = CONCAT44(lStack_3b8._4_4_,0xbe);
    if ((byte)uStack_2c8 == 0) {
      func_0x0eedea30(auStack_4e8);
      FUN_0eedeb80(2,0x2d,&puStack_308,auStack_4e8,&pbStack_3d0);
      if (((ulong)auStack_4e8 & 1) != 0) {
        func_0x0412a280(plStack_4d8,(ulong)auStack_4e8 & 0xfffffffffffffffe);
      }
    }
    puVar8 = uStack_2e0;
    if (((byte)uStack_2c8 & 1) == 0) {
      puVar14 = puStack_2d8;
      if (uStack_2e0 != (undefined8 *)0x0) {
        while (puVar8 != puVar14) {
          func_0x048b3e80(puVar14 + -8);
          puVar14 = puVar14 + -8;
        }
        puStack_2d8 = puVar8;
        func_0x0412a280(uStack_2e0,lStack_2d0 - (long)uStack_2e0);
      }
      plVar1 = plStack_2f8;
      plVar7 = plStack_2f0;
      if (plStack_2f8 != (long *)0x0) {
        for (; plVar1 != plVar7; plVar7 = plVar7 + -10) {
          if (((char)plVar7[-1] == '\x01') && ((*(byte *)(plVar7 + -6) & 1) != 0)) {
            func_0x0412a280(plVar7[-4],plVar7[-6] & 0xfffffffffffffffe);
          }
        }
        plStack_2f0 = plVar1;
        func_0x0412a280(plStack_2f8,lStack_2e8 - (long)plStack_2f8);
      }
    }
    bVar19 = (*(byte *)(param_1 + 6) & 1) != 0;
    puStack_308 = (undefined *)((long)param_1 + 0x19);
    if (bVar19) {
      puStack_308 = *(undefined **)(param_1 + 10);
    }
    pbStack_300 = (byte *)(ulong)(*(byte *)(param_1 + 6) >> 1);
    if (bVar19) {
      pbStack_300 = *(byte **)(param_1 + 8);
    }
    plStack_2f8 = (long *)&UNK_0141cc9e;
    plStack_2f0 = (long *)0xd;
    func_0x048ad670(&bStack_520,&puStack_308,2,0x2f);
    if (DAT_0f7b8fb8 == '\0') goto LAB_09a86a6e;
  }
  uStack_3e8 = (ulong)(bStack_520 >> 1);
  puStack_3f0 = &uStack_51f;
  if ((bStack_520 & 1) != 0) {
    uStack_3e8 = uStack_518;
    puStack_3f0 = puStack_510;
  }
  cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_3f0);
  if (cVar5 == '\0') goto LAB_09a869c1;
  if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_3f8 = (ulong)(bStack_520 >> 1);
  puStack_400 = &uStack_51f;
  if ((bStack_520 & 1) != 0) {
    uStack_3f8 = uStack_518;
    puStack_400 = puStack_510;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x60))(&puStack_308,&DAT_0f7b8f98,&puStack_400);
  lStack_3c0 = 1;
  lStack_3b8 = CONCAT44(lStack_3b8._4_4_,0xc9);
  bStack_4a8 = (byte)uStack_2c8;
  pbStack_3d0 = pbVar15;
  pbStack_3c8 = param_2;
  if ((byte)uStack_2c8 == 0) {
    func_0x0eedea30(apuStack_498);
    FUN_0eedeb80(2,0x2d,&puStack_308,apuStack_498,&pbStack_3d0);
    if (((ulong)apuStack_498[0] & 1) != 0) {
      func_0x0412a280(puStack_488,(ulong)apuStack_498[0] & 0xfffffffffffffffe);
    }
    bStack_4a8 = (byte)uStack_2c8;
  }
  if ((bStack_4a8 & 1) == 0) {
    auStack_4e8 = (undefined1  [8])puStack_308;
    pbStack_4e0 = pbStack_300;
    plStack_4d8 = plStack_2f8;
    plStack_4d0 = plStack_2f0;
    lStack_4c8 = lStack_2e8;
    uStack_4c0 = (undefined4)uStack_2e0;
    uStack_4bc = uStack_2e0._4_4_;
    puStack_4b8 = puStack_2d8;
    lStack_4b0 = lStack_2d0;
    puVar18 = &uStack_51f;
    if ((bStack_520 & 1) != 0) {
      puVar18 = puStack_510;
    }
    func_0x0eede920(0,1,0,0xc,8,&UNK_0141ccac,0xdb,&UNK_012951e1,puVar18);
    if (bStack_4a8 != 1) goto LAB_09a86912;
LAB_09a8617f:
    if (((ulong)auStack_4e8 & 1) == 0) goto LAB_09a869c1;
    uVar9 = (ulong)auStack_4e8 & 0xfffffffffffffffe;
  }
  else {
    plStack_4d8 = plStack_2f8;
    auStack_4e8 = (undefined1  [8])puStack_308;
    pbStack_4e0 = pbStack_300;
    lStack_2d0 = 0;
    uStack_2c8 = 0;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0ef44a60;
    pbStack_300 = (byte *)(plVar7 + 3);
    *(undefined1 *)(plVar7 + 3) = 1;
    puStack_308 = &UNK_0ef46be8;
    plStack_2f0 = (long *)0x0;
    lStack_2e8 = 0;
    uStack_2e0 = (undefined8 *)0x0;
    puStack_2d8 = (undefined8 *)0x0;
    lStack_2d0 = CONCAT44(lStack_2d0._4_4_,0x3f800000);
    uStack_2c8 = uStack_2c8 & 0xffffffffffff0000;
    puStack_4a0 = &uStack_51f;
    plStack_2f8 = plVar7;
    if (*(char *)(param_1 + 0x50) == '\0') {
      *(undefined **)(param_1 + 0x3e) = &UNK_0f534768;
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &UNK_0ef44a60;
      *(undefined1 *)(puVar8 + 3) = 1;
      *(undefined8 **)(param_1 + 0x40) = puVar8 + 3;
      *(undefined8 **)(param_1 + 0x42) = puVar8;
      *(undefined **)(param_1 + 0x3e) = &UNK_0ef46be8;
      plStack_2f0 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x46) = 0;
      lStack_2e8 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x4a) = 0;
      param_1[0x4c] = 0x3f800000;
      *(undefined2 *)(param_1 + 0x4e) = (undefined2)uStack_2c8;
      *(undefined1 *)(param_1 + 0x50) = 1;
      puStack_308 = &UNK_0ef46be8;
    }
    else {
      func_0x09aaef70(param_1 + 0x44,&plStack_2f0);
      *(undefined2 *)(param_1 + 0x4e) = (undefined2)uStack_2c8;
      puStack_308 = &UNK_0ef46be8;
      puVar8 = uStack_2e0;
      while (puVar8 != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)*puVar8;
        if ((*(byte *)(puVar8 + 2) & 1) != 0) {
          func_0x0412a280(puVar8[4],puVar8[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar8,0x30);
        puVar8 = puVar14;
      }
    }
    plVar7 = plStack_2f0;
    plStack_2f0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      func_0x0412a280(plVar7,lStack_2e8 << 3);
    }
    plVar7 = plStack_2f8;
    puStack_308 = &UNK_0f534768;
    if (plStack_2f8 == (long *)0x0) {
      *pbStack_300 = 0;
    }
    else {
      *pbStack_300 = 0;
      LOCK();
      plVar1 = plStack_2f8 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar7);
      }
    }
    pbStack_300 = pbStack_410;
    plStack_2f8 = (long *)CONCAT44(plStack_2f8._4_4_,0xffffffff);
    plStack_2f0 = &uStack_2e0;
    lStack_2e8 = 0x800000000;
    puStack_1e0 = auStack_1d0;
    uStack_1d8 = 0x800000000;
    uStack_50 = 0xfbf8;
    uStack_4e = 1;
    uStack_4c = 0xffffffff00000000;
    uStack_40 = 0;
    uStack_38 = 0;
    puStack_308 = &UNK_0f4e3998;
    if (bStack_4a8 == 0) {
      func_0x05d8b230(auStack_4e8);
    }
    plVar7 = plStack_4d8;
    if (((ulong)auStack_4e8 & 1) == 0) {
      plVar7 = (long *)(auStack_4e8 + 1);
    }
    uVar9 = func_0x0eee2e90(plVar7);
    if (0xfffffffffffffff7 < uVar9) {
      uVar11 = func_0x04882e30();
      FUN_041084d6(&DAT_0f7b8fb8);
      if ((bStack_520 & 1) == 0) {
        _Unwind_Resume(uVar11);
      }
      func_0x0412a280(puStack_510,CONCAT71(uStack_51f,bStack_520) & 0xfffffffffffffffe);
      _Unwind_Resume(uVar11);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 < 0x17) {
      uStack_508 = CONCAT71(uStack_508._1_7_,(char)uVar9 * '\x02');
      lVar10 = (long)&uStack_508 + 1;
      if (uVar9 != 0) goto LAB_09a86414;
    }
    else {
      uVar16 = 0x1a;
      if ((uVar9 | 7) != 0x17) {
        uVar16 = (uVar9 | 7) + 1;
      }
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
      if (lVar10 == 0) {
        func_0x0eec74c0(uVar16,0);
      }
      uStack_508 = uVar16 | 1;
      uStack_500 = uVar9;
      lStack_4f8 = lVar10;
LAB_09a86414:
      func_0x0eee2ee0(lVar10,plVar7,uVar9);
    }
    *(undefined1 *)(lVar10 + uVar9) = 0;
    uStack_4ec = 0;
    func_0x0ed62aa0(&pbStack_3d0,&uStack_508);
    puStack_408 = &UNK_0f1d1688;
    pbVar15 = pbStack_300 + 0x18;
    puStack_488 = &UNK_0490c9f0;
    uStack_478 = 0x95e97e5e;
    pcStack_480 = (code *)0x0;
    uStack_474 = 4;
    apuStack_498[0] = &uStack_4ec;
    uStack_468 = 0;
    puStack_460 = &UNK_0490c9d0;
    lStack_320 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    pbStack_470 = pbVar15;
    if (lStack_320 == 0) {
      func_0x048b0de0(&uStack_458,&uStack_521);
      _DAT_0f54fd90 = (undefined4)uStack_458;
      uRam000000000f54fd94 = uStack_458._4_4_;
      uVar3 = (undefined4)uStack_450;
      uVar4 = uStack_450._4_4_;
      uStack_458 = (undefined8 *)0x0;
      uStack_450 = (long *)0x0;
      plVar7 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar3;
      uRam000000000f54fd9c = uVar4;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
      plVar7 = uStack_450;
      if (uStack_450 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_450 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*uStack_450 + 0x10))(uStack_450);
          func_0x0412c2d0(plVar7);
        }
      }
      lStack_320 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    puStack_338 = &UNK_09ac89e0;
    uStack_328 = 0x24d605be;
    pcStack_330 = (code *)0x0;
    uStack_324 = 3;
    uStack_318 = 0;
    uStack_310 = 0;
    puStack_448 = &UNK_09ac89e0;
    pcStack_440 = (code *)0x0;
    uStack_438 = 0x24d605be;
    uStack_434 = 3;
    auStack_348[0] = 0;
    uStack_428 = 0;
    puStack_420 = &UNK_09ac89c0;
    uStack_458 = (undefined8 *)(param_1 + 0x3e);
    pbStack_430 = pbVar15;
    cVar5 = func_0x0ed6b4a0(&puStack_308,&pbStack_3d0,&uStack_458,apuStack_498,&puStack_408);
    if ((pcStack_440 != (code *)0x0) && ((*pcStack_440)(&uStack_458), pcStack_330 != (code *)0x0)) {
      (*pcStack_330)(auStack_348);
    }
    if (pcStack_480 != (code *)0x0) {
      (*pcStack_480)(apuStack_498);
    }
    func_0x04907660(auStack_3a8);
    if (lStack_3c0 != 0) {
      lStack_3b8 = lStack_3c0;
      func_0x0412a280(lStack_3c0,lStack_3b0 - lStack_3c0);
    }
    if ((uStack_508 & 1) != 0) {
      func_0x0412a280(lStack_4f8,uStack_508 & 0xfffffffffffffffe);
    }
    if (cVar5 == '\0') {
      if ((bStack_520 & 1) != 0) {
        puStack_4a0 = puStack_510;
      }
      func_0x0eede920(0,1,0,0xc,8,&UNK_0141ccac,0xd2,&UNK_013676a8,puStack_4a0);
      func_0x0ed6c330(&pbStack_3d0,&plStack_2f8);
      pbVar13 = pbStack_3c8;
      pbVar17 = pbStack_3d0;
      for (pbVar15 = pbStack_3d0; pbStack_3d0 = pbVar17, pbVar15 != pbVar13;
          pbVar15 = pbVar15 + 0x18) {
        if ((*pbVar15 & 1) == 0) {
          pbVar17 = pbVar15 + 1;
        }
        else {
          pbVar17 = *(byte **)(pbVar15 + 0x10);
        }
        func_0x0eede920(0,1,0,0xc,8,&UNK_0141ccac,0xd4,&UNK_012ee1a2,pbVar17);
        pbVar17 = pbStack_3d0;
      }
      pbVar15 = pbStack_3c8;
      if (pbVar17 != (byte *)0x0) {
        for (; pbVar17 != pbVar15; pbVar15 = pbVar15 + -0x18) {
          if ((pbVar15[-0x18] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pbVar15 + -8),
                            *(ulong *)(pbVar15 + -0x18) & 0xfffffffffffffffe);
          }
        }
        pbStack_3c8 = pbVar17;
        func_0x0412a280(pbStack_3d0,lStack_3c0 - (long)pbStack_3d0);
      }
      if (*(char *)(param_1 + 0x50) == '\x01') {
        *(undefined **)(param_1 + 0x3e) = &UNK_0ef46be8;
        puVar8 = *(undefined8 **)(param_1 + 0x48);
        while (puVar8 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)*puVar8;
          if ((*(byte *)(puVar8 + 2) & 1) != 0) {
            func_0x0412a280(puVar8[4],puVar8[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar8,0x30);
          puVar8 = puVar14;
        }
        lVar10 = *(long *)(param_1 + 0x44);
        *(undefined8 *)(param_1 + 0x44) = 0;
        if (lVar10 != 0) {
          func_0x0412a280(lVar10,*(long *)(param_1 + 0x46) << 3);
        }
        *(undefined **)(param_1 + 0x3e) = &UNK_0f534768;
        plVar7 = *(long **)(param_1 + 0x42);
        if (plVar7 == (long *)0x0) {
          **(undefined1 **)(param_1 + 0x40) = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0x40) = 0;
          LOCK();
          plVar1 = plVar7 + 1;
          lVar10 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            func_0x0412c2d0(plVar7);
          }
        }
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
    }
    func_0x0490a470(&puStack_308);
    if (bStack_4a8 == 1) goto LAB_09a8617f;
LAB_09a86912:
    puVar8 = (undefined8 *)CONCAT44(uStack_4bc,uStack_4c0);
    if (puVar8 != (undefined8 *)0x0) {
      puVar12 = puStack_4b8;
      puVar14 = puVar8;
      if (puVar8 != puStack_4b8) {
        do {
          puVar12 = puVar12 + -8;
          func_0x048b3e80(puVar12);
        } while (puVar12 != puVar8);
        puVar14 = (undefined8 *)CONCAT44(uStack_4bc,uStack_4c0);
      }
      puStack_4b8 = puVar8;
      func_0x0412a280(puVar14,lStack_4b0 - (long)puVar14);
    }
    plVar1 = plStack_4d8;
    plVar7 = plStack_4d0;
    if (plStack_4d8 == (long *)0x0) goto LAB_09a869c1;
    for (; plVar1 != plVar7; plVar7 = plVar7 + -10) {
      if (((char)plVar7[-1] == '\x01') && ((*(byte *)(plVar7 + -6) & 1) != 0)) {
        func_0x0412a280(plVar7[-4],plVar7[-6] & 0xfffffffffffffffe);
      }
    }
    plStack_4d0 = plVar1;
    uVar9 = lStack_4c8 - (long)plStack_4d8;
  }
  func_0x0412a280(plStack_4d8,uVar9);
LAB_09a869c1:
  if ((bStack_520 & 1) != 0) {
    func_0x0412a280(puStack_510,CONCAT71(uStack_51f,bStack_520) & 0xfffffffffffffffe);
  }
  return;
}


