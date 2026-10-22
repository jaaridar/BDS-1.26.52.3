/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5a40690 (ELF vaddr 0x5940690)
 * Label: caller-of-callee
 * Body:  [[05a40690, 05a41cdc] [05a41ce0, 05a422a5] [05a422b0, 05a422ec] [05a422f0, 05a43576] [05a43a4c, 05a43b0a] [05a43b0f, 05a43bca] [05a43ea0, 05a43eb2]]
 * Ghidra: FUN_05a40690
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05a40690(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  long *plVar23;
  long *plVar24;
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
  byte **ppbVar35;
  long lVar36;
  byte *pbVar37;
  byte *pbVar38;
  bool bVar39;
  byte *pbStack_438;
  byte *pbStack_430;
  byte *pbStack_428;
  byte *pbStack_420;
  byte *pbStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_391;
  long *plStack_390;
  byte *pbStack_388;
  byte bStack_380;
  undefined5 uStack_37f;
  undefined2 uStack_37a;
  undefined1 uStack_378;
  undefined5 uStack_377;
  undefined2 uStack_372;
  undefined8 uStack_370;
  undefined8 uStack_368;
  byte *pbStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  byte *pbStack_330;
  undefined8 uStack_328;
  byte *pbStack_308;
  undefined8 *puStack_300;
  byte *pbStack_2c8;
  ulong uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  byte *pbStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  byte bStack_280;
  undefined4 uStack_27f;
  undefined4 uStack_27b;
  undefined4 uStack_277;
  undefined4 uStack_273;
  undefined1 uStack_26f;
  undefined6 uStack_26e;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined4 *puStack_258;
  byte bStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined1 uStack_247;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  uint *puStack_1e0;
  byte *pbStack_1d8;
  byte bStack_1d0;
  undefined1 uStack_1cf;
  undefined1 uStack_1ce;
  undefined5 uStack_1cd;
  undefined8 uStack_1c0;
  byte bStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined5 uStack_1b5;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined5 uStack_19d;
  undefined8 uStack_190;
  byte *pbStack_188;
  long *plStack_180;
  byte bStack_178;
  undefined7 uStack_177;
  undefined8 uStack_168;
  byte bStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_150;
  byte bStack_148;
  undefined7 uStack_147;
  undefined8 uStack_138;
  byte bStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_120;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  byte *pbStack_108;
  byte bStack_f8;
  undefined1 uStack_f7;
  undefined6 uStack_f6;
  undefined8 uStack_e8;
  byte bStack_e0;
  undefined1 uStack_df;
  undefined6 uStack_de;
  undefined8 uStack_d0;
  byte *pbStack_c8;
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
  
  puStack_258 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_258 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar29 = _UNK_013acb07;
  uStack_268 = 0x31;
  uStack_260 = 0x28;
  *(undefined8 *)(puStack_258 + 4) = _DAT_013acaff;
  *(undefined8 *)(puStack_258 + 6) = uVar29;
  uVar12 = _UNK_013acafb;
  uVar11 = _UNK_013acaf7;
  uVar10 = _UNK_013acaf3;
  *puStack_258 = _DAT_013acaef;
  puStack_258[1] = uVar10;
  puStack_258[2] = uVar11;
  puStack_258[3] = uVar12;
  *(undefined8 *)(puStack_258 + 8) = 0x676e69706d756a5f;
  *(undefined1 *)(puStack_258 + 10) = 0;
  bStack_250 = 0x10;
  uStack_24f = 0x7469726f697270;
  uStack_248 = 0x79;
  uStack_247 = 0;
  bStack_1a0 = 2;
  uStack_19f = 0x30;
  uStack_19e = 0;
  bStack_1b8 = 2;
  uStack_1b7 = 0x30;
  uStack_1b6 = 0;
  bStack_e0 = 0;
  uStack_df = 0;
  func_0x0564aad0(&pbStack_188,&uStack_268,&bStack_250,0,&bStack_1a0,0,&bStack_1b8,&bStack_e0);
  uVar29 = *param_1;
  uStack_2c0 = 0;
  if ((uStack_118 & 1) == 0) {
    pbStack_2a8 = pbStack_108;
    uStack_2b8 = uStack_118;
    uStack_2b4 = uStack_114;
    uStack_2b0 = uStack_110;
    uStack_2ac = uStack_10c;
  }
  else {
    func_0x0412e5e0(&uStack_2b8,pbStack_108,CONCAT44(uStack_10c,uStack_110));
  }
  uStack_2a0 = 0;
  if ((uStack_2b8 & 1) == 0) {
    if ((byte)uStack_2b8 >> 1 != 0) goto LAB_05a40828;
LAB_05a40916:
    uVar26 = 0;
  }
  else {
    if (CONCAT44(uStack_2ac,uStack_2b0) == 0) goto LAB_05a40916;
LAB_05a40828:
    if ((uStack_2b8 & 1) == 0) {
      pbVar22 = (byte *)((long)&uStack_2b8 + 1);
      if (pbVar22 != (byte *)0x0) goto LAB_05a4084f;
      goto LAB_05a40916;
    }
    pbVar22 = pbStack_2a8;
    if (pbStack_2a8 == (byte *)0x0) goto LAB_05a40916;
LAB_05a4084f:
    if (*pbVar22 == 0) goto LAB_05a40916;
    uVar26 = 0xcbf29ce484222325;
    uVar18 = func_0x0eee2e90(pbVar22);
    if (uVar18 != 0) {
      uVar32 = (ulong)((uint)uVar18 & 7);
      if (7 < uVar18) {
        uVar18 = uVar18 & 0xfffffffffffffff8;
        do {
          uVar26 = (((((((uVar26 * 0x100000001b3 ^ (ulong)*pbVar22) * 0x100000001b3 ^
                        (ulong)pbVar22[1]) * 0x100000001b3 ^ (ulong)pbVar22[2]) * 0x100000001b3 ^
                      (ulong)pbVar22[3]) * 0x100000001b3 ^ (ulong)pbVar22[4]) * 0x100000001b3 ^
                    (ulong)pbVar22[5]) * 0x100000001b3 ^ (ulong)pbVar22[6]) * 0x100000001b3 ^
                   (ulong)pbVar22[7];
          pbVar22 = pbVar22 + 8;
          uVar18 = uVar18 - 8;
        } while (uVar18 != 0);
      }
      if (uVar32 != 0) {
        uVar18 = 0;
        do {
          uVar26 = uVar26 * 0x100000001b3 ^ (ulong)pbVar22[uVar18];
          uVar18 = uVar18 + 1;
        } while (uVar32 != uVar18);
      }
    }
  }
  pbStack_438 = (byte *)0x0;
  uStack_2c0 = uVar26;
  func_0x0564b850(&pbStack_430,&pbStack_188);
  uStack_340 = (undefined8 *)0x0;
  pbStack_348 = &UNK_0efff2c0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar19 = pbStack_438;
  puVar19[1] = pbStack_430;
  puVar19[5] = uStack_410;
  puVar19[3] = pbStack_420;
  puVar19[4] = pbStack_418;
  pbStack_420 = (byte *)0x0;
  pbStack_418 = (byte *)0x0;
  uStack_410 = 0;
  puVar19[8] = uStack_3f8;
  puVar19[6] = uStack_408;
  puVar19[7] = uStack_400;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  puVar19[0xb] = uStack_3e0;
  puVar19[9] = uStack_3f0;
  puVar19[10] = uStack_3e8;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  puVar19[0xe] = uStack_3c8;
  puVar19[0xc] = uStack_3d8;
  puVar19[0xd] = uStack_3d0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  puVar19[0x11] = uStack_3b0;
  *(undefined4 *)(puVar19 + 0xf) = (undefined4)uStack_3c0;
  *(undefined4 *)((long)puVar19 + 0x7c) = uStack_3c0._4_4_;
  *(undefined4 *)(puVar19 + 0x10) = (undefined4)uStack_3b8;
  *(undefined4 *)((long)puVar19 + 0x84) = uStack_3b8._4_4_;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  pbStack_308 = (byte *)0x0;
  puStack_300 = (undefined8 *)0x0;
  uStack_340 = puVar19;
  if (pbStack_348 == (byte *)0x0) {
    pbVar22 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_348)(&pbStack_348,&pbStack_308);
    pbVar22 = pbStack_348;
  }
  pbStack_348 = (byte *)0x0;
  pbStack_308 = pbVar22;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efff0f0;
  pbStack_388 = (byte *)0x0;
  bStack_380 = 0;
  uStack_37f = 0;
  uStack_37a = 0;
  if (pbVar22 == (byte *)0x0) {
    pbStack_388 = (byte *)0x0;
  }
  else {
    (**(code **)pbVar22)(&pbStack_308,&pbStack_388);
    pbStack_388 = pbStack_308;
  }
  pbStack_308 = (byte *)0x0;
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
  func_0x04aa75f0(plVar20 + 0xe,&uStack_391,&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  plVar24 = plVar20 + 0x11;
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
  plVar20[4] = (long)&UNK_0efff140;
  plVar20[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar20 + 0x2f) = 1;
  plVar20[0x30] = 0;
  plVar20[0x31] = 0;
  if (pbStack_388 == (byte *)0x0) {
    pbVar22 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_388)(&pbStack_388,plVar20 + 0x30);
    pbVar22 = pbStack_388;
  }
  pbStack_388 = (byte *)0x0;
  plVar20[0x30] = (long)pbVar22;
  puVar3 = (uint *)(plVar20 + 0x12);
  if (plVar24 == (long *)&DAT_0f552078) {
    plVar20[0x15] = 0;
  }
  else {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar20[0x14] = _DAT_0f552090;
        uVar12 = uRam000000000f55208c;
        uVar11 = _DAT_0f552088;
        uVar10 = uRam000000000f552084;
        *puVar3 = _DAT_0f552080;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar10;
        *(undefined4 *)(plVar20 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar39 = (_DAT_0f552080 & 1) != 0;
      lVar30 = 0xf552081;
      if (bVar39) {
        lVar30 = _DAT_0f552090;
      }
      uVar26 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar39) {
        uVar26 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      FUN_04885120(puVar3,lVar30,uVar26);
    }
    plVar20[0x11] = _DAT_0f552078;
    plVar20[0x15] = 0;
    if (pbStack_388 != (byte *)0x0) {
      (**(code **)(pbStack_388 + 8))(&pbStack_388);
    }
  }
  plVar33 = plVar20 + 1;
  if (pbStack_308 != (byte *)0x0) {
    (**(code **)(pbStack_308 + 8))(&pbStack_308);
  }
  LOCK();
  *plVar33 = *plVar33 + 1;
  UNLOCK();
  plStack_390 = param_1;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = &UNK_0efff220;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[4] = &UNK_0efff270;
  puVar19[0xe] = plVar20 + 4;
  puVar19[0xf] = plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  bStack_380 = (byte)puVar19;
  uStack_37f = (undefined5)((ulong)puVar19 >> 8);
  uStack_37a = (undefined2)((ulong)puVar19 >> 0x30);
  pbStack_388 = (byte *)(puVar19 + 4);
  puVar21 = (undefined4 *)func_0x05a55620(uVar29,&uStack_2c0);
  plVar23 = *(long **)(puVar21 + 0x24);
  if (plVar23 < *(long **)(puVar21 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar24) {
      if ((*puVar3 & 1) == 0) {
        plVar23[3] = plVar20[0x14];
        lVar30 = plVar20[0x13];
        plVar23[1] = *(long *)puVar3;
        plVar23[2] = lVar30;
      }
      else {
        func_0x04885070(plVar23 + 1,plVar20[0x14],plVar20[0x13]);
      }
    }
    *plVar23 = *plVar24;
    plVar23[5] = (long)(puVar19 + 4);
    plVar23[6] = (long)puVar19;
    LOCK();
    puVar19[1] = puVar19[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar21 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x05a573e0(puVar21 + 0x22,plVar24,&pbStack_388);
  }
  plVar24 = plStack_390;
  *(long **)(puVar21 + 0x24) = plVar23;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar23 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  plVar23 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar11;
  *(undefined4 *)(plVar20 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar13;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar27 = plVar23 + 1;
    lVar30 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  plVar23 = (long *)CONCAT26(uStack_37a,CONCAT51(uStack_37f,bStack_380));
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar27 = plVar23 + 1;
    lVar30 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  LOCK();
  lVar30 = *plVar33;
  *plVar33 = *plVar33 + -1;
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
    lVar30 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_348 != (byte *)0x0) {
    (**(code **)(pbStack_348 + 8))(&pbStack_348);
  }
  if ((uStack_3c0 & 1) != 0) {
    func_0x0412a280(uStack_3b0,uStack_3c0 & 0xfffffffffffffffe);
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
  if (((ulong)pbStack_420 & 1) != 0) {
    func_0x0412a280(uStack_410,(ulong)pbStack_420 & 0xfffffffffffffffe);
  }
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(pbStack_2a8,CONCAT44(uStack_2b4,uStack_2b8) & 0xfffffffffffffffe);
  }
  pbStack_438 = (byte *)0x0;
  pbStack_430 = (byte *)((ulong)pbStack_430 & 0xffffffffffffff00);
  func_0x0564b850(&pbStack_428,&pbStack_188);
  bStack_380 = 0;
  uStack_37f = 0;
  uStack_37a = 0;
  pbStack_388 = &UNK_0efff2d8;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  ppbVar35 = (byte **)(plVar20 + 0x26);
  *(undefined1 *)(puVar19 + 1) = pbStack_430._0_1_;
  *puVar19 = pbStack_438;
  puVar19[2] = pbStack_428;
  puVar19[6] = uStack_408;
  puVar19[4] = pbStack_418;
  puVar19[5] = uStack_410;
  pbStack_418 = (byte *)0x0;
  uStack_410 = 0;
  uStack_408 = 0;
  puVar19[9] = uStack_3f0;
  puVar19[7] = uStack_400;
  puVar19[8] = uStack_3f8;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  puVar19[0xc] = uStack_3d8;
  puVar19[10] = uStack_3e8;
  puVar19[0xb] = uStack_3e0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  puVar19[0xf] = uStack_3c0;
  puVar19[0xd] = uStack_3d0;
  puVar19[0xe] = uStack_3c8;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  puVar19[0x12] = uStack_3a8;
  *(undefined4 *)(puVar19 + 0x10) = (undefined4)uStack_3b8;
  *(undefined4 *)((long)puVar19 + 0x84) = uStack_3b8._4_4_;
  *(undefined4 *)(puVar19 + 0x11) = (undefined4)uStack_3b0;
  *(undefined4 *)((long)puVar19 + 0x8c) = uStack_3b0._4_4_;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  bStack_380 = (byte)puVar19;
  uStack_37f = (undefined5)((ulong)puVar19 >> 8);
  uStack_37a = (undefined2)((ulong)puVar19 >> 0x30);
  if (ppbVar35 == &pbStack_388) {
    func_0x0564b7b0(puVar19 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar19);
  }
  else {
    pbVar22 = &UNK_0efff2d8;
    if ((*ppbVar35 == (byte *)0x0) ||
       ((**(code **)(*ppbVar35 + 8))(ppbVar35), pbVar22 = pbStack_388, pbStack_388 != (byte *)0x0))
    {
      (**(code **)pbVar22)(&pbStack_388,ppbVar35);
      pbVar22 = pbStack_388;
      pbStack_388 = (byte *)0x0;
      *ppbVar35 = pbVar22;
    }
    else {
      pbStack_388 = (byte *)0x0;
      *ppbVar35 = (byte *)0x0;
    }
  }
  if ((uStack_3b8 & 1) != 0) {
    func_0x0412a280(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  if ((uStack_3d0 & 1) != 0) {
    func_0x0412a280(uStack_3c0,uStack_3d0 & 0xfffffffffffffffe);
  }
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if ((uStack_400 & 1) != 0) {
    func_0x0412a280(uStack_3f0,uStack_400 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_418 & 1) != 0) {
    func_0x0412a280(uStack_408,(ulong)pbStack_418 & 0xfffffffffffffffe);
  }
  if ((uStack_118 & 1) != 0) {
    func_0x0412a280(pbStack_108,CONCAT44(uStack_114,uStack_118) & 0xfffffffffffffffe);
  }
  if ((bStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,CONCAT71(uStack_12f,bStack_130) & 0xfffffffffffffffe);
  }
  if ((bStack_148 & 1) != 0) {
    func_0x0412a280(uStack_138,CONCAT71(uStack_147,bStack_148) & 0xfffffffffffffffe);
  }
  if ((bStack_160 & 1) != 0) {
    func_0x0412a280(uStack_150,CONCAT71(uStack_15f,bStack_160) & 0xfffffffffffffffe);
  }
  if ((bStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,CONCAT71(uStack_177,bStack_178) & 0xfffffffffffffffe);
  }
  if ((bStack_e0 & 1) != 0) {
    func_0x0412a280(uStack_d0,CONCAT62(uStack_de,CONCAT11(uStack_df,bStack_e0)) & 0xfffffffffffffffe
                   );
  }
  if ((bStack_1b8 & 1) != 0) {
    func_0x0412a280(uStack_1a8,
                    CONCAT53(uStack_1b5,CONCAT12(uStack_1b6,CONCAT11(uStack_1b7,bStack_1b8))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_1a0 & 1) != 0) {
    func_0x0412a280(uStack_190,
                    CONCAT53(uStack_19d,CONCAT12(uStack_19e,CONCAT11(uStack_19f,bStack_1a0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_250 & 1) != 0) {
    func_0x0412a280(uStack_240,CONCAT71(uStack_24f,bStack_250) & 0xfffffffffffffffe);
  }
  uVar29 = *plVar24;
  uStack_372 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  bStack_380 = 0x1a;
  uStack_37f = 0x72746e6f63;
  uStack_37a = 0x6c6f;
  uStack_378 = 0x5f;
  uStack_377 = 0x7367616c66;
  pbStack_388 = (byte *)0x86e3afe1b1c6e2ac;
  puStack_300 = (undefined8 *)0x0;
  pbStack_308 = &UNK_0efff4e8;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efff300;
  pbStack_438 = (byte *)0x0;
  pbStack_430 = (byte *)0x0;
  if (pbStack_308 == (byte *)0x0) {
    pbStack_438 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_308)(&pbStack_308,&pbStack_438);
    pbStack_438 = pbStack_308;
  }
  pbStack_308 = (byte *)0x0;
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
  func_0x04aa75f0(plVar20 + 0xe,&pbStack_348,&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  plVar24 = plVar20 + 0x11;
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
  plVar20[4] = (long)&UNK_0efff350;
  ppbVar35 = (byte **)(plVar20 + 0x2e);
  plVar20[0x2e] = 0;
  plVar20[0x2f] = 0;
  if (ppbVar35 != &pbStack_438) {
    if (pbStack_438 == (byte *)0x0) {
      pbVar22 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_438)(&pbStack_438,ppbVar35);
      pbVar22 = pbStack_438;
    }
    pbStack_438 = (byte *)0x0;
    *ppbVar35 = pbVar22;
  }
  puVar3 = (uint *)(plVar20 + 0x12);
  if (plVar24 != (long *)&DAT_0f551f58) {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar20[0x14] = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar3 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar10;
        *(undefined4 *)(plVar20 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar39 = (_DAT_0f551f60 & 1) != 0;
      lVar30 = 0xf551f61;
      if (bVar39) {
        lVar30 = _DAT_0f551f70;
      }
      uVar26 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar39) {
        uVar26 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar3,lVar30,uVar26);
    }
  }
  plVar33 = plVar20 + 1;
  plVar20[0x11] = _DAT_0f551f58;
  plVar20[0x15] = 0;
  if (pbStack_438 != (byte *)0x0) {
    (**(code **)(pbStack_438 + 8))(&pbStack_438);
  }
  LOCK();
  *plVar33 = *plVar33 + 1;
  UNLOCK();
  pbVar22 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar22 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar22[8] = 0;
  pbVar22[9] = 0;
  pbVar22[10] = 0;
  pbVar22[0xb] = 0;
  pbVar22[0xc] = 0;
  pbVar22[0xd] = 0;
  pbVar22[0xe] = 0;
  pbVar22[0xf] = 0;
  pbVar22[0x10] = 0;
  pbVar22[0x11] = 0;
  pbVar22[0x12] = 0;
  pbVar22[0x13] = 0;
  pbVar22[0x14] = 0;
  pbVar22[0x15] = 0;
  pbVar22[0x16] = 0;
  pbVar22[0x17] = 0;
  *(undefined **)pbVar22 = &UNK_0efff448;
  pbVar22[0x30] = 0;
  pbVar22[0x31] = 0;
  pbVar22[0x32] = 0;
  pbVar22[0x33] = 0;
  pbVar22[0x34] = 0;
  pbVar22[0x35] = 0;
  pbVar22[0x36] = 0;
  pbVar22[0x37] = 0;
  pbVar22[0x38] = 0;
  pbVar22[0x39] = 0;
  pbVar22[0x3a] = 0;
  pbVar22[0x3b] = 0;
  pbVar22[0x3c] = 0;
  pbVar22[0x3d] = 0;
  pbVar22[0x3e] = 0;
  pbVar22[0x3f] = 0;
  *(undefined **)(pbVar22 + 0x20) = &UNK_0efff498;
  *(long **)(pbVar22 + 0x70) = plVar20 + 4;
  *(long **)(pbVar22 + 0x78) = plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  pbStack_438 = pbVar22 + 0x20;
  pbStack_430 = pbVar22;
  puVar21 = (undefined4 *)func_0x05a55620(uVar29,&pbStack_388);
  plVar23 = *(long **)(puVar21 + 0x24);
  if (plVar23 < *(long **)(puVar21 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar24) {
      if ((*puVar3 & 1) == 0) {
        plVar23[3] = plVar20[0x14];
        lVar30 = plVar20[0x13];
        plVar23[1] = *(long *)puVar3;
        plVar23[2] = lVar30;
      }
      else {
        func_0x04885070(plVar23 + 1,plVar20[0x14],plVar20[0x13]);
      }
    }
    *plVar23 = *plVar24;
    plVar23[5] = (long)(pbVar22 + 0x20);
    plVar23[6] = (long)pbVar22;
    LOCK();
    *(long *)(pbVar22 + 8) = *(long *)(pbVar22 + 8) + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar21 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x05a573e0(puVar21 + 0x22,plVar24,&pbStack_438);
  }
  *(long **)(puVar21 + 0x24) = plVar23;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar24 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar24 = *plVar24 + 1;
    UNLOCK();
  }
  plVar24 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar11;
  *(undefined4 *)(plVar20 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar13;
  if (plVar24 != (long *)0x0) {
    LOCK();
    plVar23 = plVar24 + 1;
    lVar30 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      func_0x0412c2d0(plVar24);
    }
  }
  pbVar22 = pbStack_430;
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (pbStack_430 != (byte *)0x0) {
    LOCK();
    pbVar37 = pbStack_430 + 8;
    lVar30 = *(long *)pbVar37;
    *(long *)pbVar37 = *(long *)pbVar37 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbStack_430 + 0x10))(pbStack_430);
      func_0x0412c2d0(pbVar22);
    }
  }
  LOCK();
  lVar30 = *plVar33;
  *plVar33 = *plVar33 + -1;
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
    lVar30 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_308 != (byte *)0x0) {
    (**(code **)(pbStack_308 + 8))(&pbStack_308);
  }
  if ((bStack_380 & 1) != 0) {
    func_0x0412a280(uStack_370,
                    CONCAT26(uStack_37a,CONCAT51(uStack_37f,bStack_380)) & 0xfffffffffffffffe);
  }
  uStack_340 = (undefined8 *)0x0;
  bStack_380 = 0;
  uStack_37f = 0;
  uStack_37a = 0;
  pbStack_348 = (byte *)0x0;
  pbStack_388 = &UNK_0efff738;
  plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar24 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  pbStack_438 = pbStack_388;
  plVar24[1] = 0;
  plVar24[2] = 0;
  *plVar24 = (long)&UNK_0efff510;
  pbStack_430 = (byte *)0x0;
  pbStack_388 = (byte *)0x0;
  plVar24[4] = (long)&UNK_0f2ccd78;
  plVar24[5] = 0;
  plVar24[6] = 0;
  plVar24[7] = 0;
  plVar24[8] = 0;
  plVar24[9] = 0;
  plVar24[10] = 0;
  plVar24[0xb] = 0;
  plVar24[0xc] = 0;
  *(undefined1 *)(plVar24 + 0xd) = 0;
  func_0x04aa75f0(plVar24 + 0xe,&uStack_2c0,&UNK_01254d89);
  *(undefined1 *)(plVar24 + 0x10) = 0;
  pbVar22 = (byte *)(plVar24 + 0x11);
  plVar24[0x11] = 0;
  plVar24[0x12] = 0;
  plVar24[0x13] = 0;
  plVar24[0x14] = 0;
  plVar24[0x15] = 0;
  plVar24[0x16] = 0;
  plVar24[0x17] = 0xffffffff;
  plVar24[0x26] = 0;
  plVar24[0x27] = 0;
  plVar24[0x18] = 0;
  plVar24[0x19] = 0;
  plVar24[0x1a] = 0;
  plVar24[0x1b] = 0;
  plVar24[0x1c] = 0;
  plVar24[0x1d] = 0;
  plVar24[0x1e] = 0;
  plVar24[0x1f] = 0;
  plVar24[4] = (long)&UNK_0efff560;
  plVar24[0x2e] = 0;
  plVar24[0x2f] = 0;
  plVar24[0x30] = 0;
  plVar24[0x31] = 0;
  plVar24[0x32] = 0;
  plVar24[0x33] = 0;
  plVar24[0x34] = 0;
  *(undefined4 *)(plVar24 + 0x35) = 0x3f800000;
  pbVar37 = (byte *)(plVar24 + 0x36);
  plVar24[0x36] = 0;
  plVar24[0x37] = 0;
  if (pbStack_438 == (byte *)0x0) {
    pbVar25 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_438)(&pbStack_438,pbVar37);
    pbVar25 = pbStack_438;
  }
  pbStack_438 = (byte *)0x0;
  plVar24[0x36] = (long)pbVar25;
  *(undefined1 *)(plVar24 + 0x3e) = 0;
  puStack_1e0 = (uint *)(plVar24 + 0x12);
  if (pbVar22 != &DAT_0f552138) {
    if ((*puStack_1e0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar24[0x14] = _DAT_0f552150;
        uVar12 = uRam000000000f55214c;
        uVar11 = _DAT_0f552148;
        uVar10 = uRam000000000f552144;
        *puStack_1e0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar24 + 0x94) = uVar10;
        *(undefined4 *)(plVar24 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar24 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_1e0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar39 = (_DAT_0f552140 & 1) != 0;
      lVar30 = 0xf552141;
      if (bVar39) {
        lVar30 = _DAT_0f552150;
      }
      uVar26 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar39) {
        uVar26 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      FUN_04885120(puStack_1e0,lVar30,uVar26);
    }
  }
  plVar24[0x11] = _DAT_0f552138;
  plVar24[0x15] = 0;
  if (pbStack_438 != (byte *)0x0) {
    (**(code **)(pbStack_438 + 8))(&pbStack_438);
  }
  plVar33 = plVar24 + 1;
  if (pbStack_388 != (byte *)0x0) {
    (**(code **)(pbStack_388 + 8))(&pbStack_388);
  }
  LOCK();
  *plVar33 = *plVar33 + 1;
  UNLOCK();
  plStack_c0 = plVar33;
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
  *(undefined **)pbVar25 = &UNK_0efff640;
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
  *(undefined **)(pbVar25 + 0x20) = &UNK_0efff690;
  *(long **)(pbVar25 + 0x70) = plVar24 + 4;
  *(long **)(pbVar25 + 0x78) = plVar24;
  LOCK();
  plVar24[1] = plVar24[1] + 1;
  UNLOCK();
  pbStack_1d8 = pbVar25 + 8;
  puVar6 = (undefined4 *)plVar20[0x1c];
  puVar5 = (undefined4 *)plVar20[0x1b];
  for (puVar21 = puVar5; puVar21 != puVar6; puVar21 = puVar21 + 0x2a) {
    if ((*(long *)(puVar21 + 0x1e) == 0) && (*(long *)(puVar21 + 0x20) == -1)) goto LAB_05a42015;
  }
  if ((undefined4 *)plVar20[0x1d] <= puVar6) {
    pbVar38 = (byte *)((long)puVar6 - (long)puVar5);
    uVar26 = ((long)pbVar38 >> 3) * -0x30c30c30c30c30c3 + 1;
    pbVar34 = pbVar25;
    if (0x186186186186186 < uVar26) goto LAB_05a4354c;
    lVar30 = plVar20[0x1d] - (long)puVar5 >> 3;
    uVar18 = lVar30 * -0x6186186186186186;
    if (uVar26 < uVar18) {
      uVar26 = uVar18;
    }
    pbVar34 = (byte *)(plVar20 + 0x1b);
    if (0xc30c30c30c30c2 < (ulong)(lVar30 * -0x30c30c30c30c30c3)) {
      uVar26 = 0x186186186186186;
    }
    pbStack_418 = pbVar34;
    if (uVar26 == 0) {
      pbVar37 = (byte *)0x0;
LAB_05a41dcb:
      pbStack_430 = pbVar38 + (long)pbVar37;
      pbStack_420 = pbVar37 + uVar26 * 0xa8;
      pbStack_438 = pbVar37;
      pbStack_428 = pbStack_430;
      pbStack_2c8 = pbVar34;
      func_0x05a730f0(pbStack_430);
      pbVar34 = pbStack_428 + 0xa8;
      lVar30 = plVar20[0x1b];
      lVar7 = plVar20[0x1c];
      pbVar37 = pbStack_430 + (lVar30 - lVar7);
      if (lVar30 != lVar7) {
        lVar36 = 0;
        do {
          uVar29 = ((undefined8 *)(lVar30 + lVar36))[1];
          *(undefined8 *)(pbVar37 + lVar36) = *(undefined8 *)(lVar30 + lVar36);
          *(undefined8 *)(pbVar37 + lVar36 + 8) = uVar29;
          *(undefined8 *)(lVar30 + lVar36) = 0;
          ((undefined8 *)(lVar30 + lVar36))[1] = 0;
          pbVar38 = pbVar37 + lVar36 + 0x20;
          pbVar38[0] = 0;
          pbVar38[1] = 0;
          pbVar38[2] = 0;
          pbVar38[3] = 0;
          pbVar38[4] = 0;
          pbVar38[5] = 0;
          pbVar38[6] = 0;
          pbVar38[7] = 0;
          pbVar38[8] = 0;
          pbVar38[9] = 0;
          pbVar38[10] = 0;
          pbVar38[0xb] = 0;
          pbVar38[0xc] = 0;
          pbVar38[0xd] = 0;
          pbVar38[0xe] = 0;
          pbVar38[0xf] = 0;
          pbVar38 = pbVar37 + lVar36 + 0x10;
          pbVar38[0] = 0;
          pbVar38[1] = 0;
          pbVar38[2] = 0;
          pbVar38[3] = 0;
          pbVar38[4] = 0;
          pbVar38[5] = 0;
          pbVar38[6] = 0;
          pbVar38[7] = 0;
          pbVar38[8] = 0;
          pbVar38[9] = 0;
          pbVar38[10] = 0;
          pbVar38[0xb] = 0;
          pbVar38[0xc] = 0;
          pbVar38[0xd] = 0;
          pbVar38[0xe] = 0;
          pbVar38[0xf] = 0;
          pbVar38 = pbVar37 + lVar36 + 0x30;
          pbVar38[0] = 0;
          pbVar38[1] = 0;
          pbVar38[2] = 0;
          pbVar38[3] = 0;
          pbVar38[4] = 0;
          pbVar38[5] = 0;
          pbVar38[6] = 0;
          pbVar38[7] = 0;
          *(undefined8 *)(pbVar37 + lVar36 + 0x28) = *(undefined8 *)(lVar30 + 0x28 + lVar36);
          puVar21 = (undefined4 *)(lVar30 + 0x18 + lVar36);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          pbVar38 = pbVar37 + lVar36 + 0x18;
          *(undefined4 *)pbVar38 = *puVar21;
          *(undefined4 *)(pbVar38 + 4) = uVar10;
          *(undefined4 *)(pbVar38 + 8) = uVar11;
          *(undefined4 *)(pbVar38 + 0xc) = uVar12;
          *(undefined2 *)(lVar30 + 0x18 + lVar36) = 0;
          *(undefined8 *)(pbVar37 + lVar36 + 0x10) = *(undefined8 *)(lVar30 + 0x10 + lVar36);
          FUN_04167a20(pbVar37 + lVar36 + 0x38,lVar30 + lVar36 + 0x38);
          puVar19 = (undefined8 *)(lVar30 + 0x40 + lVar36);
          uVar29 = puVar19[1];
          *(undefined8 *)(pbVar37 + lVar36 + 0x40) = *puVar19;
          *(undefined8 *)(pbVar37 + lVar36 + 0x40 + 8) = uVar29;
          puVar19 = (undefined8 *)(lVar30 + 0x50 + lVar36);
          uVar29 = puVar19[1];
          *(undefined8 *)(pbVar37 + lVar36 + 0x50) = *puVar19;
          *(undefined8 *)(pbVar37 + lVar36 + 0x50 + 8) = uVar29;
          puVar19 = (undefined8 *)(lVar30 + 0x60 + lVar36);
          uVar29 = puVar19[1];
          *(undefined8 *)(pbVar37 + lVar36 + 0x60) = *puVar19;
          *(undefined8 *)(pbVar37 + lVar36 + 0x60 + 8) = uVar29;
          puVar19 = (undefined8 *)(lVar30 + 0x60 + lVar36);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(pbVar37 + lVar36 + 0x70) = *(undefined8 *)(lVar30 + 0x70 + lVar36);
          puVar19 = (undefined8 *)(lVar30 + 0x78 + lVar36);
          uVar29 = puVar19[1];
          *(undefined8 *)(pbVar37 + lVar36 + 0x78) = *puVar19;
          *(undefined8 *)(pbVar37 + lVar36 + 0x78 + 8) = uVar29;
          pbVar38 = pbVar37 + lVar36 + 0x88;
          pbVar38[0] = 0;
          pbVar38[1] = 0;
          pbVar38[2] = 0;
          pbVar38[3] = 0;
          pbVar38[4] = 0;
          pbVar38[5] = 0;
          pbVar38[6] = 0;
          pbVar38[7] = 0;
          pbVar38[8] = 0;
          pbVar38[9] = 0;
          pbVar38[10] = 0;
          pbVar38[0xb] = 0;
          pbVar38[0xc] = 0;
          pbVar38[0xd] = 0;
          pbVar38[0xe] = 0;
          pbVar38[0xf] = 0;
          pbVar38 = pbVar37 + lVar36 + 0x98;
          pbVar38[0] = 0;
          pbVar38[1] = 0;
          pbVar38[2] = 0;
          pbVar38[3] = 0;
          pbVar38[4] = 0;
          pbVar38[5] = 0;
          pbVar38[6] = 0;
          pbVar38[7] = 0;
          puVar21 = (undefined4 *)(lVar30 + 0x88 + lVar36);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          pbVar38 = pbVar37 + lVar36 + 0x88;
          *(undefined4 *)pbVar38 = *puVar21;
          *(undefined4 *)(pbVar38 + 4) = uVar10;
          *(undefined4 *)(pbVar38 + 8) = uVar11;
          *(undefined4 *)(pbVar38 + 0xc) = uVar12;
          *(undefined8 *)(pbVar37 + lVar36 + 0x98) = *(undefined8 *)(lVar30 + 0x98 + lVar36);
          puVar19 = (undefined8 *)(lVar30 + 0x88 + lVar36);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined8 *)(lVar30 + 0x98 + lVar36) = 0;
          *(undefined2 *)(pbVar37 + lVar36 + 0xa0) = *(undefined2 *)(lVar30 + 0xa0 + lVar36);
          lVar1 = lVar30 + lVar36;
          lVar36 = lVar36 + 0xa8;
        } while (lVar1 + 0xa8 != lVar7);
        do {
          func_0x05a6f9f0(lVar30);
          lVar30 = lVar30 + 0xa8;
        } while (lVar30 != lVar7);
        lVar30 = *(long *)pbStack_2c8;
      }
      plVar20[0x1b] = (long)pbVar37;
      plVar20[0x1c] = (long)pbVar34;
      lVar7 = plVar20[0x1d];
      plVar20[0x1d] = (long)pbStack_420;
      if (lVar30 != 0) {
        func_0x0412a280(lVar30,lVar7 - lVar30);
      }
      goto LAB_05a41fa9;
    }
    if (uVar26 < 0x186186186186187) {
      pbVar37 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0xa8);
      if (pbVar37 == (byte *)0x0) {
        func_0x0eec74c0(uVar26 * 0xa8,0);
        pbVar37 = (byte *)0x0;
      }
      goto LAB_05a41dcb;
    }
