/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3fe880 (ELF vaddr 0xd2fe880)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3fe880, 0d400b91]]
 * Ghidra: FUN_0d3fe880
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3fe880(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint *puVar2;
  long **pplVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long **pplVar21;
  bool bVar22;
  long *plStack_378;
  long *plStack_370;
  ulong uStack_368;
  long **pplStack_358;
  long *plStack_338;
  byte bStack_330;
  undefined6 uStack_32f;
  undefined1 uStack_329;
  undefined1 uStack_328;
  undefined6 uStack_327;
  undefined1 uStack_321;
  undefined1 uStack_320;
  undefined6 uStack_31f;
  undefined1 uStack_319;
  undefined8 uStack_318;
  long *plStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2b8;
  byte bStack_2b0;
  undefined6 uStack_2af;
  undefined1 uStack_2a9;
  undefined1 uStack_2a8;
  undefined4 uStack_2a7;
  undefined2 uStack_2a3;
  undefined1 uStack_2a1;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  byte *pbStack_290;
  ulong uStack_288;
  byte bStack_280;
  undefined4 uStack_27f;
  undefined4 uStack_27b;
  undefined4 uStack_277;
  undefined1 uStack_273;
  undefined2 uStack_272;
  undefined1 uStack_270;
  undefined5 uStack_26f;
  undefined2 uStack_26a;
  undefined8 uStack_268;
  long *plStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *apuStack_118 [4];
  undefined **ppuStack_f8;
  undefined *apuStack_e8 [4];
  undefined **ppuStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_320 = 0;
  uStack_31f = 0;
  uStack_319 = 0;
  uStack_318 = 0;
  bStack_330 = 0x1c;
  uStack_32f = 0x736563616c70;
  uStack_329 = 0x5f;
  uStack_328 = 0x66;
  uStack_327 = 0x657275746165;
  uStack_321 = 0;
  plStack_338 = (long *)0x5f4748520f33cd82;
  uStack_70 = 0;
  puStack_2f0 = (undefined *)0x0;
  lStack_78 = 0;
  plStack_2f8 = (long *)&UNK_0f46f2d8;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  plStack_378 = plStack_2f8;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f467920;
  plStack_370 = (long *)0x0;
  plStack_2f8 = (long *)0x0;
  plVar10[4] = (long)&UNK_0f2ccd78;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  func_0x04aa75f0(plVar10 + 0xe,&uStack_288,&UNK_01254d89);
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0xffffffff;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[4] = (long)&UNK_0f467970;
  plVar10[0x2e] = 0;
  plVar10[0x2f] = 0;
  if (plStack_378 == (long *)0x0) {
    plVar10[0x3a] = 0;
    plVar15 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_378)(&plStack_378,plVar10 + 0x2e);
    plVar15 = plStack_378;
    plStack_378 = (long *)0x0;
    plVar10[0x2e] = (long)plVar15;
    plVar10[0x3a] = 0;
    if ((*(byte *)(plVar10 + 0x12) & 1) == 0) {
      plVar15 = (long *)0x0;
    }
    else {
      func_0x0412a280(plVar10[0x14],plVar10[0x12] & 0xfffffffffffffffe);
      plVar15 = plStack_378;
    }
  }
  pbVar1 = (byte *)(plVar10 + 0x12);
  pbVar1[0] = 0x22;
  uVar7 = _UNK_01207d03;
  uVar6 = _UNK_01207cff;
  uVar5 = _UNK_01207cfb;
  pbVar1[1] = 0x66;
  *(undefined4 *)((long)plVar10 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar10 + 0x96) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x9a) = uVar6;
  *(undefined4 *)((long)plVar10 + 0x9e) = uVar7;
  *(undefined4 *)((long)plVar10 + 0xa2) = 0;
  *(undefined2 *)((long)plVar10 + 0xa6) = 0;
  plVar10[0x11] = 0xf6c39062bb9edf3;
  plVar10[0x15] = 0;
  if (plVar15 != (long *)0x0) {
    (*(code *)plVar15[1])(&plStack_378);
  }
  plVar15 = plVar10 + 1;
  if (plStack_2f8 != (long *)0x0) {
    (*(code *)plStack_2f8[1])(&plStack_2f8);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  pbStack_290 = (byte *)param_2;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar13 = plVar10 + 4;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0f467a50;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[4] = (long)&UNK_0f467aa0;
  plVar11[0xe] = (long)plVar13;
  plVar11[0xf] = (long)plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  plStack_378 = plVar11 + 4;
  plStack_370 = plVar11;
  puVar12 = (undefined4 *)func_0x0503c1c0(param_1,&plStack_338,1);
  plVar14 = plVar10 + 0x11;
  plVar16 = *(long **)(puVar12 + 0x24);
  if (plVar16 < *(long **)(puVar12 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 == plVar14) {
LAB_0d3febca:
      *plVar16 = *plVar14;
      plVar16[5] = (long)(plVar11 + 4);
      plVar16[6] = (long)plVar11;
LAB_0d3fec36:
      LOCK();
      plVar11[1] = plVar11[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbVar1 & 1) == 0) {
        plVar16[3] = plVar10[0x14];
        lVar19 = plVar10[0x13];
        plVar16[1] = *(long *)pbVar1;
        plVar16[2] = lVar19;
        goto LAB_0d3febca;
      }
      func_0x04885070(plVar16 + 1,plVar10[0x14],plVar10[0x13]);
      *plVar16 = *plVar14;
      plVar16[5] = (long)plStack_378;
      plVar16[6] = (long)plStack_370;
      plVar11 = plStack_370;
      if (plStack_370 != (long *)0x0) goto LAB_0d3fec36;
    }
    plVar16 = plVar16 + 7;
    *(long **)(puVar12 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x0503f8c0(puVar12 + 0x22,plVar14,&plStack_378);
  }
  *(long **)(puVar12 + 0x24) = plVar16;
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar11 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar11 = *plVar11 + 1;
    UNLOCK();
  }
  plVar11 = (long *)plVar10[0xf];
  *(undefined4 *)(plVar10 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
  *(undefined4 *)(plVar10 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar14 = plVar11 + 1;
    lVar19 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_370;
  *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_370 + 1;
    lVar19 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar11);
    }
  }
  LOCK();
  lVar19 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
    LOCK();
    lVar19 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar19 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
  }
  apuStack_e8[0] = &UNK_0f46f300;
  ppuStack_c8 = apuStack_e8;
  pplVar21 = (long **)(plVar10 + 0x36);
  pplStack_358 = &plStack_378;
  plStack_378 = (long *)&UNK_0f46f300;
  lVar19 = 0x20;
  if (pplVar21 == &plStack_378) {
LAB_0d3fee2e:
    (**(code **)((long)*pplStack_358 + lVar19))();
  }
  else {
    pplVar3 = (long **)plVar10[0x3a];
    if (pplVar3 == pplVar21) {
      plStack_2f8 = (long *)&UNK_0f46f300;
      pplStack_358 = (long **)0x0;
      (*(code *)(*pplVar3)[3])(pplVar3,&plStack_378);
      (**(code **)(*(long *)plVar10[0x3a] + 0x20))();
      plVar10[0x3a] = 0;
      pplStack_358 = &plStack_378;
      (*(code *)plStack_2f8[3])(&plStack_2f8,pplVar21);
      (*(code *)plStack_2f8[4])(&plStack_2f8);
      plVar10[0x3a] = (long)pplVar21;
      if (pplStack_358 != &plStack_378) goto LAB_0d3fee23;
      goto LAB_0d3fee2e;
    }
    plVar10[0x36] = (long)&UNK_0f46f300;
    pplStack_358 = pplVar3;
    plVar10[0x3a] = (long)pplVar21;
    if (pplVar3 == &plStack_378) goto LAB_0d3fee2e;
LAB_0d3fee23:
    lVar19 = 0x28;
    if (pplStack_358 != (long **)0x0) goto LAB_0d3fee2e;
  }
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  (**(code **)(*plVar13 + 0x10))(plVar13,&uStack_1f8);
  if ((uStack_1f8 & 1) != 0) {
    func_0x0412a280(uStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
  }
  if (ppuStack_c8 == apuStack_e8) {
    lVar19 = 0x20;
LAB_0d3ff087:
    (**(code **)(*ppuStack_c8 + lVar19))();
  }
  else {
    lVar19 = 0x28;
    if (ppuStack_c8 != (undefined **)0x0) goto LAB_0d3ff087;
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_330 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_319,CONCAT61(uStack_31f,uStack_320)),
                    CONCAT17(uStack_329,CONCAT61(uStack_32f,bStack_330)) & 0xfffffffffffffffe);
  }
  uStack_318 = 0;
  bStack_330 = 0x2c;
  uStack_32f = (undefined6)_DAT_01219d32;
  uStack_329 = (undefined1)((ulong)_DAT_01219d32 >> 0x30);
  uStack_328 = (undefined1)((ulong)_DAT_01219d32 >> 0x38);
  uStack_327 = (undefined6)_UNK_01219d3a;
  uStack_321 = 0x74;
  uStack_320 = 0x6f;
  uStack_31f = 0x726f6f6c665f;
  uStack_319 = 0;
  plStack_338 = (long *)0xc621eaf29351f224;
  uStack_b0 = 0;
  puStack_2f0 = (undefined *)0x0;
  lStack_b8 = 0;
  plStack_2f8 = (long *)&UNK_0f46f380;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  plStack_378 = plStack_2f8;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f467b00;
  plStack_370 = (long *)0x0;
  plStack_2f8 = (long *)0x0;
  plVar10[4] = (long)&UNK_0f2ccd78;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  func_0x04aa75f0(plVar10 + 0xe,&uStack_288,&UNK_01254d89);
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar15 = plVar10 + 0x11;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0xffffffff;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[4] = (long)&UNK_0f467b50;
  plVar10[0x2f] = 0;
  plVar10[0x30] = 0;
  plVar10[0x2e] = (long)(plVar10 + 0x2f);
  pplVar21 = (long **)(plVar10 + 0x32);
  plVar10[0x32] = 0;
  plVar10[0x33] = 0;
  if (pplVar21 != &plStack_378) {
    if (plStack_378 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_378)(&plStack_378,pplVar21);
      plVar11 = plStack_378;
    }
    plStack_378 = (long *)0x0;
    *pplVar21 = plVar11;
  }
  puVar2 = (uint *)(plVar10 + 0x12);
  if (plVar15 != (long *)&DAT_0f551f88) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar10[0x14] = _DAT_0f551fa0;
        uVar7 = uRam000000000f551f9c;
        uVar6 = _DAT_0f551f98;
        uVar5 = uRam000000000f551f94;
        *puVar2 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar10 + 0x94) = uVar5;
        *(undefined4 *)(plVar10 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar10 + 0x9c) = uVar7;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar22 = (_DAT_0f551f90 & 1) != 0;
      lVar19 = 0xf551f91;
      if (bVar22) {
        lVar19 = _DAT_0f551fa0;
      }
      uVar17 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar22) {
        uVar17 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puVar2,lVar19,uVar17);
    }
  }
  plVar10[0x11] = _DAT_0f551f88;
  plVar10[0x15] = 0;
  if (plStack_378 != (long *)0x0) {
    (*(code *)plStack_378[1])(&plStack_378);
  }
  plVar11 = plVar10 + 1;
  if (plStack_2f8 != (long *)0x0) {
    (*(code *)plStack_2f8[1])(&plStack_2f8);
  }
  LOCK();
  *plVar11 = *plVar11 + 1;
  UNLOCK();
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f467c30;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[4] = (long)&UNK_0f467c80;
  plVar13[0xe] = (long)(plVar10 + 4);
  plVar13[0xf] = (long)plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  plStack_378 = plVar13 + 4;
  plStack_370 = plVar13;
  plStack_240 = plVar10 + 4;
  puVar12 = (undefined4 *)func_0x0503c1c0(param_1,&plStack_338,0);
  plVar14 = *(long **)(puVar12 + 0x24);
  if (plVar14 < *(long **)(puVar12 + 0x26)) {
    plVar14[2] = 0;
    plVar14[3] = 0;
    *plVar14 = 0;
    plVar14[1] = 0;
    plVar14[4] = 0;
    if (plVar14 == plVar15) {
LAB_0d3ff259:
      *plVar14 = *plVar15;
      plVar14[5] = (long)(plVar13 + 4);
      plVar14[6] = (long)plVar13;
LAB_0d3ff2d8:
      LOCK();
      plVar13[1] = plVar13[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar2 & 1) == 0) {
        plVar14[3] = plVar10[0x14];
        lVar19 = plVar10[0x13];
        plVar14[1] = *(long *)puVar2;
        plVar14[2] = lVar19;
        goto LAB_0d3ff259;
      }
      func_0x04885070(plVar14 + 1,plVar10[0x14],plVar10[0x13]);
      *plVar14 = *plVar15;
      plVar14[5] = (long)plStack_378;
      plVar14[6] = (long)plStack_370;
      plVar13 = plStack_370;
      if (plStack_370 != (long *)0x0) goto LAB_0d3ff2d8;
    }
    plVar14 = plVar14 + 7;
    *(long **)(puVar12 + 0x24) = plVar14;
  }
  else {
    plVar14 = (long *)func_0x0503f8c0(puVar12 + 0x22,plVar15,&plStack_378);
  }
  plVar15 = plStack_240;
  *(long **)(puVar12 + 0x24) = plVar14;
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar10[0xf];
  *(undefined4 *)(plVar10 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
  *(undefined4 *)(plVar10 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar19 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  plVar13 = plStack_370;
  *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_370 + 1;
    lVar19 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar19 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
    LOCK();
    lVar19 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar19 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
  }
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_218);
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,uStack_218 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_330 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_319,CONCAT61(uStack_31f,uStack_320)),
                    CONCAT17(uStack_329,CONCAT61(uStack_32f,bStack_330)) & 0xfffffffffffffffe);
  }
  apuStack_118[0] = &UNK_0f46f3a8;
  ppuStack_f8 = apuStack_118;
  if (_DAT_0f71ffb8 == 3) {
    puVar20 = (undefined8 *)0xf71ff80;
LAB_0d3ff4f6:
    plStack_378 = (long *)*puVar20;
    plStack_370 = (long *)0x0;
    uVar18 = puVar20[1];
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar4 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar19 = lVar4 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
      if (lVar19 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar19,8);
      }
      *plVar10 = lVar4;
      memcpy(plVar10 + 1,uVar18 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar10 + lVar4 + 8) = 0;
      uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_368 = 0;
    uVar17 = puVar20[2];
    plStack_370 = (long *)uVar18;
    if ((uVar17 & 0x80000000000000) != 0) {
      lVar4 = *(long *)((uVar17 & 0xff00ffffffffffff) - 8);
      lVar19 = lVar4 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
      if (lVar19 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar19,8);
      }
      *plVar10 = lVar4;
      memcpy(plVar10 + 1,uVar17 & 0xff00ffffffffffff,lVar4);
      *(undefined1 *)((long)plVar10 + lVar4 + 8) = 0;
      uVar17 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
  else {
    if (_DAT_0f71fff8 == 3) {
      puVar20 = (undefined8 *)0xf71ffc0;
      goto LAB_0d3ff4f6;
    }
    if (_DAT_0f720038 == 3) {
      puVar20 = (undefined8 *)0xf720000;
      goto LAB_0d3ff4f6;
    }
    if (_DAT_0f720078 == 3) {
      puVar20 = (undefined8 *)0xf720040;
      goto LAB_0d3ff4f6;
    }
    if (_DAT_0f7200b8 == 3) {
      puVar20 = (undefined8 *)0xf720080;
      goto LAB_0d3ff4f6;
    }
    if (_DAT_0f7200f8 == 3) {
      puVar20 = (undefined8 *)0xf7200c0;
      goto LAB_0d3ff4f6;
    }
    plStack_378 = (long *)0x0;
    plStack_370 = (long *)0x0;
    uStack_368 = 0;
    uVar17 = uStack_368;
  }
  uStack_368 = uVar17;
  cVar9 = FUN_04fa7a10(pbStack_290,&plStack_378);
  if ((uStack_368 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_368 & 0xff00ffffffffffff) - 8);
  }
  uStack_368 = 0;
  if (((ulong)plStack_370 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_370 & 0xff00ffffffffffff) - 8)
    ;
  }
  if (cVar9 == '\0') {
    uStack_2a3 = 0;
    uStack_2a1 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    bStack_2b0 = 0x18;
    uStack_2af = 0x697274736964;
    uStack_2a9 = 0x62;
    uStack_2a8 = 0x75;
    uStack_2a7 = 0x6e6f6974;
    uStack_2b8 = 0xf20cc28b740dcf3;
    bStack_280 = 0;
    uStack_27f = 0xd3fe6;
    uStack_27b._0_3_ = 0;
    uStack_27b._3_1_ = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_272 = 0;
    bStack_330 = 0;
    uStack_32f = 0xd3fe6;
    uStack_329 = 0;
    uStack_328 = 0;
    uStack_327 = 0;
    uStack_321 = 0;
    uStack_288 = 0;
    plStack_338 = (long *)&UNK_0f467fb0;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x200,0);
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0f467ce0;
    plStack_2f8 = (long *)0x0;
    puStack_2f0 = (undefined *)0x0;
    if (plStack_338 == (long *)0x0) {
      plStack_2f8 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_338)(&plStack_338,&plStack_2f8);
      plStack_2f8 = plStack_338;
    }
    plStack_338 = (long *)0x0;
    plStack_378 = (long *)0x0;
    plStack_370 = (long *)0x0;
    plVar10[4] = (long)&UNK_0f2ccd78;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    func_0x04aa75f0(plVar10 + 0xe,&uStack_198,&UNK_01254d89);
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plVar15 = plVar10 + 0x11;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0xffffffff;
    plVar10[0x26] = 0;
    plVar10[0x27] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[4] = (long)&UNK_0f467de8;
    plVar10[0x2e] = 0;
    plVar10[0x2f] = 0;
    *(undefined1 *)(plVar10 + 0x36) = 0;
    if ((long **)(plVar10 + 0x2e) != &plStack_378) {
      plStack_378 = (long *)0x0;
      plVar10[0x2e] = 0;
    }
    plVar11 = plVar10 + 4;
    pbVar1 = (byte *)(plVar10 + 0x12);
    if (plVar15 == (long *)&DAT_0f552108) {
LAB_0d3ffa17:
      plVar10[0x11] = _DAT_0f552108;
      plVar10[0x15] = 0;
    }
    else {
      if ((DAT_0f552110 & 1) == 0) {
        plVar10[0x14] = _DAT_0f552120;
        lVar19 = _DAT_0f552118;
        *(ulong *)pbVar1 = CONCAT71(uRam000000000f552111,DAT_0f552110);
        plVar10[0x13] = lVar19;
        goto LAB_0d3ffa17;
      }
      func_0x04885070(pbVar1,_DAT_0f552120,_DAT_0f552118);
      plVar10[0x11] = _DAT_0f552108;
      plVar10[0x15] = 0;
      if (plStack_378 != (long *)0x0) {
        (*(code *)plStack_378[1])(&plStack_378);
      }
    }
    plVar10[4] = (long)&UNK_0f467d30;
    plVar10[0x38] = 0;
    plVar10[0x39] = 0;
    if (plStack_2f8 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_2f8)(&plStack_2f8,plVar10 + 0x38);
      plVar13 = plStack_2f8;
    }
    plVar14 = plVar10 + 1;
    plVar10[0x38] = (long)plVar13;
    pbStack_290 = pbVar1;
    if (plStack_338 != (long *)0x0) {
      (*(code *)plStack_338[1])(&plStack_338);
    }
    LOCK();
    *plVar14 = *plVar14 + 1;
    UNLOCK();
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0f467f10;
    plVar13[6] = 0;
    plVar13[7] = 0;
    plVar13[4] = (long)&UNK_0f467f60;
    plVar13[0xe] = (long)plVar11;
    plVar13[0xf] = (long)plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    plStack_378 = plVar13 + 4;
    plStack_370 = plVar13;
    puVar12 = (undefined4 *)func_0x0503c1c0(param_1,&uStack_2b8,1);
    plVar16 = *(long **)(puVar12 + 0x24);
    if (plVar16 < *(long **)(puVar12 + 0x26)) {
      plVar16[2] = 0;
      plVar16[3] = 0;
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[4] = 0;
      if (plVar16 == plVar15) {
LAB_0d3ffcf8:
        *plVar16 = *plVar15;
        plVar16[5] = (long)(plVar13 + 4);
        plVar16[6] = (long)plVar13;
LAB_0d3fff21:
        LOCK();
        plVar13[1] = plVar13[1] + 1;
        UNLOCK();
      }
      else {
        if ((*pbStack_290 & 1) == 0) {
          plVar16[3] = *(long *)(pbStack_290 + 0x10);
          lVar19 = *(long *)(pbStack_290 + 8);
          plVar16[1] = *(long *)pbStack_290;
          plVar16[2] = lVar19;
          goto LAB_0d3ffcf8;
        }
        func_0x04885070(plVar16 + 1,plVar10[0x14],plVar10[0x13]);
        *plVar16 = *plVar15;
        plVar16[5] = (long)plStack_378;
        plVar16[6] = (long)plStack_370;
        plVar13 = plStack_370;
        if (plStack_370 != (long *)0x0) goto LAB_0d3fff21;
      }
      plVar16 = plVar16 + 7;
      *(long **)(puVar12 + 0x24) = plVar16;
    }
    else {
      plVar16 = (long *)func_0x0503f8c0(puVar12 + 0x22,plVar15,&plStack_378);
    }
    *(long **)(puVar12 + 0x24) = plVar16;
    uVar5 = *puVar12;
    uVar6 = puVar12[1];
    uVar7 = puVar12[2];
    uVar8 = puVar12[3];
    if (*(long *)(puVar12 + 2) != 0) {
      LOCK();
      plVar15 = (long *)(*(long *)(puVar12 + 2) + 8);
      *plVar15 = *plVar15 + 1;
      UNLOCK();
    }
    plVar15 = (long *)plVar10[0xf];
    *(undefined4 *)(plVar10 + 0xe) = uVar5;
    *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
    *(undefined4 *)(plVar10 + 0xf) = uVar7;
    *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar13 = plVar15 + 1;
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = plStack_370;
    *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_370 + 1;
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar15);
      }
    }
    LOCK();
    lVar19 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
      LOCK();
      lVar19 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar19 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
    if (uStack_288 != 0) {
      (**(code **)(uStack_288 + 8))(&uStack_288);
    }
    if ((bStack_2b0 & 1) != 0) {
      func_0x0412a280(uStack_2a0,
                      CONCAT17(uStack_2a9,CONCAT61(uStack_2af,bStack_2b0)) & 0xfffffffffffffffe);
    }
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_238);
    if ((uStack_238 & 1) == 0) goto LAB_0d400a10;
    func_0x0412a280(uStack_228,uStack_238 & 0xfffffffffffffffe);
    if (ppuStack_f8 == apuStack_118) goto LAB_0d400086;
