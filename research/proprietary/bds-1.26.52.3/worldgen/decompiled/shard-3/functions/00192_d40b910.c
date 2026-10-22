/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd50b910 (ELF vaddr 0xd40b910)
 * Label: callee-of:0x4de9260
 * Body:  [[0d50b910, 0d50c198] [0d50c1a0, 0d50c7a5] [0d50c7b0, 0d50c7ec] [0d50c7f0, 0d50d639] [0d50d640, 0d50de12] [0d50e353, 0d50e3b3] [0d50e547, 0d50e574] [0d50e5ab, 0d50e68d]]
 * Ghidra: FUN_0d50b910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d50b910(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  undefined4 *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined3 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  long *plVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  uint *puVar29;
  undefined8 *puVar30;
  uint *puVar31;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  undefined4 *puVar36;
  long *plVar37;
  long lVar38;
  bool bVar39;
  undefined8 uStack_318;
  undefined1 auStack_308 [5];
  undefined4 uStack_303;
  undefined4 uStack_2ff;
  undefined4 uStack_2fb;
  undefined2 uStack_2f7;
  undefined5 uStack_2f5;
  long lStack_2f0;
  long *plStack_2e8;
  uint *puStack_2c0;
  uint *puStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  undefined4 uStack_29f;
  undefined2 uStack_29b;
  undefined1 uStack_299;
  undefined1 uStack_298;
  undefined4 uStack_297;
  undefined2 uStack_293;
  undefined1 uStack_291;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined8 uStack_288;
  uint *puStack_280;
  undefined1 uStack_278;
  undefined4 uStack_277;
  undefined4 uStack_273;
  undefined4 uStack_26f;
  uint uStack_26b;
  undefined4 uStack_267;
  undefined4 uStack_263;
  undefined4 uStack_25f;
  undefined3 uStack_25b;
  undefined8 uStack_258;
  long *plStack_238;
  long *plStack_230;
  byte bStack_228;
  undefined4 uStack_227;
  undefined4 uStack_223;
  undefined4 uStack_21f;
  undefined1 uStack_21b;
  undefined2 uStack_21a;
  undefined1 uStack_218;
  undefined5 uStack_217;
  undefined1 uStack_212;
  undefined1 uStack_211;
  ulong auStack_210 [3];
  long *plStack_1f8;
  undefined1 uStack_1f0;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 *puStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined *apuStack_128 [4];
  undefined **ppuStack_108;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_25b = 0;
  uStack_258 = 0;
  uStack_26f = _DAT_0148c4d0;
  uStack_26b = _UNK_0148c4d4;
  uStack_267 = _UNK_0148c4d8;
  uStack_263 = _UNK_0148c4dc;
  uStack_25f = 0x73657275;
  uStack_278 = 0x83;
  uStack_277 = 0x4110b53a;
  uStack_273 = 0x28111814;
  puStack_168 = (undefined8 *)0x0;
  uStack_160 = 0;
  uStack_1b0 = param_1;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar17 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f474988;
  auStack_308[0] = 0;
  auStack_308._1_4_ = 0;
  uStack_303._0_3_ = 0;
  uStack_303._3_1_ = 0;
  uStack_2ff = 0;
  uStack_2fb = (uint)uStack_2fb._3_1_ << 0x18;
  if (puStack_168 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_168)(&puStack_168,auStack_308);
    puVar18 = puStack_168;
  }
  puStack_168 = (undefined8 *)0x0;
  auStack_308[0] = SUB81(puVar18,0);
  auStack_308._1_4_ = (undefined4)((ulong)puVar18 >> 8);
  uStack_303._0_3_ = (undefined3)((ulong)puVar18 >> 0x28);
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
  func_0x04aa75f0(plVar17 + 0xe,&uStack_2a8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar20 = plVar17 + 0x11;
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
  plVar17[4] = (long)&UNK_0f4749d8;
  plVar1 = plVar17 + 0x2e;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  if (plVar1 != (long *)auStack_308) {
    puVar18 = (undefined8 *)
              CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
    if (puVar18 == (undefined8 *)0x0) {
      lVar35 = 0;
    }
    else {
      (*(code *)*puVar18)(auStack_308,plVar1);
      lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
    }
    auStack_308[0] = 0;
    auStack_308._1_4_ = 0;
    uStack_303 = uStack_303 & 0xff000000;
    *plVar1 = lVar35;
  }
  plVar1 = plVar17 + 4;
  puVar31 = (uint *)(plVar17 + 0x12);
  if (plVar20 != (long *)&DAT_0f551f58) {
    if ((*puVar31 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar17[0x14] = _DAT_0f551f70;
        uVar9 = uRam000000000f551f6c;
        uVar8 = _DAT_0f551f68;
        uVar7 = uRam000000000f551f64;
        *puVar31 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar7;
        *(undefined4 *)(plVar17 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar31,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar39 = (_DAT_0f551f60 & 1) != 0;
      lVar35 = 0xf551f61;
      if (bVar39) {
        lVar35 = _DAT_0f551f70;
      }
      uVar34 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar31,lVar35,uVar34);
    }
  }
  plVar24 = plVar17 + 1;
  plVar17[0x11] = _DAT_0f551f58;
  plVar17[0x15] = 0;
  lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  if (lVar35 != 0) {
    (**(code **)(lVar35 + 8))(auStack_308);
  }
  LOCK();
  *plVar24 = *plVar24 + 1;
  UNLOCK();
  puStack_2c0 = puVar31;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar18 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0f474ad0;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[4] = &UNK_0f474b20;
  puVar18[0xe] = plVar1;
  puVar18[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  puVar32 = puVar18 + 4;
  auStack_308[0] = SUB81(puVar32,0);
  auStack_308._1_4_ = (undefined4)((ulong)puVar32 >> 8);
  uStack_303._0_3_ = (undefined3)((ulong)puVar32 >> 0x28);
  uStack_303._3_1_ = (byte)puVar18;
  uStack_2ff = (undefined4)((ulong)puVar18 >> 8);
  uStack_2fb._0_3_ = (undefined3)((ulong)puVar18 >> 0x28);
  puVar19 = (undefined4 *)FUN_04fe1ff0(uStack_1b0,&uStack_278,1);
  plVar25 = *(long **)(puVar19 + 0x24);
  if (plVar25 < *(long **)(puVar19 + 0x26)) {
    plVar25[2] = 0;
    plVar25[3] = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[4] = 0;
    if (plVar25 == plVar20) {
LAB_0d50bc45:
      *plVar25 = *plVar20;
      plVar25[5] = (long)puVar32;
      plVar25[6] = (long)puVar18;
LAB_0d50bcbe:
      LOCK();
      puVar18[1] = puVar18[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_2c0 & 1) == 0) {
        plVar25[3] = *(long *)(puStack_2c0 + 4);
        lVar35 = *(long *)(puStack_2c0 + 2);
        plVar25[1] = *(long *)puStack_2c0;
        plVar25[2] = lVar35;
        goto LAB_0d50bc45;
      }
      FUN_04885070(plVar25 + 1,plVar17[0x14],plVar17[0x13]);
      *plVar25 = *plVar20;
      puVar18 = (undefined8 *)CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_))
      ;
      plVar25[5] = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
      plVar25[6] = CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
      if (puVar18 != (undefined8 *)0x0) goto LAB_0d50bcbe;
    }
    plVar25 = plVar25 + 7;
    *(long **)(puVar19 + 0x24) = plVar25;
  }
  else {
    plVar25 = (long *)func_0x04fe56f0(puVar19 + 0x22,plVar20,auStack_308);
  }
  *(long **)(puVar19 + 0x24) = plVar25;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar8;
  *(undefined4 *)(plVar17 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar25 = plVar20 + 1;
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  plVar20 = (long *)CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar25 = plVar20 + 1;
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar35 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar35 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  puStack_1b8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puStack_1b8 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  uVar14 = _UNK_01338c8c;
  uStack_1c8 = 0x81;
  uStack_1c0 = 0x79;
  *(ulong *)((long)puStack_1b8 + 0x69) = CONCAT17(UNK_01338c8b,_DAT_01338c84);
  *(undefined8 *)((long)puStack_1b8 + 0x71) = uVar14;
  uVar14 = CONCAT71(_DAT_01338c84,UNK_01338c83);
  *(undefined8 *)(puStack_1b8 + 0x18) = _DAT_01338c7b;
  *(undefined8 *)(puStack_1b8 + 0x1a) = uVar14;
  uVar14 = _UNK_01338c73;
  *(undefined8 *)(puStack_1b8 + 0x14) = _DAT_01338c6b;
  *(undefined8 *)(puStack_1b8 + 0x16) = uVar14;
  uVar14 = _UNK_01338c63;
  *(undefined8 *)(puStack_1b8 + 0x10) = _DAT_01338c5b;
  *(undefined8 *)(puStack_1b8 + 0x12) = uVar14;
  uVar14 = _UNK_01338c53;
  *(undefined8 *)(puStack_1b8 + 0xc) = _DAT_01338c4b;
  *(undefined8 *)(puStack_1b8 + 0xe) = uVar14;
  uVar14 = _UNK_01338c43;
  *(undefined8 *)(puStack_1b8 + 8) = _DAT_01338c3b;
  *(undefined8 *)(puStack_1b8 + 10) = uVar14;
  uVar14 = _UNK_01338c33;
  *(undefined8 *)(puStack_1b8 + 4) = _DAT_01338c2b;
  *(undefined8 *)(puStack_1b8 + 6) = uVar14;
  uVar9 = _UNK_01338c27;
  uVar8 = _UNK_01338c23;
  uVar7 = _UNK_01338c1f;
  *puStack_1b8 = _DAT_01338c1b;
  puStack_1b8[1] = uVar7;
  puStack_1b8[2] = uVar8;
  puStack_1b8[3] = uVar9;
  *(undefined1 *)((long)puStack_1b8 + 0x79) = 0;
  plVar17 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1,&uStack_1c8);
  if ((uStack_1c8 & 1) != 0) {
    func_0x0412a280(puStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
  }
  if (puStack_168 != (undefined8 *)0x0) {
    (*(code *)puStack_168[1])(&puStack_168);
  }
  if ((uStack_273 & 0x1000000) != 0) {
    func_0x0412a280(CONCAT35(uStack_25b,CONCAT41(uStack_25f,uStack_263._3_1_)),
                    CONCAT35((undefined3)uStack_26b,CONCAT41(uStack_26f,uStack_273._3_1_)) &
                    0xfffffffffffffffe);
  }
  uStack_1a0 = 0;
  puStack_1a8 = (undefined8 *)&UNK_0f474dc0;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar20 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f474b80;
  auStack_308[0] = 0;
  auStack_308._1_4_ = 0;
  uStack_303._0_3_ = 0;
  uStack_303._3_1_ = 0;
  uStack_2ff = 0;
  uStack_2fb._0_3_ = 0;
  if (puStack_1a8 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_1a8)(&puStack_1a8,auStack_308);
    puVar18 = puStack_1a8;
  }
  puStack_1a8 = (undefined8 *)0x0;
  auStack_308[0] = SUB81(puVar18,0);
  auStack_308._1_4_ = (undefined4)((ulong)puVar18 >> 8);
  uStack_303._0_3_ = (undefined3)((ulong)puVar18 >> 0x28);
  plVar20[4] = (long)&UNK_0f2ccd78;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[10] = 0;
  plVar20[0xb] = 0;
  plVar20[0xc] = 0;
  *(undefined1 *)(plVar20 + 0xd) = 0;
  func_0x04aa75f0(plVar20 + 0xe,&uStack_278,&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  plVar1 = plVar20 + 0x11;
  plVar20[0x11] = 0;
  plVar20[0x12] = 0;
  plVar20[0x13] = 0;
  plVar20[0x14] = 0;
  plVar20[0x15] = 0;
  plVar20[0x16] = 0;
  plVar20[0x17] = 0xffffffff;
  plVar20[0x26] = 0;
  plVar20[0x27] = 0;
  plVar20[0x18] = 0;
  plVar20[0x19] = 0;
  plVar20[0x1a] = 0;
  plVar20[0x1b] = 0;
  plVar20[0x1c] = 0;
  plVar20[0x1d] = 0;
  plVar20[0x1e] = 0;
  plVar20[0x1f] = 0;
  plVar20[4] = (long)&UNK_0f474bd0;
  plVar24 = plVar20 + 0x2e;
  plVar20[0x2e] = 0;
  plVar20[0x2f] = 0;
  *(undefined1 *)(plVar20 + 0x36) = 0;
  if (plVar24 != (long *)auStack_308) {
    puVar18 = (undefined8 *)
              CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
    if (puVar18 == (undefined8 *)0x0) {
      lVar35 = 0;
    }
    else {
      (*(code *)*puVar18)(auStack_308,plVar24);
      lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
    }
    auStack_308[0] = 0;
    auStack_308._1_4_ = 0;
    uStack_303._0_3_ = 0;
    *plVar24 = lVar35;
  }
  plVar24 = plVar20 + 4;
  puVar31 = (uint *)(plVar20 + 0x12);
  if (plVar1 != (long *)&DAT_0f552108) {
    if ((*puVar31 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar20[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar31 = _DAT_0f552110;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar7;
        *(undefined4 *)(plVar20 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar31,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar39 = (_DAT_0f552110 & 1) != 0;
      lVar35 = 0xf552111;
      if (bVar39) {
        lVar35 = _DAT_0f552120;
      }
      uVar34 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar31,lVar35,uVar34);
    }
  }
  plVar25 = plVar20 + 1;
  plVar20[0x11] = _DAT_0f552108;
  plVar20[0x15] = 0;
  lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  if (lVar35 != 0) {
    (**(code **)(lVar35 + 8))(auStack_308);
  }
  LOCK();
  *plVar25 = *plVar25 + 1;
  UNLOCK();
  puStack_280 = puVar31;
  plStack_238 = plVar25;
  pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar21 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
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
  *(undefined **)pbVar21 = &UNK_0f474cc8;
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
  *(undefined **)(pbVar21 + 0x20) = &UNK_0f474d18;
  *(long **)(pbVar21 + 0x70) = plVar24;
  *(long **)(pbVar21 + 0x78) = plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  puStack_2b8 = (uint *)(pbVar21 + 8);
  puVar36 = (undefined4 *)plVar17[0x18];
  puVar4 = (undefined4 *)plVar17[0x17];
  for (puVar19 = puVar4; puStack_2c0 = (uint *)plVar24, puVar19 != puVar36; puVar19 = puVar19 + 0x2a
      ) {
    if ((*(long *)(puVar19 + 0x1e) == 0) && (*(long *)(puVar19 + 0x20) == -1)) goto LAB_0d50c4eb;
  }
  if ((undefined4 *)plVar17[0x19] <= puVar36) {
    pbVar22 = (byte *)((long)puVar36 - (long)puVar4);
    uVar34 = ((long)pbVar22 >> 3) * -0x30c30c30c30c30c3 + 1;
    plStack_2b0 = plVar17;
    if (0x186186186186186 < uVar34) goto LAB_0d50dde7;
    plVar24 = plVar17 + 0x17;
    lVar35 = plVar17[0x19] - (long)puVar4 >> 3;
    uVar6 = lVar35 * -0x6186186186186186;
    if (uVar34 < uVar6) {
      uVar34 = uVar6;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar35 * -0x30c30c30c30c30c3)) {
      uVar34 = 0x186186186186186;
    }
    plStack_2e8 = plVar24;
    if (uVar34 == 0) {
      lStack_2f0 = 0;
LAB_0d50c297:
      auStack_308[0] = (undefined1)lStack_2f0;
      auStack_308._1_4_ = (undefined4)((ulong)lStack_2f0 >> 8);
      uStack_303._0_3_ = (undefined3)((ulong)lStack_2f0 >> 0x28);
      pbVar22 = pbVar22 + lStack_2f0;
      uStack_2fb._3_1_ = (byte)pbVar22;
      uStack_2f7 = (undefined2)((ulong)pbVar22 >> 8);
      uStack_2f5 = (undefined5)((ulong)pbVar22 >> 0x18);
      uStack_303._3_1_ = uStack_2fb._3_1_;
      uStack_2ff = (undefined4)((ulong)pbVar22 >> 8);
      uStack_2fb._0_3_ = (undefined3)((ulong)pbVar22 >> 0x28);
      lStack_2f0 = uVar34 * 0xa8 + lStack_2f0;
      func_0x0d5320f0(pbVar22);
      puVar36 = (undefined4 *)(CONCAT53(uStack_2f5,CONCAT21(uStack_2f7,uStack_2fb._3_1_)) + 0xa8);
      lVar35 = plStack_2b0[0x17];
      lVar38 = plStack_2b0[0x18];
      lVar33 = (lVar35 - lVar38) +
               CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
      if (lVar35 != lVar38) {
        lVar28 = 0;
        plStack_230 = plVar24;
        do {
          uVar14 = ((undefined8 *)(lVar35 + lVar28))[1];
          *(undefined8 *)(lVar33 + lVar28) = *(undefined8 *)(lVar35 + lVar28);
          ((undefined8 *)(lVar33 + lVar28))[1] = uVar14;
          *(undefined8 *)(lVar35 + lVar28) = 0;
          ((undefined8 *)(lVar35 + lVar28))[1] = 0;
          puVar18 = (undefined8 *)(lVar33 + 0x20 + lVar28);
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18 = (undefined8 *)(lVar33 + 0x10 + lVar28);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar33 + 0x30 + lVar28) = 0;
          *(undefined8 *)(lVar33 + 0x28 + lVar28) = *(undefined8 *)(lVar35 + 0x28 + lVar28);
          puVar19 = (undefined4 *)(lVar35 + 0x18 + lVar28);
          uVar7 = puVar19[1];
          uVar8 = puVar19[2];
          uVar9 = puVar19[3];
          puVar4 = (undefined4 *)(lVar33 + 0x18 + lVar28);
          *puVar4 = *puVar19;
          puVar4[1] = uVar7;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          *(undefined2 *)(lVar35 + 0x18 + lVar28) = 0;
          *(undefined8 *)(lVar33 + 0x10 + lVar28) = *(undefined8 *)(lVar35 + 0x10 + lVar28);
          func_0x04167a20(lVar28 + lVar33 + 0x38,lVar35 + lVar28 + 0x38);
          puVar18 = (undefined8 *)(lVar35 + 0x40 + lVar28);
          uVar14 = puVar18[1];
          puVar32 = (undefined8 *)(lVar33 + 0x40 + lVar28);
          *puVar32 = *puVar18;
          puVar32[1] = uVar14;
          puVar18 = (undefined8 *)(lVar35 + 0x50 + lVar28);
          uVar14 = puVar18[1];
          puVar32 = (undefined8 *)(lVar33 + 0x50 + lVar28);
          *puVar32 = *puVar18;
          puVar32[1] = uVar14;
          puVar18 = (undefined8 *)(lVar35 + 0x60 + lVar28);
          uVar14 = puVar18[1];
          puVar32 = (undefined8 *)(lVar33 + 0x60 + lVar28);
          *puVar32 = *puVar18;
          puVar32[1] = uVar14;
          puVar18 = (undefined8 *)(lVar35 + 0x60 + lVar28);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar33 + 0x70 + lVar28) = *(undefined8 *)(lVar35 + 0x70 + lVar28);
          puVar18 = (undefined8 *)(lVar35 + 0x78 + lVar28);
          uVar14 = puVar18[1];
          puVar32 = (undefined8 *)(lVar33 + 0x78 + lVar28);
          *puVar32 = *puVar18;
          puVar32[1] = uVar14;
          puVar18 = (undefined8 *)(lVar33 + 0x88 + lVar28);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar33 + 0x98 + lVar28) = 0;
          puVar19 = (undefined4 *)(lVar35 + 0x88 + lVar28);
          uVar7 = puVar19[1];
          uVar8 = puVar19[2];
          uVar9 = puVar19[3];
          puVar4 = (undefined4 *)(lVar33 + 0x88 + lVar28);
          *puVar4 = *puVar19;
          puVar4[1] = uVar7;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          *(undefined8 *)(lVar33 + 0x98 + lVar28) = *(undefined8 *)(lVar35 + 0x98 + lVar28);
          puVar18 = (undefined8 *)(lVar35 + 0x88 + lVar28);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar35 + 0x98 + lVar28) = 0;
          *(undefined2 *)(lVar33 + 0xa0 + lVar28) = *(undefined2 *)(lVar35 + 0xa0 + lVar28);
          lVar2 = lVar35 + lVar28;
          lVar28 = lVar28 + 0xa8;
        } while (lVar2 + 0xa8 != lVar38);
        do {
          func_0x0d52de00(lVar35);
          lVar35 = lVar35 + 0xa8;
        } while (lVar35 != lVar38);
        lVar35 = *plStack_230;
      }
      plVar25 = plStack_238;
      plVar17 = plStack_2b0;
      plStack_2b0[0x17] = lVar33;
      plStack_2b0[0x18] = (long)puVar36;
      lVar38 = plStack_2b0[0x19];
      plStack_2b0[0x19] = lStack_2f0;
      if (lVar35 != 0) {
        func_0x0412a280(lVar35,lVar38 - lVar35);
      }
      goto LAB_0d50c480;
    }
    if (uVar34 < 0x186186186186187) {
      lStack_2f0 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0xa8);
      if (lStack_2f0 == 0) {
        FUN_0eec74c0(uVar34 * 0xa8,0);
        lStack_2f0 = 0;
      }
      goto LAB_0d50c297;
    }
