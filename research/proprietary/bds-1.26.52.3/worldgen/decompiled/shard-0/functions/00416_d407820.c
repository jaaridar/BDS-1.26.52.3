/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd507820 (ELF vaddr 0xd407820)
 * Label: callee-of:0x4de9260
 * Body:  [[0d507820, 0d5087b3]]
 * Ghidra: FUN_0d507820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d507820(long param_1)

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
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 **ppuVar14;
  long lVar15;
  undefined8 *puStack_5d8;
  uint uStack_5d0;
  undefined4 uStack_5cc;
  undefined1 uStack_5c8;
  undefined4 uStack_5c7;
  undefined1 uStack_5c3;
  undefined2 uStack_5c2;
  undefined1 uStack_5c0;
  undefined2 uStack_5bf;
  undefined2 uStack_5bd;
  undefined1 uStack_5bb;
  undefined2 uStack_5ba;
  long *plStack_5b8;
  undefined1 uStack_589;
  long *plStack_588;
  byte bStack_580;
  undefined7 uStack_57f;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined1 uStack_570;
  undefined7 uStack_56f;
  byte bStack_568;
  undefined7 uStack_567;
  undefined1 uStack_560;
  undefined7 uStack_55f;
  undefined1 uStack_558;
  undefined7 uStack_557;
  byte bStack_550;
  undefined7 uStack_54f;
  undefined1 uStack_548;
  undefined7 uStack_547;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  ulong auStack_538 [2];
  undefined4 *puStack_528;
  ulong auStack_520 [2];
  undefined4 *puStack_510;
  ulong auStack_508 [4];
  ulong auStack_4e8 [4];
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4a8;
  undefined8 uStack_4a0;
  byte bStack_498;
  undefined6 uStack_497;
  undefined1 uStack_491;
  undefined1 uStack_490;
  undefined6 uStack_48f;
  undefined1 uStack_489;
  undefined8 uStack_488;
  undefined8 uStack_480;
  byte *pbStack_478;
  long *plStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_268;
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
  
  uStack_488 = 0;
  uStack_480 = 0;
  bStack_498 = 0x1c;
  uStack_497 = 0x736563616c70;
  uStack_491 = 0x5f;
  uStack_490 = 0x66;
  uStack_48f = 0x657275746165;
  uStack_489 = 0;
  uStack_4a0 = 0x5f4748520f33cd82;
  uStack_70 = 0;
  uStack_460 = 0;
  lStack_78 = 0;
  puStack_468 = (undefined8 *)&UNK_0f474588;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  puStack_5d8 = puStack_468;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0f472af0;
  uStack_5d0 = 0;
  uStack_5cc = 0;
  puStack_468 = (undefined8 *)0x0;
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
  FUN_04aa75f0(plVar7 + 0xe,&uStack_589,&UNK_01254d89);
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
  plVar7[4] = (long)&UNK_0f472b40;
  plVar7[0x2e] = 0;
  plVar7[0x2f] = 0;
  if (puStack_5d8 == (undefined8 *)0x0) {
    plVar7[0x3a] = 0;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_5d8)(&puStack_5d8,plVar7 + 0x2e);
    puVar8 = puStack_5d8;
    puStack_5d8 = (undefined8 *)0x0;
    plVar7[0x2e] = (long)puVar8;
    plVar7[0x3a] = 0;
    if ((*(byte *)(plVar7 + 0x12) & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      thunk_FUN_0ee326a0(plVar7[0x14],plVar7[0x12] & 0xfffffffffffffffe);
      puVar8 = puStack_5d8;
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
    (*(code *)puVar8[1])(&puStack_5d8);
  }
  plVar12 = plVar7 + 1;
  if (puStack_468 != (undefined8 *)0x0) {
    (*(code *)puStack_468[1])(&puStack_468);
  }
  LOCK();
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  plStack_588 = plVar12;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plStack_470 = plVar7 + 4;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &UNK_0f472c20;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = &UNK_0f472c70;
  puVar8[0xe] = plStack_470;
  puVar8[0xf] = plVar7;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  uStack_5d0 = (uint)puVar8;
  uStack_5cc = (undefined4)((ulong)puVar8 >> 0x20);
  puStack_5d8 = puVar8 + 4;
  lStack_4a8 = param_1;
  pbStack_478 = pbVar2;
  puVar9 = (undefined4 *)func_0x04fac220(param_1,&uStack_4a0,1);
  plVar12 = plVar7 + 0x11;
  plVar10 = *(long **)(puVar9 + 0x24);
  if (plVar10 < *(long **)(puVar9 + 0x26)) {
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[4] = 0;
    if (plVar10 == plVar12) {
LAB_0d507b7a:
      *plVar10 = *plVar12;
      plVar10[5] = (long)(puVar8 + 4);
      plVar10[6] = (long)puVar8;
LAB_0d507be3:
      LOCK();
      puVar8[1] = puVar8[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbStack_478 & 1) == 0) {
        plVar10[3] = *(long *)(pbStack_478 + 0x10);
        lVar15 = *(long *)(pbStack_478 + 8);
        plVar10[1] = *(long *)pbStack_478;
        plVar10[2] = lVar15;
        goto LAB_0d507b7a;
      }
      func_0x04885070(plVar10 + 1,plVar7[0x14],plVar7[0x13]);
      *plVar10 = *plVar12;
      puVar8 = (undefined8 *)CONCAT44(uStack_5cc,uStack_5d0);
      plVar10[5] = (long)puStack_5d8;
      plVar10[6] = CONCAT44(uStack_5cc,uStack_5d0);
      if (puVar8 != (undefined8 *)0x0) goto LAB_0d507be3;
    }
    plVar10 = plVar10 + 7;
    *(long **)(puVar9 + 0x24) = plVar10;
  }
  else {
    plVar10 = (long *)func_0x04faf920(puVar9 + 0x22,plVar12,&puStack_5d8);
  }
  plVar12 = plStack_588;
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
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  *(undefined1 *)(plVar7 + 0x10) = *(undefined1 *)((long)puVar9 + 0xa1);
  plVar10 = (long *)CONCAT44(uStack_5cc,uStack_5d0);
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  LOCK();
  lVar15 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar15 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
    LOCK();
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
  }
  if (lVar15 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
  }
  apuStack_e8[0] = &UNK_0f4745b0;
  ppuStack_c8 = apuStack_e8;
  plVar12 = plVar7 + 0x36;
  plStack_5b8 = (long *)&puStack_5d8;
  puStack_5d8 = (undefined8 *)&UNK_0f4745b0;
  lVar15 = 0x20;
  if ((undefined8 **)plVar12 == &puStack_5d8) {
LAB_0d507dec:
    lVar13 = lStack_4a8;
    (**(code **)(*plStack_5b8 + lVar15))();
  }
  else {
    plVar10 = (long *)plVar7[0x3a];
    if (plVar10 == plVar12) {
      puStack_468 = (undefined8 *)&UNK_0f4745b0;
      plStack_5b8 = (long *)0x0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&puStack_5d8);
      (**(code **)(*(long *)plVar7[0x3a] + 0x20))();
      plVar7[0x3a] = 0;
      plStack_5b8 = (long *)&puStack_5d8;
      (*(code *)puStack_468[3])(&puStack_468,plVar12);
      (*(code *)puStack_468[4])(&puStack_468);
      plVar7[0x3a] = (long)plVar12;
      if ((undefined8 **)plStack_5b8 != &puStack_5d8) goto LAB_0d507de1;
      goto LAB_0d507dec;
    }
    plVar7[0x36] = (long)&UNK_0f4745b0;
    plStack_5b8 = plVar10;
    plVar7[0x3a] = (long)plVar12;
    if ((undefined8 **)plVar10 == &puStack_5d8) goto LAB_0d507dec;
