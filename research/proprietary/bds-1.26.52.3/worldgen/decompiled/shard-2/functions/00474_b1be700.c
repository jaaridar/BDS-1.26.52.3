/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb2be700 (ELF vaddr 0xb1be700)
 * Label: caller-of-callee
 * Body:  [[0b2be700, 0b2c04ba] [0b2c04c0, 0b2c0524] [0b2c0530, 0b2c0c55] [0b2c0c60, 0b2c0c9c] [0b2c0ca0, 0b2c0f6c] [0b2c190d, 0b2c199b]]
 * Ghidra: FUN_0b2be700
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b2be700(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 **ppuVar25;
  byte *pbVar26;
  long *plVar27;
  long lVar28;
  byte *pbVar29;
  undefined4 *puVar30;
  ulong uVar31;
  long lVar32;
  bool bVar33;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined4 uStack_2af;
  undefined3 uStack_2ab;
  byte *pbStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  byte *pbStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 uStack_268;
  undefined2 uStack_267;
  undefined1 uStack_265;
  undefined4 uStack_264;
  undefined1 uStack_260;
  undefined4 uStack_25f;
  undefined3 uStack_25b;
  long lStack_258;
  uint *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  ulong uStack_208;
  long *plStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar14 = *param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
  }
  func_0x0b2c19a0(uVar14,plVar15,0,&UNK_01384311,0);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  uVar14 = *param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
  }
  func_0x0b2c19a0(uVar14,plVar15,4,&UNK_012307cd,100);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  uVar14 = *param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
  }
  func_0x0b2c19a0(uVar14,plVar15,8,&UNK_014a2555,5);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  uVar14 = *param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
  }
  func_0x0b2c21f0(uVar14,0x10,&UNK_012fe288);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  uVar14 = *param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
  }
  func_0x0b2c21f0(uVar14,0x28,&UNK_014a2579);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  uVar14 = *param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
  }
  uStack_265 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25f = 0;
  uStack_25b = 0;
  lStack_258 = 0;
  uStack_270 = 0x6d617414;
  uStack_26c = 0x76655f65;
  uStack_268 = 0x65;
  uStack_267 = 0x746e;
  lStack_278 = 0x58307f4190f41553;
  uStack_1f0 = 0x40;
  uStack_240 = 0x40;
  lStack_1f8 = 0;
  puStack_248 = (undefined8 *)&UNK_0f2a2f48;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_2c8 = puStack_248;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0f2a2d78;
  puStack_248 = (undefined8 *)0x0;
  uStack_2c0._0_4_ = (undefined4)uStack_240;
  uStack_2c0._4_4_ = uStack_240._4_4_;
  plVar11[4] = (long)&UNK_0f2ccd78;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  func_0x04aa75f0(plVar11 + 0xe,&uStack_1a8,&UNK_01254d89);
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar27 = plVar11 + 0x11;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0xffffffff;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[4] = (long)&UNK_0f2a2dc8;
  plVar11[0x2e] = 0;
  plVar11[0x2f] = 0;
  if (puStack_2c8 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_2c8)(&puStack_2c8,plVar11 + 0x2e);
    puVar12 = puStack_2c8;
  }
  puStack_2c8 = (undefined8 *)0x0;
  plVar11[0x2e] = (long)puVar12;
  puStack_250 = (uint *)(plVar11 + 0x12);
  if (plVar27 == (long *)&DAT_0f551ef8) {
    plVar11[0x15] = 0;
  }
  else {
    if ((*puStack_250 & 1) == 0) {
      if ((_DAT_0f551f00 & 1) == 0) {
        plVar11[0x14] = _DAT_0f551f10;
        uVar8 = uRam000000000f551f0c;
        uVar7 = _DAT_0f551f08;
        uVar6 = uRam000000000f551f04;
        *puStack_250 = _DAT_0f551f00;
        *(undefined4 *)((long)plVar11 + 0x94) = uVar6;
        *(undefined4 *)(plVar11 + 0x13) = uVar7;
        *(undefined4 *)((long)plVar11 + 0x9c) = uVar8;
      }
      else {
        func_0x04885070(puStack_250,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
      }
    }
    else {
      bVar33 = (_DAT_0f551f00 & 1) != 0;
      lVar28 = 0xf551f01;
      if (bVar33) {
        lVar28 = _DAT_0f551f10;
      }
      uVar23 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
      if (bVar33) {
        uVar23 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
      }
      func_0x04885120(puStack_250,lVar28,uVar23);
    }
    plVar11[0x11] = _DAT_0f551ef8;
    plVar11[0x15] = 0;
    if (puStack_2c8 != (undefined8 *)0x0) {
      (*(code *)puStack_2c8[1])(&puStack_2c8);
    }
  }
  plVar17 = plVar11 + 1;
  if (puStack_248 != (undefined8 *)0x0) {
    (*(code *)puStack_248[1])(&puStack_248);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  pbStack_280 = (byte *)param_1;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0f2a2ea8;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0f2a2ef8;
  puVar12[0xe] = plVar11 + 4;
  puVar12[0xf] = plVar11;
  LOCK();
  plVar11[1] = plVar11[1] + 1;
  UNLOCK();
  uStack_2c0._0_4_ = (uint)puVar12;
  uStack_2c0._4_4_ = (undefined4)((ulong)puVar12 >> 0x20);
  puStack_2c8 = puVar12 + 4;
  puVar13 = (undefined4 *)func_0x0b368b80(uVar14,&lStack_278);
  plVar16 = *(long **)(puVar13 + 0x24);
  if (plVar16 < *(long **)(puVar13 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar27) {
      if ((*puStack_250 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_250 + 4);
        lVar28 = *(long *)(puStack_250 + 2);
        plVar16[1] = *(long *)puStack_250;
        plVar16[2] = lVar28;
      }
      else {
        func_0x04885070(plVar16 + 1,plVar11[0x14],plVar11[0x13]);
      }
    }
    *plVar16 = *plVar27;
    plVar16[5] = (long)(puVar12 + 4);
    plVar16[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar13 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x0b36a970(puVar13 + 0x22,plVar27,&puStack_2c8);
  }
  pbVar18 = pbStack_280;
  *(long **)(puVar13 + 0x24) = plVar16;
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar27 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar27 = *plVar27 + 1;
    UNLOCK();
  }
  plVar27 = (long *)plVar11[0xf];
  *(undefined4 *)(plVar11 + 0xe) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x74) = uVar7;
  *(undefined4 *)(plVar11 + 0xf) = uVar8;
  *(undefined4 *)((long)plVar11 + 0x7c) = uVar9;
  if (plVar27 != (long *)0x0) {
    LOCK();
    plVar16 = plVar27 + 1;
    lVar28 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      FUN_0412c2d0(plVar27);
    }
  }
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar27 = (long *)CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
  if (plVar27 != (long *)0x0) {
    LOCK();
    plVar16 = plVar27 + 1;
    lVar28 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      FUN_0412c2d0(plVar27);
    }
  }
  LOCK();
  lVar28 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0412c2d0(plVar11);
    LOCK();
    lVar28 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0412c2d0(plVar11);
  }
  if (lStack_1f8 != 0) {
    (**(code **)(lStack_1f8 + 8))(&lStack_1f8);
  }
  if ((uStack_270 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260)),
                    CONCAT44(uStack_26c,uStack_270) & 0xfffffffffffffffe);
  }
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  uStack_2ab = 0;
  pbStack_2a8 = (byte *)0x0;
  uStack_2c0._0_4_ = CONCAT31((int3)_DAT_01343e3d,0x28);
  uStack_2c0._5_3_ = (undefined3)_UNK_01343e41;
  uStack_2c0._4_4_ = CONCAT31(uStack_2c0._5_3_,(char)((uint)_DAT_01343e3d >> 0x18));
  uStack_2b8._1_3_ = (undefined3)_UNK_01343e45;
  uStack_2b8._0_4_ = CONCAT31(uStack_2b8._1_3_,(char)((uint)_UNK_01343e41 >> 0x18));
  uStack_2b8._5_3_ = (undefined3)_UNK_01343e49;
  uStack_2b8._4_4_ = CONCAT31(uStack_2b8._5_3_,(char)((uint)_UNK_01343e45 >> 0x18));
  uStack_2b0 = (undefined1)((uint)_UNK_01343e49 >> 0x18);
  uStack_2af = 0x736d6574;
  puStack_2c8 = (undefined8 *)0x345ada5d62e9224c;
  uStack_b0 = 0;
  puStack_b8 = &UNK_0f2a3808;
  uVar14 = func_0x0b2c2970(*(undefined8 *)pbVar18,&puStack_2c8,&puStack_b8);
  if (puStack_b8 != (undefined *)0x0) {
    (**(code **)(puStack_b8 + 8))(&puStack_b8);
  }
  if (((uint)uStack_2c0 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_2ab,CONCAT41(uStack_2af,uStack_2b0)),
                    CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0) & 0xfffffffffffffffe);
  }
  uStack_130 = 0;
  puStack_138 = (undefined8 *)&UNK_0f2a3a70;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f2a3830;
  puStack_2c8 = (undefined8 *)0x0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  if (puStack_138 == (undefined8 *)0x0) {
    puStack_2c8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_138)(&puStack_138,&puStack_2c8);
    puStack_2c8 = puStack_138;
  }
  puStack_138 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&puStack_248,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar11 = plVar15 + 0x11;
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
  plVar15[4] = (long)&UNK_0f2a3880;
  ppuVar25 = (undefined8 **)(plVar15 + 0x2e);
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  *(undefined1 *)(plVar15 + 0x36) = 0;
  if (ppuVar25 != &puStack_2c8) {
    if (puStack_2c8 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_2c8)(&puStack_2c8,ppuVar25);
      puVar12 = puStack_2c8;
    }
    puStack_2c8 = (undefined8 *)0x0;
    *ppuVar25 = puVar12;
  }
  plVar27 = plVar15 + 4;
  puVar1 = (uint *)(plVar15 + 0x12);
  if (plVar11 != (long *)&DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552120;
        uVar8 = uRam000000000f55211c;
        uVar7 = _DAT_0f552118;
        uVar6 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar6;
        *(undefined4 *)(plVar15 + 0x13) = uVar7;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar8;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar33 = (_DAT_0f552110 & 1) != 0;
      lVar28 = 0xf552111;
      if (bVar33) {
        lVar28 = _DAT_0f552120;
      }
      uVar23 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar33) {
        uVar23 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar28,uVar23);
    }
  }
  plVar17 = plVar15 + 1;
  plVar15[0x11] = _DAT_0f552108;
  plVar15[0x15] = 0;
  if (puStack_2c8 != (undefined8 *)0x0) {
    (*(code *)puStack_2c8[1])(&puStack_2c8);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0f2a3978;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0f2a39c8;
  puVar12[0xe] = plVar27;
  puVar12[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  uStack_2c0._0_4_ = (uint)puVar12;
  uStack_2c0._4_4_ = (undefined4)((ulong)puVar12 >> 0x20);
  puStack_2c8 = puVar12 + 4;
  puVar13 = (undefined4 *)func_0x0b376660(uVar14);
  plVar16 = *(long **)(puVar13 + 0x24);
  if (plVar16 < *(long **)(puVar13 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar11) {
      if ((*puVar1 & 1) == 0) {
        plVar16[3] = plVar15[0x14];
        lVar28 = plVar15[0x13];
        plVar16[1] = *(long *)puVar1;
        plVar16[2] = lVar28;
      }
      else {
        func_0x04885070(plVar16 + 1,plVar15[0x14],plVar15[0x13]);
      }
    }
    *plVar16 = *plVar11;
    plVar16[5] = (long)(puVar12 + 4);
    plVar16[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar13 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x0b3799a0(puVar13 + 0x22,plVar11,&puStack_2c8);
  }
  *(long **)(puVar13 + 0x24) = plVar16;
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar11 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar11 = *plVar11 + 1;
    UNLOCK();
  }
  plVar11 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar6;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar7;
  *(undefined4 *)(plVar15 + 0xf) = uVar8;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar9;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar16 = plVar11 + 1;
    lVar28 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0412c2d0(plVar11);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar11 = (long *)CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar16 = plVar11 + 1;
    lVar28 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0412c2d0(plVar11);
    }
  }
  LOCK();
  lVar28 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0412c2d0(plVar15);
    LOCK();
    lVar28 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0412c2d0(plVar15);
  }
  if (puStack_138 != (undefined8 *)0x0) {
    (*(code *)puStack_138[1])(&puStack_138);
  }
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_1a0 = 0x6d65746908;
  uStack_1a8 = 0xe9d7e07ed48376a8;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_240 = 0;
  puStack_248 = (undefined8 *)&UNK_0f2a3198;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_2c8 = puStack_248;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f2a2f70;
  puStack_248 = (undefined8 *)0x0;
  uStack_2c0._0_4_ = (undefined4)uStack_240;
  uStack_2c0._4_4_ = uStack_240._4_4_;
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
  func_0x04aa75f0(plVar15 + 0xe,&lStack_278,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
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
  plVar15[4] = (long)&UNK_0f2a2fc0;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (puStack_2c8 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_2c8)(&puStack_2c8,plVar15 + 0x2e);
    puVar12 = puStack_2c8;
  }
  puStack_2c8 = (undefined8 *)0x0;
  plVar15[0x2e] = (long)puVar12;
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_265 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25f = 0;
  uStack_25b = 0;
  lStack_278 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  lStack_258 = 0;
  func_0x0412f5e0(&uStack_270,&UNK_01495880,0x23);
  lStack_278 = -0x2c95045791d6b522;
  pbVar18 = (byte *)(plVar15 + 0x12);
  if ((*(byte *)(plVar15 + 0x12) & 1) != 0) {
    func_0x0412a280(plVar15[0x14],plVar15[0x12] & 0xfffffffffffffffe);
  }
  plVar15[0x14] = CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260));
  *(uint *)pbVar18 = uStack_270;
  *(undefined4 *)((long)plVar15 + 0x94) = uStack_26c;
  *(uint *)(plVar15 + 0x13) = CONCAT13(uStack_265,CONCAT21(uStack_267,uStack_268));
  *(undefined4 *)((long)plVar15 + 0x9c) = uStack_264;
  plVar15[0x11] = lStack_278;
  plVar15[0x15] = 0;
  if (puStack_2c8 != (undefined8 *)0x0) {
    (*(code *)puStack_2c8[1])(&puStack_2c8);
  }
  plVar11 = plVar15 + 1;
  if (puStack_248 != (undefined8 *)0x0) {
    (*(code *)puStack_248[1])(&puStack_248);
  }
  LOCK();
  *plVar11 = *plVar11 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0f2a30a0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0f2a30f0;
  puVar12[0xe] = plVar15 + 4;
  puVar12[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  uStack_2c0._0_4_ = (uint)puVar12;
  uStack_2c0._4_4_ = (undefined4)((ulong)puVar12 >> 0x20);
  puStack_2c8 = puVar12 + 4;
  puVar13 = (undefined4 *)func_0x0b36eab0(plVar27,&uStack_1a8);
  plVar16 = plVar15 + 0x11;
  plVar17 = *(long **)(puVar13 + 0x24);
  if (plVar17 < *(long **)(puVar13 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar16) {
      if ((*pbVar18 & 1) == 0) {
        plVar17[3] = plVar15[0x14];
        lVar28 = plVar15[0x13];
        plVar17[1] = *(long *)pbVar18;
        plVar17[2] = lVar28;
      }
      else {
        func_0x04885070(plVar17 + 1,plVar15[0x14],plVar15[0x13]);
      }
    }
    *plVar17 = *plVar16;
    plVar17[5] = (long)(puVar12 + 4);
    plVar17[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar13 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x0b370c80(puVar13 + 0x22,plVar16,&puStack_2c8);
  }
  *(long **)(puVar13 + 0x24) = plVar17;
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar6;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar7;
  *(undefined4 *)(plVar15 + 0xf) = uVar8;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar9;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    lVar28 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar17 = (long *)CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    lVar28 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar28 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0412c2d0(plVar15);
    LOCK();
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0412c2d0(plVar15);
  }
  if (lStack_1f8 != 0) {
    (**(code **)(lStack_1f8 + 8))(&lStack_1f8);
  }
  if ((uStack_1a0 & 1) != 0) {
    func_0x0412a280(uStack_190,uStack_1a0 & 0xfffffffffffffffe);
  }
  uStack_25b = 0;
  lStack_258 = 0;
  uStack_270 = CONCAT31((int3)_DAT_01318715,0x28);
  uStack_26c._1_3_ = (undefined3)_UNK_01318719;
  uStack_26c = CONCAT31(uStack_26c._1_3_,(char)((uint)_DAT_01318715 >> 0x18));
  uStack_268 = (undefined1)((uint)_UNK_01318719 >> 0x18);
  uStack_267 = (undefined2)_UNK_0131871d;
  uStack_265 = (undefined1)((uint)_UNK_0131871d >> 0x10);
  uStack_264._1_3_ = (undefined3)_UNK_01318721;
  uStack_264 = CONCAT31(uStack_264._1_3_,(char)((uint)_UNK_0131871d >> 0x18));
  uStack_260 = (undefined1)((uint)_UNK_01318721 >> 0x18);
  uStack_25f = 0x646f6d5f;
  lStack_278 = 0x3728818f39fcdea0;
  uStack_1f0 = 0x20;
  uStack_240 = 0x20;
  lStack_1f8 = 0;
  puStack_248 = (undefined8 *)&UNK_0f2a3390;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_2c8 = puStack_248;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f2a31c0;
  puStack_248 = (undefined8 *)0x0;
  uStack_2c0._0_4_ = (undefined4)uStack_240;
  uStack_2c0._4_4_ = uStack_240._4_4_;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_1a8,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar11 = plVar15 + 0x11;
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
  plVar15[4] = (long)&UNK_0f2a3210;
  plVar15[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar15 + 0x2f) = 1;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  if (puStack_2c8 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_2c8)(&puStack_2c8,plVar15 + 0x30);
    puVar12 = puStack_2c8;
  }
  puStack_2c8 = (undefined8 *)0x0;
  plVar15[0x30] = (long)puVar12;
  puVar1 = (uint *)(plVar15 + 0x12);
  if (plVar11 == (long *)&DAT_0f552078) {
    plVar15[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552090;
        uVar8 = uRam000000000f55208c;
        uVar7 = _DAT_0f552088;
        uVar6 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar6;
        *(undefined4 *)(plVar15 + 0x13) = uVar7;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar8;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar33 = (_DAT_0f552080 & 1) != 0;
      lVar28 = 0xf552081;
      if (bVar33) {
        lVar28 = _DAT_0f552090;
      }
      uVar23 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar33) {
        uVar23 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar1,lVar28,uVar23);
    }
    plVar15[0x11] = _DAT_0f552078;
    plVar15[0x15] = 0;
    if (puStack_2c8 != (undefined8 *)0x0) {
      (*(code *)puStack_2c8[1])(&puStack_2c8);
    }
  }
  plVar17 = plVar15 + 1;
  if (puStack_248 != (undefined8 *)0x0) {
    (*(code *)puStack_248[1])(&puStack_248);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0f2a32f0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0f2a3340;
  puVar12[0xe] = plVar15 + 4;
  puVar12[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  uStack_2c0._0_4_ = (uint)puVar12;
  uStack_2c0._4_4_ = (undefined4)((ulong)puVar12 >> 0x20);
  puStack_2c8 = puVar12 + 4;
  puVar13 = (undefined4 *)func_0x0b36eab0(plVar27,&lStack_278);
  plVar27 = *(long **)(puVar13 + 0x24);
  if (plVar27 < *(long **)(puVar13 + 0x26)) {
    plVar27[2] = 0;
    plVar27[3] = 0;
    *plVar27 = 0;
    plVar27[1] = 0;
    plVar27[4] = 0;
    if (plVar27 != plVar11) {
      if ((*puVar1 & 1) == 0) {
        plVar27[3] = plVar15[0x14];
        lVar28 = plVar15[0x13];
        plVar27[1] = *(long *)puVar1;
        plVar27[2] = lVar28;
      }
      else {
        func_0x04885070(plVar27 + 1,plVar15[0x14],plVar15[0x13]);
      }
    }
    *plVar27 = *plVar11;
    plVar27[5] = (long)(puVar12 + 4);
    plVar27[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar27 = plVar27 + 7;
    *(long **)(puVar13 + 0x24) = plVar27;
  }
  else {
    plVar27 = (long *)func_0x0b370c80(puVar13 + 0x22,plVar11,&puStack_2c8);
  }
  pbVar18 = pbStack_280;
  *(long **)(puVar13 + 0x24) = plVar27;
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar11 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar11 = *plVar11 + 1;
    UNLOCK();
  }
  plVar11 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar6;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar7;
  *(undefined4 *)(plVar15 + 0xf) = uVar8;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar9;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar27 = plVar11 + 1;
    lVar28 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0412c2d0(plVar11);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar11 = (long *)CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar27 = plVar11 + 1;
    lVar28 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0412c2d0(plVar11);
    }
  }
  LOCK();
  lVar28 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0412c2d0(plVar15);
    LOCK();
    lVar28 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0412c2d0(plVar15);
  }
  if (lStack_1f8 != 0) {
    (**(code **)(lStack_1f8 + 8))(&lStack_1f8);
  }
  ppuVar25 = (undefined8 **)(plVar15 + 0x26);
  if ((uStack_270 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260)),
                    CONCAT44(uStack_26c,uStack_270) & 0xfffffffffffffffe);
  }
  puStack_2c8 = (undefined8 *)&UNK_0f2a33a8;
  uStack_2c0._0_4_ = 0x20;
  uStack_2c0._4_4_ = 0;
  uStack_2b8._0_4_ = 0;
  if (ppuVar25 != &puStack_2c8) {
    if ((*ppuVar25 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar25)[1])(ppuVar25), puStack_2c8 != (undefined8 *)0x0)) {
      (*(code *)*puStack_2c8)(&puStack_2c8,ppuVar25);
    }
    else {
      puStack_2c8 = (undefined8 *)0x0;
    }
    *ppuVar25 = puStack_2c8;
  }
  uVar14 = *(undefined8 *)pbVar18;
  uStack_2b8._0_4_ = 0;
  uStack_2b8._4_4_ = 0;
  uStack_2b0 = 0;
  uStack_2af = 0;
  uStack_2ab = 0;
  puStack_2c8 = (undefined8 *)0x0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  pbStack_2a8 = (byte *)0x0;
  func_0x0412f5e0(&uStack_2c0,&UNK_0134ea8a,0x21);
  puStack_2c8 = (undefined8 *)0x90a39d660d4bb493;
  uStack_f0 = 0;
  puStack_f8 = &UNK_0f2a3a88;
  uVar14 = func_0x0b2c2970(uVar14,&puStack_2c8,&puStack_f8);
  if (puStack_f8 != (undefined *)0x0) {
    (**(code **)(puStack_f8 + 8))(&puStack_f8);
  }
  if (((uint)uStack_2c0 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_2ab,CONCAT41(uStack_2af,uStack_2b0)),
                    CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0) & 0xfffffffffffffffe);
  }
  uStack_170 = 0;
  puStack_178 = (undefined8 *)&UNK_0f2a3c98;
  pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (pbVar18 == (byte *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  pbVar18[8] = 0;
  pbVar18[9] = 0;
  pbVar18[10] = 0;
  pbVar18[0xb] = 0;
  pbVar18[0xc] = 0;
  pbVar18[0xd] = 0;
  pbVar18[0xe] = 0;
  pbVar18[0xf] = 0;
  pbVar18[0x10] = 0;
  pbVar18[0x11] = 0;
  pbVar18[0x12] = 0;
  pbVar18[0x13] = 0;
  pbVar18[0x14] = 0;
  pbVar18[0x15] = 0;
  pbVar18[0x16] = 0;
  pbVar18[0x17] = 0;
  *(undefined **)pbVar18 = &UNK_0f2a3ab0;
  puStack_2c8 = (undefined8 *)0x0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  if (puStack_178 == (undefined8 *)0x0) {
    puStack_2c8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_178)(&puStack_178,&puStack_2c8);
    puStack_2c8 = puStack_178;
  }
  puStack_178 = (undefined8 *)0x0;
  *(undefined **)(pbVar18 + 0x20) = &UNK_0f2ccd78;
  pbVar18[0x28] = 0;
  pbVar18[0x29] = 0;
  pbVar18[0x2a] = 0;
  pbVar18[0x2b] = 0;
  pbVar18[0x2c] = 0;
  pbVar18[0x2d] = 0;
  pbVar18[0x2e] = 0;
  pbVar18[0x2f] = 0;
  pbVar18[0x30] = 0;
  pbVar18[0x31] = 0;
  pbVar18[0x32] = 0;
  pbVar18[0x33] = 0;
  pbVar18[0x34] = 0;
  pbVar18[0x35] = 0;
  pbVar18[0x36] = 0;
  pbVar18[0x37] = 0;
  pbVar18[0x38] = 0;
  pbVar18[0x39] = 0;
  pbVar18[0x3a] = 0;
  pbVar18[0x3b] = 0;
  pbVar18[0x3c] = 0;
  pbVar18[0x3d] = 0;
  pbVar18[0x3e] = 0;
  pbVar18[0x3f] = 0;
  pbVar18[0x40] = 0;
  pbVar18[0x41] = 0;
  pbVar18[0x42] = 0;
  pbVar18[0x43] = 0;
  pbVar18[0x44] = 0;
  pbVar18[0x45] = 0;
  pbVar18[0x46] = 0;
  pbVar18[0x47] = 0;
  pbVar18[0x48] = 0;
  pbVar18[0x49] = 0;
  pbVar18[0x4a] = 0;
  pbVar18[0x4b] = 0;
  pbVar18[0x4c] = 0;
  pbVar18[0x4d] = 0;
  pbVar18[0x4e] = 0;
  pbVar18[0x4f] = 0;
  pbVar18[0x50] = 0;
  pbVar18[0x51] = 0;
  pbVar18[0x52] = 0;
  pbVar18[0x53] = 0;
  pbVar18[0x54] = 0;
  pbVar18[0x55] = 0;
  pbVar18[0x56] = 0;
  pbVar18[0x57] = 0;
  pbVar18[0x58] = 0;
  pbVar18[0x59] = 0;
  pbVar18[0x5a] = 0;
  pbVar18[0x5b] = 0;
  pbVar18[0x5c] = 0;
  pbVar18[0x5d] = 0;
  pbVar18[0x5e] = 0;
  pbVar18[0x5f] = 0;
  pbVar18[0x60] = 0;
  pbVar18[0x61] = 0;
  pbVar18[0x62] = 0;
  pbVar18[99] = 0;
  pbVar18[100] = 0;
  pbVar18[0x65] = 0;
  pbVar18[0x66] = 0;
  pbVar18[0x67] = 0;
  pbVar18[0x68] = 0;
  func_0x04aa75f0(pbVar18 + 0x70,&puStack_248,&UNK_01254d89);
  pbVar18[0x80] = 0;
  pbVar29 = pbVar18 + 0x88;
  pbVar18[0x88] = 0;
  pbVar18[0x89] = 0;
  pbVar18[0x8a] = 0;
  pbVar18[0x8b] = 0;
  pbVar18[0x8c] = 0;
  pbVar18[0x8d] = 0;
  pbVar18[0x8e] = 0;
  pbVar18[0x8f] = 0;
  pbVar18[0x90] = 0;
  pbVar18[0x91] = 0;
  pbVar18[0x92] = 0;
  pbVar18[0x93] = 0;
  pbVar18[0x94] = 0;
  pbVar18[0x95] = 0;
  pbVar18[0x96] = 0;
  pbVar18[0x97] = 0;
  pbVar18[0x98] = 0;
  pbVar18[0x99] = 0;
  pbVar18[0x9a] = 0;
  pbVar18[0x9b] = 0;
  pbVar18[0x9c] = 0;
  pbVar18[0x9d] = 0;
  pbVar18[0x9e] = 0;
  pbVar18[0x9f] = 0;
  pbVar18[0xa0] = 0;
  pbVar18[0xa1] = 0;
  pbVar18[0xa2] = 0;
  pbVar18[0xa3] = 0;
  pbVar18[0xa4] = 0;
  pbVar18[0xa5] = 0;
  pbVar18[0xa6] = 0;
  pbVar18[0xa7] = 0;
  pbVar18[0xa8] = 0;
  pbVar18[0xa9] = 0;
  pbVar18[0xaa] = 0;
  pbVar18[0xab] = 0;
  pbVar18[0xac] = 0;
  pbVar18[0xad] = 0;
  pbVar18[0xae] = 0;
  pbVar18[0xaf] = 0;
  pbVar18[0xb0] = 0;
  pbVar18[0xb1] = 0;
  pbVar18[0xb2] = 0;
  pbVar18[0xb3] = 0;
  pbVar18[0xb4] = 0;
  pbVar18[0xb5] = 0;
  pbVar18[0xb6] = 0;
  pbVar18[0xb7] = 0;
  pbVar18[0xb8] = 0xff;
  pbVar18[0xb9] = 0xff;
  pbVar18[0xba] = 0xff;
  pbVar18[0xbb] = 0xff;
  pbVar18[0xbc] = 0;
  pbVar18[0xbd] = 0;
  pbVar18[0xbe] = 0;
  pbVar18[0xbf] = 0;
  pbVar18[0x130] = 0;
  pbVar18[0x131] = 0;
  pbVar18[0x132] = 0;
  pbVar18[0x133] = 0;
  pbVar18[0x134] = 0;
  pbVar18[0x135] = 0;
  pbVar18[0x136] = 0;
  pbVar18[0x137] = 0;
  pbVar18[0x138] = 0;
  pbVar18[0x139] = 0;
  pbVar18[0x13a] = 0;
  pbVar18[0x13b] = 0;
  pbVar18[0x13c] = 0;
  pbVar18[0x13d] = 0;
  pbVar18[0x13e] = 0;
  pbVar18[0x13f] = 0;
  pbVar18[0xc0] = 0;
  pbVar18[0xc1] = 0;
  pbVar18[0xc2] = 0;
  pbVar18[0xc3] = 0;
  pbVar18[0xc4] = 0;
  pbVar18[0xc5] = 0;
  pbVar18[0xc6] = 0;
  pbVar18[199] = 0;
  pbVar18[200] = 0;
  pbVar18[0xc9] = 0;
  pbVar18[0xca] = 0;
  pbVar18[0xcb] = 0;
  pbVar18[0xcc] = 0;
  pbVar18[0xcd] = 0;
  pbVar18[0xce] = 0;
  pbVar18[0xcf] = 0;
  pbVar18[0xd0] = 0;
  pbVar18[0xd1] = 0;
  pbVar18[0xd2] = 0;
  pbVar18[0xd3] = 0;
  pbVar18[0xd4] = 0;
  pbVar18[0xd5] = 0;
  pbVar18[0xd6] = 0;
  pbVar18[0xd7] = 0;
  pbVar18[0xd8] = 0;
  pbVar18[0xd9] = 0;
  pbVar18[0xda] = 0;
  pbVar18[0xdb] = 0;
  pbVar18[0xdc] = 0;
  pbVar18[0xdd] = 0;
  pbVar18[0xde] = 0;
  pbVar18[0xdf] = 0;
  pbVar18[0xe0] = 0;
  pbVar18[0xe1] = 0;
  pbVar18[0xe2] = 0;
  pbVar18[0xe3] = 0;
  pbVar18[0xe4] = 0;
  pbVar18[0xe5] = 0;
  pbVar18[0xe6] = 0;
  pbVar18[0xe7] = 0;
  pbVar18[0xe8] = 0;
  pbVar18[0xe9] = 0;
  pbVar18[0xea] = 0;
  pbVar18[0xeb] = 0;
  pbVar18[0xec] = 0;
  pbVar18[0xed] = 0;
  pbVar18[0xee] = 0;
  pbVar18[0xef] = 0;
  pbVar18[0xf0] = 0;
  pbVar18[0xf1] = 0;
  pbVar18[0xf2] = 0;
  pbVar18[0xf3] = 0;
  pbVar18[0xf4] = 0;
  pbVar18[0xf5] = 0;
  pbVar18[0xf6] = 0;
  pbVar18[0xf7] = 0;
  pbVar18[0xf8] = 0;
  pbVar18[0xf9] = 0;
  pbVar18[0xfa] = 0;
  pbVar18[0xfb] = 0;
  pbVar18[0xfc] = 0;
  pbVar18[0xfd] = 0;
  pbVar18[0xfe] = 0;
  pbVar18[0xff] = 0;
  *(undefined **)(pbVar18 + 0x20) = &UNK_0f2a3b00;
  ppuVar25 = (undefined8 **)(pbVar18 + 0x170);
  pbVar18[0x170] = 0;
  pbVar18[0x171] = 0;
  pbVar18[0x172] = 0;
  pbVar18[0x173] = 0;
  pbVar18[0x174] = 0;
  pbVar18[0x175] = 0;
  pbVar18[0x176] = 0;
  pbVar18[0x177] = 0;
  pbVar18[0x178] = 0;
  pbVar18[0x179] = 0;
  pbVar18[0x17a] = 0;
  pbVar18[0x17b] = 0;
  pbVar18[0x17c] = 0;
  pbVar18[0x17d] = 0;
  pbVar18[0x17e] = 0;
  pbVar18[0x17f] = 0;
  pbVar18[0x1b0] = 0;
  if (ppuVar25 != &puStack_2c8) {
    if (puStack_2c8 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_2c8)(&puStack_2c8,ppuVar25);
      puVar12 = puStack_2c8;
    }
    puStack_2c8 = (undefined8 *)0x0;
    *ppuVar25 = puVar12;
  }
  puVar1 = (uint *)(pbVar18 + 0x90);
  if (pbVar29 != &DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        *(long *)(pbVar18 + 0xa0) = _DAT_0f552120;
        uVar8 = uRam000000000f55211c;
        uVar7 = _DAT_0f552118;
        uVar6 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)(pbVar18 + 0x94) = uVar6;
        *(undefined4 *)(pbVar18 + 0x98) = uVar7;
        *(undefined4 *)(pbVar18 + 0x9c) = uVar8;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar33 = (_DAT_0f552110 & 1) != 0;
      lVar28 = 0xf552111;
      if (bVar33) {
        lVar28 = _DAT_0f552120;
      }
      uVar23 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar33) {
        uVar23 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar28,uVar23);
    }
  }
  pbVar26 = pbVar18 + 8;
  *(long *)(pbVar18 + 0x88) = _DAT_0f552108;
  pbVar18[0xa8] = 0;
  pbVar18[0xa9] = 0;
  pbVar18[0xaa] = 0;
  pbVar18[0xab] = 0;
  pbVar18[0xac] = 0;
  pbVar18[0xad] = 0;
  pbVar18[0xae] = 0;
  pbVar18[0xaf] = 0;
  if (puStack_2c8 != (undefined8 *)0x0) {
    (*(code *)puStack_2c8[1])(&puStack_2c8);
  }
  LOCK();
  *(long *)pbVar26 = *(long *)pbVar26 + 1;
  UNLOCK();
  pbStack_280 = pbVar26;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0f2a3bf8;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0f2a3c48;
  puVar12[0xe] = pbVar18 + 0x20;
  puVar12[0xf] = pbVar18;
  LOCK();
  *(long *)(pbVar18 + 8) = *(long *)(pbVar18 + 8) + 1;
  UNLOCK();
  uStack_2c0._0_4_ = (uint)puVar12;
  uStack_2c0._4_4_ = (undefined4)((ulong)puVar12 >> 0x20);
  puStack_2c8 = puVar12 + 4;
  puVar13 = (undefined4 *)func_0x0b376660(uVar14);
  pbVar26 = *(byte **)(puVar13 + 0x24);
  if (pbVar26 < *(byte **)(puVar13 + 0x26)) {
    pbVar26[0x10] = 0;
    pbVar26[0x11] = 0;
    pbVar26[0x12] = 0;
    pbVar26[0x13] = 0;
    pbVar26[0x14] = 0;
    pbVar26[0x15] = 0;
    pbVar26[0x16] = 0;
    pbVar26[0x17] = 0;
    pbVar26[0x18] = 0;
    pbVar26[0x19] = 0;
    pbVar26[0x1a] = 0;
    pbVar26[0x1b] = 0;
    pbVar26[0x1c] = 0;
    pbVar26[0x1d] = 0;
    pbVar26[0x1e] = 0;
    pbVar26[0x1f] = 0;
    pbVar26[0] = 0;
    pbVar26[1] = 0;
    pbVar26[2] = 0;
    pbVar26[3] = 0;
    pbVar26[4] = 0;
    pbVar26[5] = 0;
    pbVar26[6] = 0;
    pbVar26[7] = 0;
    pbVar26[8] = 0;
    pbVar26[9] = 0;
    pbVar26[10] = 0;
    pbVar26[0xb] = 0;
    pbVar26[0xc] = 0;
    pbVar26[0xd] = 0;
    pbVar26[0xe] = 0;
    pbVar26[0xf] = 0;
    pbVar26[0x20] = 0;
    pbVar26[0x21] = 0;
    pbVar26[0x22] = 0;
    pbVar26[0x23] = 0;
    pbVar26[0x24] = 0;
    pbVar26[0x25] = 0;
    pbVar26[0x26] = 0;
    pbVar26[0x27] = 0;
    if (pbVar26 != pbVar29) {
      if ((*puVar1 & 1) == 0) {
        *(undefined8 *)(pbVar26 + 0x18) = *(undefined8 *)(pbVar18 + 0xa0);
        uVar14 = *(undefined8 *)(pbVar18 + 0x98);
        *(undefined8 *)(pbVar26 + 8) = *(undefined8 *)puVar1;
        *(undefined8 *)(pbVar26 + 0x10) = uVar14;
      }
      else {
        func_0x04885070(pbVar26 + 8,*(undefined8 *)(pbVar18 + 0xa0),*(undefined8 *)(pbVar18 + 0x98))
        ;
      }
    }
    *(undefined8 *)pbVar26 = *(undefined8 *)pbVar29;
    *(undefined8 **)(pbVar26 + 0x28) = puVar12 + 4;
    *(undefined8 **)(pbVar26 + 0x30) = puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    pbVar26 = pbVar26 + 0x38;
    *(byte **)(puVar13 + 0x24) = pbVar26;
  }
  else {
    pbVar26 = (byte *)func_0x0b3799a0(puVar13 + 0x22,pbVar29,&puStack_2c8);
  }
  *(byte **)(puVar13 + 0x24) = pbVar26;
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = *(long **)(pbVar18 + 0x78);
  *(undefined4 *)(pbVar18 + 0x70) = uVar6;
  *(undefined4 *)(pbVar18 + 0x74) = uVar7;
  *(undefined4 *)(pbVar18 + 0x78) = uVar8;
  *(undefined4 *)(pbVar18 + 0x7c) = uVar9;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  pbVar18[0x80] = *(byte *)((long)puVar13 + 0xa1);
  plVar15 = (long *)CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar28 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar28 = *(long *)pbStack_280;
  *(long *)pbStack_280 = *(long *)pbStack_280 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*(long *)pbVar18 + 0x10))(pbVar18);
    FUN_0412c2d0(pbVar18);
    LOCK();
    lVar28 = *(long *)pbStack_280;
    *(long *)pbStack_280 = *(long *)pbStack_280 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *(long *)pbStack_280;
    *(long *)pbStack_280 = *(long *)pbStack_280 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*(long *)pbVar18 + 0x10))(pbVar18);
    FUN_0412c2d0(pbVar18);
  }
  if (puStack_178 != (undefined8 *)0x0) {
    (*(code *)puStack_178[1])(&puStack_178);
  }
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_265 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25f = 0;
  uStack_25b = 0;
  lStack_258 = 0;
  uStack_270 = 0x65746908;
  uStack_26c = 0x6d;
  lStack_278 = -0x16281f812b7c8958;
  uStack_70 = 0;
  uStack_240 = 0;
  lStack_78 = 0;
  puStack_248 = (undefined8 *)&UNK_0f2a3cb0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_2c8 = puStack_248;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f2a33d0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  puStack_248 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&lStack_1f8,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
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
  plVar15[4] = (long)&UNK_0f2a3420;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (puStack_2c8 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_2c8)(&puStack_2c8,plVar15 + 0x2e);
    puVar12 = puStack_2c8;
  }
  puStack_2c8 = (undefined8 *)0x0;
  plVar15[0x2e] = (long)puVar12;
  uStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  func_0x0412f5e0(&uStack_1f0,&UNK_01495880,0x23);
  lStack_1f8 = -0x2c95045791d6b522;
  pbStack_1b0 = (byte *)(plVar15 + 0x12);
  if ((*(byte *)(plVar15 + 0x12) & 1) != 0) {
    func_0x0412a280(plVar15[0x14],plVar15[0x12] & 0xfffffffffffffffe);
  }
  plVar15[0x14] = lStack_1e0;
  *(undefined4 *)pbStack_1b0 = (undefined4)uStack_1f0;
  *(undefined4 *)((long)plVar15 + 0x94) = uStack_1f0._4_4_;
  *(undefined4 *)(plVar15 + 0x13) = (undefined4)uStack_1e8;
  *(undefined4 *)((long)plVar15 + 0x9c) = uStack_1e8._4_4_;
  plVar15[0x11] = lStack_1f8;
  plVar15[0x15] = 0;
  if (puStack_2c8 != (undefined8 *)0x0) {
    (*(code *)puStack_2c8[1])(&puStack_2c8);
  }
  plVar11 = plVar15 + 1;
  if (puStack_248 != (undefined8 *)0x0) {
    (*(code *)puStack_248[1])(&puStack_248);
  }
  LOCK();
  *plVar11 = *plVar11 + 1;
  UNLOCK();
  plStack_180 = plVar11;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  lVar20 = lStack_258;
  lVar28 = lStack_278;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0f2a3500;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[4] = (long)&UNK_0f2a3550;
  plVar11[0xe] = (long)(plVar15 + 4);
  plVar11[0xf] = (long)plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  plStack_200 = plVar11 + 1;
  uStack_208 = *(ulong *)(pbVar18 + 0xd8);
  uVar23 = *(ulong *)(pbVar18 + 0xe0);
  pbVar29 = pbVar18;
  puStack_250 = (uint *)plVar11;
  if (uStack_208 != uVar23) {
    if ((uStack_270 & 1) == 0) {
      pbVar29 = (byte *)(ulong)((byte)uStack_270 >> 1);
      pbStack_280 = (byte *)((long)&uStack_270 + 1);
    }
    else {
      pbVar29 = (byte *)CONCAT44(uStack_264,CONCAT13(uStack_265,CONCAT21(uStack_267,uStack_268)));
      pbStack_280 = (byte *)CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260));
    }
    lVar22 = uStack_208 + 0x19;
    do {
      if (*(long *)(lVar22 + -9) == lVar28) {
        if ((*(long **)(lVar22 + 0x17) == &lStack_278) && (lVar22 + -9 == lVar20)) {
LAB_0b2c09b0:
          puVar13 = (undefined4 *)(lVar22 + -0x19);
          goto LAB_0b2c09b9;
        }
        bVar3 = *(byte *)(lVar22 + -1);
        if ((bVar3 & 1) == 0) {
          pbVar26 = (byte *)(ulong)(bVar3 >> 1);
        }
        else {
          pbVar26 = *(byte **)(lVar22 + 7);
        }
        if (pbVar26 == pbVar29) {
          lVar32 = lVar22;
          if ((bVar3 & 1) != 0) {
            lVar32 = *(long *)(lVar22 + 0xf);
          }
          iVar10 = func_0x0eee3000(lVar32,pbStack_280,pbVar29);
          if (iVar10 == 0) {
            *(long **)(lVar22 + 0x17) = &lStack_278;
            lStack_258 = lVar22 + -9;
            goto LAB_0b2c09b0;
          }
        }
      }
      *(undefined8 *)(lVar22 + 0x17) = 0;
      uVar31 = lVar22 + 0x8f;
      lVar22 = lVar22 + 0xa8;
    } while (uVar31 != uVar23);
  }
  if (uVar23 < *(ulong *)(pbVar18 + 0xe8)) {
    func_0x0b374160(uVar23);
    plVar27 = (long *)(uVar23 + 0xa8);
    *(long **)(pbVar18 + 0xe0) = plVar27;
LAB_0b2c0807:
    *(long **)(pbVar18 + 0xe0) = plVar27;
    func_0x0b63b6d0(plVar27[-0x15],&lStack_278);
    lVar28 = *(long *)(pbVar18 + 0xe0);
    *(byte *)(lVar28 + -7) = pbVar18[0x80];
    if ((long *)(lVar28 + -0x98) != &lStack_278) {
      puVar1 = (uint *)(lVar28 + -0x90);
      if ((*(byte *)puVar1 & 1) == 0) {
        if ((uStack_270 & 1) == 0) {
          *(ulong *)(lVar28 + -0x80) = CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260));
          *puVar1 = uStack_270;
          *(undefined4 *)(lVar28 + -0x8c) = uStack_26c;
          *(uint *)(lVar28 + -0x88) = CONCAT13(uStack_265,CONCAT21(uStack_267,uStack_268));
          *(undefined4 *)(lVar28 + -0x84) = uStack_264;
        }
        else {
          func_0x04885070(puVar1,CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260)),
                          CONCAT44(uStack_264,CONCAT13(uStack_265,CONCAT21(uStack_267,uStack_268))))
          ;
        }
      }
      else {
        bVar33 = (uStack_270 & 1) != 0;
        lVar20 = (long)&uStack_270 + 1;
        if (bVar33) {
          lVar20 = CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260));
        }
        uVar23 = (ulong)((byte)uStack_270 >> 1);
        if (bVar33) {
          uVar23 = CONCAT44(uStack_264,CONCAT13(uStack_265,CONCAT21(uStack_267,uStack_268)));
        }
        func_0x04885120(puVar1,lVar20,uVar23);
      }
    }
    *(long *)(lVar28 + -0x98) = lStack_278;
    *(undefined8 *)(lVar28 + -0x78) = 0;
    FUN_04aa9390(&puStack_2c8,&uStack_270,pbVar18[0x80]);
    lVar28 = *(long *)(pbVar18 + 0xe0);
    func_0x04167a70(lVar28 + -0x70,&puStack_2c8);
    *(long **)(lVar28 + -0x68) = uStack_2c0;
    *(long **)(lVar28 + -0x60) = uStack_2b8;
    *(ulong *)(lVar28 + -0x58) = CONCAT35(uStack_2ab,CONCAT41(uStack_2af,uStack_2b0));
    *(byte **)(lVar28 + -0x50) = pbStack_2a8;
    uVar6 = (undefined4)uStack_2a0;
    uVar7 = uStack_2a0._4_4_;
    uVar8 = (undefined4)uStack_298;
    uVar9 = uStack_298._4_4_;
    uStack_2a0 = 0;
    uStack_298 = (byte *)0x0;
    plVar27 = *(long **)(lVar28 + -0x40);
    *(undefined4 *)(lVar28 + -0x48) = uVar6;
    *(undefined4 *)(lVar28 + -0x44) = uVar7;
    *(undefined4 *)(lVar28 + -0x40) = uVar8;
    *(undefined4 *)(lVar28 + -0x3c) = uVar9;
    if (plVar27 != (long *)0x0) {
      LOCK();
      plVar17 = plVar27 + 1;
      lVar20 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        FUN_0412c2d0(plVar27);
      }
    }
    pbVar29 = uStack_298;
    *(undefined8 *)(lVar28 + -0x38) = uStack_290;
    if (uStack_298 != (byte *)0x0) {
      LOCK();
      pbVar26 = uStack_298 + 8;
      lVar28 = *(long *)pbVar26;
      *(long *)pbVar26 = *(long *)pbVar26 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*(long *)uStack_298 + 0x10))(uStack_298);
        FUN_0412c2d0(pbVar29);
      }
    }
    FUN_04167a40(&puStack_2c8);
    lVar28 = *(long *)(pbVar18 + 0xe0);
    *(undefined1 *)(lVar28 + -8) = 0;
    puVar13 = (undefined4 *)(lVar28 + -0xa8);
