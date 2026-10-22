/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4ed60f0 (ELF vaddr 0x4dd60f0)
 * Label: callee2-of:0x49eacd0
 * Body:  [[04ed60f0, 04ed7577] [04ed7580, 04ed7b8d] [04ed7b90, 04ed7bcd] [04ed7bd0, 04ed88b2] [04ed90a4, 04ed9176] [04ed917b, 04ed9211]]
 * Ghidra: FUN_04ed60f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04ed60f0(byte *param_1,long *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  long **pplVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  long **pplVar27;
  long **pplVar28;
  bool bVar29;
  undefined8 uStack_618;
  long *plStack_608;
  long **pplStack_600;
  long **pplStack_5f8;
  long *plStack_5f0;
  long **pplStack_5e8;
  long *plStack_5c8;
  byte bStack_5c0;
  undefined4 uStack_5bf;
  undefined2 uStack_5bb;
  undefined1 uStack_5b9;
  undefined1 uStack_5b8;
  undefined2 uStack_5b7;
  undefined1 uStack_5b5;
  undefined1 uStack_5b4;
  undefined2 uStack_5b3;
  undefined1 uStack_5b1;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  undefined8 uStack_5a8;
  long **pplStack_588;
  byte *pbStack_580;
  undefined1 uStack_571;
  long *plStack_570;
  long alStack_568 [4];
  long *plStack_548;
  long **pplStack_530;
  ulong uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  byte *pbStack_408;
  undefined8 uStack_400;
  byte bStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined2 uStack_3ef;
  undefined5 uStack_3ed;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  long alStack_3c8 [4];
  long *plStack_3a8;
  long *plStack_398;
  undefined8 uStack_390;
  long alStack_388 [4];
  long *plStack_368;
  byte *pbStack_350;
  long **pplStack_348;
  long **pplStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long *aplStack_328 [4];
  long **pplStack_308;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  long *aplStack_2e8 [4];
  long **pplStack_2c8;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long *aplStack_2a8 [4];
  long **pplStack_288;
  undefined *puStack_278;
  undefined8 uStack_270;
  long *aplStack_268 [4];
  long **pplStack_248;
  undefined *puStack_238;
  undefined8 uStack_230;
  long *aplStack_228 [4];
  long **pplStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long *aplStack_1e8 [4];
  long **pplStack_1c8;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_178;
  undefined8 uStack_170;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_3ed = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_400 = 0x41776446994f06e8;
  bStack_3f8 = 0x14;
  uStack_3f7 = 0x6c625f65736162;
  uStack_3f0 = 0x6f;
  uStack_3ef = 0x6b63;
  plVar18 = (long *)param_2[4];
  if (plVar18 == (long *)0x0) {
    plStack_548 = (long *)0x0;
LAB_04ed61fb:
    plStack_368 = (long *)0x0;
LAB_04ed6207:
    uStack_390 = 0;
    plStack_398 = (long *)&UNK_0ef8b968;
LAB_04ed6213:
    uStack_5b9 = 0;
    uStack_5bb = 0;
    uStack_5bf = 0;
    bStack_5c0 = 0;
    plStack_5c8 = (long *)0x0;
    (*(code *)*plStack_398)(&plStack_398,&plStack_5c8);
    plVar18 = plStack_398;
  }
  else {
    if (plVar18 == param_2) {
      plStack_548 = alStack_568;
      (**(code **)(*plVar18 + 0x18))();
    }
    else {
      plStack_548 = (long *)(**(code **)(*plVar18 + 0x10))();
    }
    plStack_368 = plStack_548;
    uStack_390 = 0;
    plStack_398 = (long *)&UNK_0ef8b968;
    if (plStack_548 == (long *)0x0) goto LAB_04ed61fb;
    if (plStack_548 != alStack_568) {
      plStack_548 = (long *)0x0;
      goto LAB_04ed6207;
    }
    plStack_368 = alStack_388;
    (**(code **)(*plStack_548 + 0x18))(plStack_548);
    bStack_5c0 = 0;
    uStack_5bf = 0;
    uStack_5bb = 0;
    uStack_5b9 = 0;
    if (plStack_398 != (long *)0x0) goto LAB_04ed6213;
    plVar18 = (long *)0x0;
  }
  plStack_398 = (long *)0x0;
  plStack_5c8 = plVar18;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0ef8b798;
  plStack_608 = (long *)0x0;
  pplStack_600 = (long **)0x0;
  if (plVar18 == (long *)0x0) {
    plStack_608 = (long *)0x0;
  }
  else {
    (*(code *)*plVar18)(&plStack_5c8,&plStack_608);
    plStack_608 = plStack_5c8;
  }
  plStack_5c8 = (long *)0x0;
  plVar13[4] = (long)&UNK_0f2ccd78;
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  *(undefined1 *)(plVar13 + 0xd) = 0;
  func_0x04aa75f0(plVar13 + 0xe,&uStack_571,&UNK_01254d89);
  *(undefined1 *)(plVar13 + 0x10) = 0;
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[0x16] = 0;
  plVar13[0x17] = 0xffffffff;
  plVar13[0x26] = 0;
  plVar13[0x27] = 0;
  plVar13[0x18] = 0;
  plVar13[0x19] = 0;
  plVar13[0x1a] = 0;
  plVar13[0x1b] = 0;
  plVar13[0x1c] = 0;
  plVar13[0x1d] = 0;
  plVar13[0x1e] = 0;
  plVar13[0x1f] = 0;
  plVar13[4] = (long)&UNK_0ef8b7e8;
  plVar13[0x2e] = 0;
  plVar13[0x2f] = 0;
  if (plStack_608 == (long *)0x0) {
    plVar18 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_608)(&plStack_608,plVar13 + 0x2e);
    plVar18 = plStack_608;
  }
  plVar19 = plVar13 + 1;
  plVar13[0x2e] = (long)plVar18;
  if (plStack_5c8 != (long *)0x0) {
    (*(code *)plStack_5c8[1])(&plStack_5c8);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  pplVar14 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pplVar14 == (long **)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar18 = plVar13 + 4;
  pplVar14[1] = (long *)0x0;
  pplVar14[2] = (long *)0x0;
  *pplVar14 = (long *)&UNK_0ef8b8c8;
  pplVar14[6] = (long *)0x0;
  pplVar14[7] = (long *)0x0;
  pplVar14[4] = (long *)&UNK_0ef8b918;
  pplVar14[0xe] = plVar18;
  pplVar14[0xf] = plVar13;
  LOCK();
  plVar13[1] = plVar13[1] + 1;
  UNLOCK();
  plStack_608 = (long *)(pplVar14 + 4);
  pplStack_600 = pplVar14;
  pbStack_580 = param_1;
  puVar15 = (undefined4 *)func_0x04b081a0(param_1,&uStack_400,0);
  plVar20 = plVar13 + 0x11;
  plVar21 = *(long **)(puVar15 + 0x24);
  if (plVar21 < *(long **)(puVar15 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 == plVar20) {
LAB_04ed6462:
      *plVar21 = *plVar20;
      plVar21[5] = (long)(pplVar14 + 4);
      plVar21[6] = (long)pplVar14;
LAB_04ed64cf:
      LOCK();
      pplVar14[1] = (long *)((long)pplVar14[1] + 1);
      UNLOCK();
    }
    else {
      if ((*(byte *)(plVar13 + 0x12) & 1) == 0) {
        plVar21[3] = plVar13[0x14];
        lVar16 = plVar13[0x13];
        plVar21[1] = plVar13[0x12];
        plVar21[2] = lVar16;
        goto LAB_04ed6462;
      }
      func_0x04885070(plVar21 + 1,plVar13[0x14],plVar13[0x13]);
      *plVar21 = *plVar20;
      plVar21[5] = (long)plStack_608;
      plVar21[6] = (long)pplStack_600;
      pplVar14 = pplStack_600;
      if (pplStack_600 != (long **)0x0) goto LAB_04ed64cf;
    }
    plVar21 = plVar21 + 7;
    *(long **)(puVar15 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x04b0c1b0(puVar15 + 0x22,plVar20,&plStack_608);
  }
  *(long **)(puVar15 + 0x24) = plVar21;
  uVar8 = *puVar15;
  uVar9 = puVar15[1];
  uVar10 = puVar15[2];
  uVar11 = puVar15[3];
  if (*(long *)(puVar15 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar15 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar13[0xf];
  *(undefined4 *)(plVar13 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar13 + 0x74) = uVar9;
  *(undefined4 *)(plVar13 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar13 + 0x7c) = uVar11;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar21 = plVar20 + 1;
    lVar16 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  pplVar14 = pplStack_600;
  *(undefined1 *)(plVar13 + 0x10) = *(undefined1 *)((long)puVar15 + 0xa1);
  if (pplStack_600 != (long **)0x0) {
    LOCK();
    plVar20 = (long *)(pplStack_600 + 1);
    lVar16 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)((long)*pplStack_600 + 0x10))(pplStack_600);
      func_0x0412c2d0(pplVar14);
    }
  }
  pbVar22 = pbStack_580;
  LOCK();
  lVar16 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    LOCK();
    lVar16 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
  }
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_428);
  if ((uStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
  }
  if (plStack_398 != (long *)0x0) {
    (*(code *)plStack_398[1])(&plStack_398);
  }
  if (plStack_548 == alStack_568) {
    lVar16 = 0x20;
LAB_04ed6707:
    (**(code **)(*plStack_548 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (plStack_548 != (long *)0x0) goto LAB_04ed6707;
  }
  if ((bStack_3f8 & 1) != 0) {
    func_0x0412a280(uStack_3e8,CONCAT71(uStack_3f7,bStack_3f8) & 0xfffffffffffffffe);
  }
  uStack_5b5 = 0;
  uStack_5b4 = 0;
  uStack_5b3 = 0;
  uStack_5b1 = 0;
  uStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5a8 = 0;
  bStack_5c0 = 0x14;
  uStack_5bf = 0x65736162;
  uStack_5bb = 0x625f;
  uStack_5b9 = 0x6c;
  uStack_5b8 = 0x6f;
  uStack_5b7 = 0x6b63;
  plStack_5c8 = (long *)0x41776446994f06e8;
  lStack_78 = 0;
  uStack_70 = 0;
  uVar17 = func_0x04ed9300(pbVar22,&plStack_5c8,&lStack_78);
  plVar18 = (long *)param_2[4];
  if (plVar18 == (long *)0x0) {
    pplStack_5e8 = (long **)0x0;
    uStack_1f0 = 0;
    puStack_1f8 = &UNK_0ef8bdb0;
    pplStack_1c8 = (long **)0x0;
  }
  else {
    if (plVar18 == param_2) {
      pplStack_5e8 = &plStack_608;
      (**(code **)(*plVar18 + 0x18))();
    }
    else {
      pplStack_5e8 = (long **)(**(code **)(*plVar18 + 0x10))();
    }
    pplStack_1c8 = pplStack_5e8;
    uStack_1f0 = 0;
    puStack_1f8 = &UNK_0ef8bdb0;
    if (pplStack_5e8 == (long **)0x0) {
      pplStack_1c8 = (long **)0x0;
    }
    else if (pplStack_5e8 == &plStack_608) {
      pplStack_1c8 = aplStack_1e8;
      (*(code *)(*pplStack_5e8)[3])(pplStack_5e8);
    }
    else {
      pplStack_5e8 = (long **)0x0;
    }
  }
  plVar18 = (long *)func_0x04ed9820(uVar17,&puStack_1f8);
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_448);
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(uStack_438,uStack_448 & 0xfffffffffffffffe);
  }
  if (puStack_1f8 != (undefined *)0x0) {
    (**(code **)(puStack_1f8 + 8))(&puStack_1f8);
  }
  if (pplStack_5e8 == &plStack_608) {
    lVar16 = 0x20;
LAB_04ed6979:
    (**(code **)((long)*pplStack_5e8 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (pplStack_5e8 != (long **)0x0) goto LAB_04ed6979;
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5af,uStack_5b0),
                    CONCAT17(uStack_5b9,CONCAT25(uStack_5bb,CONCAT41(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  uStack_5b3 = 0;
  uStack_5b1 = 0;
  uStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5a8 = 0;
  bStack_5c0 = 0x18;
  uStack_5bf = 0x65736162;
  uStack_5bb = 0x635f;
  uStack_5b9 = 0x6c;
  uStack_5b8 = 0x75;
  uStack_5b7 = 0x7473;
  uStack_5b5 = 0x65;
  uStack_5b4 = 0x72;
  plStack_5c8 = (long *)0x50e479fba511130d;
  plStack_178 = (long *)0x0;
  uStack_170 = 0;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0ef8bdd8;
  plStack_608 = (long *)0x0;
  pplStack_600 = (long **)0x0;
  if (plStack_178 == (long *)0x0) {
    plStack_608 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_178)(&plStack_178,&plStack_608);
    plStack_608 = plStack_178;
  }
  plStack_178 = (long *)0x0;
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
  func_0x04aa75f0(plVar18 + 0xe,alStack_568,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar13 = plVar18 + 0x11;
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
  plVar18[4] = (long)&UNK_0ef8be28;
  pplVar14 = (long **)(plVar18 + 0x2e);
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  *(undefined1 *)(plVar18 + 0x36) = 0;
  if (pplVar14 != &plStack_608) {
    if (plStack_608 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_608)(&plStack_608,pplVar14);
      plVar19 = plStack_608;
    }
    plStack_608 = (long *)0x0;
    *pplVar14 = plVar19;
  }
  puVar1 = (uint *)(plVar18 + 0x12);
  if (plVar13 != (long *)&DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar18[0x14] = _DAT_0f552120;
        uVar10 = uRam000000000f55211c;
        uVar9 = _DAT_0f552118;
        uVar8 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar8;
        *(undefined4 *)(plVar18 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar29 = (_DAT_0f552110 & 1) != 0;
      lVar16 = 0xf552111;
      if (bVar29) {
        lVar16 = _DAT_0f552120;
      }
      uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar29) {
        uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(puVar1,lVar16,uVar24);
    }
  }
  plVar19 = plVar18 + 1;
  plVar18[0x11] = _DAT_0f552108;
  plVar18[0x15] = 0;
  pplStack_588 = (long **)puVar1;
  if (plStack_608 != (long *)0x0) {
    (*(code *)plStack_608[1])(&plStack_608);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  pplVar14 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pplVar14 == (long **)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pplVar14[1] = (long *)0x0;
  pplVar14[2] = (long *)0x0;
  *pplVar14 = (long *)&UNK_0ef8bad8;
  pplVar14[6] = (long *)0x0;
  pplVar14[7] = (long *)0x0;
  pplVar14[4] = (long *)&UNK_0ef8bb28;
  pplVar14[0xe] = plVar18 + 4;
  pplVar14[0xf] = plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  plStack_608 = (long *)(pplVar14 + 4);
  pplStack_600 = pplVar14;
  plStack_570 = plVar18 + 4;
  puVar15 = (undefined4 *)func_0x04b081a0(pbVar22,&plStack_5c8,0);
  plVar20 = *(long **)(puVar15 + 0x24);
  if (plVar20 < *(long **)(puVar15 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 == plVar13) {
LAB_04ed6c1e:
      *plVar20 = *plVar13;
      plVar20[5] = (long)(pplVar14 + 4);
      plVar20[6] = (long)pplVar14;
LAB_04ed6ca3:
      LOCK();
      pplVar14[1] = (long *)((long)pplVar14[1] + 1);
      UNLOCK();
    }
    else {
      if (((ulong)*pplStack_588 & 1) == 0) {
        plVar20[3] = *(long *)((long)pplStack_588 + 0x10);
        lVar16 = *(long *)((long)pplStack_588 + 8);
        plVar20[1] = (long)*pplStack_588;
        plVar20[2] = lVar16;
        goto LAB_04ed6c1e;
      }
      func_0x04885070(plVar20 + 1,plVar18[0x14],plVar18[0x13]);
      *plVar20 = *plVar13;
      plVar20[5] = (long)plStack_608;
      plVar20[6] = (long)pplStack_600;
      pplVar14 = pplStack_600;
      if (pplStack_600 != (long **)0x0) goto LAB_04ed6ca3;
    }
    plVar20 = plVar20 + 7;
    *(long **)(puVar15 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x04b0c1b0(puVar15 + 0x22,plVar13,&plStack_608);
  }
  plVar13 = plStack_570;
  *(long **)(puVar15 + 0x24) = plVar20;
  uVar8 = *puVar15;
  uVar9 = puVar15[1];
  uVar10 = puVar15[2];
  uVar11 = puVar15[3];
  if (*(long *)(puVar15 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar15 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar18[0xf];
  *(undefined4 *)(plVar18 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar18 + 0x74) = uVar9;
  *(undefined4 *)(plVar18 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar18 + 0x7c) = uVar11;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar21 = plVar20 + 1;
    lVar16 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  pplVar14 = pplStack_600;
  *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar15 + 0xa1);
  if (pplStack_600 != (long **)0x0) {
    LOCK();
    plVar20 = (long *)(pplStack_600 + 1);
    lVar16 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)((long)*pplStack_600 + 0x10))(pplStack_600);
      func_0x0412c2d0(pplVar14);
    }
  }
  LOCK();
  lVar16 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    LOCK();
    lVar16 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
  }
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  uVar17 = (**(code **)(*plVar13 + 0x10))(plVar13,&uStack_468);
  if ((uStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,uStack_468 & 0xfffffffffffffffe);
  }
  if (plStack_178 != (long *)0x0) {
    (*(code *)plStack_178[1])(&plStack_178);
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5af,uStack_5b0),
                    CONCAT17(uStack_5b9,CONCAT25(uStack_5bb,CONCAT41(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  uStack_5b4 = 0;
  uStack_5b3 = 0;
  uStack_5b1 = 0;
  uStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5a8 = 0;
  bStack_5c0 = 0x16;
  uStack_5bf = 0x5f79616d;
  uStack_5bb = 0x6572;
  uStack_5b9 = 0x70;
  uStack_5b8 = 0x6c;
  uStack_5b7 = 0x6361;
  uStack_5b5 = 0x65;
  plStack_5c8 = (long *)0x272a7fa09187bb85;
  plStack_1b8 = (long *)0x0;
  uStack_1b0 = 0;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0ef8be98;
  plStack_608 = (long *)0x0;
  pplStack_600 = (long **)0x0;
  if (plStack_1b8 == (long *)0x0) {
    plStack_608 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1b8)(&plStack_1b8,&plStack_608);
    plStack_608 = plStack_1b8;
  }
  plStack_1b8 = (long *)0x0;
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
  func_0x04aa75f0(plVar18 + 0xe,alStack_568,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar13 = plVar18 + 0x11;
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
  plVar18[4] = (long)&UNK_0ef8bee8;
  pplVar14 = (long **)(plVar18 + 0x2e);
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  if (pplVar14 != &plStack_608) {
    if (plStack_608 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_608)(&plStack_608,pplVar14);
      plVar19 = plStack_608;
    }
    plStack_608 = (long *)0x0;
    *pplVar14 = plVar19;
  }
  puVar1 = (uint *)(plVar18 + 0x12);
  if (plVar13 != (long *)&DAT_0f551f58) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar18[0x14] = _DAT_0f551f70;
        uVar10 = uRam000000000f551f6c;
        uVar9 = _DAT_0f551f68;
        uVar8 = uRam000000000f551f64;
        *puVar1 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar8;
        *(undefined4 *)(plVar18 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar29 = (_DAT_0f551f60 & 1) != 0;
      lVar16 = 0xf551f61;
      if (bVar29) {
        lVar16 = _DAT_0f551f70;
      }
      uVar24 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar29) {
        uVar24 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar1,lVar16,uVar24);
    }
  }
  plVar19 = plVar18 + 1;
  plVar18[0x11] = _DAT_0f551f58;
  plVar18[0x15] = 0;
  pplStack_588 = (long **)puVar1;
  if (plStack_608 != (long *)0x0) {
    (*(code *)plStack_608[1])(&plStack_608);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0ef8bfe0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0ef8c030;
  plVar20[0xe] = (long)(plVar18 + 4);
  plVar20[0xf] = (long)plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  plStack_608 = plVar20 + 4;
  pplStack_600 = (long **)plVar20;
  plStack_570 = (long *)uVar17;
  puVar15 = (undefined4 *)func_0x04ee1990(uVar17,&plStack_5c8);
  plVar21 = *(long **)(puVar15 + 0x24);
  if (plVar21 < *(long **)(puVar15 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar13) {
      puVar1 = (uint *)(plVar21 + 1);
      if (((ulong)*pplStack_588 & 1) == 0) {
        plVar21[3] = *(long *)((long)pplStack_588 + 0x10);
        lVar16 = *(long *)((long)pplStack_588 + 8);
        *(long **)puVar1 = *pplStack_588;
        plVar21[2] = lVar16;
      }
      else {
        pplStack_588 = (long **)puVar1;
        func_0x04885070(puVar1,plVar18[0x14],plVar18[0x13]);
      }
    }
    *plVar21 = *plVar13;
    plVar21[5] = (long)(plVar20 + 4);
    plVar21[6] = (long)plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar15 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x04edf9e0(puVar15 + 0x22,plVar13,&plStack_608);
  }
  *(long **)(puVar15 + 0x24) = plVar21;
  uVar8 = *puVar15;
  uVar9 = puVar15[1];
  uVar10 = puVar15[2];
  uVar11 = puVar15[3];
  if (*(long *)(puVar15 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar15 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar18[0xf];
  *(undefined4 *)(plVar18 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar18 + 0x74) = uVar9;
  *(undefined4 *)(plVar18 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar18 + 0x7c) = uVar11;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar20 = plVar13 + 1;
    lVar16 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  pplVar14 = pplStack_600;
  *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar15 + 0xa1);
  if (pplStack_600 != (long **)0x0) {
    LOCK();
    plVar13 = (long *)(pplStack_600 + 1);
    lVar16 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)((long)*pplStack_600 + 0x10))(pplStack_600);
      func_0x0412c2d0(pplVar14);
    }
  }
  LOCK();
  lVar16 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    LOCK();
    lVar16 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
  }
  if (plStack_1b8 != (long *)0x0) {
    (*(code *)plStack_1b8[1])(&plStack_1b8);
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5af,uStack_5b0),
                    CONCAT17(uStack_5b9,CONCAT25(uStack_5bb,CONCAT41(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  plVar13 = (long *)param_2[4];
  if (plVar13 == (long *)0x0) {
    plStack_548 = (long *)0x0;
LAB_04ed7359:
    plStack_3a8 = (long *)0x0;
LAB_04ed7365:
    uStack_3d0 = 0;
    plStack_3d8 = (long *)&UNK_0ef8c2b8;
LAB_04ed7371:
    uStack_5b9 = 0;
    uStack_5bb = 0;
    uStack_5bf = 0;
    bStack_5c0 = 0;
    plStack_5c8 = (long *)0x0;
    (*(code *)*plStack_3d8)(&plStack_3d8,&plStack_5c8);
    plVar13 = plStack_3d8;
  }
  else {
    if (plVar13 == param_2) {
      plStack_548 = alStack_568;
      (**(code **)(*plVar13 + 0x18))();
    }
    else {
      plStack_548 = (long *)(**(code **)(*plVar13 + 0x10))();
    }
    plStack_3a8 = plStack_548;
    uStack_3d0 = 0;
    plStack_3d8 = (long *)&UNK_0ef8c2b8;
    if (plStack_548 == (long *)0x0) goto LAB_04ed7359;
    if (plStack_548 != alStack_568) {
      plStack_548 = (long *)0x0;
      goto LAB_04ed7365;
    }
    plStack_3a8 = alStack_3c8;
    (**(code **)(*plStack_548 + 0x18))(plStack_548);
    bStack_5c0 = 0;
    uStack_5bf = 0;
    uStack_5bb = 0;
    uStack_5b9 = 0;
    if (plStack_3d8 != (long *)0x0) goto LAB_04ed7371;
    plVar13 = (long *)0x0;
  }
  plStack_3d8 = (long *)0x0;
  plStack_5c8 = plVar13;
  pplVar14 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pplVar14 == (long **)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pplVar14[1] = (long *)0x0;
  pplVar14[2] = (long *)0x0;
  *pplVar14 = (long *)&UNK_0ef8c090;
  plStack_608 = (long *)0x0;
  pplStack_600 = (long **)0x0;
  if (plVar13 == (long *)0x0) {
    plStack_608 = (long *)0x0;
  }
  else {
    (*(code *)*plVar13)(&plStack_5c8,&plStack_608);
    plStack_608 = plStack_5c8;
  }
  plStack_5c8 = (long *)0x0;
  pplVar14[4] = (long *)&UNK_0f2ccd78;
  pplVar14[5] = (long *)0x0;
  pplVar14[6] = (long *)0x0;
  pplVar14[7] = (long *)0x0;
  pplVar14[8] = (long *)0x0;
  pplVar14[9] = (long *)0x0;
  pplVar14[10] = (long *)0x0;
  pplVar14[0xb] = (long *)0x0;
  pplVar14[0xc] = (long *)0x0;
  *(undefined1 *)(pplVar14 + 0xd) = 0;
  pplStack_588 = pplVar14;
  func_0x04aa75f0(pplVar14 + 0xe,&uStack_400,&UNK_01254d89);
  *(undefined1 *)(pplVar14 + 0x10) = 0;
  pplVar14[0x11] = (long *)0x0;
  pplVar14[0x12] = (long *)0x0;
  pplVar14[0x13] = (long *)0x0;
  pplVar14[0x14] = (long *)0x0;
  pplVar14[0x15] = (long *)0x0;
  pplVar14[0x16] = (long *)0x0;
  pplVar14[0x17] = (long *)0xffffffff;
  pplVar14[0x26] = (long *)0x0;
  pplVar14[0x27] = (long *)0x0;
  pplVar14[0x18] = (long *)0x0;
  pplVar14[0x19] = (long *)0x0;
  pplVar14[0x1a] = (long *)0x0;
  pplVar14[0x1b] = (long *)0x0;
  pplVar14[0x1c] = (long *)0x0;
  pplVar14[0x1d] = (long *)0x0;
  pplVar14[0x1e] = (long *)0x0;
  pplVar14[0x1f] = (long *)0x0;
  pplVar14[4] = (long *)&UNK_0ef8c0e0;
  pplVar14[0x2e] = (long *)0x0;
  pplVar14[0x2f] = (long *)0x0;
  if (plStack_608 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_608)(&plStack_608,pplVar14 + 0x2e);
    plVar13 = plStack_608;
  }
  pplVar27 = pplVar14 + 1;
  pplVar14[0x2e] = plVar13;
  if (plStack_5c8 != (long *)0x0) {
    (*(code *)plStack_5c8[1])(&plStack_5c8);
  }
  LOCK();
  *pplVar27 = (long *)((long)*pplVar27 + 1);
  UNLOCK();
  pplStack_340 = pplVar27;
  pbVar22 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar22 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pplStack_348 = pplVar14 + 4;
  pbVar22[8] = 0;
  pbVar22[9] = 0;
  pbVar22[10] = 0;
  pbVar22[0xb] = 0;
  pbVar22[0xc] = 0;
  pbVar22[0xd] = 0;
  pbVar22[0xe] = 0;
  pbVar22[0xf] = 0;
  pbVar22[0x10] = 0;
  pbVar22[0x11] = 0;
  pbVar22[0x12] = 0;
  pbVar22[0x13] = 0;
  pbVar22[0x14] = 0;
  pbVar22[0x15] = 0;
  pbVar22[0x16] = 0;
  pbVar22[0x17] = 0;
  *(undefined **)pbVar22 = &UNK_0ef8c1c0;
  pbVar22[0x30] = 0;
  pbVar22[0x31] = 0;
  pbVar22[0x32] = 0;
  pbVar22[0x33] = 0;
  pbVar22[0x34] = 0;
  pbVar22[0x35] = 0;
  pbVar22[0x36] = 0;
  pbVar22[0x37] = 0;
  pbVar22[0x38] = 0;
  pbVar22[0x39] = 0;
  pbVar22[0x3a] = 0;
  pbVar22[0x3b] = 0;
  pbVar22[0x3c] = 0;
  pbVar22[0x3d] = 0;
  pbVar22[0x3e] = 0;
  pbVar22[0x3f] = 0;
  *(undefined **)(pbVar22 + 0x20) = &UNK_0ef8c210;
  *(long ***)(pbVar22 + 0x70) = pplStack_348;
  *(long ***)(pbVar22 + 0x78) = pplVar14;
  LOCK();
  pplVar14[1] = (long *)((long)pplVar14[1] + 1);
  UNLOCK();
  pbStack_408 = pbVar22 + 8;
  puVar5 = (undefined4 *)plVar18[0x1c];
  puVar4 = (undefined4 *)plVar18[0x1b];
  for (puVar15 = puVar4; puVar15 != puVar5; puVar15 = puVar15 + 0x2a) {
    if ((*(long *)(puVar15 + 0x1e) == 0) && (*(long *)(puVar15 + 0x20) == -1)) goto LAB_04ed78c9;
  }
  if ((undefined4 *)plVar18[0x1d] <= puVar5) {
    pbVar26 = (byte *)((long)puVar5 - (long)puVar4);
    uVar24 = ((long)pbVar26 >> 3) * -0x30c30c30c30c30c3 + 1;
    pbVar23 = pbVar22;
    if (0x186186186186186 < uVar24) goto LAB_04ed8843;
    pplVar14 = (long **)(plVar18 + 0x1b);
    lVar16 = plVar18[0x1d] - (long)puVar4 >> 3;
    uVar7 = lVar16 * -0x6186186186186186;
    if (uVar24 < uVar7) {
      uVar24 = uVar7;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar16 * -0x30c30c30c30c30c3)) {
      uVar24 = 0x186186186186186;
    }
    pplStack_5e8 = pplVar14;
    if (uVar24 == 0) {
      plVar13 = (long *)0x0;
LAB_04ed7673:
      pplStack_600 = (long **)(pbVar26 + (long)plVar13);
      plStack_5f0 = plVar13 + uVar24 * 0x15;
      plStack_608 = plVar13;
      pplStack_5f8 = pplStack_600;
      pplStack_530 = pplVar14;
      func_0x04ee53c0(pplStack_600);
      pplVar27 = pplStack_5f8 + 0x15;
      plVar13 = (long *)plVar18[0x1b];
      plVar19 = (long *)plVar18[0x1c];
      pbVar23 = (byte *)((long)pplStack_600 + ((long)plVar13 - (long)plVar19));
      if (plVar13 != plVar19) {
        lVar16 = 0;
        do {
          uVar17 = ((undefined8 *)((long)plVar13 + lVar16))[1];
          *(undefined8 *)(pbVar23 + lVar16) = *(undefined8 *)((long)plVar13 + lVar16);
          *(undefined8 *)(pbVar23 + lVar16 + 8) = uVar17;
          *(undefined8 *)((long)plVar13 + lVar16) = 0;
          ((undefined8 *)((long)plVar13 + lVar16))[1] = 0;
          pbVar26 = pbVar23 + lVar16 + 0x20;
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
          pbVar26 = pbVar23 + lVar16 + 0x10;
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
          pbVar26 = pbVar23 + lVar16 + 0x30;
          pbVar26[0] = 0;
          pbVar26[1] = 0;
          pbVar26[2] = 0;
          pbVar26[3] = 0;
          pbVar26[4] = 0;
          pbVar26[5] = 0;
          pbVar26[6] = 0;
          pbVar26[7] = 0;
          *(undefined8 *)(pbVar23 + lVar16 + 0x28) = *(undefined8 *)((long)plVar13 + lVar16 + 0x28);
          puVar15 = (undefined4 *)((long)plVar13 + lVar16 + 0x18);
          uVar8 = puVar15[1];
          uVar9 = puVar15[2];
          uVar10 = puVar15[3];
          pbVar26 = pbVar23 + lVar16 + 0x18;
          *(undefined4 *)pbVar26 = *puVar15;
          *(undefined4 *)(pbVar26 + 4) = uVar8;
          *(undefined4 *)(pbVar26 + 8) = uVar9;
          *(undefined4 *)(pbVar26 + 0xc) = uVar10;
          *(undefined2 *)((long)plVar13 + lVar16 + 0x18) = 0;
          *(undefined8 *)(pbVar23 + lVar16 + 0x10) = *(undefined8 *)((long)plVar13 + lVar16 + 0x10);
          FUN_04167a20(pbVar23 + lVar16 + 0x38,(long)plVar13 + lVar16 + 0x38);
          puVar2 = (undefined8 *)((long)plVar13 + lVar16 + 0x40);
          uVar17 = puVar2[1];
          *(undefined8 *)(pbVar23 + lVar16 + 0x40) = *puVar2;
          *(undefined8 *)(pbVar23 + lVar16 + 0x40 + 8) = uVar17;
          puVar2 = (undefined8 *)((long)plVar13 + lVar16 + 0x50);
          uVar17 = puVar2[1];
          *(undefined8 *)(pbVar23 + lVar16 + 0x50) = *puVar2;
          *(undefined8 *)(pbVar23 + lVar16 + 0x50 + 8) = uVar17;
          puVar2 = (undefined8 *)((long)plVar13 + lVar16 + 0x60);
          uVar17 = puVar2[1];
          *(undefined8 *)(pbVar23 + lVar16 + 0x60) = *puVar2;
          *(undefined8 *)(pbVar23 + lVar16 + 0x60 + 8) = uVar17;
          puVar2 = (undefined8 *)((long)plVar13 + lVar16 + 0x60);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(pbVar23 + lVar16 + 0x70) = *(undefined8 *)((long)plVar13 + lVar16 + 0x70);
          puVar2 = (undefined8 *)((long)plVar13 + lVar16 + 0x78);
          uVar17 = puVar2[1];
          *(undefined8 *)(pbVar23 + lVar16 + 0x78) = *puVar2;
          *(undefined8 *)(pbVar23 + lVar16 + 0x78 + 8) = uVar17;
          pbVar26 = pbVar23 + lVar16 + 0x88;
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
          pbVar26 = pbVar23 + lVar16 + 0x98;
          pbVar26[0] = 0;
          pbVar26[1] = 0;
          pbVar26[2] = 0;
          pbVar26[3] = 0;
          pbVar26[4] = 0;
          pbVar26[5] = 0;
          pbVar26[6] = 0;
          pbVar26[7] = 0;
          puVar15 = (undefined4 *)((long)plVar13 + lVar16 + 0x88);
          uVar8 = puVar15[1];
          uVar9 = puVar15[2];
          uVar10 = puVar15[3];
          pbVar26 = pbVar23 + lVar16 + 0x88;
          *(undefined4 *)pbVar26 = *puVar15;
          *(undefined4 *)(pbVar26 + 4) = uVar8;
          *(undefined4 *)(pbVar26 + 8) = uVar9;
          *(undefined4 *)(pbVar26 + 0xc) = uVar10;
          *(undefined8 *)(pbVar23 + lVar16 + 0x98) = *(undefined8 *)((long)plVar13 + lVar16 + 0x98);
          puVar2 = (undefined8 *)((long)plVar13 + lVar16 + 0x88);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)((long)plVar13 + lVar16 + 0x98) = 0;
          *(undefined2 *)(pbVar23 + lVar16 + 0xa0) = *(undefined2 *)((long)plVar13 + lVar16 + 0xa0);
          lVar12 = lVar16 + 0xa8;
          lVar16 = lVar16 + 0xa8;
        } while ((long *)((long)plVar13 + lVar12) != plVar19);
        do {
          func_0x04ee2550(plVar13);
          plVar13 = plVar13 + 0x15;
        } while (plVar13 != plVar19);
        plVar13 = *pplStack_530;
      }
      pplVar14 = pplStack_588;
      plVar18[0x1b] = (long)pbVar23;
      plVar18[0x1c] = (long)pplVar27;
      lVar16 = plVar18[0x1d];
      plVar18[0x1d] = (long)plStack_5f0;
      if (plVar13 != (long *)0x0) {
        func_0x0412a280(plVar13,lVar16 - (long)plVar13);
      }
      goto LAB_04ed7858;
    }
    if (uVar24 < 0x186186186186187) {
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 0xa8);
      if (plVar13 == (long *)0x0) {
        func_0x0eec74c0(uVar24 * 0xa8,0);
        plVar13 = (long *)0x0;
      }
      goto LAB_04ed7673;
    }
LAB_04ed8839:
    func_0x04882eb0();
LAB_04ed883e:
    func_0x04ee5600();
LAB_04ed8843:
    uVar17 = func_0x04ee5530();
    uVar17 = func_0x04882e20(uVar17);
    uVar17 = func_0x04882e20(uVar17);
    uVar17 = func_0x04882e20(uVar17);
    uVar17 = func_0x04882e20(uVar17);
    uVar17 = func_0x04882e20(uVar17);
    uVar17 = func_0x04882e20(uVar17);
    uVar17 = func_0x04882e20(uVar17);
    uStack_618 = func_0x04882e20(uVar17);
    if ((*pbVar23 & 1) != 0) {
      func_0x0412a280(*(long *)(pbVar26 + 0x18),*(ulong *)(pbVar26 + 8) & 0xfffffffffffffffe);
    }
    func_0x04ee5540(&plStack_608);
    LOCK();
    lVar16 = *(long *)pbStack_408;
    *(long *)pbStack_408 = *(long *)pbStack_408 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*(long *)pbVar22 + 0x10))(pbVar22);
      func_0x0412c2d0(pbVar22);
    }
    pplVar27 = pplStack_588;
    func_0x04ee3a10(pplStack_588);
    func_0x04ee3a40(pplVar27);
    if (plStack_3d8 != (long *)0x0) {
      (*(code *)plStack_3d8[1])(&plStack_3d8);
    }
    lVar16 = 0x20;
    if ((plStack_548 != alStack_568) && (lVar16 = 0x28, plStack_548 == (long *)0x0)) {
      do {
        uStack_618 = func_0x0eee2d70(uStack_618);
        func_0x04b08480(&plStack_608);
        LOCK();
        lVar16 = *(long *)pbVar22;
        *(long *)pbVar22 = *(long *)pbVar22 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (*(code *)(*pplVar14)[2])(pplVar14);
          func_0x0412c2d0(pplVar14);
        }
        LOCK();
        lVar16 = *(long *)pbVar22;
        *(long *)pbVar22 = *(long *)pbVar22 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (*(code *)(*pplVar14)[2])(pplVar14);
          func_0x0412c2d0(pplVar14);
        }
        if (plStack_398 != (long *)0x0) {
          (*(code *)plStack_398[1])(&plStack_398);
        }
        lVar16 = 0x20;
        if ((plStack_548 == alStack_568) || (lVar16 = 0x28, plStack_548 != (long *)0x0)) {
          (**(code **)(*plStack_548 + lVar16))();
        }
        if ((bStack_3f8 & 1) != 0) {
          func_0x0412a280(uStack_3e8,CONCAT71(uStack_3f7,bStack_3f8) & 0xfffffffffffffffe);
        }
      } while( true );
    }
    (**(code **)(*plStack_548 + lVar16))();
    func_0x0eee2d70(uStack_618);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  func_0x04ee53c0(puVar5);
  pplVar27 = (long **)(puVar5 + 0x2a);
  plVar18[0x1c] = (long)pplVar27;