LAB_05a43542:
    func_0x04882eb0();
LAB_05a43547:
    func_0x05a73330();
LAB_05a4354c:
    uVar29 = func_0x05a73260();
    if ((*pbVar34 & 1) != 0) {
      func_0x0412a280(*(long *)(pbVar38 + 0x18),*(ulong *)(pbVar38 + 8) & 0xfffffffffffffffe);
    }
    plVar24[0x12] = (long)pbVar38;
    plVar24 = plVar20 + 1;
    LOCK();
    lVar30 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    LOCK();
    lVar30 = *(long *)pbVar25;
    *(long *)pbVar25 = *(long *)pbVar25 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbVar37 + 0x10))(pbVar37);
      func_0x0412c2d0(pbVar37);
    }
    LOCK();
    lVar30 = *(long *)pbVar25;
    *(long *)pbVar25 = *(long *)pbVar25 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbVar37 + 0x10))(pbVar37);
      func_0x0412c2d0(pbVar37);
    }
    if (pbStack_308 != (byte *)0x0) {
      (**(code **)(pbStack_308 + 8))(&pbStack_308);
    }
    func_0x05610960(&pbStack_430);
    if (((ulong)uStack_340 & 1) != 0) {
      func_0x0412a280(pbStack_330,(ulong)uStack_340 & 0xfffffffffffffffe);
    }
    func_0x05610960(auStack_b8);
    if ((bStack_f8 & 1) != 0) {
      func_0x0412a280(uStack_e8,
                      CONCAT62(uStack_f6,CONCAT11(uStack_f7,bStack_f8)) & 0xfffffffffffffffe);
    }
    if ((bStack_1d0 & 1) != 0) {
      func_0x0412a280(uStack_1c0,
                      CONCAT53(uStack_1cd,CONCAT12(uStack_1ce,CONCAT11(uStack_1cf,bStack_1d0))) &
                      0xfffffffffffffffe);
    }
    if ((uStack_298 & 1) != 0) {
      func_0x0412a280(puStack_288,uStack_298 & 0xfffffffffffffffe);
    }
    if ((bStack_280 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_26e,CONCAT11(uStack_26f,uStack_273._3_1_)),
                      CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,bStack_280)) &
                      0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar29);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  func_0x05a730f0(puVar6);
  pbVar34 = (byte *)(puVar6 + 0x2a);
  plVar20[0x1c] = (long)pbVar34;
