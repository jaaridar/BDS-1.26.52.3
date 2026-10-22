/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4fddf0 (ELF vaddr 0xd3fddf0)
 * Label: callee-of:0x4de9260
 * Body:  [[0d4fddf0, 0d4fe5c8] [0d4fe5d0, 0d4febaa] [0d4febb0, 0d4febf1] [0d4fec00, 0d4fef55] [0d4ff232, 0d4ff2a2]]
 * Ghidra: FUN_0d4fddf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d4fddf0(undefined8 param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long **pplVar7;
  code *pcVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long *plVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  long *plVar17;
  long *plVar18;
  uint *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  byte *pbVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long **pplVar28;
  long **pplVar29;
  byte *pbVar30;
  long lVar31;
  bool bVar32;
  undefined1 uStack_1a9;
  long *plStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  long *plStack_190;
  long **pplStack_188;
  uint *puStack_168;
  long *plStack_160;
  byte *pbStack_158;
  long *plStack_150;
  ulong auStack_148 [3];
  long *plStack_130;
  long *plStack_128;
  byte bStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined *apuStack_a8 [4];
  undefined **ppuStack_88;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_117 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  bStack_120 = 0x10;
  uStack_11f = 0x65727574616566;
  uStack_118 = 0x73;
  plStack_128 = (long *)0xf72b8f5de3e59010;
  plStack_e8 = (long *)0x0;
  uStack_e0 = 0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f473f90;
  plStack_1a8 = (long *)0x0;
  pbStack_1a0 = (byte *)0x0;
  if (plStack_e8 == (long *)0x0) {
    plStack_1a8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_e8)(&plStack_e8,&plStack_1a8);
    plStack_1a8 = plStack_e8;
  }
  plStack_e8 = (long *)0x0;
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
  func_0x04aa75f0(plVar14 + 0xe,&uStack_1a9,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar18 = plVar14 + 0x11;
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
  plVar14[4] = (long)&UNK_0f473fe0;
  pplVar28 = (long **)(plVar14 + 0x2e);
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (pplVar28 != &plStack_1a8) {
    if (plStack_1a8 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_1a8)(&plStack_1a8,pplVar28);
      plVar20 = plStack_1a8;
    }
    plStack_1a8 = (long *)0x0;
    *pplVar28 = plVar20;
  }
  plStack_150 = plVar14 + 4;
  puVar19 = (uint *)(plVar14 + 0x12);
  if (plVar18 != (long *)&DAT_0f551f58) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar14[0x14] = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar19 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar10;
        *(undefined4 *)(plVar14 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar32 = (_DAT_0f551f60 & 1) != 0;
      lVar21 = 0xf551f61;
      if (bVar32) {
        lVar21 = _DAT_0f551f70;
      }
      uVar26 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar32) {
        uVar26 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar19,lVar21,uVar26);
    }
  }
  plVar20 = plVar14 + 1;
  plVar14[0x11] = _DAT_0f551f58;
  plVar14[0x15] = 0;
  puStack_168 = puVar19;
  if (plStack_1a8 != (long *)0x0) {
    (*(code *)plStack_1a8[1])(&plStack_1a8);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar15 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar15 + 8) = 0;
  *(long *)((long)pbVar15 + 0x10) = 0;
  *(undefined **)pbVar15 = &UNK_0f4740d8;
  *(long *)((long)pbVar15 + 0x30) = 0;
  *(long *)((long)pbVar15 + 0x38) = 0;
  *(undefined **)((long)pbVar15 + 0x20) = &UNK_0f474128;
  *(long **)((long)pbVar15 + 0x70) = plStack_150;
  *(long **)((long)pbVar15 + 0x78) = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  plStack_1a8 = (long *)((long)pbVar15 + 0x20);
  pbStack_1a0 = pbVar15;
  puVar16 = (undefined4 *)func_0x0504e600(param_1,&plStack_128,1);
  plVar17 = *(long **)(puVar16 + 0x24);
  if (plVar17 < *(long **)(puVar16 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 == plVar18) {
LAB_0d4fe146:
      *plVar17 = *plVar18;
      plVar17[5] = (long)pbVar15 + 0x20;
      plVar17[6] = (long)pbVar15;
LAB_0d4fe1b4:
      LOCK();
      *(long *)((long)pbVar15 + 8) = *(long *)((long)pbVar15 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_168 & 1) == 0) {
        plVar17[3] = *(long *)(puStack_168 + 4);
        lVar21 = *(long *)(puStack_168 + 2);
        plVar17[1] = *(long *)puStack_168;
        plVar17[2] = lVar21;
        goto LAB_0d4fe146;
      }
      func_0x04885070(plVar17 + 1,plVar14[0x14],plVar14[0x13]);
      *plVar17 = *plVar18;
      plVar17[5] = (long)plStack_1a8;
      plVar17[6] = (long)pbStack_1a0;
      pbVar15 = pbStack_1a0;
      if (pbStack_1a0 != (byte *)0x0) goto LAB_0d4fe1b4;
    }
    plVar17 = plVar17 + 7;
    *(long **)(puVar16 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x05051d00(puVar16 + 0x22,plVar18,&plStack_1a8);
  }
  *(long **)(puVar16 + 0x24) = plVar17;
  uVar10 = *puVar16;
  uVar11 = puVar16[1];
  uVar12 = puVar16[2];
  uVar13 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar11;
  *(undefined4 *)(plVar14 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar13;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar17 = plVar18 + 1;
    lVar21 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      FUN_0412c2d0(plVar18);
    }
  }
  pbVar15 = pbStack_1a0;
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  if (pbStack_1a0 != (byte *)0x0) {
    LOCK();
    plVar18 = (long *)((long)pbStack_1a0 + 8);
    lVar21 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)pbStack_1a0 + 0x10))(pbStack_1a0);
      FUN_0412c2d0(pbVar15);
    }
  }
  LOCK();
  lVar21 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0412c2d0(plVar14);
    LOCK();
    lVar21 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0d4fe279;
