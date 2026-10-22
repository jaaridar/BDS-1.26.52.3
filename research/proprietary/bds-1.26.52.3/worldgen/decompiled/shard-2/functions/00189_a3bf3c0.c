/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa4bf3c0 (ELF vaddr 0xa3bf3c0)
 * Label: string:JigsawPlaceOptions
 * Body:  [[0a4bf3c0, 0a4bfecd] [0a4bfed0, 0a4c0018] [0a4c0020, 0a4c00d4]]
 * Ghidra: FUN_0a4bf3c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a4bf3c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined1 uStack_324;
  undefined2 uStack_323;
  undefined1 uStack_321;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  long lStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined4 uStack_268;
  undefined2 uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined2 uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined2 uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined2 uStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 uStack_1d8;
  undefined2 uStack_1d7;
  undefined1 uStack_1d5;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  
  uStack_1e8 = CONCAT31((int3)_DAT_012e2e9f,0x24);
  uStack_1e4 = (undefined4)((ulong)_DAT_012e2e9f >> 0x18);
  uStack_1e0._0_1_ = (undefined1)((ulong)_DAT_012e2e9f >> 0x38);
  uStack_1e0._1_3_ = (undefined3)_UNK_012e2ea7;
  uStack_1dc = (undefined4)((ulong)_UNK_012e2ea7 >> 0x18);
  uStack_1d8 = (undefined1)((ulong)_UNK_012e2ea7 >> 0x38);
  uStack_1d7 = 0x736e;
  uStack_1d5 = 0;
  lStack_318 = 0;
  lStack_310 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  func_0x048b1dc0(auStack_2d0);
  func_0x048b1dc0(&uStack_2c0);
  uStack_280 = 0;
  uStack_278 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  uStack_2a0 = 0;
  lStack_298 = 0;
  lStack_2b0 = 0;
  uStack_2a8 = 0;
  lStack_270 = 0;
  if ((uStack_2e8 & 1) == 0) {
    lStack_2d8 = CONCAT44(uStack_1d4,CONCAT13(uStack_1d5,CONCAT21(uStack_1d7,uStack_1d8)));
    uStack_2e8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_2e0 = CONCAT44(uStack_1dc,uStack_1e0);
  }
  else {
    func_0x04885120(&uStack_2e8,(long)&uStack_1e8 + 1,0x12);
  }
  auStack_2d0 = func_0x0a50acb0();
  if ((uStack_1e8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_1d4,CONCAT13(uStack_1d5,CONCAT21(uStack_1d7,uStack_1d8))),
                    CONCAT44(uStack_1e4,uStack_1e8) & 0xfffffffffffffffe);
  }
  uStack_330 = 0x65656b16;
  uStack_32c = 0x67694a70;
  uStack_328 = 0x73776173;
  uStack_324 = 0;
  func_0x0662c7f0();
  func_0x065af670(&uStack_1e8);
  lVar8 = (long)&uStack_330 + 1;
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_330 & 1) == 0) {
      uStack_1c0 = CONCAT71(uStack_31f,uStack_320);
      uStack_1c4 = CONCAT13(uStack_321,CONCAT21(uStack_323,uStack_324));
      uStack_1d0 = uStack_330;
      uStack_1cc = uStack_32c;
      uStack_1c8 = uStack_328;
    }
    else {
      FUN_04885070(&uStack_1d0,CONCAT71(uStack_31f,uStack_320),
                   CONCAT17(uStack_321,CONCAT25(uStack_323,CONCAT14(uStack_324,uStack_328))));
    }
  }
  else {
    bVar9 = (uStack_330 & 1) == 0;
    lVar6 = CONCAT71(uStack_31f,uStack_320);
    if (bVar9) {
      lVar6 = lVar8;
    }
    uVar7 = (ulong)((byte)uStack_330 >> 1);
    if (!bVar9) {
      uVar7 = CONCAT17(uStack_321,CONCAT25(uStack_323,CONCAT14(uStack_324,uStack_328)));
    }
    func_0x04885120(&uStack_1d0,lVar6,uVar7);
  }
  auStack_1b8 = func_0x0662a2a0();
  func_0x0662c7f0();
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar4 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f22b530;
  plStack_1a8 = plVar4 + 4;
  plVar4[10] = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)(plVar4 + 0x12) = 1;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[4] = (long)&UNK_0f22b580;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      lVar6 = *plStack_1a0;
      plStack_1a0 = plVar4;
      (**(code **)(lVar6 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar4 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar4;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar4 == (long *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  plVar2 = plStack_190;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f22b5d8;
  plStack_198 = plVar4 + 3;
  *(undefined1 *)(plVar4 + 4) = 1;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[3] = (long)&UNK_0f22b628;
  if (plStack_190 == (long *)0x0) {
LAB_0a4bf6be:
    plStack_190 = plVar4;
    if (uStack_2a8 < uStack_2a0) goto LAB_0a4bf6d8;
LAB_0a4bf71d:
    uVar7 = func_0x065b01f0(&lStack_2b0,&uStack_1e8);
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 != 0) goto LAB_0a4bf6be;
    lVar6 = *plStack_190;
    plStack_190 = plVar4;
    (**(code **)(lVar6 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_2a0 <= uStack_2a8) goto LAB_0a4bf71d;
LAB_0a4bf6d8:
    uVar7 = uStack_2a8;
    func_0x065b0410(uStack_2a8,&uStack_1e8);
    uVar7 = uVar7 + 0x1b0;
  }
  uStack_2a8 = uVar7;
  func_0x0652dc20(&uStack_1e8);
  uStack_208 = _DAT_0f6422a0;
  uStack_204 = _DAT_0f6422a4;
  if ((_DAT_0f6422a8 & 1) == 0) {
    uStack_1f0 = _DAT_0f6422b8;
    uStack_200 = _DAT_0f6422a8;
    uStack_1fc = uRam000000000f6422ac;
    uStack_1f8 = _DAT_0f6422b0;
    uStack_1f4 = uRam000000000f6422b4;
  }
  else {
    func_0x0412e5e0(&uStack_200,_DAT_0f6422b8,CONCAT44(uRam000000000f6422b4,_DAT_0f6422b0));
  }
  func_0x0730fa70(uVar7 - 0x1b0,&uStack_208,0);
  if ((uStack_200 & 1) != 0) {
    func_0x0412a280(uStack_1f0,CONCAT44(uStack_1fc,uStack_200) & 0xfffffffffffffffe);
  }
  if ((uStack_330 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_31f,uStack_320),
                    CONCAT44(uStack_32c,uStack_330) & 0xfffffffffffffffe);
  }
  uStack_330 = 0x636e691e;
  uStack_32c = 0x6564756c;
  uStack_328 = 0x69746e45;
  uStack_324 = 0x74;
  uStack_323 = 0x6569;
  uStack_321 = 0x73;
  uStack_320 = 0;
  func_0x0662c7f0();
  func_0x065af670(&uStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_330 & 1) == 0) {
      uStack_1c0 = CONCAT71(uStack_31f,uStack_320);
      uStack_1c4 = CONCAT13(uStack_321,CONCAT21(uStack_323,uStack_324));
      uStack_1d0 = uStack_330;
      uStack_1cc = uStack_32c;
      uStack_1c8 = uStack_328;
    }
    else {
      FUN_04885070(&uStack_1d0,CONCAT71(uStack_31f,uStack_320),
                   CONCAT17(uStack_321,CONCAT25(uStack_323,CONCAT14(uStack_324,uStack_328))));
    }
  }
  else {
    bVar9 = (uStack_330 & 1) == 0;
    lVar6 = CONCAT71(uStack_31f,uStack_320);
    if (bVar9) {
      lVar6 = lVar8;
    }
    uVar7 = (ulong)((byte)uStack_330 >> 1);
    if (!bVar9) {
      uVar7 = CONCAT17(uStack_321,CONCAT25(uStack_323,CONCAT14(uStack_324,uStack_328)));
    }
    func_0x04885120(&uStack_1d0,lVar6,uVar7);
  }
  auVar10 = func_0x0662a2a0();
  auStack_1b8 = auVar10;
  func_0x0662c7f0();
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar4 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f22b688;
  plStack_1a8 = plVar4 + 4;
  plVar4[10] = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)(plVar4 + 0x12) = 1;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[4] = (long)&UNK_0f22b6d8;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      lVar6 = *plStack_1a0;
      plStack_1a0 = plVar4;
      (**(code **)(lVar6 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar4 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar4;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar4 == (long *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  plVar2 = plStack_190;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f22b730;
  plStack_198 = plVar4 + 3;
  *(undefined1 *)(plVar4 + 4) = 1;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[3] = (long)&UNK_0f22b780;
  if (plStack_190 == (long *)0x0) {
LAB_0a4bf9da:
    plStack_190 = plVar4;
    if (uStack_2a8 < uStack_2a0) goto LAB_0a4bf9ec;
LAB_0a4bfa29:
    uVar7 = func_0x065b01f0(&lStack_2b0,&uStack_1e8);
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 != 0) goto LAB_0a4bf9da;
    lVar6 = *plStack_190;
    plStack_190 = plVar4;
    (**(code **)(lVar6 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_2a0 <= uStack_2a8) goto LAB_0a4bfa29;
LAB_0a4bf9ec:
    uVar7 = uStack_2a8;
    func_0x065b0410(uStack_2a8,&uStack_1e8);
    uVar7 = uVar7 + 0x1b0;
  }
  uStack_2a8 = uVar7;
  func_0x0652dc20(&uStack_1e8);
  uStack_228 = _DAT_0f6422a0;
  uStack_224 = _DAT_0f6422a4;
  if ((_DAT_0f6422a8 & 1) == 0) {
    uStack_210 = _DAT_0f6422b8;
    uStack_220 = _DAT_0f6422a8;
    uStack_21c = uRam000000000f6422ac;
    uStack_218 = _DAT_0f6422b0;
    uStack_214 = uRam000000000f6422b4;
  }
  else {
    func_0x0412e5e0(&uStack_220,_DAT_0f6422b8,CONCAT44(uRam000000000f6422b4,_DAT_0f6422b0));
  }
  func_0x0730fa70(uVar7 - 0x1b0,&uStack_228,0);
  if ((uStack_220 & 1) != 0) {
    func_0x0412a280(uStack_210,CONCAT44(uStack_21c,uStack_220) & 0xfffffffffffffffe);
  }
  if ((uStack_330 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_31f,uStack_320),
                    CONCAT44(uStack_32c,uStack_330) & 0xfffffffffffffffe);
  }
  uStack_330 = 0x71696c1c;
  uStack_32c = 0x53646975;
  uStack_328 = 0x69747465;
  uStack_324 = 0x6e;
  uStack_323 = 0x7367;
  uStack_321 = 0;
  func_0x0a3bc7d0();
  func_0x065af670(&uStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_330 & 1) == 0) {
      uStack_1c0 = CONCAT71(uStack_31f,uStack_320);
      uStack_1c4 = CONCAT13(uStack_321,CONCAT21(uStack_323,uStack_324));
      uStack_1d0 = uStack_330;
      uStack_1cc = uStack_32c;
      uStack_1c8 = uStack_328;
    }
    else {
      FUN_04885070(&uStack_1d0,CONCAT71(uStack_31f,uStack_320),
                   CONCAT17(uStack_321,CONCAT25(uStack_323,CONCAT14(uStack_324,uStack_328))));
    }
  }
  else {
    bVar9 = (uStack_330 & 1) != 0;
    if (bVar9) {
      lVar8 = CONCAT71(uStack_31f,uStack_320);
    }
    uVar7 = (ulong)((byte)uStack_330 >> 1);
    if (bVar9) {
      uVar7 = CONCAT17(uStack_321,CONCAT25(uStack_323,CONCAT14(uStack_324,uStack_328)));
    }
    func_0x04885120(&uStack_1d0,lVar8,uVar7);
  }
  auVar10 = func_0x0a3bdcd0();
  auStack_1b8 = auVar10;
  func_0x0a3bc7d0();
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar4 == (undefined8 *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f22b7e0;
  plStack_1a8 = plVar4 + 4;
  plVar4[10] = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)(plVar4 + 0x12) = 1;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[4] = (long)&UNK_0f22b830;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      lVar8 = *plStack_1a0;
      plStack_1a0 = plVar4;
      (**(code **)(lVar8 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar4 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar4;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  plVar4 = plStack_190;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &UNK_0f22b888;
  plStack_198 = puVar5 + 3;
  *(undefined1 *)(puVar5 + 4) = 1;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[3] = &UNK_0f22b8d8;
  if (plStack_190 == (long *)0x0) {
LAB_0a4bfcee:
    plStack_190 = puVar5;
    if (uStack_2a0 <= uStack_2a8) {
LAB_0a4bfd45:
      lVar8 = func_0x065b01f0(&lStack_2b0,&uStack_1e8);
      goto LAB_0a4bfd60;
    }
  }
  else {
    LOCK();
    plVar2 = plStack_190 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0a4bfcee;
    lVar8 = *plStack_190;
    plStack_190 = puVar5;
    (**(code **)(lVar8 + 0x10))(plVar4);
    func_0x0412c2d0(plVar4);
    if (uStack_2a0 <= uStack_2a8) goto LAB_0a4bfd45;
  }
  uVar7 = uStack_2a8;
  func_0x065b0410(uStack_2a8,&uStack_1e8);
  lVar8 = uVar7 + 0x1b0;
LAB_0a4bfd60:
  uStack_2a8 = lVar8;
  func_0x0652dc20(&uStack_1e8);
  uStack_248 = _DAT_0f6422c0;
  uStack_244 = _DAT_0f6422c4;
  if ((_DAT_0f6422c8 & 1) == 0) {
    uStack_230 = _DAT_0f6422d8;
    uStack_240 = _DAT_0f6422c8;
    uStack_23c = uRam000000000f6422cc;
    uStack_238 = _DAT_0f6422d0;
    uStack_234 = uRam000000000f6422d4;
  }
  else {
    func_0x0412e5e0(&uStack_240,_DAT_0f6422d8,CONCAT44(uRam000000000f6422d4,_DAT_0f6422d0));
  }
  func_0x0730fa70(lVar8 + -0x1b0,&uStack_248,0);
  if ((uStack_240 & 1) != 0) {
    func_0x0412a280(uStack_230,CONCAT44(uStack_23c,uStack_240) & 0xfffffffffffffffe);
  }
  if ((uStack_330 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_31f,uStack_320),
                    CONCAT44(uStack_32c,uStack_330) & 0xfffffffffffffffe);
  }
  uStack_268 = _DAT_0f6422a0;
  uStack_264 = _DAT_0f6422a4;
  if ((_DAT_0f6422a8 & 1) == 0) {
    uStack_250 = _DAT_0f6422b8;
    uStack_260 = _DAT_0f6422a8;
    uStack_25c = uRam000000000f6422ac;
    uStack_258 = _DAT_0f6422b0;
    uStack_254 = uRam000000000f6422b4;
  }
  else {
    func_0x0412e5e0(&uStack_260,_DAT_0f6422b8,CONCAT44(uRam000000000f6422b4,_DAT_0f6422b0));
  }
  func_0x0730fa70(&lStack_318,&uStack_268,0);
  if ((uStack_260 & 1) != 0) {
    func_0x0412a280(uStack_250,CONCAT44(uStack_25c,uStack_260) & 0xfffffffffffffffe);
  }
  lVar6 = lStack_300;
  lVar8 = lStack_2f8;
  if (lStack_300 != 0) {
    for (; lVar6 != lVar8; lVar8 = lVar8 + -0x30) {
      if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                        *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_2f8 = lVar6;
    func_0x0412a280(lStack_300,lStack_2f0 - lStack_300);
  }
  lVar3 = lStack_308;
  lVar6 = lStack_310;
  lVar8 = lStack_318;
  lStack_318 = 0;
  lStack_310 = 0;
  lStack_308 = 0;
  *param_1 = lVar8;
  param_1[1] = lVar6;
  param_1[2] = lVar3;
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  param_1[5] = lStack_2d8;
  param_1[3] = uStack_2e8;
  param_1[4] = uStack_2e0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  *(undefined4 *)(param_1 + 8) = uStack_2c0;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_2bc;
  *(undefined4 *)(param_1 + 9) = uStack_2b8;
  *(undefined4 *)((long)param_1 + 0x4c) = uStack_2b4;
  *(undefined1 (*) [16])(param_1 + 6) = auStack_2d0;
  param_1[10] = lStack_2b0;
  param_1[0xb] = uStack_2a8;
  param_1[0xc] = uStack_2a0;
  lStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  param_1[0xd] = lStack_298;
  param_1[0xe] = lStack_290;
  param_1[0xf] = lStack_288;
  lStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_280;
  *(undefined4 *)((long)param_1 + 0x84) = uStack_280._4_4_;
  *(undefined4 *)(param_1 + 0x11) = (undefined4)uStack_278;
  *(undefined4 *)((long)param_1 + 0x8c) = uStack_278._4_4_;
  param_1[0x12] = lStack_270;
  uStack_280 = 0;
  uStack_278 = 0;
  lStack_270 = 0;
  func_0x0652e400(&lStack_300);
  lVar6 = lStack_318;
  lVar8 = lStack_310;
  if (lStack_318 != 0) {
    for (; lVar6 != lVar8; lVar8 = lVar8 + -0x30) {
      if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                        *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_310 = lVar6;
    func_0x0412a280(lStack_318,lStack_308 - lStack_318);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x12e2e9f  JigsawPlaceOptions
 */
