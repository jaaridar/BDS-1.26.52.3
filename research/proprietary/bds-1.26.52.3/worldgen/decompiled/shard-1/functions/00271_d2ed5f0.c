/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3ed5f0 (ELF vaddr 0xd2ed5f0)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3ed5f0, 0d3eee3e] [0d3eee40, 0d3ef44d] [0d3ef450, 0d3ef48d] [0d3ef490, 0d3ef786] [0d3eff02, 0d3eff95]]
 * Ghidra: FUN_0d3ed5f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3ed5f0(undefined8 param_1)

{
  undefined8 **ppuVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  undefined4 *puVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined *puVar33;
  undefined4 *puVar34;
  long *plVar35;
  long lVar36;
  bool bVar37;
  undefined1 uStack_3f1;
  byte *pbStack_3f0;
  undefined8 *puStack_3e8;
  byte bStack_3e0;
  undefined4 uStack_3df;
  undefined4 uStack_3db;
  undefined4 uStack_3d7;
  undefined4 uStack_3d3;
  undefined1 uStack_3cf;
  undefined1 uStack_3ce;
  undefined2 uStack_3cd;
  undefined3 uStack_3cb;
  byte *pbStack_3c8;
  long *plStack_3a0;
  undefined8 uStack_398;
  byte bStack_390;
  undefined4 uStack_38f;
  undefined4 uStack_38b;
  undefined4 uStack_387;
  undefined4 uStack_383;
  undefined3 uStack_37f;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  byte *pbStack_370;
  byte *pbStack_368;
  uint *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  ulong auStack_318 [4];
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_383 = 0;
  uStack_37f = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_398 = 0xae8ea2e4ee1dc1c3;
  bStack_390 = 0x18;
  uStack_38f = 0x63616c70;
  uStack_38b = 0x625f7365;
  uStack_387 = 0x6b636f6c;
  uStack_70 = 0;
  uStack_350 = 0;
  lStack_78 = 0;
  puStack_358 = (undefined8 *)&UNK_0f46de90;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_3e8 = puStack_358;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f465500;
  bStack_3e0 = 0;
  uStack_3df = 0;
  uStack_3db = (uint)uStack_3db._3_1_ << 0x18;
  puStack_358 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_3f1,&UNK_01254d89);
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
  plVar15[4] = (long)&UNK_0f465550;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (puStack_3e8 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3e8)(&puStack_3e8,plVar15 + 0x2e);
    puVar16 = puStack_3e8;
  }
  plVar19 = plVar15 + 1;
  plVar15[0x2e] = (long)puVar16;
  if (puStack_358 != (undefined8 *)0x0) {
    (*(code *)puStack_358[1])(&puStack_358);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  pbStack_3f0 = (byte *)plVar19;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar19 = plVar15 + 4;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f465630;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f465680;
  puVar16[0xe] = plVar19;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_3e0 = (byte)puVar16;
  uStack_3df = (undefined4)((ulong)puVar16 >> 8);
  uStack_3db._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
  puStack_3e8 = puVar16 + 4;
  plStack_3a0 = (long *)param_1;
  puVar17 = (undefined4 *)func_0x050192a0(param_1,&uStack_398,1);
  plVar35 = plVar15 + 0x11;
  plVar18 = *(long **)(puVar17 + 0x24);
  if (plVar18 < *(long **)(puVar17 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 == plVar35) {
LAB_0d3ed884:
      *plVar18 = *plVar35;
      plVar18[5] = (long)(puVar16 + 4);
      plVar18[6] = (long)puVar16;
LAB_0d3ed8f1:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*(byte *)(plVar15 + 0x12) & 1) == 0) {
        plVar18[3] = plVar15[0x14];
        lVar26 = plVar15[0x13];
        plVar18[1] = plVar15[0x12];
        plVar18[2] = lVar26;
        goto LAB_0d3ed884;
      }
      func_0x04885070(plVar18 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar18 = *plVar35;
      puVar16 = (undefined8 *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      plVar18[5] = (long)puStack_3e8;
      plVar18[6] = CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d3ed8f1;
    }
    plVar18 = plVar18 + 7;
    *(long **)(puVar17 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x0501c9a0(puVar17 + 0x22,plVar35,&puStack_3e8);
  }
  pbVar20 = pbStack_3f0;
  *(long **)(puVar17 + 0x24) = plVar18;
  uVar10 = *puVar17;
  uVar11 = puVar17[1];
  uVar12 = puVar17[2];
  uVar13 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar35 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar35 = *plVar35 + 1;
    UNLOCK();
  }
  plVar35 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar11;
  *(undefined4 *)(plVar15 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar13;
  if (plVar35 != (long *)0x0) {
    LOCK();
    plVar18 = plVar35 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
      func_0x0412c2d0(plVar35);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  plVar35 = (long *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
  if (plVar35 != (long *)0x0) {
    LOCK();
    plVar18 = plVar35 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
      func_0x0412c2d0(plVar35);
    }
  }
  LOCK();
  lVar26 = *(long *)pbVar20;
  *(long *)pbVar20 = *(long *)pbVar20 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar26 = *(long *)pbVar20;
    *(long *)pbVar20 = *(long *)pbVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *(long *)pbVar20;
    *(long *)pbVar20 = *(long *)pbVar20 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_258);
  if ((uStack_258 & 1) != 0) {
    func_0x0412a280(uStack_248,uStack_258 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_37c,CONCAT31(uStack_37f,uStack_383._3_1_)),
                    CONCAT35((undefined3)uStack_38b,CONCAT41(uStack_38f,bStack_390)) &
                    0xfffffffffffffffe);
  }
  uStack_383 = 0;
  uStack_37f = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  bStack_390 = 0x18;
  uStack_38f = 0x72616573;
  uStack_38b = 0x725f6863;
  uStack_387 = 0x65676e61;
  uStack_398 = 0x89a464a97df9e87;
  uStack_b0 = 0;
  uStack_350 = 0;
  lStack_b8 = 0;
  puStack_358 = (undefined8 *)&UNK_0f46dea8;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_3e8 = puStack_358;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f4656e0;
  bStack_3e0 = 0;
  uStack_3df = 0;
  uStack_3db = uStack_3db & 0xff000000;
  puStack_358 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_3f1,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar19 = plVar15 + 0x11;
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
  plVar15[4] = (long)&UNK_0f465730;
  plVar15[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar15 + 0x2f) = 1;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  if (puStack_3e8 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3e8)(&puStack_3e8,plVar15 + 0x30);
    puVar16 = puStack_3e8;
  }
  puStack_3e8 = (undefined8 *)0x0;
  plVar15[0x30] = (long)puVar16;
  puVar2 = (uint *)(plVar15 + 0x12);
  if (plVar19 == (long *)&DAT_0f552078) {
    plVar15[0x15] = 0;
  }
  else {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552090;
        uVar12 = uRam000000000f55208c;
        uVar11 = _DAT_0f552088;
        uVar10 = uRam000000000f552084;
        *puVar2 = _DAT_0f552080;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar10;
        *(undefined4 *)(plVar15 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar37 = (_DAT_0f552080 & 1) != 0;
      lVar26 = 0xf552081;
      if (bVar37) {
        lVar26 = _DAT_0f552090;
      }
      uVar29 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar37) {
        uVar29 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar2,lVar26,uVar29);
    }
    plVar15[0x11] = _DAT_0f552078;
    plVar15[0x15] = 0;
    if (puStack_3e8 != (undefined8 *)0x0) {
      (*(code *)puStack_3e8[1])(&puStack_3e8);
    }
  }
  plVar35 = plVar15 + 1;
  pbStack_3f0 = (byte *)plVar19;
  if (puStack_358 != (undefined8 *)0x0) {
    (*(code *)puStack_358[1])(&puStack_358);
  }
  LOCK();
  *plVar35 = *plVar35 + 1;
  UNLOCK();
  puStack_360 = puVar2;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f465810;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f465860;
  puVar16[0xe] = plVar15 + 4;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_3e0 = (byte)puVar16;
  uStack_3df = (undefined4)((ulong)puVar16 >> 8);
  uStack_3db._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
  puStack_3e8 = puVar16 + 4;
  puVar17 = (undefined4 *)func_0x050192a0(plStack_3a0,&uStack_398,1);
  plVar19 = *(long **)(puVar17 + 0x24);
  if (plVar19 < *(long **)(puVar17 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if ((byte *)plVar19 == pbStack_3f0) {
LAB_0d3eddd9:
      *plVar19 = *(long *)pbStack_3f0;
      plVar19[5] = (long)(puVar16 + 4);
      plVar19[6] = (long)puVar16;
LAB_0d3ede55:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_360 & 1) == 0) {
        plVar19[3] = *(long *)(puStack_360 + 4);
        lVar26 = *(long *)(puStack_360 + 2);
        plVar19[1] = *(long *)puStack_360;
        plVar19[2] = lVar26;
        goto LAB_0d3eddd9;
      }
      func_0x04885070(plVar19 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar19 = *(long *)pbStack_3f0;
      puVar16 = (undefined8 *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      plVar19[5] = (long)puStack_3e8;
      plVar19[6] = CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d3ede55;
    }
    plVar19 = plVar19 + 7;
    *(long **)(puVar17 + 0x24) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x0501c9a0(puVar17 + 0x22,pbStack_3f0,&puStack_3e8);
  }
  plVar18 = plStack_3a0;
  *(long **)(puVar17 + 0x24) = plVar19;
  uVar10 = *puVar17;
  uVar11 = puVar17[1];
  uVar12 = puVar17[2];
  uVar13 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar11;
  *(undefined4 *)(plVar15 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar13;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar4 = plVar19 + 1;
    lVar26 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  plVar19 = (long *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar4 = plVar19 + 1;
    lVar26 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar26 = *plVar35;
  *plVar35 = *plVar35 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar26 = *plVar35;
    *plVar35 = *plVar35 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar35;
    *plVar35 = *plVar35 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  plVar15[0x2e] = 0x4000000001;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  (**(code **)(plVar15[4] + 0x10))(plVar15 + 4,&uStack_278);
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,uStack_278 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_37c,CONCAT31(uStack_37f,uStack_383._3_1_)),
                    CONCAT35((undefined3)uStack_38b,CONCAT41(uStack_38f,bStack_390)) &
                    0xfffffffffffffffe);
  }
  uStack_3cd = 0;
  uStack_3cb = 0;
  pbStack_3c8 = (byte *)0x0;
  bStack_3e0 = 0x24;
  uStack_3df = _DAT_01234c5f;
  uStack_3db = _UNK_01234c63;
  uStack_3d7 = _UNK_01234c67;
  uStack_3d3 = _UNK_01234c6b;
  uStack_3cf = 0x6f;
  uStack_3ce = 0x72;
  puStack_3e8 = (undefined8 *)0x342ea761382a524;
  uStack_170 = 0;
  puStack_178 = &UNK_0f46dec0;
  plVar15 = (long *)func_0x0d3effa0(plVar18,&puStack_3e8,&puStack_178);
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_298);
  if ((uStack_298 & 1) != 0) {
    func_0x0412a280(uStack_288,uStack_298 & 0xfffffffffffffffe);
  }
  if (puStack_178 != (undefined *)0x0) {
    (**(code **)(puStack_178 + 8))(&puStack_178);
  }
  if ((bStack_3e0 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_3cb,
                             CONCAT23(uStack_3cd,
                                      CONCAT12(uStack_3ce,CONCAT11(uStack_3cf,uStack_3d3._3_1_)))),
                    CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0)) &
                    0xfffffffffffffffe);
  }
  uStack_3cb = 0;
  pbStack_3c8 = (byte *)0x0;
  bStack_3e0 = 0x28;
  uStack_3df = _DAT_0136f75b;
  uStack_3db = _UNK_0136f75f;
  uStack_3d7 = _UNK_0136f763;
  uStack_3d3 = _UNK_0136f767;
  uStack_3cf = 0x6c;
  uStack_3ce = 0x69;
  uStack_3cd = 0x676e;
  puStack_3e8 = (undefined8 *)0x5f2012e52755c12b;
  uStack_1b0 = 0;
  puStack_1b8 = &UNK_0f46ded8;
  plVar15 = (long *)func_0x0d3effa0(plVar18,&puStack_3e8,&puStack_1b8);
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_2b8);
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  if (puStack_1b8 != (undefined *)0x0) {
    (**(code **)(puStack_1b8 + 8))(&puStack_1b8);
  }
  if ((bStack_3e0 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_3cb,
                             CONCAT23(uStack_3cd,
                                      CONCAT12(uStack_3ce,CONCAT11(uStack_3cf,uStack_3d3._3_1_)))),
                    CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0)) &
                    0xfffffffffffffffe);
  }
  uStack_3ce = 0;
  uStack_3cd = 0;
  uStack_3cb = 0;
  pbStack_3c8 = (byte *)0x0;
  bStack_3e0 = 0x22;
  uStack_3df = _DAT_014c1102;
  uStack_3db = _UNK_014c1106;
  uStack_3d7 = _UNK_014c110a;
  uStack_3d3 = _UNK_014c110e;
  uStack_3cf = 0x6c;
  puStack_3e8 = (undefined8 *)0xa2b938e166013efe;
  uStack_1f0 = 0;
  puStack_1f8 = &UNK_0f46def0;
  plVar15 = (long *)func_0x0d3effa0(plVar18,&puStack_3e8,&puStack_1f8);
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_2d8);
  if ((uStack_2d8 & 1) != 0) {
    func_0x0412a280(uStack_2c8,uStack_2d8 & 0xfffffffffffffffe);
  }
  if (puStack_1f8 != (undefined *)0x0) {
    (**(code **)(puStack_1f8 + 8))(&puStack_1f8);
  }
  if ((bStack_3e0 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_3cb,
                             CONCAT23(uStack_3cd,
                                      CONCAT12(uStack_3ce,CONCAT11(uStack_3cf,uStack_3d3._3_1_)))),
                    CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0)) &
                    0xfffffffffffffffe);
  }
  uStack_37c = 0;
  uStack_378 = 0;
  bStack_390 = 0x26;
  uStack_38f = _DAT_0129ccf1;
  uStack_38b = _UNK_0129ccf5;
  uStack_387 = _UNK_0129ccf9;
  uStack_383 = CONCAT13(100,(int3)_UNK_0129ccfd);
  uStack_37f = 0x676e69;
  uStack_398 = 0xa77dca87930cd6b5;
  uStack_f0 = 0;
  uStack_350 = 0;
  lStack_f8 = 0;
  puStack_358 = (undefined8 *)&UNK_0f46df08;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_3e8 = puStack_358;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f465aa0;
  bStack_3e0 = 0;
  uStack_3df = 0;
  uStack_3db = uStack_3db & 0xff000000;
  puStack_358 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_3f1,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar19 = plVar15 + 0x11;
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
  plVar15[4] = (long)&UNK_0f465af0;
  plVar15[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar15 + 0x2f) = 1;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  if (puStack_3e8 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3e8)(&puStack_3e8,plVar15 + 0x30);
    puVar16 = puStack_3e8;
  }
  puStack_3e8 = (undefined8 *)0x0;
  plVar15[0x30] = (long)puVar16;
  puVar2 = (uint *)(plVar15 + 0x12);
  if (plVar19 == (long *)&DAT_0f552018) {
    plVar15[0x15] = 0;
  }
  else {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552030;
        uVar12 = uRam000000000f55202c;
        uVar11 = _DAT_0f552028;
        uVar10 = uRam000000000f552024;
        *puVar2 = _DAT_0f552020;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar10;
        *(undefined4 *)(plVar15 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar37 = (_DAT_0f552020 & 1) != 0;
      lVar26 = 0xf552021;
      if (bVar37) {
        lVar26 = _DAT_0f552030;
      }
      uVar29 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar37) {
        uVar29 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar2,lVar26,uVar29);
    }
    plVar15[0x11] = _DAT_0f552018;
    plVar15[0x15] = 0;
    if (puStack_3e8 != (undefined8 *)0x0) {
      (*(code *)puStack_3e8[1])(&puStack_3e8);
    }
  }
  plVar35 = plVar15 + 1;
  pbStack_3f0 = (byte *)plVar19;
  if (puStack_358 != (undefined8 *)0x0) {
    (*(code *)puStack_358[1])(&puStack_358);
  }
  LOCK();
  *plVar35 = *plVar35 + 1;
  UNLOCK();
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f465bd0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f465c20;
  puVar16[0xe] = plVar15 + 4;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_3e0 = (byte)puVar16;
  uStack_3df = (undefined4)((ulong)puVar16 >> 8);
  uStack_3db._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
  puStack_3e8 = puVar16 + 4;
  puStack_360 = (uint *)(plVar15 + 4);
  puVar17 = (undefined4 *)func_0x050192a0(plVar18,&uStack_398,1);
  plVar19 = *(long **)(puVar17 + 0x24);
  if (plVar19 < *(long **)(puVar17 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if ((byte *)plVar19 == pbStack_3f0) {
LAB_0d3ee5c0:
      *plVar19 = *(long *)pbStack_3f0;
      plVar19[5] = (long)(puVar16 + 4);
      plVar19[6] = (long)puVar16;
LAB_0d3ee62a:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar2 & 1) == 0) {
        plVar19[3] = plVar15[0x14];
        lVar26 = plVar15[0x13];
        plVar19[1] = *(long *)puVar2;
        plVar19[2] = lVar26;
        goto LAB_0d3ee5c0;
      }
      func_0x04885070(plVar19 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar19 = *(long *)pbStack_3f0;
      puVar16 = (undefined8 *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      plVar19[5] = (long)puStack_3e8;
      plVar19[6] = CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d3ee62a;
    }
    plVar19 = plVar19 + 7;
    *(long **)(puVar17 + 0x24) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x0501c9a0(puVar17 + 0x22,pbStack_3f0,&puStack_3e8);
  }
  *(long **)(puVar17 + 0x24) = plVar19;
  uVar10 = *puVar17;
  uVar11 = puVar17[1];
  uVar12 = puVar17[2];
  uVar13 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar11;
  *(undefined4 *)(plVar15 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar13;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar18 = plVar19 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  plVar19 = (long *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar18 = plVar19 + 1;
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  puVar2 = puStack_360;
  LOCK();
  lVar26 = *plVar35;
  *plVar35 = *plVar35 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar26 = *plVar35;
    *plVar35 = *plVar35 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar35;
    *plVar35 = *plVar35 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  plVar15[0x2e] = _DAT_014e9660;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  (**(code **)(plVar15[4] + 0x10))(puVar2,&uStack_2f8);
  if ((uStack_2f8 & 1) != 0) {
    func_0x0412a280(uStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_37c,CONCAT31(uStack_37f,uStack_383._3_1_)),
                    CONCAT35((undefined3)uStack_38b,CONCAT41(uStack_38f,bStack_390)) &
                    0xfffffffffffffffe);
  }
  uStack_383 = 0;
  uStack_37f = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  bStack_390 = 0x18;
  uStack_38f = 0x5f6e6163;
  uStack_38b = 0x63616c70;
  uStack_387 = 0x6e6f5f65;
  uStack_398 = 0x39f7956dc3cd59d3;
  puStack_238 = (undefined8 *)0x0;
  uStack_230 = 0;
  pbVar20 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar20 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pbVar20[8] = 0;
  pbVar20[9] = 0;
  pbVar20[10] = 0;
  pbVar20[0xb] = 0;
  pbVar20[0xc] = 0;
  pbVar20[0xd] = 0;
  pbVar20[0xe] = 0;
  pbVar20[0xf] = 0;
  pbVar20[0x10] = 0;
  pbVar20[0x11] = 0;
  pbVar20[0x12] = 0;
  pbVar20[0x13] = 0;
  pbVar20[0x14] = 0;
  pbVar20[0x15] = 0;
  pbVar20[0x16] = 0;
  pbVar20[0x17] = 0;
  *(undefined **)pbVar20 = &UNK_0f46df30;
  puStack_3e8 = (undefined8 *)0x0;
  bStack_3e0 = 0;
  uStack_3df = 0;
  uStack_3db = uStack_3db & 0xff000000;
  if (puStack_238 == (undefined8 *)0x0) {
    puStack_3e8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_238)(&puStack_238,&puStack_3e8);
    puStack_3e8 = puStack_238;
  }
  puStack_238 = (undefined8 *)0x0;
  *(undefined **)(pbVar20 + 0x20) = &UNK_0f2ccd78;
  pbVar20[0x28] = 0;
  pbVar20[0x29] = 0;
  pbVar20[0x2a] = 0;
  pbVar20[0x2b] = 0;
  pbVar20[0x2c] = 0;
  pbVar20[0x2d] = 0;
  pbVar20[0x2e] = 0;
  pbVar20[0x2f] = 0;
  pbVar20[0x30] = 0;
  pbVar20[0x31] = 0;
  pbVar20[0x32] = 0;
  pbVar20[0x33] = 0;
  pbVar20[0x34] = 0;
  pbVar20[0x35] = 0;
  pbVar20[0x36] = 0;
  pbVar20[0x37] = 0;
  pbVar20[0x38] = 0;
  pbVar20[0x39] = 0;
  pbVar20[0x3a] = 0;
  pbVar20[0x3b] = 0;
  pbVar20[0x3c] = 0;
  pbVar20[0x3d] = 0;
  pbVar20[0x3e] = 0;
  pbVar20[0x3f] = 0;
  pbVar20[0x40] = 0;
  pbVar20[0x41] = 0;
  pbVar20[0x42] = 0;
  pbVar20[0x43] = 0;
  pbVar20[0x44] = 0;
  pbVar20[0x45] = 0;
  pbVar20[0x46] = 0;
  pbVar20[0x47] = 0;
  pbVar20[0x48] = 0;
  pbVar20[0x49] = 0;
  pbVar20[0x4a] = 0;
  pbVar20[0x4b] = 0;
  pbVar20[0x4c] = 0;
  pbVar20[0x4d] = 0;
  pbVar20[0x4e] = 0;
  pbVar20[0x4f] = 0;
  pbVar20[0x50] = 0;
  pbVar20[0x51] = 0;
  pbVar20[0x52] = 0;
  pbVar20[0x53] = 0;
  pbVar20[0x54] = 0;
  pbVar20[0x55] = 0;
  pbVar20[0x56] = 0;
  pbVar20[0x57] = 0;
  pbVar20[0x58] = 0;
  pbVar20[0x59] = 0;
  pbVar20[0x5a] = 0;
  pbVar20[0x5b] = 0;
  pbVar20[0x5c] = 0;
  pbVar20[0x5d] = 0;
  pbVar20[0x5e] = 0;
  pbVar20[0x5f] = 0;
  pbVar20[0x60] = 0;
  pbVar20[0x61] = 0;
  pbVar20[0x62] = 0;
  pbVar20[99] = 0;
  pbVar20[100] = 0;
  pbVar20[0x65] = 0;
  pbVar20[0x66] = 0;
  pbVar20[0x67] = 0;
  pbVar20[0x68] = 0;
  func_0x04aa75f0(pbVar20 + 0x70,&puStack_358,&UNK_01254d89);
  pbVar20[0x80] = 0;
  pbVar21 = pbVar20 + 0x88;
  pbVar20[0x88] = 0;
  pbVar20[0x89] = 0;
  pbVar20[0x8a] = 0;
  pbVar20[0x8b] = 0;
  pbVar20[0x8c] = 0;
  pbVar20[0x8d] = 0;
  pbVar20[0x8e] = 0;
  pbVar20[0x8f] = 0;
  pbVar20[0x90] = 0;
  pbVar20[0x91] = 0;
  pbVar20[0x92] = 0;
  pbVar20[0x93] = 0;
  pbVar20[0x94] = 0;
  pbVar20[0x95] = 0;
  pbVar20[0x96] = 0;
  pbVar20[0x97] = 0;
  pbVar20[0x98] = 0;
  pbVar20[0x99] = 0;
  pbVar20[0x9a] = 0;
  pbVar20[0x9b] = 0;
  pbVar20[0x9c] = 0;
  pbVar20[0x9d] = 0;
  pbVar20[0x9e] = 0;
  pbVar20[0x9f] = 0;
  pbVar20[0xa0] = 0;
  pbVar20[0xa1] = 0;
  pbVar20[0xa2] = 0;
  pbVar20[0xa3] = 0;
  pbVar20[0xa4] = 0;
  pbVar20[0xa5] = 0;
  pbVar20[0xa6] = 0;
  pbVar20[0xa7] = 0;
  pbVar20[0xa8] = 0;
  pbVar20[0xa9] = 0;
  pbVar20[0xaa] = 0;
  pbVar20[0xab] = 0;
  pbVar20[0xac] = 0;
  pbVar20[0xad] = 0;
  pbVar20[0xae] = 0;
  pbVar20[0xaf] = 0;
  pbVar20[0xb0] = 0;
  pbVar20[0xb1] = 0;
  pbVar20[0xb2] = 0;
  pbVar20[0xb3] = 0;
  pbVar20[0xb4] = 0;
  pbVar20[0xb5] = 0;
  pbVar20[0xb6] = 0;
  pbVar20[0xb7] = 0;
  pbVar20[0xb8] = 0xff;
  pbVar20[0xb9] = 0xff;
  pbVar20[0xba] = 0xff;
  pbVar20[0xbb] = 0xff;
  pbVar20[0xbc] = 0;
  pbVar20[0xbd] = 0;
  pbVar20[0xbe] = 0;
  pbVar20[0xbf] = 0;
  pbVar20[0x130] = 0;
  pbVar20[0x131] = 0;
  pbVar20[0x132] = 0;
  pbVar20[0x133] = 0;
  pbVar20[0x134] = 0;
  pbVar20[0x135] = 0;
  pbVar20[0x136] = 0;
  pbVar20[0x137] = 0;
  pbVar20[0x138] = 0;
  pbVar20[0x139] = 0;
  pbVar20[0x13a] = 0;
  pbVar20[0x13b] = 0;
  pbVar20[0x13c] = 0;
  pbVar20[0x13d] = 0;
  pbVar20[0x13e] = 0;
  pbVar20[0x13f] = 0;
  pbVar20[0xc0] = 0;
  pbVar20[0xc1] = 0;
  pbVar20[0xc2] = 0;
  pbVar20[0xc3] = 0;
  pbVar20[0xc4] = 0;
  pbVar20[0xc5] = 0;
  pbVar20[0xc6] = 0;
  pbVar20[199] = 0;
  pbVar20[200] = 0;
  pbVar20[0xc9] = 0;
  pbVar20[0xca] = 0;
  pbVar20[0xcb] = 0;
  pbVar20[0xcc] = 0;
  pbVar20[0xcd] = 0;
  pbVar20[0xce] = 0;
  pbVar20[0xcf] = 0;
  pbVar20[0xd0] = 0;
  pbVar20[0xd1] = 0;
  pbVar20[0xd2] = 0;
  pbVar20[0xd3] = 0;
  pbVar20[0xd4] = 0;
  pbVar20[0xd5] = 0;
  pbVar20[0xd6] = 0;
  pbVar20[0xd7] = 0;
  pbVar20[0xd8] = 0;
  pbVar20[0xd9] = 0;
  pbVar20[0xda] = 0;
  pbVar20[0xdb] = 0;
  pbVar20[0xdc] = 0;
  pbVar20[0xdd] = 0;
  pbVar20[0xde] = 0;
  pbVar20[0xdf] = 0;
  pbVar20[0xe0] = 0;
  pbVar20[0xe1] = 0;
  pbVar20[0xe2] = 0;
  pbVar20[0xe3] = 0;
  pbVar20[0xe4] = 0;
  pbVar20[0xe5] = 0;
  pbVar20[0xe6] = 0;
  pbVar20[0xe7] = 0;
  pbVar20[0xe8] = 0;
  pbVar20[0xe9] = 0;
  pbVar20[0xea] = 0;
  pbVar20[0xeb] = 0;
  pbVar20[0xec] = 0;
  pbVar20[0xed] = 0;
  pbVar20[0xee] = 0;
  pbVar20[0xef] = 0;
  pbVar20[0xf0] = 0;
  pbVar20[0xf1] = 0;
  pbVar20[0xf2] = 0;
  pbVar20[0xf3] = 0;
  pbVar20[0xf4] = 0;
  pbVar20[0xf5] = 0;
  pbVar20[0xf6] = 0;
  pbVar20[0xf7] = 0;
  pbVar20[0xf8] = 0;
  pbVar20[0xf9] = 0;
  pbVar20[0xfa] = 0;
  pbVar20[0xfb] = 0;
  pbVar20[0xfc] = 0;
  pbVar20[0xfd] = 0;
  pbVar20[0xfe] = 0;
  pbVar20[0xff] = 0;
  *(undefined **)(pbVar20 + 0x20) = &UNK_0f46df80;
  ppuVar1 = (undefined8 **)(pbVar20 + 0x170);
  pbVar20[0x170] = 0;
  pbVar20[0x171] = 0;
  pbVar20[0x172] = 0;
  pbVar20[0x173] = 0;
  pbVar20[0x174] = 0;
  pbVar20[0x175] = 0;
  pbVar20[0x176] = 0;
  pbVar20[0x177] = 0;
  pbVar20[0x178] = 0;
  pbVar20[0x179] = 0;
  pbVar20[0x17a] = 0;
  pbVar20[0x17b] = 0;
  pbVar20[0x17c] = 0;
  pbVar20[0x17d] = 0;
  pbVar20[0x17e] = 0;
  pbVar20[0x17f] = 0;
  if (ppuVar1 != &puStack_3e8) {
    if (puStack_3e8 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_3e8)(&puStack_3e8,ppuVar1);
      puVar16 = puStack_3e8;
    }
    puStack_3e8 = (undefined8 *)0x0;
    *ppuVar1 = puVar16;
  }
  puVar2 = (uint *)(pbVar20 + 0x90);
  if (pbVar21 != &DAT_0f551f58) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(undefined8 *)(pbVar20 + 0xa0) = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar2 = _DAT_0f551f60;
        *(undefined4 *)(pbVar20 + 0x94) = uVar10;
        *(undefined4 *)(pbVar20 + 0x98) = uVar11;
        *(undefined4 *)(pbVar20 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar37 = (_DAT_0f551f60 & 1) != 0;
      uVar24 = 0xf551f61;
      if (bVar37) {
        uVar24 = _DAT_0f551f70;
      }
      uVar29 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar37) {
        uVar29 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar2,uVar24,uVar29);
    }
  }
  pbVar32 = pbVar20 + 8;
  *(undefined8 *)(pbVar20 + 0x88) = _DAT_0f551f58;
  pbVar20[0xa8] = 0;
  pbVar20[0xa9] = 0;
  pbVar20[0xaa] = 0;
  pbVar20[0xab] = 0;
  pbVar20[0xac] = 0;
  pbVar20[0xad] = 0;
  pbVar20[0xae] = 0;
  pbVar20[0xaf] = 0;
  if (puStack_3e8 != (undefined8 *)0x0) {
    (*(code *)puStack_3e8[1])(&puStack_3e8);
  }
  LOCK();
  *(long *)pbVar32 = *(long *)pbVar32 + 1;
  UNLOCK();
  pbStack_3f0 = pbVar32;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  plVar15 = plStack_3a0;
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f46e078;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f46e0c8;
  puVar16[0xe] = pbVar20 + 0x20;
  puVar16[0xf] = pbVar20;
  LOCK();
  *(long *)(pbVar20 + 8) = *(long *)(pbVar20 + 8) + 1;
  UNLOCK();
  bStack_3e0 = (byte)puVar16;
  uStack_3df = (undefined4)((ulong)puVar16 >> 8);
  uStack_3db._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
  puStack_3e8 = puVar16 + 4;
  puVar17 = (undefined4 *)func_0x050192a0(plVar15,&uStack_398,0);
  pbVar32 = *(byte **)(puVar17 + 0x24);
  if (pbVar32 < *(byte **)(puVar17 + 0x26)) {
    pbVar32[0x10] = 0;
    pbVar32[0x11] = 0;
    pbVar32[0x12] = 0;
    pbVar32[0x13] = 0;
    pbVar32[0x14] = 0;
    pbVar32[0x15] = 0;
    pbVar32[0x16] = 0;
    pbVar32[0x17] = 0;
    pbVar32[0x18] = 0;
    pbVar32[0x19] = 0;
    pbVar32[0x1a] = 0;
    pbVar32[0x1b] = 0;
    pbVar32[0x1c] = 0;
    pbVar32[0x1d] = 0;
    pbVar32[0x1e] = 0;
    pbVar32[0x1f] = 0;
    pbVar32[0] = 0;
    pbVar32[1] = 0;
    pbVar32[2] = 0;
    pbVar32[3] = 0;
    pbVar32[4] = 0;
    pbVar32[5] = 0;
    pbVar32[6] = 0;
    pbVar32[7] = 0;
    pbVar32[8] = 0;
    pbVar32[9] = 0;
    pbVar32[10] = 0;
    pbVar32[0xb] = 0;
    pbVar32[0xc] = 0;
    pbVar32[0xd] = 0;
    pbVar32[0xe] = 0;
    pbVar32[0xf] = 0;
    pbVar32[0x20] = 0;
    pbVar32[0x21] = 0;
    pbVar32[0x22] = 0;
    pbVar32[0x23] = 0;
    pbVar32[0x24] = 0;
    pbVar32[0x25] = 0;
    pbVar32[0x26] = 0;
    pbVar32[0x27] = 0;
    if (pbVar32 == pbVar21) {
LAB_0d3eeae0:
      *(undefined8 *)pbVar32 = *(undefined8 *)pbVar21;
      *(undefined8 **)(pbVar32 + 0x28) = puVar16 + 4;
      *(undefined8 **)(pbVar32 + 0x30) = puVar16;
LAB_0d3eeb4d:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar2 & 1) == 0) {
        *(undefined8 *)(pbVar32 + 0x18) = *(undefined8 *)(pbVar20 + 0xa0);
        uVar24 = *(undefined8 *)(pbVar20 + 0x98);
        *(undefined8 *)(pbVar32 + 8) = *(undefined8 *)puVar2;
        *(undefined8 *)(pbVar32 + 0x10) = uVar24;
        goto LAB_0d3eeae0;
      }
      func_0x04885070(pbVar32 + 8,*(undefined8 *)(pbVar20 + 0xa0),*(undefined8 *)(pbVar20 + 0x98));
      *(undefined8 *)pbVar32 = *(undefined8 *)pbVar21;
      puVar16 = (undefined8 *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      *(undefined8 **)(pbVar32 + 0x28) = puStack_3e8;
      *(ulong *)(pbVar32 + 0x30) = CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d3eeb4d;
    }
    pbVar32 = pbVar32 + 0x38;
    *(byte **)(puVar17 + 0x24) = pbVar32;
  }
  else {
    pbVar32 = (byte *)func_0x0501c9a0(puVar17 + 0x22,pbVar21,&puStack_3e8);
  }
  pbVar21 = pbStack_3f0;
  *(byte **)(puVar17 + 0x24) = pbVar32;
  uVar10 = *puVar17;
  uVar11 = puVar17[1];
  uVar12 = puVar17[2];
  uVar13 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = *(long **)(pbVar20 + 0x78);
  *(undefined4 *)(pbVar20 + 0x70) = uVar10;
  *(undefined4 *)(pbVar20 + 0x74) = uVar11;
  *(undefined4 *)(pbVar20 + 0x78) = uVar12;
  *(undefined4 *)(pbVar20 + 0x7c) = uVar13;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar19 = plVar15 + 1;
    lVar26 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  pbVar20[0x80] = *(byte *)((long)puVar17 + 0xa1);
  plVar15 = (long *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar19 = plVar15 + 1;
    lVar26 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar26 = *(long *)pbVar21;
  *(long *)pbVar21 = *(long *)pbVar21 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*(long *)pbVar20 + 0x10))(pbVar20);
    func_0x0412c2d0(pbVar20);
    LOCK();
    lVar26 = *(long *)pbVar21;
    *(long *)pbVar21 = *(long *)pbVar21 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *(long *)pbVar21;
    *(long *)pbVar21 = *(long *)pbVar21 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*(long *)pbVar20 + 0x10))(pbVar20);
    func_0x0412c2d0(pbVar20);
  }
  pbVar20[0xb0] = 1;
  pbVar20[0xb1] = 0;
  pbVar20[0xb2] = 0;
  pbVar20[0xb3] = 0;
  pbVar20[0xb4] = 0;
  pbVar20[0xb5] = 0;
  pbVar20[0xb6] = 0;
  pbVar20[0xb7] = 0;
  uStack_130 = 0;
  uStack_350 = 0;
  lStack_138 = 0;
  puStack_358 = (undefined8 *)&UNK_0f46e118;
  pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar21 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_3e8 = puStack_358;
  pbVar21[8] = 0;
  pbVar21[9] = 0;
  pbVar21[10] = 0;
  pbVar21[0xb] = 0;
  pbVar21[0xc] = 0;
  pbVar21[0xd] = 0;
  pbVar21[0xe] = 0;
  pbVar21[0xf] = 0;
  pbVar21[0x10] = 0;
  pbVar21[0x11] = 0;
  pbVar21[0x12] = 0;
  pbVar21[0x13] = 0;
  pbVar21[0x14] = 0;
  pbVar21[0x15] = 0;
  pbVar21[0x16] = 0;
  pbVar21[0x17] = 0;
  *(undefined **)pbVar21 = &UNK_0f465c80;
  bStack_3e0 = 0;
  uStack_3df = 0;
  uStack_3db._0_3_ = 0;
  puStack_358 = (undefined8 *)0x0;
  *(undefined **)(pbVar21 + 0x20) = &UNK_0f2ccd78;
  pbVar21[0x28] = 0;
  pbVar21[0x29] = 0;
  pbVar21[0x2a] = 0;
  pbVar21[0x2b] = 0;
  pbVar21[0x2c] = 0;
  pbVar21[0x2d] = 0;
  pbVar21[0x2e] = 0;
  pbVar21[0x2f] = 0;
  pbVar21[0x30] = 0;
  pbVar21[0x31] = 0;
  pbVar21[0x32] = 0;
  pbVar21[0x33] = 0;
  pbVar21[0x34] = 0;
  pbVar21[0x35] = 0;
  pbVar21[0x36] = 0;
  pbVar21[0x37] = 0;
  pbVar21[0x38] = 0;
  pbVar21[0x39] = 0;
  pbVar21[0x3a] = 0;
  pbVar21[0x3b] = 0;
  pbVar21[0x3c] = 0;
  pbVar21[0x3d] = 0;
  pbVar21[0x3e] = 0;
  pbVar21[0x3f] = 0;
  pbVar21[0x40] = 0;
  pbVar21[0x41] = 0;
  pbVar21[0x42] = 0;
  pbVar21[0x43] = 0;
  pbVar21[0x44] = 0;
  pbVar21[0x45] = 0;
  pbVar21[0x46] = 0;
  pbVar21[0x47] = 0;
  pbVar21[0x48] = 0;
  pbVar21[0x49] = 0;
  pbVar21[0x4a] = 0;
  pbVar21[0x4b] = 0;
  pbVar21[0x4c] = 0;
  pbVar21[0x4d] = 0;
  pbVar21[0x4e] = 0;
  pbVar21[0x4f] = 0;
  pbVar21[0x50] = 0;
  pbVar21[0x51] = 0;
  pbVar21[0x52] = 0;
  pbVar21[0x53] = 0;
  pbVar21[0x54] = 0;
  pbVar21[0x55] = 0;
  pbVar21[0x56] = 0;
  pbVar21[0x57] = 0;
  pbVar21[0x58] = 0;
  pbVar21[0x59] = 0;
  pbVar21[0x5a] = 0;
  pbVar21[0x5b] = 0;
  pbVar21[0x5c] = 0;
  pbVar21[0x5d] = 0;
  pbVar21[0x5e] = 0;
  pbVar21[0x5f] = 0;
  pbVar21[0x60] = 0;
  pbVar21[0x61] = 0;
  pbVar21[0x62] = 0;
  pbVar21[99] = 0;
  pbVar21[100] = 0;
  pbVar21[0x65] = 0;
  pbVar21[0x66] = 0;
  pbVar21[0x67] = 0;
  pbVar21[0x68] = 0;
  func_0x04aa75f0(pbVar21 + 0x70,&uStack_3f1,&UNK_01254d89);
  pbVar21[0x80] = 0;
  pbVar21[0x88] = 0;
  pbVar21[0x89] = 0;
  pbVar21[0x8a] = 0;
  pbVar21[0x8b] = 0;
  pbVar21[0x8c] = 0;
  pbVar21[0x8d] = 0;
  pbVar21[0x8e] = 0;
  pbVar21[0x8f] = 0;
  pbVar21[0x90] = 0;
  pbVar21[0x91] = 0;
  pbVar21[0x92] = 0;
  pbVar21[0x93] = 0;
  pbVar21[0x94] = 0;
  pbVar21[0x95] = 0;
  pbVar21[0x96] = 0;
  pbVar21[0x97] = 0;
  pbVar21[0x98] = 0;
  pbVar21[0x99] = 0;
  pbVar21[0x9a] = 0;
  pbVar21[0x9b] = 0;
  pbVar21[0x9c] = 0;
  pbVar21[0x9d] = 0;
  pbVar21[0x9e] = 0;
  pbVar21[0x9f] = 0;
  pbVar21[0xa0] = 0;
  pbVar21[0xa1] = 0;
  pbVar21[0xa2] = 0;
  pbVar21[0xa3] = 0;
  pbVar21[0xa4] = 0;
  pbVar21[0xa5] = 0;
  pbVar21[0xa6] = 0;
  pbVar21[0xa7] = 0;
  pbVar21[0xa8] = 0;
  pbVar21[0xa9] = 0;
  pbVar21[0xaa] = 0;
  pbVar21[0xab] = 0;
  pbVar21[0xac] = 0;
  pbVar21[0xad] = 0;
  pbVar21[0xae] = 0;
  pbVar21[0xaf] = 0;
  pbVar21[0xb0] = 0;
  pbVar21[0xb1] = 0;
  pbVar21[0xb2] = 0;
  pbVar21[0xb3] = 0;
  pbVar21[0xb4] = 0;
  pbVar21[0xb5] = 0;
  pbVar21[0xb6] = 0;
  pbVar21[0xb7] = 0;
  pbVar21[0xb8] = 0xff;
  pbVar21[0xb9] = 0xff;
  pbVar21[0xba] = 0xff;
  pbVar21[0xbb] = 0xff;
  pbVar21[0xbc] = 0;
  pbVar21[0xbd] = 0;
  pbVar21[0xbe] = 0;
  pbVar21[0xbf] = 0;
  pbVar21[0x130] = 0;
  pbVar21[0x131] = 0;
  pbVar21[0x132] = 0;
  pbVar21[0x133] = 0;
  pbVar21[0x134] = 0;
  pbVar21[0x135] = 0;
  pbVar21[0x136] = 0;
  pbVar21[0x137] = 0;
  pbVar21[0x138] = 0;
  pbVar21[0x139] = 0;
  pbVar21[0x13a] = 0;
  pbVar21[0x13b] = 0;
  pbVar21[0x13c] = 0;
  pbVar21[0x13d] = 0;
  pbVar21[0x13e] = 0;
  pbVar21[0x13f] = 0;
  pbVar21[0xc0] = 0;
  pbVar21[0xc1] = 0;
  pbVar21[0xc2] = 0;
  pbVar21[0xc3] = 0;
  pbVar21[0xc4] = 0;
  pbVar21[0xc5] = 0;
  pbVar21[0xc6] = 0;
  pbVar21[199] = 0;
  pbVar21[200] = 0;
  pbVar21[0xc9] = 0;
  pbVar21[0xca] = 0;
  pbVar21[0xcb] = 0;
  pbVar21[0xcc] = 0;
  pbVar21[0xcd] = 0;
  pbVar21[0xce] = 0;
  pbVar21[0xcf] = 0;
  pbVar21[0xd0] = 0;
  pbVar21[0xd1] = 0;
  pbVar21[0xd2] = 0;
  pbVar21[0xd3] = 0;
  pbVar21[0xd4] = 0;
  pbVar21[0xd5] = 0;
  pbVar21[0xd6] = 0;
  pbVar21[0xd7] = 0;
  pbVar21[0xd8] = 0;
  pbVar21[0xd9] = 0;
  pbVar21[0xda] = 0;
  pbVar21[0xdb] = 0;
  pbVar21[0xdc] = 0;
  pbVar21[0xdd] = 0;
  pbVar21[0xde] = 0;
  pbVar21[0xdf] = 0;
  pbVar21[0xe0] = 0;
  pbVar21[0xe1] = 0;
  pbVar21[0xe2] = 0;
  pbVar21[0xe3] = 0;
  pbVar21[0xe4] = 0;
  pbVar21[0xe5] = 0;
  pbVar21[0xe6] = 0;
  pbVar21[0xe7] = 0;
  pbVar21[0xe8] = 0;
  pbVar21[0xe9] = 0;
  pbVar21[0xea] = 0;
  pbVar21[0xeb] = 0;
  pbVar21[0xec] = 0;
  pbVar21[0xed] = 0;
  pbVar21[0xee] = 0;
  pbVar21[0xef] = 0;
  pbVar21[0xf0] = 0;
  pbVar21[0xf1] = 0;
  pbVar21[0xf2] = 0;
  pbVar21[0xf3] = 0;
  pbVar21[0xf4] = 0;
  pbVar21[0xf5] = 0;
  pbVar21[0xf6] = 0;
  pbVar21[0xf7] = 0;
  pbVar21[0xf8] = 0;
  pbVar21[0xf9] = 0;
  pbVar21[0xfa] = 0;
  pbVar21[0xfb] = 0;
  pbVar21[0xfc] = 0;
  pbVar21[0xfd] = 0;
  pbVar21[0xfe] = 0;
  pbVar21[0xff] = 0;
  *(undefined **)(pbVar21 + 0x20) = &UNK_0f465cd0;
  pbVar21[0x170] = 0;
  pbVar21[0x171] = 0;
  pbVar21[0x172] = 0;
  pbVar21[0x173] = 0;
  pbVar21[0x174] = 0;
  pbVar21[0x175] = 0;
  pbVar21[0x176] = 0;
  pbVar21[0x177] = 0;
  pbVar21[0x178] = 0;
  pbVar21[0x179] = 0;
  pbVar21[0x17a] = 0;
  pbVar21[0x17b] = 0;
  pbVar21[0x17c] = 0;
  pbVar21[0x17d] = 0;
  pbVar21[0x17e] = 0;
  pbVar21[0x17f] = 0;
  if (puStack_3e8 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3e8)(&puStack_3e8,pbVar21 + 0x170);
    puVar16 = puStack_3e8;
  }
  pbVar32 = pbVar21 + 8;
  *(undefined8 **)(pbVar21 + 0x170) = puVar16;
  if (puStack_358 != (undefined8 *)0x0) {
    (*(code *)puStack_358[1])(&puStack_358);
  }
  LOCK();
  *(long *)pbVar32 = *(long *)pbVar32 + 1;
  UNLOCK();
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puStack_360 = (uint *)(pbVar21 + 0x20);
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f465db0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[4] = (long)&UNK_0f465e00;
  plVar15[0xe] = (long)puStack_360;
  plVar15[0xf] = (long)pbVar21;
  LOCK();
  *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
  UNLOCK();
  pbStack_3f0 = (byte *)(plVar15 + 1);
  puVar34 = *(undefined4 **)(pbVar20 + 0xe0);
  puVar6 = *(undefined4 **)(pbVar20 + 0xd8);
  for (puVar17 = puVar6; plStack_3a0 = plVar15, puVar17 != puVar34; puVar17 = puVar17 + 0x2a) {
    if ((*(long *)(puVar17 + 0x1e) == 0) && (*(long *)(puVar17 + 0x20) == -1)) goto LAB_0d3ef196;
  }
  if (puVar34 < *(undefined4 **)(pbVar20 + 0xe8)) {
    func_0x0d444100(puVar34);
    puVar34 = puVar34 + 0x2a;
    *(undefined4 **)(pbVar20 + 0xe0) = puVar34;
LAB_0d3ef128:
    *(undefined4 **)(pbVar20 + 0xe0) = puVar34;
    pbVar22 = *(byte **)(puVar34 + -0x2a);
    if ((*pbVar22 & 1) == 0) {
      *pbVar22 = 0x26;
      pbVar22 = pbVar22 + 1;
    }
    else {
      pbVar22[8] = 0x13;
      pbVar22[9] = 0;
      pbVar22[10] = 0;
      pbVar22[0xb] = 0;
      pbVar22[0xc] = 0;
      pbVar22[0xd] = 0;
      pbVar22[0xe] = 0;
      pbVar22[0xf] = 0;
      pbVar22 = *(byte **)(pbVar22 + 0x10);
    }
    uVar12 = _UNK_01494d69;
    uVar11 = _UNK_01494d65;
    uVar10 = _UNK_01494d61;
    *(undefined4 *)pbVar22 = _DAT_01494d5d;
    *(undefined4 *)(pbVar22 + 4) = uVar10;
    *(undefined4 *)(pbVar22 + 8) = uVar11;
    *(undefined4 *)(pbVar22 + 0xc) = uVar12;
    pbVar22[0xf] = 0x65;
    pbVar22[0x10] = 0x6e;
    pbVar22[0x11] = 0x74;
    pbVar22[0x12] = 0x3e;
    pbVar22[0x13] = 0;
    lVar26 = *(long *)(pbVar20 + 0xe0);
    puVar17 = (undefined4 *)(lVar26 - 0xa8);
    *(byte *)(lVar26 + -7) = pbVar20[0x80];
    *(undefined8 *)(lVar26 + -0x30) = 0;
    *(undefined8 *)(lVar26 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar26 + -8) = 0;
LAB_0d3ef196:
    plVar15 = plStack_3a0;
    pbVar22 = pbVar21 + 0x88;
    pbVar30 = (byte *)(plStack_3a0 + 4);
    pbVar20 = *(byte **)(puVar17 + 0x24);
    if (pbVar20 < *(byte **)(puVar17 + 0x26)) {
      pbVar20[0x10] = 0;
      pbVar20[0x11] = 0;
      pbVar20[0x12] = 0;
      pbVar20[0x13] = 0;
      pbVar20[0x14] = 0;
      pbVar20[0x15] = 0;
      pbVar20[0x16] = 0;
      pbVar20[0x17] = 0;
      pbVar20[0x18] = 0;
      pbVar20[0x19] = 0;
      pbVar20[0x1a] = 0;
      pbVar20[0x1b] = 0;
      pbVar20[0x1c] = 0;
      pbVar20[0x1d] = 0;
      pbVar20[0x1e] = 0;
      pbVar20[0x1f] = 0;
      pbVar20[0] = 0;
      pbVar20[1] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      pbVar20[4] = 0;
      pbVar20[5] = 0;
      pbVar20[6] = 0;
      pbVar20[7] = 0;
      pbVar20[8] = 0;
      pbVar20[9] = 0;
      pbVar20[10] = 0;
      pbVar20[0xb] = 0;
      pbVar20[0xc] = 0;
      pbVar20[0xd] = 0;
      pbVar20[0xe] = 0;
      pbVar20[0xf] = 0;
      pbVar20[0x20] = 0;
      pbVar20[0x21] = 0;
      pbVar20[0x22] = 0;
      pbVar20[0x23] = 0;
      pbVar20[0x24] = 0;
      pbVar20[0x25] = 0;
      pbVar20[0x26] = 0;
      pbVar20[0x27] = 0;
      if (pbVar20 != pbVar22) {
        if ((pbVar21[0x90] & 1) == 0) {
          *(undefined8 *)(pbVar20 + 0x18) = *(undefined8 *)(pbVar21 + 0xa0);
          uVar24 = *(undefined8 *)(pbVar21 + 0x98);
          *(undefined8 *)(pbVar20 + 8) = *(undefined8 *)(pbVar21 + 0x90);
          *(undefined8 *)(pbVar20 + 0x10) = uVar24;
        }
        else {
          pbStack_370 = pbVar22;
          func_0x04885070(pbVar20 + 8,*(undefined8 *)(pbVar21 + 0xa0),
                          *(undefined8 *)(pbVar21 + 0x98));
          pbVar22 = pbStack_370;
        }
      }
      *(undefined8 *)pbVar20 = *(undefined8 *)pbVar22;
      *(byte **)(pbVar20 + 0x28) = pbVar30;
      *(long **)(pbVar20 + 0x30) = plVar15;
      LOCK();
      plVar15[1] = plVar15[1] + 1;
      UNLOCK();
      pbVar20 = pbVar20 + 0x38;
      *(byte **)(puVar17 + 0x24) = pbVar20;
      goto LAB_0d3ef4f2;
    }
    pbVar20 = pbVar20 + -*(long *)(puVar17 + 0x22);
    uVar29 = ((long)pbVar20 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar29 < 0x492492492492493) {
      lVar26 = (long)*(byte **)(puVar17 + 0x26) - *(long *)(puVar17 + 0x22) >> 3;
      uVar9 = lVar26 * -0x2492492492492492;
      if (uVar29 < uVar9) {
        uVar29 = uVar9;
      }
      pbStack_3c8 = (byte *)(puVar17 + 0x22);
      if (0x249249249249248 < (ulong)(lVar26 * 0x6db6db6db6db6db7)) {
        uVar29 = 0x492492492492492;
      }
      pbStack_370 = pbStack_3c8;
      pbStack_368 = pbVar30;
      if (uVar29 == 0) {
        puVar16 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar29) goto LAB_0d3ef74d;
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x38);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar29 * 0x38,0);
          puVar16 = (undefined8 *)0x0;
        }
      }
      pbVar30 = (byte *)((long)puVar16 + (long)pbVar20);
      uStack_3db._3_1_ = (byte)pbVar30;
      uStack_3d7 = (undefined4)((ulong)pbVar30 >> 8);
      uStack_3d3._0_3_ = (undefined3)((ulong)pbVar30 >> 0x28);
      uStack_3db._0_3_ = (undefined3)uStack_3d3;
      puVar25 = puVar16 + uVar29 * 7;
      uStack_3d3._3_1_ = SUB81(puVar25,0);
      uStack_3cf = (undefined1)((ulong)puVar25 >> 8);
      uStack_3ce = (undefined1)((ulong)puVar25 >> 0x10);
      uStack_3cd = (undefined2)((ulong)puVar25 >> 0x18);
      uStack_3cb = (undefined3)((ulong)puVar25 >> 0x28);
      pbVar23 = (byte *)((long)(puVar16 + 2) + (long)pbVar20);
      pbVar23[0] = 0;
      pbVar23[1] = 0;
      pbVar23[2] = 0;
      pbVar23[3] = 0;
      pbVar23[4] = 0;
      pbVar23[5] = 0;
      pbVar23[6] = 0;
      pbVar23[7] = 0;
      pbVar23[8] = 0;
      pbVar23[9] = 0;
      pbVar23[10] = 0;
      pbVar23[0xb] = 0;
      pbVar23[0xc] = 0;
      pbVar23[0xd] = 0;
      pbVar23[0xe] = 0;
      pbVar23[0xf] = 0;
      pbVar23 = (byte *)((long)puVar16 + (long)pbVar20);
      pbVar23[0] = 0;
      pbVar23[1] = 0;
      pbVar23[2] = 0;
      pbVar23[3] = 0;
      pbVar23[4] = 0;
      pbVar23[5] = 0;
      pbVar23[6] = 0;
      pbVar23[7] = 0;
      pbVar23[8] = 0;
      pbVar23[9] = 0;
      pbVar23[10] = 0;
      pbVar23[0xb] = 0;
      pbVar23[0xc] = 0;
      pbVar23[0xd] = 0;
      pbVar23[0xe] = 0;
      pbVar23[0xf] = 0;
      pbVar23 = (byte *)((long)(puVar16 + 4) + (long)pbVar20);
      pbVar23[0] = 0;
      pbVar23[1] = 0;
      pbVar23[2] = 0;
      pbVar23[3] = 0;
      pbVar23[4] = 0;
      pbVar23[5] = 0;
      pbVar23[6] = 0;
      pbVar23[7] = 0;
      pbVar23 = pbVar30;
      pbVar31 = pbVar30;
      puStack_3e8 = puVar16;
      bStack_3e0 = uStack_3db._3_1_;
      uStack_3df = uStack_3d7;
      if (pbVar30 != pbVar22) {
        pbVar20 = pbVar20 + (long)puVar16;
        if ((pbVar21[0x90] & 1) == 0) {
          *(undefined8 *)(pbVar20 + 0x18) = *(undefined8 *)(pbVar21 + 0xa0);
          uVar10 = *(undefined4 *)(pbVar21 + 0x94);
          uVar11 = *(undefined4 *)(pbVar21 + 0x98);
          uVar12 = *(undefined4 *)(pbVar21 + 0x9c);
          *(undefined4 *)(pbVar20 + 8) = *(undefined4 *)(pbVar21 + 0x90);
          *(undefined4 *)(pbVar20 + 0xc) = uVar10;
          *(undefined4 *)(pbVar20 + 0x10) = uVar11;
          *(undefined4 *)(pbVar20 + 0x14) = uVar12;
        }
        else {
          func_0x04885070(pbVar20 + 8,*(undefined8 *)(pbVar21 + 0xa0),
                          *(undefined8 *)(pbVar21 + 0x98));
          pbVar23 = (byte *)CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
          pbVar31 = (byte *)CONCAT35((undefined3)uStack_3d3,CONCAT41(uStack_3d7,uStack_3db._3_1_));
        }
      }
      pbVar14 = pbStack_370;
      *(undefined8 *)pbVar30 = *(undefined8 *)pbVar22;
      *(byte **)(pbVar30 + 0x28) = pbStack_368;
      *(long **)(pbVar30 + 0x30) = plStack_3a0;
      LOCK();
      plStack_3a0[1] = plStack_3a0[1] + 1;
      UNLOCK();
      pbVar20 = pbVar31 + 0x38;
      uStack_3db._3_1_ = (byte)pbVar20;
      uStack_3d7 = (undefined4)((ulong)pbVar20 >> 8);
      uStack_3d3._0_3_ = (undefined3)((ulong)pbVar20 >> 0x28);
      puVar16 = *(undefined8 **)(puVar17 + 0x22);
      puVar25 = *(undefined8 **)(puVar17 + 0x24);
      pbVar23 = pbVar23 + ((long)puVar16 - (long)puVar25);
      pbVar22 = pbVar23;
      puVar27 = puVar16;
      if ((long)puVar16 - (long)puVar25 != 0) {
        do {
          pbVar22[0x10] = 0;
          pbVar22[0x11] = 0;
          pbVar22[0x12] = 0;
          pbVar22[0x13] = 0;
          pbVar22[0x14] = 0;
          pbVar22[0x15] = 0;
          pbVar22[0x16] = 0;
          pbVar22[0x17] = 0;
          pbVar22[0x18] = 0;
          pbVar22[0x19] = 0;
          pbVar22[0x1a] = 0;
          pbVar22[0x1b] = 0;
          pbVar22[0x1c] = 0;
          pbVar22[0x1d] = 0;
          pbVar22[0x1e] = 0;
          pbVar22[0x1f] = 0;
          pbVar22[0] = 0;
          pbVar22[1] = 0;
          pbVar22[2] = 0;
          pbVar22[3] = 0;
          pbVar22[4] = 0;
          pbVar22[5] = 0;
          pbVar22[6] = 0;
          pbVar22[7] = 0;
          pbVar22[8] = 0;
          pbVar22[9] = 0;
          pbVar22[10] = 0;
          pbVar22[0xb] = 0;
          pbVar22[0xc] = 0;
          pbVar22[0xd] = 0;
          pbVar22[0xe] = 0;
          pbVar22[0xf] = 0;
          pbVar22[0x20] = 0;
          pbVar22[0x21] = 0;
          pbVar22[0x22] = 0;
          pbVar22[0x23] = 0;
          pbVar22[0x24] = 0;
          pbVar22[0x25] = 0;
          pbVar22[0x26] = 0;
          pbVar22[0x27] = 0;
          *(undefined8 *)(pbVar22 + 0x18) = puVar27[3];
          uVar24 = puVar27[2];
          *(undefined8 *)(pbVar22 + 8) = puVar27[1];
          *(undefined8 *)(pbVar22 + 0x10) = uVar24;
          *(undefined2 *)(puVar27 + 1) = 0;
          *(undefined8 *)pbVar22 = *puVar27;
          uVar24 = puVar27[6];
          *(undefined8 *)(pbVar22 + 0x28) = puVar27[5];
          *(undefined8 *)(pbVar22 + 0x30) = uVar24;
          puVar27[5] = 0;
          puVar27[6] = 0;
          puVar27 = puVar27 + 7;
          pbVar22 = pbVar22 + 0x38;
          pbStack_368 = pbVar23;
        } while (puVar27 != puVar25);
        do {
          plVar15 = (long *)puVar16[6];
          if (plVar15 == (long *)0x0) {
LAB_0d3ef474:
            bVar5 = *(byte *)(puVar16 + 1);
          }
          else {
            LOCK();
            plVar19 = plVar15 + 1;
            lVar26 = *plVar19;
            *plVar19 = *plVar19 + -1;
            UNLOCK();
            if (lVar26 != 0) goto LAB_0d3ef474;
            (**(code **)(*plVar15 + 0x10))(plVar15);
            func_0x0412c2d0(plVar15);
            bVar5 = *(byte *)(puVar16 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar16[3],puVar16[1] & 0xfffffffffffffffe);
          }
          puVar16 = puVar16 + 7;
        } while (puVar16 != puVar25);
        puVar16 = *(undefined8 **)pbVar14;
        pbVar20 = (byte *)CONCAT35((undefined3)uStack_3d3,CONCAT41(uStack_3d7,uStack_3db._3_1_));
        pbVar23 = pbStack_368;
      }
      plVar15 = plStack_3a0;
      *(byte **)(puVar17 + 0x22) = pbVar23;
      *(byte **)(puVar17 + 0x24) = pbVar20;
      lVar26 = *(long *)(puVar17 + 0x26);
      *(ulong *)(puVar17 + 0x26) =
           CONCAT35(uStack_3cb,
                    CONCAT23(uStack_3cd,CONCAT12(uStack_3ce,CONCAT11(uStack_3cf,uStack_3d3._3_1_))))
      ;
      if (puVar16 != (undefined8 *)0x0) {
        func_0x0412a280(puVar16,lVar26 - (long)puVar16);
      }
