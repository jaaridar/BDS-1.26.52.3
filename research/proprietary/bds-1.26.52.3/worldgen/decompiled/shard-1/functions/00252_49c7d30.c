/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4ac7d30 (ELF vaddr 0x49c7d30)
 * Label: callee-of:0x4de9260
 * Body:  [[04ac7d30, 04ac858b] [04ac8590, 04ac8e38]]
 * Ghidra: FUN_04ac7d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04ac7d30(undefined8 param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long **pplVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long ***ppplVar11;
  undefined8 *puVar12;
  long **pplVar13;
  undefined4 *puVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 **ppuVar18;
  bool bVar19;
  long ***ppplStack_4d8;
  byte bStack_4d0;
  undefined4 uStack_4cf;
  uint uStack_4cb;
  undefined4 uStack_4c7;
  undefined4 uStack_4c3;
  undefined1 uStack_4bf;
  undefined6 uStack_4be;
  undefined8 uStack_4b8;
  long **pplStack_498;
  long **pplStack_490;
  long **pplStack_488;
  long ***ppplStack_478;
  long *plStack_450;
  undefined *puStack_448;
  byte bStack_440;
  undefined6 uStack_43f;
  undefined1 uStack_439;
  undefined1 uStack_438;
  undefined4 uStack_437;
  undefined2 uStack_433;
  undefined1 uStack_431;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long ***ppplStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_218;
  byte bStack_210;
  undefined7 uStack_20f;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint *puStack_1f0;
  undefined8 uStack_1e8;
  long ***ppplStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *apuStack_d8 [4];
  undefined **ppuStack_b8;
  undefined *apuStack_a8 [4];
  undefined **ppuStack_88;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_4c3 = 0;
  uStack_4bf = 0;
  uStack_4be = 0;
  uStack_4b8 = 0;
  bStack_4d0 = 0x12;
  uStack_4cf = 0x6c6c6966;
  uStack_4cb = 0x7469775f;
  uStack_4c7 = 0x68;
  ppplStack_4d8 = (long ***)0x77d7e7533726e31;
  uStack_110 = 0;
  puStack_118 = &UNK_0ef58208;
  plVar9 = (long *)func_0x04ac9440(param_1,&ppplStack_4d8,&puStack_118);
  apuStack_a8[0] = &UNK_0ef58230;
  pplStack_498 = (long **)&UNK_0ef58230;
  ppplStack_478 = &pplStack_498;
  ppuStack_88 = apuStack_a8;
  func_0x04b07f70(&pplStack_498,plVar9 + 0x32);
  if (ppplStack_478 == &pplStack_498) {
    lVar10 = 0x20;
LAB_04ac7dfe:
    (**(code **)((long)*ppplStack_478 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (ppplStack_478 != (long ***)0x0) goto LAB_04ac7dfe;
  }
  uStack_190 = 0;
  puStack_198 = (undefined8 *)&UNK_0ef582b0;
  ppuVar18 = (undefined8 **)(plVar9 + 0x22);
  if (ppuVar18 != &puStack_198) {
    if ((*ppuVar18 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar18)[1])(ppuVar18), puStack_198 != (undefined8 *)0x0)) {
      (*(code *)*puStack_198)(&puStack_198,ppuVar18);
      puVar12 = puStack_198;
    }
    else {
      puVar12 = (undefined8 *)0x0;
    }
    puStack_198 = (undefined8 *)0x0;
    *ppuVar18 = puVar12;
  }
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_2b8);
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  if (puStack_198 != (undefined8 *)0x0) {
    (*(code *)puStack_198[1])(&puStack_198);
  }
  if (ppuStack_88 == apuStack_a8) {
    lVar10 = 0x20;
LAB_04ac80b7:
    (**(code **)(*ppuStack_88 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (ppuStack_88 != (undefined **)0x0) goto LAB_04ac80b7;
  }
  if (puStack_118 != (undefined *)0x0) {
    (**(code **)(puStack_118 + 8))(&puStack_118);
  }
  if ((bStack_4d0 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_4be,CONCAT11(uStack_4bf,uStack_4c3._3_1_)),
                    CONCAT35((undefined3)uStack_4cb,CONCAT41(uStack_4cf,bStack_4d0)) &
                    0xfffffffffffffffe);
  }
  uStack_430 = 0;
  uStack_428 = 0;
  bStack_440 = 0x1c;
  uStack_43f = 0x5f6874646977;
  uStack_439 = 0x6d;
  uStack_438 = 0x6f;
  uStack_437 = 0x69666964;
  uStack_433 = 0x7265;
  uStack_431 = 0;
  puStack_448 = (undefined *)0x5751c535b8649bd;
  uStack_70 = 0;
  bStack_4d0 = 0;
  uStack_4cf = 0;
  uStack_4cb = uStack_4cb & 0xff000000;
  lStack_78 = 0;
  ppplStack_4d8 = (long ***)&UNK_0ef584a8;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  pplStack_498 = (long **)ppplStack_4d8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef582d8;
  pplStack_490 = (long **)0x0;
  ppplStack_4d8 = (long ***)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&ppplStack_378,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0ef58328;
  plVar9[0x2e] = 0;
  plVar9[0x2f] = 0;
  if ((long ***)pplStack_498 == (long ***)0x0) {
    ppplVar11 = (long ***)0x0;
  }
  else {
    (*(code *)*pplStack_498)(&pplStack_498,plVar9 + 0x2e);
    ppplVar11 = (long ***)pplStack_498;
  }
  plStack_400 = plVar9 + 4;
  pplStack_498 = (long **)0x0;
  plVar9[0x2e] = (long)ppplVar11;
  ppplVar11 = (long ***)(plVar9 + 0x36);
  plVar9[0x36] = 0;
  plVar9[0x37] = 0;
  plVar9[0x38] = 0;
  uStack_370 = uStack_370 & 0xffffffffffffff00;
  ppplStack_378 = ppplVar11;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plStack_450 = plVar9 + 0x11;
  plVar9[0x36] = (long)puVar12;
  plVar9[0x38] = (long)(puVar12 + 5);
  puVar12[4] = 0;
  puVar12[1] = 0x746c75616665640e;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0xdead4915c9c6c0d8;
  plVar9[0x37] = (long)(puVar12 + 5);
  puVar2 = (uint *)(plVar9 + 0x12);
  if (plStack_450 != (long *)&DAT_0f5520d8) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        plVar9[0x14] = _DAT_0f5520f0;
        uVar5 = uRam000000000f5520ec;
        uVar4 = _DAT_0f5520e8;
        uVar3 = uRam000000000f5520e4;
        *puVar2 = _DAT_0f5520e0;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar3;
        *(undefined4 *)(plVar9 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar19 = (_DAT_0f5520e0 & 1) != 0;
      lVar10 = 0xf5520e1;
      if (bVar19) {
        lVar10 = _DAT_0f5520f0;
      }
      uVar16 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar19) {
        uVar16 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      func_0x04885120(puVar2,lVar10,uVar16);
    }
  }
  plVar9[0x11] = _DAT_0f5520d8;
  plVar9[0x15] = 0;
  ppplStack_1e0 = ppplVar11;
  if (pplStack_498 != (long **)0x0) {
    (*(code *)pplStack_498[1])(&pplStack_498);
  }
  plVar17 = plVar9 + 1;
  if (ppplStack_4d8 != (long ***)0x0) {
    (*(code *)ppplStack_4d8[1])(&ppplStack_4d8);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puStack_1f0 = puVar2;
  pplVar13 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pplVar13 == (long **)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pplVar13[1] = (long *)0x0;
  pplVar13[2] = (long *)0x0;
  *pplVar13 = (long *)&UNK_0ef58408;
  pplVar13[6] = (long *)0x0;
  pplVar13[7] = (long *)0x0;
  pplVar13[4] = (long *)&UNK_0ef58458;
  pplVar13[0xe] = plStack_400;
  pplVar13[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  pplStack_498 = pplVar13 + 4;
  pplStack_490 = pplVar13;
  uStack_1e8 = param_1;
  puVar14 = (undefined4 *)func_0x04af7760(param_1,&puStack_448,0);
  plVar15 = *(long **)(puVar14 + 0x24);
  if (plVar15 < *(long **)(puVar14 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if (plVar15 == plStack_450) {
LAB_04ac8340:
      *plVar15 = *plStack_450;
      plVar15[5] = (long)(pplVar13 + 4);
      plVar15[6] = (long)pplVar13;
LAB_04ac83b3:
      LOCK();
      pplVar13[1] = (long *)((long)pplVar13[1] + 1);
      UNLOCK();
    }
    else {
      if ((*puStack_1f0 & 1) == 0) {
        plVar15[3] = *(long *)(puStack_1f0 + 4);
        lVar10 = *(long *)(puStack_1f0 + 2);
        plVar15[1] = *(long *)puStack_1f0;
        plVar15[2] = lVar10;
        goto LAB_04ac8340;
      }
      func_0x04885070(plVar15 + 1,plVar9[0x14],plVar9[0x13]);
      *plVar15 = *plStack_450;
      plVar15[5] = (long)pplStack_498;
      plVar15[6] = (long)pplStack_490;
      pplVar13 = pplStack_490;
      if (pplStack_490 != (long **)0x0) goto LAB_04ac83b3;
    }
    plVar15 = plVar15 + 7;
    *(long **)(puVar14 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x04af9b30(puVar14 + 0x22,plStack_450,&pplStack_498);
  }
  uVar8 = uStack_1e8;
  *(long **)(puVar14 + 0x24) = plVar15;
  uVar3 = *puVar14;
  uVar4 = puVar14[1];
  uVar5 = puVar14[2];
  uVar6 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar4;
  *(undefined4 *)(plVar9 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  pplVar13 = pplStack_490;
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  if (pplStack_490 != (long **)0x0) {
    LOCK();
    plVar15 = (long *)(pplStack_490 + 1);
    lVar10 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)((long)*pplStack_490 + 0x10))(pplStack_490);
      func_0x0412c2d0(pplVar13);
    }
  }
  LOCK();
  lVar10 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar10 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar10 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  pplStack_498 = (long **)0x0;
  pplStack_490 = (long **)0x0;
  pplStack_488 = (long **)0x0;
  bStack_4d0 = 0;
  ppplStack_4d8 = &pplStack_498;
  pplVar13 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  ppplVar11 = ppplStack_1e0;
  if (pplVar13 == (long **)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  pplStack_490 = pplVar13 + 5;
  pplVar13[4] = (long *)0x0;
  pplVar13[1] = (long *)0x675f646c726f7712;
  pplVar13[2] = (long *)0x6e65;
  pplVar13[3] = (long *)0x0;
  *pplVar13 = (long *)0x838dddc83a29ed6c;
  pplStack_498 = pplVar13;
  pplStack_488 = pplStack_490;
  if (ppplVar11 != &pplStack_498) {
    func_0x04ab5020(ppplVar11,pplVar13,pplStack_490,1);
  }
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  (**(code **)(*plStack_400 + 0x10))(plStack_400,&uStack_2d8);
  if ((uStack_2d8 & 1) != 0) {
    func_0x0412a280(uStack_2c8,uStack_2d8 & 0xfffffffffffffffe);
  }
  pplVar7 = pplStack_498;
  pplVar13 = pplStack_490;
  if (pplStack_498 != (long **)0x0) {
    for (; pplVar7 != pplVar13; pplVar13 = pplVar13 + -5) {
      if (((ulong)pplVar13[-4] & 1) != 0) {
        func_0x0412a280(pplVar13[-2],(ulong)pplVar13[-4] & 0xfffffffffffffffe);
      }
    }
    pplStack_490 = pplVar7;
    func_0x0412a280(pplStack_498,(long)pplStack_488 - (long)pplStack_498);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_440 & 1) != 0) {
    func_0x0412a280(uStack_430,
                    CONCAT17(uStack_439,CONCAT61(uStack_43f,bStack_440)) & 0xfffffffffffffffe);
  }
  uStack_4be = 0;
  uStack_4b8 = 0;
  bStack_4d0 = 0x22;
  uStack_4cf = _DAT_01390437;
  uStack_4cb = _UNK_0139043b;
  uStack_4c7 = _UNK_0139043f;
  uStack_4c3 = _UNK_01390443;
  uStack_4bf = 0x65;
  ppplStack_4d8 = (long ***)0x3eebd3795c271f3f;
  pplStack_490 = (long **)0x0;
  pplStack_498 = (long **)&UNK_0ef586a0;
  plVar9 = (long *)func_0x04b02740(uVar8,&ppplStack_4d8,&pplStack_498);
  *(undefined4 *)(plVar9 + 0x2a) = 1;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_2f8);
  if ((uStack_2f8 & 1) != 0) {
    func_0x0412a280(uStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
  }
  if (pplStack_498 != (long **)0x0) {
    (*(code *)pplStack_498[1])(&pplStack_498);
  }
  if ((bStack_4d0 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_4be,CONCAT11(uStack_4bf,uStack_4c3._3_1_)),
                    CONCAT35((undefined3)uStack_4cb,CONCAT41(uStack_4cf,bStack_4d0)) &
                    0xfffffffffffffffe);
  }
  uStack_433 = 0;
  uStack_431 = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  bStack_440 = 0x18;
  uStack_43f = 0x746867696568;
  uStack_439 = 0x5f;
  uStack_438 = 0x6c;
  uStack_437 = 0x74696d69;
  puStack_448 = (undefined *)0xac50df0eb8094824;
  bStack_4d0 = 0;
  uStack_4cf = 0;
  uStack_4cb = uStack_4cb & 0xff000000;
  ppplStack_4d8 = (long ***)&UNK_0ef586b8;
  plVar9 = (long *)func_0x04b02740(uVar8,&puStack_448,&ppplStack_4d8);
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_318);
  if ((uStack_318 & 1) != 0) {
    func_0x0412a280(uStack_308,uStack_318 & 0xfffffffffffffffe);
  }
  if (ppplStack_4d8 != (long ***)0x0) {
    (*(code *)ppplStack_4d8[1])(&ppplStack_4d8);
  }
  if ((bStack_440 & 1) != 0) {
    func_0x0412a280(uStack_430,
                    CONCAT17(uStack_439,CONCAT61(uStack_43f,bStack_440)) & 0xfffffffffffffffe);
  }
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_370 = 0x656c6163735f790e;
  ppplStack_378 = (long ***)0x9701eee01c5c5fcd;
  bStack_440 = 0;
  uStack_43f = 0;
  uStack_439 = 0;
  puStack_448 = &UNK_0ef588b0;
  plVar9 = (long *)func_0x04b02cf0(uVar8,&ppplStack_378,&puStack_448);
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_338);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(uStack_328,uStack_338 & 0xfffffffffffffffe);
  }
  if (puStack_448 != (undefined *)0x0) {
    (**(code **)(puStack_448 + 8))(&puStack_448);
  }
  if ((uStack_370 & 1) != 0) {
    func_0x0412a280(uStack_360,uStack_370 & 0xfffffffffffffffe);
  }
  uStack_248 = 0;
  uStack_240 = 0;
  puStack_258 = (undefined *)0x0;
  uStack_250 = 0;
  uStack_238 = 0;
  FUN_0412f5e0(&uStack_250,&UNK_01325212,0x1c);
  puStack_258 = (undefined *)0xc66c91e1f6dac4f0;
  uStack_370 = 0;
  ppplStack_378 = (long ***)&UNK_0ef588c8;
  plVar9 = (long *)func_0x04b02cf0(uVar8,&puStack_258,&ppplStack_378);
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_398);
  if ((uStack_398 & 1) != 0) {
    func_0x0412a280(uStack_388,uStack_398 & 0xfffffffffffffffe);
  }
  if (ppplStack_378 != (long ***)0x0) {
    (*(code *)ppplStack_378[1])(&ppplStack_378);
  }
  if ((uStack_250 & 1) != 0) {
    func_0x0412a280(uStack_240,uStack_250 & 0xfffffffffffffffe);
  }
  uStack_288 = 0;
  uStack_280 = 0;
  puStack_298 = (undefined *)0x0;
  uStack_290 = 0;
  uStack_278 = 0;
  FUN_0412f5e0(&uStack_290,&UNK_013abf6f,0x1a);
  puStack_298 = (undefined *)0x7f207cc341c390c2;
  uStack_250 = 0;
  puStack_258 = &UNK_0ef588e0;
  plVar9 = (long *)func_0x04b02cf0(uVar8,&puStack_298,&puStack_258);
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_3b8);
  if ((uStack_3b8 & 1) != 0) {
    func_0x0412a280(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  if (puStack_258 != (undefined *)0x0) {
    (**(code **)(puStack_258 + 8))(&puStack_258);
  }
  if ((uStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,uStack_290 & 0xfffffffffffffffe);
  }
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  bStack_210 = 0x16;
  uStack_20f = 0x6c5f726f6f6c66;
  uStack_208 = 0x6c657665;
  uStack_218 = 0x5ed3df45244f40be;
  uStack_290 = 0;
  puStack_298 = &UNK_0ef588f8;
  plVar9 = (long *)func_0x04b02cf0(uVar8,&uStack_218,&puStack_298);
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_3d8);
  if ((uStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,uStack_3d8 & 0xfffffffffffffffe);
  }
  if (puStack_298 != (undefined *)0x0) {
    (**(code **)(puStack_298 + 8))(&puStack_298);
  }
  if ((bStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,CONCAT71(uStack_20f,bStack_210) & 0xfffffffffffffffe);
  }
  uStack_4bf = 0;
  uStack_4be = 0;
  uStack_4b8 = 0;
  bStack_4d0 = 0x20;
  uStack_4cf = _DAT_01221f84;
  uStack_4cb = _UNK_01221f88;
  uStack_4c7 = _UNK_01221f8c;
  uStack_4c3 = _UNK_01221f90;
  ppplStack_4d8 = (long ***)0x38e9907c74fb0521;
  uStack_150 = 0;
  puStack_158 = &UNK_0ef58910;
  plVar9 = (long *)func_0x04ac9440(uVar8,&ppplStack_4d8,&puStack_158);
  apuStack_d8[0] = &UNK_0ef58938;
  pplStack_498 = (long **)&UNK_0ef58938;
  ppplStack_478 = &pplStack_498;
  ppuStack_b8 = apuStack_d8;
  func_0x04b07f70(&pplStack_498,plVar9 + 0x32);
  if (ppplStack_478 == &pplStack_498) {
    lVar10 = 0x20;
LAB_04ac8ca3:
    (**(code **)((long)*ppplStack_478 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (ppplStack_478 != (long ***)0x0) goto LAB_04ac8ca3;
  }
  uStack_1d0 = 0;
  puStack_1d8 = (undefined8 *)&UNK_0ef589a8;
  ppuVar18 = (undefined8 **)(plVar9 + 0x22);
  if (ppuVar18 != &puStack_1d8) {
    if ((*ppuVar18 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar18)[1])(ppuVar18), puStack_1d8 != (undefined8 *)0x0)) {
      (*(code *)*puStack_1d8)(&puStack_1d8,ppuVar18);
      puVar12 = puStack_1d8;
    }
    else {
      puVar12 = (undefined8 *)0x0;
    }
    puStack_1d8 = (undefined8 *)0x0;
    *ppuVar18 = puVar12;
  }
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_3f8);
  if ((uStack_3f8 & 1) != 0) {
    func_0x0412a280(uStack_3e8,uStack_3f8 & 0xfffffffffffffffe);
  }
  if (puStack_1d8 != (undefined8 *)0x0) {
    (*(code *)puStack_1d8[1])(&puStack_1d8);
  }
  if (ppuStack_b8 == apuStack_d8) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (ppuStack_b8 == (undefined **)0x0) goto joined_r0x04ac8df1;
  }
  (**(code **)(*ppuStack_b8 + lVar10))();
joined_r0x04ac8df1:
  if (puStack_158 != (undefined *)0x0) {
    (**(code **)(puStack_158 + 8))(&puStack_158);
  }
  if ((bStack_4d0 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_4be,CONCAT11(uStack_4bf,uStack_4c3._3_1_)),
                    CONCAT35((undefined3)uStack_4cb,CONCAT41(uStack_4cf,bStack_4d0)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1221f84  replace_air_with
 * 0x1390437  skip_carve_chance
 */
