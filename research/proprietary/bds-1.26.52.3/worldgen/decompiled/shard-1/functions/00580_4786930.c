/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4886930 (ELF vaddr 0x4786930)
 * Label: caller-of-callee
 * Body:  [[04886930, 04887594] [048875a0, 048878aa] [048878b0, 04887901] [04887910, 04887e7d]]
 * Ghidra: FUN_04886930
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_04886930(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  bool bVar24;
  undefined8 **ppuStack_440;
  undefined1 uStack_431;
  long *plStack_430;
  long *plStack_428;
  undefined8 *puStack_420;
  uint *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  long *plStack_3f8;
  uint uStack_3ec;
  uint uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  uint uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  uint uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  undefined8 *puStack_398;
  long *plStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  uint uStack_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  uint uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  byte *pbStack_260;
  ulong uStack_258;
  undefined8 *puStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  long *plStack_198;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  long *plStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined *puStack_70;
  
  plStack_3f8 = param_2 + 3;
  puVar8 = (undefined8 *)func_0x048b8be0(plStack_3f8,param_4);
  if (param_5 == 1) {
    lVar17 = puVar8[7];
    puStack_398 = (undefined8 *)(lVar17 + 8);
    func_0x0412d770();
    func_0x048b8cd0(lVar17,&puStack_398);
    func_0x0412d790(puStack_398);
  }
  else if ((param_5 == 0) && (puVar8 != param_2 + 4)) {
    plVar10 = (long *)puVar8[7];
    plVar9 = (long *)puVar8[8];
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar10 + 0x10))(param_1);
      return param_1;
    }
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    (**(code **)(*plVar10 + 0x10))(param_1);
    LOCK();
    plVar10 = plVar9 + 1;
    lVar17 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar17 != 0) {
      return param_1;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    return param_1;
  }
  if (param_2[0xc] == 0) {
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0ef43740;
    plVar10[3] = (long)&UNK_0ef43790;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    *(undefined1 *)(plVar10 + 9) = 1;
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar10[2] = plVar10[2] + 1;
    UNLOCK();
    plVar10[4] = (long)(plVar10 + 4);
    plVar10[5] = (long)plVar10;
    LOCK();
    plVar9 = plVar10 + 1;
    lVar17 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
    *param_1 = plVar10 + 3;
    param_1[1] = plVar10;
    return param_1;
  }
  func_0x0b719480(&uStack_3e8,param_3,param_4);
  bVar12 = *(byte *)(param_2 + 6);
  uVar13 = (ulong)(bVar12 >> 1);
  if ((bVar12 & 1) != 0) {
    uVar13 = param_2[7];
  }
  if (uVar13 != 0) {
    if (&uStack_3d0 != (uint *)(param_2 + 6)) {
      if ((uStack_3d0 & 1) == 0) {
        if ((bVar12 & 1) == 0) {
          uStack_3c0 = param_2[8];
          uStack_3d0 = *(uint *)(param_2 + 6);
          uStack_3cc = *(undefined4 *)((long)param_2 + 0x34);
          uStack_3c8 = *(undefined4 *)(param_2 + 7);
          uStack_3c4 = *(undefined4 *)((long)param_2 + 0x3c);
        }
        else {
          func_0x04885070(&uStack_3d0,param_2[8],param_2[7]);
        }
      }
      else {
        if ((bVar12 & 1) == 0) {
          lVar17 = (long)param_2 + 0x31;
        }
        else {
          lVar17 = param_2[8];
        }
        func_0x04885120(&uStack_3d0,lVar17);
      }
    }
  }
  bVar12 = *(byte *)(param_2 + 9);
  uVar13 = (ulong)(bVar12 >> 1);
  if ((bVar12 & 1) != 0) {
    uVar13 = param_2[10];
  }
  if ((&uStack_3e8 != (uint *)(param_2 + 9)) && (uVar13 != 0)) {
    if ((uStack_3e8 & 1) == 0) {
      if ((bVar12 & 1) == 0) {
        uStack_3d8 = param_2[0xb];
        uStack_3e8 = *(uint *)(param_2 + 9);
        uStack_3e4 = *(undefined4 *)((long)param_2 + 0x4c);
        uStack_3e0 = *(undefined4 *)(param_2 + 10);
        uStack_3dc = *(undefined4 *)((long)param_2 + 0x54);
      }
      else {
        func_0x04885070(&uStack_3e8,param_2[0xb],param_2[10]);
      }
    }
    else {
      if ((bVar12 & 1) == 0) {
        lVar17 = (long)param_2 + 0x49;
      }
      else {
        lVar17 = param_2[0xb];
      }
      func_0x04885120(&uStack_3e8,lVar17);
    }
  }
  puVar22 = &uStack_328;
  puStack_330 = param_2;
  if ((uStack_3e8 & 1) == 0) {
    uStack_318 = uStack_3d8;
    uStack_328 = CONCAT44(uStack_3e4,uStack_3e8);
    uStack_320 = CONCAT44(uStack_3dc,uStack_3e0);
  }
  else {
    func_0x0412e5e0(puVar22,uStack_3d8,CONCAT44(uStack_3dc,uStack_3e0));
  }
  plVar10 = &uStack_310;
  if ((uStack_3d0 & 1) == 0) {
    uStack_300 = uStack_3c0;
    uStack_310 = CONCAT44(uStack_3cc,uStack_3d0);
    uStack_308 = CONCAT44(uStack_3c4,uStack_3c8);
  }
  else {
    func_0x0412e5e0(plVar10,uStack_3c0,CONCAT44(uStack_3c4,uStack_3c8));
  }
  if ((uStack_3b8 & 1) == 0) {
    uStack_2e8 = uStack_3a8;
    uStack_2f8 = CONCAT44(uStack_3b4,uStack_3b8);
    uStack_2f0 = CONCAT44(uStack_3ac,uStack_3b0);
  }
  else {
    func_0x0412e5e0(&uStack_2f8,uStack_3a8,CONCAT44(uStack_3ac,uStack_3b0));
  }
  if ((*param_4 & 1) == 0) {
    uStack_2d0 = *(undefined8 *)(param_4 + 4);
    uStack_2e0 = *param_4;
    uStack_2dc = param_4[1];
    uStack_2d8 = param_4[2];
    uStack_2d4 = param_4[3];
  }
  else {
    func_0x0412e5e0(&uStack_2e0,*(undefined8 *)(param_4 + 4),*(undefined8 *)(param_4 + 2));
  }
  if ((_DAT_0f728590 == (char *)0x0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012713a8),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*_DAT_0f728590 == '\0') &&
     (cVar5 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012713a8),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar2 = _DAT_0f7285a0;
  plVar9 = _DAT_0f7280e0;
  puStack_420 = param_1;
  puStack_418 = param_4;
  if (_DAT_0f7280e0 == (long *)0x0) {
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    func_0x0ee29760(plVar9,&UNK_01302b9e,0xb,0x3c);
    if ((_DAT_0f7280e0 == (long *)0x0) ||
       (lVar17 = *_DAT_0f7280e0, _DAT_0f7280e0 = plVar9, (**(code **)(lVar17 + 8))(),
       plVar9 = _DAT_0f7280e0, _DAT_0f7280e0 != (long *)0x0)) goto LAB_04886d8f;
    func_0x04890760();
    puVar23 = (ulong *)0x0;
LAB_04887e29:
    func_0x0eec74c0(0x220,0);
  }
  else {
LAB_04886d8f:
    _DAT_0f7280e0 = plVar9;
    func_0x048881c0(&plStack_430,uVar2,_DAT_0f7280e0,&UNK_0135b21e);
    plStack_1e8 = plStack_430;
    puStack_70 = &UNK_04888350;
    plStack_430 = (long *)0x0;
    puStack_1d0 = &UNK_04888350;
    lStack_78 = 0;
    puStack_1d8 = (undefined8 *)&UNK_0ef42f68;
    puStack_2c8 = puStack_330;
    uStack_2b0 = uStack_318;
    uStack_2c0 = uStack_328;
    uStack_2b8 = uStack_320;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_298 = uStack_300;
    uStack_2a8 = uStack_310;
    uStack_2a0 = uStack_308;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_280 = uStack_2e8;
    uStack_290 = uStack_2f8;
    uStack_288 = uStack_2f0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    if ((uStack_2e0 & 1) == 0) {
      uStack_268 = uStack_2d0;
      uStack_278 = CONCAT44(uStack_2dc,uStack_2e0);
      uStack_270 = CONCAT44(uStack_2d4,uStack_2d8);
      plStack_198 = plStack_1e8;
LAB_04886f26:
      uStack_180 = 0;
      puStack_188 = (undefined8 *)0x0;
      plStack_1e8 = (long *)0x0;
      (*(code *)*puStack_1d8)(&puStack_1d8,&puStack_188);
      puStack_188 = puStack_1d8;
    }
    else {
      func_0x0412e5e0(&uStack_278,uStack_2d0,CONCAT44(uStack_2d4,uStack_2d8));
      plStack_198 = plStack_1e8;
      plStack_1e8 = (long *)0x0;
      uStack_180 = 0;
      if (puStack_1d8 != (undefined8 *)0x0) goto LAB_04886f26;
      puStack_188 = (undefined8 *)0x0;
    }
    ppuStack_440 = &puStack_188;
    puStack_1d8 = (undefined8 *)0x0;
    puStack_250 = puStack_2c8;
    puVar23 = &uStack_248;
    uStack_238 = uStack_2b0;
    uStack_248 = uStack_2c0;
    uStack_240 = uStack_2b8;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_220 = uStack_298;
    uStack_230 = uStack_2a8;
    uStack_228 = uStack_2a0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_208 = uStack_280;
    uStack_218 = uStack_290;
    uStack_210 = uStack_288;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    puVar22 = &uStack_200;
    if ((uStack_278 & 1) == 0) {
      uStack_1f0 = uStack_268;
      uStack_200 = uStack_278;
      uStack_1f8 = uStack_270;
    }
    else {
      func_0x0412e5e0(puVar22,uStack_268,uStack_270);
    }
    uStack_f0 = 0;
    puStack_f8 = (undefined8 *)&UNK_0ef42f88;
    puStack_400 = param_2;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x220);
    if (plVar10 == (long *)0x0) goto LAB_04887e29;
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef42fb0;
  plStack_148 = plStack_198;
  plStack_198 = (long *)0x0;
  puStack_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  if (puStack_188 == (undefined8 *)0x0) {
    puStack_138 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_188)(ppuStack_440,&puStack_138);
    puStack_138 = puStack_188;
  }
  puStack_188 = (undefined8 *)0x0;
  puStack_398 = puStack_250;
  uStack_380 = puVar23[2];
  plStack_390 = (long *)*puVar23;
  uStack_388 = puVar23[1];
  *puVar23 = 0;
  puVar23[1] = 0;
  puVar23[2] = 0;
  uStack_368 = uStack_220;
  uStack_378 = uStack_230;
  uStack_370 = uStack_228;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_350 = uStack_208;
  uStack_360 = uStack_218;
  uStack_358 = uStack_210;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  if ((uStack_200 & 1) == 0) {
    uStack_338 = puVar22[2];
    uStack_348 = *puVar22;
    uStack_340 = puVar22[1];
  }
  else {
    func_0x0412e5e0(&uStack_348,uStack_1f0,uStack_1f8);
  }
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  if (puStack_f8 == (undefined8 *)0x0) {
    puStack_b8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_f8)(&puStack_f8,&puStack_b8);
    puStack_b8 = puStack_f8;
  }
  plVar9 = plStack_148;
  puStack_f8 = (undefined8 *)0x0;
  plStack_148 = (long *)0x0;
  plVar10[4] = (long)&UNK_0ef43050;
  func_0x0412d6c0(plVar10 + 5);
  func_0x048b8f30(plVar10 + 10,&uStack_431);
  *(undefined1 *)(plVar10 + 0xc) = 0;
  *(undefined1 *)(plVar10 + 0xf) = 0;
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar10[0x12] = (long)(plVar10 + 0x12);
  plVar10[0x13] = (long)(plVar10 + 0x12);
  *(undefined4 *)(plVar10 + 0x14) = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x11] = (long)&UNK_0ef437f0;
  plVar10[0x1b] = (long)&UNK_0ef43820;
  plVar10[0x1d] = (long)(plVar10 + 0x1d);
  plVar10[0x1e] = (long)(plVar10 + 0x1d);
  *(undefined4 *)(plVar10 + 0x1f) = 0;
  plVar10[0x20] = 0;
  plVar10[0x21] = 0;
  plVar10[0x22] = 0;
  plVar10[0x23] = 0;
  plVar10[0x24] = 0;
  plVar10[0x25] = 0;
  plVar10[0x1c] = (long)&UNK_0ef43078;
  plVar10[0x26] = (long)&UNK_0ef430a8;
  plVar10[0x28] = (long)plVar9;
  plVar10[0x2b] = (long)&UNK_04888350;
  plVar10[0x2a] = (long)&UNK_0ef42f68;
  plVar10[4] = (long)&UNK_0ef43000;
  plVar10[0x32] = 0;
  plVar10[0x33] = 0;
  plVar10[0x32] = (long)&UNK_0ef431a8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  puVar1 = puStack_400;
  *puVar8 = puStack_398;
  puVar8[3] = uStack_380;
  puVar8[1] = plStack_390;
  puVar8[2] = uStack_388;
  plStack_390 = (long *)0x0;
  uStack_388 = 0;
  uStack_380 = 0;
  puVar8[6] = uStack_368;
  puVar8[4] = uStack_378;
  puVar8[5] = uStack_370;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  puVar8[9] = uStack_350;
  *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_360;
  *(undefined4 *)((long)puVar8 + 0x3c) = uStack_360._4_4_;
  *(undefined4 *)(puVar8 + 8) = (undefined4)uStack_358;
  *(undefined4 *)((long)puVar8 + 0x44) = uStack_358._4_4_;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  if ((uStack_348 & 1) == 0) {
    puVar8[0xc] = uStack_338;
    puVar8[10] = uStack_348;
    puVar8[0xb] = uStack_340;
  }
  else {
    func_0x0412e5e0(puVar8 + 10,uStack_338,uStack_340);
  }
  plVar10[0x33] = (long)puVar8;
  plVar10[0x3a] = 0;
  plVar10[0x3b] = 0;
  if (puStack_b8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_b8)(&puStack_b8,plVar10 + 0x3a);
    puVar8 = puStack_b8;
  }
  puVar4 = puStack_418;
  puStack_b8 = (undefined8 *)0x0;
  plVar10[0x3a] = (long)puVar8;
  if ((uStack_348 & 1) != 0) {
    func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
  }
  if ((uStack_360 & 1) != 0) {
    func_0x0412a280(uStack_350,uStack_360 & 0xfffffffffffffffe);
  }
  if ((uStack_378 & 1) != 0) {
    func_0x0412a280(uStack_368,uStack_378 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,(ulong)plStack_390 & 0xfffffffffffffffe);
  }
  if (puStack_138 != (undefined8 *)0x0) {
    (*(code *)puStack_138[1])(&puStack_138);
  }
  plVar9 = plStack_148;
  plStack_148 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  if ((uStack_200 & 1) != 0) {
    func_0x0412a280(uStack_1f0,uStack_200 & 0xfffffffffffffffe);
  }
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,uStack_218 & 0xfffffffffffffffe);
  }
  if ((uStack_230 & 1) != 0) {
    func_0x0412a280(uStack_220,uStack_230 & 0xfffffffffffffffe);
  }
  if ((uStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,uStack_248 & 0xfffffffffffffffe);
  }
  if (puStack_188 != (undefined8 *)0x0) {
    (*(code *)puStack_188[1])(ppuStack_440);
  }
  plVar9 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plStack_3a0 = plVar10 + 4;
  puVar8 = puVar1 + 4;
  puVar1 = (undefined8 *)puVar1[4];
  plStack_428 = plVar10;
  puStack_408 = puVar8;
  if (puVar1 == (undefined8 *)0x0) {
    puVar20 = puVar8;
    if (puVar8 == (undefined8 *)*plStack_3f8) {
      puVar16 = (undefined8 *)0x0;
      goto LAB_04887c2c;
    }
LAB_04887800:
    do {
      puVar19 = (undefined8 *)puVar8[2];
      bVar24 = puVar8 == (undefined8 *)*puVar19;
      puVar8 = puVar19;
    } while (bVar24);
    uVar15 = *(ulong *)(puStack_418 + 2);
    pbVar18 = *(byte **)(puStack_418 + 4);
    bVar12 = (byte)*puStack_418 & 1;
    uVar13 = (ulong)(byte)((byte)*puStack_418 >> 1);
    puStack_410 = (undefined8 *)0x0;
LAB_04887831:
    bVar24 = (*(byte *)(puVar19 + 4) & 1) != 0;
    lVar17 = (long)puVar19 + 0x21;
    if (bVar24) {
      lVar17 = puVar19[6];
    }
    uVar21 = (ulong)(*(byte *)(puVar19 + 4) >> 1);
    if (bVar24) {
      uVar21 = puVar19[5];
    }
    pbVar3 = (byte *)((long)puStack_418 + 1);
    if (bVar12 != 0) {
      uVar13 = uVar15;
      pbVar3 = pbVar18;
    }
    uVar15 = uVar21;
    if (uVar13 < uVar21) {
      uVar15 = uVar13;
    }
    iVar7 = func_0x0eee2ff0(lVar17,pbVar3,uVar15);
    puVar16 = puStack_410;
    puVar8 = puVar19;
    if (iVar7 == 0) {
      if (uVar13 <= uVar21) goto LAB_04887898;
      goto LAB_04887c2c;
    }
    if (iVar7 < 0) goto LAB_04887c2c;
LAB_04887898:
    puVar11 = puStack_408;
    puVar20 = puStack_408;
    if (puVar1 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar20 = puVar1;
          bVar24 = (*(byte *)(puVar20 + 4) & 1) != 0;
          lVar17 = (long)puVar20 + 0x21;
          if (bVar24) {
            lVar17 = puVar20[6];
          }
          uVar15 = (ulong)(*(byte *)(puVar20 + 4) >> 1);
          if (bVar24) {
            uVar15 = puVar20[5];
          }
          uVar21 = uVar13;
          if (uVar15 < uVar13) {
            uVar21 = uVar15;
          }
          iVar7 = func_0x0eee2ff0(pbVar3,lVar17,uVar21);
          if (iVar7 == 0) break;
          if (-1 < iVar7) goto LAB_04887915;
LAB_048878b0:
          puVar11 = puVar20;
          puVar1 = (undefined8 *)*puVar20;
          if ((undefined8 *)*puVar20 == (undefined8 *)0x0) goto LAB_04887c7b;
        }
        if (uVar13 < uVar15) goto LAB_048878b0;
LAB_04887915:
        iVar7 = func_0x0eee2ff0(lVar17,pbVar3,uVar21);
        puVar8 = puVar20;
        if (iVar7 == 0) {
          if (uVar13 <= uVar15) goto LAB_04887c44;
        }
        else if (-1 < iVar7) goto LAB_04887c44;
        puVar1 = (undefined8 *)puVar20[1];
      } while ((undefined8 *)puVar20[1] != (undefined8 *)0x0);
      puVar11 = puVar20 + 1;
    }
  }
  else {
    uVar13 = (ulong)(byte)((byte)*puVar4 >> 1);
    bVar12 = (byte)*puVar4 & 1;
    uStack_3ec = (uint)bVar12;
    uStack_258 = *(ulong *)(puVar4 + 2);
    pbStack_260 = *(byte **)(puVar4 + 4);
    puVar20 = puVar1;
    pbVar18 = pbStack_260;
    uVar15 = uStack_258;
    if (bVar12 == 0) {
      pbVar18 = (byte *)((long)puVar4 + 1);
      uVar15 = uVar13;
    }
    do {
      bVar24 = (*(byte *)(puVar20 + 4) & 1) != 0;
      lVar17 = (long)puVar20 + 0x21;
      if (bVar24) {
        lVar17 = puVar20[6];
      }
      uVar21 = (ulong)(*(byte *)(puVar20 + 4) >> 1);
      if (bVar24) {
        uVar21 = puVar20[5];
      }
      uVar14 = uVar21;
      if (uVar15 < uVar21) {
        uVar14 = uVar15;
      }
      uVar6 = func_0x0eee2ff0(lVar17,pbVar18,uVar14);
      if (uVar6 == 0) {
        bVar24 = uVar21 < uVar15;
        uVar6 = (uint)bVar24 << 3;
      }
      else {
        bVar24 = SUB41(uVar6 >> 0x1f,0);
        uVar6 = uVar6 >> 0x1c & 0xfffffff8;
      }
      if (bVar24 == false) {
        puVar8 = puVar20;
      }
      puVar16 = (undefined8 *)((long)puVar20 + (ulong)uVar6);
      puVar20 = (undefined8 *)*puVar16;
    } while ((undefined8 *)*puVar16 != (undefined8 *)0x0);
    if (puVar8 != puStack_408) {
      bVar24 = (*(byte *)(puVar8 + 4) & 1) != 0;
      lVar17 = (long)puVar8 + 0x21;
      if (bVar24) {
        lVar17 = puVar8[6];
      }
      uVar21 = (ulong)(*(byte *)(puVar8 + 4) >> 1);
      if (bVar24) {
        uVar21 = puVar8[5];
      }
      uVar14 = uVar15;
      if (uVar21 < uVar15) {
        uVar14 = uVar21;
      }
      iVar7 = func_0x0eee2ff0(pbVar18,lVar17,uVar14);
      puVar20 = puStack_420;
      if (iVar7 == 0) {
        if (uVar15 < uVar21) goto LAB_0488763f;
      }
      else if (iVar7 < 0) goto LAB_0488763f;
      puVar8[7] = plStack_3a0;
      plVar10 = (long *)puVar8[8];
      puVar8[8] = plStack_428;
      if (plVar10 != (long *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar17 = *plVar9;
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          func_0x0412c2d0(plVar10);
        }
      }
      goto joined_r0x04887d4e;
    }
LAB_0488763f:
    puVar16 = (undefined8 *)*puVar8;
    puVar20 = puVar8;
    if (puVar8 != (undefined8 *)*plStack_3f8) {
      puVar11 = puVar16;
      if (puVar16 == (undefined8 *)0x0) goto LAB_04887800;
      do {
        puVar19 = puVar11;
        puVar11 = (undefined8 *)puVar19[1];
      } while ((undefined8 *)puVar19[1] != (undefined8 *)0x0);
      bVar12 = (byte)uStack_3ec;
      uVar15 = uStack_258;
      pbVar18 = pbStack_260;
      puStack_410 = puVar16;
      goto LAB_04887831;
    }
LAB_04887c2c:
    puVar11 = puVar8 + 1;
    if (puVar16 == (undefined8 *)0x0) {
      puVar11 = puVar20;
      puVar8 = puVar20;
    }
    puVar20 = puVar8;
    puVar8 = (undefined8 *)*puVar11;
    if ((undefined8 *)*puVar11 != (undefined8 *)0x0) {
LAB_04887c44:
      plVar10 = plStack_428;
      plVar9 = plStack_428 + 1;
      LOCK();
      lVar17 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      puVar20 = puStack_420;
      if (lVar17 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar10);
        puVar20 = puStack_420;
      }
      goto joined_r0x04887d4e;
    }
  }
