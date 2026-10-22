/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3f9300 (ELF vaddr 0xd2f9300)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3f9300, 0d3fa064] [0d3fa070, 0d3fa645] [0d3fa650, 0d3fa68c] [0d3fa690, 0d3fb581] [0d3fba9f, 0d3fbb15] [0d3fbcda, 0d3fbdf6]]
 * Ghidra: FUN_0d3f9300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3f9300(undefined8 param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long **pplVar8;
  code *pcVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plVar15;
  long *plVar16;
  undefined4 *puVar17;
  long *plVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint *puVar27;
  uint *puVar28;
  long **pplVar29;
  ulong uVar30;
  long lVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  long lVar34;
  bool bVar35;
  undefined8 uStack_368;
  undefined1 uStack_349;
  uint *puStack_348;
  byte *pbStack_340;
  long *plStack_338;
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long **pplStack_318;
  long *plStack_2f8;
  byte bStack_2f0;
  undefined5 uStack_2ef;
  undefined2 uStack_2ea;
  undefined1 uStack_2e8;
  undefined5 uStack_2e7;
  undefined2 uStack_2e2;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2b0;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 uStack_2a0;
  undefined4 uStack_29f;
  undefined4 uStack_29b;
  undefined4 uStack_297;
  undefined3 uStack_293;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  byte bStack_278;
  undefined4 uStack_277;
  undefined4 uStack_273;
  undefined4 uStack_26f;
  undefined1 uStack_26b;
  undefined2 uStack_26a;
  undefined1 uStack_268;
  undefined5 uStack_267;
  undefined1 uStack_262;
  undefined1 uStack_261;
  ulong auStack_260 [2];
  undefined4 *puStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined4 *puStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *apuStack_e8 [4];
  undefined **ppuStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_293 = 0;
  uStack_290 = 0;
  uStack_2a8 = CONCAT31((int3)_DAT_01389001,0x28);
  uStack_2a4._1_3_ = (undefined3)_UNK_01389005;
  uStack_2a4 = CONCAT31(uStack_2a4._1_3_,(char)((uint)_DAT_01389001 >> 0x18));
  uStack_2a0 = (undefined1)((uint)_UNK_01389005 >> 0x18);
  uStack_29f = _UNK_01389009;
  uStack_29b = _UNK_0138900d;
  uStack_297 = 0x65636170;
  uStack_2b0 = 0x33f38a0c4b46188b;
  uStack_70 = 0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2ea = 0;
  lStack_78 = 0;
  plStack_2f8 = (long *)&UNK_0f46ead0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_338 = plStack_2f8;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f4670a0;
  plStack_330 = (long *)0x0;
  plStack_2f8 = (long *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_349,&UNK_01254d89);
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
  plVar15[4] = (long)&UNK_0f4670f0;
  plVar15[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar15 + 0x2f) = 1;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  if (plStack_338 == (long *)0x0) {
    plVar22 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_338)(&plStack_338,plVar15 + 0x30);
    plVar22 = plStack_338;
  }
  plStack_338 = (long *)0x0;
  plVar15[0x30] = (long)plVar22;
  puVar27 = (uint *)(plVar15 + 0x12);
  if (plVar18 == (long *)&DAT_0f552018) {
    plVar15[0x15] = 0;
  }
  else {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552030;
        uVar13 = uRam000000000f55202c;
        uVar12 = _DAT_0f552028;
        uVar11 = uRam000000000f552024;
        *puVar27 = _DAT_0f552020;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar11;
        *(undefined4 *)(plVar15 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar27,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar35 = (_DAT_0f552020 & 1) != 0;
      lVar34 = 0xf552021;
      if (bVar35) {
        lVar34 = _DAT_0f552030;
      }
      uVar30 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar35) {
        uVar30 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      FUN_04885120(puVar27,lVar34,uVar30);
    }
    plVar15[0x11] = _DAT_0f552018;
    plVar15[0x15] = 0;
    if (plStack_338 != (long *)0x0) {
      (*(code *)plStack_338[1])(&plStack_338);
    }
  }
  plVar22 = plVar15 + 1;
  if (plStack_2f8 != (long *)0x0) {
    (*(code *)plStack_2f8[1])(&plStack_2f8);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f4671d0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[4] = (long)&UNK_0f467220;
  plVar16[0xe] = (long)(plVar15 + 4);
  plVar16[0xf] = (long)plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  puStack_348 = (uint *)param_1;
  pbStack_340 = (byte *)(plVar15 + 4);
  plStack_338 = plVar16 + 4;
  plStack_330 = plVar16;
  puVar17 = (undefined4 *)func_0x04fb5400(param_1,&uStack_2b0,0);
  plVar23 = *(long **)(puVar17 + 0x24);
  if (plVar23 < *(long **)(puVar17 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 == plVar18) {
LAB_0d3f9664:
      *plVar23 = *plVar18;
      plVar23[5] = (long)(plVar16 + 4);
      plVar23[6] = (long)plVar16;
LAB_0d3f96dd:
      LOCK();
      plVar16[1] = plVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar27 & 1) == 0) {
        plVar23[3] = plVar15[0x14];
        lVar34 = plVar15[0x13];
        plVar23[1] = *(long *)puVar27;
        plVar23[2] = lVar34;
        goto LAB_0d3f9664;
      }
      func_0x04885070(plVar23 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar23 = *plVar18;
      plVar23[5] = (long)plStack_338;
      plVar23[6] = (long)plStack_330;
      plVar16 = plStack_330;
      if (plStack_330 != (long *)0x0) goto LAB_0d3f96dd;
    }
    plVar23 = plVar23 + 7;
    *(long **)(puVar17 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x04fb8b00(puVar17 + 0x22,plVar18,&plStack_338);
  }
  pbVar1 = pbStack_340;
  *(long **)(puVar17 + 0x24) = plVar23;
  uVar11 = *puVar17;
  uVar12 = puVar17[1];
  uVar13 = puVar17[2];
  uVar14 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar16 = plVar18 + 1;
    lVar34 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  plVar18 = plStack_330;
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_330 + 1;
    lVar34 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar18);
    }
  }
  LOCK();
  lVar34 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar34 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar34 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar34 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  if (lVar34 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  puStack_238 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puStack_238 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar24 = _UNK_0145850d;
  uStack_248 = 0x49;
  uStack_240 = 0x44;
  *(undefined8 *)(puStack_238 + 0xc) = _DAT_01458505;
  *(undefined8 *)(puStack_238 + 0xe) = uVar24;
  uVar24 = _UNK_014584fd;
  *(undefined8 *)(puStack_238 + 8) = _DAT_014584f5;
  *(undefined8 *)(puStack_238 + 10) = uVar24;
  uVar24 = _UNK_014584ed;
  *(undefined8 *)(puStack_238 + 4) = _DAT_014584e5;
  *(undefined8 *)(puStack_238 + 6) = uVar24;
  uVar13 = _UNK_014584e1;
  uVar12 = _UNK_014584dd;
  uVar11 = _UNK_014584d9;
  *puStack_238 = _DAT_014584d5;
  puStack_238[1] = uVar11;
  puStack_238[2] = uVar12;
  puStack_238[3] = uVar13;
  puStack_238[0x10] = 0x2e736572;
  *(undefined1 *)(puStack_238 + 0x11) = 0;
  (**(code **)(*(long *)pbVar1 + 0x10))(pbVar1,&uStack_248);
  if ((uStack_248 & 1) != 0) {
    func_0x0412a280(puStack_238,uStack_248 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_2a8 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_293,CONCAT41(uStack_297,uStack_29b._3_1_)),
                    CONCAT44(uStack_2a4,uStack_2a8) & 0xfffffffffffffffe);
  }
  uStack_2e2 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  bStack_2f0 = 0x1a;
  uStack_2ef = 0x7574616566;
  uStack_2ea = 0x6572;
  uStack_2e8 = 0x5f;
  uStack_2e7 = 0x7361657261;
  plStack_2f8 = (long *)0xb27080b1e2c9ccf6;
  plStack_1a8 = (long *)0x0;
  uStack_1a0 = 0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f46eaf8;
  plStack_338 = (long *)0x0;
  plStack_330 = (long *)0x0;
  if (plStack_1a8 == (long *)0x0) {
    plStack_338 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1a8)(&plStack_1a8,&plStack_338);
    plStack_338 = plStack_1a8;
  }
  plStack_1a8 = (long *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_2b0,&UNK_01254d89);
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
  plVar15[4] = (long)&UNK_0f46eb48;
  pplVar29 = (long **)(plVar15 + 0x2e);
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (pplVar29 != &plStack_338) {
    if (plStack_338 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_338)(&plStack_338,pplVar29);
      plVar22 = plStack_338;
    }
    plStack_338 = (long *)0x0;
    *pplVar29 = plVar22;
  }
  puVar27 = (uint *)(plVar15 + 0x12);
  if (plVar18 != (long *)&DAT_0f551f58) {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar15[0x14] = _DAT_0f551f70;
        uVar13 = uRam000000000f551f6c;
        uVar12 = _DAT_0f551f68;
        uVar11 = uRam000000000f551f64;
        *puVar27 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar11;
        *(undefined4 *)(plVar15 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar27,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar35 = (_DAT_0f551f60 & 1) != 0;
      lVar34 = 0xf551f61;
      if (bVar35) {
        lVar34 = _DAT_0f551f70;
      }
      uVar30 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar35) {
        uVar30 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar27,lVar34,uVar30);
    }
  }
  plVar22 = plVar15 + 1;
  plVar15[0x11] = _DAT_0f551f58;
  plVar15[0x15] = 0;
  if (plStack_338 != (long *)0x0) {
    (*(code *)plStack_338[1])(&plStack_338);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f46ec40;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[4] = (long)&UNK_0f46ec90;
  plVar16[0xe] = (long)(plVar15 + 4);
  plVar16[0xf] = (long)plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  plStack_338 = plVar16 + 4;
  plStack_330 = plVar16;
  puVar17 = (undefined4 *)func_0x04fb5400(puStack_348,&plStack_2f8,1);
  plVar23 = *(long **)(puVar17 + 0x24);
  if (plVar23 < *(long **)(puVar17 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 == plVar18) {
LAB_0d3f9be8:
      *plVar23 = *plVar18;
      plVar23[5] = (long)(plVar16 + 4);
      plVar23[6] = (long)plVar16;
LAB_0d3f9c61:
      LOCK();
      plVar16[1] = plVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar27 & 1) == 0) {
        plVar23[3] = plVar15[0x14];
        lVar34 = plVar15[0x13];
        plVar23[1] = *(long *)puVar27;
        plVar23[2] = lVar34;
        goto LAB_0d3f9be8;
      }
      func_0x04885070(plVar23 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar23 = *plVar18;
      plVar23[5] = (long)plStack_338;
      plVar23[6] = (long)plStack_330;
      plVar16 = plStack_330;
      if (plStack_330 != (long *)0x0) goto LAB_0d3f9c61;
    }
    plVar23 = plVar23 + 7;
    *(long **)(puVar17 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x04fb8b00(puVar17 + 0x22,plVar18,&plStack_338);
  }
  pplVar29 = &plStack_338;
  *(long **)(puVar17 + 0x24) = plVar23;
  plVar15[0x16] = 1;
  plVar15[0x17] = -1;
  uVar11 = *puVar17;
  uVar12 = puVar17[1];
  uVar13 = puVar17[2];
  uVar14 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar16 = plVar18 + 1;
    lVar34 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  plVar18 = plStack_330;
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_330 + 1;
    lVar34 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar18);
    }
  }
  LOCK();
  lVar34 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar34 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar34 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar34 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  if (lVar34 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  if (plStack_1a8 != (long *)0x0) {
    (*(code *)plStack_1a8[1])(&plStack_1a8);
  }
  if ((bStack_2f0 & 1) != 0) {
    func_0x0412a280(uStack_2e0,
                    CONCAT26(uStack_2ea,CONCAT51(uStack_2ef,bStack_2f0)) & 0xfffffffffffffffe);
  }
  uStack_1e0 = 0;
  plStack_1e8 = (long *)&UNK_0f46ef30;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f46ecf0;
  plStack_338 = (long *)0x0;
  plStack_330 = (long *)0x0;
  if (plStack_1e8 == (long *)0x0) {
    plStack_338 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1e8)(&plStack_1e8,&plStack_338);
    plStack_338 = plStack_1e8;
  }
  plStack_1e8 = (long *)0x0;
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
  puStack_348 = (uint *)plVar18;
  func_0x04aa75f0(plVar18 + 0xe,&plStack_2f8,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar22 = plVar18 + 0x11;
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
  plVar18[4] = (long)&UNK_0f46ed40;
  pplVar8 = (long **)(plVar18 + 0x2e);
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  *(undefined1 *)(plVar18 + 0x36) = 0;
  if (pplVar8 != pplVar29) {
    if (plStack_338 == (long *)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_338)(&plStack_338,pplVar8);
      plVar16 = plStack_338;
    }
    plStack_338 = (long *)0x0;
    *pplVar8 = plVar16;
  }
  pbVar1 = (byte *)(plVar18 + 4);
  puVar27 = (uint *)(plVar18 + 0x12);
  if (plVar22 != (long *)&DAT_0f552108) {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar18[0x14] = _DAT_0f552120;
        uVar13 = uRam000000000f55211c;
        uVar12 = _DAT_0f552118;
        uVar11 = uRam000000000f552114;
        *puVar27 = _DAT_0f552110;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar11;
        *(undefined4 *)(plVar18 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar27,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar35 = (_DAT_0f552110 & 1) != 0;
      lVar34 = 0xf552111;
      if (bVar35) {
        lVar34 = _DAT_0f552120;
      }
      uVar30 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar35) {
        uVar30 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(puVar27,lVar34,uVar30);
    }
  }
  plVar16 = plVar18 + 1;
  plVar18[0x11] = _DAT_0f552108;
  plVar18[0x15] = 0;
  if (plStack_338 != (long *)0x0) {
    (*(code *)plStack_338[1])(&plStack_338);
  }
  LOCK();
  *plVar16 = *plVar16 + 1;
  UNLOCK();
  plStack_280 = plVar16;
  pbVar19 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar19 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar19 + 8) = 0;
  *(long *)((long)pbVar19 + 0x10) = 0;
  *(undefined **)pbVar19 = &UNK_0f46ee38;
  *(long *)((long)pbVar19 + 0x30) = 0;
  *(long *)((long)pbVar19 + 0x38) = 0;
  *(undefined **)((long)pbVar19 + 0x20) = &UNK_0f46ee88;
  *(byte **)((long)pbVar19 + 0x70) = pbVar1;
  *(long **)((long)pbVar19 + 0x78) = plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  plStack_230 = (long *)((long)pbVar19 + 8);
  puVar6 = (undefined8 *)plVar15[0x1c];
  puVar5 = (undefined8 *)plVar15[0x1b];
  for (puVar32 = puVar5; puVar28 = (uint *)plVar18, pbStack_340 = pbVar19, puVar32 != puVar6;
      puVar32 = puVar32 + 0x15) {
    if ((puVar32[0xf] == 0) && (puVar32[0x10] == -1)) goto LAB_0d3fa3bf;
  }
  if ((undefined8 *)plVar15[0x1d] <= puVar6) {
    plVar16 = (long *)((long)puVar6 - (long)puVar5);
    uVar30 = ((long)plVar16 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar30) goto LAB_0d3fb551;
    puVar28 = (uint *)(plVar15 + 0x1b);
    lVar34 = plVar15[0x1d] - (long)puVar5 >> 3;
    uVar10 = lVar34 * -0x6186186186186186;
    if (uVar30 < uVar10) {
      uVar30 = uVar10;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar34 * -0x30c30c30c30c30c3)) {
      uVar30 = 0x186186186186186;
    }
    pplStack_318 = (long **)puVar28;
    if (uVar30 == 0) {
      plVar23 = (long *)0x0;
LAB_0d3fa178:
      plStack_330 = (long *)((long)plVar16 + (long)plVar23);
      plStack_320 = plVar23 + uVar30 * 0x15;
      plStack_338 = plVar23;
      plStack_328 = plStack_330;
      plStack_288 = (long *)puVar28;
      func_0x0d4cf0d0(plStack_330);
      plVar16 = plStack_328;
      plVar23 = plStack_328 + 0x15;
      lVar34 = plVar15[0x1b];
      lVar7 = plVar15[0x1c];
      lVar31 = (lVar34 - lVar7) + (long)plStack_330;
      if (lVar34 != lVar7) {
        pplVar29 = (long **)0x0;
        do {
          uVar24 = ((undefined8 *)(lVar34 + (long)pplVar29))[1];
          *(undefined8 *)(lVar31 + (long)pplVar29) = *(undefined8 *)(lVar34 + (long)pplVar29);
          ((undefined8 *)(lVar31 + (long)pplVar29))[1] = uVar24;
          *(undefined8 *)(lVar34 + (long)pplVar29) = 0;
          ((undefined8 *)(lVar34 + (long)pplVar29))[1] = 0;
          puVar32 = (undefined8 *)(lVar31 + 0x20 + (long)pplVar29);
          *puVar32 = 0;
          puVar32[1] = 0;
          puVar32 = (undefined8 *)(lVar31 + 0x10 + (long)pplVar29);
          *puVar32 = 0;
          puVar32[1] = 0;
          *(undefined8 *)(lVar31 + 0x30 + (long)pplVar29) = 0;
          *(undefined8 *)(lVar31 + 0x28 + (long)pplVar29) =
               *(undefined8 *)(lVar34 + 0x28 + (long)pplVar29);
          puVar17 = (undefined4 *)(lVar34 + 0x18 + (long)pplVar29);
          uVar11 = puVar17[1];
          uVar12 = puVar17[2];
          uVar13 = puVar17[3];
          puVar3 = (undefined4 *)(lVar31 + 0x18 + (long)pplVar29);
          *puVar3 = *puVar17;
          puVar3[1] = uVar11;
          puVar3[2] = uVar12;
          puVar3[3] = uVar13;
          *(undefined2 *)(lVar34 + 0x18 + (long)pplVar29) = 0;
          *(undefined8 *)(lVar31 + 0x10 + (long)pplVar29) =
               *(undefined8 *)(lVar34 + 0x10 + (long)pplVar29);
          FUN_04167a20((long)pplVar29 + lVar31 + 0x38,(long)pplVar29 + lVar34 + 0x38);
          puVar32 = (undefined8 *)(lVar34 + 0x40 + (long)pplVar29);
          uVar24 = puVar32[1];
          puVar5 = (undefined8 *)(lVar31 + 0x40 + (long)pplVar29);
          *puVar5 = *puVar32;
          puVar5[1] = uVar24;
          puVar32 = (undefined8 *)(lVar34 + 0x50 + (long)pplVar29);
          uVar24 = puVar32[1];
          puVar5 = (undefined8 *)(lVar31 + 0x50 + (long)pplVar29);
          *puVar5 = *puVar32;
          puVar5[1] = uVar24;
          puVar32 = (undefined8 *)(lVar34 + 0x60 + (long)pplVar29);
          uVar24 = puVar32[1];
          puVar5 = (undefined8 *)(lVar31 + 0x60 + (long)pplVar29);
          *puVar5 = *puVar32;
          puVar5[1] = uVar24;
          puVar32 = (undefined8 *)(lVar34 + 0x60 + (long)pplVar29);
          *puVar32 = 0;
          puVar32[1] = 0;
          *(undefined8 *)(lVar31 + 0x70 + (long)pplVar29) =
               *(undefined8 *)(lVar34 + 0x70 + (long)pplVar29);
          puVar32 = (undefined8 *)(lVar34 + 0x78 + (long)pplVar29);
          uVar24 = puVar32[1];
          puVar5 = (undefined8 *)(lVar31 + 0x78 + (long)pplVar29);
          *puVar5 = *puVar32;
          puVar5[1] = uVar24;
          puVar32 = (undefined8 *)(lVar31 + 0x88 + (long)pplVar29);
          *puVar32 = 0;
          puVar32[1] = 0;
          *(undefined8 *)(lVar31 + 0x98 + (long)pplVar29) = 0;
          puVar17 = (undefined4 *)(lVar34 + 0x88 + (long)pplVar29);
          uVar11 = puVar17[1];
          uVar12 = puVar17[2];
          uVar13 = puVar17[3];
          puVar3 = (undefined4 *)(lVar31 + 0x88 + (long)pplVar29);
          *puVar3 = *puVar17;
          puVar3[1] = uVar11;
          puVar3[2] = uVar12;
          puVar3[3] = uVar13;
          *(undefined8 *)(lVar31 + 0x98 + (long)pplVar29) =
               *(undefined8 *)(lVar34 + 0x98 + (long)pplVar29);
          puVar32 = (undefined8 *)(lVar34 + 0x88 + (long)pplVar29);
          *puVar32 = 0;
          puVar32[1] = 0;
          *(undefined8 *)(lVar34 + 0x98 + (long)pplVar29) = 0;
          *(undefined2 *)(lVar31 + 0xa0 + (long)pplVar29) =
               *(undefined2 *)(lVar34 + 0xa0 + (long)pplVar29);
          lVar20 = (long)pplVar29 + lVar34 + 0xa8;
          pplVar29 = pplVar29 + 0x15;
        } while (lVar20 != lVar7);
        do {
          func_0x0d4cade0(lVar34);
          lVar34 = lVar34 + 0xa8;
        } while (lVar34 != lVar7);
        lVar34 = *plStack_288;
      }
      puVar28 = puStack_348;
      plVar15[0x1b] = lVar31;
      plVar15[0x1c] = (long)plVar23;
      lVar7 = plVar15[0x1d];
      plVar15[0x1d] = (long)plStack_320;
      if (lVar34 != 0) {
        func_0x0412a280(lVar34,lVar7 - lVar34);
      }
      plVar15[0x1c] = (long)plVar23;
      pbVar33 = (byte *)*plVar16;
      bVar4 = *pbVar33;
      pbVar19 = pbStack_340;
      goto joined_r0x0d3fa36b;
    }
    if (uVar30 < 0x186186186186187) {
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0xa8);
      if (plVar23 == (long *)0x0) {
        func_0x0eec74c0(uVar30 * 0xa8,0);
        plVar23 = (long *)0x0;
      }
      goto LAB_0d3fa178;
    }
