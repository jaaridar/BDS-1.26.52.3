/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4e1d460 (ELF vaddr 0x4d1d460)
 * Label: caller-of-callee
 * Body:  [[04e1d460, 04e1e32c] [04e1e330, 04e1e8f5] [04e1e900, 04e1e93e] [04e1e940, 04e20bd0] [04e21340, 04e21373] [04e21464, 04e2147d] [04e2187b, 04e218dc] [04e21994, 04e219a7]]
 * Ghidra: FUN_04e1d460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04e1d460(long *param_1,long *param_2)

{
  long **pplVar1;
  undefined8 **ppuVar2;
  long lVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  undefined4 *puVar21;
  long lVar22;
  long *plVar23;
  uint *puVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  long *plVar31;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  undefined *puVar36;
  undefined8 *puVar37;
  long lVar38;
  bool bVar39;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long **pplStack_4a8;
  uint *puStack_480;
  long lStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  undefined8 uStack_440;
  byte bStack_438;
  undefined4 uStack_437;
  undefined2 uStack_433;
  undefined1 uStack_431;
  undefined1 uStack_430;
  undefined4 uStack_42f;
  undefined2 uStack_42b;
  undefined1 uStack_429;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined6 uStack_426;
  undefined8 uStack_420;
  long *plStack_418;
  undefined8 uStack_410;
  long **pplStack_3f8;
  long *plStack_3d8;
  long *plStack_3d0;
  uint *puStack_3c8;
  long *plStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  uint *puStack_2e0;
  byte bStack_2d8;
  undefined1 uStack_2d7;
  undefined1 uStack_2d6;
  undefined5 uStack_2d5;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined4 uStack_2bf;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  long alStack_298 [4];
  long *plStack_278;
  long *plStack_268;
  undefined8 uStack_260;
  long alStack_258 [4];
  long *plStack_238;
  long *plStack_228;
  undefined8 uStack_220;
  long alStack_218 [4];
  long *plStack_1f8;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  long *aplStack_1d8 [4];
  long **pplStack_1b8;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  long alStack_198 [4];
  long *plStack_178;
  long *plStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long *aplStack_148 [4];
  long **pplStack_128;
  undefined1 uStack_110;
  undefined4 uStack_10f;
  undefined1 uStack_10b;
  long *plStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_426 = 0;
  uStack_420 = 0;
  bStack_438 = 0x22;
  uStack_437 = _DAT_014c903f;
  uStack_433 = (undefined2)_UNK_014c9043;
  uStack_431 = (undefined1)((uint)_UNK_014c9043 >> 0x10);
  uStack_430 = (undefined1)((uint)_UNK_014c9043 >> 0x18);
  uStack_42f = _UNK_014c9047;
  uStack_42b = (undefined2)_UNK_014c904b;
  uStack_429 = (undefined1)((uint)_UNK_014c904b >> 0x10);
  uStack_428 = (undefined1)((uint)_UNK_014c904b >> 0x18);
  uStack_427 = 0x65;
  uStack_440 = 0x46798423f7810f9e;
  plVar23 = (long *)param_2[4];
  plStack_3d0 = param_1;
  if (plVar23 == (long *)0x0) {
    plStack_458 = (long *)0x0;
LAB_04e1d559:
    plStack_178 = (long *)0x0;
LAB_04e1d565:
    uStack_1a0 = 0;
    plStack_1a8 = (long *)&UNK_0ef82298;
LAB_04e1d574:
    uStack_410 = 0;
    plStack_418 = (long *)0x0;
    (*(code *)*plStack_1a8)(&plStack_1a8,&plStack_418);
    plVar23 = plStack_1a8;
  }
  else {
    if (plVar23 == param_2) {
      plStack_458 = &lStack_478;
      (**(code **)(*plVar23 + 0x18))();
    }
    else {
      plStack_458 = (long *)(**(code **)(*plVar23 + 0x10))();
    }
    plStack_178 = plStack_458;
    uStack_1a0 = 0;
    plStack_1a8 = (long *)&UNK_0ef82298;
    if (plStack_458 == (long *)0x0) goto LAB_04e1d559;
    if (plStack_458 != &lStack_478) {
      plStack_458 = (long *)0x0;
      goto LAB_04e1d565;
    }
    plStack_178 = alStack_198;
    (**(code **)(*plStack_458 + 0x18))(plStack_458);
    uStack_410 = 0;
    if (plStack_1a8 != (long *)0x0) goto LAB_04e1d574;
    plVar23 = (long *)0x0;
  }
  plStack_1a8 = (long *)0x0;
  plStack_418 = plVar23;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef820c8;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plVar23 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar23)(&plStack_418,&plStack_4c8);
    plStack_4c8 = plStack_418;
  }
  plStack_418 = (long *)0x0;
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
  plStack_3d8 = param_2;
  FUN_04aa75f0(plVar19 + 0xe,&uStack_2c0,&UNK_01254d89);
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
  plVar19[4] = (long)&UNK_0ef82118;
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar19[0x36] = 0;
    plVar19[0x37] = 0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar19 + 0x2e);
    plVar23 = plStack_4c8;
    plStack_4c8 = (long *)0x0;
    plVar19[0x2e] = (long)plVar23;
    plVar19[0x36] = 0;
    plVar19[0x37] = 0;
    if ((*(byte *)(plVar19 + 0x12) & 1) != 0) {
      thunk_FUN_0ee326a0(plVar19[0x14],plVar19[0x12] & 0xfffffffffffffffe);
    }
  }
  plVar23 = plVar19 + 4;
  pbVar25 = (byte *)(plVar19 + 0x12);
  pbVar25[0] = 0x24;
  uVar13 = _UNK_012a3e21;
  uVar12 = _UNK_012a3e1d;
  uVar11 = _UNK_012a3e19;
  pbVar25[1] = 99;
  *(undefined4 *)((long)plVar19 + 0x92) = _DAT_012a3e15;
  *(undefined4 *)((long)plVar19 + 0x96) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x9a) = uVar12;
  *(undefined4 *)((long)plVar19 + 0x9e) = uVar13;
  *(undefined2 *)((long)plVar19 + 0xa2) = 0x6e;
  *(undefined4 *)((long)plVar19 + 0xa4) = 0;
  plVar19[0x11] = 0x601977ec4d12d34a;
  plVar19[0x15] = 0;
  if ((DAT_0f6b5120 == '\0') && (iVar18 = func_0x04108328(&DAT_0f6b5120), iVar18 != 0)) {
    func_0x0b6924c0();
    func_0x0eee2f40(&SUB_04b21360,&DAT_0f6b5110,0xf53dab8);
    func_0x0410844d(&DAT_0f6b5120);
  }
  lVar7 = _DAT_0f6b5118;
  lVar22 = _DAT_0f6b5110;
  if (_DAT_0f6b5118 != 0) {
    LOCK();
    *(long *)(_DAT_0f6b5118 + 8) = *(long *)(_DAT_0f6b5118 + 8) + 1;
    UNLOCK();
  }
  plVar19[0x36] = lVar22;
  plVar31 = (long *)plVar19[0x37];
  plVar19[0x37] = lVar7;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar20 = plVar31 + 1;
    lVar22 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  plVar31 = plVar19 + 1;
  if (plStack_418 != (long *)0x0) {
    (*(code *)plStack_418[1])(&plStack_418);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0ef821f8;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0ef82248;
  plVar20[0xe] = (long)plVar23;
  plVar20[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar20 + 4;
  plStack_4c0 = plVar20;
  puVar21 = (undefined4 *)func_0x04e2f1f0(plStack_3d0,&uStack_440,1);
  plVar29 = plVar19 + 0x11;
  plVar28 = *(long **)(puVar21 + 0x24);
  if (plVar28 < *(long **)(puVar21 + 0x26)) {
    plVar28[2] = 0;
    plVar28[3] = 0;
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[4] = 0;
    if (plVar28 != plVar29) {
      plVar35 = plVar28 + 1;
      if ((*pbVar25 & 1) == 0) {
        plVar28[3] = plVar19[0x14];
        lVar22 = plVar19[0x13];
        *plVar35 = *(long *)pbVar25;
        plVar28[2] = lVar22;
      }
      else {
        puStack_480 = (uint *)plVar35;
        func_0x04885070(plVar35,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar28 = *plVar29;
    plVar28[5] = (long)(plVar20 + 4);
    plVar28[6] = (long)plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    plVar28 = plVar28 + 7;
    *(long **)(puVar21 + 0x24) = plVar28;
  }
  else {
    plVar28 = (long *)func_0x04e29380(puVar21 + 0x22,plVar29,&plStack_4c8);
  }
  *(long **)(puVar21 + 0x24) = plVar28;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar12;
  *(undefined4 *)(plVar19 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar14;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar28 = plVar20 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  plVar20 = plStack_4c0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar28 = plStack_4c0 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar22 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  (**(code **)(*plVar23 + 0x10))(plVar23,&uStack_2f8);
  if ((uStack_2f8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
  }
  if (plStack_1a8 != (long *)0x0) {
    (*(code *)plStack_1a8[1])(&plStack_1a8);
  }
  if (plStack_458 == &lStack_478) {
    lVar22 = 0x20;
LAB_04e1db9d:
    (**(code **)(*plStack_458 + lVar22))();
  }
  else {
    lVar22 = 0x28;
    if (plStack_458 != (long *)0x0) goto LAB_04e1db9d;
  }
  if ((bStack_438 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428)),
                       CONCAT17(uStack_431,CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438))) &
                       0xfffffffffffffffe);
  }
  uStack_468 = 0;
  uStack_460 = 0;
  lStack_478 = 0;
  uStack_470 = 0;
  plStack_458 = (long *)0x0;
  func_0x0412f5e0(&uStack_470,&UNK_0135b9d9,0x1a);
  lStack_478 = 0x11d992ee132cac2c;
  plStack_f8 = (long *)0x0;
  uStack_f0 = 0;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0ef822c0;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plStack_f8 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_f8)(&plStack_f8,&plStack_4c8);
    plStack_4c8 = plStack_f8;
  }
  plStack_f8 = (long *)0x0;
  plVar23[4] = (long)&UNK_0f2ccd78;
  plVar23[5] = 0;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[8] = 0;
  plVar23[9] = 0;
  plVar23[10] = 0;
  plVar23[0xb] = 0;
  plVar23[0xc] = 0;
  *(undefined1 *)(plVar23 + 0xd) = 0;
  FUN_04aa75f0(plVar23 + 0xe,&plStack_418,&UNK_01254d89);
  *(undefined1 *)(plVar23 + 0x10) = 0;
  plVar19 = plVar23 + 0x11;
  plVar23[0x11] = 0;
  plVar23[0x12] = 0;
  plVar23[0x13] = 0;
  plVar23[0x14] = 0;
  plVar23[0x15] = 0;
  plVar23[0x16] = 0;
  plVar23[0x17] = 0xffffffff;
  plVar23[0x26] = 0;
  plVar23[0x27] = 0;
  plVar23[0x18] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1f] = 0;
  plVar23[4] = (long)&UNK_0ef82310;
  pplVar1 = (long **)(plVar23 + 0x2e);
  plVar23[0x2e] = 0;
  plVar23[0x2f] = 0;
  if (pplVar1 != &plStack_4c8) {
    if (plStack_4c8 == (long *)0x0) {
      plVar31 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_4c8)(&plStack_4c8,pplVar1);
      plVar31 = plStack_4c8;
    }
    plStack_4c8 = (long *)0x0;
    *pplVar1 = plVar31;
  }
  puVar24 = (uint *)(plVar23 + 0x12);
  if (plVar19 != (long *)&DAT_0f551f58) {
    if ((*puVar24 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar23[0x14] = _DAT_0f551f70;
        uVar13 = uRam000000000f551f6c;
        uVar12 = _DAT_0f551f68;
        uVar11 = uRam000000000f551f64;
        *puVar24 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar23 + 0x94) = uVar11;
        *(undefined4 *)(plVar23 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar23 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar24,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar39 = (_DAT_0f551f60 & 1) != 0;
      lVar22 = 0xf551f61;
      if (bVar39) {
        lVar22 = _DAT_0f551f70;
      }
      uVar34 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar24,lVar22,uVar34);
    }
  }
  plVar31 = plVar23 + 1;
  plVar23[0x11] = _DAT_0f551f58;
  plVar23[0x15] = 0;
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0ef82408;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0ef82458;
  plVar20[0xe] = (long)(plVar23 + 4);
  plVar20[0xf] = (long)plVar23;
  LOCK();
  plVar23[1] = plVar23[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar20 + 4;
  plStack_4c0 = plVar20;
  puVar21 = (undefined4 *)func_0x04e2f1f0(plStack_3d0,&lStack_478,0);
  plVar28 = *(long **)(puVar21 + 0x24);
  if (plVar28 < *(long **)(puVar21 + 0x26)) {
    plVar28[2] = 0;
    plVar28[3] = 0;
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[4] = 0;
    if (plVar28 != plVar19) {
      if ((*puVar24 & 1) == 0) {
        plVar28[3] = plVar23[0x14];
        lVar22 = plVar23[0x13];
        plVar28[1] = *(long *)puVar24;
        plVar28[2] = lVar22;
      }
      else {
        func_0x04885070(plVar28 + 1,plVar23[0x14],plVar23[0x13]);
      }
    }
    *plVar28 = *plVar19;
    plVar28[5] = (long)(plVar20 + 4);
    plVar28[6] = (long)plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    plVar28 = plVar28 + 7;
    *(long **)(puVar21 + 0x24) = plVar28;
  }
  else {
    plVar28 = (long *)func_0x04e29380(puVar21 + 0x22,plVar19,&plStack_4c8);
  }
  *(long **)(puVar21 + 0x24) = plVar28;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar23[0xf];
  *(undefined4 *)(plVar23 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar23 + 0x74) = uVar12;
  *(undefined4 *)(plVar23 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar23 + 0x7c) = uVar14;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar22 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  plVar19 = plStack_4c0;
  *(undefined1 *)(plVar23 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_4c0 + 1;
    lVar22 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar19);
    }
  }
  plVar19 = plStack_3d8;
  LOCK();
  lVar22 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar22 == 0) goto LAB_04e1df7c;