LAB_0d4fe462:
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0412c2d0(plVar14);
    plVar14[0x16] = 1;
  }
  else {
    LOCK();
    lVar21 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar21 == 0) goto LAB_0d4fe462;
LAB_0d4fe279:
    plVar14[0x16] = 1;
  }
  if (plStack_e8 != (long *)0x0) {
    (*(code *)plStack_e8[1])(&plStack_e8);
  }
  if ((bStack_120 & 1) != 0) {
    func_0x0412a280(uStack_110,CONCAT71(uStack_11f,bStack_120) & 0xfffffffffffffffe);
  }
  uStack_70 = 0;
  bStack_120 = 0;
  uStack_11f = 0;
  lStack_78 = 0;
  plStack_128 = (long *)&UNK_0f4743b0;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  plStack_1a8 = plStack_128;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f474188;
  pbStack_1a0 = (byte *)0x0;
  plStack_128 = (long *)0x0;
  plVar18[4] = (long)&UNK_0f2ccd78;
  plVar18[5] = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  *(undefined1 *)(plVar18 + 0xd) = 0;
  func_0x04aa75f0(plVar18 + 0xe,&uStack_1a9,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar18[0x11] = 0;
  plVar18[0x12] = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[0x16] = 0;
  plVar18[0x17] = 0xffffffff;
  plVar18[0x26] = 0;
  plVar18[0x27] = 0;
  plVar18[0x18] = 0;
  plVar18[0x19] = 0;
  plVar18[0x1a] = 0;
  plVar18[0x1b] = 0;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = 0;
  plVar18[0x1e] = 0;
  plVar18[0x1f] = 0;
  plVar18[4] = (long)&UNK_0f4741d8;
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  if (plStack_1a8 == (long *)0x0) {
    plVar18[0x3a] = 0;
    pbStack_158 = (byte *)(plVar18 + 0x12);
    plVar17 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1a8)(&plStack_1a8,plVar18 + 0x2e);
    plVar17 = plStack_1a8;
    pbStack_158 = (byte *)(plVar18 + 0x12);
    plStack_1a8 = (long *)0x0;
    plVar18[0x2e] = (long)plVar17;
    plVar18[0x3a] = 0;
    if ((*(byte *)(plVar18 + 0x12) & 1) == 0) {
      plVar17 = (long *)0x0;
    }
    else {
      func_0x0412a280(plVar18[0x14],plVar18[0x12] & 0xfffffffffffffffe);
      plVar17 = plStack_1a8;
    }
  }
  *(undefined2 *)(plVar18 + 0x12) = 0x6622;
  uVar12 = _UNK_01207d03;
  uVar11 = _UNK_01207cff;
  uVar10 = _UNK_01207cfb;
  *(undefined4 *)((long)plVar18 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar18 + 0x96) = uVar10;
  *(undefined4 *)((long)plVar18 + 0x9a) = uVar11;
  *(undefined4 *)((long)plVar18 + 0x9e) = uVar12;
  *(undefined4 *)((long)plVar18 + 0xa2) = 0;
  *(undefined2 *)((long)plVar18 + 0xa6) = 0;
  plVar18[0x11] = 0xf6c39062bb9edf3;
  plVar18[0x15] = 0;
  if (plVar17 != (long *)0x0) {
    (*(code *)plVar17[1])(&plStack_1a8);
  }
  pbVar15 = (byte *)(plVar18 + 1);
  if (plStack_128 != (long *)0x0) {
    (*(code *)plStack_128[1])(&plStack_128);
  }
  LOCK();
  *(long *)pbVar15 = *(long *)pbVar15 + 1;
  UNLOCK();
  puVar19 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar19 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)puVar19 + 8) = 0;
  *(long *)((long)puVar19 + 0x10) = 0;
  *(undefined **)puVar19 = &UNK_0f4742b8;
  *(long *)((long)puVar19 + 0x30) = 0;
  *(long *)((long)puVar19 + 0x38) = 0;
  *(undefined **)((long)puVar19 + 0x20) = &UNK_0f474308;
  *(long **)((long)puVar19 + 0x70) = plVar18 + 4;
  *(long **)((long)puVar19 + 0x78) = plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  plStack_130 = (long *)((long)puVar19 + 8);
  puVar4 = (undefined4 *)plVar14[0x1b];
  puVar5 = (undefined4 *)plVar14[0x1c];
  puStack_168 = puVar19;
  for (puVar16 = puVar4; puVar16 != puVar5; puVar16 = puVar16 + 0x2a) {
    if ((*(long *)(puVar16 + 0x1e) == 0) && (*(long *)(puVar16 + 0x20) == -1)) goto LAB_0d4fe917;
  }
  if ((undefined4 *)plVar14[0x1d] <= puVar5) {
    uVar26 = ((long)puVar5 - (long)puVar4 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar26) goto LAB_0d4fef27;
    plVar17 = plVar14 + 0x1b;
    lVar21 = plVar14[0x1d] - (long)puVar4 >> 3;
    uVar9 = lVar21 * -0x6186186186186186;
    if (uVar26 < uVar9) {
      uVar26 = uVar9;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      uVar26 = 0x186186186186186;
    }
    pplStack_188 = (long **)plVar17;
    if (uVar26 == 0) {
      plVar20 = (long *)0x0;
LAB_0d4fe6c2:
      pbStack_1a0 = (byte *)(((long)puVar5 - (long)puVar4) + (long)plVar20);
      plStack_190 = plVar20 + uVar26 * 0x15;
      plStack_1a8 = plVar20;
      pbStack_198 = pbStack_1a0;
      func_0x0d528270(pbStack_1a0);
      pbVar25 = pbStack_198 + 0xa8;
      plVar24 = (long *)plVar14[0x1b];
      plVar20 = (long *)plVar14[0x1c];
      pbVar30 = pbStack_1a0 + ((long)plVar24 - (long)plVar20);
      if (plVar24 != plVar20) {
        lVar21 = 0;
        plStack_160 = plVar17;
        do {
          uVar22 = ((undefined8 *)((long)plVar24 + lVar21))[1];
          *(undefined8 *)(pbVar30 + lVar21) = *(undefined8 *)((long)plVar24 + lVar21);
          *(undefined8 *)(pbVar30 + lVar21 + 8) = uVar22;
          *(undefined8 *)((long)plVar24 + lVar21) = 0;
          ((undefined8 *)((long)plVar24 + lVar21))[1] = 0;
          pbVar1 = pbVar30 + lVar21 + 0x20;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar1[8] = 0;
          pbVar1[9] = 0;
          pbVar1[10] = 0;
          pbVar1[0xb] = 0;
          pbVar1[0xc] = 0;
          pbVar1[0xd] = 0;
          pbVar1[0xe] = 0;
          pbVar1[0xf] = 0;
          pbVar1 = pbVar30 + lVar21 + 0x10;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar1[8] = 0;
          pbVar1[9] = 0;
          pbVar1[10] = 0;
          pbVar1[0xb] = 0;
          pbVar1[0xc] = 0;
          pbVar1[0xd] = 0;
          pbVar1[0xe] = 0;
          pbVar1[0xf] = 0;
          pbVar1 = pbVar30 + lVar21 + 0x30;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 *)(pbVar30 + lVar21 + 0x28) = *(undefined8 *)((long)plVar24 + lVar21 + 0x28);
          puVar16 = (undefined4 *)((long)plVar24 + lVar21 + 0x18);
          uVar10 = puVar16[1];
          uVar11 = puVar16[2];
          uVar12 = puVar16[3];
          pbVar1 = pbVar30 + lVar21 + 0x18;
          *(undefined4 *)pbVar1 = *puVar16;
          *(undefined4 *)(pbVar1 + 4) = uVar10;
          *(undefined4 *)(pbVar1 + 8) = uVar11;
          *(undefined4 *)(pbVar1 + 0xc) = uVar12;
          *(undefined2 *)((long)plVar24 + lVar21 + 0x18) = 0;
          *(undefined8 *)(pbVar30 + lVar21 + 0x10) = *(undefined8 *)((long)plVar24 + lVar21 + 0x10);
          func_0x04167a20(pbVar30 + lVar21 + 0x38,(long)plVar24 + lVar21 + 0x38);
          puVar27 = (undefined8 *)((long)plVar24 + lVar21 + 0x40);
          uVar22 = puVar27[1];
          *(undefined8 *)(pbVar30 + lVar21 + 0x40) = *puVar27;
          *(undefined8 *)(pbVar30 + lVar21 + 0x40 + 8) = uVar22;
          puVar27 = (undefined8 *)((long)plVar24 + lVar21 + 0x50);
          uVar22 = puVar27[1];
          *(undefined8 *)(pbVar30 + lVar21 + 0x50) = *puVar27;
          *(undefined8 *)(pbVar30 + lVar21 + 0x50 + 8) = uVar22;
          puVar27 = (undefined8 *)((long)plVar24 + lVar21 + 0x60);
          uVar22 = puVar27[1];
          *(undefined8 *)(pbVar30 + lVar21 + 0x60) = *puVar27;
          *(undefined8 *)(pbVar30 + lVar21 + 0x60 + 8) = uVar22;
          puVar27 = (undefined8 *)((long)plVar24 + lVar21 + 0x60);
          *puVar27 = 0;
          puVar27[1] = 0;
          *(undefined8 *)(pbVar30 + lVar21 + 0x70) = *(undefined8 *)((long)plVar24 + lVar21 + 0x70);
          puVar27 = (undefined8 *)((long)plVar24 + lVar21 + 0x78);
          uVar22 = puVar27[1];
          *(undefined8 *)(pbVar30 + lVar21 + 0x78) = *puVar27;
          *(undefined8 *)(pbVar30 + lVar21 + 0x78 + 8) = uVar22;
          pbVar1 = pbVar30 + lVar21 + 0x88;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar1[8] = 0;
          pbVar1[9] = 0;
          pbVar1[10] = 0;
          pbVar1[0xb] = 0;
          pbVar1[0xc] = 0;
          pbVar1[0xd] = 0;
          pbVar1[0xe] = 0;
          pbVar1[0xf] = 0;
          pbVar1 = pbVar30 + lVar21 + 0x98;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          puVar16 = (undefined4 *)((long)plVar24 + lVar21 + 0x88);
          uVar10 = puVar16[1];
          uVar11 = puVar16[2];
          uVar12 = puVar16[3];
          pbVar1 = pbVar30 + lVar21 + 0x88;
          *(undefined4 *)pbVar1 = *puVar16;
          *(undefined4 *)(pbVar1 + 4) = uVar10;
          *(undefined4 *)(pbVar1 + 8) = uVar11;
          *(undefined4 *)(pbVar1 + 0xc) = uVar12;
          *(undefined8 *)(pbVar30 + lVar21 + 0x98) = *(undefined8 *)((long)plVar24 + lVar21 + 0x98);
          puVar27 = (undefined8 *)((long)plVar24 + lVar21 + 0x88);
          *puVar27 = 0;
          puVar27[1] = 0;
          *(undefined8 *)((long)plVar24 + lVar21 + 0x98) = 0;
          *(undefined2 *)(pbVar30 + lVar21 + 0xa0) = *(undefined2 *)((long)plVar24 + lVar21 + 0xa0);
          lVar31 = lVar21 + 0xa8;
          lVar21 = lVar21 + 0xa8;
        } while ((long *)((long)plVar24 + lVar31) != plVar20);
        do {
          func_0x0d5255d0(plVar24);
          plVar24 = plVar24 + 0x15;
        } while (plVar24 != plVar20);
        plVar24 = (long *)*plStack_160;
      }
      puVar19 = puStack_168;
      plVar14[0x1b] = (long)pbVar30;
      plVar14[0x1c] = (long)pbVar25;
      lVar21 = plVar14[0x1d];
      plVar14[0x1d] = (long)plStack_190;
      if (plVar24 != (long *)0x0) {
        func_0x0412a280(plVar24,lVar21 - (long)plVar24);
      }
      goto LAB_0d4fe8a6;
    }
    pbVar25 = pbVar15;
    if (uVar26 < 0x186186186186187) {
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0xa8);
      if (plVar20 == (long *)0x0) {
        func_0x0eec74c0(uVar26 * 0xa8,0);
        plVar20 = (long *)0x0;
      }
      goto LAB_0d4fe6c2;
    }