LAB_0d3ef4f2:
      *(byte **)(puVar17 + 0x24) = pbVar20;
      uVar10 = *puVar17;
      uVar11 = puVar17[1];
      uVar12 = puVar17[2];
      uVar13 = puVar17[3];
      if (*(long *)(puVar17 + 2) != 0) {
        LOCK();
        plVar19 = (long *)(*(long *)(puVar17 + 2) + 8);
        *plVar19 = *plVar19 + 1;
        UNLOCK();
      }
      plVar19 = *(long **)(pbVar21 + 0x78);
      *(undefined4 *)(pbVar21 + 0x70) = uVar10;
      *(undefined4 *)(pbVar21 + 0x74) = uVar11;
      *(undefined4 *)(pbVar21 + 0x78) = uVar12;
      *(undefined4 *)(pbVar21 + 0x7c) = uVar13;
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar35 = plVar19 + 1;
        lVar26 = *plVar35;
        *plVar35 = *plVar35 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      pbVar21[0x80] = *(byte *)((long)puVar17 + 0xa1);
      LOCK();
      lVar26 = *(long *)pbStack_3f0;
      *(long *)pbStack_3f0 = *(long *)pbStack_3f0 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
        LOCK();
        lVar26 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar26 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
      }
      if (lVar26 == 0) {
        (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
        func_0x0412c2d0(pbVar21);
        LOCK();
        lVar26 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar26 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
      }
      if (lVar26 == 0) {
        (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
        func_0x0412c2d0(pbVar21);
      }
      auStack_318[0] = 0;
      auStack_318[1] = 0;
      auStack_318[2] = 0;
      (**(code **)(*(long *)puStack_360 + 0x10))(puStack_360,auStack_318);
      if ((auStack_318[0] & 1) != 0) {
        func_0x0412a280(auStack_318[2],auStack_318[0] & 0xfffffffffffffffe);
      }
      if (lStack_138 != 0) {
        (**(code **)(lStack_138 + 8))(&lStack_138);
      }
      if (puStack_238 != (undefined8 *)0x0) {
        (*(code *)puStack_238[1])(&puStack_238);
      }
      if ((bStack_390 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_37c,CONCAT31(uStack_37f,uStack_383._3_1_)),
                        CONCAT35((undefined3)uStack_38b,CONCAT41(uStack_38f,bStack_390)) &
                        0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    plVar15 = (long *)((long)puVar34 - (long)puVar6);
    uVar29 = ((long)plVar15 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar29) goto LAB_0d3ef757;
    pbVar22 = pbVar20 + 0xd8;
    lVar26 = (long)*(undefined4 **)(pbVar20 + 0xe8) - (long)puVar6 >> 3;
    uVar9 = lVar26 * -0x6186186186186186;
    if (uVar29 < uVar9) {
      uVar29 = uVar9;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar26 * -0x30c30c30c30c30c3)) {
      uVar29 = 0x186186186186186;
    }
    pbStack_3c8 = pbVar22;
    if (uVar29 == 0) {
      puVar16 = (undefined8 *)0x0;
LAB_0d3eef30:
      puVar33 = (undefined *)((long)plVar15 + (long)puVar16);
      uStack_3db._3_1_ = (byte)puVar33;
      uStack_3d7 = (undefined4)((ulong)puVar33 >> 8);
      uStack_3d3._0_3_ = (undefined3)((ulong)puVar33 >> 0x28);
      uStack_3db._0_3_ = (undefined3)uStack_3d3;
      puVar25 = puVar16 + uVar29 * 0x15;
      uStack_3d3._3_1_ = SUB81(puVar25,0);
      uStack_3cf = (undefined1)((ulong)puVar25 >> 8);
      uStack_3ce = (undefined1)((ulong)puVar25 >> 0x10);
      uStack_3cd = (undefined2)((ulong)puVar25 >> 0x18);
      uStack_3cb = (undefined3)((ulong)puVar25 >> 0x28);
      puStack_3e8 = puVar16;
      bStack_3e0 = uStack_3db._3_1_;
      uStack_3df = uStack_3d7;
      pbStack_368 = pbVar22;
      func_0x0d444100(puVar33);
      puVar34 = (undefined4 *)
                (CONCAT35((undefined3)uStack_3d3,CONCAT41(uStack_3d7,uStack_3db._3_1_)) + 0xa8);
      lVar26 = *(long *)(pbVar20 + 0xd8);
      lVar7 = *(long *)(pbVar20 + 0xe0);
      lVar28 = (lVar26 - lVar7) + CONCAT35((undefined3)uStack_3db,CONCAT41(uStack_3df,bStack_3e0));
      if (lVar26 != lVar7) {
        lVar36 = 0;
        pbStack_370 = pbVar21;
        do {
          uVar24 = ((undefined8 *)(lVar26 + lVar36))[1];
          *(undefined8 *)(lVar28 + lVar36) = *(undefined8 *)(lVar26 + lVar36);
          ((undefined8 *)(lVar28 + lVar36))[1] = uVar24;
          *(undefined8 *)(lVar26 + lVar36) = 0;
          ((undefined8 *)(lVar26 + lVar36))[1] = 0;
          puVar16 = (undefined8 *)(lVar28 + 0x20 + lVar36);
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16 = (undefined8 *)(lVar28 + 0x10 + lVar36);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar28 + 0x30 + lVar36) = 0;
          *(undefined8 *)(lVar28 + 0x28 + lVar36) = *(undefined8 *)(lVar26 + 0x28 + lVar36);
          puVar17 = (undefined4 *)(lVar26 + 0x18 + lVar36);
          uVar10 = puVar17[1];
          uVar11 = puVar17[2];
          uVar12 = puVar17[3];
          puVar6 = (undefined4 *)(lVar28 + 0x18 + lVar36);
          *puVar6 = *puVar17;
          puVar6[1] = uVar10;
          puVar6[2] = uVar11;
          puVar6[3] = uVar12;
          *(undefined2 *)(lVar26 + 0x18 + lVar36) = 0;
          *(undefined8 *)(lVar28 + 0x10 + lVar36) = *(undefined8 *)(lVar26 + 0x10 + lVar36);
          func_0x04167a20(lVar28 + lVar36 + 0x38,lVar36 + lVar26 + 0x38);
          puVar16 = (undefined8 *)(lVar26 + 0x40 + lVar36);
          uVar24 = puVar16[1];
          puVar25 = (undefined8 *)(lVar28 + 0x40 + lVar36);
          *puVar25 = *puVar16;
          puVar25[1] = uVar24;
          puVar16 = (undefined8 *)(lVar26 + 0x50 + lVar36);
          uVar24 = puVar16[1];
          puVar25 = (undefined8 *)(lVar28 + 0x50 + lVar36);
          *puVar25 = *puVar16;
          puVar25[1] = uVar24;
          puVar16 = (undefined8 *)(lVar26 + 0x60 + lVar36);
          uVar24 = puVar16[1];
          puVar25 = (undefined8 *)(lVar28 + 0x60 + lVar36);
          *puVar25 = *puVar16;
          puVar25[1] = uVar24;
          puVar16 = (undefined8 *)(lVar26 + 0x60 + lVar36);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar28 + 0x70 + lVar36) = *(undefined8 *)(lVar26 + 0x70 + lVar36);
          puVar16 = (undefined8 *)(lVar26 + 0x78 + lVar36);
          uVar24 = puVar16[1];
          puVar25 = (undefined8 *)(lVar28 + 0x78 + lVar36);
          *puVar25 = *puVar16;
          puVar25[1] = uVar24;
          puVar16 = (undefined8 *)(lVar28 + 0x88 + lVar36);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar28 + 0x98 + lVar36) = 0;
          puVar17 = (undefined4 *)(lVar26 + 0x88 + lVar36);
          uVar10 = puVar17[1];
          uVar11 = puVar17[2];
          uVar12 = puVar17[3];
          puVar6 = (undefined4 *)(lVar28 + 0x88 + lVar36);
          *puVar6 = *puVar17;
          puVar6[1] = uVar10;
          puVar6[2] = uVar11;
          puVar6[3] = uVar12;
          *(undefined8 *)(lVar28 + 0x98 + lVar36) = *(undefined8 *)(lVar26 + 0x98 + lVar36);
          puVar16 = (undefined8 *)(lVar26 + 0x88 + lVar36);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar26 + 0x98 + lVar36) = 0;
          *(undefined2 *)(lVar28 + 0xa0 + lVar36) = *(undefined2 *)(lVar26 + 0xa0 + lVar36);
          lVar3 = lVar36 + lVar26;
          lVar36 = lVar36 + 0xa8;
        } while (lVar3 + 0xa8 != lVar7);
        do {
          func_0x0d444280(lVar26);
          lVar26 = lVar26 + 0xa8;
        } while (lVar26 != lVar7);
        lVar26 = *(long *)pbStack_368;
        pbVar21 = pbStack_370;
      }
      *(long *)(pbVar20 + 0xd8) = lVar28;
      *(undefined4 **)(pbVar20 + 0xe0) = puVar34;
      lVar7 = *(long *)(pbVar20 + 0xe8);
      *(ulong *)(pbVar20 + 0xe8) =
           CONCAT35(uStack_3cb,
                    CONCAT23(uStack_3cd,CONCAT12(uStack_3ce,CONCAT11(uStack_3cf,uStack_3d3._3_1_))))
      ;
      if (lVar26 != 0) {
        func_0x0412a280(lVar26,lVar7 - lVar26);
      }
      goto LAB_0d3ef128;
    }
    if (uVar29 < 0x186186186186187) {
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0xa8);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar29 * 0xa8,0);
        puVar16 = (undefined8 *)0x0;
      }
      goto LAB_0d3eef30;
    }
