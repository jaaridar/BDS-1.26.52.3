/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd417f90 (ELF vaddr 0xd317f90)
 * Label: callee-of:0x4de9260
 * Body:  [[0d417f90, 0d41a91e] [0d41a920, 0d41af25] [0d41af30, 0d41af6c] [0d41af70, 0d41bb3b] [0d41c5d0, 0d41c6a2] [0d41cb1e, 0d41cbb9]]
 * Ghidra: FUN_0d417f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d417f90(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined **ppuVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  undefined8 **ppuVar33;
  long *plVar34;
  long lVar35;
  bool bVar36;
  undefined8 *puStack_6e8;
  undefined8 uStack_6e0;
  undefined1 uStack_6d8;
  undefined4 uStack_6d7;
  undefined4 uStack_6d3;
  undefined1 uStack_6cf;
  undefined1 uStack_6ce;
  undefined5 uStack_6cd;
  undefined8 **ppuStack_6c8;
  long *plStack_6b8;
  long *plStack_6a8;
  uint *puStack_6a0;
  uint *puStack_698;
  long *plStack_690;
  undefined8 *puStack_688;
  byte bStack_680;
  undefined7 uStack_67f;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long *plStack_658;
  undefined1 uStack_641;
  uint *puStack_640;
  undefined8 *puStack_638;
  byte bStack_630;
  undefined4 uStack_62f;
  undefined2 uStack_62b;
  undefined1 uStack_629;
  undefined1 uStack_628;
  undefined4 uStack_627;
  undefined2 uStack_623;
  undefined1 uStack_621;
  undefined1 uStack_620;
  undefined4 uStack_61f;
  undefined3 uStack_61b;
  undefined8 uStack_618;
  undefined1 *puStack_608;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  byte bStack_5e0;
  undefined5 uStack_5df;
  undefined2 uStack_5da;
  undefined1 uStack_5d8;
  undefined5 uStack_5d7;
  undefined2 uStack_5d2;
  undefined8 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5b8;
  long lStack_5a8;
  ulong uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long *plStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long alStack_568 [2];
  long *plStack_558;
  long *plStack_548;
  undefined8 uStack_538;
  ulong uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  ulong auStack_508 [4];
  ulong auStack_4e8 [4];
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined *apuStack_3a8 [4];
  undefined **ppuStack_388;
  undefined *apuStack_378 [4];
  undefined **ppuStack_358;
  undefined *apuStack_348 [4];
  undefined **ppuStack_328;
  undefined *apuStack_318 [4];
  undefined **ppuStack_2f8;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *apuStack_128 [4];
  undefined **ppuStack_108;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_620 = 0;
  uStack_61f = 0;
  uStack_61b = 0;
  uStack_618 = 0;
  bStack_630 = 0x1c;
  uStack_62f = 0x75727473;
  uStack_62b = 0x7463;
  uStack_629 = 0x75;
  uStack_628 = 0x72;
  uStack_627 = 0x616e5f65;
  uStack_623 = 0x656d;
  uStack_621 = 0;
  puStack_638 = (undefined8 *)0x9bcdf15a643e1f4e;
  uStack_70 = 0;
  bStack_680 = 0;
  uStack_67f = 0;
  lStack_78 = 0;
  puStack_688 = (undefined8 *)&UNK_0f470e18;
  plStack_6a8 = (long *)param_1;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  puStack_6e8 = puStack_688;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f46b500;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  puStack_688 = (undefined8 *)0x0;
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&uStack_578,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0f46b550;
  plVar12[0x2e] = 0;
  plVar12[0x2f] = 0;
  if (puStack_6e8 == (undefined8 *)0x0) {
    plVar12[0x3a] = 0;
    puVar13 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_6e8)(&puStack_6e8,plVar12 + 0x2e);
    puVar13 = puStack_6e8;
    puStack_6e8 = (undefined8 *)0x0;
    plVar12[0x2e] = (long)puVar13;
    plVar12[0x3a] = 0;
    if ((*(byte *)(plVar12 + 0x12) & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      func_0x0412a280(plVar12[0x14],plVar12[0x12] & 0xfffffffffffffffe);
      puVar13 = puStack_6e8;
    }
  }
  pbVar18 = (byte *)(plVar12 + 0x12);
  pbVar18[0] = 0x26;
  uVar9 = _UNK_012b5d40;
  uVar8 = _UNK_012b5d3c;
  uVar7 = _UNK_012b5d38;
  pbVar18[1] = 0x73;
  *(undefined4 *)((long)plVar12 + 0x92) = _DAT_012b5d34;
  *(undefined4 *)((long)plVar12 + 0x96) = uVar7;
  *(undefined4 *)((long)plVar12 + 0x9a) = uVar8;
  *(undefined4 *)((long)plVar12 + 0x9e) = uVar9;
  *(undefined2 *)((long)plVar12 + 0xa2) = 0x6563;
  *(undefined4 *)((long)plVar12 + 0xa4) = 0;
  plVar12[0x11] = 0x3b98466067ffc35a;
  plVar12[0x15] = 0;
  if (puVar13 != (undefined8 *)0x0) {
    (*(code *)puVar13[1])(&puStack_6e8);
  }
  plVar15 = plVar12 + 1;
  if (puStack_688 != (undefined8 *)0x0) {
    (*(code *)puStack_688[1])(&puStack_688);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  plStack_690 = plVar15;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puStack_6a0 = (uint *)(plVar12 + 4);
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f46b630;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = &UNK_0f46b680;
  puVar13[0xe] = puStack_6a0;
  puVar13[0xf] = plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  uStack_6e0._0_4_ = (uint)puVar13;
  uStack_6e0._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
  puStack_6e8 = puVar13 + 4;
  puVar14 = (undefined4 *)FUN_05069c10(plStack_6a8,&puStack_638,1);
  plVar15 = plVar12 + 0x11;
  plVar20 = *(long **)(puVar14 + 0x24);
  if (plVar20 < *(long **)(puVar14 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 == plVar15) {
LAB_0d4182bf:
      *plVar20 = *plVar15;
      plVar20[5] = (long)(puVar13 + 4);
      plVar20[6] = (long)puVar13;
LAB_0d41831c:
      LOCK();
      puVar13[1] = puVar13[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbVar18 & 1) == 0) {
        plVar20[3] = plVar12[0x14];
        lVar30 = plVar12[0x13];
        plVar20[1] = *(long *)pbVar18;
        plVar20[2] = lVar30;
        goto LAB_0d4182bf;
      }
      func_0x04885070(plVar20 + 1,plVar12[0x14],plVar12[0x13]);
      *plVar20 = *plVar15;
      puVar13 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
      plVar20[5] = (long)puStack_6e8;
      plVar20[6] = CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
      if (puVar13 != (undefined8 *)0x0) goto LAB_0d41831c;
    }
    plVar20 = plVar20 + 7;
    *(long **)(puVar14 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x0506d310(puVar14 + 0x22,plVar15,&puStack_6e8);
  }
  plVar15 = plStack_690;
  *(long **)(puVar14 + 0x24) = plVar20;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar12[0xf];
  *(undefined4 *)(plVar12 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar12 + 0x74) = uVar8;
  *(undefined4 *)(plVar12 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar12 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  plVar20 = (long *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar30 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    LOCK();
    lVar30 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
  }
  apuStack_128[0] = &UNK_0f470e40;
  ppuStack_108 = apuStack_128;
  ppuVar33 = (undefined8 **)(plVar12 + 0x36);
  ppuStack_6c8 = &puStack_6e8;
  puStack_6e8 = (undefined8 *)&UNK_0f470e40;
  lVar30 = 0x20;
  if (ppuVar33 == &puStack_6e8) {
LAB_0d418516:
    puVar16 = puStack_6a0;
    (**(code **)((long)*ppuStack_6c8 + lVar30))();
  }
  else {
    ppuVar4 = (undefined8 **)plVar12[0x3a];
    if (ppuVar4 == ppuVar33) {
      puStack_688 = (undefined8 *)&UNK_0f470e40;
      ppuStack_6c8 = (undefined8 **)0x0;
      (*(code *)(*ppuVar4)[3])(ppuVar4,&puStack_6e8);
      (**(code **)(*(long *)plVar12[0x3a] + 0x20))();
      plVar12[0x3a] = 0;
      ppuStack_6c8 = &puStack_6e8;
      (*(code *)puStack_688[3])(&puStack_688,ppuVar33);
      (*(code *)puStack_688[4])(&puStack_688);
      plVar12[0x3a] = (long)ppuVar33;
      if (ppuStack_6c8 != &puStack_6e8) goto LAB_0d41850b;
      goto LAB_0d418516;
    }
    plVar12[0x36] = (long)&UNK_0f470e40;
    ppuStack_6c8 = ppuVar4;
    plVar12[0x3a] = (long)ppuVar33;
    if (ppuVar4 == &puStack_6e8) goto LAB_0d418516;
LAB_0d41850b:
    lVar30 = 0x28;
    puVar16 = puStack_6a0;
    if (ppuStack_6c8 != (undefined8 **)0x0) goto LAB_0d418516;
  }
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  (**(code **)(*(long *)puVar16 + 0x10))(puVar16,&uStack_3e8);
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if (ppuStack_108 == apuStack_128) {
    lVar30 = 0x20;
LAB_0d418814:
    (**(code **)(*ppuStack_108 + lVar30))();
  }
  else {
    lVar30 = 0x28;
    if (ppuStack_108 != (undefined **)0x0) goto LAB_0d418814;
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_630 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_61b,CONCAT41(uStack_61f,uStack_620)),
                    CONCAT17(uStack_629,CONCAT25(uStack_62b,CONCAT41(uStack_62f,bStack_630))) &
                    0xfffffffffffffffe);
  }
  uStack_6ce = 0;
  uStack_6cd = 0;
  ppuStack_6c8 = (undefined8 **)0x0;
  uStack_6e0._1_3_ = (undefined3)_DAT_013d7d07;
  uStack_6e0._0_4_ = CONCAT31(uStack_6e0._1_3_,0x22);
  uStack_6e0._5_3_ = (undefined3)_UNK_013d7d0b;
  uStack_6e0._4_4_ = CONCAT31(uStack_6e0._5_3_,(char)((uint)_DAT_013d7d07 >> 0x18));
  uStack_6d8 = (undefined1)((uint)_UNK_013d7d0b >> 0x18);
  uStack_6d7 = _UNK_013d7d0f;
  uStack_6d3 = _UNK_013d7d13;
  uStack_6cf = 0x73;
  puStack_6e8 = (undefined8 *)0x4b1293896ca15c65;
  uStack_160 = 0;
  puStack_168 = &UNK_0f470ec0;
  plVar12 = (long *)func_0x0d41cbc0(plStack_6a8,&puStack_6e8,&puStack_168);
  plVar12[0x2a] = 0x1000000000;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_408);
  if ((uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,uStack_408 & 0xfffffffffffffffe);
  }
  if (puStack_168 != (undefined *)0x0) {
    (**(code **)(puStack_168 + 8))(&puStack_168);
  }
  if (((uint)uStack_6e0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_6cd,CONCAT12(uStack_6ce,CONCAT11(uStack_6cf,uStack_6d3._3_1_))),
                    CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0) & 0xfffffffffffffffe);
  }
  uStack_61f = 0;
  uStack_61b = 0;
  uStack_618 = 0;
  bStack_630 = 0x20;
  uStack_62f = _DAT_01268347;
  uStack_62b = (undefined2)_UNK_0126834b;
  uStack_629 = (undefined1)((uint)_UNK_0126834b >> 0x10);
  uStack_628 = (undefined1)((uint)_UNK_0126834b >> 0x18);
  uStack_627 = _UNK_0126834f;
  uStack_623 = (undefined2)_UNK_01268353;
  uStack_621 = (undefined1)((uint)_UNK_01268353 >> 0x10);
  uStack_620 = (undefined1)((uint)_UNK_01268353 >> 0x18);
  puStack_638 = (undefined8 *)0x9588f160bf4a1e65;
  uStack_b0 = 0;
  bStack_680 = 0;
  uStack_67f = 0;
  lStack_b8 = 0;
  puStack_688 = (undefined8 *)&UNK_0f470ed8;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  puStack_6e8 = puStack_688;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f46b8c0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  puStack_688 = (undefined8 *)0x0;
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&uStack_578,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar15 = plVar12 + 0x11;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0f46b910;
  plVar12[0x2e] = 0;
  plVar12[0x2f] = 0;
  if (puStack_6e8 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_6e8)(&puStack_6e8,plVar12 + 0x2e);
    puVar13 = puStack_6e8;
  }
  plVar20 = plVar12 + 4;
  puStack_6e8 = (undefined8 *)0x0;
  plVar12[0x2e] = (long)puVar13;
  plVar12[0x36] = 0;
  plVar12[0x37] = 0;
  plVar12[0x38] = 0;
  plVar12[0x39] = 0;
  *(undefined4 *)(plVar12 + 0x3a) = 0x3f800000;
  *(undefined1 *)(plVar12 + 0x3b) = 0;
  puVar16 = (uint *)(plVar12 + 0x12);
  if (plVar15 != (long *)&DAT_0f551fe8) {
    if ((*puVar16 & 1) == 0) {
      if ((_DAT_0f551ff0 & 1) == 0) {
        plVar12[0x14] = _DAT_0f552000;
        uVar9 = uRam000000000f551ffc;
        uVar8 = _DAT_0f551ff8;
        uVar7 = uRam000000000f551ff4;
        *puVar16 = _DAT_0f551ff0;
        *(undefined4 *)((long)plVar12 + 0x94) = uVar7;
        *(undefined4 *)(plVar12 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar12 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar16,_DAT_0f552000,CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8));
      }
    }
    else {
      bVar36 = (_DAT_0f551ff0 & 1) != 0;
      lVar30 = 0xf551ff1;
      if (bVar36) {
        lVar30 = _DAT_0f552000;
      }
      uVar25 = (ulong)((_DAT_0f551ff0 & 0xff) >> 1);
      if (bVar36) {
        uVar25 = CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8);
      }
      FUN_04885120(puVar16,lVar30,uVar25);
    }
  }
  plVar12[0x11] = _DAT_0f551fe8;
  plVar12[0x15] = 0;
  if (puStack_6e8 != (undefined8 *)0x0) {
    (*(code *)puStack_6e8[1])(&puStack_6e8);
  }
  plVar17 = plVar12 + 1;
  plStack_690 = plVar15;
  if (puStack_688 != (undefined8 *)0x0) {
    (*(code *)puStack_688[1])(&puStack_688);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puStack_6a0 = (uint *)plVar17;
  puStack_698 = puVar16;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f46b9f0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = &UNK_0f46ba40;
  puVar13[0xe] = plVar20;
  puVar13[0xf] = plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  uStack_6e0._0_4_ = (uint)puVar13;
  uStack_6e0._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
  puStack_6e8 = puVar13 + 4;
  puVar14 = (undefined4 *)FUN_05069c10(plStack_6a8,&puStack_638,0);
  plVar15 = *(long **)(puVar14 + 0x24);
  if (plVar15 < *(long **)(puVar14 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if (plVar15 == plStack_690) {
LAB_0d418a07:
      *plVar15 = *plStack_690;
      plVar15[5] = (long)(puVar13 + 4);
      plVar15[6] = (long)puVar13;
LAB_0d418a7e:
      LOCK();
      puVar13[1] = puVar13[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_698 & 1) == 0) {
        plVar15[3] = *(long *)(puStack_698 + 4);
        lVar30 = *(long *)(puStack_698 + 2);
        plVar15[1] = *(long *)puStack_698;
        plVar15[2] = lVar30;
        goto LAB_0d418a07;
      }
      func_0x04885070(plVar15 + 1,plVar12[0x14],plVar12[0x13]);
      *plVar15 = *plStack_690;
      puVar13 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
      plVar15[5] = (long)puStack_6e8;
      plVar15[6] = CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
      if (puVar13 != (undefined8 *)0x0) goto LAB_0d418a7e;
    }
    plVar15 = plVar15 + 7;
    *(long **)(puVar14 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x0506d310(puVar14 + 0x22,plStack_690,&puStack_6e8);
  }
  puVar16 = puStack_6a0;
  *(long **)(puVar14 + 0x24) = plVar15;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar12[0xf];
  *(undefined4 *)(plVar12 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar12 + 0x74) = uVar8;
  *(undefined4 *)(plVar12 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar12 + 0x7c) = uVar10;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar17 = plVar15 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  plVar15 = (long *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar17 = plVar15 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar30 = *(long *)puVar16;
  *(long *)puVar16 = *(long *)puVar16 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    LOCK();
    lVar30 = *(long *)puVar16;
    *(long *)puVar16 = *(long *)puVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *(long *)puVar16;
    *(long *)puVar16 = *(long *)puVar16 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
  }
  puStack_6e8 = (undefined8 *)CONCAT17(puStack_6e8._7_1_,0x6874726f6e0a);
  func_0x0d41d170(plVar20,&puStack_6e8,2);
  puStack_688 = (undefined8 *)CONCAT17(puStack_688._7_1_,0x6874756f730a);
  func_0x0d41d170(plVar20,&puStack_688,0);
  uStack_578 = (undefined8 *)CONCAT26(uStack_578._6_2_,0x7473616508);
  func_0x0d41d170(plVar20,&uStack_578,3);
  uStack_5e8 = (undefined8 *)CONCAT26(uStack_5e8._6_2_,0x7473657708);
  func_0x0d41d170(plVar20,&uStack_5e8,1);
  lStack_5a8 = 0x6d6f646e61720c;
  func_0x0d41d170(plVar20,&lStack_5a8,0xff);
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  (**(code **)(*plVar20 + 0x10))(plVar20,&uStack_428);
  if ((uStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_630 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_61b,CONCAT41(uStack_61f,uStack_620)),
                    CONCAT17(uStack_629,CONCAT25(uStack_62b,CONCAT41(uStack_62f,bStack_630))) &
                    0xfffffffffffffffe);
  }
  uStack_61b = 0;
  uStack_618 = 0;
  bStack_630 = 0x28;
  uStack_62f = _DAT_01424c37;
  uStack_62b = (undefined2)_UNK_01424c3b;
  uStack_629 = (undefined1)((uint)_UNK_01424c3b >> 0x10);
  uStack_628 = (undefined1)((uint)_UNK_01424c3b >> 0x18);
  uStack_627 = _UNK_01424c3f;
  uStack_623 = (undefined2)_UNK_01424c43;
  uStack_621 = (undefined1)((uint)_UNK_01424c43 >> 0x10);
  uStack_620 = (undefined1)((uint)_UNK_01424c43 >> 0x18);
  uStack_61f = 0x7265746e;
  puStack_638 = (undefined8 *)0xc92101f1d661634;
  uStack_f0 = 0;
  bStack_680 = 0;
  uStack_67f = 0;
  lStack_f8 = 0;
  puStack_688 = (undefined8 *)&UNK_0f470ef0;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  puStack_6e8 = puStack_688;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f46baa0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  puStack_688 = (undefined8 *)0x0;
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&uStack_578,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar15 = plVar12 + 0x11;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0f46baf0;
  plVar12[0x2f] = 0;
  plVar12[0x30] = 0;
  plVar12[0x2e] = (long)(plVar12 + 0x2f);
  ppuVar33 = (undefined8 **)(plVar12 + 0x32);
  plVar12[0x32] = 0;
  plVar12[0x33] = 0;
  if (ppuVar33 != &puStack_6e8) {
    if (puStack_6e8 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_6e8)(&puStack_6e8,ppuVar33);
      puVar13 = puStack_6e8;
    }
    puStack_6e8 = (undefined8 *)0x0;
    *ppuVar33 = puVar13;
  }
  puVar16 = (uint *)(plVar12 + 0x12);
  plStack_690 = plVar15;
  if (plVar15 != (long *)&DAT_0f551f88) {
    if ((*puVar16 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar12[0x14] = _DAT_0f551fa0;
        uVar9 = uRam000000000f551f9c;
        uVar8 = _DAT_0f551f98;
        uVar7 = uRam000000000f551f94;
        *puVar16 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar12 + 0x94) = uVar7;
        *(undefined4 *)(plVar12 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar12 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar16,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar36 = (_DAT_0f551f90 & 1) != 0;
      lVar30 = 0xf551f91;
      if (bVar36) {
        lVar30 = _DAT_0f551fa0;
      }
      uVar25 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar36) {
        uVar25 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      FUN_04885120(puVar16,lVar30,uVar25);
    }
  }
  plVar12[0x11] = _DAT_0f551f88;
  plVar12[0x15] = 0;
  puStack_698 = puVar16;
  if (puStack_6e8 != (undefined8 *)0x0) {
    (*(code *)puStack_6e8[1])(&puStack_6e8);
  }
  plVar15 = plVar12 + 1;
  if (puStack_688 != (undefined8 *)0x0) {
    (*(code *)puStack_688[1])(&puStack_688);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f46bbd0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = &UNK_0f46bc20;
  puVar13[0xe] = plVar12 + 4;
  puVar13[0xf] = plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  uStack_6e0._0_4_ = (uint)puVar13;
  uStack_6e0._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
  puStack_6e8 = puVar13 + 4;
  puStack_6a0 = (uint *)(plVar12 + 4);
  puVar14 = (undefined4 *)FUN_05069c10(plStack_6a8,&puStack_638,0);
  plVar20 = *(long **)(puVar14 + 0x24);
  if (plVar20 < *(long **)(puVar14 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 == plStack_690) {
LAB_0d419016:
      *plVar20 = *plStack_690;
      plVar20[5] = (long)(puVar13 + 4);
      plVar20[6] = (long)puVar13;
LAB_0d41907e:
      LOCK();
      puVar13[1] = puVar13[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_698 & 1) == 0) {
        plVar20[3] = *(long *)(puStack_698 + 4);
        lVar30 = *(long *)(puStack_698 + 2);
        plVar20[1] = *(long *)puStack_698;
        plVar20[2] = lVar30;
        goto LAB_0d419016;
      }
      func_0x04885070(plVar20 + 1,plVar12[0x14],plVar12[0x13]);
      *plVar20 = *plStack_690;
      puVar13 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
      plVar20[5] = (long)puStack_6e8;
      plVar20[6] = CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
      if (puVar13 != (undefined8 *)0x0) goto LAB_0d41907e;
    }
    plVar20 = plVar20 + 7;
    *(long **)(puVar14 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x0506d310(puVar14 + 0x22,plStack_690,&puStack_6e8);
  }
  *(long **)(puVar14 + 0x24) = plVar20;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar12[0xf];
  *(undefined4 *)(plVar12 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar12 + 0x74) = uVar8;
  *(undefined4 *)(plVar12 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar12 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  plVar20 = (long *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  puVar16 = puStack_6a0;
  LOCK();
  lVar30 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    LOCK();
    lVar30 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
  }
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  (**(code **)(*(long *)puVar16 + 0x10))(puVar16,&uStack_448);
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(uStack_438,uStack_448 & 0xfffffffffffffffe);
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  if ((bStack_630 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_61b,CONCAT41(uStack_61f,uStack_620)),
                    CONCAT17(uStack_629,CONCAT25(uStack_62b,CONCAT41(uStack_62f,bStack_630))) &
                    0xfffffffffffffffe);
  }
  uStack_6d3 = 0;
  uStack_6cf = 0;
  uStack_6ce = 0;
  uStack_6cd = 0;
  ppuStack_6c8 = (undefined8 **)0x0;
  uStack_6e0._0_4_ = 0x6f726718;
  uStack_6e0._4_4_ = 0x5f646e75;
  uStack_6d8 = 0x6c;
  uStack_6d7 = 0x6c657665;
  puStack_6e8 = (undefined8 *)0x619abe164ce0aa87;
  uStack_1a0 = 0;
  puStack_1a8 = &UNK_0f470f08;
  plVar12 = (long *)func_0x0d41cbc0(plStack_6a8,&puStack_6e8,&puStack_1a8);
  *(undefined4 *)(plVar12 + 0x2a) = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_468);
  if ((uStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,uStack_468 & 0xfffffffffffffffe);
  }
  if (puStack_1a8 != (undefined *)0x0) {
    (**(code **)(puStack_1a8 + 8))(&puStack_1a8);
  }
  if (((uint)uStack_6e0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_6cd,CONCAT12(uStack_6ce,CONCAT11(uStack_6cf,uStack_6d3._3_1_))),
                    CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0) & 0xfffffffffffffffe);
  }
  uStack_674 = 0;
  uStack_670 = 0;
  uStack_668 = 0;
  bStack_680 = 0x16;
  uStack_67f = 0x617274736e6f63;
  uStack_678 = 0x73746e69;
  puStack_688 = (undefined8 *)0xf371af2fc9709967;
  puStack_2e8 = (undefined8 *)0x0;
  uStack_2e0 = 0;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f470f30;
  puStack_6e8 = (undefined8 *)0x0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  if (puStack_2e8 == (undefined8 *)0x0) {
    puStack_6e8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_2e8)(&puStack_2e8,&puStack_6e8);
    puStack_6e8 = puStack_2e8;
  }
  puStack_2e8 = (undefined8 *)0x0;
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&puStack_638,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0f470f80;
  ppuVar33 = (undefined8 **)(plVar12 + 0x2e);
  plVar12[0x2e] = 0;
  plVar12[0x2f] = 0;
  *(undefined1 *)(plVar12 + 0x36) = 0;
  if (ppuVar33 != &puStack_6e8) {
    if (puStack_6e8 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_6e8)(&puStack_6e8,ppuVar33);
      puVar13 = puStack_6e8;
    }
    puStack_6e8 = (undefined8 *)0x0;
    *ppuVar33 = puVar13;
  }
  plVar15 = plVar12 + 4;
  puVar16 = (uint *)(plVar12 + 0x12);
  plStack_690 = plVar15;
  if (plVar12 + 0x11 != (long *)&DAT_0f552108) {
    if ((*puVar16 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar12[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar16 = _DAT_0f552110;
        *(undefined4 *)((long)plVar12 + 0x94) = uVar7;
        *(undefined4 *)(plVar12 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar12 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar16,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar36 = (_DAT_0f552110 & 1) != 0;
      lVar30 = 0xf552111;
      if (bVar36) {
        lVar30 = _DAT_0f552120;
      }
      uVar25 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar36) {
        uVar25 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(puVar16,lVar30,uVar25);
    }
  }
  plVar20 = plVar12 + 1;
  plVar12[0x11] = _DAT_0f552108;
  plVar12[0x15] = 0;
  puStack_698 = puVar16;
  if (puStack_6e8 != (undefined8 *)0x0) {
    (*(code *)puStack_6e8[1])(&puStack_6e8);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f471078;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = &UNK_0f4710c8;
  puVar13[0xe] = plVar15;
  puVar13[0xf] = plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  uStack_6e0._0_4_ = (uint)puVar13;
  uStack_6e0._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
  puStack_6e8 = puVar13 + 4;
  puStack_6a0 = (uint *)(plVar12 + 0x11);
  puVar14 = (undefined4 *)FUN_05069c10(plStack_6a8,&puStack_688,1);
  plVar15 = *(long **)(puVar14 + 0x24);
  if (plVar15 < *(long **)(puVar14 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if ((uint *)plVar15 == puStack_6a0) {
LAB_0d41962a:
      *plVar15 = *(long *)puStack_6a0;
      plVar15[5] = (long)(puVar13 + 4);
      plVar15[6] = (long)puVar13;
LAB_0d419693:
      LOCK();
      puVar13[1] = puVar13[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_698 & 1) == 0) {
        plVar15[3] = *(long *)(puStack_698 + 4);
        lVar30 = *(long *)(puStack_698 + 2);
        plVar15[1] = *(long *)puStack_698;
        plVar15[2] = lVar30;
        goto LAB_0d41962a;
      }
      func_0x04885070(plVar15 + 1,plVar12[0x14],plVar12[0x13]);
      *plVar15 = *(long *)puStack_6a0;
      puVar13 = (undefined8 *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
      plVar15[5] = (long)puStack_6e8;
      plVar15[6] = CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
      if (puVar13 != (undefined8 *)0x0) goto LAB_0d419693;
    }
    plVar15 = plVar15 + 7;
    *(long **)(puVar14 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x0506d310(puVar14 + 0x22,puStack_6a0,&puStack_6e8);
  }
  *(long **)(puVar14 + 0x24) = plVar15;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar12[0xf];
  *(undefined4 *)(plVar12 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar12 + 0x74) = uVar8;
  *(undefined4 *)(plVar12 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar12 + 0x7c) = uVar10;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar17 = plVar15 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  plVar15 = (long *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar17 = plVar15 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar30 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    LOCK();
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  plVar15 = plStack_690;
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    plVar15 = plStack_690;
  }
  plStack_690 = plVar15;
  if (puStack_2e8 != (undefined8 *)0x0) {
    (*(code *)puStack_2e8[1])(&puStack_2e8);
  }
  if ((bStack_680 & 1) != 0) {
    func_0x0412a280(uStack_670,CONCAT71(uStack_67f,bStack_680) & 0xfffffffffffffffe);
  }
  uStack_6d7 = 0;
  uStack_6d3 = 0;
  uStack_6cf = 0;
  uStack_6ce = 0;
  uStack_6cd = 0;
  ppuStack_6c8 = (undefined8 **)0x0;
  uStack_6e0._0_4_ = 0x6f726710;
  uStack_6e0._4_4_ = 0x65646e75;
  uStack_6d8 = 100;
  puStack_6e8 = (undefined8 *)0x4003fe9790546beb;
  uStack_1e0 = 0;
  puStack_1e8 = &UNK_0f471368;
  plVar12 = (long *)func_0x0d41de80(plVar15,&puStack_6e8,&puStack_1e8);
  plVar12[0x12] = 0;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_488);
  if ((uStack_488 & 1) != 0) {
    func_0x0412a280(uStack_478,uStack_488 & 0xfffffffffffffffe);
  }
  if (puStack_1e8 != (undefined *)0x0) {
    (**(code **)(puStack_1e8 + 8))(&puStack_1e8);
  }
  if (((uint)uStack_6e0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_6cd,CONCAT12(uStack_6ce,CONCAT11(uStack_6cf,uStack_6d3._3_1_))),
                    CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0) & 0xfffffffffffffffe);
  }
  uStack_6d8 = 0;
  uStack_6d7 = 0;
  uStack_6d3 = 0;
  uStack_6cf = 0;
  uStack_6ce = 0;
  uStack_6cd = 0;
  ppuStack_6c8 = (undefined8 **)0x0;
  uStack_6e0._0_4_ = 0x76656c0e;
  uStack_6e0._4_4_ = 0x64656c65;
  puStack_6e8 = (undefined8 *)0xd9d94ba1c515fb0a;
  uStack_220 = 0;
  puStack_228 = &UNK_0f471380;
  plVar12 = (long *)func_0x0d41de80(plVar15,&puStack_6e8,&puStack_228);
  if (puStack_228 != (undefined *)0x0) {
    (**(code **)(puStack_228 + 8))(&puStack_228);
  }
  if (((uint)uStack_6e0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_6cd,CONCAT12(uStack_6ce,CONCAT11(uStack_6cf,uStack_6d3._3_1_))),
                    CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0) & 0xfffffffffffffffe);
  }
  plVar12[0x12] = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_498 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_4a8);
  if ((uStack_4a8 & 1) != 0) {
    func_0x0412a280(uStack_498,uStack_4a8 & 0xfffffffffffffffe);
  }
  apuStack_318[0] = &UNK_0f4713a8;
  ppuStack_2f8 = apuStack_318;
  ppuStack_328 = apuStack_348;
  apuStack_348[0] = &UNK_0f4713a8;
  uStack_5d2 = 0;
  uStack_5d0 = 0;
  plStack_5c8 = (long *)0x0;
  bStack_5e0 = 0x1a;
  uStack_5df = 0x735f78616d;
  uStack_5da = 0x6574;
  uStack_5d8 = 0x65;
  uStack_5d7 = 0x7373656e70;
  uStack_5e8 = (undefined8 *)0xe0adbfde66b77c3c;
  plStack_558 = &uStack_578;
  uStack_578 = (undefined8 *)&UNK_0f4713a8;
  bStack_630 = 0;
  uStack_62f = 0;
  uStack_62b = 0;
  uStack_629 = 0;
  puStack_608 = &uStack_628;
  uStack_628 = 0xa8;
  uStack_627 = 0xf4713;
  uStack_623 = 0;
  uStack_621 = 0;
  bStack_680 = 0;
  uStack_67f = 0;
  uStack_678 = 0xf4713a8;
  uStack_674 = 0;
  puStack_638 = (undefined8 *)0x0;
  puStack_688 = (undefined8 *)&UNK_0f471660;
  plStack_658 = (long *)&uStack_678;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f471438;
  puStack_6e8 = (undefined8 *)0x0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  if (plStack_658 == (long *)0x0) {
    plStack_6b8 = (long *)0x0;
  }
  else if (plStack_658 == (long *)&uStack_678) {
    plStack_6b8 = (long *)&uStack_6d8;
    (**(code **)(*plStack_658 + 0x18))();
    if (plStack_658 == (long *)&uStack_678) {
      lVar30 = 0x20;
    }
    else {
      lVar30 = 0x28;
      if (plStack_658 == (long *)0x0) goto LAB_0d419b4e;
    }
    (**(code **)(*plStack_658 + lVar30))();
  }
  else {
    plStack_6b8 = plStack_658;
    plStack_658 = (long *)0x0;
  }