LAB_0d4fef1d:
    func_0x04882eb0();
LAB_0d4fef22:
    func_0x0d5284b0();
    pbVar15 = pbVar25;
LAB_0d4fef27:
    uVar22 = func_0x0d5283e0();
    if ((*pbVar15 & 1) != 0) {
      func_0x0412a280(plVar20[3],plVar20[1] & 0xfffffffffffffffe);
    }
    func_0x0d5283f0(&plStack_1a8);
    puVar19 = puStack_168;
    LOCK();
    lVar21 = *plStack_130;
    *plStack_130 = *plStack_130 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)puStack_168 + 0x10))(puStack_168);
      FUN_0412c2d0(puVar19);
    }
    func_0x0d526a90(plVar18);
    func_0x0d526ac0(plVar18);
    lVar21 = lStack_78;
    if (lStack_78 == 0) {
      lVar21 = func_0x0eee2d70(uVar22);
    }
    (**(code **)(lVar21 + 8))(&lStack_78);
    func_0x0eee2d70(uVar22);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  func_0x0d528270(puVar5);
  pbVar25 = (byte *)(puVar5 + 0x2a);
  plVar14[0x1c] = (long)pbVar25;
LAB_0d4fe8a6:
  plVar14[0x1c] = (long)pbVar25;
  pbVar25 = *(byte **)(pbVar25 + -0xa8);
  if ((*pbVar25 & 1) == 0) {
    *pbVar25 = 0x26;
    pbVar25 = pbVar25 + 1;
  }
  else {
    pbVar25[8] = 0x13;
    pbVar25[9] = 0;
    pbVar25[10] = 0;
    pbVar25[0xb] = 0;
    pbVar25[0xc] = 0;
    pbVar25[0xd] = 0;
    pbVar25[0xe] = 0;
    pbVar25[0xf] = 0;
    pbVar25 = *(byte **)(pbVar25 + 0x10);
  }
  uVar12 = _UNK_01494d69;
  uVar11 = _UNK_01494d65;
  uVar10 = _UNK_01494d61;
  *(undefined4 *)pbVar25 = _DAT_01494d5d;
  *(undefined4 *)(pbVar25 + 4) = uVar10;
  *(undefined4 *)(pbVar25 + 8) = uVar11;
  *(undefined4 *)(pbVar25 + 0xc) = uVar12;
  pbVar25[0xf] = 0x65;
  pbVar25[0x10] = 0x6e;
  pbVar25[0x11] = 0x74;
  pbVar25[0x12] = 0x3e;
  pbVar25[0x13] = 0;
  lVar21 = plVar14[0x1c];
  puVar16 = (undefined4 *)(lVar21 - 0xa8);
  *(char *)(lVar21 + -7) = (char)plVar14[0x10];
  *(undefined8 *)(lVar21 + -0x30) = 0;
  *(undefined8 *)(lVar21 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + -8) = 0;