LAB_0d3fb547:
    func_0x04882eb0();
LAB_0d3fb54c:
    func_0x0d4cf310();
    plVar18 = (long *)puVar28;
LAB_0d3fb551:
    uStack_368 = func_0x0d4cf240();
    if ((*pbVar1 & 1) != 0) {
      func_0x0412a280(plVar16[3],plVar16[1] & 0xfffffffffffffffe);
    }
    pplVar29[0x12] = plVar16;
    plVar22 = plVar18 + 1;
    LOCK();
    lVar34 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
    LOCK();
    lVar34 = *(long *)pbVar19;
    *(long *)pbVar19 = *(long *)pbVar19 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
    LOCK();
    puVar27 = *(uint **)pbVar19;
    *(long *)pbVar19 = *(long *)pbVar19 + -1;
    UNLOCK();
    if (puVar27 == (uint *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
    if (plStack_228 != (long *)0x0) {
      (*(code *)plStack_228[1])(&plStack_228);
    }
    if ((bStack_2f0 & 1) == 0) goto LAB_0d3fbd8e;
    func_0x0412a280(uStack_2e0,
                    CONCAT26(uStack_2ea,CONCAT51(uStack_2ef,bStack_2f0)) & 0xfffffffffffffffe);
    uStack_368 = func_0x0eee2d70(uStack_368);
    pbVar1 = pbStack_340;
    LOCK();
    lVar34 = *plStack_230;
    *plStack_230 = *plStack_230 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*(long *)pbStack_340 + 0x10))(pbStack_340);
      func_0x0412c2d0(pbVar1);
    }
    puVar27 = (uint *)0xffffffffffffffff;
    LOCK();
    lVar34 = *plStack_280;
    *plStack_280 = *plStack_280 + -1;
    UNLOCK();
    if (lVar34 == 0) goto LAB_0d3fbd97;
    LOCK();
    puVar27 = (uint *)*plStack_280;
    *plStack_280 = *plStack_280 + -1;
    UNLOCK();
    if (puVar27 == (uint *)0x0) goto LAB_0d3fbdbf;
    while (plStack_1e8 == (long *)0x0) {
LAB_0d3fbd8e:
      while( true ) {
        func_0x0eee2d70(uStack_368);
LAB_0d3fbd97:
        puVar28 = puStack_348;
        (**(code **)(*(long *)puStack_348 + 0x10))(puStack_348);
        func_0x0412c2d0(puVar28);
        LOCK();
        lVar34 = *plStack_280 + (long)puVar27;
        puVar27 = (uint *)*plStack_280;
        *plStack_280 = lVar34;
        UNLOCK();
        if (puVar27 != (uint *)0x0) break;
LAB_0d3fbdbf:
        puVar27 = puStack_348;
        (**(code **)(*(long *)puStack_348 + 0x10))(puStack_348);
        func_0x0412c2d0(puVar27);
        if (plStack_1e8 != (long *)0x0) goto LAB_0d3fbde2;
      }
    }