LAB_0d419b4e:
  puStack_6e8 = puStack_688;
  puStack_688 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&lStack_5a8,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar20 = plVar15 + 0x11;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f471488;
  plVar15[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar15 + 0x2f) = 1;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  if (puStack_6e8 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_6e8)(&puStack_6e8,plVar15 + 0x30);
    puVar13 = puStack_6e8;
  }
  puStack_6e8 = (undefined8 *)0x0;
  plVar15[0x30] = (long)puVar13;
  puStack_6a0 = (uint *)(plVar15 + 0x12);
  if (plVar20 == (long *)&DAT_0f552078) {
    plVar15[0x15] = 0;
  }
  else {
    if ((*puStack_6a0 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552090;
        uVar9 = uRam000000000f55208c;
        uVar8 = _DAT_0f552088;
        uVar7 = uRam000000000f552084;
        *puStack_6a0 = _DAT_0f552080;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar7;
        *(undefined4 *)(plVar15 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puStack_6a0,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar36 = (_DAT_0f552080 & 1) != 0;
      lVar30 = 0xf552081;
      if (bVar36) {
        lVar30 = _DAT_0f552090;
      }
      uVar25 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar36) {
        uVar25 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      FUN_04885120(puStack_6a0,lVar30,uVar25);
    }
    plVar15[0x11] = _DAT_0f552078;
    plVar15[0x15] = 0;
    if (puStack_6e8 != (undefined8 *)0x0) {
      (*(code *)puStack_6e8[1])(&puStack_6e8);
    }
  }
  plVar17 = plVar15 + 1;
  if (puStack_688 != (undefined8 *)0x0) {
    (*(code *)puStack_688[1])(&puStack_688);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  plStack_6a8 = plVar17;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f471568;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = &UNK_0f4715b8;
  puVar13[0xe] = plVar15 + 4;
  puVar13[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  uStack_6e0._0_4_ = (uint)puVar13;
  uStack_6e0._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
  puStack_6e8 = puVar13 + 4;
  puStack_698 = (uint *)(plVar15 + 4);
  puVar14 = (undefined4 *)FUN_0d4ee460(plVar12,&uStack_5e8,0);
  plVar12 = *(long **)(puVar14 + 0x24);
  if (plVar12 < *(long **)(puVar14 + 0x26)) {
    plVar12[2] = 0;
    plVar12[3] = 0;
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[4] = 0;
    if (plVar12 != plVar20) {
      puVar16 = (uint *)(plVar12 + 1);
      if ((*puStack_6a0 & 1) == 0) {
        plVar12[3] = *(long *)(puStack_6a0 + 4);
        lVar30 = *(long *)(puStack_6a0 + 2);
        *(undefined8 *)puVar16 = *(undefined8 *)puStack_6a0;
        plVar12[2] = lVar30;
      }
      else {
        puStack_6a0 = puVar16;
        func_0x04885070(puVar16,plVar15[0x14],plVar15[0x13]);
      }
    }
    *plVar12 = *plVar20;
    plVar12[5] = (long)(puVar13 + 4);
    plVar12[6] = (long)puVar13;
    LOCK();
    puVar13[1] = puVar13[1] + 1;
    UNLOCK();
    plVar12 = plVar12 + 7;
    *(long **)(puVar14 + 0x24) = plVar12;
  }
  else {
    plVar12 = (long *)func_0x0d4f0230(puVar14 + 0x22,plVar20,&puStack_6e8);
  }
  plVar20 = plStack_6a8;
  *(long **)(puVar14 + 0x24) = plVar12;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar8;
  *(undefined4 *)(plVar15 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar10;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar17 = plVar12 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  plVar12 = (long *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar17 = plVar12 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  LOCK();
  lVar30 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  plVar15[0x2e] = 0x800000000;
  puStack_6e8 = (undefined8 *)0x0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  uStack_6d8 = 0;
  uStack_6d7 = 0;
  uStack_6d3 = uStack_6d3 & 0xff000000;
  (**(code **)(plVar15[4] + 0x10))(puStack_698,&puStack_6e8);
  plVar12 = plStack_690;
  if (((ulong)puStack_6e8 & 1) != 0) {
    func_0x0412a280(CONCAT35((undefined3)uStack_6d3,CONCAT41(uStack_6d7,uStack_6d8)),
                    (ulong)puStack_6e8 & 0xfffffffffffffffe);
  }
  if (puStack_638 != (undefined8 *)0x0) {
    (*(code *)puStack_638[1])(&puStack_638);
  }
  if (plStack_558 == &uStack_578) {
    lVar30 = 0x20;
LAB_0d41a011:
    (**(code **)(*plStack_558 + lVar30))();
  }
  else {
    lVar30 = 0x28;
    if (plStack_558 != (long *)0x0) goto LAB_0d41a011;
  }
  if ((bStack_5e0 & 1) != 0) {
    func_0x0412a280(uStack_5d0,
                    CONCAT26(uStack_5da,CONCAT51(uStack_5df,bStack_5e0)) & 0xfffffffffffffffe);
  }
  if (ppuStack_328 == apuStack_348) {
    lVar30 = 0x20;
LAB_0d41a02c:
    (**(code **)(*ppuStack_328 + lVar30))();
  }
  else {
    lVar30 = 0x28;
    if (ppuStack_328 != (undefined **)0x0) goto LAB_0d41a02c;
  }
  uStack_6d7 = 0;
  uStack_6d3 = 0;
  uStack_6cf = 0;
  uStack_6ce = 0;
  uStack_6cd = 0;
  ppuStack_6c8 = (undefined8 **)0x0;
  uStack_6e0._0_4_ = 0x626e7510;
  uStack_6e0._4_4_ = 0x65697275;
  uStack_6d8 = 100;
  puStack_6e8 = (undefined8 *)0x9945ab17ee6849f3;
  uStack_260 = 0;
  puStack_268 = &UNK_0f471678;
  plVar15 = (long *)func_0x0d41de80(plVar12,&puStack_6e8,&puStack_268);
  plVar15[0x12] = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_4c8);
  if ((uStack_4c8 & 1) != 0) {
    func_0x0412a280(uStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
  }
  if (puStack_268 != (undefined *)0x0) {
    (**(code **)(puStack_268 + 8))(&puStack_268);
  }
  if (((uint)uStack_6e0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_6cd,CONCAT12(uStack_6ce,CONCAT11(uStack_6cf,uStack_6d3._3_1_))),
                    CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0) & 0xfffffffffffffffe);
  }
  uStack_6cd = 0;
  ppuStack_6c8 = (undefined8 **)0x0;
  uStack_6e0._1_3_ = (undefined3)_DAT_013026dd;
  uStack_6e0._0_4_ = CONCAT31(uStack_6e0._1_3_,0x24);
  uStack_6e0._5_3_ = (undefined3)_UNK_013026e1;
  uStack_6e0._4_4_ = CONCAT31(uStack_6e0._5_3_,(char)((uint)_DAT_013026dd >> 0x18));
  uStack_6d8 = (undefined1)((uint)_UNK_013026e1 >> 0x18);
  uStack_6d7 = _UNK_013026e5;
  uStack_6d3 = _UNK_013026e9;
  uStack_6cf = 0x6f;
  uStack_6ce = 0x6e;
  puStack_6e8 = (undefined8 *)0xbfa849750b30d350;
  uStack_2a0 = 0;
  puStack_2a8 = &UNK_0f471690;
  plVar12 = (long *)func_0x0d41de80(plVar12,&puStack_6e8,&puStack_2a8);
  if (puStack_2a8 != (undefined *)0x0) {
    (**(code **)(puStack_2a8 + 8))(&puStack_2a8);
  }
  if (((uint)uStack_6e0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_6cd,CONCAT12(uStack_6ce,CONCAT11(uStack_6cf,uStack_6d3._3_1_))),
                    CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0) & 0xfffffffffffffffe);
  }
  apuStack_378[0] = &UNK_0f4716b8;
  ppuStack_358 = apuStack_378;
  ppuStack_388 = apuStack_3a8;
  apuStack_3a8[0] = &UNK_0f4716b8;
  uStack_598 = 0;
  uStack_590 = 0;
  lStack_5a8 = 0;
  uStack_5a0 = 0;
  plStack_588 = (long *)0x0;
  func_0x0412f5e0(&uStack_5a0,&UNK_01338bea,0x1f);
  lStack_5a8 = -0x61d9076479b832d9;
  puStack_638 = (undefined8 *)0x0;
  bStack_630 = 0;
  uStack_62f = 0;
  uStack_62b = 0;
  uStack_629 = 0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f471748;
  puStack_6e8 = (undefined8 *)0x0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  if (puStack_638 == (undefined8 *)0x0) {
    puStack_6e8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_638)(&puStack_638,&puStack_6e8);
    puStack_6e8 = puStack_638;
  }
  puStack_638 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&puStack_688,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plStack_6a8 = plVar15 + 0x11;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f471798;
  ppuVar33 = (undefined8 **)(plVar15 + 0x2e);
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (ppuVar33 != &puStack_6e8) {
    if (puStack_6e8 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_6e8)(&puStack_6e8,ppuVar33);
      puVar13 = puStack_6e8;
    }
    puStack_6e8 = (undefined8 *)0x0;
    *ppuVar33 = puVar13;
  }
  puVar16 = (uint *)(plVar15 + 0x12);
  if (plStack_6a8 != (long *)&DAT_0f551f58) {
    if ((*puVar16 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar15[0x14] = _DAT_0f551f70;
        uVar9 = uRam000000000f551f6c;
        uVar8 = _DAT_0f551f68;
        uVar7 = uRam000000000f551f64;
        *puVar16 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar7;
        *(undefined4 *)(plVar15 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar16,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar36 = (_DAT_0f551f60 & 1) != 0;
      lVar30 = 0xf551f61;
      if (bVar36) {
        lVar30 = _DAT_0f551f70;
      }
      uVar25 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar36) {
        uVar25 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar16,lVar30,uVar25);
    }
  }
  plVar20 = plVar15 + 1;
  plVar15[0x11] = _DAT_0f551f58;
  plVar15[0x15] = 0;
  if (puStack_6e8 != (undefined8 *)0x0) {
    (*(code *)puStack_6e8[1])(&puStack_6e8);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puStack_698 = (uint *)plVar20;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f471890;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = &UNK_0f4718e0;
  puVar13[0xe] = plVar15 + 4;
  puVar13[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  uStack_6e0._0_4_ = (uint)puVar13;
  uStack_6e0._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
  puStack_6e8 = puVar13 + 4;
  puStack_6a0 = (uint *)plVar12;
  puVar14 = (undefined4 *)FUN_0d4ee460(plVar12,&lStack_5a8,1);
  plVar12 = *(long **)(puVar14 + 0x24);
  if (plVar12 < *(long **)(puVar14 + 0x26)) {
    plVar12[2] = 0;
    plVar12[3] = 0;
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[4] = 0;
    if (plVar12 != plStack_6a8) {
      if ((*puVar16 & 1) == 0) {
        plVar12[3] = plVar15[0x14];
        lVar30 = plVar15[0x13];
        plVar12[1] = *(long *)puVar16;
        plVar12[2] = lVar30;
      }
      else {
        func_0x04885070(plVar12 + 1,plVar15[0x14],plVar15[0x13]);
      }
    }
    *plVar12 = *plStack_6a8;
    plVar12[5] = (long)(puVar13 + 4);
    plVar12[6] = (long)puVar13;
    LOCK();
    puVar13[1] = puVar13[1] + 1;
    UNLOCK();
    plVar12 = plVar12 + 7;
    *(long **)(puVar14 + 0x24) = plVar12;
  }
  else {
    plVar12 = (long *)func_0x0d4f0230(puVar14 + 0x22,plStack_6a8,&puStack_6e8);
  }
  puVar16 = puStack_698;
  *(long **)(puVar14 + 0x24) = plVar12;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  plVar12 = &uStack_5e8;
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar8;
  *(undefined4 *)(plVar15 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  plVar20 = (long *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar30 = *(long *)puVar16;
  *(long *)puVar16 = *(long *)puVar16 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar30 = *(long *)puVar16;
    *(long *)puVar16 = *(long *)puVar16 + -1;
    UNLOCK();
    if (lVar30 == 0) goto LAB_0d41a64f;
LAB_0d41a609:
    if (ppuStack_388 != (undefined **)0x0) goto LAB_0d41a616;
LAB_0d41a66e:
    plStack_5c8 = (long *)0x0;
LAB_0d41a6ed:
    plStack_548 = (long *)0x0;
LAB_0d41a6f9:
    uStack_570 = 0;
    uStack_578 = (undefined8 *)&UNK_0f471b68;
LAB_0d41a705:
    uStack_67f = 0;
    bStack_680 = 0;
    puStack_688 = (undefined8 *)0x0;
    (*(code *)*uStack_578)(&uStack_578,&puStack_688);
    puVar13 = uStack_578;
  }
  else {
    LOCK();
    lVar30 = *(long *)puVar16;
    *(long *)puVar16 = *(long *)puVar16 + -1;
    UNLOCK();
    if (lVar30 != 0) goto LAB_0d41a609;
LAB_0d41a64f:
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    if (ppuStack_388 == (undefined **)0x0) goto LAB_0d41a66e;
LAB_0d41a616:
    if (ppuStack_388 == apuStack_3a8) {
      plStack_5c8 = plVar12;
      (**(code **)(*ppuStack_388 + 0x18))(ppuStack_388,plVar12);
    }
    else {
      plStack_5c8 = (long *)(**(code **)(*ppuStack_388 + 0x10))();
    }
    plStack_548 = plStack_5c8;
    uStack_570 = 0;
    uStack_578 = (undefined8 *)&UNK_0f471b68;
    if (plStack_5c8 == (long *)0x0) goto LAB_0d41a6ed;
    if (plStack_5c8 != plVar12) {
      plStack_5c8 = (long *)0x0;
      goto LAB_0d41a6f9;
    }
    plStack_548 = alStack_568;
    (**(code **)(*plStack_5c8 + 0x18))(plStack_5c8);
    bStack_680 = 0;
    uStack_67f = 0;
    if (uStack_578 != (undefined8 *)0x0) goto LAB_0d41a705;
    puVar13 = (undefined8 *)0x0;
  }
  uStack_578 = (undefined8 *)0x0;
  puStack_688 = puVar13;
  puVar16 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar16 == (uint *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  *(long *)((long)puVar16 + 8) = 0;
  *(long *)((long)puVar16 + 0x10) = 0;
  *(undefined **)puVar16 = &UNK_0f471940;
  puStack_6e8 = (undefined8 *)0x0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  if (puVar13 == (undefined8 *)0x0) {
    puStack_6e8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puVar13)(&puStack_688,&puStack_6e8);
    puStack_6e8 = puStack_688;
  }
  puStack_688 = (undefined8 *)0x0;
  *(undefined **)((long)puVar16 + 0x20) = &UNK_0f2ccd78;
  *(long *)((long)puVar16 + 0x28) = 0;
  *(long *)((long)puVar16 + 0x30) = 0;
  *(long *)((long)puVar16 + 0x38) = 0;
  *(long *)((long)puVar16 + 0x40) = 0;
  *(long *)((long)puVar16 + 0x48) = 0;
  *(long *)((long)puVar16 + 0x50) = 0;
  *(long *)((long)puVar16 + 0x58) = 0;
  *(long *)((long)puVar16 + 0x60) = 0;
  *(undefined1 *)((long)puVar16 + 0x68) = 0;
  puStack_698 = puVar16;
  func_0x04aa75f0((long *)((long)puVar16 + 0x70),&uStack_538,&UNK_01254d89);
  *(undefined1 *)((long)puVar16 + 0x80) = 0;
  *(long *)((long)puVar16 + 0x88) = 0;
  *(long *)((long)puVar16 + 0x90) = 0;
  *(long *)((long)puVar16 + 0x98) = 0;
  *(long *)((long)puVar16 + 0xa0) = 0;
  *(long *)((long)puVar16 + 0xa8) = 0;
  *(long *)((long)puVar16 + 0xb0) = 0;
  *(long *)((long)puVar16 + 0xb8) = 0xffffffff;
  *(long *)((long)puVar16 + 0x130) = 0;
  *(long *)((long)puVar16 + 0x138) = 0;
  *(long *)((long)puVar16 + 0xc0) = 0;
  *(long *)((long)puVar16 + 200) = 0;
  *(long *)((long)puVar16 + 0xd0) = 0;
  *(long *)((long)puVar16 + 0xd8) = 0;
  *(long *)((long)puVar16 + 0xe0) = 0;
  *(long *)((long)puVar16 + 0xe8) = 0;
  *(long *)((long)puVar16 + 0xf0) = 0;
  *(long *)((long)puVar16 + 0xf8) = 0;
  *(undefined **)((long)puVar16 + 0x20) = &UNK_0f471990;
  *(long *)((long)puVar16 + 0x170) = 0;
  *(long *)((long)puVar16 + 0x178) = 0;
  if (puStack_6e8 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_6e8)(&puStack_6e8,(long *)((long)puVar16 + 0x170));
    puVar13 = puStack_6e8;
  }
  plVar20 = (long *)((long)puVar16 + 8);
  *(long *)((long)puVar16 + 0x170) = (long)puVar13;
  if (puStack_688 != (undefined8 *)0x0) {
    (*(code *)puStack_688[1])(&puStack_688);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plStack_3b0 = (long *)((long)puVar16 + 0x20);
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f471a70;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[4] = (long)&UNK_0f471ac0;
  plVar17[0xe] = (long)plStack_3b0;
  plVar17[0xf] = (long)puVar16;
  LOCK();
  *(long *)((long)puVar16 + 8) = *(long *)((long)puVar16 + 8) + 1;
  UNLOCK();
  puStack_640 = (uint *)(plVar17 + 1);
  plVar34 = (long *)plVar15[0x1c];
  plVar29 = (long *)plVar15[0x1b];
  for (plVar31 = plVar29; plStack_6a8 = plVar17, plVar31 != plVar34; plVar31 = plVar31 + 0x15) {
    if ((plVar31[0xf] == 0) && (plVar31[0x10] == -1)) goto LAB_0d41ac6a;
  }
  if ((long *)plVar15[0x1d] <= plVar34) {
    plVar34 = (long *)((long)plVar34 - (long)plVar29);
    plVar31 = (long *)(((long)plVar34 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((long *)0x186186186186186 < plVar31) goto LAB_0d41baf6;
    puVar16 = (uint *)(plVar15 + 0x1b);
    lVar30 = plVar15[0x1d] - (long)plVar29 >> 3;
    plVar17 = (long *)(lVar30 * -0x6186186186186186);
    if (plVar31 < plVar17) {
      plVar31 = plVar17;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar30 * -0x30c30c30c30c30c3)) {
      plVar31 = (long *)0x186186186186186;
    }
    ppuStack_6c8 = (undefined8 **)puVar16;
    if (plVar31 == (long *)0x0) {
      puVar13 = (undefined8 *)0x0;
LAB_0d41aa10:
      uStack_6e0 = (long *)((long)plVar34 + (long)puVar13);
      uStack_6d8 = SUB81(uStack_6e0,0);
      uStack_6d7 = (undefined4)((ulong)uStack_6e0 >> 8);
      uStack_6d3._0_3_ = (undefined3)((ulong)uStack_6e0 >> 0x28);
      puVar26 = puVar13 + (long)plVar31 * 0x15;
      uStack_6d3._3_1_ = SUB81(puVar26,0);
      uStack_6cf = (undefined1)((ulong)puVar26 >> 8);
      uStack_6ce = (undefined1)((ulong)puVar26 >> 0x10);
      uStack_6cd = (undefined5)((ulong)puVar26 >> 0x18);
      puStack_6e8 = puVar13;
      plStack_5f0 = (long *)puVar16;
      func_0x0d4f4380(uStack_6e0);
      plVar34 = (long *)(CONCAT35((undefined3)uStack_6d3,CONCAT41(uStack_6d7,uStack_6d8)) + 0xa8);
      lVar30 = plVar15[0x1b];
      lVar23 = plVar15[0x1c];
      lVar32 = (lVar30 - lVar23) + (long)uStack_6e0;
      if (lVar30 != lVar23) {
        lVar35 = 0;
        do {
          uVar21 = ((undefined8 *)(lVar30 + lVar35))[1];
          *(undefined8 *)(lVar32 + lVar35) = *(undefined8 *)(lVar30 + lVar35);
          ((undefined8 *)(lVar32 + lVar35))[1] = uVar21;
          *(undefined8 *)(lVar30 + lVar35) = 0;
          ((undefined8 *)(lVar30 + lVar35))[1] = 0;
          puVar13 = (undefined8 *)(lVar32 + 0x20 + lVar35);
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13 = (undefined8 *)(lVar32 + 0x10 + lVar35);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined8 *)(lVar32 + 0x30 + lVar35) = 0;
          *(undefined8 *)(lVar32 + 0x28 + lVar35) = *(undefined8 *)(lVar30 + 0x28 + lVar35);
          puVar14 = (undefined4 *)(lVar30 + 0x18 + lVar35);
          uVar7 = puVar14[1];
          uVar8 = puVar14[2];
          uVar9 = puVar14[3];
          puVar2 = (undefined4 *)(lVar32 + 0x18 + lVar35);
          *puVar2 = *puVar14;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined2 *)(lVar30 + 0x18 + lVar35) = 0;
          *(undefined8 *)(lVar32 + 0x10 + lVar35) = *(undefined8 *)(lVar30 + 0x10 + lVar35);
          FUN_04167a20(lVar35 + lVar32 + 0x38,lVar30 + lVar35 + 0x38);
          puVar13 = (undefined8 *)(lVar30 + 0x40 + lVar35);
          uVar21 = puVar13[1];
          puVar26 = (undefined8 *)(lVar32 + 0x40 + lVar35);
          *puVar26 = *puVar13;
          puVar26[1] = uVar21;
          puVar13 = (undefined8 *)(lVar30 + 0x50 + lVar35);
          uVar21 = puVar13[1];
          puVar26 = (undefined8 *)(lVar32 + 0x50 + lVar35);
          *puVar26 = *puVar13;
          puVar26[1] = uVar21;
          puVar13 = (undefined8 *)(lVar30 + 0x60 + lVar35);
          uVar21 = puVar13[1];
          puVar26 = (undefined8 *)(lVar32 + 0x60 + lVar35);
          *puVar26 = *puVar13;
          puVar26[1] = uVar21;
          puVar13 = (undefined8 *)(lVar30 + 0x60 + lVar35);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined8 *)(lVar32 + 0x70 + lVar35) = *(undefined8 *)(lVar30 + 0x70 + lVar35);
          puVar13 = (undefined8 *)(lVar30 + 0x78 + lVar35);
          uVar21 = puVar13[1];
          puVar26 = (undefined8 *)(lVar32 + 0x78 + lVar35);
          *puVar26 = *puVar13;
          puVar26[1] = uVar21;
          puVar13 = (undefined8 *)(lVar32 + 0x88 + lVar35);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined8 *)(lVar32 + 0x98 + lVar35) = 0;
          puVar14 = (undefined4 *)(lVar30 + 0x88 + lVar35);
          uVar7 = puVar14[1];
          uVar8 = puVar14[2];
          uVar9 = puVar14[3];
          puVar2 = (undefined4 *)(lVar32 + 0x88 + lVar35);
          *puVar2 = *puVar14;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined8 *)(lVar32 + 0x98 + lVar35) = *(undefined8 *)(lVar30 + 0x98 + lVar35);
          puVar13 = (undefined8 *)(lVar30 + 0x88 + lVar35);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined8 *)(lVar30 + 0x98 + lVar35) = 0;
          *(undefined2 *)(lVar32 + 0xa0 + lVar35) = *(undefined2 *)(lVar30 + 0xa0 + lVar35);
          lVar1 = lVar30 + lVar35;
          lVar35 = lVar35 + 0xa8;
        } while (lVar1 + 0xa8 != lVar23);
        do {
          func_0x0d4f1510(lVar30);
          lVar30 = lVar30 + 0xa8;
        } while (lVar30 != lVar23);
        lVar30 = *plStack_5f0;
      }
      puVar16 = puStack_698;
      plVar15[0x1b] = lVar32;
      plVar15[0x1c] = (long)plVar34;
      lVar23 = plVar15[0x1d];
      plVar15[0x1d] =
           CONCAT53(uStack_6cd,CONCAT12(uStack_6ce,CONCAT11(uStack_6cf,uStack_6d3._3_1_)));
      if (lVar30 != 0) {
        func_0x0412a280(lVar30,lVar23 - lVar30);
      }
      goto LAB_0d41abfd;
    }
    if (plVar31 < (long *)0x186186186186187) {
      puVar13 = (undefined8 *)
                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar31 * 0xa8);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0((long)plVar31 * 0xa8,0);
        puVar13 = (undefined8 *)0x0;
      }
      goto LAB_0d41aa10;
    }