LAB_0d400a29:
    lVar19 = 0x28;
    if (ppuStack_f8 == (undefined **)0x0) {
      return;
    }
  }
  else {
    plVar10 = (long *)func_0x0d4013f0(param_1,1,&UNK_0d3fd9e0,&UNK_0149c57a);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_198);
    if ((uStack_198 & 1) != 0) {
      func_0x0412a280(uStack_188,uStack_198 & 0xfffffffffffffffe);
    }
    uStack_2a0 = 0;
    uStack_298 = 0;
    bStack_2b0 = 0x1c;
    uStack_2af = 0x657474616373;
    uStack_2a9 = 0x72;
    uStack_2a8 = 0x5f;
    uStack_2a7 = 0x6e616863;
    uStack_2a3 = 0x6563;
    uStack_2a1 = 0;
    uStack_2b8 = 0x4831a3f067250dd0;
    bStack_280 = 0x40;
    uStack_27f = 0xd3fda;
    uStack_27b = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_272 = 0;
    bStack_330 = 0x40;
    uStack_32f = 0xd3fda;
    uStack_329 = 0;
    uStack_328 = 0;
    uStack_327 = 0;
    uStack_321 = 0;
    uStack_288 = 0;
    plStack_338 = (long *)&UNK_0f468428;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x200,0);
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0f4681d0;
    plStack_2f8 = (long *)0x0;
    puStack_2f0 = (undefined *)0x0;
    if (plStack_338 == (long *)0x0) {
      plStack_2f8 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_338)(&plStack_338,&plStack_2f8);
      plStack_2f8 = plStack_338;
    }
    plStack_338 = (long *)0x0;
    plStack_378 = (long *)0x0;
    plStack_370 = (long *)0x0;
    plVar10[4] = (long)&UNK_0f2ccd78;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    func_0x04aa75f0(plVar10 + 0xe,&uStack_1b8,&UNK_01254d89);
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plVar15 = plVar10 + 0x11;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0xffffffff;
    plVar10[0x26] = 0;
    plVar10[0x27] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[4] = (long)&UNK_0f4682d8;
    plVar10[0x2e] = 0;
    plVar10[0x2f] = 0;
    *(undefined1 *)(plVar10 + 0x36) = 0;
    if ((long **)(plVar10 + 0x2e) != &plStack_378) {
      plStack_378 = (long *)0x0;
      plVar10[0x2e] = 0;
    }
    plVar11 = plVar10 + 4;
    pbVar1 = (byte *)(plVar10 + 0x12);
    if (plVar15 == (long *)&DAT_0f552108) {
LAB_0d3ffb5f:
      plVar10[0x11] = _DAT_0f552108;
      plVar10[0x15] = 0;
    }
    else {
      if ((DAT_0f552110 & 1) == 0) {
        plVar10[0x14] = _DAT_0f552120;
        lVar19 = _DAT_0f552118;
        *(ulong *)pbVar1 = CONCAT71(uRam000000000f552111,DAT_0f552110);
        plVar10[0x13] = lVar19;
        goto LAB_0d3ffb5f;
      }
      func_0x04885070(pbVar1,_DAT_0f552120,_DAT_0f552118);
      plVar10[0x11] = _DAT_0f552108;
      plVar10[0x15] = 0;
      if (plStack_378 != (long *)0x0) {
        (*(code *)plStack_378[1])(&plStack_378);
      }
    }
    plVar10[4] = (long)&UNK_0f468220;
    plVar10[0x38] = 0;
    plVar10[0x39] = 0;
    if (plStack_2f8 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_2f8)(&plStack_2f8,plVar10 + 0x38);
      plVar13 = plStack_2f8;
    }
    plVar14 = plVar10 + 1;
    plVar10[0x38] = (long)plVar13;
    pbStack_290 = pbVar1;
    if (plStack_338 != (long *)0x0) {
      (*(code *)plStack_338[1])(&plStack_338);
    }
    LOCK();
    *plVar14 = *plVar14 + 1;
    UNLOCK();
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0f468388;
    plVar13[6] = 0;
    plVar13[7] = 0;
    plVar13[4] = (long)&UNK_0f4683d8;
    plVar13[0xe] = (long)plVar11;
    plVar13[0xf] = (long)plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    plStack_378 = plVar13 + 4;
    plStack_370 = plVar13;
    puVar12 = (undefined4 *)func_0x0503c1c0(param_1,&uStack_2b8,0);
    plVar16 = *(long **)(puVar12 + 0x24);
    if (plVar16 < *(long **)(puVar12 + 0x26)) {
      plVar16[2] = 0;
      plVar16[3] = 0;
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[4] = 0;
      if (plVar16 == plVar15) {
LAB_0d3ffeb1:
        *plVar16 = *plVar15;
        plVar16[5] = (long)(plVar13 + 4);
        plVar16[6] = (long)plVar13;
LAB_0d40010f:
        LOCK();
        plVar13[1] = plVar13[1] + 1;
        UNLOCK();
      }
      else {
        if ((*pbStack_290 & 1) == 0) {
          plVar16[3] = *(long *)(pbStack_290 + 0x10);
          lVar19 = *(long *)(pbStack_290 + 8);
          plVar16[1] = *(long *)pbStack_290;
          plVar16[2] = lVar19;
          goto LAB_0d3ffeb1;
        }
        func_0x04885070(plVar16 + 1,plVar10[0x14],plVar10[0x13]);
        *plVar16 = *plVar15;
        plVar16[5] = (long)plStack_378;
        plVar16[6] = (long)plStack_370;
        plVar13 = plStack_370;
        if (plStack_370 != (long *)0x0) goto LAB_0d40010f;
      }
      plVar16 = plVar16 + 7;
      *(long **)(puVar12 + 0x24) = plVar16;
    }
    else {
      plVar16 = (long *)func_0x0503f8c0(puVar12 + 0x22,plVar15,&plStack_378);
    }
    *(long **)(puVar12 + 0x24) = plVar16;
    uVar5 = *puVar12;
    uVar6 = puVar12[1];
    uVar7 = puVar12[2];
    uVar8 = puVar12[3];
    if (*(long *)(puVar12 + 2) != 0) {
      LOCK();
      plVar15 = (long *)(*(long *)(puVar12 + 2) + 8);
      *plVar15 = *plVar15 + 1;
      UNLOCK();
    }
    plVar15 = (long *)plVar10[0xf];
    *(undefined4 *)(plVar10 + 0xe) = uVar5;
    *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
    *(undefined4 *)(plVar10 + 0xf) = uVar7;
    *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar13 = plVar15 + 1;
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = plStack_370;
    *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_370 + 1;
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar15);
      }
    }
    LOCK();
    lVar19 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
      LOCK();
      lVar19 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar19 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
    }
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
    if (uStack_288 != 0) {
      (**(code **)(uStack_288 + 8))(&uStack_288);
    }
    if ((bStack_2b0 & 1) != 0) {
      func_0x0412a280(uStack_2a0,
                      CONCAT17(uStack_2a9,CONCAT61(uStack_2af,bStack_2b0)) & 0xfffffffffffffffe);
    }
    uStack_2b8 = 0;
    bStack_2b0 = 0;
    uStack_2af = 0;
    uStack_2a9 = 0;
    uStack_2a8 = 0;
    uStack_2a7 = 0;
    uStack_2a3 = 0;
    uStack_2a1 = 0;
    (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_2b8);
    if ((uStack_2b8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_2a1,CONCAT25(uStack_2a3,CONCAT41(uStack_2a7,uStack_2a8))),
                      uStack_2b8 & 0xfffffffffffffffe);
    }
    plVar10 = (long *)func_0x0d4013f0(param_1,0,&UNK_0d3fdb00,&UNK_01338bce);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_1b8);
    if ((uStack_1b8 & 1) != 0) {
      func_0x0412a280(uStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
    }
    uStack_26a = 0;
    uStack_268 = 0;
    bStack_280 = 0x2a;
    uStack_27f = _DAT_0144001d;
    uStack_27b = _UNK_01440021;
    uStack_277 = _UNK_01440025;
    uStack_273 = (undefined1)_UNK_01440029;
    uStack_272 = 0x6c61;
    uStack_270 = 0x5f;
    uStack_26f = 0x726564726f;
    uStack_288 = 0x4e2afead9c2428f1;
    bStack_330 = 0xf0;
    uStack_32f = 0xd3fda;
    uStack_329 = 0;
    uStack_328 = 0;
    uStack_327 = 0;
    uStack_321 = 0;
    puStack_2f0 = &UNK_0d3fdaf0;
    uStack_2e8 = 0;
    plStack_338 = (long *)0x0;
    plStack_2f8 = (long *)&UNK_0f468620;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x1b0,0);
    }
    plStack_378 = plStack_2f8;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0f468450;
    plStack_370 = (long *)puStack_2f0;
    uStack_368 = uStack_2e8;
    plStack_2f8 = (long *)0x0;
    plVar10[4] = (long)&UNK_0f2ccd78;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    func_0x04aa75f0(plVar10 + 0xe,&uStack_1d8,&UNK_01254d89);
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0xffffffff;
    plVar10[0x26] = 0;
    plVar10[0x27] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[4] = (long)&UNK_0f4684a0;
    plVar10[0x2e] = 0;
    plVar10[0x2f] = 0;
    if (plStack_378 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_378)(&plStack_378,plVar10 + 0x2e);
      plVar15 = plStack_378;
    }
    plVar11 = plVar10 + 1;
    plVar10[0x2e] = (long)plVar15;
    if (plStack_2f8 != (long *)0x0) {
      (*(code *)plStack_2f8[1])(&plStack_2f8);
    }
    LOCK();
    *plVar11 = *plVar11 + 1;
    UNLOCK();
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    plVar13 = plVar10 + 4;
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&UNK_0f468580;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar15[4] = (long)&UNK_0f4685d0;
    plVar15[0xe] = (long)plVar13;
    plVar15[0xf] = (long)plVar10;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    plStack_378 = plVar15 + 4;
    plStack_370 = plVar15;
    puVar12 = (undefined4 *)func_0x0503c1c0(param_1,&uStack_288,0);
    plVar14 = plVar10 + 0x11;
    plVar16 = *(long **)(puVar12 + 0x24);
    if (plVar16 < *(long **)(puVar12 + 0x26)) {
      plVar16[2] = 0;
      plVar16[3] = 0;
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[4] = 0;
      if (plVar16 == plVar14) {
LAB_0d4005b8:
        *plVar16 = *plVar14;
        plVar16[5] = (long)(plVar15 + 4);
        plVar16[6] = (long)plVar15;
LAB_0d400624:
        LOCK();
        plVar15[1] = plVar15[1] + 1;
        UNLOCK();
      }
      else {
        if ((*(byte *)(plVar10 + 0x12) & 1) == 0) {
          plVar16[3] = plVar10[0x14];
          lVar19 = plVar10[0x13];
          plVar16[1] = plVar10[0x12];
          plVar16[2] = lVar19;
          goto LAB_0d4005b8;
        }
        func_0x04885070(plVar16 + 1,plVar10[0x14],plVar10[0x13]);
        *plVar16 = *plVar14;
        plVar16[5] = (long)plStack_378;
        plVar16[6] = (long)plStack_370;
        plVar15 = plStack_370;
        if (plStack_370 != (long *)0x0) goto LAB_0d400624;
      }
      plVar16 = plVar16 + 7;
      *(long **)(puVar12 + 0x24) = plVar16;
    }
    else {
      plVar16 = (long *)func_0x0503f8c0(puVar12 + 0x22,plVar14,&plStack_378);
    }
    *(long **)(puVar12 + 0x24) = plVar16;
    uVar5 = *puVar12;
    uVar6 = puVar12[1];
    uVar7 = puVar12[2];
    uVar8 = puVar12[3];
    if (*(long *)(puVar12 + 2) != 0) {
      LOCK();
      plVar15 = (long *)(*(long *)(puVar12 + 2) + 8);
      *plVar15 = *plVar15 + 1;
      UNLOCK();
    }
    plVar15 = (long *)plVar10[0xf];
    *(undefined4 *)(plVar10 + 0xe) = uVar5;
    *(undefined4 *)((long)plVar10 + 0x74) = uVar6;
    *(undefined4 *)(plVar10 + 0xf) = uVar7;
    *(undefined4 *)((long)plVar10 + 0x7c) = uVar8;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar14 = plVar15 + 1;
      lVar19 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = plStack_370;
    *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_370 + 1;
      lVar19 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar15);
      }
    }
    LOCK();
    lVar19 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
      LOCK();
      lVar19 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar19 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
    }
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
    if (plStack_338 != (long *)0x0) {
      (*(code *)plStack_338[1])(&plStack_338);
    }
    if ((bStack_280 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_26a,CONCAT51(uStack_26f,uStack_270)),
                      CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,bStack_280)) &
                      0xfffffffffffffffe);
    }
    plStack_2f8 = (long *)0x0;
    puStack_2f0 = (undefined *)0x0;
    uStack_2e8 = 0;
    (**(code **)(*plVar13 + 0x10))(plVar13,&plStack_2f8);
    if (((ulong)plStack_2f8 & 1) != 0) {
      func_0x0412a280(uStack_2e8,(ulong)plStack_2f8 & 0xfffffffffffffffe);
    }
    plVar10 = (long *)func_0x0d4013f0(param_1,0,&UNK_0d3fdf90,&UNK_0133d2bf);
    plStack_338 = (long *)0x0;
    bStack_330 = 0;
    uStack_32f = 0;
    uStack_329 = 0;
    uStack_328 = 0;
    uStack_327 = 0;
    uStack_321 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&plStack_338);
    if (((ulong)plStack_338 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_321,CONCAT61(uStack_327,uStack_328)),
                      (ulong)plStack_338 & 0xfffffffffffffffe);
    }
    plVar10 = (long *)func_0x0d4013f0(param_1,0,&UNK_0d3fe2c0,&UNK_01444400);
    uStack_288 = 0;
    bStack_280 = 0;
    uStack_27f = 0;
    uStack_27b._0_3_ = 0;
    uStack_27b._3_1_ = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_272 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_288);
    if ((uStack_288 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_272,CONCAT15(uStack_273,CONCAT41(uStack_277,uStack_27b._3_1_))
                              ),uStack_288 & 0xfffffffffffffffe);
    }
    plVar10 = (long *)func_0x0d4013f0(param_1,0,&UNK_0d3fe460,&UNK_01491a16);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_1d8);
    if ((uStack_1d8 & 1) != 0) {
      func_0x0412a280(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
    }
    plVar10 = (long *)func_0x0d401a60(param_1,&UNK_0d3fdc60,&UNK_0133d2bf);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_138);
    if ((uStack_138 & 1) != 0) {
      func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
    }
    plVar10 = (long *)func_0x0d401a60(param_1,&UNK_0d3fdd70,&UNK_01444400);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_158);
    if ((uStack_158 & 1) != 0) {
      func_0x0412a280(uStack_148,uStack_158 & 0xfffffffffffffffe);
    }
    plVar10 = (long *)func_0x0d401a60(param_1,&UNK_0d3fde80,&UNK_01491a16);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_178);
    if ((uStack_178 & 1) != 0) {
      func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
    }
    plStack_370 = (long *)0x0;
    plStack_378 = (long *)&UNK_0f46f428;
    pplVar21 = (long **)(param_1 + 0xd0);
    if (pplVar21 == &plStack_378) {
LAB_0d400a10:
      if (ppuStack_f8 != apuStack_118) goto LAB_0d400a29;
    }
    else {
      if ((*pplVar21 == (long *)0x0) ||
         ((*(code *)(*pplVar21)[1])(pplVar21), plStack_378 != (long *)0x0)) {
        (*(code *)*plStack_378)(&plStack_378,pplVar21);
        *pplVar21 = plStack_378;
        goto LAB_0d400a10;
      }
      *pplVar21 = (long *)0x0;
      if (ppuStack_f8 != apuStack_118) goto LAB_0d400a29;
    }
LAB_0d400086:
    lVar19 = 0x20;
  }
  (**(code **)(*ppuStack_f8 + lVar19))();
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x1219d32  project_input_to_floor
 * 0x144001d  coordinate_eval_order
 */