LAB_0d3fbde2:
    (*(code *)plStack_1e8[1])(&plStack_1e8);
    func_0x0eee2d70(uStack_368);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  func_0x0d4cf0d0(puVar6);
  plVar15[0x1c] = (long)(puVar6 + 0x15);
  plVar15[0x1c] = (long)(puVar6 + 0x15);
  pbVar33 = (byte *)*puVar6;
  bVar4 = *pbVar33;
joined_r0x0d3fa36b:
  if ((bVar4 & 1) == 0) {
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
  uVar13 = _UNK_01494d69;
  uVar12 = _UNK_01494d65;
  uVar11 = _UNK_01494d61;
  *(undefined4 *)pbVar33 = _DAT_01494d5d;
  *(undefined4 *)(pbVar33 + 4) = uVar11;
  *(undefined4 *)(pbVar33 + 8) = uVar12;
  *(undefined4 *)(pbVar33 + 0xc) = uVar13;
  pbVar33[0xf] = 0x65;
  pbVar33[0x10] = 0x6e;
  pbVar33[0x11] = 0x74;
  pbVar33[0x12] = 0x3e;
  pbVar33[0x13] = 0;
  lVar34 = plVar15[0x1c];
  puVar32 = (undefined8 *)(lVar34 + -0xa8);
  *(char *)(lVar34 + -7) = (char)plVar15[0x10];
  *(undefined8 *)(lVar34 + -0x30) = 0;
  *(undefined8 *)(lVar34 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar34 + -8) = 0;
LAB_0d3fa3bf:
  plVar16 = (long *)puVar32[0x12];
  if (plVar16 < (long *)puVar32[0x13]) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar22) {
      if ((*puVar27 & 1) == 0) {
        plVar16[3] = plVar18[0x14];
        lVar34 = plVar18[0x13];
        plVar16[1] = *(long *)puVar27;
        plVar16[2] = lVar34;
      }
      else {
        func_0x04885070(plVar16 + 1,*(long *)((long)puVar28 + 0xa0),*(long *)((long)puVar28 + 0x98))
        ;
      }
    }
    *plVar16 = *plVar22;
    plVar16[5] = (long)((long)pbVar19 + 0x20);
    plVar16[6] = (long)pbVar19;
    LOCK();
    *(long *)((long)pbVar19 + 8) = *(long *)((long)pbVar19 + 8) + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    puVar32[0x12] = plVar16;
  }
  else {
    plVar16 = (long *)((long)plVar16 - puVar32[0x11]);
    plVar15 = (long *)(((long)plVar16 >> 3) * 0x6db6db6db6db6db7 + 1);
    if ((long *)0x492492492492492 < plVar15) goto LAB_0d3fb54c;
    lVar34 = (long)puVar32[0x13] - puVar32[0x11] >> 3;
    plVar23 = (long *)(lVar34 * -0x2492492492492492);
    if (plVar15 < plVar23) {
      plVar15 = plVar23;
    }
    pplStack_318 = (long **)(puVar32 + 0x11);
    if (0x249249249249248 < (ulong)(lVar34 * 0x6db6db6db6db6db7)) {
      plVar15 = (long *)0x492492492492492;
    }
    plStack_288 = (long *)pplStack_318;
    if (plVar15 == (long *)0x0) {
      plVar23 = (long *)0x0;
    }
    else {
      if ((long *)0x492492492492492 < plVar15) goto LAB_0d3fb547;
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar15 * 0x38);
      if (plVar23 == (long *)0x0) {
        func_0x0eec74c0((long)plVar15 * 0x38,0);
        plVar23 = (long *)0x0;
      }
    }
    plVar2 = (long *)((long)plVar23 + (long)plVar16);
    plStack_320 = plVar23 + (long)plVar15 * 7;
    *(undefined8 *)((long)plVar23 + (long)(plVar16 + 2)) = 0;
    ((undefined8 *)((long)plVar23 + (long)(plVar16 + 2)))[1] = 0;
    *(undefined8 *)((long)plVar23 + (long)plVar16) = 0;
    ((undefined8 *)((long)plVar23 + (long)plVar16))[1] = 0;
    *(undefined8 *)((long)plVar23 + (long)(plVar16 + 4)) = 0;
    plStack_328 = plVar2;
    plStack_338 = plVar23;
    plStack_330 = plVar2;
    if (plVar2 != plVar22) {
      if ((*puVar27 & 1) == 0) {
        *(long *)((long)plVar23 + (long)(plVar16 + 3)) = plVar18[0x14];
        uVar11 = *(undefined4 *)((long)plVar18 + 0x94);
        lVar34 = plVar18[0x13];
        uVar12 = *(undefined4 *)((long)plVar18 + 0x9c);
        *(uint *)((long)plVar23 + (long)(plVar16 + 1)) = *puVar27;
        *(undefined4 *)((long)plVar23 + (long)plVar16 + 0xc) = uVar11;
        *(int *)((long)plVar23 + (long)(plVar16 + 2)) = (int)lVar34;
        *(undefined4 *)((long)plVar23 + (long)plVar16 + 0x14) = uVar12;
      }
      else {
        func_0x04885070((uint *)((long)plVar23 + (long)(plVar16 + 1)),
                        *(long *)((long)puStack_348 + 0xa0),*(long *)((long)puStack_348 + 0x98));
      }
    }
    puVar28 = puStack_348;
    *plVar2 = *plVar22;
    plVar2[5] = (long)pbVar19 + 0x20;
    plVar2[6] = (long)pbStack_340;
    LOCK();
    *(long *)((long)pbStack_340 + 8) = *(long *)((long)pbStack_340 + 8) + 1;
    UNLOCK();
    plStack_328 = plStack_328 + 7;
    puVar26 = (undefined8 *)puVar32[0x11];
    puVar6 = (undefined8 *)puVar32[0x12];
    puVar5 = (undefined8 *)((long)plStack_330 + ((long)puVar26 - (long)puVar6));
    puVar21 = puVar5;
    puVar25 = puVar26;
    if ((long)puVar26 - (long)puVar6 != 0) {
      do {
        puVar21[2] = 0;
        puVar21[3] = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21[4] = 0;
        puVar21[3] = puVar25[3];
        uVar24 = puVar25[2];
        puVar21[1] = puVar25[1];
        puVar21[2] = uVar24;
        *(undefined2 *)(puVar25 + 1) = 0;
        *puVar21 = *puVar25;
        uVar24 = puVar25[6];
        puVar21[5] = puVar25[5];
        puVar21[6] = uVar24;
        puVar25[5] = 0;
        puVar25[6] = 0;
        puVar25 = puVar25 + 7;
        puVar21 = puVar21 + 7;
      } while (puVar25 != puVar6);
      do {
        plVar15 = (long *)puVar26[6];
        if (plVar15 == (long *)0x0) {
LAB_0d3fa674:
          bVar4 = *(byte *)(puVar26 + 1);
        }
        else {
          LOCK();
          plVar18 = plVar15 + 1;
          lVar34 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar34 != 0) goto LAB_0d3fa674;
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
          bVar4 = *(byte *)(puVar26 + 1);
        }
        if ((bVar4 & 1) != 0) {
          func_0x0412a280(puVar26[3],puVar26[1] & 0xfffffffffffffffe);
        }
        puVar26 = puVar26 + 7;
      } while (puVar26 != puVar6);
      puVar26 = (undefined8 *)*plStack_288;
    }
    plVar16 = plStack_328;
    puVar32[0x11] = puVar5;
    puVar32[0x12] = plStack_328;
    lVar34 = puVar32[0x13];
    puVar32[0x13] = plStack_320;
    if (puVar26 != (undefined8 *)0x0) {
      func_0x0412a280(puVar26,lVar34 - (long)puVar26);
    }
  }
  pbVar19 = pbStack_340;
  puVar32[0x12] = plVar16;
  uVar11 = *(undefined4 *)puVar32;
  uVar12 = *(undefined4 *)((long)puVar32 + 4);
  uVar13 = *(undefined4 *)(puVar32 + 1);
  uVar14 = *(undefined4 *)((long)puVar32 + 0xc);
  if (puVar32[1] != 0) {
    LOCK();
    plVar15 = (long *)(puVar32[1] + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = *(long **)((long)puVar28 + 0x78);
  *(undefined4 *)((long)puVar28 + 0x70) = uVar11;
  *(undefined4 *)((long)puVar28 + 0x74) = uVar12;
  *(undefined4 *)((long)puVar28 + 0x78) = uVar13;
  *(undefined4 *)((long)puVar28 + 0x7c) = uVar14;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar18 = plVar15 + 1;
    lVar34 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)((long)puVar28 + 0x80) = *(undefined1 *)((long)puVar32 + 0xa1);
  LOCK();
  lVar34 = *plStack_230;
  *plStack_230 = *plStack_230 + -1;
  UNLOCK();
  if (lVar34 == 0) {
    (**(code **)(*(long *)pbVar19 + 0x10))(pbVar19);
    func_0x0412c2d0(pbVar19);
    LOCK();
    lVar34 = *plStack_280;
    *plStack_280 = *plStack_280 + -1;
    UNLOCK();
    if (lVar34 != 0) goto LAB_0d3fa78b;
LAB_0d3fa992:
    plVar15 = plStack_280;
    (**(code **)(*(long *)puVar28 + 0x10))(puVar28);
    func_0x0412c2d0(puVar28);
    LOCK();
    lVar34 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar34 = *plStack_280;
    *plStack_280 = *plStack_280 + -1;
    UNLOCK();
    if (lVar34 == 0) goto LAB_0d3fa992;
LAB_0d3fa78b:
    LOCK();
    lVar34 = *plStack_280;
    *plStack_280 = *plStack_280 + -1;
    UNLOCK();
  }
  if (lVar34 == 0) {
    (**(code **)(*(long *)puVar28 + 0x10))(puVar28);
    func_0x0412c2d0(puVar28);
  }
  if (plStack_1e8 != (long *)0x0) {
    (*(code *)plStack_1e8[1])(&plStack_1e8);
  }
  uStack_2a0 = 0;
  uStack_29f = 0;
  uStack_29b = 0;
  uStack_297 = 0;
  uStack_293 = 0;
  uStack_290 = 0;
  uStack_2a8 = 0x6165660e;
  uStack_2a4 = 0x65727574;
  uStack_2b0 = 0x838775b28877fe91;
  uStack_b0 = 0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2ea = 0;
  lStack_b8 = 0;
  plStack_2f8 = (long *)&UNK_0f46ef48;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  plStack_338 = plStack_2f8;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f467280;
  plStack_330 = (long *)0x0;
  plStack_2f8 = (long *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_349,&UNK_01254d89);
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
  plVar15[4] = (long)&UNK_0f4672d0;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (plStack_338 == (long *)0x0) {
    plVar15[0x3a] = 0;
    plVar18 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_338)(&plStack_338,plVar15 + 0x2e);
    plVar18 = plStack_338;
    plStack_338 = (long *)0x0;
    plVar15[0x2e] = (long)plVar18;
    plVar15[0x3a] = 0;
    if ((*(byte *)(plVar15 + 0x12) & 1) == 0) {
      plVar18 = (long *)0x0;
    }
    else {
      func_0x0412a280(plVar15[0x14],plVar15[0x12] & 0xfffffffffffffffe);
      plVar18 = plStack_338;
    }
  }
  pbVar19 = (byte *)(plVar15 + 0x12);
  pbVar19[0] = 0x22;
  uVar13 = _UNK_01207d03;
  uVar12 = _UNK_01207cff;
  uVar11 = _UNK_01207cfb;
  pbVar19[1] = 0x66;
  *(undefined4 *)((long)plVar15 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar15 + 0x96) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x9a) = uVar12;
  *(undefined4 *)((long)plVar15 + 0x9e) = uVar13;
  *(undefined4 *)((long)plVar15 + 0xa2) = 0;
  *(undefined2 *)((long)plVar15 + 0xa6) = 0;
  plVar15[0x11] = 0xf6c39062bb9edf3;
  plVar15[0x15] = 0;
  if (plVar18 != (long *)0x0) {
    (*(code *)plVar18[1])(&plStack_338);
  }
  plVar18 = plVar15 + 1;
  if (plStack_2f8 != (long *)0x0) {
    (*(code *)plStack_2f8[1])(&plStack_2f8);
  }
  LOCK();
  *plVar18 = *plVar18 + 1;
  UNLOCK();
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar27 = (uint *)(plVar15 + 4);
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0f4673b0;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[4] = (long)&UNK_0f467400;
  plVar22[0xe] = (long)puVar27;
  plVar22[0xf] = (long)plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  pbStack_340 = pbVar19;
  plStack_338 = plVar22 + 4;
  plStack_330 = plVar22;
  puVar17 = (undefined4 *)func_0x0d455bf0(pbVar1,&uStack_2b0);
  pbVar19 = (byte *)(plVar15 + 0x11);
  pbVar33 = *(byte **)(puVar17 + 0x24);
  if (pbVar33 < *(byte **)(puVar17 + 0x26)) {
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
    puStack_348 = puVar27;
    if (pbVar33 != pbVar19) {
      if ((*pbStack_340 & 1) == 0) {
        *(undefined8 *)(pbVar33 + 0x18) = *(undefined8 *)(pbStack_340 + 0x10);
        uVar24 = *(undefined8 *)(pbStack_340 + 8);
        *(undefined8 *)(pbVar33 + 8) = *(undefined8 *)pbStack_340;
        *(undefined8 *)(pbVar33 + 0x10) = uVar24;
      }
      else {
        pbStack_340 = pbVar19;
        func_0x04885070(pbVar33 + 8,plVar15[0x14],plVar15[0x13]);
        pbVar19 = pbStack_340;
      }
    }
    *(undefined8 *)pbVar33 = *(undefined8 *)pbVar19;
    *(long **)(pbVar33 + 0x28) = plVar22 + 4;
    *(long **)(pbVar33 + 0x30) = plVar22;
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
    pbVar33 = pbVar33 + 0x38;
    *(byte **)(puVar17 + 0x24) = pbVar33;
    puVar27 = puStack_348;
  }
  else {
    pbVar33 = (byte *)func_0x0d457bc0(puVar17 + 0x22,pbVar19,&plStack_338);
  }
  *(byte **)(puVar17 + 0x24) = pbVar33;
  uVar11 = *puVar17;
  uVar12 = puVar17[1];
  uVar13 = puVar17[2];
  uVar14 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar16 = plVar22 + 1;
    lVar34 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  plVar22 = plStack_330;
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_330 + 1;
    lVar34 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar34 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar34 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar34 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar34 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  if (lVar34 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  apuStack_e8[0] = &UNK_0f46ef70;
  ppuStack_c8 = apuStack_e8;
  pplVar29 = (long **)(plVar15 + 0x36);
  pplStack_318 = &plStack_338;
  plStack_338 = (long *)&UNK_0f46ef70;
  lVar34 = 0x20;
  if (pplVar29 == &plStack_338) {
LAB_0d3fada0:
    (**(code **)((long)*pplStack_318 + lVar34))(pplStack_318);
  }
  else {
    pplVar8 = (long **)plVar15[0x3a];
    if (pplVar8 == pplVar29) {
      plStack_2f8 = (long *)&UNK_0f46ef70;
      pplStack_318 = (long **)0x0;
      (*(code *)(*pplVar8)[3])(pplVar8,&plStack_338);
      (**(code **)(*(long *)plVar15[0x3a] + 0x20))();
      plVar15[0x3a] = 0;
      pplStack_318 = &plStack_338;
      (*(code *)plStack_2f8[3])(&plStack_2f8,pplVar29);
      (*(code *)plStack_2f8[4])(&plStack_2f8);
      plVar15[0x3a] = (long)pplVar29;
      if (pplStack_318 != &plStack_338) goto LAB_0d3fad95;
      goto LAB_0d3fada0;
    }
    plVar15[0x36] = (long)&UNK_0f46ef70;
    pplStack_318 = pplVar8;
    plVar15[0x3a] = (long)pplVar29;
    if (pplVar8 == &plStack_338) goto LAB_0d3fada0;
LAB_0d3fad95:
    lVar34 = 0x28;
    if (pplStack_318 != (long **)0x0) goto LAB_0d3fada0;
  }
  bStack_278 = 0x2a;
  uStack_277 = _DAT_014c1133;
  uStack_273 = _UNK_014c1137;
  uStack_26f = _UNK_014c113b;
  uStack_26b = (undefined1)_UNK_014c113f;
  uStack_26a = 0x7020;
  uStack_268 = 0x6c;
  uStack_267 = 0x2e64656361;
  uStack_262 = 0;
  (**(code **)(*(long *)puVar27 + 0x10))(puVar27,&bStack_278);
  if ((bStack_278 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_261,CONCAT16(uStack_262,CONCAT51(uStack_267,uStack_268))),
                    CONCAT35((undefined3)uStack_273,CONCAT41(uStack_277,bStack_278)) &
                    0xfffffffffffffffe);
  }
  if (ppuStack_c8 == apuStack_e8) {
    lVar34 = 0x20;
  }
  else {
    lVar34 = 0x28;
    if (ppuStack_c8 == (undefined **)0x0) goto joined_r0x0d3faf3d;
  }
  (**(code **)(*ppuStack_c8 + lVar34))();