LAB_0d41baec:
    func_0x04882eb0();
LAB_0d41baf1:
    func_0x0d4f45c0();
LAB_0d41baf6:
    uVar21 = func_0x0d4f44f0();
    uVar21 = func_0x04882e20(uVar21);
    ppuVar22 = (undefined **)func_0x04882e20(uVar21);
    if ((*puStack_640 & 1) != 0) {
      func_0x0412a280(*(long *)((long)puVar16 + 0x18),
                      *(ulong *)((long)puVar16 + 8) & 0xfffffffffffffffe);
    }
    plVar15[0x12] = (long)puVar16;
    plVar15 = plVar31 + 1;
    LOCK();
    lVar30 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
    LOCK();
    lVar30 = *plVar34;
    *plVar34 = *plVar34 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
    LOCK();
    lVar30 = *plVar34;
    *plVar34 = *plVar34 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
    if (uStack_5e8 != (undefined8 *)0x0) {
      (**(code **)((long)uStack_5e8 + 8))(&uStack_5e8);
    }
    lVar30 = 0x20;
    if ((plStack_588 == &lStack_5a8) || (lVar30 = 0x28, plStack_588 != (long *)0x0)) {
      (**(code **)(*plStack_588 + lVar30))();
    }
    if ((uStack_530 & 1) != 0) {
      func_0x0412a280(uStack_520,uStack_530 & 0xfffffffffffffffe);
    }
    lVar30 = 0x20;
    if ((ppuStack_388 == apuStack_3a8) || (lVar30 = 0x28, ppuStack_388 != (undefined **)0x0)) {
      (**(code **)(*ppuStack_388 + lVar30))();
    }
    lVar30 = 0x20;
    if ((ppuStack_358 == apuStack_378) || (lVar30 = 0x28, ppuStack_358 != (undefined **)0x0)) {
      (**(code **)(*ppuStack_358 + lVar30))();
    }
    lVar30 = 0x20;
    ppuVar28 = ppuStack_2f8;
    if ((ppuStack_2f8 != apuStack_318) && (lVar30 = 0x28, ppuStack_2f8 == (undefined **)0x0)) {
      ppuVar28 = ppuVar22;
      lVar30 = func_0x0eee2d70();
    }
    (**(code **)(*ppuVar28 + lVar30))();
    func_0x0eee2d70(ppuVar22);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  func_0x0d4f4380(plVar34);
  plVar34 = plVar34 + 0x15;
  plVar15[0x1c] = (long)plVar34;