LAB_0b2c09b9:
    plVar17 = plVar15 + 0x11;
    plVar27 = plVar11 + 4;
    plVar11 = *(long **)(puVar13 + 0x24);
    if (plVar11 < *(long **)(puVar13 + 0x26)) {
      plVar11[2] = 0;
      plVar11[3] = 0;
      *plVar11 = 0;
      plVar11[1] = 0;
      plVar11[4] = 0;
      if (plVar11 != plVar17) {
        if ((*pbStack_1b0 & 1) == 0) {
          plVar11[3] = *(long *)(pbStack_1b0 + 0x10);
          lVar28 = *(long *)(pbStack_1b0 + 8);
          plVar11[1] = *(long *)pbStack_1b0;
          plVar11[2] = lVar28;
        }
        else {
          func_0x04885070(plVar11 + 1,plVar15[0x14],plVar15[0x13]);
        }
      }
      *plVar11 = *plVar17;
      plVar11[5] = (long)plVar27;
      plVar11[6] = (long)puStack_250;
      LOCK();
      *(long *)((long)puStack_250 + 8) = *(long *)((long)puStack_250 + 8) + 1;
      UNLOCK();
      plVar11 = plVar11 + 7;
      *(long **)(puVar13 + 0x24) = plVar11;
      goto LAB_0b2c0cf7;
    }
    lVar28 = (long)plVar11 - *(long *)(puVar13 + 0x22);
    uVar23 = (lVar28 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar23 < 0x492492492492493) {
      lVar20 = (long)*(long **)(puVar13 + 0x26) - *(long *)(puVar13 + 0x22) >> 3;
      uVar31 = lVar20 * -0x2492492492492492;
      if (uVar23 < uVar31) {
        uVar23 = uVar31;
      }
      pbVar18 = (byte *)(puVar13 + 0x22);
      if (0x249249249249248 < (ulong)(lVar20 * 0x6db6db6db6db6db7)) {
        uVar23 = 0x492492492492492;
      }
      pbStack_2a8 = pbVar18;
      if (uVar23 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar23) goto LAB_0b2c0f34;
        puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 0x38);
        if (puVar12 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar23 * 0x38,0);
          puVar12 = (undefined8 *)0x0;
        }
      }
      plVar11 = (long *)((long)puVar12 + lVar28);
      puVar24 = puVar12 + uVar23 * 7;
      uStack_2b0 = SUB81(puVar24,0);
      uStack_2af = (undefined4)((ulong)puVar24 >> 8);
      uStack_2ab = (undefined3)((ulong)puVar24 >> 0x28);
      puVar24 = (undefined8 *)((long)puVar12 + lVar28 + 0x10);
      *puVar24 = 0;
      puVar24[1] = 0;
      *(undefined8 *)((long)puVar12 + lVar28) = 0;
      ((undefined8 *)((long)puVar12 + lVar28))[1] = 0;
      *(undefined8 *)((long)puVar12 + lVar28 + 0x20) = 0;
      uStack_2c0 = plVar11;
      uStack_2b8 = plVar11;
      puStack_2c8 = puVar12;
      if (plVar11 != plVar17) {
        puVar30 = (undefined4 *)((long)puVar12 + lVar28 + 8);
        if ((*pbStack_1b0 & 1) == 0) {
          *(undefined8 *)((long)puVar12 + lVar28 + 0x18) = *(undefined8 *)(pbStack_1b0 + 0x10);
          uVar6 = *(undefined4 *)(pbStack_1b0 + 4);
          uVar7 = *(undefined4 *)(pbStack_1b0 + 8);
          uVar8 = *(undefined4 *)(pbStack_1b0 + 0xc);
          *puVar30 = *(undefined4 *)pbStack_1b0;
          *(undefined4 *)((long)puVar12 + lVar28 + 0xc) = uVar6;
          *(undefined4 *)((long)puVar12 + lVar28 + 0x10) = uVar7;
          *(undefined4 *)((long)puVar12 + lVar28 + 0x14) = uVar8;
        }
        else {
          func_0x04885070(puVar30,plVar15[0x14],plVar15[0x13]);
        }
      }
      *plVar11 = *plVar17;
      plVar11[5] = (long)plVar27;
      plVar11[6] = (long)puStack_250;
      LOCK();
      *(long *)((long)puStack_250 + 8) = *(long *)((long)puStack_250 + 8) + 1;
      UNLOCK();
      plVar11 = uStack_2b8 + 7;
      puVar24 = *(undefined8 **)(puVar13 + 0x22);
      puVar4 = *(undefined8 **)(puVar13 + 0x24);
      puVar12 = (undefined8 *)((long)uStack_2c0 + ((long)puVar24 - (long)puVar4));
      puVar19 = puVar12;
      puVar21 = puVar24;
      if ((long)puVar24 - (long)puVar4 != 0) {
        do {
          puVar19[2] = 0;
          puVar19[3] = 0;
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar19[4] = 0;
          puVar19[3] = puVar21[3];
          uVar14 = puVar21[2];
          puVar19[1] = puVar21[1];
          puVar19[2] = uVar14;
          *(undefined2 *)(puVar21 + 1) = 0;
          *puVar19 = *puVar21;
          uVar14 = puVar21[6];
          puVar19[5] = puVar21[5];
          puVar19[6] = uVar14;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21 = puVar21 + 7;
          puVar19 = puVar19 + 7;
        } while (puVar21 != puVar4);
        do {
          plVar27 = (long *)puVar24[6];
          uStack_2b8 = plVar11;
          if (plVar27 == (long *)0x0) {
LAB_0b2c0c84:
            bVar3 = *(byte *)(puVar24 + 1);
          }
          else {
            LOCK();
            plVar11 = plVar27 + 1;
            lVar28 = *plVar11;
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (lVar28 != 0) goto LAB_0b2c0c84;
            (**(code **)(*plVar27 + 0x10))(plVar27);
            FUN_0412c2d0(plVar27);
            bVar3 = *(byte *)(puVar24 + 1);
          }
          plVar11 = uStack_2b8;
          if ((bVar3 & 1) != 0) {
            func_0x0412a280(puVar24[3],puVar24[1] & 0xfffffffffffffffe);
            plVar11 = uStack_2b8;
          }
          puVar24 = puVar24 + 7;
        } while (puVar24 != puVar4);
        puVar24 = *(undefined8 **)pbVar18;
      }
      *(undefined8 **)(puVar13 + 0x22) = puVar12;
      *(long **)(puVar13 + 0x24) = plVar11;
      lVar28 = *(long *)(puVar13 + 0x26);
      *(ulong *)(puVar13 + 0x26) = CONCAT35(uStack_2ab,CONCAT41(uStack_2af,uStack_2b0));
      uStack_2b8 = plVar11;
      if (puVar24 != (undefined8 *)0x0) {
        func_0x0412a280(puVar24,lVar28 - (long)puVar24);
      }