LAB_05a41fa9:
  plVar20[0x1c] = (long)pbVar34;
  pbVar37 = *(byte **)(pbVar34 + -0xa8);
  if ((*pbVar37 & 1) == 0) {
    *pbVar37 = 0x26;
    pbVar37 = pbVar37 + 1;
  }
  else {
    pbVar37[8] = 0x13;
    pbVar37[9] = 0;
    pbVar37[10] = 0;
    pbVar37[0xb] = 0;
    pbVar37[0xc] = 0;
    pbVar37[0xd] = 0;
    pbVar37[0xe] = 0;
    pbVar37[0xf] = 0;
    pbVar37 = *(byte **)(pbVar37 + 0x10);
  }
  uVar12 = _UNK_01494d69;
  uVar11 = _UNK_01494d65;
  uVar10 = _UNK_01494d61;
  *(undefined4 *)pbVar37 = _DAT_01494d5d;
  *(undefined4 *)(pbVar37 + 4) = uVar10;
  *(undefined4 *)(pbVar37 + 8) = uVar11;
  *(undefined4 *)(pbVar37 + 0xc) = uVar12;
  pbVar37[0xf] = 0x65;
  pbVar37[0x10] = 0x6e;
  pbVar37[0x11] = 0x74;
  pbVar37[0x12] = 0x3e;
  pbVar37[0x13] = 0;
  lVar30 = plVar20[0x1c];
  puVar21 = (undefined4 *)(lVar30 - 0xa8);
  *(char *)(lVar30 + -7) = (char)plVar20[0x10];
  *(undefined8 *)(lVar30 + -0x30) = 0;
  *(undefined8 *)(lVar30 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar30 + -8) = 0;
