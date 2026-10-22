/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3e1300 (ELF vaddr 0xd2e1300)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3e1300, 0d3e373a]]
 * Ghidra: FUN_0d3e1300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3e1300(undefined8 param_1)

{
  long *plVar1;
  undefined8 **ppuVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  undefined1 uStack_649;
  uint *puStack_648;
  long *plStack_640;
  undefined8 *puStack_638;
  byte bStack_630;
  undefined4 uStack_62f;
  uint uStack_62b;
  undefined4 uStack_627;
  undefined4 uStack_623;
  undefined3 uStack_61f;
  undefined4 uStack_61c;
  undefined8 uStack_618;
  uint *puStack_5f0;
  uint *puStack_5e8;
  undefined8 uStack_5e0;
  byte bStack_5d8;
  undefined2 uStack_5d7;
  undefined1 uStack_5d5;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined1 uStack_5c8;
  undefined7 uStack_5c7;
  undefined8 uStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  ulong auStack_578 [4];
  ulong uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
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
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3b8;
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
  
  uStack_61c = 0;
  uStack_618 = 0;
  bStack_630 = 0x26;
  uStack_62f = _DAT_01458471;
  uStack_62b = _UNK_01458475;
  uStack_627 = _UNK_01458479;
  uStack_623 = CONCAT13(0x74,(int3)_UNK_0145847d);
  uStack_61f = 0x6e6f69;
  puStack_638 = (undefined8 *)0xa11ec6072bdf6d51;
  lStack_78 = 0;
  uStack_70 = 0;
  lVar8 = func_0x0d3e4340(param_1,&puStack_638,&lStack_78);
  *(undefined8 *)(lVar8 + 0x90) = 1;
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_630 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_61c,CONCAT31(uStack_61f,uStack_623._3_1_)),
                    CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630)) &
                    0xfffffffffffffffe);
  }
  uStack_3f0 = 0;
  puStack_3f8 = (undefined8 *)&UNK_0f46d7e8;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f46d5a8;
  puStack_638 = (undefined8 *)0x0;
  bStack_630 = 0;
  uStack_62f = 0;
  uStack_62b = uStack_62b & 0xff000000;
  if (puStack_3f8 == (undefined8 *)0x0) {
    puStack_638 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3f8)(&puStack_3f8,&puStack_638);
    puStack_638 = puStack_3f8;
  }
  puStack_3f8 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&puStack_5b8,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f46d5f8;
  ppuVar2 = (undefined8 **)(plVar9 + 0x2e);
  plVar9[0x2e] = 0;
  plVar9[0x2f] = 0;
  if (ppuVar2 != &puStack_638) {
    if (puStack_638 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_638)(&puStack_638,ppuVar2);
      puVar10 = puStack_638;
    }
    puStack_638 = (undefined8 *)0x0;
    *ppuVar2 = puVar10;
  }
  plStack_640 = plVar9 + 4;
  puVar3 = (uint *)(plVar9 + 0x12);
  if (plVar9 + 0x11 != (long *)&DAT_0f551f58) {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar9[0x14] = _DAT_0f551f70;
        uVar6 = uRam000000000f551f6c;
        uVar5 = _DAT_0f551f68;
        uVar4 = uRam000000000f551f64;
        *puVar3 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar16 = (_DAT_0f551f60 & 1) != 0;
      lVar15 = 0xf551f61;
      if (bVar16) {
        lVar15 = _DAT_0f551f70;
      }
      uVar14 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar16) {
        uVar14 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar3,lVar15,uVar14);
    }
  }
  plVar12 = plVar9 + 1;
  plVar9[0x11] = _DAT_0f551f58;
  plVar9[0x15] = 0;
  if (puStack_638 != (undefined8 *)0x0) {
    (*(code *)puStack_638[1])(&puStack_638);
  }
  LOCK();
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  puStack_5f0 = puVar3;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f46d6f0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f46d740;
  puVar10[0xe] = plStack_640;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_630 = (byte)puVar10;
  uStack_62f = (undefined4)((ulong)puVar10 >> 8);
  uStack_62b._0_3_ = (undefined3)((ulong)puVar10 >> 0x28);
  puStack_648 = (uint *)(plVar9 + 0x11);
  puStack_638 = puVar10 + 4;
  puVar11 = (undefined4 *)func_0x0d4b72e0(lVar8);
  plVar13 = *(long **)(puVar11 + 0x24);
  if (plVar13 < *(long **)(puVar11 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if ((uint *)plVar13 != puStack_648) {
      puVar3 = (uint *)(plVar13 + 1);
      if ((*puStack_5f0 & 1) == 0) {
        plVar13[3] = *(long *)(puStack_5f0 + 4);
        lVar8 = *(long *)(puStack_5f0 + 2);
        *(undefined8 *)puVar3 = *(undefined8 *)puStack_5f0;
        plVar13[2] = lVar8;
      }
      else {
        puStack_5f0 = puVar3;
        func_0x04885070(puVar3,plVar9[0x14],plVar9[0x13]);
      }
    }
    *plVar13 = *(long *)puStack_648;
    plVar13[5] = (long)(puVar10 + 4);
    plVar13[6] = (long)puVar10;
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
    plVar13 = plVar13 + 7;
    *(long **)(puVar11 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x0d4b9460(puVar11 + 0x22,puStack_648,&puStack_638);
  }
  *(long **)(puVar11 + 0x24) = plVar13;
  plVar9[0x16] = 2;
  plVar9[0x17] = 2;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar13 = (long *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar8 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  if (puStack_3f8 != (undefined8 *)0x0) {
    (*(code *)puStack_3f8[1])(&puStack_3f8);
  }
  uStack_b0 = 0;
  uStack_5b0 = 0;
  lStack_b8 = 0;
  puStack_5b8 = (undefined8 *)&UNK_0f46d800;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_638 = puStack_5b8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f463d78;
  bStack_630 = 0;
  uStack_62f = 0;
  uStack_62b = uStack_62b & 0xff000000;
  puStack_5b8 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_5e0,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f463dc8;
  plVar9[0x2e] = 0x7fffffff80000000;
  plVar9[0x30] = 0;
  plVar9[0x31] = 0;
  if (puStack_638 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_638)(&puStack_638,plVar9 + 0x30);
    puVar10 = puStack_638;
  }
  puStack_638 = (undefined8 *)0x0;
  plVar9[0x30] = (long)puVar10;
  puVar3 = (uint *)(plVar9 + 0x12);
  if (plVar9 + 0x11 == (long *)&DAT_0f5520a8) {
    plVar9[0x15] = 0;
  }
  else {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f5520b0 & 1) == 0) {
        plVar9[0x14] = _DAT_0f5520c0;
        uVar6 = uRam000000000f5520bc;
        uVar5 = _DAT_0f5520b8;
        uVar4 = uRam000000000f5520b4;
        *puVar3 = _DAT_0f5520b0;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
      }
    }
    else {
      bVar16 = (_DAT_0f5520b0 & 1) != 0;
      lVar8 = 0xf5520b1;
      if (bVar16) {
        lVar8 = _DAT_0f5520c0;
      }
      uVar14 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
      if (bVar16) {
        uVar14 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
      }
      func_0x04885120(puVar3,lVar8,uVar14);
    }
    plVar9[0x11] = _DAT_0f5520a8;
    plVar9[0x15] = 0;
    if (puStack_638 != (undefined8 *)0x0) {
      (*(code *)puStack_638[1])(&puStack_638);
    }
  }
  plVar12 = plVar9 + 1;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f463ea8;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f463ef8;
  puVar10[0xe] = plVar9 + 4;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_630 = (byte)puVar10;
  uStack_62f = (undefined4)((ulong)puVar10 >> 8);
  uStack_62b._0_3_ = (undefined3)((ulong)puVar10 >> 0x28);
  puStack_648 = (uint *)(plVar9 + 0x11);
  puStack_638 = puVar10 + 4;
  puStack_5f0 = (uint *)(plVar9 + 4);
  puStack_5e8 = puVar3;
  puVar11 = (undefined4 *)func_0x0d4286a0(plStack_640,0,0);
  plVar13 = *(long **)(puVar11 + 0x24);
  if (plVar13 < *(long **)(puVar11 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if ((uint *)plVar13 != puStack_648) {
      puVar3 = (uint *)(plVar13 + 1);
      if ((*puStack_5e8 & 1) == 0) {
        plVar13[3] = *(long *)(puStack_5e8 + 4);
        lVar8 = *(long *)(puStack_5e8 + 2);
        *(undefined8 *)puVar3 = *(undefined8 *)puStack_5e8;
        plVar13[2] = lVar8;
      }
      else {
        puStack_5e8 = puVar3;
        func_0x04885070(puVar3,plVar9[0x14],plVar9[0x13]);
      }
    }
    *plVar13 = *(long *)puStack_648;
    plVar13[5] = (long)(puVar10 + 4);
    plVar13[6] = (long)puVar10;
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
    plVar13 = plVar13 + 7;
    *(long **)(puVar11 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x0d42a4e0(puVar11 + 0x22,puStack_648,&puStack_638);
  }
  *(long **)(puVar11 + 0x24) = plVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar13 = (long *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar8 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  (**(code **)(*(long *)puStack_5f0 + 0x10))(puStack_5f0,&uStack_418);
  if ((uStack_418 & 1) != 0) {
    func_0x0412a280(uStack_408,uStack_418 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  uStack_f0 = 0;
  uStack_5b0 = 0;
  lStack_f8 = 0;
  puStack_5b8 = (undefined8 *)&UNK_0f46d818;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_638 = puStack_5b8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f463fb0;
  bStack_630 = 0;
  uStack_62f = 0;
  uStack_62b = uStack_62b & 0xff000000;
  puStack_5b8 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_5e0,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f464000;
  plVar9[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar9 + 0x2f) = 1;
  plVar9[0x30] = 0;
  plVar9[0x31] = 0;
  if (puStack_638 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_638)(&puStack_638,plVar9 + 0x30);
    puVar10 = puStack_638;
  }
  puStack_638 = (undefined8 *)0x0;
  plVar9[0x30] = (long)puVar10;
  puVar3 = (uint *)(plVar9 + 0x12);
  if (plVar9 + 0x11 == (long *)&DAT_0f552018) {
    plVar9[0x15] = 0;
  }
  else {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar9[0x14] = _DAT_0f552030;
        uVar6 = uRam000000000f55202c;
        uVar5 = _DAT_0f552028;
        uVar4 = uRam000000000f552024;
        *puVar3 = _DAT_0f552020;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar16 = (_DAT_0f552020 & 1) != 0;
      lVar8 = 0xf552021;
      if (bVar16) {
        lVar8 = _DAT_0f552030;
      }
      uVar14 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar16) {
        uVar14 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar3,lVar8,uVar14);
    }
    plVar9[0x11] = _DAT_0f552018;
    plVar9[0x15] = 0;
    if (puStack_638 != (undefined8 *)0x0) {
      (*(code *)puStack_638[1])(&puStack_638);
    }
  }
  plVar12 = plVar9 + 1;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f4640e0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f464130;
  puVar10[0xe] = plVar9 + 4;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_630 = (byte)puVar10;
  uStack_62f = (undefined4)((ulong)puVar10 >> 8);
  uStack_62b._0_3_ = (undefined3)((ulong)puVar10 >> 0x28);
  puStack_648 = (uint *)(plVar9 + 0x11);
  puStack_638 = puVar10 + 4;
  puStack_5f0 = (uint *)(plVar9 + 4);
  puStack_5e8 = puVar3;
  puVar11 = (undefined4 *)func_0x0d4286a0(plStack_640,1,1);
  plVar13 = *(long **)(puVar11 + 0x24);
  if (plVar13 < *(long **)(puVar11 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if ((uint *)plVar13 != puStack_648) {
      puVar3 = (uint *)(plVar13 + 1);
      if ((*puStack_5e8 & 1) == 0) {
        plVar13[3] = *(long *)(puStack_5e8 + 4);
        lVar8 = *(long *)(puStack_5e8 + 2);
        *(undefined8 *)puVar3 = *(undefined8 *)puStack_5e8;
        plVar13[2] = lVar8;
      }
      else {
        puStack_5e8 = puVar3;
        func_0x04885070(puVar3,plVar9[0x14],plVar9[0x13]);
      }
    }
    *plVar13 = *(long *)puStack_648;
    plVar13[5] = (long)(puVar10 + 4);
    plVar13[6] = (long)puVar10;
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
    plVar13 = plVar13 + 7;
    *(long **)(puVar11 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x0d42a4e0(puVar11 + 0x22,puStack_648,&puStack_638);
  }
  *(long **)(puVar11 + 0x24) = plVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar13 = (long *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar8 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  (**(code **)(*(long *)puStack_5f0 + 0x10))(puStack_5f0,&uStack_438);
  if ((uStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  (**(code **)(*plStack_640 + 0x10))(plStack_640,&uStack_458);
  if ((uStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,uStack_458 & 0xfffffffffffffffe);
  }
  uStack_5c7 = 0;
  uStack_5c0 = 0;
  bStack_5d8 = 0x20;
  uStack_5d7 = (undefined2)_DAT_012cf7bb;
  uStack_5d5 = (undefined1)((uint)_DAT_012cf7bb >> 0x10);
  uStack_5d4._1_3_ = (undefined3)_UNK_012cf7bf;
  uStack_5d4 = CONCAT31(uStack_5d4._1_3_,(char)((uint)_DAT_012cf7bb >> 0x18));
  uStack_5d0._1_3_ = (undefined3)_UNK_012cf7c3;
  uStack_5d0 = CONCAT31(uStack_5d0._1_3_,(char)((uint)_UNK_012cf7bf >> 0x18));
  uStack_5cc._1_3_ = (undefined3)_UNK_012cf7c7;
  uStack_5cc = CONCAT31(uStack_5cc._1_3_,(char)((uint)_UNK_012cf7c3 >> 0x18));
  uStack_5c8 = (undefined1)((uint)_UNK_012cf7c7 >> 0x18);
  uStack_5e0 = 0xd5df06c7afa66036;
  uStack_130 = 0;
  uStack_5b0 = 0;
  lStack_138 = 0;
  puStack_5b8 = (undefined8 *)&UNK_0f46d830;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  puStack_638 = puStack_5b8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f464190;
  bStack_630 = 0;
  uStack_62f = 0;
  uStack_62b = uStack_62b & 0xff000000;
  puStack_5b8 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_649,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar12 = plVar9 + 0x11;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f4641e0;
  plVar9[0x2e] = 0;
  plVar9[0x2f] = 0;
  plVar9[0x30] = 0;
  plVar9[0x31] = 0;
  plVar9[0x32] = 0;
  plVar9[0x33] = 0;
  plVar9[0x34] = 0;
  *(undefined4 *)(plVar9 + 0x35) = 0x3f800000;
  plVar9[0x36] = 0;
  plVar9[0x37] = 0;
  if (puStack_638 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_638)(&puStack_638,plVar9 + 0x36);
    puVar10 = puStack_638;
  }
  puStack_638 = (undefined8 *)0x0;
  plVar9[0x36] = (long)puVar10;
  *(undefined1 *)(plVar9 + 0x3e) = 0;
  puStack_648 = (uint *)(plVar9 + 0x12);
  if (plVar12 != (long *)&DAT_0f552138) {
    if ((*puStack_648 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar9[0x14] = _DAT_0f552150;
        uVar6 = uRam000000000f55214c;
        uVar5 = _DAT_0f552148;
        uVar4 = uRam000000000f552144;
        *puStack_648 = _DAT_0f552140;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puStack_648,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar16 = (_DAT_0f552140 & 1) != 0;
      lVar8 = 0xf552141;
      if (bVar16) {
        lVar8 = _DAT_0f552150;
      }
      uVar14 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar16) {
        uVar14 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_648,lVar8,uVar14);
    }
  }
  plVar9[0x11] = _DAT_0f552138;
  plVar9[0x15] = 0;
  plStack_640 = plVar12;
  if (puStack_638 != (undefined8 *)0x0) {
    (*(code *)puStack_638[1])(&puStack_638);
  }
  plVar12 = plVar9 + 1;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f4642c0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f464310;
  puVar10[0xe] = plVar9 + 4;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_630 = (byte)puVar10;
  uStack_62f = (undefined4)((ulong)puVar10 >> 8);
  uStack_62b._0_3_ = (undefined3)((ulong)puVar10 >> 0x28);
  puStack_638 = puVar10 + 4;
  puStack_5f0 = (uint *)(plVar9 + 4);
  puVar11 = (undefined4 *)func_0x04ffdb90(param_1,&uStack_5e0,1);
  plVar13 = *(long **)(puVar11 + 0x24);
  if (plVar13 < *(long **)(puVar11 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if (plVar13 == plStack_640) {
LAB_0d3e2562:
      *plVar13 = *plStack_640;
      plVar13[5] = (long)(puVar10 + 4);
      plVar13[6] = (long)puVar10;
LAB_0d3e25cb:
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_648 & 1) == 0) {
        plVar13[3] = *(long *)(puStack_648 + 4);
        lVar8 = *(long *)(puStack_648 + 2);
        plVar13[1] = *(long *)puStack_648;
        plVar13[2] = lVar8;
        goto LAB_0d3e2562;
      }
      func_0x04885070(plVar13 + 1,plVar9[0x14],plVar9[0x13]);
      *plVar13 = *plStack_640;
      puVar10 = (undefined8 *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
      plVar13[5] = (long)puStack_638;
      plVar13[6] = CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
      if (puVar10 != (undefined8 *)0x0) goto LAB_0d3e25cb;
    }
    plVar13 = plVar13 + 7;
    *(long **)(puVar11 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x05001290(puVar11 + 0x22,plStack_640,&puStack_638);
  }
  puVar3 = puStack_5f0;
  *(long **)(puVar11 + 0x24) = plVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar13 = (long *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar8 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  (**(code **)(*(long *)puVar3 + 0x10))(puVar3,&uStack_478);
  if ((uStack_478 & 1) != 0) {
    func_0x0412a280(uStack_468,uStack_478 & 0xfffffffffffffffe);
  }
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if ((bStack_5d8 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5c7,uStack_5c8),
                    CONCAT44(uStack_5d4,CONCAT13(uStack_5d5,CONCAT21(uStack_5d7,bStack_5d8))) &
                    0xfffffffffffffffe);
  }
  uStack_5d4 = 0;
  uStack_5d0 = 0;
  uStack_5cc = 0;
  uStack_5c8 = 0;
  uStack_5c7 = 0;
  uStack_5c0 = 0;
  bStack_5d8 = 6;
  uStack_5d7 = 0x6761;
  uStack_5d5 = 0x65;
  uStack_5e0 = 0xd8dccf186bafb642;
  uStack_170 = 0;
  uStack_5b0 = 0;
  lStack_178 = 0;
  puStack_5b8 = (undefined8 *)&UNK_0f46d848;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_638 = puStack_5b8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f464370;
  bStack_630 = 0;
  uStack_62f = 0;
  uStack_62b = uStack_62b & 0xff000000;
  puStack_5b8 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_649,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar12 = plVar9 + 0x11;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f4643c0;
  plVar9[0x2e] = 0x7fffffff80000000;
  plVar9[0x30] = 0;
  plVar9[0x31] = 0;
  if (puStack_638 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_638)(&puStack_638,plVar9 + 0x30);
    puVar10 = puStack_638;
  }
  puStack_638 = (undefined8 *)0x0;
  plVar9[0x30] = (long)puVar10;
  puVar3 = (uint *)(plVar9 + 0x12);
  if (plVar12 == (long *)&DAT_0f5520a8) {
    plVar9[0x15] = 0;
  }
  else {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f5520b0 & 1) == 0) {
        plVar9[0x14] = _DAT_0f5520c0;
        uVar6 = uRam000000000f5520bc;
        uVar5 = _DAT_0f5520b8;
        uVar4 = uRam000000000f5520b4;
        *puVar3 = _DAT_0f5520b0;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
      }
    }
    else {
      bVar16 = (_DAT_0f5520b0 & 1) != 0;
      lVar8 = 0xf5520b1;
      if (bVar16) {
        lVar8 = _DAT_0f5520c0;
      }
      uVar14 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
      if (bVar16) {
        uVar14 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
      }
      func_0x04885120(puVar3,lVar8,uVar14);
    }
    plVar9[0x11] = _DAT_0f5520a8;
    plVar9[0x15] = 0;
    if (puStack_638 != (undefined8 *)0x0) {
      (*(code *)puStack_638[1])(&puStack_638);
    }
  }
  plVar13 = plVar9 + 1;
  plStack_640 = plVar12;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puStack_5f0 = puVar3;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f4644a0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f4644f0;
  puVar10[0xe] = plVar9 + 4;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_630 = (byte)puVar10;
  uStack_62f = (undefined4)((ulong)puVar10 >> 8);
  uStack_62b._0_3_ = (undefined3)((ulong)puVar10 >> 0x28);
  puStack_648 = (uint *)(plVar9 + 4);
  puStack_638 = puVar10 + 4;
  puVar11 = (undefined4 *)func_0x04ffdb90(param_1,&uStack_5e0,0);
  plVar12 = *(long **)(puVar11 + 0x24);
  if (plVar12 < *(long **)(puVar11 + 0x26)) {
    plVar12[2] = 0;
    plVar12[3] = 0;
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[4] = 0;
    if (plVar12 == plStack_640) {
LAB_0d3e2a9f:
      *plVar12 = *plStack_640;
      plVar12[5] = (long)(puVar10 + 4);
      plVar12[6] = (long)puVar10;
LAB_0d3e2b0c:
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_5f0 & 1) == 0) {
        plVar12[3] = *(long *)(puStack_5f0 + 4);
        lVar8 = *(long *)(puStack_5f0 + 2);
        plVar12[1] = *(long *)puStack_5f0;
        plVar12[2] = lVar8;
        goto LAB_0d3e2a9f;
      }
      func_0x04885070(plVar12 + 1,plVar9[0x14],plVar9[0x13]);
      *plVar12 = *plStack_640;
      puVar10 = (undefined8 *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
      plVar12[5] = (long)puStack_638;
      plVar12[6] = CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
      if (puVar10 != (undefined8 *)0x0) goto LAB_0d3e2b0c;
    }
    plVar12 = plVar12 + 7;
    *(long **)(puVar11 + 0x24) = plVar12;
  }
  else {
    plVar12 = (long *)func_0x05001290(puVar11 + 0x22,plStack_640,&puStack_638);
  }
  *(long **)(puVar11 + 0x24) = plVar12;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar12 = (long *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  LOCK();
  lVar8 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar8 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar8 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  (**(code **)(*(long *)puStack_648 + 0x10))(puStack_648,&uStack_498);
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  if (lStack_178 != 0) {
    (**(code **)(lStack_178 + 8))(&lStack_178);
  }
  if ((bStack_5d8 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5c7,uStack_5c8),
                    CONCAT44(uStack_5d4,CONCAT13(uStack_5d5,CONCAT21(uStack_5d7,bStack_5d8))) &
                    0xfffffffffffffffe);
  }
  uStack_623 = 0;
  uStack_61f = 0;
  uStack_61c = 0;
  uStack_618 = 0;
  bStack_630 = 0x16;
  uStack_62f = 0x79646f62;
  uStack_62b = 0x6f6c625f;
  uStack_627 = 0x736b63;
  puStack_638 = (undefined8 *)0x4e746d53a6bcdc1a;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  lVar8 = func_0x0d3e4340(param_1,&puStack_638,&lStack_1b8);
  *(undefined8 *)(lVar8 + 0x90) = 1;
  if (lStack_1b8 != 0) {
    (**(code **)(lStack_1b8 + 8))(&lStack_1b8);
  }
  if ((bStack_630 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_61c,CONCAT31(uStack_61f,uStack_623._3_1_)),
                    CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630)) &
                    0xfffffffffffffffe);
  }
  uStack_270 = 0;
  puStack_278 = &UNK_0f46da58;
  plVar9 = (long *)func_0x0d3e4870(lVar8,&puStack_278);
  if (puStack_278 != (undefined *)0x0) {
    (**(code **)(puStack_278 + 8))(&puStack_278);
  }
  uStack_2b0 = 0;
  puStack_2b8 = &UNK_0f46da70;
  plVar12 = (long *)func_0x0d3e4d90(plVar9,&puStack_2b8);
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_4b8);
  if ((uStack_4b8 & 1) != 0) {
    func_0x0412a280(uStack_4a8,uStack_4b8 & 0xfffffffffffffffe);
  }
  if (puStack_2b8 != (undefined *)0x0) {
    (**(code **)(puStack_2b8 + 8))(&puStack_2b8);
  }
  uStack_2f0 = 0;
  puStack_2f8 = &UNK_0f46da88;
  plVar12 = (long *)func_0x0d3e5220(plVar9,&puStack_2f8);
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_4d8);
  if ((uStack_4d8 & 1) != 0) {
    func_0x0412a280(uStack_4c8,uStack_4d8 & 0xfffffffffffffffe);
  }
  if (puStack_2f8 != (undefined *)0x0) {
    (**(code **)(puStack_2f8 + 8))(&puStack_2f8);
  }
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_4f8);
  if ((uStack_4f8 & 1) != 0) {
    func_0x0412a280(uStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
  }
  uStack_623 = 0;
  uStack_61f = 0;
  uStack_61c = 0;
  uStack_618 = 0;
  bStack_630 = 0x16;
  uStack_62f = 0x64616568;
  uStack_62b = 0x6f6c625f;
  uStack_627 = 0x736b63;
  puStack_638 = (undefined8 *)0x4c0eb85adc9e2318;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  lVar8 = func_0x0d3e4340(param_1,&puStack_638,&lStack_1f8);
  *(undefined8 *)(lVar8 + 0x90) = 1;
  if (lStack_1f8 != 0) {
    (**(code **)(lStack_1f8 + 8))(&lStack_1f8);
  }
  if ((bStack_630 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_61c,CONCAT31(uStack_61f,uStack_623._3_1_)),
                    CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630)) &
                    0xfffffffffffffffe);
  }
  uStack_330 = 0;
  puStack_338 = &UNK_0f46daa0;
  plVar9 = (long *)func_0x0d3e4870(lVar8,&puStack_338);
  if (puStack_338 != (undefined *)0x0) {
    (**(code **)(puStack_338 + 8))(&puStack_338);
  }
  uStack_370 = 0;
  puStack_378 = &UNK_0f46dab8;
  plVar12 = (long *)func_0x0d3e4d90(plVar9,&puStack_378);
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_508 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_518);
  if ((uStack_518 & 1) != 0) {
    func_0x0412a280(uStack_508,uStack_518 & 0xfffffffffffffffe);
  }
  if (puStack_378 != (undefined *)0x0) {
    (**(code **)(puStack_378 + 8))(&puStack_378);
  }
  uStack_3b0 = 0;
  puStack_3b8 = &UNK_0f46dad0;
  plVar12 = (long *)func_0x0d3e5220(plVar9,&puStack_3b8);
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_538);
  if ((uStack_538 & 1) != 0) {
    func_0x0412a280(uStack_528,uStack_538 & 0xfffffffffffffffe);
  }
  if (puStack_3b8 != (undefined *)0x0) {
    (**(code **)(puStack_3b8 + 8))(&puStack_3b8);
  }
  uStack_558 = 0;
  uStack_550 = 0;
  uStack_548 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_558);
  if ((uStack_558 & 1) != 0) {
    func_0x0412a280(uStack_548,uStack_558 & 0xfffffffffffffffe);
  }
  uStack_5cc = 0;
  uStack_5c8 = 0;
  uStack_5c7 = 0;
  uStack_5c0 = 0;
  bStack_5d8 = 0x16;
  uStack_5d7 = 0x6c61;
  uStack_5d5 = 0x6c;
  uStack_5d4 = 0x775f776f;
  uStack_5d0 = 0x72657461;
  uStack_5e0 = 0x6c71e9c7971c2b10;
  uStack_230 = 0;
  uStack_5b0 = 0;
  lStack_238 = 0;
  puStack_5b8 = (undefined8 *)&UNK_0f46dae8;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  puStack_638 = puStack_5b8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f464968;
  bStack_630 = 0;
  uStack_62f = 0;
  uStack_62b = uStack_62b & 0xff000000;
  puStack_5b8 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_649,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar12 = plVar9 + 0x11;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f4649b8;
  plVar9[0x2f] = 0;
  plVar9[0x30] = 0;
  plVar9[0x2e] = (long)(plVar9 + 0x2f);
  ppuVar2 = (undefined8 **)(plVar9 + 0x32);
  plVar9[0x32] = 0;
  plVar9[0x33] = 0;
  if (ppuVar2 != &puStack_638) {
    if (puStack_638 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_638)(&puStack_638,ppuVar2);
      puVar10 = puStack_638;
    }
    puStack_638 = (undefined8 *)0x0;
    *ppuVar2 = puVar10;
  }
  puStack_648 = (uint *)(plVar9 + 0x12);
  if (plVar12 != (long *)&DAT_0f551f88) {
    if ((*puStack_648 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar9[0x14] = _DAT_0f551fa0;
        uVar6 = uRam000000000f551f9c;
        uVar5 = _DAT_0f551f98;
        uVar4 = uRam000000000f551f94;
        *puStack_648 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puStack_648,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar16 = (_DAT_0f551f90 & 1) != 0;
      lVar8 = 0xf551f91;
      if (bVar16) {
        lVar8 = _DAT_0f551fa0;
      }
      uVar14 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar16) {
        uVar14 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puStack_648,lVar8,uVar14);
    }
  }
  plVar9[0x11] = _DAT_0f551f88;
  plVar9[0x15] = 0;
  plStack_640 = plVar12;
  if (puStack_638 != (undefined8 *)0x0) {
    (*(code *)puStack_638[1])(&puStack_638);
  }
  plVar12 = plVar9 + 1;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f464a98;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f464ae8;
  puVar10[0xe] = plVar9 + 4;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_630 = (byte)puVar10;
  uStack_62f = (undefined4)((ulong)puVar10 >> 8);
  uStack_62b._0_3_ = (undefined3)((ulong)puVar10 >> 0x28);
  puStack_638 = puVar10 + 4;
  puStack_5f0 = (uint *)(plVar9 + 4);
  puVar11 = (undefined4 *)func_0x04ffdb90(param_1,&uStack_5e0,0);
  plVar13 = *(long **)(puVar11 + 0x24);
  if (*(long **)(puVar11 + 0x26) <= plVar13) {
    plVar13 = (long *)func_0x05001290(puVar11 + 0x22,plStack_640,&puStack_638);
    goto LAB_0d3e34e9;
  }
  plVar13[2] = 0;
  plVar13[3] = 0;
  *plVar13 = 0;
  plVar13[1] = 0;
  plVar13[4] = 0;
  if (plVar13 == plStack_640) {
LAB_0d3e3470:
    *plVar13 = *plStack_640;
    plVar13[5] = (long)(puVar10 + 4);
    plVar13[6] = (long)puVar10;
LAB_0d3e34d9:
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_648 & 1) == 0) {
      plVar13[3] = *(long *)(puStack_648 + 4);
      lVar8 = *(long *)(puStack_648 + 2);
      plVar13[1] = *(long *)puStack_648;
      plVar13[2] = lVar8;
      goto LAB_0d3e3470;
    }
    func_0x04885070(plVar13 + 1,plVar9[0x14],plVar9[0x13]);
    *plVar13 = *plStack_640;
    puVar10 = (undefined8 *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
    plVar13[5] = (long)puStack_638;
    plVar13[6] = CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
    if (puVar10 != (undefined8 *)0x0) goto LAB_0d3e34d9;
  }
  plVar13 = plVar13 + 7;
  *(long **)(puVar11 + 0x24) = plVar13;
LAB_0d3e34e9:
  puVar3 = puStack_5f0;
  *(long **)(puVar11 + 0x24) = plVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar13 = (long *)CONCAT35((undefined3)uStack_62b,CONCAT41(uStack_62f,bStack_630));
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar8 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  auStack_578[0] = 0;
  auStack_578[1] = 0;
  auStack_578[2] = 0;
  (**(code **)(*(long *)puVar3 + 0x10))(puVar3,auStack_578);
  if ((auStack_578[0] & 1) != 0) {
    func_0x0412a280(auStack_578[2],auStack_578[0] & 0xfffffffffffffffe);
  }
  if (lStack_238 != 0) {
    (**(code **)(lStack_238 + 8))(&lStack_238);
  }
  if ((bStack_5d8 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5c7,uStack_5c8),
                    CONCAT44(uStack_5d4,CONCAT13(uStack_5d5,CONCAT21(uStack_5d7,bStack_5d8))) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12cf7bb  growth_direction
 * 0x1458471  height_distribution
 */
