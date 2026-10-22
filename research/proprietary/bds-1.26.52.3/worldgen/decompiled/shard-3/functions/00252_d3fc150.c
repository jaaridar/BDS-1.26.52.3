/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4fc150 (ELF vaddr 0xd3fc150)
 * Label: callee-of:0x4de9260
 * Body:  [[0d4fc150, 0d4fc8d5] [0d4fc8e0, 0d4fcee5] [0d4fcef0, 0d4fcf2c] [0d4fcf30, 0d4fd8f9] [0d4fdc10, 0d4fdca2] [0d4fdd56, 0d4fddde]]
 * Ghidra: FUN_0d4fc150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d4fc150(undefined8 param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long **pplVar7;
  code *pcVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long *plVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  long **pplVar25;
  uint *puVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  bool bVar32;
  undefined8 uStack_270;
  long *plStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  long *plStack_240;
  long **pplStack_238;
  byte *pbStack_218;
  uint *puStack_210;
  undefined1 uStack_208;
  undefined5 uStack_207;
  undefined2 uStack_202;
  byte bStack_200;
  undefined5 uStack_1ff;
  undefined1 uStack_1fa;
  undefined1 uStack_1f9;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1c0;
  ulong auStack_1b8 [4];
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_178;
  undefined8 uStack_170;
  byte bStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined1 uStack_140;
  undefined5 uStack_13f;
  undefined3 uStack_13a;
  undefined5 uStack_137;
  undefined1 uStack_132;
  long *plStack_128;
  undefined8 uStack_120;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *apuStack_68 [4];
  undefined **ppuStack_48;
  
  uStack_1f7 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  bStack_200 = 0x10;
  uStack_1ff = 0x7574616566;
  uStack_1fa = 0x72;
  uStack_1f9 = 0x65;
  uStack_1f8 = 0x73;
  uStack_208 = 0x10;
  uStack_207 = 0x8f5de3e590;
  uStack_202 = 0xf72b;
  plStack_128 = (long *)0x0;
  uStack_120 = 0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f4738c0;
  plStack_258 = (long *)0x0;
  pbStack_250 = (byte *)0x0;
  if (plStack_128 == (long *)0x0) {
    plStack_258 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_128)(&plStack_128,&plStack_258);
    plStack_258 = plStack_128;
  }
  plStack_128 = (long *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_170,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar18 = plVar15 + 0x11;
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
  plVar15[4] = (long)&UNK_0f473910;
  pplVar25 = (long **)(plVar15 + 0x2e);
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (pplVar25 != &plStack_258) {
    if (plStack_258 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_258)(&plStack_258,pplVar25);
      plVar19 = plStack_258;
    }
    plStack_258 = (long *)0x0;
    *pplVar25 = plVar19;
  }
  puVar26 = (uint *)(plVar15 + 0x12);
  if (plVar18 != (long *)&DAT_0f551f58) {
    if ((*puVar26 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar15[0x14] = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar26 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar10;
        *(undefined4 *)(plVar15 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar12;
      }
      else {
        FUN_04885070(puVar26,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar32 = (_DAT_0f551f60 & 1) != 0;
      lVar28 = 0xf551f61;
      if (bVar32) {
        lVar28 = _DAT_0f551f70;
      }
      uVar29 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar32) {
        uVar29 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar26,lVar28,uVar29);
    }
  }
  plVar19 = plVar15 + 1;
  plVar15[0x11] = _DAT_0f551f58;
  plVar15[0x15] = 0;
  if (plStack_258 != (long *)0x0) {
    (*(code *)plStack_258[1])(&plStack_258);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  pbVar16 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar16 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar16 + 8) = 0;
  *(long *)((long)pbVar16 + 0x10) = 0;
  *(undefined **)pbVar16 = &UNK_0f473a08;
  *(long *)((long)pbVar16 + 0x30) = 0;
  *(long *)((long)pbVar16 + 0x38) = 0;
  *(undefined **)((long)pbVar16 + 0x20) = &UNK_0f473a58;
  *(long **)((long)pbVar16 + 0x70) = plVar15 + 4;
  *(long **)((long)pbVar16 + 0x78) = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  plStack_258 = (long *)((long)pbVar16 + 0x20);
  pbStack_250 = pbVar16;
  puStack_210 = (uint *)(plVar15 + 4);
  puVar17 = (undefined4 *)func_0x04fd09d0(param_1,&uStack_208,1);
  plVar20 = *(long **)(puVar17 + 0x24);
  if (plVar20 < *(long **)(puVar17 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 == plVar18) {
LAB_0d4fc482:
      *plVar20 = *plVar18;
      plVar20[5] = (long)pbVar16 + 0x20;
      plVar20[6] = (long)pbVar16;
LAB_0d4fc4f2:
      LOCK();
      *(long *)((long)pbVar16 + 8) = *(long *)((long)pbVar16 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puVar26 & 1) == 0) {
        plVar20[3] = plVar15[0x14];
        lVar28 = plVar15[0x13];
        plVar20[1] = *(long *)puVar26;
        plVar20[2] = lVar28;
        goto LAB_0d4fc482;
      }
      FUN_04885070(plVar20 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar20 = *plVar18;
      plVar20[5] = (long)plStack_258;
      plVar20[6] = (long)pbStack_250;
      pbVar16 = pbStack_250;
      if (pbStack_250 != (byte *)0x0) goto LAB_0d4fc4f2;
    }
    plVar20 = plVar20 + 7;
    *(long **)(puVar17 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x04fd40d0(puVar17 + 0x22,plVar18,&plStack_258);
  }
  *(long **)(puVar17 + 0x24) = plVar20;
  uVar10 = *puVar17;
  uVar11 = puVar17[1];
  uVar12 = puVar17[2];
  uVar13 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar11;
  *(undefined4 *)(plVar15 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar13;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar20 = plVar18 + 1;
    lVar28 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  pbVar16 = pbStack_250;
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  if (pbStack_250 != (byte *)0x0) {
    LOCK();
    plVar18 = (long *)((long)pbStack_250 + 8);
    lVar28 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*(long *)pbStack_250 + 0x10))(pbStack_250);
      func_0x0412c2d0(pbVar16);
    }
  }
  LOCK();
  lVar28 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar28 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar28 == 0) goto LAB_0d4fc779;