LAB_04887c7b:
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  plVar9 = plStack_3f8;
  plVar10 = plStack_428;
  plStack_390 = plStack_3f8;
  uStack_388 = 0;
  puStack_398 = puVar8;
  if ((*puStack_418 & 1) == 0) {
    puVar8[6] = *(undefined8 *)(puStack_418 + 4);
    uVar2 = *(undefined8 *)(puStack_418 + 2);
    puVar8[4] = *(undefined8 *)puStack_418;
    puVar8[5] = uVar2;
  }
  else {
    func_0x0412e5e0(puVar8 + 4,*(undefined8 *)(puStack_418 + 4),*(undefined8 *)(puStack_418 + 2));
  }
  puVar1 = puStack_400;
  puVar8[7] = plStack_3a0;
  puVar8[8] = plVar10;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = puVar20;
  *puVar11 = puVar8;
  lVar17 = *(long *)*plVar9;
  if (lVar17 != 0) {
    *plVar9 = lVar17;
  }
  func_0x048bed00(puStack_400[4],puVar8);
  puVar1[5] = puVar1[5] + 1;
  puVar20 = puStack_420;
joined_r0x04887d4e:
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,uStack_278 & 0xfffffffffffffffe);
  }
  if ((uStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,uStack_290 & 0xfffffffffffffffe);
  }
  if ((uStack_2a8 & 1) != 0) {
    func_0x0412a280(uStack_298,uStack_2a8 & 0xfffffffffffffffe);
  }
  if ((uStack_2c0 & 1) != 0) {
    func_0x0412a280(uStack_2b0,uStack_2c0 & 0xfffffffffffffffe);
  }
  if (puStack_1d8 != (undefined8 *)0x0) {
    (*(code *)puStack_1d8[1])(&puStack_1d8);
  }
  plVar10 = plStack_1e8;
  plStack_1e8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  plVar10 = plStack_430;
  plStack_430 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  plVar10 = *(long **)((long)puVar8 + 0x38);
  plVar9 = *(long **)((long)puVar8 + 0x40);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(puVar20);
  }
  else {
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    (**(code **)(*plVar10 + 0x10))(puVar20);
    LOCK();
    plVar10 = plVar9 + 1;
    lVar17 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  if ((uStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,CONCAT44(uStack_2dc,uStack_2e0) & 0xfffffffffffffffe);
  }
  if ((uStack_2f8 & 1) != 0) {
    func_0x0412a280(uStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
  }
  if ((uStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,uStack_310 & 0xfffffffffffffffe);
  }
  if ((uStack_328 & 1) != 0) {
    func_0x0412a280(uStack_318,uStack_328 & 0xfffffffffffffffe);
  }
  if ((uStack_3b8 & 1) != 0) {
    func_0x0412a280(uStack_3a8,CONCAT44(uStack_3b4,uStack_3b8) & 0xfffffffffffffffe);
  }
  if ((uStack_3d0 & 1) != 0) {
    func_0x0412a280(uStack_3c0,CONCAT44(uStack_3cc,uStack_3d0) & 0xfffffffffffffffe);
  }
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
  }
  return puVar20;
}


