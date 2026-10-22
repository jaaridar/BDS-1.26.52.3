/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3e5ae0 (ELF vaddr 0xd2e5ae0)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3e5ae0, 0d3e66ac]]
 * Ghidra: FUN_0d3e5ae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3e5ae0(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puStack_3b8;
  byte bStack_3b0;
  undefined5 uStack_3af;
  undefined2 uStack_3aa;
  undefined1 uStack_3a8;
  undefined5 uStack_3a7;
  undefined2 uStack_3a2;
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined1 uStack_371;
  long *plStack_370;
  ulong auStack_368 [4];
  ulong auStack_348 [4];
  ulong auStack_328 [4];
  ulong auStack_308 [4];
  ulong auStack_2e8 [4];
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  undefined8 uStack_2a0;
  byte bStack_298;
  undefined6 uStack_297;
  undefined1 uStack_291;
  undefined1 uStack_290;
  undefined6 uStack_28f;
  undefined1 uStack_289;
  undefined8 uStack_288;
  undefined8 uStack_280;
  byte *pbStack_278;
  long *plStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *apuStack_e8 [4];
  undefined **ppuStack_c8;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_288 = 0;
  uStack_280 = 0;
  bStack_298 = 0x1c;
  uStack_297 = 0x736563616c70;
  uStack_291 = 0x5f;
  uStack_290 = 0x66;
  uStack_28f = 0x657275746165;
  uStack_289 = 0;
  uStack_2a0 = 0x5f4748520f33cd82;
  uStack_70 = 0;
  uStack_260 = 0;
  lStack_78 = 0;
  puStack_268 = (undefined8 *)&UNK_0f46db00;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  puStack_3b8 = puStack_268;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0f464b48;
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  puStack_268 = (undefined8 *)0x0;
  plVar7[4] = (long)&UNK_0f2ccd78;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  *(undefined1 *)(plVar7 + 0xd) = 0;
  FUN_04aa75f0(plVar7 + 0xe,&uStack_371,&UNK_01254d89);
  *(undefined1 *)(plVar7 + 0x10) = 0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0xffffffff;
  plVar7[0x26] = 0;
  plVar7[0x27] = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  plVar7[4] = (long)&UNK_0f464b98;
  plVar7[0x2e] = 0;
  plVar7[0x2f] = 0;
  if (puStack_3b8 == (undefined8 *)0x0) {
    plVar7[0x3a] = 0;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3b8)(&puStack_3b8,plVar7 + 0x2e);
    puVar8 = puStack_3b8;
    puStack_3b8 = (undefined8 *)0x0;
    plVar7[0x2e] = (long)puVar8;
    plVar7[0x3a] = 0;
    if ((*(byte *)(plVar7 + 0x12) & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      thunk_FUN_0ee326a0(plVar7[0x14],plVar7[0x12] & 0xfffffffffffffffe);
      puVar8 = puStack_3b8;
    }
  }
  pbVar2 = (byte *)(plVar7 + 0x12);
  pbVar2[0] = 0x22;
  uVar5 = _UNK_01207d03;
  uVar4 = _UNK_01207cff;
  uVar3 = _UNK_01207cfb;
  pbVar2[1] = 0x66;
  *(undefined4 *)((long)plVar7 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar7 + 0x96) = uVar3;
  *(undefined4 *)((long)plVar7 + 0x9a) = uVar4;
  *(undefined4 *)((long)plVar7 + 0x9e) = uVar5;
  *(undefined4 *)((long)plVar7 + 0xa2) = 0;
  *(undefined2 *)((long)plVar7 + 0xa6) = 0;
  plVar7[0x11] = 0xf6c39062bb9edf3;
  plVar7[0x15] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    (*(code *)puVar8[1])(&puStack_3b8);
  }
  plVar13 = plVar7 + 1;
  if (puStack_268 != (undefined8 *)0x0) {
    (*(code *)puStack_268[1])(&puStack_268);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  plStack_370 = plVar13;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plStack_270 = plVar7 + 4;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &UNK_0f464c78;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = &UNK_0f464cc8;
  puVar8[0xe] = plStack_270;
  puVar8[0xf] = plVar7;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  bStack_3b0 = (byte)puVar8;
  uStack_3af = (undefined5)((ulong)puVar8 >> 8);
  uStack_3aa = (undefined2)((ulong)puVar8 >> 0x30);
  puStack_3b8 = puVar8 + 4;
  lStack_2a8 = param_1;
  pbStack_278 = pbVar2;
  puVar9 = (undefined4 *)func_0x05006da0(param_1,&uStack_2a0,1);
  plVar13 = plVar7 + 0x11;
  plVar10 = *(long **)(puVar9 + 0x24);
  if (plVar10 < *(long **)(puVar9 + 0x26)) {
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[4] = 0;
    if (plVar10 == plVar13) {
LAB_0d3e5e3a:
      *plVar10 = *plVar13;
      plVar10[5] = (long)(puVar8 + 4);
      plVar10[6] = (long)puVar8;
LAB_0d3e5ea3:
      LOCK();
      puVar8[1] = puVar8[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbStack_278 & 1) == 0) {
        plVar10[3] = *(long *)(pbStack_278 + 0x10);
        lVar14 = *(long *)(pbStack_278 + 8);
        plVar10[1] = *(long *)pbStack_278;
        plVar10[2] = lVar14;
        goto LAB_0d3e5e3a;
      }
      func_0x04885070(plVar10 + 1,plVar7[0x14],plVar7[0x13]);
      *plVar10 = *plVar13;
      puVar8 = (undefined8 *)CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0));
      plVar10[5] = (long)puStack_3b8;
      plVar10[6] = CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0));
      if (puVar8 != (undefined8 *)0x0) goto LAB_0d3e5ea3;
    }
    plVar10 = plVar10 + 7;
    *(long **)(puVar9 + 0x24) = plVar10;
  }
  else {
    plVar10 = (long *)func_0x0500a4a0(puVar9 + 0x22,plVar13,&puStack_3b8);
  }
  plVar13 = plStack_370;
  *(long **)(puVar9 + 0x24) = plVar10;
  uVar3 = *puVar9;
  uVar4 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  if (*(long *)(puVar9 + 2) != 0) {
    LOCK();
    plVar10 = (long *)(*(long *)(puVar9 + 2) + 8);
    *plVar10 = *plVar10 + 1;
    UNLOCK();
  }
  plVar10 = (long *)plVar7[0xf];
  *(undefined4 *)(plVar7 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar7 + 0x74) = uVar4;
  *(undefined4 *)(plVar7 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar7 + 0x7c) = uVar6;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  *(undefined1 *)(plVar7 + 0x10) = *(undefined1 *)((long)puVar9 + 0xa1);
  plVar10 = (long *)CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0));
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  LOCK();
  lVar14 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
    LOCK();
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
  }
  apuStack_e8[0] = &UNK_0f46db28;
  ppuStack_c8 = apuStack_e8;
  plVar13 = plVar7 + 0x36;
  plStack_398 = (long *)&puStack_3b8;
  puStack_3b8 = (undefined8 *)&UNK_0f46db28;
  lVar14 = 0x20;
  if ((undefined8 **)plVar13 == &puStack_3b8) {
LAB_0d3e60ac:
    lVar11 = lStack_2a8;
    (**(code **)(*plStack_398 + lVar14))();
  }
  else {
    plVar10 = (long *)plVar7[0x3a];
    if (plVar10 == plVar13) {
      puStack_268 = (undefined8 *)&UNK_0f46db28;
      plStack_398 = (long *)0x0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&puStack_3b8);
      (**(code **)(*(long *)plVar7[0x3a] + 0x20))();
      plVar7[0x3a] = 0;
      plStack_398 = (long *)&puStack_3b8;
      (*(code *)puStack_268[3])(&puStack_268,plVar13);
      (*(code *)puStack_268[4])(&puStack_268);
      plVar7[0x3a] = (long)plVar13;
      if ((undefined8 **)plStack_398 != &puStack_3b8) goto LAB_0d3e60a1;
      goto LAB_0d3e60ac;
    }
    plVar7[0x36] = (long)&UNK_0f46db28;
    plStack_398 = plVar10;
    plVar7[0x3a] = (long)plVar13;
    if ((undefined8 **)plVar10 == &puStack_3b8) goto LAB_0d3e60ac;
