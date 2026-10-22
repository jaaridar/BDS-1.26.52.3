/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4abaa80 (ELF vaddr 0x49baa80)
 * Label: callee-of:0x4de9260
 * Body:  [[04abaa80, 04abb857] [04abb860, 04abbed2]]
 * Ghidra: FUN_04abaa80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04abaa80(undefined8 param_1)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 ***pppuVar3;
  uint *puVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long **pplVar14;
  long *plVar15;
  undefined8 **ppuVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  bool bVar20;
  undefined8 **ppuStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined1 uStack_47f;
  undefined6 uStack_47e;
  long **pplStack_478;
  long *plStack_450;
  byte *pbStack_448;
  undefined8 uStack_440;
  byte bStack_438;
  undefined6 uStack_437;
  undefined1 uStack_431;
  undefined1 uStack_430;
  undefined1 uStack_42f;
  undefined5 uStack_42e;
  undefined1 uStack_429;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long **pplStack_400;
  ulong auStack_3f8 [4];
  ulong auStack_3d8 [4];
  ulong auStack_3b8 [4];
  ulong auStack_398 [4];
  ulong auStack_378 [4];
  ulong auStack_358 [4];
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long **pplStack_2f8;
  ulong uStack_2f0;
  uint *puStack_2b0;
  undefined8 *puStack_2a8;
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
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_42e = 0;
  uStack_429 = 0;
  uStack_428 = 0;
  uStack_420 = 0;
  bStack_438 = 0x12;
  uStack_437 = 0x775f6c6c6966;
  uStack_431 = 0x69;
  uStack_430 = 0x74;
  uStack_42f = 0x68;
  uStack_440 = 0x77d7e7533726e31;
  uStack_70 = 0;
  uStack_2f0 = 0;
  lStack_78 = 0;
  pplStack_2f8 = (long **)&UNK_0ef579a0;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1f0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x1f0,0);
  }
  ppuStack_498 = pplStack_2f8;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef577d0;
  uStack_490._0_4_ = 0;
  uStack_490._4_4_ = 0;
  pplStack_2f8 = (long **)0x0;
  plVar11[4] = (long)&UNK_0f2ccd78;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  func_0x04aa75f0(plVar11 + 0xe,&uStack_418,&UNK_01254d89);
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0xffffffff;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[4] = (long)&UNK_0ef57820;
  plVar11[0x2e] = 0;
  plVar11[0x2f] = 0;
  if (ppuStack_498 == (long **)0x0) {
    plVar11[0x3a] = 0;
    plVar11[0x3c] = 0;
    plVar11[0x3d] = 0;
  }
  else {
    (*(code *)*ppuStack_498)(&ppuStack_498,plVar11 + 0x2e);
    ppuVar16 = ppuStack_498;
    ppuStack_498 = (long **)0x0;
    plVar11[0x2e] = (long)ppuVar16;
    plVar11[0x3a] = 0;
    plVar11[0x3c] = 0;
    plVar11[0x3d] = 0;
    if ((*(byte *)(plVar11 + 0x12) & 1) != 0) {
      func_0x0412a280(plVar11[0x14],plVar11[0x12] & 0xfffffffffffffffe);
    }
  }
  pbVar2 = (byte *)(plVar11 + 0x12);
  pbVar2[0] = 0x1e;
  pbVar2[1] = 0x62;
  *(undefined8 *)((long)plVar11 + 0x92) = 0x6665725f6b636f6c;
  plVar11[0x13] = 0x65636e6572656665;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x11] = 0x68c30237ef85dc86;
  func_0x0c6ee530(&uStack_418);
  uVar6 = (undefined4)uStack_418;
  uVar7 = uStack_418._4_4_;
  uVar8 = (undefined4)uStack_410;
  uVar9 = uStack_410._4_4_;
  uStack_418 = (undefined8 ***)0x0;
  uStack_410 = (long *)0x0;
  plVar18 = (long *)plVar11[0x3d];
  *(undefined4 *)(plVar11 + 0x3c) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x1e4) = uVar7;
  *(undefined4 *)(plVar11 + 0x3d) = uVar8;
  *(undefined4 *)((long)plVar11 + 0x1ec) = uVar9;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar15 = plVar18 + 1;
    lVar19 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  plVar18 = uStack_410;
  if (uStack_410 != (long *)0x0) {
    LOCK();
    plVar15 = uStack_410 + 1;
    lVar19 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*uStack_410 + 0x10))(uStack_410);
      func_0x0412c2d0(plVar18);
    }
  }
  if (ppuStack_498 != (long **)0x0) {
    (*(code *)ppuStack_498[1])(&ppuStack_498);
  }
  plVar18 = plVar11 + 1;
  if (pplStack_2f8 != (long **)0x0) {
    (*(code *)pplStack_2f8[1])(&pplStack_2f8);
  }
  LOCK();
  *plVar18 = *plVar18 + 1;
  UNLOCK();
  plStack_450 = plVar18;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef57900;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0ef57950;
  puVar12[0xe] = plVar11 + 4;
  puVar12[0xf] = plVar11;
  LOCK();
  plVar11[1] = plVar11[1] + 1;
  UNLOCK();
  uStack_490._0_4_ = (uint)puVar12;
  uStack_490._4_4_ = (undefined4)((ulong)puVar12 >> 0x20);
  ppuStack_498 = (undefined8 **)(puVar12 + 4);
  pbStack_448 = pbVar2;
  pplStack_400 = (long **)(plVar11 + 4);
  puVar13 = (undefined4 *)func_0x04afad50(param_1,&uStack_440,0);
  plVar18 = plVar11 + 0x11;
  plVar15 = *(long **)(puVar13 + 0x24);
  if (plVar15 < *(long **)(puVar13 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if (plVar15 == plVar18) {
LAB_04abae70:
      *plVar15 = *plVar18;
      plVar15[5] = (long)(puVar12 + 4);
      plVar15[6] = (long)puVar12;
LAB_04abaecd:
      LOCK();
      puVar12[1] = puVar12[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbStack_448 & 1) == 0) {
        plVar15[3] = *(long *)(pbStack_448 + 0x10);
        lVar19 = *(long *)(pbStack_448 + 8);
        plVar15[1] = *(long *)pbStack_448;
        plVar15[2] = lVar19;
        goto LAB_04abae70;
      }
      func_0x04885070(plVar15 + 1,plVar11[0x14],plVar11[0x13]);
      *plVar15 = *plVar18;
      puVar12 = (undefined8 *)CONCAT44(uStack_490._4_4_,(uint)uStack_490);
      plVar15[5] = (long)ppuStack_498;
      plVar15[6] = CONCAT44(uStack_490._4_4_,(uint)uStack_490);
      if (puVar12 != (undefined8 *)0x0) goto LAB_04abaecd;
    }
    plVar15 = plVar15 + 7;
    *(long **)(puVar13 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x04afd0c0(puVar13 + 0x22,plVar18,&ppuStack_498);
  }
  pplVar14 = pplStack_400;
  *(long **)(puVar13 + 0x24) = plVar15;
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = (long *)plVar11[0xf];
  *(undefined4 *)(plVar11 + 0xe) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x74) = uVar7;
  *(undefined4 *)(plVar11 + 0xf) = uVar8;
  *(undefined4 *)((long)plVar11 + 0x7c) = uVar9;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar15 = plVar18 + 1;
    lVar19 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar18 = (long *)CONCAT44(uStack_490._4_4_,(uint)uStack_490);
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar15 = plVar18 + 1;
    lVar19 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  plVar18 = plStack_450;
  LOCK();
  lVar19 = *plStack_450;
  *plStack_450 = *plStack_450 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    LOCK();
    lVar19 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar19 = *plStack_450;
    *plStack_450 = *plStack_450 + -1;
    UNLOCK();
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
  }
  apuStack_e8[0] = &UNK_0ef579c8;
  ppuStack_c8 = apuStack_e8;
  pplStack_478 = (long **)&ppuStack_498;
  ppuStack_498 = (undefined8 **)&UNK_0ef579c8;
  pppuVar3 = (undefined8 ***)(plVar11 + 0x36);
  lVar19 = 0x20;
  if (pppuVar3 == &ppuStack_498) {
LAB_04abb0cc:
    (**(code **)((long)*pplStack_478 + lVar19))();
  }
  else {
    pppuVar5 = (undefined8 ***)plVar11[0x3a];
    if (pppuVar5 == pppuVar3) {
      pplStack_2f8 = (long **)&UNK_0ef579c8;
      pplStack_478 = (long **)0x0;
      (*(code *)(*pppuVar5)[3])(pppuVar5,&ppuStack_498);
      (**(code **)(*(long *)plVar11[0x3a] + 0x20))();
      plVar11[0x3a] = 0;
      pplStack_478 = (long **)&ppuStack_498;
      (*(code *)pplStack_2f8[3])(&pplStack_2f8,pppuVar3);
      (*(code *)pplStack_2f8[4])(&pplStack_2f8);
      plVar11[0x3a] = (long)pppuVar3;
      if ((undefined8 ***)pplStack_478 != &ppuStack_498) goto LAB_04abb0c1;
      goto LAB_04abb0cc;
    }
    plVar11[0x36] = (long)&UNK_0ef579c8;
    pplStack_478 = (long **)pppuVar5;
    plVar11[0x3a] = (long)pppuVar3;
    if (pppuVar5 == &ppuStack_498) goto LAB_04abb0cc;
LAB_04abb0c1:
    lVar19 = 0x28;
    if ((undefined8 ***)pplStack_478 != (undefined8 ***)0x0) goto LAB_04abb0cc;
  }
  ppuVar16 = (undefined8 **)(plVar11 + 0x26);
  uStack_2a0 = 0;
  puStack_2a8 = (undefined8 *)&UNK_0ef57a48;
  if (ppuVar16 != &puStack_2a8) {
    if ((*ppuVar16 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar16)[1])(ppuVar16), puStack_2a8 != (undefined8 *)0x0)) {
      (*(code *)*puStack_2a8)(&puStack_2a8,ppuVar16);
      puVar12 = puStack_2a8;
    }
    else {
      puVar12 = (undefined8 *)0x0;
    }
    puStack_2a8 = (undefined8 *)0x0;
    *ppuVar16 = puVar12;
  }
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  (**(code **)((long)*pplVar14 + 0x10))(pplVar14,&uStack_318);
  if ((uStack_318 & 1) != 0) {
    func_0x0412a280(uStack_308,uStack_318 & 0xfffffffffffffffe);
  }
  if (puStack_2a8 != (undefined8 *)0x0) {
    (*(code *)puStack_2a8[1])(&puStack_2a8);
  }
  if (ppuStack_c8 == apuStack_e8) {
    lVar19 = 0x20;
LAB_04abb38f:
    (**(code **)(*ppuStack_c8 + lVar19))();
  }
  else {
    lVar19 = 0x28;
    if (ppuStack_c8 != (undefined **)0x0) goto LAB_04abb38f;
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,
                    CONCAT17(uStack_431,CONCAT61(uStack_437,bStack_438)) & 0xfffffffffffffffe);
  }
  uStack_428 = 0;
  uStack_420 = 0;
  bStack_438 = 0x1c;
  uStack_437 = 0x5f6874646977;
  uStack_431 = 0x6d;
  uStack_430 = 0x6f;
  uStack_42f = 100;
  uStack_42e = 0x7265696669;
  uStack_429 = 0;
  uStack_440 = 0x5751c535b8649bd;
  uStack_b0 = 0;
  uStack_2f0 = 0;
  lStack_b8 = 0;
  pplStack_2f8 = (long **)&UNK_0ef57c40;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  ppuStack_498 = pplStack_2f8;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef57a70;
  uStack_490._0_4_ = 0;
  uStack_490._4_4_ = 0;
  pplStack_2f8 = (long **)0x0;
  plVar11[4] = (long)&UNK_0f2ccd78;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  func_0x04aa75f0(plVar11 + 0xe,&uStack_418,&UNK_01254d89);
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0xffffffff;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[4] = (long)&UNK_0ef57ac0;
  plVar11[0x2e] = 0;
  plVar11[0x2f] = 0;
  if (ppuStack_498 == (long **)0x0) {
    pplVar14 = (long **)0x0;
  }
  else {
    (*(code *)*ppuStack_498)(&ppuStack_498,plVar11 + 0x2e);
    pplVar14 = ppuStack_498;
  }
  ppuStack_498 = (undefined8 **)0x0;
  plVar11[0x2e] = (long)pplVar14;
  pppuVar3 = (undefined8 ***)(plVar11 + 0x36);
  plVar11[0x36] = 0;
  plVar11[0x37] = 0;
  plVar11[0x38] = 0;
  uStack_410 = (long *)((ulong)uStack_410 & 0xffffffffffffff00);
  uStack_418 = pppuVar3;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plStack_450 = plVar11 + 0x11;
  plVar11[0x36] = (long)puVar12;
  plVar11[0x38] = (long)(puVar12 + 5);
  puVar12[4] = 0;
  puVar12[1] = 0x746c75616665640e;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0xdead4915c9c6c0d8;
  plVar11[0x37] = (long)(puVar12 + 5);
  puVar4 = (uint *)(plVar11 + 0x12);
  if (plStack_450 != (long *)&DAT_0f5520d8) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        plVar11[0x14] = _DAT_0f5520f0;
        uVar8 = uRam000000000f5520ec;
        uVar7 = _DAT_0f5520e8;
        uVar6 = uRam000000000f5520e4;
        *puVar4 = _DAT_0f5520e0;
        *(undefined4 *)((long)plVar11 + 0x94) = uVar6;
        *(undefined4 *)(plVar11 + 0x13) = uVar7;
        *(undefined4 *)((long)plVar11 + 0x9c) = uVar8;
      }
      else {
        func_0x04885070(puVar4,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar20 = (_DAT_0f5520e0 & 1) != 0;
      lVar19 = 0xf5520e1;
      if (bVar20) {
        lVar19 = _DAT_0f5520f0;
      }
      uVar17 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar20) {
        uVar17 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      func_0x04885120(puVar4,lVar19,uVar17);
    }
  }
  plVar11[0x11] = _DAT_0f5520d8;
  plVar11[0x15] = 0;
  pplStack_400 = (long **)pppuVar3;
  if (ppuStack_498 != (undefined8 **)0x0) {
    (*(code *)ppuStack_498[1])(&ppuStack_498);
  }
  plVar18 = plVar11 + 1;
  puStack_2b0 = puVar4;
  if (pplStack_2f8 != (long **)0x0) {
    (*(code *)pplStack_2f8[1])(&pplStack_2f8);
  }
  LOCK();
  *plVar18 = *plVar18 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef57ba0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0ef57bf0;
  puVar12[0xe] = plVar11 + 4;
  puVar12[0xf] = plVar11;
  LOCK();
  plVar11[1] = plVar11[1] + 1;
  UNLOCK();
  uStack_490._0_4_ = (uint)puVar12;
  uStack_490._4_4_ = (undefined4)((ulong)puVar12 >> 0x20);
  ppuStack_498 = (undefined8 **)(puVar12 + 4);
  pbStack_448 = (byte *)(plVar11 + 4);
  puVar13 = (undefined4 *)func_0x04afad50(param_1,&uStack_440,0);
  plVar15 = *(long **)(puVar13 + 0x24);
  if (*(long **)(puVar13 + 0x26) <= plVar15) {
    plVar15 = (long *)func_0x04afd0c0(puVar13 + 0x22,plStack_450,&ppuStack_498);
    goto LAB_04abb690;
  }
  plVar15[2] = 0;
  plVar15[3] = 0;
  *plVar15 = 0;
  plVar15[1] = 0;
  plVar15[4] = 0;
  if (plVar15 == plStack_450) {
LAB_04abb604:
    *plVar15 = *plStack_450;
    plVar15[5] = (long)(puVar12 + 4);
    plVar15[6] = (long)puVar12;
LAB_04abb680:
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_2b0 & 1) == 0) {
      plVar15[3] = *(long *)(puStack_2b0 + 4);
      lVar19 = *(long *)(puStack_2b0 + 2);
      plVar15[1] = *(long *)puStack_2b0;
      plVar15[2] = lVar19;
      goto LAB_04abb604;
    }
    func_0x04885070(plVar15 + 1,plVar11[0x14],plVar11[0x13]);
    *plVar15 = *plStack_450;
    puVar12 = (undefined8 *)CONCAT44(uStack_490._4_4_,(uint)uStack_490);
    plVar15[5] = (long)ppuStack_498;
    plVar15[6] = CONCAT44(uStack_490._4_4_,(uint)uStack_490);
    if (puVar12 != (undefined8 *)0x0) goto LAB_04abb680;
  }
  plVar15 = plVar15 + 7;
  *(long **)(puVar13 + 0x24) = plVar15;
