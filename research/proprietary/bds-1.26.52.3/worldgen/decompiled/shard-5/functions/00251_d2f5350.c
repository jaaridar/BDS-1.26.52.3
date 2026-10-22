/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3f5350 (ELF vaddr 0xd2f5350)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3f5350, 0d3f65f2] [0d3f6600, 0d3f6c05] [0d3f6c10, 0d3f6c4c] [0d3f6c50, 0d3f78b8] [0d3f78c0, 0d3f7ec5] [0d3f7ed0, 0d3f7f0d] [0d3f7f10, 0d3f82a9] [0d3f8c38, 0d3f8d2b]]
 * Ghidra: FUN_0d3f5350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3f5350(undefined8 param_1)

{
  long *plVar1;
  long **pplVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint *puVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  uint *puVar21;
  undefined4 *puVar22;
  long *plVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  byte *pbVar28;
  long *plVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  uint *puVar34;
  ulong uVar35;
  long lVar36;
  bool bVar37;
  undefined8 uStack_398;
  uint *puStack_390;
  undefined1 uStack_381;
  uint *puStack_380;
  long *plStack_378;
  uint *puStack_370;
  uint *puStack_368;
  long *plStack_360;
  uint *puStack_358;
  uint *puStack_330;
  undefined8 uStack_328;
  byte bStack_320;
  undefined4 uStack_31f;
  undefined1 uStack_31b;
  undefined2 uStack_31a;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  uint *puStack_300;
  uint *puStack_2f8;
  uint *puStack_2f0;
  long *plStack_2e8;
  byte bStack_2e0;
  undefined5 uStack_2df;
  undefined2 uStack_2da;
  undefined1 uStack_2d8;
  undefined5 uStack_2d7;
  undefined2 uStack_2d2;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  uint *puStack_2a0;
  ulong auStack_298 [4];
  ulong auStack_278 [4];
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_178;
  undefined8 uStack_170;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_31a = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  bStack_320 = 10;
  uStack_31f = 0x6e756f63;
  uStack_31b = 0x74;
  uStack_328 = 0x184efb3a64c90e2;
  uStack_70 = 0;
  bStack_2e0 = 0;
  uStack_2df = 0;
  uStack_2da = 0;
  lStack_78 = 0;
  plStack_2e8 = (long *)&UNK_0f46e418;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_378 = plStack_2e8;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f466870;
  puStack_370 = (uint *)0x0;
  plStack_2e8 = (long *)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  func_0x04aa75f0(plVar19 + 0xe,&uStack_381,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar29 = plVar19 + 0x11;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0f4668c0;
  plVar19[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar19 + 0x2f) = 1;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  if (plStack_378 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_378)(&plStack_378,plVar19 + 0x30);
    plVar20 = plStack_378;
  }
  plStack_378 = (long *)0x0;
  plVar19[0x30] = (long)plVar20;
  puStack_380 = (uint *)(plVar19 + 0x12);
  if (plVar29 == (long *)&DAT_0f552078) {
    plVar19[0x15] = 0;
  }
  else {
    if ((*puStack_380 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552090;
        uVar12 = uRam000000000f55208c;
        uVar11 = _DAT_0f552088;
        uVar10 = uRam000000000f552084;
        *puStack_380 = _DAT_0f552080;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar10;
        *(undefined4 *)(plVar19 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_380,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar37 = (_DAT_0f552080 & 1) != 0;
      lVar31 = 0xf552081;
      if (bVar37) {
        lVar31 = _DAT_0f552090;
      }
      uVar35 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar37) {
        uVar35 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puStack_380,lVar31,uVar35);
    }
    plVar19[0x11] = _DAT_0f552078;
    plVar19[0x15] = 0;
    if (plStack_378 != (long *)0x0) {
      (*(code *)plStack_378[1])(&plStack_378);
    }
  }
  plVar20 = plVar19 + 1;
  if (plStack_2e8 != (long *)0x0) {
    (*(code *)plStack_2e8[1])(&plStack_2e8);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puVar21 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar21 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)puVar21 + 8) = 0;
  *(long *)((long)puVar21 + 0x10) = 0;
  *(undefined **)puVar21 = &UNK_0f4669a0;
  *(long *)((long)puVar21 + 0x30) = 0;
  *(long *)((long)puVar21 + 0x38) = 0;
  *(undefined **)((long)puVar21 + 0x20) = &UNK_0f4669f0;
  *(long **)((long)puVar21 + 0x70) = plVar19 + 4;
  *(long **)((long)puVar21 + 0x78) = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_378 = (long *)((long)puVar21 + 0x20);
  puStack_370 = puVar21;
  puStack_330 = (uint *)(plVar19 + 4);
  puStack_2f0 = (uint *)param_1;
  puVar22 = (undefined4 *)func_0x0502aa60(param_1,&uStack_328,1);
  plVar23 = *(long **)(puVar22 + 0x24);
  if (plVar23 < *(long **)(puVar22 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 == plVar29) {
LAB_0d3f56bd:
      *plVar23 = *plVar29;
      plVar23[5] = (long)puVar21 + 0x20;
      plVar23[6] = (long)puVar21;
LAB_0d3f5736:
      LOCK();
      *(long *)((long)puVar21 + 8) = *(long *)((long)puVar21 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_380 & 1) == 0) {
        plVar23[3] = *(long *)(puStack_380 + 4);
        lVar31 = *(long *)(puStack_380 + 2);
        plVar23[1] = *(long *)puStack_380;
        plVar23[2] = lVar31;
        goto LAB_0d3f56bd;
      }
      func_0x04885070(plVar23 + 1,plVar19[0x14],plVar19[0x13]);
      *plVar23 = *plVar29;
      plVar23[5] = (long)plStack_378;
      plVar23[6] = (long)puStack_370;
      puVar21 = puStack_370;
      if (puStack_370 != (uint *)0x0) goto LAB_0d3f5736;
    }
    plVar23 = plVar23 + 7;
    *(long **)(puVar22 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x0502e160(puVar22 + 0x22,plVar29,&plStack_378);
  }
  puVar26 = puStack_2f0;
  puVar21 = puStack_330;
  *(long **)(puVar22 + 0x24) = plVar23;
  uVar10 = *puVar22;
  uVar11 = puVar22[1];
  uVar12 = puVar22[2];
  uVar13 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar29 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar29 = *plVar29 + 1;
    UNLOCK();
  }
  plVar29 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar11;
  *(undefined4 *)(plVar19 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar13;
  if (plVar29 != (long *)0x0) {
    LOCK();
    plVar23 = plVar29 + 1;
    lVar31 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      func_0x0412c2d0(plVar29);
    }
  }
  puVar27 = puStack_370;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  if (puStack_370 != (uint *)0x0) {
    LOCK();
    plVar29 = (long *)((long)puStack_370 + 8);
    lVar31 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*(long *)puStack_370 + 0x10))(puStack_370);
      func_0x0412c2d0(puVar27);
    }
  }
  LOCK();
  lVar31 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar31 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar31 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar31 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar31 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  *(undefined4 *)(plVar19 + 0x2e) = 1;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  (**(code **)(plVar19[4] + 0x10))(puVar21,&uStack_218);
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,uStack_218 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,
                    CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,bStack_320))) &
                    0xfffffffffffffffe);
  }
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_328 = 0;
  bStack_320 = 0;
  uStack_31f = 0;
  uStack_31b = 0;
  uStack_31a = 0;
  uStack_308 = 0;
  func_0x0412f5e0(&bStack_320,&UNK_014c1114,0x1e);
  uStack_328 = 0x535df74238d7555f;
  uStack_b0 = 0;
  bStack_2e0 = 0;
  uStack_2df = 0;
  uStack_2da = 0;
  lStack_b8 = 0;
  plStack_2e8 = (long *)&UNK_0f46e430;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_378 = plStack_2e8;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f466a50;
  puStack_370 = (uint *)0x0;
  plStack_2e8 = (long *)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  func_0x04aa75f0(plVar19 + 0xe,&uStack_381,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar29 = plVar19 + 0x11;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0f466aa0;
  plVar19[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar19 + 0x2f) = 1;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  if (plStack_378 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_378)(&plStack_378,plVar19 + 0x30);
    plVar20 = plStack_378;
  }
  plStack_378 = (long *)0x0;
  plVar19[0x30] = (long)plVar20;
  puStack_380 = (uint *)(plVar19 + 0x12);
  if (plVar29 == (long *)&DAT_0f552018) {
    plVar19[0x15] = 0;
  }
  else {
    if ((*puStack_380 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552030;
        uVar12 = uRam000000000f55202c;
        uVar11 = _DAT_0f552028;
        uVar10 = uRam000000000f552024;
        *puStack_380 = _DAT_0f552020;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar10;
        *(undefined4 *)(plVar19 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_380,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar37 = (_DAT_0f552020 & 1) != 0;
      lVar31 = 0xf552021;
      if (bVar37) {
        lVar31 = _DAT_0f552030;
      }
      uVar35 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar37) {
        uVar35 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puStack_380,lVar31,uVar35);
    }
    plVar19[0x11] = _DAT_0f552018;
    plVar19[0x15] = 0;
    if (plStack_378 != (long *)0x0) {
      (*(code *)plStack_378[1])(&plStack_378);
    }
  }
  plVar20 = plVar19 + 1;
  if (plStack_2e8 != (long *)0x0) {
    (*(code *)plStack_2e8[1])(&plStack_2e8);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puVar21 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar21 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)puVar21 + 8) = 0;
  *(long *)((long)puVar21 + 0x10) = 0;
  *(undefined **)puVar21 = &UNK_0f466b80;
  *(long *)((long)puVar21 + 0x30) = 0;
  *(long *)((long)puVar21 + 0x38) = 0;
  *(undefined **)((long)puVar21 + 0x20) = &UNK_0f466bd0;
  *(long **)((long)puVar21 + 0x70) = plVar19 + 4;
  *(long **)((long)puVar21 + 0x78) = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_378 = (long *)((long)puVar21 + 0x20);
  puStack_370 = puVar21;
  puStack_330 = (uint *)(plVar19 + 4);
  puVar22 = (undefined4 *)func_0x0502aa60(puVar26,&uStack_328,0);
  plVar23 = *(long **)(puVar22 + 0x24);
  if (plVar23 < *(long **)(puVar22 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 == plVar29) {
LAB_0d3f5c21:
      *plVar23 = *plVar29;
      plVar23[5] = (long)puVar21 + 0x20;
      plVar23[6] = (long)puVar21;
LAB_0d3f5c9a:
      LOCK();
      *(long *)((long)puVar21 + 8) = *(long *)((long)puVar21 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_380 & 1) == 0) {
        plVar23[3] = *(long *)(puStack_380 + 4);
        lVar31 = *(long *)(puStack_380 + 2);
        plVar23[1] = *(long *)puStack_380;
        plVar23[2] = lVar31;
        goto LAB_0d3f5c21;
      }
      func_0x04885070(plVar23 + 1,plVar19[0x14],plVar19[0x13]);
      *plVar23 = *plVar29;
      plVar23[5] = (long)plStack_378;
      plVar23[6] = (long)puStack_370;
      puVar21 = puStack_370;
      if (puStack_370 != (uint *)0x0) goto LAB_0d3f5c9a;
    }
    plVar23 = plVar23 + 7;
    *(long **)(puVar22 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x0502e160(puVar22 + 0x22,plVar29,&plStack_378);
  }
  puVar21 = puStack_330;
  *(long **)(puVar22 + 0x24) = plVar23;
  uVar10 = *puVar22;
  uVar11 = puVar22[1];
  uVar12 = puVar22[2];
  uVar13 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar29 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar29 = *plVar29 + 1;
    UNLOCK();
  }
  plVar29 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar11;
  *(undefined4 *)(plVar19 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar13;
  if (plVar29 != (long *)0x0) {
    LOCK();
    plVar23 = plVar29 + 1;
    lVar31 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      func_0x0412c2d0(plVar29);
    }
  }
  puVar26 = puStack_370;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  if (puStack_370 != (uint *)0x0) {
    LOCK();
    plVar29 = (long *)((long)puStack_370 + 8);
    lVar31 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*(long *)puStack_370 + 0x10))(puStack_370);
      func_0x0412c2d0(puVar26);
    }
  }
  LOCK();
  lVar31 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar31 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar31 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar31 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar31 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  plVar19[0x2e] = _DAT_014e9660;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  (**(code **)(plVar19[4] + 0x10))(puVar21,&uStack_238);
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(uStack_228,uStack_238 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,
                    CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,bStack_320))) &
                    0xfffffffffffffffe);
  }
  uStack_2d2 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  bStack_2e0 = 0x1a;
  uStack_2df = 0x616c706572;
  uStack_2da = 0x6563;
  uStack_2d8 = 0x5f;
  uStack_2d7 = 0x73656c7572;
  plStack_2e8 = (long *)0x28f83427e0992bc7;
  plStack_178 = (long *)0x0;
  uStack_170 = 0;
  puVar21 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar21 == (uint *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  *(undefined **)puVar21 = &UNK_0f46e458;
  plStack_378 = (long *)0x0;
  puStack_370 = (uint *)0x0;
  if (plStack_178 == (long *)0x0) {
    plStack_378 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_178)(&plStack_178,&plStack_378);
    plStack_378 = plStack_178;
  }
  plStack_178 = (long *)0x0;
  *(undefined **)(puVar21 + 8) = &UNK_0f2ccd78;
  puVar21[10] = 0;
  puVar21[0xb] = 0;
  puVar21[0xc] = 0;
  puVar21[0xd] = 0;
  puVar21[0xe] = 0;
  puVar21[0xf] = 0;
  puVar21[0x10] = 0;
  puVar21[0x11] = 0;
  puVar21[0x12] = 0;
  puVar21[0x13] = 0;
  puVar21[0x14] = 0;
  puVar21[0x15] = 0;
  puVar21[0x16] = 0;
  puVar21[0x17] = 0;
  puVar21[0x18] = 0;
  puVar21[0x19] = 0;
  *(byte *)(puVar21 + 0x1a) = 0;
  func_0x04aa75f0(puVar21 + 0x1c,&uStack_328,&UNK_01254d89);
  *(byte *)(puVar21 + 0x20) = 0;
  puVar26 = puVar21 + 0x22;
  puVar21[0x22] = 0;
  puVar21[0x23] = 0;
  puVar21[0x24] = 0;
  puVar21[0x25] = 0;
  puVar21[0x26] = 0;
  puVar21[0x27] = 0;
  puVar21[0x28] = 0;
  puVar21[0x29] = 0;
  puVar21[0x2a] = 0;
  puVar21[0x2b] = 0;
  puVar21[0x2c] = 0;
  puVar21[0x2d] = 0;
  puVar21[0x2e] = 0xffffffff;
  puVar21[0x2f] = 0;
  puVar21[0x4c] = 0;
  puVar21[0x4d] = 0;
  puVar21[0x4e] = 0;
  puVar21[0x4f] = 0;
  puVar21[0x30] = 0;
  puVar21[0x31] = 0;
  puVar21[0x32] = 0;
  puVar21[0x33] = 0;
  puVar21[0x34] = 0;
  puVar21[0x35] = 0;
  puVar21[0x36] = 0;
  puVar21[0x37] = 0;
  puVar21[0x38] = 0;
  puVar21[0x39] = 0;
  puVar21[0x3a] = 0;
  puVar21[0x3b] = 0;
  puVar21[0x3c] = 0;
  puVar21[0x3d] = 0;
  puVar21[0x3e] = 0;
  puVar21[0x3f] = 0;
  *(undefined **)(puVar21 + 8) = &UNK_0f46e4a8;
  pplVar2 = (long **)(puVar21 + 0x5c);
  puVar21[0x5c] = 0;
  puVar21[0x5d] = 0;
  puVar21[0x5e] = 0;
  puVar21[0x5f] = 0;
  if (pplVar2 != &plStack_378) {
    if (plStack_378 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_378)(&plStack_378,pplVar2);
      plVar19 = plStack_378;
    }
    plStack_378 = (long *)0x0;
    *pplVar2 = plVar19;
  }
  puVar27 = puVar21 + 0x24;
  if (puVar26 != (uint *)&DAT_0f551f58) {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(long *)(puVar21 + 0x28) = _DAT_0f551f70;
        uVar16 = uRam000000000f551f6c;
        uVar15 = _DAT_0f551f68;
        uVar14 = uRam000000000f551f64;
        *puVar27 = _DAT_0f551f60;
        puVar21[0x25] = uVar14;
        puVar21[0x26] = uVar15;
        puVar21[0x27] = uVar16;
      }
      else {
        func_0x04885070(puVar27,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar37 = (_DAT_0f551f60 & 1) != 0;
      lVar31 = 0xf551f61;
      if (bVar37) {
        lVar31 = _DAT_0f551f70;
      }
      uVar35 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar37) {
        uVar35 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar27,lVar31,uVar35);
    }
  }
  puVar34 = puVar21 + 2;
  *(long *)(puVar21 + 0x22) = _DAT_0f551f58;
  puVar21[0x2a] = 0;
  puVar21[0x2b] = 0;
  puStack_380 = puVar27;
  if (plStack_378 != (long *)0x0) {
    (*(code *)plStack_378[1])(&plStack_378);
  }
  LOCK();
  *(long *)puVar34 = *(long *)puVar34 + 1;
  UNLOCK();
  puVar24 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  puVar27 = puStack_2f0;
  if (puVar24 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)puVar24 + 8) = 0;
  *(long *)((long)puVar24 + 0x10) = 0;
  *(undefined **)puVar24 = &UNK_0f46e5a0;
  *(long *)((long)puVar24 + 0x30) = 0;
  *(long *)((long)puVar24 + 0x38) = 0;
  *(undefined **)((long)puVar24 + 0x20) = &UNK_0f46e5f0;
  *(uint **)((long)puVar24 + 0x70) = puVar21 + 8;
  *(uint **)((long)puVar24 + 0x78) = puVar21;
  LOCK();
  *(long *)(puVar21 + 2) = *(long *)(puVar21 + 2) + 1;
  UNLOCK();
  plStack_378 = (long *)((long)puVar24 + 0x20);
  puStack_370 = puVar24;
  puVar25 = (uint *)func_0x0502aa60(puVar27,&plStack_2e8,0);
  puVar27 = *(uint **)(puVar25 + 0x24);
  if (puVar27 < *(uint **)(puVar25 + 0x26)) {
    puVar27[4] = 0;
    puVar27[5] = 0;
    puVar27[6] = 0;
    puVar27[7] = 0;
    puVar27[0] = 0;
    puVar27[1] = 0;
    puVar27[2] = 0;
    puVar27[3] = 0;
    puVar27[8] = 0;
    puVar27[9] = 0;
    if (puVar27 == puVar26) {
LAB_0d3f6157:
      *(long *)puVar27 = *(long *)puVar26;
      *(long **)(puVar27 + 10) = (long *)((long)puVar24 + 0x20);
      *(uint **)(puVar27 + 0xc) = puVar24;
LAB_0d3f61b7:
      LOCK();
      *(long *)((long)puVar24 + 8) = *(long *)((long)puVar24 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_380 & 1) == 0) {
        *(long *)(puVar27 + 6) = *(long *)(puStack_380 + 4);
        lVar31 = *(long *)(puStack_380 + 2);
        *(long *)(puVar27 + 2) = *(long *)puStack_380;
        *(long *)(puVar27 + 4) = lVar31;
        goto LAB_0d3f6157;
      }
      func_0x04885070(puVar27 + 2,*(long *)(puVar21 + 0x28),*(long *)(puVar21 + 0x26));
      *(long *)puVar27 = *(long *)puVar26;
      *(long **)(puVar27 + 10) = plStack_378;
      *(uint **)(puVar27 + 0xc) = puStack_370;
      puVar24 = puStack_370;
      if (puStack_370 != (uint *)0x0) goto LAB_0d3f61b7;
    }
    puVar27 = puVar27 + 0xe;
    *(uint **)(puVar25 + 0x24) = puVar27;
  }
  else {
    puVar27 = (uint *)func_0x0502e160(puVar25 + 0x22,puVar26,&plStack_378);
  }
  *(uint **)(puVar25 + 0x24) = puVar27;
  uVar14 = *puVar25;
  uVar15 = puVar25[1];
  uVar16 = puVar25[2];
  uVar17 = puVar25[3];
  if (*(long *)(puVar25 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar25 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = *(long **)(puVar21 + 0x1e);
  puVar21[0x1c] = uVar14;
  puVar21[0x1d] = uVar15;
  puVar21[0x1e] = uVar16;
  puVar21[0x1f] = uVar17;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar29 = plVar19 + 1;
    lVar31 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  puVar26 = puStack_370;
  *(byte *)(puVar21 + 0x20) = *(byte *)((long)puVar25 + 0xa1);
  if (puStack_370 != (uint *)0x0) {
    LOCK();
    plVar19 = (long *)((long)puStack_370 + 8);
    lVar31 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*(long *)puStack_370 + 0x10))(puStack_370);
      func_0x0412c2d0(puVar26);
    }
  }
  LOCK();
  lVar31 = *(long *)puVar34;
  *(long *)puVar34 = *(long *)puVar34 + -1;
  UNLOCK();
  if (lVar31 == 0) {
    (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
    func_0x0412c2d0(puVar21);
    LOCK();
    lVar31 = *(long *)puVar34;
    *(long *)puVar34 = *(long *)puVar34 + -1;
    UNLOCK();
    if (lVar31 == 0) goto LAB_0d3f635e;
LAB_0d3f627a:
    puVar21[0x2c] = 1;
    puVar21[0x2d] = 0;
  }
  else {
    LOCK();
    lVar31 = *(long *)puVar34;
    *(long *)puVar34 = *(long *)puVar34 + -1;
    UNLOCK();
    if (lVar31 != 0) goto LAB_0d3f627a;
LAB_0d3f635e:
    (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
    func_0x0412c2d0(puVar21);
    puVar21[0x2c] = 1;
    puVar21[0x2d] = 0;
  }
  if (plStack_178 != (long *)0x0) {
    (*(code *)plStack_178[1])(&plStack_178);
  }
  if ((bStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,
                    CONCAT26(uStack_2da,CONCAT51(uStack_2df,bStack_2e0)) & 0xfffffffffffffffe);
  }
  uStack_1f0 = 0;
  plStack_1f8 = (long *)&UNK_0f46e890;
  puVar26 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (puVar26 == (uint *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar26[2] = 0;
  puVar26[3] = 0;
  puVar26[4] = 0;
  puVar26[5] = 0;
  *(undefined **)puVar26 = &UNK_0f46e650;
  plStack_378 = (long *)0x0;
  puStack_370 = (uint *)0x0;
  if (plStack_1f8 == (long *)0x0) {
    plStack_378 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1f8)(&plStack_1f8,&plStack_378);
    plStack_378 = plStack_1f8;
  }
  plStack_1f8 = (long *)0x0;
  *(undefined **)(puVar26 + 8) = &UNK_0f2ccd78;
  puVar26[10] = 0;
  puVar26[0xb] = 0;
  puVar26[0xc] = 0;
  puVar26[0xd] = 0;
  puVar26[0xe] = 0;
  puVar26[0xf] = 0;
  puVar26[0x10] = 0;
  puVar26[0x11] = 0;
  puVar26[0x12] = 0;
  puVar26[0x13] = 0;
  puVar26[0x14] = 0;
  puVar26[0x15] = 0;
  puVar26[0x16] = 0;
  puVar26[0x17] = 0;
  puVar26[0x18] = 0;
  puVar26[0x19] = 0;
  *(byte *)(puVar26 + 0x1a) = 0;
  func_0x04aa75f0(puVar26 + 0x1c,&plStack_2e8,&UNK_01254d89);
  *(byte *)(puVar26 + 0x20) = 0;
  puStack_390 = puVar26 + 0x22;
  puVar26[0x22] = 0;
  puVar26[0x23] = 0;
  puVar26[0x24] = 0;
  puVar26[0x25] = 0;
  puVar26[0x26] = 0;
  puVar26[0x27] = 0;
  puVar26[0x28] = 0;
  puVar26[0x29] = 0;
  puVar26[0x2a] = 0;
  puVar26[0x2b] = 0;
  puVar26[0x2c] = 0;
  puVar26[0x2d] = 0;
  puVar26[0x2e] = 0xffffffff;
  puVar26[0x2f] = 0;
  puVar26[0x4c] = 0;
  puVar26[0x4d] = 0;
  puVar26[0x4e] = 0;
  puVar26[0x4f] = 0;
  puVar26[0x30] = 0;
  puVar26[0x31] = 0;
  puVar26[0x32] = 0;
  puVar26[0x33] = 0;
  puVar26[0x34] = 0;
  puVar26[0x35] = 0;
  puVar26[0x36] = 0;
  puVar26[0x37] = 0;
  puVar26[0x38] = 0;
  puVar26[0x39] = 0;
  puVar26[0x3a] = 0;
  puVar26[0x3b] = 0;
  puVar26[0x3c] = 0;
  puVar26[0x3d] = 0;
  puVar26[0x3e] = 0;
  puVar26[0x3f] = 0;
  *(undefined **)(puVar26 + 8) = &UNK_0f46e6a0;
  pplVar2 = (long **)(puVar26 + 0x5c);
  puVar26[0x5c] = 0;
  puVar26[0x5d] = 0;
  puVar26[0x5e] = 0;
  puVar26[0x5f] = 0;
  *(byte *)(puVar26 + 0x6c) = 0;
  if (pplVar2 != &plStack_378) {
    if (plStack_378 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_378)(&plStack_378,pplVar2);
      plVar19 = plStack_378;
    }
    plStack_378 = (long *)0x0;
    *pplVar2 = plVar19;
  }
  puStack_2f0 = puVar26 + 8;
  puVar27 = puVar26 + 0x24;
  if (puStack_390 != (uint *)&DAT_0f552108) {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        *(long *)(puVar26 + 0x28) = _DAT_0f552120;
        uVar16 = uRam000000000f55211c;
        uVar15 = _DAT_0f552118;
        uVar14 = uRam000000000f552114;
        *puVar27 = _DAT_0f552110;
        puVar26[0x25] = uVar14;
        puVar26[0x26] = uVar15;
        puVar26[0x27] = uVar16;
      }
      else {
        func_0x04885070(puVar27,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar37 = (_DAT_0f552110 & 1) != 0;
      lVar31 = 0xf552111;
      if (bVar37) {
        lVar31 = _DAT_0f552120;
      }
      uVar35 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar37) {
        uVar35 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar27,lVar31,uVar35);
    }
  }
  puVar34 = puVar26 + 2;
  *(long *)(puVar26 + 0x22) = _DAT_0f552108;
  puVar26[0x2a] = 0;
  puVar26[0x2b] = 0;
  if (plStack_378 != (long *)0x0) {
    (*(code *)plStack_378[1])(&plStack_378);
  }
  LOCK();
  *(long *)puVar34 = *(long *)puVar34 + 1;
  UNLOCK();
  puStack_300 = puVar27;
  puVar27 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar27 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar27[2] = 0;
  puVar27[3] = 0;
  puVar27[4] = 0;
  puVar27[5] = 0;
  *(undefined **)puVar27 = &UNK_0f46e798;
  puVar27[0xc] = 0;
  puVar27[0xd] = 0;
  puVar27[0xe] = 0;
  puVar27[0xf] = 0;
  *(undefined **)(puVar27 + 8) = &UNK_0f46e7e8;
  *(uint **)(puVar27 + 0x1c) = puStack_2f0;
  *(uint **)(puVar27 + 0x1e) = puVar26;
  LOCK();
  *(long *)(puVar26 + 2) = *(long *)(puVar26 + 2) + 1;
  UNLOCK();
  puStack_330 = puVar27 + 2;
  puVar6 = *(uint **)(puVar21 + 0x38);
  puVar25 = *(uint **)(puVar21 + 0x36);
  for (puVar24 = puVar25; puStack_380 = puVar27, puVar24 != puVar6; puVar24 = puVar24 + 0x2a) {
    if ((*(long *)(puVar24 + 0x1e) == 0) && (*(long *)(puVar24 + 0x20) == -1)) goto LAB_0d3f6956;
  }
  if (puVar6 < *(uint **)(puVar21 + 0x3a)) {
    func_0x0d4c74d0(puVar6);
    *(uint **)(puVar21 + 0x38) = puVar6 + 0x2a;
    *(uint **)(puVar21 + 0x38) = puVar6 + 0x2a;
    pbVar33 = *(byte **)puVar6;
    bVar5 = *pbVar33;
joined_r0x0d3f6902:
    if ((bVar5 & 1) == 0) {
      *pbVar33 = 0x26;
      pbVar33 = pbVar33 + 1;
    }
    else {
      pbVar33[8] = 0x13;
      pbVar33[9] = 0;
      pbVar33[10] = 0;
      pbVar33[0xb] = 0;
      pbVar33[0xc] = 0;
      pbVar33[0xd] = 0;
      pbVar33[0xe] = 0;
      pbVar33[0xf] = 0;
      pbVar33 = *(byte **)(pbVar33 + 0x10);
    }
    uVar12 = _UNK_01494d69;
    uVar11 = _UNK_01494d65;
    uVar10 = _UNK_01494d61;
    *(undefined4 *)pbVar33 = _DAT_01494d5d;
    *(undefined4 *)(pbVar33 + 4) = uVar10;
    *(undefined4 *)(pbVar33 + 8) = uVar11;
    *(undefined4 *)(pbVar33 + 0xc) = uVar12;
    pbVar33[0xf] = 0x65;
    pbVar33[0x10] = 0x6e;
    pbVar33[0x11] = 0x74;
    pbVar33[0x12] = 0x3e;
    pbVar33[0x13] = 0;
    lVar31 = *(long *)(puVar21 + 0x38);
    puVar24 = (uint *)(lVar31 + -0xa8);
    *(byte *)(lVar31 + -7) = (byte)puVar21[0x20];
    *(undefined8 *)(lVar31 + -0x30) = 0;
    *(undefined8 *)(lVar31 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar31 + -8) = 1;
LAB_0d3f6956:
    puVar25 = puVar27 + 8;
    puVar21 = *(uint **)(puVar24 + 0x24);
    if (puVar21 < *(uint **)(puVar24 + 0x26)) {
      puVar21[4] = 0;
      puVar21[5] = 0;
      puVar21[6] = 0;
      puVar21[7] = 0;
      puVar21[0] = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[8] = 0;
      puVar21[9] = 0;
      if (puVar21 != puStack_390) {
        if ((*puStack_300 & 1) == 0) {
          *(long *)(puVar21 + 6) = *(long *)(puStack_300 + 4);
          lVar31 = *(long *)(puStack_300 + 2);
          *(long *)(puVar21 + 2) = *(long *)puStack_300;
          *(long *)(puVar21 + 4) = lVar31;
        }
        else {
          puStack_300 = puVar25;
          func_0x04885070(puVar21 + 2,*(long *)(puVar26 + 0x28),*(long *)(puVar26 + 0x26));
          puVar25 = puStack_300;
        }
      }
      *(long *)puVar21 = *(long *)puStack_390;
      *(uint **)(puVar21 + 10) = puVar25;
      *(uint **)(puVar21 + 0xc) = puVar27;
      LOCK();
      *(long *)(puVar27 + 2) = *(long *)(puVar27 + 2) + 1;
      UNLOCK();
      puVar21 = puVar21 + 0xe;
      *(uint **)(puVar24 + 0x24) = puVar21;
LAB_0d3f6cb5:
      puVar27 = puStack_380;
      *(uint **)(puVar24 + 0x24) = puVar21;
      uVar14 = *puVar24;
      uVar15 = puVar24[1];
      uVar16 = puVar24[2];
      uVar17 = puVar24[3];
      if (*(long *)(puVar24 + 2) != 0) {
        LOCK();
        plVar19 = (long *)(*(long *)(puVar24 + 2) + 8);
        *plVar19 = *plVar19 + 1;
        UNLOCK();
      }
      plVar19 = *(long **)(puVar26 + 0x1e);
      puVar26[0x1c] = uVar14;
      puVar26[0x1d] = uVar15;
      puVar26[0x1e] = uVar16;
      puVar26[0x1f] = uVar17;
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar29 = plVar19 + 1;
        lVar31 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      *(byte *)(puVar26 + 0x20) = *(byte *)((long)puVar24 + 0xa1);
      LOCK();
      lVar31 = *(long *)puStack_330;
      *(long *)puStack_330 = *(long *)puStack_330 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*(long *)puVar27 + 0x10))(puVar27);
        func_0x0412c2d0(puVar27);
        LOCK();
        lVar31 = *(long *)puVar34;
        *(long *)puVar34 = *(long *)puVar34 + -1;
        UNLOCK();
        if (lVar31 == 0) goto LAB_0d3f6f20;
LAB_0d3f6d47:
        LOCK();
        lVar31 = *(long *)puVar34;
        *(long *)puVar34 = *(long *)puVar34 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar31 = *(long *)puVar34;
        *(long *)puVar34 = *(long *)puVar34 + -1;
        UNLOCK();
        if (lVar31 != 0) goto LAB_0d3f6d47;
LAB_0d3f6f20:
        (**(code **)(*(long *)puVar26 + 0x10))(puVar26);
        func_0x0412c2d0(puVar26);
        LOCK();
        lVar31 = *(long *)puVar34;
        *(long *)puVar34 = *(long *)puVar34 + -1;
        UNLOCK();
      }
      if (lVar31 == 0) {
        (**(code **)(*(long *)puVar26 + 0x10))(puVar26);
        func_0x0412c2d0(puVar26);
      }
      if (plStack_1f8 != (long *)0x0) {
        (*(code *)plStack_1f8[1])(&plStack_1f8);
      }
      uStack_310 = 0;
      uStack_308 = 0;
      uStack_328 = 0xae8ea2e4ee1dc1c3;
      bStack_320 = 0x18;
      uStack_31f = 0x63616c70;
      uStack_31b = 0x65;
      uStack_31a = 0x5f73;
      uStack_318 = 0x636f6c62;
      uStack_314 = 0x6b;
      uStack_f0 = 0;
      bStack_2e0 = 0;
      uStack_2df = 0;
      uStack_2da = 0;
      lStack_f8 = 0;
      plStack_2e8 = (long *)&UNK_0f46e8a8;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      plStack_378 = plStack_2e8;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&UNK_0f466c30;
      puStack_370 = (uint *)0x0;
      plStack_2e8 = (long *)0x0;
      plVar19[4] = (long)&UNK_0f2ccd78;
      plVar19[5] = 0;
      plVar19[6] = 0;
      plVar19[7] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      plVar19[10] = 0;
      plVar19[0xb] = 0;
      plVar19[0xc] = 0;
      *(undefined1 *)(plVar19 + 0xd) = 0;
      func_0x04aa75f0(plVar19 + 0xe,&uStack_381,&UNK_01254d89);
      *(undefined1 *)(plVar19 + 0x10) = 0;
      plVar19[0x11] = 0;
      plVar19[0x12] = 0;
      plVar19[0x13] = 0;
      plVar19[0x14] = 0;
      plVar19[0x15] = 0;
      plVar19[0x16] = 0;
      plVar19[0x17] = 0xffffffff;
      plVar19[0x26] = 0;
      plVar19[0x27] = 0;
      plVar19[0x18] = 0;
      plVar19[0x19] = 0;
      plVar19[0x1a] = 0;
      plVar19[0x1b] = 0;
      plVar19[0x1c] = 0;
      plVar19[0x1d] = 0;
      plVar19[0x1e] = 0;
      plVar19[0x1f] = 0;
      plVar19[4] = (long)&UNK_0f466c80;
      plVar19[0x2e] = 0;
      plVar19[0x2f] = 0;
      if (plStack_378 == (long *)0x0) {
        plVar29 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_378)(&plStack_378,plVar19 + 0x2e);
        plVar29 = plStack_378;
      }
      plVar20 = plVar19 + 1;
      plVar19[0x2e] = (long)plVar29;
      if (plStack_2e8 != (long *)0x0) {
        (*(code *)plStack_2e8[1])(&plStack_2e8);
      }
      LOCK();
      *plVar20 = *plVar20 + 1;
      UNLOCK();
      plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar29 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar23 = plVar19 + 4;
      plVar29[1] = 0;
      plVar29[2] = 0;
      *plVar29 = (long)&UNK_0f466d60;
      plVar29[6] = 0;
      plVar29[7] = 0;
      plVar29[4] = (long)&UNK_0f466db0;
      plVar29[0xe] = (long)plVar23;
      plVar29[0xf] = (long)plVar19;
      LOCK();
      plVar19[1] = plVar19[1] + 1;
      UNLOCK();
      plStack_378 = plVar29 + 4;
      puStack_370 = (uint *)plVar29;
      puVar22 = (undefined4 *)func_0x0d4502c0(puStack_2f0,&uStack_328,1);
      puVar21 = (uint *)(plVar19 + 0x11);
      puVar26 = *(uint **)(puVar22 + 0x24);
      if (puVar26 < *(uint **)(puVar22 + 0x26)) {
        puVar26[4] = 0;
        puVar26[5] = 0;
        puVar26[6] = 0;
        puVar26[7] = 0;
        puVar26[0] = 0;
        puVar26[1] = 0;
        puVar26[2] = 0;
        puVar26[3] = 0;
        puVar26[8] = 0;
        puVar26[9] = 0;
        if (puVar26 != puVar21) {
          puVar27 = puVar26 + 2;
          if ((*(byte *)(plVar19 + 0x12) & 1) == 0) {
            *(long *)(puVar26 + 6) = plVar19[0x14];
            lVar31 = plVar19[0x13];
            *(long *)puVar27 = plVar19[0x12];
            *(long *)(puVar26 + 4) = lVar31;
          }
          else {
            puStack_380 = puVar21;
            puStack_330 = puVar27;
            func_0x04885070(puVar27,plVar19[0x14],plVar19[0x13]);
            puVar21 = puStack_380;
          }
        }
        *(long *)puVar26 = *(long *)puVar21;
        *(long **)(puVar26 + 10) = plVar29 + 4;
        *(long **)(puVar26 + 0xc) = plVar29;
        LOCK();
        plVar29[1] = plVar29[1] + 1;
        UNLOCK();
        puVar26 = puVar26 + 0xe;
        *(uint **)(puVar22 + 0x24) = puVar26;
      }
      else {
        puVar26 = (uint *)func_0x0d452470(puVar22 + 0x22,puVar21,&plStack_378);
      }
      *(uint **)(puVar22 + 0x24) = puVar26;
      uVar10 = *puVar22;
      uVar11 = puVar22[1];
      uVar12 = puVar22[2];
      uVar13 = puVar22[3];
      if (*(long *)(puVar22 + 2) != 0) {
        LOCK();
        plVar29 = (long *)(*(long *)(puVar22 + 2) + 8);
        *plVar29 = *plVar29 + 1;
        UNLOCK();
      }
      plVar29 = (long *)plVar19[0xf];
      *(undefined4 *)(plVar19 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar19 + 0x74) = uVar11;
      *(undefined4 *)(plVar19 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar19 + 0x7c) = uVar13;
      if (plVar29 != (long *)0x0) {
        LOCK();
        plVar1 = plVar29 + 1;
        lVar31 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          func_0x0412c2d0(plVar29);
        }
      }
      puVar21 = puStack_370;
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
      if (puStack_370 != (uint *)0x0) {
        LOCK();
        plVar29 = (long *)((long)puStack_370 + 8);
        lVar31 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*(long *)puStack_370 + 0x10))(puStack_370);
          func_0x0412c2d0(puVar21);
        }
      }
      LOCK();
      lVar31 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
        LOCK();
        lVar31 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar31 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      if (lVar31 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      (**(code **)(*plVar23 + 0x10))(plVar23,&uStack_258);
      if ((uStack_258 & 1) != 0) {
        func_0x0412a280(uStack_248,uStack_258 & 0xfffffffffffffffe);
      }
      if (lStack_f8 != 0) {
        (**(code **)(lStack_f8 + 8))(&lStack_f8);
      }
      if ((bStack_320 & 1) != 0) {
        func_0x0412a280(uStack_310,
                        CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,bStack_320))) &
                        0xfffffffffffffffe);
      }
      uStack_314 = 0;
      uStack_310 = 0;
      uStack_308 = 0;
      bStack_320 = 0x16;
      uStack_31f = 0x5f79616d;
      uStack_31b = 0x72;
      uStack_31a = 0x7065;
      uStack_318 = 0x6563616c;
      uStack_328 = 0x272a7fa09187bb85;
      plStack_1b8 = (long *)0x0;
      uStack_1b0 = 0;
      puVar26 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (puVar26 == (uint *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      puVar26[2] = 0;
      puVar26[3] = 0;
      puVar26[4] = 0;
      puVar26[5] = 0;
      *(undefined **)puVar26 = &UNK_0f46e8d0;
      plStack_378 = (long *)0x0;
      puStack_370 = (uint *)0x0;
      if (plStack_1b8 == (long *)0x0) {
        plStack_378 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_1b8)(&plStack_1b8,&plStack_378);
        plStack_378 = plStack_1b8;
      }
      plStack_1b8 = (long *)0x0;
      *(undefined **)(puVar26 + 8) = &UNK_0f2ccd78;
      puVar26[10] = 0;
      puVar26[0xb] = 0;
      puVar26[0xc] = 0;
      puVar26[0xd] = 0;
      puVar26[0xe] = 0;
      puVar26[0xf] = 0;
      puVar26[0x10] = 0;
      puVar26[0x11] = 0;
      puVar26[0x12] = 0;
      puVar26[0x13] = 0;
      puVar26[0x14] = 0;
      puVar26[0x15] = 0;
      puVar26[0x16] = 0;
      puVar26[0x17] = 0;
      puVar26[0x18] = 0;
      puVar26[0x19] = 0;
      *(byte *)(puVar26 + 0x1a) = 0;
      func_0x04aa75f0(puVar26 + 0x1c,&plStack_2e8,&UNK_01254d89);
      *(byte *)(puVar26 + 0x20) = 0;
      puVar21 = puVar26 + 0x22;
      puVar26[0x22] = 0;
      puVar26[0x23] = 0;
      puVar26[0x24] = 0;
      puVar26[0x25] = 0;
      puVar26[0x26] = 0;
      puVar26[0x27] = 0;
      puVar26[0x28] = 0;
      puVar26[0x29] = 0;
      puVar26[0x2a] = 0;
      puVar26[0x2b] = 0;
      puVar26[0x2c] = 0;
      puVar26[0x2d] = 0;
      puVar26[0x2e] = 0xffffffff;
      puVar26[0x2f] = 0;
      puVar26[0x4c] = 0;
      puVar26[0x4d] = 0;
      puVar26[0x4e] = 0;
      puVar26[0x4f] = 0;
      puVar26[0x30] = 0;
      puVar26[0x31] = 0;
      puVar26[0x32] = 0;
      puVar26[0x33] = 0;
      puVar26[0x34] = 0;
      puVar26[0x35] = 0;
      puVar26[0x36] = 0;
      puVar26[0x37] = 0;
      puVar26[0x38] = 0;
      puVar26[0x39] = 0;
      puVar26[0x3a] = 0;
      puVar26[0x3b] = 0;
      puVar26[0x3c] = 0;
      puVar26[0x3d] = 0;
      puVar26[0x3e] = 0;
      puVar26[0x3f] = 0;
      *(undefined **)(puVar26 + 8) = &UNK_0f46e920;
      pplVar2 = (long **)(puVar26 + 0x5c);
      puVar26[0x5c] = 0;
      puVar26[0x5d] = 0;
      puVar26[0x5e] = 0;
      puVar26[0x5f] = 0;
      if (pplVar2 != &plStack_378) {
        if (plStack_378 == (long *)0x0) {
          plVar19 = (long *)0x0;
        }
        else {
          (*(code *)*plStack_378)(&plStack_378,pplVar2);
          plVar19 = plStack_378;
        }
        plStack_378 = (long *)0x0;
        *pplVar2 = plVar19;
      }
      puVar27 = puVar26 + 0x24;
      if (puVar21 != (uint *)&DAT_0f551f58) {
        if ((*puVar27 & 1) == 0) {
          if ((_DAT_0f551f60 & 1) == 0) {
            *(long *)(puVar26 + 0x28) = _DAT_0f551f70;
            uVar16 = uRam000000000f551f6c;
            uVar15 = _DAT_0f551f68;
            uVar14 = uRam000000000f551f64;
            *puVar27 = _DAT_0f551f60;
            puVar26[0x25] = uVar14;
            puVar26[0x26] = uVar15;
            puVar26[0x27] = uVar16;
          }
          else {
            func_0x04885070(puVar27,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
          }
        }
        else {
          bVar37 = (_DAT_0f551f60 & 1) != 0;
          lVar31 = 0xf551f61;
          if (bVar37) {
            lVar31 = _DAT_0f551f70;
          }
          uVar35 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
          if (bVar37) {
            uVar35 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
          }
          func_0x04885120(puVar27,lVar31,uVar35);
        }
      }
      puVar34 = puVar26 + 2;
      *(long *)(puVar26 + 0x22) = _DAT_0f551f58;
      puVar26[0x2a] = 0;
      puVar26[0x2b] = 0;
      if (plStack_378 != (long *)0x0) {
        (*(code *)plStack_378[1])(&plStack_378);
      }
      LOCK();
      *(long *)puVar34 = *(long *)puVar34 + 1;
      UNLOCK();
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&UNK_0f46ea18;
      plVar19[6] = 0;
      plVar19[7] = 0;
      plVar19[4] = (long)&UNK_0f46ea68;
      plVar19[0xe] = (long)(puVar26 + 8);
      plVar19[0xf] = (long)puVar26;
      LOCK();
      *(long *)(puVar26 + 2) = *(long *)(puVar26 + 2) + 1;
      UNLOCK();
      puStack_380 = puVar27;
      plStack_378 = plVar19 + 4;
      puStack_370 = (uint *)plVar19;
      puVar24 = (uint *)func_0x0d4502c0(puStack_2f0,&uStack_328,0);
      puVar27 = *(uint **)(puVar24 + 0x24);
      if (puVar27 < *(uint **)(puVar24 + 0x26)) {
        puVar27[4] = 0;
        puVar27[5] = 0;
        puVar27[6] = 0;
        puVar27[7] = 0;
        puVar27[0] = 0;
        puVar27[1] = 0;
        puVar27[2] = 0;
        puVar27[3] = 0;
        puVar27[8] = 0;
        puVar27[9] = 0;
        if (puVar27 != puVar21) {
          puVar25 = puVar27 + 2;
          if ((*puStack_380 & 1) == 0) {
            *(long *)(puVar27 + 6) = *(long *)(puStack_380 + 4);
            lVar31 = *(long *)(puStack_380 + 2);
            *(long *)puVar25 = *(long *)puStack_380;
            *(long *)(puVar27 + 4) = lVar31;
          }
          else {
            puStack_380 = puVar25;
            func_0x04885070(puVar25,*(long *)(puVar26 + 0x28),*(long *)(puVar26 + 0x26));
          }
        }
        *(long *)puVar27 = *(long *)puVar21;
        *(long **)(puVar27 + 10) = plVar19 + 4;
        *(long **)(puVar27 + 0xc) = plVar19;
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
        puVar27 = puVar27 + 0xe;
        *(uint **)(puVar24 + 0x24) = puVar27;
      }
      else {
        puVar27 = (uint *)func_0x0d452470(puVar24 + 0x22,puVar21,&plStack_378);
      }
      *(uint **)(puVar24 + 0x24) = puVar27;
      uVar14 = *puVar24;
      uVar15 = puVar24[1];
      uVar16 = puVar24[2];
      uVar17 = puVar24[3];
      if (*(long *)(puVar24 + 2) != 0) {
        LOCK();
        plVar19 = (long *)(*(long *)(puVar24 + 2) + 8);
        *plVar19 = *plVar19 + 1;
        UNLOCK();
      }
      plVar19 = *(long **)(puVar26 + 0x1e);
      puVar26[0x1c] = uVar14;
      puVar26[0x1d] = uVar15;
      puVar26[0x1e] = uVar16;
      puVar26[0x1f] = uVar17;
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar29 = plVar19 + 1;
        lVar31 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      puVar21 = puStack_370;
      *(byte *)(puVar26 + 0x20) = *(byte *)((long)puVar24 + 0xa1);
      if (puStack_370 != (uint *)0x0) {
        LOCK();
        plVar19 = (long *)((long)puStack_370 + 8);
        lVar31 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*(long *)puStack_370 + 0x10))(puStack_370);
          func_0x0412c2d0(puVar21);
        }
      }
      LOCK();
      lVar31 = *(long *)puVar34;
      *(long *)puVar34 = *(long *)puVar34 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*(long *)puVar26 + 0x10))(puVar26);
        func_0x0412c2d0(puVar26);
        LOCK();
        lVar31 = *(long *)puVar34;
        *(long *)puVar34 = *(long *)puVar34 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar31 = *(long *)puVar34;
        *(long *)puVar34 = *(long *)puVar34 + -1;
        UNLOCK();
      }
      if (lVar31 == 0) {
        (**(code **)(*(long *)puVar26 + 0x10))(puVar26);
        func_0x0412c2d0(puVar26);
      }
      puVar26[0x2c] = 1;
      puVar26[0x2d] = 0;
      uStack_130 = 0;
      bStack_2e0 = 0;
      uStack_2df = 0;
      uStack_2da = 0;
      lStack_138 = 0;
      plStack_2e8 = (long *)&UNK_0f46eab8;
      puVar21 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (puVar21 == (uint *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      plStack_378 = plStack_2e8;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      *(undefined **)puVar21 = &UNK_0f466e68;
      puStack_370 = (uint *)0x0;
      plStack_2e8 = (long *)0x0;
      *(undefined **)(puVar21 + 8) = &UNK_0f2ccd78;
      puVar21[10] = 0;
      puVar21[0xb] = 0;
      puVar21[0xc] = 0;
      puVar21[0xd] = 0;
      puVar21[0xe] = 0;
      puVar21[0xf] = 0;
      puVar21[0x10] = 0;
      puVar21[0x11] = 0;
      puVar21[0x12] = 0;
      puVar21[0x13] = 0;
      puVar21[0x14] = 0;
      puVar21[0x15] = 0;
      puVar21[0x16] = 0;
      puVar21[0x17] = 0;
      puVar21[0x18] = 0;
      puVar21[0x19] = 0;
      *(byte *)(puVar21 + 0x1a) = 0;
      func_0x04aa75f0(puVar21 + 0x1c,&uStack_381,&UNK_01254d89);
      *(byte *)(puVar21 + 0x20) = 0;
      puVar21[0x22] = 0;
      puVar21[0x23] = 0;
      puVar21[0x24] = 0;
      puVar21[0x25] = 0;
      puVar21[0x26] = 0;
      puVar21[0x27] = 0;
      puVar21[0x28] = 0;
      puVar21[0x29] = 0;
      puVar21[0x2a] = 0;
      puVar21[0x2b] = 0;
      puVar21[0x2c] = 0;
      puVar21[0x2d] = 0;
      puVar21[0x2e] = 0xffffffff;
      puVar21[0x2f] = 0;
      puVar21[0x4c] = 0;
      puVar21[0x4d] = 0;
      puVar21[0x4e] = 0;
      puVar21[0x4f] = 0;
      puVar21[0x30] = 0;
      puVar21[0x31] = 0;
      puVar21[0x32] = 0;
      puVar21[0x33] = 0;
      puVar21[0x34] = 0;
      puVar21[0x35] = 0;
      puVar21[0x36] = 0;
      puVar21[0x37] = 0;
      puVar21[0x38] = 0;
      puVar21[0x39] = 0;
      puVar21[0x3a] = 0;
      puVar21[0x3b] = 0;
      puVar21[0x3c] = 0;
      puVar21[0x3d] = 0;
      puVar21[0x3e] = 0;
      puVar21[0x3f] = 0;
      *(undefined **)(puVar21 + 8) = &UNK_0f466eb8;
      puVar21[0x5c] = 0;
      puVar21[0x5d] = 0;
      puVar21[0x5e] = 0;
      puVar21[0x5f] = 0;
      if (plStack_378 == (long *)0x0) {
        plVar19 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_378)(&plStack_378,puVar21 + 0x5c);
        plVar19 = plStack_378;
      }
      puVar27 = puVar21 + 2;
      *(long **)(puVar21 + 0x5c) = plVar19;
      if (plStack_2e8 != (long *)0x0) {
        (*(code *)plStack_2e8[1])(&plStack_2e8);
      }
      LOCK();
      *(long *)puVar27 = *(long *)puVar27 + 1;
      UNLOCK();
      puStack_330 = puVar27;
      puStack_390 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puStack_390 == (uint *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar27 = puVar21 + 8;
      puStack_390[2] = 0;
      puStack_390[3] = 0;
      puStack_390[4] = 0;
      puStack_390[5] = 0;
      *(undefined **)puStack_390 = &UNK_0f466f98;
      puStack_390[0xc] = 0;
      puStack_390[0xd] = 0;
      puStack_390[0xe] = 0;
      puStack_390[0xf] = 0;
      *(undefined **)(puStack_390 + 8) = &UNK_0f466fe8;
      *(uint **)(puStack_390 + 0x1c) = puVar27;
      *(uint **)(puStack_390 + 0x1e) = puVar21;
      LOCK();
      *(long *)(puVar21 + 2) = *(long *)(puVar21 + 2) + 1;
      UNLOCK();
      puStack_380 = puStack_390 + 2;
      puVar25 = *(uint **)(puVar26 + 0x38);
      puVar24 = *(uint **)(puVar26 + 0x36);
      for (puVar34 = puVar24; puVar34 != puVar25; puVar34 = puVar34 + 0x2a) {
        if ((*(long *)(puVar34 + 0x1e) == 0) && (*(long *)(puVar34 + 0x20) == -1))
        goto LAB_0d3f7c1d;
      }
      if (puVar25 < *(uint **)(puVar26 + 0x3a)) {
        func_0x0d454190(puVar25);
        puVar25 = puVar25 + 0x2a;
        *(uint **)(puVar26 + 0x38) = puVar25;
      }
      else {
        pbVar33 = (byte *)((long)puVar25 - (long)puVar24);
        uVar35 = ((long)pbVar33 >> 3) * -0x30c30c30c30c30c3 + 1;
        if (0x186186186186186 < uVar35) goto LAB_0d3f827a;
        puVar34 = puVar26 + 0x36;
        lVar31 = (long)*(uint **)(puVar26 + 0x3a) - (long)puVar24 >> 3;
        uVar9 = lVar31 * -0x6186186186186186;
        if (uVar35 < uVar9) {
          uVar35 = uVar9;
        }
        if (0xc30c30c30c30c2 < (ulong)(lVar31 * -0x30c30c30c30c30c3)) {
          uVar35 = 0x186186186186186;
        }
        puStack_358 = puVar34;
        if (uVar35 == 0) {
          plVar19 = (long *)0x0;
        }
        else {
          if (0x186186186186186 < uVar35) goto LAB_0d3f8266;
          plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 0xa8);
          if (plVar19 == (long *)0x0) {
            func_0x0eec74c0(uVar35 * 0xa8,0);
            plVar19 = (long *)0x0;
          }
        }
        puStack_370 = (uint *)(pbVar33 + (long)plVar19);
        plStack_360 = plVar19 + uVar35 * 0x15;
        plStack_378 = plVar19;
        puStack_368 = puStack_370;
        puStack_300 = puVar34;
        func_0x0d454190(puStack_370);
        puVar25 = puStack_368 + 0x2a;
        lVar31 = *(long *)(puVar26 + 0x36);
        lVar7 = *(long *)(puVar26 + 0x38);
        pbVar33 = (byte *)((lVar31 - lVar7) + (long)puStack_370);
        if (lVar31 != lVar7) {
          lVar36 = 0;
          puStack_2f8 = puVar21;
          do {
            uVar18 = ((undefined8 *)(lVar31 + lVar36))[1];
            *(undefined8 *)(pbVar33 + lVar36) = *(undefined8 *)(lVar31 + lVar36);
            *(undefined8 *)(pbVar33 + lVar36 + 8) = uVar18;
            *(undefined8 *)(lVar31 + lVar36) = 0;
            ((undefined8 *)(lVar31 + lVar36))[1] = 0;
            pbVar28 = pbVar33 + lVar36 + 0x20;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 0;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28 = pbVar33 + lVar36 + 0x10;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 0;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28 = pbVar33 + lVar36 + 0x30;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            *(undefined8 *)(pbVar33 + lVar36 + 0x28) = *(undefined8 *)(lVar31 + 0x28 + lVar36);
            puVar22 = (undefined4 *)(lVar31 + 0x18 + lVar36);
            uVar10 = puVar22[1];
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            pbVar28 = pbVar33 + lVar36 + 0x18;
            *(undefined4 *)pbVar28 = *puVar22;
            *(undefined4 *)(pbVar28 + 4) = uVar10;
            *(undefined4 *)(pbVar28 + 8) = uVar11;
            *(undefined4 *)(pbVar28 + 0xc) = uVar12;
            *(undefined2 *)(lVar31 + 0x18 + lVar36) = 0;
            *(undefined8 *)(pbVar33 + lVar36 + 0x10) = *(undefined8 *)(lVar31 + 0x10 + lVar36);
            func_0x04167a20(pbVar33 + lVar36 + 0x38,lVar36 + lVar31 + 0x38);
            puVar4 = (undefined8 *)(lVar31 + 0x40 + lVar36);
            uVar18 = puVar4[1];
            *(undefined8 *)(pbVar33 + lVar36 + 0x40) = *puVar4;
            *(undefined8 *)(pbVar33 + lVar36 + 0x40 + 8) = uVar18;
            puVar4 = (undefined8 *)(lVar31 + 0x50 + lVar36);
            uVar18 = puVar4[1];
            *(undefined8 *)(pbVar33 + lVar36 + 0x50) = *puVar4;
            *(undefined8 *)(pbVar33 + lVar36 + 0x50 + 8) = uVar18;
            puVar4 = (undefined8 *)(lVar31 + 0x60 + lVar36);
            uVar18 = puVar4[1];
            *(undefined8 *)(pbVar33 + lVar36 + 0x60) = *puVar4;
            *(undefined8 *)(pbVar33 + lVar36 + 0x60 + 8) = uVar18;
            puVar4 = (undefined8 *)(lVar31 + 0x60 + lVar36);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined8 *)(pbVar33 + lVar36 + 0x70) = *(undefined8 *)(lVar31 + 0x70 + lVar36);
            puVar4 = (undefined8 *)(lVar31 + 0x78 + lVar36);
            uVar18 = puVar4[1];
            *(undefined8 *)(pbVar33 + lVar36 + 0x78) = *puVar4;
            *(undefined8 *)(pbVar33 + lVar36 + 0x78 + 8) = uVar18;
            pbVar28 = pbVar33 + lVar36 + 0x88;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 0;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28 = pbVar33 + lVar36 + 0x98;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            puVar22 = (undefined4 *)(lVar31 + 0x88 + lVar36);
            uVar10 = puVar22[1];
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            pbVar28 = pbVar33 + lVar36 + 0x88;
            *(undefined4 *)pbVar28 = *puVar22;
            *(undefined4 *)(pbVar28 + 4) = uVar10;
            *(undefined4 *)(pbVar28 + 8) = uVar11;
            *(undefined4 *)(pbVar28 + 0xc) = uVar12;
            *(undefined8 *)(pbVar33 + lVar36 + 0x98) = *(undefined8 *)(lVar31 + 0x98 + lVar36);
            puVar4 = (undefined8 *)(lVar31 + 0x88 + lVar36);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined8 *)(lVar31 + 0x98 + lVar36) = 0;
            *(undefined2 *)(pbVar33 + lVar36 + 0xa0) = *(undefined2 *)(lVar31 + 0xa0 + lVar36);
            lVar3 = lVar36 + lVar31;
            lVar36 = lVar36 + 0xa8;
          } while (lVar3 + 0xa8 != lVar7);
          do {
            func_0x0d454310(lVar31);
            lVar31 = lVar31 + 0xa8;
          } while (lVar31 != lVar7);
          lVar31 = *(long *)puStack_300;
          puVar21 = puStack_2f8;
        }
        *(byte **)(puVar26 + 0x36) = pbVar33;
        *(uint **)(puVar26 + 0x38) = puVar25;
        lVar7 = *(long *)(puVar26 + 0x3a);
        *(long **)(puVar26 + 0x3a) = plStack_360;
        if (lVar31 != 0) {
          func_0x0412a280(lVar31,lVar7 - lVar31);
        }
      }
      *(uint **)(puVar26 + 0x38) = puVar25;
      pbVar33 = *(byte **)(puVar25 + -0x2a);
      if ((*pbVar33 & 1) == 0) {
        *pbVar33 = 0x26;
        pbVar33 = pbVar33 + 1;
      }
      else {
        pbVar33[8] = 0x13;
        pbVar33[9] = 0;
        pbVar33[10] = 0;
        pbVar33[0xb] = 0;
        pbVar33[0xc] = 0;
        pbVar33[0xd] = 0;
        pbVar33[0xe] = 0;
        pbVar33[0xf] = 0;
        pbVar33 = *(byte **)(pbVar33 + 0x10);
      }
      uVar12 = _UNK_01494d69;
      uVar11 = _UNK_01494d65;
      uVar10 = _UNK_01494d61;
      *(undefined4 *)pbVar33 = _DAT_01494d5d;
      *(undefined4 *)(pbVar33 + 4) = uVar10;
      *(undefined4 *)(pbVar33 + 8) = uVar11;
      *(undefined4 *)(pbVar33 + 0xc) = uVar12;
      pbVar33[0xf] = 0x65;
      pbVar33[0x10] = 0x6e;
      pbVar33[0x11] = 0x74;
      pbVar33[0x12] = 0x3e;
      pbVar33[0x13] = 0;
      lVar31 = *(long *)(puVar26 + 0x38);
      puVar34 = (uint *)(lVar31 - 0xa8);
      *(byte *)(lVar31 + -7) = (byte)puVar26[0x20];
      *(undefined8 *)(lVar31 + -0x30) = 0;
      *(undefined8 *)(lVar31 + -0x28) = 0xffffffffffffffff;
      *(undefined1 *)(lVar31 + -8) = 0;