LAB_04e1df3b:
    plVar31 = (long *)plVar19[4];
    if (plVar31 != (long *)0x0) goto LAB_04e1df44;
LAB_04e1df97:
    pplStack_3f8 = (long **)0x0;
    uStack_1e0 = 0;
    plStack_1e8 = (long *)&UNK_0ef826f8;
    pplStack_1b8 = (long **)0x0;
  }
  else {
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar22 != 0) goto LAB_04e1df3b;
LAB_04e1df7c:
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
    plVar31 = (long *)plVar19[4];
    if (plVar31 == (long *)0x0) goto LAB_04e1df97;
LAB_04e1df44:
    if (plVar31 == plVar19) {
      pplStack_3f8 = &plStack_418;
      (**(code **)(*plVar31 + 0x18))(plVar31,&plStack_418);
    }
    else {
      pplStack_3f8 = (long **)(**(code **)(*plVar31 + 0x10))();
    }
    pplStack_1b8 = pplStack_3f8;
    uStack_1e0 = 0;
    plStack_1e8 = (long *)&UNK_0ef826f8;
    if (pplStack_3f8 == (long **)0x0) {
      pplStack_1b8 = (long **)0x0;
    }
    else if (pplStack_3f8 == &plStack_418) {
      pplStack_1b8 = aplStack_1d8;
      (*(code *)(*pplStack_3f8)[3])(pplStack_3f8);
    }
    else {
      pplStack_3f8 = (long **)0x0;
    }
  }
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef824b8;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plStack_1e8 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1e8)(&plStack_1e8,&plStack_4c8);
    plStack_4c8 = plStack_1e8;
  }
  plStack_1e8 = (long *)0x0;
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
  FUN_04aa75f0(plVar19 + 0xe,&uStack_440,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar31 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0ef82508;
  pplVar1 = (long **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  *(undefined1 *)(plVar19 + 0x36) = 0;
  if (pplVar1 != &plStack_4c8) {
    if (plStack_4c8 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_4c8)(&plStack_4c8,pplVar1);
      plVar20 = plStack_4c8;
    }
    plStack_4c8 = (long *)0x0;
    *pplVar1 = plVar20;
  }
  plVar20 = plVar19 + 4;
  puStack_2e0 = (uint *)(plVar19 + 0x12);
  if (plVar31 != (long *)&DAT_0f552108) {
    if ((*puStack_2e0 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552120;
        uVar13 = uRam000000000f55211c;
        uVar12 = _DAT_0f552118;
        uVar11 = uRam000000000f552114;
        *puStack_2e0 = _DAT_0f552110;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar11;
        *(undefined4 *)(plVar19 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puStack_2e0,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar39 = (_DAT_0f552110 & 1) != 0;
      lVar22 = 0xf552111;
      if (bVar39) {
        lVar22 = _DAT_0f552120;
      }
      uVar34 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puStack_2e0,lVar22,uVar34);
    }
  }
  plVar28 = plVar19 + 1;
  plVar19[0x11] = _DAT_0f552108;
  plVar19[0x15] = 0;
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  LOCK();
  *plVar28 = *plVar28 + 1;
  UNLOCK();
  puVar24 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar24 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)puVar24 + 8) = 0;
  *(long *)((long)puVar24 + 0x10) = 0;
  *(undefined **)puVar24 = &UNK_0ef82600;
  *(long *)((long)puVar24 + 0x30) = 0;
  *(long *)((long)puVar24 + 0x38) = 0;
  *(undefined **)((long)puVar24 + 0x20) = &UNK_0ef82650;
  *(long **)((long)puVar24 + 0x70) = plVar20;
  *(long **)((long)puVar24 + 0x78) = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  puStack_3c8 = (uint *)((long)puVar24 + 8);
  puVar6 = (undefined4 *)plVar23[0x1c];
  puVar5 = (undefined4 *)plVar23[0x1b];
  for (puVar21 = puVar5; puStack_480 = puVar24, plStack_160 = plVar20, puVar21 != puVar6;
      puVar21 = puVar21 + 0x2a) {
    if ((*(long *)(puVar21 + 0x1e) == 0) &&
       (plVar29 = (long *)puVar24, *(long *)(puVar21 + 0x20) == -1)) goto LAB_04e1e66c;
  }
  if ((undefined4 *)plVar23[0x1d] <= puVar6) {
    plVar20 = (long *)((long)puVar6 - (long)puVar5);
    puVar21 = (undefined4 *)(((long)plVar20 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((undefined4 *)0x186186186186186 < puVar21) goto LAB_04e20b97;
    plVar29 = plVar23 + 0x1b;
    lVar22 = plVar23[0x1d] - (long)puVar5 >> 3;
    puVar5 = (undefined4 *)(lVar22 * -0x6186186186186186);
    if (puVar21 < puVar5) {
      puVar21 = puVar5;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar22 * -0x30c30c30c30c30c3)) {
      puVar21 = (undefined4 *)0x186186186186186;
    }
    pplStack_4a8 = (long **)plVar29;
    if (puVar21 == (undefined4 *)0x0) {
      plVar35 = (long *)0x0;
LAB_04e1e420:
      plStack_4c0 = (long *)((long)plVar20 + (long)plVar35);
      plStack_4b0 = plVar35 + (long)puVar21 * 0x15;
      plStack_4c8 = plVar35;
      plStack_4b8 = plStack_4c0;
      plStack_3c0 = plVar29;
      func_0x04e35b60(plStack_4c0);
      plVar20 = plStack_4b8 + 0x15;
      lVar22 = plVar23[0x1b];
      lVar7 = plVar23[0x1c];
      lVar38 = (lVar22 - lVar7) + (long)plStack_4c0;
      if (lVar22 != lVar7) {
        lVar33 = 0;
        do {
          uVar27 = ((undefined8 *)(lVar22 + lVar33))[1];
          *(undefined8 *)(lVar38 + lVar33) = *(undefined8 *)(lVar22 + lVar33);
          ((undefined8 *)(lVar38 + lVar33))[1] = uVar27;
          *(undefined8 *)(lVar22 + lVar33) = 0;
          ((undefined8 *)(lVar22 + lVar33))[1] = 0;
          puVar30 = (undefined8 *)(lVar38 + 0x20 + lVar33);
          *puVar30 = 0;
          puVar30[1] = 0;
          puVar30 = (undefined8 *)(lVar38 + 0x10 + lVar33);
          *puVar30 = 0;
          puVar30[1] = 0;
          *(undefined8 *)(lVar38 + 0x30 + lVar33) = 0;
          *(undefined8 *)(lVar38 + 0x28 + lVar33) = *(undefined8 *)(lVar22 + 0x28 + lVar33);
          puVar21 = (undefined4 *)(lVar22 + 0x18 + lVar33);
          uVar11 = puVar21[1];
          uVar12 = puVar21[2];
          uVar13 = puVar21[3];
          puVar5 = (undefined4 *)(lVar38 + 0x18 + lVar33);
          *puVar5 = *puVar21;
          puVar5[1] = uVar11;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          *(undefined2 *)(lVar22 + 0x18 + lVar33) = 0;
          *(undefined8 *)(lVar38 + 0x10 + lVar33) = *(undefined8 *)(lVar22 + 0x10 + lVar33);
          func_0x04167a20(lVar38 + lVar33 + 0x38,lVar22 + lVar33 + 0x38);
          puVar30 = (undefined8 *)(lVar22 + 0x40 + lVar33);
          uVar27 = puVar30[1];
          puVar37 = (undefined8 *)(lVar38 + 0x40 + lVar33);
          *puVar37 = *puVar30;
          puVar37[1] = uVar27;
          puVar30 = (undefined8 *)(lVar22 + 0x50 + lVar33);
          uVar27 = puVar30[1];
          puVar37 = (undefined8 *)(lVar38 + 0x50 + lVar33);
          *puVar37 = *puVar30;
          puVar37[1] = uVar27;
          puVar30 = (undefined8 *)(lVar22 + 0x60 + lVar33);
          uVar27 = puVar30[1];
          puVar37 = (undefined8 *)(lVar38 + 0x60 + lVar33);
          *puVar37 = *puVar30;
          puVar37[1] = uVar27;
          puVar30 = (undefined8 *)(lVar22 + 0x60 + lVar33);
          *puVar30 = 0;
          puVar30[1] = 0;
          *(undefined8 *)(lVar38 + 0x70 + lVar33) = *(undefined8 *)(lVar22 + 0x70 + lVar33);
          puVar30 = (undefined8 *)(lVar22 + 0x78 + lVar33);
          uVar27 = puVar30[1];
          puVar37 = (undefined8 *)(lVar38 + 0x78 + lVar33);
          *puVar37 = *puVar30;
          puVar37[1] = uVar27;
          puVar30 = (undefined8 *)(lVar38 + 0x88 + lVar33);
          *puVar30 = 0;
          puVar30[1] = 0;
          *(undefined8 *)(lVar38 + 0x98 + lVar33) = 0;
          puVar21 = (undefined4 *)(lVar22 + 0x88 + lVar33);
          uVar11 = puVar21[1];
          uVar12 = puVar21[2];
          uVar13 = puVar21[3];
          puVar5 = (undefined4 *)(lVar38 + 0x88 + lVar33);
          *puVar5 = *puVar21;
          puVar5[1] = uVar11;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          *(undefined8 *)(lVar38 + 0x98 + lVar33) = *(undefined8 *)(lVar22 + 0x98 + lVar33);
          puVar30 = (undefined8 *)(lVar22 + 0x88 + lVar33);
          *puVar30 = 0;
          puVar30[1] = 0;
          *(undefined8 *)(lVar22 + 0x98 + lVar33) = 0;
          *(undefined2 *)(lVar38 + 0xa0 + lVar33) = *(undefined2 *)(lVar22 + 0xa0 + lVar33);
          lVar3 = lVar22 + lVar33;
          lVar33 = lVar33 + 0xa8;
        } while (lVar3 + 0xa8 != lVar7);
        do {
          func_0x04e316b0(lVar22);
          lVar22 = lVar22 + 0xa8;
        } while (lVar22 != lVar7);
        lVar22 = *plStack_3c0;
      }
      puVar24 = puStack_480;
      plVar23[0x1b] = lVar38;
      plVar23[0x1c] = (long)plVar20;
      lVar7 = plVar23[0x1d];
      plVar23[0x1d] = (long)plStack_4b0;
      if (lVar22 != 0) {
        thunk_FUN_0ee326a0(lVar22,lVar7 - lVar22);
      }
      goto LAB_04e1e5fd;
    }
    plVar35 = plVar19;
    if (puVar21 < (undefined4 *)0x186186186186187) {
      plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar21 * 0xa8);
      if (plVar35 == (long *)0x0) {
        func_0x0eec74c0((long)puVar21 * 0xa8,0);
        plVar35 = (long *)0x0;
      }
      goto LAB_04e1e420;
    }
LAB_04e20b8d:
    func_0x04882eb0();
LAB_04e20b92:
    func_0x04e35da0();
    puVar24 = (uint *)plVar29;
    plVar19 = plVar35;
LAB_04e20b97:
    uVar27 = func_0x04e35cd0();
    func_0x041084d6(&DAT_0f6b5120);
    func_0x04b21360(plVar19);
    if (*plVar20 != 0) {
      (**(code **)(*plVar20 + 8))(plVar20);
    }
    func_0x04e2fc10(puVar21);
    if (plStack_4c8 != (long *)0x0) {
      (*(code *)plStack_4c8[1])(&plStack_4c8);
    }
    func_0x0412c1f0(puVar24);
    thunk_FUN_0ee326a0(puVar24,0x1c0);
    if (plStack_418 != (long *)0x0) {
      (*(code *)plStack_418[1])(&plStack_418);
    }
    if (plStack_1a8 != (long *)0x0) {
      (*(code *)plStack_1a8[1])(&plStack_1a8);
    }
    lVar22 = 0x20;
    if ((plStack_458 == &lStack_478) || (lVar22 = 0x28, plStack_458 != (long *)0x0)) {
      (**(code **)(*plStack_458 + lVar22))();
    }
    if ((bStack_438 & 1) != 0) {
      thunk_FUN_0ee326a0(CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428)),
                         CONCAT17(uStack_431,CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438))) &
                         0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar27);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  func_0x04e35b60(puVar6);
  plVar20 = (long *)(puVar6 + 0x2a);
  plVar23[0x1c] = (long)plVar20;