LAB_04ed7858:
  plVar18[0x1c] = (long)pplVar27;
  pbVar23 = (byte *)pplVar27[-0x15];
  if ((*pbVar23 & 1) == 0) {
    *pbVar23 = 0x26;
    pbVar23 = pbVar23 + 1;
  }
  else {
    pbVar23[8] = 0x13;
    pbVar23[9] = 0;
    pbVar23[10] = 0;
    pbVar23[0xb] = 0;
    pbVar23[0xc] = 0;
    pbVar23[0xd] = 0;
    pbVar23[0xe] = 0;
    pbVar23[0xf] = 0;
    pbVar23 = *(byte **)(pbVar23 + 0x10);
  }
  uVar10 = _UNK_01494d69;
  uVar9 = _UNK_01494d65;
  uVar8 = _UNK_01494d61;
  *(undefined4 *)pbVar23 = _DAT_01494d5d;
  *(undefined4 *)(pbVar23 + 4) = uVar8;
  *(undefined4 *)(pbVar23 + 8) = uVar9;
  *(undefined4 *)(pbVar23 + 0xc) = uVar10;
  pbVar23[0xf] = 0x65;
  pbVar23[0x10] = 0x6e;
  pbVar23[0x11] = 0x74;
  pbVar23[0x12] = 0x3e;
  pbVar23[0x13] = 0;
  lVar16 = plVar18[0x1c];
  puVar15 = (undefined4 *)(lVar16 - 0xa8);
  *(char *)(lVar16 + -7) = (char)plVar18[0x10];
  *(undefined8 *)(lVar16 + -0x30) = 0;
  *(undefined8 *)(lVar16 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar16 + -8) = 0;