LAB_0d3f7c1d:
      puVar24 = puVar21 + 0x22;
      puVar26 = puStack_390 + 8;
      puVar25 = *(uint **)(puVar34 + 0x24);
      if (puVar25 < *(uint **)(puVar34 + 0x26)) {
        puVar25[4] = 0;
        puVar25[5] = 0;
        puVar25[6] = 0;
        puVar25[7] = 0;
        puVar25[0] = 0;
        puVar25[1] = 0;
        puVar25[2] = 0;
        puVar25[3] = 0;
        puVar25[8] = 0;
        puVar25[9] = 0;
        if (puVar25 != puVar24) {
          if ((puVar21[0x24] & 1) == 0) {
            *(long *)(puVar25 + 6) = *(long *)(puVar21 + 0x28);
            lVar31 = *(long *)(puVar21 + 0x26);
            *(long *)(puVar25 + 2) = *(long *)(puVar21 + 0x24);
            *(long *)(puVar25 + 4) = lVar31;
          }
          else {
            puStack_2f8 = puVar24;
            func_0x04885070(puVar25 + 2,*(long *)(puVar21 + 0x28),*(long *)(puVar21 + 0x26));
            puVar24 = puStack_2f8;
          }
        }
        *(long *)puVar25 = *(long *)puVar24;
        *(uint **)(puVar25 + 10) = puVar26;
        *(uint **)(puVar25 + 0xc) = puStack_390;
        LOCK();
        *(long *)(puStack_390 + 2) = *(long *)(puStack_390 + 2) + 1;
        UNLOCK();
        puVar25 = puVar25 + 0xe;
        *(uint **)(puVar34 + 0x24) = puVar25;
        goto LAB_0d3f7f73;
      }
      pbVar33 = (byte *)((long)puVar25 - *(long *)(puVar34 + 0x22));
      uVar35 = ((long)pbVar33 >> 3) * 0x6db6db6db6db6db7 + 1;
      if (uVar35 < 0x492492492492493) {
        lVar31 = (long)*(uint **)(puVar34 + 0x26) - *(long *)(puVar34 + 0x22) >> 3;
        uVar9 = lVar31 * -0x2492492492492492;
        if (uVar35 < uVar9) {
          uVar35 = uVar9;
        }
        puStack_358 = puVar34 + 0x22;
        if (0x249249249249248 < (ulong)(lVar31 * 0x6db6db6db6db6db7)) {
          uVar35 = 0x492492492492492;
        }
        puStack_300 = puVar26;
        puStack_2f8 = puStack_358;
        if (uVar35 == 0) {
          plVar19 = (long *)0x0;
        }
        else {
          if (0x492492492492492 < uVar35) goto LAB_0d3f8266;
          plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 0x38);
          if (plVar19 == (long *)0x0) {
            func_0x0eec74c0(uVar35 * 0x38,0);
            plVar19 = (long *)0x0;
          }
        }
        puVar26 = (uint *)((long)plVar19 + (long)pbVar33);
        plStack_360 = plVar19 + uVar35 * 7;
        pbVar28 = (byte *)((long)(plVar19 + 2) + (long)pbVar33);
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        pbVar28[8] = 0;
        pbVar28[9] = 0;
        pbVar28[10] = 0;
        pbVar28[0xb] = 0;
        pbVar28[0xc] = 0;
        pbVar28[0xd] = 0;
        pbVar28[0xe] = 0;
        pbVar28[0xf] = 0;
        pbVar28 = (byte *)((long)plVar19 + (long)pbVar33);
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        pbVar28[8] = 0;
        pbVar28[9] = 0;
        pbVar28[10] = 0;
        pbVar28[0xb] = 0;
        pbVar28[0xc] = 0;
        pbVar28[0xd] = 0;
        pbVar28[0xe] = 0;
        pbVar28[0xf] = 0;
        pbVar28 = (byte *)((long)(plVar19 + 4) + (long)pbVar33);
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        puStack_368 = puVar26;
        plStack_378 = plVar19;
        puStack_370 = puVar26;
        if (puVar26 != puVar24) {
          pbVar33 = pbVar33 + (long)plVar19;
          if ((puVar21[0x24] & 1) == 0) {
            *(long *)(pbVar33 + 0x18) = *(long *)(puVar21 + 0x28);
            uVar14 = puVar21[0x25];
            uVar15 = puVar21[0x26];
            uVar16 = puVar21[0x27];
            *(uint *)(pbVar33 + 8) = puVar21[0x24];
            *(uint *)(pbVar33 + 0xc) = uVar14;
            *(uint *)(pbVar33 + 0x10) = uVar15;
            *(uint *)(pbVar33 + 0x14) = uVar16;
          }
          else {
            func_0x04885070(pbVar33 + 8,*(long *)(puVar21 + 0x28),*(long *)(puVar21 + 0x26));
          }
        }
        *(long *)puVar26 = *(long *)puVar24;
        *(uint **)(puVar26 + 10) = puStack_300;
        *(uint **)(puVar26 + 0xc) = puStack_390;
        LOCK();
        *(long *)(puStack_390 + 2) = *(long *)(puStack_390 + 2) + 1;
        UNLOCK();
        puStack_368 = puStack_368 + 0xe;
        plVar19 = *(long **)(puVar34 + 0x22);
        plVar29 = *(long **)(puVar34 + 0x24);
        puVar26 = (uint *)((long)puStack_370 + ((long)plVar19 - (long)plVar29));
        puVar24 = puVar26;
        plVar20 = plVar19;
        if ((long)plVar19 - (long)plVar29 != 0) {
          do {
            puVar24[4] = 0;
            puVar24[5] = 0;
            puVar24[6] = 0;
            puVar24[7] = 0;
            puVar24[0] = 0;
            puVar24[1] = 0;
            puVar24[2] = 0;
            puVar24[3] = 0;
            puVar24[8] = 0;
            puVar24[9] = 0;
            *(long *)(puVar24 + 6) = plVar20[3];
            lVar31 = plVar20[2];
            *(long *)(puVar24 + 2) = plVar20[1];
            *(long *)(puVar24 + 4) = lVar31;
            *(undefined2 *)(plVar20 + 1) = 0;
            *(long *)puVar24 = *plVar20;
            lVar31 = plVar20[6];
            *(long *)(puVar24 + 10) = plVar20[5];
            *(long *)(puVar24 + 0xc) = lVar31;
            plVar20[5] = 0;
            plVar20[6] = 0;
            plVar20 = plVar20 + 7;
            puVar24 = puVar24 + 0xe;
            puStack_300 = puVar26;
          } while (plVar20 != plVar29);
          do {
            plVar20 = (long *)plVar19[6];
            if (plVar20 == (long *)0x0) {
LAB_0d3f7ef5:
              bVar5 = *(byte *)(plVar19 + 1);
            }
            else {
              LOCK();
              plVar23 = plVar20 + 1;
              lVar31 = *plVar23;
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (lVar31 != 0) goto LAB_0d3f7ef5;
              (**(code **)(*plVar20 + 0x10))(plVar20);
              func_0x0412c2d0(plVar20);
              bVar5 = *(byte *)(plVar19 + 1);
            }
            if ((bVar5 & 1) != 0) {
              func_0x0412a280(plVar19[3],plVar19[1] & 0xfffffffffffffffe);
            }
            plVar19 = plVar19 + 7;
          } while (plVar19 != plVar29);
          plVar19 = *(long **)puStack_2f8;
          puVar26 = puStack_300;
        }
        puVar25 = puStack_368;
        *(uint **)(puVar34 + 0x22) = puVar26;
        *(uint **)(puVar34 + 0x24) = puStack_368;
        lVar31 = *(long *)(puVar34 + 0x26);
        *(long **)(puVar34 + 0x26) = plStack_360;
        if (plVar19 != (long *)0x0) {
          func_0x0412a280(plVar19,lVar31 - (long)plVar19);
        }