LAB_05a42015:
  pbVar38 = pbVar25 + 0x20;
  pbVar37 = *(byte **)(puVar21 + 0x24);
  if (pbVar37 < *(byte **)(puVar21 + 0x26)) {
    pbVar37[0x10] = 0;
    pbVar37[0x11] = 0;
    pbVar37[0x12] = 0;
    pbVar37[0x13] = 0;
    pbVar37[0x14] = 0;
    pbVar37[0x15] = 0;
    pbVar37[0x16] = 0;
    pbVar37[0x17] = 0;
    pbVar37[0x18] = 0;
    pbVar37[0x19] = 0;
    pbVar37[0x1a] = 0;
    pbVar37[0x1b] = 0;
    pbVar37[0x1c] = 0;
    pbVar37[0x1d] = 0;
    pbVar37[0x1e] = 0;
    pbVar37[0x1f] = 0;
    pbVar37[0] = 0;
    pbVar37[1] = 0;
    pbVar37[2] = 0;
    pbVar37[3] = 0;
    pbVar37[4] = 0;
    pbVar37[5] = 0;
    pbVar37[6] = 0;
    pbVar37[7] = 0;
    pbVar37[8] = 0;
    pbVar37[9] = 0;
    pbVar37[10] = 0;
    pbVar37[0xb] = 0;
    pbVar37[0xc] = 0;
    pbVar37[0xd] = 0;
    pbVar37[0xe] = 0;
    pbVar37[0xf] = 0;
    pbVar37[0x20] = 0;
    pbVar37[0x21] = 0;
    pbVar37[0x22] = 0;
    pbVar37[0x23] = 0;
    pbVar37[0x24] = 0;
    pbVar37[0x25] = 0;
    pbVar37[0x26] = 0;
    pbVar37[0x27] = 0;
    if (pbVar37 != pbVar22) {
      if ((*puStack_1e0 & 1) == 0) {
        *(undefined8 *)(pbVar37 + 0x18) = *(undefined8 *)(puStack_1e0 + 4);
        uVar29 = *(undefined8 *)(puStack_1e0 + 2);
        *(undefined8 *)(pbVar37 + 8) = *(undefined8 *)puStack_1e0;
        *(undefined8 *)(pbVar37 + 0x10) = uVar29;
      }
      else {
        func_0x04885070(pbVar37 + 8,plVar24[0x14],plVar24[0x13]);
      }
    }
    *(undefined8 *)pbVar37 = *(undefined8 *)pbVar22;
    *(byte **)(pbVar37 + 0x28) = pbVar38;
    *(byte **)(pbVar37 + 0x30) = pbVar25;
    LOCK();
    *(long *)(pbVar25 + 8) = *(long *)(pbVar25 + 8) + 1;
    UNLOCK();
    pbVar37 = pbVar37 + 0x38;
    *(byte **)(puVar21 + 0x24) = pbVar37;
  }
  else {
    pbVar37 = pbVar37 + -*(long *)(puVar21 + 0x22);
    pbVar34 = (byte *)(((long)pbVar37 >> 3) * 0x6db6db6db6db6db7 + 1);
    if ((byte *)0x492492492492492 < pbVar34) goto LAB_05a43547;
    lVar30 = (long)*(byte **)(puVar21 + 0x26) - *(long *)(puVar21 + 0x22) >> 3;
    pbVar2 = (byte *)(lVar30 * -0x2492492492492492);
    if (pbVar34 < pbVar2) {
      pbVar34 = pbVar2;
    }
    pbStack_418 = (byte *)(puVar21 + 0x22);
    if (0x249249249249248 < (ulong)(lVar30 * 0x6db6db6db6db6db7)) {
      pbVar34 = (byte *)0x492492492492492;
    }
    pbStack_2c8 = pbVar38;
    pbStack_c8 = pbStack_418;
    if (pbVar34 == (byte *)0x0) {
      pbVar38 = (byte *)0x0;
    }
    else {
      if ((byte *)0x492492492492492 < pbVar34) goto LAB_05a43542;
      pbVar38 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar34 * 0x38);
      if (pbVar38 == (byte *)0x0) {
        func_0x0eec74c0((long)pbVar34 * 0x38,0);
        pbVar38 = (byte *)0x0;
      }
    }
    pbVar2 = pbVar38 + (long)pbVar37;
    pbStack_420 = pbVar38 + (long)pbVar34 * 0x38;
    pbVar34 = pbVar38 + 0x10 + (long)pbVar37;
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
    pbVar34 = pbVar38 + (long)pbVar37;
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
    pbVar34 = pbVar38 + 0x20 + (long)pbVar37;
    pbVar34[0] = 0;
    pbVar34[1] = 0;
    pbVar34[2] = 0;
    pbVar34[3] = 0;
    pbVar34[4] = 0;
    pbVar34[5] = 0;
    pbVar34[6] = 0;
    pbVar34[7] = 0;
    pbStack_428 = pbVar2;
    pbStack_438 = pbVar38;
    pbStack_430 = pbVar2;
    if (pbVar2 != pbVar22) {
      if ((*puStack_1e0 & 1) == 0) {
        *(undefined8 *)(pbVar37 + (long)(pbVar38 + 0x18)) = *(undefined8 *)(puStack_1e0 + 4);
        uVar14 = puStack_1e0[1];
        uVar15 = puStack_1e0[2];
        uVar16 = puStack_1e0[3];
        *(uint *)(pbVar37 + (long)(pbVar38 + 8)) = *puStack_1e0;
        *(uint *)(pbVar37 + (long)(pbVar38 + 0xc)) = uVar14;
        *(uint *)(pbVar37 + (long)(pbVar38 + 0x10)) = uVar15;
        *(uint *)(pbVar37 + (long)(pbVar38 + 0x14)) = uVar16;
      }
      else {
        func_0x04885070(pbVar37 + (long)(pbVar38 + 8),plVar24[0x14],plVar24[0x13]);
      }
    }
    *(undefined8 *)pbVar2 = *(undefined8 *)pbVar22;
    *(byte **)(pbVar2 + 0x28) = pbStack_2c8;
    *(byte **)(pbVar2 + 0x30) = pbVar25;
    LOCK();
    *(long *)(pbVar25 + 8) = *(long *)(pbVar25 + 8) + 1;
    UNLOCK();
    pbStack_428 = pbStack_428 + 0x38;
    puVar19 = *(undefined8 **)(puVar21 + 0x22);
    puVar8 = *(undefined8 **)(puVar21 + 0x24);
    pbVar22 = pbStack_430 + ((long)puVar19 - (long)puVar8);
    pbVar37 = pbVar22;
    puVar31 = puVar19;
    if ((long)puVar19 - (long)puVar8 != 0) {
      do {
        pbVar37[0x10] = 0;
        pbVar37[0x11] = 0;
        pbVar37[0x12] = 0;
        pbVar37[0x13] = 0;
        pbVar37[0x14] = 0;
        pbVar37[0x15] = 0;
        pbVar37[0x16] = 0;
        pbVar37[0x17] = 0;
        pbVar37[0x18] = 0;
        pbVar37[0x19] = 0;
        pbVar37[0x1a] = 0;
        pbVar37[0x1b] = 0;
        pbVar37[0x1c] = 0;
        pbVar37[0x1d] = 0;
        pbVar37[0x1e] = 0;
        pbVar37[0x1f] = 0;
        pbVar37[0] = 0;
        pbVar37[1] = 0;
        pbVar37[2] = 0;
        pbVar37[3] = 0;
        pbVar37[4] = 0;
        pbVar37[5] = 0;
        pbVar37[6] = 0;
        pbVar37[7] = 0;
        pbVar37[8] = 0;
        pbVar37[9] = 0;
        pbVar37[10] = 0;
        pbVar37[0xb] = 0;
        pbVar37[0xc] = 0;
        pbVar37[0xd] = 0;
        pbVar37[0xe] = 0;
        pbVar37[0xf] = 0;
        pbVar37[0x20] = 0;
        pbVar37[0x21] = 0;
        pbVar37[0x22] = 0;
        pbVar37[0x23] = 0;
        pbVar37[0x24] = 0;
        pbVar37[0x25] = 0;
        pbVar37[0x26] = 0;
        pbVar37[0x27] = 0;
        *(undefined8 *)(pbVar37 + 0x18) = puVar31[3];
        uVar29 = puVar31[2];
        *(undefined8 *)(pbVar37 + 8) = puVar31[1];
        *(undefined8 *)(pbVar37 + 0x10) = uVar29;
        *(undefined2 *)(puVar31 + 1) = 0;
        *(undefined8 *)pbVar37 = *puVar31;
        uVar10 = *(undefined4 *)((long)puVar31 + 0x2c);
        uVar11 = *(undefined4 *)(puVar31 + 6);
        uVar12 = *(undefined4 *)((long)puVar31 + 0x34);
        *(undefined4 *)(pbVar37 + 0x28) = *(undefined4 *)(puVar31 + 5);
        *(undefined4 *)(pbVar37 + 0x2c) = uVar10;
        *(undefined4 *)(pbVar37 + 0x30) = uVar11;
        *(undefined4 *)(pbVar37 + 0x34) = uVar12;
        puVar31[5] = 0;
        puVar31[6] = 0;
        puVar31 = puVar31 + 7;
        pbVar37 = pbVar37 + 0x38;
      } while (puVar31 != puVar8);
      do {
        plVar33 = (long *)puVar19[6];
        if (plVar33 == (long *)0x0) {
LAB_05a422d4:
          bVar4 = *(byte *)(puVar19 + 1);
        }
        else {
          LOCK();
          plVar23 = plVar33 + 1;
          lVar30 = *plVar23;
          *plVar23 = *plVar23 + -1;
          UNLOCK();
          if (lVar30 != 0) goto LAB_05a422d4;
          (**(code **)(*plVar33 + 0x10))(plVar33);
          func_0x0412c2d0(plVar33);
          bVar4 = *(byte *)(puVar19 + 1);
        }
        if ((bVar4 & 1) != 0) {
          func_0x0412a280(puVar19[3],puVar19[1] & 0xfffffffffffffffe);
        }
        puVar19 = puVar19 + 7;
      } while (puVar19 != puVar8);
      puVar19 = *(undefined8 **)pbStack_c8;
    }
    pbVar37 = pbStack_428;
    *(byte **)(puVar21 + 0x22) = pbVar22;
    *(byte **)(puVar21 + 0x24) = pbStack_428;
    lVar30 = *(long *)(puVar21 + 0x26);
    *(byte **)(puVar21 + 0x26) = pbStack_420;
    if (puVar19 != (undefined8 *)0x0) {
      func_0x0412a280(puVar19,lVar30 - (long)puVar19);
    }
  }
  *(byte **)(puVar21 + 0x24) = pbVar37;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar33 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar33 = *plVar33 + 1;
    UNLOCK();
  }
  plVar33 = (long *)plVar24[0xf];
  *(undefined4 *)(plVar24 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar24 + 0x74) = uVar11;
  *(undefined4 *)(plVar24 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar24 + 0x7c) = uVar13;
  if (plVar33 != (long *)0x0) {
    LOCK();
    plVar23 = plVar33 + 1;
    lVar30 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
      func_0x0412c2d0(plVar33);
    }
  }
  *(undefined1 *)(plVar24 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  LOCK();
  lVar30 = *(long *)pbStack_1d8;
  *(long *)pbStack_1d8 = *(long *)pbStack_1d8 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*(long *)pbVar25 + 0x10))(pbVar25);
    func_0x0412c2d0(pbVar25);
  }
  plVar23 = plStack_c0;
  plVar33 = plStack_390;
  LOCK();
  lVar30 = *plStack_c0;
  *plStack_c0 = *plStack_c0 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    func_0x0412c2d0(plVar24);
    LOCK();
    lVar30 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plStack_c0;
    *plStack_c0 = *plStack_c0 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    func_0x0412c2d0(plVar24);
  }
  if (pbStack_348 != (byte *)0x0) {
    (**(code **)(pbStack_348 + 8))(&pbStack_348);
  }
  ppbVar35 = (byte **)(plVar20 + 0x26);
  pbStack_430 = (byte *)0x0;
  pbStack_438 = &UNK_0efff750;
  if (ppbVar35 != &pbStack_438) {
    if ((*ppbVar35 == (byte *)0x0) ||
       ((**(code **)(*ppbVar35 + 8))(ppbVar35), pbStack_438 != (byte *)0x0)) {
      (**(code **)pbStack_438)(&pbStack_438,ppbVar35);
      pbVar22 = pbStack_438;
    }
    else {
      pbVar22 = (byte *)0x0;
    }
    *ppbVar35 = pbVar22;
  }
  if ((uStack_268 & 1) != 0) {
    func_0x0412a280(puStack_258,uStack_268 & 0xfffffffffffffffe);
  }
  plVar20 = (long *)*plVar33;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  (**(code **)(*plVar20 + 0x10))(plVar20,&uStack_1f8);
  if ((uStack_1f8 & 1) != 0) {
    func_0x0412a280(uStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
  }
  bStack_280 = 0x20;
  uStack_27f = _DAT_0145f6ec;
  uStack_27b = _UNK_0145f6f0;
  uStack_277 = _UNK_0145f6f4;
  uStack_273 = _UNK_0145f6f8;
  uStack_26f = 0;
  puStack_288 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_288 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar29 = _UNK_01376cd2;
  uStack_298 = 0x29;
  uStack_290 = 0x24;
  puStack_288[2] = _DAT_01376cca;
  puStack_288[3] = uVar29;
  uVar29 = _UNK_01376cc2;
  *puStack_288 = _DAT_01376cba;
  puStack_288[1] = uVar29;
  *(undefined4 *)(puStack_288 + 4) = 0x5245494c;
  *(undefined1 *)((long)puStack_288 + 0x24) = 0;
  bStack_1d0 = 2;
  uStack_1cf = 0x30;
  uStack_1ce = 0;
  bStack_f8 = 0;
  uStack_f7 = 0;
  func_0x0560fc60(_DAT_011983f0,0,auStack_b8,param_2,&bStack_280,&uStack_298,&bStack_1d0,&bStack_f8)
  ;
  uVar29 = *plVar33;
  pbStack_348 = (byte *)0x0;
  if ((uStack_48 & 1) == 0) {
    pbStack_330 = pbStack_38;
    uStack_340 = (undefined8 *)CONCAT44(uStack_44,uStack_48);
    uStack_338 = uStack_40;
    uStack_334 = uStack_3c;
  }
  else {
    func_0x0412e5e0(&uStack_340,pbStack_38,CONCAT44(uStack_3c,uStack_40));
  }
  uStack_328 = 0;
  if (((ulong)uStack_340 & 1) == 0) {
    if ((byte)uStack_340 >> 1 != 0) goto LAB_05a426ce;
  }
  else if (CONCAT44(uStack_334,uStack_338) != 0) {
LAB_05a426ce:
    pbVar22 = pbStack_330;
    if (((ulong)uStack_340 & 1) == 0) {
      pbVar22 = (byte *)((long)&uStack_340 + 1);
    }
    if ((pbVar22 != (byte *)0x0) && (*pbVar22 != 0)) {
      pbVar37 = (byte *)0xcbf29ce484222325;
      uVar26 = func_0x0eee2e90(pbVar22);
      if (uVar26 != 0) {
        uVar18 = (ulong)((uint)uVar26 & 7);
        if (7 < uVar26) {
          uVar26 = uVar26 & 0xfffffffffffffff8;
          do {
            pbVar37 = (byte *)(((((((((long)pbVar37 * 0x100000001b3 ^ (ulong)*pbVar22) *
                                     0x100000001b3 ^ (ulong)pbVar22[1]) * 0x100000001b3 ^
                                   (ulong)pbVar22[2]) * 0x100000001b3 ^ (ulong)pbVar22[3]) *
                                  0x100000001b3 ^ (ulong)pbVar22[4]) * 0x100000001b3 ^
                                (ulong)pbVar22[5]) * 0x100000001b3 ^ (ulong)pbVar22[6]) *
                               0x100000001b3 ^ (ulong)pbVar22[7]);
            pbVar22 = pbVar22 + 8;
            uVar26 = uVar26 - 8;
          } while (uVar26 != 0);
        }
        if (uVar18 != 0) {
          uVar26 = 0;
          do {
            pbVar37 = (byte *)((long)pbVar37 * 0x100000001b3 ^ (ulong)pbVar22[uVar26]);
            uVar26 = uVar26 + 1;
          } while (uVar18 != uVar26);
        }
      }
      goto LAB_05a427c8;
    }
  }
  pbVar37 = (byte *)0x0;
LAB_05a427c8:
  pbStack_438 = (byte *)0x8;
  pbStack_348 = pbVar37;
  func_0x0563e3d0(&pbStack_430,auStack_b8);
  puStack_300 = (undefined8 *)0x0;
  pbStack_308 = &UNK_0effd818;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar19 = pbStack_438;
  puVar19[1] = pbStack_430;
  puVar19[5] = uStack_410;
  puVar19[3] = pbStack_420;
  puVar19[4] = pbStack_418;
  pbStack_420 = (byte *)0x0;
  pbStack_418 = (byte *)0x0;
  uStack_410 = 0;
  puVar19[8] = uStack_3f8;
  puVar19[6] = uStack_408;
  puVar19[7] = uStack_400;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  puVar19[0xb] = uStack_3e0;
  puVar19[9] = uStack_3f0;
  puVar19[10] = uStack_3e8;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  puVar19[0xe] = uStack_3c8;
  puVar19[0xc] = uStack_3d8;
  puVar19[0xd] = uStack_3d0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  puVar19[0x11] = uStack_3b0;
  *(undefined4 *)(puVar19 + 0xf) = (undefined4)uStack_3c0;
  *(undefined4 *)((long)puVar19 + 0x7c) = uStack_3c0._4_4_;
  *(undefined4 *)(puVar19 + 0x10) = (undefined4)uStack_3b8;
  *(undefined4 *)((long)puVar19 + 0x84) = uStack_3b8._4_4_;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  pbStack_388 = (byte *)0x0;
  bStack_380 = 0;
  uStack_37f = 0;
  uStack_37a = 0;
  puStack_300 = puVar19;
  if (pbStack_308 == (byte *)0x0) {
    pbVar22 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_308)(&pbStack_308,&pbStack_388);
    pbVar22 = pbStack_308;
  }
  pbStack_308 = (byte *)0x0;
  pbStack_388 = pbVar22;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0effd5f0;
  pbStack_188 = (byte *)0x0;
  plStack_180 = (long *)0x0;
  if (pbVar22 == (byte *)0x0) {
    pbStack_188 = (byte *)0x0;
  }
  else {
    (**(code **)pbVar22)(&pbStack_388,&pbStack_188);
    pbStack_188 = pbStack_388;
  }
  pbStack_388 = (byte *)0x0;
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
  func_0x04aa75f0(plVar20 + 0xe,&uStack_2c0,&UNK_01254d89);
  *(undefined1 *)(plVar20 + 0x10) = 0;
  plVar24 = plVar20 + 0x11;
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
  plVar20[4] = (long)&UNK_0effd640;
  plVar20[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar20 + 0x2f) = 1;
  plVar20[0x30] = 0;
  plVar20[0x31] = 0;
  if (pbStack_188 == (byte *)0x0) {
    pbVar22 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_188)(&pbStack_188,plVar20 + 0x30);
    pbVar22 = pbStack_188;
  }
  plVar33 = plVar20 + 4;
  pbStack_188 = (byte *)0x0;
  plVar20[0x30] = (long)pbVar22;
  puVar3 = (uint *)(plVar20 + 0x12);
  if (plVar24 == (long *)&DAT_0f552018) {
    plVar20[0x15] = 0;
  }
  else {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar20[0x14] = _DAT_0f552030;
        uVar12 = uRam000000000f55202c;
        uVar11 = _DAT_0f552028;
        uVar10 = uRam000000000f552024;
        *puVar3 = _DAT_0f552020;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar10;
        *(undefined4 *)(plVar20 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar39 = (_DAT_0f552020 & 1) != 0;
      lVar30 = 0xf552021;
      if (bVar39) {
        lVar30 = _DAT_0f552030;
      }
      uVar26 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar39) {
        uVar26 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      FUN_04885120(puVar3,lVar30,uVar26);
    }
    plVar20[0x11] = _DAT_0f552018;
    plVar20[0x15] = 0;
    if (pbStack_188 != (byte *)0x0) {
      (**(code **)(pbStack_188 + 8))(&pbStack_188);
    }
  }
  plVar23 = plVar20 + 1;
  if (pbStack_388 != (byte *)0x0) {
    (**(code **)(pbStack_388 + 8))(&pbStack_388);
  }
  LOCK();
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar27 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar27[1] = 0;
  plVar27[2] = 0;
  *plVar27 = (long)&UNK_0effd720;
  plVar27[6] = 0;
  plVar27[7] = 0;
  plVar27[4] = (long)&UNK_0effd770;
  plVar27[0xe] = (long)plVar33;
  plVar27[0xf] = (long)plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  pbStack_188 = (byte *)(plVar27 + 4);
  plStack_180 = plVar27;
  puVar21 = (undefined4 *)func_0x05a55620(uVar29,&pbStack_348);
  plVar28 = *(long **)(puVar21 + 0x24);
  plStack_390 = plVar33;
  if (plVar28 < *(long **)(puVar21 + 0x26)) {
    plVar28[2] = 0;
    plVar28[3] = 0;
    *plVar28 = 0;
    plVar28[1] = 0;
    plVar28[4] = 0;
    if (plVar28 != plVar24) {
      if ((*puVar3 & 1) == 0) {
        plVar28[3] = plVar20[0x14];
        lVar30 = plVar20[0x13];
        plVar28[1] = *(long *)puVar3;
        plVar28[2] = lVar30;
      }
      else {
        func_0x04885070(plVar28 + 1,plVar20[0x14],plVar20[0x13]);
      }
    }
    *plVar28 = *plVar24;
    plVar28[5] = (long)(plVar27 + 4);
    plVar28[6] = (long)plVar27;
    LOCK();
    plVar27[1] = plVar27[1] + 1;
    UNLOCK();
    plVar28 = plVar28 + 7;
    *(long **)(puVar21 + 0x24) = plVar28;
  }
  else {
    plVar28 = (long *)func_0x05a573e0(puVar21 + 0x22,plVar24,&pbStack_188);
  }
  *(long **)(puVar21 + 0x24) = plVar28;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar24 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar24 = *plVar24 + 1;
    UNLOCK();
  }
  plVar24 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar11;
  *(undefined4 *)(plVar20 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar13;
  if (plVar24 != (long *)0x0) {
    LOCK();
    plVar33 = plVar24 + 1;
    lVar30 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      func_0x0412c2d0(plVar24);
    }
  }
  plVar24 = plStack_180;
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_180 != (long *)0x0) {
    LOCK();
    plVar33 = plStack_180 + 1;
    lVar30 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      func_0x0412c2d0(plVar24);
    }
  }
  LOCK();
  lVar30 = *plVar23;
  *plVar23 = *plVar23 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar30 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_308 != (byte *)0x0) {
    (**(code **)(pbStack_308 + 8))(&pbStack_308);
  }
  if ((uStack_3c0 & 1) != 0) {
    func_0x0412a280(uStack_3b0,uStack_3c0 & 0xfffffffffffffffe);
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
  if (((ulong)pbStack_420 & 1) != 0) {
    func_0x0412a280(uStack_410,(ulong)pbStack_420 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_340 & 1) != 0) {
    func_0x0412a280(pbStack_330,(ulong)uStack_340 & 0xfffffffffffffffe);
  }
  pbStack_438 = (byte *)0x8;
  pbStack_430 = (byte *)((ulong)pbStack_430 & 0xffffffffffffff00);
  func_0x0563e3d0(&pbStack_428,auStack_b8);
  plStack_180 = (long *)0x0;
  pbStack_188 = &UNK_0effd830;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  ppbVar35 = (byte **)(plVar20 + 0x26);
  *(undefined1 *)(puVar19 + 1) = pbStack_430._0_1_;
  *puVar19 = pbStack_438;
  puVar19[2] = pbStack_428;
  puVar19[6] = uStack_408;
  puVar19[4] = pbStack_418;
  puVar19[5] = uStack_410;
  pbStack_418 = (byte *)0x0;
  uStack_410 = 0;
  uStack_408 = 0;
  puVar19[9] = uStack_3f0;
  puVar19[7] = uStack_400;
  puVar19[8] = uStack_3f8;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  puVar19[0xc] = uStack_3d8;
  puVar19[10] = uStack_3e8;
  puVar19[0xb] = uStack_3e0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  puVar19[0xf] = uStack_3c0;
  puVar19[0xd] = uStack_3d0;
  puVar19[0xe] = uStack_3c8;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  puVar19[0x12] = uStack_3a8;
  *(undefined4 *)(puVar19 + 0x10) = (undefined4)uStack_3b8;
  *(undefined4 *)((long)puVar19 + 0x84) = uStack_3b8._4_4_;
  *(undefined4 *)(puVar19 + 0x11) = (undefined4)uStack_3b0;
  *(undefined4 *)((long)puVar19 + 0x8c) = uStack_3b0._4_4_;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  plStack_180 = puVar19;
  if (ppbVar35 == &pbStack_188) {
    func_0x05610960(puVar19 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar19);
    plVar20 = plStack_390;
  }
  else {
    pbVar22 = &UNK_0effd830;
    if ((*ppbVar35 == (byte *)0x0) ||
       ((**(code **)(*ppbVar35 + 8))(ppbVar35), pbVar22 = pbStack_188, pbStack_188 != (byte *)0x0))
    {
      (**(code **)pbVar22)(&pbStack_188,ppbVar35);
      pbVar22 = pbStack_188;
    }
    else {
      pbVar22 = (byte *)0x0;
    }
    pbStack_188 = (byte *)0x0;
    *ppbVar35 = pbVar22;
    plVar20 = plStack_390;
  }
  plStack_390 = plVar20;
  if ((uStack_3b8 & 1) != 0) {
    func_0x0412a280(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  if ((uStack_3d0 & 1) != 0) {
    func_0x0412a280(uStack_3c0,uStack_3d0 & 0xfffffffffffffffe);
  }
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if ((uStack_400 & 1) != 0) {
    func_0x0412a280(uStack_3f0,uStack_400 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_418 & 1) != 0) {
    func_0x0412a280(uStack_408,(ulong)pbStack_418 & 0xfffffffffffffffe);
  }
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  (**(code **)(*plVar20 + 0x18))(plVar20,&uStack_218,&uStack_238);
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(uStack_228,uStack_238 & 0xfffffffffffffffe);
  }
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,uStack_218 & 0xfffffffffffffffe);
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
  if ((bStack_f8 & 1) != 0) {
    func_0x0412a280(uStack_e8,CONCAT62(uStack_f6,CONCAT11(uStack_f7,bStack_f8)) & 0xfffffffffffffffe
                   );
  }
  if ((bStack_1d0 & 1) != 0) {
    func_0x0412a280(uStack_1c0,
                    CONCAT53(uStack_1cd,CONCAT12(uStack_1ce,CONCAT11(uStack_1cf,bStack_1d0))) &
                    0xfffffffffffffffe);
  }
  uVar10 = uStack_273;
  if ((uStack_298 & 1) != 0) {
    func_0x0412a280(puStack_288,uStack_298 & 0xfffffffffffffffe);
    uVar10 = uStack_273;
  }
  if ((bStack_280 & 1) != 0) {
    uStack_273._3_1_ = (undefined1)((uint)uVar10 >> 0x18);
    uVar17 = CONCAT11(uStack_26f,uStack_273._3_1_);
    uStack_273 = uVar10;
    func_0x0412a280(CONCAT62(uStack_26e,uVar17),
                    CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,bStack_280)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1376cba  Definition::DEFAULT_SPEED_MULTIPLIER
 * 0x1376cca  ULT_SPEED_MULTIPLIER
 * 0x13acaef  minecraft:behavior.slime_keep_on_jumping
 * 0x13acaff  or.slime_keep_on_jumping
 * 0x145f6ec  speed_multiplier
 * 0x1494d5d  <any array element>
 */
