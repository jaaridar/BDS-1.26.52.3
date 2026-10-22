/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa337580 (ELF vaddr 0xa237580)
 * Label: string:JigsawStructurePlaceOptions
 * Body:  [[0a337580, 0a338401] [0a338410, 0a338555] [0a338560, 0a33864d]]
 * Ghidra: FUN_0a337580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a337580(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined4 uStack_350;
  undefined1 uStack_34c;
  undefined2 uStack_34b;
  undefined1 uStack_349;
  undefined4 uStack_348;
  undefined1 uStack_344;
  undefined2 uStack_343;
  undefined1 uStack_341;
  undefined1 uStack_340;
  undefined2 uStack_33f;
  undefined5 uStack_33d;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  ulong uStack_308;
  ulong uStack_300;
  undefined8 *puStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  long lStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined4 uStack_288;
  undefined2 uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
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
  undefined1 auStack_1e8 [8];
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
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
  
  puStack_1d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_1d8 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar3 = _UNK_0141e17f;
  auStack_1e8 = (undefined1  [8])0x21;
  uStack_1e0 = 0x1b;
  *(ulong *)((long)puStack_1d8 + 0xb) = CONCAT35(_UNK_0141e17c,_DAT_0141e177);
  *(undefined8 *)((long)puStack_1d8 + 0x13) = uVar3;
  uVar3 = CONCAT53(_DAT_0141e177,_UNK_0141e174);
  *puStack_1d8 = _DAT_0141e16c;
  puStack_1d8[1] = uVar3;
  *(undefined1 *)((long)puStack_1d8 + 0x1b) = 0;
  uStack_308 = 0;
  uStack_300 = 0;
  lStack_318 = 0;
  lStack_310 = 0;
  lStack_328 = 0;
  lStack_320 = 0;
  lStack_338 = 0;
  lStack_330 = 0;
  puStack_2f8 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_2f0);
  func_0x048b1dc0(&uStack_2e0);
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  uStack_2c0 = 0;
  lStack_2b8 = 0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  lStack_290 = 0;
  if ((uStack_308 & 1) == 0) {
    if (((ulong)auStack_1e8 & 1) == 0) {
      puStack_2f8 = puStack_1d8;
      uStack_308 = (ulong)auStack_1e8;
      uStack_300 = uStack_1e0;
    }
    else {
      func_0x04885070(&uStack_308,puStack_1d8,uStack_1e0);
    }
  }
  else {
    uVar8 = (ulong)auStack_1e8 >> 1 & 0x7f;
    puVar6 = (undefined8 *)(auStack_1e8 + 1);
    if (((ulong)auStack_1e8 & 1) != 0) {
      uVar8 = uStack_1e0;
      puVar6 = puStack_1d8;
    }
    func_0x04885120(&uStack_308,puVar6,uVar8);
  }
  auStack_2f0 = func_0x0a3ba8e0();
  if (((ulong)auStack_1e8 & 1) != 0) {
    func_0x0412a280(puStack_1d8,(ulong)auStack_1e8 & 0xfffffffffffffffe);
  }
  uStack_350 = CONCAT31((int3)_DAT_012ada5c,0x22);
  uStack_34c = (undefined1)((uint)_DAT_012ada5c >> 0x18);
  uStack_34b = (undefined2)_UNK_012ada60;
  uStack_349 = (undefined1)((uint)_UNK_012ada60 >> 0x10);
  uStack_348._1_3_ = (undefined3)_UNK_012ada64;
  uStack_348 = CONCAT31(uStack_348._1_3_,(char)((uint)_UNK_012ada60 >> 0x18));
  uStack_344 = (undefined1)((uint)_UNK_012ada64 >> 0x18);
  uStack_343 = (undefined2)_UNK_012ada68;
  uStack_341 = (undefined1)((uint)_UNK_012ada68 >> 0x10);
  uStack_340 = (undefined1)((uint)_UNK_012ada68 >> 0x18);
  uStack_33f = 0x74;
  func_0x0662c7f0();
  func_0x065af670(auStack_1e8);
  lVar9 = (long)&uStack_350 + 1;
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_350 & 1) == 0) {
      uStack_1c0 = CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340));
      uStack_1cc = CONCAT13(uStack_349,CONCAT21(uStack_34b,uStack_34c));
      uStack_1c4 = CONCAT13(uStack_341,CONCAT21(uStack_343,uStack_344));
      uStack_1d0 = uStack_350;
      uStack_1c8 = uStack_348;
    }
    else {
      func_0x04885070(&uStack_1d0,CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340)),
                      CONCAT17(uStack_341,CONCAT25(uStack_343,CONCAT14(uStack_344,uStack_348))));
    }
  }
  else {
    bVar10 = (uStack_350 & 1) == 0;
    lVar7 = CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340));
    if (bVar10) {
      lVar7 = lVar9;
    }
    uVar8 = (ulong)((byte)uStack_350 >> 1);
    if (!bVar10) {
      uVar8 = CONCAT17(uStack_341,CONCAT25(uStack_343,CONCAT14(uStack_344,uStack_348)));
    }
    func_0x04885120(&uStack_1d0,lVar7,uVar8);
  }
  auStack_1b8 = func_0x0662a2a0();
  func_0x0662c7f0();
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0f216ef0;
  plStack_1a8 = plVar5 + 4;
  plVar5[10] = 0;
  plVar5[0x10] = 0;
  *(undefined1 *)(plVar5 + 0x12) = 1;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[4] = (long)&UNK_0f216f40;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      lVar7 = *plStack_1a0;
      plStack_1a0 = plVar5;
      (**(code **)(lVar7 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar5 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar5;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  plVar2 = plStack_190;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0f216f98;
  plStack_198 = plVar5 + 3;
  *(undefined1 *)(plVar5 + 4) = 1;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[3] = (long)&UNK_0f216fe8;
  if (plStack_190 == (long *)0x0) {
LAB_0a3378dd:
    plStack_190 = plVar5;
    if (uStack_2c8 < uStack_2c0) goto LAB_0a3378f7;
LAB_0a33793c:
    uVar8 = func_0x065b01f0(&lStack_2d0,auStack_1e8);
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_0a3378dd;
    lVar7 = *plStack_190;
    plStack_190 = plVar5;
    (**(code **)(lVar7 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_2c0 <= uStack_2c8) goto LAB_0a33793c;
LAB_0a3378f7:
    uVar8 = uStack_2c8;
    func_0x065b0410(uStack_2c8,auStack_1e8);
    uVar8 = uVar8 + 0x1b0;
  }
  uStack_2c8 = uVar8;
  func_0x0652dc20(auStack_1e8);
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
  func_0x0730fa70(uVar8 - 0x1b0,&uStack_208,0);
  if ((uStack_200 & 1) != 0) {
    func_0x0412a280(uStack_1f0,CONCAT44(uStack_1fc,uStack_200) & 0xfffffffffffffffe);
  }
  if ((uStack_350 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340)),
                    CONCAT17(uStack_349,CONCAT25(uStack_34b,CONCAT14(uStack_34c,uStack_350))) &
                    0xfffffffffffffffe);
  }
  uStack_350 = 0x65656b16;
  uStack_34c = 0x70;
  uStack_34b = 0x694a;
  uStack_349 = 0x67;
  uStack_348 = 0x73776173;
  uStack_344 = 0;
  func_0x0662c7f0();
  func_0x065af670(auStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_350 & 1) == 0) {
      uStack_1c0 = CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340));
      uStack_1cc = CONCAT13(uStack_349,CONCAT21(uStack_34b,uStack_34c));
      uStack_1c4 = CONCAT13(uStack_341,CONCAT21(uStack_343,uStack_344));
      uStack_1d0 = uStack_350;
      uStack_1c8 = uStack_348;
    }
    else {
      func_0x04885070(&uStack_1d0,CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340)),
                      CONCAT17(uStack_341,CONCAT25(uStack_343,CONCAT14(uStack_344,uStack_348))));
    }
  }
  else {
    bVar10 = (uStack_350 & 1) == 0;
    lVar7 = CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340));
    if (bVar10) {
      lVar7 = lVar9;
    }
    uVar8 = (ulong)((byte)uStack_350 >> 1);
    if (!bVar10) {
      uVar8 = CONCAT17(uStack_341,CONCAT25(uStack_343,CONCAT14(uStack_344,uStack_348)));
    }
    func_0x04885120(&uStack_1d0,lVar7,uVar8);
  }
  auVar11 = func_0x0662a2a0();
  auStack_1b8 = auVar11;
  func_0x0662c7f0();
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0f217048;
  plStack_1a8 = plVar5 + 4;
  plVar5[10] = 0;
  plVar5[0x10] = 0;
  *(undefined1 *)(plVar5 + 0x12) = 1;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[4] = (long)&UNK_0f217098;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      lVar7 = *plStack_1a0;
      plStack_1a0 = plVar5;
      (**(code **)(lVar7 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar5 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar5;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  plVar2 = plStack_190;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0f2170f0;
  plStack_198 = plVar5 + 3;
  *(undefined1 *)(plVar5 + 4) = 1;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[3] = (long)&UNK_0f217140;
  if (plStack_190 == (long *)0x0) {
LAB_0a337bf2:
    plStack_190 = plVar5;
    if (uStack_2c8 < uStack_2c0) goto LAB_0a337c04;
LAB_0a337c41:
    uVar8 = func_0x065b01f0(&lStack_2d0,auStack_1e8);
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_0a337bf2;
    lVar7 = *plStack_190;
    plStack_190 = plVar5;
    (**(code **)(lVar7 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_2c0 <= uStack_2c8) goto LAB_0a337c41;
LAB_0a337c04:
    uVar8 = uStack_2c8;
    func_0x065b0410(uStack_2c8,auStack_1e8);
    uVar8 = uVar8 + 0x1b0;
  }
  uStack_2c8 = uVar8;
  func_0x0652dc20(auStack_1e8);
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
  func_0x0730fa70(uVar8 - 0x1b0,&uStack_228,0);
  if ((uStack_220 & 1) != 0) {
    func_0x0412a280(uStack_210,CONCAT44(uStack_21c,uStack_220) & 0xfffffffffffffffe);
  }
  if ((uStack_350 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340)),
                    CONCAT17(uStack_349,CONCAT25(uStack_34b,CONCAT14(uStack_34c,uStack_350))) &
                    0xfffffffffffffffe);
  }
  uStack_350 = 0x636e691e;
  uStack_34c = 0x6c;
  uStack_34b = 0x6475;
  uStack_349 = 0x65;
  uStack_348 = 0x69746e45;
  uStack_344 = 0x74;
  uStack_343 = 0x6569;
  uStack_341 = 0x73;
  uStack_340 = 0;
  func_0x0662c7f0();
  func_0x065af670(auStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_350 & 1) == 0) {
      uStack_1c0 = CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340));
      uStack_1cc = CONCAT13(uStack_349,CONCAT21(uStack_34b,uStack_34c));
      uStack_1c4 = CONCAT13(uStack_341,CONCAT21(uStack_343,uStack_344));
      uStack_1d0 = uStack_350;
      uStack_1c8 = uStack_348;
    }
    else {
      func_0x04885070(&uStack_1d0,CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340)),
                      CONCAT17(uStack_341,CONCAT25(uStack_343,CONCAT14(uStack_344,uStack_348))));
    }
  }
  else {
    bVar10 = (uStack_350 & 1) == 0;
    lVar7 = CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340));
    if (bVar10) {
      lVar7 = lVar9;
    }
    uVar8 = (ulong)((byte)uStack_350 >> 1);
    if (!bVar10) {
      uVar8 = CONCAT17(uStack_341,CONCAT25(uStack_343,CONCAT14(uStack_344,uStack_348)));
    }
    func_0x04885120(&uStack_1d0,lVar7,uVar8);
  }
  auVar11 = func_0x0662a2a0();
  auStack_1b8 = auVar11;
  func_0x0662c7f0();
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0f2171a0;
  plStack_1a8 = plVar5 + 4;
  plVar5[10] = 0;
  plVar5[0x10] = 0;
  *(undefined1 *)(plVar5 + 0x12) = 1;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[4] = (long)&UNK_0f2171f0;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      lVar7 = *plStack_1a0;
      plStack_1a0 = plVar5;
      (**(code **)(lVar7 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar5 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar5;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  plVar2 = plStack_190;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0f217248;
  plStack_198 = plVar5 + 3;
  *(undefined1 *)(plVar5 + 4) = 1;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[3] = (long)&UNK_0f217298;
  if (plStack_190 == (long *)0x0) {
LAB_0a337f06:
    plStack_190 = plVar5;
    if (uStack_2c8 < uStack_2c0) goto LAB_0a337f18;
LAB_0a337f55:
    uVar8 = func_0x065b01f0(&lStack_2d0,auStack_1e8);
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_0a337f06;
    lVar7 = *plStack_190;
    plStack_190 = plVar5;
    (**(code **)(lVar7 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_2c0 <= uStack_2c8) goto LAB_0a337f55;
LAB_0a337f18:
    uVar8 = uStack_2c8;
    func_0x065b0410(uStack_2c8,auStack_1e8);
    uVar8 = uVar8 + 0x1b0;
  }
  uStack_2c8 = uVar8;
  func_0x0652dc20(auStack_1e8);
  uStack_248 = _DAT_0f6422a0;
  uStack_244 = _DAT_0f6422a4;
  if ((_DAT_0f6422a8 & 1) == 0) {
    uStack_230 = _DAT_0f6422b8;
    uStack_240 = _DAT_0f6422a8;
    uStack_23c = uRam000000000f6422ac;
    uStack_238 = _DAT_0f6422b0;
    uStack_234 = uRam000000000f6422b4;
  }
  else {
    func_0x0412e5e0(&uStack_240,_DAT_0f6422b8,CONCAT44(uRam000000000f6422b4,_DAT_0f6422b0));
  }
  func_0x0730fa70(uVar8 - 0x1b0,&uStack_248,0);
  if ((uStack_240 & 1) != 0) {
    func_0x0412a280(uStack_230,CONCAT44(uStack_23c,uStack_240) & 0xfffffffffffffffe);
  }
  if ((uStack_350 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340)),
                    CONCAT17(uStack_349,CONCAT25(uStack_34b,CONCAT14(uStack_34c,uStack_350))) &
                    0xfffffffffffffffe);
  }
  uStack_350 = 0x71696c1c;
  uStack_34c = 0x75;
  uStack_34b = 0x6469;
  uStack_349 = 0x53;
  uStack_348 = 0x69747465;
  uStack_344 = 0x6e;
  uStack_343 = 0x7367;
  uStack_341 = 0;
  func_0x0a3bc7d0();
  func_0x065af670(auStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_350 & 1) == 0) {
      uStack_1c0 = CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340));
      uStack_1cc = CONCAT13(uStack_349,CONCAT21(uStack_34b,uStack_34c));
      uStack_1c4 = CONCAT13(uStack_341,CONCAT21(uStack_343,uStack_344));
      uStack_1d0 = uStack_350;
      uStack_1c8 = uStack_348;
    }
    else {
      func_0x04885070(&uStack_1d0,CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340)),
                      CONCAT17(uStack_341,CONCAT25(uStack_343,CONCAT14(uStack_344,uStack_348))));
    }
  }
  else {
    bVar10 = (uStack_350 & 1) != 0;
    if (bVar10) {
      lVar9 = CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340));
    }
    uVar8 = (ulong)((byte)uStack_350 >> 1);
    if (bVar10) {
      uVar8 = CONCAT17(uStack_341,CONCAT25(uStack_343,CONCAT14(uStack_344,uStack_348)));
    }
    func_0x04885120(&uStack_1d0,lVar9,uVar8);
  }
  auVar11 = func_0x0a3bdcd0();
  auStack_1b8 = auVar11;
  func_0x0a3bc7d0();
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar5 == (undefined8 *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0f2172f8;
  plStack_1a8 = plVar5 + 4;
  plVar5[10] = 0;
  plVar5[0x10] = 0;
  *(undefined1 *)(plVar5 + 0x12) = 1;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[4] = (long)&UNK_0f217348;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      lVar9 = *plStack_1a0;
      plStack_1a0 = plVar5;
      (**(code **)(lVar9 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar5 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar5;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  plVar5 = plStack_190;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &UNK_0f2173a0;
  plStack_198 = puVar6 + 3;
  *(undefined1 *)(puVar6 + 4) = 1;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[3] = &UNK_0f2173f0;
  if (plStack_190 == (long *)0x0) {
LAB_0a338232:
    plStack_190 = puVar6;
    if (uStack_2c0 <= uStack_2c8) {
LAB_0a338281:
      lVar9 = func_0x065b01f0(&lStack_2d0,auStack_1e8);
      goto LAB_0a338294;
    }
  }
  else {
    LOCK();
    plVar2 = plStack_190 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 != 0) goto LAB_0a338232;
    lVar9 = *plStack_190;
    plStack_190 = puVar6;
    (**(code **)(lVar9 + 0x10))(plVar5);
    func_0x0412c2d0(plVar5);
    if (uStack_2c0 <= uStack_2c8) goto LAB_0a338281;
  }
  uVar8 = uStack_2c8;
  func_0x065b0410(uStack_2c8,auStack_1e8);
  lVar9 = uVar8 + 0x1b0;
LAB_0a338294:
  uStack_2c8 = lVar9;
  func_0x0652dc20(auStack_1e8);
  uStack_268 = _DAT_0f6422c0;
  uStack_264 = _DAT_0f6422c4;
  if ((_DAT_0f6422c8 & 1) == 0) {
    uStack_250 = _DAT_0f6422d8;
    uStack_260 = _DAT_0f6422c8;
    uStack_25c = uRam000000000f6422cc;
    uStack_258 = _DAT_0f6422d0;
    uStack_254 = uRam000000000f6422d4;
  }
  else {
    func_0x0412e5e0(&uStack_260,_DAT_0f6422d8,CONCAT44(uRam000000000f6422d4,_DAT_0f6422d0));
  }
  func_0x0730fa70(lVar9 + -0x1b0,&uStack_268,0);
  if ((uStack_260 & 1) != 0) {
    func_0x0412a280(uStack_250,CONCAT44(uStack_25c,uStack_260) & 0xfffffffffffffffe);
  }
  if ((uStack_350 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_33d,CONCAT21(uStack_33f,uStack_340)),
                    CONCAT17(uStack_349,CONCAT25(uStack_34b,CONCAT14(uStack_34c,uStack_350))) &
                    0xfffffffffffffffe);
  }
  uStack_288 = _DAT_0f6422a0;
  uStack_284 = _DAT_0f6422a4;
  if ((_DAT_0f6422a8 & 1) == 0) {
    uStack_270 = _DAT_0f6422b8;
    uStack_280 = _DAT_0f6422a8;
    uStack_27c = uRam000000000f6422ac;
    uStack_278 = _DAT_0f6422b0;
    uStack_274 = uRam000000000f6422b4;
  }
  else {
    func_0x0412e5e0(&uStack_280,_DAT_0f6422b8,CONCAT44(uRam000000000f6422b4,_DAT_0f6422b0));
  }
  func_0x0730fa70(&lStack_338,&uStack_288,0);
  if ((uStack_280 & 1) != 0) {
    func_0x0412a280(uStack_270,CONCAT44(uStack_27c,uStack_280) & 0xfffffffffffffffe);
  }
  lVar7 = lStack_320;
  lVar9 = lStack_318;
  if (lStack_320 != 0) {
    for (; lVar7 != lVar9; lVar9 = lVar9 + -0x30) {
      if ((*(byte *)(lVar9 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar9 + -0x10),
                        *(ulong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_318 = lVar7;
    func_0x0412a280(lStack_320,lStack_310 - lStack_320);
  }
  lVar4 = lStack_328;
  lVar7 = lStack_330;
  lVar9 = lStack_338;
  lStack_338 = 0;
  lStack_330 = 0;
  lStack_328 = 0;
  *param_1 = lVar9;
  param_1[1] = lVar7;
  param_1[2] = lVar4;
  lStack_320 = 0;
  lStack_318 = 0;
  lStack_310 = 0;
  param_1[5] = (long)puStack_2f8;
  param_1[3] = uStack_308;
  param_1[4] = uStack_300;
  uStack_308 = 0;
  uStack_300 = 0;
  puStack_2f8 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 8) = uStack_2e0;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_2dc;
  *(undefined4 *)(param_1 + 9) = uStack_2d8;
  *(undefined4 *)((long)param_1 + 0x4c) = uStack_2d4;
  *(undefined1 (*) [16])(param_1 + 6) = auStack_2f0;
  param_1[10] = lStack_2d0;
  param_1[0xb] = uStack_2c8;
  param_1[0xc] = uStack_2c0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  param_1[0xd] = lStack_2b8;
  param_1[0xe] = lStack_2b0;
  param_1[0xf] = lStack_2a8;
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_2a0;
  *(undefined4 *)((long)param_1 + 0x84) = uStack_2a0._4_4_;
  *(undefined4 *)(param_1 + 0x11) = (undefined4)uStack_298;
  *(undefined4 *)((long)param_1 + 0x8c) = uStack_298._4_4_;
  param_1[0x12] = lStack_290;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  func_0x0652e400(&lStack_320);
  lVar7 = lStack_338;
  lVar9 = lStack_330;
  if (lStack_338 != 0) {
    for (; lVar7 != lVar9; lVar9 = lVar9 + -0x30) {
      if ((*(byte *)(lVar9 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar9 + -0x10),
                        *(ulong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_330 = lVar7;
    func_0x0412a280(lStack_338,lStack_328 - lStack_338);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x12ada5c  ignoreStartHeight
 * 0x141e16c  JigsawStructurePlaceOptions
 * 0x141e177  turePlaceOptions
 */