LAB_0d4fc5b6:
    plVar15[0x16] = 1;
  }
  else {
    LOCK();
    lVar28 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar28 != 0) goto LAB_0d4fc5b6;
LAB_0d4fc779:
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    plVar15[0x16] = 1;
  }
  if (plStack_128 != (long *)0x0) {
    (*(code *)plStack_128[1])(&plStack_128);
  }
  if ((bStack_200 & 1) != 0) {
    func_0x0412a280(uStack_1f0,
                    CONCAT17(uStack_1f9,CONCAT16(uStack_1fa,CONCAT51(uStack_1ff,bStack_200))) &
                    0xfffffffffffffffe);
  }
  uStack_a0 = 0;
  bStack_200 = 0;
  uStack_1ff = 0;
  uStack_1fa = 0;
  uStack_1f9 = 0;
  lStack_a8 = 0;
  uStack_208 = 0xe0;
  uStack_207 = 0xf473c;
  uStack_202 = 0;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0x1e0,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f473ab8;
  pbStack_250 = (byte *)0x0;
  plStack_258 = (long *)CONCAT26(uStack_202,CONCAT51(uStack_207,uStack_208));
  uStack_208 = 0;
  uStack_207 = 0;
  uStack_202 = 0;
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
  func_0x04aa75f0(plVar18 + 0xe,&uStack_170,&UNK_01254d89);
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
  plVar18[4] = (long)&UNK_0f473b08;
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  if (plStack_258 == (long *)0x0) {
    plVar18[0x3a] = 0;
    pbStack_218 = (byte *)(plVar18 + 0x12);
    plVar19 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_258)(&plStack_258,plVar18 + 0x2e);
    plVar19 = plStack_258;
    pbStack_218 = (byte *)(plVar18 + 0x12);
    plStack_258 = (long *)0x0;
    plVar18[0x2e] = (long)plVar19;
    plVar18[0x3a] = 0;
    if ((*(byte *)(plVar18 + 0x12) & 1) == 0) {
      plVar19 = (long *)0x0;
    }
    else {
      func_0x0412a280(plVar18[0x14],plVar18[0x12] & 0xfffffffffffffffe);
      plVar19 = plStack_258;
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
  if (plVar19 != (long *)0x0) {
    (*(code *)plVar19[1])(&plStack_258);
  }
  plVar19 = plVar18 + 1;
  lVar28 = CONCAT26(uStack_202,CONCAT51(uStack_207,uStack_208));
  if (lVar28 != 0) {
    (**(code **)(lVar28 + 8))(&uStack_208);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  plStack_148 = plVar19;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f473be8;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[4] = (long)&UNK_0f473c38;
  plVar19[0xe] = (long)(plVar18 + 4);
  plVar19[0xf] = (long)plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  plStack_178 = plVar19 + 1;
  puVar24 = (undefined8 *)plVar15[0x1c];
  puVar5 = (undefined8 *)plVar15[0x1b];
  for (puVar31 = puVar5; puVar31 != puVar24; puVar31 = puVar31 + 0x15) {
    if ((puVar31[0xf] == 0) && (puVar31[0x10] == -1)) goto LAB_0d4fcc3f;
  }
  if ((undefined8 *)plVar15[0x1d] <= puVar24) {
    pbVar16 = (byte *)((long)puVar24 - (long)puVar5);
    uVar29 = ((long)pbVar16 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (uVar29 < 0x186186186186187) {
      plVar20 = plVar15 + 0x1b;
      lVar28 = plVar15[0x1d] - (long)puVar5 >> 3;
      uVar9 = lVar28 * -0x6186186186186186;
      if (uVar29 < uVar9) {
        uVar29 = uVar9;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar28 * -0x30c30c30c30c30c3)) {
        uVar29 = 0x186186186186186;
      }
      pplStack_238 = (long **)plVar20;
      if (uVar29 == 0) {
        plVar21 = (long *)0x0;
LAB_0d4fc9e8:
        pbStack_250 = pbVar16 + (long)plVar21;
        plStack_240 = plVar21 + uVar29 * 0x15;
        plStack_258 = plVar21;
        pbStack_248 = pbStack_250;
        plStack_1c0 = plVar20;
        func_0x0d522230(pbStack_250);
        pbVar16 = pbStack_248;
        pbVar23 = pbStack_248 + 0xa8;
        lVar28 = plVar15[0x1b];
        lVar6 = plVar15[0x1c];
        pbVar30 = pbStack_250 + (lVar28 - lVar6);
        if (lVar28 != lVar6) {
          lVar27 = 0;
          do {
            uVar14 = ((undefined8 *)(lVar28 + lVar27))[1];
            *(undefined8 *)(pbVar30 + lVar27) = *(undefined8 *)(lVar28 + lVar27);
            *(undefined8 *)(pbVar30 + lVar27 + 8) = uVar14;
            *(undefined8 *)(lVar28 + lVar27) = 0;
            ((undefined8 *)(lVar28 + lVar27))[1] = 0;
            pbVar2 = pbVar30 + lVar27 + 0x20;
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
            pbVar2 = pbVar30 + lVar27 + 0x10;
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
            pbVar2 = pbVar30 + lVar27 + 0x30;
            pbVar2[0] = 0;
            pbVar2[1] = 0;
            pbVar2[2] = 0;
            pbVar2[3] = 0;
            pbVar2[4] = 0;
            pbVar2[5] = 0;
            pbVar2[6] = 0;
            pbVar2[7] = 0;
            *(undefined8 *)(pbVar30 + lVar27 + 0x28) = *(undefined8 *)(lVar28 + 0x28 + lVar27);
            puVar17 = (undefined4 *)(lVar28 + 0x18 + lVar27);
            uVar10 = puVar17[1];
            uVar11 = puVar17[2];
            uVar12 = puVar17[3];
            pbVar2 = pbVar30 + lVar27 + 0x18;
            *(undefined4 *)pbVar2 = *puVar17;
            *(undefined4 *)(pbVar2 + 4) = uVar10;
            *(undefined4 *)(pbVar2 + 8) = uVar11;
            *(undefined4 *)(pbVar2 + 0xc) = uVar12;
            *(undefined2 *)(lVar28 + 0x18 + lVar27) = 0;
            *(undefined8 *)(pbVar30 + lVar27 + 0x10) = *(undefined8 *)(lVar28 + 0x10 + lVar27);
            func_0x04167a20(pbVar30 + lVar27 + 0x38,lVar28 + lVar27 + 0x38);
            puVar31 = (undefined8 *)(lVar28 + 0x40 + lVar27);
            uVar14 = puVar31[1];
            *(undefined8 *)(pbVar30 + lVar27 + 0x40) = *puVar31;
            *(undefined8 *)(pbVar30 + lVar27 + 0x40 + 8) = uVar14;
            puVar31 = (undefined8 *)(lVar28 + 0x50 + lVar27);
            uVar14 = puVar31[1];
            *(undefined8 *)(pbVar30 + lVar27 + 0x50) = *puVar31;
            *(undefined8 *)(pbVar30 + lVar27 + 0x50 + 8) = uVar14;
            puVar31 = (undefined8 *)(lVar28 + 0x60 + lVar27);
            uVar14 = puVar31[1];
            *(undefined8 *)(pbVar30 + lVar27 + 0x60) = *puVar31;
            *(undefined8 *)(pbVar30 + lVar27 + 0x60 + 8) = uVar14;
            puVar31 = (undefined8 *)(lVar28 + 0x60 + lVar27);
            *puVar31 = 0;
            puVar31[1] = 0;
            *(undefined8 *)(pbVar30 + lVar27 + 0x70) = *(undefined8 *)(lVar28 + 0x70 + lVar27);
            puVar31 = (undefined8 *)(lVar28 + 0x78 + lVar27);
            uVar14 = puVar31[1];
            *(undefined8 *)(pbVar30 + lVar27 + 0x78) = *puVar31;
            *(undefined8 *)(pbVar30 + lVar27 + 0x78 + 8) = uVar14;
            pbVar2 = pbVar30 + lVar27 + 0x88;
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
            pbVar2 = pbVar30 + lVar27 + 0x98;
            pbVar2[0] = 0;
            pbVar2[1] = 0;
            pbVar2[2] = 0;
            pbVar2[3] = 0;
            pbVar2[4] = 0;
            pbVar2[5] = 0;
            pbVar2[6] = 0;
            pbVar2[7] = 0;
            puVar17 = (undefined4 *)(lVar28 + 0x88 + lVar27);
            uVar10 = puVar17[1];
            uVar11 = puVar17[2];
            uVar12 = puVar17[3];
            pbVar2 = pbVar30 + lVar27 + 0x88;
            *(undefined4 *)pbVar2 = *puVar17;
            *(undefined4 *)(pbVar2 + 4) = uVar10;
            *(undefined4 *)(pbVar2 + 8) = uVar11;
            *(undefined4 *)(pbVar2 + 0xc) = uVar12;
            *(undefined8 *)(pbVar30 + lVar27 + 0x98) = *(undefined8 *)(lVar28 + 0x98 + lVar27);
            puVar31 = (undefined8 *)(lVar28 + 0x88 + lVar27);
            *puVar31 = 0;
            puVar31[1] = 0;
            *(undefined8 *)(lVar28 + 0x98 + lVar27) = 0;
            *(undefined2 *)(pbVar30 + lVar27 + 0xa0) = *(undefined2 *)(lVar28 + 0xa0 + lVar27);
            lVar1 = lVar28 + lVar27;
            lVar27 = lVar27 + 0xa8;
          } while (lVar1 + 0xa8 != lVar6);
          do {
            func_0x0d51f590(lVar28);
            lVar28 = lVar28 + 0xa8;
          } while (lVar28 != lVar6);
          lVar28 = *plStack_1c0;
        }
        plVar15[0x1b] = (long)pbVar30;
        plVar15[0x1c] = (long)pbVar23;
        lVar6 = plVar15[0x1d];
        plVar15[0x1d] = (long)plStack_240;
        if (lVar28 != 0) {
          func_0x0412a280(lVar28,lVar6 - lVar28);
        }
        plVar15[0x1c] = (long)pbVar23;
        pbVar16 = *(byte **)pbVar16;
        bVar4 = *pbVar16;
        goto joined_r0x0d4fcbeb;
      }
      if (uVar29 < 0x186186186186187) {
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0xa8);
        if (plVar21 == (long *)0x0) {
          FUN_0eec74c0(uVar29 * 0xa8,0);
          plVar21 = (long *)0x0;
        }
        goto LAB_0d4fc9e8;
      }
LAB_0d4fd8c4:
      func_0x04882eb0();
LAB_0d4fd8c9:
      func_0x0d522470();
    }
    uStack_270 = func_0x0d5223a0();
    if ((*pbVar16 & 1) != 0) {
      func_0x0412a280(plVar18[3],plVar18[1] & 0xfffffffffffffffe);
    }
    plVar15[0x12] = (long)plVar18;
    func_0x04fcf380(&plStack_258);
    LOCK();
    lVar28 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
    LOCK();
    lVar28 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
    if (lStack_e8 != 0) {
      (**(code **)(lStack_e8 + 8))(&lStack_e8);
    }
    if ((bStack_168 & 1) != 0) {
      func_0x0412a280(uStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
      uStack_270 = func_0x0eee2d70(uStack_270);
      LOCK();
      lVar28 = *plStack_178;
      *plStack_178 = *plStack_178 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      func_0x0d520a50(plVar18);
      func_0x0d520a80(plVar18);
      lVar28 = lStack_a8;
      if (lStack_a8 != 0) goto LAB_0d4fddc9;
    }
    lVar28 = func_0x0eee2d70(uStack_270);
LAB_0d4fddc9:
    (**(code **)(lVar28 + 8))(&lStack_a8);
    func_0x0eee2d70(uStack_270);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  func_0x0d522230(puVar24);
  plVar15[0x1c] = (long)(puVar24 + 0x15);
  plVar15[0x1c] = (long)(puVar24 + 0x15);
  pbVar16 = (byte *)*puVar24;
  bVar4 = *pbVar16;
joined_r0x0d4fcbeb:
  if ((bVar4 & 1) == 0) {
    *pbVar16 = 0x26;
    pbVar16 = pbVar16 + 1;
  }
  else {
    pbVar16[8] = 0x13;
    pbVar16[9] = 0;
    pbVar16[10] = 0;
    pbVar16[0xb] = 0;
    pbVar16[0xc] = 0;
    pbVar16[0xd] = 0;
    pbVar16[0xe] = 0;
    pbVar16[0xf] = 0;
    pbVar16 = *(byte **)(pbVar16 + 0x10);
  }
  uVar12 = _UNK_01494d69;
  uVar11 = _UNK_01494d65;
  uVar10 = _UNK_01494d61;
  *(undefined4 *)pbVar16 = _DAT_01494d5d;
  *(undefined4 *)(pbVar16 + 4) = uVar10;
  *(undefined4 *)(pbVar16 + 8) = uVar11;
  *(undefined4 *)(pbVar16 + 0xc) = uVar12;
  pbVar16[0xf] = 0x65;
  pbVar16[0x10] = 0x6e;
  pbVar16[0x11] = 0x74;
  pbVar16[0x12] = 0x3e;
  pbVar16[0x13] = 0;
  lVar28 = plVar15[0x1c];
  puVar31 = (undefined8 *)(lVar28 + -0xa8);
  *(char *)(lVar28 + -7) = (char)plVar15[0x10];
  *(undefined8 *)(lVar28 + -0x30) = 0;
  *(undefined8 *)(lVar28 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar28 + -8) = 0;
LAB_0d4fcc3f:
  pbVar23 = (byte *)(plVar18 + 0x11);
  pbVar30 = (byte *)(plVar19 + 4);
  pbVar16 = (byte *)puVar31[0x12];
  if (pbVar16 < (byte *)puVar31[0x13]) {
    pbVar16[0x10] = 0;
    pbVar16[0x11] = 0;
    pbVar16[0x12] = 0;
    pbVar16[0x13] = 0;
    pbVar16[0x14] = 0;
    pbVar16[0x15] = 0;
    pbVar16[0x16] = 0;
    pbVar16[0x17] = 0;
    pbVar16[0x18] = 0;
    pbVar16[0x19] = 0;
    pbVar16[0x1a] = 0;
    pbVar16[0x1b] = 0;
    pbVar16[0x1c] = 0;
    pbVar16[0x1d] = 0;
    pbVar16[0x1e] = 0;
    pbVar16[0x1f] = 0;
    pbVar16[0] = 0;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    pbVar16[4] = 0;
    pbVar16[5] = 0;
    pbVar16[6] = 0;
    pbVar16[7] = 0;
    pbVar16[8] = 0;
    pbVar16[9] = 0;
    pbVar16[10] = 0;
    pbVar16[0xb] = 0;
    pbVar16[0xc] = 0;
    pbVar16[0xd] = 0;
    pbVar16[0xe] = 0;
    pbVar16[0xf] = 0;
    pbVar16[0x20] = 0;
    pbVar16[0x21] = 0;
    pbVar16[0x22] = 0;
    pbVar16[0x23] = 0;
    pbVar16[0x24] = 0;
    pbVar16[0x25] = 0;
    pbVar16[0x26] = 0;
    pbVar16[0x27] = 0;
    if (pbVar16 != pbVar23) {
      if ((*pbStack_218 & 1) == 0) {
        *(long *)(pbVar16 + 0x18) = *(long *)(pbStack_218 + 0x10);
        lVar28 = *(long *)(pbStack_218 + 8);
        *(long *)(pbVar16 + 8) = *(long *)pbStack_218;
        *(long *)(pbVar16 + 0x10) = lVar28;
      }
      else {
        pbStack_218 = pbVar30;
        FUN_04885070(pbVar16 + 8,plVar18[0x14],plVar18[0x13]);
        pbVar30 = pbStack_218;
      }
    }
    *(undefined8 *)pbVar16 = *(undefined8 *)pbVar23;
    *(byte **)(pbVar16 + 0x28) = pbVar30;
    *(long **)(pbVar16 + 0x30) = plVar19;
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
    pbVar16 = pbVar16 + 0x38;
    puVar31[0x12] = pbVar16;
  }
  else {
    pbVar16 = pbVar16 + -puVar31[0x11];
    plVar15 = (long *)(((long)pbVar16 >> 3) * 0x6db6db6db6db6db7 + 1);
    if ((long *)0x492492492492492 < plVar15) goto LAB_0d4fd8c9;
    lVar28 = (long)puVar31[0x13] - puVar31[0x11] >> 3;
    plVar20 = (long *)(lVar28 * -0x2492492492492492);
    if (plVar15 < plVar20) {
      plVar15 = plVar20;
    }
    pplStack_238 = (long **)(puVar31 + 0x11);
    if (0x249249249249248 < (ulong)(lVar28 * 0x6db6db6db6db6db7)) {
      plVar15 = (long *)0x492492492492492;
    }
    plStack_1c0 = (long *)pplStack_238;
    if (plVar15 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      if ((long *)0x492492492492492 < plVar15) goto LAB_0d4fd8c4;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar15 * 0x38);
      if (plVar20 == (long *)0x0) {
        FUN_0eec74c0((long)plVar15 * 0x38,0);
        plVar20 = (long *)0x0;
      }
    }
    pbVar2 = (byte *)((long)plVar20 + (long)pbVar16);
    pbStack_250 = pbVar2;
    plStack_240 = plVar20 + (long)plVar15 * 7;
    pbVar3 = (byte *)((long)(plVar20 + 2) + (long)pbVar16);
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = (byte *)((long)plVar20 + (long)pbVar16);
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = (byte *)((long)(plVar20 + 4) + (long)pbVar16);
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbStack_248 = pbVar2;
    plStack_258 = plVar20;
    if (pbVar2 != pbVar23) {
      pbVar16 = pbVar16 + (long)plVar20;
      if ((*pbStack_218 & 1) == 0) {
        *(long *)(pbVar16 + 0x18) = *(long *)(pbStack_218 + 0x10);
        uVar10 = *(undefined4 *)(pbStack_218 + 4);
        uVar11 = *(undefined4 *)(pbStack_218 + 8);
        uVar12 = *(undefined4 *)(pbStack_218 + 0xc);
        *(undefined4 *)(pbVar16 + 8) = *(undefined4 *)pbStack_218;
        *(undefined4 *)(pbVar16 + 0xc) = uVar10;
        *(undefined4 *)(pbVar16 + 0x10) = uVar11;
        *(undefined4 *)(pbVar16 + 0x14) = uVar12;
      }
      else {
        FUN_04885070(pbVar16 + 8,plVar18[0x14],plVar18[0x13]);
      }
    }
    *(undefined8 *)pbVar2 = *(undefined8 *)pbVar23;
    *(byte **)(pbVar2 + 0x28) = pbVar30;
    *(long **)(pbVar2 + 0x30) = plVar19;
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
    pbStack_248 = pbStack_248 + 0x38;
    puVar24 = (undefined8 *)puVar31[0x11];
    puVar5 = (undefined8 *)puVar31[0x12];
    pbVar23 = pbStack_250 + ((long)puVar24 - (long)puVar5);
    pbVar16 = pbVar23;
    puVar22 = puVar24;
    if ((long)puVar24 - (long)puVar5 != 0) {
      do {
        pbVar16[0x10] = 0;
        pbVar16[0x11] = 0;
        pbVar16[0x12] = 0;
        pbVar16[0x13] = 0;
        pbVar16[0x14] = 0;
        pbVar16[0x15] = 0;
        pbVar16[0x16] = 0;
        pbVar16[0x17] = 0;
        pbVar16[0x18] = 0;
        pbVar16[0x19] = 0;
        pbVar16[0x1a] = 0;
        pbVar16[0x1b] = 0;
        pbVar16[0x1c] = 0;
        pbVar16[0x1d] = 0;
        pbVar16[0x1e] = 0;
        pbVar16[0x1f] = 0;
        pbVar16[0] = 0;
        pbVar16[1] = 0;
        pbVar16[2] = 0;
        pbVar16[3] = 0;
        pbVar16[4] = 0;
        pbVar16[5] = 0;
        pbVar16[6] = 0;
        pbVar16[7] = 0;
        pbVar16[8] = 0;
        pbVar16[9] = 0;
        pbVar16[10] = 0;
        pbVar16[0xb] = 0;
        pbVar16[0xc] = 0;
        pbVar16[0xd] = 0;
        pbVar16[0xe] = 0;
        pbVar16[0xf] = 0;
        pbVar16[0x20] = 0;
        pbVar16[0x21] = 0;
        pbVar16[0x22] = 0;
        pbVar16[0x23] = 0;
        pbVar16[0x24] = 0;
        pbVar16[0x25] = 0;
        pbVar16[0x26] = 0;
        pbVar16[0x27] = 0;
        *(undefined8 *)(pbVar16 + 0x18) = puVar22[3];
        uVar14 = puVar22[2];
        *(undefined8 *)(pbVar16 + 8) = puVar22[1];
        *(undefined8 *)(pbVar16 + 0x10) = uVar14;
        *(undefined2 *)(puVar22 + 1) = 0;
        *(undefined8 *)pbVar16 = *puVar22;
        uVar14 = puVar22[6];
        *(undefined8 *)(pbVar16 + 0x28) = puVar22[5];
        *(undefined8 *)(pbVar16 + 0x30) = uVar14;
        puVar22[5] = 0;
        puVar22[6] = 0;
        puVar22 = puVar22 + 7;
        pbVar16 = pbVar16 + 0x38;
      } while (puVar22 != puVar5);
      do {
        plVar15 = (long *)puVar24[6];
        if (plVar15 == (long *)0x0) {
LAB_0d4fcf14:
          bVar4 = *(byte *)(puVar24 + 1);
        }
        else {
          LOCK();
          plVar20 = plVar15 + 1;
          lVar28 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar28 != 0) goto LAB_0d4fcf14;
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
          bVar4 = *(byte *)(puVar24 + 1);
        }
        if ((bVar4 & 1) != 0) {
          func_0x0412a280(puVar24[3],puVar24[1] & 0xfffffffffffffffe);
        }
        puVar24 = puVar24 + 7;
      } while (puVar24 != puVar5);
      puVar24 = (undefined8 *)*plStack_1c0;
    }
    pbVar16 = pbStack_248;
    puVar31[0x11] = pbVar23;
    puVar31[0x12] = pbStack_248;
    lVar28 = puVar31[0x13];
    puVar31[0x13] = plStack_240;
    if (puVar24 != (undefined8 *)0x0) {
      func_0x0412a280(puVar24,lVar28 - (long)puVar24);
    }
  }
  puVar31[0x12] = pbVar16;
  uVar10 = *(undefined4 *)puVar31;
  uVar11 = *(undefined4 *)((long)puVar31 + 4);
  uVar12 = *(undefined4 *)(puVar31 + 1);
  uVar13 = *(undefined4 *)((long)puVar31 + 0xc);
  if (puVar31[1] != 0) {
    LOCK();
    plVar15 = (long *)(puVar31[1] + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar18[0xf];
  *(undefined4 *)(plVar18 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar18 + 0x74) = uVar11;
  *(undefined4 *)(plVar18 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar18 + 0x7c) = uVar13;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar20 = plVar15 + 1;
    lVar28 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar31 + 0xa1);
  LOCK();
  lVar28 = *plStack_178;
  *plStack_178 = *plStack_178 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar28 = *plStack_148;
    *plStack_148 = *plStack_148 + -1;
    UNLOCK();
    if (lVar28 == 0) goto LAB_0d4fd0eb;
LAB_0d4fd02d:
    LOCK();
    lVar28 = *plStack_148;
    *plStack_148 = *plStack_148 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *plStack_148;
    *plStack_148 = *plStack_148 + -1;
    UNLOCK();
    if (lVar28 != 0) goto LAB_0d4fd02d;
LAB_0d4fd0eb:
    plVar15 = plStack_148;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    LOCK();
    lVar28 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
  }
  apuStack_68[0] = &UNK_0f473d08;
  ppuStack_48 = apuStack_68;
  pplStack_238 = &plStack_258;
  plStack_258 = (long *)&UNK_0f473d08;
  pplVar25 = (long **)(plVar18 + 0x36);
  lVar28 = 0x20;
  if (pplVar25 == &plStack_258) {
LAB_0d4fd1af:
    puVar26 = puStack_210;
    (**(code **)((long)*pplStack_238 + lVar28))(pplStack_238);
  }
  else {
    pplVar7 = (long **)plVar18[0x3a];
    if (pplVar7 == pplVar25) {
      uStack_208 = 8;
      uStack_207 = 0xf473d;
      uStack_202 = 0;
      pplStack_238 = (long **)0x0;
      (*(code *)(*pplVar7)[3])(pplVar7,&plStack_258);
      (**(code **)(*(long *)plVar18[0x3a] + 0x20))();
      plVar18[0x3a] = 0;
      pplStack_238 = &plStack_258;
      (**(code **)(CONCAT26(uStack_202,CONCAT51(uStack_207,uStack_208)) + 0x18))
                (&uStack_208,pplVar25);
      (**(code **)(CONCAT26(uStack_202,CONCAT51(uStack_207,uStack_208)) + 0x20))(&uStack_208);
      plVar18[0x3a] = (long)pplVar25;
      if (pplStack_238 != &plStack_258) goto LAB_0d4fd1a4;
      goto LAB_0d4fd1af;
    }
    plVar18[0x36] = (long)&UNK_0f473d08;
    pplStack_238 = pplVar7;
    plVar18[0x3a] = (long)pplVar25;
    if (pplVar7 == &plStack_258) goto LAB_0d4fd1af;
LAB_0d4fd1a4:
    lVar28 = 0x28;
    puVar26 = puStack_210;
    if (pplStack_238 != (long **)0x0) goto LAB_0d4fd1af;
  }
  if (ppuStack_48 == apuStack_68) {
    lVar28 = 0x20;
LAB_0d4fd3c6:
    (**(code **)(*ppuStack_48 + lVar28))();
  }
  else {
    lVar28 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_0d4fd3c6;
  }
  if (lStack_a8 != 0) {
    (**(code **)(lStack_a8 + 8))(&lStack_a8);
  }
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  (**(code **)(*(long *)puVar26 + 0x10))(puVar26,&uStack_198);
  if ((uStack_198 & 1) != 0) {
    func_0x0412a280(uStack_188,uStack_198 & 0xfffffffffffffffe);
  }
  uStack_15e = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  bStack_168 = 0x12;
  uStack_167 = 0x6f5f796c726165;
  uStack_160 = 0x75;
  uStack_15f = 0x74;
  uStack_170 = 0x4d90db74cd74f717;
  uStack_e0 = 0;
  bStack_200 = 0;
  uStack_1ff = 0;
  uStack_1fa = 0;
  uStack_1f9 = 0;
  lStack_e8 = 0;
  uStack_208 = 0x68;
  uStack_207 = 0xf473f;
  uStack_202 = 0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(0x1e0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f473d98;
  pbStack_250 = (byte *)0x0;
  plStack_258 = (long *)CONCAT26(uStack_202,CONCAT51(uStack_207,uStack_208));
  uStack_208 = 0;
  uStack_207 = 0;
  uStack_202 = 0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_140,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar18 = plVar15 + 0x11;
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
  plVar15[4] = (long)&UNK_0f473de8;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (plStack_258 == (long *)0x0) {
    plVar19 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_258)(&plStack_258,plVar15 + 0x2e);
    plVar19 = plStack_258;
  }
  plVar20 = plVar15 + 4;
  plStack_258 = (long *)0x0;
  plVar15[0x2e] = (long)plVar19;
  plVar15[0x36] = 0;
  plVar15[0x37] = 0;
  plVar15[0x38] = 0;
  plVar15[0x39] = 0;
  *(undefined4 *)(plVar15 + 0x3a) = 0x3f800000;
  *(undefined1 *)(plVar15 + 0x3b) = 0;
  puVar26 = (uint *)(plVar15 + 0x12);
  if (plVar18 != (long *)&DAT_0f551fe8) {
    if ((*puVar26 & 1) == 0) {
      if ((_DAT_0f551ff0 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552000;
        uVar12 = uRam000000000f551ffc;
        uVar11 = _DAT_0f551ff8;
        uVar10 = uRam000000000f551ff4;
        *puVar26 = _DAT_0f551ff0;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar10;
        *(undefined4 *)(plVar15 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar12;
      }
      else {
        FUN_04885070(puVar26,_DAT_0f552000,CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8));
      }
    }
    else {
      bVar32 = (_DAT_0f551ff0 & 1) != 0;
      lVar28 = 0xf551ff1;
      if (bVar32) {
        lVar28 = _DAT_0f552000;
      }
      uVar29 = (ulong)((_DAT_0f551ff0 & 0xff) >> 1);
      if (bVar32) {
        uVar29 = CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8);
      }
      func_0x04885120(puVar26,lVar28,uVar29);
    }
  }
  plVar15[0x11] = _DAT_0f551fe8;
  plVar15[0x15] = 0;
  if (plStack_258 != (long *)0x0) {
    (*(code *)plStack_258[1])(&plStack_258);
  }
  plVar19 = plVar15 + 1;
  lVar28 = CONCAT26(uStack_202,CONCAT51(uStack_207,uStack_208));
  if (lVar28 != 0) {
    (**(code **)(lVar28 + 8))(&uStack_208);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  puStack_210 = puVar26;
  pbVar16 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar16 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar16 + 8) = 0;
  *(long *)((long)pbVar16 + 0x10) = 0;
  *(undefined **)pbVar16 = &UNK_0f473ec8;
  *(long *)((long)pbVar16 + 0x30) = 0;
  *(long *)((long)pbVar16 + 0x38) = 0;
  *(undefined **)((long)pbVar16 + 0x20) = &UNK_0f473f18;
  *(long **)((long)pbVar16 + 0x70) = plVar20;
  *(long **)((long)pbVar16 + 0x78) = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  plStack_258 = (long *)((long)pbVar16 + 0x20);
  pbStack_250 = pbVar16;
  puVar17 = (undefined4 *)func_0x04fd09d0(param_1,&uStack_170,0);
  plVar21 = *(long **)(puVar17 + 0x24);
  if (*(long **)(puVar17 + 0x26) <= plVar21) {
    plVar21 = (long *)func_0x04fd40d0(puVar17 + 0x22,plVar18,&plStack_258);
    goto LAB_0d4fd634;
  }
  plVar21[2] = 0;
  plVar21[3] = 0;
  *plVar21 = 0;
  plVar21[1] = 0;
  plVar21[4] = 0;
  if (plVar21 == plVar18) {
LAB_0d4fd5b6:
    *plVar21 = *plVar18;
    plVar21[5] = (long)pbVar16 + 0x20;
    plVar21[6] = (long)pbVar16;
LAB_0d4fd624:
    LOCK();
    *(long *)((long)pbVar16 + 8) = *(long *)((long)pbVar16 + 8) + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_210 & 1) == 0) {
      plVar21[3] = *(long *)(puStack_210 + 4);
      lVar28 = *(long *)(puStack_210 + 2);
      plVar21[1] = *(long *)puStack_210;
      plVar21[2] = lVar28;
      goto LAB_0d4fd5b6;
    }
    FUN_04885070(plVar21 + 1,plVar15[0x14],plVar15[0x13]);
    *plVar21 = *plVar18;
    plVar21[5] = (long)plStack_258;
    plVar21[6] = (long)pbStack_250;
    pbVar16 = pbStack_250;
    if (pbStack_250 != (byte *)0x0) goto LAB_0d4fd624;
  }
  plVar21 = plVar21 + 7;
  *(long **)(puVar17 + 0x24) = plVar21;