LAB_0d41abfd:
  plVar15[0x1c] = (long)plVar34;
  pbVar18 = (byte *)plVar34[-0x15];
  if ((*pbVar18 & 1) == 0) {
    *pbVar18 = 0x26;
    pbVar18 = pbVar18 + 1;
  }
  else {
    pbVar18[8] = 0x13;
    pbVar18[9] = 0;
    pbVar18[10] = 0;
    pbVar18[0xb] = 0;
    pbVar18[0xc] = 0;
    pbVar18[0xd] = 0;
    pbVar18[0xe] = 0;
    pbVar18[0xf] = 0;
    pbVar18 = *(byte **)(pbVar18 + 0x10);
  }
  uVar9 = _UNK_01494d69;
  uVar8 = _UNK_01494d65;
  uVar7 = _UNK_01494d61;
  *(undefined4 *)pbVar18 = _DAT_01494d5d;
  *(undefined4 *)(pbVar18 + 4) = uVar7;
  *(undefined4 *)(pbVar18 + 8) = uVar8;
  *(undefined4 *)(pbVar18 + 0xc) = uVar9;
  pbVar18[0xf] = 0x65;
  pbVar18[0x10] = 0x6e;
  pbVar18[0x11] = 0x74;
  pbVar18[0x12] = 0x3e;
  pbVar18[0x13] = 0;
  lVar30 = plVar15[0x1c];
  plVar31 = (long *)(lVar30 - 0xa8);
  *(char *)(lVar30 + -7) = (char)plVar15[0x10];
  *(undefined8 *)(lVar30 + -0x30) = 0;
  *(undefined8 *)(lVar30 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar30 + -8) = 0;