LAB_0d3ef74d:
    func_0x04882eb0();
  }
  func_0x0d4444a0();
LAB_0d3ef757:
  uVar24 = func_0x0d444270();
  if ((*pbVar20 & 1) != 0) {
    func_0x0412a280(plVar15[3],plVar15[1] & 0xfffffffffffffffe);
  }
  func_0x0d4443e0(&puStack_3e8);
  plVar15 = plStack_3a0;
  LOCK();
  lVar26 = *(long *)pbStack_3f0;
  *(long *)pbStack_3f0 = *(long *)pbStack_3f0 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
    func_0x0412c2d0(plVar15);
  }
  func_0x0d442750(pbVar21);
  func_0x0d442780(pbVar21);
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if (puStack_238 != (undefined8 *)0x0) {
    (*(code *)puStack_238[1])(&puStack_238);
  }
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_37c,CONCAT31(uStack_37f,uStack_383._3_1_)),
                    CONCAT35((undefined3)uStack_38b,CONCAT41(uStack_38f,bStack_390)) &
                    0xfffffffffffffffe);
  }
  _Unwind_Resume(uVar24);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



/* ---- referenced strings ----
 * 0x1234c5f  can_place_on_floor
 * 0x129ccf1  chance_of_spreading
 * 0x136f75b  can_place_on_ceiling
 * 0x1494d5d  <any array element>
 * 0x14c1102  can_place_on_wall
 */
