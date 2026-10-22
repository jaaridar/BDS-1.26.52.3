/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x56891a0 (ELF vaddr 0x55891a0)
 * Label: caller-of-callee
 * Body:  [[056891a0, 0568a5c5] [0568a5d0, 0568aba5] [0568abb0, 0568abec] [0568abf0, 0568b3ab] [0568ba4f, 0568bad3]]
 * Ghidra: FUN_056891a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_056891a0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  long lVar5;
  byte bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined4 *puVar19;
  long *plVar20;
  byte *pbVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 uVar24;
  long lVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  long lVar32;
  ulong uVar33;
  undefined8 **ppuVar34;
  long lVar35;
  bool bVar36;
  byte bStack_3a8;
  undefined6 uStack_3a7;
  undefined1 uStack_3a1;
  undefined1 uStack_3a0;
  undefined6 uStack_39f;
  undefined1 uStack_399;
  byte *pbStack_398;
  ulong uStack_390;
  byte *pbStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 uStack_309;
  undefined8 *puStack_308;
  byte bStack_300;
  undefined5 uStack_2ff;
  undefined2 uStack_2fa;
  undefined1 uStack_2f8;
  undefined5 uStack_2f7;
  undefined2 uStack_2f2;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 *puStack_2a0;
  byte bStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined1 uStack_28f;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  byte *pbStack_268;
  undefined8 uStack_260;
  ulong auStack_258 [4];
  ulong auStack_238 [4];
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  uint *puStack_1a0;
  long *plStack_198;
  byte bStack_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  undefined5 uStack_18d;
  undefined8 uStack_180;
  byte bStack_178;
  undefined1 uStack_177;
  undefined1 uStack_176;
  undefined5 uStack_175;
  undefined8 uStack_168;
  byte bStack_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  long *plStack_c0;
  undefined1 auStack_b8 [16];
  byte bStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_98;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_80;
  byte bStack_78;
  undefined7 uStack_77;
  undefined8 uStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte *pbStack_38;
  
  puStack_2a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_2a0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar24 = _UNK_01495861;
  uStack_2b0 = 0x21;
  uStack_2a8 = 0x1f;
  *(ulong *)((long)puStack_2a0 + 0xf) = CONCAT71(_UNK_0149585a,DAT_01495859);
  *(undefined8 *)((long)puStack_2a0 + 0x17) = uVar24;
  uVar11 = _UNK_01495856;
  uVar10 = _UNK_01495852;
  uVar9 = _UNK_0149584e;
  *puStack_2a0 = _DAT_0149584a;
  puStack_2a0[1] = uVar9;
  puStack_2a0[2] = uVar10;
  puStack_2a0[3] = uVar11;
  *(undefined1 *)((long)puStack_2a0 + 0x1f) = 0;
  bStack_298 = 0x10;
  uStack_297 = 0x7469726f697270;
  uStack_290 = 0x79;
  uStack_28f = 0;
  bStack_178 = 2;
  uStack_177 = 0x30;
  uStack_176 = 0;
  bStack_190 = 2;
  uStack_18f = 0x30;
  uStack_18e = 0;
  bStack_160 = 0;
  uStack_15f = 0;
  func_0x0564aad0(auStack_b8,&uStack_2b0,&bStack_298,0,&bStack_178,0,&bStack_190,&bStack_160);
  uVar24 = *param_2;
  uStack_280 = 0;
  if ((uStack_48 & 1) == 0) {
    pbStack_268 = pbStack_38;
    uStack_278 = uStack_48;
    uStack_274 = uStack_44;
    uStack_270 = uStack_40;
    uStack_26c = uStack_3c;
  }
  else {
    func_0x0412e5e0(&uStack_278,pbStack_38,CONCAT44(uStack_3c,uStack_40));
  }
  uStack_260 = 0;
  if ((uStack_278 & 1) == 0) {
    if ((byte)uStack_278 >> 1 != 0) goto LAB_05689327;
LAB_05689415:
    uVar33 = 0;
  }
  else {
    if (CONCAT44(uStack_26c,uStack_270) == 0) goto LAB_05689415;
LAB_05689327:
    if ((uStack_278 & 1) == 0) {
      pbVar21 = (byte *)((long)&uStack_278 + 1);
      if (pbVar21 != (byte *)0x0) goto LAB_0568934e;
      goto LAB_05689415;
    }
    pbVar21 = pbStack_268;
    if (pbStack_268 == (byte *)0x0) goto LAB_05689415;
LAB_0568934e:
    if (*pbVar21 == 0) goto LAB_05689415;
    uVar33 = 0xcbf29ce484222325;
    uVar16 = func_0x0eee2e90(pbVar21);
    if (uVar16 != 0) {
      uVar28 = (ulong)((uint)uVar16 & 7);
      if (7 < uVar16) {
        uVar16 = uVar16 & 0xfffffffffffffff8;
        do {
          uVar33 = (((((((uVar33 * 0x100000001b3 ^ (ulong)*pbVar21) * 0x100000001b3 ^
                        (ulong)pbVar21[1]) * 0x100000001b3 ^ (ulong)pbVar21[2]) * 0x100000001b3 ^
                      (ulong)pbVar21[3]) * 0x100000001b3 ^ (ulong)pbVar21[4]) * 0x100000001b3 ^
                    (ulong)pbVar21[5]) * 0x100000001b3 ^ (ulong)pbVar21[6]) * 0x100000001b3 ^
                   (ulong)pbVar21[7];
          pbVar21 = pbVar21 + 8;
          uVar16 = uVar16 - 8;
        } while (uVar16 != 0);
      }
      if (uVar28 != 0) {
        uVar16 = 0;
        do {
          uVar33 = uVar33 * 0x100000001b3 ^ (ulong)pbVar21[uVar16];
          uVar16 = uVar16 + 1;
        } while (uVar28 != uVar16);
      }
    }
  }
  bStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a1 = 0;
  uStack_280 = uVar33;
  func_0x0564b850(&uStack_3a0,auStack_b8);
  puStack_100 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)&UNK_0efd5f80;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar17 = CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
  puVar17[1] = CONCAT17(uStack_399,CONCAT61(uStack_39f,uStack_3a0));
  puVar17[5] = uStack_380;
  puVar17[3] = uStack_390;
  puVar17[4] = pbStack_388;
  uStack_390 = 0;
  pbStack_388 = (byte *)0x0;
  uStack_380 = 0;
  puVar17[8] = uStack_368;
  puVar17[6] = uStack_378;
  puVar17[7] = uStack_370;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  puVar17[0xb] = uStack_350;
  puVar17[9] = uStack_360;
  puVar17[10] = uStack_358;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  puVar17[0xe] = uStack_338;
  puVar17[0xc] = uStack_348;
  puVar17[0xd] = uStack_340;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  puVar17[0x11] = uStack_320;
  *(undefined4 *)(puVar17 + 0xf) = (undefined4)uStack_330;
  *(undefined4 *)((long)puVar17 + 0x7c) = uStack_330._4_4_;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_328;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_328._4_4_;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  puStack_148 = (undefined8 *)0x0;
  uStack_140 = 0;
  puStack_100 = puVar17;
  if (puStack_108 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_108)(&puStack_108,&puStack_148);
    puVar17 = puStack_108;
  }
  puStack_108 = (undefined8 *)0x0;
  puStack_148 = puVar17;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0efd5d58;
  puStack_308 = (undefined8 *)0x0;
  bStack_300 = 0;
  uStack_2ff = 0;
  uStack_2fa = 0;
  if (puVar17 == (undefined8 *)0x0) {
    puStack_308 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puVar17)(&puStack_148,&puStack_308);
    puStack_308 = puStack_148;
  }
  puStack_148 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar18 + 0xe,&uStack_309,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar23 = plVar18 + 0x11;
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
  plVar18[4] = (long)&UNK_0efd5da8;
  plVar18[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar18 + 0x2f) = 1;
  plVar18[0x30] = 0;
  plVar18[0x31] = 0;
  if (puStack_308 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_308)(&puStack_308,plVar18 + 0x30);
    puVar17 = puStack_308;
  }
  puStack_308 = (undefined8 *)0x0;
  plVar18[0x30] = (long)puVar17;
  puVar4 = (uint *)(plVar18 + 0x12);
  if (plVar23 == (long *)&DAT_0f552078) {
    plVar18[0x15] = 0;
  }
  else {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar18[0x14] = _DAT_0f552090;
        uVar11 = uRam000000000f55208c;
        uVar10 = _DAT_0f552088;
        uVar9 = uRam000000000f552084;
        *puVar4 = _DAT_0f552080;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar9;
        *(undefined4 *)(plVar18 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar4,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar36 = (_DAT_0f552080 & 1) != 0;
      lVar25 = 0xf552081;
      if (bVar36) {
        lVar25 = _DAT_0f552090;
      }
      uVar33 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar36) {
        uVar33 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar4,lVar25,uVar33);
    }
    plVar18[0x11] = _DAT_0f552078;
    plVar18[0x15] = 0;
    if (puStack_308 != (undefined8 *)0x0) {
      (*(code *)puStack_308[1])(&puStack_308);
    }
  }
  plVar1 = plVar18 + 1;
  if (puStack_148 != (undefined8 *)0x0) {
    (*(code *)puStack_148[1])(&puStack_148);
  }
  LOCK();
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0efd5e88;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar17[4] = &UNK_0efd5ed8;
  puVar17[0xe] = plVar18 + 4;
  puVar17[0xf] = plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  bStack_300 = (byte)puVar17;
  uStack_2ff = (undefined5)((ulong)puVar17 >> 8);
  uStack_2fa = (undefined2)((ulong)puVar17 >> 0x30);
  puStack_308 = puVar17 + 4;
  puVar19 = (undefined4 *)func_0x057041e0(uVar24,&uStack_280);
  plVar20 = *(long **)(puVar19 + 0x24);
  if (plVar20 < *(long **)(puVar19 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plVar23) {
      if ((*puVar4 & 1) == 0) {
        plVar20[3] = plVar18[0x14];
        lVar25 = plVar18[0x13];
        plVar20[1] = *(long *)puVar4;
        plVar20[2] = lVar25;
      }
      else {
        func_0x04885070(plVar20 + 1,plVar18[0x14],plVar18[0x13]);
      }
    }
    *plVar20 = *plVar23;
    plVar20[5] = (long)(puVar17 + 4);
    plVar20[6] = (long)puVar17;
    LOCK();
    puVar17[1] = puVar17[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    *(long **)(puVar19 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x05705fa0(puVar19 + 0x22,plVar23,&puStack_308);
  }
  *(long **)(puVar19 + 0x24) = plVar20;
  uVar9 = *puVar19;
  uVar10 = puVar19[1];
  uVar11 = puVar19[2];
  uVar12 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar23 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  plVar23 = (long *)plVar18[0xf];
  *(undefined4 *)(plVar18 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar18 + 0x74) = uVar10;
  *(undefined4 *)(plVar18 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar18 + 0x7c) = uVar12;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar20 = plVar23 + 1;
    lVar25 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  plVar23 = (long *)CONCAT26(uStack_2fa,CONCAT51(uStack_2ff,bStack_300));
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar20 = plVar23 + 1;
    lVar25 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  LOCK();
  lVar25 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    LOCK();
    lVar25 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar25 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
  }
  if (lVar25 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
  }
  if (puStack_108 != (undefined8 *)0x0) {
    (*(code *)puStack_108[1])(&puStack_108);
  }
  if ((uStack_330 & 1) != 0) {
    func_0x0412a280(uStack_320,uStack_330 & 0xfffffffffffffffe);
  }
  if ((uStack_348 & 1) != 0) {
    func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
  }
  if ((uStack_360 & 1) != 0) {
    func_0x0412a280(uStack_350,uStack_360 & 0xfffffffffffffffe);
  }
  if ((uStack_378 & 1) != 0) {
    func_0x0412a280(uStack_368,uStack_378 & 0xfffffffffffffffe);
  }
  if ((uStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,uStack_390 & 0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(pbStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
  }
  bStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a1 = 0;
  uStack_3a0 = 0;
  func_0x0564b850(&pbStack_398,auStack_b8);
  bStack_300 = 0;
  uStack_2ff = 0;
  uStack_2fa = 0;
  puStack_308 = (undefined8 *)&UNK_0efd5f98;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  ppuVar34 = (undefined8 **)(plVar18 + 0x26);
  *(undefined1 *)(puVar17 + 1) = uStack_3a0;
  *puVar17 = CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
  puVar17[2] = pbStack_398;
  puVar17[6] = uStack_378;
  puVar17[4] = pbStack_388;
  puVar17[5] = uStack_380;
  pbStack_388 = (byte *)0x0;
  uStack_380 = 0;
  uStack_378 = 0;
  puVar17[9] = uStack_360;
  puVar17[7] = uStack_370;
  puVar17[8] = uStack_368;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  puVar17[0xc] = uStack_348;
  puVar17[10] = uStack_358;
  puVar17[0xb] = uStack_350;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  puVar17[0xf] = uStack_330;
  puVar17[0xd] = uStack_340;
  puVar17[0xe] = uStack_338;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  puVar17[0x12] = uStack_318;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_328;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_328._4_4_;
  *(undefined4 *)(puVar17 + 0x11) = (undefined4)uStack_320;
  *(undefined4 *)((long)puVar17 + 0x8c) = uStack_320._4_4_;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  bStack_300 = (byte)puVar17;
  uStack_2ff = (undefined5)((ulong)puVar17 >> 8);
  uStack_2fa = (undefined2)((ulong)puVar17 >> 0x30);
  if (ppuVar34 == &puStack_308) {
    func_0x0564b7b0(puVar17 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar17);
  }
  else {
    puVar17 = (undefined8 *)&UNK_0efd5f98;
    if ((*ppuVar34 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar34)[1])(ppuVar34), puVar17 = puStack_308, puStack_308 != (undefined8 *)0x0
       )) {
      (*(code *)*puVar17)(&puStack_308,ppuVar34);
      puVar17 = puStack_308;
    }
    else {
      puVar17 = (undefined8 *)0x0;
    }
    puStack_308 = (undefined8 *)0x0;
    *ppuVar34 = puVar17;
  }
  if ((uStack_328 & 1) != 0) {
    func_0x0412a280(uStack_318,uStack_328 & 0xfffffffffffffffe);
  }
  if ((uStack_340 & 1) != 0) {
    func_0x0412a280(uStack_330,uStack_340 & 0xfffffffffffffffe);
  }
  if ((uStack_358 & 1) != 0) {
    func_0x0412a280(uStack_348,uStack_358 & 0xfffffffffffffffe);
  }
  if ((uStack_370 & 1) != 0) {
    func_0x0412a280(uStack_360,uStack_370 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,(ulong)pbStack_388 & 0xfffffffffffffffe);
  }
  if ((uStack_48 & 1) != 0) {
    func_0x0412a280(pbStack_38,CONCAT44(uStack_44,uStack_48) & 0xfffffffffffffffe);
  }
  if ((bStack_60 & 1) != 0) {
    func_0x0412a280(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
  }
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
  }
  if ((bStack_90 & 1) != 0) {
    func_0x0412a280(uStack_80,CONCAT71(uStack_8f,bStack_90) & 0xfffffffffffffffe);
  }
  if ((bStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,CONCAT71(uStack_a7,bStack_a8) & 0xfffffffffffffffe);
  }
  if ((bStack_160 & 1) != 0) {
    func_0x0412a280(uStack_150,
                    CONCAT62(uStack_15e,CONCAT11(uStack_15f,bStack_160)) & 0xfffffffffffffffe);
  }
  if ((bStack_190 & 1) != 0) {
    func_0x0412a280(uStack_180,
                    CONCAT53(uStack_18d,CONCAT12(uStack_18e,CONCAT11(uStack_18f,bStack_190))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,
                    CONCAT53(uStack_175,CONCAT12(uStack_176,CONCAT11(uStack_177,bStack_178))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_298 & 1) != 0) {
    func_0x0412a280(uStack_288,CONCAT71(uStack_297,bStack_298) & 0xfffffffffffffffe);
  }
  uVar24 = *param_2;
  uStack_2f2 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  bStack_300 = 0x1a;
  uStack_2ff = 0x72746e6f63;
  uStack_2fa = 0x6c6f;
  uStack_2f8 = 0x5f;
  uStack_2f7 = 0x7367616c66;
  puStack_308 = (undefined8 *)0x86e3afe1b1c6e2ac;
  uStack_140 = 0;
  puStack_148 = (undefined8 *)&UNK_0efd61a8;
  pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar21 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pbVar21[8] = 0;
  pbVar21[9] = 0;
  pbVar21[10] = 0;
  pbVar21[0xb] = 0;
  pbVar21[0xc] = 0;
  pbVar21[0xd] = 0;
  pbVar21[0xe] = 0;
  pbVar21[0xf] = 0;
  pbVar21[0x10] = 0;
  pbVar21[0x11] = 0;
  pbVar21[0x12] = 0;
  pbVar21[0x13] = 0;
  pbVar21[0x14] = 0;
  pbVar21[0x15] = 0;
  pbVar21[0x16] = 0;
  pbVar21[0x17] = 0;
  *(undefined **)pbVar21 = &UNK_0efd5fc0;
  bStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a1 = 0;
  uStack_3a0 = 0;
  uStack_39f = 0;
  uStack_399 = 0;
  if (puStack_148 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_148)(&puStack_148,&bStack_3a8);
    puVar17 = puStack_148;
  }
  puStack_148 = (undefined8 *)0x0;
  bStack_3a8 = (byte)puVar17;
  uStack_3a7 = (undefined6)((ulong)puVar17 >> 8);
  uStack_3a1 = (undefined1)((ulong)puVar17 >> 0x38);
  *(undefined **)(pbVar21 + 0x20) = &UNK_0f2ccd78;
  pbVar21[0x28] = 0;
  pbVar21[0x29] = 0;
  pbVar21[0x2a] = 0;
  pbVar21[0x2b] = 0;
  pbVar21[0x2c] = 0;
  pbVar21[0x2d] = 0;
  pbVar21[0x2e] = 0;
  pbVar21[0x2f] = 0;
  pbVar21[0x30] = 0;
  pbVar21[0x31] = 0;
  pbVar21[0x32] = 0;
  pbVar21[0x33] = 0;
  pbVar21[0x34] = 0;
  pbVar21[0x35] = 0;
  pbVar21[0x36] = 0;
  pbVar21[0x37] = 0;
  pbVar21[0x38] = 0;
  pbVar21[0x39] = 0;
  pbVar21[0x3a] = 0;
  pbVar21[0x3b] = 0;
  pbVar21[0x3c] = 0;
  pbVar21[0x3d] = 0;
  pbVar21[0x3e] = 0;
  pbVar21[0x3f] = 0;
  pbVar21[0x40] = 0;
  pbVar21[0x41] = 0;
  pbVar21[0x42] = 0;
  pbVar21[0x43] = 0;
  pbVar21[0x44] = 0;
  pbVar21[0x45] = 0;
  pbVar21[0x46] = 0;
  pbVar21[0x47] = 0;
  pbVar21[0x48] = 0;
  pbVar21[0x49] = 0;
  pbVar21[0x4a] = 0;
  pbVar21[0x4b] = 0;
  pbVar21[0x4c] = 0;
  pbVar21[0x4d] = 0;
  pbVar21[0x4e] = 0;
  pbVar21[0x4f] = 0;
  pbVar21[0x50] = 0;
  pbVar21[0x51] = 0;
  pbVar21[0x52] = 0;
  pbVar21[0x53] = 0;
  pbVar21[0x54] = 0;
  pbVar21[0x55] = 0;
  pbVar21[0x56] = 0;
  pbVar21[0x57] = 0;
  pbVar21[0x58] = 0;
  pbVar21[0x59] = 0;
  pbVar21[0x5a] = 0;
  pbVar21[0x5b] = 0;
  pbVar21[0x5c] = 0;
  pbVar21[0x5d] = 0;
  pbVar21[0x5e] = 0;
  pbVar21[0x5f] = 0;
  pbVar21[0x60] = 0;
  pbVar21[0x61] = 0;
  pbVar21[0x62] = 0;
  pbVar21[99] = 0;
  pbVar21[100] = 0;
  pbVar21[0x65] = 0;
  pbVar21[0x66] = 0;
  pbVar21[0x67] = 0;
  pbVar21[0x68] = 0;
  func_0x04aa75f0(pbVar21 + 0x70,&puStack_108,&UNK_01254d89);
  pbVar21[0x80] = 0;
  pbVar31 = pbVar21 + 0x88;
  pbVar21[0x88] = 0;
  pbVar21[0x89] = 0;
  pbVar21[0x8a] = 0;
  pbVar21[0x8b] = 0;
  pbVar21[0x8c] = 0;
  pbVar21[0x8d] = 0;
  pbVar21[0x8e] = 0;
  pbVar21[0x8f] = 0;
  pbVar21[0x90] = 0;
  pbVar21[0x91] = 0;
  pbVar21[0x92] = 0;
  pbVar21[0x93] = 0;
  pbVar21[0x94] = 0;
  pbVar21[0x95] = 0;
  pbVar21[0x96] = 0;
  pbVar21[0x97] = 0;
  pbVar21[0x98] = 0;
  pbVar21[0x99] = 0;
  pbVar21[0x9a] = 0;
  pbVar21[0x9b] = 0;
  pbVar21[0x9c] = 0;
  pbVar21[0x9d] = 0;
  pbVar21[0x9e] = 0;
  pbVar21[0x9f] = 0;
  pbVar21[0xa0] = 0;
  pbVar21[0xa1] = 0;
  pbVar21[0xa2] = 0;
  pbVar21[0xa3] = 0;
  pbVar21[0xa4] = 0;
  pbVar21[0xa5] = 0;
  pbVar21[0xa6] = 0;
  pbVar21[0xa7] = 0;
  pbVar21[0xa8] = 0;
  pbVar21[0xa9] = 0;
  pbVar21[0xaa] = 0;
  pbVar21[0xab] = 0;
  pbVar21[0xac] = 0;
  pbVar21[0xad] = 0;
  pbVar21[0xae] = 0;
  pbVar21[0xaf] = 0;
  pbVar21[0xb0] = 0;
  pbVar21[0xb1] = 0;
  pbVar21[0xb2] = 0;
  pbVar21[0xb3] = 0;
  pbVar21[0xb4] = 0;
  pbVar21[0xb5] = 0;
  pbVar21[0xb6] = 0;
  pbVar21[0xb7] = 0;
  pbVar21[0xb8] = 0xff;
  pbVar21[0xb9] = 0xff;
  pbVar21[0xba] = 0xff;
  pbVar21[0xbb] = 0xff;
  pbVar21[0xbc] = 0;
  pbVar21[0xbd] = 0;
  pbVar21[0xbe] = 0;
  pbVar21[0xbf] = 0;
  pbVar21[0x130] = 0;
  pbVar21[0x131] = 0;
  pbVar21[0x132] = 0;
  pbVar21[0x133] = 0;
  pbVar21[0x134] = 0;
  pbVar21[0x135] = 0;
  pbVar21[0x136] = 0;
  pbVar21[0x137] = 0;
  pbVar21[0x138] = 0;
  pbVar21[0x139] = 0;
  pbVar21[0x13a] = 0;
  pbVar21[0x13b] = 0;
  pbVar21[0x13c] = 0;
  pbVar21[0x13d] = 0;
  pbVar21[0x13e] = 0;
  pbVar21[0x13f] = 0;
  pbVar21[0xc0] = 0;
  pbVar21[0xc1] = 0;
  pbVar21[0xc2] = 0;
  pbVar21[0xc3] = 0;
  pbVar21[0xc4] = 0;
  pbVar21[0xc5] = 0;
  pbVar21[0xc6] = 0;
  pbVar21[199] = 0;
  pbVar21[200] = 0;
  pbVar21[0xc9] = 0;
  pbVar21[0xca] = 0;
  pbVar21[0xcb] = 0;
  pbVar21[0xcc] = 0;
  pbVar21[0xcd] = 0;
  pbVar21[0xce] = 0;
  pbVar21[0xcf] = 0;
  pbVar21[0xd0] = 0;
  pbVar21[0xd1] = 0;
  pbVar21[0xd2] = 0;
  pbVar21[0xd3] = 0;
  pbVar21[0xd4] = 0;
  pbVar21[0xd5] = 0;
  pbVar21[0xd6] = 0;
  pbVar21[0xd7] = 0;
  pbVar21[0xd8] = 0;
  pbVar21[0xd9] = 0;
  pbVar21[0xda] = 0;
  pbVar21[0xdb] = 0;
  pbVar21[0xdc] = 0;
  pbVar21[0xdd] = 0;
  pbVar21[0xde] = 0;
  pbVar21[0xdf] = 0;
  pbVar21[0xe0] = 0;
  pbVar21[0xe1] = 0;
  pbVar21[0xe2] = 0;
  pbVar21[0xe3] = 0;
  pbVar21[0xe4] = 0;
  pbVar21[0xe5] = 0;
  pbVar21[0xe6] = 0;
  pbVar21[0xe7] = 0;
  pbVar21[0xe8] = 0;
  pbVar21[0xe9] = 0;
  pbVar21[0xea] = 0;
  pbVar21[0xeb] = 0;
  pbVar21[0xec] = 0;
  pbVar21[0xed] = 0;
  pbVar21[0xee] = 0;
  pbVar21[0xef] = 0;
  pbVar21[0xf0] = 0;
  pbVar21[0xf1] = 0;
  pbVar21[0xf2] = 0;
  pbVar21[0xf3] = 0;
  pbVar21[0xf4] = 0;
  pbVar21[0xf5] = 0;
  pbVar21[0xf6] = 0;
  pbVar21[0xf7] = 0;
  pbVar21[0xf8] = 0;
  pbVar21[0xf9] = 0;
  pbVar21[0xfa] = 0;
  pbVar21[0xfb] = 0;
  pbVar21[0xfc] = 0;
  pbVar21[0xfd] = 0;
  pbVar21[0xfe] = 0;
  pbVar21[0xff] = 0;
  *(undefined **)(pbVar21 + 0x20) = &UNK_0efd6010;
  pbVar29 = pbVar21 + 0x170;
  pbVar21[0x170] = 0;
  pbVar21[0x171] = 0;
  pbVar21[0x172] = 0;
  pbVar21[0x173] = 0;
  pbVar21[0x174] = 0;
  pbVar21[0x175] = 0;
  pbVar21[0x176] = 0;
  pbVar21[0x177] = 0;
  pbVar21[0x178] = 0;
  pbVar21[0x179] = 0;
  pbVar21[0x17a] = 0;
  pbVar21[0x17b] = 0;
  pbVar21[0x17c] = 0;
  pbVar21[0x17d] = 0;
  pbVar21[0x17e] = 0;
  pbVar21[0x17f] = 0;
  if (pbVar29 != &bStack_3a8) {
    puVar17 = (undefined8 *)CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
    if (puVar17 == (undefined8 *)0x0) {
      uVar22 = 0;
    }
    else {
      (*(code *)*puVar17)(&bStack_3a8,pbVar29);
      uVar22 = CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
    }
    bStack_3a8 = 0;
    uStack_3a7 = 0;
    uStack_3a1 = 0;
    *(undefined8 *)pbVar29 = uVar22;
  }
  puVar4 = (uint *)(pbVar21 + 0x90);
  if (pbVar31 != &DAT_0f551f58) {
    if ((*puVar4 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(undefined8 *)(pbVar21 + 0xa0) = _DAT_0f551f70;
        uVar11 = uRam000000000f551f6c;
        uVar10 = _DAT_0f551f68;
        uVar9 = uRam000000000f551f64;
        *puVar4 = _DAT_0f551f60;
        *(undefined4 *)(pbVar21 + 0x94) = uVar9;
        *(undefined4 *)(pbVar21 + 0x98) = uVar10;
        *(undefined4 *)(pbVar21 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar4,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar36 = (_DAT_0f551f60 & 1) != 0;
      uVar22 = 0xf551f61;
      if (bVar36) {
        uVar22 = _DAT_0f551f70;
      }
      uVar33 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar36) {
        uVar33 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar4,uVar22,uVar33);
    }
  }
  pbVar29 = pbVar21 + 8;
  *(undefined8 *)(pbVar21 + 0x88) = _DAT_0f551f58;
  pbVar21[0xa8] = 0;
  pbVar21[0xa9] = 0;
  pbVar21[0xaa] = 0;
  pbVar21[0xab] = 0;
  pbVar21[0xac] = 0;
  pbVar21[0xad] = 0;
  pbVar21[0xae] = 0;
  pbVar21[0xaf] = 0;
  lVar25 = CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
  if (lVar25 != 0) {
    (**(code **)(lVar25 + 8))(&bStack_3a8);
  }
  LOCK();
  *(long *)pbVar29 = *(long *)pbVar29 + 1;
  UNLOCK();
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0efd6108;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar17[4] = &UNK_0efd6158;
  puVar17[0xe] = pbVar21 + 0x20;
  puVar17[0xf] = pbVar21;
  LOCK();
  *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
  UNLOCK();
  puVar7 = puVar17 + 4;
  bStack_3a8 = (byte)puVar7;
  uStack_3a7 = (undefined6)((ulong)puVar7 >> 8);
  uStack_3a1 = (undefined1)((ulong)puVar7 >> 0x38);
  uStack_3a0 = SUB81(puVar17,0);
  uStack_39f = (undefined6)((ulong)puVar17 >> 8);
  uStack_399 = (undefined1)((ulong)puVar17 >> 0x38);
  puVar19 = (undefined4 *)func_0x057041e0(uVar24,&puStack_308);
  pbVar30 = *(byte **)(puVar19 + 0x24);
  if (pbVar30 < *(byte **)(puVar19 + 0x26)) {
    pbVar30[0x10] = 0;
    pbVar30[0x11] = 0;
    pbVar30[0x12] = 0;
    pbVar30[0x13] = 0;
    pbVar30[0x14] = 0;
    pbVar30[0x15] = 0;
    pbVar30[0x16] = 0;
    pbVar30[0x17] = 0;
    pbVar30[0x18] = 0;
    pbVar30[0x19] = 0;
    pbVar30[0x1a] = 0;
    pbVar30[0x1b] = 0;
    pbVar30[0x1c] = 0;
    pbVar30[0x1d] = 0;
    pbVar30[0x1e] = 0;
    pbVar30[0x1f] = 0;
    pbVar30[0] = 0;
    pbVar30[1] = 0;
    pbVar30[2] = 0;
    pbVar30[3] = 0;
    pbVar30[4] = 0;
    pbVar30[5] = 0;
    pbVar30[6] = 0;
    pbVar30[7] = 0;
    pbVar30[8] = 0;
    pbVar30[9] = 0;
    pbVar30[10] = 0;
    pbVar30[0xb] = 0;
    pbVar30[0xc] = 0;
    pbVar30[0xd] = 0;
    pbVar30[0xe] = 0;
    pbVar30[0xf] = 0;
    pbVar30[0x20] = 0;
    pbVar30[0x21] = 0;
    pbVar30[0x22] = 0;
    pbVar30[0x23] = 0;
    pbVar30[0x24] = 0;
    pbVar30[0x25] = 0;
    pbVar30[0x26] = 0;
    pbVar30[0x27] = 0;
    if (pbVar30 != pbVar31) {
      if ((*puVar4 & 1) == 0) {
        *(undefined8 *)(pbVar30 + 0x18) = *(undefined8 *)(pbVar21 + 0xa0);
        uVar24 = *(undefined8 *)(pbVar21 + 0x98);
        *(undefined8 *)(pbVar30 + 8) = *(undefined8 *)puVar4;
        *(undefined8 *)(pbVar30 + 0x10) = uVar24;
      }
      else {
        func_0x04885070(pbVar30 + 8,*(undefined8 *)(pbVar21 + 0xa0),*(undefined8 *)(pbVar21 + 0x98))
        ;
      }
    }
    *(undefined8 *)pbVar30 = *(undefined8 *)pbVar31;
    *(undefined8 **)(pbVar30 + 0x28) = puVar7;
    *(undefined8 **)(pbVar30 + 0x30) = puVar17;
    LOCK();
    puVar17[1] = puVar17[1] + 1;
    UNLOCK();
    pbVar30 = pbVar30 + 0x38;
    *(byte **)(puVar19 + 0x24) = pbVar30;
  }
  else {
    pbVar30 = (byte *)func_0x05705fa0(puVar19 + 0x22,pbVar31,&bStack_3a8);
  }
  *(byte **)(puVar19 + 0x24) = pbVar30;
  uVar9 = *puVar19;
  uVar10 = puVar19[1];
  uVar11 = puVar19[2];
  uVar12 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = *(long **)(pbVar21 + 0x78);
  *(undefined4 *)(pbVar21 + 0x70) = uVar9;
  *(undefined4 *)(pbVar21 + 0x74) = uVar10;
  *(undefined4 *)(pbVar21 + 0x78) = uVar11;
  *(undefined4 *)(pbVar21 + 0x7c) = uVar12;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar23 = plVar18 + 1;
    lVar25 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  pbVar21[0x80] = *(byte *)((long)puVar19 + 0xa1);
  plVar18 = (long *)CONCAT17(uStack_399,CONCAT61(uStack_39f,uStack_3a0));
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar23 = plVar18 + 1;
    lVar25 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  LOCK();
  lVar25 = *(long *)pbVar29;
  *(long *)pbVar29 = *(long *)pbVar29 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
    func_0x0412c2d0(pbVar21);
    LOCK();
    lVar25 = *(long *)pbVar29;
    *(long *)pbVar29 = *(long *)pbVar29 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar25 = *(long *)pbVar29;
    *(long *)pbVar29 = *(long *)pbVar29 + -1;
    UNLOCK();
  }
  if (lVar25 == 0) {
    (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
    func_0x0412c2d0(pbVar21);
  }
  if (puStack_148 != (undefined8 *)0x0) {
    (*(code *)puStack_148[1])(&puStack_148);
  }
  if ((bStack_300 & 1) != 0) {
    func_0x0412a280(uStack_2f0,
                    CONCAT26(uStack_2fa,CONCAT51(uStack_2ff,bStack_300)) & 0xfffffffffffffffe);
  }
  puStack_100 = (undefined8 *)0x0;
  bStack_300 = 0;
  uStack_2ff = 0;
  uStack_2fa = 0;
  puStack_108 = (undefined8 *)0x0;
  puStack_308 = (undefined8 *)&UNK_0efd63f8;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  puVar17 = puStack_308;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0efd61d0;
  uStack_3a0 = 0;
  uStack_39f = 0;
  uStack_399 = 0;
  puStack_308 = (undefined8 *)0x0;
  bStack_3a8 = (byte)puVar17;
  uStack_3a7 = (undefined6)((ulong)puVar17 >> 8);
  uStack_3a1 = (undefined1)((ulong)puVar17 >> 0x38);
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
  func_0x04aa75f0(plVar18 + 0xe,&uStack_280,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  pbStack_2c0 = (byte *)(plVar18 + 0x11);
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
  plVar18[4] = (long)&UNK_0efd6220;
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  plVar18[0x30] = 0;
  plVar18[0x31] = 0;
  plVar18[0x32] = 0;
  plVar18[0x33] = 0;
  plVar18[0x34] = 0;
  *(undefined4 *)(plVar18 + 0x35) = 0x3f800000;
  plVar18[0x36] = 0;
  plVar18[0x37] = 0;
  puVar17 = (undefined8 *)CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
  if (puVar17 == (undefined8 *)0x0) {
    lVar25 = 0;
  }
  else {
    (*(code *)*puVar17)(&bStack_3a8,plVar18 + 0x36);
    lVar25 = CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
  }
  bStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a1 = 0;
  plVar18[0x36] = lVar25;
  *(undefined1 *)(plVar18 + 0x3e) = 0;
  puStack_1a0 = (uint *)(plVar18 + 0x12);
  if (pbStack_2c0 != &DAT_0f552138) {
    if ((*puStack_1a0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar18[0x14] = _DAT_0f552150;
        uVar11 = uRam000000000f55214c;
        uVar10 = _DAT_0f552148;
        uVar9 = uRam000000000f552144;
        *puStack_1a0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar9;
        *(undefined4 *)(plVar18 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puStack_1a0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar36 = (_DAT_0f552140 & 1) != 0;
      lVar25 = 0xf552141;
      if (bVar36) {
        lVar25 = _DAT_0f552150;
      }
      uVar33 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar36) {
        uVar33 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_1a0,lVar25,uVar33);
    }
  }
  plVar18[0x11] = _DAT_0f552138;
  plVar18[0x15] = 0;
  lVar25 = CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
  if (lVar25 != 0) {
    (**(code **)(lVar25 + 8))(&bStack_3a8);
  }
  plVar23 = plVar18 + 1;
  if (puStack_308 != (undefined8 *)0x0) {
    (*(code *)puStack_308[1])(&puStack_308);
  }
  LOCK();
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  plStack_c0 = plVar23;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0efd6300;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[4] = (long)&UNK_0efd6350;
  plVar23[0xe] = (long)(plVar18 + 4);
  plVar23[0xf] = (long)plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  plStack_198 = plVar23 + 1;
  pbVar30 = *(byte **)(pbVar21 + 0xe0);
  pbVar29 = *(byte **)(pbVar21 + 0xd8);
  for (pbVar31 = pbVar29; pbVar31 != pbVar30; pbVar31 = pbVar31 + 0xa8) {
    if ((*(long *)(pbVar31 + 0x78) == 0) && (*(long *)(pbVar31 + 0x80) == -1)) goto LAB_0568a915;
  }
  if (*(byte **)(pbVar21 + 0xe8) <= pbVar30) {
    pbVar30 = pbVar30 + -(long)pbVar29;
    uVar33 = ((long)pbVar30 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar33) goto LAB_0568b37d;
    lVar25 = (long)*(byte **)(pbVar21 + 0xe8) - (long)pbVar29 >> 3;
    uVar16 = lVar25 * -0x6186186186186186;
    if (uVar33 < uVar16) {
      uVar33 = uVar16;
    }
    pbVar31 = pbVar21 + 0xd8;
    if (0xc30c30c30c30c2 < (ulong)(lVar25 * -0x30c30c30c30c30c3)) {
      uVar33 = 0x186186186186186;
    }
    pbStack_388 = pbVar31;
    if (uVar33 == 0) {
      lVar25 = 0;
LAB_0568a6c2:
      bStack_3a8 = (byte)lVar25;
      uStack_3a7 = (undefined6)((ulong)lVar25 >> 8);
      uStack_3a1 = (undefined1)((ulong)lVar25 >> 0x38);
      pbStack_398 = pbVar30 + lVar25;
      uStack_3a0 = SUB81(pbStack_398,0);
      uStack_39f = (undefined6)((ulong)pbStack_398 >> 8);
      uStack_399 = (undefined1)((ulong)pbStack_398 >> 0x38);
      uStack_390 = uVar33 * 0xa8 + lVar25;
      func_0x0570a480(pbStack_398);
      pbVar30 = pbStack_398 + 0xa8;
      lVar25 = *(long *)(pbVar21 + 0xd8);
      lVar5 = *(long *)(pbVar21 + 0xe0);
      lVar32 = (lVar25 - lVar5) + CONCAT17(uStack_399,CONCAT61(uStack_39f,uStack_3a0));
      if (lVar25 != lVar5) {
        lVar35 = 0;
        pbStack_2b8 = pbVar31;
        do {
          uVar24 = ((undefined8 *)(lVar25 + lVar35))[1];
          *(undefined8 *)(lVar32 + lVar35) = *(undefined8 *)(lVar25 + lVar35);
          ((undefined8 *)(lVar32 + lVar35))[1] = uVar24;
          *(undefined8 *)(lVar25 + lVar35) = 0;
          ((undefined8 *)(lVar25 + lVar35))[1] = 0;
          puVar17 = (undefined8 *)(lVar32 + 0x20 + lVar35);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17 = (undefined8 *)(lVar32 + 0x10 + lVar35);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar32 + 0x30 + lVar35) = 0;
          *(undefined8 *)(lVar32 + 0x28 + lVar35) = *(undefined8 *)(lVar25 + 0x28 + lVar35);
          puVar19 = (undefined4 *)(lVar25 + 0x18 + lVar35);
          uVar9 = puVar19[1];
          uVar10 = puVar19[2];
          uVar11 = puVar19[3];
          puVar3 = (undefined4 *)(lVar32 + 0x18 + lVar35);
          *puVar3 = *puVar19;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          *(undefined2 *)(lVar25 + 0x18 + lVar35) = 0;
          *(undefined8 *)(lVar32 + 0x10 + lVar35) = *(undefined8 *)(lVar25 + 0x10 + lVar35);
          func_0x04167a20(lVar35 + lVar32 + 0x38,lVar25 + lVar35 + 0x38);
          puVar17 = (undefined8 *)(lVar25 + 0x40 + lVar35);
          uVar24 = puVar17[1];
          puVar7 = (undefined8 *)(lVar32 + 0x40 + lVar35);
          *puVar7 = *puVar17;
          puVar7[1] = uVar24;
          puVar17 = (undefined8 *)(lVar25 + 0x50 + lVar35);
          uVar24 = puVar17[1];
          puVar7 = (undefined8 *)(lVar32 + 0x50 + lVar35);
          *puVar7 = *puVar17;
          puVar7[1] = uVar24;
          puVar17 = (undefined8 *)(lVar25 + 0x60 + lVar35);
          uVar24 = puVar17[1];
          puVar7 = (undefined8 *)(lVar32 + 0x60 + lVar35);
          *puVar7 = *puVar17;
          puVar7[1] = uVar24;
          puVar17 = (undefined8 *)(lVar25 + 0x60 + lVar35);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar32 + 0x70 + lVar35) = *(undefined8 *)(lVar25 + 0x70 + lVar35);
          puVar17 = (undefined8 *)(lVar25 + 0x78 + lVar35);
          uVar24 = puVar17[1];
          puVar7 = (undefined8 *)(lVar32 + 0x78 + lVar35);
          *puVar7 = *puVar17;
          puVar7[1] = uVar24;
          puVar17 = (undefined8 *)(lVar32 + 0x88 + lVar35);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar32 + 0x98 + lVar35) = 0;
          puVar19 = (undefined4 *)(lVar25 + 0x88 + lVar35);
          uVar9 = puVar19[1];
          uVar10 = puVar19[2];
          uVar11 = puVar19[3];
          puVar3 = (undefined4 *)(lVar32 + 0x88 + lVar35);
          *puVar3 = *puVar19;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          *(undefined8 *)(lVar32 + 0x98 + lVar35) = *(undefined8 *)(lVar25 + 0x98 + lVar35);
          puVar17 = (undefined8 *)(lVar25 + 0x88 + lVar35);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar25 + 0x98 + lVar35) = 0;
          *(undefined2 *)(lVar32 + 0xa0 + lVar35) = *(undefined2 *)(lVar25 + 0xa0 + lVar35);
          lVar2 = lVar25 + lVar35;
          lVar35 = lVar35 + 0xa8;
        } while (lVar2 + 0xa8 != lVar5);
        do {
          func_0x05706d80(lVar25);
          lVar25 = lVar25 + 0xa8;
        } while (lVar25 != lVar5);
        lVar25 = *(long *)pbStack_2b8;
      }
      *(long *)(pbVar21 + 0xd8) = lVar32;
      *(byte **)(pbVar21 + 0xe0) = pbVar30;
      lVar5 = *(long *)(pbVar21 + 0xe8);
      *(ulong *)(pbVar21 + 0xe8) = uStack_390;
      if (lVar25 != 0) {
        func_0x0412a280(lVar25,lVar5 - lVar25);
      }
      goto LAB_0568a8a9;
    }
    pbVar29 = pbVar21;
    if (uVar33 < 0x186186186186187) {
      lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar33 * 0xa8);
      if (lVar25 == 0) {
        func_0x0eec74c0(uVar33 * 0xa8,0);
        lVar25 = 0;
      }
      goto LAB_0568a6c2;
    }
LAB_0568b373:
    FUN_04882eb0();
LAB_0568b378:
    func_0x0570a6c0();
    pbVar21 = pbVar29;
LAB_0568b37d:
    uVar24 = func_0x0570a5f0();
    if ((*pbVar21 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(pbVar30 + 0x18),*(ulong *)(pbVar30 + 8) & 0xfffffffffffffffe);
    }
    func_0x0570a600(&bStack_3a8);
    LOCK();
    lVar25 = *plStack_198;
    *plStack_198 = *plStack_198 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
    func_0x05708290(plVar18);
    func_0x057082c0(plVar18);
    if (puStack_108 != (undefined8 *)0x0) {
      (*(code *)puStack_108[1])(&puStack_108);
    }
    if ((uStack_2b0 & 1) != 0) {
      func_0x0412a280(puStack_2a0,uStack_2b0 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar24);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  func_0x0570a480(pbVar30);
  pbVar30 = pbVar30 + 0xa8;
  *(byte **)(pbVar21 + 0xe0) = pbVar30;
LAB_0568a8a9:
  *(byte **)(pbVar21 + 0xe0) = pbVar30;
  pbVar31 = *(byte **)(pbVar30 + -0xa8);
  if ((*pbVar31 & 1) == 0) {
    *pbVar31 = 0x26;
    pbVar31 = pbVar31 + 1;
  }
  else {
    pbVar31[8] = 0x13;
    pbVar31[9] = 0;
    pbVar31[10] = 0;
    pbVar31[0xb] = 0;
    pbVar31[0xc] = 0;
    pbVar31[0xd] = 0;
    pbVar31[0xe] = 0;
    pbVar31[0xf] = 0;
    pbVar31 = *(byte **)(pbVar31 + 0x10);
  }
  uVar11 = _UNK_01494d69;
  uVar10 = _UNK_01494d65;
  uVar9 = _UNK_01494d61;
  *(undefined4 *)pbVar31 = _DAT_01494d5d;
  *(undefined4 *)(pbVar31 + 4) = uVar9;
  *(undefined4 *)(pbVar31 + 8) = uVar10;
  *(undefined4 *)(pbVar31 + 0xc) = uVar11;
  pbVar31[0xf] = 0x65;
  pbVar31[0x10] = 0x6e;
  pbVar31[0x11] = 0x74;
  pbVar31[0x12] = 0x3e;
  pbVar31[0x13] = 0;
  lVar25 = *(long *)(pbVar21 + 0xe0);
  pbVar31 = (byte *)(lVar25 + -0xa8);
  *(byte *)(lVar25 + -7) = pbVar21[0x80];
  *(undefined8 *)(lVar25 + -0x30) = 0;
  *(undefined8 *)(lVar25 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar25 + -8) = 0;
LAB_0568a915:
  pbVar29 = *(byte **)(pbVar31 + 0x90);
  if (pbVar29 < *(byte **)(pbVar31 + 0x98)) {
    pbVar29[0x10] = 0;
    pbVar29[0x11] = 0;
    pbVar29[0x12] = 0;
    pbVar29[0x13] = 0;
    pbVar29[0x14] = 0;
    pbVar29[0x15] = 0;
    pbVar29[0x16] = 0;
    pbVar29[0x17] = 0;
    pbVar29[0x18] = 0;
    pbVar29[0x19] = 0;
    pbVar29[0x1a] = 0;
    pbVar29[0x1b] = 0;
    pbVar29[0x1c] = 0;
    pbVar29[0x1d] = 0;
    pbVar29[0x1e] = 0;
    pbVar29[0x1f] = 0;
    pbVar29[0] = 0;
    pbVar29[1] = 0;
    pbVar29[2] = 0;
    pbVar29[3] = 0;
    pbVar29[4] = 0;
    pbVar29[5] = 0;
    pbVar29[6] = 0;
    pbVar29[7] = 0;
    pbVar29[8] = 0;
    pbVar29[9] = 0;
    pbVar29[10] = 0;
    pbVar29[0xb] = 0;
    pbVar29[0xc] = 0;
    pbVar29[0xd] = 0;
    pbVar29[0xe] = 0;
    pbVar29[0xf] = 0;
    pbVar29[0x20] = 0;
    pbVar29[0x21] = 0;
    pbVar29[0x22] = 0;
    pbVar29[0x23] = 0;
    pbVar29[0x24] = 0;
    pbVar29[0x25] = 0;
    pbVar29[0x26] = 0;
    pbVar29[0x27] = 0;
    if (pbVar29 != pbStack_2c0) {
      if ((*puStack_1a0 & 1) == 0) {
        *(undefined8 *)(pbVar29 + 0x18) = *(undefined8 *)(puStack_1a0 + 4);
        uVar24 = *(undefined8 *)(puStack_1a0 + 2);
        *(undefined8 *)(pbVar29 + 8) = *(undefined8 *)puStack_1a0;
        *(undefined8 *)(pbVar29 + 0x10) = uVar24;
      }
      else {
        func_0x04885070(pbVar29 + 8,plVar18[0x14],plVar18[0x13]);
      }
    }
    *(undefined8 *)pbVar29 = *(undefined8 *)pbStack_2c0;
    *(long **)(pbVar29 + 0x28) = plVar23 + 4;
    *(long **)(pbVar29 + 0x30) = plVar23;
    LOCK();
    plVar23[1] = plVar23[1] + 1;
    UNLOCK();
    pbVar29 = pbVar29 + 0x38;
    *(byte **)(pbVar31 + 0x90) = pbVar29;
  }
  else {
    pbVar29 = pbVar29 + -*(long *)(pbVar31 + 0x88);
    uVar33 = ((long)pbVar29 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar33) goto LAB_0568b378;
    lVar25 = (long)*(byte **)(pbVar31 + 0x98) - *(long *)(pbVar31 + 0x88) >> 3;
    uVar16 = lVar25 * -0x2492492492492492;
    if (uVar33 < uVar16) {
      uVar33 = uVar16;
    }
    pbStack_388 = pbVar31 + 0x88;
    if (0x249249249249248 < (ulong)(lVar25 * 0x6db6db6db6db6db7)) {
      uVar33 = 0x492492492492492;
    }
    pbStack_2b8 = pbStack_388;
    if (uVar33 == 0) {
      lVar25 = 0;
    }
    else {
      if (0x492492492492492 < uVar33) goto LAB_0568b373;
      lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar33 * 0x38);
      if (lVar25 == 0) {
        func_0x0eec74c0(uVar33 * 0x38,0);
        lVar25 = 0;
      }
    }
    bStack_3a8 = (byte)lVar25;
    uStack_3a7 = (undefined6)((ulong)lVar25 >> 8);
    uStack_3a1 = (undefined1)((ulong)lVar25 >> 0x38);
    pbVar30 = pbVar29 + lVar25;
    uStack_3a0 = SUB81(pbVar30,0);
    uStack_39f = (undefined6)((ulong)pbVar30 >> 8);
    uStack_399 = (undefined1)((ulong)pbVar30 >> 0x38);
    uStack_390 = uVar33 * 0x38 + lVar25;
    pbVar26 = pbVar29 + lVar25 + 0x10;
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
    pbVar26 = pbVar29 + lVar25;
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
    pbVar26 = pbVar29 + lVar25 + 0x20;
    pbVar26[0] = 0;
    pbVar26[1] = 0;
    pbVar26[2] = 0;
    pbVar26[3] = 0;
    pbVar26[4] = 0;
    pbVar26[5] = 0;
    pbVar26[6] = 0;
    pbVar26[7] = 0;
    pbVar26 = pbVar30;
    pbStack_398 = pbVar30;
    if (pbVar30 != pbStack_2c0) {
      if ((*puStack_1a0 & 1) == 0) {
        *(undefined8 *)(pbVar29 + lVar25 + 0x18) = *(undefined8 *)(puStack_1a0 + 4);
        uVar13 = puStack_1a0[1];
        uVar14 = puStack_1a0[2];
        uVar15 = puStack_1a0[3];
        *(uint *)(pbVar29 + lVar25 + 8) = *puStack_1a0;
        *(uint *)(pbVar29 + lVar25 + 0xc) = uVar13;
        *(uint *)(pbVar29 + lVar25 + 0x10) = uVar14;
        *(uint *)(pbVar29 + lVar25 + 0x14) = uVar15;
      }
      else {
        func_0x04885070(pbVar29 + lVar25 + 8,plVar18[0x14],plVar18[0x13]);
        pbVar26 = (byte *)CONCAT17(uStack_399,CONCAT61(uStack_39f,uStack_3a0));
      }
    }
    *(undefined8 *)pbVar30 = *(undefined8 *)pbStack_2c0;
    *(long **)(pbVar30 + 0x28) = plVar23 + 4;
    *(long **)(pbVar30 + 0x30) = plVar23;
    LOCK();
    plVar23[1] = plVar23[1] + 1;
    UNLOCK();
    pbStack_398 = pbStack_398 + 0x38;
    puVar17 = *(undefined8 **)(pbVar31 + 0x88);
    puVar7 = *(undefined8 **)(pbVar31 + 0x90);
    lVar25 = (long)puVar17 - (long)puVar7;
    pbVar29 = pbVar26 + lVar25;
    puVar27 = puVar17;
    if (lVar25 != 0) {
      do {
        pbVar29[0x10] = 0;
        pbVar29[0x11] = 0;
        pbVar29[0x12] = 0;
        pbVar29[0x13] = 0;
        pbVar29[0x14] = 0;
        pbVar29[0x15] = 0;
        pbVar29[0x16] = 0;
        pbVar29[0x17] = 0;
        pbVar29[0x18] = 0;
        pbVar29[0x19] = 0;
        pbVar29[0x1a] = 0;
        pbVar29[0x1b] = 0;
        pbVar29[0x1c] = 0;
        pbVar29[0x1d] = 0;
        pbVar29[0x1e] = 0;
        pbVar29[0x1f] = 0;
        pbVar29[0] = 0;
        pbVar29[1] = 0;
        pbVar29[2] = 0;
        pbVar29[3] = 0;
        pbVar29[4] = 0;
        pbVar29[5] = 0;
        pbVar29[6] = 0;
        pbVar29[7] = 0;
        pbVar29[8] = 0;
        pbVar29[9] = 0;
        pbVar29[10] = 0;
        pbVar29[0xb] = 0;
        pbVar29[0xc] = 0;
        pbVar29[0xd] = 0;
        pbVar29[0xe] = 0;
        pbVar29[0xf] = 0;
        pbVar29[0x20] = 0;
        pbVar29[0x21] = 0;
        pbVar29[0x22] = 0;
        pbVar29[0x23] = 0;
        pbVar29[0x24] = 0;
        pbVar29[0x25] = 0;
        pbVar29[0x26] = 0;
        pbVar29[0x27] = 0;
        *(undefined8 *)(pbVar29 + 0x18) = puVar27[3];
        uVar24 = puVar27[2];
        *(undefined8 *)(pbVar29 + 8) = puVar27[1];
        *(undefined8 *)(pbVar29 + 0x10) = uVar24;
        *(undefined2 *)(puVar27 + 1) = 0;
        *(undefined8 *)pbVar29 = *puVar27;
        uVar24 = puVar27[6];
        *(undefined8 *)(pbVar29 + 0x28) = puVar27[5];
        *(undefined8 *)(pbVar29 + 0x30) = uVar24;
        puVar27[5] = 0;
        puVar27[6] = 0;
        puVar27 = puVar27 + 7;
        pbVar29 = pbVar29 + 0x38;
      } while (puVar27 != puVar7);
      do {
        plVar1 = (long *)puVar17[6];
        if (plVar1 == (long *)0x0) {
LAB_0568abd4:
          bVar6 = *(byte *)(puVar17 + 1);
        }
        else {
          LOCK();
          plVar20 = plVar1 + 1;
          lVar5 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar5 != 0) goto LAB_0568abd4;
          (**(code **)(*plVar1 + 0x10))(plVar1);
          func_0x0412c2d0(plVar1);
          bVar6 = *(byte *)(puVar17 + 1);
        }
        if ((bVar6 & 1) != 0) {
          func_0x0412a280(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
        }
        puVar17 = puVar17 + 7;
      } while (puVar17 != puVar7);
      puVar17 = *(undefined8 **)pbStack_2b8;
    }
    pbVar29 = pbStack_398;
    *(byte **)(pbVar31 + 0x88) = pbVar26 + lVar25;
    *(byte **)(pbVar31 + 0x90) = pbStack_398;
    lVar25 = *(long *)(pbVar31 + 0x98);
    *(ulong *)(pbVar31 + 0x98) = uStack_390;
    if (puVar17 != (undefined8 *)0x0) {
      func_0x0412a280(puVar17,lVar25 - (long)puVar17);
    }
  }
  *(byte **)(pbVar31 + 0x90) = pbVar29;
  uVar9 = *(undefined4 *)pbVar31;
  uVar10 = *(undefined4 *)(pbVar31 + 4);
  uVar11 = *(undefined4 *)(pbVar31 + 8);
  uVar12 = *(undefined4 *)(pbVar31 + 0xc);
  if (*(long *)(pbVar31 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(pbVar31 + 8) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = (long *)plVar18[0xf];
  *(undefined4 *)(plVar18 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar18 + 0x74) = uVar10;
  *(undefined4 *)(plVar18 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar18 + 0x7c) = uVar12;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar20 = plVar1 + 1;
    lVar25 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  *(byte *)(plVar18 + 0x10) = pbVar31[0xa1];
  LOCK();
  lVar25 = *plStack_198;
  *plStack_198 = *plStack_198 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
  }
  plVar23 = plStack_c0;
  LOCK();
  lVar25 = *plStack_c0;
  *plStack_c0 = *plStack_c0 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    LOCK();
    lVar25 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar25 = *plStack_c0;
    *plStack_c0 = *plStack_c0 + -1;
    UNLOCK();
  }
  if (lVar25 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
  }
  pbVar21 = pbVar21 + 0x130;
  if (puStack_108 != (undefined8 *)0x0) {
    (*(code *)puStack_108[1])(&puStack_108);
  }
  uStack_3a0 = 0;
  uStack_39f = 0;
  uStack_399 = 0;
  puVar17 = (undefined8 *)&UNK_0efd6410;
  bStack_3a8 = 0x10;
  uStack_3a7 = 0xefd64;
  uStack_3a1 = 0;
  if (pbVar21 == &bStack_3a8) goto LAB_0568afd9;
  if (*(long *)pbVar21 == 0) {
LAB_0568ad77:
    (*(code *)*puVar17)(&bStack_3a8,pbVar21);
    uVar24 = CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
  }
  else {
    (**(code **)(*(long *)pbVar21 + 8))(pbVar21);
    puVar17 = (undefined8 *)CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8));
    if (puVar17 != (undefined8 *)0x0) goto LAB_0568ad77;
    uVar24 = 0;
  }
  *(undefined8 *)pbVar21 = uVar24;