LAB_04ed78c9:
  pbVar23 = pbStack_580;
  pplVar27 = pplVar14 + 0x11;
  pbVar25 = pbVar22 + 0x20;
  pplVar28 = *(long ***)(puVar15 + 0x24);
  if (pplVar28 < *(long ***)(puVar15 + 0x26)) {
    pplVar28[2] = (long *)0x0;
    pplVar28[3] = (long *)0x0;
    *pplVar28 = (long *)0x0;
    pplVar28[1] = (long *)0x0;
    pplVar28[4] = (long *)0x0;
    if (pplVar28 != pplVar27) {
      if (((ulong)pplVar14[0x12] & 1) == 0) {
        pplVar28[3] = pplVar14[0x14];
        plVar18 = pplVar14[0x13];
        pplVar28[1] = pplVar14[0x12];
        pplVar28[2] = plVar18;
      }
      else {
        pbStack_580 = pbVar25;
        func_0x04885070(pplVar28 + 1,pplVar14[0x14],pplVar14[0x13]);
        pbVar25 = pbStack_580;
      }
    }
    *pplVar28 = *pplVar27;
    pplVar28[5] = (long *)pbVar25;
    pplVar28[6] = (long *)pbVar22;
    LOCK();
    *(long *)(pbVar22 + 8) = *(long *)(pbVar22 + 8) + 1;
    UNLOCK();
    pplVar28 = pplVar28 + 7;
    *(long ***)(puVar15 + 0x24) = pplVar28;
  }
  else {
    pbVar23 = (byte *)((long)pplVar28 - *(long *)(puVar15 + 0x22));
    uVar24 = ((long)pbVar23 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar26 = pbStack_580;
    if (0x492492492492492 < uVar24) goto LAB_04ed883e;
    lVar16 = (long)*(long ***)(puVar15 + 0x26) - *(long *)(puVar15 + 0x22) >> 3;
    uVar7 = lVar16 * -0x2492492492492492;
    if (uVar24 < uVar7) {
      uVar24 = uVar7;
    }
    pplStack_5e8 = (long **)(puVar15 + 0x22);
    if (0x249249249249248 < (ulong)(lVar16 * 0x6db6db6db6db6db7)) {
      uVar24 = 0x492492492492492;
    }
    pplStack_530 = pplStack_5e8;
    if (uVar24 == 0) {
      plVar18 = (long *)0x0;
    }
    else {
      if (0x492492492492492 < uVar24) goto LAB_04ed8839;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(uVar24 * 0x38,0);
        plVar18 = (long *)0x0;
      }
    }
    pplVar14 = (long **)((long)plVar18 + (long)pbVar23);
    plStack_5f0 = plVar18 + uVar24 * 7;
    pbVar26 = (byte *)((long)(plVar18 + 2) + (long)pbVar23);
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
    pbVar26 = (byte *)((long)plVar18 + (long)pbVar23);
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
    pbVar26 = (byte *)((long)(plVar18 + 4) + (long)pbVar23);
    pbVar26[0] = 0;
    pbVar26[1] = 0;
    pbVar26[2] = 0;
    pbVar26[3] = 0;
    pbVar26[4] = 0;
    pbVar26[5] = 0;
    pbVar26[6] = 0;
    pbVar26[7] = 0;
    pplStack_5f8 = pplVar14;
    plStack_608 = plVar18;
    pplStack_600 = pplVar14;
    if (pplVar14 != pplVar27) {
      pbVar23 = pbVar23 + (long)plVar18;
      if (((ulong)pplStack_588[0x12] & 1) == 0) {
        *(long **)(pbVar23 + 0x18) = pplStack_588[0x14];
        uVar8 = *(undefined4 *)((long)pplStack_588 + 0x94);
        uVar9 = *(undefined4 *)(pplStack_588 + 0x13);
        uVar10 = *(undefined4 *)((long)pplStack_588 + 0x9c);
        *(undefined4 *)(pbVar23 + 8) = *(undefined4 *)(pplStack_588 + 0x12);
        *(undefined4 *)(pbVar23 + 0xc) = uVar8;
        *(undefined4 *)(pbVar23 + 0x10) = uVar9;
        *(undefined4 *)(pbVar23 + 0x14) = uVar10;
      }
      else {
        func_0x04885070(pbVar23 + 8,pplStack_588[0x14],pplStack_588[0x13]);
      }
    }
    pplVar28 = pplStack_530;
    *pplVar14 = *pplVar27;
    pplVar14[5] = (long *)pbVar25;
    pplVar14[6] = (long *)pbVar22;
    LOCK();
    *(long *)(pbVar22 + 8) = *(long *)(pbVar22 + 8) + 1;
    UNLOCK();
    pplStack_5f8 = pplStack_5f8 + 7;
    plVar18 = *(long **)(puVar15 + 0x22);
    plVar13 = *(long **)(puVar15 + 0x24);
    pbVar26 = (byte *)((long)pplStack_600 + ((long)plVar18 - (long)plVar13));
    pbVar23 = pbVar26;
    plVar19 = plVar18;
    if ((long)plVar18 - (long)plVar13 != 0) {
      do {
        pbVar23[0x10] = 0;
        pbVar23[0x11] = 0;
        pbVar23[0x12] = 0;
        pbVar23[0x13] = 0;
        pbVar23[0x14] = 0;
        pbVar23[0x15] = 0;
        pbVar23[0x16] = 0;
        pbVar23[0x17] = 0;
        pbVar23[0x18] = 0;
        pbVar23[0x19] = 0;
        pbVar23[0x1a] = 0;
        pbVar23[0x1b] = 0;
        pbVar23[0x1c] = 0;
        pbVar23[0x1d] = 0;
        pbVar23[0x1e] = 0;
        pbVar23[0x1f] = 0;
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
        pbVar23[0x20] = 0;
        pbVar23[0x21] = 0;
        pbVar23[0x22] = 0;
        pbVar23[0x23] = 0;
        pbVar23[0x24] = 0;
        pbVar23[0x25] = 0;
        pbVar23[0x26] = 0;
        pbVar23[0x27] = 0;
        *(long *)(pbVar23 + 0x18) = plVar19[3];
        lVar16 = plVar19[2];
        *(long *)(pbVar23 + 8) = plVar19[1];
        *(long *)(pbVar23 + 0x10) = lVar16;
        *(undefined2 *)(plVar19 + 1) = 0;
        *(long *)pbVar23 = *plVar19;
        lVar16 = plVar19[6];
        *(long *)(pbVar23 + 0x28) = plVar19[5];
        *(long *)(pbVar23 + 0x30) = lVar16;
        plVar19[5] = 0;
        plVar19[6] = 0;
        plVar19 = plVar19 + 7;
        pbVar23 = pbVar23 + 0x38;
        pbStack_350 = pbVar26;
      } while (plVar19 != plVar13);
      do {
        plVar19 = (long *)plVar18[6];
        if (plVar19 == (long *)0x0) {
LAB_04ed7bb5:
          bVar3 = *(byte *)(plVar18 + 1);
        }
        else {
          LOCK();
          plVar20 = plVar19 + 1;
          lVar16 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar16 != 0) goto LAB_04ed7bb5;
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
          bVar3 = *(byte *)(plVar18 + 1);
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(plVar18[3],plVar18[1] & 0xfffffffffffffffe);
        }
        plVar18 = plVar18 + 7;
      } while (plVar18 != plVar13);
      plVar18 = *pplVar28;
      pbVar26 = pbStack_350;
    }
    pbVar23 = pbStack_580;
    pplVar28 = pplStack_5f8;
    *(byte **)(puVar15 + 0x22) = pbVar26;
    *(long ***)(puVar15 + 0x24) = pplStack_5f8;
    lVar16 = *(long *)(puVar15 + 0x26);
    *(long **)(puVar15 + 0x26) = plStack_5f0;
    if (plVar18 != (long *)0x0) {
      func_0x0412a280(plVar18,lVar16 - (long)plVar18);
    }
  }
  pplVar14 = pplStack_588;
  *(long ***)(puVar15 + 0x24) = pplVar28;
  uVar8 = *puVar15;
  uVar9 = puVar15[1];
  uVar10 = puVar15[2];
  uVar11 = puVar15[3];
  if (*(long *)(puVar15 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar15 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = pplStack_588[0xf];
  *(undefined4 *)(pplStack_588 + 0xe) = uVar8;
  *(undefined4 *)((long)pplStack_588 + 0x74) = uVar9;
  *(undefined4 *)(pplStack_588 + 0xf) = uVar10;
  *(undefined4 *)((long)pplStack_588 + 0x7c) = uVar11;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar13 = plVar18 + 1;
    lVar16 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  *(undefined1 *)(pplVar14 + 0x10) = *(undefined1 *)((long)puVar15 + 0xa1);
  LOCK();
  lVar16 = *(long *)pbStack_408;
  *(long *)pbStack_408 = *(long *)pbStack_408 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*(long *)pbVar22 + 0x10))(pbVar22);
    func_0x0412c2d0(pbVar22);
    LOCK();
    plVar18 = *pplStack_340;
    *pplStack_340 = (long *)((long)*pplStack_340 + -1);
    UNLOCK();
    if (plVar18 != (long *)0x0) goto LAB_04ed7cd3;