LAB_04e1e5fd:
  plVar23[0x1c] = (long)plVar20;
  pbVar25 = (byte *)plVar20[-0x15];
  if ((*pbVar25 & 1) == 0) {
    *pbVar25 = 0x26;
    pbVar25 = pbVar25 + 1;
  }
  else {
    pbVar25[8] = 0x13;
    pbVar25[9] = 0;
    pbVar25[10] = 0;
    pbVar25[0xb] = 0;
    pbVar25[0xc] = 0;
    pbVar25[0xd] = 0;
    pbVar25[0xe] = 0;
    pbVar25[0xf] = 0;
    pbVar25 = *(byte **)(pbVar25 + 0x10);
  }
  uVar13 = _UNK_01494d69;
  uVar12 = _UNK_01494d65;
  uVar11 = _UNK_01494d61;
  *(undefined4 *)pbVar25 = _DAT_01494d5d;
  *(undefined4 *)(pbVar25 + 4) = uVar11;
  *(undefined4 *)(pbVar25 + 8) = uVar12;
  *(undefined4 *)(pbVar25 + 0xc) = uVar13;
  pbVar25[0xf] = 0x65;
  pbVar25[0x10] = 0x6e;
  pbVar25[0x11] = 0x74;
  pbVar25[0x12] = 0x3e;
  pbVar25[0x13] = 0;
  lVar22 = plVar23[0x1c];
  puVar21 = (undefined4 *)(lVar22 - 0xa8);
  *(char *)(lVar22 + -7) = (char)plVar23[0x10];
  *(undefined8 *)(lVar22 + -0x30) = 0;
  *(undefined8 *)(lVar22 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar22 + -8) = 0;
  plVar29 = (long *)puVar24;
