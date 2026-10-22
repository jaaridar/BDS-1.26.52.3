/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6eb59e0 (ELF vaddr 0x6db59e0)
 * Label: caller-of-callee
 * Body:  [[06eb59e0, 06eb623c] [06eb6240, 06eb62ac] [06eb62b0, 06eb7326] [06eb7330, 06eb8a84] [06eb8a90, 06eb909d] [06eb90a0, 06eb90dd] [06eb90e0, 06eba647] [06eba650, 06ebac5d] [06ebac60, 06ebac9c] [06ebaca0, 06ebb130] [06ebb140, 06ebbc30] [06ebcd0d, 06ebcdb6] [06ebd1e3, 06ebd2ec] [06ebd4e2, 06ebd502]]
 * Ghidra: FUN_06eb59e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06eb59e0(undefined8 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint *puVar28;
  long *plVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 **ppuVar33;
  undefined8 *puVar34;
  undefined *puVar35;
  ulong uVar36;
  undefined8 *puVar37;
  ulong uVar38;
  uint *puVar39;
  long lVar40;
  uint *puVar41;
  ulong uVar42;
  uint *puVar43;
  long lVar44;
  bool bVar45;
  long *plStack_388;
  uint *puStack_380;
  uint *puStack_378;
  undefined1 uStack_369;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  uint uStack_358;
  undefined1 uStack_354;
  undefined2 uStack_353;
  undefined1 uStack_351;
  undefined1 uStack_350;
  undefined6 uStack_34f;
  undefined1 uStack_349;
  uint *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  uint *puStack_320;
  undefined8 *puStack_318;
  uint uStack_310;
  undefined1 uStack_30c;
  undefined1 uStack_30b;
  undefined1 uStack_30a;
  undefined1 uStack_309;
  uint uStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  uint *puStack_2d0;
  undefined8 *puStack_2c8;
  byte bStack_2c0;
  undefined4 uStack_2bf;
  undefined2 uStack_2bb;
  undefined1 uStack_2b9;
  undefined1 uStack_2b8;
  undefined4 uStack_2b7;
  undefined3 uStack_2b3;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_288;
  uint *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  uint *puStack_238;
  uint *puStack_230;
  undefined8 *puStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 uStack_214;
  undefined2 uStack_213;
  undefined1 uStack_211;
  undefined1 uStack_210;
  undefined6 uStack_20f;
  undefined1 uStack_209;
  long lStack_208;
  uint *puStack_1e0;
  uint *puStack_1d8;
  uint *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined *puStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  byte *pbStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  uVar30 = *param_1;
  puStack_230 = (uint *)param_1[1];
  if (puStack_230 != (uint *)0x0) {
    LOCK();
    *(long *)((long)puStack_230 + 8) = *(long *)((long)puStack_230 + 8) + 1;
    UNLOCK();
  }
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_310 = 0x65726216;
  uStack_30c = 0x65;
  uStack_30b = 100;
  uStack_30a = 0x73;
  uStack_309 = 0x5f;
  uStack_308 = 0x68746977;
  puStack_318 = (undefined8 *)0x8084b96c7f14e777;
  puStack_270 = (undefined *)0x0;
  puStack_278 = (undefined8 *)&UNK_0f0a0680;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f0a0440;
  puStack_368 = (undefined8 *)0x0;
  uStack_360._0_4_ = 0;
  uStack_360._4_4_ = 0;
  if (puStack_278 == (undefined8 *)0x0) {
    puStack_368 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_278)(&puStack_278,&puStack_368);
    puStack_368 = puStack_278;
  }
  puStack_278 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar14 + 0xe,&puStack_2c8,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar17 = plVar14 + 0x11;
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
  plVar14[4] = (long)&UNK_0f0a0490;
  ppuVar33 = (undefined8 **)(plVar14 + 0x2e);
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  *(undefined1 *)(plVar14 + 0x36) = 0;
  if (ppuVar33 != &puStack_368) {
    if (puStack_368 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_368)(&puStack_368,ppuVar33);
      puVar15 = puStack_368;
    }
    puStack_368 = (undefined8 *)0x0;
    *ppuVar33 = puVar15;
  }
  puVar21 = (uint *)(plVar14 + 0x12);
  if (plVar17 != (long *)&DAT_0f552108) {
    if ((*puVar21 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552120;
        uVar11 = uRam000000000f55211c;
        uVar10 = _DAT_0f552118;
        uVar9 = uRam000000000f552114;
        *puVar21 = _DAT_0f552110;
        *(uint *)((long)plVar14 + 0x94) = uVar9;
        *(uint *)(plVar14 + 0x13) = uVar10;
        *(uint *)((long)plVar14 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar21,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar45 = (_DAT_0f552110 & 1) != 0;
      lVar32 = 0xf552111;
      if (bVar45) {
        lVar32 = _DAT_0f552120;
      }
      uVar38 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar45) {
        uVar38 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(puVar21,lVar32,uVar38);
    }
  }
  plVar19 = plVar14 + 1;
  plVar14[0x11] = _DAT_0f552108;
  plVar14[0x15] = 0;
  if (puStack_368 != (undefined8 *)0x0) {
    (*(code *)puStack_368[1])(&puStack_368);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f0a0588;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f0a05d8;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_360._0_4_ = (uint)puVar15;
  uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_368 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x06f937c0(uVar30,&puStack_318);
  plVar20 = *(long **)(puVar16 + 0x24);
  if (plVar20 < *(long **)(puVar16 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plVar17) {
      if ((*puVar21 & 1) == 0) {
        plVar20[3] = plVar14[0x14];
        lVar32 = plVar14[0x13];
        plVar20[1] = *(long *)puVar21;
        plVar20[2] = lVar32;
      }
      else {
        func_0x04885070(plVar20 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar20 = *plVar17;
    plVar20[5] = (long)(puVar15 + 4);
    plVar20[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    *(long **)(puVar16 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x06f97060(puVar16 + 0x22,plVar17,&puStack_368);
  }
  *(long **)(puVar16 + 0x24) = plVar20;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar6;
  *(undefined4 *)(plVar14 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar8;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar17 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar32 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar32 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar32 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar32 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_278 != (undefined8 *)0x0) {
    (*(code *)puStack_278[1])(&puStack_278);
  }
  if ((uStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,
                    CONCAT17(uStack_309,
                             CONCAT16(uStack_30a,
                                      CONCAT15(uStack_30b,CONCAT14(uStack_30c,uStack_310)))) &
                    0xfffffffffffffffe);
  }
  uStack_20f = 0;
  uStack_209 = 0;
  lStack_208 = 0;
  uStack_220._1_3_ = (undefined3)_DAT_0147c4a4;
  uStack_220 = CONCAT31(uStack_220._1_3_,0x20);
  uStack_21c._1_3_ = (undefined3)_UNK_0147c4a8;
  uStack_21c = CONCAT31(uStack_21c._1_3_,(char)((uint)_DAT_0147c4a4 >> 0x18));
  uStack_218._1_3_ = (undefined3)_UNK_0147c4ac;
  uStack_218 = CONCAT31(uStack_218._1_3_,(char)((uint)_UNK_0147c4a8 >> 0x18));
  uStack_214 = (undefined1)((uint)_UNK_0147c4ac >> 0x18);
  uStack_213 = (undefined2)_UNK_0147c4b0;
  uStack_211 = (undefined1)((uint)_UNK_0147c4b0 >> 0x10);
  uStack_210 = (undefined1)((uint)_UNK_0147c4b0 >> 0x18);
  puStack_228 = (undefined8 *)0x442724424c86d8ea;
  puStack_2c8 = (undefined8 *)0x0;
  bStack_2c0 = 0;
  uStack_2bf = 0;
  uStack_2bb = 0;
  uStack_2b9 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  uStack_30b = 0;
  uStack_30a = 0;
  uStack_309 = 0;
  puStack_318 = (undefined8 *)&UNK_0f0a08d0;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_368 = puStack_318;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f0a06a8;
  uStack_360._4_4_ = CONCAT13(uStack_309,CONCAT12(uStack_30a,CONCAT11(uStack_30b,uStack_30c)));
  puStack_318 = (undefined8 *)0x0;
  uStack_360._0_4_ = uStack_310;
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
  puStack_2d0 = (uint *)plVar17;
  func_0x04aa75f0(plVar17 + 0xe,&plStack_1c8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar19 = plVar17 + 0x11;
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
  plVar17[4] = (long)&UNK_0f0a06f8;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  if (puStack_368 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_368)(&puStack_368,plVar17 + 0x2e);
    puVar15 = puStack_368;
  }
  puStack_368 = (undefined8 *)0x0;
  plVar17[0x2e] = (long)puVar15;
  puStack_320 = (uint *)(plVar17 + 0x12);
  if (plVar19 == (long *)&DAT_0f551ef8) {
    plVar17[0x15] = 0;
  }
  else {
    if ((*puStack_320 & 1) == 0) {
      if ((_DAT_0f551f00 & 1) == 0) {
        plVar17[0x14] = _DAT_0f551f10;
        uVar7 = uRam000000000f551f0c;
        uVar6 = _DAT_0f551f08;
        uVar5 = uRam000000000f551f04;
        *puStack_320 = _DAT_0f551f00;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar5;
        *(undefined4 *)(plVar17 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar7;
      }
      else {
        func_0x04885070(puStack_320,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
      }
    }
    else {
      bVar45 = (_DAT_0f551f00 & 1) != 0;
      lVar32 = 0xf551f01;
      if (bVar45) {
        lVar32 = _DAT_0f551f10;
      }
      uVar38 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
      if (bVar45) {
        uVar38 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
      }
      FUN_04885120(puStack_320,lVar32,uVar38);
    }
    plVar17[0x11] = _DAT_0f551ef8;
    plVar17[0x15] = 0;
    if (puStack_368 != (undefined8 *)0x0) {
      (*(code *)puStack_368[1])(&puStack_368);
    }
  }
  plVar20 = plVar17 + 1;
  if (puStack_318 != (undefined8 *)0x0) {
    (*(code *)puStack_318[1])(&puStack_318);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puStack_1e0 = (uint *)plVar20;
  plStack_1c0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_1c0 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  lVar32 = lStack_208;
  puVar15 = puStack_228;
  plStack_1c0[1] = 0;
  plStack_1c0[2] = 0;
  *plStack_1c0 = (long)&UNK_0f0a07d8;
  plStack_1c8 = plStack_1c0 + 4;
  plStack_1c0[6] = 0;
  plStack_1c0[7] = 0;
  plStack_1c0[4] = (long)&UNK_0f0a0828;
  plStack_1c0[0xe] = (long)(plVar17 + 4);
  plStack_1c0[0xf] = (long)plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  uVar38 = plVar14[0x1c];
  if (plVar14[0x1b] != uVar38) {
    if ((uStack_220 & 1) == 0) {
      uVar36 = (ulong)((byte)uStack_220 >> 1);
      plStack_288 = (long *)((long)&uStack_220 + 1);
    }
    else {
      uVar36 = CONCAT17(uStack_211,CONCAT25(uStack_213,CONCAT14(uStack_214,uStack_218)));
      plStack_288 = (long *)CONCAT17(uStack_209,CONCAT61(uStack_20f,uStack_210));
    }
    lVar18 = plVar14[0x1b] + 0x19;
    do {
      if (*(undefined8 **)(lVar18 + -9) == puVar15) {
        if ((*(undefined8 ***)(lVar18 + 0x17) == &puStack_228) && (lVar18 + -9 == lVar32)) {
LAB_06eb6550:
          puVar16 = (undefined4 *)(lVar18 + -0x19);
          plVar14 = *(long **)(lVar18 + 0x77);
          puVar25 = puStack_2d0;
          puVar21 = puStack_320;
          if (*(long **)(lVar18 + 0x7f) <= plVar14) goto LAB_06eb6575;
          goto LAB_06eb64c0;
        }
        bVar3 = *(byte *)(lVar18 + -1);
        if ((bVar3 & 1) == 0) {
          uVar42 = (ulong)(bVar3 >> 1);
        }
        else {
          uVar42 = *(ulong *)(lVar18 + 7);
        }
        if (uVar42 == uVar36) {
          lVar40 = lVar18;
          if ((bVar3 & 1) != 0) {
            lVar40 = *(long *)(lVar18 + 0xf);
          }
          iVar13 = bcmp(lVar40,plStack_288,uVar36);
          if (iVar13 == 0) {
            *(undefined8 ***)(lVar18 + 0x17) = &puStack_228;
            lStack_208 = lVar18 + -9;
            goto LAB_06eb6550;
          }
        }
      }
      *(undefined8 *)(lVar18 + 0x17) = 0;
      uVar42 = lVar18 + 0x8f;
      lVar18 = lVar18 + 0xa8;
    } while (uVar42 != uVar38);
  }
  puVar25 = puStack_2d0;
  if (uVar38 < (ulong)plVar14[0x1d]) {
    func_0x06f98fe0(uVar38);
    lVar32 = uVar38 + 0xa8;
    plVar14[0x1c] = lVar32;
    puVar25 = puStack_2d0;
  }
  else {
    lVar32 = func_0x06f98d50(plVar14 + 0x1b);
  }
  plVar14[0x1c] = lVar32;
  func_0x0b63b6d0(*(undefined8 *)(lVar32 + -0xa8),&puStack_228);
  lVar32 = plVar14[0x1c];
  *(char *)(lVar32 + -7) = (char)plVar14[0x10];
  if ((undefined8 **)(lVar32 + -0x98) != &puStack_228) {
    puVar21 = (uint *)(lVar32 + -0x90);
    if ((*(byte *)puVar21 & 1) == 0) {
      if ((uStack_220 & 1) == 0) {
        *(ulong *)(lVar32 + -0x80) = CONCAT17(uStack_209,CONCAT61(uStack_20f,uStack_210));
        *puVar21 = uStack_220;
        *(undefined4 *)(lVar32 + -0x8c) = uStack_21c;
        *(undefined4 *)(lVar32 + -0x88) = uStack_218;
        *(uint *)(lVar32 + -0x84) = CONCAT13(uStack_211,CONCAT21(uStack_213,uStack_214));
      }
      else {
        func_0x04885070(puVar21,CONCAT17(uStack_209,CONCAT61(uStack_20f,uStack_210)),
                        CONCAT17(uStack_211,CONCAT25(uStack_213,CONCAT14(uStack_214,uStack_218))));
      }
    }
    else {
      bVar45 = (uStack_220 & 1) != 0;
      lVar18 = (long)&uStack_220 + 1;
      if (bVar45) {
        lVar18 = CONCAT17(uStack_209,CONCAT61(uStack_20f,uStack_210));
      }
      uVar38 = (ulong)((byte)uStack_220 >> 1);
      if (bVar45) {
        uVar38 = CONCAT17(uStack_211,CONCAT25(uStack_213,CONCAT14(uStack_214,uStack_218)));
      }
      FUN_04885120(puVar21,lVar18,uVar38);
    }
  }
  *(undefined8 **)(lVar32 + -0x98) = puStack_228;
  *(undefined8 *)(lVar32 + -0x78) = 0;
  func_0x04aa9390(&puStack_368,&uStack_220,(char)plVar14[0x10]);
  lVar32 = plVar14[0x1c];
  func_0x04167a70(lVar32 + -0x70,&puStack_368);
  *(ulong *)(lVar32 + -0x68) = CONCAT44(uStack_360._4_4_,(uint)uStack_360);
  *(ulong *)(lVar32 + -0x60) =
       CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
  *(ulong *)(lVar32 + -0x58) = CONCAT17(uStack_349,CONCAT61(uStack_34f,uStack_350));
  *(uint **)(lVar32 + -0x50) = puStack_348;
  uVar5 = (undefined4)uStack_340;
  uVar6 = uStack_340._4_4_;
  uVar7 = (undefined4)uStack_338;
  uVar8 = uStack_338._4_4_;
  uStack_340 = 0;
  uStack_338 = (long *)0x0;
  plVar17 = *(long **)(lVar32 + -0x40);
  *(undefined4 *)(lVar32 + -0x48) = uVar5;
  *(undefined4 *)(lVar32 + -0x44) = uVar6;
  *(undefined4 *)(lVar32 + -0x40) = uVar7;
  *(undefined4 *)(lVar32 + -0x3c) = uVar8;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar18 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  puVar21 = puStack_320;
  plVar17 = uStack_338;
  *(undefined8 *)(lVar32 + -0x38) = uStack_330;
  if (uStack_338 != (long *)0x0) {
    LOCK();
    plVar20 = uStack_338 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*uStack_338 + 0x10))(uStack_338);
      func_0x0412c2d0(plVar17);
    }
  }
  func_0x04167a40(&puStack_368);
  lVar32 = plVar14[0x1c];
  *(undefined1 *)(lVar32 + -8) = 0;
  puVar16 = (undefined4 *)(lVar32 + -0xa8);
  plVar14 = *(long **)(lVar32 + -0x18);
  if (plVar14 < *(long **)(lVar32 + -0x10)) {
LAB_06eb64c0:
    plVar14[2] = 0;
    plVar14[3] = 0;
    *plVar14 = 0;
    plVar14[1] = 0;
    plVar14[4] = 0;
    if (plVar14 != plVar19) {
      if ((*puVar21 & 1) == 0) {
        plVar14[3] = *(long *)(puVar21 + 4);
        lVar32 = *(long *)(puVar21 + 2);
        plVar14[1] = *(long *)puVar21;
        plVar14[2] = lVar32;
      }
      else {
        func_0x04885070(plVar14 + 1,*(long *)((long)puVar25 + 0xa0),*(long *)((long)puVar25 + 0x98))
        ;
      }
    }
    *plVar14 = *plVar19;
    plVar14[5] = (long)plStack_1c8;
    plVar14[6] = (long)plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plStack_1c0[1] = plStack_1c0[1] + 1;
      UNLOCK();
    }
    plVar14 = plVar14 + 7;
    *(long **)(puVar16 + 0x24) = plVar14;
  }
  else {
LAB_06eb6575:
    plVar14 = (long *)func_0x06f99160(puVar16 + 0x22,plVar19,&plStack_1c8);
  }
  *(long **)(puVar16 + 0x24) = plVar14;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = *(long **)((long)puVar25 + 0x78);
  *(undefined4 *)((long)puVar25 + 0x70) = uVar5;
  *(undefined4 *)((long)puVar25 + 0x74) = uVar6;
  *(undefined4 *)((long)puVar25 + 0x78) = uVar7;
  *(undefined4 *)((long)puVar25 + 0x7c) = uVar8;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar32 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  plVar14 = plStack_1c0;
  *(undefined1 *)((long)puVar25 + 0x80) = *(undefined1 *)((long)puVar16 + 0xa1);
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_1c0 + 1;
    lVar32 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar14);
    }
  }
  puVar22 = puStack_1e0;
  puVar21 = puStack_230;
  LOCK();
  lVar32 = *(long *)puStack_1e0;
  *(long *)puStack_1e0 = *(long *)puStack_1e0 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*(long *)puVar25 + 0x10))(puVar25);
    func_0x0412c2d0(puVar25);
    LOCK();
    lVar32 = *(long *)puVar22;
    *(long *)puVar22 = *(long *)puVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar32 = *(long *)puStack_1e0;
    *(long *)puStack_1e0 = *(long *)puStack_1e0 + -1;
    UNLOCK();
  }
  if (lVar32 == 0) {
    (**(code **)(*(long *)puVar25 + 0x10))(puVar25);
    func_0x0412c2d0(puVar25);
  }
  if (puStack_2c8 != (undefined8 *)0x0) {
    (*(code *)puStack_2c8[1])(&puStack_2c8);
  }
  if ((uStack_220 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_209,CONCAT61(uStack_20f,uStack_210)),
                    CONCAT44(uStack_21c,uStack_220) & 0xfffffffffffffffe);
  }
  if (puVar21 != (uint *)0x0) {
    LOCK();
    plVar14 = (long *)((long)puVar21 + 8);
    lVar32 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
      func_0x0412c2d0(puVar21);
    }
  }
  uVar30 = *param_1;
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
  }
  func_0x06ebd540(uVar30,plVar14,0xa0,&UNK_0128e8ae,1);
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar32 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  uVar30 = *param_1;
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
  }
  lVar32 = func_0x06ebdd70(0,uVar30,plVar14,0xa4,&UNK_0147c3d8);
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  uStack_70 = 0;
  puStack_78 = (undefined8 *)&UNK_0f0a6880;
  ppuVar33 = (undefined8 **)(lVar32 + 0xd0);
  if (ppuVar33 != &puStack_78) {
    if ((*ppuVar33 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar33)[1])(ppuVar33), puStack_78 != (undefined8 *)0x0)) {
      (*(code *)*puStack_78)(&puStack_78,ppuVar33);
      puVar15 = puStack_78;
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    puStack_78 = (undefined8 *)0x0;
    *ppuVar33 = puVar15;
  }
  uVar30 = *param_1;
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
  }
  lVar32 = func_0x06ebdd70(_DAT_01198798,uVar30,plVar14,0xa8,&UNK_0146332a);
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  uStack_b0 = 0;
  puStack_b8 = (undefined8 *)&UNK_0f0a6898;
  ppuVar33 = (undefined8 **)(lVar32 + 0xd0);
  if (ppuVar33 != &puStack_b8) {
    if ((*ppuVar33 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar33)[1])(ppuVar33), puStack_b8 != (undefined8 *)0x0)) {
      (*(code *)*puStack_b8)(&puStack_b8,ppuVar33);
      puVar15 = puStack_b8;
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    puStack_b8 = (undefined8 *)0x0;
    *ppuVar33 = puVar15;
  }
  uVar30 = *param_1;
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
  }
  func_0x06ebd540(uVar30,plVar14,0xa1,&UNK_014cd357,0);
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar32 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  uVar30 = *param_1;
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
  }
  lStack_208 = 0;
  uStack_220._1_3_ = (undefined3)_DAT_01416b40;
  uStack_220 = CONCAT31(uStack_220._1_3_,0x2c);
  uStack_21c._1_3_ = (undefined3)_UNK_01416b44;
  uStack_21c = CONCAT31(uStack_21c._1_3_,(char)((uint)_DAT_01416b40 >> 0x18));
  uStack_218._1_3_ = (undefined3)_UNK_01416b48;
  uStack_218 = CONCAT31(uStack_218._1_3_,(char)((uint)_UNK_01416b44 >> 0x18));
  uStack_214 = (undefined1)((uint)_UNK_01416b48 >> 0x18);
  uStack_213 = (undefined2)_UNK_01416b4c;
  uStack_211 = 0x65;
  uStack_210 = 100;
  uStack_20f = 0x736d6574695f;
  uStack_209 = 0;
  puStack_228 = (undefined8 *)0x1c651f98e0346244;
  bStack_2c0 = 0xa0;
  uStack_2bf = 0x6ebe5;
  uStack_2bb = 0;
  uStack_2b9 = 0;
  uStack_2b8 = 0;
  uStack_2b7 = 0;
  uStack_2b3 = 0;
  puStack_270 = &UNK_06ebe5a0;
  uStack_268 = 0;
  puStack_2c8 = (undefined8 *)0x0;
  puStack_278 = (undefined8 *)&UNK_0f0a11c0;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  puStack_318 = puStack_278;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f0a0d18;
  uStack_310 = puStack_270._0_4_;
  uStack_30c = (undefined1)((ulong)puStack_270 >> 0x20);
  uStack_30b = (undefined1)((ulong)puStack_270 >> 0x28);
  uStack_30a = (undefined1)((ulong)puStack_270 >> 0x30);
  uStack_309 = (undefined1)((ulong)puStack_270 >> 0x38);
  uStack_308 = (undefined4)uStack_268;
  uStack_304 = uStack_268._4_4_;
  puStack_278 = (undefined8 *)0x0;
  puStack_368 = (undefined8 *)0x0;
  uStack_360._0_4_ = 0;
  uStack_360._4_4_ = 0;
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
  func_0x04aa75f0(plVar17 + 0xe,&plStack_1c8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar19 = plVar17 + 0x11;
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
  plVar17[4] = (long)&UNK_0f0a0e20;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  *(undefined1 *)(plVar17 + 0x36) = 0;
  if ((undefined8 **)(plVar17 + 0x2e) != &puStack_368) {
    puStack_368 = (undefined8 *)0x0;
    plVar17[0x2e] = 0;
  }
  plVar20 = plVar17 + 4;
  pbVar27 = (byte *)(plVar17 + 0x12);
  if (plVar19 == (long *)&DAT_0f552108) {
LAB_06eb6b81:
    plVar17[0x11] = _DAT_0f552108;
    plVar17[0x15] = 0;
  }
  else {
    if ((_DAT_0f552110 & 1) == 0) {
      plVar17[0x14] = _DAT_0f552120;
      lVar32 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      *(ulong *)pbVar27 = CONCAT44(uRam000000000f552114,_DAT_0f552110);
      plVar17[0x13] = lVar32;
      goto LAB_06eb6b81;
    }
    func_0x04885070(pbVar27,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
    plVar17[0x11] = _DAT_0f552108;
    plVar17[0x15] = 0;
    if (puStack_368 != (undefined8 *)0x0) {
      (*(code *)puStack_368[1])(&puStack_368);
    }
  }
  plVar17[4] = (long)&UNK_0f0a0d68;
  plVar17[0x38] = 0;
  plVar17[0x39] = 0;
  if (puStack_318 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_318)(&puStack_318,plVar17 + 0x38);
    puVar15 = puStack_318;
  }
  puStack_318 = (undefined8 *)0x0;
  plVar17[0x38] = (long)puVar15;
  FUN_06f9da00(plVar20,0,&UNK_014ae949);
  FUN_06f9da00(plVar20,0x10,&UNK_013b0538);
  if (puStack_318 != (undefined8 *)0x0) {
    (*(code *)puStack_318[1])(&puStack_318);
  }
  plVar29 = plVar17 + 1;
  if (puStack_278 != (undefined8 *)0x0) {
    (*(code *)puStack_278[1])(&puStack_278);
  }
  LOCK();
  *plVar29 = *plVar29 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f0a1120;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f0a1170;
  puVar15[0xe] = plVar20;
  puVar15[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  uStack_360._0_4_ = (uint)puVar15;
  uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_368 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x06f937c0(uVar30,&puStack_228);
  plVar20 = *(long **)(puVar16 + 0x24);
  if (plVar20 < *(long **)(puVar16 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plVar19) {
      if ((*pbVar27 & 1) == 0) {
        plVar20[3] = plVar17[0x14];
        lVar32 = plVar17[0x13];
        plVar20[1] = *(long *)pbVar27;
        plVar20[2] = lVar32;
      }
      else {
        func_0x04885070(plVar20 + 1,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar20 = *plVar19;
    plVar20[5] = (long)(puVar15 + 4);
    plVar20[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    *(long **)(puVar16 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x06f97060(puVar16 + 0x22,plVar19,&puStack_368);
  }
  *(long **)(puVar16 + 0x24) = plVar20;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar6;
  *(undefined4 *)(plVar17 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar8;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar19 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar32 = *plVar29;
  *plVar29 = *plVar29 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar32 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar32 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  if (lVar32 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  if (puStack_2c8 != (undefined8 *)0x0) {
    (*(code *)puStack_2c8[1])(&puStack_2c8);
  }
  if ((uStack_220 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_209,CONCAT61(uStack_20f,uStack_210)),
                    CONCAT44(uStack_21c,uStack_220) & 0xfffffffffffffffe);
  }
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar32 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  uVar30 = *param_1;
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
  }
  puStack_348 = (uint *)0x0;
  uStack_360._0_4_ = CONCAT31((int3)_DAT_01416b40,0x2c);
  uStack_360._5_3_ = (undefined3)_UNK_01416b44;
  uStack_360._4_4_ = CONCAT31(uStack_360._5_3_,(char)((uint)_DAT_01416b40 >> 0x18));
  uStack_358._1_3_ = (undefined3)_UNK_01416b48;
  uStack_358 = CONCAT31(uStack_358._1_3_,(char)((uint)_UNK_01416b44 >> 0x18));
  uStack_354 = (undefined1)((uint)_UNK_01416b48 >> 0x18);
  uStack_353 = (undefined2)_UNK_01416b4c;
  uStack_351 = 0x65;
  uStack_350 = 100;
  uStack_34f = 0x736d6574695f;
  uStack_349 = 0;
  puStack_368 = (undefined8 *)0x1c651f98e0346244;
  puStack_2c8 = (undefined8 *)&UNK_0f0a1298;
  bStack_2c0 = 0x30;
  uStack_2bf = 0;
  uStack_2bb = 0;
  uStack_2b9 = 0;
  lVar32 = func_0x06fa38c0(uVar30,&puStack_368,&puStack_2c8);
  if (puStack_2c8 != (undefined8 *)0x0) {
    (*(code *)puStack_2c8[1])(&puStack_2c8);
  }
  if (((uint)uStack_360 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_349,CONCAT61(uStack_34f,uStack_350)),
                    CONCAT44(uStack_360._4_4_,(uint)uStack_360) & 0xfffffffffffffffe);
  }
  uStack_220 = 0x30;
  uStack_21c = 0;
  puStack_270 = (undefined *)0x30;
  puStack_228 = (undefined8 *)0x0;
  puStack_278 = (undefined8 *)&UNK_0f0a1768;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  puStack_318 = puStack_278;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f0a12c0;
  puStack_278 = (undefined8 *)0x0;
  uStack_310 = puStack_270._0_4_;
  uStack_30c = (undefined1)((ulong)puStack_270 >> 0x20);
  uStack_30b = (undefined1)((ulong)puStack_270 >> 0x28);
  uStack_30a = (undefined1)((ulong)puStack_270 >> 0x30);
  uStack_309 = (undefined1)((ulong)puStack_270 >> 0x38);
  puStack_368 = (undefined8 *)0x0;
  uStack_360._0_4_ = 0;
  uStack_360._4_4_ = 0;
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
  func_0x04aa75f0(plVar17 + 0xe,&plStack_1c8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar19 = plVar17 + 0x11;
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
  plVar17[4] = (long)&UNK_0f0a13c8;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  *(undefined1 *)(plVar17 + 0x36) = 0;
  if ((undefined8 **)(plVar17 + 0x2e) != &puStack_368) {
    puStack_368 = (undefined8 *)0x0;
    plVar17[0x2e] = 0;
  }
  plVar20 = plVar17 + 4;
  puStack_320 = (uint *)(plVar17 + 0x12);
  if (plVar19 == (long *)&DAT_0f552108) {
LAB_06eb712f:
    plVar17[0x11] = _DAT_0f552108;
    plVar17[0x15] = 0;
  }
  else {
    if ((_DAT_0f552110 & 1) == 0) {
      plVar17[0x14] = _DAT_0f552120;
      lVar18 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      *(ulong *)puStack_320 = CONCAT44(uRam000000000f552114,_DAT_0f552110);
      plVar17[0x13] = lVar18;
      goto LAB_06eb712f;
    }
    func_0x04885070(puStack_320,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
    plVar17[0x11] = _DAT_0f552108;
    plVar17[0x15] = 0;
    if (puStack_368 != (undefined8 *)0x0) {
      (*(code *)puStack_368[1])(&puStack_368);
    }
  }
  plVar17[4] = (long)&UNK_0f0a1310;
  plVar17[0x38] = 0;
  plVar17[0x39] = 0;
  if (puStack_318 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_318)(&puStack_318,plVar17 + 0x38);
    puVar15 = puStack_318;
  }
  puStack_318 = (undefined8 *)0x0;
  plVar17[0x38] = (long)puVar15;
  func_0x06fa4890(plVar20,0,&UNK_014ae949);
  func_0x06fa4890(plVar20,0x10,&UNK_013b0538);
  if (puStack_318 != (undefined8 *)0x0) {
    (*(code *)puStack_318[1])(&puStack_318);
  }
  plVar29 = plVar17 + 1;
  if (puStack_278 != (undefined8 *)0x0) {
    (*(code *)puStack_278[1])(&puStack_278);
  }
  LOCK();
  *plVar29 = *plVar29 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f0a16c8;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f0a1718;
  puVar15[0xe] = plVar20;
  puVar15[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  puVar34 = puVar15 + 4;
  uStack_360._0_4_ = (uint)puVar15;
  uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  plStack_288 = (long *)(lVar32 + 0xb8);
  puVar31 = *(undefined8 **)(lVar32 + 0xc0);
  for (puVar37 = *(undefined8 **)(lVar32 + 0xb8); puStack_368 = puVar34, puVar37 != puVar31;
      puVar37 = puVar37 + 0x15) {
    if ((puVar37[0xf] == 0) && (puVar37[0x10] == -1)) {
      plVar20 = (long *)puVar37[0x12];
      if (plVar20 < (long *)puVar37[0x13]) goto LAB_06eb7361;
      goto LAB_06eb7475;
    }
  }
  if (puVar31 < *(undefined8 **)(lVar32 + 200)) {
    func_0x06f98fe0(puVar31);
    *(undefined8 **)(lVar32 + 0xc0) = puVar31 + 0x15;
    *(undefined8 **)(lVar32 + 0xc0) = puVar31 + 0x15;
    pbVar27 = (byte *)*puVar31;
    if ((*pbVar27 & 1) != 0) goto LAB_06eb73e2;
LAB_06eb7418:
    *pbVar27 = 0x26;
    pbVar27 = pbVar27 + 1;
  }
  else {
    lVar18 = func_0x06f98d50(plStack_288);
    *(long *)(lVar32 + 0xc0) = lVar18;
    pbVar27 = *(byte **)(lVar18 + -0xa8);
    if ((*pbVar27 & 1) == 0) goto LAB_06eb7418;
LAB_06eb73e2:
    pbVar27[8] = 0x13;
    pbVar27[9] = 0;
    pbVar27[10] = 0;
    pbVar27[0xb] = 0;
    pbVar27[0xc] = 0;
    pbVar27[0xd] = 0;
    pbVar27[0xe] = 0;
    pbVar27[0xf] = 0;
    pbVar27 = *(byte **)(pbVar27 + 0x10);
  }
  uVar7 = _UNK_01494d69;
  uVar6 = _UNK_01494d65;
  uVar5 = _UNK_01494d61;
  *(undefined4 *)pbVar27 = _DAT_01494d5d;
  *(undefined4 *)(pbVar27 + 4) = uVar5;
  *(undefined4 *)(pbVar27 + 8) = uVar6;
  *(undefined4 *)(pbVar27 + 0xc) = uVar7;
  pbVar27[0xf] = 0x65;
  pbVar27[0x10] = 0x6e;
  pbVar27[0x11] = 0x74;
  pbVar27[0x12] = 0x3e;
  pbVar27[0x13] = 0;
  lVar18 = *(long *)(lVar32 + 0xc0);
  puVar37 = (undefined8 *)(lVar18 + -0xa8);
  *(undefined1 *)(lVar18 + -7) = *(undefined1 *)(lVar32 + 0x60);
  *(undefined8 *)(lVar18 + -0x30) = 0;
  *(undefined8 *)(lVar18 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar18 + -8) = 0;
  plVar20 = *(long **)(lVar18 + -0x18);
  if (plVar20 < *(long **)(lVar18 + -0x10)) {
LAB_06eb7361:
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plVar19) {
      pbVar27 = (byte *)(plVar20 + 1);
      if ((*puStack_320 & 1) == 0) {
        plVar20[3] = *(long *)((long)puStack_320 + 0x10);
        lVar18 = *(long *)((long)puStack_320 + 8);
        *(undefined8 *)pbVar27 = *(undefined8 *)puStack_320;
        plVar20[2] = lVar18;
      }
      else {
        puStack_320 = (uint *)pbVar27;
        func_0x04885070(pbVar27,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar20 = *plVar19;
    plVar20[5] = (long)puVar34;
    plVar20[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    puVar37[0x12] = plVar20;
  }
  else {
LAB_06eb7475:
    plVar20 = (long *)func_0x06f99160(puVar37 + 0x11,plVar19,&puStack_368);
  }
  puVar37[0x12] = plVar20;
  uVar5 = *(undefined4 *)puVar37;
  uVar6 = *(undefined4 *)((long)puVar37 + 4);
  uVar7 = *(undefined4 *)(puVar37 + 1);
  uVar8 = *(undefined4 *)((long)puVar37 + 0xc);
  if (puVar37[1] != 0) {
    LOCK();
    plVar19 = (long *)(puVar37[1] + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar6;
  *(undefined4 *)(plVar17 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar8;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar18 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar37 + 0xa1);
  plVar19 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar18 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar18 = *plVar29;
  *plVar29 = *plVar29 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar18 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar18 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  if (lVar18 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  if (puStack_228 != (undefined8 *)0x0) {
    (*(code *)puStack_228[1])(&puStack_228);
  }
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  puStack_270 = &UNK_06ebe670;
  uStack_268 = 0;
  uStack_310 = 0x6ebe670;
  uStack_30c = 0;
  uStack_30b = 0;
  uStack_30a = 0;
  uStack_309 = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  puStack_278 = (undefined8 *)0x0;
  puStack_318 = (undefined8 *)&UNK_0f0a1960;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  puStack_368 = puStack_318;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f0a1790;
  uStack_360._4_4_ = CONCAT13(uStack_309,CONCAT12(uStack_30a,CONCAT11(uStack_30b,uStack_30c)));
  uStack_360._0_4_ = uStack_310;
  uStack_358 = uStack_308;
  uStack_354 = (undefined1)uStack_304;
  uStack_353 = (undefined2)((uint)uStack_304 >> 8);
  uStack_351 = (undefined1)((uint)uStack_304 >> 0x18);
  puStack_318 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar14 + 0xe,&puStack_2c8,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar17 = plVar14 + 0x11;
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
  plVar14[4] = (long)&UNK_0f0a17e0;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  plVar14[0x30] = 0;
  plVar14[0x31] = 0;
  plVar14[0x32] = 0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  *(undefined4 *)(plVar14 + 0x35) = 0x3f800000;
  plVar14[0x36] = 0;
  plVar14[0x37] = 0;
  if (puStack_368 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_368)(&puStack_368,plVar14 + 0x36);
    puVar15 = puStack_368;
  }
  puStack_368 = (undefined8 *)0x0;
  plVar14[0x36] = (long)puVar15;
  *(undefined1 *)(plVar14 + 0x3e) = 0;
  puVar21 = (uint *)(plVar14 + 0x12);
  if (plVar17 != (long *)&DAT_0f552138) {
    if ((*puVar21 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552150;
        uVar7 = uRam000000000f55214c;
        uVar6 = _DAT_0f552148;
        uVar5 = uRam000000000f552144;
        *puVar21 = _DAT_0f552140;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar5;
        *(undefined4 *)(plVar14 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar7;
      }
      else {
        func_0x04885070(puVar21,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar45 = (_DAT_0f552140 & 1) != 0;
      lVar18 = 0xf552141;
      if (bVar45) {
        lVar18 = _DAT_0f552150;
      }
      uVar38 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar45) {
        uVar38 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      FUN_04885120(puVar21,lVar18,uVar38);
    }
  }
  plVar14[0x11] = _DAT_0f552138;
  plVar14[0x15] = 0;
  puStack_320 = puVar21;
  if (puStack_368 != (undefined8 *)0x0) {
    (*(code *)puStack_368[1])(&puStack_368);
  }
  plVar19 = plVar14 + 1;
  if (puStack_318 != (undefined8 *)0x0) {
    (*(code *)puStack_318[1])(&puStack_318);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f0a18c0;
  puVar34 = puVar15 + 4;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f0a1910;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_360._0_4_ = (uint)puVar15;
  uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puVar31 = *(undefined8 **)(lVar32 + 0xc0);
  for (puVar37 = *(undefined8 **)(lVar32 + 0xb8); puStack_368 = puVar34, puVar37 != puVar31;
      puVar37 = puVar37 + 0x15) {
    if ((puVar37[0xf] == 0) && (puVar37[0x10] == -1)) {
      plVar20 = (long *)puVar37[0x12];
      if (plVar20 < (long *)puVar37[0x13]) goto LAB_06eb7985;
      goto LAB_06eb7a89;
    }
  }
  if (puVar31 < *(undefined8 **)(lVar32 + 200)) {
    func_0x06f98fe0(puVar31);
    *(undefined8 **)(lVar32 + 0xc0) = puVar31 + 0x15;
    *(undefined8 **)(lVar32 + 0xc0) = puVar31 + 0x15;
    pbVar27 = (byte *)*puVar31;
    if ((*pbVar27 & 1) != 0) goto LAB_06eb79fd;
LAB_06eb7a2e:
    *pbVar27 = 0x26;
    pbVar27 = pbVar27 + 1;
  }
  else {
    lVar18 = func_0x06f98d50(plStack_288);
    *(long *)(lVar32 + 0xc0) = lVar18;
    pbVar27 = *(byte **)(lVar18 + -0xa8);
    if ((*pbVar27 & 1) == 0) goto LAB_06eb7a2e;
LAB_06eb79fd:
    pbVar27[8] = 0x13;
    pbVar27[9] = 0;
    pbVar27[10] = 0;
    pbVar27[0xb] = 0;
    pbVar27[0xc] = 0;
    pbVar27[0xd] = 0;
    pbVar27[0xe] = 0;
    pbVar27[0xf] = 0;
    pbVar27 = *(byte **)(pbVar27 + 0x10);
  }
  uVar7 = _UNK_01494d69;
  uVar6 = _UNK_01494d65;
  uVar5 = _UNK_01494d61;
  *(undefined4 *)pbVar27 = _DAT_01494d5d;
  *(undefined4 *)(pbVar27 + 4) = uVar5;
  *(undefined4 *)(pbVar27 + 8) = uVar6;
  *(undefined4 *)(pbVar27 + 0xc) = uVar7;
  pbVar27[0xf] = 0x65;
  pbVar27[0x10] = 0x6e;
  pbVar27[0x11] = 0x74;
  pbVar27[0x12] = 0x3e;
  pbVar27[0x13] = 0;
  lVar18 = *(long *)(lVar32 + 0xc0);
  puVar37 = (undefined8 *)(lVar18 + -0xa8);
  *(undefined1 *)(lVar18 + -7) = *(undefined1 *)(lVar32 + 0x60);
  *(undefined8 *)(lVar18 + -0x30) = 0;
  *(undefined8 *)(lVar18 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar18 + -8) = 0;
  plVar20 = *(long **)(lVar18 + -0x18);
  if (plVar20 < *(long **)(lVar18 + -0x10)) {
LAB_06eb7985:
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plVar17) {
      if ((*puStack_320 & 1) == 0) {
        plVar20[3] = *(long *)(puStack_320 + 4);
        lVar32 = *(long *)(puStack_320 + 2);
        plVar20[1] = *(long *)puStack_320;
        plVar20[2] = lVar32;
      }
      else {
        func_0x04885070(plVar20 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar20 = *plVar17;
    plVar20[5] = (long)puVar34;
    plVar20[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    puVar37[0x12] = plVar20;
  }
  else {
LAB_06eb7a89:
    plVar20 = (long *)func_0x06f99160(puVar37 + 0x11,plVar17,&puStack_368);
  }
  puVar37[0x12] = plVar20;
  uVar5 = *(undefined4 *)puVar37;
  uVar6 = *(undefined4 *)((long)puVar37 + 4);
  uVar7 = *(undefined4 *)(puVar37 + 1);
  uVar8 = *(undefined4 *)((long)puVar37 + 0xc);
  if (puVar37[1] != 0) {
    LOCK();
    plVar17 = (long *)(puVar37[1] + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar6;
  *(undefined4 *)(plVar14 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar8;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar37 + 0xa1);
  plVar17 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar32 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar32 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar32 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar32 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_278 != (undefined8 *)0x0) {
    (*(code *)puStack_278[1])(&puStack_278);
  }
  puVar21 = (uint *)*param_1;
  puStack_320 = (uint *)param_1[1];
  if (puStack_320 != (uint *)0x0) {
    LOCK();
    *(long *)(puStack_320 + 2) = *(long *)(puStack_320 + 2) + 1;
    UNLOCK();
  }
  uStack_178 = 0;
  uStack_170 = 0;
  puStack_188 = (undefined *)0x0;
  uStack_180 = 0;
  uStack_168 = 0;
  func_0x0412f5e0(&uStack_180,&UNK_0144b3e9,0x18);
  puStack_188 = (undefined *)0x9e60c6fe1def926b;
  puStack_100 = &UNK_06ebe930;
  uStack_f8 = 0;
  puStack_140 = &UNK_06ebe930;
  uStack_138 = 0;
  lStack_108 = 0;
  plStack_148 = (long *)&UNK_0f0a24d0;
  plStack_388 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plStack_388 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_1c8 = plStack_148;
  plStack_388[1] = 0;
  plStack_388[2] = 0;
  *plStack_388 = (long)&UNK_0f0a1988;
  plStack_1c0 = (long *)puStack_140;
  uStack_1b8 = (undefined4)uStack_138;
  uStack_1b4 = uStack_138._4_4_;
  plStack_148 = (long *)0x0;
  puStack_228 = (undefined8 *)0x0;
  uStack_220 = 0;
  uStack_21c = 0;
  plStack_388[4] = (long)&UNK_0f2ccd78;
  plStack_388[5] = 0;
  plStack_388[6] = 0;
  plStack_388[7] = 0;
  plStack_388[8] = 0;
  plStack_388[9] = 0;
  plStack_388[10] = 0;
  plStack_388[0xb] = 0;
  plStack_388[0xc] = 0;
  *(undefined1 *)(plStack_388 + 0xd) = 0;
  func_0x04aa75f0(plStack_388 + 0xe,&puStack_368,&UNK_01254d89);
  *(undefined1 *)(plStack_388 + 0x10) = 0;
  plStack_388[0x11] = 0;
  plStack_388[0x12] = 0;
  plStack_388[0x13] = 0;
  plStack_388[0x14] = 0;
  plStack_388[0x15] = 0;
  plStack_388[0x16] = 0;
  plStack_388[0x17] = 0xffffffff;
  plStack_388[0x26] = 0;
  plStack_388[0x27] = 0;
  plStack_388[0x18] = 0;
  plStack_388[0x19] = 0;
  plStack_388[0x1a] = 0;
  plStack_388[0x1b] = 0;
  plStack_388[0x1c] = 0;
  plStack_388[0x1d] = 0;
  plStack_388[0x1e] = 0;
  plStack_388[0x1f] = 0;
  plStack_388[4] = (long)&UNK_0f0a1a90;
  ppuVar33 = (undefined8 **)(plStack_388 + 0x2e);
  plStack_388[0x2e] = 0;
  plStack_388[0x2f] = 0;
  *(undefined1 *)(plStack_388 + 0x36) = 0;
  if (ppuVar33 != &puStack_228) {
    if (puStack_228 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_228)(&puStack_228,ppuVar33);
      puVar15 = puStack_228;
    }
    puStack_228 = (undefined8 *)0x0;
    *ppuVar33 = puVar15;
  }
  puStack_378 = (uint *)(plStack_388 + 4);
  puVar25 = (uint *)(plStack_388 + 0x12);
  if (plStack_388 + 0x11 != (long *)&DAT_0f552108) {
    if ((*puVar25 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plStack_388[0x14] = _DAT_0f552120;
        uVar11 = uRam000000000f55211c;
        uVar10 = _DAT_0f552118;
        uVar9 = uRam000000000f552114;
        *puVar25 = _DAT_0f552110;
        *(uint *)((long)plStack_388 + 0x94) = uVar9;
        *(uint *)(plStack_388 + 0x13) = uVar10;
        *(uint *)((long)plStack_388 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar25,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar45 = (_DAT_0f552110 & 1) != 0;
      lVar32 = 0xf552111;
      if (bVar45) {
        lVar32 = _DAT_0f552120;
      }
      uVar38 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar45) {
        uVar38 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(puVar25,lVar32,uVar38);
    }
  }
  plStack_388[0x11] = _DAT_0f552108;
  plStack_388[0x15] = 0;
  if (puStack_228 != (undefined8 *)0x0) {
    (*(code *)puStack_228[1])(&puStack_228);
  }
  plStack_388[4] = (long)&UNK_0f0a19d8;
  puVar22 = (uint *)(plStack_388 + 0x38);
  plStack_388[0x38] = 0;
  plStack_388[0x39] = 0;
  if (plStack_1c8 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1c8)(&plStack_1c8,puVar22);
    plVar14 = plStack_1c8;
  }
  plStack_1c8 = (long *)0x0;
  *(long **)puVar22 = plVar14;
  uStack_2b8 = 0;
  uStack_2b7 = 0;
  uStack_2b3 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  bStack_2c0 = 0xc;
  uStack_2bf = 0x636f6c62;
  uStack_2bb = 0x736b;
  uStack_2b9 = 0;
  puStack_2c8 = (undefined8 *)0xd7ae10800c4f7ac3;
  puStack_270 = &UNK_06facad0;
  uStack_268 = 0;
  uStack_310 = 0x6facad0;
  uStack_30c = 0;
  uStack_30b = 0;
  uStack_30a = 0;
  uStack_309 = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  puStack_278 = (undefined8 *)0x0;
  puStack_318 = (undefined8 *)&UNK_0f0a1d68;
  puStack_1d8 = puVar22;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_368 = puStack_318;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f0a1b40;
  uStack_360._4_4_ = CONCAT13(uStack_309,CONCAT12(uStack_30a,CONCAT11(uStack_30b,uStack_30c)));
  uStack_360._0_4_ = uStack_310;
  uStack_358 = uStack_308;
  uStack_354 = (undefined1)uStack_304;
  uStack_353 = (undefined2)((uint)uStack_304 >> 8);
  uStack_351 = (undefined1)((uint)uStack_304 >> 0x18);
  puStack_318 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar14 + 0xe,&uStack_369,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
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
  plVar14[4] = (long)&UNK_0f0a1b90;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (puStack_368 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_368)(&puStack_368,plVar14 + 0x2e);
    puVar15 = puStack_368;
  }
  plVar17 = plVar14 + 1;
  plVar14[0x2e] = (long)puVar15;
  if (puStack_318 != (undefined8 *)0x0) {
    (*(code *)puStack_318[1])(&puStack_318);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  plStack_288 = plStack_388 + 0x11;
  puStack_230 = puVar21;
  puStack_1d0 = puVar25;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f0a1c70;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f0a1cc0;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_360._0_4_ = (uint)puVar15;
  uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_368 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x06faedf0(puStack_378,&puStack_2c8);
  puVar21 = (uint *)(plVar14 + 0x11);
  plVar19 = *(long **)(puVar16 + 0x24);
  if (plVar19 < *(long **)(puVar16 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if ((uint *)plVar19 != puVar21) {
      if ((*(byte *)(plVar14 + 0x12) & 1) == 0) {
        plVar19[3] = plVar14[0x14];
        lVar32 = plVar14[0x13];
        plVar19[1] = plVar14[0x12];
        plVar19[2] = lVar32;
      }
      else {
        puStack_2d0 = puVar21;
        func_0x04885070(plVar19 + 1,plVar14[0x14],plVar14[0x13]);
        puVar21 = puStack_2d0;
      }
    }
    *plVar19 = *(long *)puVar21;
    plVar19[5] = (long)(puVar15 + 4);
    plVar19[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar19 = plVar19 + 7;
    *(long **)(puVar16 + 0x24) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x06fb0e30(puVar16 + 0x22,puVar21,&puStack_368);
  }
  *(long **)(puVar16 + 0x24) = plVar19;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar6;
  *(undefined4 *)(plVar14 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar8;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar19 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar32 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar32 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar32 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar32 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_278 != (undefined8 *)0x0) {
    (*(code *)puStack_278[1])(&puStack_278);
  }
  if ((bStack_2c0 & 1) != 0) {
    func_0x0412a280(uStack_2b0,
                    CONCAT17(uStack_2b9,CONCAT25(uStack_2bb,CONCAT41(uStack_2bf,bStack_2c0))) &
                    0xfffffffffffffffe);
  }
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_310 = 0x6f6c620c;
  uStack_30c = 99;
  uStack_30b = 0x6b;
  uStack_30a = 0x73;
  uStack_309 = 0;
  puStack_318 = (undefined8 *)0xd7ae10800c4f7ac3;
  bStack_2c0 = 0;
  uStack_2bf = 0;
  uStack_2bb = 0;
  uStack_2b9 = 0;
  puStack_2c8 = (undefined8 *)&UNK_0f0a1f78;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f0a1d90;
  puStack_368 = (undefined8 *)0x0;
  uStack_360._0_4_ = 0;
  uStack_360._4_4_ = 0;
  if (puStack_2c8 == (undefined8 *)0x0) {
    puStack_368 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_2c8)(&puStack_2c8,&puStack_368);
    puStack_368 = puStack_2c8;
  }
  puStack_2c8 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar14 + 0xe,&puStack_278,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar17 = plVar14 + 0x11;
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
  plVar14[4] = (long)&UNK_0f0a1de0;
  ppuVar33 = (undefined8 **)(plVar14 + 0x2e);
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (ppuVar33 != &puStack_368) {
    if (puStack_368 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_368)(&puStack_368,ppuVar33);
      puVar15 = puStack_368;
    }
    puStack_368 = (undefined8 *)0x0;
    *ppuVar33 = puVar15;
  }
  puVar21 = (uint *)(plVar14 + 0x12);
  if (plVar17 != (long *)&DAT_0f551f58) {
    if ((*puVar21 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar14[0x14] = _DAT_0f551f70;
        uVar11 = uRam000000000f551f6c;
        uVar10 = _DAT_0f551f68;
        uVar9 = uRam000000000f551f64;
        *puVar21 = _DAT_0f551f60;
        *(uint *)((long)plVar14 + 0x94) = uVar9;
        *(uint *)(plVar14 + 0x13) = uVar10;
        *(uint *)((long)plVar14 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar21,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar45 = (_DAT_0f551f60 & 1) != 0;
      lVar32 = 0xf551f61;
      if (bVar45) {
        lVar32 = _DAT_0f551f70;
      }
      uVar38 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar45) {
        uVar38 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar21,lVar32,uVar38);
    }
  }
  plVar19 = plVar14 + 1;
  plVar14[0x11] = _DAT_0f551f58;
  plVar14[0x15] = 0;
  if (puStack_368 != (undefined8 *)0x0) {
    (*(code *)puStack_368[1])(&puStack_368);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f0a1ed8;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f0a1f28;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_360._0_4_ = (uint)puVar15;
  uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_368 = puVar15 + 4;
  puStack_2d0 = puVar21;
  puVar16 = (undefined4 *)func_0x06faedf0(puStack_378,&puStack_318);
  plVar20 = *(long **)(puVar16 + 0x24);
  if (plVar20 < *(long **)(puVar16 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plVar17) {
      puVar21 = (uint *)(plVar20 + 1);
      if ((*puStack_2d0 & 1) == 0) {
        plVar20[3] = *(long *)(puStack_2d0 + 4);
        lVar32 = *(long *)(puStack_2d0 + 2);
        *(undefined8 *)puVar21 = *(undefined8 *)puStack_2d0;
        plVar20[2] = lVar32;
      }
      else {
        puStack_2d0 = puVar21;
        func_0x04885070(puVar21,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar20 = *plVar17;
    plVar20[5] = (long)(puVar15 + 4);
    plVar20[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    *(long **)(puVar16 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x06fb0e30(puVar16 + 0x22,plVar17,&puStack_368);
  }
  *(long **)(puVar16 + 0x24) = plVar20;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar6;
  *(undefined4 *)(plVar14 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar8;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar17 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar32 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar32 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar32 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar32 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar32 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_2c8 != (undefined8 *)0x0) {
    (*(code *)puStack_2c8[1])(&puStack_2c8);
  }
  if ((uStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,
                    CONCAT17(uStack_309,
                             CONCAT16(uStack_30a,
                                      CONCAT15(uStack_30b,CONCAT14(uStack_30c,uStack_310)))) &
                    0xfffffffffffffffe);
  }
  puStack_270 = &UNK_06facad0;
  uStack_268 = 0;
  uStack_310 = 0x6facad0;
  uStack_30c = 0;
  uStack_30b = 0;
  uStack_30a = 0;
  uStack_309 = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  puStack_278 = (undefined8 *)0x0;
  puStack_318 = (undefined8 *)&UNK_0f0a21c8;
  puVar21 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar21 == (uint *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_368 = puStack_318;
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  *(undefined **)puVar21 = &UNK_0f0a1fa0;
  uStack_360._4_4_ = CONCAT13(uStack_309,CONCAT12(uStack_30a,CONCAT11(uStack_30b,uStack_30c)));
  uStack_360._0_4_ = uStack_310;
  uStack_358 = uStack_308;
  uStack_354 = (undefined1)uStack_304;
  uStack_353 = (undefined2)((uint)uStack_304 >> 8);
  uStack_351 = (undefined1)((uint)uStack_304 >> 0x18);
  puStack_318 = (undefined8 *)0x0;
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
  func_0x04aa75f0(puVar21 + 0x1c,&uStack_369,&UNK_01254d89);
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
  *(undefined **)(puVar21 + 8) = &UNK_0f0a1ff0;
  puVar21[0x5c] = 0;
  puVar21[0x5d] = 0;
  puVar21[0x5e] = 0;
  puVar21[0x5f] = 0;
  if (puStack_368 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_368)(&puStack_368,puVar21 + 0x5c);
    puVar15 = puStack_368;
  }
  puVar25 = puVar21 + 2;
  *(undefined8 **)(puVar21 + 0x5c) = puVar15;
  if (puStack_318 != (undefined8 *)0x0) {
    (*(code *)puStack_318[1])(&puStack_318);
  }
  LOCK();
  *(long *)puVar25 = *(long *)puVar25 + 1;
  UNLOCK();
  puStack_1e0 = puVar25;
  puVar22 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar22 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar22[2] = 0;
  puVar22[3] = 0;
  puVar22[4] = 0;
  puVar22[5] = 0;
  *(undefined **)puVar22 = &UNK_0f0a20d0;
  puVar22[0xc] = 0;
  puVar22[0xd] = 0;
  puVar22[0xe] = 0;
  puVar22[0xf] = 0;
  *(undefined **)(puVar22 + 8) = &UNK_0f0a2120;
  *(uint **)(puVar22 + 0x1c) = puVar21 + 8;
  *(uint **)(puVar22 + 0x1e) = puVar21;
  LOCK();
  *(long *)(puVar21 + 2) = *(long *)(puVar21 + 2) + 1;
  UNLOCK();
  puStack_2d0 = puVar22 + 2;
  puVar43 = (uint *)plVar14[0x1c];
  puVar24 = (uint *)plVar14[0x1b];
  for (puVar28 = puVar24; puStack_380 = puVar22, puVar28 != puVar43; puVar28 = puVar28 + 0x2a) {
    if ((*(long *)(puVar28 + 0x1e) == 0) && (*(long *)(puVar28 + 0x20) == -1)) goto LAB_06eb8df1;
  }
  if (puVar43 < (uint *)plVar14[0x1d]) {
    func_0x06fb4990(puVar43);
    plVar14[0x1c] = (long)(puVar43 + 0x2a);
    plVar14[0x1c] = (long)(puVar43 + 0x2a);
    pbVar27 = *(byte **)puVar43;
    bVar3 = *pbVar27;
joined_r0x06eb8d9e:
    if ((bVar3 & 1) == 0) {
      *pbVar27 = 0x26;
      pbVar27 = pbVar27 + 1;
    }
    else {
      pbVar27[8] = 0x13;
      pbVar27[9] = 0;
      pbVar27[10] = 0;
      pbVar27[0xb] = 0;
      pbVar27[0xc] = 0;
      pbVar27[0xd] = 0;
      pbVar27[0xe] = 0;
      pbVar27[0xf] = 0;
      pbVar27 = *(byte **)(pbVar27 + 0x10);
    }
    uVar7 = _UNK_01494d69;
    uVar6 = _UNK_01494d65;
    uVar5 = _UNK_01494d61;
    *(undefined4 *)pbVar27 = _DAT_01494d5d;
    *(undefined4 *)(pbVar27 + 4) = uVar5;
    *(undefined4 *)(pbVar27 + 8) = uVar6;
    *(undefined4 *)(pbVar27 + 0xc) = uVar7;
    pbVar27[0xf] = 0x65;
    pbVar27[0x10] = 0x6e;
    pbVar27[0x11] = 0x74;
    pbVar27[0x12] = 0x3e;
    pbVar27[0x13] = 0;
    lVar32 = plVar14[0x1c];
    puVar28 = (uint *)(lVar32 + -0xa8);
    *(char *)(lVar32 + -7) = (char)plVar14[0x10];
    *(undefined8 *)(lVar32 + -0x30) = 0;
    *(undefined8 *)(lVar32 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar32 + -8) = 0;
LAB_06eb8df1:
    puVar24 = puVar21 + 0x22;
    puVar25 = puVar22 + 8;
    puVar43 = *(uint **)(puVar28 + 0x24);
    if (puVar43 < *(uint **)(puVar28 + 0x26)) {
      puVar43[4] = 0;
      puVar43[5] = 0;
      puVar43[6] = 0;
      puVar43[7] = 0;
      puVar43[0] = 0;
      puVar43[1] = 0;
      puVar43[2] = 0;
      puVar43[3] = 0;
      puVar43[8] = 0;
      puVar43[9] = 0;
      if (puVar43 != puVar24) {
        if ((puVar21[0x24] & 1) == 0) {
          *(long *)(puVar43 + 6) = *(long *)(puVar21 + 0x28);
          lVar32 = *(long *)(puVar21 + 0x26);
          *(long *)(puVar43 + 2) = *(long *)(puVar21 + 0x24);
          *(long *)(puVar43 + 4) = lVar32;
        }
        else {
          puStack_280 = puVar24;
          func_0x04885070(puVar43 + 2,*(long *)(puVar21 + 0x28),*(long *)(puVar21 + 0x26));
          puVar24 = puStack_280;
        }
      }
      *(long *)puVar43 = *(long *)puVar24;
      *(uint **)(puVar43 + 10) = puVar25;
      *(uint **)(puVar43 + 0xc) = puVar22;
      LOCK();
      *(long *)(puVar22 + 2) = *(long *)(puVar22 + 2) + 1;
      UNLOCK();
      puVar43 = puVar43 + 0xe;
      *(uint **)(puVar28 + 0x24) = puVar43;
      uStack_360 = (uint *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
LAB_06eb9140:
      *(uint **)(puVar28 + 0x24) = puVar43;
      uVar9 = *puVar28;
      uVar10 = puVar28[1];
      uVar11 = puVar28[2];
      uVar12 = puVar28[3];
      if (*(long *)(puVar28 + 2) != 0) {
        LOCK();
        plVar14 = (long *)(*(long *)(puVar28 + 2) + 8);
        *plVar14 = *plVar14 + 1;
        UNLOCK();
      }
      plVar14 = *(long **)(puVar21 + 0x1e);
      puVar21[0x1c] = uVar9;
      puVar21[0x1d] = uVar10;
      puVar21[0x1e] = uVar11;
      puVar21[0x1f] = uVar12;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar32 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
        }
      }
      *(byte *)(puVar21 + 0x20) = *(byte *)((long)puVar28 + 0xa1);
      LOCK();
      lVar32 = *(long *)puStack_2d0;
      *(long *)puStack_2d0 = *(long *)puStack_2d0 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*(long *)puVar22 + 0x10))(puVar22);
        func_0x0412c2d0(puVar22);
      }
      puVar25 = puStack_1e0;
      LOCK();
      lVar32 = *(long *)puStack_1e0;
      *(long *)puStack_1e0 = *(long *)puStack_1e0 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
        func_0x0412c2d0(puVar21);
        LOCK();
        lVar32 = *(long *)puVar25;
        *(long *)puVar25 = *(long *)puVar25 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar32 = *(long *)puStack_1e0;
        *(long *)puStack_1e0 = *(long *)puStack_1e0 + -1;
        UNLOCK();
      }
      if (lVar32 == 0) {
        (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
        func_0x0412c2d0(puVar21);
      }
      if (puStack_278 != (undefined8 *)0x0) {
        (*(code *)puStack_278[1])(&puStack_278);
      }
      uStack_30a = 0;
      uStack_309 = 0;
      uStack_308 = 0;
      uStack_304 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_310 = 0x756f630a;
      uStack_30c = 0x6e;
      uStack_30b = 0x74;
      puStack_318 = (undefined8 *)0x184efb3a64c90e2;
      uStack_360._0_4_ = 0;
      uStack_360._4_4_ = 0;
      puStack_368 = (undefined8 *)&UNK_0f0a23c0;
      lVar32 = func_0x06facb20(puStack_378,&puStack_318,&puStack_368);
      if (puStack_368 != (undefined8 *)0x0) {
        (*(code *)puStack_368[1])(&puStack_368);
      }
      if ((uStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,
                        CONCAT17(uStack_309,
                                 CONCAT16(uStack_30a,
                                          CONCAT15(uStack_30b,CONCAT14(uStack_30c,uStack_310)))) &
                        0xfffffffffffffffe);
      }
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_30b = 0;
      uStack_30a = 0;
      uStack_309 = 0;
      puStack_318 = (undefined8 *)&UNK_0f0a23d8;
      ppuVar33 = (undefined8 **)(lVar32 + 0x110);
      if (ppuVar33 != &puStack_318) {
        if ((*ppuVar33 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar33)[1])(ppuVar33), puStack_318 != (undefined8 *)0x0)) {
          (*(code *)*puStack_318)(&puStack_318,ppuVar33);
          puVar15 = puStack_318;
        }
        else {
          puVar15 = (undefined8 *)0x0;
        }
        puStack_318 = (undefined8 *)0x0;
        *ppuVar33 = puVar15;
      }
      uStack_2b8 = 0;
      uStack_2b7 = 0;
      uStack_2b3 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      bStack_2c0 = 0xc;
      uStack_2bf = 0x69646172;
      uStack_2bb = 0x7375;
      uStack_2b9 = 0;
      puStack_2c8 = (undefined8 *)0xa364c48342d569cf;
      puStack_270 = (undefined *)0x0;
      puStack_278 = (undefined8 *)&UNK_0f0a23f0;
      lVar32 = func_0x06facb20(puStack_378,&puStack_2c8,&puStack_278);
      if (puStack_278 != (undefined8 *)0x0) {
        (*(code *)puStack_278[1])(&puStack_278);
      }
      if ((bStack_2c0 & 1) != 0) {
        func_0x0412a280(uStack_2b0,
                        CONCAT17(uStack_2b9,CONCAT25(uStack_2bb,CONCAT41(uStack_2bf,bStack_2c0))) &
                        0xfffffffffffffffe);
      }
      bStack_2c0 = 0;
      uStack_2bf = 0;
      uStack_2bb = 0;
      uStack_2b9 = 0;
      puStack_2c8 = (undefined8 *)&UNK_0f0a2408;
      ppuVar33 = (undefined8 **)(lVar32 + 0x110);
      if (ppuVar33 != &puStack_2c8) {
        if ((*ppuVar33 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar33)[1])(ppuVar33), puStack_2c8 != (undefined8 *)0x0)) {
          (*(code *)*puStack_2c8)(&puStack_2c8,ppuVar33);
          puVar15 = puStack_2c8;
        }
        else {
          puVar15 = (undefined8 *)0x0;
        }
        *ppuVar33 = puVar15;
      }
      if (plStack_1c8 != (long *)0x0) {
        (*(code *)plStack_1c8[1])(&plStack_1c8);
      }
      plVar14 = plStack_388 + 1;
      if (plStack_148 != (long *)0x0) {
        (*(code *)plStack_148[1])(&plStack_148);
      }
      LOCK();
      *plVar14 = *plVar14 + 1;
      UNLOCK();
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = &UNK_0f0a2430;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[4] = &UNK_0f0a2480;
      puVar15[0xe] = puStack_378;
      puVar15[0xf] = plStack_388;
      LOCK();
      plStack_388[1] = plStack_388[1] + 1;
      UNLOCK();
      uStack_360._0_4_ = (uint)puVar15;
      uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
      puStack_368 = puVar15 + 4;
      puVar16 = (undefined4 *)func_0x06f937c0(puStack_230,&puStack_188);
      plVar17 = *(long **)(puVar16 + 0x24);
      if (plVar17 < *(long **)(puVar16 + 0x26)) {
        plVar17[2] = 0;
        plVar17[3] = 0;
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar17[4] = 0;
        if (plVar17 != plStack_288) {
          if ((*puStack_1d0 & 1) == 0) {
            plVar17[3] = *(long *)(puStack_1d0 + 4);
            lVar32 = *(long *)(puStack_1d0 + 2);
            plVar17[1] = *(long *)puStack_1d0;
            plVar17[2] = lVar32;
          }
          else {
            func_0x04885070(plVar17 + 1,plStack_388[0x14],plStack_388[0x13]);
          }
        }
        *plVar17 = *plStack_288;
        plVar17[5] = (long)(puVar15 + 4);
        plVar17[6] = (long)puVar15;
        LOCK();
        puVar15[1] = puVar15[1] + 1;
        UNLOCK();
        plVar17 = plVar17 + 7;
        *(long **)(puVar16 + 0x24) = plVar17;
      }
      else {
        plVar17 = (long *)func_0x06f97060(puVar16 + 0x22,plStack_288,&puStack_368);
      }
      *(long **)(puVar16 + 0x24) = plVar17;
      uVar5 = *puVar16;
      uVar6 = puVar16[1];
      uVar7 = puVar16[2];
      uVar8 = puVar16[3];
      if (*(long *)(puVar16 + 2) != 0) {
        LOCK();
        plVar17 = (long *)(*(long *)(puVar16 + 2) + 8);
        *plVar17 = *plVar17 + 1;
        UNLOCK();
      }
      plVar17 = (long *)plStack_388[0xf];
      *(undefined4 *)(plStack_388 + 0xe) = uVar5;
      *(undefined4 *)((long)plStack_388 + 0x74) = uVar6;
      *(undefined4 *)(plStack_388 + 0xf) = uVar7;
      *(undefined4 *)((long)plStack_388 + 0x7c) = uVar8;
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar19 = plVar17 + 1;
        lVar32 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
      *(undefined1 *)(plStack_388 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
      plVar17 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar19 = plVar17 + 1;
        lVar32 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
      puVar21 = puStack_320;
      LOCK();
      lVar32 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        func_0x0412c2d0(plStack_388);
        LOCK();
        lVar32 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar32 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
      }
      if (lVar32 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        func_0x0412c2d0(plStack_388);
      }
      if (lStack_108 != 0) {
        (**(code **)(lStack_108 + 8))(&lStack_108);
      }
      if ((uStack_180 & 1) != 0) {
        func_0x0412a280(uStack_170,uStack_180 & 0xfffffffffffffffe);
      }
      if (puVar21 != (uint *)0x0) {
        LOCK();
        puVar25 = puVar21 + 2;
        lVar32 = *(long *)puVar25;
        *(long *)puVar25 = *(long *)puVar25 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
          func_0x0412c2d0(puVar21);
        }
      }
      uVar30 = *param_1;
      puStack_2d0 = (uint *)param_1[1];
      if (puStack_2d0 != (uint *)0x0) {
        LOCK();
        *(long *)(puStack_2d0 + 2) = *(long *)(puStack_2d0 + 2) + 1;
        UNLOCK();
      }
      uStack_358 = 0;
      uStack_354 = 0;
      uStack_353 = 0;
      uStack_351 = 0;
      uStack_350 = 0;
      uStack_34f = 0;
      uStack_349 = 0;
      puStack_368 = (undefined8 *)0x0;
      uStack_360._0_4_ = 0;
      uStack_360._4_4_ = 0;
      puStack_348 = (uint *)0x0;
      func_0x0412f5e0(&uStack_360,&UNK_0144b3e9,0x18);
      puStack_368 = (undefined8 *)0x9e60c6fe1def926b;
      uStack_180 = 0;
      puStack_188 = &UNK_0f0a24e8;
      plVar14 = (long *)func_0x06fa38c0(uVar30,&puStack_368,&puStack_188);
      if (puStack_188 != (undefined *)0x0) {
        (**(code **)(puStack_188 + 8))(&puStack_188);
      }
      if (((uint)uStack_360 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_349,CONCAT61(uStack_34f,uStack_350)),
                        CONCAT44(uStack_360._4_4_,(uint)uStack_360) & 0xfffffffffffffffe);
      }
      puStack_100 = &UNK_06ebe930;
      uStack_f8 = 0;
      puStack_140 = &UNK_06ebe930;
      uStack_138 = 0;
      lStack_108 = 0;
      plStack_148 = (long *)&UNK_0f0a3058;
      puVar21 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
      if (puVar21 == (uint *)0x0) {
        func_0x0eec74c0(0x200,0);
      }
      plStack_1c8 = plStack_148;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      *(undefined **)puVar21 = &UNK_0f0a2510;
      plStack_1c0 = (long *)puStack_140;
      uStack_1b8 = (undefined4)uStack_138;
      uStack_1b4 = uStack_138._4_4_;
      plStack_148 = (long *)0x0;
      puStack_228 = (undefined8 *)0x0;
      uStack_220 = 0;
      uStack_21c = 0;
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
      func_0x04aa75f0(puVar21 + 0x1c,&puStack_368,&UNK_01254d89);
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
      *(undefined **)(puVar21 + 8) = &UNK_0f0a2618;
      ppuVar33 = (undefined8 **)(puVar21 + 0x5c);
      puVar21[0x5c] = 0;
      puVar21[0x5d] = 0;
      puVar21[0x5e] = 0;
      puVar21[0x5f] = 0;
      *(byte *)(puVar21 + 0x6c) = 0;
      if (ppuVar33 != &puStack_228) {
        if (puStack_228 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          (*(code *)*puStack_228)(&puStack_228,ppuVar33);
          puVar15 = puStack_228;
        }
        puStack_228 = (undefined8 *)0x0;
        *ppuVar33 = puVar15;
      }
      puVar43 = puVar21 + 8;
      puVar25 = puVar21 + 0x24;
      if (puVar21 + 0x22 != (uint *)&DAT_0f552108) {
        if ((*puVar25 & 1) == 0) {
          if ((_DAT_0f552110 & 1) == 0) {
            *(long *)(puVar21 + 0x28) = _DAT_0f552120;
            uVar11 = uRam000000000f55211c;
            uVar10 = _DAT_0f552118;
            uVar9 = uRam000000000f552114;
            *puVar25 = _DAT_0f552110;
            puVar21[0x25] = uVar9;
            puVar21[0x26] = uVar10;
            puVar21[0x27] = uVar11;
          }
          else {
            func_0x04885070(puVar25,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
          }
        }
        else {
          bVar45 = (_DAT_0f552110 & 1) != 0;
          lVar32 = 0xf552111;
          if (bVar45) {
            lVar32 = _DAT_0f552120;
          }
          uVar38 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
          if (bVar45) {
            uVar38 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
          }
          FUN_04885120(puVar25,lVar32,uVar38);
        }
      }
      *(long *)(puVar21 + 0x22) = _DAT_0f552108;
      puVar21[0x2a] = 0;
      puVar21[0x2b] = 0;
      plStack_288 = plVar14;
      puStack_1d8 = puVar25;
      if (puStack_228 != (undefined8 *)0x0) {
        (*(code *)puStack_228[1])(&puStack_228);
      }
      *(undefined **)(puVar21 + 8) = &UNK_0f0a2560;
      puVar25 = puVar21 + 0x70;
      puVar21[0x70] = 0;
      puVar21[0x71] = 0;
      puVar21[0x72] = 0;
      puVar21[0x73] = 0;
      if (plStack_1c8 == (long *)0x0) {
        plVar14 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_1c8)(&plStack_1c8,puVar25);
        plVar14 = plStack_1c8;
      }
      plStack_1c8 = (long *)0x0;
      *(long **)puVar25 = plVar14;
      uStack_2b8 = 0;
      uStack_2b7 = 0;
      uStack_2b3 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      bStack_2c0 = 0xc;
      uStack_2bf = 0x636f6c62;
      uStack_2bb = 0x736b;
      uStack_2b9 = 0;
      puStack_2c8 = (undefined8 *)0xd7ae10800c4f7ac3;
      puStack_270 = &UNK_06facad0;
      uStack_268 = 0;
      uStack_310 = 0x6facad0;
      uStack_30c = 0;
      uStack_30b = 0;
      uStack_30a = 0;
      uStack_309 = 0;
      uStack_308 = 0;
      uStack_304 = 0;
      puStack_278 = (undefined8 *)0x0;
      puStack_318 = (undefined8 *)&UNK_0f0a28f0;
      puStack_238 = puVar25;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      puStack_368 = puStack_318;
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&UNK_0f0a26c8;
      uStack_360._4_4_ = CONCAT13(uStack_309,CONCAT12(uStack_30a,CONCAT11(uStack_30b,uStack_30c)));
      uStack_360._0_4_ = uStack_310;
      uStack_358 = uStack_308;
      uStack_354 = (undefined1)uStack_304;
      uStack_353 = (undefined2)((uint)uStack_304 >> 8);
      uStack_351 = (undefined1)((uint)uStack_304 >> 0x18);
      puStack_318 = (undefined8 *)0x0;
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
      func_0x04aa75f0(plVar14 + 0xe,&uStack_369,&UNK_01254d89);
      *(undefined1 *)(plVar14 + 0x10) = 0;
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
      plVar14[4] = (long)&UNK_0f0a2718;
      plVar14[0x2e] = 0;
      plVar14[0x2f] = 0;
      if (puStack_368 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_368)(&puStack_368,plVar14 + 0x2e);
        puVar15 = puStack_368;
      }
      plVar17 = plVar14 + 1;
      plVar14[0x2e] = (long)puVar15;
      if (puStack_318 != (undefined8 *)0x0) {
        (*(code *)puStack_318[1])(&puStack_318);
      }
      LOCK();
      *plVar17 = *plVar17 + 1;
      UNLOCK();
      puStack_230 = puVar21 + 0x22;
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = &UNK_0f0a27f8;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[4] = &UNK_0f0a2848;
      puVar15[0xe] = plVar14 + 4;
      puVar15[0xf] = plVar14;
      LOCK();
      plVar14[1] = plVar14[1] + 1;
      UNLOCK();
      uStack_360._0_4_ = (uint)puVar15;
      uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
      puStack_368 = puVar15 + 4;
      puVar16 = (undefined4 *)func_0x06fb9d50(puVar43,&puStack_2c8);
      puVar25 = (uint *)(plVar14 + 0x11);
      puVar22 = *(uint **)(puVar16 + 0x24);
      if (puVar22 < *(uint **)(puVar16 + 0x26)) {
        puVar22[4] = 0;
        puVar22[5] = 0;
        puVar22[6] = 0;
        puVar22[7] = 0;
        puVar22[0] = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        puVar22[3] = 0;
        puVar22[8] = 0;
        puVar22[9] = 0;
        if (puVar22 != puVar25) {
          if ((*(byte *)(plVar14 + 0x12) & 1) == 0) {
            *(long *)(puVar22 + 6) = plVar14[0x14];
            lVar32 = plVar14[0x13];
            *(long *)(puVar22 + 2) = plVar14[0x12];
            *(long *)(puVar22 + 4) = lVar32;
          }
          else {
            puStack_320 = puVar25;
            func_0x04885070(puVar22 + 2,plVar14[0x14],plVar14[0x13]);
            puVar25 = puStack_320;
          }
        }
        *(long *)puVar22 = *(long *)puVar25;
        *(undefined8 **)(puVar22 + 10) = puVar15 + 4;
        *(undefined8 **)(puVar22 + 0xc) = puVar15;
        LOCK();
        puVar15[1] = puVar15[1] + 1;
        UNLOCK();
        puVar22 = puVar22 + 0xe;
        *(uint **)(puVar16 + 0x24) = puVar22;
      }
      else {
        puVar22 = (uint *)func_0x06fbbd90(puVar16 + 0x22,puVar25,&puStack_368);
      }
      *(uint **)(puVar16 + 0x24) = puVar22;
      uVar5 = *puVar16;
      uVar6 = puVar16[1];
      uVar7 = puVar16[2];
      uVar8 = puVar16[3];
      if (*(long *)(puVar16 + 2) != 0) {
        LOCK();
        plVar19 = (long *)(*(long *)(puVar16 + 2) + 8);
        *plVar19 = *plVar19 + 1;
        UNLOCK();
      }
      plVar19 = (long *)plVar14[0xf];
      *(undefined4 *)(plVar14 + 0xe) = uVar5;
      *(undefined4 *)((long)plVar14 + 0x74) = uVar6;
      *(undefined4 *)(plVar14 + 0xf) = uVar7;
      *(undefined4 *)((long)plVar14 + 0x7c) = uVar8;
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar20 = plVar19 + 1;
        lVar32 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
      plVar19 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar20 = plVar19 + 1;
        lVar32 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      LOCK();
      lVar32 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
        LOCK();
        lVar32 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar32 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
      }
      if (lVar32 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
      if (puStack_278 != (undefined8 *)0x0) {
        (*(code *)puStack_278[1])(&puStack_278);
      }
      if ((bStack_2c0 & 1) != 0) {
        func_0x0412a280(uStack_2b0,
                        CONCAT17(uStack_2b9,CONCAT25(uStack_2bb,CONCAT41(uStack_2bf,bStack_2c0))) &
                        0xfffffffffffffffe);
      }
      uStack_308 = 0;
      uStack_304 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_310 = 0x6f6c620c;
      uStack_30c = 99;
      uStack_30b = 0x6b;
      uStack_30a = 0x73;
      uStack_309 = 0;
      puStack_318 = (undefined8 *)0xd7ae10800c4f7ac3;
      bStack_2c0 = 0;
      uStack_2bf = 0;
      uStack_2bb = 0;
      uStack_2b9 = 0;
      puStack_2c8 = (undefined8 *)&UNK_0f0a2b00;
      puVar23 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (puVar23 == (uint *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      puVar23[2] = 0;
      puVar23[3] = 0;
      puVar23[4] = 0;
      puVar23[5] = 0;
      *(undefined **)puVar23 = &UNK_0f0a2918;
      puStack_368 = (undefined8 *)0x0;
      uStack_360._0_4_ = 0;
      uStack_360._4_4_ = 0;
      if (puStack_2c8 == (undefined8 *)0x0) {
        puStack_368 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_2c8)(&puStack_2c8,&puStack_368);
        puStack_368 = puStack_2c8;
      }
      puStack_2c8 = (undefined8 *)0x0;
      *(undefined **)(puVar23 + 8) = &UNK_0f2ccd78;
      puVar23[10] = 0;
      puVar23[0xb] = 0;
      puVar23[0xc] = 0;
      puVar23[0xd] = 0;
      puVar23[0xe] = 0;
      puVar23[0xf] = 0;
      puVar23[0x10] = 0;
      puVar23[0x11] = 0;
      puVar23[0x12] = 0;
      puVar23[0x13] = 0;
      puVar23[0x14] = 0;
      puVar23[0x15] = 0;
      puVar23[0x16] = 0;
      puVar23[0x17] = 0;
      puVar23[0x18] = 0;
      puVar23[0x19] = 0;
      *(byte *)(puVar23 + 0x1a) = 0;
      func_0x04aa75f0(puVar23 + 0x1c,&puStack_278,&UNK_01254d89);
      *(byte *)(puVar23 + 0x20) = 0;
      puVar25 = puVar23 + 0x22;
      puVar23[0x22] = 0;
      puVar23[0x23] = 0;
      puVar23[0x24] = 0;
      puVar23[0x25] = 0;
      puVar23[0x26] = 0;
      puVar23[0x27] = 0;
      puVar23[0x28] = 0;
      puVar23[0x29] = 0;
      puVar23[0x2a] = 0;
      puVar23[0x2b] = 0;
      puVar23[0x2c] = 0;
      puVar23[0x2d] = 0;
      puVar23[0x2e] = 0xffffffff;
      puVar23[0x2f] = 0;
      puVar23[0x4c] = 0;
      puVar23[0x4d] = 0;
      puVar23[0x4e] = 0;
      puVar23[0x4f] = 0;
      puVar23[0x30] = 0;
      puVar23[0x31] = 0;
      puVar23[0x32] = 0;
      puVar23[0x33] = 0;
      puVar23[0x34] = 0;
      puVar23[0x35] = 0;
      puVar23[0x36] = 0;
      puVar23[0x37] = 0;
      puVar23[0x38] = 0;
      puVar23[0x39] = 0;
      puVar23[0x3a] = 0;
      puVar23[0x3b] = 0;
      puVar23[0x3c] = 0;
      puVar23[0x3d] = 0;
      puVar23[0x3e] = 0;
      puVar23[0x3f] = 0;
      *(undefined **)(puVar23 + 8) = &UNK_0f0a2968;
      ppuVar33 = (undefined8 **)(puVar23 + 0x5c);
      puVar23[0x5c] = 0;
      puVar23[0x5d] = 0;
      puVar23[0x5e] = 0;
      puVar23[0x5f] = 0;
      if (ppuVar33 != &puStack_368) {
        if (puStack_368 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          (*(code *)*puStack_368)(&puStack_368,ppuVar33);
          puVar15 = puStack_368;
        }
        puStack_368 = (undefined8 *)0x0;
        *ppuVar33 = puVar15;
      }
      puVar22 = puVar23 + 0x24;
      if (puVar25 != (uint *)&DAT_0f551f58) {
        if ((*puVar22 & 1) == 0) {
          if ((_DAT_0f551f60 & 1) == 0) {
            *(long *)(puVar23 + 0x28) = _DAT_0f551f70;
            uVar11 = uRam000000000f551f6c;
            uVar10 = _DAT_0f551f68;
            uVar9 = uRam000000000f551f64;
            *puVar22 = _DAT_0f551f60;
            puVar23[0x25] = uVar9;
            puVar23[0x26] = uVar10;
            puVar23[0x27] = uVar11;
          }
          else {
            func_0x04885070(puVar22,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
          }
        }
        else {
          bVar45 = (_DAT_0f551f60 & 1) != 0;
          lVar32 = 0xf551f61;
          if (bVar45) {
            lVar32 = _DAT_0f551f70;
          }
          uVar38 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
          if (bVar45) {
            uVar38 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
          }
          FUN_04885120(puVar22,lVar32,uVar38);
        }
      }
      puVar28 = puVar23 + 2;
      *(long *)(puVar23 + 0x22) = _DAT_0f551f58;
      puVar23[0x2a] = 0;
      puVar23[0x2b] = 0;
      if (puStack_368 != (undefined8 *)0x0) {
        (*(code *)puStack_368[1])(&puStack_368);
      }
      LOCK();
      *(long *)puVar28 = *(long *)puVar28 + 1;
      UNLOCK();
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = &UNK_0f0a2a60;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[4] = &UNK_0f0a2ab0;
      puVar15[0xe] = puVar23 + 8;
      puVar15[0xf] = puVar23;
      LOCK();
      *(long *)(puVar23 + 2) = *(long *)(puVar23 + 2) + 1;
      UNLOCK();
      uStack_360._0_4_ = (uint)puVar15;
      uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
      puStack_368 = puVar15 + 4;
      puStack_320 = puVar22;
      puVar24 = (uint *)func_0x06fb9d50(puVar43,&puStack_318);
      puVar22 = *(uint **)(puVar24 + 0x24);
      if (puVar22 < *(uint **)(puVar24 + 0x26)) {
        puVar22[4] = 0;
        puVar22[5] = 0;
        puVar22[6] = 0;
        puVar22[7] = 0;
        puVar22[0] = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        puVar22[3] = 0;
        puVar22[8] = 0;
        puVar22[9] = 0;
        if (puVar22 != puVar25) {
          puVar41 = puVar22 + 2;
          if ((*puStack_320 & 1) == 0) {
            *(long *)(puVar22 + 6) = *(long *)(puStack_320 + 4);
            lVar32 = *(long *)(puStack_320 + 2);
            *(long *)puVar41 = *(long *)puStack_320;
            *(long *)(puVar22 + 4) = lVar32;
          }
          else {
            puStack_320 = puVar41;
            func_0x04885070(puVar41,*(long *)(puVar23 + 0x28),*(long *)(puVar23 + 0x26));
          }
        }
        *(long *)puVar22 = *(long *)puVar25;
        *(undefined8 **)(puVar22 + 10) = puVar15 + 4;
        *(undefined8 **)(puVar22 + 0xc) = puVar15;
        LOCK();
        puVar15[1] = puVar15[1] + 1;
        UNLOCK();
        puVar22 = puVar22 + 0xe;
        *(uint **)(puVar24 + 0x24) = puVar22;
      }
      else {
        puVar22 = (uint *)func_0x06fbbd90(puVar24 + 0x22,puVar25,&puStack_368);
      }
      *(uint **)(puVar24 + 0x24) = puVar22;
      uVar9 = *puVar24;
      uVar10 = puVar24[1];
      uVar11 = puVar24[2];
      uVar12 = puVar24[3];
      if (*(long *)(puVar24 + 2) != 0) {
        LOCK();
        plVar14 = (long *)(*(long *)(puVar24 + 2) + 8);
        *plVar14 = *plVar14 + 1;
        UNLOCK();
      }
      plVar14 = *(long **)(puVar23 + 0x1e);
      puVar23[0x1c] = uVar9;
      puVar23[0x1d] = uVar10;
      puVar23[0x1e] = uVar11;
      puVar23[0x1f] = uVar12;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar32 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
        }
      }
      *(byte *)(puVar23 + 0x20) = *(byte *)((long)puVar24 + 0xa1);
      plVar14 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar32 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
        }
      }
      LOCK();
      lVar32 = *(long *)puVar28;
      *(long *)puVar28 = *(long *)puVar28 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*(long *)puVar23 + 0x10))(puVar23);
        func_0x0412c2d0(puVar23);
        LOCK();
        lVar32 = *(long *)puVar28;
        *(long *)puVar28 = *(long *)puVar28 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar32 = *(long *)puVar28;
        *(long *)puVar28 = *(long *)puVar28 + -1;
        UNLOCK();
      }
      if (lVar32 == 0) {
        (**(code **)(*(long *)puVar23 + 0x10))(puVar23);
        func_0x0412c2d0(puVar23);
      }
      if (puStack_2c8 != (undefined8 *)0x0) {
        (*(code *)puStack_2c8[1])(&puStack_2c8);
      }
      if ((uStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,
                        CONCAT17(uStack_309,
                                 CONCAT16(uStack_30a,
                                          CONCAT15(uStack_30b,CONCAT14(uStack_30c,uStack_310)))) &
                        0xfffffffffffffffe);
      }
      puStack_270 = &UNK_06facad0;
      uStack_268 = 0;
      uStack_310 = 0x6facad0;
      uStack_30c = 0;
      uStack_30b = 0;
      uStack_30a = 0;
      uStack_309 = 0;
      uStack_308 = 0;
      uStack_304 = 0;
      puStack_278 = (undefined8 *)0x0;
      puStack_318 = (undefined8 *)&UNK_0f0a2d50;
      puVar25 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (puVar25 == (uint *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      puStack_368 = puStack_318;
      puVar25[2] = 0;
      puVar25[3] = 0;
      puVar25[4] = 0;
      puVar25[5] = 0;
      *(undefined **)puVar25 = &UNK_0f0a2b28;
      uStack_360._4_4_ = CONCAT13(uStack_309,CONCAT12(uStack_30a,CONCAT11(uStack_30b,uStack_30c)));
      uStack_360._0_4_ = uStack_310;
      uStack_358 = uStack_308;
      uStack_354 = (undefined1)uStack_304;
      uStack_353 = (undefined2)((uint)uStack_304 >> 8);
      uStack_351 = (undefined1)((uint)uStack_304 >> 0x18);
      puStack_318 = (undefined8 *)0x0;
      *(undefined **)(puVar25 + 8) = &UNK_0f2ccd78;
      puVar25[10] = 0;
      puVar25[0xb] = 0;
      puVar25[0xc] = 0;
      puVar25[0xd] = 0;
      puVar25[0xe] = 0;
      puVar25[0xf] = 0;
      puVar25[0x10] = 0;
      puVar25[0x11] = 0;
      puVar25[0x12] = 0;
      puVar25[0x13] = 0;
      puVar25[0x14] = 0;
      puVar25[0x15] = 0;
      puVar25[0x16] = 0;
      puVar25[0x17] = 0;
      puVar25[0x18] = 0;
      puVar25[0x19] = 0;
      *(byte *)(puVar25 + 0x1a) = 0;
      puStack_320 = puVar25;
      func_0x04aa75f0(puVar25 + 0x1c,&uStack_369,&UNK_01254d89);
      *(byte *)(puVar25 + 0x20) = 0;
      puVar25[0x22] = 0;
      puVar25[0x23] = 0;
      puVar25[0x24] = 0;
      puVar25[0x25] = 0;
      puVar25[0x26] = 0;
      puVar25[0x27] = 0;
      puVar25[0x28] = 0;
      puVar25[0x29] = 0;
      puVar25[0x2a] = 0;
      puVar25[0x2b] = 0;
      puVar25[0x2c] = 0;
      puVar25[0x2d] = 0;
      puVar25[0x2e] = 0xffffffff;
      puVar25[0x2f] = 0;
      puVar25[0x4c] = 0;
      puVar25[0x4d] = 0;
      puVar25[0x4e] = 0;
      puVar25[0x4f] = 0;
      puVar25[0x30] = 0;
      puVar25[0x31] = 0;
      puVar25[0x32] = 0;
      puVar25[0x33] = 0;
      puVar25[0x34] = 0;
      puVar25[0x35] = 0;
      puVar25[0x36] = 0;
      puVar25[0x37] = 0;
      puVar25[0x38] = 0;
      puVar25[0x39] = 0;
      puVar25[0x3a] = 0;
      puVar25[0x3b] = 0;
      puVar25[0x3c] = 0;
      puVar25[0x3d] = 0;
      puVar25[0x3e] = 0;
      puVar25[0x3f] = 0;
      *(undefined **)(puVar25 + 8) = &UNK_0f0a2b78;
      puVar25[0x5c] = 0;
      puVar25[0x5d] = 0;
      puVar25[0x5e] = 0;
      puVar25[0x5f] = 0;
      if (puStack_368 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_368)(&puStack_368,puVar25 + 0x5c);
        puVar15 = puStack_368;
      }
      puVar22 = puVar25 + 2;
      *(undefined8 **)(puVar25 + 0x5c) = puVar15;
      if (puStack_318 != (undefined8 *)0x0) {
        (*(code *)puStack_318[1])(&puStack_318);
      }
      LOCK();
      *(long *)puVar22 = *(long *)puVar22 + 1;
      UNLOCK();
      puStack_1d0 = puVar22;
      plStack_388 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plStack_388 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plStack_388[1] = 0;
      plStack_388[2] = 0;
      *plStack_388 = (long)&UNK_0f0a2c58;
      plStack_388[6] = 0;
      plStack_388[7] = 0;
      plStack_388[4] = (long)&UNK_0f0a2ca8;
      plStack_388[0xe] = (long)(puVar25 + 8);
      plStack_388[0xf] = (long)puVar25;
      LOCK();
      *(long *)(puVar25 + 2) = *(long *)(puVar25 + 2) + 1;
      UNLOCK();
      puStack_1e0 = (uint *)(plStack_388 + 1);
      puVar24 = *(uint **)(puVar23 + 0x38);
      puVar28 = *(uint **)(puVar23 + 0x36);
      puVar41 = puVar28;
      while (puStack_380 = puVar21, puStack_378 = puVar43, puVar41 != puVar24) {
        if ((*(long *)(puVar41 + 0x1e) == 0) && (*(long *)(puVar41 + 0x20) == -1))
        goto LAB_06eba993;
        puVar22 = puVar41 + 0x2a;
        puVar41 = puVar22;
      }
      if (puVar24 < *(uint **)(puVar23 + 0x3a)) {
        func_0x06fbf8f0(puVar24);
        puVar24 = puVar24 + 0x2a;
        *(uint **)(puVar23 + 0x38) = puVar24;
      }
      else {
        plVar17 = (long *)((long)puVar24 - (long)puVar28);
        uVar38 = ((long)plVar17 >> 3) * -0x30c30c30c30c30c3 + 1;
        if (0x186186186186186 < uVar38) goto LAB_06ebbc00;
        puVar25 = puVar23 + 0x36;
        lVar32 = (long)*(uint **)(puVar23 + 0x3a) - (long)puVar28 >> 3;
        uVar36 = lVar32 * -0x6186186186186186;
        if (uVar38 < uVar36) {
          uVar38 = uVar36;
        }
        if (0xc30c30c30c30c2 < (ulong)(lVar32 * -0x30c30c30c30c30c3)) {
          uVar38 = 0x186186186186186;
        }
        puStack_348 = puVar25;
        if (uVar38 == 0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          puVar28 = puVar43;
          if (0x186186186186186 < uVar38) goto LAB_06ebbbec;
          puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar38 * 0xa8);
          if (puVar15 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar38 * 0xa8,0);
            puVar15 = (undefined8 *)0x0;
          }
        }
        puVar35 = (undefined *)((long)plVar17 + (long)puVar15);
        uStack_358 = (uint)puVar35;
        uStack_354 = (undefined1)((ulong)puVar35 >> 0x20);
        uStack_353 = (undefined2)((ulong)puVar35 >> 0x28);
        uStack_351 = (undefined1)((ulong)puVar35 >> 0x38);
        uStack_360._4_4_ = (undefined4)((ulong)puVar35 >> 0x20);
        puVar37 = puVar15 + uVar38 * 0x15;
        uStack_350 = SUB81(puVar37,0);
        uStack_34f = (undefined6)((ulong)puVar37 >> 8);
        uStack_349 = (undefined1)((ulong)puVar37 >> 0x38);
        puStack_368 = puVar15;
        uStack_360._0_4_ = uStack_358;
        puStack_280 = puVar25;
        func_0x06fbf8f0(puVar35);
        puVar24 = (uint *)(CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)))
                          + 0xa8);
        lVar32 = *(long *)(puVar23 + 0x36);
        lVar18 = *(long *)(puVar23 + 0x38);
        lVar40 = (lVar32 - lVar18) + CONCAT44(uStack_360._4_4_,(uint)uStack_360);
        if (lVar32 != lVar18) {
          lVar44 = 0;
          do {
            uVar30 = ((undefined8 *)(lVar32 + lVar44))[1];
            *(undefined8 *)(lVar40 + lVar44) = *(undefined8 *)(lVar32 + lVar44);
            ((undefined8 *)(lVar40 + lVar44))[1] = uVar30;
            *(undefined8 *)(lVar32 + lVar44) = 0;
            ((undefined8 *)(lVar32 + lVar44))[1] = 0;
            puVar15 = (undefined8 *)(lVar40 + 0x20 + lVar44);
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15 = (undefined8 *)(lVar40 + 0x10 + lVar44);
            *puVar15 = 0;
            puVar15[1] = 0;
            *(undefined8 *)(lVar40 + 0x30 + lVar44) = 0;
            *(undefined8 *)(lVar40 + 0x28 + lVar44) = *(undefined8 *)(lVar32 + 0x28 + lVar44);
            puVar16 = (undefined4 *)(lVar32 + 0x18 + lVar44);
            uVar5 = puVar16[1];
            uVar6 = puVar16[2];
            uVar7 = puVar16[3];
            puVar2 = (undefined4 *)(lVar40 + 0x18 + lVar44);
            *puVar2 = *puVar16;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            *(undefined2 *)(lVar32 + 0x18 + lVar44) = 0;
            *(undefined8 *)(lVar40 + 0x10 + lVar44) = *(undefined8 *)(lVar32 + 0x10 + lVar44);
            FUN_04167a20(lVar40 + lVar44 + 0x38,lVar44 + 0x38 + lVar32);
            puVar15 = (undefined8 *)(lVar32 + 0x40 + lVar44);
            uVar30 = puVar15[1];
            puVar37 = (undefined8 *)(lVar40 + 0x40 + lVar44);
            *puVar37 = *puVar15;
            puVar37[1] = uVar30;
            puVar15 = (undefined8 *)(lVar32 + 0x50 + lVar44);
            uVar30 = puVar15[1];
            puVar37 = (undefined8 *)(lVar40 + 0x50 + lVar44);
            *puVar37 = *puVar15;
            puVar37[1] = uVar30;
            puVar15 = (undefined8 *)(lVar32 + 0x60 + lVar44);
            uVar30 = puVar15[1];
            puVar37 = (undefined8 *)(lVar40 + 0x60 + lVar44);
            *puVar37 = *puVar15;
            puVar37[1] = uVar30;
            puVar15 = (undefined8 *)(lVar32 + 0x60 + lVar44);
            *puVar15 = 0;
            puVar15[1] = 0;
            *(undefined8 *)(lVar40 + 0x70 + lVar44) = *(undefined8 *)(lVar32 + 0x70 + lVar44);
            puVar15 = (undefined8 *)(lVar32 + 0x78 + lVar44);
            uVar30 = puVar15[1];
            puVar37 = (undefined8 *)(lVar40 + 0x78 + lVar44);
            *puVar37 = *puVar15;
            puVar37[1] = uVar30;
            puVar15 = (undefined8 *)(lVar40 + 0x88 + lVar44);
            *puVar15 = 0;
            puVar15[1] = 0;
            *(undefined8 *)(lVar40 + 0x98 + lVar44) = 0;
            puVar16 = (undefined4 *)(lVar32 + 0x88 + lVar44);
            uVar5 = puVar16[1];
            uVar6 = puVar16[2];
            uVar7 = puVar16[3];
            puVar2 = (undefined4 *)(lVar40 + 0x88 + lVar44);
            *puVar2 = *puVar16;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            *(undefined8 *)(lVar40 + 0x98 + lVar44) = *(undefined8 *)(lVar32 + 0x98 + lVar44);
            puVar15 = (undefined8 *)(lVar32 + 0x88 + lVar44);
            *puVar15 = 0;
            puVar15[1] = 0;
            *(undefined8 *)(lVar32 + 0x98 + lVar44) = 0;
            *(undefined2 *)(lVar40 + 0xa0 + lVar44) = *(undefined2 *)(lVar32 + 0xa0 + lVar44);
            lVar1 = lVar44 + 0xa8;
            lVar44 = lVar44 + 0xa8;
          } while (lVar1 + lVar32 != lVar18);
          do {
            func_0x06fbca40(lVar32);
            lVar32 = lVar32 + 0xa8;
          } while (lVar32 != lVar18);
          lVar32 = *(long *)puStack_280;
        }
        puVar25 = puStack_320;
        *(long *)(puVar23 + 0x36) = lVar40;
        *(uint **)(puVar23 + 0x38) = puVar24;
        lVar18 = *(long *)(puVar23 + 0x3a);
        *(long *)(puVar23 + 0x3a) = CONCAT17(uStack_349,CONCAT61(uStack_34f,uStack_350));
        if (lVar32 != 0) {
          func_0x0412a280(lVar32,lVar18 - lVar32);
        }
      }
      *(uint **)(puVar23 + 0x38) = puVar24;
      pbVar27 = *(byte **)(puVar24 + -0x2a);
      if ((*pbVar27 & 1) == 0) {
        *pbVar27 = 0x26;
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27[8] = 0x13;
        pbVar27[9] = 0;
        pbVar27[10] = 0;
        pbVar27[0xb] = 0;
        pbVar27[0xc] = 0;
        pbVar27[0xd] = 0;
        pbVar27[0xe] = 0;
        pbVar27[0xf] = 0;
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
      uVar7 = _UNK_01494d69;
      uVar6 = _UNK_01494d65;
      uVar5 = _UNK_01494d61;
      *(undefined4 *)pbVar27 = _DAT_01494d5d;
      *(undefined4 *)(pbVar27 + 4) = uVar5;
      *(undefined4 *)(pbVar27 + 8) = uVar6;
      *(undefined4 *)(pbVar27 + 0xc) = uVar7;
      pbVar27[0xf] = 0x65;
      pbVar27[0x10] = 0x6e;
      pbVar27[0x11] = 0x74;
      pbVar27[0x12] = 0x3e;
      pbVar27[0x13] = 0;
      lVar32 = *(long *)(puVar23 + 0x38);
      puVar41 = (uint *)(lVar32 + -0xa8);
      *(byte *)(lVar32 + -7) = (byte)puVar23[0x20];
      *(undefined8 *)(lVar32 + -0x30) = 0;
      *(undefined8 *)(lVar32 + -0x28) = 0xffffffffffffffff;
      *(undefined1 *)(lVar32 + -8) = 0;
LAB_06eba993:
      puVar24 = puVar25 + 0x22;
      puVar39 = (uint *)(plStack_388 + 4);
      puVar22 = *(uint **)(puVar41 + 0x24);
      if (puVar22 < *(uint **)(puVar41 + 0x26)) {
        puVar22[4] = 0;
        puVar22[5] = 0;
        puVar22[6] = 0;
        puVar22[7] = 0;
        puVar22[0] = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        puVar22[3] = 0;
        puVar22[8] = 0;
        puVar22[9] = 0;
        if (puVar22 != puVar24) {
          if ((puVar25[0x24] & 1) == 0) {
            *(long *)(puVar22 + 6) = *(long *)(puVar25 + 0x28);
            lVar32 = *(long *)(puVar25 + 0x26);
            *(long *)(puVar22 + 2) = *(long *)(puVar25 + 0x24);
            *(long *)(puVar22 + 4) = lVar32;
          }
          else {
            puStack_280 = puVar39;
            func_0x04885070(puVar22 + 2,*(long *)(puVar25 + 0x28),*(long *)(puVar25 + 0x26));
            puVar39 = puStack_280;
          }
        }
        *(long *)puVar22 = *(long *)puVar24;
        *(uint **)(puVar22 + 10) = puVar39;
        *(long **)(puVar22 + 0xc) = plStack_388;
        LOCK();
        plStack_388[1] = plStack_388[1] + 1;
        UNLOCK();
        puVar22 = puVar22 + 0xe;
        *(uint **)(puVar41 + 0x24) = puVar22;
        uStack_360 = (uint *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
        goto LAB_06ebad09;
      }
      plVar17 = (long *)((long)puVar22 - *(long *)(puVar41 + 0x22));
      uVar38 = ((long)plVar17 >> 3) * 0x6db6db6db6db6db7 + 1;
      if (uVar38 < 0x492492492492493) {
        lVar32 = (long)*(uint **)(puVar41 + 0x26) - *(long *)(puVar41 + 0x22) >> 3;
        uVar36 = lVar32 * -0x2492492492492492;
        if (uVar38 < uVar36) {
          uVar38 = uVar36;
        }
        puStack_348 = puVar41 + 0x22;
        if (0x249249249249248 < (ulong)(lVar32 * 0x6db6db6db6db6db7)) {
          uVar38 = 0x492492492492492;
        }
        puStack_280 = puStack_348;
        if (uVar38 == 0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          puVar22 = puVar41;
          puVar28 = puStack_348;
          puVar23 = puVar21;
          if (0x492492492492492 < uVar38) goto LAB_06ebbbec;
          puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar38 * 0x38);
          if (puVar15 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar38 * 0x38,0);
            puVar15 = (undefined8 *)0x0;
          }
        }
        puVar25 = (uint *)((long)puVar15 + (long)plVar17);
        uStack_358 = (uint)puVar25;
        uStack_354 = (undefined1)((ulong)puVar25 >> 0x20);
        uStack_353 = (undefined2)((ulong)puVar25 >> 0x28);
        uStack_351 = (undefined1)((ulong)puVar25 >> 0x38);
        uStack_360._4_4_ = (undefined4)((ulong)puVar25 >> 0x20);
        puVar37 = puVar15 + uVar38 * 7;
        uStack_350 = SUB81(puVar37,0);
        uStack_34f = (undefined6)((ulong)puVar37 >> 8);
        uStack_349 = (undefined1)((ulong)puVar37 >> 0x38);
        *(undefined8 *)((long)(puVar15 + 2) + (long)plVar17) = 0;
        ((undefined8 *)((long)(puVar15 + 2) + (long)plVar17))[1] = 0;
        *(undefined8 *)((long)puVar15 + (long)plVar17) = 0;
        ((undefined8 *)((long)puVar15 + (long)plVar17))[1] = 0;
        *(undefined8 *)((long)(puVar15 + 4) + (long)plVar17) = 0;
        puVar28 = puVar25;
        puVar22 = puVar25;
        puStack_368 = puVar15;
        if (puVar25 != puVar24) {
          puVar35 = (undefined *)((long)plVar17 + (long)puVar15);
          if ((puStack_320[0x24] & 1) == 0) {
            *(long *)(puVar35 + 0x18) = *(long *)(puStack_320 + 0x28);
            uVar9 = puStack_320[0x25];
            uVar10 = puStack_320[0x26];
            uVar11 = puStack_320[0x27];
            *(uint *)(puVar35 + 8) = puStack_320[0x24];
            *(uint *)(puVar35 + 0xc) = uVar9;
            *(uint *)(puVar35 + 0x10) = uVar10;
            *(uint *)(puVar35 + 0x14) = uVar11;
          }
          else {
            uStack_360._0_4_ = uStack_358;
            func_0x04885070(puVar35 + 8,*(long *)(puStack_320 + 0x28),*(long *)(puStack_320 + 0x26))
            ;
            puVar28 = (uint *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
            puVar22 = (uint *)CONCAT17(uStack_351,
                                       CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
          }
        }
        puVar23 = puStack_280;
        *(long *)puVar25 = *(long *)puVar24;
        *(uint **)(puVar25 + 10) = puVar39;
        *(long **)(puVar25 + 0xc) = plStack_388;
        LOCK();
        plStack_388[1] = plStack_388[1] + 1;
        UNLOCK();
        puVar22 = puVar22 + 0xe;
        uStack_358 = (uint)puVar22;
        uStack_354 = (undefined1)((ulong)puVar22 >> 0x20);
        uStack_353 = (undefined2)((ulong)puVar22 >> 0x28);
        uStack_351 = (undefined1)((ulong)puVar22 >> 0x38);
        puVar15 = *(undefined8 **)(puVar41 + 0x22);
        puVar37 = *(undefined8 **)(puVar41 + 0x24);
        pbVar27 = (byte *)((long)puVar28 + ((long)puVar15 - (long)puVar37));
        pbVar26 = pbVar27;
        puVar31 = puVar15;
        if ((long)puVar15 - (long)puVar37 != 0) {
          do {
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
            *(undefined8 *)(pbVar26 + 0x18) = puVar31[3];
            uVar30 = puVar31[2];
            *(undefined8 *)(pbVar26 + 8) = puVar31[1];
            *(undefined8 *)(pbVar26 + 0x10) = uVar30;
            *(undefined2 *)(puVar31 + 1) = 0;
            *(undefined8 *)pbVar26 = *puVar31;
            uVar5 = *(undefined4 *)((long)puVar31 + 0x2c);
            uVar6 = *(undefined4 *)(puVar31 + 6);
            uVar7 = *(undefined4 *)((long)puVar31 + 0x34);
            *(undefined4 *)(pbVar26 + 0x28) = *(undefined4 *)(puVar31 + 5);
            *(undefined4 *)(pbVar26 + 0x2c) = uVar5;
            *(undefined4 *)(pbVar26 + 0x30) = uVar6;
            *(undefined4 *)(pbVar26 + 0x34) = uVar7;
            puVar31[5] = 0;
            puVar31[6] = 0;
            puVar31 = puVar31 + 7;
            pbVar26 = pbVar26 + 0x38;
            pbStack_c0 = pbVar27;
          } while (puVar31 != puVar37);
          do {
            plVar14 = (long *)puVar15[6];
            uStack_360 = puVar28;
            if (plVar14 == (long *)0x0) {
LAB_06ebac84:
              bVar3 = *(byte *)(puVar15 + 1);
            }
            else {
              LOCK();
              plVar17 = plVar14 + 1;
              lVar32 = *plVar17;
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (lVar32 != 0) goto LAB_06ebac84;
              (**(code **)(*plVar14 + 0x10))(plVar14);
              func_0x0412c2d0(plVar14);
              bVar3 = *(byte *)(puVar15 + 1);
            }
            puVar28 = uStack_360;
            if ((bVar3 & 1) != 0) {
              func_0x0412a280(puVar15[3],puVar15[1] & 0xfffffffffffffffe);
              puVar28 = uStack_360;
            }
            puVar15 = puVar15 + 7;
          } while (puVar15 != puVar37);
          puVar15 = *(undefined8 **)puVar23;
          puVar22 = (uint *)CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358))
                                    );
          pbVar27 = pbStack_c0;
        }
        *(byte **)(puVar41 + 0x22) = pbVar27;
        *(uint **)(puVar41 + 0x24) = puVar22;
        lVar32 = *(long *)(puVar41 + 0x26);
        *(long *)(puVar41 + 0x26) = CONCAT17(uStack_349,CONCAT61(uStack_34f,uStack_350));
        uStack_360 = puVar28;
        if (puVar15 != (undefined8 *)0x0) {
          func_0x0412a280(puVar15,lVar32 - (long)puVar15);
        }
LAB_06ebad09:
        puVar25 = puStack_320;
        *(uint **)(puVar41 + 0x24) = puVar22;
        uVar9 = *puVar41;
        uVar10 = puVar41[1];
        uVar11 = puVar41[2];
        uVar12 = puVar41[3];
        if (*(long *)(puVar41 + 2) != 0) {
          LOCK();
          plVar14 = (long *)(*(long *)(puVar41 + 2) + 8);
          *plVar14 = *plVar14 + 1;
          UNLOCK();
        }
        plVar14 = *(long **)(puStack_320 + 0x1e);
        puStack_320[0x1c] = uVar9;
        puStack_320[0x1d] = uVar10;
        puStack_320[0x1e] = uVar11;
        puStack_320[0x1f] = uVar12;
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar17 = plVar14 + 1;
          lVar32 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar32 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            func_0x0412c2d0(plVar14);
          }
        }
        *(byte *)(puVar25 + 0x20) = *(byte *)((long)puVar41 + 0xa1);
        LOCK();
        lVar32 = *(long *)puStack_1e0;
        *(long *)puStack_1e0 = *(long *)puStack_1e0 + -1;
        UNLOCK();
        if (lVar32 == 0) {
          (**(code **)(*plStack_388 + 0x10))(plStack_388);
          func_0x0412c2d0(plStack_388);
          LOCK();
          lVar32 = *(long *)puStack_1d0;
          *(long *)puStack_1d0 = *(long *)puStack_1d0 + -1;
          UNLOCK();
          puVar22 = puStack_1d0;
        }
        else {
          LOCK();
          lVar32 = *(long *)puStack_1d0;
          *(long *)puStack_1d0 = *(long *)puStack_1d0 + -1;
          UNLOCK();
          puVar22 = puStack_1d0;
        }
        puStack_1d0 = puVar22;
        if (lVar32 == 0) {
          (**(code **)(*(long *)puVar25 + 0x10))(puVar25);
          func_0x0412c2d0(puVar25);
          LOCK();
          lVar32 = *(long *)puVar22;
          *(long *)puVar22 = *(long *)puVar22 + -1;
          UNLOCK();
        }
        else {
          LOCK();
          lVar32 = *(long *)puVar22;
          *(long *)puVar22 = *(long *)puVar22 + -1;
          UNLOCK();
        }
        if (lVar32 == 0) {
          (**(code **)(*(long *)puVar25 + 0x10))(puVar25);
          func_0x0412c2d0(puVar25);
        }
        if (puStack_278 != (undefined8 *)0x0) {
          (*(code *)puStack_278[1])(&puStack_278);
        }
        uStack_30a = 0;
        uStack_309 = 0;
        uStack_308 = 0;
        uStack_304 = 0;
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_310 = 0x756f630a;
        uStack_30c = 0x6e;
        uStack_30b = 0x74;
        puStack_318 = (undefined8 *)0x184efb3a64c90e2;
        uStack_360._0_4_ = 0;
        uStack_360._4_4_ = 0;
        puStack_368 = (undefined8 *)&UNK_0f0a2f48;
        lVar32 = func_0x06fb7a80(puVar43,&puStack_318,&puStack_368);
        if (puStack_368 != (undefined8 *)0x0) {
          (*(code *)puStack_368[1])(&puStack_368);
        }
        if ((uStack_310 & 1) != 0) {
          func_0x0412a280(uStack_300,
                          CONCAT17(uStack_309,
                                   CONCAT16(uStack_30a,
                                            CONCAT15(uStack_30b,CONCAT14(uStack_30c,uStack_310)))) &
                          0xfffffffffffffffe);
        }
        uStack_310 = 0;
        uStack_30c = 0;
        uStack_30b = 0;
        uStack_30a = 0;
        uStack_309 = 0;
        puStack_318 = (undefined8 *)&UNK_0f0a2f60;
        ppuVar33 = (undefined8 **)(lVar32 + 0x110);
        if (ppuVar33 != &puStack_318) {
          if ((*ppuVar33 == (undefined8 *)0x0) ||
             ((*(code *)(*ppuVar33)[1])(ppuVar33), puStack_318 != (undefined8 *)0x0)) {
            (*(code *)*puStack_318)(&puStack_318,ppuVar33);
            puVar15 = puStack_318;
          }
          else {
            puVar15 = (undefined8 *)0x0;
          }
          puStack_318 = (undefined8 *)0x0;
          *ppuVar33 = puVar15;
        }
        uStack_2b8 = 0;
        uStack_2b7 = 0;
        uStack_2b3 = 0;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        bStack_2c0 = 0xc;
        uStack_2bf = 0x69646172;
        uStack_2bb = 0x7375;
        uStack_2b9 = 0;
        puStack_2c8 = (undefined8 *)0xa364c48342d569cf;
        puStack_270 = (undefined *)0x0;
        puStack_278 = (undefined8 *)&UNK_0f0a2f78;
        lVar32 = func_0x06fb7a80(puVar43,&puStack_2c8,&puStack_278);
        if (puStack_278 != (undefined8 *)0x0) {
          (*(code *)puStack_278[1])(&puStack_278);
        }
        if ((bStack_2c0 & 1) != 0) {
          func_0x0412a280(uStack_2b0,
                          CONCAT17(uStack_2b9,CONCAT25(uStack_2bb,CONCAT41(uStack_2bf,bStack_2c0)))
                          & 0xfffffffffffffffe);
        }
        bStack_2c0 = 0;
        uStack_2bf = 0;
        uStack_2bb = 0;
        uStack_2b9 = 0;
        puStack_2c8 = (undefined8 *)&UNK_0f0a2f90;
        ppuVar33 = (undefined8 **)(lVar32 + 0x110);
        if (ppuVar33 != &puStack_2c8) {
          if ((*ppuVar33 == (undefined8 *)0x0) ||
             ((*(code *)(*ppuVar33)[1])(ppuVar33), puStack_2c8 != (undefined8 *)0x0)) {
            (*(code *)*puStack_2c8)(&puStack_2c8,ppuVar33);
            puVar15 = puStack_2c8;
          }
          else {
            puVar15 = (undefined8 *)0x0;
          }
          *ppuVar33 = puVar15;
        }
        if (plStack_1c8 != (long *)0x0) {
          (*(code *)plStack_1c8[1])(&plStack_1c8);
        }
        puVar25 = puVar21 + 2;
        if (plStack_148 != (long *)0x0) {
          (*(code *)plStack_148[1])(&plStack_148);
        }
        LOCK();
        *(long *)puVar25 = *(long *)puVar25 + 1;
        UNLOCK();
        puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (puVar15 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        plVar14 = plStack_288;
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = &UNK_0f0a2fb8;
        puVar37 = puVar15 + 4;
        puVar15[6] = 0;
        puVar15[7] = 0;
        puVar15[4] = &UNK_0f0a3008;
        puVar15[0xe] = puVar43;
        puVar15[0xf] = puVar21;
        LOCK();
        *(long *)(puVar21 + 2) = *(long *)(puVar21 + 2) + 1;
        UNLOCK();
        uStack_360._0_4_ = (uint)puVar15;
        uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
        puVar22 = (uint *)plStack_288[0x17];
        puVar28 = (uint *)plStack_288[0x18];
        do {
          puStack_368 = puVar37;
          if (puVar22 == puVar28) {
            if (puVar28 < (uint *)plStack_288[0x19]) {
              func_0x06f98fe0(puVar28);
              plVar14[0x18] = (long)(puVar28 + 0x2a);
              plVar14[0x18] = (long)(puVar28 + 0x2a);
              pbVar27 = *(byte **)puVar28;
              bVar3 = *pbVar27;
            }
            else {
              lVar32 = func_0x06f98d50(plStack_288 + 0x17);
              plVar14[0x18] = lVar32;
              pbVar27 = *(byte **)(lVar32 + -0xa8);
              bVar3 = *pbVar27;
            }
            if ((bVar3 & 1) == 0) {
              *pbVar27 = 0x26;
              pbVar27 = (byte *)((long)pbVar27 + 1);
            }
            else {
              pbVar26 = (byte *)((long)pbVar27 + 8);
              pbVar26[0] = 0x13;
              pbVar26[1] = 0;
              pbVar26[2] = 0;
              pbVar26[3] = 0;
              pbVar26[4] = 0;
              pbVar26[5] = 0;
              pbVar26[6] = 0;
              pbVar26[7] = 0;
              pbVar27 = *(byte **)((long)pbVar27 + 0x10);
            }
            uVar7 = _UNK_01494d69;
            uVar6 = _UNK_01494d65;
            uVar5 = _UNK_01494d61;
            *(undefined4 *)pbVar27 = _DAT_01494d5d;
            *(undefined4 *)(pbVar27 + 4) = uVar5;
            *(undefined4 *)(pbVar27 + 8) = uVar6;
            *(undefined4 *)(pbVar27 + 0xc) = uVar7;
            pbVar27[0xf] = 0x65;
            pbVar27[0x10] = 0x6e;
            pbVar27[0x11] = 0x74;
            pbVar27[0x12] = 0x3e;
            pbVar27[0x13] = 0;
            lVar32 = plVar14[0x18];
            puVar22 = (uint *)(lVar32 + -0xa8);
            *(char *)(lVar32 + -7) = (char)plVar14[0xc];
            *(undefined8 *)(lVar32 + -0x30) = 0;
            *(undefined8 *)(lVar32 + -0x28) = 0xffffffffffffffff;
            *(undefined1 *)(lVar32 + -8) = 0;
            puVar28 = *(uint **)(lVar32 + -0x18);
            if (puVar28 < *(uint **)(lVar32 + -0x10)) {
LAB_06ebb171:
              puVar28[4] = 0;
              puVar28[5] = 0;
              puVar28[6] = 0;
              puVar28[7] = 0;
              puVar28[0] = 0;
              puVar28[1] = 0;
              puVar28[2] = 0;
              puVar28[3] = 0;
              puVar28[8] = 0;
              puVar28[9] = 0;
              if (puVar28 != puStack_230) {
                if ((*puStack_1d8 & 1) == 0) {
                  *(long *)(puVar28 + 6) = *(long *)(puStack_1d8 + 4);
                  lVar32 = *(long *)(puStack_1d8 + 2);
                  *(long *)(puVar28 + 2) = *(long *)puStack_1d8;
                  *(long *)(puVar28 + 4) = lVar32;
                }
                else {
                  func_0x04885070(puVar28 + 2,*(long *)(puVar21 + 0x28),*(long *)(puVar21 + 0x26));
                }
              }
              *(long *)puVar28 = *(long *)puStack_230;
              *(undefined8 **)(puVar28 + 10) = puVar37;
              *(undefined8 **)(puVar28 + 0xc) = puVar15;
              LOCK();
              puVar15[1] = puVar15[1] + 1;
              UNLOCK();
              puVar28 = puVar28 + 0xe;
              *(uint **)(puVar22 + 0x24) = puVar28;
            }
            else {
LAB_06ebb282:
              puVar28 = (uint *)func_0x06f99160(puVar22 + 0x22,puStack_230,&puStack_368);
            }
            puVar24 = puStack_2d0;
            *(uint **)(puVar22 + 0x24) = puVar28;
            uVar9 = *puVar22;
            uVar10 = puVar22[1];
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            if (*(long *)(puVar22 + 2) != 0) {
              LOCK();
              plVar14 = (long *)(*(long *)(puVar22 + 2) + 8);
              *plVar14 = *plVar14 + 1;
              UNLOCK();
            }
            plVar14 = *(long **)(puVar21 + 0x1e);
            puVar21[0x1c] = uVar9;
            puVar21[0x1d] = uVar10;
            puVar21[0x1e] = uVar11;
            puVar21[0x1f] = uVar12;
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar17 = plVar14 + 1;
              lVar32 = *plVar17;
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (lVar32 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                func_0x0412c2d0(plVar14);
              }
            }
            *(byte *)(puVar21 + 0x20) = *(byte *)((long)puVar22 + 0xa1);
            plVar14 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar17 = plVar14 + 1;
              lVar32 = *plVar17;
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (lVar32 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                func_0x0412c2d0(plVar14);
              }
            }
            LOCK();
            lVar32 = *(long *)puVar25;
            *(long *)puVar25 = *(long *)puVar25 + -1;
            UNLOCK();
            if (lVar32 == 0) {
              (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
              func_0x0412c2d0(puVar21);
              LOCK();
              lVar32 = *(long *)puVar25;
              *(long *)puVar25 = *(long *)puVar25 + -1;
              UNLOCK();
            }
            else {
              LOCK();
              lVar32 = *(long *)puVar25;
              *(long *)puVar25 = *(long *)puVar25 + -1;
              UNLOCK();
            }
            if (lVar32 == 0) {
              (**(code **)(*(long *)puVar21 + 0x10))(puVar21);
              func_0x0412c2d0(puVar21);
            }
            if (lStack_108 != 0) {
              (**(code **)(lStack_108 + 8))(&lStack_108);
            }
            if (puVar24 != (uint *)0x0) {
              LOCK();
              puVar21 = puVar24 + 2;
              lVar32 = *(long *)puVar21;
              *(long *)puVar21 = *(long *)puVar21 + -1;
              UNLOCK();
              if (lVar32 == 0) {
                (**(code **)(*(long *)puVar24 + 0x10))(puVar24);
                func_0x0412c2d0(puVar24);
              }
            }
            uVar30 = *param_1;
            plVar14 = (long *)param_1[1];
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar14[1] = plVar14[1] + 1;
              UNLOCK();
            }
            func_0x06ebd540(uVar30,plVar14,0xa2,&UNK_011bc38e,0);
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar17 = plVar14 + 1;
              lVar32 = *plVar17;
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (lVar32 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                func_0x0412c2d0(plVar14);
              }
            }
            uVar30 = *param_1;
            plVar14 = (long *)param_1[1];
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar14[1] = plVar14[1] + 1;
              UNLOCK();
            }
            uStack_2b3 = 0;
            uStack_2b0 = 0;
            uStack_2a8 = 0;
            bStack_2c0 = 0x18;
            uStack_2bf = 0x65766f6c;
            uStack_2bb = 0x665f;
            uStack_2b9 = 0x69;
            uStack_2b8 = 0x6c;
            uStack_2b7 = 0x73726574;
            puStack_2c8 = (undefined8 *)0xc20a5beb1dc4c9ed;
            puStack_270 = (undefined *)0x60;
            uStack_310 = 0x60;
            uStack_30c = 0;
            uStack_30b = 0;
            uStack_30a = 0;
            uStack_309 = 0;
            puStack_278 = (undefined8 *)0x0;
            puStack_318 = (undefined8 *)&UNK_0f0a3250;
            plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
            if (plVar17 == (long *)0x0) {
              func_0x0eec74c0(0x1b0,0);
            }
            puStack_368 = puStack_318;
            plVar17[1] = 0;
            plVar17[2] = 0;
            *plVar17 = (long)&UNK_0f0a3080;
            uStack_360._4_4_ =
                 CONCAT13(uStack_309,CONCAT12(uStack_30a,CONCAT11(uStack_30b,uStack_30c)));
            puStack_318 = (undefined8 *)0x0;
            uStack_360._0_4_ = uStack_310;
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
            func_0x04aa75f0(plVar17 + 0xe,&puStack_228,&UNK_01254d89);
            *(undefined1 *)(plVar17 + 0x10) = 0;
            plVar19 = plVar17 + 0x11;
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
            plVar17[4] = (long)&UNK_0f0a30d0;
            plVar17[0x2e] = 0;
            plVar17[0x2f] = 0;
            if (puStack_368 == (undefined8 *)0x0) {
              puVar15 = (undefined8 *)0x0;
            }
            else {
              (*(code *)*puStack_368)(&puStack_368,plVar17 + 0x2e);
              puVar15 = puStack_368;
            }
            puStack_368 = (undefined8 *)0x0;
            plVar17[0x2e] = (long)puVar15;
            puVar21 = (uint *)(plVar17 + 0x12);
            if (plVar19 == (long *)&DAT_0f551f28) {
              plVar17[0x15] = 0;
            }
            else {
              if ((*puVar21 & 1) == 0) {
                if ((_DAT_0f551f30 & 1) == 0) {
                  plVar17[0x14] = _DAT_0f551f40;
                  uVar7 = uRam000000000f551f3c;
                  uVar6 = _DAT_0f551f38;
                  uVar5 = uRam000000000f551f34;
                  *puVar21 = _DAT_0f551f30;
                  *(undefined4 *)((long)plVar17 + 0x94) = uVar5;
                  *(undefined4 *)(plVar17 + 0x13) = uVar6;
                  *(undefined4 *)((long)plVar17 + 0x9c) = uVar7;
                }
                else {
                  func_0x04885070(puVar21,_DAT_0f551f40,CONCAT44(uRam000000000f551f3c,_DAT_0f551f38)
                                 );
                }
              }
              else {
                bVar45 = (_DAT_0f551f30 & 1) != 0;
                lVar32 = 0xf551f31;
                if (bVar45) {
                  lVar32 = _DAT_0f551f40;
                }
                uVar38 = (ulong)((_DAT_0f551f30 & 0xff) >> 1);
                if (bVar45) {
                  uVar38 = CONCAT44(uRam000000000f551f3c,_DAT_0f551f38);
                }
                FUN_04885120(puVar21,lVar32,uVar38);
              }
              plVar17[0x11] = _DAT_0f551f28;
              plVar17[0x15] = 0;
              if (puStack_368 != (undefined8 *)0x0) {
                (*(code *)puStack_368[1])(&puStack_368);
              }
            }
            plVar20 = plVar17 + 1;
            if (puStack_318 != (undefined8 *)0x0) {
              (*(code *)puStack_318[1])(&puStack_318);
            }
            LOCK();
            *plVar20 = *plVar20 + 1;
            UNLOCK();
            puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
            if (puVar15 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x80,0);
            }
            puVar15[1] = 0;
            puVar15[2] = 0;
            *puVar15 = &UNK_0f0a31b0;
            puVar15[6] = 0;
            puVar15[7] = 0;
            puVar15[4] = &UNK_0f0a3200;
            puVar15[0xe] = plVar17 + 4;
            puVar15[0xf] = plVar17;
            LOCK();
            plVar17[1] = plVar17[1] + 1;
            UNLOCK();
            uStack_360._0_4_ = (uint)puVar15;
            uStack_360._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
            puStack_368 = puVar15 + 4;
            puVar16 = (undefined4 *)func_0x06f937c0(uVar30,&puStack_2c8);
            plVar29 = *(long **)(puVar16 + 0x24);
            if (plVar29 < *(long **)(puVar16 + 0x26)) {
              plVar29[2] = 0;
              plVar29[3] = 0;
              *plVar29 = 0;
              plVar29[1] = 0;
              plVar29[4] = 0;
              if (plVar29 != plVar19) {
                if ((*puVar21 & 1) == 0) {
                  plVar29[3] = plVar17[0x14];
                  lVar32 = plVar17[0x13];
                  plVar29[1] = *(long *)puVar21;
                  plVar29[2] = lVar32;
                }
                else {
                  func_0x04885070(plVar29 + 1,plVar17[0x14],plVar17[0x13]);
                }
              }
              *plVar29 = *plVar19;
              plVar29[5] = (long)(puVar15 + 4);
              plVar29[6] = (long)puVar15;
              LOCK();
              puVar15[1] = puVar15[1] + 1;
              UNLOCK();
              plVar29 = plVar29 + 7;
              *(long **)(puVar16 + 0x24) = plVar29;
            }
            else {
              plVar29 = (long *)func_0x06f97060(puVar16 + 0x22,plVar19,&puStack_368);
            }
            *(long **)(puVar16 + 0x24) = plVar29;
            uVar5 = *puVar16;
            uVar6 = puVar16[1];
            uVar7 = puVar16[2];
            uVar8 = puVar16[3];
            if (*(long *)(puVar16 + 2) != 0) {
              LOCK();
              plVar19 = (long *)(*(long *)(puVar16 + 2) + 8);
              *plVar19 = *plVar19 + 1;
              UNLOCK();
            }
            plVar19 = (long *)plVar17[0xf];
            *(undefined4 *)(plVar17 + 0xe) = uVar5;
            *(undefined4 *)((long)plVar17 + 0x74) = uVar6;
            *(undefined4 *)(plVar17 + 0xf) = uVar7;
            *(undefined4 *)((long)plVar17 + 0x7c) = uVar8;
            if (plVar19 != (long *)0x0) {
              LOCK();
              plVar29 = plVar19 + 1;
              lVar32 = *plVar29;
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (lVar32 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                func_0x0412c2d0(plVar19);
              }
            }
            *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
            plVar19 = (long *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
            if (plVar19 != (long *)0x0) {
              LOCK();
              plVar29 = plVar19 + 1;
              lVar32 = *plVar29;
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (lVar32 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                func_0x0412c2d0(plVar19);
              }
            }
            LOCK();
            lVar32 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar32 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              func_0x0412c2d0(plVar17);
              LOCK();
              lVar32 = *plVar20;
              *plVar20 = *plVar20 + -1;
              UNLOCK();
            }
            else {
              LOCK();
              lVar32 = *plVar20;
              *plVar20 = *plVar20 + -1;
              UNLOCK();
            }
            if (lVar32 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              func_0x0412c2d0(plVar17);
            }
            if (puStack_278 != (undefined8 *)0x0) {
              (*(code *)puStack_278[1])(&puStack_278);
            }
            if ((bStack_2c0 & 1) != 0) {
              func_0x0412a280(uStack_2b0,
                              CONCAT17(uStack_2b9,
                                       CONCAT25(uStack_2bb,CONCAT41(uStack_2bf,bStack_2c0))) &
                              0xfffffffffffffffe);
            }
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar17 = plVar14 + 1;
              lVar32 = *plVar17;
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (lVar32 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                func_0x0412c2d0(plVar14);
              }
            }
            uVar30 = *param_1;
            plVar14 = (long *)param_1[1];
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar14[1] = plVar14[1] + 1;
              UNLOCK();
            }
            func_0x06ebd540(uVar30,plVar14,0xa3,&UNK_0147c3fa,0);
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar17 = plVar14 + 1;
              lVar32 = *plVar17;
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (lVar32 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                func_0x0412c2d0(plVar14);
              }
            }
            return;
          }
          if ((*(long *)(puVar22 + 0x1e) == 0) && (*(long *)(puVar22 + 0x20) == -1)) {
            puVar28 = *(uint **)(puVar22 + 0x24);
            if (puVar28 < *(uint **)(puVar22 + 0x26)) goto LAB_06ebb171;
            goto LAB_06ebb282;
          }
          puVar22 = puVar22 + 0x2a;
        } while( true );
      }
    }
    else {
      plVar17 = (long *)((long)puVar43 - *(long *)(puVar28 + 0x22));
      uVar38 = ((long)plVar17 >> 3) * 0x6db6db6db6db6db7 + 1;
      puVar41 = puVar22;
      puVar43 = puVar28;
      if (uVar38 < 0x492492492492493) {
        lVar32 = (long)*(uint **)(puVar28 + 0x26) - *(long *)(puVar28 + 0x22) >> 3;
        uVar36 = lVar32 * -0x2492492492492492;
        if (uVar38 < uVar36) {
          uVar38 = uVar36;
        }
        puStack_348 = puVar28 + 0x22;
        if (0x249249249249248 < (ulong)(lVar32 * 0x6db6db6db6db6db7)) {
          uVar38 = 0x492492492492492;
        }
        puStack_280 = puStack_348;
        puStack_238 = puVar25;
        if (uVar38 == 0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          puVar23 = puVar21;
          if (0x492492492492492 < uVar38) goto LAB_06ebbbe7;
          puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar38 * 0x38);
          if (puVar15 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar38 * 0x38,0);
            puVar15 = (undefined8 *)0x0;
          }
        }
        puVar25 = (uint *)((long)puVar15 + (long)plVar17);
        uStack_358 = (uint)puVar25;
        uStack_354 = (undefined1)((ulong)puVar25 >> 0x20);
        uStack_353 = (undefined2)((ulong)puVar25 >> 0x28);
        uStack_351 = (undefined1)((ulong)puVar25 >> 0x38);
        uStack_360._4_4_ = (undefined4)((ulong)puVar25 >> 0x20);
        puVar37 = puVar15 + uVar38 * 7;
        uStack_350 = SUB81(puVar37,0);
        uStack_34f = (undefined6)((ulong)puVar37 >> 8);
        uStack_349 = (undefined1)((ulong)puVar37 >> 0x38);
        *(undefined8 *)((long)(puVar15 + 2) + (long)plVar17) = 0;
        ((undefined8 *)((long)(puVar15 + 2) + (long)plVar17))[1] = 0;
        *(undefined8 *)((long)puVar15 + (long)plVar17) = 0;
        ((undefined8 *)((long)puVar15 + (long)plVar17))[1] = 0;
        *(undefined8 *)((long)(puVar15 + 4) + (long)plVar17) = 0;
        puVar23 = puVar25;
        puVar43 = puVar25;
        puStack_368 = puVar15;
        if (puVar25 != puVar24) {
          puVar35 = (undefined *)((long)plVar17 + (long)puVar15);
          if ((puVar21[0x24] & 1) == 0) {
            *(long *)(puVar35 + 0x18) = *(long *)(puVar21 + 0x28);
            uVar9 = puVar21[0x25];
            uVar10 = puVar21[0x26];
            uVar11 = puVar21[0x27];
            *(uint *)(puVar35 + 8) = puVar21[0x24];
            *(uint *)(puVar35 + 0xc) = uVar9;
            *(uint *)(puVar35 + 0x10) = uVar10;
            *(uint *)(puVar35 + 0x14) = uVar11;
          }
          else {
            uStack_360._0_4_ = uStack_358;
            func_0x04885070(puVar35 + 8,*(long *)(puVar21 + 0x28),*(long *)(puVar21 + 0x26));
            puVar23 = (uint *)CONCAT44(uStack_360._4_4_,(uint)uStack_360);
            puVar43 = (uint *)CONCAT17(uStack_351,
                                       CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
          }
        }
        puVar41 = puStack_280;
        *(long *)puVar25 = *(long *)puVar24;
        *(uint **)(puVar25 + 10) = puStack_238;
        *(uint **)(puVar25 + 0xc) = puVar22;
        LOCK();
        *(long *)(puVar22 + 2) = *(long *)(puVar22 + 2) + 1;
        UNLOCK();
        puVar43 = puVar43 + 0xe;
        uStack_358 = (uint)puVar43;
        uStack_354 = (undefined1)((ulong)puVar43 >> 0x20);
        uStack_353 = (undefined2)((ulong)puVar43 >> 0x28);
        uStack_351 = (undefined1)((ulong)puVar43 >> 0x38);
        plVar14 = *(long **)(puVar28 + 0x22);
        plVar17 = *(long **)(puVar28 + 0x24);
        puVar25 = (uint *)((long)puVar23 + ((long)plVar14 - (long)plVar17));
        puVar24 = puVar25;
        plVar19 = plVar14;
        if ((long)plVar14 - (long)plVar17 != 0) {
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
            *(long *)(puVar24 + 6) = plVar19[3];
            lVar32 = plVar19[2];
            *(long *)(puVar24 + 2) = plVar19[1];
            *(long *)(puVar24 + 4) = lVar32;
            *(undefined2 *)(plVar19 + 1) = 0;
            *(long *)puVar24 = *plVar19;
            uVar9 = *(uint *)((long)plVar19 + 0x2c);
            uVar10 = *(uint *)(plVar19 + 6);
            uVar11 = *(uint *)((long)plVar19 + 0x34);
            puVar24[10] = *(uint *)(plVar19 + 5);
            puVar24[0xb] = uVar9;
            puVar24[0xc] = uVar10;
            puVar24[0xd] = uVar11;
            plVar19[5] = 0;
            plVar19[6] = 0;
            plVar19 = plVar19 + 7;
            puVar24 = puVar24 + 0xe;
            puStack_238 = puVar25;
          } while (plVar19 != plVar17);
          do {
            plVar19 = (long *)plVar14[6];
            uStack_360 = puVar23;
            if (plVar19 == (long *)0x0) {
LAB_06eb90c5:
              bVar3 = *(byte *)(plVar14 + 1);
            }
            else {
              LOCK();
              plVar20 = plVar19 + 1;
              lVar32 = *plVar20;
              *plVar20 = *plVar20 + -1;
              UNLOCK();
              if (lVar32 != 0) goto LAB_06eb90c5;
              (**(code **)(*plVar19 + 0x10))(plVar19);
              func_0x0412c2d0(plVar19);
              bVar3 = *(byte *)(plVar14 + 1);
            }
            puVar23 = uStack_360;
            if ((bVar3 & 1) != 0) {
              func_0x0412a280(plVar14[3],plVar14[1] & 0xfffffffffffffffe);
              puVar23 = uStack_360;
            }
            plVar14 = plVar14 + 7;
          } while (plVar14 != plVar17);
          plVar14 = *(long **)puVar41;
          puVar43 = (uint *)CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358))
                                    );
          puVar25 = puStack_238;
        }
        *(uint **)(puVar28 + 0x22) = puVar25;
        *(uint **)(puVar28 + 0x24) = puVar43;
        lVar32 = *(long *)(puVar28 + 0x26);
        *(long *)(puVar28 + 0x26) = CONCAT17(uStack_349,CONCAT61(uStack_34f,uStack_350));
        uStack_360 = puVar23;
        if (plVar14 != (long *)0x0) {
          func_0x0412a280(plVar14,lVar32 - (long)plVar14);
        }
        goto LAB_06eb9140;
      }
