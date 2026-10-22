/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc16a40 (ELF vaddr 0xcb16a40)
 * Label: caller-of-callee
 * Body:  [[0cc16a40, 0cc17d03] [0cc17d10, 0cc17d77] [0cc17d80, 0cc18485] [0cc18490, 0cc184cc] [0cc184d0, 0cc194c8] [0cc19b25, 0cc19bcf] [0cc19f3e, 0cc19f51]]
 * Ghidra: FUN_0cc16a40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc16a40(undefined8 param_1,byte *param_2)

{
  long **pplVar1;
  long lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *plVar31;
  long lVar32;
  uint *puVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  bool bVar37;
  long *plStack_3a8;
  byte bStack_3a0;
  undefined4 uStack_39f;
  undefined1 uStack_39b;
  undefined2 uStack_39a;
  undefined1 uStack_398;
  undefined7 uStack_397;
  long *plStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  uint *puStack_360;
  long *plStack_358;
  undefined1 auStack_350 [4];
  undefined2 uStack_34c;
  undefined2 uStack_34a;
  undefined1 uStack_348;
  undefined2 uStack_347;
  undefined1 uStack_345;
  undefined2 uStack_344;
  undefined2 uStack_342;
  uint *puStack_340;
  long lStack_338;
  long *plStack_310;
  uint *puStack_308;
  undefined1 uStack_2f9;
  long *plStack_2f8;
  byte bStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined2 uStack_2e7;
  undefined5 uStack_2e5;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2b0;
  long *plStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined4 *puStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined4 *puStack_260;
  uint *puStack_258;
  long *plStack_250;
  byte bStack_248;
  undefined7 uStack_247;
  undefined8 uStack_238;
  undefined8 uStack_230;
  byte bStack_228;
  undefined4 uStack_227;
  undefined4 uStack_223;
  undefined4 uStack_21f;
  undefined1 uStack_21b;
  undefined2 uStack_21a;
  undefined1 uStack_218;
  undefined5 uStack_217;
  undefined2 uStack_212;
  undefined8 uStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_178;
  undefined8 uStack_170;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar25 = *(undefined8 *)param_2;
  uStack_2e5 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  bStack_2f0 = 0x14;
  uStack_2ef = 0x6669746e656469;
  uStack_2e8 = 0x69;
  uStack_2e7 = 0x7265;
  plStack_2f8 = (long *)0x1ec7b02a7b9da20c;
  uStack_b0 = 0;
  auStack_350 = (undefined1  [4])0x0;
  uStack_34c = 0;
  uStack_34a = 0;
  lStack_b8 = 0;
  plStack_358 = (long *)&UNK_0f3f9150;
  puStack_360 = (uint *)param_2;
  uStack_200 = param_1;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_3a8 = plStack_358;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f3f6398;
  bStack_3a0 = 0;
  uStack_39f = 0;
  uStack_39b = 0;
  uStack_39a = 0;
  plStack_358 = (long *)0x0;
  plVar17[4] = (long)&UNK_0f2ccd78;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  *(undefined1 *)(plVar17 + 0xd) = 0;
  FUN_04aa75f0(plVar17 + 0xe,&puStack_1f8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar22 = plVar17 + 0x11;
  plVar17[0x11] = 0;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  plVar17[0x16] = 0;
  plVar17[0x17] = 0xffffffff;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x18] = 0;
  plVar17[0x19] = 0;
  plVar17[0x1a] = 0;
  plVar17[0x1b] = 0;
  plVar17[0x1c] = 0;
  plVar17[0x1d] = 0;
  plVar17[0x1e] = 0;
  plVar17[0x1f] = 0;
  plVar17[4] = (long)&UNK_0f3f63e8;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  plVar17[0x30] = 0;
  plVar17[0x31] = 0;
  plVar17[0x32] = 0;
  plVar17[0x33] = 0;
  plVar17[0x34] = 0;
  *(undefined4 *)(plVar17 + 0x35) = 0x3f800000;
  plVar17[0x36] = 0;
  plVar17[0x37] = 0;
  if (plStack_3a8 == (long *)0x0) {
    plVar18 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_3a8)(&plStack_3a8,plVar17 + 0x36);
    plVar18 = plStack_3a8;
  }
  plVar23 = plVar17 + 4;
  plStack_3a8 = (long *)0x0;
  plVar17[0x36] = (long)plVar18;
  *(undefined1 *)(plVar17 + 0x3e) = 0;
  puStack_308 = (uint *)(plVar17 + 0x12);
  if (plVar22 != (long *)&DAT_0f552138) {
    if ((*puStack_308 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar17[0x14] = _DAT_0f552150;
        uVar10 = uRam000000000f55214c;
        uVar9 = _DAT_0f552148;
        uVar8 = uRam000000000f552144;
        *puStack_308 = _DAT_0f552140;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
        *(undefined4 *)(plVar17 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puStack_308,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar37 = (_DAT_0f552140 & 1) != 0;
      lVar21 = 0xf552141;
      if (bVar37) {
        lVar21 = _DAT_0f552150;
      }
      uVar29 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar37) {
        uVar29 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_308,lVar21,uVar29);
    }
  }
  plVar17[0x11] = _DAT_0f552138;
  plVar17[0x15] = 0;
  if (plStack_3a8 != (long *)0x0) {
    (*(code *)plStack_3a8[1])(&plStack_3a8);
  }
  plVar18 = plVar17 + 1;
  if (plStack_358 != (long *)0x0) {
    (*(code *)plStack_358[1])(&plStack_358);
  }
  LOCK();
  *plVar18 = *plVar18 + 1;
  UNLOCK();
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = &UNK_0f3f64c8;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[4] = &UNK_0f3f6518;
  puVar19[0xe] = plVar23;
  puVar19[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  bStack_3a0 = (byte)puVar19;
  uStack_39f = (undefined4)((ulong)puVar19 >> 8);
  uStack_39b = (undefined1)((ulong)puVar19 >> 0x28);
  uStack_39a = (undefined2)((ulong)puVar19 >> 0x30);
  plStack_3a8 = puVar19 + 4;
  puVar20 = (undefined4 *)func_0x0cc89530(uVar25,&plStack_2f8,1);
  plVar26 = *(long **)(puVar20 + 0x24);
  if (plVar26 < *(long **)(puVar20 + 0x26)) {
    plVar26[2] = 0;
    plVar26[3] = 0;
    *plVar26 = 0;
    plVar26[1] = 0;
    plVar26[4] = 0;
    if (plVar26 != plVar22) {
      puVar4 = (uint *)(plVar26 + 1);
      if ((*puStack_308 & 1) == 0) {
        plVar26[3] = *(long *)(puStack_308 + 4);
        lVar21 = *(long *)(puStack_308 + 2);
        *(undefined8 *)puVar4 = *(undefined8 *)puStack_308;
        plVar26[2] = lVar21;
      }
      else {
        puStack_308 = puVar4;
        func_0x04885070(puVar4,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar26 = *plVar22;
    plVar26[5] = (long)(puVar19 + 4);
    plVar26[6] = (long)puVar19;
    LOCK();
    puVar19[1] = puVar19[1] + 1;
    UNLOCK();
    plVar26 = plVar26 + 7;
    *(long **)(puVar20 + 0x24) = plVar26;
  }
  else {
    plVar26 = (long *)func_0x0cc8bf20(puVar20 + 0x22,plVar22,&plStack_3a8);
  }
  *(long **)(puVar20 + 0x24) = plVar26;
  uVar8 = *puVar20;
  uVar9 = puVar20[1];
  uVar10 = puVar20[2];
  uVar11 = puVar20[3];
  if (*(long *)(puVar20 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar20 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar9;
  *(undefined4 *)(plVar17 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar11;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar26 = plVar22 + 1;
    lVar21 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
  plVar22 = (long *)CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)));
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar26 = plVar22 + 1;
    lVar21 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar21 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar21 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar21 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  if (lVar21 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (lVar21 == 0) {
    func_0x0eec74c0(0x90,0);
  }
  uStack_2a0 = 0x91;
  uStack_298 = 0x8c;
  lStack_290 = lVar21;
  func_0x0eee2f00(lVar21,&UNK_0129c008,0x8c);
  *(undefined1 *)(lVar21 + 0x8c) = 0;
  (**(code **)(*plVar23 + 0x10))(plVar23,&uStack_2a0);
  if ((uStack_2a0 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_290,uStack_2a0 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_2f0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2e0,CONCAT71(uStack_2ef,bStack_2f0) & 0xfffffffffffffffe);
  }
  uVar25 = *(undefined8 *)puStack_360;
  uStack_2e8 = 0;
  uStack_2e7 = 0;
  uStack_2e5 = 0;
  uStack_2e0 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2d8 = 0;
  func_0x0412f5e0(&bStack_2f0,&UNK_0148afe4,0x19);
  plStack_2f8 = (long *)0x23aea842e8dd83f4;
  uStack_f0 = 0;
  auStack_350 = (undefined1  [4])0x0;
  uStack_34c = 0;
  uStack_34a = 0;
  lStack_f8 = 0;
  plStack_358 = (long *)&UNK_0f3f9168;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  plStack_3a8 = plStack_358;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f3f65d0;
  bStack_3a0 = 0;
  uStack_39f = 0;
  uStack_39b = 0;
  uStack_39a = 0;
  plStack_358 = (long *)0x0;
  plVar17[4] = (long)&UNK_0f2ccd78;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  *(undefined1 *)(plVar17 + 0xd) = 0;
  FUN_04aa75f0(plVar17 + 0xe,&puStack_1f8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar22 = plVar17 + 0x11;
  plVar17[0x11] = 0;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  plVar17[0x16] = 0;
  plVar17[0x17] = 0xffffffff;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x18] = 0;
  plVar17[0x19] = 0;
  plVar17[0x1a] = 0;
  plVar17[0x1b] = 0;
  plVar17[0x1c] = 0;
  plVar17[0x1d] = 0;
  plVar17[0x1e] = 0;
  plVar17[0x1f] = 0;
  plVar17[4] = (long)&UNK_0f3f6620;
  plVar17[0x2f] = 0;
  plVar17[0x30] = 0;
  plVar17[0x2e] = (long)(plVar17 + 0x2f);
  pplVar1 = (long **)(plVar17 + 0x32);
  plVar17[0x32] = 0;
  plVar17[0x33] = 0;
  if (pplVar1 != &plStack_3a8) {
    if (plStack_3a8 == (long *)0x0) {
      plVar18 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_3a8)(&plStack_3a8,pplVar1);
      plVar18 = plStack_3a8;
    }
    plStack_3a8 = (long *)0x0;
    *pplVar1 = plVar18;
  }
  puVar4 = (uint *)(plVar17 + 0x12);
  if (plVar22 != (long *)&DAT_0f551f88) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar17[0x14] = _DAT_0f551fa0;
        uVar10 = uRam000000000f551f9c;
        uVar9 = _DAT_0f551f98;
        uVar8 = uRam000000000f551f94;
        *puVar4 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
        *(undefined4 *)(plVar17 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puVar4,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar37 = (_DAT_0f551f90 & 1) != 0;
      lVar21 = 0xf551f91;
      if (bVar37) {
        lVar21 = _DAT_0f551fa0;
      }
      uVar29 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar37) {
        uVar29 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puVar4,lVar21,uVar29);
    }
  }
  plVar17[0x11] = _DAT_0f551f88;
  plVar17[0x15] = 0;
  if (plStack_3a8 != (long *)0x0) {
    (*(code *)plStack_3a8[1])(&plStack_3a8);
  }
  plVar18 = plVar17 + 1;
  if (plStack_358 != (long *)0x0) {
    (*(code *)plStack_358[1])(&plStack_358);
  }
  LOCK();
  *plVar18 = *plVar18 + 1;
  UNLOCK();
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = &UNK_0f3f6700;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[4] = &UNK_0f3f6750;
  puVar19[0xe] = plVar17 + 4;
  puVar19[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  bStack_3a0 = (byte)puVar19;
  uStack_39f = (undefined4)((ulong)puVar19 >> 8);
  uStack_39b = (undefined1)((ulong)puVar19 >> 0x28);
  uStack_39a = (undefined2)((ulong)puVar19 >> 0x30);
  plStack_3a8 = puVar19 + 4;
  puVar20 = (undefined4 *)func_0x0cc89530(uVar25,&plStack_2f8,0);
  plVar23 = *(long **)(puVar20 + 0x24);
  if (plVar23 < *(long **)(puVar20 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar22) {
      if ((*puVar4 & 1) == 0) {
        plVar23[3] = plVar17[0x14];
        lVar21 = plVar17[0x13];
        plVar23[1] = *(long *)puVar4;
        plVar23[2] = lVar21;
      }
      else {
        func_0x04885070(plVar23 + 1,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar23 = *plVar22;
    plVar23[5] = (long)(puVar19 + 4);
    plVar23[6] = (long)puVar19;
    LOCK();
    puVar19[1] = puVar19[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar20 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x0cc8bf20(puVar20 + 0x22,plVar22,&plStack_3a8);
  }
  *(long **)(puVar20 + 0x24) = plVar23;
  uVar8 = *puVar20;
  uVar9 = puVar20[1];
  uVar10 = puVar20[2];
  uVar11 = puVar20[3];
  if (*(long *)(puVar20 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar20 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar9;
  *(undefined4 *)(plVar17 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar11;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    lVar21 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
  plVar22 = (long *)CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)));
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    lVar21 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar21 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar21 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0cc17462;
LAB_0cc17578:
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    *(undefined1 *)(plVar17 + 0xd) = 1;
  }
  else {
    LOCK();
    lVar21 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar21 == 0) goto LAB_0cc17578;
LAB_0cc17462:
    *(undefined1 *)(plVar17 + 0xd) = 1;
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  if ((bStack_2f0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2e0,CONCAT71(uStack_2ef,bStack_2f0) & 0xfffffffffffffffe);
  }
  uVar25 = *(undefined8 *)puStack_360;
  uStack_345 = 0;
  uStack_344 = 0;
  uStack_342 = 0;
  puStack_340 = (uint *)0x0;
  lStack_338 = 0;
  auStack_350 = (undefined1  [4])0x6f727014;
  uStack_34c = 0x6570;
  uStack_34a = 0x7472;
  uStack_348 = 0x69;
  uStack_347 = 0x7365;
  plStack_358 = (long *)0xf6d5e2c0b0f884b2;
  plStack_178 = (long *)0x0;
  uStack_170 = 0;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f3f9190;
  plStack_3a8 = (long *)0x0;
  bStack_3a0 = 0;
  uStack_39f = 0;
  uStack_39b = 0;
  uStack_39a = 0;
  if (plStack_178 == (long *)0x0) {
    plStack_3a8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_178)(&plStack_178,&plStack_3a8);
    plStack_3a8 = plStack_178;
  }
  plStack_178 = (long *)0x0;
  plVar17[4] = (long)&UNK_0f2ccd78;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  *(undefined1 *)(plVar17 + 0xd) = 0;
  FUN_04aa75f0(plVar17 + 0xe,&plStack_2f8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar22 = plVar17 + 0x11;
  plVar17[0x11] = 0;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  plVar17[0x16] = 0;
  plVar17[0x17] = 0xffffffff;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x18] = 0;
  plVar17[0x19] = 0;
  plVar17[0x1a] = 0;
  plVar17[0x1b] = 0;
  plVar17[0x1c] = 0;
  plVar17[0x1d] = 0;
  plVar17[0x1e] = 0;
  plVar17[0x1f] = 0;
  plVar17[4] = (long)&UNK_0f3f91e0;
  pplVar1 = (long **)(plVar17 + 0x2e);
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  *(undefined1 *)(plVar17 + 0x36) = 0;
  if (pplVar1 != &plStack_3a8) {
    if (plStack_3a8 == (long *)0x0) {
      plVar18 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_3a8)(&plStack_3a8,pplVar1);
      plVar18 = plStack_3a8;
    }
    plStack_3a8 = (long *)0x0;
    *pplVar1 = plVar18;
  }
  puVar4 = (uint *)(plVar17 + 0x12);
  if (plVar22 != (long *)&DAT_0f552108) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar17[0x14] = _DAT_0f552120;
        uVar10 = uRam000000000f55211c;
        uVar9 = _DAT_0f552118;
        uVar8 = uRam000000000f552114;
        *puVar4 = _DAT_0f552110;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
        *(undefined4 *)(plVar17 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puVar4,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar37 = (_DAT_0f552110 & 1) != 0;
      lVar21 = 0xf552111;
      if (bVar37) {
        lVar21 = _DAT_0f552120;
      }
      uVar29 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar37) {
        uVar29 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar4,lVar21,uVar29);
    }
  }
  plVar18 = plVar17 + 1;
  plVar17[0x11] = _DAT_0f552108;
  plVar17[0x15] = 0;
  if (plStack_3a8 != (long *)0x0) {
    (*(code *)plStack_3a8[1])(&plStack_3a8);
  }
  LOCK();
  *plVar18 = *plVar18 + 1;
  UNLOCK();
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = &UNK_0f3f92d8;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[4] = &UNK_0f3f9328;
  puVar19[0xe] = plVar17 + 4;
  puVar19[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  bStack_3a0 = (byte)puVar19;
  uStack_39f = (undefined4)((ulong)puVar19 >> 8);
  uStack_39b = (undefined1)((ulong)puVar19 >> 0x28);
  uStack_39a = (undefined2)((ulong)puVar19 >> 0x30);
  plStack_3a8 = puVar19 + 4;
  puVar20 = (undefined4 *)func_0x0cc89530(uVar25,&plStack_358,0);
  plVar23 = *(long **)(puVar20 + 0x24);
  if (plVar23 < *(long **)(puVar20 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar22) {
      if ((*puVar4 & 1) == 0) {
        plVar23[3] = plVar17[0x14];
        lVar21 = plVar17[0x13];
        plVar23[1] = *(long *)puVar4;
        plVar23[2] = lVar21;
      }
      else {
        func_0x04885070(plVar23 + 1,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar23 = *plVar22;
    plVar23[5] = (long)(puVar19 + 4);
    plVar23[6] = (long)puVar19;
    LOCK();
    puVar19[1] = puVar19[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar20 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x0cc8bf20(puVar20 + 0x22,plVar22,&plStack_3a8);
  }
  *(long **)(puVar20 + 0x24) = plVar23;
  uVar8 = *puVar20;
  uVar9 = puVar20[1];
  uVar10 = puVar20[2];
  uVar11 = puVar20[3];
  if (*(long *)(puVar20 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar20 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar9;
  *(undefined4 *)(plVar17 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar11;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    lVar21 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
  plVar22 = (long *)CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)));
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    lVar21 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar21 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar21 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar21 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  if (lVar21 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  if (plStack_178 != (long *)0x0) {
    (*(code *)plStack_178[1])(&plStack_178);
  }
  if (((uint)auStack_350 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_340,
                       CONCAT26(uStack_34a,CONCAT24(uStack_34c,auStack_350)) & 0xfffffffffffffffe);
  }
  puStack_340 = (uint *)0x0;
  lStack_338 = 0;
  auStack_350 = (undefined1  [4])0x2d615b1e;
  uStack_34c = 0x417a;
  uStack_34a = 0x5a2d;
  uStack_348 = 0x30;
  uStack_347 = 0x392d;
  uStack_345 = 0x5f;
  uStack_344 = 0x2d2e;
  uStack_342 = 0x2b5d;
  plStack_358 = (long *)0x255423bc7931a16a;
  plStack_1b8 = (long *)0x0;
  uStack_1b0 = 0;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0f3f9388;
  plStack_3a8 = (long *)0x0;
  bStack_3a0 = 0;
  uStack_39f = 0;
  uStack_39b = 0;
  uStack_39a = 0;
  if (plStack_1b8 == (long *)0x0) {
    plStack_3a8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1b8)(&plStack_1b8,&plStack_3a8);
    plStack_3a8 = plStack_1b8;
  }
  plStack_1b8 = (long *)0x0;
  plVar22[4] = (long)&UNK_0f2ccd78;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[8] = 0;
  plVar22[9] = 0;
  plVar22[10] = 0;
  plVar22[0xb] = 0;
  plVar22[0xc] = 0;
  *(undefined1 *)(plVar22 + 0xd) = 0;
  plStack_310 = plVar22;
  FUN_04aa75f0(plVar22 + 0xe,&plStack_2f8,&UNK_01254d89);
  *(undefined1 *)(plVar22 + 0x10) = 0;
  plVar18 = plVar22 + 0x11;
  plVar22[0x11] = 0;
  plVar22[0x12] = 0;
  plVar22[0x13] = 0;
  plVar22[0x14] = 0;
  plVar22[0x15] = 0;
  plVar22[0x16] = 0;
  plVar22[0x17] = 0xffffffff;
  plVar22[0x26] = 0;
  plVar22[0x27] = 0;
  plVar22[0x18] = 0;
  plVar22[0x19] = 0;
  plVar22[0x1a] = 0;
  plVar22[0x1b] = 0;
  plVar22[0x1c] = 0;
  plVar22[0x1d] = 0;
  plVar22[0x1e] = 0;
  plVar22[0x1f] = 0;
  plVar22[4] = (long)&UNK_0f3f93d8;
  pplVar1 = (long **)(plVar22 + 0x2e);
  plVar22[0x2e] = 0;
  plVar22[0x2f] = 0;
  *(undefined1 *)(plVar22 + 0x36) = 0;
  if (pplVar1 != &plStack_3a8) {
    if (plStack_3a8 == (long *)0x0) {
      plVar23 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_3a8)(&plStack_3a8,pplVar1);
      plVar23 = plStack_3a8;
    }
    plStack_3a8 = (long *)0x0;
    *pplVar1 = plVar23;
  }
  puStack_258 = (uint *)(plVar22 + 0x12);
  if (plVar18 != (long *)&DAT_0f552108) {
    if ((*puStack_258 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar22[0x14] = _DAT_0f552120;
        uVar10 = uRam000000000f55211c;
        uVar9 = _DAT_0f552118;
        uVar8 = uRam000000000f552114;
        *puStack_258 = _DAT_0f552110;
        *(undefined4 *)((long)plVar22 + 0x94) = uVar8;
        *(undefined4 *)(plVar22 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar22 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puStack_258,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar37 = (_DAT_0f552110 & 1) != 0;
      lVar21 = 0xf552111;
      if (bVar37) {
        lVar21 = _DAT_0f552120;
      }
      uVar29 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar37) {
        uVar29 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puStack_258,lVar21,uVar29);
    }
  }
  plVar23 = plVar22 + 1;
  plVar22[0x11] = _DAT_0f552108;
  plVar22[0x15] = 0;
  if (plStack_3a8 != (long *)0x0) {
    (*(code *)plStack_3a8[1])(&plStack_3a8);
  }
  LOCK();
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  plStack_208 = plVar23;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  lVar21 = lStack_338;
  plVar31 = plStack_358;
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0f3f94d0;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[4] = (long)&UNK_0f3f9520;
  plVar23[0xe] = (long)(plVar22 + 4);
  plVar23[0xf] = (long)plVar22;
  LOCK();
  plVar22[1] = plVar22[1] + 1;
  UNLOCK();
  plStack_2a8 = plVar23 + 1;
  plStack_250 = (long *)plVar17[0x1b];
  plVar22 = (long *)plVar17[0x1c];
  plVar27 = plVar17;
  plVar26 = plVar23;
  plStack_2b0 = plVar23;
  if (plStack_250 != plVar22) {
    if (((uint)auStack_350 & 1) == 0) {
      plVar26 = (long *)(ulong)(auStack_350[0] >> 1);
      puStack_308 = (uint *)(auStack_350 + 1);
    }
    else {
      plVar26 = (long *)CONCAT26(uStack_342,
                                 CONCAT24(uStack_344,
                                          CONCAT13(uStack_345,CONCAT21(uStack_347,uStack_348))));
      puStack_308 = puStack_340;
    }
    lVar36 = (long)plStack_250 + 0x19;
    do {
      if (*(long **)(lVar36 + -9) == plVar31) {
        if ((*(long ***)(lVar36 + 0x17) == &plStack_358) && (lVar36 + -9 == lVar21)) {
LAB_0cc181e2:
          puVar20 = (undefined4 *)(lVar36 + -0x19);
          plVar27 = plStack_310;
          goto LAB_0cc181f3;
        }
        bVar5 = *(byte *)(lVar36 + -1);
        if ((bVar5 & 1) == 0) {
          plVar27 = (long *)(ulong)(bVar5 >> 1);
        }
        else {
          plVar27 = *(long **)(lVar36 + 7);
        }
        if (plVar27 == plVar26) {
          lVar32 = lVar36;
          if ((bVar5 & 1) != 0) {
            lVar32 = *(long *)(lVar36 + 0xf);
          }
          iVar16 = func_0x0eee3000(lVar32,puStack_308,plVar26);
          if (iVar16 == 0) {
            *(long ***)(lVar36 + 0x17) = &plStack_358;
            lStack_338 = lVar36 + -9;
            goto LAB_0cc181e2;
          }
        }
      }
      *(undefined8 *)(lVar36 + 0x17) = 0;
      plVar35 = (long *)(lVar36 + 0x8f);
      plVar27 = plVar31;
      lVar36 = lVar36 + 0xa8;
    } while (plVar35 != plVar22);
  }
  if (plVar22 < (long *)plVar17[0x1d]) {
    func_0x0cd2b990(plVar22);
    plVar22 = plVar22 + 0x15;
    plVar17[0x1c] = (long)plVar22;
LAB_0cc1803d:
    plVar17[0x1c] = (long)plVar22;
    func_0x0b63b6d0(plVar22[-0x15],&plStack_358);
    lVar21 = plVar17[0x1c];
    *(char *)(lVar21 + -7) = (char)plVar17[0x10];
    if ((long **)(lVar21 + -0x98) != &plStack_358) {
      puVar4 = (uint *)(lVar21 + -0x90);
      if ((*(byte *)puVar4 & 1) == 0) {
        if (((uint)auStack_350 & 1) == 0) {
          *(uint **)(lVar21 + -0x80) = puStack_340;
          *puVar4 = (uint)auStack_350;
          *(uint *)(lVar21 + -0x8c) = CONCAT22(uStack_34a,uStack_34c);
          *(uint *)(lVar21 + -0x88) = CONCAT13(uStack_345,CONCAT21(uStack_347,uStack_348));
          *(uint *)(lVar21 + -0x84) = CONCAT22(uStack_342,uStack_344);
        }
        else {
          func_0x04885070(puVar4,puStack_340,
                          CONCAT26(uStack_342,
                                   CONCAT24(uStack_344,
                                            CONCAT13(uStack_345,CONCAT21(uStack_347,uStack_348)))));
        }
      }
      else {
        bVar37 = ((uint)auStack_350 & 1) != 0;
        puVar33 = (uint *)(auStack_350 + 1);
        if (bVar37) {
          puVar33 = puStack_340;
        }
        uVar29 = (ulong)(auStack_350[0] >> 1);
        if (bVar37) {
          uVar29 = CONCAT26(uStack_342,
                            CONCAT24(uStack_344,CONCAT13(uStack_345,CONCAT21(uStack_347,uStack_348))
                                    ));
        }
        func_0x04885120(puVar4,puVar33,uVar29);
      }
    }
    *(long **)(lVar21 + -0x98) = plStack_358;
    *(undefined8 *)(lVar21 + -0x78) = 0;
    func_0x04aa9390(&plStack_3a8,auStack_350,(char)plVar17[0x10]);
    lVar21 = plVar17[0x1c];
    FUN_04167a70(lVar21 + -0x70,&plStack_3a8);
    *(ulong *)(lVar21 + -0x68) =
         CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)));
    *(ulong *)(lVar21 + -0x60) = CONCAT71(uStack_397,uStack_398);
    *(long **)(lVar21 + -0x58) = plStack_390;
    *(long **)(lVar21 + -0x50) = plStack_388;
    uVar8 = (undefined4)uStack_380;
    uVar9 = uStack_380._4_4_;
    uVar10 = (undefined4)uStack_378;
    uVar11 = uStack_378._4_4_;
    uStack_380 = 0;
    uStack_378 = (long *)0x0;
    plVar22 = *(long **)(lVar21 + -0x40);
    *(undefined4 *)(lVar21 + -0x48) = uVar8;
    *(undefined4 *)(lVar21 + -0x44) = uVar9;
    *(undefined4 *)(lVar21 + -0x40) = uVar10;
    *(undefined4 *)(lVar21 + -0x3c) = uVar11;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar26 = plVar22 + 1;
      lVar36 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar36 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
    }
    plVar27 = plStack_310;
    plVar22 = uStack_378;
    *(undefined8 *)(lVar21 + -0x38) = uStack_370;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar26 = uStack_378 + 1;
      lVar21 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar22);
      }
    }
    func_0x04167a40(&plStack_3a8);
    lVar21 = plVar17[0x1c];
    *(undefined1 *)(lVar21 + -8) = 0;
    puVar20 = (undefined4 *)(lVar21 + -0xa8);
LAB_0cc181f3:
    plVar31 = plVar23 + 4;
    plVar26 = *(long **)(puVar20 + 0x24);
    if (plVar26 < *(long **)(puVar20 + 0x26)) {
      plVar26[2] = 0;
      plVar26[3] = 0;
      *plVar26 = 0;
      plVar26[1] = 0;
      plVar26[4] = 0;
      if (plVar26 != plVar18) {
        if ((*puStack_258 & 1) == 0) {
          plVar26[3] = *(long *)(puStack_258 + 4);
          lVar21 = *(long *)(puStack_258 + 2);
          plVar26[1] = *(long *)puStack_258;
          plVar26[2] = lVar21;
        }
        else {
          func_0x04885070(plVar26 + 1,plVar27[0x14],plVar27[0x13]);
        }
      }
      *plVar26 = *plVar18;
      plVar26[5] = (long)plVar31;
      plVar26[6] = (long)plStack_2b0;
      LOCK();
      plStack_2b0[1] = plStack_2b0[1] + 1;
      UNLOCK();
      plVar26 = plVar26 + 7;
      *(long **)(puVar20 + 0x24) = plVar26;
      goto LAB_0cc18527;
    }
    plVar26 = (long *)((long)plVar26 - *(long *)(puVar20 + 0x22));
    plVar17 = (long *)(((long)plVar26 >> 3) * 0x6db6db6db6db6db7 + 1);
    if (plVar17 < (long *)0x492492492492493) {
      lVar21 = (long)*(long **)(puVar20 + 0x26) - *(long *)(puVar20 + 0x22) >> 3;
      plVar23 = (long *)(lVar21 * -0x2492492492492492);
      if (plVar17 < plVar23) {
        plVar17 = plVar23;
      }
      plVar23 = (long *)(puVar20 + 0x22);
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        plVar17 = (long *)0x492492492492492;
      }
      plStack_388 = plVar23;
      if (plVar17 == (long *)0x0) {
        plVar22 = (long *)0x0;
      }
      else {
        if ((long *)0x492492492492492 < plVar17) goto LAB_0cc1948e;
        plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar17 * 0x38);
        if (plVar22 == (long *)0x0) {
          func_0x0eec74c0((long)plVar17 * 0x38,0);
          plVar22 = (long *)0x0;
        }
      }
      plVar27 = (long *)((long)plVar22 + (long)plVar26);
      uStack_398 = SUB81(plVar27,0);
      uStack_397 = (undefined7)((ulong)plVar27 >> 8);
      uStack_39f = (undefined4)((ulong)plVar27 >> 8);
      uStack_39b = (undefined1)((ulong)plVar27 >> 0x28);
      uStack_39a = (undefined2)((ulong)plVar27 >> 0x30);
      plStack_390 = plVar22 + (long)plVar17 * 7;
      *(undefined8 *)((long)(plVar22 + 2) + (long)plVar26) = 0;
      ((undefined8 *)((long)(plVar22 + 2) + (long)plVar26))[1] = 0;
      *(undefined8 *)((long)plVar22 + (long)plVar26) = 0;
      ((undefined8 *)((long)plVar22 + (long)plVar26))[1] = 0;
      *(undefined8 *)((long)(plVar22 + 4) + (long)plVar26) = 0;
      plVar17 = plVar27;
      plVar35 = plVar27;
      plStack_3a8 = plVar22;
      bStack_3a0 = uStack_398;
      if (plVar27 != plVar18) {
        lVar21 = (long)plVar22 + (long)plVar26;
        if ((*puStack_258 & 1) == 0) {
          *(long *)(lVar21 + 0x18) = *(long *)(puStack_258 + 4);
          uVar12 = puStack_258[1];
          uVar13 = puStack_258[2];
          uVar14 = puStack_258[3];
          *(uint *)(lVar21 + 8) = *puStack_258;
          *(uint *)(lVar21 + 0xc) = uVar12;
          *(uint *)(lVar21 + 0x10) = uVar13;
          *(uint *)(lVar21 + 0x14) = uVar14;
        }
        else {
          func_0x04885070((uint *)(lVar21 + 8),plStack_310[0x14],plStack_310[0x13]);
          plVar17 = (long *)CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0))
                                    );
          plVar35 = (long *)CONCAT71(uStack_397,uStack_398);
        }
      }
      *plVar27 = *plVar18;
      plVar27[5] = (long)plVar31;
      plVar27[6] = (long)plStack_2b0;
      LOCK();
      plStack_2b0[1] = plStack_2b0[1] + 1;
      UNLOCK();
      plVar26 = plVar35 + 7;
      uStack_398 = SUB81(plVar26,0);
      uStack_397 = (undefined7)((ulong)plVar26 >> 8);
      puVar30 = *(undefined8 **)(puVar20 + 0x22);
      puVar6 = *(undefined8 **)(puVar20 + 0x24);
      puVar19 = (undefined8 *)((long)plVar17 + ((long)puVar30 - (long)puVar6));
      puVar24 = puVar19;
      puVar28 = puVar30;
      if ((long)puVar30 - (long)puVar6 != 0) {
        do {
          puVar24[2] = 0;
          puVar24[3] = 0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[4] = 0;
          puVar24[3] = puVar28[3];
          uVar25 = puVar28[2];
          puVar24[1] = puVar28[1];
          puVar24[2] = uVar25;
          *(undefined2 *)(puVar28 + 1) = 0;
          *puVar24 = *puVar28;
          uVar25 = puVar28[6];
          puVar24[5] = puVar28[5];
          puVar24[6] = uVar25;
          puVar28[5] = 0;
          puVar28[6] = 0;
          puVar28 = puVar28 + 7;
          puVar24 = puVar24 + 7;
        } while (puVar28 != puVar6);
        do {
          plVar17 = (long *)puVar30[6];
          if (plVar17 == (long *)0x0) {
LAB_0cc184b4:
            bVar5 = *(byte *)(puVar30 + 1);
          }
          else {
            LOCK();
            plVar22 = plVar17 + 1;
            lVar21 = *plVar22;
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (lVar21 != 0) goto LAB_0cc184b4;
            (**(code **)(*plVar17 + 0x10))(plVar17);
            func_0x0412c2d0(plVar17);
            bVar5 = *(byte *)(puVar30 + 1);
          }
          if ((bVar5 & 1) != 0) {
            thunk_FUN_0ee326a0(puVar30[3],puVar30[1] & 0xfffffffffffffffe);
          }
          puVar30 = puVar30 + 7;
        } while (puVar30 != puVar6);
        puVar30 = (undefined8 *)*plVar23;
        plVar26 = (long *)CONCAT71(uStack_397,uStack_398);
      }
      *(undefined8 **)(puVar20 + 0x22) = puVar19;
      *(long **)(puVar20 + 0x24) = plVar26;
      lVar21 = *(long *)(puVar20 + 0x26);
      *(long **)(puVar20 + 0x26) = plStack_390;
      if (puVar30 != (undefined8 *)0x0) {
        thunk_FUN_0ee326a0(puVar30,lVar21 - (long)puVar30);
      }