LAB_04e1e66c:
  plVar20 = plVar29 + 4;
  plVar35 = *(long **)(puVar21 + 0x24);
  if (plVar35 < *(long **)(puVar21 + 0x26)) {
    plVar35[2] = 0;
    plVar35[3] = 0;
    *plVar35 = 0;
    plVar35[1] = 0;
    plVar35[4] = 0;
    if (plVar35 != plVar31) {
      if ((*puStack_2e0 & 1) == 0) {
        plVar35[3] = *(long *)(puStack_2e0 + 4);
        lVar22 = *(long *)(puStack_2e0 + 2);
        plVar35[1] = *(long *)puStack_2e0;
        plVar35[2] = lVar22;
      }
      else {
        func_0x04885070(plVar35 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar35 = *plVar31;
    plVar35[5] = (long)plVar20;
    plVar35[6] = (long)plVar29;
    LOCK();
    plVar29[1] = plVar29[1] + 1;
    UNLOCK();
    plVar35 = plVar35 + 7;
    *(long **)(puVar21 + 0x24) = plVar35;
  }
  else {
    plVar35 = (long *)((long)plVar35 - *(long *)(puVar21 + 0x22));
    uVar34 = ((long)plVar35 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar34) goto LAB_04e20b92;
    lVar22 = (long)*(long **)(puVar21 + 0x26) - *(long *)(puVar21 + 0x22) >> 3;
    uVar10 = lVar22 * -0x2492492492492492;
    if (uVar34 < uVar10) {
      uVar34 = uVar10;
    }
    plVar23 = (long *)(puVar21 + 0x22);
    if (0x249249249249248 < (ulong)(lVar22 * 0x6db6db6db6db6db7)) {
      uVar34 = 0x492492492492492;
    }
    pplStack_4a8 = (long **)plVar23;
    plStack_3c0 = plVar20;
    if (uVar34 == 0) {
      plVar20 = (long *)0x0;
    }
    else {
      if (0x492492492492492 < uVar34) goto LAB_04e20b8d;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0x38);
      if (plVar20 == (long *)0x0) {
        func_0x0eec74c0(uVar34 * 0x38,0);
        plVar20 = (long *)0x0;
      }
    }
    plVar29 = (long *)((long)plVar20 + (long)plVar35);
    plStack_4b0 = plVar20 + uVar34 * 7;
    *(undefined8 *)((long)(plVar20 + 2) + (long)plVar35) = 0;
    ((undefined8 *)((long)(plVar20 + 2) + (long)plVar35))[1] = 0;
    *(undefined8 *)((long)plVar20 + (long)plVar35) = 0;
    ((undefined8 *)((long)plVar20 + (long)plVar35))[1] = 0;
    *(undefined8 *)((long)(plVar20 + 4) + (long)plVar35) = 0;
    plStack_4b8 = plVar29;
    plStack_4c8 = plVar20;
    plStack_4c0 = plVar29;
    if (plVar29 != plVar31) {
      puVar36 = (undefined *)((long)plVar35 + (long)plVar20);
      if ((*puStack_2e0 & 1) == 0) {
        *(undefined8 *)(puVar36 + 0x18) = *(undefined8 *)(puStack_2e0 + 4);
        uVar15 = puStack_2e0[1];
        uVar16 = puStack_2e0[2];
        uVar17 = puStack_2e0[3];
        *(uint *)(puVar36 + 8) = *puStack_2e0;
        *(uint *)(puVar36 + 0xc) = uVar15;
        *(uint *)(puVar36 + 0x10) = uVar16;
        *(uint *)(puVar36 + 0x14) = uVar17;
      }
      else {
        func_0x04885070(puVar36 + 8,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar29 = *plVar31;
    plVar29[5] = (long)plStack_3c0;
    plVar29[6] = (long)puStack_480;
    LOCK();
    *(long *)((long)puStack_480 + 8) = *(long *)((long)puStack_480 + 8) + 1;
    UNLOCK();
    plStack_4b8 = plStack_4b8 + 7;
    puVar37 = *(undefined8 **)(puVar21 + 0x22);
    puVar8 = *(undefined8 **)(puVar21 + 0x24);
    puVar30 = (undefined8 *)((long)plStack_4c0 + ((long)puVar37 - (long)puVar8));
    puVar26 = puVar30;
    puVar32 = puVar37;
    if ((long)puVar37 - (long)puVar8 != 0) {
      do {
        puVar26[2] = 0;
        puVar26[3] = 0;
        *puVar26 = 0;
        puVar26[1] = 0;
        puVar26[4] = 0;
        puVar26[3] = puVar32[3];
        uVar27 = puVar32[2];
        puVar26[1] = puVar32[1];
        puVar26[2] = uVar27;
        *(undefined2 *)(puVar32 + 1) = 0;
        *puVar26 = *puVar32;
        uVar27 = puVar32[6];
        puVar26[5] = puVar32[5];
        puVar26[6] = uVar27;
        puVar32[5] = 0;
        puVar32[6] = 0;
        puVar32 = puVar32 + 7;
        puVar26 = puVar26 + 7;
      } while (puVar32 != puVar8);
      do {
        plVar31 = (long *)puVar37[6];
        if (plVar31 == (long *)0x0) {
LAB_04e1e925:
          bVar4 = *(byte *)(puVar37 + 1);
        }
        else {
          LOCK();
          plVar20 = plVar31 + 1;
          lVar22 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar22 != 0) goto LAB_04e1e925;
          (**(code **)(*plVar31 + 0x10))(plVar31);
          func_0x0412c2d0(plVar31);
          bVar4 = *(byte *)(puVar37 + 1);
        }
        if ((bVar4 & 1) != 0) {
          thunk_FUN_0ee326a0(puVar37[3],puVar37[1] & 0xfffffffffffffffe);
        }
        puVar37 = puVar37 + 7;
      } while (puVar37 != puVar8);
      puVar37 = (undefined8 *)*plVar23;
    }
    plVar35 = plStack_4b8;
    *(undefined8 **)(puVar21 + 0x22) = puVar30;
    *(long **)(puVar21 + 0x24) = plStack_4b8;
    lVar22 = *(long *)(puVar21 + 0x26);
    *(long **)(puVar21 + 0x26) = plStack_4b0;
    if (puVar37 != (undefined8 *)0x0) {
      thunk_FUN_0ee326a0(puVar37,lVar22 - (long)puVar37);
    }
  }
  *(long **)(puVar21 + 0x24) = plVar35;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar23 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  plVar23 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar12;
  *(undefined4 *)(plVar19 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar14;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar31 = plVar23 + 1;
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  puVar24 = puStack_480;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  LOCK();
  lVar22 = *(long *)puStack_3c8;
  *(long *)puStack_3c8 = *(long *)puStack_3c8 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*(long *)puStack_480 + 0x10))(puStack_480);
    func_0x0412c2d0(puVar24);
    LOCK();
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) goto LAB_04e1ecaf;
LAB_04e1ea35:
    LOCK();
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 != 0) goto LAB_04e1ea35;
LAB_04e1ecaf:
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  uVar27 = (**(code **)(*plStack_160 + 0x10))(plStack_160,&uStack_318);
  if ((uStack_318 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_308,uStack_318 & 0xfffffffffffffffe);
  }
  if (plStack_1e8 != (long *)0x0) {
    (*(code *)plStack_1e8[1])(&plStack_1e8);
  }
  if (pplStack_3f8 == &plStack_418) {
    lVar22 = 0x20;
LAB_04e1ecf2:
    (**(code **)((long)*pplStack_3f8 + lVar22))();
  }
  else {
    lVar22 = 0x28;
    if (pplStack_3f8 != (long **)0x0) goto LAB_04e1ecf2;
  }
  if (plStack_f8 != (long *)0x0) {
    (*(code *)plStack_f8[1])(&plStack_f8);
  }
  if ((uStack_470 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  uStack_468 = 0;
  uStack_460 = 0;
  plStack_458 = (long *)0x0;
  uStack_470 = 0x6b636f6c620a;
  lStack_478 = -0x23d3b0419e479d70;
  uStack_70 = 0;
  uStack_410 = 0;
  lStack_78 = 0;
  plStack_418 = (long *)&UNK_0ef82948;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plStack_4c8 = plStack_418;
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0ef82720;
  plStack_4c0 = (long *)0x0;
  plStack_418 = (long *)0x0;
  plVar23[4] = (long)&UNK_0f2ccd78;
  plVar23[5] = 0;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[8] = 0;
  plVar23[9] = 0;
  plVar23[10] = 0;
  plVar23[0xb] = 0;
  plVar23[0xc] = 0;
  *(undefined1 *)(plVar23 + 0xd) = 0;
  FUN_04aa75f0(plVar23 + 0xe,&uStack_440,&UNK_01254d89);
  *(undefined1 *)(plVar23 + 0x10) = 0;
  plVar23[0x11] = 0;
  plVar23[0x12] = 0;
  plVar23[0x13] = 0;
  plVar23[0x14] = 0;
  plVar23[0x15] = 0;
  plVar23[0x16] = 0;
  plVar23[0x17] = 0xffffffff;
  plVar23[0x26] = 0;
  plVar23[0x27] = 0;
  plVar23[0x18] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1f] = 0;
  plVar23[4] = (long)&UNK_0ef82770;
  plVar23[0x2e] = 0;
  plVar23[0x2f] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar19 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar23 + 0x2e);
    plVar19 = plStack_4c8;
  }
  plVar31 = plVar23 + 1;
  plVar23[0x2e] = (long)plVar19;
  if (plStack_418 != (long *)0x0) {
    (*(code *)plStack_418[1])(&plStack_418);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20 = plVar23 + 4;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef82850;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[4] = (long)&UNK_0ef828a0;
  plVar19[0xe] = (long)plVar20;
  plVar19[0xf] = (long)plVar23;
  LOCK();
  plVar23[1] = plVar23[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar19 + 4;
  plStack_4c0 = plVar19;
  puVar21 = (undefined4 *)func_0x04e360c0(uVar27,&lStack_478,1);
  puVar24 = (uint *)(plVar23 + 0x11);
  plVar28 = *(long **)(puVar21 + 0x24);
  if (plVar28 < *(long **)(puVar21 + 0x26)) {
    plVar28[2] = 0;
    plVar28[3] = 0;
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[4] = 0;
    if ((uint *)plVar28 != puVar24) {
      plVar29 = plVar28 + 1;
      if ((*(byte *)(plVar23 + 0x12) & 1) == 0) {
        plVar28[3] = plVar23[0x14];
        lVar22 = plVar23[0x13];
        *plVar29 = plVar23[0x12];
        plVar28[2] = lVar22;
      }
      else {
        puStack_480 = puVar24;
        puStack_3c8 = (uint *)plVar29;
        func_0x04885070(plVar29,plVar23[0x14],plVar23[0x13]);
        puVar24 = puStack_480;
      }
    }
    *plVar28 = *(long *)puVar24;
    plVar28[5] = (long)(plVar19 + 4);
    plVar28[6] = (long)plVar19;
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
    plVar28 = plVar28 + 7;
    *(long **)(puVar21 + 0x24) = plVar28;
  }
  else {
    plVar28 = (long *)func_0x04e38110(puVar21 + 0x22,puVar24,&plStack_4c8);
  }
  *(long **)(puVar21 + 0x24) = plVar28;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar23[0xf];
  *(undefined4 *)(plVar23 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar23 + 0x74) = uVar12;
  *(undefined4 *)(plVar23 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar23 + 0x7c) = uVar14;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar28 = plVar19 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  plVar19 = plStack_4c0;
  *(undefined1 *)(plVar23 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar28 = plStack_4c0 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar22 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
  }
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  (**(code **)(*plVar20 + 0x10))(plVar20,&uStack_338);
  if ((uStack_338 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_328,uStack_338 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_470 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  uStack_468 = 0;
  uStack_460 = 0;
  plStack_458 = (long *)0x0;
  uStack_470 = 0x746e756f630a;
  lStack_478 = 0x184efb3a64c90e2;
  uStack_b0 = 0;
  uStack_410 = 0;
  lStack_b8 = 0;
  plStack_418 = (long *)&UNK_0ef82b40;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_4c8 = plStack_418;
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0ef82970;
  plStack_4c0 = (long *)0x0;
  plStack_418 = (long *)0x0;
  plVar23[4] = (long)&UNK_0f2ccd78;
  plVar23[5] = 0;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[8] = 0;
  plVar23[9] = 0;
  plVar23[10] = 0;
  plVar23[0xb] = 0;
  plVar23[0xc] = 0;
  *(undefined1 *)(plVar23 + 0xd) = 0;
  FUN_04aa75f0(plVar23 + 0xe,&uStack_440,&UNK_01254d89);
  *(undefined1 *)(plVar23 + 0x10) = 0;
  plVar19 = plVar23 + 0x11;
  plVar23[0x11] = 0;
  plVar23[0x12] = 0;
  plVar23[0x13] = 0;
  plVar23[0x14] = 0;
  plVar23[0x15] = 0;
  plVar23[0x16] = 0;
  plVar23[0x17] = 0xffffffff;
  plVar23[0x26] = 0;
  plVar23[0x27] = 0;
  plVar23[0x18] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1f] = 0;
  plVar23[4] = (long)&UNK_0ef829c0;
  plVar23[0x2e] = 0x7fffffff80000000;
  plVar23[0x30] = 0;
  plVar23[0x31] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar23 + 0x30);
    plVar31 = plStack_4c8;
  }
  plStack_4c8 = (long *)0x0;
  plVar23[0x30] = (long)plVar31;
  puVar24 = (uint *)(plVar23 + 0x12);
  if (plVar19 == (long *)&DAT_0f5520a8) {
    plVar23[0x15] = 0;
  }
  else {
    if ((*puVar24 & 1) == 0) {
      if ((_DAT_0f5520b0 & 1) == 0) {
        plVar23[0x14] = _DAT_0f5520c0;
        uVar13 = uRam000000000f5520bc;
        uVar12 = _DAT_0f5520b8;
        uVar11 = uRam000000000f5520b4;
        *puVar24 = _DAT_0f5520b0;
        *(undefined4 *)((long)plVar23 + 0x94) = uVar11;
        *(undefined4 *)(plVar23 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar23 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar24,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
      }
    }
    else {
      bVar39 = (_DAT_0f5520b0 & 1) != 0;
      lVar22 = 0xf5520b1;
      if (bVar39) {
        lVar22 = _DAT_0f5520c0;
      }
      uVar34 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
      }
      func_0x04885120(puVar24,lVar22,uVar34);
    }
    plVar23[0x11] = _DAT_0f5520a8;
    plVar23[0x15] = 0;
    if (plStack_4c8 != (long *)0x0) {
      (*(code *)plStack_4c8[1])(&plStack_4c8);
    }
  }
  plVar31 = plVar23 + 1;
  if (plStack_418 != (long *)0x0) {
    (*(code *)plStack_418[1])(&plStack_418);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  puStack_3c8 = puVar24;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0ef82aa0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0ef82af0;
  plVar20[0xe] = (long)(plVar23 + 4);
  plVar20[0xf] = (long)plVar23;
  LOCK();
  plVar23[1] = plVar23[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar20 + 4;
  plStack_4c0 = plVar20;
  puStack_480 = (uint *)(plVar23 + 4);
  puVar21 = (undefined4 *)func_0x04e360c0(uVar27,&lStack_478,0);
  plVar28 = *(long **)(puVar21 + 0x24);
  if (plVar28 < *(long **)(puVar21 + 0x26)) {
    plVar28[2] = 0;
    plVar28[3] = 0;
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[4] = 0;
    if (plVar28 != plVar19) {
      if ((*puStack_3c8 & 1) == 0) {
        plVar28[3] = *(long *)(puStack_3c8 + 4);
        lVar22 = *(long *)(puStack_3c8 + 2);
        plVar28[1] = *(long *)puStack_3c8;
        plVar28[2] = lVar22;
      }
      else {
        func_0x04885070(plVar28 + 1,plVar23[0x14],plVar23[0x13]);
      }
    }
    *plVar28 = *plVar19;
    plVar28[5] = (long)(plVar20 + 4);
    plVar28[6] = (long)plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    plVar28 = plVar28 + 7;
    *(long **)(puVar21 + 0x24) = plVar28;
  }
  else {
    plVar28 = (long *)func_0x04e38110(puVar21 + 0x22,plVar19,&plStack_4c8);
  }
  plVar19 = plStack_3d8;
  *(long **)(puVar21 + 0x24) = plVar28;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar23[0xf];
  *(undefined4 *)(plVar23 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar23 + 0x74) = uVar12;
  *(undefined4 *)(plVar23 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar23 + 0x7c) = uVar14;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar28 = plVar20 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  plVar20 = plStack_4c0;
  *(undefined1 *)(plVar23 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar28 = plStack_4c0 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar22 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
  }
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  bStack_2d8 = 2;
  uStack_2d7 = 0x31;
  uStack_2d6 = 0;
  (**(code **)(*(long *)puStack_480 + 0x18))(puStack_480,&uStack_358,&bStack_2d8);
  if ((bStack_2d8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2c8,
                       CONCAT53(uStack_2d5,CONCAT12(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8))) &
                       0xfffffffffffffffe);
  }
  if ((uStack_358 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_348,uStack_358 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((uStack_470 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  uStack_427 = 0;
  uStack_426 = 0;
  uStack_420 = 0;
  uStack_440 = 0xc6a3fd8f2a49fe2d;
  bStack_438 = 0x20;
  uStack_437 = _DAT_0144759f;
  uStack_433 = (undefined2)_UNK_014475a3;
  uStack_431 = (undefined1)((uint)_UNK_014475a3 >> 0x10);
  uStack_430 = (undefined1)((uint)_UNK_014475a3 >> 0x18);
  uStack_42f = _UNK_014475a7;
  uStack_42b = (undefined2)_UNK_014475ab;
  uStack_429 = (undefined1)((uint)_UNK_014475ab >> 0x10);
  uStack_428 = (undefined1)((uint)_UNK_014475ab >> 0x18);
  plVar23 = (long *)plVar19[4];
  if (plVar23 == (long *)0x0) {
    plStack_458 = (long *)0x0;
LAB_04e1f639:
    plStack_1f8 = (long *)0x0;
LAB_04e1f645:
    uStack_220 = 0;
    plStack_228 = (long *)&UNK_0ef82d38;
LAB_04e1f654:
    uStack_410 = 0;
    plStack_418 = (long *)0x0;
    (*(code *)*plStack_228)(&plStack_228,&plStack_418);
    plVar23 = plStack_228;
  }
  else {
    if (plVar23 == plVar19) {
      plStack_458 = &lStack_478;
      (**(code **)(*plVar23 + 0x18))();
    }
    else {
      plStack_458 = (long *)(**(code **)(*plVar23 + 0x10))();
    }
    plStack_1f8 = plStack_458;
    uStack_220 = 0;
    plStack_228 = (long *)&UNK_0ef82d38;
    if (plStack_458 == (long *)0x0) goto LAB_04e1f639;
    if (plStack_458 != &lStack_478) {
      plStack_458 = (long *)0x0;
      goto LAB_04e1f645;
    }
    plStack_1f8 = alStack_218;
    (**(code **)(*plStack_458 + 0x18))(plStack_458);
    uStack_410 = 0;
    if (plStack_228 != (long *)0x0) goto LAB_04e1f654;
    plVar23 = (long *)0x0;
  }
  plStack_228 = (long *)0x0;
  plStack_418 = plVar23;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef82b68;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plVar23 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar23)(&plStack_418,&plStack_4c8);
    plStack_4c8 = plStack_418;
  }
  plStack_418 = (long *)0x0;
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
  FUN_04aa75f0(plVar19 + 0xe,&uStack_2c0,&UNK_01254d89);
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
  plVar19[4] = (long)&UNK_0ef82bb8;
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar19 + 0x2e);
    plVar23 = plStack_4c8;
  }
  plVar31 = plVar19 + 1;
  plVar19[0x2e] = (long)plVar23;
  if (plStack_418 != (long *)0x0) {
    (*(code *)plStack_418[1])(&plStack_418);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20 = plVar19 + 4;
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0ef82c98;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[4] = (long)&UNK_0ef82ce8;
  plVar23[0xe] = (long)plVar20;
  plVar23[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar23 + 4;
  plStack_4c0 = plVar23;
  puVar21 = (undefined4 *)func_0x04e2f1f0(plStack_3d0,&uStack_440,0);
  plVar28 = plVar19 + 0x11;
  plVar29 = *(long **)(puVar21 + 0x24);
  if (plVar29 < *(long **)(puVar21 + 0x26)) {
    plVar29[2] = 0;
    plVar29[3] = 0;
    *plVar29 = 0;
    plVar29[1] = 0;
    plVar29[4] = 0;
    if (plVar29 != plVar28) {
      plVar35 = plVar29 + 1;
      if ((*(byte *)(plVar19 + 0x12) & 1) == 0) {
        plVar29[3] = plVar19[0x14];
        lVar22 = plVar19[0x13];
        *plVar35 = plVar19[0x12];
        plVar29[2] = lVar22;
      }
      else {
        puStack_480 = (uint *)plVar35;
        func_0x04885070(plVar35,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar29 = *plVar28;
    plVar29[5] = (long)(plVar23 + 4);
    plVar29[6] = (long)plVar23;
    LOCK();
    plVar23[1] = plVar23[1] + 1;
    UNLOCK();
    plVar29 = plVar29 + 7;
    *(long **)(puVar21 + 0x24) = plVar29;
  }
  else {
    plVar29 = (long *)func_0x04e29380(puVar21 + 0x22,plVar28,&plStack_4c8);
  }
  *(long **)(puVar21 + 0x24) = plVar29;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar23 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  plVar23 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar12;
  *(undefined4 *)(plVar19 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar14;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar28 = plVar23 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  plVar23 = plStack_4c0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar28 = plStack_4c0 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar23);
    }
  }
  plVar23 = plStack_3d8;
  LOCK();
  lVar22 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  (**(code **)(*plVar20 + 0x10))(plVar20,&uStack_378);
  if ((uStack_378 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_368,uStack_378 & 0xfffffffffffffffe);
  }
  if (plStack_228 != (long *)0x0) {
    (*(code *)plStack_228[1])(&plStack_228);
  }
  if (plStack_458 == &lStack_478) {
    lVar22 = 0x20;
LAB_04e1fb17:
    (**(code **)(*plStack_458 + lVar22))();
  }
  else {
    lVar22 = 0x28;
    if (plStack_458 != (long *)0x0) goto LAB_04e1fb17;
  }
  if ((bStack_438 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428)),
                       CONCAT17(uStack_431,CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438))) &
                       0xfffffffffffffffe);
  }
  uStack_42b = 0;
  uStack_429 = 0;
  uStack_428 = 0;
  uStack_427 = 0;
  uStack_426 = 0;
  uStack_420 = 0;
  bStack_438 = 0x12;
  uStack_437 = 0x5f6d756e;
  uStack_433 = 0x7473;
  uStack_431 = 0x65;
  uStack_430 = 0x70;
  uStack_42f = 0x73;
  uStack_440 = 0x4db8600f62e783c7;
  plVar19 = (long *)plVar23[4];
  if (plVar19 == (long *)0x0) {
    plStack_458 = (long *)0x0;
LAB_04e1fbb3:
    plStack_238 = (long *)0x0;
LAB_04e1fbbf:
    uStack_260 = 0;
    plStack_268 = (long *)&UNK_0ef82f30;
LAB_04e1fbce:
    uStack_410 = 0;
    plStack_418 = (long *)0x0;
    (*(code *)*plStack_268)(&plStack_268,&plStack_418);
    plVar23 = plStack_268;
  }
  else {
    if (plVar19 == plVar23) {
      plStack_458 = &lStack_478;
      (**(code **)(*plVar19 + 0x18))();
    }
    else {
      plStack_458 = (long *)(**(code **)(*plVar19 + 0x10))();
    }
    plStack_238 = plStack_458;
    uStack_260 = 0;
    plStack_268 = (long *)&UNK_0ef82f30;
    if (plStack_458 == (long *)0x0) goto LAB_04e1fbb3;
    if (plStack_458 != &lStack_478) {
      plStack_458 = (long *)0x0;
      goto LAB_04e1fbbf;
    }
    plStack_238 = alStack_258;
    (**(code **)(*plStack_458 + 0x18))(plStack_458);
    uStack_410 = 0;
    if (plStack_268 != (long *)0x0) goto LAB_04e1fbce;
    plVar23 = (long *)0x0;
  }
  plStack_268 = (long *)0x0;
  plStack_418 = plVar23;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef82d60;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plVar23 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar23)(&plStack_418,&plStack_4c8);
    plStack_4c8 = plStack_418;
  }
  plStack_418 = (long *)0x0;
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
  FUN_04aa75f0(plVar19 + 0xe,&uStack_2c0,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar23 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0ef82db0;
  plVar19[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar19 + 0x2f) = 1;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar19 + 0x30);
    plVar31 = plStack_4c8;
  }
  plVar20 = plVar19 + 4;
  plStack_4c8 = (long *)0x0;
  plVar19[0x30] = (long)plVar31;
  puVar24 = (uint *)(plVar19 + 0x12);
  if (plVar23 == (long *)&DAT_0f552078) {
    plVar19[0x15] = 0;
  }
  else {
    if ((*puVar24 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552090;
        uVar13 = uRam000000000f55208c;
        uVar12 = _DAT_0f552088;
        uVar11 = uRam000000000f552084;
        *puVar24 = _DAT_0f552080;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar11;
        *(undefined4 *)(plVar19 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar24,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar39 = (_DAT_0f552080 & 1) != 0;
      lVar22 = 0xf552081;
      if (bVar39) {
        lVar22 = _DAT_0f552090;
      }
      uVar34 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar24,lVar22,uVar34);
    }
    plVar19[0x11] = _DAT_0f552078;
    plVar19[0x15] = 0;
    if (plStack_4c8 != (long *)0x0) {
      (*(code *)plStack_4c8[1])(&plStack_4c8);
    }
  }
  plVar31 = plVar19 + 1;
  puStack_480 = puVar24;
  if (plStack_418 != (long *)0x0) {
    (*(code *)plStack_418[1])(&plStack_418);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar28 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar28[1] = 0;
  plVar28[2] = 0;
  *plVar28 = (long)&UNK_0ef82e90;
  plVar28[6] = 0;
  plVar28[7] = 0;
  plVar28[4] = (long)&UNK_0ef82ee0;
  plVar28[0xe] = (long)plVar20;
  plVar28[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar28 + 4;
  plStack_4c0 = plVar28;
  puVar21 = (undefined4 *)func_0x04e2f1f0(plStack_3d0,&uStack_440,0);
  plVar29 = *(long **)(puVar21 + 0x24);
  if (plVar29 < *(long **)(puVar21 + 0x26)) {
    plVar29[2] = 0;
    plVar29[3] = 0;
    *plVar29 = 0;
    plVar29[1] = 0;
    plVar29[4] = 0;
    if (plVar29 != plVar23) {
      puVar24 = (uint *)(plVar29 + 1);
      if ((*puStack_480 & 1) == 0) {
        plVar29[3] = *(long *)(puStack_480 + 4);
        lVar22 = *(long *)(puStack_480 + 2);
        *(undefined8 *)puVar24 = *(undefined8 *)puStack_480;
        plVar29[2] = lVar22;
      }
      else {
        puStack_480 = puVar24;
        func_0x04885070(puVar24,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar29 = *plVar23;
    plVar29[5] = (long)(plVar28 + 4);
    plVar29[6] = (long)plVar28;
    LOCK();
    plVar28[1] = plVar28[1] + 1;
    UNLOCK();
    plVar29 = plVar29 + 7;
    *(long **)(puVar21 + 0x24) = plVar29;
  }
  else {
    plVar29 = (long *)func_0x04e29380(puVar21 + 0x22,plVar23,&plStack_4c8);
  }
  plVar23 = plStack_3d8;
  *(long **)(puVar21 + 0x24) = plVar29;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar28 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar28 = *plVar28 + 1;
    UNLOCK();
  }
  plVar28 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar12;
  *(undefined4 *)(plVar19 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar14;
  if (plVar28 != (long *)0x0) {
    LOCK();
    plVar29 = plVar28 + 1;
    lVar22 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
      func_0x0412c2d0(plVar28);
    }
  }
  plVar28 = plStack_4c0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar29 = plStack_4c0 + 1;
    lVar22 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar28);
    }
  }
  LOCK();
  lVar22 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  (**(code **)(*plVar20 + 0x10))(plVar20,&uStack_398);
  if ((uStack_398 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_388,uStack_398 & 0xfffffffffffffffe);
  }
  if (plStack_268 != (long *)0x0) {
    (*(code *)plStack_268[1])(&plStack_268);
  }
  if (plStack_458 == &lStack_478) {
    lVar22 = 0x20;
LAB_04e2011c:
    (**(code **)(*plStack_458 + lVar22))();
  }
  else {
    lVar22 = 0x28;
    if (plStack_458 != (long *)0x0) goto LAB_04e2011c;
  }
  if ((bStack_438 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428)),
                       CONCAT17(uStack_431,CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438))) &
                       0xfffffffffffffffe);
  }
  plVar19 = (long *)plVar23[4];
  if (plVar19 == (long *)0x0) {
    pplStack_4a8 = (long **)0x0;
    uStack_150 = 0;
    puStack_158 = (undefined8 *)&UNK_0ef82f48;
    pplStack_128 = (long **)0x0;
  }
  else {
    if (plVar19 == plVar23) {
      pplStack_4a8 = &plStack_4c8;
      (**(code **)(*plVar19 + 0x18))();
    }
    else {
      pplStack_4a8 = (long **)(**(code **)(*plVar19 + 0x10))();
    }
    pplStack_128 = pplStack_4a8;
    uStack_150 = 0;
    puStack_158 = (undefined8 *)&UNK_0ef82f48;
    if (pplStack_4a8 == (long **)0x0) {
      pplStack_128 = (long **)0x0;
    }
    else if (pplStack_4a8 == &plStack_4c8) {
      pplStack_128 = aplStack_148;
      (*(code *)(*pplStack_4a8)[3])(pplStack_4a8);
    }
    else {
      pplStack_4a8 = (long **)0x0;
    }
  }
  ppuVar2 = (undefined8 **)(plStack_3d0 + 0x1a);
  if (ppuVar2 == &puStack_158) {
    if (puStack_158 != (undefined8 *)0x0) {
      (*(code *)puStack_158[1])(&puStack_158);
    }
    if (pplStack_4a8 != &plStack_4c8) goto LAB_04e202c9;
LAB_04e202f5:
    lVar22 = 0x20;
LAB_04e202fa:
    (**(code **)((long)*pplStack_4a8 + lVar22))();
  }
  else {
    if (*ppuVar2 != (undefined8 *)0x0) {
      (*(code *)(*ppuVar2)[1])(ppuVar2);
    }
    if (puStack_158 == (undefined8 *)0x0) {
      puVar30 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_158)(&puStack_158,ppuVar2);
      puVar30 = puStack_158;
    }
    puStack_158 = (undefined8 *)0x0;
    *ppuVar2 = puVar30;
    if (pplStack_4a8 == &plStack_4c8) goto LAB_04e202f5;