LAB_06ebbbf1:
      func_0x06fb4bd0();
    }
    func_0x06fbfb30();
    puVar22 = puVar41;
    puVar23 = puVar21;
  }
  else {
    plVar17 = (long *)((long)puVar43 - (long)puVar24);
    puVar43 = (uint *)(((long)plVar17 >> 3) * -0x30c30c30c30c30c3 + 1);
    puVar23 = puVar21;
    if (puVar43 < (uint *)0x186186186186187) {
      puVar25 = (uint *)(plVar14 + 0x1b);
      lVar32 = plVar14[0x1d] - (long)puVar24 >> 3;
      puVar24 = (uint *)(lVar32 * -0x6186186186186186);
      puVar28 = puVar43;
      if (puVar43 < puVar24) {
        puVar28 = puVar24;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar32 * -0x30c30c30c30c30c3)) {
        puVar28 = (uint *)0x186186186186186;
      }
      puStack_348 = puVar25;
      if (puVar28 == (uint *)0x0) {
        puVar15 = (undefined8 *)0x0;
LAB_06eb8b98:
        puVar35 = (undefined *)((long)plVar17 + (long)puVar15);
        uStack_358 = (uint)puVar35;
        uStack_354 = (undefined1)((ulong)puVar35 >> 0x20);
        uStack_353 = (undefined2)((ulong)puVar35 >> 0x28);
        uStack_351 = (undefined1)((ulong)puVar35 >> 0x38);
        uStack_360._4_4_ = (undefined4)((ulong)puVar35 >> 0x20);
        puVar37 = puVar15 + (long)puVar28 * 0x15;
        uStack_350 = SUB81(puVar37,0);
        uStack_34f = (undefined6)((ulong)puVar37 >> 8);
        uStack_349 = (undefined1)((ulong)puVar37 >> 0x38);
        puStack_368 = puVar15;
        uStack_360._0_4_ = uStack_358;
        puStack_238 = puVar25;
        func_0x06fb4990(puVar35);
        puVar15 = (undefined8 *)
                  CONCAT17(uStack_351,CONCAT25(uStack_353,CONCAT14(uStack_354,uStack_358)));
        puVar37 = puVar15 + 0x15;
        lVar32 = plVar14[0x1b];
        lVar18 = plVar14[0x1c];
        lVar40 = (lVar32 - lVar18) + CONCAT44(uStack_360._4_4_,(uint)uStack_360);
        if (lVar32 != lVar18) {
          lVar44 = 0;
          puStack_280 = puVar21;
          do {
            uVar30 = ((undefined8 *)(lVar32 + lVar44))[1];
            *(undefined8 *)(lVar40 + lVar44) = *(undefined8 *)(lVar32 + lVar44);
            ((undefined8 *)(lVar40 + lVar44))[1] = uVar30;
            *(undefined8 *)(lVar32 + lVar44) = 0;
            ((undefined8 *)(lVar32 + lVar44))[1] = 0;
            puVar31 = (undefined8 *)(lVar40 + 0x20 + lVar44);
            *puVar31 = 0;
            puVar31[1] = 0;
            puVar31 = (undefined8 *)(lVar40 + 0x10 + lVar44);
            *puVar31 = 0;
            puVar31[1] = 0;
            *(undefined8 *)(lVar40 + 0x30 + lVar44) = 0;
            *(undefined8 *)(lVar40 + 0x28 + lVar44) = *(undefined8 *)(lVar32 + 0x28 + lVar44);
            puVar16 = (undefined4 *)(lVar32 + 0x18 + lVar44);
            uVar5 = puVar16[1];
            uVar6 = puVar16[2];
            uVar7 = puVar16[3];
            puVar2 = (undefined4 *)(lVar40 + 0x18 + lVar44);
            *puVar2 = *puVar16;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            *(undefined2 *)(lVar32 + 0x18 + lVar44) = 0;
            *(undefined8 *)(lVar40 + 0x10 + lVar44) = *(undefined8 *)(lVar32 + 0x10 + lVar44);
            FUN_04167a20(lVar40 + lVar44 + 0x38,lVar44 + lVar32 + 0x38);
            puVar31 = (undefined8 *)(lVar32 + 0x40 + lVar44);
            uVar30 = puVar31[1];
            puVar34 = (undefined8 *)(lVar40 + 0x40 + lVar44);
            *puVar34 = *puVar31;
            puVar34[1] = uVar30;
            puVar31 = (undefined8 *)(lVar32 + 0x50 + lVar44);
            uVar30 = puVar31[1];
            puVar34 = (undefined8 *)(lVar40 + 0x50 + lVar44);
            *puVar34 = *puVar31;
            puVar34[1] = uVar30;
            puVar31 = (undefined8 *)(lVar32 + 0x60 + lVar44);
            uVar30 = puVar31[1];
            puVar34 = (undefined8 *)(lVar40 + 0x60 + lVar44);
            *puVar34 = *puVar31;
            puVar34[1] = uVar30;
            puVar31 = (undefined8 *)(lVar32 + 0x60 + lVar44);
            *puVar31 = 0;
            puVar31[1] = 0;
            *(undefined8 *)(lVar40 + 0x70 + lVar44) = *(undefined8 *)(lVar32 + 0x70 + lVar44);
            puVar31 = (undefined8 *)(lVar32 + 0x78 + lVar44);
            uVar30 = puVar31[1];
            puVar34 = (undefined8 *)(lVar40 + 0x78 + lVar44);
            *puVar34 = *puVar31;
            puVar34[1] = uVar30;
            puVar31 = (undefined8 *)(lVar40 + 0x88 + lVar44);
            *puVar31 = 0;
            puVar31[1] = 0;
            *(undefined8 *)(lVar40 + 0x98 + lVar44) = 0;
            puVar16 = (undefined4 *)(lVar32 + 0x88 + lVar44);
            uVar5 = puVar16[1];
            uVar6 = puVar16[2];
            uVar7 = puVar16[3];
            puVar2 = (undefined4 *)(lVar40 + 0x88 + lVar44);
            *puVar2 = *puVar16;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            *(undefined8 *)(lVar40 + 0x98 + lVar44) = *(undefined8 *)(lVar32 + 0x98 + lVar44);
            puVar31 = (undefined8 *)(lVar32 + 0x88 + lVar44);
            *puVar31 = 0;
            puVar31[1] = 0;
            *(undefined8 *)(lVar32 + 0x98 + lVar44) = 0;
            *(undefined2 *)(lVar40 + 0xa0 + lVar44) = *(undefined2 *)(lVar32 + 0xa0 + lVar44);
            lVar1 = lVar44 + lVar32;
            lVar44 = lVar44 + 0xa8;
          } while (lVar1 + 0xa8 != lVar18);
          do {
            func_0x06fb1ae0(lVar32);
            lVar32 = lVar32 + 0xa8;
          } while (lVar32 != lVar18);
          lVar32 = *(long *)puStack_238;
          puVar21 = puStack_280;
        }
        plVar14[0x1b] = lVar40;
        plVar14[0x1c] = (long)puVar37;
        lVar18 = plVar14[0x1d];
        plVar14[0x1d] = CONCAT17(uStack_349,CONCAT61(uStack_34f,uStack_350));
        if (lVar32 != 0) {
          func_0x0412a280(lVar32,lVar18 - lVar32);
        }
        plVar14[0x1c] = (long)puVar37;
        pbVar27 = (byte *)*puVar15;
        bVar3 = *pbVar27;
        goto joined_r0x06eb8d9e;
      }
      if (puVar28 < (uint *)0x186186186186187) {
        puVar15 = (undefined8 *)
                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar28 * 0xa8);
        if (puVar15 == (undefined8 *)0x0) {
          func_0x0eec74c0((long)puVar28 * 0xa8,0);
          puVar15 = (undefined8 *)0x0;
        }
        goto LAB_06eb8b98;
      }