LAB_0d507de1:
    lVar15 = 0x28;
    lVar13 = lStack_4a8;
    if (plStack_5b8 != (long *)0x0) goto LAB_0d507dec;
  }
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  (**(code **)(*plStack_470 + 0x10))(plStack_470,&uStack_4c8);
  if ((uStack_4c8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
  }
  if (ppuStack_c8 == apuStack_e8) {
    lVar15 = 0x20;
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_c8 == (undefined **)0x0) goto joined_r0x0d50874d;
  }
  (**(code **)(*ppuStack_c8 + lVar15))();
joined_r0x0d50874d:
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_498 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_488,
                       CONCAT17(uStack_491,CONCAT61(uStack_497,bStack_498)) & 0xfffffffffffffffe);
  }
  uStack_5bf = 0;
  uStack_5bd = 0;
  uStack_5bb = 0;
  uStack_5ba = 0;
  plStack_5b8 = (long *)0x0;
  uStack_5d0._1_3_ = (undefined3)_DAT_01338c0a;
  uStack_5d0 = CONCAT31(uStack_5d0._1_3_,0x20);
  uStack_5cc._1_3_ = (undefined3)_UNK_01338c0e;
  uStack_5cc = CONCAT31(uStack_5cc._1_3_,(char)((uint)_DAT_01338c0a >> 0x18));
  uStack_5c8 = (undefined1)((uint)_UNK_01338c0e >> 0x18);
  uStack_5c7 = _UNK_01338c12;
  uStack_5c3 = (undefined1)_UNK_01338c16;
  uStack_5c2 = (undefined2)((uint)_UNK_01338c16 >> 8);
  uStack_5c0 = (undefined1)((uint)_UNK_01338c16 >> 0x18);
  puStack_5d8 = (undefined8 *)0xa01fb2ddc06bc1d6;
  uStack_120 = 0;
  puStack_128 = &UNK_0f474828;
  plVar7 = (long *)func_0x0d508c40(lVar13,&puStack_5d8,&puStack_128);
  puStack_510 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_510 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar11 = _UNK_01302725;
  auStack_520[0] = 0x21;
  auStack_520[1] = 0x1e;
  *(ulong *)((long)puStack_510 + 0xe) = CONCAT62(_UNK_0130271f,_DAT_0130271d);
  *(undefined8 *)((long)puStack_510 + 0x16) = uVar11;
  uVar5 = _UNK_01302717;
  uVar4 = _UNK_01302713;
  uVar3 = CONCAT22(_DAT_0130271d,_UNK_0130271b);
  *puStack_510 = _DAT_0130270f;
  puStack_510[1] = uVar4;
  puStack_510[2] = uVar5;
  puStack_510[3] = uVar3;
  *(undefined1 *)((long)puStack_510 + 0x1e) = 0;
  uVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,auStack_520);
  if ((auStack_520[0] & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_510,auStack_520[0] & 0xfffffffffffffffe);
  }
  if (puStack_128 != (undefined *)0x0) {
    (**(code **)(puStack_128 + 8))(&puStack_128);
  }
  if ((uStack_5d0 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_5ba,
                                CONCAT15(uStack_5bb,
                                         CONCAT23(uStack_5bd,CONCAT21(uStack_5bf,uStack_5c0)))),
                       CONCAT44(uStack_5cc,uStack_5d0) & 0xfffffffffffffffe);
  }
  uStack_160 = 0;
  puStack_168 = &UNK_0f474840;
  func_0x0d509170(uVar11,0,0,&puStack_168);
  if (puStack_168 != (undefined *)0x0) {
    (**(code **)(puStack_168 + 8))(&puStack_168);
  }
  uStack_1a0 = 0;
  puStack_1a8 = &UNK_0f474858;
  func_0x0d509170(uVar11,1,1,&puStack_1a8);
  if (puStack_1a8 != (undefined *)0x0) {
    (**(code **)(puStack_1a8 + 8))(&puStack_1a8);
  }
  uStack_1e0 = 0;
  puStack_1e8 = &UNK_0f474870;
  func_0x0d509170(uVar11,2,2,&puStack_1e8);
  if (puStack_1e8 != (undefined *)0x0) {
    (**(code **)(puStack_1e8 + 8))(&puStack_1e8);
  }
  uStack_5bf = 0;
  uStack_5bd = 0;
  uStack_5bb = 0;
  uStack_5ba = 0;
  plStack_5b8 = (long *)0x0;
  uStack_5d0._1_3_ = (undefined3)_DAT_0130272e;
  uStack_5d0 = CONCAT31(uStack_5d0._1_3_,0x20);
  uStack_5cc._1_3_ = (undefined3)_UNK_01302732;
  uStack_5cc = CONCAT31(uStack_5cc._1_3_,(char)((uint)_DAT_0130272e >> 0x18));
  uStack_5c8 = (undefined1)((uint)_UNK_01302732 >> 0x18);
  uStack_5c7 = _UNK_01302736;
  uStack_5c3 = (undefined1)_UNK_0130273a;
  uStack_5c2 = (undefined2)((uint)_UNK_0130273a >> 8);
  uStack_5c0 = (undefined1)((uint)_UNK_0130273a >> 0x18);
  puStack_5d8 = (undefined8 *)0xa01faaddc06bb458;
  uStack_220 = 0;
  puStack_228 = &UNK_0f474888;
  plVar7 = (long *)func_0x0d508c40(lVar13,&puStack_5d8,&puStack_228);
  puStack_528 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_528 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar11 = _UNK_01302725;
  auStack_538[0] = 0x21;
  auStack_538[1] = 0x1e;
  *(ulong *)((long)puStack_528 + 0xe) = CONCAT62(_UNK_0130271f,_DAT_0130271d);
  *(undefined8 *)((long)puStack_528 + 0x16) = uVar11;
  uVar5 = _UNK_01302717;
  uVar4 = _UNK_01302713;
  uVar3 = CONCAT22(_DAT_0130271d,_UNK_0130271b);
  *puStack_528 = _DAT_0130270f;
  puStack_528[1] = uVar4;
  puStack_528[2] = uVar5;
  puStack_528[3] = uVar3;
  *(undefined1 *)((long)puStack_528 + 0x1e) = 0;
  uVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,auStack_538);
  if ((auStack_538[0] & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_528,auStack_538[0] & 0xfffffffffffffffe);
  }
  if (puStack_228 != (undefined *)0x0) {
    (**(code **)(puStack_228 + 8))(&puStack_228);
  }
  if ((uStack_5d0 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_5ba,
                                CONCAT15(uStack_5bb,
                                         CONCAT23(uStack_5bd,CONCAT21(uStack_5bf,uStack_5c0)))),
                       CONCAT44(uStack_5cc,uStack_5d0) & 0xfffffffffffffffe);
  }
  uStack_260 = 0;
  puStack_268 = &UNK_0f4748a0;
  func_0x0d509170(uVar11,0,0,&puStack_268);
  if (puStack_268 != (undefined *)0x0) {
    (**(code **)(puStack_268 + 8))(&puStack_268);
  }
  uStack_2a0 = 0;
  puStack_2a8 = &UNK_0f4748b8;
  func_0x0d509170(uVar11,1,1,&puStack_2a8);
  if (puStack_2a8 != (undefined *)0x0) {
    (**(code **)(puStack_2a8 + 8))(&puStack_2a8);
  }
  uStack_2e0 = 0;
  puStack_2e8 = &UNK_0f4748d0;
  func_0x0d509170(uVar11,2,2,&puStack_2e8);
  if (puStack_2e8 != (undefined *)0x0) {
    (**(code **)(puStack_2e8 + 8))(&puStack_2e8);
  }
  uStack_5c8 = 0;
  uStack_5c7 = 0;
  uStack_5c3 = 0;
  uStack_5c2 = 0;
  uStack_5c0 = 0;
  uStack_5bf = 0;
  uStack_5bd = 0;
  uStack_5bb = 0;
  uStack_5ba = 0;
  plStack_5b8 = (long *)0x0;
  uStack_5d0 = 0x645f790e;
  uStack_5cc = 0x61746c65;
  puStack_5d8 = (undefined8 *)0xf6c2f15d2990c0a5;
  uStack_320 = 0;
  puStack_328 = &UNK_0f4748e8;
  plVar7 = (long *)func_0x0d509de0(lVar13,&puStack_5d8,1,&puStack_328);
  bStack_550 = 0x1e;
  uStack_54f = 0x61746c65442059;
  uStack_548 = 0x20;
  uStack_547 = 0x53414220726f66;
  uStack_540 = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,&bStack_550);
  if ((bStack_550 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT71(uStack_53f,uStack_540),
                       CONCAT71(uStack_54f,bStack_550) & 0xfffffffffffffffe);
  }
  if (puStack_328 != (undefined *)0x0) {
    (**(code **)(puStack_328 + 8))(&puStack_328);
  }
  if ((uStack_5d0 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_5ba,
                                CONCAT15(uStack_5bb,
                                         CONCAT23(uStack_5bd,CONCAT21(uStack_5bf,uStack_5c0)))),
                       CONCAT44(uStack_5cc,uStack_5d0) & 0xfffffffffffffffe);
  }
  uStack_5bd = 0;
  uStack_5bb = 0;
  uStack_5ba = 0;
  plStack_5b8 = (long *)0x0;
  uStack_5d0._1_3_ = (undefined3)_DAT_0130273f;
  uStack_5d0 = CONCAT31(uStack_5d0._1_3_,0x24);
  uStack_5cc._1_3_ = (undefined3)_UNK_01302743;
  uStack_5cc = CONCAT31(uStack_5cc._1_3_,(char)((uint)_DAT_0130273f >> 0x18));
  uStack_5c8 = (undefined1)((uint)_UNK_01302743 >> 0x18);
  uStack_5c7 = _UNK_01302747;
  uStack_5c3 = (undefined1)_UNK_0130274b;
  uStack_5c2 = (undefined2)((uint)_UNK_0130274b >> 8);
  uStack_5c0 = (undefined1)((uint)_UNK_0130274b >> 0x18);
  uStack_5bf = 0x6570;
  puStack_5d8 = (undefined8 *)0x3130601291e67257;
  uStack_360 = 0;
  puStack_368 = &UNK_0f474900;
  plVar7 = (long *)func_0x0d50a3a0(lVar13,&puStack_5d8,&puStack_368);
  auStack_4e8[0] = 0;
  auStack_4e8[1] = 0;
  auStack_4e8[2] = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,auStack_4e8);
  if ((auStack_4e8[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_4e8[2],auStack_4e8[0] & 0xfffffffffffffffe);
  }
  if (puStack_368 != (undefined *)0x0) {
    (**(code **)(puStack_368 + 8))(&puStack_368);
  }
  if ((uStack_5d0 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_5ba,
                                CONCAT15(uStack_5bb,
                                         CONCAT23(uStack_5bd,CONCAT21(uStack_5bf,uStack_5c0)))),
                       CONCAT44(uStack_5cc,uStack_5d0) & 0xfffffffffffffffe);
  }
  uStack_5ba = 0;
  plStack_5b8 = (long *)0x0;
  uStack_5d0._1_3_ = (undefined3)_DAT_01353964;
  uStack_5d0 = CONCAT31(uStack_5d0._1_3_,0x2a);
  uStack_5cc._1_3_ = (undefined3)_UNK_01353968;
  uStack_5cc = CONCAT31(uStack_5cc._1_3_,(char)((uint)_DAT_01353964 >> 0x18));
  uStack_5c8 = (undefined1)((uint)_UNK_01353968 >> 0x18);
  uStack_5c7 = _UNK_0135396c;
  uStack_5c3 = (undefined1)_UNK_01353970;
  uStack_5c2 = 0x636f;
  uStack_5c0 = 0x6b;
  uStack_5bf = 0x745f;
  uStack_5bd = 0x7079;
  uStack_5bb = 0x65;
  puStack_5d8 = (undefined8 *)0x5010a41b6b922d5b;
  uStack_3a0 = 0;
  puStack_3a8 = &UNK_0f474918;
  plVar7 = (long *)func_0x0d50a3a0(lVar13,&puStack_5d8,&puStack_3a8);
  auStack_508[0] = 0;
  auStack_508[1] = 0;
  auStack_508[2] = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,auStack_508);
  if ((auStack_508[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_508[2],auStack_508[0] & 0xfffffffffffffffe);
  }
  if (puStack_3a8 != (undefined *)0x0) {
    (**(code **)(puStack_3a8 + 8))(&puStack_3a8);
  }
  if ((uStack_5d0 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_5ba,
                                CONCAT15(uStack_5bb,
                                         CONCAT23(uStack_5bd,CONCAT21(uStack_5bf,uStack_5c0)))),
                       CONCAT44(uStack_5cc,uStack_5d0) & 0xfffffffffffffffe);
  }
  uStack_5bb = 0;
  uStack_5ba = 0;
  plStack_5b8 = (long *)0x0;
  uStack_5d0._1_3_ = (undefined3)_DAT_0140b123;
  uStack_5d0 = CONCAT31(uStack_5d0._1_3_,0x28);
  uStack_5cc._1_3_ = (undefined3)_UNK_0140b127;
  uStack_5cc = CONCAT31(uStack_5cc._1_3_,(char)((uint)_DAT_0140b123 >> 0x18));
  uStack_5c8 = (undefined1)((uint)_UNK_0140b127 >> 0x18);
  uStack_5c7 = _UNK_0140b12b;
  uStack_5c3 = (undefined1)_UNK_0140b12f;
  uStack_5c2 = (undefined2)((uint)_UNK_0140b12f >> 8);
  uStack_5c0 = (undefined1)((uint)_UNK_0140b12f >> 0x18);
  uStack_5bf = 27999;
  uStack_5bd = 0x6e69;
  puStack_5d8 = (undefined8 *)0x730fbdc6fcae2596;
  uStack_3e0 = 0;
  puStack_3e8 = &UNK_0f474930;
  plVar7 = (long *)func_0x0d509de0(lVar13,&puStack_5d8,0,&puStack_3e8);
  bStack_568 = 0x1e;
  uStack_567 = 0x61746c65442059;
  uStack_560 = 0x20;
  uStack_55f = 0x53414220726f66;
  uStack_558 = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,&bStack_568);
  if ((bStack_568 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT71(uStack_557,uStack_558),
                       CONCAT71(uStack_567,bStack_568) & 0xfffffffffffffffe);
  }
  if (puStack_3e8 != (undefined *)0x0) {
    (**(code **)(puStack_3e8 + 8))(&puStack_3e8);
  }
  if ((uStack_5d0 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_5ba,
                                CONCAT15(uStack_5bb,
                                         CONCAT23(uStack_5bd,CONCAT21(uStack_5bf,uStack_5c0)))),
                       CONCAT44(uStack_5cc,uStack_5d0) & 0xfffffffffffffffe);
  }
  uStack_5bb = 0;
  uStack_5ba = 0;
  plStack_5b8 = (long *)0x0;
  uStack_5d0._1_3_ = (undefined3)_DAT_0140b138;
  uStack_5d0 = CONCAT31(uStack_5d0._1_3_,0x28);
  uStack_5cc._1_3_ = (undefined3)_UNK_0140b13c;
  uStack_5cc = CONCAT31(uStack_5cc._1_3_,(char)((uint)_DAT_0140b138 >> 0x18));
  uStack_5c8 = (undefined1)((uint)_UNK_0140b13c >> 0x18);
  uStack_5c7 = _UNK_0140b140;
  uStack_5c3 = (undefined1)_UNK_0140b144;
  uStack_5c2 = (undefined2)((uint)_UNK_0140b144 >> 8);
  uStack_5c0 = (undefined1)((uint)_UNK_0140b144 >> 0x18);
  uStack_5bf = 27999;
  uStack_5bd = 0x7861;
  puStack_5d8 = (undefined8 *)0x730fb5c6fcae1818;
  uStack_420 = 0;
  puStack_428 = &UNK_0f474948;
  plVar7 = (long *)func_0x0d509de0(lVar13,&puStack_5d8,0,&puStack_428);
  bStack_580 = 0x1e;
  uStack_57f = 0x61746c65442059;
  uStack_578 = 0x20;
  uStack_577 = 0x53414220726f66;
  uStack_570 = 0;
  (**(code **)(*plVar7 + 0x10))(plVar7,&bStack_580);
  if ((bStack_580 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT71(uStack_56f,uStack_570),
                       CONCAT71(uStack_57f,bStack_580) & 0xfffffffffffffffe);
  }
  if (puStack_428 != (undefined *)0x0) {
    (**(code **)(puStack_428 + 8))(&puStack_428);
  }
  if ((uStack_5d0 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT26(uStack_5ba,
                                CONCAT15(uStack_5bb,
                                         CONCAT23(uStack_5bd,CONCAT21(uStack_5bf,uStack_5c0)))),
                       CONCAT44(uStack_5cc,uStack_5d0) & 0xfffffffffffffffe);
  }
  uStack_b0 = 0;
  puStack_b8 = (undefined8 *)&UNK_0f474960;
  ppuVar14 = (undefined8 **)(lVar13 + 0xd0);
  if (ppuVar14 != &puStack_b8) {
    if ((*ppuVar14 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar14)[1])(ppuVar14), puStack_b8 != (undefined8 *)0x0)) {
      (*(code *)*puStack_b8)(&puStack_b8,ppuVar14);
    }
    else {
      puStack_b8 = (undefined8 *)0x0;
    }
    *ppuVar14 = puStack_b8;
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x130270f  Dimensions of the Bounding Box
 * 0x130271d  the Bounding Box
 * 0x130272e  bounding_box_max
 * 0x130273f  surface_block_type
 * 0x1338c0a  bounding_box_min
 * 0x1353964  subsurface_block_type
 * 0x140b123  beard_raggedness_min
 * 0x140b138  beard_raggedness_max
 */