LAB_04e202c9:
    lVar22 = 0x28;
    if (pplStack_4a8 != (long **)0x0) goto LAB_04e202fa;
  }
  uStack_428 = 0;
  uStack_427 = 0;
  uStack_426 = 0;
  uStack_420 = 0;
  bStack_438 = 0x1c;
  uStack_437 = 0x70657473;
  uStack_433 = 0x645f;
  uStack_431 = 0x69;
  uStack_430 = 0x72;
  uStack_42f = 0x69746365;
  uStack_42b = 0x6e6f;
  uStack_429 = 0;
  uStack_440 = 0x9657edf9d6cf7589;
  plVar19 = (long *)plVar23[4];
  if (plVar19 == (long *)0x0) {
    plStack_458 = (long *)0x0;
LAB_04e203f3:
    plStack_278 = (long *)0x0;
LAB_04e203ff:
    uStack_2a0 = 0;
    plStack_2a8 = (long *)&UNK_0ef83140;
LAB_04e2040e:
    uStack_410 = 0;
    plStack_418 = (long *)0x0;
    (*(code *)*plStack_2a8)(&plStack_2a8,&plStack_418);
    plVar23 = plStack_2a8;
  }
  else {
    if (plVar19 == plVar23) {
      plStack_458 = &lStack_478;
      (**(code **)(*plVar19 + 0x18))();
    }
    else {
      plStack_458 = (long *)(**(code **)(*plVar19 + 0x10))();
    }
    plStack_278 = plStack_458;
    uStack_2a0 = 0;
    plStack_2a8 = (long *)&UNK_0ef83140;
    if (plStack_458 == (long *)0x0) goto LAB_04e203f3;
    if (plStack_458 != &lStack_478) {
      plStack_458 = (long *)0x0;
      goto LAB_04e203ff;
    }
    plStack_278 = alStack_298;
    (**(code **)(*plStack_458 + 0x18))(plStack_458);
    uStack_410 = 0;
    if (plStack_2a8 != (long *)0x0) goto LAB_04e2040e;
    plVar23 = (long *)0x0;
  }
  plStack_2a8 = (long *)0x0;
  plStack_418 = plVar23;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef82f70;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plVar23 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar23)(&plStack_418,&plStack_4c8);
    plStack_4c8 = plStack_418;
  }
  plStack_418 = (long *)0x0;
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
  FUN_04aa75f0(plVar19 + 0xe,&uStack_2c0,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar23 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0ef82fc0;
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar19 + 0x2e);
    plVar31 = plStack_4c8;
  }
  plVar20 = plVar19 + 4;
  plStack_4c8 = (long *)0x0;
  plVar19[0x2e] = (long)plVar31;
  plVar19[0x36] = 0;
  plVar19[0x37] = 0;
  plVar19[0x38] = 0;
  plVar19[0x39] = 0;
  *(undefined4 *)(plVar19 + 0x3a) = 0x3f800000;
  *(undefined1 *)(plVar19 + 0x3b) = 0;
  puVar24 = (uint *)(plVar19 + 0x12);
  if (plVar23 != (long *)&DAT_0f551fe8) {
    if ((*puVar24 & 1) == 0) {
      if ((_DAT_0f551ff0 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552000;
        uVar13 = uRam000000000f551ffc;
        uVar12 = _DAT_0f551ff8;
        uVar11 = uRam000000000f551ff4;
        *puVar24 = _DAT_0f551ff0;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar11;
        *(undefined4 *)(plVar19 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar24,_DAT_0f552000,CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8));
      }
    }
    else {
      bVar39 = (_DAT_0f551ff0 & 1) != 0;
      lVar22 = 0xf551ff1;
      if (bVar39) {
        lVar22 = _DAT_0f552000;
      }
      uVar34 = (ulong)((_DAT_0f551ff0 & 0xff) >> 1);
      if (bVar39) {
        uVar34 = CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8);
      }
      func_0x04885120(puVar24,lVar22,uVar34);
    }
  }
  plVar19[0x11] = _DAT_0f551fe8;
  plVar19[0x15] = 0;
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  plVar31 = plVar19 + 1;
  if (plStack_418 != (long *)0x0) {
    (*(code *)plStack_418[1])(&plStack_418);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plStack_3d8 = plVar31;
  plVar31 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar31 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar31[1] = 0;
  plVar31[2] = 0;
  *plVar31 = (long)&UNK_0ef830a0;
  plVar31[6] = 0;
  plVar31[7] = 0;
  plVar31[4] = (long)&UNK_0ef830f0;
  plVar31[0xe] = (long)plVar20;
  plVar31[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar31 + 4;
  plStack_4c0 = plVar31;
  puVar21 = (undefined4 *)func_0x04e2f1f0(plStack_3d0,&uStack_440,0);
  plVar28 = *(long **)(puVar21 + 0x24);
  if (plVar28 < *(long **)(puVar21 + 0x26)) {
    plVar28[2] = 0;
    plVar28[3] = 0;
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[4] = 0;
    if (plVar28 != plVar23) {
      plVar29 = plVar28 + 1;
      if ((*puVar24 & 1) == 0) {
        plVar28[3] = plVar19[0x14];
        lVar22 = plVar19[0x13];
        *plVar29 = *(long *)puVar24;
        plVar28[2] = lVar22;
      }
      else {
        plStack_3d0 = plVar29;
        func_0x04885070(plVar29,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar28 = *plVar23;
    plVar28[5] = (long)(plVar31 + 4);
    plVar28[6] = (long)plVar31;
    LOCK();
    plVar31[1] = plVar31[1] + 1;
    UNLOCK();
    plVar28 = plVar28 + 7;
    *(long **)(puVar21 + 0x24) = plVar28;
  }
  else {
    plVar28 = (long *)func_0x04e29380(puVar21 + 0x22,plVar23,&plStack_4c8);
  }
  plVar23 = plStack_3d8;
  *(long **)(puVar21 + 0x24) = plVar28;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar12;
  *(undefined4 *)(plVar19 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar14;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar28 = plVar31 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  plVar31 = plStack_4c0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar28 = plStack_4c0 + 1;
    lVar22 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar22 = *plVar23;
  *plVar23 = *plVar23 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar22 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  plStack_4c8 = (long *)CONCAT26(plStack_4c8._6_2_,0x6e776f6408);
  func_0x04e2edb0(plVar20,&plStack_4c8,0);
  plStack_418 = (long *)CONCAT44(plStack_418._4_4_,0x707504);
  func_0x04e2edb0(plVar20,&plStack_418,1);
  uStack_2c0 = 6;
  uStack_2bf = 0x74756f;
  func_0x04e2edb0(plVar20,&uStack_2c0,2);
  uStack_110 = 8;
  uStack_10f = 0x79617761;
  uStack_10b = 0;
  func_0x04e2edb0(plVar20,&uStack_110,2);
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  (**(code **)(*plVar20 + 0x10))(plVar20,&uStack_3b8);
  if ((uStack_3b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  if (plStack_2a8 != (long *)0x0) {
    (*(code *)plStack_2a8[1])(&plStack_2a8);
  }
  if (plStack_458 == &lStack_478) {
    lVar22 = 0x20;
  }
  else {
    lVar22 = 0x28;
    if (plStack_458 == (long *)0x0) goto joined_r0x04e209f8;
  }
  (**(code **)(*plStack_458 + lVar22))();
joined_r0x04e209f8:
  if ((bStack_438 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT62(uStack_426,CONCAT11(uStack_427,uStack_428)),
                       CONCAT17(uStack_431,CONCAT25(uStack_433,CONCAT41(uStack_437,bStack_438))) &
                       0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12a3e15  hance_information
 * 0x144759f  decoration_block
 * 0x1494d5d  <any array element>
 * 0x14c903f  decoration_chance
 */