joined_r0x0d3faf3d:
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((uStack_2a8 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_293,CONCAT41(uStack_297,uStack_29b._3_1_)),
                    CONCAT44(uStack_2a4,uStack_2a8) & 0xfffffffffffffffe);
  }
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  bStack_2f0 = 0x1e;
  uStack_2ef = 0x5f61657261;
  uStack_2ea = 0x6964;
  uStack_2e8 = 0x6d;
  uStack_2e7 = 0x6f69736e65;
  uStack_2e2 = 0x736e;
  plStack_2f8 = (long *)0x3518291517f6fad2;
  uStack_220 = 0;
  plStack_228 = (long *)&UNK_0f46f1e8;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f46f000;
  plStack_338 = (long *)0x0;
  plStack_330 = (long *)0x0;
  if (plStack_228 == (long *)0x0) {
    plStack_338 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_228)(&plStack_228,&plStack_338);
    plStack_338 = plStack_228;
  }
  plStack_228 = (long *)0x0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_2b0,&UNK_01254d89);
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
  plVar15[4] = (long)&UNK_0f46f050;
  pplVar29 = (long **)(plVar15 + 0x2e);
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (pplVar29 != &plStack_338) {
    if (plStack_338 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_338)(&plStack_338,pplVar29);
      plVar22 = plStack_338;
    }
    plStack_338 = (long *)0x0;
    *pplVar29 = plVar22;
  }
  puVar27 = (uint *)(plVar15 + 0x12);
  if (plVar18 != (long *)&DAT_0f551f58) {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar15[0x14] = _DAT_0f551f70;
        uVar13 = uRam000000000f551f6c;
        uVar12 = _DAT_0f551f68;
        uVar11 = uRam000000000f551f64;
        *puVar27 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar11;
        *(undefined4 *)(plVar15 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar27,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar35 = (_DAT_0f551f60 & 1) != 0;
      lVar34 = 0xf551f61;
      if (bVar35) {
        lVar34 = _DAT_0f551f70;
      }
      uVar30 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar35) {
        uVar30 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar27,lVar34,uVar30);
    }
  }
  plVar22 = plVar15 + 1;
  plVar15[0x11] = _DAT_0f551f58;
  plVar15[0x15] = 0;
  puStack_348 = puVar27;
  if (plStack_338 != (long *)0x0) {
    (*(code *)plStack_338[1])(&plStack_338);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f46f148;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[4] = (long)&UNK_0f46f198;
  plVar16[0xe] = (long)(plVar15 + 4);
  plVar16[0xf] = (long)plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  pbStack_340 = (byte *)(plVar15 + 4);
  plStack_338 = plVar16 + 4;
  plStack_330 = plVar16;
  puVar17 = (undefined4 *)func_0x0d455bf0(pbVar1,&plStack_2f8);
  plVar23 = *(long **)(puVar17 + 0x24);
  if (plVar23 < *(long **)(puVar17 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar18) {
      if ((*puStack_348 & 1) == 0) {
        plVar23[3] = *(long *)(puStack_348 + 4);
        lVar34 = *(long *)(puStack_348 + 2);
        plVar23[1] = *(long *)puStack_348;
        plVar23[2] = lVar34;
      }
      else {
        func_0x04885070(plVar23 + 1,plVar15[0x14],plVar15[0x13]);
      }
    }
    *plVar23 = *plVar18;
    plVar23[5] = (long)(plVar16 + 4);
    plVar23[6] = (long)plVar16;
    LOCK();
    plVar16[1] = plVar16[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar17 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x0d457bc0(puVar17 + 0x22,plVar18,&plStack_338);
  }
  pbVar1 = pbStack_340;
  *(long **)(puVar17 + 0x24) = plVar23;
  uVar11 = *puVar17;
  uVar12 = puVar17[1];
  uVar13 = puVar17[2];
  uVar14 = puVar17[3];
  if (*(long *)(puVar17 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar17 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar16 = plVar18 + 1;
    lVar34 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  plVar18 = plStack_330;
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_330 + 1;
    lVar34 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar18);
    }
  }
  LOCK();
  lVar34 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar34 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar34 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar34 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  if (lVar34 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  puStack_250 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_250 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar24 = _UNK_014dc187;
  auStack_260[0] = 0x31;
  auStack_260[1] = 0x2c;
  *(ulong *)(puStack_250 + 7) = CONCAT44(_UNK_014dc183,_DAT_014dc17f);
  *(undefined8 *)(puStack_250 + 9) = uVar24;
  uVar24 = CONCAT44(_DAT_014dc17f,_UNK_014dc17b);
  *(undefined8 *)(puStack_250 + 4) = _DAT_014dc173;
  *(undefined8 *)(puStack_250 + 6) = uVar24;
  uVar13 = _UNK_014dc16f;
  uVar12 = _UNK_014dc16b;
  uVar11 = _UNK_014dc167;
  *puStack_250 = _DAT_014dc163;
  puStack_250[1] = uVar11;
  puStack_250[2] = uVar12;
  puStack_250[3] = uVar13;
  *(undefined1 *)(puStack_250 + 0xb) = 0;
  uVar24 = (**(code **)(*(long *)pbVar1 + 0x10))(pbVar1,auStack_260);
  if ((auStack_260[0] & 1) != 0) {
    func_0x0412a280(puStack_250,auStack_260[0] & 0xfffffffffffffffe);
  }
  if (plStack_228 != (long *)0x0) {
    (*(code *)plStack_228[1])(&plStack_228);
  }
  if ((bStack_2f0 & 1) != 0) {
    func_0x0412a280(uStack_2e0,
                    CONCAT26(uStack_2ea,CONCAT51(uStack_2ef,bStack_2f0)) & 0xfffffffffffffffe);
  }
  uStack_120 = 0;
  puStack_128 = &UNK_0f46f200;
  func_0x0d3fbe00(uVar24,0,0,&puStack_128);
  if (puStack_128 != (undefined *)0x0) {
    (**(code **)(puStack_128 + 8))(&puStack_128);
  }
  uStack_160 = 0;
  puStack_168 = &UNK_0f46f218;
  func_0x0d3fbe00(uVar24,1,1,&puStack_168);
  if (puStack_168 != (undefined *)0x0) {
    (**(code **)(puStack_168 + 8))(&puStack_168);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x1389001  ratio_of_empty_space
 * 0x14584d5  Ratio of a Chunk to be filled with empty space rather than features.
 * 0x14584e5   to be filled with empty space rather than features.
 * 0x14584f5  th empty space rather than features.
 * 0x1458505  ather than features.
 * 0x1494d5d  <any array element>
 * 0x14c1133  Feature to be placed.
 * 0x14dc163  Dimensions (size) of the associated Feature.
 * 0x14dc173  ) of the associated Feature.
 * 0x14dc17f  ociated Feature.
 */