LAB_04ed7d9d:
    pplVar27 = pplStack_340;
    (*(code *)(*pplVar14)[2])(pplVar14);
    func_0x0412c2d0(pplVar14);
    LOCK();
    plVar18 = *pplVar27;
    *pplVar27 = (long *)((long)*pplVar27 + -1);
    UNLOCK();
  }
  else {
    LOCK();
    plVar18 = *pplStack_340;
    *pplStack_340 = (long *)((long)*pplStack_340 + -1);
    UNLOCK();
    if (plVar18 == (long *)0x0) goto LAB_04ed7d9d;
LAB_04ed7cd3:
    LOCK();
    plVar18 = *pplStack_340;
    *pplStack_340 = (long *)((long)*pplStack_340 + -1);
    UNLOCK();
  }
  if (plVar18 == (long *)0x0) {
    (*(code *)(*pplVar14)[2])(pplVar14);
    func_0x0412c2d0(pplVar14);
  }
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  (*(code *)(*pplStack_348)[2])(pplStack_348,&uStack_488);
  if ((uStack_488 & 1) != 0) {
    func_0x0412a280(uStack_478,uStack_488 & 0xfffffffffffffffe);
  }
  if (plStack_3d8 != (long *)0x0) {
    (*(code *)plStack_3d8[1])(&plStack_3d8);
  }
  if (plStack_548 == alStack_568) {
    lVar16 = 0x20;
LAB_04ed7dde:
    (**(code **)(*plStack_548 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (plStack_548 != (long *)0x0) goto LAB_04ed7dde;
  }
  uStack_5b3 = 0;
  uStack_5b1 = 0;
  uStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5a8 = 0;
  bStack_5c0 = 0x18;
  uStack_5bf = 0x5f6d756e;
  uStack_5bb = 0x6c63;
  uStack_5b9 = 0x75;
  uStack_5b8 = 0x73;
  uStack_5b7 = 0x6574;
  uStack_5b5 = 0x72;
  uStack_5b4 = 0x73;
  plStack_5c8 = (long *)0xef8419517f7ef7b3;
  plVar18 = (long *)param_2[4];
  if (plVar18 == (long *)0x0) {
    pplStack_5e8 = (long **)0x0;
    uStack_230 = 0;
    puStack_238 = &UNK_0ef8c4b0;
    pplStack_208 = (long **)0x0;
  }
  else {
    if (plVar18 == param_2) {
      pplStack_5e8 = &plStack_608;
      (**(code **)(*plVar18 + 0x18))(plVar18,&plStack_608);
    }
    else {
      pplStack_5e8 = (long **)(**(code **)(*plVar18 + 0x10))();
    }
    pplStack_208 = pplStack_5e8;
    uStack_230 = 0;
    puStack_238 = &UNK_0ef8c4b0;
    if (pplStack_5e8 == (long **)0x0) {
      pplStack_208 = (long **)0x0;
    }
    else if (pplStack_5e8 == &plStack_608) {
      pplStack_208 = aplStack_228;
      (*(code *)(*pplStack_5e8)[3])(pplStack_5e8);
    }
    else {
      pplStack_5e8 = (long **)0x0;
    }
  }
  plVar18 = (long *)func_0x04ed9dc0(plStack_570,&plStack_5c8,&puStack_238);
  *(undefined4 *)(plVar18 + 0x2a) = 1;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_498 = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_4a8);
  if ((uStack_4a8 & 1) != 0) {
    func_0x0412a280(uStack_498,uStack_4a8 & 0xfffffffffffffffe);
  }
  if (puStack_238 != (undefined *)0x0) {
    (**(code **)(puStack_238 + 8))(&puStack_238);
  }
  if (pplStack_5e8 == &plStack_608) {
    lVar16 = 0x20;
LAB_04ed8038:
    (**(code **)((long)*pplStack_5e8 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (pplStack_5e8 != (long **)0x0) goto LAB_04ed8038;
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5af,uStack_5b0),
                    CONCAT17(uStack_5b9,CONCAT25(uStack_5bb,CONCAT41(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  uStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5a8 = 0;
  bStack_5c0 = 0x1c;
  uStack_5bf = 0x73756c63;
  uStack_5bb = 0x6574;
  uStack_5b9 = 0x72;
  uStack_5b8 = 0x5f;
  uStack_5b7 = 0x6172;
  uStack_5b5 = 100;
  uStack_5b4 = 0x69;
  uStack_5b3 = 0x7375;
  uStack_5b1 = 0;
  plStack_5c8 = (long *)0x93ac68f81414de72;
  plVar18 = (long *)param_2[4];
  if (plVar18 == (long *)0x0) {
    pplStack_5e8 = (long **)0x0;
    uStack_270 = 0;
    puStack_278 = &UNK_0ef8c4c8;
    pplStack_248 = (long **)0x0;
  }
  else {
    if (plVar18 == param_2) {
      pplStack_5e8 = &plStack_608;
      (**(code **)(*plVar18 + 0x18))(plVar18,&plStack_608);
    }
    else {
      pplStack_5e8 = (long **)(**(code **)(*plVar18 + 0x10))();
    }
    pplStack_248 = pplStack_5e8;
    uStack_270 = 0;
    puStack_278 = &UNK_0ef8c4c8;
    if (pplStack_5e8 == (long **)0x0) {
      pplStack_248 = (long **)0x0;
    }
    else if (pplStack_5e8 == &plStack_608) {
      pplStack_248 = aplStack_268;
      (*(code *)(*pplStack_5e8)[3])(pplStack_5e8);
    }
    else {
      pplStack_5e8 = (long **)0x0;
    }
  }
  plVar18 = (long *)func_0x04ed9dc0(plStack_570,&plStack_5c8,&puStack_278);
  *(undefined4 *)(plVar18 + 0x2a) = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_4c8);
  if ((uStack_4c8 & 1) != 0) {
    func_0x0412a280(uStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
  }
  if (puStack_278 != (undefined *)0x0) {
    (**(code **)(puStack_278 + 8))(&puStack_278);
  }
  if (pplStack_5e8 == &plStack_608) {
    lVar16 = 0x20;
LAB_04ed8228:
    (**(code **)((long)*pplStack_5e8 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (pplStack_5e8 != (long **)0x0) goto LAB_04ed8228;
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5af,uStack_5b0),
                    CONCAT17(uStack_5b9,CONCAT25(uStack_5bb,CONCAT41(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  uStack_5b4 = 0;
  uStack_5b3 = 0;
  uStack_5b1 = 0;
  uStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5a8 = 0;
  bStack_5c0 = 0x16;
  uStack_5bf = 0x5f79616d;
  uStack_5bb = 0x7267;
  uStack_5b9 = 0x6f;
  uStack_5b8 = 0x77;
  uStack_5b7 = 0x6f5f;
  uStack_5b5 = 0x6e;
  plStack_5c8 = (long *)0x8a4775a7c15dabfa;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uVar17 = func_0x04ed9300(pbVar23,&plStack_5c8,&lStack_b8);
  plVar18 = (long *)param_2[4];
  if (plVar18 == (long *)0x0) {
    pplStack_5e8 = (long **)0x0;
    uStack_2b0 = 0;
    puStack_2b8 = &UNK_0ef8c4e0;
    pplStack_288 = (long **)0x0;
  }
  else {
    if (plVar18 == param_2) {
      pplStack_5e8 = &plStack_608;
      (**(code **)(*plVar18 + 0x18))(plVar18,&plStack_608);
    }
    else {
      pplStack_5e8 = (long **)(**(code **)(*plVar18 + 0x10))();
    }
    pplStack_288 = pplStack_5e8;
    uStack_2b0 = 0;
    puStack_2b8 = &UNK_0ef8c4e0;
    if (pplStack_5e8 == (long **)0x0) {
      pplStack_288 = (long **)0x0;
    }
    else if (pplStack_5e8 == &plStack_608) {
      pplStack_288 = aplStack_2a8;
      (*(code *)(*pplStack_5e8)[3])(pplStack_5e8);
    }
    else {
      pplStack_5e8 = (long **)0x0;
    }
  }
  plVar18 = (long *)func_0x04ed9820(uVar17,&puStack_2b8);
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_4e8);
  if ((uStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,uStack_4e8 & 0xfffffffffffffffe);
  }
  if (puStack_2b8 != (undefined *)0x0) {
    (**(code **)(puStack_2b8 + 8))(&puStack_2b8);
  }
  if (pplStack_5e8 == &plStack_608) {
    lVar16 = 0x20;
LAB_04ed8422:
    (**(code **)((long)*pplStack_5e8 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (pplStack_5e8 != (long **)0x0) goto LAB_04ed8422;
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5af,uStack_5b0),
                    CONCAT17(uStack_5b9,CONCAT25(uStack_5bb,CONCAT41(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  uStack_5b4 = 0;
  uStack_5b3 = 0;
  uStack_5b1 = 0;
  uStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5a8 = 0;
  bStack_5c0 = 0x16;
  uStack_5bf = 0x5f79616d;
  uStack_5bb = 0x6572;
  uStack_5b9 = 0x70;
  uStack_5b8 = 0x6c;
  uStack_5b7 = 0x6361;
  uStack_5b5 = 0x65;
  plStack_5c8 = (long *)0x272a7fa09187bb85;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uVar17 = func_0x04ed9300(pbVar23,&plStack_5c8,&lStack_f8);
  plVar18 = (long *)param_2[4];
  if (plVar18 == (long *)0x0) {
    pplStack_5e8 = (long **)0x0;
    uStack_2f0 = 0;
    puStack_2f8 = &UNK_0ef8c4f8;
    pplStack_2c8 = (long **)0x0;
  }
  else {
    if (plVar18 == param_2) {
      pplStack_5e8 = &plStack_608;
      (**(code **)(*plVar18 + 0x18))(plVar18,&plStack_608);
    }
    else {
      pplStack_5e8 = (long **)(**(code **)(*plVar18 + 0x10))();
    }
    pplStack_2c8 = pplStack_5e8;
    uStack_2f0 = 0;
    puStack_2f8 = &UNK_0ef8c4f8;
    if (pplStack_5e8 == (long **)0x0) {
      pplStack_2c8 = (long **)0x0;
    }
    else if (pplStack_5e8 == &plStack_608) {
      pplStack_2c8 = aplStack_2e8;
      (*(code *)(*pplStack_5e8)[3])(pplStack_5e8);
    }
    else {
      pplStack_5e8 = (long **)0x0;
    }
  }
  plVar18 = (long *)func_0x04ed9820(uVar17,&puStack_2f8);
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_508);
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(uStack_4f8,uStack_508 & 0xfffffffffffffffe);
  }
  if (puStack_2f8 != (undefined *)0x0) {
    (**(code **)(puStack_2f8 + 8))(&puStack_2f8);
  }
  if (pplStack_5e8 == &plStack_608) {
    lVar16 = 0x20;
LAB_04ed860e:
    (**(code **)((long)*pplStack_5e8 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (pplStack_5e8 != (long **)0x0) goto LAB_04ed860e;
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5af,uStack_5b0),
                    CONCAT17(uStack_5b9,CONCAT25(uStack_5bb,CONCAT41(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  uStack_5af = 0;
  uStack_5a8 = 0;
  bStack_5c0 = 0x20;
  uStack_5bf = _DAT_011b8461;
  uStack_5bb = (undefined2)_UNK_011b8465;
  uStack_5b9 = (undefined1)((uint)_UNK_011b8465 >> 0x10);
  uStack_5b8 = (undefined1)((uint)_UNK_011b8465 >> 0x18);
  uStack_5b7 = (undefined2)_UNK_011b8469;
  uStack_5b5 = (undefined1)((uint)_UNK_011b8469 >> 0x10);
  uStack_5b4 = (undefined1)((uint)_UNK_011b8469 >> 0x18);
  uStack_5b3 = (undefined2)_UNK_011b846d;
  uStack_5b1 = (undefined1)((uint)_UNK_011b846d >> 0x10);
  uStack_5b0 = (undefined1)((uint)_UNK_011b846d >> 0x18);
  plStack_5c8 = (long *)0xa69d7eab00196bc0;
  lStack_138 = 0;
  uStack_130 = 0;
  uVar17 = func_0x04ed9300(pbVar23,&plStack_5c8,&lStack_138);
  plVar18 = (long *)param_2[4];
  if (plVar18 == (long *)0x0) {
    pplStack_5e8 = (long **)0x0;
    uStack_330 = 0;
    puStack_338 = &UNK_0ef8c510;
    pplStack_308 = (long **)0x0;
  }
  else {
    if (plVar18 == param_2) {
      pplStack_5e8 = &plStack_608;
      (**(code **)(*plVar18 + 0x18))(plVar18,&plStack_608);
    }
    else {
      pplStack_5e8 = (long **)(**(code **)(*plVar18 + 0x10))();
    }
    pplStack_308 = pplStack_5e8;
    uStack_330 = 0;
    puStack_338 = &UNK_0ef8c510;
    if (pplStack_5e8 == (long **)0x0) {
      pplStack_308 = (long **)0x0;
    }
    else if (pplStack_5e8 == &plStack_608) {
      pplStack_308 = aplStack_328;
      (*(code *)(*pplStack_5e8)[3])(pplStack_5e8);
    }
    else {
      pplStack_5e8 = (long **)0x0;
    }
  }
  plVar18 = (long *)func_0x04ed9820(uVar17,&puStack_338);
  uStack_528 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_528);
  if ((uStack_528 & 1) != 0) {
    func_0x0412a280(uStack_518,uStack_528 & 0xfffffffffffffffe);
  }
  if (puStack_338 != (undefined *)0x0) {
    (**(code **)(puStack_338 + 8))(&puStack_338);
  }
  if (pplStack_5e8 == &plStack_608) {
    lVar16 = 0x20;
  }
  else {
    lVar16 = 0x28;
    if (pplStack_5e8 == (long **)0x0) goto joined_r0x04ed87ad;
  }
  (**(code **)((long)*pplStack_5e8 + lVar16))();
joined_r0x04ed87ad:
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_5af,uStack_5b0),
                    CONCAT17(uStack_5b9,CONCAT25(uStack_5bb,CONCAT41(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11b8461  may_grow_through
 * 0x1494d5d  <any array element>
 */
