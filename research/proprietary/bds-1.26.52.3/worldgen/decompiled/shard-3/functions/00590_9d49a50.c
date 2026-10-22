/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9e49a50 (ELF vaddr 0x9d49a50)
 * Label: caller-of-callee
 * Body:  [[09e49a50, 09e4b3fd] [09e4b400, 09e4ba0a] [09e4ba10, 09e4ba4c] [09e4ba50, 09e4bd1d] [09e4c59d, 09e4c609]]
 * Ghidra: FUN_09e49a50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09e49a50(undefined8 *param_1)

{
  long *plVar1;
  byte **ppbVar2;
  byte *pbVar3;
  uint *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  code *pcVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  byte *pbVar29;
  byte *pbVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 *puVar33;
  byte *pbVar34;
  long lVar35;
  byte *pbVar36;
  ulong uVar37;
  byte *pbVar38;
  undefined8 **ppuVar39;
  bool bVar40;
  byte *pbStack_298;
  undefined8 uStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  long *plStack_258;
  undefined8 uStack_250;
  byte bStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined1 uStack_23e;
  undefined5 uStack_23d;
  undefined8 uStack_238;
  undefined8 uStack_230;
  byte *pbStack_228;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  byte *pbStack_1e0;
  uint *puStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 uStack_1b8;
  undefined2 uStack_1b7;
  undefined1 uStack_1b5;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_188;
  undefined1 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar31 = *param_1;
  plVar21 = (long *)param_1[1];
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
  }
  func_0x09e4c610(_DAT_01198494,uVar31,plVar21,0,&UNK_0138e8dd);
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar26 = plVar21 + 1;
    lVar35 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  uVar31 = *param_1;
  plVar21 = (long *)param_1[1];
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
  }
  func_0x09e4c610(_DAT_01198634,uVar31,plVar21,4,&UNK_011a11b7);
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar26 = plVar21 + 1;
    lVar35 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  uVar31 = *param_1;
  plStack_258 = (long *)param_1[1];
  if (plStack_258 != (long *)0x0) {
    LOCK();
    plStack_258[1] = plStack_258[1] + 1;
    UNLOCK();
    LOCK();
    plStack_258[1] = plStack_258[1] + 1;
    UNLOCK();
  }
  uStack_1b5 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = 0x65766514;
  uStack_1bc = 0x6e5f746e;
  uStack_1b8 = 0x61;
  uStack_1b7 = 0x656d;
  puStack_1c8 = (undefined8 *)0xab41ca7e683139a7;
  uStack_130 = 8;
  uStack_220 = 8;
  uStack_21c = 0;
  lStack_138 = 0;
  pbStack_228 = &UNK_0f1eddd8;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  pbStack_298 = pbStack_228;
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0f1edc08;
  pbStack_228 = (byte *)0x0;
  uStack_290 = (byte *)CONCAT44(uStack_21c,uStack_220);
  plVar21[4] = (long)&UNK_0f2ccd78;
  plVar21[5] = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[8] = 0;
  plVar21[9] = 0;
  plVar21[10] = 0;
  plVar21[0xb] = 0;
  plVar21[0xc] = 0;
  *(undefined1 *)(plVar21 + 0xd) = 0;
  func_0x04aa75f0(plVar21 + 0xe,&puStack_f8,&UNK_01254d89);
  *(undefined1 *)(plVar21 + 0x10) = 0;
  plVar26 = plVar21 + 0x11;
  plVar21[0x11] = 0;
  plVar21[0x12] = 0;
  plVar21[0x13] = 0;
  plVar21[0x14] = 0;
  plVar21[0x15] = 0;
  plVar21[0x16] = 0;
  plVar21[0x17] = 0xffffffff;
  plVar21[0x26] = 0;
  plVar21[0x27] = 0;
  plVar21[0x18] = 0;
  plVar21[0x19] = 0;
  plVar21[0x1a] = 0;
  plVar21[0x1b] = 0;
  plVar21[0x1c] = 0;
  plVar21[0x1d] = 0;
  plVar21[0x1e] = 0;
  plVar21[0x1f] = 0;
  plVar21[4] = (long)&UNK_0f1edc58;
  plVar21[0x2e] = 0;
  plVar21[0x2f] = 0;
  plVar21[0x30] = 0;
  plVar21[0x31] = 0;
  plVar21[0x32] = 0;
  plVar21[0x33] = 0;
  plVar21[0x34] = 0;
  *(undefined4 *)(plVar21 + 0x35) = 0x3f800000;
  plVar21[0x36] = 0;
  plVar21[0x37] = 0;
  if (pbStack_298 == (byte *)0x0) {
    pbVar25 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_298)(&pbStack_298,plVar21 + 0x36);
    pbVar25 = pbStack_298;
  }
  pbStack_298 = (byte *)0x0;
  plVar21[0x36] = (long)pbVar25;
  *(undefined1 *)(plVar21 + 0x3e) = 0;
  puVar4 = (uint *)(plVar21 + 0x12);
  if (plVar26 != (long *)&DAT_0f552138) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar21[0x14] = _DAT_0f552150;
        uVar16 = uRam000000000f55214c;
        uVar15 = _DAT_0f552148;
        uVar14 = uRam000000000f552144;
        *puVar4 = _DAT_0f552140;
        *(undefined4 *)((long)plVar21 + 0x94) = uVar14;
        *(undefined4 *)(plVar21 + 0x13) = uVar15;
        *(undefined4 *)((long)plVar21 + 0x9c) = uVar16;
      }
      else {
        FUN_04885070(puVar4,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar40 = (_DAT_0f552140 & 1) != 0;
      lVar35 = 0xf552141;
      if (bVar40) {
        lVar35 = _DAT_0f552150;
      }
      uVar37 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar40) {
        uVar37 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puVar4,lVar35,uVar37);
    }
  }
  plVar21[0x11] = _DAT_0f552138;
  plVar21[0x15] = 0;
  if (pbStack_298 != (byte *)0x0) {
    (**(code **)(pbStack_298 + 8))(&pbStack_298);
  }
  plVar1 = plVar21 + 1;
  if (pbStack_228 != (byte *)0x0) {
    (**(code **)(pbStack_228 + 8))(&pbStack_228);
  }
  LOCK();
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar22 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0f1edd38;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[4] = (long)&UNK_0f1edd88;
  plVar22[0xe] = (long)(plVar21 + 4);
  plVar22[0xf] = (long)plVar21;
  LOCK();
  plVar21[1] = plVar21[1] + 1;
  UNLOCK();
  pbStack_298 = (byte *)(plVar22 + 4);
  uStack_290 = (byte *)plVar22;
  puVar23 = (undefined4 *)func_0x09eca8d0(uVar31,&puStack_1c8);
  plVar27 = *(long **)(puVar23 + 0x24);
  if (plVar27 < *(long **)(puVar23 + 0x26)) {
    plVar27[2] = 0;
    plVar27[3] = 0;
    *plVar27 = 0;
    plVar27[1] = 0;
    plVar27[4] = 0;
    if (plVar27 != plVar26) {
      if ((*puVar4 & 1) == 0) {
        plVar27[3] = plVar21[0x14];
        lVar35 = plVar21[0x13];
        plVar27[1] = *(long *)puVar4;
        plVar27[2] = lVar35;
      }
      else {
        FUN_04885070(plVar27 + 1,plVar21[0x14],plVar21[0x13]);
      }
    }
    *plVar27 = *plVar26;
    plVar27[5] = (long)(plVar22 + 4);
    plVar27[6] = (long)plVar22;
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
    plVar27 = plVar27 + 7;
    *(long **)(puVar23 + 0x24) = plVar27;
  }
  else {
    plVar27 = (long *)func_0x09ecc7f0(puVar23 + 0x22,plVar26,&pbStack_298);
  }
  plVar26 = plStack_258;
  *(long **)(puVar23 + 0x24) = plVar27;
  uVar14 = *puVar23;
  uVar15 = puVar23[1];
  uVar16 = puVar23[2];
  uVar17 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar21[0xf];
  *(undefined4 *)(plVar21 + 0xe) = uVar14;
  *(undefined4 *)((long)plVar21 + 0x74) = uVar15;
  *(undefined4 *)(plVar21 + 0xf) = uVar16;
  *(undefined4 *)((long)plVar21 + 0x7c) = uVar17;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar27 = plVar22 + 1;
    lVar35 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  plVar22 = (long *)uStack_290;
  *(undefined1 *)(plVar21 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (uStack_290 != (byte *)0x0) {
    LOCK();
    plVar27 = (long *)((long)uStack_290 + 8);
    lVar35 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*(long *)uStack_290 + 0x10))(uStack_290);
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar35 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    LOCK();
    lVar35 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if ((uStack_1c0 & 1) != 0) {
    func_0x0412a280(uStack_1b0,CONCAT44(uStack_1bc,uStack_1c0) & 0xfffffffffffffffe);
  }
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar1 = plVar26 + 1;
    lVar35 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
    }
  }
  puStack_170 = (undefined8 *)0x0;
  puStack_178 = (undefined8 *)&UNK_0f1eddf0;
  puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar24 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  ppuVar39 = (undefined8 **)(plVar21 + 0x26);
  *puVar24 = 8;
  puVar24[1] = 0x746e6569626d610e;
  puVar24[2] = 0;
  puStack_170 = puVar24;
  if (ppuVar39 == &puStack_178) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar24);
  }
  else {
    puVar24 = (undefined8 *)&UNK_0f1eddf0;
    if ((*ppuVar39 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar39)[1])(ppuVar39), puVar24 = puStack_178, puStack_178 != (undefined8 *)0x0
       )) {
      (*(code *)*puVar24)(&puStack_178,ppuVar39);
      puVar24 = puStack_178;
    }
    else {
      puVar24 = (undefined8 *)0x0;
    }
    *ppuVar39 = puVar24;
  }
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar21 = plVar26 + 1;
    lVar35 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
    }
  }
  uVar31 = *param_1;
  plStack_258 = (long *)param_1[1];
  if (plStack_258 != (long *)0x0) {
    LOCK();
    plStack_258[1] = plStack_258[1] + 1;
    UNLOCK();
  }
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0x65766516;
  uStack_21c = 0x6e5f746e;
  uStack_218 = 0x73656d61;
  pbStack_228 = (byte *)0x3204bbcb0ba4f6b6;
  uStack_b0 = 0;
  pbStack_b8 = &UNK_0f1ee000;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0f1ede18;
  pbStack_298 = (byte *)0x0;
  uStack_290 = (byte *)0x0;
  if (pbStack_b8 == (byte *)0x0) {
    pbStack_298 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_b8)(&pbStack_b8,&pbStack_298);
    pbStack_298 = pbStack_b8;
  }
  pbStack_b8 = (byte *)0x0;
  plVar21[4] = (long)&UNK_0f2ccd78;
  plVar21[5] = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[8] = 0;
  plVar21[9] = 0;
  plVar21[10] = 0;
  plVar21[0xb] = 0;
  plVar21[0xc] = 0;
  *(undefined1 *)(plVar21 + 0xd) = 0;
  func_0x04aa75f0(plVar21 + 0xe,&lStack_138,&UNK_01254d89);
  *(undefined1 *)(plVar21 + 0x10) = 0;
  plVar26 = plVar21 + 0x11;
  plVar21[0x11] = 0;
  plVar21[0x12] = 0;
  plVar21[0x13] = 0;
  plVar21[0x14] = 0;
  plVar21[0x15] = 0;
  plVar21[0x16] = 0;
  plVar21[0x17] = 0xffffffff;
  plVar21[0x26] = 0;
  plVar21[0x27] = 0;
  plVar21[0x18] = 0;
  plVar21[0x19] = 0;
  plVar21[0x1a] = 0;
  plVar21[0x1b] = 0;
  plVar21[0x1c] = 0;
  plVar21[0x1d] = 0;
  plVar21[0x1e] = 0;
  plVar21[0x1f] = 0;
  plVar21[4] = (long)&UNK_0f1ede68;
  ppbVar2 = (byte **)(plVar21 + 0x2e);
  plVar21[0x2e] = 0;
  plVar21[0x2f] = 0;
  if (ppbVar2 != &pbStack_298) {
    if (pbStack_298 == (byte *)0x0) {
      pbVar25 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_298)(&pbStack_298,ppbVar2);
      pbVar25 = pbStack_298;
    }
    pbStack_298 = (byte *)0x0;
    *ppbVar2 = pbVar25;
  }
  puVar4 = (uint *)(plVar21 + 0x12);
  if (plVar26 != (long *)&DAT_0f551f58) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar21[0x14] = _DAT_0f551f70;
        uVar16 = uRam000000000f551f6c;
        uVar15 = _DAT_0f551f68;
        uVar14 = uRam000000000f551f64;
        *puVar4 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar21 + 0x94) = uVar14;
        *(undefined4 *)(plVar21 + 0x13) = uVar15;
        *(undefined4 *)((long)plVar21 + 0x9c) = uVar16;
      }
      else {
        FUN_04885070(puVar4,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar40 = (_DAT_0f551f60 & 1) != 0;
      lVar35 = 0xf551f61;
      if (bVar40) {
        lVar35 = _DAT_0f551f70;
      }
      uVar37 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar40) {
        uVar37 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar4,lVar35,uVar37);
    }
  }
  plVar1 = plVar21 + 1;
  plVar21[0x11] = _DAT_0f551f58;
  plVar21[0x15] = 0;
  if (pbStack_298 != (byte *)0x0) {
    (**(code **)(pbStack_298 + 8))(&pbStack_298);
  }
  LOCK();
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar22 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0f1edf60;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[4] = (long)&UNK_0f1edfb0;
  plVar22[0xe] = (long)(plVar21 + 4);
  plVar22[0xf] = (long)plVar21;
  LOCK();
  plVar21[1] = plVar21[1] + 1;
  UNLOCK();
  pbStack_298 = (byte *)(plVar22 + 4);
  uStack_290 = (byte *)plVar22;
  puVar23 = (undefined4 *)func_0x09eca8d0(uVar31,&pbStack_228);
  plVar27 = *(long **)(puVar23 + 0x24);
  if (plVar27 < *(long **)(puVar23 + 0x26)) {
    plVar27[2] = 0;
    plVar27[3] = 0;
    *plVar27 = 0;
    plVar27[1] = 0;
    plVar27[4] = 0;
    if (plVar27 != plVar26) {
      if ((*puVar4 & 1) == 0) {
        plVar27[3] = plVar21[0x14];
        lVar35 = plVar21[0x13];
        plVar27[1] = *(long *)puVar4;
        plVar27[2] = lVar35;
      }
      else {
        FUN_04885070(plVar27 + 1,plVar21[0x14],plVar21[0x13]);
      }
    }
    *plVar27 = *plVar26;
    plVar27[5] = (long)(plVar22 + 4);
    plVar27[6] = (long)plVar22;
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
    plVar27 = plVar27 + 7;
    *(long **)(puVar23 + 0x24) = plVar27;
  }
  else {
    plVar27 = (long *)func_0x09ecc7f0(puVar23 + 0x22,plVar26,&pbStack_298);
  }
  *(long **)(puVar23 + 0x24) = plVar27;
  uVar14 = *puVar23;
  uVar15 = puVar23[1];
  uVar16 = puVar23[2];
  uVar17 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar26 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar26 = *plVar26 + 1;
    UNLOCK();
  }
  plVar26 = (long *)plVar21[0xf];
  *(undefined4 *)(plVar21 + 0xe) = uVar14;
  *(undefined4 *)((long)plVar21 + 0x74) = uVar15;
  *(undefined4 *)(plVar21 + 0xf) = uVar16;
  *(undefined4 *)((long)plVar21 + 0x7c) = uVar17;
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar22 = plVar26 + 1;
    lVar35 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
    }
  }
  plVar26 = (long *)uStack_290;
  *(undefined1 *)(plVar21 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (uStack_290 != (byte *)0x0) {
    LOCK();
    plVar22 = (long *)((long)uStack_290 + 8);
    lVar35 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*(long *)uStack_290 + 0x10))(uStack_290);
      func_0x0412c2d0(plVar26);
    }
  }
  LOCK();
  lVar35 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    LOCK();
    lVar35 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  if (pbStack_b8 != (byte *)0x0) {
    (**(code **)(pbStack_b8 + 8))(&pbStack_b8);
  }
  if ((uStack_220 & 1) != 0) {
    func_0x0412a280(uStack_210,CONCAT44(uStack_21c,uStack_220) & 0xfffffffffffffffe);
  }
  puStack_70 = &UNK_09e4ce80;
  uStack_68 = 0;
  uStack_f0 = &UNK_09e4ce80;
  uStack_e8 = 0;
  lStack_78 = 0;
  puStack_f8 = (undefined8 *)&UNK_0f1ee720;
  pbVar25 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (pbVar25 == (byte *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  puStack_1c8 = puStack_f8;
  pbVar25[8] = 0;
  pbVar25[9] = 0;
  pbVar25[10] = 0;
  pbVar25[0xb] = 0;
  pbVar25[0xc] = 0;
  pbVar25[0xd] = 0;
  pbVar25[0xe] = 0;
  pbVar25[0xf] = 0;
  pbVar25[0x10] = 0;
  pbVar25[0x11] = 0;
  pbVar25[0x12] = 0;
  pbVar25[0x13] = 0;
  pbVar25[0x14] = 0;
  pbVar25[0x15] = 0;
  pbVar25[0x16] = 0;
  pbVar25[0x17] = 0;
  *(undefined **)pbVar25 = &UNK_0f1ee028;
  uStack_1c0 = (undefined4)uStack_f0;
  uStack_1bc = uStack_f0._4_4_;
  uStack_1b8 = (undefined1)uStack_e8;
  uStack_1b7 = (undefined2)((ulong)uStack_e8 >> 8);
  uStack_1b5 = (undefined1)((ulong)uStack_e8 >> 0x18);
  uStack_1b4 = uStack_e8._4_4_;
  puStack_f8 = (undefined8 *)0x0;
  puStack_178 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  *(undefined **)(pbVar25 + 0x20) = &UNK_0f2ccd78;
  pbVar25[0x28] = 0;
  pbVar25[0x29] = 0;
  pbVar25[0x2a] = 0;
  pbVar25[0x2b] = 0;
  pbVar25[0x2c] = 0;
  pbVar25[0x2d] = 0;
  pbVar25[0x2e] = 0;
  pbVar25[0x2f] = 0;
  pbVar25[0x30] = 0;
  pbVar25[0x31] = 0;
  pbVar25[0x32] = 0;
  pbVar25[0x33] = 0;
  pbVar25[0x34] = 0;
  pbVar25[0x35] = 0;
  pbVar25[0x36] = 0;
  pbVar25[0x37] = 0;
  pbVar25[0x38] = 0;
  pbVar25[0x39] = 0;
  pbVar25[0x3a] = 0;
  pbVar25[0x3b] = 0;
  pbVar25[0x3c] = 0;
  pbVar25[0x3d] = 0;
  pbVar25[0x3e] = 0;
  pbVar25[0x3f] = 0;
  pbVar25[0x40] = 0;
  pbVar25[0x41] = 0;
  pbVar25[0x42] = 0;
  pbVar25[0x43] = 0;
  pbVar25[0x44] = 0;
  pbVar25[0x45] = 0;
  pbVar25[0x46] = 0;
  pbVar25[0x47] = 0;
  pbVar25[0x48] = 0;
  pbVar25[0x49] = 0;
  pbVar25[0x4a] = 0;
  pbVar25[0x4b] = 0;
  pbVar25[0x4c] = 0;
  pbVar25[0x4d] = 0;
  pbVar25[0x4e] = 0;
  pbVar25[0x4f] = 0;
  pbVar25[0x50] = 0;
  pbVar25[0x51] = 0;
  pbVar25[0x52] = 0;
  pbVar25[0x53] = 0;
  pbVar25[0x54] = 0;
  pbVar25[0x55] = 0;
  pbVar25[0x56] = 0;
  pbVar25[0x57] = 0;
  pbVar25[0x58] = 0;
  pbVar25[0x59] = 0;
  pbVar25[0x5a] = 0;
  pbVar25[0x5b] = 0;
  pbVar25[0x5c] = 0;
  pbVar25[0x5d] = 0;
  pbVar25[0x5e] = 0;
  pbVar25[0x5f] = 0;
  pbVar25[0x60] = 0;
  pbVar25[0x61] = 0;
  pbVar25[0x62] = 0;
  pbVar25[99] = 0;
  pbVar25[100] = 0;
  pbVar25[0x65] = 0;
  pbVar25[0x66] = 0;
  pbVar25[0x67] = 0;
  pbVar25[0x68] = 0;
  func_0x04aa75f0(pbVar25 + 0x70,&pbStack_298,&UNK_01254d89);
  pbVar25[0x80] = 0;
  pbVar3 = pbVar25 + 0x88;
  pbVar25[0x88] = 0;
  pbVar25[0x89] = 0;
  pbVar25[0x8a] = 0;
  pbVar25[0x8b] = 0;
  pbVar25[0x8c] = 0;
  pbVar25[0x8d] = 0;
  pbVar25[0x8e] = 0;
  pbVar25[0x8f] = 0;
  pbVar25[0x90] = 0;
  pbVar25[0x91] = 0;
  pbVar25[0x92] = 0;
  pbVar25[0x93] = 0;
  pbVar25[0x94] = 0;
  pbVar25[0x95] = 0;
  pbVar25[0x96] = 0;
  pbVar25[0x97] = 0;
  pbVar25[0x98] = 0;
  pbVar25[0x99] = 0;
  pbVar25[0x9a] = 0;
  pbVar25[0x9b] = 0;
  pbVar25[0x9c] = 0;
  pbVar25[0x9d] = 0;
  pbVar25[0x9e] = 0;
  pbVar25[0x9f] = 0;
  pbVar25[0xa0] = 0;
  pbVar25[0xa1] = 0;
  pbVar25[0xa2] = 0;
  pbVar25[0xa3] = 0;
  pbVar25[0xa4] = 0;
  pbVar25[0xa5] = 0;
  pbVar25[0xa6] = 0;
  pbVar25[0xa7] = 0;
  pbVar25[0xa8] = 0;
  pbVar25[0xa9] = 0;
  pbVar25[0xaa] = 0;
  pbVar25[0xab] = 0;
  pbVar25[0xac] = 0;
  pbVar25[0xad] = 0;
  pbVar25[0xae] = 0;
  pbVar25[0xaf] = 0;
  pbVar25[0xb0] = 0;
  pbVar25[0xb1] = 0;
  pbVar25[0xb2] = 0;
  pbVar25[0xb3] = 0;
  pbVar25[0xb4] = 0;
  pbVar25[0xb5] = 0;
  pbVar25[0xb6] = 0;
  pbVar25[0xb7] = 0;
  pbVar25[0xb8] = 0xff;
  pbVar25[0xb9] = 0xff;
  pbVar25[0xba] = 0xff;
  pbVar25[0xbb] = 0xff;
  pbVar25[0xbc] = 0;
  pbVar25[0xbd] = 0;
  pbVar25[0xbe] = 0;
  pbVar25[0xbf] = 0;
  pbVar25[0x130] = 0;
  pbVar25[0x131] = 0;
  pbVar25[0x132] = 0;
  pbVar25[0x133] = 0;
  pbVar25[0x134] = 0;
  pbVar25[0x135] = 0;
  pbVar25[0x136] = 0;
  pbVar25[0x137] = 0;
  pbVar25[0x138] = 0;
  pbVar25[0x139] = 0;
  pbVar25[0x13a] = 0;
  pbVar25[0x13b] = 0;
  pbVar25[0x13c] = 0;
  pbVar25[0x13d] = 0;
  pbVar25[0x13e] = 0;
  pbVar25[0x13f] = 0;
  pbVar25[0xc0] = 0;
  pbVar25[0xc1] = 0;
  pbVar25[0xc2] = 0;
  pbVar25[0xc3] = 0;
  pbVar25[0xc4] = 0;
  pbVar25[0xc5] = 0;
  pbVar25[0xc6] = 0;
  pbVar25[199] = 0;
  pbVar25[200] = 0;
  pbVar25[0xc9] = 0;
  pbVar25[0xca] = 0;
  pbVar25[0xcb] = 0;
  pbVar25[0xcc] = 0;
  pbVar25[0xcd] = 0;
  pbVar25[0xce] = 0;
  pbVar25[0xcf] = 0;
  pbVar25[0xd0] = 0;
  pbVar25[0xd1] = 0;
  pbVar25[0xd2] = 0;
  pbVar25[0xd3] = 0;
  pbVar25[0xd4] = 0;
  pbVar25[0xd5] = 0;
  pbVar25[0xd6] = 0;
  pbVar25[0xd7] = 0;
  pbVar25[0xd8] = 0;
  pbVar25[0xd9] = 0;
  pbVar25[0xda] = 0;
  pbVar25[0xdb] = 0;
  pbVar25[0xdc] = 0;
  pbVar25[0xdd] = 0;
  pbVar25[0xde] = 0;
  pbVar25[0xdf] = 0;
  pbVar25[0xe0] = 0;
  pbVar25[0xe1] = 0;
  pbVar25[0xe2] = 0;
  pbVar25[0xe3] = 0;
  pbVar25[0xe4] = 0;
  pbVar25[0xe5] = 0;
  pbVar25[0xe6] = 0;
  pbVar25[0xe7] = 0;
  pbVar25[0xe8] = 0;
  pbVar25[0xe9] = 0;
  pbVar25[0xea] = 0;
  pbVar25[0xeb] = 0;
  pbVar25[0xec] = 0;
  pbVar25[0xed] = 0;
  pbVar25[0xee] = 0;
  pbVar25[0xef] = 0;
  pbVar25[0xf0] = 0;
  pbVar25[0xf1] = 0;
  pbVar25[0xf2] = 0;
  pbVar25[0xf3] = 0;
  pbVar25[0xf4] = 0;
  pbVar25[0xf5] = 0;
  pbVar25[0xf6] = 0;
  pbVar25[0xf7] = 0;
  pbVar25[0xf8] = 0;
  pbVar25[0xf9] = 0;
  pbVar25[0xfa] = 0;
  pbVar25[0xfb] = 0;
  pbVar25[0xfc] = 0;
  pbVar25[0xfd] = 0;
  pbVar25[0xfe] = 0;
  pbVar25[0xff] = 0;
  *(undefined **)(pbVar25 + 0x20) = &UNK_0f1ee130;
  ppuVar39 = (undefined8 **)(pbVar25 + 0x170);
  pbVar25[0x170] = 0;
  pbVar25[0x171] = 0;
  pbVar25[0x172] = 0;
  pbVar25[0x173] = 0;
  pbVar25[0x174] = 0;
  pbVar25[0x175] = 0;
  pbVar25[0x176] = 0;
  pbVar25[0x177] = 0;
  pbVar25[0x178] = 0;
  pbVar25[0x179] = 0;
  pbVar25[0x17a] = 0;
  pbVar25[0x17b] = 0;
  pbVar25[0x17c] = 0;
  pbVar25[0x17d] = 0;
  pbVar25[0x17e] = 0;
  pbVar25[0x17f] = 0;
  pbVar25[0x1b0] = 0;
  if (ppuVar39 != &puStack_178) {
    if (puStack_178 == (undefined8 *)0x0) {
      puVar24 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_178)(&puStack_178,ppuVar39);
      puVar24 = puStack_178;
    }
    puStack_178 = (undefined8 *)0x0;
    *ppuVar39 = puVar24;
  }
  pbVar30 = pbVar25 + 0x20;
  puVar4 = (uint *)(pbVar25 + 0x90);
  if (pbVar3 != &DAT_0f552108) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        *(undefined8 *)(pbVar25 + 0xa0) = _DAT_0f552120;
        uVar16 = uRam000000000f55211c;
        uVar15 = _DAT_0f552118;
        uVar14 = uRam000000000f552114;
        *puVar4 = _DAT_0f552110;
        *(undefined4 *)(pbVar25 + 0x94) = uVar14;
        *(undefined4 *)(pbVar25 + 0x98) = uVar15;
        *(undefined4 *)(pbVar25 + 0x9c) = uVar16;
      }
      else {
        FUN_04885070(puVar4,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar40 = (_DAT_0f552110 & 1) != 0;
      uVar31 = 0xf552111;
      if (bVar40) {
        uVar31 = _DAT_0f552120;
      }
      uVar37 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar40) {
        uVar37 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar4,uVar31,uVar37);
    }
  }
  *(undefined8 *)(pbVar25 + 0x88) = _DAT_0f552108;
  pbVar25[0xa8] = 0;
  pbVar25[0xa9] = 0;
  pbVar25[0xaa] = 0;
  pbVar25[0xab] = 0;
  pbVar25[0xac] = 0;
  pbVar25[0xad] = 0;
  pbVar25[0xae] = 0;
  pbVar25[0xaf] = 0;
  if (puStack_178 != (undefined8 *)0x0) {
    (*(code *)puStack_178[1])(&puStack_178);
  }
  *(undefined **)(pbVar25 + 0x20) = &UNK_0f1ee078;
  pbVar29 = pbVar25 + 0x1c0;
  pbVar25[0x1c0] = 0;
  pbVar25[0x1c1] = 0;
  pbVar25[0x1c2] = 0;
  pbVar25[0x1c3] = 0;
  pbVar25[0x1c4] = 0;
  pbVar25[0x1c5] = 0;
  pbVar25[0x1c6] = 0;
  pbVar25[0x1c7] = 0;
  pbVar25[0x1c8] = 0;
  pbVar25[0x1c9] = 0;
  pbVar25[0x1ca] = 0;
  pbVar25[0x1cb] = 0;
  pbVar25[0x1cc] = 0;
  pbVar25[0x1cd] = 0;
  pbVar25[0x1ce] = 0;
  pbVar25[0x1cf] = 0;
  if (puStack_1c8 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_1c8)(&puStack_1c8,pbVar29);
    puVar24 = puStack_1c8;
  }
  puStack_1c8 = (undefined8 *)0x0;
  *(undefined8 **)pbVar29 = puVar24;
  uStack_23e = 0;
  uStack_23d = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  bStack_248 = 0x12;
  uStack_247 = 0x697469646e6f63;
  uStack_240 = 0x6f;
  uStack_23f = 0x6e;
  uStack_250 = 0x6976a39422c2abd8;
  lStack_138 = 0;
  uStack_130 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  pbStack_228 = &UNK_0f1ee408;
  pbStack_1e0 = pbVar29;
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar26 == (long *)0x0) {
    FUN_0eec74c0(0x1d0,0);
  }
  pbStack_298 = pbStack_228;
  plVar26[1] = 0;
  plVar26[2] = 0;
  *plVar26 = (long)&UNK_0f1ee1e0;
  pbStack_228 = (byte *)0x0;
  uStack_290 = (byte *)CONCAT44(uStack_21c,uStack_220);
  plVar26[4] = (long)&UNK_0f2ccd78;
  plVar26[5] = 0;
  plVar26[6] = 0;
  plVar26[7] = 0;
  plVar26[8] = 0;
  plVar26[9] = 0;
  plVar26[10] = 0;
  plVar26[0xb] = 0;
  plVar26[0xc] = 0;
  *(undefined1 *)(plVar26 + 0xd) = 0;
  puStack_1d8 = puVar4;
  func_0x04aa75f0(plVar26 + 0xe,&plStack_188,&UNK_01254d89);
  *(undefined1 *)(plVar26 + 0x10) = 0;
  plVar26[0x11] = 0;
  plVar26[0x12] = 0;
  plVar26[0x13] = 0;
  plVar26[0x14] = 0;
  plVar26[0x15] = 0;
  plVar26[0x16] = 0;
  plVar26[0x17] = 0xffffffff;
  plVar26[0x26] = 0;
  plVar26[0x27] = 0;
  plVar26[0x18] = 0;
  plVar26[0x19] = 0;
  plVar26[0x1a] = 0;
  plVar26[0x1b] = 0;
  plVar26[0x1c] = 0;
  plVar26[0x1d] = 0;
  plVar26[0x1e] = 0;
  plVar26[0x1f] = 0;
  plVar26[4] = (long)&UNK_0f1ee230;
  plVar26[0x2e] = 0;
  plVar26[0x2f] = 0;
  if (pbStack_298 == (byte *)0x0) {
    pbVar29 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_298)(&pbStack_298,plVar26 + 0x2e);
    pbVar29 = pbStack_298;
  }
  pbStack_298 = (byte *)0x0;
  plVar26[0x2e] = (long)pbVar29;
  plStack_188 = plVar26 + 0x36;
  plVar26[0x36] = 0;
  plVar26[0x37] = 0;
  plVar26[0x38] = 0;
  uStack_180 = 0;
  puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar24 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar1 = plVar26 + 0x11;
  plVar26[0x36] = (long)puVar24;
  plVar26[0x38] = (long)(puVar24 + 5);
  puVar24[4] = 0;
  puVar24[1] = 0x746c75616665640e;
  puVar24[2] = 0;
  puVar24[3] = 0;
  *puVar24 = 0xdead4915c9c6c0d8;
  plVar26[0x37] = (long)(puVar24 + 5);
  puVar4 = (uint *)(plVar26 + 0x12);
  if (plVar1 != (long *)&DAT_0f5520d8) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        plVar26[0x14] = _DAT_0f5520f0;
        uVar16 = uRam000000000f5520ec;
        uVar15 = _DAT_0f5520e8;
        uVar14 = uRam000000000f5520e4;
        *puVar4 = _DAT_0f5520e0;
        *(undefined4 *)((long)plVar26 + 0x94) = uVar14;
        *(undefined4 *)(plVar26 + 0x13) = uVar15;
        *(undefined4 *)((long)plVar26 + 0x9c) = uVar16;
      }
      else {
        FUN_04885070(puVar4,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar40 = (_DAT_0f5520e0 & 1) != 0;
      lVar35 = 0xf5520e1;
      if (bVar40) {
        lVar35 = _DAT_0f5520f0;
      }
      uVar37 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar40) {
        uVar37 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      func_0x04885120(puVar4,lVar35,uVar37);
    }
  }
  plVar26[0x11] = _DAT_0f5520d8;
  plVar26[0x15] = 0;
  if (pbStack_298 != (byte *)0x0) {
    (**(code **)(pbStack_298 + 8))(&pbStack_298);
  }
  plVar22 = plVar26 + 1;
  if (pbStack_228 != (byte *)0x0) {
    (**(code **)(pbStack_228 + 8))(&pbStack_228);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar27 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar27[1] = 0;
  plVar27[2] = 0;
  *plVar27 = (long)&UNK_0f1ee310;
  plVar27[6] = 0;
  plVar27[7] = 0;
  plVar27[4] = (long)&UNK_0f1ee360;
  plVar27[0xe] = (long)(plVar26 + 4);
  plVar27[0xf] = (long)plVar26;
  LOCK();
  plVar26[1] = plVar26[1] + 1;
  UNLOCK();
  pbStack_298 = (byte *)(plVar27 + 4);
  uStack_290 = (byte *)plVar27;
  puVar23 = (undefined4 *)func_0x09ed2a60(pbVar30,&uStack_250);
  plVar28 = *(long **)(puVar23 + 0x24);
  if (plVar28 < *(long **)(puVar23 + 0x26)) {
    plVar28[2] = 0;
    plVar28[3] = 0;
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[4] = 0;
    if (plVar28 != plVar1) {
      if ((*puVar4 & 1) == 0) {
        plVar28[3] = plVar26[0x14];
        lVar35 = plVar26[0x13];
        plVar28[1] = *(long *)puVar4;
        plVar28[2] = lVar35;
      }
      else {
        FUN_04885070(plVar28 + 1,plVar26[0x14],plVar26[0x13]);
      }
    }
    *plVar28 = *plVar1;
    plVar28[5] = (long)(plVar27 + 4);
    plVar28[6] = (long)plVar27;
    LOCK();
    plVar27[1] = plVar27[1] + 1;
    UNLOCK();
    plVar28 = plVar28 + 7;
    *(long **)(puVar23 + 0x24) = plVar28;
  }
  else {
    plVar28 = (long *)func_0x09ed4b40(puVar23 + 0x22,plVar1,&pbStack_298);
  }
  *(long **)(puVar23 + 0x24) = plVar28;
  uVar14 = *puVar23;
  uVar15 = puVar23[1];
  uVar16 = puVar23[2];
  uVar17 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = (long *)plVar26[0xf];
  *(undefined4 *)(plVar26 + 0xe) = uVar14;
  *(undefined4 *)((long)plVar26 + 0x74) = uVar15;
  *(undefined4 *)(plVar26 + 0xf) = uVar16;
  *(undefined4 *)((long)plVar26 + 0x7c) = uVar17;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar27 = plVar1 + 1;
    lVar35 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  plVar1 = (long *)uStack_290;
  *(undefined1 *)(plVar26 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (uStack_290 != (byte *)0x0) {
    LOCK();
    plVar27 = (long *)((long)uStack_290 + 8);
    lVar35 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*(long *)uStack_290 + 0x10))(uStack_290);
      func_0x0412c2d0(plVar1);
    }
  }
  LOCK();
  lVar35 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    func_0x0412c2d0(plVar26);
    LOCK();
    lVar35 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    func_0x0412c2d0(plVar26);
  }
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if ((bStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,CONCAT71(uStack_247,bStack_248) & 0xfffffffffffffffe);
  }
  uStack_23d = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  bStack_248 = 0x14;
  uStack_247 = 0x6e5f746e657665;
  uStack_240 = 0x61;
  uStack_23f = 0x6d;
  uStack_23e = 0x65;
  uStack_250 = 0xab41ca7e683139a7;
  uStack_130 = 0x10;
  uStack_220 = 0x10;
  uStack_21c = 0;
  lStack_138 = 0;
  pbStack_228 = &UNK_0f1ee600;
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar26 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  pbStack_298 = pbStack_228;
  plVar26[1] = 0;
  plVar26[2] = 0;
  *plVar26 = (long)&UNK_0f1ee430;
  pbStack_228 = (byte *)0x0;
  uStack_290 = (byte *)CONCAT44(uStack_21c,uStack_220);
  plVar26[4] = (long)&UNK_0f2ccd78;
  plVar26[5] = 0;
  plVar26[6] = 0;
  plVar26[7] = 0;
  plVar26[8] = 0;
  plVar26[9] = 0;
  plVar26[10] = 0;
  plVar26[0xb] = 0;
  plVar26[0xc] = 0;
  *(undefined1 *)(plVar26 + 0xd) = 0;
  func_0x04aa75f0(plVar26 + 0xe,&plStack_188,&UNK_01254d89);
  *(undefined1 *)(plVar26 + 0x10) = 0;
  plVar1 = plVar26 + 0x11;
  plVar26[0x11] = 0;
  plVar26[0x12] = 0;
  plVar26[0x13] = 0;
  plVar26[0x14] = 0;
  plVar26[0x15] = 0;
  plVar26[0x16] = 0;
  plVar26[0x17] = 0xffffffff;
  plVar26[0x26] = 0;
  plVar26[0x27] = 0;
  plVar26[0x18] = 0;
  plVar26[0x19] = 0;
  plVar26[0x1a] = 0;
  plVar26[0x1b] = 0;
  plVar26[0x1c] = 0;
  plVar26[0x1d] = 0;
  plVar26[0x1e] = 0;
  plVar26[0x1f] = 0;
  plVar26[4] = (long)&UNK_0f1ee480;
  plVar26[0x2e] = 0;
  plVar26[0x2f] = 0;
  plVar26[0x30] = 0;
  plVar26[0x31] = 0;
  plVar26[0x32] = 0;
  plVar26[0x33] = 0;
  plVar26[0x34] = 0;
  *(undefined4 *)(plVar26 + 0x35) = 0x3f800000;
  plVar26[0x36] = 0;
  plVar26[0x37] = 0;
  if (pbStack_298 == (byte *)0x0) {
    pbVar29 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_298)(&pbStack_298,plVar26 + 0x36);
    pbVar29 = pbStack_298;
  }
  plStack_1d0 = plVar26 + 4;
  pbStack_298 = (byte *)0x0;
  plVar26[0x36] = (long)pbVar29;
  *(undefined1 *)(plVar26 + 0x3e) = 0;
  puVar4 = (uint *)(plVar26 + 0x12);
  if (plVar1 != (long *)&DAT_0f552138) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar26[0x14] = _DAT_0f552150;
        uVar16 = uRam000000000f55214c;
        uVar15 = _DAT_0f552148;
        uVar14 = uRam000000000f552144;
        *puVar4 = _DAT_0f552140;
        *(undefined4 *)((long)plVar26 + 0x94) = uVar14;
        *(undefined4 *)(plVar26 + 0x13) = uVar15;
        *(undefined4 *)((long)plVar26 + 0x9c) = uVar16;
      }
      else {
        FUN_04885070(puVar4,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar40 = (_DAT_0f552140 & 1) != 0;
      lVar35 = 0xf552141;
      if (bVar40) {
        lVar35 = _DAT_0f552150;
      }
      uVar37 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar40) {
        uVar37 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puVar4,lVar35,uVar37);
    }
  }
  plVar26[0x11] = _DAT_0f552138;
  plVar26[0x15] = 0;
  if (pbStack_298 != (byte *)0x0) {
    (**(code **)(pbStack_298 + 8))(&pbStack_298);
  }
  plVar22 = plVar26 + 1;
  if (pbStack_228 != (byte *)0x0) {
    (**(code **)(pbStack_228 + 8))(&pbStack_228);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  pbVar29 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar29 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  pbVar29[8] = 0;
  pbVar29[9] = 0;
  pbVar29[10] = 0;
  pbVar29[0xb] = 0;
  pbVar29[0xc] = 0;
  pbVar29[0xd] = 0;
  pbVar29[0xe] = 0;
  pbVar29[0xf] = 0;
  pbVar29[0x10] = 0;
  pbVar29[0x11] = 0;
  pbVar29[0x12] = 0;
  pbVar29[0x13] = 0;
  pbVar29[0x14] = 0;
  pbVar29[0x15] = 0;
  pbVar29[0x16] = 0;
  pbVar29[0x17] = 0;
  *(undefined **)pbVar29 = &UNK_0f1ee560;
  pbVar29[0x30] = 0;
  pbVar29[0x31] = 0;
  pbVar29[0x32] = 0;
  pbVar29[0x33] = 0;
  pbVar29[0x34] = 0;
  pbVar29[0x35] = 0;
  pbVar29[0x36] = 0;
  pbVar29[0x37] = 0;
  pbVar29[0x38] = 0;
  pbVar29[0x39] = 0;
  pbVar29[0x3a] = 0;
  pbVar29[0x3b] = 0;
  pbVar29[0x3c] = 0;
  pbVar29[0x3d] = 0;
  pbVar29[0x3e] = 0;
  pbVar29[0x3f] = 0;
  *(undefined **)(pbVar29 + 0x20) = &UNK_0f1ee5b0;
  *(long **)(pbVar29 + 0x70) = plStack_1d0;
  *(long **)(pbVar29 + 0x78) = plVar26;
  LOCK();
  plVar26[1] = plVar26[1] + 1;
  UNLOCK();
  pbStack_298 = pbVar29 + 0x20;
  uStack_290 = pbVar29;
  puVar23 = (undefined4 *)func_0x09ed2a60(pbVar30,&uStack_250);
  plVar27 = *(long **)(puVar23 + 0x24);
  if (plVar27 < *(long **)(puVar23 + 0x26)) {
    plVar27[2] = 0;
    plVar27[3] = 0;
    *plVar27 = 0;
    plVar27[1] = 0;
    plVar27[4] = 0;
    if (plVar27 != plVar1) {
      if ((*puVar4 & 1) == 0) {
        plVar27[3] = plVar26[0x14];
        lVar35 = plVar26[0x13];
        plVar27[1] = *(long *)puVar4;
        plVar27[2] = lVar35;
      }
      else {
        FUN_04885070(plVar27 + 1,plVar26[0x14],plVar26[0x13]);
      }
    }
    *plVar27 = *plVar1;
    plVar27[5] = (long)(pbVar29 + 0x20);
    plVar27[6] = (long)pbVar29;
    LOCK();
    *(long *)(pbVar29 + 8) = *(long *)(pbVar29 + 8) + 1;
    UNLOCK();
    plVar27 = plVar27 + 7;
    *(long **)(puVar23 + 0x24) = plVar27;
  }
  else {
    plVar27 = (long *)func_0x09ed4b40(puVar23 + 0x22,plVar1,&pbStack_298);
  }
  *(long **)(puVar23 + 0x24) = plVar27;
  uVar14 = *puVar23;
  uVar15 = puVar23[1];
  uVar16 = puVar23[2];
  uVar17 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = (long *)plVar26[0xf];
  *(undefined4 *)(plVar26 + 0xe) = uVar14;
  *(undefined4 *)((long)plVar26 + 0x74) = uVar15;
  *(undefined4 *)(plVar26 + 0xf) = uVar16;
  *(undefined4 *)((long)plVar26 + 0x7c) = uVar17;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar27 = plVar1 + 1;
    lVar35 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  pbVar29 = uStack_290;
  *(undefined1 *)(plVar26 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (uStack_290 != (byte *)0x0) {
    LOCK();
    pbVar36 = uStack_290 + 8;
    lVar35 = *(long *)pbVar36;
    *(long *)pbVar36 = *(long *)pbVar36 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*(long *)uStack_290 + 0x10))(uStack_290);
      func_0x0412c2d0(pbVar29);
    }
  }
  LOCK();
  lVar35 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    func_0x0412c2d0(plVar26);
    LOCK();
    lVar35 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    func_0x0412c2d0(plVar26);
  }
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if ((bStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,CONCAT71(uStack_247,bStack_248) & 0xfffffffffffffffe);
  }
  if (puStack_1c8 != (undefined8 *)0x0) {
    (*(code *)puStack_1c8[1])(&puStack_1c8);
  }
  pbVar29 = pbVar25 + 8;
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  LOCK();
  *(long *)pbVar29 = *(long *)pbVar29 + 1;
  UNLOCK();
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar26 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar26[1] = 0;
  plVar26[2] = 0;
  *plVar26 = (long)&UNK_0f1ee628;
  plVar26[6] = 0;
  plVar26[7] = 0;
  plVar26[4] = (long)&UNK_0f1ee678;
  plVar26[0xe] = (long)pbVar30;
  plVar26[0xf] = (long)pbVar25;
  LOCK();
  *(long *)(pbVar25 + 8) = *(long *)(pbVar25 + 8) + 1;
  UNLOCK();
  plVar1 = plVar26 + 1;
  puVar9 = (undefined4 *)plVar21[0x1c];
  puVar8 = (undefined4 *)plVar21[0x1b];
  for (puVar23 = puVar8; pbVar30 = pbVar29, puVar23 != puVar9; puVar23 = puVar23 + 0x2a) {
    if ((*(long *)(puVar23 + 0x1e) == 0) && (*(long *)(puVar23 + 0x20) == -1)) goto LAB_09e4b77c;
  }
  if (puVar9 < (undefined4 *)plVar21[0x1d]) {
    func_0x09ed86b0(puVar9);
    pbVar34 = (byte *)(puVar9 + 0x2a);
    plVar21[0x1c] = (long)pbVar34;
LAB_09e4b712:
    plVar21[0x1c] = (long)pbVar34;
    pbVar36 = *(byte **)(pbVar34 + -0xa8);
    if ((*pbVar36 & 1) == 0) {
      *pbVar36 = 0x26;
      pbVar36 = pbVar36 + 1;
    }
    else {
      pbVar36[8] = 0x13;
      pbVar36[9] = 0;
      pbVar36[10] = 0;
      pbVar36[0xb] = 0;
      pbVar36[0xc] = 0;
      pbVar36[0xd] = 0;
      pbVar36[0xe] = 0;
      pbVar36[0xf] = 0;
      pbVar36 = *(byte **)(pbVar36 + 0x10);
    }
    uVar16 = _UNK_01494d69;
    uVar15 = _UNK_01494d65;
    uVar14 = _UNK_01494d61;
    *(undefined4 *)pbVar36 = _DAT_01494d5d;
    *(undefined4 *)(pbVar36 + 4) = uVar14;
    *(undefined4 *)(pbVar36 + 8) = uVar15;
    *(undefined4 *)(pbVar36 + 0xc) = uVar16;
    pbVar36[0xf] = 0x65;
    pbVar36[0x10] = 0x6e;
    pbVar36[0x11] = 0x74;
    pbVar36[0x12] = 0x3e;
    pbVar36[0x13] = 0;
    lVar35 = plVar21[0x1c];
    puVar23 = (undefined4 *)(lVar35 - 0xa8);
    *(char *)(lVar35 + -7) = (char)plVar21[0x10];
    *(undefined8 *)(lVar35 + -0x30) = 0;
    *(undefined8 *)(lVar35 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar35 + -8) = 0;
LAB_09e4b77c:
    pbVar36 = *(byte **)(puVar23 + 0x24);
    if (pbVar36 < *(byte **)(puVar23 + 0x26)) {
      pbVar36[0x10] = 0;
      pbVar36[0x11] = 0;
      pbVar36[0x12] = 0;
      pbVar36[0x13] = 0;
      pbVar36[0x14] = 0;
      pbVar36[0x15] = 0;
      pbVar36[0x16] = 0;
      pbVar36[0x17] = 0;
      pbVar36[0x18] = 0;
      pbVar36[0x19] = 0;
      pbVar36[0x1a] = 0;
      pbVar36[0x1b] = 0;
      pbVar36[0x1c] = 0;
      pbVar36[0x1d] = 0;
      pbVar36[0x1e] = 0;
      pbVar36[0x1f] = 0;
      pbVar36[0] = 0;
      pbVar36[1] = 0;
      pbVar36[2] = 0;
      pbVar36[3] = 0;
      pbVar36[4] = 0;
      pbVar36[5] = 0;
      pbVar36[6] = 0;
      pbVar36[7] = 0;
      pbVar36[8] = 0;
      pbVar36[9] = 0;
      pbVar36[10] = 0;
      pbVar36[0xb] = 0;
      pbVar36[0xc] = 0;
      pbVar36[0xd] = 0;
      pbVar36[0xe] = 0;
      pbVar36[0xf] = 0;
      pbVar36[0x20] = 0;
      pbVar36[0x21] = 0;
      pbVar36[0x22] = 0;
      pbVar36[0x23] = 0;
      pbVar36[0x24] = 0;
      pbVar36[0x25] = 0;
      pbVar36[0x26] = 0;
      pbVar36[0x27] = 0;
      if (pbVar36 != pbVar3) {
        if ((*puStack_1d8 & 1) == 0) {
          *(undefined8 *)(pbVar36 + 0x18) = *(undefined8 *)(puStack_1d8 + 4);
          uVar31 = *(undefined8 *)(puStack_1d8 + 2);
          *(undefined8 *)(pbVar36 + 8) = *(undefined8 *)puStack_1d8;
          *(undefined8 *)(pbVar36 + 0x10) = uVar31;
        }
        else {
          FUN_04885070(pbVar36 + 8,*(undefined8 *)(pbVar25 + 0xa0),*(undefined8 *)(pbVar25 + 0x98));
        }
      }
      *(undefined8 *)pbVar36 = *(undefined8 *)pbVar3;
      *(long **)(pbVar36 + 0x28) = plVar26 + 4;
      *(long **)(pbVar36 + 0x30) = plVar26;
      LOCK();
      plVar26[1] = plVar26[1] + 1;
      UNLOCK();
      pbVar36 = pbVar36 + 0x38;
      *(byte **)(puVar23 + 0x24) = pbVar36;
      goto LAB_09e4baa3;
    }
    lVar35 = (long)pbVar36 - *(long *)(puVar23 + 0x22);
    pbVar36 = (byte *)((lVar35 >> 3) * 0x6db6db6db6db6db7 + 1);
    if (pbVar36 < (byte *)0x492492492492493) {
      lVar32 = (long)*(byte **)(puVar23 + 0x26) - *(long *)(puVar23 + 0x22) >> 3;
      pbVar10 = (byte *)(lVar32 * -0x2492492492492492);
      if (pbVar36 < pbVar10) {
        pbVar36 = pbVar10;
      }
      pbVar10 = (byte *)(puVar23 + 0x22);
      if (0x249249249249248 < (ulong)(lVar32 * 0x6db6db6db6db6db7)) {
        pbVar36 = (byte *)0x492492492492492;
      }
      pbStack_278 = pbVar10;
      if (pbVar36 == (byte *)0x0) {
        pbVar30 = (byte *)0x0;
      }
      else {
        if ((byte *)0x492492492492492 < pbVar36) goto LAB_09e4bce5;
        pbVar30 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar36 * 0x38);
        if (pbVar30 == (byte *)0x0) {
          FUN_0eec74c0((long)pbVar36 * 0x38,0);
          pbVar30 = (byte *)0x0;
        }
      }
      pbVar34 = pbVar30 + lVar35;
      pbStack_280 = pbVar30 + (long)pbVar36 * 0x38;
      pbVar36 = pbVar30 + lVar35 + 0x10;
      pbVar36[0] = 0;
      pbVar36[1] = 0;
      pbVar36[2] = 0;
      pbVar36[3] = 0;
      pbVar36[4] = 0;
      pbVar36[5] = 0;
      pbVar36[6] = 0;
      pbVar36[7] = 0;
      pbVar36[8] = 0;
      pbVar36[9] = 0;
      pbVar36[10] = 0;
      pbVar36[0xb] = 0;
      pbVar36[0xc] = 0;
      pbVar36[0xd] = 0;
      pbVar36[0xe] = 0;
      pbVar36[0xf] = 0;
      pbVar36 = pbVar30 + lVar35;
      pbVar36[0] = 0;
      pbVar36[1] = 0;
      pbVar36[2] = 0;
      pbVar36[3] = 0;
      pbVar36[4] = 0;
      pbVar36[5] = 0;
      pbVar36[6] = 0;
      pbVar36[7] = 0;
      pbVar36[8] = 0;
      pbVar36[9] = 0;
      pbVar36[10] = 0;
      pbVar36[0xb] = 0;
      pbVar36[0xc] = 0;
      pbVar36[0xd] = 0;
      pbVar36[0xe] = 0;
      pbVar36[0xf] = 0;
      pbVar36 = pbVar30 + lVar35 + 0x20;
      pbVar36[0] = 0;
      pbVar36[1] = 0;
      pbVar36[2] = 0;
      pbVar36[3] = 0;
      pbVar36[4] = 0;
      pbVar36[5] = 0;
      pbVar36[6] = 0;
      pbVar36[7] = 0;
      pbStack_288 = pbVar34;
      pbStack_298 = pbVar30;
      uStack_290 = pbVar34;
      if (pbVar34 != pbVar3) {
        if ((*puStack_1d8 & 1) == 0) {
          *(undefined8 *)(pbVar30 + lVar35 + 0x18) = *(undefined8 *)(puStack_1d8 + 4);
          uVar18 = puStack_1d8[1];
          uVar19 = puStack_1d8[2];
          uVar20 = puStack_1d8[3];
          *(uint *)(pbVar30 + lVar35 + 8) = *puStack_1d8;
          *(uint *)(pbVar30 + lVar35 + 0xc) = uVar18;
          *(uint *)(pbVar30 + lVar35 + 0x10) = uVar19;
          *(uint *)(pbVar30 + lVar35 + 0x14) = uVar20;
        }
        else {
          FUN_04885070(pbVar30 + lVar35 + 8,*(undefined8 *)(pbVar25 + 0xa0),
                       *(undefined8 *)(pbVar25 + 0x98));
        }
      }
      *(undefined8 *)pbVar34 = *(undefined8 *)pbVar3;
      *(long **)(pbVar34 + 0x28) = plVar26 + 4;
      *(long **)(pbVar34 + 0x30) = plVar26;
      LOCK();
      plVar26[1] = plVar26[1] + 1;
      UNLOCK();
      pbStack_288 = pbStack_288 + 0x38;
      puVar24 = *(undefined8 **)(puVar23 + 0x22);
      puVar11 = *(undefined8 **)(puVar23 + 0x24);
      pbVar3 = uStack_290 + ((long)puVar24 - (long)puVar11);
      pbVar30 = pbVar3;
      puVar33 = puVar24;
      if ((long)puVar24 - (long)puVar11 != 0) {
        do {
          pbVar30[0x10] = 0;
          pbVar30[0x11] = 0;
          pbVar30[0x12] = 0;
          pbVar30[0x13] = 0;
          pbVar30[0x14] = 0;
          pbVar30[0x15] = 0;
          pbVar30[0x16] = 0;
          pbVar30[0x17] = 0;
          pbVar30[0x18] = 0;
          pbVar30[0x19] = 0;
          pbVar30[0x1a] = 0;
          pbVar30[0x1b] = 0;
          pbVar30[0x1c] = 0;
          pbVar30[0x1d] = 0;
          pbVar30[0x1e] = 0;
          pbVar30[0x1f] = 0;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          pbVar30[8] = 0;
          pbVar30[9] = 0;
          pbVar30[10] = 0;
          pbVar30[0xb] = 0;
          pbVar30[0xc] = 0;
          pbVar30[0xd] = 0;
          pbVar30[0xe] = 0;
          pbVar30[0xf] = 0;
          pbVar30[0x20] = 0;
          pbVar30[0x21] = 0;
          pbVar30[0x22] = 0;
          pbVar30[0x23] = 0;
          pbVar30[0x24] = 0;
          pbVar30[0x25] = 0;
          pbVar30[0x26] = 0;
          pbVar30[0x27] = 0;
          *(undefined8 *)(pbVar30 + 0x18) = puVar33[3];
          uVar31 = puVar33[2];
          *(undefined8 *)(pbVar30 + 8) = puVar33[1];
          *(undefined8 *)(pbVar30 + 0x10) = uVar31;
          *(undefined2 *)(puVar33 + 1) = 0;
          *(undefined8 *)pbVar30 = *puVar33;
          uVar31 = puVar33[6];
          *(undefined8 *)(pbVar30 + 0x28) = puVar33[5];
          *(undefined8 *)(pbVar30 + 0x30) = uVar31;
          puVar33[5] = 0;
          puVar33[6] = 0;
          puVar33 = puVar33 + 7;
          pbVar30 = pbVar30 + 0x38;
        } while (puVar33 != puVar11);
        do {
          plVar21 = (long *)puVar24[6];
          if (plVar21 == (long *)0x0) {
LAB_09e4ba34:
            bVar7 = *(byte *)(puVar24 + 1);
          }
          else {
            LOCK();
            plVar22 = plVar21 + 1;
            lVar35 = *plVar22;
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (lVar35 != 0) goto LAB_09e4ba34;
            (**(code **)(*plVar21 + 0x10))(plVar21);
            func_0x0412c2d0(plVar21);
            bVar7 = *(byte *)(puVar24 + 1);
          }
          if ((bVar7 & 1) != 0) {
            func_0x0412a280(puVar24[3],puVar24[1] & 0xfffffffffffffffe);
          }
          puVar24 = puVar24 + 7;
        } while (puVar24 != puVar11);
        puVar24 = *(undefined8 **)pbVar10;
      }
      pbVar36 = pbStack_288;
      *(byte **)(puVar23 + 0x22) = pbVar3;
      *(byte **)(puVar23 + 0x24) = pbStack_288;
      lVar35 = *(long *)(puVar23 + 0x26);
      *(byte **)(puVar23 + 0x26) = pbStack_280;
      if (puVar24 != (undefined8 *)0x0) {
        func_0x0412a280(puVar24,lVar35 - (long)puVar24);
      }
LAB_09e4baa3:
      plVar21 = plStack_258;
      *(byte **)(puVar23 + 0x24) = pbVar36;
      uVar14 = *puVar23;
      uVar15 = puVar23[1];
      uVar16 = puVar23[2];
      uVar17 = puVar23[3];
      if (*(long *)(puVar23 + 2) != 0) {
        LOCK();
        plVar22 = (long *)(*(long *)(puVar23 + 2) + 8);
        *plVar22 = *plVar22 + 1;
        UNLOCK();
      }
      plVar22 = *(long **)(pbVar25 + 0x78);
      *(undefined4 *)(pbVar25 + 0x70) = uVar14;
      *(undefined4 *)(pbVar25 + 0x74) = uVar15;
      *(undefined4 *)(pbVar25 + 0x78) = uVar16;
      *(undefined4 *)(pbVar25 + 0x7c) = uVar17;
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar27 = plVar22 + 1;
        lVar35 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (lVar35 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      pbVar25[0x80] = *(byte *)((long)puVar23 + 0xa1);
      LOCK();
      lVar35 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar35 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        func_0x0412c2d0(plVar26);
        LOCK();
        lVar35 = *(long *)pbVar29;
        *(long *)pbVar29 = *(long *)pbVar29 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar35 = *(long *)pbVar29;
        *(long *)pbVar29 = *(long *)pbVar29 + -1;
        UNLOCK();
      }
      if (lVar35 == 0) {
        (**(code **)(*(long *)pbVar25 + 0x10))(pbVar25);
        func_0x0412c2d0(pbVar25);
        LOCK();
        lVar35 = *(long *)pbVar29;
        *(long *)pbVar29 = *(long *)pbVar29 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar35 = *(long *)pbVar29;
        *(long *)pbVar29 = *(long *)pbVar29 + -1;
        UNLOCK();
      }
      if (lVar35 == 0) {
        (**(code **)(*(long *)pbVar25 + 0x10))(pbVar25);
        func_0x0412c2d0(pbVar25);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if (plVar21 != (long *)0x0) {
        LOCK();
        plVar26 = plVar21 + 1;
        lVar35 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (lVar35 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
        }
      }
      return;
    }
  }
  else {
    uVar37 = ((long)puVar9 - (long)puVar8 >> 3) * -0x30c30c30c30c30c3 + 1;
    pbVar36 = pbVar25;
    if (0x186186186186186 < uVar37) goto LAB_09e4bcef;
    pbVar36 = (byte *)(plVar21 + 0x1b);
    lVar35 = plVar21[0x1d] - (long)puVar8 >> 3;
    uVar13 = lVar35 * -0x6186186186186186;
    if (uVar37 < uVar13) {
      uVar37 = uVar13;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar35 * -0x30c30c30c30c30c3)) {
      uVar37 = 0x186186186186186;
    }
    pbStack_278 = pbVar36;
    if (uVar37 == 0) {
      pbVar30 = (byte *)0x0;
LAB_09e4b538:
      uStack_290 = pbVar30 + ((long)puVar9 - (long)puVar8);
      pbStack_280 = pbVar30 + uVar37 * 0xa8;
      pbStack_298 = pbVar30;
      pbStack_288 = uStack_290;
      func_0x09ed86b0(uStack_290);
      pbVar34 = pbStack_288 + 0xa8;
      pbVar30 = (byte *)plVar21[0x1b];
      pbVar10 = (byte *)plVar21[0x1c];
      pbVar38 = uStack_290 + ((long)pbVar30 - (long)pbVar10);
      if (pbVar30 != pbVar10) {
        lVar35 = 0;
        do {
          uVar31 = *(undefined8 *)(pbVar30 + lVar35 + 8);
          *(undefined8 *)(pbVar38 + lVar35) = *(undefined8 *)(pbVar30 + lVar35);
          *(undefined8 *)(pbVar38 + lVar35 + 8) = uVar31;
          pbVar5 = pbVar30 + lVar35;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5 = pbVar38 + lVar35 + 0x20;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5 = pbVar38 + lVar35 + 0x10;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5 = pbVar38 + lVar35 + 0x30;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          *(undefined8 *)(pbVar38 + lVar35 + 0x28) = *(undefined8 *)(pbVar30 + lVar35 + 0x28);
          pbVar5 = pbVar30 + lVar35 + 0x18;
          uVar14 = *(undefined4 *)(pbVar5 + 4);
          uVar15 = *(undefined4 *)(pbVar5 + 8);
          uVar16 = *(undefined4 *)(pbVar5 + 0xc);
          pbVar6 = pbVar38 + lVar35 + 0x18;
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
          *(undefined4 *)(pbVar6 + 4) = uVar14;
          *(undefined4 *)(pbVar6 + 8) = uVar15;
          *(undefined4 *)(pbVar6 + 0xc) = uVar16;
          (pbVar30 + lVar35 + 0x18)[0] = 0;
          (pbVar30 + lVar35 + 0x18)[1] = 0;
          *(undefined8 *)(pbVar38 + lVar35 + 0x10) = *(undefined8 *)(pbVar30 + lVar35 + 0x10);
          func_0x04167a20(pbVar38 + lVar35 + 0x38,pbVar30 + lVar35 + 0x38);
          uVar31 = *(undefined8 *)(pbVar30 + lVar35 + 0x40 + 8);
          *(undefined8 *)(pbVar38 + lVar35 + 0x40) = *(undefined8 *)(pbVar30 + lVar35 + 0x40);
          *(undefined8 *)(pbVar38 + lVar35 + 0x40 + 8) = uVar31;
          uVar31 = *(undefined8 *)(pbVar30 + lVar35 + 0x50 + 8);
          *(undefined8 *)(pbVar38 + lVar35 + 0x50) = *(undefined8 *)(pbVar30 + lVar35 + 0x50);
          *(undefined8 *)(pbVar38 + lVar35 + 0x50 + 8) = uVar31;
          uVar31 = *(undefined8 *)(pbVar30 + lVar35 + 0x60 + 8);
          *(undefined8 *)(pbVar38 + lVar35 + 0x60) = *(undefined8 *)(pbVar30 + lVar35 + 0x60);
          *(undefined8 *)(pbVar38 + lVar35 + 0x60 + 8) = uVar31;
          pbVar5 = pbVar30 + lVar35 + 0x60;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          *(undefined8 *)(pbVar38 + lVar35 + 0x70) = *(undefined8 *)(pbVar30 + lVar35 + 0x70);
          uVar31 = *(undefined8 *)(pbVar30 + lVar35 + 0x78 + 8);
          *(undefined8 *)(pbVar38 + lVar35 + 0x78) = *(undefined8 *)(pbVar30 + lVar35 + 0x78);
          *(undefined8 *)(pbVar38 + lVar35 + 0x78 + 8) = uVar31;
          pbVar5 = pbVar38 + lVar35 + 0x88;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5 = pbVar38 + lVar35 + 0x98;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5 = pbVar30 + lVar35 + 0x88;
          uVar14 = *(undefined4 *)(pbVar5 + 4);
          uVar15 = *(undefined4 *)(pbVar5 + 8);
          uVar16 = *(undefined4 *)(pbVar5 + 0xc);
          pbVar6 = pbVar38 + lVar35 + 0x88;
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
          *(undefined4 *)(pbVar6 + 4) = uVar14;
          *(undefined4 *)(pbVar6 + 8) = uVar15;
          *(undefined4 *)(pbVar6 + 0xc) = uVar16;
          *(undefined8 *)(pbVar38 + lVar35 + 0x98) = *(undefined8 *)(pbVar30 + lVar35 + 0x98);
          pbVar5 = pbVar30 + lVar35 + 0x88;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5 = pbVar30 + lVar35 + 0x98;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          *(undefined2 *)(pbVar38 + lVar35 + 0xa0) = *(undefined2 *)(pbVar30 + lVar35 + 0xa0);
          lVar32 = lVar35 + 0xa8;
          lVar35 = lVar35 + 0xa8;
        } while (pbVar30 + lVar32 != pbVar10);
        do {
          func_0x09ecf770(pbVar30);
          pbVar30 = pbVar30 + 0xa8;
        } while (pbVar30 != pbVar10);
        pbVar30 = *(byte **)pbVar36;
      }
      plVar21[0x1b] = (long)pbVar38;
      plVar21[0x1c] = (long)pbVar34;
      lVar35 = plVar21[0x1d];
      plVar21[0x1d] = (long)pbStack_280;
      if (pbVar30 != (byte *)0x0) {
        func_0x0412a280(pbVar30,lVar35 - (long)pbVar30);
      }
      goto LAB_09e4b712;
    }
    if (uVar37 < 0x186186186186187) {
      pbVar30 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0xa8);
      if (pbVar30 == (byte *)0x0) {
        FUN_0eec74c0(uVar37 * 0xa8,0);
        pbVar30 = (byte *)0x0;
      }
      goto LAB_09e4b538;
    }
LAB_09e4bce5:
    func_0x04882eb0();
  }
  func_0x09ed88f0();
  pbVar29 = pbVar30;
LAB_09e4bcef:
  uVar31 = func_0x09ed8820();
  if ((*pbVar36 & 1) != 0) {
    func_0x0412a280(*(long *)(pbVar29 + 0x18),*(ulong *)(pbVar29 + 8) & 0xfffffffffffffffe);
  }
  func_0x09ed8830(&pbStack_298);
  LOCK();
  lVar35 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    func_0x0412c2d0(plVar26);
  }
  func_0x09ed0c70(pbVar25);
  func_0x09ed0ca0(pbVar25);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  func_0x09e4ce50(plStack_258);
  func_0x0eee2d70(uVar31);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}



/* ---- referenced strings ----
 * 0x1494d5d  <any array element>
 */
