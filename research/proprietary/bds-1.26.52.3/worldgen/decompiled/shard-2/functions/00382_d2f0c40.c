/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3f0c40 (ELF vaddr 0xd2f0c40)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3f0c40, 0d3f2294]]
 * Ghidra: FUN_0d3f0c40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3f0c40(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 **ppuVar16;
  bool bVar17;
  undefined1 uStack_539;
  undefined8 *puStack_538;
  byte bStack_530;
  undefined5 uStack_52f;
  undefined2 uStack_52a;
  undefined1 uStack_528;
  undefined1 uStack_527;
  undefined1 uStack_526;
  undefined1 uStack_525;
  undefined1 uStack_524;
  undefined1 uStack_523;
  undefined2 uStack_522;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long *plStack_4f8;
  uint *puStack_4f0;
  long *plStack_4e8;
  undefined8 uStack_4e0;
  byte bStack_4d8;
  undefined4 uStack_4d7;
  undefined4 uStack_4d3;
  undefined4 uStack_4cf;
  undefined4 uStack_4cb;
  undefined7 uStack_4c7;
  undefined8 uStack_4c0;
  ulong auStack_4b8 [4];
  ulong auStack_498 [4];
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long alStack_1b8 [8];
  long alStack_178 [8];
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_526 = 0;
  uStack_525 = 0;
  uStack_524 = 0;
  uStack_523 = 0;
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x12;
  uStack_52f = 0x625f706974;
  uStack_52a = 0x6f6c;
  uStack_528 = 99;
  uStack_527 = 0x6b;
  puStack_538 = (undefined8 *)0x18eb3e3031e80c06;
  uStack_230 = 0;
  puStack_238 = &UNK_0f46e130;
  plVar8 = (long *)func_0x0d3f29a0(param_1,&puStack_538,&puStack_238);
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_3d8);
  if ((uStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,uStack_3d8 & 0xfffffffffffffffe);
  }
  if (puStack_238 != (undefined *)0x0) {
    (**(code **)(puStack_238 + 8))(&puStack_238);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x1a;
  uStack_52f = 0x7473757266;
  uStack_52a = 0x6d75;
  uStack_528 = 0x5f;
  uStack_527 = 0x62;
  uStack_526 = 0x6c;
  uStack_525 = 0x6f;
  uStack_524 = 99;
  uStack_523 = 0x6b;
  puStack_538 = (undefined8 *)0xd4f83a5c9b0372b;
  uStack_270 = 0;
  puStack_278 = &UNK_0f46e148;
  plVar8 = (long *)func_0x0d3f29a0(param_1,&puStack_538,&puStack_278);
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_3f8);
  if ((uStack_3f8 & 1) != 0) {
    func_0x0412a280(uStack_3e8,uStack_3f8 & 0xfffffffffffffffe);
  }
  if (puStack_278 != (undefined *)0x0) {
    (**(code **)(puStack_278 + 8))(&puStack_278);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_523 = 0;
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x18;
  uStack_52f = 0x6c6464696d;
  uStack_52a = 0x5f65;
  uStack_528 = 0x62;
  uStack_527 = 0x6c;
  uStack_526 = 0x6f;
  uStack_525 = 99;
  uStack_524 = 0x6b;
  puStack_538 = (undefined8 *)0x7ef9987f15292658;
  uStack_2b0 = 0;
  puStack_2b8 = &UNK_0f46e160;
  plVar8 = (long *)func_0x0d3f29a0(param_1,&puStack_538,&puStack_2b8);
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_418);
  if ((uStack_418 & 1) != 0) {
    func_0x0412a280(uStack_408,uStack_418 & 0xfffffffffffffffe);
  }
  if (puStack_2b8 != (undefined *)0x0) {
    (**(code **)(puStack_2b8 + 8))(&puStack_2b8);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_525 = 0;
  uStack_524 = 0;
  uStack_523 = 0;
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x14;
  uStack_52f = 0x5f65736162;
  uStack_52a = 0x6c62;
  uStack_528 = 0x6f;
  uStack_527 = 99;
  uStack_526 = 0x6b;
  puStack_538 = (undefined8 *)0x41776446994f06e8;
  uStack_2f0 = 0;
  puStack_2f8 = &UNK_0f46e178;
  plVar8 = (long *)func_0x0d3f29a0(param_1,&puStack_538,&puStack_2f8);
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_438);
  if ((uStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  if (puStack_2f8 != (undefined *)0x0) {
    (**(code **)(puStack_2f8 + 8))(&puStack_2f8);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_4cb = 0;
  uStack_4c7 = 0;
  uStack_4c0 = 0;
  bStack_4d8 = 0x18;
  uStack_4d7 = 0x67696568;
  uStack_4d3 = 0x725f7468;
  uStack_4cf = 0x65676e61;
  uStack_4e0 = 0x2851ba08acb7b05e;
  uStack_70 = 0;
  uStack_3b0 = 0;
  lStack_78 = 0;
  puStack_3b8 = (undefined8 *)&UNK_0f46e190;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_538 = puStack_3b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f466098;
  bStack_530 = 0;
  uStack_52f = 0;
  uStack_52a = 0;
  puStack_3b8 = (undefined8 *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_539,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar12 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f4660e8;
  plVar8[0x2e] = 0x7fffffff80000000;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  if (puStack_538 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_538)(&puStack_538,plVar8 + 0x30);
    puVar9 = puStack_538;
  }
  puStack_538 = (undefined8 *)0x0;
  plVar8[0x30] = (long)puVar9;
  puStack_4f0 = (uint *)(plVar8 + 0x12);
  if (plVar12 == (long *)&DAT_0f5520a8) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puStack_4f0 & 1) == 0) {
      if ((_DAT_0f5520b0 & 1) == 0) {
        plVar8[0x14] = _DAT_0f5520c0;
        uVar6 = uRam000000000f5520bc;
        uVar5 = _DAT_0f5520b8;
        uVar4 = uRam000000000f5520b4;
        *puStack_4f0 = _DAT_0f5520b0;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar4;
        *(undefined4 *)(plVar8 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puStack_4f0,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
      }
    }
    else {
      bVar17 = (_DAT_0f5520b0 & 1) != 0;
      lVar15 = 0xf5520b1;
      if (bVar17) {
        lVar15 = _DAT_0f5520c0;
      }
      uVar14 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
      if (bVar17) {
        uVar14 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
      }
      func_0x04885120(puStack_4f0,lVar15,uVar14);
    }
    plVar8[0x11] = _DAT_0f5520a8;
    plVar8[0x15] = 0;
    if (puStack_538 != (undefined8 *)0x0) {
      (*(code *)puStack_538[1])(&puStack_538);
    }
  }
  plVar13 = plVar8 + 1;
  plStack_4f8 = plVar12;
  if (puStack_3b8 != (undefined8 *)0x0) {
    (*(code *)puStack_3b8[1])(&puStack_3b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f4661c8;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0f466218;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  bStack_530 = (byte)puVar9;
  uStack_52f = (undefined5)((ulong)puVar9 >> 8);
  uStack_52a = (undefined2)((ulong)puVar9 >> 0x30);
  puStack_538 = puVar9 + 4;
  plStack_4e8 = plVar8 + 4;
  puVar10 = (undefined4 *)func_0x050a80f0(param_1,&uStack_4e0,0);
  plVar12 = *(long **)(puVar10 + 0x24);
  if (plVar12 < *(long **)(puVar10 + 0x26)) {
    plVar12[2] = 0;
    plVar12[3] = 0;
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[4] = 0;
    if (plVar12 == plStack_4f8) {
LAB_0d3f1336:
      *plVar12 = *plStack_4f8;
      plVar12[5] = (long)(puVar9 + 4);
      plVar12[6] = (long)puVar9;
LAB_0d3f13b2:
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_4f0 & 1) == 0) {
        plVar12[3] = *(long *)(puStack_4f0 + 4);
        lVar15 = *(long *)(puStack_4f0 + 2);
        plVar12[1] = *(long *)puStack_4f0;
        plVar12[2] = lVar15;
        goto LAB_0d3f1336;
      }
      func_0x04885070(plVar12 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar12 = *plStack_4f8;
      puVar9 = (undefined8 *)CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530));
      plVar12[5] = (long)puStack_538;
      plVar12[6] = CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530));
      if (puVar9 != (undefined8 *)0x0) goto LAB_0d3f13b2;
    }
    plVar12 = plVar12 + 7;
    *(long **)(puVar10 + 0x24) = plVar12;
  }
  else {
    plVar12 = (long *)func_0x050ab7f0(puVar10 + 0x22,plStack_4f8,&puStack_538);
  }
  plVar2 = plStack_4e8;
  *(long **)(puVar10 + 0x24) = plVar12;
  uVar4 = *puVar10;
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar3 = plVar12 + 1;
    lVar15 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0412c2d0(plVar12);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar12 = (long *)CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530));
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar3 = plVar12 + 1;
    lVar15 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0412c2d0(plVar12);
    }
  }
  LOCK();
  lVar15 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
    LOCK();
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 1;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  (**(code **)(plVar8[4] + 0x10))(plVar2,&uStack_458);
  if ((uStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,uStack_458 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_4d8 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_4c7,uStack_4cb._3_1_),
                    CONCAT35((undefined3)uStack_4d3,CONCAT41(uStack_4d7,bStack_4d8)) &
                    0xfffffffffffffffe);
  }
  uStack_4c7 = 0;
  uStack_4c0 = 0;
  bStack_4d8 = 0x20;
  uStack_4d7 = _DAT_014584c4;
  uStack_4d3 = _UNK_014584c8;
  uStack_4cf = _UNK_014584cc;
  uStack_4cb = _UNK_014584d0;
  uStack_4e0 = 0xacbb6593f259013;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uVar11 = func_0x0d3f2e50(param_1,&uStack_4e0,&lStack_b8);
  uStack_f0 = 0;
  uStack_3b0 = 0;
  lStack_f8 = 0;
  puStack_3b8 = (undefined8 *)&UNK_0f46e3a0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_538 = puStack_3b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f466278;
  bStack_530 = 0;
  uStack_52f = 0;
  uStack_52a = 0;
  puStack_3b8 = (undefined8 *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_539,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar12 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f4662c8;
  uVar6 = _UNK_014e261c;
  uVar5 = _UNK_014e2618;
  uVar4 = _UNK_014e2614;
  *(undefined4 *)(plVar8 + 0x2e) = _DAT_014e2610;
  *(undefined4 *)((long)plVar8 + 0x174) = uVar4;
  *(undefined4 *)(plVar8 + 0x2f) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x17c) = uVar6;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  if (puStack_538 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_538)(&puStack_538,plVar8 + 0x30);
    puVar9 = puStack_538;
  }
  puStack_538 = (undefined8 *)0x0;
  plVar8[0x30] = (long)puVar9;
  puStack_4f0 = (uint *)(plVar8 + 0x12);
  if (plVar12 == (long *)&DAT_0f552228) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puStack_4f0 & 1) == 0) {
      if ((_DAT_0f552230 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552240;
        uVar6 = uRam000000000f55223c;
        uVar5 = _DAT_0f552238;
        uVar4 = uRam000000000f552234;
        *puStack_4f0 = _DAT_0f552230;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar4;
        *(undefined4 *)(plVar8 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puStack_4f0,_DAT_0f552240,CONCAT44(uRam000000000f55223c,_DAT_0f552238));
      }
    }
    else {
      bVar17 = (_DAT_0f552230 & 1) != 0;
      lVar15 = 0xf552231;
      if (bVar17) {
        lVar15 = _DAT_0f552240;
      }
      uVar14 = (ulong)((_DAT_0f552230 & 0xff) >> 1);
      if (bVar17) {
        uVar14 = CONCAT44(uRam000000000f55223c,_DAT_0f552238);
      }
      func_0x04885120(puStack_4f0,lVar15,uVar14);
    }
    plVar8[0x11] = _DAT_0f552228;
    plVar8[0x15] = 0;
    if (puStack_538 != (undefined8 *)0x0) {
      (*(code *)puStack_538[1])(&puStack_538);
    }
  }
  plVar13 = plVar8 + 1;
  plStack_4f8 = plVar12;
  if (puStack_3b8 != (undefined8 *)0x0) {
    (*(code *)puStack_3b8[1])(&puStack_3b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f4663a8;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0f4663f8;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  bStack_530 = (byte)puVar9;
  uStack_52f = (undefined5)((ulong)puVar9 >> 8);
  uStack_52a = (undefined2)((ulong)puVar9 >> 0x30);
  puStack_538 = puVar9 + 4;
  plStack_4e8 = plVar8 + 4;
  puVar10 = (undefined4 *)func_0x0d447590(uVar11,0);
  plVar12 = *(long **)(puVar10 + 0x24);
  if (plVar12 < *(long **)(puVar10 + 0x26)) {
    plVar12[2] = 0;
    plVar12[3] = 0;
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[4] = 0;
    if (plVar12 != plStack_4f8) {
      puVar1 = (uint *)(plVar12 + 1);
      if ((*puStack_4f0 & 1) == 0) {
        plVar12[3] = *(long *)(puStack_4f0 + 4);
        lVar15 = *(long *)(puStack_4f0 + 2);
        *(undefined8 *)puVar1 = *(undefined8 *)puStack_4f0;
        plVar12[2] = lVar15;
      }
      else {
        puStack_4f0 = puVar1;
        func_0x04885070(puVar1,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar12 = *plStack_4f8;
    plVar12[5] = (long)(puVar9 + 4);
    plVar12[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar12 = plVar12 + 7;
    *(long **)(puVar10 + 0x24) = plVar12;
  }
  else {
    plVar12 = (long *)func_0x0d449710(puVar10 + 0x22,plStack_4f8,&puStack_538);
  }
  *(long **)(puVar10 + 0x24) = plVar12;
  uVar4 = *puVar10;
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0412c2d0(plVar12);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar12 = (long *)CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530));
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0412c2d0(plVar12);
    }
  }
  LOCK();
  lVar15 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
    LOCK();
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  (**(code **)(plVar8[4] + 0x10))(plStack_4e8,&uStack_478);
  if ((uStack_478 & 1) != 0) {
    func_0x0412a280(uStack_468,uStack_478 & 0xfffffffffffffffe);
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_4d8 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_4c7,uStack_4cb._3_1_),
                    CONCAT35((undefined3)uStack_4d3,CONCAT41(uStack_4d7,bStack_4d8)) &
                    0xfffffffffffffffe);
  }
  uStack_4cb = 0;
  uStack_4c7 = 0;
  uStack_4c0 = 0;
  bStack_4d8 = 0x12;
  uStack_4d7 = 0x65726964;
  uStack_4d3 = 0x6f697463;
  uStack_4cf = 0x6e;
  uStack_4e0 = 0x6134050850bf2da8;
  uStack_130 = 0;
  uStack_3b0 = 0;
  lStack_138 = 0;
  puStack_3b8 = (undefined8 *)&UNK_0f46e3b8;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  puStack_538 = puStack_3b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f4664b0;
  bStack_530 = 0;
  uStack_52f = 0;
  uStack_52a = 0;
  puStack_3b8 = (undefined8 *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_539,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar12 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f466500;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  plVar8[0x32] = 0;
  plVar8[0x33] = 0;
  plVar8[0x34] = 0;
  *(undefined4 *)(plVar8 + 0x35) = 0x3f800000;
  plVar8[0x36] = 0;
  plVar8[0x37] = 0;
  if (puStack_538 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_538)(&puStack_538,plVar8 + 0x36);
    puVar9 = puStack_538;
  }
  puStack_538 = (undefined8 *)0x0;
  plVar8[0x36] = (long)puVar9;
  *(undefined1 *)(plVar8 + 0x3e) = 0;
  puStack_4f0 = (uint *)(plVar8 + 0x12);
  if (plVar12 != (long *)&DAT_0f552138) {
    if ((*puStack_4f0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552150;
        uVar6 = uRam000000000f55214c;
        uVar5 = _DAT_0f552148;
        uVar4 = uRam000000000f552144;
        *puStack_4f0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar4;
        *(undefined4 *)(plVar8 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puStack_4f0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar17 = (_DAT_0f552140 & 1) != 0;
      lVar15 = 0xf552141;
      if (bVar17) {
        lVar15 = _DAT_0f552150;
      }
      uVar14 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar17) {
        uVar14 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_4f0,lVar15,uVar14);
    }
  }
  plVar8[0x11] = _DAT_0f552138;
  plVar8[0x15] = 0;
  plStack_4f8 = plVar12;
  if (puStack_538 != (undefined8 *)0x0) {
    (*(code *)puStack_538[1])(&puStack_538);
  }
  plVar12 = plVar8 + 1;
  if (puStack_3b8 != (undefined8 *)0x0) {
    (*(code *)puStack_3b8[1])(&puStack_3b8);
  }
  LOCK();
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f4665e0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0f466630;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  bStack_530 = (byte)puVar9;
  uStack_52f = (undefined5)((ulong)puVar9 >> 8);
  uStack_52a = (undefined2)((ulong)puVar9 >> 0x30);
  puStack_538 = puVar9 + 4;
  plStack_4e8 = plVar8 + 4;
  puVar10 = (undefined4 *)func_0x050a80f0(param_1,&uStack_4e0,0);
  plVar13 = *(long **)(puVar10 + 0x24);
  if (*(long **)(puVar10 + 0x26) <= plVar13) {
    plVar13 = (long *)func_0x050ab7f0(puVar10 + 0x22,plStack_4f8,&puStack_538);
    goto LAB_0d3f1e65;
  }
  plVar13[2] = 0;
  plVar13[3] = 0;
  *plVar13 = 0;
  plVar13[1] = 0;
  plVar13[4] = 0;
  if (plVar13 == plStack_4f8) {
LAB_0d3f1de0:
    *plVar13 = *plStack_4f8;
    plVar13[5] = (long)(puVar9 + 4);
    plVar13[6] = (long)puVar9;
LAB_0d3f1e55:
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_4f0 & 1) == 0) {
      plVar13[3] = *(long *)(puStack_4f0 + 4);
      lVar15 = *(long *)(puStack_4f0 + 2);
      plVar13[1] = *(long *)puStack_4f0;
      plVar13[2] = lVar15;
      goto LAB_0d3f1de0;
    }
    func_0x04885070(plVar13 + 1,plVar8[0x14],plVar8[0x13]);
    *plVar13 = *plStack_4f8;
    puVar9 = (undefined8 *)CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530));
    plVar13[5] = (long)puStack_538;
    plVar13[6] = CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530));
    if (puVar9 != (undefined8 *)0x0) goto LAB_0d3f1e55;
  }
  plVar13 = plVar13 + 7;
  *(long **)(puVar10 + 0x24) = plVar13;