LAB_0b2c0cf7:
      plVar27 = plStack_200;
      *(long **)(puVar13 + 0x24) = plVar11;
      uVar6 = *puVar13;
      uVar7 = puVar13[1];
      uVar8 = puVar13[2];
      uVar9 = puVar13[3];
      if (*(long *)(puVar13 + 2) != 0) {
        LOCK();
        plVar11 = (long *)(*(long *)(puVar13 + 2) + 8);
        *plVar11 = *plVar11 + 1;
        UNLOCK();
      }
      plVar11 = (long *)plVar15[0xf];
      *(undefined4 *)(plVar15 + 0xe) = uVar6;
      *(undefined4 *)((long)plVar15 + 0x74) = uVar7;
      *(undefined4 *)(plVar15 + 0xf) = uVar8;
      *(undefined4 *)((long)plVar15 + 0x7c) = uVar9;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar17 = plVar11 + 1;
        lVar28 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          FUN_0412c2d0(plVar11);
        }
      }
      puVar1 = puStack_250;
      *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
      LOCK();
      lVar28 = *plVar27;
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*(long *)puStack_250 + 0x10))(puStack_250);
        FUN_0412c2d0(puVar1);
        LOCK();
        lVar28 = *plStack_180;
        *plStack_180 = *plStack_180 + -1;
        UNLOCK();
        plVar11 = plStack_180;
      }
      else {
        LOCK();
        lVar28 = *plStack_180;
        *plStack_180 = *plStack_180 + -1;
        UNLOCK();
        plVar11 = plStack_180;
      }
      plStack_180 = plVar11;
      if (lVar28 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        FUN_0412c2d0(plVar15);
        LOCK();
        lVar28 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        FUN_0412c2d0(plVar15);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_270 & 1) != 0) {
        func_0x0412a280(CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260)),
                        CONCAT44(uStack_26c,uStack_270) & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    lVar28 = uVar23 - uStack_208;
    plVar27 = (long *)((lVar28 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((long *)0x186186186186186 < plVar27) goto LAB_0b2c0f3e;
    pbVar26 = pbVar18 + 0xd8;
    lVar20 = (long)(*(ulong *)(pbVar18 + 0xe8) - uStack_208) >> 3;
    plVar17 = (long *)(lVar20 * -0x6186186186186186);
    if (plVar27 < plVar17) {
      plVar27 = plVar17;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar20 * -0x30c30c30c30c30c3)) {
      plVar27 = (long *)0x186186186186186;
    }
    pbStack_2a8 = pbVar26;
    if (plVar27 == (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
LAB_0b2c0629:
      uStack_2b8 = (long *)(lVar28 + (long)puVar12);
      puVar24 = puVar12 + (long)plVar27 * 0x15;
      uStack_2b0 = SUB81(puVar24,0);
      uStack_2af = (undefined4)((ulong)puVar24 >> 8);
      uStack_2ab = (undefined3)((ulong)puVar24 >> 0x28);
      puStack_2c8 = puVar12;
      uStack_2c0 = uStack_2b8;
      func_0x0b374160(uStack_2b8);
      plVar27 = uStack_2b8 + 0x15;
      lVar28 = *(long *)(pbVar18 + 0xd8);
      lVar20 = *(long *)(pbVar18 + 0xe0);
      lVar22 = (lVar28 - lVar20) + (long)uStack_2c0;
      if (lVar28 != lVar20) {
        lVar32 = 0;
        pbStack_280 = pbVar26;
        do {
          uVar14 = ((undefined8 *)(lVar28 + lVar32))[1];
          *(undefined8 *)(lVar22 + lVar32) = *(undefined8 *)(lVar28 + lVar32);
          ((undefined8 *)(lVar22 + lVar32))[1] = uVar14;
          *(undefined8 *)(lVar28 + lVar32) = 0;
          ((undefined8 *)(lVar28 + lVar32))[1] = 0;
          puVar12 = (undefined8 *)(lVar22 + 0x20 + lVar32);
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12 = (undefined8 *)(lVar22 + 0x10 + lVar32);
          *puVar12 = 0;
          puVar12[1] = 0;
          *(undefined8 *)(lVar22 + 0x30 + lVar32) = 0;
          *(undefined8 *)(lVar22 + 0x28 + lVar32) = *(undefined8 *)(lVar28 + 0x28 + lVar32);
          puVar13 = (undefined4 *)(lVar28 + 0x18 + lVar32);
          uVar6 = puVar13[1];
          uVar7 = puVar13[2];
          uVar8 = puVar13[3];
          puVar30 = (undefined4 *)(lVar22 + 0x18 + lVar32);
          *puVar30 = *puVar13;
          puVar30[1] = uVar6;
          puVar30[2] = uVar7;
          puVar30[3] = uVar8;
          *(undefined2 *)(lVar28 + 0x18 + lVar32) = 0;
          *(undefined8 *)(lVar22 + 0x10 + lVar32) = *(undefined8 *)(lVar28 + 0x10 + lVar32);
          func_0x04167a20(lVar22 + lVar32 + 0x38,lVar28 + lVar32 + 0x38);
          puVar12 = (undefined8 *)(lVar28 + 0x40 + lVar32);
          uVar14 = puVar12[1];
          puVar24 = (undefined8 *)(lVar22 + 0x40 + lVar32);
          *puVar24 = *puVar12;
          puVar24[1] = uVar14;
          puVar12 = (undefined8 *)(lVar28 + 0x50 + lVar32);
          uVar14 = puVar12[1];
          puVar24 = (undefined8 *)(lVar22 + 0x50 + lVar32);
          *puVar24 = *puVar12;
          puVar24[1] = uVar14;
          puVar12 = (undefined8 *)(lVar28 + 0x60 + lVar32);
          uVar14 = puVar12[1];
          puVar24 = (undefined8 *)(lVar22 + 0x60 + lVar32);
          *puVar24 = *puVar12;
          puVar24[1] = uVar14;
          puVar12 = (undefined8 *)(lVar28 + 0x60 + lVar32);
          *puVar12 = 0;
          puVar12[1] = 0;
          *(undefined8 *)(lVar22 + 0x70 + lVar32) = *(undefined8 *)(lVar28 + 0x70 + lVar32);
          puVar12 = (undefined8 *)(lVar28 + 0x78 + lVar32);
          uVar14 = puVar12[1];
          puVar24 = (undefined8 *)(lVar22 + 0x78 + lVar32);
          *puVar24 = *puVar12;
          puVar24[1] = uVar14;
          puVar12 = (undefined8 *)(lVar22 + 0x88 + lVar32);
          *puVar12 = 0;
          puVar12[1] = 0;
          *(undefined8 *)(lVar22 + 0x98 + lVar32) = 0;
          puVar13 = (undefined4 *)(lVar28 + 0x88 + lVar32);
          uVar6 = puVar13[1];
          uVar7 = puVar13[2];
          uVar8 = puVar13[3];
          puVar30 = (undefined4 *)(lVar22 + 0x88 + lVar32);
          *puVar30 = *puVar13;
          puVar30[1] = uVar6;
          puVar30[2] = uVar7;
          puVar30[3] = uVar8;
          *(undefined8 *)(lVar22 + 0x98 + lVar32) = *(undefined8 *)(lVar28 + 0x98 + lVar32);
          puVar12 = (undefined8 *)(lVar28 + 0x88 + lVar32);
          *puVar12 = 0;
          puVar12[1] = 0;
          *(undefined8 *)(lVar28 + 0x98 + lVar32) = 0;
          *(undefined2 *)(lVar22 + 0xa0 + lVar32) = *(undefined2 *)(lVar28 + 0xa0 + lVar32);
          lVar2 = lVar28 + lVar32;
          lVar32 = lVar32 + 0xa8;
        } while (lVar2 + 0xa8 != lVar20);
        do {
          func_0x0b3742e0(lVar28);
          lVar28 = lVar28 + 0xa8;
        } while (lVar28 != lVar20);
        lVar28 = *(long *)pbStack_280;
      }
      *(long *)(pbVar18 + 0xd8) = lVar22;
      *(long **)(pbVar18 + 0xe0) = plVar27;
      lVar20 = *(long *)(pbVar18 + 0xe8);
      *(ulong *)(pbVar18 + 0xe8) = CONCAT35(uStack_2ab,CONCAT41(uStack_2af,uStack_2b0));
      if (lVar28 != 0) {
        func_0x0412a280(lVar28,lVar20 - lVar28);
      }
      goto LAB_0b2c0807;
    }
    if (plVar27 < (long *)0x186186186186187) {
      puVar12 = (undefined8 *)
                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar27 * 0xa8);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0((long)plVar27 * 0xa8,0);
        puVar12 = (undefined8 *)0x0;
      }
      goto LAB_0b2c0629;
    }
LAB_0b2c0f34:
    func_0x04882eb0();
  }
  func_0x0b374500();
LAB_0b2c0f3e:
  uVar14 = func_0x0b3742d0();
  if ((*pbVar29 & 1) != 0) {
    func_0x0412a280(plVar27[3],plVar27[1] & 0xfffffffffffffffe);
  }
  func_0x0b374440(&puStack_2c8);
  puVar1 = puStack_250;
  LOCK();
  lVar28 = *plStack_200;
  *plStack_200 = *plStack_200 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*(long *)puStack_250 + 0x10))(puStack_250);
    FUN_0412c2d0(puVar1);
  }
  func_0x0b372780(plVar15);
  func_0x0b3727b0(plVar15);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_270 & 1) == 0) {
    func_0x0eee2d70(uVar14);
  }
  func_0x0412a280(CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_260)),
                  CONCAT44(uStack_26c,uStack_270) & 0xfffffffffffffffe);
  func_0x0eee2d70(uVar14);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}



/* ---- referenced strings ----
 * 0x1318715  temperMod|temper_mod
 * 0x1343e3d  feedItems|feed_items
 */
