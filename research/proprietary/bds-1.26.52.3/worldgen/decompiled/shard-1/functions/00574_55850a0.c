/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x56850a0 (ELF vaddr 0x55850a0)
 * Label: caller-of-callee
 * Body:  [[056850a0, 056866d4] [056866e0, 05686cb5] [05686cc0, 05686cfc] [05686d00, 056884cb] [05688aa2, 05688b60] [05688b65, 05688c20] [05688fa8, 05688fba]]
 * Ghidra: FUN_056850a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_056850a0(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  byte *pbVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined4 *puVar21;
  long *plVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long *plVar33;
  byte *pbVar34;
  byte *pbVar35;
  long lVar36;
  byte **ppbVar37;
  byte *pbVar38;
  byte *pbVar39;
  bool bVar40;
  byte *pbStack_458;
  byte *pbStack_450;
  byte *pbStack_448;
  byte *pbStack_440;
  byte *pbStack_438;
  undefined8 uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  undefined8 uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3b9;
  byte *pbStack_3b8;
  byte bStack_3b0;
  undefined5 uStack_3af;
  undefined2 uStack_3aa;
  undefined1 uStack_3a8;
  undefined5 uStack_3a7;
  undefined2 uStack_3a2;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  byte *pbStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  byte *pbStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  byte *pbStack_320;
  undefined8 uStack_318;
  byte *pbStack_2f8;
  ulong uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  byte *pbStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  byte bStack_2b0;
  undefined7 uStack_2af;
  undefined1 uStack_2a8;
  undefined1 uStack_2a7;
  undefined8 uStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined4 *puStack_288;
  byte bStack_280;
  undefined7 uStack_27f;
  undefined1 uStack_278;
  undefined1 uStack_277;
  undefined8 uStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  byte bStack_258;
  undefined7 uStack_257;
  undefined8 uStack_248;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined8 uStack_230;
  byte bStack_228;
  undefined7 uStack_227;
  undefined8 uStack_218;
  byte bStack_210;
  undefined7 uStack_20f;
  undefined8 uStack_200;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  byte *pbStack_1e8;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint *puStack_158;
  byte *pbStack_150;
  byte bStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined5 uStack_145;
  undefined8 uStack_138;
  byte bStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined5 uStack_12d;
  undefined8 uStack_120;
  byte bStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined5 uStack_115;
  undefined8 uStack_108;
  byte bStack_100;
  undefined1 uStack_ff;
  undefined6 uStack_fe;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
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
  
  puStack_288 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_288 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar29 = _UNK_012a49db;
  uStack_298 = 0x29;
  uStack_290 = 0x24;
  *(undefined8 *)(puStack_288 + 4) = _DAT_012a49d3;
  *(undefined8 *)(puStack_288 + 6) = uVar29;
  uVar13 = _UNK_012a49cf;
  uVar12 = _UNK_012a49cb;
  uVar11 = _UNK_012a49c7;
  *puStack_288 = _DAT_012a49c3;
  puStack_288[1] = uVar11;
  puStack_288[2] = uVar12;
  puStack_288[3] = uVar13;
  puStack_288[8] = 0x72656e77;
  *(undefined1 *)(puStack_288 + 9) = 0;
  bStack_280 = 0x10;
  uStack_27f = 0x7469726f697270;
  uStack_278 = 0x79;
  uStack_277 = 0;
  bStack_118 = 2;
  uStack_117 = 0x30;
  uStack_116 = 0;
  bStack_130 = 2;
  uStack_12f = 0x30;
  uStack_12e = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  func_0x0564aad0(&pbStack_268,&uStack_298,&bStack_280,0,&bStack_118,0,&bStack_130,&bStack_e8);
  uStack_c0 = param_2;
  uVar29 = *param_1;
  uStack_2f0 = 0;
  if ((uStack_1f8 & 1) == 0) {
    pbStack_2d8 = pbStack_1e8;
    uStack_2e8 = uStack_1f8;
    uStack_2e4 = uStack_1f4;
    uStack_2e0 = uStack_1f0;
    uStack_2dc = uStack_1ec;
  }
  else {
    func_0x0412e5e0(&uStack_2e8,pbStack_1e8,CONCAT44(uStack_1ec,uStack_1f0));
  }
  uStack_2d0 = 0;
  if ((uStack_2e8 & 1) == 0) {
    if ((byte)uStack_2e8 >> 1 != 0) goto LAB_05685235;
LAB_05685326:
    uVar26 = 0;
  }
  else {
    if (CONCAT44(uStack_2dc,uStack_2e0) == 0) goto LAB_05685326;
LAB_05685235:
    if ((uStack_2e8 & 1) == 0) {
      pbVar23 = (byte *)((long)&uStack_2e8 + 1);
      if (pbVar23 != (byte *)0x0) goto LAB_0568525c;
      goto LAB_05685326;
    }
    pbVar23 = pbStack_2d8;
    if (pbStack_2d8 == (byte *)0x0) goto LAB_05685326;
LAB_0568525c:
    if (*pbVar23 == 0) goto LAB_05685326;
    uVar26 = 0xcbf29ce484222325;
    uVar18 = func_0x0eee2e90(pbVar23);
    if (uVar18 != 0) {
      uVar32 = (ulong)((uint)uVar18 & 7);
      if (7 < uVar18) {
        uVar18 = uVar18 & 0xfffffffffffffff8;
        do {
          uVar26 = (((((((uVar26 * 0x100000001b3 ^ (ulong)*pbVar23) * 0x100000001b3 ^
                        (ulong)pbVar23[1]) * 0x100000001b3 ^ (ulong)pbVar23[2]) * 0x100000001b3 ^
                      (ulong)pbVar23[3]) * 0x100000001b3 ^ (ulong)pbVar23[4]) * 0x100000001b3 ^
                    (ulong)pbVar23[5]) * 0x100000001b3 ^ (ulong)pbVar23[6]) * 0x100000001b3 ^
                   (ulong)pbVar23[7];
          pbVar23 = pbVar23 + 8;
          uVar18 = uVar18 - 8;
        } while (uVar18 != 0);
      }
      if (uVar32 != 0) {
        uVar18 = 0;
        do {
          uVar26 = uVar26 * 0x100000001b3 ^ (ulong)pbVar23[uVar18];
          uVar18 = uVar18 + 1;
        } while (uVar32 != uVar18);
      }
    }
  }
  pbStack_458 = (byte *)0x0;
  uStack_2f0 = uVar26;
  func_0x0564b850(&pbStack_450,&pbStack_268);
  uStack_330 = (undefined8 *)0x0;
  pbStack_338 = &UNK_0efd58a0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar19 = pbStack_458;
  puVar19[1] = pbStack_450;
  puVar19[5] = uStack_430;
  puVar19[3] = pbStack_440;
  puVar19[4] = pbStack_438;
  pbStack_440 = (byte *)0x0;
  pbStack_438 = (byte *)0x0;
  uStack_430 = 0;
  puVar19[8] = uStack_418;
  puVar19[6] = uStack_428;
  puVar19[7] = uStack_420;
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  puVar19[0xb] = uStack_400;
  puVar19[9] = uStack_410;
  puVar19[10] = uStack_408;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_400 = 0;
  puVar19[0xe] = uStack_3e8;
  puVar19[0xc] = uStack_3f8;
  puVar19[0xd] = uStack_3f0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  puVar19[0x11] = uStack_3d0;
  *(undefined4 *)(puVar19 + 0xf) = (undefined4)uStack_3e0;
  *(undefined4 *)((long)puVar19 + 0x7c) = uStack_3e0._4_4_;
  *(undefined4 *)(puVar19 + 0x10) = (undefined4)uStack_3d8;
  *(undefined4 *)((long)puVar19 + 0x84) = uStack_3d8._4_4_;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  pbStack_378 = (byte *)0x0;
  puStack_370 = (undefined8 *)0x0;
  uStack_330 = puVar19;
  if (pbStack_338 == (byte *)0x0) {
    pbVar23 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_338)(&pbStack_338,&pbStack_378);
    pbVar23 = pbStack_338;
  }
  pbStack_338 = (byte *)0x0;
  pbStack_378 = pbVar23;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efd56d0;
  pbStack_3b8 = (byte *)0x0;
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  if (pbVar23 == (byte *)0x0) {
    pbStack_3b8 = (byte *)0x0;
  }
  else {
    (**(code **)pbVar23)(&pbStack_378,&pbStack_3b8);
    pbStack_3b8 = pbStack_378;
  }
  pbStack_378 = (byte *)0x0;
  plVar20[4] = (long)&UNK_0f2ccd78;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[10] = 0;
  plVar20[0xb] = 0;
  plVar20[0xc] = 0;
  *(undefined1 *)(plVar20 + 0xd) = 0;
  func_0x04aa75f0(plVar20 + 0xe,&uStack_3b9,&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  plVar33 = plVar20 + 0x11;
  plVar20[0x11] = 0;
  plVar20[0x12] = 0;
  plVar20[0x13] = 0;
  plVar20[0x14] = 0;
  plVar20[0x15] = 0;
  plVar20[0x16] = 0;
  plVar20[0x17] = 0xffffffff;
  plVar20[0x26] = 0;
  plVar20[0x27] = 0;
  plVar20[0x18] = 0;
  plVar20[0x19] = 0;
  plVar20[0x1a] = 0;
  plVar20[0x1b] = 0;
  plVar20[0x1c] = 0;
  plVar20[0x1d] = 0;
  plVar20[0x1e] = 0;
  plVar20[0x1f] = 0;
  plVar20[4] = (long)&UNK_0efd5720;
  plVar20[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar20 + 0x2f) = 1;
  plVar20[0x30] = 0;
  plVar20[0x31] = 0;
  if (pbStack_3b8 == (byte *)0x0) {
    pbVar23 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_3b8)(&pbStack_3b8,plVar20 + 0x30);
    pbVar23 = pbStack_3b8;
  }
  pbStack_3b8 = (byte *)0x0;
  plVar20[0x30] = (long)pbVar23;
  puVar1 = (uint *)(plVar20 + 0x12);
  if (plVar33 == (long *)&DAT_0f552078) {
    plVar20[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar20[0x14] = _DAT_0f552090;
        uVar13 = uRam000000000f55208c;
        uVar12 = _DAT_0f552088;
        uVar11 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar11;
        *(undefined4 *)(plVar20 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar40 = (_DAT_0f552080 & 1) != 0;
      lVar30 = 0xf552081;
      if (bVar40) {
        lVar30 = _DAT_0f552090;
      }
      uVar26 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar40) {
        uVar26 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar1,lVar30,uVar26);
    }
    plVar20[0x11] = _DAT_0f552078;
    plVar20[0x15] = 0;
    if (pbStack_3b8 != (byte *)0x0) {
      (**(code **)(pbStack_3b8 + 8))(&pbStack_3b8);
    }
  }
  plVar3 = plVar20 + 1;
  if (pbStack_378 != (byte *)0x0) {
    (**(code **)(pbStack_378 + 8))(&pbStack_378);
  }
  LOCK();
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = &UNK_0efd5800;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[4] = &UNK_0efd5850;
  puVar19[0xe] = plVar20 + 4;
  puVar19[0xf] = plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  bStack_3b0 = (byte)puVar19;
  uStack_3af = (undefined5)((ulong)puVar19 >> 8);
  uStack_3aa = (undefined2)((ulong)puVar19 >> 0x30);
  pbStack_3b8 = (byte *)(puVar19 + 4);
  puVar21 = (undefined4 *)func_0x056ce220(uVar29,&uStack_2f0);
  plVar22 = *(long **)(puVar21 + 0x24);
  if (plVar22 < *(long **)(puVar21 + 0x26)) {
    plVar22[2] = 0;
    plVar22[3] = 0;
    *plVar22 = 0;
    plVar22[1] = 0;
    plVar22[4] = 0;
    if (plVar22 != plVar33) {
      if ((*puVar1 & 1) == 0) {
        plVar22[3] = plVar20[0x14];
        lVar30 = plVar20[0x13];
        plVar22[1] = *(long *)puVar1;
        plVar22[2] = lVar30;
      }
      else {
        func_0x04885070(plVar22 + 1,plVar20[0x14],plVar20[0x13]);
      }
    }
    *plVar22 = *plVar33;
    plVar22[5] = (long)(puVar19 + 4);
    plVar22[6] = (long)puVar19;
    LOCK();
    puVar19[1] = puVar19[1] + 1;
    UNLOCK();
    plVar22 = plVar22 + 7;
    *(long **)(puVar21 + 0x24) = plVar22;
  }
  else {
    plVar22 = (long *)func_0x056d0030(puVar21 + 0x22,plVar33,&pbStack_3b8);
  }
  *(long **)(puVar21 + 0x24) = plVar22;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar33 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar33 = *plVar33 + 1;
    UNLOCK();
  }
  plVar33 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar12;
  *(undefined4 *)(plVar20 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar14;
  if (plVar33 != (long *)0x0) {
    LOCK();
    plVar22 = plVar33 + 1;
    lVar30 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
      func_0x0412c2d0(plVar33);
    }
  }
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  plVar33 = (long *)CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0));
  if (plVar33 != (long *)0x0) {
    LOCK();
    plVar22 = plVar33 + 1;
    lVar30 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
      func_0x0412c2d0(plVar33);
    }
  }
  LOCK();
  lVar30 = *plVar3;
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar30 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_338 != (byte *)0x0) {
    (**(code **)(pbStack_338 + 8))(&pbStack_338);
  }
  if ((uStack_3e0 & 1) != 0) {
    func_0x0412a280(uStack_3d0,uStack_3e0 & 0xfffffffffffffffe);
  }
  if ((uStack_3f8 & 1) != 0) {
    func_0x0412a280(uStack_3e8,uStack_3f8 & 0xfffffffffffffffe);
  }
  if ((uStack_410 & 1) != 0) {
    func_0x0412a280(uStack_400,uStack_410 & 0xfffffffffffffffe);
  }
  if ((uStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_440 & 1) != 0) {
    func_0x0412a280(uStack_430,(ulong)pbStack_440 & 0xfffffffffffffffe);
  }
  if ((uStack_2e8 & 1) != 0) {
    func_0x0412a280(pbStack_2d8,CONCAT44(uStack_2e4,uStack_2e8) & 0xfffffffffffffffe);
  }
  pbStack_458 = (byte *)0x0;
  pbStack_450 = (byte *)((ulong)pbStack_450 & 0xffffffffffffff00);
  func_0x0564b850(&pbStack_448,&pbStack_268);
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  pbStack_3b8 = &UNK_0efd58b8;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  ppbVar37 = (byte **)(plVar20 + 0x26);
  *(undefined1 *)(puVar19 + 1) = pbStack_450._0_1_;
  *puVar19 = pbStack_458;
  puVar19[2] = pbStack_448;
  puVar19[6] = uStack_428;
  puVar19[4] = pbStack_438;
  puVar19[5] = uStack_430;
  pbStack_438 = (byte *)0x0;
  uStack_430 = 0;
  uStack_428 = 0;
  puVar19[9] = uStack_410;
  puVar19[7] = uStack_420;
  puVar19[8] = uStack_418;
  uStack_420 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  puVar19[0xc] = uStack_3f8;
  puVar19[10] = uStack_408;
  puVar19[0xb] = uStack_400;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  puVar19[0xf] = uStack_3e0;
  puVar19[0xd] = uStack_3f0;
  puVar19[0xe] = uStack_3e8;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  puVar19[0x12] = uStack_3c8;
  *(undefined4 *)(puVar19 + 0x10) = (undefined4)uStack_3d8;
  *(undefined4 *)((long)puVar19 + 0x84) = uStack_3d8._4_4_;
  *(undefined4 *)(puVar19 + 0x11) = (undefined4)uStack_3d0;
  *(undefined4 *)((long)puVar19 + 0x8c) = uStack_3d0._4_4_;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  bStack_3b0 = (byte)puVar19;
  uStack_3af = (undefined5)((ulong)puVar19 >> 8);
  uStack_3aa = (undefined2)((ulong)puVar19 >> 0x30);
  if (ppbVar37 == &pbStack_3b8) {
    func_0x0564b7b0(puVar19 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar19);
  }
  else {
    pbVar23 = &UNK_0efd58b8;
    if ((*ppbVar37 == (byte *)0x0) ||
       ((**(code **)(*ppbVar37 + 8))(ppbVar37), pbVar23 = pbStack_3b8, pbStack_3b8 != (byte *)0x0))
    {
      (**(code **)pbVar23)(&pbStack_3b8,ppbVar37);
      pbVar23 = pbStack_3b8;
      pbStack_3b8 = (byte *)0x0;
      *ppbVar37 = pbVar23;
    }
    else {
      pbStack_3b8 = (byte *)0x0;
      *ppbVar37 = (byte *)0x0;
    }
  }
  if ((uStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,uStack_3d8 & 0xfffffffffffffffe);
  }
  if ((uStack_3f0 & 1) != 0) {
    func_0x0412a280(uStack_3e0,uStack_3f0 & 0xfffffffffffffffe);
  }
  if ((uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,uStack_408 & 0xfffffffffffffffe);
  }
  if ((uStack_420 & 1) != 0) {
    func_0x0412a280(uStack_410,uStack_420 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,(ulong)pbStack_438 & 0xfffffffffffffffe);
  }
  if ((uStack_1f8 & 1) != 0) {
    func_0x0412a280(pbStack_1e8,CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
  }
  if ((bStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,CONCAT71(uStack_20f,bStack_210) & 0xfffffffffffffffe);
  }
  if ((bStack_228 & 1) != 0) {
    func_0x0412a280(uStack_218,CONCAT71(uStack_227,bStack_228) & 0xfffffffffffffffe);
  }
  if ((bStack_240 & 1) != 0) {
    func_0x0412a280(uStack_230,CONCAT71(uStack_23f,bStack_240) & 0xfffffffffffffffe);
  }
  if ((bStack_258 & 1) != 0) {
    func_0x0412a280(uStack_248,CONCAT71(uStack_257,bStack_258) & 0xfffffffffffffffe);
  }
  if ((bStack_e8 & 1) != 0) {
    func_0x0412a280(uStack_d8,CONCAT62(uStack_e6,CONCAT11(uStack_e7,bStack_e8)) & 0xfffffffffffffffe
                   );
  }
  if ((bStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,
                    CONCAT53(uStack_12d,CONCAT12(uStack_12e,CONCAT11(uStack_12f,bStack_130))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_118 & 1) != 0) {
    func_0x0412a280(uStack_108,
                    CONCAT53(uStack_115,CONCAT12(uStack_116,CONCAT11(uStack_117,bStack_118))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_280 & 1) != 0) {
    func_0x0412a280(uStack_270,CONCAT71(uStack_27f,bStack_280) & 0xfffffffffffffffe);
  }
  uVar29 = *param_1;
  uStack_3a2 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  bStack_3b0 = 0x1a;
  uStack_3af = 0x72746e6f63;
  uStack_3aa = 0x6c6f;
  uStack_3a8 = 0x5f;
  uStack_3a7 = 0x7367616c66;
  pbStack_3b8 = (byte *)0x86e3afe1b1c6e2ac;
  puStack_370 = (undefined8 *)0x0;
  pbStack_378 = &UNK_0efd5ac8;
  pbVar23 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar23 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pbVar23[8] = 0;
  pbVar23[9] = 0;
  pbVar23[10] = 0;
  pbVar23[0xb] = 0;
  pbVar23[0xc] = 0;
  pbVar23[0xd] = 0;
  pbVar23[0xe] = 0;
  pbVar23[0xf] = 0;
  pbVar23[0x10] = 0;
  pbVar23[0x11] = 0;
  pbVar23[0x12] = 0;
  pbVar23[0x13] = 0;
  pbVar23[0x14] = 0;
  pbVar23[0x15] = 0;
  pbVar23[0x16] = 0;
  pbVar23[0x17] = 0;
  *(undefined **)pbVar23 = &UNK_0efd58e0;
  pbStack_458 = (byte *)0x0;
  pbStack_450 = (byte *)0x0;
  if (pbStack_378 == (byte *)0x0) {
    pbStack_458 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_378)(&pbStack_378,&pbStack_458);
    pbStack_458 = pbStack_378;
  }
  pbStack_378 = (byte *)0x0;
  *(undefined **)(pbVar23 + 0x20) = &UNK_0f2ccd78;
  pbVar23[0x28] = 0;
  pbVar23[0x29] = 0;
  pbVar23[0x2a] = 0;
  pbVar23[0x2b] = 0;
  pbVar23[0x2c] = 0;
  pbVar23[0x2d] = 0;
  pbVar23[0x2e] = 0;
  pbVar23[0x2f] = 0;
  pbVar23[0x30] = 0;
  pbVar23[0x31] = 0;
  pbVar23[0x32] = 0;
  pbVar23[0x33] = 0;
  pbVar23[0x34] = 0;
  pbVar23[0x35] = 0;
  pbVar23[0x36] = 0;
  pbVar23[0x37] = 0;
  pbVar23[0x38] = 0;
  pbVar23[0x39] = 0;
  pbVar23[0x3a] = 0;
  pbVar23[0x3b] = 0;
  pbVar23[0x3c] = 0;
  pbVar23[0x3d] = 0;
  pbVar23[0x3e] = 0;
  pbVar23[0x3f] = 0;
  pbVar23[0x40] = 0;
  pbVar23[0x41] = 0;
  pbVar23[0x42] = 0;
  pbVar23[0x43] = 0;
  pbVar23[0x44] = 0;
  pbVar23[0x45] = 0;
  pbVar23[0x46] = 0;
  pbVar23[0x47] = 0;
  pbVar23[0x48] = 0;
  pbVar23[0x49] = 0;
  pbVar23[0x4a] = 0;
  pbVar23[0x4b] = 0;
  pbVar23[0x4c] = 0;
  pbVar23[0x4d] = 0;
  pbVar23[0x4e] = 0;
  pbVar23[0x4f] = 0;
  pbVar23[0x50] = 0;
  pbVar23[0x51] = 0;
  pbVar23[0x52] = 0;
  pbVar23[0x53] = 0;
  pbVar23[0x54] = 0;
  pbVar23[0x55] = 0;
  pbVar23[0x56] = 0;
  pbVar23[0x57] = 0;
  pbVar23[0x58] = 0;
  pbVar23[0x59] = 0;
  pbVar23[0x5a] = 0;
  pbVar23[0x5b] = 0;
  pbVar23[0x5c] = 0;
  pbVar23[0x5d] = 0;
  pbVar23[0x5e] = 0;
  pbVar23[0x5f] = 0;
  pbVar23[0x60] = 0;
  pbVar23[0x61] = 0;
  pbVar23[0x62] = 0;
  pbVar23[99] = 0;
  pbVar23[100] = 0;
  pbVar23[0x65] = 0;
  pbVar23[0x66] = 0;
  pbVar23[0x67] = 0;
  pbVar23[0x68] = 0;
  func_0x04aa75f0(pbVar23 + 0x70,&pbStack_338,&UNK_01254d89);
  pbVar23[0x80] = 0;
  pbVar38 = pbVar23 + 0x88;
  pbVar23[0x88] = 0;
  pbVar23[0x89] = 0;
  pbVar23[0x8a] = 0;
  pbVar23[0x8b] = 0;
  pbVar23[0x8c] = 0;
  pbVar23[0x8d] = 0;
  pbVar23[0x8e] = 0;
  pbVar23[0x8f] = 0;
  pbVar23[0x90] = 0;
  pbVar23[0x91] = 0;
  pbVar23[0x92] = 0;
  pbVar23[0x93] = 0;
  pbVar23[0x94] = 0;
  pbVar23[0x95] = 0;
  pbVar23[0x96] = 0;
  pbVar23[0x97] = 0;
  pbVar23[0x98] = 0;
  pbVar23[0x99] = 0;
  pbVar23[0x9a] = 0;
  pbVar23[0x9b] = 0;
  pbVar23[0x9c] = 0;
  pbVar23[0x9d] = 0;
  pbVar23[0x9e] = 0;
  pbVar23[0x9f] = 0;
  pbVar23[0xa0] = 0;
  pbVar23[0xa1] = 0;
  pbVar23[0xa2] = 0;
  pbVar23[0xa3] = 0;
  pbVar23[0xa4] = 0;
  pbVar23[0xa5] = 0;
  pbVar23[0xa6] = 0;
  pbVar23[0xa7] = 0;
  pbVar23[0xa8] = 0;
  pbVar23[0xa9] = 0;
  pbVar23[0xaa] = 0;
  pbVar23[0xab] = 0;
  pbVar23[0xac] = 0;
  pbVar23[0xad] = 0;
  pbVar23[0xae] = 0;
  pbVar23[0xaf] = 0;
  pbVar23[0xb0] = 0;
  pbVar23[0xb1] = 0;
  pbVar23[0xb2] = 0;
  pbVar23[0xb3] = 0;
  pbVar23[0xb4] = 0;
  pbVar23[0xb5] = 0;
  pbVar23[0xb6] = 0;
  pbVar23[0xb7] = 0;
  pbVar23[0xb8] = 0xff;
  pbVar23[0xb9] = 0xff;
  pbVar23[0xba] = 0xff;
  pbVar23[0xbb] = 0xff;
  pbVar23[0xbc] = 0;
  pbVar23[0xbd] = 0;
  pbVar23[0xbe] = 0;
  pbVar23[0xbf] = 0;
  pbVar23[0x130] = 0;
  pbVar23[0x131] = 0;
  pbVar23[0x132] = 0;
  pbVar23[0x133] = 0;
  pbVar23[0x134] = 0;
  pbVar23[0x135] = 0;
  pbVar23[0x136] = 0;
  pbVar23[0x137] = 0;
  pbVar23[0x138] = 0;
  pbVar23[0x139] = 0;
  pbVar23[0x13a] = 0;
  pbVar23[0x13b] = 0;
  pbVar23[0x13c] = 0;
  pbVar23[0x13d] = 0;
  pbVar23[0x13e] = 0;
  pbVar23[0x13f] = 0;
  pbVar23[0xc0] = 0;
  pbVar23[0xc1] = 0;
  pbVar23[0xc2] = 0;
  pbVar23[0xc3] = 0;
  pbVar23[0xc4] = 0;
  pbVar23[0xc5] = 0;
  pbVar23[0xc6] = 0;
  pbVar23[199] = 0;
  pbVar23[200] = 0;
  pbVar23[0xc9] = 0;
  pbVar23[0xca] = 0;
  pbVar23[0xcb] = 0;
  pbVar23[0xcc] = 0;
  pbVar23[0xcd] = 0;
  pbVar23[0xce] = 0;
  pbVar23[0xcf] = 0;
  pbVar23[0xd0] = 0;
  pbVar23[0xd1] = 0;
  pbVar23[0xd2] = 0;
  pbVar23[0xd3] = 0;
  pbVar23[0xd4] = 0;
  pbVar23[0xd5] = 0;
  pbVar23[0xd6] = 0;
  pbVar23[0xd7] = 0;
  pbVar23[0xd8] = 0;
  pbVar23[0xd9] = 0;
  pbVar23[0xda] = 0;
  pbVar23[0xdb] = 0;
  pbVar23[0xdc] = 0;
  pbVar23[0xdd] = 0;
  pbVar23[0xde] = 0;
  pbVar23[0xdf] = 0;
  pbVar23[0xe0] = 0;
  pbVar23[0xe1] = 0;
  pbVar23[0xe2] = 0;
  pbVar23[0xe3] = 0;
  pbVar23[0xe4] = 0;
  pbVar23[0xe5] = 0;
  pbVar23[0xe6] = 0;
  pbVar23[0xe7] = 0;
  pbVar23[0xe8] = 0;
  pbVar23[0xe9] = 0;
  pbVar23[0xea] = 0;
  pbVar23[0xeb] = 0;
  pbVar23[0xec] = 0;
  pbVar23[0xed] = 0;
  pbVar23[0xee] = 0;
  pbVar23[0xef] = 0;
  pbVar23[0xf0] = 0;
  pbVar23[0xf1] = 0;
  pbVar23[0xf2] = 0;
  pbVar23[0xf3] = 0;
  pbVar23[0xf4] = 0;
  pbVar23[0xf5] = 0;
  pbVar23[0xf6] = 0;
  pbVar23[0xf7] = 0;
  pbVar23[0xf8] = 0;
  pbVar23[0xf9] = 0;
  pbVar23[0xfa] = 0;
  pbVar23[0xfb] = 0;
  pbVar23[0xfc] = 0;
  pbVar23[0xfd] = 0;
  pbVar23[0xfe] = 0;
  pbVar23[0xff] = 0;
  *(undefined **)(pbVar23 + 0x20) = &UNK_0efd5930;
  ppbVar37 = (byte **)(pbVar23 + 0x170);
  pbVar23[0x170] = 0;
  pbVar23[0x171] = 0;
  pbVar23[0x172] = 0;
  pbVar23[0x173] = 0;
  pbVar23[0x174] = 0;
  pbVar23[0x175] = 0;
  pbVar23[0x176] = 0;
  pbVar23[0x177] = 0;
  pbVar23[0x178] = 0;
  pbVar23[0x179] = 0;
  pbVar23[0x17a] = 0;
  pbVar23[0x17b] = 0;
  pbVar23[0x17c] = 0;
  pbVar23[0x17d] = 0;
  pbVar23[0x17e] = 0;
  pbVar23[0x17f] = 0;
  if (ppbVar37 != &pbStack_458) {
    if (pbStack_458 == (byte *)0x0) {
      pbVar25 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_458)(&pbStack_458,ppbVar37);
      pbVar25 = pbStack_458;
    }
    pbStack_458 = (byte *)0x0;
    *ppbVar37 = pbVar25;
  }
  puVar1 = (uint *)(pbVar23 + 0x90);
  if (pbVar38 != &DAT_0f551f58) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(long *)(pbVar23 + 0xa0) = _DAT_0f551f70;
        uVar13 = uRam000000000f551f6c;
        uVar12 = _DAT_0f551f68;
        uVar11 = uRam000000000f551f64;
        *puVar1 = _DAT_0f551f60;
        *(undefined4 *)(pbVar23 + 0x94) = uVar11;
        *(undefined4 *)(pbVar23 + 0x98) = uVar12;
        *(undefined4 *)(pbVar23 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar40 = (_DAT_0f551f60 & 1) != 0;
      lVar30 = 0xf551f61;
      if (bVar40) {
        lVar30 = _DAT_0f551f70;
      }
      uVar26 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar40) {
        uVar26 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar1,lVar30,uVar26);
    }
  }
  pbVar25 = pbVar23 + 8;
  *(long *)(pbVar23 + 0x88) = _DAT_0f551f58;
  pbVar23[0xa8] = 0;
  pbVar23[0xa9] = 0;
  pbVar23[0xaa] = 0;
  pbVar23[0xab] = 0;
  pbVar23[0xac] = 0;
  pbVar23[0xad] = 0;
  pbVar23[0xae] = 0;
  pbVar23[0xaf] = 0;
  if (pbStack_458 != (byte *)0x0) {
    (**(code **)(pbStack_458 + 8))(&pbStack_458);
  }
  LOCK();
  *(long *)pbVar25 = *(long *)pbVar25 + 1;
  UNLOCK();
  pbVar24 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar24 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar24[8] = 0;
  pbVar24[9] = 0;
  pbVar24[10] = 0;
  pbVar24[0xb] = 0;
  pbVar24[0xc] = 0;
  pbVar24[0xd] = 0;
  pbVar24[0xe] = 0;
  pbVar24[0xf] = 0;
  pbVar24[0x10] = 0;
  pbVar24[0x11] = 0;
  pbVar24[0x12] = 0;
  pbVar24[0x13] = 0;
  pbVar24[0x14] = 0;
  pbVar24[0x15] = 0;
  pbVar24[0x16] = 0;
  pbVar24[0x17] = 0;
  *(undefined **)pbVar24 = &UNK_0efd5a28;
  pbVar24[0x30] = 0;
  pbVar24[0x31] = 0;
  pbVar24[0x32] = 0;
  pbVar24[0x33] = 0;
  pbVar24[0x34] = 0;
  pbVar24[0x35] = 0;
  pbVar24[0x36] = 0;
  pbVar24[0x37] = 0;
  pbVar24[0x38] = 0;
  pbVar24[0x39] = 0;
  pbVar24[0x3a] = 0;
  pbVar24[0x3b] = 0;
  pbVar24[0x3c] = 0;
  pbVar24[0x3d] = 0;
  pbVar24[0x3e] = 0;
  pbVar24[0x3f] = 0;
  *(undefined **)(pbVar24 + 0x20) = &UNK_0efd5a78;
  *(byte **)(pbVar24 + 0x70) = pbVar23 + 0x20;
  *(byte **)(pbVar24 + 0x78) = pbVar23;
  LOCK();
  *(long *)(pbVar23 + 8) = *(long *)(pbVar23 + 8) + 1;
  UNLOCK();
  pbStack_458 = pbVar24 + 0x20;
  pbStack_450 = pbVar24;
  puVar21 = (undefined4 *)func_0x056ce220(uVar29,&pbStack_3b8);
  pbVar35 = *(byte **)(puVar21 + 0x24);
  if (pbVar35 < *(byte **)(puVar21 + 0x26)) {
    pbVar35[0x10] = 0;
    pbVar35[0x11] = 0;
    pbVar35[0x12] = 0;
    pbVar35[0x13] = 0;
    pbVar35[0x14] = 0;
    pbVar35[0x15] = 0;
    pbVar35[0x16] = 0;
    pbVar35[0x17] = 0;
    pbVar35[0x18] = 0;
    pbVar35[0x19] = 0;
    pbVar35[0x1a] = 0;
    pbVar35[0x1b] = 0;
    pbVar35[0x1c] = 0;
    pbVar35[0x1d] = 0;
    pbVar35[0x1e] = 0;
    pbVar35[0x1f] = 0;
    pbVar35[0] = 0;
    pbVar35[1] = 0;
    pbVar35[2] = 0;
    pbVar35[3] = 0;
    pbVar35[4] = 0;
    pbVar35[5] = 0;
    pbVar35[6] = 0;
    pbVar35[7] = 0;
    pbVar35[8] = 0;
    pbVar35[9] = 0;
    pbVar35[10] = 0;
    pbVar35[0xb] = 0;
    pbVar35[0xc] = 0;
    pbVar35[0xd] = 0;
    pbVar35[0xe] = 0;
    pbVar35[0xf] = 0;
    pbVar35[0x20] = 0;
    pbVar35[0x21] = 0;
    pbVar35[0x22] = 0;
    pbVar35[0x23] = 0;
    pbVar35[0x24] = 0;
    pbVar35[0x25] = 0;
    pbVar35[0x26] = 0;
    pbVar35[0x27] = 0;
    if (pbVar35 != pbVar38) {
      if ((*puVar1 & 1) == 0) {
        *(long *)(pbVar35 + 0x18) = *(long *)(pbVar23 + 0xa0);
        lVar30 = *(long *)(pbVar23 + 0x98);
        *(long *)(pbVar35 + 8) = *(long *)puVar1;
        *(long *)(pbVar35 + 0x10) = lVar30;
      }
      else {
        func_0x04885070(pbVar35 + 8,*(long *)(pbVar23 + 0xa0),*(long *)(pbVar23 + 0x98));
      }
    }
    *(long *)pbVar35 = *(long *)pbVar38;
    *(byte **)(pbVar35 + 0x28) = pbVar24 + 0x20;
    *(byte **)(pbVar35 + 0x30) = pbVar24;
    LOCK();
    *(long *)(pbVar24 + 8) = *(long *)(pbVar24 + 8) + 1;
    UNLOCK();
    pbVar35 = pbVar35 + 0x38;
    *(byte **)(puVar21 + 0x24) = pbVar35;
  }
  else {
    pbVar35 = (byte *)func_0x056d0030(puVar21 + 0x22,pbVar38,&pbStack_458);
  }
  *(byte **)(puVar21 + 0x24) = pbVar35;
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
  plVar20 = *(long **)(pbVar23 + 0x78);
  *(undefined4 *)(pbVar23 + 0x70) = uVar11;
  *(undefined4 *)(pbVar23 + 0x74) = uVar12;
  *(undefined4 *)(pbVar23 + 0x78) = uVar13;
  *(undefined4 *)(pbVar23 + 0x7c) = uVar14;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar33 = plVar20 + 1;
    lVar30 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  pbVar38 = pbStack_450;
  pbVar23[0x80] = *(byte *)((long)puVar21 + 0xa1);
  if (pbStack_450 != (byte *)0x0) {
    LOCK();
    pbVar24 = pbStack_450 + 8;
    lVar30 = *(long *)pbVar24;
    *(long *)pbVar24 = *(long *)pbVar24 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbStack_450 + 0x10))(pbStack_450);
      func_0x0412c2d0(pbVar38);
    }
  }
  LOCK();
  lVar30 = *(long *)pbVar25;
  *(long *)pbVar25 = *(long *)pbVar25 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*(long *)pbVar23 + 0x10))(pbVar23);
    func_0x0412c2d0(pbVar23);
    LOCK();
    lVar30 = *(long *)pbVar25;
    *(long *)pbVar25 = *(long *)pbVar25 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *(long *)pbVar25;
    *(long *)pbVar25 = *(long *)pbVar25 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*(long *)pbVar23 + 0x10))(pbVar23);
    func_0x0412c2d0(pbVar23);
  }
  if (pbStack_378 != (byte *)0x0) {
    (**(code **)(pbStack_378 + 8))(&pbStack_378);
  }
  if ((bStack_3b0 & 1) != 0) {
    func_0x0412a280(uStack_3a0,
                    CONCAT26(uStack_3aa,CONCAT51(uStack_3af,bStack_3b0)) & 0xfffffffffffffffe);
  }
  uStack_330 = (undefined8 *)0x0;
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  pbStack_338 = (byte *)0x0;
  pbStack_3b8 = &UNK_0efd5d18;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  pbStack_458 = pbStack_3b8;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efd5af0;
  pbStack_450 = (byte *)0x0;
  pbStack_3b8 = (byte *)0x0;
  plVar20[4] = (long)&UNK_0f2ccd78;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[10] = 0;
  plVar20[0xb] = 0;
  plVar20[0xc] = 0;
  *(undefined1 *)(plVar20 + 0xd) = 0;
  func_0x04aa75f0(plVar20 + 0xe,&uStack_2f0,&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  pbVar38 = (byte *)(plVar20 + 0x11);
  plVar20[0x11] = 0;
  plVar20[0x12] = 0;
  plVar20[0x13] = 0;
  plVar20[0x14] = 0;
  plVar20[0x15] = 0;
  plVar20[0x16] = 0;
  plVar20[0x17] = 0xffffffff;
  plVar20[0x26] = 0;
  plVar20[0x27] = 0;
  plVar20[0x18] = 0;
  plVar20[0x19] = 0;
  plVar20[0x1a] = 0;
  plVar20[0x1b] = 0;
  plVar20[0x1c] = 0;
  plVar20[0x1d] = 0;
  plVar20[0x1e] = 0;
  plVar20[0x1f] = 0;
  plVar20[4] = (long)&UNK_0efd5b40;
  plVar20[0x2e] = 0;
  plVar20[0x2f] = 0;
  plVar20[0x30] = 0;
  plVar20[0x31] = 0;
  plVar20[0x32] = 0;
  plVar20[0x33] = 0;
  plVar20[0x34] = 0;
  *(undefined4 *)(plVar20 + 0x35) = 0x3f800000;
  plVar20[0x36] = 0;
  plVar20[0x37] = 0;
  if (pbStack_458 == (byte *)0x0) {
    pbVar25 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_458)(&pbStack_458,plVar20 + 0x36);
    pbVar25 = pbStack_458;
  }
  pbVar24 = (byte *)(plVar20 + 4);
  pbStack_458 = (byte *)0x0;
  plVar20[0x36] = (long)pbVar25;
  *(undefined1 *)(plVar20 + 0x3e) = 0;
  puStack_158 = (uint *)(plVar20 + 0x12);
  if (pbVar38 != &DAT_0f552138) {
    if ((*puStack_158 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar20[0x14] = _DAT_0f552150;
        uVar13 = uRam000000000f55214c;
        uVar12 = _DAT_0f552148;
        uVar11 = uRam000000000f552144;
        *puStack_158 = _DAT_0f552140;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar11;
        *(undefined4 *)(plVar20 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puStack_158,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar40 = (_DAT_0f552140 & 1) != 0;
      lVar30 = 0xf552141;
      if (bVar40) {
        lVar30 = _DAT_0f552150;
      }
      uVar26 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar40) {
        uVar26 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_158,lVar30,uVar26);
    }
  }
  plVar20[0x11] = _DAT_0f552138;
  plVar20[0x15] = 0;
  if (pbStack_458 != (byte *)0x0) {
    (**(code **)(pbStack_458 + 8))(&pbStack_458);
  }
  plVar33 = plVar20 + 1;
  if (pbStack_3b8 != (byte *)0x0) {
    (**(code **)(pbStack_3b8 + 8))(&pbStack_3b8);
  }
  LOCK();
  *plVar33 = *plVar33 + 1;
  UNLOCK();
  plStack_c8 = plVar33;
  pbVar25 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar25 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar25[8] = 0;
  pbVar25[9] = 0;
  pbVar25[10] = 0;
  pbVar25[0xb] = 0;
  pbVar25[0xc] = 0;
  pbVar25[0xd] = 0;
  pbVar25[0xe] = 0;
  pbVar25[0xf] = 0;
  pbVar25[0x10] = 0;
  pbVar25[0x11] = 0;
  pbVar25[0x12] = 0;
  pbVar25[0x13] = 0;
  pbVar25[0x14] = 0;
  pbVar25[0x15] = 0;
  pbVar25[0x16] = 0;
  pbVar25[0x17] = 0;
  *(undefined **)pbVar25 = &UNK_0efd5c20;
  pbVar25[0x30] = 0;
  pbVar25[0x31] = 0;
  pbVar25[0x32] = 0;
  pbVar25[0x33] = 0;
  pbVar25[0x34] = 0;
  pbVar25[0x35] = 0;
  pbVar25[0x36] = 0;
  pbVar25[0x37] = 0;
  pbVar25[0x38] = 0;
  pbVar25[0x39] = 0;
  pbVar25[0x3a] = 0;
  pbVar25[0x3b] = 0;
  pbVar25[0x3c] = 0;
  pbVar25[0x3d] = 0;
  pbVar25[0x3e] = 0;
  pbVar25[0x3f] = 0;
  *(undefined **)(pbVar25 + 0x20) = &UNK_0efd5c70;
  *(byte **)(pbVar25 + 0x70) = pbVar24;
  *(long **)(pbVar25 + 0x78) = plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  pbStack_150 = pbVar25 + 8;
  puVar6 = *(undefined4 **)(pbVar23 + 0xe0);
  puVar5 = *(undefined4 **)(pbVar23 + 0xd8);
  for (puVar21 = puVar5; puVar21 != puVar6; puVar21 = puVar21 + 0x2a) {
    if ((*(long *)(puVar21 + 0x1e) == 0) && (*(long *)(puVar21 + 0x20) == -1)) goto LAB_05686a2a;
  }
  if (*(undefined4 **)(pbVar23 + 0xe8) <= puVar6) {
    pbVar39 = (byte *)((long)puVar6 - (long)puVar5);
    uVar26 = ((long)pbVar39 >> 3) * -0x30c30c30c30c30c3 + 1;
    pbVar35 = pbVar23;
    if (0x186186186186186 < uVar26) goto LAB_056884a1;
    lVar30 = (long)*(undefined4 **)(pbVar23 + 0xe8) - (long)puVar5 >> 3;
    uVar18 = lVar30 * -0x6186186186186186;
    if (uVar26 < uVar18) {
      uVar26 = uVar18;
    }
    pbVar34 = pbVar23 + 0xd8;
    if (0xc30c30c30c30c2 < (ulong)(lVar30 * -0x30c30c30c30c30c3)) {
      uVar26 = 0x186186186186186;
    }
    pbStack_438 = pbVar34;
    if (uVar26 == 0) {
      pbVar24 = (byte *)0x0;
LAB_056867d0:
      pbStack_450 = pbVar39 + (long)pbVar24;
      pbStack_440 = pbVar24 + uVar26 * 0xa8;
      pbStack_458 = pbVar24;
      pbStack_448 = pbStack_450;
      pbStack_2f8 = pbVar34;
      func_0x05702ef0(pbStack_450);
      pbVar35 = pbStack_448 + 0xa8;
      lVar30 = *(long *)(pbVar23 + 0xd8);
      lVar7 = *(long *)(pbVar23 + 0xe0);
      pbVar24 = pbStack_450 + (lVar30 - lVar7);
      if (lVar30 != lVar7) {
        lVar36 = 0;
        do {
          uVar29 = ((undefined8 *)(lVar30 + lVar36))[1];
          *(undefined8 *)(pbVar24 + lVar36) = *(undefined8 *)(lVar30 + lVar36);
          *(undefined8 *)(pbVar24 + lVar36 + 8) = uVar29;
          *(undefined8 *)(lVar30 + lVar36) = 0;
          ((undefined8 *)(lVar30 + lVar36))[1] = 0;
          pbVar39 = pbVar24 + lVar36 + 0x20;
          pbVar39[0] = 0;
          pbVar39[1] = 0;
          pbVar39[2] = 0;
          pbVar39[3] = 0;
          pbVar39[4] = 0;
          pbVar39[5] = 0;
          pbVar39[6] = 0;
          pbVar39[7] = 0;
          pbVar39[8] = 0;
          pbVar39[9] = 0;
          pbVar39[10] = 0;
          pbVar39[0xb] = 0;
          pbVar39[0xc] = 0;
          pbVar39[0xd] = 0;
          pbVar39[0xe] = 0;
          pbVar39[0xf] = 0;
          pbVar39 = pbVar24 + lVar36 + 0x10;
          pbVar39[0] = 0;
          pbVar39[1] = 0;
          pbVar39[2] = 0;
          pbVar39[3] = 0;
          pbVar39[4] = 0;
          pbVar39[5] = 0;
          pbVar39[6] = 0;
          pbVar39[7] = 0;
          pbVar39[8] = 0;
          pbVar39[9] = 0;
          pbVar39[10] = 0;
          pbVar39[0xb] = 0;
          pbVar39[0xc] = 0;
          pbVar39[0xd] = 0;
          pbVar39[0xe] = 0;
          pbVar39[0xf] = 0;
          pbVar39 = pbVar24 + lVar36 + 0x30;
          pbVar39[0] = 0;
          pbVar39[1] = 0;
          pbVar39[2] = 0;
          pbVar39[3] = 0;
          pbVar39[4] = 0;
          pbVar39[5] = 0;
          pbVar39[6] = 0;
          pbVar39[7] = 0;
          *(undefined8 *)(pbVar24 + lVar36 + 0x28) = *(undefined8 *)(lVar30 + 0x28 + lVar36);
          puVar21 = (undefined4 *)(lVar30 + 0x18 + lVar36);
          uVar11 = puVar21[1];
          uVar12 = puVar21[2];
          uVar13 = puVar21[3];
          pbVar39 = pbVar24 + lVar36 + 0x18;
          *(undefined4 *)pbVar39 = *puVar21;
          *(undefined4 *)(pbVar39 + 4) = uVar11;
          *(undefined4 *)(pbVar39 + 8) = uVar12;
          *(undefined4 *)(pbVar39 + 0xc) = uVar13;
          *(undefined2 *)(lVar30 + 0x18 + lVar36) = 0;
          *(undefined8 *)(pbVar24 + lVar36 + 0x10) = *(undefined8 *)(lVar30 + 0x10 + lVar36);
          func_0x04167a20(pbVar24 + lVar36 + 0x38,lVar30 + lVar36 + 0x38);
          puVar19 = (undefined8 *)(lVar30 + 0x40 + lVar36);
          uVar29 = puVar19[1];
          *(undefined8 *)(pbVar24 + lVar36 + 0x40) = *puVar19;
          *(undefined8 *)(pbVar24 + lVar36 + 0x40 + 8) = uVar29;
          puVar19 = (undefined8 *)(lVar30 + 0x50 + lVar36);
          uVar29 = puVar19[1];
          *(undefined8 *)(pbVar24 + lVar36 + 0x50) = *puVar19;
          *(undefined8 *)(pbVar24 + lVar36 + 0x50 + 8) = uVar29;
          puVar19 = (undefined8 *)(lVar30 + 0x60 + lVar36);
          uVar29 = puVar19[1];
          *(undefined8 *)(pbVar24 + lVar36 + 0x60) = *puVar19;
          *(undefined8 *)(pbVar24 + lVar36 + 0x60 + 8) = uVar29;
          puVar19 = (undefined8 *)(lVar30 + 0x60 + lVar36);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(pbVar24 + lVar36 + 0x70) = *(undefined8 *)(lVar30 + 0x70 + lVar36);
          puVar19 = (undefined8 *)(lVar30 + 0x78 + lVar36);
          uVar29 = puVar19[1];
          *(undefined8 *)(pbVar24 + lVar36 + 0x78) = *puVar19;
          *(undefined8 *)(pbVar24 + lVar36 + 0x78 + 8) = uVar29;
          pbVar39 = pbVar24 + lVar36 + 0x88;
          pbVar39[0] = 0;
          pbVar39[1] = 0;
          pbVar39[2] = 0;
          pbVar39[3] = 0;
          pbVar39[4] = 0;
          pbVar39[5] = 0;
          pbVar39[6] = 0;
          pbVar39[7] = 0;
          pbVar39[8] = 0;
          pbVar39[9] = 0;
          pbVar39[10] = 0;
          pbVar39[0xb] = 0;
          pbVar39[0xc] = 0;
          pbVar39[0xd] = 0;
          pbVar39[0xe] = 0;
          pbVar39[0xf] = 0;
          pbVar39 = pbVar24 + lVar36 + 0x98;
          pbVar39[0] = 0;
          pbVar39[1] = 0;
          pbVar39[2] = 0;
          pbVar39[3] = 0;
          pbVar39[4] = 0;
          pbVar39[5] = 0;
          pbVar39[6] = 0;
          pbVar39[7] = 0;
          puVar21 = (undefined4 *)(lVar30 + 0x88 + lVar36);
          uVar11 = puVar21[1];
          uVar12 = puVar21[2];
          uVar13 = puVar21[3];
          pbVar39 = pbVar24 + lVar36 + 0x88;
          *(undefined4 *)pbVar39 = *puVar21;
          *(undefined4 *)(pbVar39 + 4) = uVar11;
          *(undefined4 *)(pbVar39 + 8) = uVar12;
          *(undefined4 *)(pbVar39 + 0xc) = uVar13;
          *(undefined8 *)(pbVar24 + lVar36 + 0x98) = *(undefined8 *)(lVar30 + 0x98 + lVar36);
          puVar19 = (undefined8 *)(lVar30 + 0x88 + lVar36);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(lVar30 + 0x98 + lVar36) = 0;
          *(undefined2 *)(pbVar24 + lVar36 + 0xa0) = *(undefined2 *)(lVar30 + 0xa0 + lVar36);
          lVar2 = lVar30 + lVar36;
          lVar36 = lVar36 + 0xa8;
        } while (lVar2 + 0xa8 != lVar7);
        do {
          func_0x056ff7f0(lVar30);
          lVar30 = lVar30 + 0xa8;
        } while (lVar30 != lVar7);
        lVar30 = *(long *)pbStack_2f8;
      }
      *(byte **)(pbVar23 + 0xd8) = pbVar24;
      *(byte **)(pbVar23 + 0xe0) = pbVar35;
      lVar7 = *(long *)(pbVar23 + 0xe8);
      *(byte **)(pbVar23 + 0xe8) = pbStack_440;
      if (lVar30 != 0) {
        func_0x0412a280(lVar30,lVar7 - lVar30);
      }
      goto LAB_056869b9;
    }
    if (uVar26 < 0x186186186186187) {
      pbVar24 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0xa8);
      if (pbVar24 == (byte *)0x0) {
        func_0x0eec74c0(uVar26 * 0xa8,0);
        pbVar24 = (byte *)0x0;
      }
      goto LAB_056867d0;
    }
LAB_05688497:
    func_0x04882eb0();
LAB_0568849c:
    func_0x05703130();
    pbVar25 = pbVar34;
LAB_056884a1:
    uVar29 = func_0x05703060();
    if ((*pbVar25 & 1) != 0) {
      func_0x0412a280(*(long *)(pbVar39 + 0x18),*(ulong *)(pbVar39 + 8) & 0xfffffffffffffffe);
    }
    plVar20[0x12] = (long)pbVar39;
    pbVar38 = pbVar35 + 8;
    LOCK();
    lVar30 = *(long *)pbVar38;
    *(long *)pbVar38 = *(long *)pbVar38 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbVar35 + 0x10))(pbVar35);
      func_0x0412c2d0(pbVar35);
    }
    LOCK();
    lVar30 = *(long *)pbVar23;
    *(long *)pbVar23 = *(long *)pbVar23 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbVar24 + 0x10))(pbVar24);
      func_0x0412c2d0(pbVar24);
    }
    LOCK();
    lVar30 = *(long *)pbVar23;
    *(long *)pbVar23 = *(long *)pbVar23 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbVar24 + 0x10))(pbVar24);
      func_0x0412c2d0(pbVar24);
    }
    if (pbStack_378 != (byte *)0x0) {
      (**(code **)(pbStack_378 + 8))(&pbStack_378);
    }
    func_0x05611e70(&pbStack_450);
    if (((ulong)uStack_330 & 1) != 0) {
      func_0x0412a280(pbStack_320,(ulong)uStack_330 & 0xfffffffffffffffe);
    }
    func_0x05611e70(auStack_b8);
    if ((bStack_100 & 1) != 0) {
      func_0x0412a280(uStack_f0,
                      CONCAT62(uStack_fe,CONCAT11(uStack_ff,bStack_100)) & 0xfffffffffffffffe);
    }
    if ((bStack_148 & 1) != 0) {
      func_0x0412a280(uStack_138,
                      CONCAT53(uStack_145,CONCAT12(uStack_146,CONCAT11(uStack_147,bStack_148))) &
                      0xfffffffffffffffe);
    }
    if ((uStack_2c8 & 1) != 0) {
      func_0x0412a280(puStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
    }
    if ((bStack_2b0 & 1) != 0) {
      func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
    }
    _Unwind_Resume(uVar29);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  func_0x05702ef0(puVar6);
  pbVar35 = (byte *)(puVar6 + 0x2a);
  *(byte **)(pbVar23 + 0xe0) = pbVar35;
LAB_056869b9:
  *(byte **)(pbVar23 + 0xe0) = pbVar35;
  pbVar24 = *(byte **)(pbVar35 + -0xa8);
  if ((*pbVar24 & 1) == 0) {
    *pbVar24 = 0x26;
    pbVar24 = pbVar24 + 1;
  }
  else {
    pbVar24[8] = 0x13;
    pbVar24[9] = 0;
    pbVar24[10] = 0;
    pbVar24[0xb] = 0;
    pbVar24[0xc] = 0;
    pbVar24[0xd] = 0;
    pbVar24[0xe] = 0;
    pbVar24[0xf] = 0;
    pbVar24 = *(byte **)(pbVar24 + 0x10);
  }
  uVar13 = _UNK_01494d69;
  uVar12 = _UNK_01494d65;
  uVar11 = _UNK_01494d61;
  *(undefined4 *)pbVar24 = _DAT_01494d5d;
  *(undefined4 *)(pbVar24 + 4) = uVar11;
  *(undefined4 *)(pbVar24 + 8) = uVar12;
  *(undefined4 *)(pbVar24 + 0xc) = uVar13;
  pbVar24[0xf] = 0x65;
  pbVar24[0x10] = 0x6e;
  pbVar24[0x11] = 0x74;
  pbVar24[0x12] = 0x3e;
  pbVar24[0x13] = 0;
  lVar30 = *(long *)(pbVar23 + 0xe0);
  puVar21 = (undefined4 *)(lVar30 - 0xa8);
  *(byte *)(lVar30 + -7) = pbVar23[0x80];
  *(undefined8 *)(lVar30 + -0x30) = 0;
  *(undefined8 *)(lVar30 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar30 + -8) = 0;
LAB_05686a2a:
  pbVar35 = pbVar25 + 0x20;
  pbVar24 = *(byte **)(puVar21 + 0x24);
  if (pbVar24 < *(byte **)(puVar21 + 0x26)) {
    pbVar24[0x10] = 0;
    pbVar24[0x11] = 0;
    pbVar24[0x12] = 0;
    pbVar24[0x13] = 0;
    pbVar24[0x14] = 0;
    pbVar24[0x15] = 0;
    pbVar24[0x16] = 0;
    pbVar24[0x17] = 0;
    pbVar24[0x18] = 0;
    pbVar24[0x19] = 0;
    pbVar24[0x1a] = 0;
    pbVar24[0x1b] = 0;
    pbVar24[0x1c] = 0;
    pbVar24[0x1d] = 0;
    pbVar24[0x1e] = 0;
    pbVar24[0x1f] = 0;
    pbVar24[0] = 0;
    pbVar24[1] = 0;
    pbVar24[2] = 0;
    pbVar24[3] = 0;
    pbVar24[4] = 0;
    pbVar24[5] = 0;
    pbVar24[6] = 0;
    pbVar24[7] = 0;
    pbVar24[8] = 0;
    pbVar24[9] = 0;
    pbVar24[10] = 0;
    pbVar24[0xb] = 0;
    pbVar24[0xc] = 0;
    pbVar24[0xd] = 0;
    pbVar24[0xe] = 0;
    pbVar24[0xf] = 0;
    pbVar24[0x20] = 0;
    pbVar24[0x21] = 0;
    pbVar24[0x22] = 0;
    pbVar24[0x23] = 0;
    pbVar24[0x24] = 0;
    pbVar24[0x25] = 0;
    pbVar24[0x26] = 0;
    pbVar24[0x27] = 0;
    if (pbVar24 != pbVar38) {
      if ((*puStack_158 & 1) == 0) {
        *(undefined8 *)(pbVar24 + 0x18) = *(undefined8 *)(puStack_158 + 4);
        uVar29 = *(undefined8 *)(puStack_158 + 2);
        *(undefined8 *)(pbVar24 + 8) = *(undefined8 *)puStack_158;
        *(undefined8 *)(pbVar24 + 0x10) = uVar29;
      }
      else {
        func_0x04885070(pbVar24 + 8,plVar20[0x14],plVar20[0x13]);
      }
    }
    *(undefined8 *)pbVar24 = *(undefined8 *)pbVar38;
    *(byte **)(pbVar24 + 0x28) = pbVar35;
    *(byte **)(pbVar24 + 0x30) = pbVar25;
    LOCK();
    *(long *)(pbVar25 + 8) = *(long *)(pbVar25 + 8) + 1;
    UNLOCK();
    pbVar24 = pbVar24 + 0x38;
    *(byte **)(puVar21 + 0x24) = pbVar24;
  }
  else {
    pbVar24 = pbVar24 + -*(long *)(puVar21 + 0x22);
    pbVar34 = (byte *)(((long)pbVar24 >> 3) * 0x6db6db6db6db6db7 + 1);
    pbVar39 = pbVar25;
    if ((byte *)0x492492492492492 < pbVar34) goto LAB_0568849c;
    lVar30 = (long)*(byte **)(puVar21 + 0x26) - *(long *)(puVar21 + 0x22) >> 3;
    pbVar10 = (byte *)(lVar30 * -0x2492492492492492);
    if (pbVar34 < pbVar10) {
      pbVar34 = pbVar10;
    }
    pbStack_438 = (byte *)(puVar21 + 0x22);
    if (0x249249249249248 < (ulong)(lVar30 * 0x6db6db6db6db6db7)) {
      pbVar34 = (byte *)0x492492492492492;
    }
    pbStack_2f8 = pbVar35;
    pbStack_d0 = pbStack_438;
    if (pbVar34 == (byte *)0x0) {
      pbVar35 = (byte *)0x0;
    }
    else {
      if ((byte *)0x492492492492492 < pbVar34) goto LAB_05688497;
      pbVar35 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar34 * 0x38);
      if (pbVar35 == (byte *)0x0) {
        func_0x0eec74c0((long)pbVar34 * 0x38,0);
        pbVar35 = (byte *)0x0;
      }
    }
    pbVar39 = pbVar35 + (long)pbVar24;
    pbStack_440 = pbVar35 + (long)pbVar34 * 0x38;
    pbVar34 = pbVar35 + 0x10 + (long)pbVar24;
    pbVar34[0] = 0;
    pbVar34[1] = 0;
    pbVar34[2] = 0;
    pbVar34[3] = 0;
    pbVar34[4] = 0;
    pbVar34[5] = 0;
    pbVar34[6] = 0;
    pbVar34[7] = 0;
    pbVar34[8] = 0;
    pbVar34[9] = 0;
    pbVar34[10] = 0;
    pbVar34[0xb] = 0;
    pbVar34[0xc] = 0;
    pbVar34[0xd] = 0;
    pbVar34[0xe] = 0;
    pbVar34[0xf] = 0;
    pbVar34 = pbVar35 + (long)pbVar24;
    pbVar34[0] = 0;
    pbVar34[1] = 0;
    pbVar34[2] = 0;
    pbVar34[3] = 0;
    pbVar34[4] = 0;
    pbVar34[5] = 0;
    pbVar34[6] = 0;
    pbVar34[7] = 0;
    pbVar34[8] = 0;
    pbVar34[9] = 0;
    pbVar34[10] = 0;
    pbVar34[0xb] = 0;
    pbVar34[0xc] = 0;
    pbVar34[0xd] = 0;
    pbVar34[0xe] = 0;
    pbVar34[0xf] = 0;
    pbVar34 = pbVar35 + 0x20 + (long)pbVar24;
    pbVar34[0] = 0;
    pbVar34[1] = 0;
    pbVar34[2] = 0;
    pbVar34[3] = 0;
    pbVar34[4] = 0;
    pbVar34[5] = 0;
    pbVar34[6] = 0;
    pbVar34[7] = 0;
    pbStack_448 = pbVar39;
    pbStack_458 = pbVar35;
    pbStack_450 = pbVar39;
    if (pbVar39 != pbVar38) {
      if ((*puStack_158 & 1) == 0) {
        *(undefined8 *)(pbVar24 + (long)(pbVar35 + 0x18)) = *(undefined8 *)(puStack_158 + 4);
        uVar15 = puStack_158[1];
        uVar16 = puStack_158[2];
        uVar17 = puStack_158[3];
        *(uint *)(pbVar24 + (long)(pbVar35 + 8)) = *puStack_158;
        *(uint *)(pbVar24 + (long)(pbVar35 + 0xc)) = uVar15;
        *(uint *)(pbVar24 + (long)(pbVar35 + 0x10)) = uVar16;
        *(uint *)(pbVar24 + (long)(pbVar35 + 0x14)) = uVar17;
      }
      else {
        func_0x04885070(pbVar24 + (long)(pbVar35 + 8),plVar20[0x14],plVar20[0x13]);
      }
    }
    *(undefined8 *)pbVar39 = *(undefined8 *)pbVar38;
    *(byte **)(pbVar39 + 0x28) = pbStack_2f8;
    *(byte **)(pbVar39 + 0x30) = pbVar25;
    LOCK();
    *(long *)(pbVar25 + 8) = *(long *)(pbVar25 + 8) + 1;
    UNLOCK();
    pbStack_448 = pbStack_448 + 0x38;
    puVar19 = *(undefined8 **)(puVar21 + 0x22);
    puVar8 = *(undefined8 **)(puVar21 + 0x24);
    pbVar38 = pbStack_450 + ((long)puVar19 - (long)puVar8);
    pbVar24 = pbVar38;
    puVar31 = puVar19;
    if ((long)puVar19 - (long)puVar8 != 0) {
      do {
        pbVar24[0x10] = 0;
        pbVar24[0x11] = 0;
        pbVar24[0x12] = 0;
        pbVar24[0x13] = 0;
        pbVar24[0x14] = 0;
        pbVar24[0x15] = 0;
        pbVar24[0x16] = 0;
        pbVar24[0x17] = 0;
        pbVar24[0x18] = 0;
        pbVar24[0x19] = 0;
        pbVar24[0x1a] = 0;
        pbVar24[0x1b] = 0;
        pbVar24[0x1c] = 0;
        pbVar24[0x1d] = 0;
        pbVar24[0x1e] = 0;
        pbVar24[0x1f] = 0;
        pbVar24[0] = 0;
        pbVar24[1] = 0;
        pbVar24[2] = 0;
        pbVar24[3] = 0;
        pbVar24[4] = 0;
        pbVar24[5] = 0;
        pbVar24[6] = 0;
        pbVar24[7] = 0;
        pbVar24[8] = 0;
        pbVar24[9] = 0;
        pbVar24[10] = 0;
        pbVar24[0xb] = 0;
        pbVar24[0xc] = 0;
        pbVar24[0xd] = 0;
        pbVar24[0xe] = 0;
        pbVar24[0xf] = 0;
        pbVar24[0x20] = 0;
        pbVar24[0x21] = 0;
        pbVar24[0x22] = 0;
        pbVar24[0x23] = 0;
        pbVar24[0x24] = 0;
        pbVar24[0x25] = 0;
        pbVar24[0x26] = 0;
        pbVar24[0x27] = 0;
        *(undefined8 *)(pbVar24 + 0x18) = puVar31[3];
        uVar29 = puVar31[2];
        *(undefined8 *)(pbVar24 + 8) = puVar31[1];
        *(undefined8 *)(pbVar24 + 0x10) = uVar29;
        *(undefined2 *)(puVar31 + 1) = 0;
        *(undefined8 *)pbVar24 = *puVar31;
        uVar11 = *(undefined4 *)((long)puVar31 + 0x2c);
        uVar12 = *(undefined4 *)(puVar31 + 6);
        uVar13 = *(undefined4 *)((long)puVar31 + 0x34);
        *(undefined4 *)(pbVar24 + 0x28) = *(undefined4 *)(puVar31 + 5);
        *(undefined4 *)(pbVar24 + 0x2c) = uVar11;
        *(undefined4 *)(pbVar24 + 0x30) = uVar12;
        *(undefined4 *)(pbVar24 + 0x34) = uVar13;
        puVar31[5] = 0;
        puVar31[6] = 0;
        puVar31 = puVar31 + 7;
        pbVar24 = pbVar24 + 0x38;
      } while (puVar31 != puVar8);
      do {
        plVar33 = (long *)puVar19[6];
        if (plVar33 == (long *)0x0) {
LAB_05686ce4:
          bVar4 = *(byte *)(puVar19 + 1);
        }
        else {
          LOCK();
          plVar3 = plVar33 + 1;
          lVar30 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar30 != 0) goto LAB_05686ce4;
          (**(code **)(*plVar33 + 0x10))(plVar33);
          func_0x0412c2d0(plVar33);
          bVar4 = *(byte *)(puVar19 + 1);
        }
        if ((bVar4 & 1) != 0) {
          func_0x0412a280(puVar19[3],puVar19[1] & 0xfffffffffffffffe);
        }
        puVar19 = puVar19 + 7;
      } while (puVar19 != puVar8);
      puVar19 = *(undefined8 **)pbStack_d0;
    }
    pbVar24 = pbStack_448;
    *(byte **)(puVar21 + 0x22) = pbVar38;
    *(byte **)(puVar21 + 0x24) = pbStack_448;
    lVar30 = *(long *)(puVar21 + 0x26);
    *(byte **)(puVar21 + 0x26) = pbStack_440;
    if (puVar19 != (undefined8 *)0x0) {
      func_0x0412a280(puVar19,lVar30 - (long)puVar19);
    }
  }
  *(byte **)(puVar21 + 0x24) = pbVar24;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar33 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar33 = *plVar33 + 1;
    UNLOCK();
  }
  plVar33 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar12;
  *(undefined4 *)(plVar20 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar14;
  if (plVar33 != (long *)0x0) {
    LOCK();
    plVar3 = plVar33 + 1;
    lVar30 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
      func_0x0412c2d0(plVar33);
    }
  }
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  LOCK();
  lVar30 = *(long *)pbStack_150;
  *(long *)pbStack_150 = *(long *)pbStack_150 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*(long *)pbVar25 + 0x10))(pbVar25);
    func_0x0412c2d0(pbVar25);
  }
  plVar33 = plStack_c8;
  LOCK();
  lVar30 = *plStack_c8;
  *plStack_c8 = *plStack_c8 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar30 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plStack_c8;
    *plStack_c8 = *plStack_c8 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_338 != (byte *)0x0) {
    (**(code **)(pbStack_338 + 8))(&pbStack_338);
  }
  ppbVar37 = (byte **)(pbVar23 + 0x130);
  pbStack_450 = (byte *)0x0;
  pbStack_458 = &UNK_0efd5d30;
  if (ppbVar37 != &pbStack_458) {
    if ((*ppbVar37 == (byte *)0x0) ||
       ((**(code **)(*ppbVar37 + 8))(ppbVar37), pbStack_458 != (byte *)0x0)) {
      (**(code **)pbStack_458)(&pbStack_458,ppbVar37);
      pbVar23 = pbStack_458;
    }
    else {
      pbVar23 = (byte *)0x0;
    }
    *ppbVar37 = pbVar23;
  }
  if ((uStack_298 & 1) != 0) {
    func_0x0412a280(puStack_288,uStack_298 & 0xfffffffffffffffe);
  }
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_178);
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  uVar29 = *param_1;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  puStack_370 = (undefined8 *)0x737265746c69660e;
  pbStack_378 = (byte *)0xaef0c9b92e5e3b2a;
  bStack_3b0 = 8;
  uStack_3af = 0;
  uStack_3aa = 0;
  pbStack_260 = (byte *)0x8;
  pbStack_3b8 = (byte *)0x0;
  pbStack_268 = &UNK_0efd2278;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pbStack_458 = pbStack_268;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efd2050;
  pbStack_268 = (byte *)0x0;
  pbStack_450 = pbStack_260;
  plVar20[4] = (long)&UNK_0f2ccd78;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[10] = 0;
  plVar20[0xb] = 0;
  plVar20[0xc] = 0;
  *(undefined1 *)(plVar20 + 0xd) = 0;
  func_0x04aa75f0(plVar20 + 0xe,&pbStack_338,&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  plVar33 = plVar20 + 0x11;
  plVar20[0x11] = 0;
  plVar20[0x12] = 0;
  plVar20[0x13] = 0;
  plVar20[0x14] = 0;
  plVar20[0x15] = 0;
  plVar20[0x16] = 0;
  plVar20[0x17] = 0xffffffff;
  plVar20[0x26] = 0;
  plVar20[0x27] = 0;
  plVar20[0x18] = 0;
  plVar20[0x19] = 0;
  plVar20[0x1a] = 0;
  plVar20[0x1b] = 0;
  plVar20[0x1c] = 0;
  plVar20[0x1d] = 0;
  plVar20[0x1e] = 0;
  plVar20[0x1f] = 0;
  plVar20[4] = (long)&UNK_0efd20a0;
  plVar20[0x2e] = 0;
  plVar20[0x2f] = 0;
  if (pbStack_458 == (byte *)0x0) {
    pbVar23 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_458)(&pbStack_458,plVar20 + 0x2e);
    pbVar23 = pbStack_458;
  }
  plVar3 = plVar20 + 4;
  pbStack_458 = (byte *)0x0;
  plVar20[0x2e] = (long)pbVar23;
  puVar1 = (uint *)(plVar20 + 0x12);
  if (plVar33 == (long *)&DAT_0f551f28) {
    plVar20[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f30 & 1) == 0) {
        plVar20[0x14] = _DAT_0f551f40;
        uVar13 = uRam000000000f551f3c;
        uVar12 = _DAT_0f551f38;
        uVar11 = uRam000000000f551f34;
        *puVar1 = _DAT_0f551f30;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar11;
        *(undefined4 *)(plVar20 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f551f40,CONCAT44(uRam000000000f551f3c,_DAT_0f551f38));
      }
    }
    else {
      bVar40 = (_DAT_0f551f30 & 1) != 0;
      lVar30 = 0xf551f31;
      if (bVar40) {
        lVar30 = _DAT_0f551f40;
      }
      uVar26 = (ulong)((_DAT_0f551f30 & 0xff) >> 1);
      if (bVar40) {
        uVar26 = CONCAT44(uRam000000000f551f3c,_DAT_0f551f38);
      }
      func_0x04885120(puVar1,lVar30,uVar26);
    }
    plVar20[0x11] = _DAT_0f551f28;
    plVar20[0x15] = 0;
    if (pbStack_458 != (byte *)0x0) {
      (**(code **)(pbStack_458 + 8))(&pbStack_458);
    }
  }
  plVar22 = plVar20 + 1;
  if (pbStack_268 != (byte *)0x0) {
    (**(code **)(pbStack_268 + 8))(&pbStack_268);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  pbVar23 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar23 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar23[8] = 0;
  pbVar23[9] = 0;
  pbVar23[10] = 0;
  pbVar23[0xb] = 0;
  pbVar23[0xc] = 0;
  pbVar23[0xd] = 0;
  pbVar23[0xe] = 0;
  pbVar23[0xf] = 0;
  pbVar23[0x10] = 0;
  pbVar23[0x11] = 0;
  pbVar23[0x12] = 0;
  pbVar23[0x13] = 0;
  pbVar23[0x14] = 0;
  pbVar23[0x15] = 0;
  pbVar23[0x16] = 0;
  pbVar23[0x17] = 0;
  *(undefined **)pbVar23 = &UNK_0efd2180;
  pbVar23[0x30] = 0;
  pbVar23[0x31] = 0;
  pbVar23[0x32] = 0;
  pbVar23[0x33] = 0;
  pbVar23[0x34] = 0;
  pbVar23[0x35] = 0;
  pbVar23[0x36] = 0;
  pbVar23[0x37] = 0;
  pbVar23[0x38] = 0;
  pbVar23[0x39] = 0;
  pbVar23[0x3a] = 0;
  pbVar23[0x3b] = 0;
  pbVar23[0x3c] = 0;
  pbVar23[0x3d] = 0;
  pbVar23[0x3e] = 0;
  pbVar23[0x3f] = 0;
  *(undefined **)(pbVar23 + 0x20) = &UNK_0efd21d0;
  *(long **)(pbVar23 + 0x70) = plVar3;
  *(long **)(pbVar23 + 0x78) = plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  pbStack_458 = pbVar23 + 0x20;
  pbStack_450 = pbVar23;
  puVar21 = (undefined4 *)func_0x056ce220(uVar29,&pbStack_378);
  plVar27 = *(long **)(puVar21 + 0x24);
  if (plVar27 < *(long **)(puVar21 + 0x26)) {
    plVar27[2] = 0;
    plVar27[3] = 0;
    *plVar27 = 0;
    plVar27[1] = 0;
    plVar27[4] = 0;
    if (plVar27 != plVar33) {
      if ((*puVar1 & 1) == 0) {
        plVar27[3] = plVar20[0x14];
        lVar30 = plVar20[0x13];
        plVar27[1] = *(long *)puVar1;
        plVar27[2] = lVar30;
      }
      else {
        func_0x04885070(plVar27 + 1,plVar20[0x14],plVar20[0x13]);
      }
    }
    *plVar27 = *plVar33;
    plVar27[5] = (long)(pbVar23 + 0x20);
    plVar27[6] = (long)pbVar23;
    LOCK();
    *(long *)(pbVar23 + 8) = *(long *)(pbVar23 + 8) + 1;
    UNLOCK();
    plVar27 = plVar27 + 7;
    *(long **)(puVar21 + 0x24) = plVar27;
  }
  else {
    plVar27 = (long *)func_0x056d0030(puVar21 + 0x22,plVar33,&pbStack_458);
  }
  *(long **)(puVar21 + 0x24) = plVar27;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar33 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar33 = *plVar33 + 1;
    UNLOCK();
  }
  plVar33 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar12;
  *(undefined4 *)(plVar20 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar14;
  if (plVar33 != (long *)0x0) {
    LOCK();
    plVar27 = plVar33 + 1;
    lVar30 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
      func_0x0412c2d0(plVar33);
    }
  }
  pbVar23 = pbStack_450;
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (pbStack_450 != (byte *)0x0) {
    LOCK();
    pbVar38 = pbStack_450 + 8;
    lVar30 = *(long *)pbVar38;
    *(long *)pbVar38 = *(long *)pbVar38 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbStack_450 + 0x10))(pbStack_450);
      func_0x0412c2d0(pbVar23);
    }
  }
  LOCK();
  lVar30 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar30 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_3b8 != (byte *)0x0) {
    (**(code **)(pbStack_3b8 + 8))(&pbStack_3b8);
  }
  if (((ulong)puStack_370 & 1) != 0) {
    func_0x0412a280(uStack_360,(ulong)puStack_370 & 0xfffffffffffffffe);
  }
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  (**(code **)(*plVar3 + 0x10))(plVar3,&uStack_198);
  if ((uStack_198 & 1) != 0) {
    func_0x0412a280(uStack_188,uStack_198 & 0xfffffffffffffffe);
  }
  bStack_2b0 = 0x10;
  uStack_2af = 0x776f646c6f6f63;
  uStack_2a8 = 0x6e;
  uStack_2a7 = 0;
  puStack_2b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_2b8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar29 = _UNK_0123d5c6;
  uStack_2c8 = 0x29;
  uStack_2c0 = 0x21;
  puStack_2b8[2] = _DAT_0123d5be;
  puStack_2b8[3] = uVar29;
  uVar29 = _UNK_0123d5b6;
  *puStack_2b8 = _DAT_0123d5ae;
  puStack_2b8[1] = uVar29;
  *(undefined2 *)(puStack_2b8 + 4) = 0x53;
  bStack_148 = 2;
  uStack_147 = 0x30;
  uStack_146 = 0;
  bStack_100 = 0;
  uStack_ff = 0;
  func_0x05611160(_DAT_011983f0,0,auStack_b8,uStack_c0,&bStack_2b0,&uStack_2c8,&bStack_148,
                  &bStack_100);
  uVar29 = *param_1;
  pbStack_338 = (byte *)0x0;
  if ((uStack_48 & 1) == 0) {
    pbStack_320 = pbStack_38;
    uStack_330 = (undefined8 *)CONCAT44(uStack_44,uStack_48);
    uStack_328 = uStack_40;
    uStack_324 = uStack_3c;
  }
  else {
    func_0x0412e5e0(&uStack_330,pbStack_38,CONCAT44(uStack_3c,uStack_40));
  }
  uStack_318 = 0;
  if (((ulong)uStack_330 & 1) == 0) {
    if ((byte)uStack_330 >> 1 != 0) goto LAB_056875ce;
  }
  else if (CONCAT44(uStack_324,uStack_328) != 0) {
LAB_056875ce:
    pbVar23 = pbStack_320;
    if (((ulong)uStack_330 & 1) == 0) {
      pbVar23 = (byte *)((long)&uStack_330 + 1);
    }
    if ((pbVar23 != (byte *)0x0) && (*pbVar23 != 0)) {
      pbVar38 = (byte *)0xcbf29ce484222325;
      uVar26 = func_0x0eee2e90(pbVar23);
      if (uVar26 != 0) {
        uVar18 = (ulong)((uint)uVar26 & 7);
        if (7 < uVar26) {
          uVar26 = uVar26 & 0xfffffffffffffff8;
          do {
            pbVar38 = (byte *)(((((((((long)pbVar38 * 0x100000001b3 ^ (ulong)*pbVar23) *
                                     0x100000001b3 ^ (ulong)pbVar23[1]) * 0x100000001b3 ^
                                   (ulong)pbVar23[2]) * 0x100000001b3 ^ (ulong)pbVar23[3]) *
                                  0x100000001b3 ^ (ulong)pbVar23[4]) * 0x100000001b3 ^
                                (ulong)pbVar23[5]) * 0x100000001b3 ^ (ulong)pbVar23[6]) *
                               0x100000001b3 ^ (ulong)pbVar23[7]);
            pbVar23 = pbVar23 + 8;
            uVar26 = uVar26 - 8;
          } while (uVar26 != 0);
        }
        if (uVar18 != 0) {
          uVar26 = 0;
          do {
            pbVar38 = (byte *)((long)pbVar38 * 0x100000001b3 ^ (ulong)pbVar23[uVar26]);
            uVar26 = uVar26 + 1;
          } while (uVar18 != uVar26);
        }
      }
      goto LAB_05687708;
    }
  }
  pbVar38 = (byte *)0x0;