LAB_0cc18527:
      plVar18 = plStack_208;
      plVar22 = plStack_2a8;
      plVar17 = plStack_310;
      *(long **)(puVar20 + 0x24) = plVar26;
      uVar8 = *puVar20;
      uVar9 = puVar20[1];
      uVar10 = puVar20[2];
      uVar11 = puVar20[3];
      if (*(long *)(puVar20 + 2) != 0) {
        LOCK();
        plVar23 = (long *)(*(long *)(puVar20 + 2) + 8);
        *plVar23 = *plVar23 + 1;
        UNLOCK();
      }
      plVar23 = (long *)plStack_310[0xf];
      *(undefined4 *)(plStack_310 + 0xe) = uVar8;
      *(undefined4 *)((long)plStack_310 + 0x74) = uVar9;
      *(undefined4 *)(plStack_310 + 0xf) = uVar10;
      *(undefined4 *)((long)plStack_310 + 0x7c) = uVar11;
      if (plVar23 != (long *)0x0) {
        LOCK();
        plVar26 = plVar23 + 1;
        lVar21 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          func_0x0412c2d0(plVar23);
        }
      }
      plVar23 = plStack_2b0;
      *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
      LOCK();
      lVar21 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
        func_0x0412c2d0(plVar23);
        LOCK();
        lVar21 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar21 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
      }
      if (lVar21 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
        LOCK();
        lVar21 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar21 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
      }
      if (lVar21 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
      if (plStack_1b8 != (long *)0x0) {
        (*(code *)plStack_1b8[1])(&plStack_1b8);
      }
      if (((uint)auStack_350 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_340,
                           CONCAT26(uStack_34a,CONCAT24(uStack_34c,auStack_350)) &
                           0xfffffffffffffffe);
      }
      uVar25 = *(undefined8 *)puStack_360;
      uStack_342 = 0;
      puStack_340 = (uint *)0x0;
      lStack_338 = 0;
      auStack_350 = (undefined1  [4])0x6e656d1a;
      uStack_34c = 0x5f75;
      uStack_34a = 0x6163;
      uStack_348 = 0x74;
      uStack_347 = 0x6765;
      uStack_345 = 0x6f;
      uStack_344 = 0x7972;
      plStack_358 = (long *)0xb27fc74a61814133;
      bStack_2f0 = 0;
      uStack_2ef = 0;
      plStack_2f8 = (long *)&UNK_0f3f90f0;
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(0x1c0,0);
      }
      plVar17[1] = 0;
      plVar17[2] = 0;
      *plVar17 = (long)&UNK_0f3f8f08;
      plStack_3a8 = (long *)0x0;
      bStack_3a0 = 0;
      uStack_39f = 0;
      uStack_39b = 0;
      uStack_39a = 0;
      if (plStack_2f8 == (long *)0x0) {
        plStack_3a8 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_2f8)(&plStack_2f8,&plStack_3a8);
        plStack_3a8 = plStack_2f8;
      }
      plStack_2f8 = (long *)0x0;
      plVar17[4] = (long)&UNK_0f2ccd78;
      plVar17[5] = 0;
      plVar17[6] = 0;
      plVar17[7] = 0;
      plVar17[8] = 0;
      plVar17[9] = 0;
      plVar17[10] = 0;
      plVar17[0xb] = 0;
      plVar17[0xc] = 0;
      *(undefined1 *)(plVar17 + 0xd) = 0;
      FUN_04aa75f0(plVar17 + 0xe,&puStack_1f8,&UNK_01254d89);
      *(undefined1 *)(plVar17 + 0x10) = 0;
      plVar22 = plVar17 + 0x11;
      plVar17[0x11] = 0;
      plVar17[0x12] = 0;
      plVar17[0x13] = 0;
      plVar17[0x14] = 0;
      plVar17[0x15] = 0;
      plVar17[0x16] = 0;
      plVar17[0x17] = 0xffffffff;
      plVar17[0x26] = 0;
      plVar17[0x27] = 0;
      plVar17[0x18] = 0;
      plVar17[0x19] = 0;
      plVar17[0x1a] = 0;
      plVar17[0x1b] = 0;
      plVar17[0x1c] = 0;
      plVar17[0x1d] = 0;
      plVar17[0x1e] = 0;
      plVar17[0x1f] = 0;
      plVar17[4] = (long)&UNK_0f3f8f58;
      pplVar1 = (long **)(plVar17 + 0x2e);
      plVar17[0x2e] = 0;
      plVar17[0x2f] = 0;
      *(undefined1 *)(plVar17 + 0x36) = 0;
      if (pplVar1 != &plStack_3a8) {
        if (plStack_3a8 == (long *)0x0) {
          plVar18 = (long *)0x0;
        }
        else {
          (*(code *)*plStack_3a8)(&plStack_3a8,pplVar1);
          plVar18 = plStack_3a8;
        }
        plStack_3a8 = (long *)0x0;
        *pplVar1 = plVar18;
      }
      plVar18 = plVar17 + 4;
      puStack_360 = (uint *)(plVar17 + 0x12);
      if (plVar22 != (long *)&DAT_0f552108) {
        if ((*puStack_360 & 1) == 0) {
          if ((_DAT_0f552110 & 1) == 0) {
            plVar17[0x14] = _DAT_0f552120;
            uVar10 = uRam000000000f55211c;
            uVar9 = _DAT_0f552118;
            uVar8 = uRam000000000f552114;
            *puStack_360 = _DAT_0f552110;
            *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
            *(undefined4 *)(plVar17 + 0x13) = uVar9;
            *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
          }
          else {
            func_0x04885070(puStack_360,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
          }
        }
        else {
          bVar37 = (_DAT_0f552110 & 1) != 0;
          lVar21 = 0xf552111;
          if (bVar37) {
            lVar21 = _DAT_0f552120;
          }
          uVar29 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
          if (bVar37) {
            uVar29 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
          }
          func_0x04885120(puStack_360,lVar21,uVar29);
        }
      }
      plVar23 = plVar17 + 1;
      plVar17[0x11] = _DAT_0f552108;
      plVar17[0x15] = 0;
      if (plStack_3a8 != (long *)0x0) {
        (*(code *)plStack_3a8[1])(&plStack_3a8);
      }
      LOCK();
      *plVar23 = *plVar23 + 1;
      UNLOCK();
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = &UNK_0f3f9050;
      puVar19[6] = 0;
      puVar19[7] = 0;
      puVar19[4] = &UNK_0f3f90a0;
      puVar19[0xe] = plVar18;
      puVar19[0xf] = plVar17;
      LOCK();
      plVar17[1] = plVar17[1] + 1;
      UNLOCK();
      bStack_3a0 = (byte)puVar19;
      uStack_39f = (undefined4)((ulong)puVar19 >> 8);
      uStack_39b = (undefined1)((ulong)puVar19 >> 0x28);
      uStack_39a = (undefined2)((ulong)puVar19 >> 0x30);
      plStack_3a8 = puVar19 + 4;
      puVar20 = (undefined4 *)func_0x0cc89530(uVar25,&plStack_358,0);
      plVar26 = *(long **)(puVar20 + 0x24);
      if (plVar26 < *(long **)(puVar20 + 0x26)) {
        plVar26[2] = 0;
        plVar26[3] = 0;
        *plVar26 = 0;
        plVar26[1] = 0;
        plVar26[4] = 0;
        if (plVar26 != plVar22) {
          puVar4 = (uint *)(plVar26 + 1);
          if ((*puStack_360 & 1) == 0) {
            plVar26[3] = *(long *)(puStack_360 + 4);
            lVar21 = *(long *)(puStack_360 + 2);
            *(undefined8 *)puVar4 = *(undefined8 *)puStack_360;
            plVar26[2] = lVar21;
          }
          else {
            puStack_360 = puVar4;
            func_0x04885070(puVar4,plVar17[0x14],plVar17[0x13]);
          }
        }
        *plVar26 = *plVar22;
        plVar26[5] = (long)(puVar19 + 4);
        plVar26[6] = (long)puVar19;
        LOCK();
        puVar19[1] = puVar19[1] + 1;
        UNLOCK();
        plVar26 = plVar26 + 7;
        *(long **)(puVar20 + 0x24) = plVar26;
      }
      else {
        plVar26 = (long *)func_0x0cc8bf20(puVar20 + 0x22,plVar22,&plStack_3a8);
      }
      *(long **)(puVar20 + 0x24) = plVar26;
      uVar8 = *puVar20;
      uVar9 = puVar20[1];
      uVar10 = puVar20[2];
      uVar11 = puVar20[3];
      if (*(long *)(puVar20 + 2) != 0) {
        LOCK();
        plVar22 = (long *)(*(long *)(puVar20 + 2) + 8);
        *plVar22 = *plVar22 + 1;
        UNLOCK();
      }
      plVar22 = (long *)plVar17[0xf];
      *(undefined4 *)(plVar17 + 0xe) = uVar8;
      *(undefined4 *)((long)plVar17 + 0x74) = uVar9;
      *(undefined4 *)(plVar17 + 0xf) = uVar10;
      *(undefined4 *)((long)plVar17 + 0x7c) = uVar11;
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar26 = plVar22 + 1;
        lVar21 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
      plVar22 = (long *)CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)));
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar26 = plVar22 + 1;
        lVar21 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      LOCK();
      lVar21 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
        LOCK();
        lVar21 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar21 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
      }
      if (lVar21 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
      puStack_260 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puStack_260 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      uVar25 = _UNK_013012cb;
      uStack_270 = 0x39;
      uStack_268 = 0x34;
      *(undefined8 *)(puStack_260 + 8) = _DAT_013012c3;
      *(undefined8 *)(puStack_260 + 10) = uVar25;
      uVar25 = _UNK_013012bb;
      *(undefined8 *)(puStack_260 + 4) = _DAT_013012b3;
      *(undefined8 *)(puStack_260 + 6) = uVar25;
      uVar10 = _UNK_013012af;
      uVar9 = _UNK_013012ab;
      uVar8 = _UNK_013012a7;
      *puStack_260 = _DAT_013012a3;
      puStack_260[1] = uVar8;
      puStack_260[2] = uVar9;
      puStack_260[3] = uVar10;
      puStack_260[0xc] = 0x2e6b636f;
      *(undefined1 *)(puStack_260 + 0xd) = 0;
      uVar25 = (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_270);
      if ((uStack_270 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_260,uStack_270 & 0xfffffffffffffffe);
      }
      if (plStack_2f8 != (long *)0x0) {
        (*(code *)plStack_2f8[1])(&plStack_2f8);
      }
      if (((uint)auStack_350 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_340,
                           CONCAT26(uStack_34a,CONCAT24(uStack_34c,auStack_350)) &
                           0xfffffffffffffffe);
      }
      uStack_39a = 0;
      uStack_398 = 0;
      uStack_397 = 0;
      plStack_390 = (long *)0x0;
      plStack_388 = (long *)0x0;
      bStack_3a0 = 10;
      uStack_39f = 0x756f7267;
      uStack_39b = 0x70;
      plStack_3a8 = (long *)0x3533c594f7115402;
      uStack_1f0 = 0;
      puStack_1f8 = &UNK_0f3f9108;
      plVar17 = (long *)func_0x0cc16470(uVar25,&plStack_3a8,&puStack_1f8);
      plStack_358 = (long *)0x100;
      FUN_0470d9a0(&bStack_248,&UNK_013012d8,0x81,4,&plStack_358);
      (**(code **)(*plVar17 + 0x10))(plVar17,&bStack_248);
      if ((bStack_248 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_238,CONCAT71(uStack_247,bStack_248) & 0xfffffffffffffffe);
      }
      if (puStack_1f8 != (undefined *)0x0) {
        (**(code **)(puStack_1f8 + 8))(&puStack_1f8);
      }
      if ((bStack_3a0 & 1) != 0) {
        thunk_FUN_0ee326a0(plStack_390,
                           CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)))
                           & 0xfffffffffffffffe);
      }
      uStack_397 = 0;
      plStack_390 = (long *)0x0;
      plStack_388 = (long *)0x0;
      bStack_3a0 = 0x10;
      uStack_39f = 0x65746163;
      uStack_39b = 0x67;
      uStack_39a = 0x726f;
      uStack_398 = 0x79;
      plStack_3a8 = (long *)0x16aa56d5d04b3781;
      puStack_138 = &UNK_0f3f9120;
      uStack_130 = uStack_200;
      plVar17 = (long *)func_0x0cc16470(uVar25,&plStack_3a8,&puStack_138);
      puStack_278 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puStack_278 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      uVar15 = _UNK_0148afda;
      uStack_288 = 0x39;
      uStack_280 = 0x31;
      *(undefined8 *)(puStack_278 + 8) = _DAT_0148afd2;
      *(undefined8 *)(puStack_278 + 10) = uVar15;
      uVar15 = _UNK_0148afca;
      *(undefined8 *)(puStack_278 + 4) = _DAT_0148afc2;
      *(undefined8 *)(puStack_278 + 6) = uVar15;
      uVar10 = _UNK_0148afbe;
      uVar9 = _UNK_0148afba;
      uVar8 = _UNK_0148afb6;
      *puStack_278 = _DAT_0148afb2;
      puStack_278[1] = uVar8;
      puStack_278[2] = uVar9;
      puStack_278[3] = uVar10;
      *(undefined2 *)(puStack_278 + 0xc) = 0x2e;
      (**(code **)(*plVar17 + 0x10))(plVar17,&uStack_288);
      if ((uStack_288 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_278,uStack_288 & 0xfffffffffffffffe);
      }
      if (puStack_138 != (undefined *)0x0) {
        (**(code **)(puStack_138 + 8))(&puStack_138);
      }
      if ((bStack_3a0 & 1) != 0) {
        thunk_FUN_0ee326a0(plStack_390,
                           CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)))
                           & 0xfffffffffffffffe);
      }
      uStack_212 = 0;
      uStack_210 = 0;
      bStack_228 = 0x2a;
      uStack_227 = _DAT_0148af92;
      uStack_223 = _UNK_0148af96;
      uStack_21f = _UNK_0148af9a;
      uStack_21b = (undefined1)_UNK_0148af9e;
      uStack_21a = 0x6f63;
      uStack_218 = 0x6d;
      uStack_217 = 0x73646e616d;
      uStack_230 = 0x9a997d47a726f033;
      uStack_70 = 0;
      auStack_350 = (undefined1  [4])0x0;
      uStack_34c = 0;
      uStack_34a = 0;
      lStack_78 = 0;
      plStack_358 = (long *)&UNK_0f3f9138;
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(0x1d0,0);
      }
      plStack_3a8 = plStack_358;
      plVar17[1] = 0;
      plVar17[2] = 0;
      *plVar17 = (long)&UNK_0f3f61b8;
      bStack_3a0 = 0;
      uStack_39f = 0;
      uStack_39b = 0;
      uStack_39a = 0;
      plStack_358 = (long *)0x0;
      plVar17[4] = (long)&UNK_0f2ccd78;
      plVar17[5] = 0;
      plVar17[6] = 0;
      plVar17[7] = 0;
      plVar17[8] = 0;
      plVar17[9] = 0;
      plVar17[10] = 0;
      plVar17[0xb] = 0;
      plVar17[0xc] = 0;
      *(undefined1 *)(plVar17 + 0xd) = 0;
      FUN_04aa75f0(plVar17 + 0xe,&uStack_2f9,&UNK_01254d89);
      *(undefined1 *)(plVar17 + 0x10) = 0;
      plVar22 = plVar17 + 0x11;
      plVar17[0x11] = 0;
      plVar17[0x12] = 0;
      plVar17[0x13] = 0;
      plVar17[0x14] = 0;
      plVar17[0x15] = 0;
      plVar17[0x16] = 0;
      plVar17[0x17] = 0xffffffff;
      plVar17[0x26] = 0;
      plVar17[0x27] = 0;
      plVar17[0x18] = 0;
      plVar17[0x19] = 0;
      plVar17[0x1a] = 0;
      plVar17[0x1b] = 0;
      plVar17[0x1c] = 0;
      plVar17[0x1d] = 0;
      plVar17[0x1e] = 0;
      plVar17[0x1f] = 0;
      plVar17[4] = (long)&UNK_0f3f6208;
      plVar17[0x2f] = 0;
      plVar17[0x30] = 0;
      plVar17[0x2e] = (long)(plVar17 + 0x2f);
      pplVar1 = (long **)(plVar17 + 0x32);
      plVar17[0x32] = 0;
      plVar17[0x33] = 0;
      if (pplVar1 != &plStack_3a8) {
        if (plStack_3a8 == (long *)0x0) {
          plVar18 = (long *)0x0;
        }
        else {
          (*(code *)*plStack_3a8)(&plStack_3a8,pplVar1);
          plVar18 = plStack_3a8;
        }
        plStack_3a8 = (long *)0x0;
        *pplVar1 = plVar18;
      }
      plVar18 = plVar17 + 4;
      puStack_360 = (uint *)(plVar17 + 0x12);
      if (plVar22 != (long *)&DAT_0f551f88) {
        if ((*puStack_360 & 1) == 0) {
          if ((_DAT_0f551f90 & 1) == 0) {
            plVar17[0x14] = _DAT_0f551fa0;
            uVar10 = uRam000000000f551f9c;
            uVar9 = _DAT_0f551f98;
            uVar8 = uRam000000000f551f94;
            *puStack_360 = _DAT_0f551f90;
            *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
            *(undefined4 *)(plVar17 + 0x13) = uVar9;
            *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
          }
          else {
            func_0x04885070(puStack_360,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
          }
        }
        else {
          bVar37 = (_DAT_0f551f90 & 1) != 0;
          lVar21 = 0xf551f91;
          if (bVar37) {
            lVar21 = _DAT_0f551fa0;
          }
          uVar29 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
          if (bVar37) {
            uVar29 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
          }
          func_0x04885120(puStack_360,lVar21,uVar29);
        }
      }
      plVar17[0x11] = _DAT_0f551f88;
      plVar17[0x15] = 0;
      if (plStack_3a8 != (long *)0x0) {
        (*(code *)plStack_3a8[1])(&plStack_3a8);
      }
      plVar23 = plVar17 + 1;
      if (plStack_358 != (long *)0x0) {
        (*(code *)plStack_358[1])(&plStack_358);
      }
      LOCK();
      *plVar23 = *plVar23 + 1;
      UNLOCK();
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = &UNK_0f3f62e8;
      puVar19[6] = 0;
      puVar19[7] = 0;
      puVar19[4] = &UNK_0f3f6338;
      puVar19[0xe] = plVar18;
      puVar19[0xf] = plVar17;
      LOCK();
      plVar17[1] = plVar17[1] + 1;
      UNLOCK();
      bStack_3a0 = (byte)puVar19;
      uStack_39f = (undefined4)((ulong)puVar19 >> 8);
      uStack_39b = (undefined1)((ulong)puVar19 >> 0x28);
      uStack_39a = (undefined2)((ulong)puVar19 >> 0x30);
      plStack_3a8 = puVar19 + 4;
      puVar20 = (undefined4 *)func_0x0cc85080(uVar25,&uStack_230);
      plVar26 = *(long **)(puVar20 + 0x24);
      if (plVar26 < *(long **)(puVar20 + 0x26)) {
        plVar26[2] = 0;
        plVar26[3] = 0;
        *plVar26 = 0;
        plVar26[1] = 0;
        plVar26[4] = 0;
        if (plVar26 != plVar22) {
          puVar4 = (uint *)(plVar26 + 1);
          if ((*puStack_360 & 1) == 0) {
            plVar26[3] = *(long *)(puStack_360 + 4);
            lVar21 = *(long *)(puStack_360 + 2);
            *(undefined8 *)puVar4 = *(undefined8 *)puStack_360;
            plVar26[2] = lVar21;
          }
          else {
            puStack_360 = puVar4;
            func_0x04885070(puVar4,plVar17[0x14],plVar17[0x13]);
          }
        }
        *plVar26 = *plVar22;
        plVar26[5] = (long)(puVar19 + 4);
        plVar26[6] = (long)puVar19;
        LOCK();
        puVar19[1] = puVar19[1] + 1;
        UNLOCK();
        plVar26 = plVar26 + 7;
        *(long **)(puVar20 + 0x24) = plVar26;
      }
      else {
        plVar26 = (long *)func_0x0cc87af0(puVar20 + 0x22,plVar22,&plStack_3a8);
      }
      *(long **)(puVar20 + 0x24) = plVar26;
      uVar8 = *puVar20;
      uVar9 = puVar20[1];
      uVar10 = puVar20[2];
      uVar11 = puVar20[3];
      if (*(long *)(puVar20 + 2) != 0) {
        LOCK();
        plVar22 = (long *)(*(long *)(puVar20 + 2) + 8);
        *plVar22 = *plVar22 + 1;
        UNLOCK();
      }
      plVar22 = (long *)plVar17[0xf];
      *(undefined4 *)(plVar17 + 0xe) = uVar8;
      *(undefined4 *)((long)plVar17 + 0x74) = uVar9;
      *(undefined4 *)(plVar17 + 0xf) = uVar10;
      *(undefined4 *)((long)plVar17 + 0x7c) = uVar11;
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar26 = plVar22 + 1;
        lVar21 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
      plVar22 = (long *)CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)));
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar26 = plVar22 + 1;
        lVar21 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      LOCK();
      lVar21 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
        LOCK();
        lVar21 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar21 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
      }
      if (lVar21 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
      lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
      if (lVar21 == 0) {
        func_0x0eec74c0(0x98,0);
      }
      uStack_398 = (undefined1)lVar21;
      uStack_397 = (undefined7)((ulong)lVar21 >> 8);
      plStack_3a8 = (long *)0x99;
      bStack_3a0 = 0x97;
      uStack_39f = 0;
      uStack_39b = 0;
      uStack_39a = 0;
      func_0x0eee2f00(lVar21,&UNK_01218c29,0x97);
      *(undefined1 *)(lVar21 + 0x97) = 0;
      (**(code **)(*plVar18 + 0x10))(plVar18,&plStack_3a8);
      if (((ulong)plStack_3a8 & 1) != 0) {
        thunk_FUN_0ee326a0(CONCAT71(uStack_397,uStack_398),(ulong)plStack_3a8 & 0xfffffffffffffffe);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((bStack_228 & 1) != 0) {
        thunk_FUN_0ee326a0(CONCAT26(uStack_212,CONCAT51(uStack_217,uStack_218)),
                           CONCAT35((undefined3)uStack_223,CONCAT41(uStack_227,bStack_228)) &
                           0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    plVar22 = (long *)((long)plVar22 - (long)plStack_250);
    plVar31 = (long *)(((long)plVar22 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((long *)0x186186186186186 < plVar31) goto LAB_0cc19498;
    plVar27 = plVar17 + 0x1b;
    lVar21 = plVar17[0x1d] - (long)plStack_250 >> 3;
    plVar35 = (long *)(lVar21 * -0x6186186186186186);
    if (plVar31 < plVar35) {
      plVar31 = plVar35;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      plVar31 = (long *)0x186186186186186;
    }
    plStack_388 = plVar27;
    if (plVar31 == (long *)0x0) {
      plVar26 = (long *)0x0;
LAB_0cc17e6f:
      lVar21 = (long)plVar22 + (long)plVar26;
      uStack_398 = (undefined1)lVar21;
      uStack_397 = (undefined7)((ulong)lVar21 >> 8);
      uStack_39f = (undefined4)((ulong)lVar21 >> 8);
      uStack_39b = (undefined1)((ulong)lVar21 >> 0x28);
      uStack_39a = (undefined2)((ulong)lVar21 >> 0x30);
      plStack_390 = plVar26 + (long)plVar31 * 0x15;
      plStack_3a8 = plVar26;
      bStack_3a0 = uStack_398;
      func_0x0cd2b990(lVar21);
      plVar22 = (long *)(CONCAT71(uStack_397,uStack_398) + 0xa8);
      lVar21 = plVar17[0x1b];
      lVar36 = plVar17[0x1c];
      lVar32 = (lVar21 - lVar36) +
               CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,bStack_3a0)));
      if (lVar21 != lVar36) {
        lVar34 = 0;
        do {
          uVar25 = ((undefined8 *)(lVar21 + lVar34))[1];
          *(undefined8 *)(lVar32 + lVar34) = *(undefined8 *)(lVar21 + lVar34);
          ((undefined8 *)(lVar32 + lVar34))[1] = uVar25;
          *(undefined8 *)(lVar21 + lVar34) = 0;
          ((undefined8 *)(lVar21 + lVar34))[1] = 0;
          puVar19 = (undefined8 *)(lVar32 + 0x20 + lVar34);
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar19 = (undefined8 *)(lVar32 + 0x10 + lVar34);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(lVar32 + 0x30 + lVar34) = 0;
          *(undefined8 *)(lVar32 + 0x28 + lVar34) = *(undefined8 *)(lVar21 + 0x28 + lVar34);
          puVar20 = (undefined4 *)(lVar21 + 0x18 + lVar34);
          uVar8 = puVar20[1];
          uVar9 = puVar20[2];
          uVar10 = puVar20[3];
          puVar3 = (undefined4 *)(lVar32 + 0x18 + lVar34);
          *puVar3 = *puVar20;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined2 *)(lVar21 + 0x18 + lVar34) = 0;
          *(undefined8 *)(lVar32 + 0x10 + lVar34) = *(undefined8 *)(lVar21 + 0x10 + lVar34);
          func_0x04167a20(lVar34 + lVar32 + 0x38,lVar21 + lVar34 + 0x38);
          puVar19 = (undefined8 *)(lVar21 + 0x40 + lVar34);
          uVar25 = puVar19[1];
          puVar30 = (undefined8 *)(lVar32 + 0x40 + lVar34);
          *puVar30 = *puVar19;
          puVar30[1] = uVar25;
          puVar19 = (undefined8 *)(lVar21 + 0x50 + lVar34);
          uVar25 = puVar19[1];
          puVar30 = (undefined8 *)(lVar32 + 0x50 + lVar34);
          *puVar30 = *puVar19;
          puVar30[1] = uVar25;
          puVar19 = (undefined8 *)(lVar21 + 0x60 + lVar34);
          uVar25 = puVar19[1];
          puVar30 = (undefined8 *)(lVar32 + 0x60 + lVar34);
          *puVar30 = *puVar19;
          puVar30[1] = uVar25;
          puVar19 = (undefined8 *)(lVar21 + 0x60 + lVar34);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(lVar32 + 0x70 + lVar34) = *(undefined8 *)(lVar21 + 0x70 + lVar34);
          puVar19 = (undefined8 *)(lVar21 + 0x78 + lVar34);
          uVar25 = puVar19[1];
          puVar30 = (undefined8 *)(lVar32 + 0x78 + lVar34);
          *puVar30 = *puVar19;
          puVar30[1] = uVar25;
          puVar19 = (undefined8 *)(lVar32 + 0x88 + lVar34);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(lVar32 + 0x98 + lVar34) = 0;
          puVar20 = (undefined4 *)(lVar21 + 0x88 + lVar34);
          uVar8 = puVar20[1];
          uVar9 = puVar20[2];
          uVar10 = puVar20[3];
          puVar3 = (undefined4 *)(lVar32 + 0x88 + lVar34);
          *puVar3 = *puVar20;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined8 *)(lVar32 + 0x98 + lVar34) = *(undefined8 *)(lVar21 + 0x98 + lVar34);
          puVar19 = (undefined8 *)(lVar21 + 0x88 + lVar34);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(lVar21 + 0x98 + lVar34) = 0;
          *(undefined2 *)(lVar32 + 0xa0 + lVar34) = *(undefined2 *)(lVar21 + 0xa0 + lVar34);
          lVar2 = lVar21 + lVar34;
          lVar34 = lVar34 + 0xa8;
        } while (lVar2 + 0xa8 != lVar36);
        do {
          func_0x0cd27330(lVar21);
          lVar21 = lVar21 + 0xa8;
        } while (lVar21 != lVar36);
        lVar21 = *plVar27;
      }
      plVar17[0x1b] = lVar32;
      plVar17[0x1c] = (long)plVar22;
      lVar36 = plVar17[0x1d];
      plVar17[0x1d] = (long)plStack_390;
      if (lVar21 != 0) {
        thunk_FUN_0ee326a0(lVar21,lVar36 - lVar21);
      }
      goto LAB_0cc1803d;
    }
    if (plVar31 < (long *)0x186186186186187) {
      plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar31 * 0xa8);
      if (plVar26 == (long *)0x0) {
        func_0x0eec74c0((long)plVar31 * 0xa8,0);
        plVar26 = (long *)0x0;
      }
      goto LAB_0cc17e6f;
    }
