/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x642e3e0 (ELF vaddr 0x632e3e0)
 * Label: caller-of-callee
 * Body:  [[0642e3e0, 0642e6c8] [0642e6d0, 0642ea03] [0642ea9a, 0642eaf5] [0642eb03, 0642eb18]]
 * Ghidra: FUN_0642e3e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0642e3e0(long param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [8];
  char cVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong *unaff_R12;
  long *unaff_R14;
  bool bVar14;
  undefined1 auStack_4b8 [8];
  ulong *puStack_4b0;
  ulong *puStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_468;
  undefined8 uStack_460;
  ulong **ppuStack_458;
  char cStack_450;
  ulong *puStack_448;
  ulong *puStack_440;
  undefined1 auStack_438 [16];
  undefined1 *puStack_428;
  undefined1 uStack_420;
  byte bStack_418;
  undefined7 uStack_417;
  undefined8 uStack_408;
  char cStack_400;
  undefined1 auStack_3f8 [8];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 *puStack_3e0;
  uint uStack_368;
  undefined1 auStack_360 [40];
  uint uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulong **ppuStack_2c8;
  byte bStack_1e0;
  undefined1 auStack_1d8 [416];
  char cStack_38;
  
  plVar8 = (long *)func_0x064a9f80(*(undefined8 *)(param_1 + 0x18));
  if (plVar8 == (long *)0x0) {
    cVar7 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_0135e48c);
    if (cVar7 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x04109e60();
LAB_0642e9c6:
    puVar9 = unaff_R12;
    func_0x04882e30();
  }
  else {
    bVar14 = (*(byte *)(param_2 + 0x38) & 1) != 0;
    lVar13 = param_2 + 0x39;
    if (bVar14) {
      lVar13 = *(long *)(param_2 + 0x48);
    }
    uVar12 = (ulong)(*(byte *)(param_2 + 0x38) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(param_2 + 0x40);
    }
    auStack_438 = func_0x0eedb4e0(lVar13,uVar12);
    (**(code **)(*plVar8 + 0x20))(auStack_1d8,plVar8,auStack_438);
    (**(code **)(*plVar8 + 0x48))(auStack_360,plVar8,auStack_438);
    if ((bStack_1e0 != 1) || (cStack_38 != '\x01')) {
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uStack_488 = 0;
      uStack_480 = 0;
      uStack_498 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      if ((DAT_0f569528 & 1) == 0) {
        uStack_480 = _DAT_0f569538;
        uStack_490 = CONCAT71(uRam000000000f569529,DAT_0f569528);
        uStack_488 = _DAT_0f569530;
      }
      else {
        func_0x04885070(&uStack_490,_DAT_0f569538,_DAT_0f569530);
      }
      uStack_498 = _DAT_0f569520;
      auStack_4b8 = (undefined1  [8])0x0;
      puStack_4b0 = (ulong *)0x0;
      puStack_4a8 = (ulong *)0x0;
      uStack_420 = 0;
      puStack_428 = auStack_4b8;
      puVar9 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar9 == (ulong *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      puStack_4a8 = puVar9 + 5;
      uStack_460 = &puStack_440;
      ppuStack_458 = &puStack_448;
      cStack_450 = '\0';
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[4] = 0;
      auStack_4b8 = (undefined1  [8])puVar9;
      uStack_468 = auStack_4b8;
      puStack_448 = puVar9;
      puStack_440 = puVar9;
      if (puVar9 != &uStack_498) {
        if ((uStack_490 & 1) == 0) {
          puVar9[3] = uStack_480;
          *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_490;
          *(undefined4 *)((long)puVar9 + 0xc) = uStack_490._4_4_;
          *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_488;
          *(undefined4 *)((long)puVar9 + 0x14) = uStack_488._4_4_;
          uStack_468 = auStack_4b8;
        }
        else {
          puStack_4b0 = puVar9;
          uStack_468 = auStack_4b8;
          func_0x04885070(puVar9 + 1,uStack_480,uStack_488);
        }
      }
      *puVar9 = uStack_498;
      puStack_4b0 = puStack_448 + 5;
      puStack_3e0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puStack_3e0 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      uVar5 = _UNK_014cb67d;
      uStack_3f0 = 0x39;
      uStack_3e8 = 0x34;
      *(undefined8 *)(puStack_3e0 + 8) = _DAT_014cb675;
      *(undefined8 *)(puStack_3e0 + 10) = uVar5;
      uVar5 = _UNK_014cb66d;
      *(undefined8 *)(puStack_3e0 + 4) = _DAT_014cb665;
      *(undefined8 *)(puStack_3e0 + 6) = uVar5;
      uVar4 = _UNK_014cb661;
      uVar3 = _UNK_014cb65d;
      uVar2 = _UNK_014cb659;
      *puStack_3e0 = _DAT_014cb655;
      puStack_3e0[1] = uVar2;
      puStack_3e0[2] = uVar3;
      puStack_3e0[3] = uVar4;
      puStack_3e0[0xc] = 0x2e617461;
      *(undefined1 *)(puStack_3e0 + 0xd) = 0;
      uStack_368 = 0;
      func_0x060aeeb0(uVar11,0,2,auStack_4b8,auStack_3f8,1);
      if ((ulong)uStack_368 != 0xffffffff) {
        (**(code **)(&UNK_0f031718 + (ulong)uStack_368 * 8))(&uStack_468,&uStack_3f0);
      }
      auVar6 = auStack_4b8;
      uStack_368 = 0xffffffff;
      puVar9 = puStack_4b0;
      if (auStack_4b8 != (undefined1  [8])0x0) {
        for (; auVar6 != (undefined1  [8])puVar9; puVar9 = puVar9 + -5) {
          if ((puVar9[-4] & 1) != 0) {
            func_0x0412a280(puVar9[-2],puVar9[-4] & 0xfffffffffffffffe);
          }
        }
        puStack_4b0 = (ulong *)auVar6;
        func_0x0412a280(auStack_4b8,(long)puStack_4a8 - (long)auStack_4b8);
      }
      if ((uStack_490 & 1) != 0) {
        func_0x0412a280(uStack_480,uStack_490 & 0xfffffffffffffffe);
      }
      goto LAB_0642e919;
    }
    if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
      param_2 = param_2 + 0x11;
    }
    else {
      param_2 = *(long *)(param_2 + 0x20);
    }
    puVar9 = (ulong *)func_0x0eee2e90(param_2);
    unaff_R12 = (ulong *)auStack_438;
    unaff_R14 = plVar8;
    if ((ulong *)0xfffffffffffffff7 < puVar9) goto LAB_0642e9c6;
    if (puVar9 < (ulong *)0x17) {
      auStack_4b8[0] = (char)puVar9 * '\x02';
      puVar10 = (ulong *)(auStack_4b8 + 1);
      if (puVar9 != (ulong *)0x0) goto LAB_0642e7a8;
    }
    else {
      uVar12 = 0x1a;
      if (((ulong)puVar9 | 7) != 0x17) {
        uVar12 = ((ulong)puVar9 | 7) + 1;
      }
      puVar10 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
      if (puVar10 == (ulong *)0x0) {
        func_0x0eec74c0(uVar12,0);
      }
      auStack_4b8 = (undefined1  [8])(uVar12 | 1);
      puStack_4b0 = puVar9;
      puStack_4a8 = puVar10;
LAB_0642e7a8:
      func_0x0eee2ee0(puVar10,param_2,puVar9);
    }
    *(byte *)((long)puVar10 + (long)puVar9) = 0;
    if (bStack_1e0 != 0) {
      if ((uStack_338 & 1) == 0) {
        uStack_488 = uStack_328;
        uStack_498 = CONCAT44(uStack_334,uStack_338);
        uStack_490 = CONCAT44(uStack_32c,uStack_330);
      }
      else {
        func_0x0412e5e0(&uStack_498,uStack_328,CONCAT44(uStack_32c,uStack_330));
      }
      uStack_480 = CONCAT71(uStack_480._1_7_,1);
      if ((bStack_1e0 & 1) != 0) {
        if ((uStack_2d8 & 1) == 0) {
          ppuStack_458 = ppuStack_2c8;
          uStack_468 = (undefined1 *)CONCAT44(uStack_2d4,uStack_2d8);
          uStack_460 = (ulong **)CONCAT44(uStack_2cc,uStack_2d0);
        }
        else {
          func_0x0412e5e0(&uStack_468,ppuStack_2c8,CONCAT44(uStack_2cc,uStack_2d0));
        }
        cStack_450 = '\x01';
        (**(code **)(*plVar8 + 0x10))
                  (&bStack_418,plVar8,auStack_1d8,auStack_4b8,&uStack_498,&uStack_468);
        if ((cStack_400 == '\x01') && ((bStack_418 & 1) != 0)) {
          func_0x0412a280(uStack_408,CONCAT71(uStack_417,bStack_418) & 0xfffffffffffffffe);
        }
        if ((cStack_450 == '\x01') && (((ulong)uStack_468 & 1) != 0)) {
          func_0x0412a280(ppuStack_458,(ulong)uStack_468 & 0xfffffffffffffffe);
        }
        if (((char)uStack_480 == '\x01') && ((uStack_498 & 1) != 0)) {
          func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_4b8 & 1) != 0) {
          func_0x0412a280(puStack_4a8,(ulong)auStack_4b8 & 0xfffffffffffffffe);
        }
        func_0x06430f80(param_1);
LAB_0642e919:
        if (bStack_1e0 == 1) {
          func_0x05ed96b0(auStack_360);
        }
        if (cStack_38 == '\x01') {
          func_0x05d645d0(auStack_1d8);
        }
        return;
      }
      goto LAB_0642e9d0;
    }
  }
  func_0x048a88b0();
LAB_0642e9d0:
  uVar11 = func_0x048a88b0();
  if ((*puVar9 & 1) != 0) {
    func_0x0412a280(unaff_R14[3],unaff_R14[1] & 0xfffffffffffffffe);
  }
  func_0x04ab5520(&uStack_468);
  puStack_4b0 = (ulong *)unaff_R14;
  func_0x04ab5580(&puStack_428);
  if ((uStack_490 & 1) != 0) {
    func_0x0412a280(uStack_480,uStack_490 & 0xfffffffffffffffe);
  }
  if (bStack_1e0 == 1) goto LAB_0642eadd;
  while (cStack_38 != '\x01') {
    func_0x0eee2d70(uVar11);
LAB_0642eadd:
    func_0x05ed96b0(auStack_360);
  }
  func_0x05d645d0(auStack_1d8);
  func_0x0eee2d70(uVar11);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- referenced strings ----
 * 0x14cb655  Cannot duplicate a structure from invalid meta data.
 * 0x14cb665   a structure from invalid meta data.
 * 0x14cb675  m invalid meta data.
 */