LAB_0568afd9:
  if ((uStack_2b0 & 1) != 0) {
    func_0x0412a280(puStack_2a0,uStack_2b0 & 0xfffffffffffffffe);
  }
  bStack_3a8 = 0x1c;
  uStack_3a7 = 0x6f646c6f6f63;
  uStack_3a1 = 0x77;
  uStack_3a0 = 0x6e;
  uStack_39f = 0x65676e61725f;
  uStack_399 = 0;
  plVar18 = (long *)func_0x057031c0(*param_2,0x10,&bStack_3a8);
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  (**(code **)(*plVar18 + 0x18))(plVar18,&uStack_1b8,&uStack_1d8);
  if ((uStack_1d8 & 1) != 0) {
    func_0x0412a280(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
  }
  if ((uStack_1b8 & 1) != 0) {
    func_0x0412a280(uStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
  }
  if ((bStack_3a8 & 1) != 0) {
    func_0x0412a280(pbStack_398,
                    CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8)) & 0xfffffffffffffffe);
  }
  bStack_3a8 = 0x1c;
  uStack_3a7 = 0x697461727564;
  uStack_3a1 = 0x6f;
  uStack_3a0 = 0x6e;
  uStack_39f = 0x65676e61725f;
  uStack_399 = 0;
  plVar18 = (long *)func_0x057031c0(*param_2,8,&bStack_3a8);
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  (**(code **)(*plVar18 + 0x18))(plVar18,&uStack_1f8,&uStack_218);
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,uStack_218 & 0xfffffffffffffffe);
  }
  if ((uStack_1f8 & 1) != 0) {
    func_0x0412a280(uStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
  }
  if ((bStack_3a8 & 1) != 0) {
    func_0x0412a280(pbStack_398,
                    CONCAT17(uStack_3a1,CONCAT61(uStack_3a7,bStack_3a8)) & 0xfffffffffffffffe);
  }
  plVar18 = (long *)func_0x05703ac0(*param_2,0x18,&UNK_0127267d);
  auStack_238[0] = 0;
  auStack_238[1] = 0;
  auStack_238[2] = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,auStack_238);
  if ((auStack_238[0] & 1) != 0) {
    func_0x0412a280(auStack_238[2],auStack_238[0] & 0xfffffffffffffffe);
  }
  plVar18 = (long *)func_0x05703ac0(*param_2,0xf8,&UNK_013dfd9a);
  auStack_258[0] = 0;
  auStack_258[1] = 0;
  auStack_258[2] = 0;
  (**(code **)(*plVar18 + 0x10))(plVar18,auStack_258);
  if ((auStack_258[0] & 1) != 0) {
    func_0x0412a280(auStack_258[2],auStack_258[0] & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1494d5d  <any array element>
 * 0x149584a  minecraft:behavior.timer_flag_1
 * 0x1495859  ior.timer_flag_1
 */