LAB_04abb690:
  pbVar2 = pbStack_448;
  *(long **)(puVar13 + 0x24) = plVar15;
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar11[0xf];
  *(undefined4 *)(plVar11 + 0xe) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x74) = uVar7;
  *(undefined4 *)(plVar11 + 0xf) = uVar8;
  *(undefined4 *)((long)plVar11 + 0x7c) = uVar9;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar15 = (long *)CONCAT44(uStack_490._4_4_,(uint)uStack_490);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar19 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    LOCK();
    lVar19 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar19 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
  }
  ppuStack_498 = (undefined8 **)0x0;
  uStack_490._0_4_ = 0;
  uStack_490._4_4_ = 0;
  uStack_488._0_4_ = 0;
  uStack_488._4_4_ = 0;
  uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
  pplStack_2f8 = (long **)&ppuStack_498;
  ppuVar16 = (undefined8 **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  pplVar14 = pplStack_400;
  if (ppuVar16 == (undefined8 **)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_488 = ppuVar16 + 5;
  ppuVar16[4] = (undefined8 *)0x0;
  ppuVar16[1] = (undefined8 *)0x675f646c726f7712;
  ppuVar16[2] = (undefined8 *)0x6e65;
  ppuVar16[3] = (undefined8 *)0x0;
  *ppuVar16 = (undefined8 *)0x838dddc83a29ed6c;
  ppuStack_498 = ppuVar16;
  uStack_490 = uStack_488;
  if ((undefined8 ***)pplVar14 != &ppuStack_498) {
    func_0x04ab5020(pplVar14,ppuVar16,uStack_488,1);
  }
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  (**(code **)(*(long *)pbVar2 + 0x10))(pbVar2,&uStack_338);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(uStack_328,uStack_338 & 0xfffffffffffffffe);
  }
  ppuVar10 = ppuStack_498;
  ppuVar16 = uStack_490;
  if (ppuStack_498 != (undefined8 **)0x0) {
    for (; ppuVar10 != ppuVar16; ppuVar16 = ppuVar16 + -5) {
      if (((ulong)ppuVar16[-4] & 1) != 0) {
        func_0x0412a280(ppuVar16[-2],(ulong)ppuVar16[-4] & 0xfffffffffffffffe);
      }
    }
    uStack_490._0_4_ = (uint)ppuVar10;
    uStack_490._4_4_ = (undefined4)((ulong)ppuVar10 >> 0x20);
    func_0x0412a280(ppuStack_498,(long)uStack_488 - (long)ppuStack_498);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,
                    CONCAT17(uStack_431,CONCAT61(uStack_437,bStack_438)) & 0xfffffffffffffffe);
  }
  uStack_47e = 0;
  pplStack_478 = (long **)0x0;
  uStack_490._0_4_ = CONCAT31((int3)_DAT_01390437,0x22);
  uStack_490._5_3_ = (undefined3)_UNK_0139043b;
  uStack_490._4_4_ = CONCAT31(uStack_490._5_3_,(char)((uint)_DAT_01390437 >> 0x18));
  uStack_488._1_3_ = (undefined3)_UNK_0139043f;
  uStack_488._0_4_ = CONCAT31(uStack_488._1_3_,(char)((uint)_UNK_0139043b >> 0x18));
  uStack_488._5_3_ = (undefined3)_UNK_01390443;
  uStack_488._4_4_ = CONCAT31(uStack_488._5_3_,(char)((uint)_UNK_0139043f >> 0x18));
  uStack_480 = (undefined1)((uint)_UNK_01390443 >> 0x18);
  uStack_47f = 0x65;
  ppuStack_498 = (undefined8 **)0x3eebd3795c271f3f;
  uStack_120 = 0;
  puStack_128 = &UNK_0ef57e38;
  plVar11 = (long *)func_0x04afa200(param_1,&ppuStack_498,&puStack_128);
  *(undefined4 *)(plVar11 + 0x2a) = 1;
  auStack_358[0] = 0;
  auStack_358[1] = 0;
  auStack_358[2] = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,auStack_358);
  if ((auStack_358[0] & 1) != 0) {
    func_0x0412a280(auStack_358[2],auStack_358[0] & 0xfffffffffffffffe);
  }
  if (puStack_128 != (undefined *)0x0) {
    (**(code **)(puStack_128 + 8))(&puStack_128);
  }
  if (((uint)uStack_490 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480)),
                    CONCAT44(uStack_490._4_4_,(uint)uStack_490) & 0xfffffffffffffffe);
  }
  uStack_480 = 0;
  uStack_47f = 0;
  uStack_47e = 0;
  pplStack_478 = (long **)0x0;
  uStack_490._0_4_ = 0x69656818;
  uStack_490._4_4_ = 0x5f746867;
  uStack_488._0_4_ = 0x696d696c;
  uStack_488._4_4_ = 0x74;
  ppuStack_498 = (undefined8 **)0xac50df0eb8094824;
  uStack_160 = 0;
  puStack_168 = &UNK_0ef57e50;
  plVar11 = (long *)func_0x04afa200(param_1,&ppuStack_498,&puStack_168);
  auStack_378[0] = 0;
  auStack_378[1] = 0;
  auStack_378[2] = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,auStack_378);
  if ((auStack_378[0] & 1) != 0) {
    func_0x0412a280(auStack_378[2],auStack_378[0] & 0xfffffffffffffffe);
  }
  if (puStack_168 != (undefined *)0x0) {
    (**(code **)(puStack_168 + 8))(&puStack_168);
  }
  if (((uint)uStack_490 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480)),
                    CONCAT44(uStack_490._4_4_,(uint)uStack_490) & 0xfffffffffffffffe);
  }
  uStack_488._0_4_ = 0;
  uStack_488._4_4_ = 0;
  uStack_480 = 0;
  uStack_47f = 0;
  uStack_47e = 0;
  pplStack_478 = (long **)0x0;
  uStack_490._0_4_ = 0x735f790e;
  uStack_490._4_4_ = 0x656c6163;
  ppuStack_498 = (undefined8 **)0x9701eee01c5c5fcd;
  uStack_1a0 = 0;
  puStack_1a8 = &UNK_0ef58048;
  plVar11 = (long *)func_0x04afa7b0(param_1,&ppuStack_498,&puStack_1a8);
  auStack_398[0] = 0;
  auStack_398[1] = 0;
  auStack_398[2] = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,auStack_398);
  if ((auStack_398[0] & 1) != 0) {
    func_0x0412a280(auStack_398[2],auStack_398[0] & 0xfffffffffffffffe);
  }
  if (puStack_1a8 != (undefined *)0x0) {
    (**(code **)(puStack_1a8 + 8))(&puStack_1a8);
  }
  if (((uint)uStack_490 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480)),
                    CONCAT44(uStack_490._4_4_,(uint)uStack_490) & 0xfffffffffffffffe);
  }
  uStack_488._0_4_ = 0;
  uStack_488._4_4_ = 0;
  uStack_480 = 0;
  uStack_47f = 0;
  uStack_47e = 0;
  ppuStack_498 = (undefined8 **)0x0;
  uStack_490._0_4_ = 0;
  uStack_490._4_4_ = 0;
  pplStack_478 = (long **)0x0;
  FUN_0412f5e0(&uStack_490,&UNK_01325212,0x1c);
  ppuStack_498 = (undefined8 **)0xc66c91e1f6dac4f0;
  uStack_1e0 = 0;
  puStack_1e8 = &UNK_0ef58060;
  plVar11 = (long *)func_0x04afa7b0(param_1,&ppuStack_498,&puStack_1e8);
  auStack_3b8[0] = 0;
  auStack_3b8[1] = 0;
  auStack_3b8[2] = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,auStack_3b8);
  if ((auStack_3b8[0] & 1) != 0) {
    func_0x0412a280(auStack_3b8[2],auStack_3b8[0] & 0xfffffffffffffffe);
  }
  if (puStack_1e8 != (undefined *)0x0) {
    (**(code **)(puStack_1e8 + 8))(&puStack_1e8);
  }
  if (((uint)uStack_490 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480)),
                    CONCAT44(uStack_490._4_4_,(uint)uStack_490) & 0xfffffffffffffffe);
  }
  uStack_488._0_4_ = 0;
  uStack_488._4_4_ = 0;
  uStack_480 = 0;
  uStack_47f = 0;
  uStack_47e = 0;
  ppuStack_498 = (undefined8 **)0x0;
  uStack_490._0_4_ = 0;
  uStack_490._4_4_ = 0;
  pplStack_478 = (long **)0x0;
  FUN_0412f5e0(&uStack_490,&UNK_013abf6f,0x1a);
  ppuStack_498 = (undefined8 **)0x7f207cc341c390c2;
  uStack_220 = 0;
  puStack_228 = &UNK_0ef58078;
  plVar11 = (long *)func_0x04afa7b0(param_1,&ppuStack_498,&puStack_228);
  auStack_3d8[0] = 0;
  auStack_3d8[1] = 0;
  auStack_3d8[2] = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,auStack_3d8);
  if ((auStack_3d8[0] & 1) != 0) {
    func_0x0412a280(auStack_3d8[2],auStack_3d8[0] & 0xfffffffffffffffe);
  }
  if (puStack_228 != (undefined *)0x0) {
    (**(code **)(puStack_228 + 8))(&puStack_228);
  }
  if (((uint)uStack_490 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480)),
                    CONCAT44(uStack_490._4_4_,(uint)uStack_490) & 0xfffffffffffffffe);
  }
  uStack_488._4_4_ = 0;
  uStack_480 = 0;
  uStack_47f = 0;
  uStack_47e = 0;
  pplStack_478 = (long **)0x0;
  uStack_490._0_4_ = 0x6f6c6616;
  uStack_490._4_4_ = 0x6c5f726f;
  uStack_488._0_4_ = 0x6c657665;
  ppuStack_498 = (undefined8 **)0x5ed3df45244f40be;
  uStack_260 = 0;
  puStack_268 = &UNK_0ef58090;
  plVar11 = (long *)func_0x04afa7b0(param_1,&ppuStack_498,&puStack_268);
  auStack_3f8[0] = 0;
  auStack_3f8[1] = 0;
  auStack_3f8[2] = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,auStack_3f8);
  if ((auStack_3f8[0] & 1) != 0) {
    func_0x0412a280(auStack_3f8[2],auStack_3f8[0] & 0xfffffffffffffffe);
  }
  if (puStack_268 != (undefined *)0x0) {
    (**(code **)(puStack_268 + 8))(&puStack_268);
  }
  if (((uint)uStack_490 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480)),
                    CONCAT44(uStack_490._4_4_,(uint)uStack_490) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1390437  skip_carve_chance
 */