LAB_0d41ac6a:
  plVar15 = plStack_6a8;
  plVar12 = &uStack_5e8;
  plVar17 = (long *)((long)puVar16 + 0x88);
  plVar27 = plStack_6a8 + 4;
  plVar29 = (long *)plVar31[0x12];
  if (plVar29 < (long *)plVar31[0x13]) {
    plVar29[2] = 0;
    plVar29[3] = 0;
    *plVar29 = 0;
    plVar29[1] = 0;
    plVar29[4] = 0;
    if (plVar29 != plVar17) {
      if ((*(byte *)((long)puVar16 + 0x90) & 1) == 0) {
        plVar29[3] = *(long *)((long)puVar16 + 0xa0);
        lVar30 = *(long *)((long)puVar16 + 0x98);
        plVar29[1] = *(long *)((long)puVar16 + 0x90);
        plVar29[2] = lVar30;
      }
      else {
        plStack_5f0 = plVar27;
        func_0x04885070(plVar29 + 1,*(long *)((long)puVar16 + 0xa0),*(long *)((long)puVar16 + 0x98))
        ;
        plVar27 = plStack_5f0;
      }
    }
    *plVar29 = *plVar17;
    plVar29[5] = (long)plVar27;
    plVar29[6] = (long)plVar15;
    LOCK();
    plVar15 = plVar15 + 1;
    *plVar15 = *plVar15 + 1;
    UNLOCK();
    plVar29 = plVar29 + 7;
    plVar31[0x12] = (long)plVar29;
    plVar12 = plStack_3b0;
  }
  else {
    lVar30 = (long)plVar29 - plVar31[0x11];
    plVar15 = (long *)((lVar30 >> 3) * 0x6db6db6db6db6db7 + 1);
    plVar34 = plStack_6a8;
    if ((long *)0x492492492492492 < plVar15) goto LAB_0d41baf1;
    lVar23 = plVar31[0x13] - plVar31[0x11] >> 3;
    plVar12 = (long *)(lVar23 * -0x2492492492492492);
    if (plVar15 < plVar12) {
      plVar15 = plVar12;
    }
    plVar12 = plVar31 + 0x11;
    if (0x249249249249248 < (ulong)(lVar23 * 0x6db6db6db6db6db7)) {
      plVar15 = (long *)0x492492492492492;
    }
    ppuStack_6c8 = (undefined8 **)plVar12;
    plStack_5f0 = plVar12;
    if (plVar15 == (long *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      if ((long *)0x492492492492492 < plVar15) goto LAB_0d41baec;
      puVar13 = (undefined8 *)
                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar15 * 0x38);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0((long)plVar15 * 0x38,0);
        puVar13 = (undefined8 *)0x0;
      }
    }
    plVar12 = (long *)((long)puVar13 + lVar30);
    uStack_6d8 = SUB81(plVar12,0);
    uStack_6d7 = (undefined4)((ulong)plVar12 >> 8);
    uStack_6d3._0_3_ = (undefined3)((ulong)plVar12 >> 0x28);
    puVar26 = puVar13 + (long)plVar15 * 7;
    uStack_6d3._3_1_ = SUB81(puVar26,0);
    uStack_6cf = (undefined1)((ulong)puVar26 >> 8);
    uStack_6ce = (undefined1)((ulong)puVar26 >> 0x10);
    uStack_6cd = (undefined5)((ulong)puVar26 >> 0x18);
    puVar26 = (undefined8 *)((long)puVar13 + lVar30 + 0x10);
    *puVar26 = 0;
    puVar26[1] = 0;
    *(undefined8 *)((long)puVar13 + lVar30) = 0;
    ((undefined8 *)((long)puVar13 + lVar30))[1] = 0;
    *(undefined8 *)((long)puVar13 + lVar30 + 0x20) = 0;
    uStack_6e0 = plVar12;
    plVar29 = plVar12;
    puStack_6e8 = puVar13;
    if (plVar12 != plVar17) {
      puVar14 = (undefined4 *)((long)puVar13 + lVar30 + 8);
      if ((*(byte *)((long)puStack_698 + 0x90) & 1) == 0) {
        *(long *)((long)puVar13 + lVar30 + 0x18) = *(long *)((long)puStack_698 + 0xa0);
        uVar7 = *(undefined4 *)((long)puStack_698 + 0x94);
        lVar23 = *(long *)((long)puStack_698 + 0x98);
        uVar8 = *(undefined4 *)((long)puStack_698 + 0x9c);
        *puVar14 = *(undefined4 *)((long)puStack_698 + 0x90);
        *(undefined4 *)((long)puVar13 + lVar30 + 0xc) = uVar7;
        *(int *)((long)puVar13 + lVar30 + 0x10) = (int)lVar23;
        *(undefined4 *)((long)puVar13 + lVar30 + 0x14) = uVar8;
      }
      else {
        func_0x04885070(puVar14,*(long *)((long)puStack_698 + 0xa0),
                        *(long *)((long)puStack_698 + 0x98));
        plVar29 = (long *)CONCAT35((undefined3)uStack_6d3,CONCAT41(uStack_6d7,uStack_6d8));
      }
    }
    *plVar12 = *plVar17;
    plVar12[5] = (long)plVar27;
    plVar12[6] = (long)plStack_6a8;
    LOCK();
    plStack_6a8[1] = plStack_6a8[1] + 1;
    UNLOCK();
    plVar29 = plVar29 + 7;
    uStack_6d8 = SUB81(plVar29,0);
    uStack_6d7 = (undefined4)((ulong)plVar29 >> 8);
    uStack_6d3._0_3_ = (undefined3)((ulong)plVar29 >> 0x28);
    puVar26 = (undefined8 *)plVar31[0x11];
    puVar5 = (undefined8 *)plVar31[0x12];
    puVar13 = (undefined8 *)((long)uStack_6e0 + ((long)puVar26 - (long)puVar5));
    puVar19 = puVar13;
    puVar24 = puVar26;
    if ((long)puVar26 - (long)puVar5 != 0) {
      do {
        puVar19[2] = 0;
        puVar19[3] = 0;
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[4] = 0;
        puVar19[3] = puVar24[3];
        uVar21 = puVar24[2];
        puVar19[1] = puVar24[1];
        puVar19[2] = uVar21;
        *(undefined2 *)(puVar24 + 1) = 0;
        *puVar19 = *puVar24;
        uVar21 = puVar24[6];
        puVar19[5] = puVar24[5];
        puVar19[6] = uVar21;
        puVar24[5] = 0;
        puVar24[6] = 0;
        puVar24 = puVar24 + 7;
        puVar19 = puVar19 + 7;
      } while (puVar24 != puVar5);
      do {
        plVar12 = (long *)puVar26[6];
        if (plVar12 == (long *)0x0) {
LAB_0d41af54:
          bVar3 = *(byte *)(puVar26 + 1);
        }
        else {
          LOCK();
          plVar15 = plVar12 + 1;
          lVar30 = *plVar15;
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (lVar30 != 0) goto LAB_0d41af54;
          (**(code **)(*plVar12 + 0x10))(plVar12);
          func_0x0412c2d0(plVar12);
          bVar3 = *(byte *)(puVar26 + 1);
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(puVar26[3],puVar26[1] & 0xfffffffffffffffe);
        }
        puVar26 = puVar26 + 7;
      } while (puVar26 != puVar5);
      puVar26 = (undefined8 *)*plStack_5f0;
      plVar29 = (long *)CONCAT35((undefined3)uStack_6d3,CONCAT41(uStack_6d7,uStack_6d8));
    }
    plVar12 = plStack_3b0;
    plVar31[0x11] = (long)puVar13;
    plVar31[0x12] = (long)plVar29;
    lVar30 = plVar31[0x13];
    plVar31[0x13] = CONCAT53(uStack_6cd,CONCAT12(uStack_6ce,CONCAT11(uStack_6cf,uStack_6d3._3_1_)));
    if (puVar26 != (undefined8 *)0x0) {
      func_0x0412a280(puVar26,lVar30 - (long)puVar26);
    }
  }
  puVar16 = puStack_698;
  plVar31[0x12] = (long)plVar29;
  lVar30 = *plVar31;
  uVar7 = *(undefined4 *)((long)plVar31 + 4);
  lVar23 = plVar31[1];
  uVar8 = *(undefined4 *)((long)plVar31 + 0xc);
  if (plVar31[1] != 0) {
    LOCK();
    plVar15 = (long *)(plVar31[1] + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = *(long **)((long)puStack_698 + 0x78);
  *(int *)((long)puStack_698 + 0x70) = (int)lVar30;
  *(undefined4 *)((long)puStack_698 + 0x74) = uVar7;
  *(int *)((long)puStack_698 + 0x78) = (int)lVar23;
  *(undefined4 *)((long)puStack_698 + 0x7c) = uVar8;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar17 = plVar15 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  plVar15 = plStack_6a8;
  *(undefined1 *)((long)puVar16 + 0x80) = *(undefined1 *)((long)plVar31 + 0xa1);
  LOCK();
  lVar30 = *(long *)puStack_640;
  *(long *)puStack_640 = *(long *)puStack_640 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar30 == 0) goto LAB_0d41b1f7;
LAB_0d41b079:
    LOCK();
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar30 != 0) goto LAB_0d41b079;
LAB_0d41b1f7:
    (**(code **)(*(long *)puVar16 + 0x10))(puVar16);
    func_0x0412c2d0(puVar16);
    LOCK();
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*(long *)puVar16 + 0x10))(puVar16);
    func_0x0412c2d0(puVar16);
  }
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_3c8);
  if ((uStack_3c8 & 1) != 0) {
    func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
  }
  if (uStack_578 != (undefined8 *)0x0) {
    (**(code **)((long)uStack_578 + 8))(&uStack_578);
  }
  if (plStack_5c8 == &uStack_5e8) {
    lVar30 = 0x20;
LAB_0d41b23b:
    (**(code **)(*plStack_5c8 + lVar30))();
  }
  else {
    lVar30 = 0x28;
    if (plStack_5c8 != (long *)0x0) goto LAB_0d41b23b;
  }
  if (puStack_638 != (undefined8 *)0x0) {
    (*(code *)puStack_638[1])(&puStack_638);
  }
  if ((uStack_5a0 & 1) != 0) {
    func_0x0412a280(uStack_590,uStack_5a0 & 0xfffffffffffffffe);
  }
  uStack_528 = 0;
  uStack_520 = 0;
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  func_0x0412f5e0(&uStack_530,&UNK_0148c48f,0x32);
  uStack_538 = 0x75cc29ddff7c9d48;
  if (ppuStack_388 == (undefined **)0x0) {
    plStack_588 = (long *)0x0;
LAB_0d41b2e3:
    plStack_5b8 = (long *)0x0;
LAB_0d41b2ef:
    uStack_5da = 0;
    uStack_5df = 0;
    bStack_5e0 = 0;
    uStack_5e8 = (undefined8 *)&UNK_0f471d60;
LAB_0d41b2fb:
    uStack_67f = 0;
    bStack_680 = 0;
    puStack_688 = (undefined8 *)0x0;
    (*(code *)*uStack_5e8)(&uStack_5e8,&puStack_688);
    puVar13 = uStack_5e8;
  }
  else {
    if (ppuStack_388 == apuStack_3a8) {
      plStack_588 = &lStack_5a8;
      (**(code **)(*ppuStack_388 + 0x18))();
    }
    else {
      plStack_588 = (long *)(**(code **)(*ppuStack_388 + 0x10))();
    }
    plStack_5b8 = plStack_588;
    bStack_5e0 = 0;
    uStack_5df = 0;
    uStack_5da = 0;
    uStack_5e8 = (undefined8 *)&UNK_0f471d60;
    if (plStack_588 == (long *)0x0) goto LAB_0d41b2e3;
    if (plStack_588 != &lStack_5a8) {
      plStack_588 = (long *)0x0;
      goto LAB_0d41b2ef;
    }
    plStack_5b8 = (long *)&uStack_5d8;
    (**(code **)(*plStack_588 + 0x18))(plStack_588);
    bStack_680 = 0;
    uStack_67f = 0;
    if (uStack_5e8 != (undefined8 *)0x0) goto LAB_0d41b2fb;
    puVar13 = (undefined8 *)0x0;
  }
  uStack_5e8 = (undefined8 *)0x0;
  puStack_688 = puVar13;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f471b90;
  puStack_6e8 = (undefined8 *)0x0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  if (puVar13 == (undefined8 *)0x0) {
    puStack_6e8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puVar13)(&puStack_688,&puStack_6e8);
    puStack_6e8 = puStack_688;
  }
  puStack_688 = (undefined8 *)0x0;
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&uStack_641,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar15 = plVar12 + 0x11;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0f471be0;
  plVar12[0x2f] = 0;
  plVar12[0x30] = 0;
  plVar12[0x2e] = (long)(plVar12 + 0x2f);
  ppuVar33 = (undefined8 **)(plVar12 + 0x32);
  plVar12[0x32] = 0;
  plVar12[0x33] = 0;
  if (ppuVar33 != &puStack_6e8) {
    if (puStack_6e8 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_6e8)(&puStack_6e8,ppuVar33);
      puVar13 = puStack_6e8;
    }
    puStack_6e8 = (undefined8 *)0x0;
    *ppuVar33 = puVar13;
  }
  puVar16 = (uint *)(plVar12 + 0x12);
  plStack_6a8 = plVar15;
  if (plVar15 != (long *)&DAT_0f551f88) {
    if ((*puVar16 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar12[0x14] = _DAT_0f551fa0;
        uVar9 = uRam000000000f551f9c;
        uVar8 = _DAT_0f551f98;
        uVar7 = uRam000000000f551f94;
        *puVar16 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar12 + 0x94) = uVar7;
        *(undefined4 *)(plVar12 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar12 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar16,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar36 = (_DAT_0f551f90 & 1) != 0;
      lVar30 = 0xf551f91;
      if (bVar36) {
        lVar30 = _DAT_0f551fa0;
      }
      uVar25 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar36) {
        uVar25 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      FUN_04885120(puVar16,lVar30,uVar25);
    }
  }
  plVar12[0x11] = _DAT_0f551f88;
  plVar12[0x15] = 0;
  puStack_640 = puVar16;
  if (puStack_6e8 != (undefined8 *)0x0) {
    (*(code *)puStack_6e8[1])(&puStack_6e8);
  }
  plVar15 = plVar12 + 1;
  if (puStack_688 != (undefined8 *)0x0) {
    (*(code *)puStack_688[1])(&puStack_688);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f471cc0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = &UNK_0f471d10;
  puVar13[0xe] = plVar12 + 4;
  puVar13[0xf] = plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  uStack_6e0._0_4_ = (uint)puVar13;
  uStack_6e0._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
  puStack_6e8 = puVar13 + 4;
  puStack_698 = (uint *)(plVar12 + 4);
  puVar14 = (undefined4 *)FUN_0d4ee460(puStack_6a0,&uStack_538,0);
  plVar20 = *(long **)(puVar14 + 0x24);
  if (plVar20 < *(long **)(puVar14 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plStack_6a8) {
      puVar16 = (uint *)(plVar20 + 1);
      if ((*puStack_640 & 1) == 0) {
        plVar20[3] = *(long *)(puStack_640 + 4);
        lVar30 = *(long *)(puStack_640 + 2);
        *(undefined8 *)puVar16 = *(undefined8 *)puStack_640;
        plVar20[2] = lVar30;
      }
      else {
        puStack_640 = puVar16;
        func_0x04885070(puVar16,plVar12[0x14],plVar12[0x13]);
      }
    }
    *plVar20 = *plStack_6a8;
    plVar20[5] = (long)(puVar13 + 4);
    plVar20[6] = (long)puVar13;
    LOCK();
    puVar13[1] = puVar13[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    *(long **)(puVar14 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x0d4f0230(puVar14 + 0x22,plStack_6a8,&puStack_6e8);
  }
  puVar16 = puStack_6a0;
  *(long **)(puVar14 + 0x24) = plVar20;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar12[0xf];
  *(undefined4 *)(plVar12 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar12 + 0x74) = uVar8;
  *(undefined4 *)(plVar12 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar12 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  plVar20 = (long *)CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0);
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    lVar30 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  puVar11 = puStack_698;
  LOCK();
  lVar30 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    LOCK();
    lVar30 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
  }
  puStack_6e8 = (undefined8 *)0x0;
  uStack_6e0._0_4_ = 0;
  uStack_6e0._4_4_ = 0;
  uStack_6d8 = 0;
  uStack_6d7 = 0;
  uStack_6d3 = uStack_6d3 & 0xff000000;
  (**(code **)(*(long *)puVar11 + 0x10))(puVar11,&puStack_6e8);
  plVar12 = plStack_690;
  if (((ulong)puStack_6e8 & 1) != 0) {
    func_0x0412a280(CONCAT35((undefined3)uStack_6d3,CONCAT41(uStack_6d7,uStack_6d8)),
                    (ulong)puStack_6e8 & 0xfffffffffffffffe);
  }
  if (uStack_5e8 != (undefined8 *)0x0) {
    (**(code **)((long)uStack_5e8 + 8))(&uStack_5e8);
  }
  if (plStack_588 == &lStack_5a8) {
    lVar30 = 0x20;
LAB_0d41b835:
    (**(code **)(*plStack_588 + lVar30))();
  }
  else {
    lVar30 = 0x28;
    if (plStack_588 != (long *)0x0) goto LAB_0d41b835;
  }
  if ((uStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,uStack_530 & 0xfffffffffffffffe);
  }
  if (ppuStack_388 == apuStack_3a8) {
    lVar30 = 0x20;
LAB_0d41b850:
    (**(code **)(*ppuStack_388 + lVar30))();
  }
  else {
    lVar30 = 0x28;
    if (ppuStack_388 != (undefined **)0x0) goto LAB_0d41b850;
  }
  auStack_4e8[0] = 0;
  auStack_4e8[1] = 0;
  auStack_4e8[2] = 0;
  (**(code **)(*(long *)puVar16 + 0x10))(puVar16,auStack_4e8);
  if ((auStack_4e8[0] & 1) != 0) {
    func_0x0412a280(auStack_4e8[2],auStack_4e8[0] & 0xfffffffffffffffe);
  }
  auStack_508[0] = 0;
  auStack_508[1] = 0;
  auStack_508[2] = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,auStack_508);
  if ((auStack_508[0] & 1) != 0) {
    func_0x0412a280(auStack_508[2],auStack_508[0] & 0xfffffffffffffffe);
  }
  if (ppuStack_358 == apuStack_378) {
    lVar30 = 0x20;
LAB_0d41b932:
    (**(code **)(*ppuStack_358 + lVar30))();
    if (ppuStack_2f8 == apuStack_318) {
LAB_0d41b94d:
      lVar30 = 0x20;
      goto LAB_0d41b952;
    }
  }
  else {
    lVar30 = 0x28;
    if (ppuStack_358 != (undefined **)0x0) goto LAB_0d41b932;
    if (ppuStack_2f8 == apuStack_318) goto LAB_0d41b94d;
  }
  lVar30 = 0x28;
  if (ppuStack_2f8 == (undefined **)0x0) {
    return;
  }
LAB_0d41b952:
  (**(code **)(*ppuStack_2f8 + lVar30))();
  return;
}



/* ---- referenced strings ----
 * 0x1268347  facing_direction
 * 0x12b5d34  tructure_reference
 * 0x13026dd  block_intersection
 * 0x13d7d07  adjustment_radius
 * 0x1424c37  rotate_around_center
 * 0x1494d5d  <any array element>
 */