LAB_06ebbbe7:
      func_0x04882eb0();
LAB_06ebbbec:
      func_0x04882eb0();
      puVar41 = puVar22;
      puVar43 = puVar28;
      puVar21 = puVar23;
      goto LAB_06ebbbf1;
    }
  }
  func_0x06fb4b00();
LAB_06ebbc00:
  uVar30 = func_0x06fbfa60();
  if ((*puStack_380 & 1) != 0) {
    func_0x0412a280(*(long *)(puVar43 + 6),*(ulong *)(puVar43 + 2) & 0xfffffffffffffffe);
  }
  *(uint **)(puVar25 + 0x24) = puVar43;
  plVar14 = plVar17 + 1;
  LOCK();
  lVar32 = *plVar14;
  *plVar14 = *plVar14 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  LOCK();
  lVar32 = *(long *)puVar22;
  *(long *)puVar22 = *(long *)puVar22 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*(long *)puVar23 + 0x10))(puVar23);
    func_0x0412c2d0(puVar23);
  }
  LOCK();
  lVar32 = *(long *)puVar22;
  *(long *)puVar22 = *(long *)puVar22 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*(long *)puVar23 + 0x10))(puVar23);
    func_0x0412c2d0(puVar23);
  }
  if (puStack_278 != (undefined8 *)0x0) {
    (*(code *)puStack_278[1])(&puStack_278);
  }
  if ((bStack_2c0 & 1) != 0) {
    func_0x0412a280(uStack_2b0,
                    CONCAT17(uStack_2b9,CONCAT25(uStack_2bb,CONCAT41(uStack_2bf,bStack_2c0))) &
                    0xfffffffffffffffe);
  }
  func_0x06ebd510(plStack_388);
  uVar30 = func_0x0eee2d70(uVar30);
  puVar21 = puVar43 + 2;
  LOCK();
  lVar32 = *(long *)puVar21;
  *(long *)puVar21 = *(long *)puVar21 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*(long *)puVar43 + 0x10))(puVar43);
    func_0x0412c2d0(puVar43);
  }
  LOCK();
  lVar32 = *plStack_388;
  *plStack_388 = *plStack_388 + -1;
  UNLOCK();
  if (lVar32 == 0) {
    (**(code **)(*(long *)puStack_378 + 0x10))(puStack_378);
    func_0x0412c2d0(puStack_378);
    LOCK();
    lVar32 = *plStack_388;
    *plStack_388 = *plStack_388 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar32 = *plStack_388;
    *plStack_388 = *plStack_388 + -1;
    UNLOCK();
  }
  if (lVar32 == 0) {
    (**(code **)(*(long *)puStack_378 + 0x10))(puStack_378);
    func_0x0412c2d0(puStack_378);
  }
  if (puStack_278 != (undefined8 *)0x0) {
    (*(code *)puStack_278[1])(&puStack_278);
  }
  if ((uStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,
                    CONCAT17(uStack_309,
                             CONCAT16(uStack_30a,
                                      CONCAT15(uStack_30b,CONCAT14(uStack_30c,uStack_310)))) &
                    0xfffffffffffffffe);
  }
  func_0x06ebd510(puStack_230);
  func_0x0eee2d70(uVar30);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



/* ---- referenced strings ----
 * 0x1416b40  breedItems|breed_items
 * 0x147c4a4  [a-zA-Z0-9_.:-]+
 * 0x1494d5d  <any array element>
 */