LAB_0d3f1e65:
  plVar2 = plStack_4e8;
  *(long **)(puVar10 + 0x24) = plVar13;
  uVar4 = *puVar10;
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar3 = plVar13 + 1;
    lVar15 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_0412c2d0(plVar13);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar13 = (long *)CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530));
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar3 = plVar13 + 1;
    lVar15 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar15 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
    LOCK();
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
  }
  auStack_498[0] = 0;
  auStack_498[1] = 0;
  auStack_498[2] = 0;
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_498);
  if ((auStack_498[0] & 1) != 0) {
    func_0x0412a280(auStack_498[2],auStack_498[0] & 0xfffffffffffffffe);
  }
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if ((bStack_4d8 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_4c7,uStack_4cb._3_1_),
                    CONCAT35((undefined3)uStack_4d3,CONCAT41(uStack_4d7,bStack_4d8)) &
                    0xfffffffffffffffe);
  }
  uStack_523 = 0;
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x18;
  uStack_52f = 0x705f79616d;
  uStack_52a = 0x616c;
  uStack_528 = 99;
  uStack_527 = 0x65;
  uStack_526 = 0x5f;
  uStack_525 = 0x6f;
  uStack_524 = 0x6e;
  puStack_538 = (undefined8 *)0x27f82eb07cddffd8;
  alStack_178[0] = 0;
  alStack_178[1] = 0;
  uVar11 = func_0x0d3f2e50(param_1,&puStack_538,alStack_178);
  uStack_330 = 0;
  puStack_338 = &UNK_0f46e3d0;
  func_0x0d3f3370(uVar11,&puStack_338);
  if (puStack_338 != (undefined *)0x0) {
    (**(code **)(puStack_338 + 8))(&puStack_338);
  }
  if (alStack_178[0] != 0) {
    (**(code **)(alStack_178[0] + 8))(alStack_178);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_524 = 0;
  uStack_523 = 0;
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x16;
  uStack_52f = 0x725f79616d;
  uStack_52a = 0x7065;
  uStack_528 = 0x6c;
  uStack_527 = 0x61;
  uStack_526 = 99;
  uStack_525 = 0x65;
  puStack_538 = (undefined8 *)0x272a7fa09187bb85;
  alStack_1b8[0] = 0;
  alStack_1b8[1] = 0;
  uVar11 = func_0x0d3f2e50(param_1,&puStack_538,alStack_1b8);
  uStack_370 = 0;
  puStack_378 = &UNK_0f46e3e8;
  plVar8 = (long *)func_0x0d3f3370(uVar11,&puStack_378);
  auStack_4b8[0] = 0;
  auStack_4b8[1] = 0;
  auStack_4b8[2] = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,auStack_4b8);
  if ((auStack_4b8[0] & 1) != 0) {
    func_0x0412a280(auStack_4b8[2],auStack_4b8[0] & 0xfffffffffffffffe);
  }
  if (puStack_378 != (undefined *)0x0) {
    (**(code **)(puStack_378 + 8))(&puStack_378);
  }
  if (alStack_1b8[0] != 0) {
    (**(code **)(alStack_1b8[0] + 8))(alStack_1b8);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(uStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_1f0 = 0;
  puStack_1f8 = (undefined8 *)&UNK_0f46e400;
  ppuVar16 = (undefined8 **)(param_1 + 0xd0);
  if (ppuVar16 != &puStack_1f8) {
    if ((*ppuVar16 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar16)[1])(ppuVar16), puStack_1f8 != (undefined8 *)0x0)) {
      (*(code *)*puStack_1f8)(&puStack_1f8,ppuVar16);
    }
    else {
      puStack_1f8 = (undefined8 *)0x0;
    }
    *ppuVar16 = puStack_1f8;
  }
  return;
}



/* ---- referenced strings ----
 * 0x14584c4  weighted_heights
 */