LAB_0d3e60a1:
    lVar14 = 0x28;
    lVar11 = lStack_2a8;
    if (plStack_398 != (long *)0x0) goto LAB_0d3e60ac;
  }
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  (**(code **)(*plStack_270 + 0x10))(plStack_270,&uStack_2c8);
  if ((uStack_2c8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
  }
  if (ppuStack_c8 == apuStack_e8) {
    lVar14 = 0x20;
  }
  else {
    lVar14 = 0x28;
    if (ppuStack_c8 == (undefined **)0x0) goto joined_r0x0d3e6669;
  }
  (**(code **)(*ppuStack_c8 + lVar14))();
joined_r0x0d3e6669:
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_298 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_288,
                       CONCAT17(uStack_291,CONCAT61(uStack_297,bStack_298)) & 0xfffffffffffffffe);
  }
  uStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a2 = 0;
  uStack_3a0 = 0;
  puStack_3b8 = (undefined8 *)0x0;
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  plStack_398 = (long *)0x0;
  func_0x0412f5e0(&bStack_3b0,&UNK_0148c43c,0x1f);
  puStack_3b8 = (undefined8 *)0x9634b0c86b4effc9;
  uStack_120 = 0;
  puStack_128 = &UNK_0f46dba8;
  plVar7 = (long *)func_0x0d3e69d0(lVar11,&puStack_3b8,0,&puStack_128);
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  auStack_2e8[0] = 0;
  auStack_2e8[1] = 0;
  auStack_2e8[2] = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,auStack_2e8);
  if ((auStack_2e8[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_2e8[2],auStack_2e8[0] & 0xfffffffffffffffe);
  }
  if (puStack_128 != (undefined *)0x0) {
    (**(code **)(puStack_128 + 8))(&puStack_128);
  }
  if ((bStack_3b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3a0,
                       CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0)) & 0xfffffffffffffffe);
  }
  uStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a2 = 0;
  uStack_3a0 = 0;
  puStack_3b8 = (undefined8 *)0x0;
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  plStack_398 = (long *)0x0;
  func_0x0412f5e0(&bStack_3b0,&UNK_0140b07f,0x21);
  puStack_3b8 = (undefined8 *)0x3bb506a76d2c4e6e;
  uStack_160 = 0;
  puStack_168 = &UNK_0f46dbc0;
  plVar7 = (long *)func_0x0d3e69d0(lVar11,&puStack_3b8,0,&puStack_168);
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  auStack_308[0] = 0;
  auStack_308[1] = 0;
  auStack_308[2] = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,auStack_308);
  if ((auStack_308[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_308[2],auStack_308[0] & 0xfffffffffffffffe);
  }
  if (puStack_168 != (undefined *)0x0) {
    (**(code **)(puStack_168 + 8))(&puStack_168);
  }
  if ((bStack_3b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3a0,
                       CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0)) & 0xfffffffffffffffe);
  }
  uStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a2 = 0;
  uStack_3a0 = 0;
  puStack_3b8 = (undefined8 *)0x0;
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  plStack_398 = (long *)0x0;
  func_0x0412f5e0(&bStack_3b0,&UNK_0148c45c,0x1e);
  puStack_3b8 = (undefined8 *)0xafaf24c1e3753ec6;
  uStack_1a0 = 0;
  puStack_1a8 = &UNK_0f46dbd8;
  plVar7 = (long *)func_0x0d3e69d0(lVar11,&puStack_3b8,0,&puStack_1a8);
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  auStack_328[0] = 0;
  auStack_328[1] = 0;
  auStack_328[2] = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,auStack_328);
  if ((auStack_328[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_328[2],auStack_328[0] & 0xfffffffffffffffe);
  }
  if (puStack_1a8 != (undefined *)0x0) {
    (**(code **)(puStack_1a8 + 8))(&puStack_1a8);
  }
  if ((bStack_3b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3a0,
                       CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0)) & 0xfffffffffffffffe);
  }
  uStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a2 = 0;
  uStack_3a0 = 0;
  puStack_3b8 = (undefined8 *)0x0;
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  plStack_398 = (long *)0x0;
  func_0x0412f5e0(&bStack_3b0,&UNK_013f19e6,0x20);
  puStack_3b8 = (undefined8 *)0x36ae6fdc2b990375;
  uStack_1e0 = 0;
  puStack_1e8 = &UNK_0f46dbf0;
  plVar7 = (long *)func_0x0d3e69d0(lVar11,&puStack_3b8,0,&puStack_1e8);
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  auStack_348[0] = 0;
  auStack_348[1] = 0;
  auStack_348[2] = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,auStack_348);
  if ((auStack_348[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_348[2],auStack_348[0] & 0xfffffffffffffffe);
  }
  if (puStack_1e8 != (undefined *)0x0) {
    (**(code **)(puStack_1e8 + 8))(&puStack_1e8);
  }
  if ((bStack_3b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3a0,
                       CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0)) & 0xfffffffffffffffe);
  }
  uStack_3a2 = 0;
  uStack_3a0 = 0;
  plStack_398 = (long *)0x0;
  bStack_3b0 = 0x1a;
  uStack_3af = 0x6372616573;
  uStack_3aa = 0x5f68;
  uStack_3a8 = 0x72;
  uStack_3a7 = 0x7375696461;
  puStack_3b8 = (undefined8 *)0x272c7dbfdff11a52;
  uStack_220 = 0;
  puStack_228 = &UNK_0f46dc08;
  plVar7 = (long *)func_0x0d3e69d0(lVar11,&puStack_3b8,1,&puStack_228);
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  auStack_368[0] = 0;
  auStack_368[1] = 0;
  auStack_368[2] = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,auStack_368);
  if ((auStack_368[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_368[2],auStack_368[0] & 0xfffffffffffffffe);
  }
  if (puStack_228 != (undefined *)0x0) {
    (**(code **)(puStack_228 + 8))(&puStack_228);
  }
  if ((bStack_3b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3a0,
                       CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0)) & 0xfffffffffffffffe);
  }
  uStack_b0 = 0;
  puStack_b8 = (undefined8 *)&UNK_0f46dc20;
  ppuVar12 = (undefined8 **)(lVar11 + 0xd0);
  if (ppuVar12 != &puStack_b8) {
    if ((*ppuVar12 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar12)[1])(ppuVar12), puStack_b8 != (undefined8 *)0x0)) {
      (*(code *)*puStack_b8)(&puStack_b8,ppuVar12);
    }
    else {
      puStack_b8 = (undefined8 *)0x0;
    }
    *ppuVar12 = puStack_b8;
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 */
