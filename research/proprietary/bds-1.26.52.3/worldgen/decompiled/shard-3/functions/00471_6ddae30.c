/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6edae30 (ELF vaddr 0x6ddae30)
 * Label: caller-of-callee
 * Body:  [[06edae30, 06edc853] [06edc860, 06edc8c6] [06edc8d0, 06edcff5] [06edd000, 06edd03c] [06edd040, 06edd8a3] [06ede14e, 06ede1be] [06ede20b, 06ede278]]
 * Ghidra: FUN_06edae30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06edae30(undefined8 *param_1,long *param_2)

{
  undefined8 **ppuVar1;
  long **pplVar2;
  long lVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  int iVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined4 *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  byte *pbVar33;
  long lVar34;
  uint *puVar35;
  long lVar36;
  ulong uVar37;
  bool bVar38;
  undefined1 uStack_2d1;
  uint *puStack_2d0;
  uint *puStack_2c8;
  byte *pbStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  byte *pbStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long *plStack_270;
  long *plStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  byte *pbStack_250;
  long *plStack_248;
  long *plStack_228;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  byte *pbStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_190;
  ulong auStack_188 [4];
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_e8;
  uint *puStack_e0;
  ulong uStack_d8;
  byte *pbStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  *param_1 = &UNK_0f2ccd78;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  func_0x04aa75f0(param_1 + 10,&plStack_2b8,&UNK_01254d89);
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &UNK_0f094d38;
  ppuVar1 = (undefined8 **)(param_1 + 0x2a);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (ppuVar1 != &puStack_78) {
    if (puStack_78 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_78)(&puStack_78,ppuVar1);
      puVar18 = puStack_78;
    }
    puStack_78 = (undefined8 *)0x0;
    *ppuVar1 = puVar18;
  }
  if (param_1 != (undefined8 *)0xf5520a0) {
    puVar35 = (uint *)(param_1 + 0xe);
    if ((*puVar35 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        param_1[0x10] = _DAT_0f552120;
        uVar11 = uRam000000000f55211c;
        uVar10 = _DAT_0f552118;
        uVar9 = uRam000000000f552114;
        *puVar35 = _DAT_0f552110;
        *(undefined4 *)((long)param_1 + 0x74) = uVar9;
        *(undefined4 *)(param_1 + 0xf) = uVar10;
        *(undefined4 *)((long)param_1 + 0x7c) = uVar11;
      }
      else {
        FUN_04885070(puVar35,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar38 = (_DAT_0f552110 & 1) != 0;
      lVar26 = 0xf552111;
      if (bVar38) {
        lVar26 = _DAT_0f552120;
      }
      uVar37 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar38) {
        uVar37 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar35,lVar26,uVar37);
    }
  }
  param_1[0xd] = _DAT_0f552108;
  param_1[0x11] = 0;
  if (puStack_78 != (undefined8 *)0x0) {
    (*(code *)puStack_78[1])(&puStack_78);
  }
  *param_1 = &UNK_0f094c80;
  plVar19 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    lVar26 = 0;
  }
  else {
    (**(code **)*param_2)(param_2,plVar19);
    lVar26 = *param_2;
  }
  *param_2 = 0;
  *plVar19 = lVar26;
  uStack_254 = 0;
  pbStack_250 = (byte *)0x0;
  plStack_248 = (long *)0x0;
  uStack_260 = 0x6d616e16;
  uStack_25c = 0x69665f65;
  uStack_258 = 0x7265746c;
  plStack_268 = (long *)0x6df8fef8825e7ae9;
  puStack_1d0 = &UNK_06e60510;
  uStack_1c8 = 0;
  uStack_220 = 0x6e60510;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  lStack_1d8 = 0;
  plStack_228 = (long *)&UNK_0f095010;
  puStack_190 = param_1;
  plStack_e8 = plVar19;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  plStack_2b8 = plStack_228;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f094de8;
  uStack_2b0 = (long *)CONCAT44(uStack_21c,uStack_220);
  uStack_2a8 = (long *)CONCAT44(uStack_214,uStack_218);
  plStack_228 = (long *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&uStack_2d1,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  puStack_2d0 = (uint *)(plVar19 + 0x11);
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
  plVar19[4] = (long)&UNK_0f094e38;
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  plVar19[0x32] = 0;
  plVar19[0x33] = 0;
  plVar19[0x34] = 0;
  *(undefined4 *)(plVar19 + 0x35) = 0x3f800000;
  plVar19[0x36] = 0;
  plVar19[0x37] = 0;
  if (plStack_2b8 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_2b8)(&plStack_2b8,plVar19 + 0x36);
    plVar20 = plStack_2b8;
  }
  pbStack_2c0 = (byte *)(plVar19 + 4);
  plStack_2b8 = (long *)0x0;
  plVar19[0x36] = (long)plVar20;
  *(undefined1 *)(plVar19 + 0x3e) = 0;
  puStack_2c8 = (uint *)(plVar19 + 0x12);
  if (puStack_2d0 != (uint *)&DAT_0f552138) {
    if ((*puStack_2c8 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552150;
        uVar11 = uRam000000000f55214c;
        uVar10 = _DAT_0f552148;
        uVar9 = uRam000000000f552144;
        *puStack_2c8 = _DAT_0f552140;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        FUN_04885070(puStack_2c8,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar38 = (_DAT_0f552140 & 1) != 0;
      lVar26 = 0xf552141;
      if (bVar38) {
        lVar26 = _DAT_0f552150;
      }
      uVar37 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar38) {
        uVar37 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_2c8,lVar26,uVar37);
    }
  }
  plVar19[0x11] = _DAT_0f552138;
  plVar19[0x15] = 0;
  if (plStack_2b8 != (long *)0x0) {
    (*(code *)plStack_2b8[1])(&plStack_2b8);
  }
  plVar20 = plVar19 + 1;
  if (plStack_228 != (long *)0x0) {
    (*(code *)plStack_228[1])(&plStack_228);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0f094f18;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[4] = (long)&UNK_0f094f68;
  plVar21[0xe] = (long)pbStack_2c0;
  plVar21[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_2b8 = plVar21 + 4;
  uStack_2b0 = plVar21;
  puVar22 = (undefined4 *)func_0x06ee0000(param_1,&plStack_268);
  plVar25 = *(long **)(puVar22 + 0x24);
  if (plVar25 < *(long **)(puVar22 + 0x26)) {
    plVar25[2] = 0;
    plVar25[3] = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[4] = 0;
    if ((uint *)plVar25 != puStack_2d0) {
      puVar35 = (uint *)(plVar25 + 1);
      if ((*puStack_2c8 & 1) == 0) {
        plVar25[3] = *(long *)(puStack_2c8 + 4);
        lVar26 = *(long *)(puStack_2c8 + 2);
        *(undefined8 *)puVar35 = *(undefined8 *)puStack_2c8;
        plVar25[2] = lVar26;
      }
      else {
        puStack_2c8 = puVar35;
        FUN_04885070(puVar35,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar25 = *(long *)puStack_2d0;
    plVar25[5] = (long)(plVar21 + 4);
    plVar25[6] = (long)plVar21;
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
    plVar25 = plVar25 + 7;
    *(long **)(puVar22 + 0x24) = plVar25;
  }
  else {
    plVar25 = (long *)func_0x06ee2880(puVar22 + 0x22,puStack_2d0,&plStack_2b8);
  }
  *(long **)(puVar22 + 0x24) = plVar25;
  uVar9 = *puVar22;
  uVar10 = puVar22[1];
  uVar11 = puVar22[2];
  uVar12 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar21 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar21 = *plVar21 + 1;
    UNLOCK();
  }
  plVar21 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
  *(undefined4 *)(plVar19 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar25 = plVar21 + 1;
    lVar26 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  plVar21 = uStack_2b0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  if (uStack_2b0 != (long *)0x0) {
    LOCK();
    plVar25 = uStack_2b0 + 1;
    lVar26 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*uStack_2b0 + 0x10))(uStack_2b0);
      func_0x0412c2d0(plVar21);
    }
  }
  LOCK();
  lVar26 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  if (lStack_1d8 != 0) {
    (**(code **)(lStack_1d8 + 8))(&lStack_1d8);
  }
  if ((uStack_260 & 1) != 0) {
    func_0x0412a280(pbStack_250,CONCAT44(uStack_25c,uStack_260) & 0xfffffffffffffffe);
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  (**(code **)(*(long *)pbStack_2c0 + 0x10))(pbStack_2c0,&uStack_108);
  if ((uStack_108 & 1) != 0) {
    func_0x0412a280(uStack_f8,uStack_108 & 0xfffffffffffffffe);
  }
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0x6d616e16;
  uStack_21c = 0x69665f65;
  uStack_218 = 0x7265746c;
  plStack_228 = (long *)0x6df8fef8825e7ae9;
  uStack_260 = 0;
  uStack_25c = 0;
  plStack_268 = (long *)&UNK_0f095220;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f095038;
  plStack_2b8 = (long *)0x0;
  uStack_2b0 = (long *)0x0;
  if (plStack_268 == (long *)0x0) {
    plStack_2b8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_268)(&plStack_268,&plStack_2b8);
    plStack_2b8 = plStack_268;
  }
  plStack_268 = (long *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&lStack_1d8,&UNK_01254d89);
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
  plVar19[4] = (long)&UNK_0f095088;
  pplVar2 = (long **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (pplVar2 != &plStack_2b8) {
    if (plStack_2b8 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_2b8)(&plStack_2b8,pplVar2);
      plVar20 = plStack_2b8;
    }
    plStack_2b8 = (long *)0x0;
    *pplVar2 = plVar20;
  }
  puVar35 = (uint *)(plVar19 + 0x12);
  if (plVar19 + 0x11 != (long *)&DAT_0f551f58) {
    if ((*puVar35 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar19[0x14] = _DAT_0f551f70;
        uVar11 = uRam000000000f551f6c;
        uVar10 = _DAT_0f551f68;
        uVar9 = uRam000000000f551f64;
        *puVar35 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        FUN_04885070(puVar35,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar38 = (_DAT_0f551f60 & 1) != 0;
      lVar26 = 0xf551f61;
      if (bVar38) {
        lVar26 = _DAT_0f551f70;
      }
      uVar37 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar38) {
        uVar37 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar35,lVar26,uVar37);
    }
  }
  plVar20 = plVar19 + 1;
  plVar19[0x11] = _DAT_0f551f58;
  plVar19[0x15] = 0;
  if (plStack_2b8 != (long *)0x0) {
    (*(code *)plStack_2b8[1])(&plStack_2b8);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puStack_2d0 = (uint *)(plVar19 + 0x11);
  puStack_2c8 = puVar35;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0f095180;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[4] = (long)&UNK_0f0951d0;
  plVar21[0xe] = (long)(plVar19 + 4);
  plVar21[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  pbStack_2c0 = (byte *)(plVar19 + 4);
  plStack_2b8 = plVar21 + 4;
  uStack_2b0 = plVar21;
  puVar22 = (undefined4 *)func_0x06ee0000(puStack_190,&plStack_228);
  plVar25 = *(long **)(puVar22 + 0x24);
  if (plVar25 < *(long **)(puVar22 + 0x26)) {
    plVar25[2] = 0;
    plVar25[3] = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[4] = 0;
    if ((uint *)plVar25 != puStack_2d0) {
      puVar35 = (uint *)(plVar25 + 1);
      if ((*puStack_2c8 & 1) == 0) {
        plVar25[3] = *(long *)(puStack_2c8 + 4);
        lVar26 = *(long *)(puStack_2c8 + 2);
        *(undefined8 *)puVar35 = *(undefined8 *)puStack_2c8;
        plVar25[2] = lVar26;
      }
      else {
        puStack_2c8 = puVar35;
        FUN_04885070(puVar35,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar25 = *(long *)puStack_2d0;
    plVar25[5] = (long)(plVar21 + 4);
    plVar25[6] = (long)plVar21;
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
    plVar25 = plVar25 + 7;
    *(long **)(puVar22 + 0x24) = plVar25;
  }
  else {
    plVar25 = (long *)func_0x06ee2880(puVar22 + 0x22,puStack_2d0,&plStack_2b8);
  }
  *(long **)(puVar22 + 0x24) = plVar25;
  uVar9 = *puVar22;
  uVar10 = puVar22[1];
  uVar11 = puVar22[2];
  uVar12 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar21 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar21 = *plVar21 + 1;
    UNLOCK();
  }
  plVar21 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
  *(undefined4 *)(plVar19 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar25 = plVar21 + 1;
    lVar26 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  plVar21 = uStack_2b0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  if (uStack_2b0 != (long *)0x0) {
    LOCK();
    plVar25 = uStack_2b0 + 1;
    lVar26 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*uStack_2b0 + 0x10))(uStack_2b0);
      func_0x0412c2d0(plVar21);
    }
  }
  LOCK();
  lVar26 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  if (plStack_268 != (long *)0x0) {
    (*(code *)plStack_268[1])(&plStack_268);
  }
  if ((uStack_220 & 1) != 0) {
    func_0x0412a280(uStack_210,CONCAT44(uStack_21c,uStack_220) & 0xfffffffffffffffe);
  }
  puStack_1d0 = &UNK_06e60510;
  uStack_1c8 = 0;
  uStack_220 = 0x6e60510;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  lStack_1d8 = 0;
  plStack_228 = (long *)&UNK_0f095470;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  plStack_2b8 = plStack_228;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f095248;
  uStack_2b0 = (long *)CONCAT44(uStack_21c,uStack_220);
  uStack_2a8 = (long *)CONCAT44(uStack_214,uStack_218);
  plStack_228 = (long *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&uStack_2d1,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar20 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0f095298;
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  plVar19[0x32] = 0;
  plVar19[0x33] = 0;
  plVar19[0x34] = 0;
  *(undefined4 *)(plVar19 + 0x35) = 0x3f800000;
  plVar19[0x36] = 0;
  plVar19[0x37] = 0;
  if (plStack_2b8 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_2b8)(&plStack_2b8,plVar19 + 0x36);
    plVar21 = plStack_2b8;
  }
  plStack_2b8 = (long *)0x0;
  plVar19[0x36] = (long)plVar21;
  *(undefined1 *)(plVar19 + 0x3e) = 0;
  puStack_2d0 = (uint *)(plVar19 + 0x12);
  if (plVar20 != (long *)&DAT_0f552138) {
    if ((*puStack_2d0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552150;
        uVar11 = uRam000000000f55214c;
        uVar10 = _DAT_0f552148;
        uVar9 = uRam000000000f552144;
        *puStack_2d0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        FUN_04885070(puStack_2d0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar38 = (_DAT_0f552140 & 1) != 0;
      lVar26 = 0xf552141;
      if (bVar38) {
        lVar26 = _DAT_0f552150;
      }
      uVar37 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar38) {
        uVar37 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_2d0,lVar26,uVar37);
    }
  }
  plVar19[0x11] = _DAT_0f552138;
  plVar19[0x15] = 0;
  if (plStack_2b8 != (long *)0x0) {
    (*(code *)plStack_2b8[1])(&plStack_2b8);
  }
  plVar21 = plVar19 + 1;
  if (plStack_228 != (long *)0x0) {
    (*(code *)plStack_228[1])(&plStack_228);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puStack_2c8 = (uint *)plVar21;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0f095378;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[4] = (long)&UNK_0f0953c8;
  plVar21[0xe] = (long)(plVar19 + 4);
  plVar21[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_2b8 = plVar21 + 4;
  uStack_2b0 = plVar21;
  puVar22 = (undefined4 *)func_0x06ee4a30(pbStack_2c0);
  plVar25 = *(long **)(puVar22 + 0x24);
  if (plVar25 < *(long **)(puVar22 + 0x26)) {
    plVar25[2] = 0;
    plVar25[3] = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[4] = 0;
    if (plVar25 != plVar20) {
      puVar35 = (uint *)(plVar25 + 1);
      if ((*puStack_2d0 & 1) == 0) {
        plVar25[3] = *(long *)(puStack_2d0 + 4);
        lVar26 = *(long *)(puStack_2d0 + 2);
        *(undefined8 *)puVar35 = *(undefined8 *)puStack_2d0;
        plVar25[2] = lVar26;
      }
      else {
        puStack_2d0 = puVar35;
        FUN_04885070(puVar35,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar25 = *plVar20;
    plVar25[5] = (long)(plVar21 + 4);
    plVar25[6] = (long)plVar21;
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
    plVar25 = plVar25 + 7;
    *(long **)(puVar22 + 0x24) = plVar25;
  }
  else {
    plVar25 = (long *)func_0x06ee70d0(puVar22 + 0x22,plVar20,&plStack_2b8);
  }
  puVar35 = puStack_2c8;
  *(long **)(puVar22 + 0x24) = plVar25;
  uVar9 = *puVar22;
  uVar10 = puVar22[1];
  uVar11 = puVar22[2];
  uVar12 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
  *(undefined4 *)(plVar19 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar21 = plVar20 + 1;
    lVar26 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  plVar20 = uStack_2b0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  if (uStack_2b0 != (long *)0x0) {
    LOCK();
    plVar21 = uStack_2b0 + 1;
    lVar26 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*uStack_2b0 + 0x10))(uStack_2b0);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar26 = *(long *)puVar35;
  *(long *)puVar35 = *(long *)puVar35 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar26 = *(long *)puVar35;
    *(long *)puVar35 = *(long *)puVar35 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *(long *)puVar35;
    *(long *)puVar35 = *(long *)puVar35 + -1;
    UNLOCK();
  }
  pbVar33 = pbStack_2c0;
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    pbVar33 = pbStack_2c0;
  }
  pbStack_2c0 = pbVar33;
  if (lStack_1d8 != 0) {
    (**(code **)(lStack_1d8 + 8))(&lStack_1d8);
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uVar23 = (**(code **)(*(long *)pbVar33 + 0x10))(pbVar33,&uStack_128);
  if ((uStack_128 & 1) != 0) {
    func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
  }
  uStack_b0 = 0;
  plStack_b8 = (long *)&UNK_0f095680;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f095498;
  plStack_2b8 = (long *)0x0;
  uStack_2b0 = (long *)0x0;
  if (plStack_b8 == (long *)0x0) {
    plStack_2b8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_b8)(&plStack_b8,&plStack_2b8);
    plStack_2b8 = plStack_b8;
  }
  plStack_b8 = (long *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&plStack_228,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  pbVar33 = (byte *)(plVar19 + 0x11);
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
  plVar19[4] = (long)&UNK_0f0954e8;
  pplVar2 = (long **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  *(undefined1 *)(plVar19 + 0x36) = 0;
  if (pplVar2 != &plStack_2b8) {
    if (plStack_2b8 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_2b8)(&plStack_2b8,pplVar2);
      plVar20 = plStack_2b8;
    }
    plStack_2b8 = (long *)0x0;
    *pplVar2 = plVar20;
  }
  puStack_2d0 = (uint *)(plVar19 + 0x12);
  if (pbVar33 != &DAT_0f552108) {
    if ((*puStack_2d0 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552120;
        uVar11 = uRam000000000f55211c;
        uVar10 = _DAT_0f552118;
        uVar9 = uRam000000000f552114;
        *puStack_2d0 = _DAT_0f552110;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        FUN_04885070(puStack_2d0,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar38 = (_DAT_0f552110 & 1) != 0;
      lVar26 = 0xf552111;
      if (bVar38) {
        lVar26 = _DAT_0f552120;
      }
      uVar37 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar38) {
        uVar37 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puStack_2d0,lVar26,uVar37);
    }
  }
  plVar20 = plVar19 + 1;
  plVar19[0x11] = _DAT_0f552108;
  plVar19[0x15] = 0;
  pbStack_2c0 = pbVar33;
  if (plStack_2b8 != (long *)0x0) {
    (*(code *)plStack_2b8[1])(&plStack_2b8);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0f0955e0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[4] = (long)&UNK_0f095630;
  plVar21[0xe] = (long)(plVar19 + 4);
  plVar21[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  puStack_2c8 = (uint *)(plVar19 + 4);
  plStack_2b8 = plVar21 + 4;
  uStack_2b0 = plVar21;
  puVar22 = (undefined4 *)func_0x06ee4a30(uVar23);
  pbVar33 = *(byte **)(puVar22 + 0x24);
  if (pbVar33 < *(byte **)(puVar22 + 0x26)) {
    pbVar33[0x10] = 0;
    pbVar33[0x11] = 0;
    pbVar33[0x12] = 0;
    pbVar33[0x13] = 0;
    pbVar33[0x14] = 0;
    pbVar33[0x15] = 0;
    pbVar33[0x16] = 0;
    pbVar33[0x17] = 0;
    pbVar33[0x18] = 0;
    pbVar33[0x19] = 0;
    pbVar33[0x1a] = 0;
    pbVar33[0x1b] = 0;
    pbVar33[0x1c] = 0;
    pbVar33[0x1d] = 0;
    pbVar33[0x1e] = 0;
    pbVar33[0x1f] = 0;
    pbVar33[0] = 0;
    pbVar33[1] = 0;
    pbVar33[2] = 0;
    pbVar33[3] = 0;
    pbVar33[4] = 0;
    pbVar33[5] = 0;
    pbVar33[6] = 0;
    pbVar33[7] = 0;
    pbVar33[8] = 0;
    pbVar33[9] = 0;
    pbVar33[10] = 0;
    pbVar33[0xb] = 0;
    pbVar33[0xc] = 0;
    pbVar33[0xd] = 0;
    pbVar33[0xe] = 0;
    pbVar33[0xf] = 0;
    pbVar33[0x20] = 0;
    pbVar33[0x21] = 0;
    pbVar33[0x22] = 0;
    pbVar33[0x23] = 0;
    pbVar33[0x24] = 0;
    pbVar33[0x25] = 0;
    pbVar33[0x26] = 0;
    pbVar33[0x27] = 0;
    if (pbVar33 != pbStack_2c0) {
      puVar35 = (uint *)(pbVar33 + 8);
      if ((*puStack_2d0 & 1) == 0) {
        *(undefined8 *)(pbVar33 + 0x18) = *(undefined8 *)(puStack_2d0 + 4);
        uVar23 = *(undefined8 *)(puStack_2d0 + 2);
        *(undefined8 *)puVar35 = *(undefined8 *)puStack_2d0;
        *(undefined8 *)(pbVar33 + 0x10) = uVar23;
      }
      else {
        puStack_2d0 = puVar35;
        FUN_04885070(puVar35,plVar19[0x14],plVar19[0x13]);
      }
    }
    *(undefined8 *)pbVar33 = *(undefined8 *)pbStack_2c0;
    *(long **)(pbVar33 + 0x28) = plVar21 + 4;
    *(long **)(pbVar33 + 0x30) = plVar21;
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
    pbVar33 = pbVar33 + 0x38;
    *(byte **)(puVar22 + 0x24) = pbVar33;
  }
  else {
    pbVar33 = (byte *)func_0x06ee70d0(puVar22 + 0x22,pbStack_2c0,&plStack_2b8);
  }
  *(byte **)(puVar22 + 0x24) = pbVar33;
  uVar9 = *puVar22;
  uVar10 = puVar22[1];
  uVar11 = puVar22[2];
  uVar12 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar21 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar21 = *plVar21 + 1;
    UNLOCK();
  }
  plVar21 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
  *(undefined4 *)(plVar19 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar25 = plVar21 + 1;
    lVar26 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  plVar21 = uStack_2b0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  if (uStack_2b0 != (long *)0x0) {
    LOCK();
    plVar25 = uStack_2b0 + 1;
    lVar26 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*uStack_2b0 + 0x10))(uStack_2b0);
      func_0x0412c2d0(plVar21);
    }
  }
  LOCK();
  lVar26 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  pbVar33 = (byte *)(**(code **)(*(long *)puStack_2c8 + 0x10))(puStack_2c8,&uStack_148);
  if ((uStack_148 & 1) != 0) {
    func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
  }
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  uStack_254 = 0;
  pbStack_250 = (byte *)0x0;
  plStack_248 = (long *)0x0;
  uStack_260 = 0x6d616e16;
  uStack_25c = 0x69665f65;
  uStack_258 = 0x7265746c;
  plStack_268 = (long *)0x6df8fef8825e7ae9;
  puStack_1d0 = &UNK_06e60510;
  uStack_1c8 = 0;
  uStack_220 = 0x6e60510;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  lStack_1d8 = 0;
  plStack_228 = (long *)&UNK_0f0958d0;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  plStack_2b8 = plStack_228;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f0956a8;
  uStack_2b0 = (long *)CONCAT44(uStack_21c,uStack_220);
  uStack_2a8 = (long *)CONCAT44(uStack_214,uStack_218);
  plStack_228 = (long *)0x0;
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
  plStack_270 = plVar19;
  func_0x04aa75f0(plVar19 + 0xe,&uStack_2d1,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar20 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0f0956f8;
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  plVar19[0x32] = 0;
  plVar19[0x33] = 0;
  plVar19[0x34] = 0;
  *(undefined4 *)(plVar19 + 0x35) = 0x3f800000;
  plVar19[0x36] = 0;
  plVar19[0x37] = 0;
  if (plStack_2b8 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_2b8)(&plStack_2b8,plVar19 + 0x36);
    plVar21 = plStack_2b8;
  }
  plVar25 = plVar19 + 4;
  plStack_2b8 = (long *)0x0;
  plVar19[0x36] = (long)plVar21;
  *(undefined1 *)(plVar19 + 0x3e) = 0;
  puStack_e0 = (uint *)(plVar19 + 0x12);
  plVar21 = plVar20;
  if (plVar20 != (long *)&DAT_0f552138) {
    plVar21 = plVar19 + 0x2e;
    if ((*puStack_e0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552150;
        uVar11 = uRam000000000f55214c;
        uVar10 = _DAT_0f552148;
        uVar9 = uRam000000000f552144;
        *puStack_e0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        FUN_04885070(puStack_e0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar38 = (_DAT_0f552140 & 1) != 0;
      lVar26 = 0xf552141;
      if (bVar38) {
        lVar26 = _DAT_0f552150;
      }
      uVar37 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar38) {
        uVar37 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_e0,lVar26,uVar37);
    }
  }
  plVar19[0x11] = _DAT_0f552138;
  plVar19[0x15] = 0;
  if (plStack_2b8 != (long *)0x0) {
    (*(code *)plStack_2b8[1])(&plStack_2b8);
  }
  plVar28 = plVar19 + 1;
  if (plStack_228 != (long *)0x0) {
    (*(code *)plStack_228[1])(&plStack_228);
  }
  LOCK();
  *plVar28 = *plVar28 + 1;
  UNLOCK();
  plStack_c0 = plVar28;
  pbStack_1e0 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbStack_1e0 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar16 = plStack_248;
  plVar28 = plStack_268;
  pbStack_1e0[8] = 0;
  pbStack_1e0[9] = 0;
  pbStack_1e0[10] = 0;
  pbStack_1e0[0xb] = 0;
  pbStack_1e0[0xc] = 0;
  pbStack_1e0[0xd] = 0;
  pbStack_1e0[0xe] = 0;
  pbStack_1e0[0xf] = 0;
  pbStack_1e0[0x10] = 0;
  pbStack_1e0[0x11] = 0;
  pbStack_1e0[0x12] = 0;
  pbStack_1e0[0x13] = 0;
  pbStack_1e0[0x14] = 0;
  pbStack_1e0[0x15] = 0;
  pbStack_1e0[0x16] = 0;
  pbStack_1e0[0x17] = 0;
  *(undefined **)pbStack_1e0 = &UNK_0f0957d8;
  pbStack_1e0[0x30] = 0;
  pbStack_1e0[0x31] = 0;
  pbStack_1e0[0x32] = 0;
  pbStack_1e0[0x33] = 0;
  pbStack_1e0[0x34] = 0;
  pbStack_1e0[0x35] = 0;
  pbStack_1e0[0x36] = 0;
  pbStack_1e0[0x37] = 0;
  pbStack_1e0[0x38] = 0;
  pbStack_1e0[0x39] = 0;
  pbStack_1e0[0x3a] = 0;
  pbStack_1e0[0x3b] = 0;
  pbStack_1e0[0x3c] = 0;
  pbStack_1e0[0x3d] = 0;
  pbStack_1e0[0x3e] = 0;
  pbStack_1e0[0x3f] = 0;
  *(undefined **)(pbStack_1e0 + 0x20) = &UNK_0f095828;
  *(long **)(pbStack_1e0 + 0x70) = plVar25;
  *(long **)(pbStack_1e0 + 0x78) = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  pbStack_d0 = pbStack_1e0 + 8;
  uStack_d8 = *(ulong *)(pbVar33 + 0xb8);
  uVar37 = *(ulong *)(pbVar33 + 0xc0);
  pbVar29 = pbStack_1e0;
  puStack_2d0 = (uint *)pbVar33;
  puStack_2c8 = (uint *)pbStack_1e0;
  plStack_c8 = plVar25;
  if (uStack_d8 != uVar37) {
    if ((uStack_260 & 1) == 0) {
      pbVar29 = (byte *)(ulong)((byte)uStack_260 >> 1);
      pbStack_2c0 = (byte *)((long)&uStack_260 + 1);
    }
    else {
      pbVar29 = (byte *)CONCAT44(uStack_254,uStack_258);
      pbStack_2c0 = pbStack_250;
    }
    lVar26 = uStack_d8 + 0x19;
    do {
      if (*(long **)(lVar26 + -9) == plVar28) {
        if ((*(long ***)(lVar26 + 0x17) == &plStack_268) && ((long *)(lVar26 + -9) == plVar16)) {
LAB_06edcd55:
          puVar22 = (undefined4 *)(lVar26 + -0x19);
          plVar19 = plStack_270;
          goto LAB_06edcd63;
        }
        bVar5 = *(byte *)(lVar26 + -1);
        if ((bVar5 & 1) == 0) {
          pbVar33 = (byte *)(ulong)(bVar5 >> 1);
        }
        else {
          pbVar33 = *(byte **)(lVar26 + 7);
        }
        if (pbVar33 == pbVar29) {
          lVar32 = lVar26;
          if ((bVar5 & 1) != 0) {
            lVar32 = *(long *)(lVar26 + 0xf);
          }
          iVar17 = func_0x0eee3000(lVar32,pbStack_2c0,pbVar29);
          if (iVar17 == 0) {
            *(long ***)(lVar26 + 0x17) = &plStack_268;
            plStack_248 = (long *)(lVar26 + -9);
            goto LAB_06edcd55;
          }
        }
      }
      *(undefined8 *)(lVar26 + 0x17) = 0;
      uVar31 = lVar26 + 0x8f;
      lVar26 = lVar26 + 0xa8;
      plVar19 = plVar16;
      plVar21 = plVar28;
    } while (uVar31 != uVar37);
  }
  plVar25 = plStack_270;
  puVar35 = puStack_2d0;
  if (uVar37 < *(ulong *)((long)puStack_2d0 + 200)) {
    func_0x06eec630(uVar37);
    plVar19 = (long *)(uVar37 + 0xa8);
    *(long **)((long)puVar35 + 0xc0) = plVar19;
    plVar25 = plStack_270;
LAB_06edcba3:
    *(long **)((long)puVar35 + 0xc0) = plVar19;
    func_0x0b63b6d0(plVar19[-0x15],&plStack_268);
    lVar26 = *(long *)((long)puVar35 + 0xc0);
    *(byte *)(lVar26 + -7) = *(byte *)((long)puVar35 + 0x60);
    if ((long **)(lVar26 + -0x98) != &plStack_268) {
      puVar35 = (uint *)(lVar26 + -0x90);
      if ((*(byte *)puVar35 & 1) == 0) {
        if ((uStack_260 & 1) == 0) {
          *(byte **)(lVar26 + -0x80) = pbStack_250;
          *puVar35 = uStack_260;
          *(undefined4 *)(lVar26 + -0x8c) = uStack_25c;
          *(undefined4 *)(lVar26 + -0x88) = uStack_258;
          *(undefined4 *)(lVar26 + -0x84) = uStack_254;
          puVar35 = puStack_2d0;
        }
        else {
          FUN_04885070(puVar35,pbStack_250,CONCAT44(uStack_254,uStack_258));
          puVar35 = puStack_2d0;
        }
      }
      else {
        bVar38 = (uStack_260 & 1) != 0;
        pbVar33 = (byte *)((long)&uStack_260 + 1);
        if (bVar38) {
          pbVar33 = pbStack_250;
        }
        uVar37 = (ulong)((byte)uStack_260 >> 1);
        if (bVar38) {
          uVar37 = CONCAT44(uStack_254,uStack_258);
        }
        func_0x04885120(puVar35,pbVar33,uVar37);
        puVar35 = puStack_2d0;
      }
    }
    *(long **)(lVar26 + -0x98) = plStack_268;
    *(undefined8 *)(lVar26 + -0x78) = 0;
    func_0x04aa9390(&plStack_2b8,&uStack_260,*(byte *)((long)puVar35 + 0x60));
    lVar26 = *(long *)((long)puVar35 + 0xc0);
    func_0x04167a70(lVar26 + -0x70,&plStack_2b8);
    *(long **)(lVar26 + -0x68) = uStack_2b0;
    *(long **)(lVar26 + -0x60) = uStack_2a8;
    *(long **)(lVar26 + -0x58) = plStack_2a0;
    *(byte **)(lVar26 + -0x50) = pbStack_298;
    uVar9 = (undefined4)uStack_290;
    uVar10 = uStack_290._4_4_;
    uVar11 = (undefined4)uStack_288;
    uVar12 = uStack_288._4_4_;
    uStack_290 = 0;
    uStack_288 = (byte *)0x0;
    plVar19 = *(long **)(lVar26 + -0x40);
    *(undefined4 *)(lVar26 + -0x48) = uVar9;
    *(undefined4 *)(lVar26 + -0x44) = uVar10;
    *(undefined4 *)(lVar26 + -0x40) = uVar11;
    *(undefined4 *)(lVar26 + -0x3c) = uVar12;
    if (plVar19 != (long *)0x0) {
      LOCK();
      plVar21 = plVar19 + 1;
      lVar32 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
    }
    pbVar29 = uStack_288;
    *(undefined8 *)(lVar26 + -0x38) = uStack_280;
    if (uStack_288 != (byte *)0x0) {
      LOCK();
      pbVar33 = uStack_288 + 8;
      lVar26 = *(long *)pbVar33;
      *(long *)pbVar33 = *(long *)pbVar33 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*(long *)uStack_288 + 0x10))(uStack_288);
        func_0x0412c2d0(pbVar29);
      }
    }
    func_0x04167a40(&plStack_2b8);
    lVar26 = *(long *)((long)puVar35 + 0xc0);
    *(undefined1 *)(lVar26 + -8) = 0;
    puVar22 = (undefined4 *)(lVar26 + -0xa8);
    plVar19 = plVar25;
LAB_06edcd63:
    puVar35 = (uint *)((long)puStack_2c8 + 0x20);
    plVar21 = *(long **)(puVar22 + 0x24);
    if (plVar21 < *(long **)(puVar22 + 0x26)) {
      plVar21[2] = 0;
      plVar21[3] = 0;
      *plVar21 = 0;
      plVar21[1] = 0;
      plVar21[4] = 0;
      if (plVar21 != plVar20) {
        if ((*puStack_e0 & 1) == 0) {
          plVar21[3] = *(long *)(puStack_e0 + 4);
          lVar26 = *(long *)(puStack_e0 + 2);
          plVar21[1] = *(long *)puStack_e0;
          plVar21[2] = lVar26;
        }
        else {
          FUN_04885070(plVar21 + 1,plVar19[0x14],plVar19[0x13]);
        }
      }
      *plVar21 = *plVar20;
      plVar21[5] = (long)puVar35;
      plVar21[6] = (long)pbStack_1e0;
      LOCK();
      *(long *)(pbStack_1e0 + 8) = *(long *)(pbStack_1e0 + 8) + 1;
      UNLOCK();
      plVar21 = plVar21 + 7;
      *(long **)(puVar22 + 0x24) = plVar21;
      goto LAB_06edd09c;
    }
    plVar21 = (long *)((long)plVar21 - *(long *)(puVar22 + 0x22));
    uVar37 = ((long)plVar21 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar37 < 0x492492492492493) {
      lVar26 = (long)*(long **)(puVar22 + 0x26) - *(long *)(puVar22 + 0x22) >> 3;
      uVar31 = lVar26 * -0x2492492492492492;
      if (uVar37 < uVar31) {
        uVar37 = uVar31;
      }
      pbStack_2c0 = (byte *)(puVar22 + 0x22);
      if (0x249249249249248 < (ulong)(lVar26 * 0x6db6db6db6db6db7)) {
        uVar37 = 0x492492492492492;
      }
      puStack_2c8 = puVar35;
      pbStack_298 = pbStack_2c0;
      if (uVar37 == 0) {
        plVar19 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar37) goto LAB_06edd869;
        plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x38);
        if (plVar19 == (long *)0x0) {
          FUN_0eec74c0(uVar37 * 0x38,0);
          plVar19 = (long *)0x0;
        }
      }
      plVar25 = (long *)((long)plVar19 + (long)plVar21);
      plStack_2a0 = plVar19 + uVar37 * 7;
      *(undefined8 *)((long)(plVar19 + 2) + (long)plVar21) = 0;
      ((undefined8 *)((long)(plVar19 + 2) + (long)plVar21))[1] = 0;
      *(undefined8 *)((long)plVar19 + (long)plVar21) = 0;
      ((undefined8 *)((long)plVar19 + (long)plVar21))[1] = 0;
      *(undefined8 *)((long)(plVar19 + 4) + (long)plVar21) = 0;
      uStack_2a8 = plVar25;
      plStack_2b8 = plVar19;
      uStack_2b0 = plVar25;
      if (plVar25 != plVar20) {
        if ((*puStack_e0 & 1) == 0) {
          *(long *)((long)plVar21 + (long)(plVar19 + 3)) = *(long *)(puStack_e0 + 4);
          uVar13 = puStack_e0[1];
          uVar14 = puStack_e0[2];
          uVar15 = puStack_e0[3];
          *(uint *)((long)plVar21 + (long)(plVar19 + 1)) = *puStack_e0;
          *(uint *)((long)plVar21 + (long)plVar19 + 0xc) = uVar13;
          *(uint *)((long)plVar21 + (long)(plVar19 + 2)) = uVar14;
          *(uint *)((long)plVar21 + (long)plVar19 + 0x14) = uVar15;
        }
        else {
          FUN_04885070((uint *)((long)plVar21 + (long)(plVar19 + 1)),plStack_270[0x14],
                       plStack_270[0x13]);
        }
      }
      *plVar25 = *plVar20;
      plVar25[5] = (long)puStack_2c8;
      plVar25[6] = (long)pbStack_1e0;
      LOCK();
      *(long *)(pbStack_1e0 + 8) = *(long *)(pbStack_1e0 + 8) + 1;
      UNLOCK();
      uStack_2a8 = uStack_2a8 + 7;
      puVar30 = *(undefined8 **)(puVar22 + 0x22);
      puVar6 = *(undefined8 **)(puVar22 + 0x24);
      puVar18 = (undefined8 *)((long)uStack_2b0 + ((long)puVar30 - (long)puVar6));
      puVar24 = puVar18;
      puVar27 = puVar30;
      if ((long)puVar30 - (long)puVar6 != 0) {
        do {
          puVar24[2] = 0;
          puVar24[3] = 0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[4] = 0;
          puVar24[3] = puVar27[3];
          uVar23 = puVar27[2];
          puVar24[1] = puVar27[1];
          puVar24[2] = uVar23;
          *(undefined2 *)(puVar27 + 1) = 0;
          *puVar24 = *puVar27;
          uVar9 = *(undefined4 *)((long)puVar27 + 0x2c);
          uVar10 = *(undefined4 *)(puVar27 + 6);
          uVar11 = *(undefined4 *)((long)puVar27 + 0x34);
          *(undefined4 *)(puVar24 + 5) = *(undefined4 *)(puVar27 + 5);
          *(undefined4 *)((long)puVar24 + 0x2c) = uVar9;
          *(undefined4 *)(puVar24 + 6) = uVar10;
          *(undefined4 *)((long)puVar24 + 0x34) = uVar11;
          puVar27[5] = 0;
          puVar27[6] = 0;
          puVar27 = puVar27 + 7;
          puVar24 = puVar24 + 7;
        } while (puVar27 != puVar6);
        do {
          plVar19 = (long *)puVar30[6];
          if (plVar19 == (long *)0x0) {
LAB_06edd024:
            bVar5 = *(byte *)(puVar30 + 1);
          }
          else {
            LOCK();
            plVar20 = plVar19 + 1;
            lVar26 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar26 != 0) goto LAB_06edd024;
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
            bVar5 = *(byte *)(puVar30 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar30[3],puVar30[1] & 0xfffffffffffffffe);
          }
          puVar30 = puVar30 + 7;
        } while (puVar30 != puVar6);
        puVar30 = *(undefined8 **)pbStack_2c0;
      }
      plVar21 = uStack_2a8;
      *(undefined8 **)(puVar22 + 0x22) = puVar18;
      *(long **)(puVar22 + 0x24) = uStack_2a8;
      lVar26 = *(long *)(puVar22 + 0x26);
      *(long **)(puVar22 + 0x26) = plStack_2a0;
      plVar19 = plStack_270;
      if (puVar30 != (undefined8 *)0x0) {
        func_0x0412a280(puVar30,lVar26 - (long)puVar30);
        plVar19 = plStack_270;
      }
LAB_06edd09c:
      plVar20 = plStack_c8;
      *(long **)(puVar22 + 0x24) = plVar21;
      uVar9 = *puVar22;
      uVar10 = puVar22[1];
      uVar11 = puVar22[2];
      uVar12 = puVar22[3];
      if (*(long *)(puVar22 + 2) != 0) {
        LOCK();
        plVar21 = (long *)(*(long *)(puVar22 + 2) + 8);
        *plVar21 = *plVar21 + 1;
        UNLOCK();
      }
      plVar21 = (long *)plVar19[0xf];
      *(undefined4 *)(plVar19 + 0xe) = uVar9;
      *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
      *(undefined4 *)(plVar19 + 0xf) = uVar11;
      *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
      if (plVar21 != (long *)0x0) {
        LOCK();
        plVar25 = plVar21 + 1;
        lVar26 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
        }
      }
      pbVar33 = pbStack_1e0;
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
      LOCK();
      lVar26 = *(long *)pbStack_d0;
      *(long *)pbStack_d0 = *(long *)pbStack_d0 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*(long *)pbStack_1e0 + 0x10))(pbStack_1e0);
        func_0x0412c2d0(pbVar33);
        LOCK();
        lVar26 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar21 = plStack_c0;
      }
      else {
        LOCK();
        lVar26 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar21 = plStack_c0;
      }
      plStack_c0 = plVar21;
      if (lVar26 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
        LOCK();
        lVar26 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar26 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
      }
      if (lVar26 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      if (lStack_1d8 != 0) {
        (**(code **)(lStack_1d8 + 8))(&lStack_1d8);
      }
      if ((uStack_260 & 1) != 0) {
        func_0x0412a280(pbStack_250,CONCAT44(uStack_25c,uStack_260) & 0xfffffffffffffffe);
      }
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      (**(code **)(*plVar20 + 0x10))(plVar20,&uStack_168);
      if ((uStack_168 & 1) != 0) {
        func_0x0412a280(uStack_158,uStack_168 & 0xfffffffffffffffe);
      }
      uStack_254 = 0;
      pbStack_250 = (byte *)0x0;
      plStack_248 = (long *)0x0;
      uStack_260 = 0x5f6e6f10;
      uStack_25c = 0x656d616e;
      uStack_258 = 100;
      plStack_268 = (long *)0xa545de6914b9de18;
      puStack_1d0 = (undefined *)0x18;
      uStack_220 = 0x18;
      uStack_21c = 0;
      lStack_1d8 = 0;
      plStack_228 = (long *)&UNK_0f095ac8;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar19 == (long *)0x0) {
        FUN_0eec74c0(0x1b0,0);
      }
      plStack_2b8 = plStack_228;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&UNK_0f0958f8;
      plStack_228 = (long *)0x0;
      uStack_2b0 = (long *)CONCAT44(uStack_21c,uStack_220);
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
      func_0x04aa75f0(plVar19 + 0xe,&uStack_2d1,&UNK_01254d89);
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
      plVar19[4] = (long)&UNK_0f095948;
      plVar19[0x2e] = 0;
      plVar19[0x2f] = 0;
      if (plStack_2b8 == (long *)0x0) {
        plVar20 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_2b8)(&plStack_2b8,plVar19 + 0x2e);
        plVar20 = plStack_2b8;
      }
      plStack_2b8 = (long *)0x0;
      plVar19[0x2e] = (long)plVar20;
      puVar35 = (uint *)(plVar19 + 0x12);
      if (plVar19 + 0x11 == (long *)&DAT_0f551ef8) {
        plVar19[0x15] = 0;
      }
      else {
        if ((*puVar35 & 1) == 0) {
          if ((_DAT_0f551f00 & 1) == 0) {
            plVar19[0x14] = _DAT_0f551f10;
            uVar11 = uRam000000000f551f0c;
            uVar10 = _DAT_0f551f08;
            uVar9 = uRam000000000f551f04;
            *puVar35 = _DAT_0f551f00;
            *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
            *(undefined4 *)(plVar19 + 0x13) = uVar10;
            *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
          }
          else {
            FUN_04885070(puVar35,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
          }
        }
        else {
          bVar38 = (_DAT_0f551f00 & 1) != 0;
          lVar26 = 0xf551f01;
          if (bVar38) {
            lVar26 = _DAT_0f551f10;
          }
          uVar37 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
          if (bVar38) {
            uVar37 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
          }
          func_0x04885120(puVar35,lVar26,uVar37);
        }
        plVar19[0x11] = _DAT_0f551ef8;
        plVar19[0x15] = 0;
        if (plStack_2b8 != (long *)0x0) {
          (*(code *)plStack_2b8[1])(&plStack_2b8);
        }
      }
      plVar20 = plVar19 + 1;
      if (plStack_228 != (long *)0x0) {
        (*(code *)plStack_228[1])(&plStack_228);
      }
      LOCK();
      *plVar20 = *plVar20 + 1;
      UNLOCK();
      puStack_2c8 = puVar35;
      pbStack_2c0 = (byte *)(plVar19 + 0x11);
      plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar21 == (long *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      plVar21[1] = 0;
      plVar21[2] = 0;
      *plVar21 = (long)&UNK_0f095a28;
      plVar21[6] = 0;
      plVar21[7] = 0;
      plVar21[4] = (long)&UNK_0f095a78;
      plVar21[0xe] = (long)(plVar19 + 4);
      plVar21[0xf] = (long)plVar19;
      LOCK();
      plVar19[1] = plVar19[1] + 1;
      UNLOCK();
      puStack_2d0 = (uint *)(plVar19 + 4);
      plStack_2b8 = plVar21 + 4;
      uStack_2b0 = plVar21;
      puVar22 = (undefined4 *)func_0x06ee0000(puStack_190,&plStack_268);
      plVar25 = *(long **)(puVar22 + 0x24);
      if (plVar25 < *(long **)(puVar22 + 0x26)) {
        plVar25[2] = 0;
        plVar25[3] = 0;
        *plVar25 = 0;
        plVar25[1] = 0;
        plVar25[4] = 0;
        if ((byte *)plVar25 != pbStack_2c0) {
          puVar35 = (uint *)(plVar25 + 1);
          if ((*puStack_2c8 & 1) == 0) {
            plVar25[3] = *(long *)(puStack_2c8 + 4);
            lVar26 = *(long *)(puStack_2c8 + 2);
            *(undefined8 *)puVar35 = *(undefined8 *)puStack_2c8;
            plVar25[2] = lVar26;
          }
          else {
            puStack_2c8 = puVar35;
            FUN_04885070(puVar35,plVar19[0x14],plVar19[0x13]);
          }
        }
        *plVar25 = *(long *)pbStack_2c0;
        plVar25[5] = (long)(plVar21 + 4);
        plVar25[6] = (long)plVar21;
        LOCK();
        plVar21[1] = plVar21[1] + 1;
        UNLOCK();
        plVar25 = plVar25 + 7;
        *(long **)(puVar22 + 0x24) = plVar25;
      }
      else {
        plVar25 = (long *)func_0x06ee2880(puVar22 + 0x22,pbStack_2c0,&plStack_2b8);
      }
      puVar35 = puStack_2d0;
      *(long **)(puVar22 + 0x24) = plVar25;
      uVar9 = *puVar22;
      uVar10 = puVar22[1];
      uVar11 = puVar22[2];
      uVar12 = puVar22[3];
      if (*(long *)(puVar22 + 2) != 0) {
        LOCK();
        plVar21 = (long *)(*(long *)(puVar22 + 2) + 8);
        *plVar21 = *plVar21 + 1;
        UNLOCK();
      }
      plVar21 = (long *)plVar19[0xf];
      *(undefined4 *)(plVar19 + 0xe) = uVar9;
      *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
      *(undefined4 *)(plVar19 + 0xf) = uVar11;
      *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
      if (plVar21 != (long *)0x0) {
        LOCK();
        plVar25 = plVar21 + 1;
        lVar26 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
        }
      }
      plVar21 = uStack_2b0;
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
      if (uStack_2b0 != (long *)0x0) {
        LOCK();
        plVar25 = uStack_2b0 + 1;
        lVar26 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*uStack_2b0 + 0x10))(uStack_2b0);
          func_0x0412c2d0(plVar21);
        }
      }
      LOCK();
      lVar26 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
        LOCK();
        lVar26 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar26 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      if (lVar26 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      if (lStack_1d8 != 0) {
        (**(code **)(lStack_1d8 + 8))(&lStack_1d8);
      }
      if ((uStack_260 & 1) != 0) {
        func_0x0412a280(pbStack_250,CONCAT44(uStack_25c,uStack_260) & 0xfffffffffffffffe);
      }
      auStack_188[0] = 0;
      auStack_188[1] = 0;
      auStack_188[2] = 0;
      (**(code **)(*(long *)puVar35 + 0x10))(puVar35,auStack_188);
      if ((auStack_188[0] & 1) != 0) {
        func_0x0412a280(auStack_188[2],auStack_188[0] & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    uVar37 = uVar37 - uStack_d8;
    uVar31 = ((long)uVar37 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar31) goto LAB_06edd873;
    puVar35 = (uint *)((long)puStack_2d0 + 0xb8);
    lVar26 = (long)(*(ulong *)((long)puStack_2d0 + 200) - uStack_d8) >> 3;
    uVar8 = lVar26 * -0x6186186186186186;
    if (uVar31 < uVar8) {
      uVar31 = uVar8;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar26 * -0x30c30c30c30c30c3)) {
      uVar31 = 0x186186186186186;
    }
    pbStack_298 = (byte *)puVar35;
    if (uVar31 == 0) {
      plVar19 = (long *)0x0;
LAB_06edc9d0:
      uStack_2b0 = (long *)(uVar37 + (long)plVar19);
      plStack_2a0 = plVar19 + uVar31 * 0x15;
      plStack_2b8 = plVar19;
      uStack_2a8 = uStack_2b0;
      func_0x06eec630(uStack_2b0);
      plVar19 = uStack_2a8 + 0x15;
      lVar26 = *(long *)((long)puStack_2d0 + 0xb8);
      lVar32 = *(long *)((long)puStack_2d0 + 0xc0);
      lVar36 = (lVar26 - lVar32) + (long)uStack_2b0;
      if (lVar26 != lVar32) {
        lVar34 = 0;
        do {
          uVar23 = ((undefined8 *)(lVar26 + lVar34))[1];
          *(undefined8 *)(lVar36 + lVar34) = *(undefined8 *)(lVar26 + lVar34);
          ((undefined8 *)(lVar36 + lVar34))[1] = uVar23;
          *(undefined8 *)(lVar26 + lVar34) = 0;
          ((undefined8 *)(lVar26 + lVar34))[1] = 0;
          puVar18 = (undefined8 *)(lVar36 + 0x20 + lVar34);
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18 = (undefined8 *)(lVar36 + 0x10 + lVar34);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar36 + 0x30 + lVar34) = 0;
          *(undefined8 *)(lVar36 + 0x28 + lVar34) = *(undefined8 *)(lVar26 + 0x28 + lVar34);
          puVar22 = (undefined4 *)(lVar26 + 0x18 + lVar34);
          uVar9 = puVar22[1];
          uVar10 = puVar22[2];
          uVar11 = puVar22[3];
          puVar4 = (undefined4 *)(lVar36 + 0x18 + lVar34);
          *puVar4 = *puVar22;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(undefined2 *)(lVar26 + 0x18 + lVar34) = 0;
          *(undefined8 *)(lVar36 + 0x10 + lVar34) = *(undefined8 *)(lVar26 + 0x10 + lVar34);
          func_0x04167a20(lVar36 + lVar34 + 0x38,lVar26 + lVar34 + 0x38);
          puVar18 = (undefined8 *)(lVar26 + 0x40 + lVar34);
          uVar23 = puVar18[1];
          puVar30 = (undefined8 *)(lVar36 + 0x40 + lVar34);
          *puVar30 = *puVar18;
          puVar30[1] = uVar23;
          puVar18 = (undefined8 *)(lVar26 + 0x50 + lVar34);
          uVar23 = puVar18[1];
          puVar30 = (undefined8 *)(lVar36 + 0x50 + lVar34);
          *puVar30 = *puVar18;
          puVar30[1] = uVar23;
          puVar18 = (undefined8 *)(lVar26 + 0x60 + lVar34);
          uVar23 = puVar18[1];
          puVar30 = (undefined8 *)(lVar36 + 0x60 + lVar34);
          *puVar30 = *puVar18;
          puVar30[1] = uVar23;
          puVar18 = (undefined8 *)(lVar26 + 0x60 + lVar34);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar36 + 0x70 + lVar34) = *(undefined8 *)(lVar26 + 0x70 + lVar34);
          puVar18 = (undefined8 *)(lVar26 + 0x78 + lVar34);
          uVar23 = puVar18[1];
          puVar30 = (undefined8 *)(lVar36 + 0x78 + lVar34);
          *puVar30 = *puVar18;
          puVar30[1] = uVar23;
          puVar18 = (undefined8 *)(lVar36 + 0x88 + lVar34);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar36 + 0x98 + lVar34) = 0;
          puVar22 = (undefined4 *)(lVar26 + 0x88 + lVar34);
          uVar9 = puVar22[1];
          uVar10 = puVar22[2];
          uVar11 = puVar22[3];
          puVar4 = (undefined4 *)(lVar36 + 0x88 + lVar34);
          *puVar4 = *puVar22;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(undefined8 *)(lVar36 + 0x98 + lVar34) = *(undefined8 *)(lVar26 + 0x98 + lVar34);
          puVar18 = (undefined8 *)(lVar26 + 0x88 + lVar34);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar26 + 0x98 + lVar34) = 0;
          *(undefined2 *)(lVar36 + 0xa0 + lVar34) = *(undefined2 *)(lVar26 + 0xa0 + lVar34);
          lVar3 = lVar26 + lVar34;
          lVar34 = lVar34 + 0xa8;
        } while (lVar3 + 0xa8 != lVar32);
        do {
          func_0x06ee8d90(lVar26);
          lVar26 = lVar26 + 0xa8;
        } while (lVar26 != lVar32);
        lVar26 = *(long *)puVar35;
        plVar25 = plStack_270;
      }
      puVar35 = puStack_2d0;
      *(long *)((long)puStack_2d0 + 0xb8) = lVar36;
      *(long **)((long)puStack_2d0 + 0xc0) = plVar19;
      lVar32 = *(long *)((long)puStack_2d0 + 200);
      *(long **)((long)puStack_2d0 + 200) = plStack_2a0;
      if (lVar26 != 0) {
        func_0x0412a280(lVar26,lVar32 - lVar26);
      }
      goto LAB_06edcba3;
    }
    plVar19 = plStack_270;
    if (uVar31 < 0x186186186186187) {
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31 * 0xa8);
      if (plVar19 == (long *)0x0) {
        FUN_0eec74c0(uVar31 * 0xa8,0);
        plVar19 = (long *)0x0;
      }
      goto LAB_06edc9d0;
    }