LAB_0d4fd634:
  *(long **)(puVar17 + 0x24) = plVar21;
  uVar10 = *puVar17;
  uVar11 = puVar17[1];
  uVar12 = puVar17[2];
  uVar13 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar11;
  *(undefined4 *)(plVar15 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar13;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar21 = plVar18 + 1;
    lVar28 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  pbVar16 = pbStack_250;
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  if (pbStack_250 != (byte *)0x0) {
    LOCK();
    plVar18 = (long *)((long)pbStack_250 + 8);
    lVar28 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*(long *)pbStack_250 + 0x10))(pbStack_250);
      func_0x0412c2d0(pbVar16);
    }
  }
  LOCK();
  lVar28 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar28 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  plStack_258 = (long *)CONCAT26(plStack_258._6_2_,0x656e6f6e08);
  func_0x0d51dfa0(plVar20,&plStack_258,0);
  uStack_208 = 0x1a;
  uStack_207 = 0x7473726966;
  uStack_202 = 0x665f;
  bStack_200 = 0x61;
  uStack_1ff = 0x6572756c69;
  uStack_1fa = 0;
  func_0x0d51dfa0(plVar20,&uStack_208,1);
  uStack_140 = 0x1a;
  uStack_13f = 0x7473726966;
  uStack_13a = 0x75735f;
  uStack_137 = 0x7373656363;
  uStack_132 = 0;
  func_0x0d51dfa0(plVar20,&uStack_140,2);
  auStack_1b8[0] = 0;
  auStack_1b8[1] = 0;
  auStack_1b8[2] = 0;
  (**(code **)(*plVar20 + 0x10))(plVar20,auStack_1b8);
  if ((auStack_1b8[0] & 1) != 0) {
    func_0x0412a280(auStack_1b8[2],auStack_1b8[0] & 0xfffffffffffffffe);
  }
  if (lStack_e8 != 0) {
    (**(code **)(lStack_e8 + 8))(&lStack_e8);
  }
  if ((bStack_168 & 1) != 0) {
    func_0x0412a280(uStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x1494d5d  <any array element>
 */