LAB_0cc1948e:
    func_0x04882eb0();
  }
  func_0x0cd2bbd0();
LAB_0cc19498:
  uVar25 = func_0x0cd2bb00();
  if ((*puStack_360 & 1) != 0) {
    thunk_FUN_0ee326a0(plVar17[3],plVar17[1] & 0xfffffffffffffffe);
  }
  plVar22[0x12] = (long)plVar17;
  plVar17 = plVar31 + 1;
  LOCK();
  lVar21 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar31 + 0x10))(plVar31);
    func_0x0412c2d0(plVar31);
  }
  LOCK();
  lVar21 = *plVar27;
  *plVar27 = *plVar27 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    func_0x0412c2d0(plVar26);
  }
  LOCK();
  lVar21 = *plVar27;
  *plVar27 = *plVar27 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    func_0x0412c2d0(plVar26);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_228 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_212,CONCAT51(uStack_217,uStack_218)),
                       CONCAT35((undefined3)uStack_223,CONCAT41(uStack_227,bStack_228)) &
                       0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar25);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}



/* ---- referenced strings ----
 * 0x13012a3  The creative group name and category for this block.
 * 0x13012b3  up name and category for this block.
 * 0x13012c3  gory for this block.
 * 0x148af92  is_hidden_in_commands
 * 0x148afb2  The Creative Category that this block belongs to.
 * 0x148afc2  egory that this block belongs to.
 * 0x148afd2  block belongs to.
 */