LAB_0d3f7f73:
        puVar26 = puStack_330;
        *(uint **)(puVar34 + 0x24) = puVar25;
        uVar14 = *puVar34;
        uVar15 = puVar34[1];
        uVar16 = puVar34[2];
        uVar17 = puVar34[3];
        if (*(long *)(puVar34 + 2) != 0) {
          LOCK();
          plVar19 = (long *)(*(long *)(puVar34 + 2) + 8);
          *plVar19 = *plVar19 + 1;
          UNLOCK();
        }
        plVar19 = *(long **)(puVar21 + 0x1e);
        puVar21[0x1c] = uVar14;
        puVar21[0x1d] = uVar15;
        puVar21[0x1e] = uVar16;
        puVar21[0x1f] = uVar17;
        if (plVar19 != (long *)0x0) {
          LOCK();
          plVar29 = plVar19 + 1;
          lVar31 = *plVar29;
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
          }
        }
        *(byte *)(puVar21 + 0x20) = *(byte *)((long)puVar34 + 0xa1);
        LOCK();
        lVar31 = *(long *)puStack_380;
        *(long *)puStack_380 = *(long *)puStack_380 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*(long *)puStack_390 + 0x10))(puStack_390);
          func_0x0412c2d0(puStack_390);
          LOCK();
          lVar31 = *(long *)puVar26;
          *(long *)puVar26 = *(long *)puVar26 + -1;
          UNLOCK();
        }
        else {
          LOCK();
          lVar31 = *(long *)puVar26;
          *(long *)puVar26 = *(long *)puVar26 + -1;
          UNLOCK();
        }
        if (lVar31 == 0) {
          (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
          func_0x0412c2d0(puVar21);
          LOCK();
          lVar31 = *(long *)puVar26;
          *(long *)puVar26 = *(long *)puVar26 + -1;
          UNLOCK();
        }
        else {
          LOCK();
          lVar31 = *(long *)puVar26;
          *(long *)puVar26 = *(long *)puVar26 + -1;
          UNLOCK();
        }
        if (lVar31 == 0) {
          (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
          func_0x0412c2d0(puVar21);
        }
        auStack_278[0] = 0;
        auStack_278[1] = 0;
        auStack_278[2] = 0;
        (**(code **)(*(long *)puVar27 + 0x10))(puVar27,auStack_278);
        if ((auStack_278[0] & 1) != 0) {
          func_0x0412a280(auStack_278[2],auStack_278[0] & 0xfffffffffffffffe);
        }
        if (lStack_138 != 0) {
          (**(code **)(lStack_138 + 8))(&lStack_138);
        }
        if (plStack_1b8 != (long *)0x0) {
          (*(code *)plStack_1b8[1])(&plStack_1b8);
        }
        if ((bStack_320 & 1) != 0) {
          func_0x0412a280(uStack_310,
                          CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,bStack_320)))
                          & 0xfffffffffffffffe);
        }
        auStack_298[0] = 0;
        auStack_298[1] = 0;
        auStack_298[2] = 0;
        (**(code **)(*(long *)puStack_2f0 + 0x10))(puStack_2f0,auStack_298);
        if ((auStack_298[0] & 1) != 0) {
          func_0x0412a280(auStack_298[2],auStack_298[0] & 0xfffffffffffffffe);
        }
        return;
      }
    }
    else {
      pbVar33 = (byte *)((long)puVar21 - *(long *)(puVar24 + 0x22));
      puVar21 = (uint *)(((long)pbVar33 >> 3) * 0x6db6db6db6db6db7 + 1);
      if (puVar21 < (uint *)0x492492492492493) {
        lVar31 = (long)*(uint **)(puVar24 + 0x26) - *(long *)(puVar24 + 0x22) >> 3;
        puVar27 = (uint *)(lVar31 * -0x2492492492492492);
        if (puVar21 < puVar27) {
          puVar21 = puVar27;
        }
        puStack_358 = puVar24 + 0x22;
        if (0x249249249249248 < (ulong)(lVar31 * 0x6db6db6db6db6db7)) {
          puVar21 = (uint *)0x492492492492492;
        }
        puStack_2f8 = puStack_358;
        if (puVar21 == (uint *)0x0) {
          plVar19 = (long *)0x0;
        }
        else {
          if ((uint *)0x492492492492492 < puVar21) goto LAB_0d3f8261;
          puStack_2a0 = (uint *)((long)puVar21 * 0x38);
          plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (plVar19 == (long *)0x0) {
            func_0x0eec74c0(puStack_2a0,0);
            plVar19 = (long *)0x0;
          }
        }
        puVar27 = (uint *)((long)plVar19 + (long)pbVar33);
        plStack_360 = plVar19 + (long)puVar21 * 7;
        pbVar28 = (byte *)((long)(plVar19 + 2) + (long)pbVar33);
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        pbVar28[8] = 0;
        pbVar28[9] = 0;
        pbVar28[10] = 0;
        pbVar28[0xb] = 0;
        pbVar28[0xc] = 0;
        pbVar28[0xd] = 0;
        pbVar28[0xe] = 0;
        pbVar28[0xf] = 0;
        pbVar28 = (byte *)((long)plVar19 + (long)pbVar33);
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        pbVar28[8] = 0;
        pbVar28[9] = 0;
        pbVar28[10] = 0;
        pbVar28[0xb] = 0;
        pbVar28[0xc] = 0;
        pbVar28[0xd] = 0;
        pbVar28[0xe] = 0;
        pbVar28[0xf] = 0;
        pbVar28 = (byte *)((long)(plVar19 + 4) + (long)pbVar33);
        pbVar28[0] = 0;
        pbVar28[1] = 0;
        pbVar28[2] = 0;
        pbVar28[3] = 0;
        pbVar28[4] = 0;
        pbVar28[5] = 0;
        pbVar28[6] = 0;
        pbVar28[7] = 0;
        puStack_368 = puVar27;
        plStack_378 = plVar19;
        puStack_370 = puVar27;
        if (puVar27 != puStack_390) {
          pbVar33 = pbVar33 + (long)plVar19;
          if ((*puStack_300 & 1) == 0) {
            *(long *)(pbVar33 + 0x18) = *(long *)(puStack_300 + 4);
            uVar14 = puStack_300[1];
            uVar15 = puStack_300[2];
            uVar16 = puStack_300[3];
            *(uint *)(pbVar33 + 8) = *puStack_300;
            *(uint *)(pbVar33 + 0xc) = uVar14;
            *(uint *)(pbVar33 + 0x10) = uVar15;
            *(uint *)(pbVar33 + 0x14) = uVar16;
          }
          else {
            func_0x04885070(pbVar33 + 8,*(long *)(puVar26 + 0x28),*(long *)(puVar26 + 0x26));
          }
        }
        *(long *)puVar27 = *(long *)puStack_390;
        *(uint **)(puVar27 + 10) = puVar25;
        *(uint **)(puVar27 + 0xc) = puStack_380;
        LOCK();
        *(long *)(puStack_380 + 2) = *(long *)(puStack_380 + 2) + 1;
        UNLOCK();
        puStack_368 = puStack_368 + 0xe;
        puVar32 = *(undefined8 **)(puVar24 + 0x22);
        puVar4 = *(undefined8 **)(puVar24 + 0x24);
        pbVar33 = (byte *)((long)puStack_370 + ((long)puVar32 - (long)puVar4));
        pbVar28 = pbVar33;
        puVar30 = puVar32;
        if ((long)puVar32 - (long)puVar4 != 0) {
          do {
            pbVar28[0x10] = 0;
            pbVar28[0x11] = 0;
            pbVar28[0x12] = 0;
            pbVar28[0x13] = 0;
            pbVar28[0x14] = 0;
            pbVar28[0x15] = 0;
            pbVar28[0x16] = 0;
            pbVar28[0x17] = 0;
            pbVar28[0x18] = 0;
            pbVar28[0x19] = 0;
            pbVar28[0x1a] = 0;
            pbVar28[0x1b] = 0;
            pbVar28[0x1c] = 0;
            pbVar28[0x1d] = 0;
            pbVar28[0x1e] = 0;
            pbVar28[0x1f] = 0;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 0;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28[0x20] = 0;
            pbVar28[0x21] = 0;
            pbVar28[0x22] = 0;
            pbVar28[0x23] = 0;
            pbVar28[0x24] = 0;
            pbVar28[0x25] = 0;
            pbVar28[0x26] = 0;
            pbVar28[0x27] = 0;
            *(undefined8 *)(pbVar28 + 0x18) = puVar30[3];
            uVar18 = puVar30[2];
            *(undefined8 *)(pbVar28 + 8) = puVar30[1];
            *(undefined8 *)(pbVar28 + 0x10) = uVar18;
            *(undefined2 *)(puVar30 + 1) = 0;
            *(undefined8 *)pbVar28 = *puVar30;
            uVar10 = *(undefined4 *)((long)puVar30 + 0x2c);
            uVar11 = *(undefined4 *)(puVar30 + 6);
            uVar12 = *(undefined4 *)((long)puVar30 + 0x34);
            *(undefined4 *)(pbVar28 + 0x28) = *(undefined4 *)(puVar30 + 5);
            *(undefined4 *)(pbVar28 + 0x2c) = uVar10;
            *(undefined4 *)(pbVar28 + 0x30) = uVar11;
            *(undefined4 *)(pbVar28 + 0x34) = uVar12;
            puVar30[5] = 0;
            puVar30[6] = 0;
            puVar30 = puVar30 + 7;
            pbVar28 = pbVar28 + 0x38;
          } while (puVar30 != puVar4);
          do {
            plVar19 = (long *)puVar32[6];
            if (plVar19 == (long *)0x0) {
LAB_0d3f6c34:
              bVar5 = *(byte *)(puVar32 + 1);
            }
            else {
              LOCK();
              plVar29 = plVar19 + 1;
              lVar31 = *plVar29;
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (lVar31 != 0) goto LAB_0d3f6c34;
              (**(code **)(*plVar19 + 0x10))(plVar19);
              func_0x0412c2d0(plVar19);
              bVar5 = *(byte *)(puVar32 + 1);
            }
            if ((bVar5 & 1) != 0) {
              func_0x0412a280(puVar32[3],puVar32[1] & 0xfffffffffffffffe);
            }
            puVar32 = puVar32 + 7;
          } while (puVar32 != puVar4);
          puVar32 = *(undefined8 **)puStack_2f8;
        }
        puVar21 = puStack_368;
        *(byte **)(puVar24 + 0x22) = pbVar33;
        *(uint **)(puVar24 + 0x24) = puStack_368;
        lVar31 = *(long *)(puVar24 + 0x26);
        *(long **)(puVar24 + 0x26) = plStack_360;
        if (puVar32 != (undefined8 *)0x0) {
          func_0x0412a280(puVar32,lVar31 - (long)puVar32);
        }
        goto LAB_0d3f6cb5;
      }
LAB_0d3f826b:
      func_0x0d4c7710();
    }
    func_0x0d454530();
  }
  else {
    pbVar33 = (byte *)((long)puVar6 - (long)puVar25);
    uVar35 = ((long)pbVar33 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (uVar35 < 0x186186186186187) {
      puStack_358 = puVar21 + 0x36;
      lVar31 = (long)*(uint **)(puVar21 + 0x3a) - (long)puVar25 >> 3;
      uVar9 = lVar31 * -0x6186186186186186;
      if (uVar35 < uVar9) {
        uVar35 = uVar9;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar31 * -0x30c30c30c30c30c3)) {
        uVar35 = 0x186186186186186;
      }
      puStack_2f8 = puStack_358;
      if (uVar35 == 0) {
        plVar19 = (long *)0x0;
LAB_0d3f6710:
        puStack_370 = (uint *)(pbVar33 + (long)plVar19);
        plStack_360 = plVar19 + uVar35 * 0x15;
        plStack_378 = plVar19;
        puStack_368 = puStack_370;
        func_0x0d4c74d0(puStack_370);
        puVar27 = puStack_368;
        puVar24 = puStack_368 + 0x2a;
        lVar31 = *(long *)(puVar21 + 0x36);
        lVar7 = *(long *)(puVar21 + 0x38);
        pbVar33 = (byte *)((lVar31 - lVar7) + (long)puStack_370);
        if (lVar31 != lVar7) {
          lVar36 = 0;
          puStack_2a0 = puVar26;
          do {
            uVar18 = ((undefined8 *)(lVar31 + lVar36))[1];
            *(undefined8 *)(pbVar33 + lVar36) = *(undefined8 *)(lVar31 + lVar36);
            *(undefined8 *)(pbVar33 + lVar36 + 8) = uVar18;
            *(undefined8 *)(lVar31 + lVar36) = 0;
            ((undefined8 *)(lVar31 + lVar36))[1] = 0;
            pbVar28 = pbVar33 + lVar36 + 0x20;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 0;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28 = pbVar33 + lVar36 + 0x10;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 0;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28 = pbVar33 + lVar36 + 0x30;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            *(undefined8 *)(pbVar33 + lVar36 + 0x28) = *(undefined8 *)(lVar31 + 0x28 + lVar36);
            puVar22 = (undefined4 *)(lVar31 + 0x18 + lVar36);
            uVar10 = puVar22[1];
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            pbVar28 = pbVar33 + lVar36 + 0x18;
            *(undefined4 *)pbVar28 = *puVar22;
            *(undefined4 *)(pbVar28 + 4) = uVar10;
            *(undefined4 *)(pbVar28 + 8) = uVar11;
            *(undefined4 *)(pbVar28 + 0xc) = uVar12;
            *(undefined2 *)(lVar31 + 0x18 + lVar36) = 0;
            *(undefined8 *)(pbVar33 + lVar36 + 0x10) = *(undefined8 *)(lVar31 + 0x10 + lVar36);
            func_0x04167a20(pbVar33 + lVar36 + 0x38,lVar31 + lVar36 + 0x38);
            puVar4 = (undefined8 *)(lVar31 + 0x40 + lVar36);
            uVar18 = puVar4[1];
            *(undefined8 *)(pbVar33 + lVar36 + 0x40) = *puVar4;
            *(undefined8 *)(pbVar33 + lVar36 + 0x40 + 8) = uVar18;
            puVar4 = (undefined8 *)(lVar31 + 0x50 + lVar36);
            uVar18 = puVar4[1];
            *(undefined8 *)(pbVar33 + lVar36 + 0x50) = *puVar4;
            *(undefined8 *)(pbVar33 + lVar36 + 0x50 + 8) = uVar18;
            puVar4 = (undefined8 *)(lVar31 + 0x60 + lVar36);
            uVar18 = puVar4[1];
            *(undefined8 *)(pbVar33 + lVar36 + 0x60) = *puVar4;
            *(undefined8 *)(pbVar33 + lVar36 + 0x60 + 8) = uVar18;
            puVar4 = (undefined8 *)(lVar31 + 0x60 + lVar36);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined8 *)(pbVar33 + lVar36 + 0x70) = *(undefined8 *)(lVar31 + 0x70 + lVar36);
            puVar4 = (undefined8 *)(lVar31 + 0x78 + lVar36);
            uVar18 = puVar4[1];
            *(undefined8 *)(pbVar33 + lVar36 + 0x78) = *puVar4;
            *(undefined8 *)(pbVar33 + lVar36 + 0x78 + 8) = uVar18;
            pbVar28 = pbVar33 + lVar36 + 0x88;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 0;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28 = pbVar33 + lVar36 + 0x98;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            puVar22 = (undefined4 *)(lVar31 + 0x88 + lVar36);
            uVar10 = puVar22[1];
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            pbVar28 = pbVar33 + lVar36 + 0x88;
            *(undefined4 *)pbVar28 = *puVar22;
            *(undefined4 *)(pbVar28 + 4) = uVar10;
            *(undefined4 *)(pbVar28 + 8) = uVar11;
            *(undefined4 *)(pbVar28 + 0xc) = uVar12;
            *(undefined8 *)(pbVar33 + lVar36 + 0x98) = *(undefined8 *)(lVar31 + 0x98 + lVar36);
            puVar4 = (undefined8 *)(lVar31 + 0x88 + lVar36);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined8 *)(lVar31 + 0x98 + lVar36) = 0;
            *(undefined2 *)(pbVar33 + lVar36 + 0xa0) = *(undefined2 *)(lVar31 + 0xa0 + lVar36);
            lVar3 = lVar31 + lVar36;
            lVar36 = lVar36 + 0xa8;
          } while (lVar3 + 0xa8 != lVar7);
          do {
            func_0x0d4c3180(lVar31);
            lVar31 = lVar31 + 0xa8;
          } while (lVar31 != lVar7);
          lVar31 = *(long *)puStack_2f8;
          puVar26 = puStack_2a0;
        }
        *(byte **)(puVar21 + 0x36) = pbVar33;
        *(uint **)(puVar21 + 0x38) = puVar24;
        lVar7 = *(long *)(puVar21 + 0x3a);
        *(long **)(puVar21 + 0x3a) = plStack_360;
        if (lVar31 != 0) {
          func_0x0412a280(lVar31,lVar7 - lVar31);
        }
        *(uint **)(puVar21 + 0x38) = puVar24;
        pbVar33 = *(byte **)puVar27;
        bVar5 = *pbVar33;
        puVar27 = puStack_380;
        goto joined_r0x0d3f6902;
      }
      if (uVar35 < 0x186186186186187) {
        plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 0xa8);
        if (plVar19 == (long *)0x0) {
          func_0x0eec74c0(uVar35 * 0xa8,0);
          plVar19 = (long *)0x0;
        }
        goto LAB_0d3f6710;
      }