LAB_0d50dddd:
    func_0x04882eb0();
LAB_0d50dde2:
    func_0x0d532330();
LAB_0d50dde7:
    uStack_318 = func_0x0d532260();
    if ((*pbVar22 & 1) != 0) {
      func_0x0412a280(plVar25[3],plVar25[1] & 0xfffffffffffffffe);
    }
    *(long **)(uVar34 + 0x90) = plVar25;
    func_0x04fe09a0(auStack_308);
    LOCK();
    lVar35 = *(long *)pbVar21;
    *(long *)pbVar21 = *(long *)pbVar21 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      func_0x0412c2d0(plVar24);
    }
    LOCK();
    lVar35 = *(long *)pbVar21;
    *(long *)pbVar21 = *(long *)pbVar21 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      func_0x0412c2d0(plVar24);
    }
    if (lStack_f8 != 0) {
      (**(code **)(lStack_f8 + 8))(&lStack_f8);
    }
    if ((bStack_2a0 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_28f,uStack_290),
                      CONCAT17(uStack_299,CONCAT25(uStack_29b,CONCAT41(uStack_29f,bStack_2a0))) &
                      0xfffffffffffffffe);
    }
    do {
      while( true ) {
        uStack_318 = func_0x0eee2d70(uStack_318);
        LOCK();
        lVar35 = *(long *)puStack_2b8;
        *(long *)puStack_2b8 = *(long *)puStack_2b8 + -1;
        UNLOCK();
        if (lVar35 == 0) {
          (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
          func_0x0412c2d0(pbVar21);
        }
        LOCK();
        lVar35 = *plStack_238;
        *plStack_238 = *plStack_238 + -1;
        UNLOCK();
        if (lVar35 != 0) break;
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
        LOCK();
        lVar35 = *plStack_238;
        *plStack_238 = *plStack_238 + -1;
        UNLOCK();
        if (lVar35 == 0) goto LAB_0d50e656;
LAB_0d50e631:
        if (puStack_1a8 != (undefined8 *)0x0) goto LAB_0d50e679;
      }
      LOCK();
      lVar35 = *plStack_238;
      *plStack_238 = *plStack_238 + -1;
      UNLOCK();
      if (lVar35 != 0) goto LAB_0d50e631;
LAB_0d50e656:
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    } while (puStack_1a8 == (undefined8 *)0x0);
LAB_0d50e679:
    (*(code *)puStack_1a8[1])(&puStack_1a8);
    func_0x0eee2d70(uStack_318);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  func_0x0d5320f0(puVar36);
  puVar36 = puVar36 + 0x2a;
  plVar17[0x18] = (long)puVar36;
LAB_0d50c480:
  plVar17[0x18] = (long)puVar36;
  pbVar22 = *(byte **)(puVar36 + -0x2a);
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
  uVar9 = _UNK_01494d69;
  uVar8 = _UNK_01494d65;
  uVar7 = _UNK_01494d61;
  *(undefined4 *)pbVar22 = _DAT_01494d5d;
  *(undefined4 *)(pbVar22 + 4) = uVar7;
  *(undefined4 *)(pbVar22 + 8) = uVar8;
  *(undefined4 *)(pbVar22 + 0xc) = uVar9;
  pbVar22[0xf] = 0x65;
  pbVar22[0x10] = 0x6e;
  pbVar22[0x11] = 0x74;
  pbVar22[0x12] = 0x3e;
  pbVar22[0x13] = 0;
  lVar35 = plVar17[0x18];
  puVar19 = (undefined4 *)(lVar35 - 0xa8);
  *(char *)(lVar35 + -7) = (char)plVar17[0xc];
  *(undefined8 *)(lVar35 + -0x30) = 0;
  *(undefined8 *)(lVar35 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar35 + -8) = 0;
LAB_0d50c4eb:
  puVar31 = (uint *)(pbVar21 + 0x20);
  plVar24 = *(long **)(puVar19 + 0x24);
  if (plVar24 < *(long **)(puVar19 + 0x26)) {
    plVar24[2] = 0;
    plVar24[3] = 0;
    *plVar24 = 0;
    plVar24[1] = 0;
    plVar24[4] = 0;
    if (plVar24 != plVar1) {
      plVar17 = plVar24 + 1;
      if ((*puStack_280 & 1) == 0) {
        plVar24[3] = *(long *)(puStack_280 + 4);
        lVar35 = *(long *)(puStack_280 + 2);
        *plVar17 = *(long *)puStack_280;
        plVar24[2] = lVar35;
      }
      else {
        plStack_2b0 = plVar17;
        puStack_280 = puVar31;
        FUN_04885070(plVar17,plVar20[0x14],plVar20[0x13]);
        puVar31 = puStack_280;
      }
    }
    *plVar24 = *plVar1;
    plVar24[5] = (long)puVar31;
    plVar24[6] = (long)pbVar21;
    LOCK();
    *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
    UNLOCK();
    plVar24 = plVar24 + 7;
    *(long **)(puVar19 + 0x24) = plVar24;
  }
  else {
    plVar24 = (long *)((long)plVar24 - *(long *)(puVar19 + 0x22));
    uVar34 = ((long)plVar24 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar22 = pbVar21;
    if (0x492492492492492 < uVar34) goto LAB_0d50dde2;
    lVar35 = (long)*(long **)(puVar19 + 0x26) - *(long *)(puVar19 + 0x22) >> 3;
    uVar6 = lVar35 * -0x2492492492492492;
    if (uVar34 < uVar6) {
      uVar34 = uVar6;
    }
    plStack_2e8 = (long *)(puVar19 + 0x22);
    if (0x249249249249248 < (ulong)(lVar35 * 0x6db6db6db6db6db7)) {
      uVar34 = 0x492492492492492;
    }
    plStack_2b0 = plStack_2e8;
    if (uVar34 == 0) {
      lVar35 = 0;
    }
    else {
      if (0x492492492492492 < uVar34) goto LAB_0d50dddd;
      plStack_230 = (long *)(uVar34 * 0x38);
      lVar35 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar35 == 0) {
        FUN_0eec74c0(plStack_230,0);
        lVar35 = 0;
      }
    }
    auStack_308[0] = (undefined1)lVar35;
    auStack_308._1_4_ = (undefined4)((ulong)lVar35 >> 8);
    uStack_303._0_3_ = (undefined3)((ulong)lVar35 >> 0x28);
    plVar17 = (long *)(lVar35 + (long)plVar24);
    uStack_2fb._3_1_ = (byte)plVar17;
    uStack_2f7 = (undefined2)((ulong)plVar17 >> 8);
    uStack_2f5 = (undefined5)((ulong)plVar17 >> 0x18);
    uStack_303._3_1_ = uStack_2fb._3_1_;
    uStack_2ff = (undefined4)((ulong)plVar17 >> 8);
    uStack_2fb._0_3_ = (undefined3)((ulong)plVar17 >> 0x28);
    lStack_2f0 = uVar34 * 0x38 + lVar35;
    puVar18 = (undefined8 *)(lVar35 + 0x10 + (long)plVar24);
    *puVar18 = 0;
    puVar18[1] = 0;
    *(undefined8 *)(lVar35 + (long)plVar24) = 0;
    ((undefined8 *)(lVar35 + (long)plVar24))[1] = 0;
    *(undefined8 *)(lVar35 + 0x20 + (long)plVar24) = 0;
    plVar26 = plVar17;
    plVar37 = plVar17;
    if (plVar17 != plVar1) {
      puVar29 = (uint *)((long)plVar24 + lVar35 + 8);
      if ((*puStack_280 & 1) == 0) {
        *(long *)((long)plVar24 + lVar35 + 0x18) = *(long *)(puStack_280 + 4);
        uVar11 = puStack_280[1];
        uVar12 = puStack_280[2];
        uVar13 = puStack_280[3];
        *puVar29 = *puStack_280;
        *(uint *)((long)plVar24 + lVar35 + 0xc) = uVar11;
        *(uint *)((long)plVar24 + lVar35 + 0x10) = uVar12;
        *(uint *)((long)plVar24 + lVar35 + 0x14) = uVar13;
      }
      else {
        puStack_280 = puVar31;
        FUN_04885070(puVar29,plVar20[0x14],plVar20[0x13]);
        plVar26 = (long *)CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
        plVar37 = (long *)CONCAT53(uStack_2f5,CONCAT21(uStack_2f7,uStack_2fb._3_1_));
        puVar31 = puStack_280;
      }
    }
    plVar25 = plStack_238;
    *plVar17 = *plVar1;
    plVar17[5] = (long)puVar31;
    plVar17[6] = (long)pbVar21;
    LOCK();
    *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
    UNLOCK();
    plVar24 = plVar37 + 7;
    uStack_2fb._3_1_ = (byte)plVar24;
    uStack_2f7 = (undefined2)((ulong)plVar24 >> 8);
    uStack_2f5 = (undefined5)((ulong)plVar24 >> 0x18);
    puVar30 = *(undefined8 **)(puVar19 + 0x22);
    puVar32 = *(undefined8 **)(puVar19 + 0x24);
    puVar18 = (undefined8 *)((long)plVar26 + ((long)puVar30 - (long)puVar32));
    puVar23 = puVar18;
    puVar27 = puVar30;
    if ((long)puVar30 - (long)puVar32 != 0) {
      do {
        puVar23[2] = 0;
        puVar23[3] = 0;
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23[4] = 0;
        puVar23[3] = puVar27[3];
        uVar14 = puVar27[2];
        puVar23[1] = puVar27[1];
        puVar23[2] = uVar14;
        *(undefined2 *)(puVar27 + 1) = 0;
        *puVar23 = *puVar27;
        uVar14 = puVar27[6];
        puVar23[5] = puVar27[5];
        puVar23[6] = uVar14;
        puVar27[5] = 0;
        puVar27[6] = 0;
        puVar27 = puVar27 + 7;
        puVar23 = puVar23 + 7;
      } while (puVar27 != puVar32);
      do {
        plVar17 = (long *)puVar30[6];
        if (plVar17 == (long *)0x0) {
LAB_0d50c7d4:
          bVar3 = *(byte *)(puVar30 + 1);
        }
        else {
          LOCK();
          plVar1 = plVar17 + 1;
          lVar35 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar35 != 0) goto LAB_0d50c7d4;
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
          bVar3 = *(byte *)(puVar30 + 1);
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(puVar30[3],puVar30[1] & 0xfffffffffffffffe);
        }
        puVar30 = puVar30 + 7;
      } while (puVar30 != puVar32);
      puVar30 = (undefined8 *)*plStack_2b0;
      plVar24 = (long *)CONCAT53(uStack_2f5,CONCAT21(uStack_2f7,uStack_2fb._3_1_));
    }
    *(undefined8 **)(puVar19 + 0x22) = puVar18;
    *(long **)(puVar19 + 0x24) = plVar24;
    lVar35 = *(long *)(puVar19 + 0x26);
    *(long *)(puVar19 + 0x26) = lStack_2f0;
    if (puVar30 != (undefined8 *)0x0) {
      func_0x0412a280(puVar30,lVar35 - (long)puVar30);
    }
  }
  *(long **)(puVar19 + 0x24) = plVar24;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar8;
  *(undefined4 *)(plVar20 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar10;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar35 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  LOCK();
  lVar35 = *(long *)puStack_2b8;
  *(long *)puStack_2b8 = *(long *)puStack_2b8 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
    func_0x0412c2d0(pbVar21);
    LOCK();
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar35 != 0) goto LAB_0d50c8e6;
LAB_0d50cae3:
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar35 == 0) goto LAB_0d50cae3;
LAB_0d50c8e6:
    LOCK();
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (puStack_1a8 != (undefined8 *)0x0) {
    (*(code *)puStack_1a8[1])(&puStack_1a8);
  }
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_288 = 0;
  bStack_2a0 = 0x1c;
  uStack_29f = 0x63616c70;
  uStack_29b = 0x7365;
  uStack_299 = 0x5f;
  uStack_298 = 0x66;
  uStack_297 = 0x75746165;
  uStack_293 = 0x6572;
  uStack_291 = 0;
  uStack_2a8 = 0x5f4748520f33cd82;
  uStack_70 = 0;
  uStack_26f = 0;
  uStack_26b = uStack_26b & 0xff000000;
  lStack_78 = 0;
  uStack_278 = 0xd8;
  uStack_277 = 0xf474d;
  uStack_273 = 0;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar17 == (long *)0x0) {
    FUN_0eec74c0(0x1e0,0);
  }
  auStack_308._1_4_ = uStack_277;
  auStack_308[0] = uStack_278;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f4732c8;
  uStack_2ff = 0;
  uStack_2fb = (uint)uStack_2fb._3_1_ << 0x18;
  uStack_303._0_3_ = (uint3)uStack_273;
  uStack_278 = 0;
  uStack_277 = 0;
  uStack_273 = uStack_273 & 0xff000000;
  uStack_303._3_1_ = 0;
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
  func_0x04aa75f0(plVar17 + 0xe,&plStack_1f8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
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
  plVar17[4] = (long)&UNK_0f473318;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  puVar18 = (undefined8 *)
            CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  if (puVar18 == (undefined8 *)0x0) {
    plVar17[0x3a] = 0;
    lVar35 = 0;
  }
  else {
    (*(code *)*puVar18)(auStack_308,plVar17 + 0x2e);
    lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
    auStack_308[0] = 0;
    auStack_308._1_4_ = 0;
    uStack_303._0_3_ = 0;
    plVar17[0x2e] = lVar35;
    plVar17[0x3a] = 0;
    if ((*(byte *)(plVar17 + 0x12) & 1) == 0) {
      lVar35 = 0;
    }
    else {
      func_0x0412a280(plVar17[0x14],plVar17[0x12] & 0xfffffffffffffffe);
      lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
    }
  }
  pbVar21 = (byte *)(plVar17 + 0x12);
  pbVar21[0] = 0x22;
  uVar9 = _UNK_01207d03;
  uVar8 = _UNK_01207cff;
  uVar7 = _UNK_01207cfb;
  pbVar21[1] = 0x66;
  *(undefined4 *)((long)plVar17 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar17 + 0x96) = uVar7;
  *(undefined4 *)((long)plVar17 + 0x9a) = uVar8;
  *(undefined4 *)((long)plVar17 + 0x9e) = uVar9;
  *(undefined4 *)((long)plVar17 + 0xa2) = 0;
  *(undefined2 *)((long)plVar17 + 0xa6) = 0;
  plVar17[0x11] = 0xf6c39062bb9edf3;
  plVar17[0x15] = 0;
  if (lVar35 != 0) {
    (**(code **)(lVar35 + 8))(auStack_308);
  }
  plVar20 = plVar17 + 1;
  lVar35 = CONCAT35((uint3)uStack_273,CONCAT41(uStack_277,uStack_278));
  if (lVar35 != 0) {
    (**(code **)(lVar35 + 8))(&uStack_278);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar18 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar31 = (uint *)(plVar17 + 4);
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0f4733f8;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[4] = &UNK_0f473448;
  puVar18[0xe] = puVar31;
  puVar18[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  puVar32 = puVar18 + 4;
  auStack_308[0] = SUB81(puVar32,0);
  auStack_308._1_4_ = (undefined4)((ulong)puVar32 >> 8);
  uStack_303._0_3_ = (undefined3)((ulong)puVar32 >> 0x28);
  uStack_303._3_1_ = (byte)puVar18;
  uStack_2ff = (undefined4)((ulong)puVar18 >> 8);
  uStack_2fb._0_3_ = (undefined3)((ulong)puVar18 >> 0x28);
  puVar19 = (undefined4 *)func_0x0d517d60(puStack_2c0,&uStack_2a8,1);
  plVar1 = plVar17 + 0x11;
  plVar24 = *(long **)(puVar19 + 0x24);
  if (plVar24 < *(long **)(puVar19 + 0x26)) {
    puStack_2b8 = puVar31;
    plVar24[2] = 0;
    plVar24[3] = 0;
    *plVar24 = 0;
    plVar24[1] = 0;
    plVar24[4] = 0;
    if (plVar24 != plVar1) {
      if ((*pbVar21 & 1) == 0) {
        plVar24[3] = plVar17[0x14];
        lVar35 = plVar17[0x13];
        plVar24[1] = *(long *)pbVar21;
        plVar24[2] = lVar35;
      }
      else {
        FUN_04885070(plVar24 + 1,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar24 = *plVar1;
    plVar24[5] = (long)puVar32;
    plVar24[6] = (long)puVar18;
    LOCK();
    puVar18[1] = puVar18[1] + 1;
    UNLOCK();
    plVar24 = plVar24 + 7;
    *(long **)(puVar19 + 0x24) = plVar24;
    puVar31 = puStack_2b8;
  }
  else {
    plVar24 = (long *)func_0x0d519d40(puVar19 + 0x22,plVar1,auStack_308);
  }
  *(long **)(puVar19 + 0x24) = plVar24;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar8;
  *(undefined4 *)(plVar17 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar10;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar24 = plVar1 + 1;
    lVar35 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  plVar1 = (long *)CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar24 = plVar1 + 1;
    lVar35 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  LOCK();
  lVar35 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar35 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  apuStack_128[0] = &UNK_0f474e00;
  ppuStack_108 = apuStack_128;
  plVar20 = plVar17 + 0x36;
  plStack_2e8 = (long *)auStack_308;
  auStack_308[0] = 0;
  auStack_308._1_4_ = 0xf474e;
  uStack_303 = uStack_303 & 0xff000000;
  lVar35 = 0x20;
  if (plVar20 == (long *)auStack_308) {
LAB_0d50cf01:
    (**(code **)(*plStack_2e8 + lVar35))(plStack_2e8);
  }
  else {
    plVar1 = (long *)plVar17[0x3a];
    if (plVar1 == plVar20) {
      uStack_278 = 0;
      uStack_277 = 0xf474e;
      uStack_273 = uStack_273 & 0xff000000;
      plStack_2e8 = (long *)0x0;
      (**(code **)(*plVar1 + 0x18))(plVar1,auStack_308);
      (**(code **)(*(long *)plVar17[0x3a] + 0x20))();
      plVar17[0x3a] = 0;
      plStack_2e8 = (long *)auStack_308;
      (**(code **)(CONCAT35((uint3)uStack_273,CONCAT41(uStack_277,uStack_278)) + 0x18))
                (&uStack_278,plVar20);
      (**(code **)(CONCAT35((uint3)uStack_273,CONCAT41(uStack_277,uStack_278)) + 0x20))(&uStack_278)
      ;
      plVar17[0x3a] = (long)plVar20;
      if (plStack_2e8 != (long *)auStack_308) goto LAB_0d50cef6;
      goto LAB_0d50cf01;
    }
    plVar17[0x36] = (long)&UNK_0f474e00;
    plStack_2e8 = plVar1;
    plVar17[0x3a] = (long)plVar20;
    if (plVar1 == (long *)auStack_308) goto LAB_0d50cf01;
LAB_0d50cef6:
    lVar35 = 0x28;
    if (plStack_2e8 != (long *)0x0) goto LAB_0d50cf01;
  }
  bStack_228 = 0x2a;
  uStack_227 = _DAT_014c1133;
  uStack_223 = _UNK_014c1137;
  uStack_21f = _UNK_014c113b;
  uStack_21b = (undefined1)_UNK_014c113f;
  uStack_21a = 0x7020;
  uStack_218 = 0x6c;
  uStack_217 = 0x2e64656361;
  uStack_212 = 0;
  (**(code **)(*(long *)puVar31 + 0x10))(puVar31,&bStack_228);
  if ((bStack_228 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_211,CONCAT16(uStack_212,CONCAT51(uStack_217,uStack_218))),
                    CONCAT35((undefined3)uStack_223,CONCAT41(uStack_227,bStack_228)) &
                    0xfffffffffffffffe);
  }
  puVar31 = puStack_2c0;
  if (ppuStack_108 == apuStack_128) {
    lVar35 = 0x20;
LAB_0d50d15c:
    (**(code **)(*ppuStack_108 + lVar35))();
  }
  else {
    lVar35 = 0x28;
    if (ppuStack_108 != (undefined **)0x0) goto LAB_0d50d15c;
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_2a0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_28f,uStack_290),
                    CONCAT17(uStack_299,CONCAT25(uStack_29b,CONCAT41(uStack_29f,bStack_2a0))) &
                    0xfffffffffffffffe);
  }
  uStack_293 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  uStack_288 = 0;
  bStack_2a0 = 0x12;
  uStack_29f = 0x646e6f63;
  uStack_29b = 0x7469;
  uStack_299 = 0x69;
  uStack_298 = 0x6f;
  uStack_297 = 0x6e;
  uStack_2a8 = 0x6976a39422c2abd8;
  uStack_b0 = 0;
  uStack_26f = 0;
  uStack_26b = uStack_26b & 0xff000000;
  lStack_b8 = 0;
  uStack_278 = 0x80;
  uStack_277 = 0xf474e;
  uStack_273 = 0;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar17 == (long *)0x0) {
    FUN_0eec74c0(0x1d0,0);
  }
  uStack_303 = uStack_273;
  auStack_308._1_4_ = uStack_277;
  auStack_308[0] = uStack_278;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f473500;
  uStack_2ff = 0;
  uStack_2fb = uStack_2fb & 0xff000000;
  uStack_278 = 0;
  uStack_277 = 0;
  uStack_273 = uStack_273 & 0xff000000;
  uStack_303 = uStack_303 & 0xffffff;
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
  func_0x04aa75f0(plVar17 + 0xe,&plStack_1f8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
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
  plVar17[4] = (long)&UNK_0f473550;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  puVar18 = (undefined8 *)
            CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  if (puVar18 == (undefined8 *)0x0) {
    lVar35 = 0;
  }
  else {
    (*(code *)*puVar18)(auStack_308,plVar17 + 0x2e);
    lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  }
  auStack_308[0] = 0;
  auStack_308._1_4_ = 0;
  uStack_303 = uStack_303 & 0xff000000;
  plVar17[0x2e] = lVar35;
  plVar20 = plVar17 + 0x36;
  plVar17[0x36] = 0;
  plVar17[0x37] = 0;
  plVar17[0x38] = 0;
  uStack_1f0 = 0;
  plStack_1f8 = plVar20;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar18 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar1 = plVar17 + 0x11;
  plVar17[0x36] = (long)puVar18;
  plVar17[0x38] = (long)(puVar18 + 5);
  puVar18[4] = 0;
  puVar18[1] = 0x746c75616665640e;
  puVar18[2] = 0;
  puVar18[3] = 0;
  *puVar18 = 0xdead4915c9c6c0d8;
  plVar17[0x37] = (long)(puVar18 + 5);
  puVar29 = (uint *)(plVar17 + 0x12);
  if (plVar1 != (long *)&DAT_0f5520d8) {
    if ((*puVar29 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        plVar17[0x14] = _DAT_0f5520f0;
        uVar9 = uRam000000000f5520ec;
        uVar8 = _DAT_0f5520e8;
        uVar7 = uRam000000000f5520e4;
        *puVar29 = _DAT_0f5520e0;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar7;
        *(undefined4 *)(plVar17 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar29,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar39 = (_DAT_0f5520e0 & 1) != 0;
      lVar35 = 0xf5520e1;
      if (bVar39) {
        lVar35 = _DAT_0f5520f0;
      }
      uVar34 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      func_0x04885120(puVar29,lVar35,uVar34);
    }
  }
  plVar17[0x11] = _DAT_0f5520d8;
  plVar17[0x15] = 0;
  lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  if (lVar35 != 0) {
    (**(code **)(lVar35 + 8))(auStack_308);
  }
  plVar24 = plVar17 + 1;
  lVar35 = CONCAT35((uint3)uStack_273,CONCAT41(uStack_277,uStack_278));
  if (lVar35 != 0) {
    (**(code **)(lVar35 + 8))(&uStack_278);
  }
  LOCK();
  *plVar24 = *plVar24 + 1;
  UNLOCK();
  puStack_2b8 = puVar29;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar18 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0f473630;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[4] = &UNK_0f473680;
  puVar18[0xe] = plVar17 + 4;
  puVar18[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  puVar32 = puVar18 + 4;
  auStack_308[0] = SUB81(puVar32,0);
  auStack_308._1_4_ = (undefined4)((ulong)puVar32 >> 8);
  uStack_303._0_3_ = (undefined3)((ulong)puVar32 >> 0x28);
  uStack_303._3_1_ = (byte)puVar18;
  uStack_2ff = (undefined4)((ulong)puVar18 >> 8);
  uStack_2fb._0_3_ = (undefined3)((ulong)puVar18 >> 0x28);
  puStack_2c0 = (uint *)(plVar17 + 4);
  puVar19 = (undefined4 *)func_0x0d517d60(puVar31,&uStack_2a8,0);
  plVar25 = *(long **)(puVar19 + 0x24);
  if (plVar25 < *(long **)(puVar19 + 0x26)) {
    plVar25[2] = 0;
    plVar25[3] = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[4] = 0;
    if (plVar25 != plVar1) {
      puVar31 = (uint *)(plVar25 + 1);
      if ((*puStack_2b8 & 1) == 0) {
        plVar25[3] = *(long *)(puStack_2b8 + 4);
        lVar35 = *(long *)(puStack_2b8 + 2);
        *(undefined8 *)puVar31 = *(undefined8 *)puStack_2b8;
        plVar25[2] = lVar35;
      }
      else {
        puStack_2b8 = puVar31;
        FUN_04885070(puVar31,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar25 = *plVar1;
    plVar25[5] = (long)puVar32;
    plVar25[6] = (long)puVar18;
    LOCK();
    puVar18[1] = puVar18[1] + 1;
    UNLOCK();
    plVar25 = plVar25 + 7;
    *(long **)(puVar19 + 0x24) = plVar25;
  }
  else {
    plVar25 = (long *)func_0x0d519d40(puVar19 + 0x22,plVar1,auStack_308);
  }
  puVar31 = puStack_2c0;
  *(long **)(puVar19 + 0x24) = plVar25;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar8;
  *(undefined4 *)(plVar17 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar10;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar25 = plVar1 + 1;
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  plVar1 = (long *)CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar25 = plVar1 + 1;
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  LOCK();
  lVar35 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar35 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  auStack_308[0] = 0;
  auStack_308._1_4_ = 0;
  uStack_303 = 0;
  uStack_2ff = 0;
  uStack_2fb = 0;
  uStack_2f7 = 0;
  uStack_2f5 = 0;
  uStack_278 = SUB81(auStack_308,0);
  uStack_277 = (undefined4)((ulong)auStack_308 >> 8);
  uStack_273._0_3_ = (uint3)((ulong)auStack_308 >> 0x28);
  uStack_273 = (uint)(uint3)uStack_273;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar18 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  auStack_308[0] = SUB81(puVar18,0);
  auStack_308._1_4_ = (undefined4)((ulong)puVar18 >> 8);
  uStack_303._0_3_ = (undefined3)((ulong)puVar18 >> 0x28);
  puVar32 = puVar18 + 5;
  uStack_2fb._3_1_ = (byte)puVar32;
  uStack_2f7 = (undefined2)((ulong)puVar32 >> 8);
  uStack_2f5 = (undefined5)((ulong)puVar32 >> 0x18);
  puVar18[4] = 0;
  puVar18[1] = 0x675f646c726f7712;
  puVar18[2] = 0x6e65;
  puVar18[3] = 0;
  *puVar18 = 0x838dddc83a29ed6c;
  uStack_303 = CONCAT13(uStack_2fb._3_1_,(undefined3)uStack_303);
  uStack_2ff = (undefined4)((ulong)puVar32 >> 8);
  uStack_2fb._0_3_ = (undefined3)((ulong)puVar32 >> 0x28);
  if (plVar20 != (long *)auStack_308) {
    func_0x04ab5020(plVar20,puVar18,puVar32,1);
  }
  puStack_1d0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puStack_1d0 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x48,0);
  }
  uVar14 = _UNK_0129ce17;
  uStack_1e0 = 0x49;
  uStack_1d8 = 0x44;
  *(undefined8 *)(puStack_1d0 + 0xc) = _DAT_0129ce0f;
  *(undefined8 *)(puStack_1d0 + 0xe) = uVar14;
  uVar14 = _UNK_0129ce07;
  *(undefined8 *)(puStack_1d0 + 8) = _DAT_0129cdff;
  *(undefined8 *)(puStack_1d0 + 10) = uVar14;
  uVar14 = _UNK_0129cdf7;
  *(undefined8 *)(puStack_1d0 + 4) = _DAT_0129cdef;
  *(undefined8 *)(puStack_1d0 + 6) = uVar14;
  uVar9 = _UNK_0129cdeb;
  uVar8 = _UNK_0129cde7;
  uVar7 = _UNK_0129cde3;
  *puStack_1d0 = _DAT_0129cddf;
  puStack_1d0[1] = uVar7;
  puStack_1d0[2] = uVar8;
  puStack_1d0[3] = uVar9;
  puStack_1d0[0x10] = 0x2e736563;
  *(undefined1 *)(puStack_1d0 + 0x11) = 0;
  (**(code **)(*(long *)puVar31 + 0x10))(puVar31,&uStack_1e0);
  if ((uStack_1e0 & 1) != 0) {
    func_0x0412a280(puStack_1d0,uStack_1e0 & 0xfffffffffffffffe);
  }
  uVar7 = auStack_308._1_4_;
  uVar15 = auStack_308[0];
  uVar16 = (undefined3)uStack_303;
  lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  if (lVar35 != 0) {
    lVar38 = CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
    if (lVar35 != lVar38) {
      do {
        if ((*(byte *)(lVar38 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar38 + -0x10),
                          *(ulong *)(lVar38 + -0x20) & 0xfffffffffffffffe);
        }
        lVar38 = lVar38 + -0x28;
      } while (lVar38 != lVar35);
      lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
    }
    uStack_303 = CONCAT13(uVar15,(undefined3)uStack_303);
    uStack_2ff = uVar7;
    uStack_2fb = CONCAT13(uStack_2fb._3_1_,uVar16);
    func_0x0412a280(lVar35,CONCAT53(uStack_2f5,CONCAT21(uStack_2f7,uStack_2fb._3_1_)) - lVar35);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_2a0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_28f,uStack_290),
                    CONCAT17(uStack_299,CONCAT25(uStack_29b,CONCAT41(uStack_29f,bStack_2a0))) &
                    0xfffffffffffffffe);
  }
  uStack_28f = 0;
  uStack_288 = 0;
  bStack_2a0 = 0x20;
  uStack_29f = _DAT_01471327;
  uStack_29b = (undefined2)_UNK_0147132b;
  uStack_299 = (undefined1)((uint)_UNK_0147132b >> 0x10);
  uStack_298 = (undefined1)((uint)_UNK_0147132b >> 0x18);
  uStack_297 = _UNK_0147132f;
  uStack_293 = (undefined2)_UNK_01471333;
  uStack_291 = (undefined1)((uint)_UNK_01471333 >> 0x10);
  uStack_290 = (undefined1)((uint)_UNK_01471333 >> 0x18);
  uStack_2a8 = 0x866055b16ca427;
  uStack_f0 = 0;
  uStack_26f = 0;
  uStack_26b = uStack_26b & 0xff000000;
  lStack_f8 = 0;
  uStack_278 = 0x98;
  uStack_277 = 0xf474e;
  uStack_273 = 0;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar17 == (long *)0x0) {
    FUN_0eec74c0(0x1e0,0);
  }
  uStack_303 = uStack_273;
  auStack_308._1_4_ = uStack_277;
  auStack_308[0] = uStack_278;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f4736e0;
  uStack_2ff = 0;
  uStack_2fb = uStack_2fb & 0xff000000;
  uStack_278 = 0;
  uStack_277 = 0;
  uStack_273 = uStack_273 & 0xff000000;
  uStack_303 = uStack_303 & 0xffffff;
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
  func_0x04aa75f0(plVar17 + 0xe,&plStack_1f8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar20 = plVar17 + 0x11;
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
  plVar17[4] = (long)&UNK_0f473730;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  puVar18 = (undefined8 *)
            CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  if (puVar18 == (undefined8 *)0x0) {
    lVar35 = 0;
  }
  else {
    (*(code *)*puVar18)(auStack_308,plVar17 + 0x2e);
    lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  }
  plVar1 = plVar17 + 4;
  auStack_308[0] = 0;
  auStack_308._1_4_ = 0;
  uStack_303 = uStack_303 & 0xff000000;
  plVar17[0x2e] = lVar35;
  plVar17[0x36] = 0;
  plVar17[0x37] = 0;
  plVar17[0x38] = 0;
  plVar17[0x39] = 0;
  *(undefined4 *)(plVar17 + 0x3a) = 0x3f800000;
  *(undefined1 *)(plVar17 + 0x3b) = 0;
  puVar31 = (uint *)(plVar17 + 0x12);
  if (plVar20 != (long *)&DAT_0f551fe8) {
    if ((*puVar31 & 1) == 0) {
      if ((_DAT_0f551ff0 & 1) == 0) {
        plVar17[0x14] = _DAT_0f552000;
        uVar9 = uRam000000000f551ffc;
        uVar8 = _DAT_0f551ff8;
        uVar7 = uRam000000000f551ff4;
        *puVar31 = _DAT_0f551ff0;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar7;
        *(undefined4 *)(plVar17 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar31,_DAT_0f552000,CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8));
      }
    }
    else {
      bVar39 = (_DAT_0f551ff0 & 1) != 0;
      lVar35 = 0xf551ff1;
      if (bVar39) {
        lVar35 = _DAT_0f552000;
      }
      uVar34 = (ulong)((_DAT_0f551ff0 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8);
      }
      func_0x04885120(puVar31,lVar35,uVar34);
    }
  }
  plVar17[0x11] = _DAT_0f551fe8;
  plVar17[0x15] = 0;
  lVar35 = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
  if (lVar35 != 0) {
    (**(code **)(lVar35 + 8))(auStack_308);
  }
  plVar24 = plVar17 + 1;
  lVar35 = CONCAT35((uint3)uStack_273,CONCAT41(uStack_277,uStack_278));
  if (lVar35 != 0) {
    (**(code **)(lVar35 + 8))(&uStack_278);
  }
  LOCK();
  *plVar24 = *plVar24 + 1;
  UNLOCK();
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar18 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0f473810;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[4] = &UNK_0f473860;
  puVar18[0xe] = plVar1;
  puVar18[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  puVar32 = puVar18 + 4;
  auStack_308[0] = SUB81(puVar32,0);
  auStack_308._1_4_ = (undefined4)((ulong)puVar32 >> 8);
  uStack_303._0_3_ = (undefined3)((ulong)puVar32 >> 0x28);
  uStack_303._3_1_ = (byte)puVar18;
  uStack_2ff = (undefined4)((ulong)puVar18 >> 8);
  uStack_2fb._0_3_ = (undefined3)((ulong)puVar18 >> 0x28);
  puStack_2c0 = puVar31;
  puVar19 = (undefined4 *)FUN_04fe1ff0(uStack_1b0,&uStack_2a8,0);
  plVar25 = *(long **)(puVar19 + 0x24);
  if (*(long **)(puVar19 + 0x26) <= plVar25) {
    plVar25 = (long *)func_0x04fe56f0(puVar19 + 0x22,plVar20,auStack_308);
    goto LAB_0d50da8c;
  }
  plVar25[2] = 0;
  plVar25[3] = 0;
  *plVar25 = 0;
  plVar25[1] = 0;
  plVar25[4] = 0;
  if (plVar25 == plVar20) {
LAB_0d50da1d:
    *plVar25 = *plVar20;
    plVar25[5] = (long)puVar32;
    plVar25[6] = (long)puVar18;
LAB_0d50da7c:
    LOCK();
    puVar18[1] = puVar18[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_2c0 & 1) == 0) {
      plVar25[3] = *(long *)(puStack_2c0 + 4);
      lVar35 = *(long *)(puStack_2c0 + 2);
      plVar25[1] = *(long *)puStack_2c0;
      plVar25[2] = lVar35;
      goto LAB_0d50da1d;
    }
    FUN_04885070(plVar25 + 1,plVar17[0x14],plVar17[0x13]);
    *plVar25 = *plVar20;
    puVar18 = (undefined8 *)CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
    plVar25[5] = CONCAT35((undefined3)uStack_303,CONCAT41(auStack_308._1_4_,auStack_308[0]));
    plVar25[6] = CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
    if (puVar18 != (undefined8 *)0x0) goto LAB_0d50da7c;
  }
  plVar25 = plVar25 + 7;
  *(long **)(puVar19 + 0x24) = plVar25;
LAB_0d50da8c:
  *(long **)(puVar19 + 0x24) = plVar25;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar8;
  *(undefined4 *)(plVar17 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar25 = plVar20 + 1;
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  plVar20 = (long *)CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,uStack_303._3_1_));
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar25 = plVar20 + 1;
    lVar35 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar35 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar35 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar35 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar35 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar35 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  if (lVar35 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  auStack_308[0] = 0x22;
  auStack_308._1_4_ = _DAT_01219d7c;
  uStack_303 = _UNK_01219d80;
  uStack_2ff = _UNK_01219d84;
  uStack_2fb = _UNK_01219d88;
  uStack_2f7 = 0x73;
  func_0x0d50e690(plVar1,auStack_308,0);
  uStack_278 = 0x22;
  uStack_277 = _DAT_0140b14d;
  uStack_273 = _UNK_0140b151;
  uStack_26f = _UNK_0140b155;
  uStack_26b = _UNK_0140b159;
  uStack_267 = CONCAT22(uStack_267._2_2_,0x73);
  func_0x0d50e690(plVar1,&uStack_278,1);
  plStack_1f8 = (long *)CONCAT26(plStack_1f8._6_2_,0x656e6f6e08);
  func_0x0d50e690(plVar1,&plStack_1f8,2);
  lVar35 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
  if (lVar35 == 0) {
    FUN_0eec74c0(0xc0,0);
  }
  auStack_210[0] = 0xc1;
  auStack_210[1] = 0xbd;
  auStack_210[2] = lVar35;
  func_0x0eee2f00(lVar35,&UNK_0129ce24,0xbd);
  *(undefined1 *)(lVar35 + 0xbd) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_210);
  if ((auStack_210[0] & 1) != 0) {
    func_0x0412a280(auStack_210[2],auStack_210[0] & 0xfffffffffffffffe);
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  if ((bStack_2a0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_28f,uStack_290),
                    CONCAT17(uStack_299,CONCAT25(uStack_29b,CONCAT41(uStack_29f,bStack_2a0))) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x1219d7c  condition_success
 * 0x129cddf  Condition for placing associated Feature. If omitted, always places.
 * 0x129cdef  acing associated Feature. If omitted, always places.
 * 0x129cdff   Feature. If omitted, always places.
 * 0x129ce0f  tted, always places.
 * 0x1338c1b  Array of features, and their associated conditions, for attempted placement. These features will
 * 0x1338c2b  s, and their associated conditions, for attempted placement. These features will be evaluated as
 * 0x1338c3b  ociated conditions, for attempted placement. These features will be evaluated as ordered.
 * 0x1338c4b  ns, for attempted placement. These features will be evaluated as ordered.
 * 0x1338c5b  d placement. These features will be evaluated as ordered.
 * 0x1338c6b  se features will be evaluated as ordered.
 * 0x1338c7b   be evaluated as ordered.
 * 0x1338c84  ated as ordered.
 * 0x140b14d  placement_success
 * 0x1471327  early_out_scheme
 * 0x148c4d0  conditional_features
 * 0x1494d5d  <any array element>
 * 0x14c1133  Feature to be placed.
 */