LAB_0d4fe917:
  pbVar30 = (byte *)(plVar18 + 0x11);
  pbVar25 = *(byte **)(puVar16 + 0x24);
  if (pbVar25 < *(byte **)(puVar16 + 0x26)) {
    pbVar25[0x10] = 0;
    pbVar25[0x11] = 0;
    pbVar25[0x12] = 0;
    pbVar25[0x13] = 0;
    pbVar25[0x14] = 0;
    pbVar25[0x15] = 0;
    pbVar25[0x16] = 0;
    pbVar25[0x17] = 0;
    pbVar25[0x18] = 0;
    pbVar25[0x19] = 0;
    pbVar25[0x1a] = 0;
    pbVar25[0x1b] = 0;
    pbVar25[0x1c] = 0;
    pbVar25[0x1d] = 0;
    pbVar25[0x1e] = 0;
    pbVar25[0x1f] = 0;
    pbVar25[0] = 0;
    pbVar25[1] = 0;
    pbVar25[2] = 0;
    pbVar25[3] = 0;
    pbVar25[4] = 0;
    pbVar25[5] = 0;
    pbVar25[6] = 0;
    pbVar25[7] = 0;
    pbVar25[8] = 0;
    pbVar25[9] = 0;
    pbVar25[10] = 0;
    pbVar25[0xb] = 0;
    pbVar25[0xc] = 0;
    pbVar25[0xd] = 0;
    pbVar25[0xe] = 0;
    pbVar25[0xf] = 0;
    pbVar25[0x20] = 0;
    pbVar25[0x21] = 0;
    pbVar25[0x22] = 0;
    pbVar25[0x23] = 0;
    pbVar25[0x24] = 0;
    pbVar25[0x25] = 0;
    pbVar25[0x26] = 0;
    pbVar25[0x27] = 0;
    if (pbVar25 != pbVar30) {
      if ((*pbStack_158 & 1) == 0) {
        *(undefined8 *)(pbVar25 + 0x18) = *(undefined8 *)(pbStack_158 + 0x10);
        uVar22 = *(undefined8 *)(pbStack_158 + 8);
        *(undefined8 *)(pbVar25 + 8) = *(undefined8 *)pbStack_158;
        *(undefined8 *)(pbVar25 + 0x10) = uVar22;
      }
      else {
        func_0x04885070(pbVar25 + 8,plVar18[0x14],plVar18[0x13]);
      }
    }
    *(undefined8 *)pbVar25 = *(undefined8 *)pbVar30;
    *(long **)(pbVar25 + 0x28) = (long *)((long)puVar19 + 0x20);
    *(uint **)(pbVar25 + 0x30) = puVar19;
    LOCK();
    *(long *)((long)puVar19 + 8) = *(long *)((long)puVar19 + 8) + 1;
    UNLOCK();
    pbVar25 = pbVar25 + 0x38;
    *(byte **)(puVar16 + 0x24) = pbVar25;
  }
  else {
    pbVar25 = pbVar25 + -*(long *)(puVar16 + 0x22);
    uVar26 = ((long)pbVar25 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar26) goto LAB_0d4fef22;
    lVar21 = (long)*(byte **)(puVar16 + 0x26) - *(long *)(puVar16 + 0x22) >> 3;
    uVar9 = lVar21 * -0x2492492492492492;
    if (uVar26 < uVar9) {
      uVar26 = uVar9;
    }
    pplStack_188 = (long **)(puVar16 + 0x22);
    if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
      uVar26 = 0x492492492492492;
    }
    plStack_160 = (long *)pplStack_188;
    if (uVar26 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      if (0x492492492492492 < uVar26) goto LAB_0d4fef1d;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0x38);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(uVar26 * 0x38,0);
        plVar14 = (long *)0x0;
      }
    }
    pbVar1 = (byte *)((long)plVar14 + (long)pbVar25);
    pbStack_1a0 = pbVar1;
    plStack_190 = plVar14 + uVar26 * 7;
    pbVar2 = (byte *)((long)(plVar14 + 2) + (long)pbVar25);
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    pbVar2 = (byte *)((long)plVar14 + (long)pbVar25);
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    pbVar2 = (byte *)((long)(plVar14 + 4) + (long)pbVar25);
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    pbStack_198 = pbVar1;
    plStack_1a8 = plVar14;
    if (pbVar1 != pbVar30) {
      pbVar25 = pbVar25 + (long)plVar14;
      if ((*pbStack_158 & 1) == 0) {
        *(undefined8 *)(pbVar25 + 0x18) = *(undefined8 *)(pbStack_158 + 0x10);
        uVar10 = *(undefined4 *)(pbStack_158 + 4);
        uVar11 = *(undefined4 *)(pbStack_158 + 8);
        uVar12 = *(undefined4 *)(pbStack_158 + 0xc);
        *(undefined4 *)(pbVar25 + 8) = *(undefined4 *)pbStack_158;
        *(undefined4 *)(pbVar25 + 0xc) = uVar10;
        *(undefined4 *)(pbVar25 + 0x10) = uVar11;
        *(undefined4 *)(pbVar25 + 0x14) = uVar12;
      }
      else {
        func_0x04885070(pbVar25 + 8,plVar18[0x14],plVar18[0x13]);
      }
    }
    plVar14 = plStack_160;
    *(undefined8 *)pbVar1 = *(undefined8 *)pbVar30;
    *(long **)(pbVar1 + 0x28) = (long *)((long)puVar19 + 0x20);
    *(uint **)(pbVar1 + 0x30) = puStack_168;
    LOCK();
    *(long *)((long)puStack_168 + 8) = *(long *)((long)puStack_168 + 8) + 1;
    UNLOCK();
    pbStack_198 = pbStack_198 + 0x38;
    puVar27 = *(undefined8 **)(puVar16 + 0x22);
    puVar6 = *(undefined8 **)(puVar16 + 0x24);
    pbVar30 = pbStack_1a0 + ((long)puVar27 - (long)puVar6);
    pbVar25 = pbVar30;
    puVar23 = puVar27;
    if ((long)puVar27 - (long)puVar6 != 0) {
      do {
        pbVar25[0x10] = 0;
        pbVar25[0x11] = 0;
        pbVar25[0x12] = 0;
        pbVar25[0x13] = 0;
        pbVar25[0x14] = 0;
        pbVar25[0x15] = 0;
        pbVar25[0x16] = 0;
        pbVar25[0x17] = 0;
        pbVar25[0x18] = 0;
        pbVar25[0x19] = 0;
        pbVar25[0x1a] = 0;
        pbVar25[0x1b] = 0;
        pbVar25[0x1c] = 0;
        pbVar25[0x1d] = 0;
        pbVar25[0x1e] = 0;
        pbVar25[0x1f] = 0;
        pbVar25[0] = 0;
        pbVar25[1] = 0;
        pbVar25[2] = 0;
        pbVar25[3] = 0;
        pbVar25[4] = 0;
        pbVar25[5] = 0;
        pbVar25[6] = 0;
        pbVar25[7] = 0;
        pbVar25[8] = 0;
        pbVar25[9] = 0;
        pbVar25[10] = 0;
        pbVar25[0xb] = 0;
        pbVar25[0xc] = 0;
        pbVar25[0xd] = 0;
        pbVar25[0xe] = 0;
        pbVar25[0xf] = 0;
        pbVar25[0x20] = 0;
        pbVar25[0x21] = 0;
        pbVar25[0x22] = 0;
        pbVar25[0x23] = 0;
        pbVar25[0x24] = 0;
        pbVar25[0x25] = 0;
        pbVar25[0x26] = 0;
        pbVar25[0x27] = 0;
        *(undefined8 *)(pbVar25 + 0x18) = puVar23[3];
        uVar22 = puVar23[2];
        *(undefined8 *)(pbVar25 + 8) = puVar23[1];
        *(undefined8 *)(pbVar25 + 0x10) = uVar22;
        *(undefined2 *)(puVar23 + 1) = 0;
        *(undefined8 *)pbVar25 = *puVar23;
        uVar22 = puVar23[6];
        *(undefined8 *)(pbVar25 + 0x28) = puVar23[5];
        *(undefined8 *)(pbVar25 + 0x30) = uVar22;
        puVar23[5] = 0;
        puVar23[6] = 0;
        puVar23 = puVar23 + 7;
        pbVar25 = pbVar25 + 0x38;
      } while (puVar23 != puVar6);
      do {
        plVar20 = (long *)puVar27[6];
        if (plVar20 == (long *)0x0) {
LAB_0d4febd5:
          bVar3 = *(byte *)(puVar27 + 1);
        }
        else {
          LOCK();
          plVar17 = plVar20 + 1;
          lVar21 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar21 != 0) goto LAB_0d4febd5;
          (**(code **)(*plVar20 + 0x10))(plVar20);
          FUN_0412c2d0(plVar20);
          bVar3 = *(byte *)(puVar27 + 1);
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(puVar27[3],puVar27[1] & 0xfffffffffffffffe);
        }
        puVar27 = puVar27 + 7;
      } while (puVar27 != puVar6);
      puVar27 = (undefined8 *)*plVar14;
    }
    pbVar25 = pbStack_198;
    *(byte **)(puVar16 + 0x22) = pbVar30;
    *(byte **)(puVar16 + 0x24) = pbStack_198;
    lVar21 = *(long *)(puVar16 + 0x26);
    *(long **)(puVar16 + 0x26) = plStack_190;
    if (puVar27 != (undefined8 *)0x0) {
      func_0x0412a280(puVar27,lVar21 - (long)puVar27);
    }
  }
  *(byte **)(puVar16 + 0x24) = pbVar25;
  uVar10 = *puVar16;
  uVar11 = puVar16[1];
  uVar12 = puVar16[2];
  uVar13 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = (long *)plVar18[0xf];
  *(undefined4 *)(plVar18 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar18 + 0x74) = uVar11;
  *(undefined4 *)(plVar18 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar18 + 0x7c) = uVar13;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar20 = plVar14 + 1;
    lVar21 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0412c2d0(plVar14);
    }
  }
  puVar19 = puStack_168;
  *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  LOCK();
  lVar21 = *plStack_130;
  *plStack_130 = *plStack_130 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*(long *)puStack_168 + 0x10))(puStack_168);
    FUN_0412c2d0(puVar19);
    LOCK();
    lVar21 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0d4fecec;
