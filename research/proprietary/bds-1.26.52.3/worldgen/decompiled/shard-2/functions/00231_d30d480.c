/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd40d480 (ELF vaddr 0xd30d480)
 * Label: callee-of:0x4de9260
 * Body:  [[0d40d480, 0d40e3e1] [0d40e3f0, 0d410083] [0d410090, 0d4105c9]]
 * Ghidra: FUN_0d40d480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d40d480(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined *puVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  long lVar23;
  ulong uVar24;
  undefined8 **ppuVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined8 *puStack_7c8;
  byte bStack_7c0;
  undefined4 uStack_7bf;
  undefined1 uStack_7bb;
  undefined2 uStack_7ba;
  undefined4 uStack_7b8;
  undefined1 uStack_7b4;
  undefined1 uStack_7b3;
  undefined2 uStack_7b2;
  undefined1 uStack_7b0;
  undefined1 uStack_7af;
  undefined1 uStack_7ae;
  undefined5 uStack_7ad;
  undefined8 uStack_7a8;
  long *plStack_788;
  long *plStack_780;
  undefined1 uStack_771;
  uint *puStack_770;
  uint *puStack_768;
  long *plStack_760;
  undefined8 *puStack_758;
  byte bStack_750;
  undefined4 uStack_74f;
  undefined2 uStack_74b;
  undefined1 uStack_749;
  undefined1 uStack_748;
  undefined4 uStack_747;
  undefined1 uStack_743;
  undefined2 uStack_742;
  undefined1 uStack_740;
  undefined5 uStack_73f;
  undefined2 uStack_73a;
  undefined8 uStack_738;
  undefined8 *puStack_718;
  undefined8 uStack_710;
  undefined8 uStack_6d0;
  byte bStack_6c8;
  undefined4 uStack_6c7;
  undefined1 uStack_6c3;
  undefined2 uStack_6c2;
  undefined1 uStack_6c0;
  undefined4 uStack_6bf;
  undefined3 uStack_6bb;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_688;
  undefined8 uStack_680;
  undefined4 *puStack_678;
  ulong uStack_670;
  undefined8 uStack_668;
  undefined4 *puStack_660;
  ulong auStack_658 [4];
  ulong uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  ulong uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  ulong uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  ulong uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  ulong uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  ulong uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  ulong uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  uint *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  plStack_760 = (long *)param_2;
  if (_DAT_0f71ffb8 == 4) {
    puVar26 = (undefined8 *)0xf71ff80;
LAB_0d40d520:
    uStack_6a8 = *puVar26;
    uStack_6a0 = 0;
    uVar24 = puVar26[1];
    if ((uVar24 & 0x80000000000000) != 0) {
      lVar16 = *(long *)((uVar24 & 0xff00ffffffffffff) - 8);
      lVar23 = lVar16 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar23,8);
      if (plVar10 == (long *)0x0 && lVar23 != 0) {
        func_0x0eec74c0(lVar23,8);
      }
      *plVar10 = lVar16;
      func_0x0eee2f00(plVar10 + 1,uVar24 & 0xff00ffffffffffff,lVar16);
      *(undefined1 *)((long)plVar10 + lVar16 + 8) = 0;
      uVar24 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_698 = 0;
    uVar18 = puVar26[2];
    uStack_6a0 = uVar24;
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar23 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar16 = lVar23 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
      if (lVar16 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar16,8);
      }
      *plVar10 = lVar23;
      func_0x0eee2f00(plVar10 + 1,uVar18 & 0xff00ffffffffffff,lVar23);
      *(undefined1 *)((long)plVar10 + lVar23 + 8) = 0;
      uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
  else {
    if (_DAT_0f71fff8 == 4) {
      puVar26 = (undefined8 *)0xf71ffc0;
      goto LAB_0d40d520;
    }
    if (_DAT_0f720038 == 4) {
      puVar26 = (undefined8 *)0xf720000;
      goto LAB_0d40d520;
    }
    if (_DAT_0f720078 == 4) {
      puVar26 = (undefined8 *)0xf720040;
      goto LAB_0d40d520;
    }
    if (_DAT_0f7200b8 == 4) {
      puVar26 = (undefined8 *)0xf720080;
      goto LAB_0d40d520;
    }
    if (_DAT_0f7200f8 == 4) {
      puVar26 = (undefined8 *)0xf7200c0;
      goto LAB_0d40d520;
    }
    uStack_6a8 = 0;
    uStack_6a0 = 0;
    uStack_698 = 0;
    uVar18 = uStack_698;
  }
  uStack_698 = uVar18;
  cVar9 = func_0x04fa7a10(plStack_760,&uStack_6a8);
  if (cVar9 == '\0') {
    uStack_6bb = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6d0 = 0xae8ea2e4ee1dc1c3;
    bStack_6c8 = 0x18;
    uStack_6c7 = 0x63616c70;
    uStack_6c3 = 0x65;
    uStack_6c2 = 0x5f73;
    uStack_6c0 = 0x62;
    uStack_6bf = 0x6b636f6c;
    uStack_b0 = 0;
    bStack_750 = 0;
    uStack_74f = 0;
    uStack_74b = 0;
    uStack_749 = 0;
    lStack_b8 = 0;
    puStack_758 = (undefined8 *)&UNK_0f46fcd8;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x200,0);
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0f469c38;
    puStack_718 = (undefined8 *)0x0;
    uStack_710 = 0;
    if (puStack_758 == (undefined8 *)0x0) {
      puStack_718 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_758)(&puStack_758,&puStack_718);
      puStack_718 = puStack_758;
    }
    puStack_758 = (undefined8 *)0x0;
    puStack_7c8 = (undefined8 *)0x0;
    bStack_7c0 = 0;
    uStack_7bf = 0;
    uStack_7bb = 0;
    uStack_7ba = 0;
    plVar10[4] = (long)&UNK_0f2ccd78;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    func_0x04aa75f0(plVar10 + 0xe,&uStack_771,&UNK_01254d89);
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plStack_780 = plVar10 + 0x11;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0xffffffff;
    plVar10[0x26] = 0;
    plVar10[0x27] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[4] = (long)&UNK_0f469d40;
    plVar10[0x2e] = 0;
    plVar10[0x2f] = 0;
    *(undefined1 *)(plVar10 + 0x36) = 0;
    if ((undefined8 **)(plVar10 + 0x2e) != &puStack_7c8) {
      puStack_7c8 = (undefined8 *)0x0;
      plVar10[0x2e] = 0;
    }
    pbVar17 = (byte *)(plVar10 + 0x12);
    if (plStack_780 == (long *)&DAT_0f552108) {
LAB_0d40da0c:
      plVar10[0x11] = _DAT_0f552108;
      plVar10[0x15] = 0;
    }
    else {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar10[0x14] = _DAT_0f552120;
        lVar16 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        *(ulong *)pbVar17 = CONCAT44(uRam000000000f552114,_DAT_0f552110);
        plVar10[0x13] = lVar16;
        goto LAB_0d40da0c;
      }
      func_0x04885070(pbVar17,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      plVar10[0x11] = _DAT_0f552108;
      plVar10[0x15] = 0;
      if (puStack_7c8 != (undefined8 *)0x0) {
        (*(code *)puStack_7c8[1])(&puStack_7c8);
      }
    }
    plVar10[4] = (long)&UNK_0f469c88;
    plVar10[0x38] = 0;
    plVar10[0x39] = 0;
    if (puStack_718 == (undefined8 *)0x0) {
      puVar26 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_718)(&puStack_718,plVar10 + 0x38);
      puVar26 = puStack_718;
    }
    plVar14 = plVar10 + 1;
    plVar10[0x38] = (long)puVar26;
    if (puStack_758 != (undefined8 *)0x0) {
      (*(code *)puStack_758[1])(&puStack_758);
    }
    LOCK();
    *plVar14 = *plVar14 + 1;
    UNLOCK();
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    puVar26[1] = 0;
    puVar26[2] = 0;
    *puVar26 = &UNK_0f469e20;
    puVar26[6] = 0;
    puVar26[7] = 0;
    puVar26[4] = &UNK_0f469e70;
    puVar26[0xe] = plVar10 + 4;
    puVar26[0xf] = plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    bStack_7c0 = (byte)puVar26;
    uStack_7bf = (undefined4)((ulong)puVar26 >> 8);
    uStack_7bb = (undefined1)((ulong)puVar26 >> 0x28);
    uStack_7ba = (undefined2)((ulong)puVar26 >> 0x30);
    puStack_7c8 = puVar26 + 4;
    plStack_788 = plVar10 + 4;
    puStack_770 = (uint *)pbVar17;
    puVar11 = (undefined4 *)func_0x050577f0(param_1,&uStack_6d0,0);
    plVar12 = plStack_780;
    plVar13 = *(long **)(puVar11 + 0x24);
    if (plVar13 < *(long **)(puVar11 + 0x26)) {
      plVar13[2] = 0;
      plVar13[3] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      plVar13[4] = 0;
      if (plVar13 == plStack_780) {
LAB_0d40dce5:
        *plVar13 = *plStack_780;
        plVar13[5] = (long)(puVar26 + 4);
        plVar13[6] = (long)puVar26;
LAB_0d40df0b:
        LOCK();
        puVar26[1] = puVar26[1] + 1;
        UNLOCK();
      }
      else {
        if ((*puStack_770 & 1) == 0) {
          plVar13[3] = *(long *)((long)puStack_770 + 0x10);
          lVar16 = *(long *)((long)puStack_770 + 8);
          plVar13[1] = *(long *)puStack_770;
          plVar13[2] = lVar16;
          goto LAB_0d40dce5;
        }
        func_0x04885070(plVar13 + 1,plVar10[0x14],plVar10[0x13]);
        *plVar13 = *plVar12;
        puVar26 = (undefined8 *)
                  CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
        plVar13[5] = (long)puStack_7c8;
        plVar13[6] = CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
        if (puVar26 != (undefined8 *)0x0) goto LAB_0d40df0b;
      }
      plVar13 = plVar13 + 7;
      *(long **)(puVar11 + 0x24) = plVar13;
    }
    else {
      plVar13 = (long *)func_0x0505aef0(puVar11 + 0x22,plStack_780,&puStack_7c8);
    }
    *(long **)(puVar11 + 0x24) = plVar13;
    uVar5 = *puVar11;
    uVar6 = puVar11[1];
    uVar7 = puVar11[2];
    uVar8 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar13 = *plVar13 + 1;
      UNLOCK();
    }
    plVar13 = (long *)plVar10[0xf];
    *(undefined4 *)(plVar10 + 0xe) = uVar5;
    *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
    *(undefined4 *)(plVar10 + 0xf) = uVar7;
    *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0412c2d0(plVar13);
      }
    }
    *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar13 = (long *)CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0412c2d0(plVar13);
      }
    }
    LOCK();
    lVar16 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
      LOCK();
      lVar16 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar16 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
    }
    uStack_538 = 0;
    uStack_530 = 0;
    uStack_528 = 0;
    (**(code **)(*plStack_788 + 0x10))(plStack_788,&uStack_538);
    if ((uStack_538 & 1) != 0) {
      func_0x0412a280(uStack_528,uStack_538 & 0xfffffffffffffffe);
    }
    if (lStack_b8 != 0) {
      (**(code **)(lStack_b8 + 8))(&lStack_b8);
    }
    if ((bStack_6c8 & 1) != 0) {
      func_0x0412a280(uStack_6b8,
                      CONCAT26(uStack_6c2,CONCAT15(uStack_6c3,CONCAT41(uStack_6c7,bStack_6c8))) &
                      0xfffffffffffffffe);
    }
    uStack_7b3 = 0;
    uStack_7b2 = 0;
    uStack_7b0 = 0;
    uStack_7af = 0;
    uStack_7ae = 0;
    uStack_7ad = 0;
    uStack_7a8 = 0;
    bStack_7c0 = 0x18;
    uStack_7bf = 0x63616c70;
    uStack_7bb = 0x65;
    uStack_7ba = 0x5f73;
    uStack_7b8 = 0x636f6c62;
    uStack_7b4 = 0x6b;
    puStack_7c8 = (undefined8 *)0xae8ea2e4ee1dc1c3;
    lStack_f8 = 0;
    uStack_f0 = 0;
    lVar16 = func_0x0d4113a0(param_1,&puStack_7c8,&lStack_f8);
    if (lStack_f8 != 0) {
      (**(code **)(lStack_f8 + 8))(&lStack_f8);
    }
    if ((bStack_7c0 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0))),
                      CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0))) &
                      0xfffffffffffffffe);
    }
    uStack_4f0 = 0;
    puStack_4f8 = (undefined8 *)&UNK_0f4700e0;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x1c0,0);
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0f46fef8;
    puStack_7c8 = (undefined8 *)0x0;
    bStack_7c0 = 0;
    uStack_7bf = 0;
    uStack_7bb = 0;
    uStack_7ba = 0;
    if (puStack_4f8 == (undefined8 *)0x0) {
      puStack_7c8 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_4f8)(&puStack_4f8,&puStack_7c8);
      puStack_7c8 = puStack_4f8;
    }
    puStack_4f8 = (undefined8 *)0x0;
    plVar10[4] = (long)&UNK_0f2ccd78;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    func_0x04aa75f0(plVar10 + 0xe,&puStack_718,&UNK_01254d89);
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0xffffffff;
    plVar10[0x26] = 0;
    plVar10[0x27] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[4] = (long)&UNK_0f46ff48;
    ppuVar25 = (undefined8 **)(plVar10 + 0x2e);
    plVar10[0x2e] = 0;
    plVar10[0x2f] = 0;
    *(undefined1 *)(plVar10 + 0x36) = 0;
    if (ppuVar25 != &puStack_7c8) {
      if (puStack_7c8 == (undefined8 *)0x0) {
        puVar26 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_7c8)(&puStack_7c8,ppuVar25);
        puVar26 = puStack_7c8;
      }
      puStack_7c8 = (undefined8 *)0x0;
      *ppuVar25 = puVar26;
    }
    plVar14 = plVar10 + 4;
    puVar2 = (uint *)(plVar10 + 0x12);
    puStack_770 = (uint *)lVar16;
    if (plVar10 + 0x11 != (long *)&DAT_0f552108) {
      if ((*puVar2 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar10[0x14] = _DAT_0f552120;
          uVar7 = uRam000000000f55211c;
          uVar6 = _DAT_0f552118;
          uVar5 = uRam000000000f552114;
          *puVar2 = _DAT_0f552110;
          *(undefined4 *)((long)plVar10 + 0x94) = uVar5;
          *(undefined4 *)(plVar10 + 0x13) = uVar6;
          *(undefined4 *)((long)plVar10 + 0x9c) = uVar7;
        }
        else {
          func_0x04885070(puVar2,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar27 = (_DAT_0f552110 & 1) != 0;
        lVar16 = 0xf552111;
        if (bVar27) {
          lVar16 = _DAT_0f552120;
        }
        uVar18 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar27) {
          uVar18 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar2,lVar16,uVar18);
      }
    }
    plVar13 = plVar10 + 1;
    plVar10[0x11] = _DAT_0f552108;
    plVar10[0x15] = 0;
    puStack_500 = puVar2;
    if (puStack_7c8 != (undefined8 *)0x0) {
      (*(code *)puStack_7c8[1])(&puStack_7c8);
    }
    LOCK();
    *plVar13 = *plVar13 + 1;
    UNLOCK();
    plStack_788 = plVar10 + 0x11;
    puStack_768 = (uint *)plVar13;
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    puVar2 = puStack_770;
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    puVar26[1] = 0;
    puVar26[2] = 0;
    *puVar26 = &UNK_0f470040;
    puVar19 = puVar26 + 4;
    puVar26[6] = 0;
    puVar26[7] = 0;
    puVar26[4] = &UNK_0f470090;
    puVar26[0xe] = plVar14;
    puVar26[0xf] = plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    bStack_7c0 = (byte)puVar26;
    uStack_7bf = (undefined4)((ulong)puVar26 >> 8);
    uStack_7bb = (undefined1)((ulong)puVar26 >> 0x28);
    uStack_7ba = (undefined2)((ulong)puVar26 >> 0x30);
    puVar4 = *(undefined8 **)((long)puVar2 + 0xc0);
    for (puVar20 = *(undefined8 **)((long)puVar2 + 0xb8); puStack_7c8 = puVar19,
        plStack_780 = plVar14, puVar20 != puVar4; puVar20 = puVar20 + 0x15) {
      if ((puVar20[0xf] == 0) && (puVar20[0x10] == -1)) {
        plVar14 = (long *)puVar20[0x12];
        if (plVar14 < (long *)puVar20[0x13]) goto LAB_0d40e421;
        goto LAB_0d40e52b;
      }
    }
    if (puVar4 < *(undefined8 **)((long)puVar2 + 200)) {
      func_0x0d48f820(puVar4);
      *(undefined8 **)((long)puVar2 + 0xc0) = puVar4 + 0x15;
      *(undefined8 **)((long)puVar2 + 0xc0) = puVar4 + 0x15;
      pbVar17 = (byte *)*puVar4;
      if ((*pbVar17 & 1) != 0) goto LAB_0d40e49e;
LAB_0d40e4d2:
      *pbVar17 = 0x26;
      pbVar17 = pbVar17 + 1;
    }
    else {
      lVar16 = func_0x0d48f590((long)puVar2 + 0xb8);
      *(long *)((long)puVar2 + 0xc0) = lVar16;
      pbVar17 = *(byte **)(lVar16 + -0xa8);
      if ((*pbVar17 & 1) == 0) goto LAB_0d40e4d2;
LAB_0d40e49e:
      pbVar17[8] = 0x13;
      pbVar17[9] = 0;
      pbVar17[10] = 0;
      pbVar17[0xb] = 0;
      pbVar17[0xc] = 0;
      pbVar17[0xd] = 0;
      pbVar17[0xe] = 0;
      pbVar17[0xf] = 0;
      pbVar17 = *(byte **)(pbVar17 + 0x10);
    }
    uVar7 = _UNK_01494d69;
    uVar6 = _UNK_01494d65;
    uVar5 = _UNK_01494d61;
    *(undefined4 *)pbVar17 = _DAT_01494d5d;
    *(undefined4 *)(pbVar17 + 4) = uVar5;
    *(undefined4 *)(pbVar17 + 8) = uVar6;
    *(undefined4 *)(pbVar17 + 0xc) = uVar7;
    pbVar17[0xf] = 0x65;
    pbVar17[0x10] = 0x6e;
    pbVar17[0x11] = 0x74;
    pbVar17[0x12] = 0x3e;
    pbVar17[0x13] = 0;
    lVar16 = *(long *)((long)puVar2 + 0xc0);
    puVar20 = (undefined8 *)(lVar16 + -0xa8);
    *(undefined1 *)(lVar16 + -7) = *(undefined1 *)((long)puVar2 + 0x60);
    *(undefined8 *)(lVar16 + -0x30) = 0;
    *(undefined8 *)(lVar16 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar16 + -8) = 0;
    plVar14 = *(long **)(lVar16 + -0x18);
    if (plVar14 < *(long **)(lVar16 + -0x10)) {
LAB_0d40e421:
      plVar14[2] = 0;
      plVar14[3] = 0;
      *plVar14 = 0;
      plVar14[1] = 0;
      plVar14[4] = 0;
      if (plVar14 != plStack_788) {
        if ((*puStack_500 & 1) == 0) {
          plVar14[3] = *(long *)(puStack_500 + 4);
          lVar16 = *(long *)(puStack_500 + 2);
          plVar14[1] = *(long *)puStack_500;
          plVar14[2] = lVar16;
        }
        else {
          func_0x04885070(plVar14 + 1,plVar10[0x14],plVar10[0x13]);
        }
      }
      *plVar14 = *plStack_788;
      plVar14[5] = (long)puVar19;
      plVar14[6] = (long)puVar26;
      LOCK();
      puVar26[1] = puVar26[1] + 1;
      UNLOCK();
      plVar14 = plVar14 + 7;
      puVar20[0x12] = plVar14;
    }
    else {
LAB_0d40e52b:
      plVar14 = (long *)func_0x0d48fb00(puVar20 + 0x11,plStack_788,&puStack_7c8);
    }
    puVar20[0x12] = plVar14;
    uVar5 = *(undefined4 *)puVar20;
    uVar6 = *(undefined4 *)((long)puVar20 + 4);
    uVar7 = *(undefined4 *)(puVar20 + 1);
    uVar8 = *(undefined4 *)((long)puVar20 + 0xc);
    if (puVar20[1] != 0) {
      LOCK();
      plVar14 = (long *)(puVar20[1] + 8);
      *plVar14 = *plVar14 + 1;
      UNLOCK();
    }
    plVar14 = (long *)plVar10[0xf];
    *(undefined4 *)(plVar10 + 0xe) = uVar5;
    *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
    *(undefined4 *)(plVar10 + 0xf) = uVar7;
    *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar13 = plVar14 + 1;
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        FUN_0412c2d0(plVar14);
      }
    }
    *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
    plVar14 = (long *)CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar13 = plVar14 + 1;
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        FUN_0412c2d0(plVar14);
      }
    }
    puVar2 = puStack_768;
    LOCK();
    lVar16 = *(long *)puStack_768;
    *(long *)puStack_768 = *(long *)puStack_768 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
      LOCK();
      lVar16 = *(long *)puVar2;
      *(long *)puVar2 = *(long *)puVar2 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar16 = *(long *)puStack_768;
      *(long *)puStack_768 = *(long *)puStack_768 + -1;
      UNLOCK();
    }
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
    }
    if (puStack_4f8 != (undefined8 *)0x0) {
      (*(code *)puStack_4f8[1])(&puStack_4f8);
    }
    uStack_748 = 0;
    uStack_747 = 0;
    uStack_743 = 0;
    uStack_742 = 0;
    uStack_740 = 0;
    uStack_73f = 0;
    uStack_73a = 0;
    uStack_738 = 0;
    bStack_750 = 0xc;
    uStack_74f = 0x67696577;
    uStack_74b = 0x7468;
    uStack_749 = 0;
    puStack_758 = (undefined8 *)0x6820dee21e3095f9;
    uStack_130 = 0;
    uStack_710 = 0;
    lStack_138 = 0;
    puStack_718 = (undefined8 *)&UNK_0f4700f8;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x1c0,0);
    }
    puStack_7c8 = puStack_718;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0f469ed0;
    bStack_7c0 = 0;
    uStack_7bf = 0;
    uStack_7bb = 0;
    uStack_7ba = 0;
    puStack_718 = (undefined8 *)0x0;
    plVar10[4] = (long)&UNK_0f2ccd78;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    func_0x04aa75f0(plVar10 + 0xe,&uStack_6d0,&UNK_01254d89);
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0xffffffff;
    plVar10[0x26] = 0;
    plVar10[0x27] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[4] = (long)&UNK_0f469f20;
    plVar10[0x2e] = _DAT_014eae60;
    *(undefined1 *)(plVar10 + 0x2f) = 1;
    plVar10[0x30] = 0;
    plVar10[0x31] = 0;
    if (puStack_7c8 == (undefined8 *)0x0) {
      puVar26 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_7c8)(&puStack_7c8,plVar10 + 0x30);
      puVar26 = puStack_7c8;
    }
    puStack_7c8 = (undefined8 *)0x0;
    plVar10[0x30] = (long)puVar26;
    puVar2 = (uint *)(plVar10 + 0x12);
    if (plVar10 + 0x11 == (long *)&DAT_0f552018) {
      plVar10[0x15] = 0;
    }
    else {
      if ((*puVar2 & 1) == 0) {
        if ((_DAT_0f552020 & 1) == 0) {
          plVar10[0x14] = _DAT_0f552030;
          uVar7 = uRam000000000f55202c;
          uVar6 = _DAT_0f552028;
          uVar5 = uRam000000000f552024;
          *puVar2 = _DAT_0f552020;
          *(undefined4 *)((long)plVar10 + 0x94) = uVar5;
          *(undefined4 *)(plVar10 + 0x13) = uVar6;
          *(undefined4 *)((long)plVar10 + 0x9c) = uVar7;
        }
        else {
          func_0x04885070(puVar2,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
        }
      }
      else {
        bVar27 = (_DAT_0f552020 & 1) != 0;
        lVar16 = 0xf552021;
        if (bVar27) {
          lVar16 = _DAT_0f552030;
        }
        uVar18 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
        if (bVar27) {
          uVar18 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
        }
        func_0x04885120(puVar2,lVar16,uVar18);
      }
      plVar10[0x11] = _DAT_0f552018;
      plVar10[0x15] = 0;
      if (puStack_7c8 != (undefined8 *)0x0) {
        (*(code *)puStack_7c8[1])(&puStack_7c8);
      }
    }
    plVar14 = plVar10 + 1;
    puStack_768 = puVar2;
    if (puStack_718 != (undefined8 *)0x0) {
      (*(code *)puStack_718[1])(&puStack_718);
    }
    LOCK();
    *plVar14 = *plVar14 + 1;
    UNLOCK();
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    puVar26[1] = 0;
    puVar26[2] = 0;
    *puVar26 = &UNK_0f46a000;
    puVar26[6] = 0;
    puVar26[7] = 0;
    puVar26[4] = &UNK_0f46a050;
    puVar26[0xe] = plVar10 + 4;
    puVar26[0xf] = plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    bStack_7c0 = (byte)puVar26;
    uStack_7bf = (undefined4)((ulong)puVar26 >> 8);
    uStack_7bb = (undefined1)((ulong)puVar26 >> 0x28);
    uStack_7ba = (undefined2)((ulong)puVar26 >> 0x30);
    puStack_7c8 = puVar26 + 4;
    plStack_788 = plVar10 + 0x11;
    puStack_770 = (uint *)(plVar10 + 4);
    puVar11 = (undefined4 *)func_0x0d4866f0(plStack_780,&puStack_758);
    plVar13 = *(long **)(puVar11 + 0x24);
    if (plVar13 < *(long **)(puVar11 + 0x26)) {
      plVar13[2] = 0;
      plVar13[3] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      plVar13[4] = 0;
      if (plVar13 != plStack_788) {
        puVar2 = (uint *)(plVar13 + 1);
        if ((*puStack_768 & 1) == 0) {
          plVar13[3] = *(long *)(puStack_768 + 4);
          lVar16 = *(long *)(puStack_768 + 2);
          *(undefined8 *)puVar2 = *(undefined8 *)puStack_768;
          plVar13[2] = lVar16;
        }
        else {
          puStack_768 = puVar2;
          func_0x04885070(puVar2,plVar10[0x14],plVar10[0x13]);
        }
      }
      *plVar13 = *plStack_788;
      plVar13[5] = (long)(puVar26 + 4);
      plVar13[6] = (long)puVar26;
      LOCK();
      puVar26[1] = puVar26[1] + 1;
      UNLOCK();
      plVar13 = plVar13 + 7;
      *(long **)(puVar11 + 0x24) = plVar13;
    }
    else {
      plVar13 = (long *)func_0x0d488610(puVar11 + 0x22,plStack_788,&puStack_7c8);
    }
    *(long **)(puVar11 + 0x24) = plVar13;
    uVar5 = *puVar11;
    uVar6 = puVar11[1];
    uVar7 = puVar11[2];
    uVar8 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar13 = *plVar13 + 1;
      UNLOCK();
    }
    plVar13 = (long *)plVar10[0xf];
    *(undefined4 *)(plVar10 + 0xe) = uVar5;
    *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
    *(undefined4 *)(plVar10 + 0xf) = uVar7;
    *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0412c2d0(plVar13);
      }
    }
    *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar13 = (long *)CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0412c2d0(plVar13);
      }
    }
    LOCK();
    lVar16 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
      LOCK();
      lVar16 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar16 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
    }
    puStack_660 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
    if (puStack_660 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x78,0);
    }
    uVar21 = _UNK_012696d8;
    uStack_670 = 0x79;
    uStack_668 = 0x77;
    *(undefined8 *)(puStack_660 + 0x18) = _DAT_012696d0;
    *(undefined8 *)(puStack_660 + 0x1a) = uVar21;
    uVar21 = _UNK_012696c8;
    *(undefined8 *)(puStack_660 + 0x14) = _DAT_012696c0;
    *(undefined8 *)(puStack_660 + 0x16) = uVar21;
    uVar21 = _UNK_012696b8;
    *(undefined8 *)(puStack_660 + 0x10) = _DAT_012696b0;
    *(undefined8 *)(puStack_660 + 0x12) = uVar21;
    uVar21 = _UNK_012696a8;
    *(undefined8 *)(puStack_660 + 0xc) = _DAT_012696a0;
    *(undefined8 *)(puStack_660 + 0xe) = uVar21;
    uVar21 = _UNK_01269698;
    *(undefined8 *)(puStack_660 + 8) = _DAT_01269690;
    *(undefined8 *)(puStack_660 + 10) = uVar21;
    uVar21 = _UNK_01269688;
    *(undefined8 *)(puStack_660 + 4) = _DAT_01269680;
    *(undefined8 *)(puStack_660 + 6) = uVar21;
    uVar7 = _UNK_0126967c;
    uVar6 = _UNK_01269678;
    uVar5 = _UNK_01269674;
    *puStack_660 = _DAT_01269670;
    puStack_660[1] = uVar5;
    puStack_660[2] = uVar6;
    puStack_660[3] = uVar7;
    *(undefined8 *)((long)puStack_660 + 0x6f) = 0x2e746e656d656361;
    *(undefined1 *)((long)puStack_660 + 0x77) = 0;
    (**(code **)(*(long *)puStack_770 + 0x10))(puStack_770,&uStack_670);
    if ((uStack_670 & 1) != 0) {
      func_0x0412a280(puStack_660,uStack_670 & 0xfffffffffffffffe);
    }
    if (lStack_138 != 0) {
      (**(code **)(lStack_138 + 8))(&lStack_138);
    }
    if ((bStack_750 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_73a,CONCAT51(uStack_73f,uStack_740)),
                      CONCAT17(uStack_749,CONCAT25(uStack_74b,CONCAT41(uStack_74f,bStack_750))) &
                      0xfffffffffffffffe);
    }
    uStack_6c2 = 0;
    uStack_6c0 = 0;
    uStack_6bf = 0;
    uStack_6bb = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    bStack_6c8 = 10;
    uStack_6c7 = 0x636f6c62;
    uStack_6c3 = 0x6b;
    uStack_6d0 = 0xdc2c4fbe61b86290;
    uStack_170 = 0;
    bStack_750 = 0;
    uStack_74f = 0;
    uStack_74b = 0;
    uStack_749 = 0;
    lStack_178 = 0;
    puStack_758 = (undefined8 *)&UNK_0f470110;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x200,0);
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0f46a108;
    puStack_718 = (undefined8 *)0x0;
    uStack_710 = 0;
    if (puStack_758 == (undefined8 *)0x0) {
      puStack_718 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_758)(&puStack_758,&puStack_718);
      puStack_718 = puStack_758;
    }
    puStack_758 = (undefined8 *)0x0;
    puStack_7c8 = (undefined8 *)0x0;
    bStack_7c0 = 0;
    uStack_7bf = 0;
    uStack_7bb = 0;
    uStack_7ba = 0;
    plVar10[4] = (long)&UNK_0f2ccd78;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    func_0x04aa75f0(plVar10 + 0xe,&uStack_771,&UNK_01254d89);
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plStack_788 = plVar10 + 0x11;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0xffffffff;
    plVar10[0x26] = 0;
    plVar10[0x27] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[4] = (long)&UNK_0f46a210;
    plVar10[0x2e] = 0;
    plVar10[0x2f] = 0;
    *(undefined1 *)(plVar10 + 0x36) = 0;
    if ((undefined8 **)(plVar10 + 0x2e) != &puStack_7c8) {
      puStack_7c8 = (undefined8 *)0x0;
      plVar10[0x2e] = 0;
    }
    pbVar17 = (byte *)(plVar10 + 0x12);
    if (plStack_788 == (long *)&DAT_0f552108) {
LAB_0d40ee55:
      plVar10[0x11] = _DAT_0f552108;
      plVar10[0x15] = 0;
    }
    else {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar10[0x14] = _DAT_0f552120;
        lVar16 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        *(long *)pbVar17 = CONCAT44(uRam000000000f552114,_DAT_0f552110);
        plVar10[0x13] = lVar16;
        goto LAB_0d40ee55;
      }
      func_0x04885070(pbVar17,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      plVar10[0x11] = _DAT_0f552108;
      plVar10[0x15] = 0;
      if (puStack_7c8 != (undefined8 *)0x0) {
        (*(code *)puStack_7c8[1])(&puStack_7c8);
      }
    }
    plVar10[4] = (long)&UNK_0f46a158;
    plVar10[0x38] = 0;
    plVar10[0x39] = 0;
    puStack_768 = (uint *)pbVar17;
    if (puStack_718 == (undefined8 *)0x0) {
      puVar26 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_718)(&puStack_718,plVar10 + 0x38);
      puVar26 = puStack_718;
    }
    plVar14 = plVar10 + 1;
    plVar10[0x38] = (long)puVar26;
    if (puStack_758 != (undefined8 *)0x0) {
      (*(code *)puStack_758[1])(&puStack_758);
    }
    LOCK();
    *plVar14 = *plVar14 + 1;
    UNLOCK();
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    puVar26[1] = 0;
    puVar26[2] = 0;
    *puVar26 = &UNK_0f46a2c0;
    puVar26[6] = 0;
    puVar26[7] = 0;
    puVar26[4] = &UNK_0f46a310;
    puVar26[0xe] = plVar10 + 4;
    puVar26[0xf] = plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    bStack_7c0 = (byte)puVar26;
    uStack_7bf = (undefined4)((ulong)puVar26 >> 8);
    uStack_7bb = (undefined1)((ulong)puVar26 >> 0x28);
    uStack_7ba = (undefined2)((ulong)puVar26 >> 0x30);
    puStack_7c8 = puVar26 + 4;
    puStack_770 = (uint *)(plVar10 + 4);
    puVar11 = (undefined4 *)func_0x0d4866f0(plStack_780,&uStack_6d0);
    plVar13 = *(long **)(puVar11 + 0x24);
    if (plVar13 < *(long **)(puVar11 + 0x26)) {
      plVar13[2] = 0;
      plVar13[3] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      plVar13[4] = 0;
      if (plVar13 != plStack_788) {
        plVar12 = plVar13 + 1;
        if ((*puStack_768 & 1) == 0) {
          plVar13[3] = *(long *)((long)puStack_768 + 0x10);
          lVar16 = *(long *)((long)puStack_768 + 8);
          *plVar12 = *(long *)puStack_768;
          plVar13[2] = lVar16;
        }
        else {
          plStack_780 = plVar12;
          func_0x04885070(plVar12,plVar10[0x14],plVar10[0x13]);
        }
      }
      *plVar13 = *plStack_788;
      plVar13[5] = (long)(puVar26 + 4);
      plVar13[6] = (long)puVar26;
      LOCK();
      puVar26[1] = puVar26[1] + 1;
      UNLOCK();
      plVar13 = plVar13 + 7;
      *(long **)(puVar11 + 0x24) = plVar13;
    }
    else {
      plVar13 = (long *)func_0x0d488610(puVar11 + 0x22,plStack_788,&puStack_7c8);
    }
    *(long **)(puVar11 + 0x24) = plVar13;
    uVar5 = *puVar11;
    uVar6 = puVar11[1];
    uVar7 = puVar11[2];
    uVar8 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar13 = *plVar13 + 1;
      UNLOCK();
    }
    plVar13 = (long *)plVar10[0xf];
    *(undefined4 *)(plVar10 + 0xe) = uVar5;
    *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
    *(undefined4 *)(plVar10 + 0xf) = uVar7;
    *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0412c2d0(plVar13);
      }
    }
    *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar13 = (long *)CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0412c2d0(plVar13);
      }
    }
    LOCK();
    lVar16 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
      LOCK();
      lVar16 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar16 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
    }
    puStack_678 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    plVar10 = plStack_760;
    if (puStack_678 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar21 = _UNK_012009da;
    uStack_688 = 0x29;
    uStack_680 = 0x24;
    *(undefined8 *)(puStack_678 + 4) = _DAT_012009d2;
    *(undefined8 *)(puStack_678 + 6) = uVar21;
    uVar7 = _UNK_012009ce;
    uVar6 = _UNK_012009ca;
    uVar5 = _UNK_012009c6;
    *puStack_678 = _DAT_012009c2;
    puStack_678[1] = uVar5;
    puStack_678[2] = uVar6;
    puStack_678[3] = uVar7;
    puStack_678[8] = 0x2e646563;
    *(undefined1 *)(puStack_678 + 9) = 0;
    (**(code **)(*(long *)puStack_770 + 0x10))(puStack_770,&uStack_688);
    if ((uStack_688 & 1) != 0) {
      func_0x0412a280(puStack_678,uStack_688 & 0xfffffffffffffffe);
    }
    if (lStack_178 != 0) {
      (**(code **)(lStack_178 + 8))(&lStack_178);
    }
    if ((bStack_6c8 & 1) != 0) {
      uVar18 = CONCAT26(uStack_6c2,CONCAT15(uStack_6c3,CONCAT41(uStack_6c7,bStack_6c8)));
      uVar21 = uStack_6b8;
      goto LAB_0d40f1c3;
    }
  }
  else {
    uStack_743 = 0;
    uStack_742 = 0;
    uStack_740 = 0;
    uStack_73f = 0;
    uStack_73a = 0;
    uStack_738 = 0;
    puStack_758 = (undefined8 *)0xae8ea2e4ee1dc1c3;
    bStack_750 = 0x18;
    uStack_74f = 0x63616c70;
    uStack_74b = 0x7365;
    uStack_749 = 0x5f;
    uStack_748 = 0x62;
    uStack_747 = 0x6b636f6c;
    uStack_70 = 0;
    uStack_710 = 0;
    lStack_78 = 0;
    puStack_718 = (undefined8 *)&UNK_0f46fcc0;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x1b0,0);
    }
    puStack_7c8 = puStack_718;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0f469a58;
    bStack_7c0 = 0;
    uStack_7bf = 0;
    uStack_7bb = 0;
    uStack_7ba = 0;
    puStack_718 = (undefined8 *)0x0;
    plVar10[4] = (long)&UNK_0f2ccd78;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    func_0x04aa75f0(plVar10 + 0xe,&uStack_6d0,&UNK_01254d89);
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0xffffffff;
    plVar10[0x26] = 0;
    plVar10[0x27] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[4] = (long)&UNK_0f469aa8;
    plVar10[0x2e] = 0;
    plVar10[0x2f] = 0;
    if (puStack_7c8 == (undefined8 *)0x0) {
      puVar26 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_7c8)(&puStack_7c8,plVar10 + 0x2e);
      puVar26 = puStack_7c8;
    }
    plVar14 = plVar10 + 1;
    plVar10[0x2e] = (long)puVar26;
    if (puStack_718 != (undefined8 *)0x0) {
      (*(code *)puStack_718[1])(&puStack_718);
    }
    LOCK();
    *plVar14 = *plVar14 + 1;
    UNLOCK();
    plStack_780 = plVar14;
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    plVar14 = plVar10 + 4;
    puVar26[1] = 0;
    puVar26[2] = 0;
    *puVar26 = &UNK_0f469b88;
    puVar26[6] = 0;
    puVar26[7] = 0;
    puVar26[4] = &UNK_0f469bd8;
    puVar26[0xe] = plVar14;
    puVar26[0xf] = plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    bStack_7c0 = (byte)puVar26;
    uStack_7bf = (undefined4)((ulong)puVar26 >> 8);
    uStack_7bb = (undefined1)((ulong)puVar26 >> 0x28);
    uStack_7ba = (undefined2)((ulong)puVar26 >> 0x30);
    puStack_7c8 = puVar26 + 4;
    puVar11 = (undefined4 *)func_0x050577f0(param_1,&puStack_758,0);
    plVar13 = plVar10 + 0x11;
    plVar12 = *(long **)(puVar11 + 0x24);
    if (plVar12 < *(long **)(puVar11 + 0x26)) {
      plVar12[2] = 0;
      plVar12[3] = 0;
      *plVar12 = 0;
      plVar12[1] = 0;
      plVar12[4] = 0;
      if (plVar12 == plVar13) {
LAB_0d40db2c:
        *plVar12 = *plVar13;
        plVar12[5] = (long)(puVar26 + 4);
        plVar12[6] = (long)puVar26;
LAB_0d40dd4f:
        LOCK();
        puVar26[1] = puVar26[1] + 1;
        UNLOCK();
      }
      else {
        if ((*(byte *)(plVar10 + 0x12) & 1) == 0) {
          plVar12[3] = plVar10[0x14];
          lVar16 = plVar10[0x13];
          plVar12[1] = plVar10[0x12];
          plVar12[2] = lVar16;
          goto LAB_0d40db2c;
        }
        func_0x04885070(plVar12 + 1,plVar10[0x14],plVar10[0x13]);
        *plVar12 = *plVar13;
        puVar26 = (undefined8 *)
                  CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
        plVar12[5] = (long)puStack_7c8;
        plVar12[6] = CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
        if (puVar26 != (undefined8 *)0x0) goto LAB_0d40dd4f;
      }
      plVar12 = plVar12 + 7;
      *(long **)(puVar11 + 0x24) = plVar12;
    }
    else {
      plVar12 = (long *)func_0x0505aef0(puVar11 + 0x22,plVar13,&puStack_7c8);
    }
    *(long **)(puVar11 + 0x24) = plVar12;
    uVar5 = *puVar11;
    uVar6 = puVar11[1];
    uVar7 = puVar11[2];
    uVar8 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar13 = *plVar13 + 1;
      UNLOCK();
    }
    plVar13 = (long *)plVar10[0xf];
    *(undefined4 *)(plVar10 + 0xe) = uVar5;
    *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
    *(undefined4 *)(plVar10 + 0xf) = uVar7;
    *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0412c2d0(plVar13);
      }
    }
    *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar13 = (long *)CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_0412c2d0(plVar13);
      }
    }
    plVar13 = plStack_780;
    LOCK();
    lVar16 = *plStack_780;
    *plStack_780 = *plStack_780 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
      LOCK();
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar16 = *plStack_780;
      *plStack_780 = *plStack_780 + -1;
      UNLOCK();
    }
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
    }
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_518);
    plVar10 = plStack_760;
    if ((uStack_518 & 1) != 0) {
      func_0x0412a280(uStack_508,uStack_518 & 0xfffffffffffffffe);
    }
    if (lStack_78 != 0) {
      (**(code **)(lStack_78 + 8))(&lStack_78);
    }
    if ((bStack_750 & 1) != 0) {
      uVar18 = CONCAT17(uStack_749,CONCAT25(uStack_74b,CONCAT41(uStack_74f,bStack_750)));
      uVar21 = CONCAT26(uStack_73a,CONCAT51(uStack_73f,uStack_740));
LAB_0d40f1c3:
      func_0x0412a280(uVar21,uVar18 & 0xfffffffffffffffe);
    }
  }
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b3 = 0;
  uStack_7b2 = 0;
  uStack_7b0 = 0;
  uStack_7af = 0;
  uStack_7ae = 0;
  uStack_7ad = 0;
  puStack_7c8 = (undefined8 *)0x0;
  bStack_7c0 = 0;
  uStack_7bf = 0;
  uStack_7bb = 0;
  uStack_7ba = 0;
  uStack_7a8 = 0;
  func_0x0412f5e0(&bStack_7c0,&UNK_011e4bfa,0x17);
  puStack_7c8 = (undefined8 *)0xecaa303f31372af9;
  uStack_2f0 = 0;
  puStack_2f8 = &UNK_0f470128;
  plVar14 = (long *)func_0x0d4118c0(param_1,&puStack_7c8,1,&puStack_2f8);
  uStack_558 = 0;
  uStack_550 = 0;
  uStack_548 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_558);
  if ((uStack_558 & 1) != 0) {
    func_0x0412a280(uStack_548,uStack_558 & 0xfffffffffffffffe);
  }
  if (puStack_2f8 != (undefined *)0x0) {
    (**(code **)(puStack_2f8 + 8))(&puStack_2f8);
  }
  if ((bStack_7c0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0))),
                    CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0))) &
                    0xfffffffffffffffe);
  }
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b3 = 0;
  uStack_7b2 = 0;
  uStack_7b0 = 0;
  uStack_7af = 0;
  uStack_7ae = 0;
  uStack_7ad = 0;
  puStack_7c8 = (undefined8 *)0x0;
  bStack_7c0 = 0;
  uStack_7bf = 0;
  uStack_7bb = 0;
  uStack_7ba = 0;
  uStack_7a8 = 0;
  func_0x0412f5e0(&bStack_7c0,&UNK_01458568,0x1b);
  puStack_7c8 = (undefined8 *)0xa8fc5d8607ff2021;
  uStack_330 = 0;
  puStack_338 = &UNK_0f470140;
  plVar14 = (long *)func_0x0d4118c0(param_1,&puStack_7c8,1,&puStack_338);
  uStack_578 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_578);
  if ((uStack_578 & 1) != 0) {
    func_0x0412a280(uStack_568,uStack_578 & 0xfffffffffffffffe);
  }
  if (puStack_338 != (undefined *)0x0) {
    (**(code **)(puStack_338 + 8))(&puStack_338);
  }
  if ((bStack_7c0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0))),
                    CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0))) &
                    0xfffffffffffffffe);
  }
  cVar9 = func_0x04fa7a10(plVar10,&uStack_6a8);
  if (cVar9 == '\0') {
    uStack_7ad = 0;
    uStack_7a8 = 0;
    bStack_7c0 = 0x24;
    uStack_7bf = _DAT_013a3cd7;
    uStack_7bb = (undefined1)_UNK_013a3cdb;
    uStack_7ba = (undefined2)((uint)_UNK_013a3cdb >> 8);
    uStack_7b8._1_3_ = (undefined3)_UNK_013a3cdf;
    uStack_7b8 = CONCAT31(uStack_7b8._1_3_,(char)((uint)_UNK_013a3cdb >> 0x18));
    uStack_7b4 = (undefined1)((uint)_UNK_013a3cdf >> 0x18);
    uStack_7b3 = (undefined1)_UNK_013a3ce3;
    uStack_7b2 = (undefined2)((uint)_UNK_013a3ce3 >> 8);
    uStack_7b0 = (undefined1)((uint)_UNK_013a3ce3 >> 0x18);
    uStack_7af = 0x6f;
    uStack_7ae = 0x6e;
    puStack_7c8 = (undefined8 *)0xa8ef5ab3b87433b3;
    uStack_370 = 0;
    puStack_378 = &UNK_0f470158;
    plVar10 = (long *)func_0x0d4118c0(param_1,&puStack_7c8,0,&puStack_378);
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_598);
    if ((uStack_598 & 1) != 0) {
      func_0x0412a280(uStack_588,uStack_598 & 0xfffffffffffffffe);
    }
    if (puStack_378 != (undefined *)0x0) {
      (**(code **)(puStack_378 + 8))(&puStack_378);
    }
    if ((bStack_7c0 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0))),
                      CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0))) &
                      0xfffffffffffffffe);
    }
  }
  uStack_7b2 = 0;
  uStack_7b0 = 0;
  uStack_7af = 0;
  uStack_7ae = 0;
  uStack_7ad = 0;
  uStack_7a8 = 0;
  bStack_7c0 = 0x1a;
  uStack_7bf = 0x5f79616d;
  uStack_7bb = 0x61;
  uStack_7ba = 0x7474;
  uStack_7b8 = 0x5f686361;
  uStack_7b4 = 0x74;
  uStack_7b3 = 0x6f;
  puStack_7c8 = (undefined8 *)0x8860039fcae2c974;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  plVar10 = (long *)func_0x0d411e80(param_1,&puStack_7c8,&lStack_1b8);
  if (lStack_1b8 != 0) {
    (**(code **)(lStack_1b8 + 8))(&lStack_1b8);
  }
  if ((bStack_7c0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0))),
                    CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0))) &
                    0xfffffffffffffffe);
  }
  uStack_73a = 0;
  uStack_738 = 0;
  bStack_750 = 0x2a;
  uStack_74f = _DAT_01234c72;
  uStack_74b = (undefined2)_UNK_01234c76;
  uStack_749 = (undefined1)((uint)_UNK_01234c76 >> 0x10);
  uStack_748 = (undefined1)((uint)_UNK_01234c76 >> 0x18);
  uStack_747 = _UNK_01234c7a;
  uStack_743 = (undefined1)_UNK_01234c7e;
  uStack_742 = 0x5f74;
  uStack_740 = 0x61;
  uStack_73f = 0x6863617474;
  puStack_758 = (undefined8 *)0x118d61f3511c5e56;
  uStack_1f0 = 0;
  uStack_710 = 0;
  lStack_1f8 = 0;
  puStack_718 = (undefined8 *)&UNK_0f470230;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_7c8 = puStack_718;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f46a550;
  bStack_7c0 = 0;
  uStack_7bf = 0;
  uStack_7bb = 0;
  uStack_7ba = 0;
  puStack_718 = (undefined8 *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_6d0,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar13 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f46a5a0;
  plVar14[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar14 + 0x2f) = 1;
  plVar14[0x30] = 0;
  plVar14[0x31] = 0;
  if (puStack_7c8 == (undefined8 *)0x0) {
    puVar26 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_7c8)(&puStack_7c8,plVar14 + 0x30);
    puVar26 = puStack_7c8;
  }
  puStack_7c8 = (undefined8 *)0x0;
  plVar14[0x30] = (long)puVar26;
  puStack_770 = (uint *)(plVar14 + 0x12);
  if (plVar13 == (long *)&DAT_0f552078) {
    plVar14[0x15] = 0;
  }
  else {
    if ((*puStack_770 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552090;
        uVar7 = uRam000000000f55208c;
        uVar6 = _DAT_0f552088;
        uVar5 = uRam000000000f552084;
        *puStack_770 = _DAT_0f552080;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar5;
        *(undefined4 *)(plVar14 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar7;
      }
      else {
        func_0x04885070(puStack_770,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar27 = (_DAT_0f552080 & 1) != 0;
      lVar16 = 0xf552081;
      if (bVar27) {
        lVar16 = _DAT_0f552090;
      }
      uVar18 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar27) {
        uVar18 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puStack_770,lVar16,uVar18);
    }
    plVar14[0x11] = _DAT_0f552078;
    plVar14[0x15] = 0;
    if (puStack_7c8 != (undefined8 *)0x0) {
      (*(code *)puStack_7c8[1])(&puStack_7c8);
    }
  }
  plVar12 = plVar14 + 1;
  plStack_788 = plVar13;
  plStack_780 = plVar10;
  if (puStack_718 != (undefined8 *)0x0) {
    (*(code *)puStack_718[1])(&puStack_718);
  }
  LOCK();
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar26 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar26[1] = 0;
  puVar26[2] = 0;
  *puVar26 = &UNK_0f46a680;
  puVar26[6] = 0;
  puVar26[7] = 0;
  puVar26[4] = &UNK_0f46a6d0;
  puVar26[0xe] = plVar14 + 4;
  puVar26[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  bStack_7c0 = (byte)puVar26;
  uStack_7bf = (undefined4)((ulong)puVar26 >> 8);
  uStack_7bb = (undefined1)((ulong)puVar26 >> 0x28);
  uStack_7ba = (undefined2)((ulong)puVar26 >> 0x30);
  puStack_7c8 = puVar26 + 4;
  puStack_768 = (uint *)(plVar14 + 4);
  puVar11 = (undefined4 *)func_0x0d48dbb0(plStack_780,&puStack_758);
  plVar10 = *(long **)(puVar11 + 0x24);
  if (plVar10 < *(long **)(puVar11 + 0x26)) {
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[4] = 0;
    if (plVar10 != plStack_788) {
      puVar2 = (uint *)(plVar10 + 1);
      if ((*puStack_770 & 1) == 0) {
        plVar10[3] = *(long *)(puStack_770 + 4);
        lVar16 = *(long *)(puStack_770 + 2);
        *(undefined8 *)puVar2 = *(undefined8 *)puStack_770;
        plVar10[2] = lVar16;
      }
      else {
        puStack_770 = puVar2;
        func_0x04885070(puVar2,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar10 = *plStack_788;
    plVar10[5] = (long)(puVar26 + 4);
    plVar10[6] = (long)puVar26;
    LOCK();
    puVar26[1] = puVar26[1] + 1;
    UNLOCK();
    plVar10 = plVar10 + 7;
    *(long **)(puVar11 + 0x24) = plVar10;
  }
  else {
    plVar10 = (long *)func_0x0d48fb00(puVar11 + 0x22,plStack_788,&puStack_7c8);
  }
  plVar13 = plStack_780;
  *(long **)(puVar11 + 0x24) = plVar10;
  uVar5 = *puVar11;
  uVar6 = puVar11[1];
  uVar7 = puVar11[2];
  uVar8 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar10 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar10 = *plVar10 + 1;
    UNLOCK();
  }
  plVar10 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar6;
  *(undefined4 *)(plVar14 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar8;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar10 = (long *)CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_760;
  LOCK();
  lVar16 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0412c2d0(plVar14);
    LOCK();
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0412c2d0(plVar14);
  }
  plVar14[0x2e] = 0x400000001;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  (**(code **)(plVar14[4] + 0x10))(puStack_768,&uStack_5b8);
  if ((uStack_5b8 & 1) != 0) {
    func_0x0412a280(uStack_5a8,uStack_5b8 & 0xfffffffffffffffe);
  }
  if (lStack_1f8 != 0) {
    (**(code **)(lStack_1f8 + 8))(&lStack_1f8);
  }
  if ((bStack_750 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_73a,CONCAT51(uStack_73f,uStack_740)),
                    CONCAT17(uStack_749,CONCAT25(uStack_74b,CONCAT41(uStack_74f,bStack_750))) &
                    0xfffffffffffffffe);
  }
  cVar9 = func_0x04fa7a10(plVar10,&uStack_6a8);
  if (cVar9 == '\0') {
    uStack_7b4 = 0;
    uStack_7b3 = 0;
    uStack_7b2 = 0;
    uStack_7b0 = 0;
    uStack_7af = 0;
    uStack_7ae = 0;
    uStack_7ad = 0;
    uStack_7a8 = 0;
    bStack_7c0 = 0x16;
    uStack_7bf = 0x6f747561;
    uStack_7bb = 0x5f;
    uStack_7ba = 0x6f72;
    uStack_7b8 = 0x65746174;
    puStack_7c8 = (undefined8 *)0x303c5ff2efac104a;
    uStack_3f0 = 0;
    puStack_3f8 = &UNK_0f470260;
    plVar14 = (long *)func_0x0d4123b0(plVar13,&puStack_7c8,&puStack_3f8);
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_5f8);
    if ((uStack_5f8 & 1) != 0) {
      func_0x0412a280(uStack_5e8,uStack_5f8 & 0xfffffffffffffffe);
    }
    if (puStack_3f8 == (undefined *)0x0) goto LAB_0d40fc33;
    ppuVar22 = &puStack_3f8;
    puVar15 = puStack_3f8;
  }
  else {
    uStack_7b4 = 0;
    uStack_7b3 = 0;
    uStack_7b2 = 0;
    uStack_7b0 = 0;
    uStack_7af = 0;
    uStack_7ae = 0;
    uStack_7ad = 0;
    uStack_7a8 = 0;
    bStack_7c0 = 0x16;
    uStack_7bf = 0x6f747561;
    uStack_7bb = 0x5f;
    uStack_7ba = 0x6f72;
    uStack_7b8 = 0x65746174;
    puStack_7c8 = (undefined8 *)0x303c5ff2efac104a;
    uStack_3b0 = 0;
    puStack_3b8 = &UNK_0f470248;
    plVar14 = (long *)func_0x0d4123b0(plVar13,&puStack_7c8,&puStack_3b8);
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_5d8);
    if ((uStack_5d8 & 1) != 0) {
      func_0x0412a280(uStack_5c8,uStack_5d8 & 0xfffffffffffffffe);
    }
    if (puStack_3b8 == (undefined *)0x0) goto LAB_0d40fc33;
    ppuVar22 = &puStack_3b8;
    puVar15 = puStack_3b8;
  }
  (**(code **)(puVar15 + 8))(ppuVar22);
LAB_0d40fc33:
  if ((bStack_7c0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0))),
                    CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0))) &
                    0xfffffffffffffffe);
  }
  func_0x0d412950(plVar13,0,plVar10);
  uStack_618 = 0;
  uStack_610 = 0;
  uStack_608 = 0;
  (**(code **)(*plVar13 + 0x10))(plVar13,&uStack_618);
  if ((uStack_618 & 1) != 0) {
    func_0x0412a280(uStack_608,uStack_618 & 0xfffffffffffffffe);
  }
  uStack_430 = 0;
  puStack_438 = (undefined8 *)&UNK_0f470858;
  ppuVar25 = (undefined8 **)(plVar13 + 0x1a);
  if (ppuVar25 != &puStack_438) {
    if ((*ppuVar25 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar25)[1])(ppuVar25), puStack_438 != (undefined8 *)0x0)) {
      (*(code *)*puStack_438)(&puStack_438,ppuVar25);
      puVar26 = puStack_438;
    }
    else {
      puVar26 = (undefined8 *)0x0;
    }
    puStack_438 = (undefined8 *)0x0;
    *ppuVar25 = puVar26;
  }
  cVar9 = func_0x04fa7a10(plVar10,&uStack_6a8);
  if (cVar9 == '\0') {
    uStack_7ae = 0;
    uStack_7ad = 0;
    uStack_7a8 = 0;
    bStack_7c0 = 0x22;
    uStack_7bf = _DAT_0129cd23;
    uStack_7bb = (undefined1)_UNK_0129cd27;
    uStack_7ba = (undefined2)((uint)_UNK_0129cd27 >> 8);
    uStack_7b8._1_3_ = (undefined3)_UNK_0129cd2b;
    uStack_7b8 = CONCAT31(uStack_7b8._1_3_,(char)((uint)_UNK_0129cd27 >> 0x18));
    uStack_7b4 = (undefined1)((uint)_UNK_0129cd2b >> 0x18);
    uStack_7b3 = (undefined1)_UNK_0129cd2f;
    uStack_7b2 = (undefined2)((uint)_UNK_0129cd2f >> 8);
    uStack_7b0 = (undefined1)((uint)_UNK_0129cd2f >> 0x18);
    uStack_7af = 0x6f;
    puStack_7c8 = (undefined8 *)0x427b96742d4684e2;
    lStack_238 = 0;
    uStack_230 = 0;
    plVar14 = (long *)func_0x0d411e80(param_1,&puStack_7c8,&lStack_238);
    if (lStack_238 != 0) {
      (**(code **)(lStack_238 + 8))(&lStack_238);
    }
    if ((bStack_7c0 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0))),
                      CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0))) &
                      0xfffffffffffffffe);
    }
    func_0x0d412950(plVar14,1,plVar10);
    uStack_638 = 0;
    uStack_630 = 0;
    uStack_628 = 0;
    (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_638);
    if ((uStack_638 & 1) != 0) {
      func_0x0412a280(uStack_628,uStack_638 & 0xfffffffffffffffe);
    }
    uStack_470 = 0;
    puStack_478 = (undefined8 *)&UNK_0f470870;
    ppuVar25 = (undefined8 **)(plVar14 + 0x1a);
    if (ppuVar25 != &puStack_478) {
      if ((*ppuVar25 == (undefined8 *)0x0) ||
         ((*(code *)(*ppuVar25)[1])(ppuVar25), puStack_478 != (undefined8 *)0x0)) {
        (*(code *)*puStack_478)(&puStack_478,ppuVar25);
        puVar26 = puStack_478;
      }
      else {
        puVar26 = (undefined8 *)0x0;
      }
      puStack_478 = (undefined8 *)0x0;
      *ppuVar25 = puVar26;
    }
  }
  uStack_7b4 = 0;
  uStack_7b3 = 0;
  uStack_7b2 = 0;
  uStack_7b0 = 0;
  uStack_7af = 0;
  uStack_7ae = 0;
  uStack_7ad = 0;
  uStack_7a8 = 0;
  bStack_7c0 = 0x16;
  uStack_7bf = 0x5f79616d;
  uStack_7bb = 0x72;
  uStack_7ba = 0x7065;
  uStack_7b8 = 0x6563616c;
  puStack_7c8 = (undefined8 *)0x272a7fa09187bb85;
  lStack_278 = 0;
  uStack_270 = 0;
  lVar16 = func_0x0d4113a0(param_1,&puStack_7c8,&lStack_278);
  if (lStack_278 != 0) {
    (**(code **)(lStack_278 + 8))(&lStack_278);
  }
  if ((bStack_7c0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0))),
                    CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0))) &
                    0xfffffffffffffffe);
  }
  uStack_2b0 = 0;
  uStack_710 = 0;
  lStack_2b8 = 0;
  puStack_718 = (undefined8 *)&UNK_0f470888;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_7c8 = puStack_718;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f46a968;
  plVar14 = plVar10 + 4;
  bStack_7c0 = 0;
  uStack_7bf = 0;
  uStack_7bb = 0;
  uStack_7ba = 0;
  puStack_718 = (undefined8 *)0x0;
  func_0x0d491660(plVar14,&puStack_7c8);
  if (puStack_7c8 != (undefined8 *)0x0) {
    (*(code *)puStack_7c8[1])(&puStack_7c8);
  }
  plVar13 = plVar10 + 1;
  if (puStack_718 != (undefined8 *)0x0) {
    (*(code *)puStack_718[1])(&puStack_718);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  plStack_760 = plVar13;
  puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar26 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar26[1] = 0;
  puVar26[2] = 0;
  *puVar26 = &UNK_0f46aa98;
  puVar19 = puVar26 + 4;
  puVar26[6] = 0;
  puVar26[7] = 0;
  puVar26[4] = &UNK_0f46aae8;
  puVar26[0xe] = plVar14;
  puVar26[0xf] = plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  bStack_7c0 = (byte)puVar26;
  uStack_7bf = (undefined4)((ulong)puVar26 >> 8);
  uStack_7bb = (undefined1)((ulong)puVar26 >> 0x28);
  uStack_7ba = (undefined2)((ulong)puVar26 >> 0x30);
  puVar20 = *(undefined8 **)(lVar16 + 0xb8);
  puVar4 = *(undefined8 **)(lVar16 + 0xc0);
  do {
    puStack_7c8 = puVar19;
    plStack_780 = plVar14;
    if (puVar20 == puVar4) {
      if (puVar4 < *(undefined8 **)(lVar16 + 200)) {
        func_0x0d48f820(puVar4);
        *(undefined8 **)(lVar16 + 0xc0) = puVar4 + 0x15;
        *(undefined8 **)(lVar16 + 0xc0) = puVar4 + 0x15;
        pbVar17 = (byte *)*puVar4;
        bVar3 = *pbVar17;
      }
      else {
        lVar23 = func_0x0d48f590(lVar16 + 0xb8);
        *(long *)(lVar16 + 0xc0) = lVar23;
        pbVar17 = *(byte **)(lVar23 + -0xa8);
        bVar3 = *pbVar17;
      }
      if ((bVar3 & 1) == 0) {
        *pbVar17 = 0x26;
        pbVar17 = pbVar17 + 1;
      }
      else {
        pbVar17[8] = 0x13;
        pbVar17[9] = 0;
        pbVar17[10] = 0;
        pbVar17[0xb] = 0;
        pbVar17[0xc] = 0;
        pbVar17[0xd] = 0;
        pbVar17[0xe] = 0;
        pbVar17[0xf] = 0;
        pbVar17 = *(byte **)(pbVar17 + 0x10);
      }
      uVar7 = _UNK_01494d69;
      uVar6 = _UNK_01494d65;
      uVar5 = _UNK_01494d61;
      *(undefined4 *)pbVar17 = _DAT_01494d5d;
      *(undefined4 *)(pbVar17 + 4) = uVar5;
      *(undefined4 *)(pbVar17 + 8) = uVar6;
      *(undefined4 *)(pbVar17 + 0xc) = uVar7;
      pbVar17[0xf] = 0x65;
      pbVar17[0x10] = 0x6e;
      pbVar17[0x11] = 0x74;
      pbVar17[0x12] = 0x3e;
      pbVar17[0x13] = 0;
      lVar23 = *(long *)(lVar16 + 0xc0);
      puVar20 = (undefined8 *)(lVar23 + -0xa8);
      *(undefined1 *)(lVar23 + -7) = *(undefined1 *)(lVar16 + 0x60);
      *(undefined8 *)(lVar23 + -0x30) = 0;
      *(undefined8 *)(lVar23 + -0x28) = 0xffffffffffffffff;
      *(undefined1 *)(lVar23 + -8) = 0;
      plVar14 = *(long **)(lVar23 + -0x18);
      if (plVar14 < *(long **)(lVar23 + -0x10)) {
LAB_0d4100c8:
        plVar13 = plVar10 + 0x11;
        plVar14[2] = 0;
        plVar14[3] = 0;
        *plVar14 = 0;
        plVar14[1] = 0;
        plVar14[4] = 0;
        if (plVar14 != plVar13) {
          if ((*(byte *)(plVar10 + 0x12) & 1) == 0) {
            plVar14[3] = plVar10[0x14];
            lVar16 = plVar10[0x13];
            plVar14[1] = plVar10[0x12];
            plVar14[2] = lVar16;
          }
          else {
            plStack_788 = plVar13;
            func_0x04885070(plVar14 + 1,plVar10[0x14],plVar10[0x13]);
            plVar13 = plStack_788;
          }
        }
        *plVar14 = *plVar13;
        plVar14[5] = (long)puVar19;
        plVar14[6] = (long)puVar26;
        LOCK();
        puVar26[1] = puVar26[1] + 1;
        UNLOCK();
        plVar14 = plVar14 + 7;
        puVar20[0x12] = plVar14;
      }
      else {
LAB_0d4101da:
        plVar14 = (long *)func_0x0d48fb00(puVar20 + 0x11,plVar10 + 0x11,&puStack_7c8);
      }
      puVar20[0x12] = plVar14;
      uVar5 = *(undefined4 *)puVar20;
      uVar6 = *(undefined4 *)((long)puVar20 + 4);
      uVar7 = *(undefined4 *)(puVar20 + 1);
      uVar8 = *(undefined4 *)((long)puVar20 + 0xc);
      if (puVar20[1] != 0) {
        LOCK();
        plVar14 = (long *)(puVar20[1] + 8);
        *plVar14 = *plVar14 + 1;
        UNLOCK();
      }
      plVar14 = (long *)plVar10[0xf];
      *(undefined4 *)(plVar10 + 0xe) = uVar5;
      *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
      *(undefined4 *)(plVar10 + 0xf) = uVar7;
      *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar13 = plVar14 + 1;
        lVar16 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FUN_0412c2d0(plVar14);
        }
      }
      *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
      plVar14 = (long *)CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT41(uStack_7bf,bStack_7c0)));
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar13 = plVar14 + 1;
        lVar16 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FUN_0412c2d0(plVar14);
        }
      }
      plVar13 = plStack_760;
      plVar14 = plStack_780;
      LOCK();
      lVar16 = *plStack_760;
      *plStack_760 = *plStack_760 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_0412c2d0(plVar10);
        LOCK();
        lVar16 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar16 = *plStack_760;
        *plStack_760 = *plStack_760 + -1;
        UNLOCK();
      }
      if (lVar16 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_0412c2d0(plVar10);
      }
      auStack_658[0] = 0;
      auStack_658[1] = 0;
      auStack_658[2] = 0;
      (**(code **)(*plVar14 + 0x10))(plVar14,auStack_658);
      if ((auStack_658[0] & 1) != 0) {
        func_0x0412a280(auStack_658[2],auStack_658[0] & 0xfffffffffffffffe);
      }
      if (lStack_2b8 != 0) {
        (**(code **)(lStack_2b8 + 8))(&lStack_2b8);
      }
      uStack_4b0 = 0;
      puStack_4b8 = (undefined8 *)&UNK_0f4708a0;
      ppuVar25 = (undefined8 **)(param_1 + 0xd0);
      if (ppuVar25 != &puStack_4b8) {
        if ((*ppuVar25 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar25)[1])(ppuVar25), puStack_4b8 != (undefined8 *)0x0)) {
          (*(code *)*puStack_4b8)(&puStack_4b8,ppuVar25);
          puVar26 = puStack_4b8;
        }
        else {
          puVar26 = (undefined8 *)0x0;
        }
        puStack_4b8 = (undefined8 *)0x0;
        *ppuVar25 = puVar26;
      }
      if ((uStack_698 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_698 & 0xff00ffffffffffff) - 8);
      }
      uStack_698 = 0;
      if ((uStack_6a0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a0 & 0xff00ffffffffffff) - 8);
      }
      return;
    }
    if ((puVar20[0xf] == 0) && (puVar20[0x10] == -1)) {
      plVar14 = (long *)puVar20[0x12];
      if (plVar14 < (long *)puVar20[0x13]) goto LAB_0d4100c8;
      goto LAB_0d4101da;
    }
    puVar20 = puVar20 + 0x15;
  } while( true );
}



/* ---- referenced strings ----
 * 0x12009c2  Reference to the block to be placed.
 * 0x12009d2   block to be placed.
 * 0x1234c72  min_sides_must_attach
 * 0x1269670  Random weight of this block. A higher number will increase the probability of this block to be p
 * 0x1269680   this block. A higher number will increase the probability of this block to be picked during pla
 * 0x1269690  igher number will increase the probability of this block to be picked during placement.
 * 0x12696a0  l increase the probability of this block to be picked during placement.
 * 0x12696b0  robability of this block to be picked during placement.
 * 0x12696c0  is block to be picked during placement.
 * 0x12696d0  icked during placement.
 * 0x129cd23  may_not_attach_to
 * 0x13a3cd7  randomize_rotation
 * 0x1494d5d  <any array element>
 */