LAB_06edd869:
    func_0x04882eb0();
  }
  func_0x06eec870();
LAB_06edd873:
  uVar23 = func_0x06eec7a0();
  if ((*puStack_2c8 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(uVar37 + 0x18),*(ulong *)(uVar37 + 8) & 0xfffffffffffffffe);
  }
  *(ulong *)((long)puVar35 + 0x90) = uVar37;
  pbVar33 = pbVar29 + 8;
  LOCK();
  lVar26 = *(long *)pbVar33;
  *(long *)pbVar33 = *(long *)pbVar33 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*(long *)pbVar29 + 0x10))(pbVar29);
    func_0x0412c2d0(pbVar29);
  }
  LOCK();
  lVar26 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  LOCK();
  lVar26 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  if (lStack_1d8 != 0) {
    (**(code **)(lStack_1d8 + 8))(&lStack_1d8);
  }
  if ((uStack_260 & 1) != 0) {
    func_0x0412a280(pbStack_250,CONCAT44(uStack_25c,uStack_260) & 0xfffffffffffffffe);
  }
  if (*plStack_e8 != 0) {
    (**(code **)(*plStack_e8 + 8))(plStack_e8);
  }
  func_0x06edfb50(puStack_190);
  func_0x0eee2d70(uVar23);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