LAB_0d4fedb0:
    (**(code **)(*plVar18 + 0x10))(plVar18);
    FUN_0412c2d0(plVar18);
    LOCK();
    lVar21 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar21 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
    if (lVar21 == 0) goto LAB_0d4fedb0;
LAB_0d4fecec:
    LOCK();
    lVar21 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
  }
  if (lVar21 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    FUN_0412c2d0(plVar18);
  }
  apuStack_a8[0] = &UNK_0f4743d8;
  ppuStack_88 = apuStack_a8;
  pplStack_188 = &plStack_1a8;
  plStack_1a8 = (long *)&UNK_0f4743d8;
  pplVar28 = (long **)(plVar18 + 0x36);
  lVar31 = 0x20;
  lVar21 = 0x20;
  if (pplVar28 == &plStack_1a8) {
LAB_0d4fee31:
    (**(code **)((long)*pplStack_188 + lVar21))(pplStack_188);
    if ((ppuStack_88 != apuStack_a8) && (lVar31 = 0x28, ppuStack_88 == (undefined **)0x0))
    goto LAB_0d4fee62;
  }
  else {
    pplVar7 = (long **)plVar18[0x3a];
    if (pplVar7 == pplVar28) {
      pplStack_188 = (long **)0x0;
      pplVar29 = &plStack_1a8;
      (*(code *)(*pplVar7)[3])(pplVar7,pplVar29);
      (**(code **)(*(long *)plVar18[0x3a] + 0x20))();
      pplStack_188 = pplVar29;
      plVar18[0x36] = (long)&UNK_0f4743d8;
      plVar18[0x3a] = (long)pplVar28;
LAB_0d4fee2c:
      lVar21 = 0x20;
      pplStack_188 = pplVar29;
      goto LAB_0d4fee31;
    }
    plVar18[0x36] = (long)&UNK_0f4743d8;
    pplStack_188 = pplVar7;
    plVar18[0x3a] = (long)pplVar28;
    pplVar29 = pplVar7;
    if (pplVar7 == &plStack_1a8) goto LAB_0d4fee2c;
    lVar21 = 0x28;
    if (pplVar7 != (long **)0x0) goto LAB_0d4fee31;
  }
  (**(code **)(*ppuStack_88 + lVar31))();
LAB_0d4fee62:
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  auStack_148[0] = 0;
  auStack_148[1] = 0;
  auStack_148[2] = 0;
  (**(code **)(*plStack_150 + 0x10))(plStack_150,auStack_148);
  if ((auStack_148[0] & 1) != 0) {
    func_0x0412a280(auStack_148[2],auStack_148[0] & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x1494d5d  <any array element>
 */