LAB_05687708:
  pbStack_458 = (byte *)0xc8;
  pbStack_338 = pbVar38;
  func_0x05640c10(&pbStack_450,auStack_b8);
  puStack_370 = (undefined8 *)0x0;
  pbStack_378 = &UNK_0efd2470;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar19 = pbStack_458;
  puVar19[1] = pbStack_450;
  puVar19[5] = uStack_430;
  puVar19[3] = pbStack_440;
  puVar19[4] = pbStack_438;
  pbStack_440 = (byte *)0x0;
  pbStack_438 = (byte *)0x0;
  uStack_430 = 0;
  puVar19[8] = uStack_418;
  puVar19[6] = uStack_428;
  puVar19[7] = uStack_420;
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  puVar19[0xb] = uStack_400;
  puVar19[9] = uStack_410;
  puVar19[10] = uStack_408;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_400 = 0;
  puVar19[0xe] = uStack_3e8;
  puVar19[0xc] = uStack_3f8;
  puVar19[0xd] = uStack_3f0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  puVar19[0x11] = uStack_3d0;
  *(undefined4 *)(puVar19 + 0xf) = (undefined4)uStack_3e0;
  *(undefined4 *)((long)puVar19 + 0x7c) = uStack_3e0._4_4_;
  *(undefined4 *)(puVar19 + 0x10) = (undefined4)uStack_3d8;
  *(undefined4 *)((long)puVar19 + 0x84) = uStack_3d8._4_4_;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  pbStack_3b8 = (byte *)0x0;
  bStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3aa = 0;
  puStack_370 = puVar19;
  if (pbStack_378 == (byte *)0x0) {
    pbVar23 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_378)(&pbStack_378,&pbStack_3b8);
    pbVar23 = pbStack_378;
  }
  pbStack_378 = (byte *)0x0;
  pbStack_3b8 = pbVar23;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efd22a0;
  pbStack_268 = (byte *)0x0;
  pbStack_260 = (byte *)0x0;
  if (pbVar23 == (byte *)0x0) {
    pbStack_268 = (byte *)0x0;
  }
  else {
    (**(code **)pbVar23)(&pbStack_3b8,&pbStack_268);
    pbStack_268 = pbStack_3b8;
  }
  pbStack_3b8 = (byte *)0x0;
  plVar20[4] = (long)&UNK_0f2ccd78;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[10] = 0;
  plVar20[0xb] = 0;
  plVar20[0xc] = 0;
  *(undefined1 *)(plVar20 + 0xd) = 0;
  func_0x04aa75f0(plVar20 + 0xe,&uStack_2f0,&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  plVar33 = plVar20 + 0x11;
  plVar20[0x11] = 0;
  plVar20[0x12] = 0;
  plVar20[0x13] = 0;
  plVar20[0x14] = 0;
  plVar20[0x15] = 0;
  plVar20[0x16] = 0;
  plVar20[0x17] = 0xffffffff;
  plVar20[0x26] = 0;
  plVar20[0x27] = 0;
  plVar20[0x18] = 0;
  plVar20[0x19] = 0;
  plVar20[0x1a] = 0;
  plVar20[0x1b] = 0;
  plVar20[0x1c] = 0;
  plVar20[0x1d] = 0;
  plVar20[0x1e] = 0;
  plVar20[0x1f] = 0;
  plVar20[4] = (long)&UNK_0efd22f0;
  plVar20[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar20 + 0x2f) = 1;
  plVar20[0x30] = 0;
  plVar20[0x31] = 0;
  if (pbStack_268 == (byte *)0x0) {
    pbVar23 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_268)(&pbStack_268,plVar20 + 0x30);
    pbVar23 = pbStack_268;
  }
  plVar3 = plVar20 + 4;
  pbStack_268 = (byte *)0x0;
  plVar20[0x30] = (long)pbVar23;
  puVar1 = (uint *)(plVar20 + 0x12);
  if (plVar33 == (long *)&DAT_0f552018) {
    plVar20[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar20[0x14] = _DAT_0f552030;
        uVar13 = uRam000000000f55202c;
        uVar12 = _DAT_0f552028;
        uVar11 = uRam000000000f552024;
        *puVar1 = _DAT_0f552020;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar11;
        *(undefined4 *)(plVar20 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar40 = (_DAT_0f552020 & 1) != 0;
      lVar30 = 0xf552021;
      if (bVar40) {
        lVar30 = _DAT_0f552030;
      }
      uVar26 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar40) {
        uVar26 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar1,lVar30,uVar26);
    }
    plVar20[0x11] = _DAT_0f552018;
    plVar20[0x15] = 0;
    if (pbStack_268 != (byte *)0x0) {
      (**(code **)(pbStack_268 + 8))(&pbStack_268);
    }
  }
  plVar22 = plVar20 + 1;
  if (pbStack_3b8 != (byte *)0x0) {
    (**(code **)(pbStack_3b8 + 8))(&pbStack_3b8);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar27 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar27[1] = 0;
  plVar27[2] = 0;
  *plVar27 = (long)&UNK_0efd23d0;
  plVar27[6] = 0;
  plVar27[7] = 0;
  plVar27[4] = (long)&UNK_0efd2420;
  plVar27[0xe] = (long)plVar3;
  plVar27[0xf] = (long)plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  pbStack_268 = (byte *)(plVar27 + 4);
  pbStack_260 = (byte *)plVar27;
  puVar21 = (undefined4 *)func_0x056ce220(uVar29,&pbStack_338);
  plVar28 = *(long **)(puVar21 + 0x24);
  if (plVar28 < *(long **)(puVar21 + 0x26)) {
    plVar28[2] = 0;
    plVar28[3] = 0;
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[4] = 0;
    if (plVar28 != plVar33) {
      if ((*puVar1 & 1) == 0) {
        plVar28[3] = plVar20[0x14];
        lVar30 = plVar20[0x13];
        plVar28[1] = *(long *)puVar1;
        plVar28[2] = lVar30;
      }
      else {
        func_0x04885070(plVar28 + 1,plVar20[0x14],plVar20[0x13]);
      }
    }
    *plVar28 = *plVar33;
    plVar28[5] = (long)(plVar27 + 4);
    plVar28[6] = (long)plVar27;
    LOCK();
    plVar27[1] = plVar27[1] + 1;
    UNLOCK();
    plVar28 = plVar28 + 7;
    *(long **)(puVar21 + 0x24) = plVar28;
  }
  else {
    plVar28 = (long *)func_0x056d0030(puVar21 + 0x22,plVar33,&pbStack_268);
  }
  *(long **)(puVar21 + 0x24) = plVar28;
  uVar11 = *puVar21;
  uVar12 = puVar21[1];
  uVar13 = puVar21[2];
  uVar14 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar33 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar33 = *plVar33 + 1;
    UNLOCK();
  }
  plVar33 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar12;
  *(undefined4 *)(plVar20 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar14;
  if (plVar33 != (long *)0x0) {
    LOCK();
    plVar27 = plVar33 + 1;
    lVar30 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
      func_0x0412c2d0(plVar33);
    }
  }
  pbVar23 = pbStack_260;
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (pbStack_260 != (byte *)0x0) {
    LOCK();
    plVar33 = (long *)((long)pbStack_260 + 8);
    lVar30 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbStack_260 + 0x10))(pbStack_260);
      func_0x0412c2d0(pbVar23);
    }
  }
  LOCK();
  lVar30 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar30 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_378 != (byte *)0x0) {
    (**(code **)(pbStack_378 + 8))(&pbStack_378);
  }
  if ((uStack_3e0 & 1) != 0) {
    func_0x0412a280(uStack_3d0,uStack_3e0 & 0xfffffffffffffffe);
  }
  if ((uStack_3f8 & 1) != 0) {
    func_0x0412a280(uStack_3e8,uStack_3f8 & 0xfffffffffffffffe);
  }
  if ((uStack_410 & 1) != 0) {
    func_0x0412a280(uStack_400,uStack_410 & 0xfffffffffffffffe);
  }
  if ((uStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_440 & 1) != 0) {
    func_0x0412a280(uStack_430,(ulong)pbStack_440 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_330 & 1) != 0) {
    func_0x0412a280(pbStack_320,(ulong)uStack_330 & 0xfffffffffffffffe);
  }
  pbStack_458 = (byte *)0xc8;
  pbStack_450 = (byte *)((ulong)pbStack_450 & 0xffffffffffffff00);
  func_0x05640c10(&pbStack_448,auStack_b8);
  pbStack_260 = (byte *)0x0;
  pbStack_268 = &UNK_0efd2488;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  ppbVar37 = (byte **)(plVar20 + 0x26);
  *(undefined1 *)(puVar19 + 1) = pbStack_450._0_1_;
  *puVar19 = pbStack_458;
  puVar19[2] = pbStack_448;
  puVar19[6] = uStack_428;
  puVar19[4] = pbStack_438;
  puVar19[5] = uStack_430;
  pbStack_438 = (byte *)0x0;
  uStack_430 = 0;
  uStack_428 = 0;
  puVar19[9] = uStack_410;
  puVar19[7] = uStack_420;
  puVar19[8] = uStack_418;
  uStack_420 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  puVar19[0xc] = uStack_3f8;
  puVar19[10] = uStack_408;
  puVar19[0xb] = uStack_400;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  puVar19[0xf] = uStack_3e0;
  puVar19[0xd] = uStack_3f0;
  puVar19[0xe] = uStack_3e8;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  puVar19[0x12] = uStack_3c8;
  *(undefined4 *)(puVar19 + 0x10) = (undefined4)uStack_3d8;
  *(undefined4 *)((long)puVar19 + 0x84) = uStack_3d8._4_4_;
  *(undefined4 *)(puVar19 + 0x11) = (undefined4)uStack_3d0;
  *(undefined4 *)((long)puVar19 + 0x8c) = uStack_3d0._4_4_;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  pbStack_260 = (byte *)puVar19;
  if (ppbVar37 == &pbStack_268) {
    func_0x05611e70(puVar19 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar19);
  }
  else {
    pbVar23 = &UNK_0efd2488;
    if ((*ppbVar37 == (byte *)0x0) ||
       ((**(code **)(*ppbVar37 + 8))(ppbVar37), pbVar23 = pbStack_268, pbStack_268 != (byte *)0x0))
    {
      (**(code **)pbVar23)(&pbStack_268,ppbVar37);
      pbVar23 = pbStack_268;
    }
    else {
      pbVar23 = (byte *)0x0;
    }
    pbStack_268 = (byte *)0x0;
    *ppbVar37 = pbVar23;
  }
  if ((uStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,uStack_3d8 & 0xfffffffffffffffe);
  }
  if ((uStack_3f0 & 1) != 0) {
    func_0x0412a280(uStack_3e0,uStack_3f0 & 0xfffffffffffffffe);
  }
  if ((uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,uStack_408 & 0xfffffffffffffffe);
  }
  if ((uStack_420 & 1) != 0) {
    func_0x0412a280(uStack_410,uStack_420 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,(ulong)pbStack_438 & 0xfffffffffffffffe);
  }
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  (**(code **)(*plVar3 + 0x18))(plVar3,&uStack_1b8,&uStack_1d8);
  if ((uStack_1d8 & 1) != 0) {
    func_0x0412a280(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
  }
  if ((uStack_1b8 & 1) != 0) {
    func_0x0412a280(uStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
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
  if ((bStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,
                    CONCAT62(uStack_fe,CONCAT11(uStack_ff,bStack_100)) & 0xfffffffffffffffe);
  }
  if ((bStack_148 & 1) != 0) {
    func_0x0412a280(uStack_138,
                    CONCAT53(uStack_145,CONCAT12(uStack_146,CONCAT11(uStack_147,bStack_148))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_2c8 & 1) != 0) {
    func_0x0412a280(puStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
  }
  if ((bStack_2b0 & 1) != 0) {
    func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x123d5ae  self::DEFAULT_COOLDOWN_IN_SECONDS
 * 0x123d5be  OLDOWN_IN_SECONDS
 * 0x12a49c3  minecraft:behavior.teleport_to_owner
 * 0x12a49d3  or.teleport_to_owner
 * 0x1494d5d  <any array element>
 */