LAB_0d3f8261:
      puStack_358 = puStack_2f8;
      FUN_04882eb0();
LAB_0d3f8266:
      FUN_04882eb0();
      goto LAB_0d3f826b;
    }
  }
  func_0x0d4c7640();
LAB_0d3f827a:
  uStack_398 = func_0x0d454300();
  if ((*pbVar33 & 1) != 0) {
    func_0x0412a280(*(long *)(puVar26 + 6),*(ulong *)(puVar26 + 2) & 0xfffffffffffffffe);
  }
  func_0x0d454470(&plStack_378);
  LOCK();
  lVar31 = *(long *)puStack_380;
  *(long *)puStack_380 = *(long *)puStack_380 + -1;
  UNLOCK();
  if (lVar31 == 0) {
    (**(code **)(*(long *)puStack_390 + 0x10))(puStack_390);
    func_0x0412c2d0(puStack_390);
  }
  func_0x0d4527e0(puVar21);
  func_0x0d452810(puVar21);
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if (plStack_1b8 != (long *)0x0) {
    (*(code *)plStack_1b8[1])(&plStack_1b8);
  }
  if ((bStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,
                    CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,bStack_320))) &
                    0xfffffffffffffffe);
  }
  do {
    uStack_398 = func_0x0eee2d70(uStack_398);
    puVar21 = puStack_380;
    LOCK();
    lVar31 = *(long *)puStack_330;
    *(long *)puStack_330 = *(long *)puStack_330 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*(long *)puStack_380 + 0x10))(puStack_380);
      func_0x0412c2d0(puVar21);
    }
    func_0x0d4c4640(puVar26);
    func_0x0d4c4670(puVar26);
  } while (plStack_1f8 == (long *)0x0);
  (*(code *)plStack_1f8[1])(&plStack_1f8);
  func_0x0eee2d70(uStack_398);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



/* ---- referenced strings ----
 * 0x1494d5d  <any array element>
 */
