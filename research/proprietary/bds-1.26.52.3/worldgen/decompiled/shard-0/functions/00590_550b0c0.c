/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x560b0c0 (ELF vaddr 0x550b0c0)
 * Label: caller-of-callee
 * Body:  [[0560b0c0, 0560c669] [0560c670, 0560cc55] [0560cc60, 0560cc9c] [0560cca0, 0560e794] [0560e95a, 0560e96c] [0560f125, 0560f20b] [0560f4e4, 0560f4f6]]
 * Ghidra: FUN_0560b0c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0560b0c0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  uint *puVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  byte *pbVar35;
  long **pplVar36;
  bool bVar37;
  long *plStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  long *plStack_7c0;
  long *plStack_7b8;
  undefined8 uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  undefined8 uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  undefined8 uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined1 uStack_739;
  long *plStack_738;
  byte bStack_730;
  undefined5 uStack_72f;
  undefined2 uStack_72a;
  undefined1 uStack_728;
  undefined5 uStack_727;
  undefined2 uStack_722;
  undefined8 uStack_720;
  undefined8 uStack_718;
  long *plStack_6f8;
  uint *puStack_6f0;
  long *plStack_6e8;
  ulong uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined4 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  uint uStack_6a8;
  uint uStack_6a4;
  uint uStack_6a0;
  uint uStack_69c;
  undefined8 uStack_698;
  long *plStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long *plStack_640;
  long *plStack_638;
  byte bStack_630;
  undefined7 uStack_62f;
  undefined1 uStack_628;
  undefined4 uStack_627;
  undefined1 uStack_623;
  undefined8 uStack_620;
  byte bStack_618;
  undefined7 uStack_617;
  undefined1 uStack_610;
  undefined4 uStack_60f;
  undefined1 uStack_60b;
  undefined8 uStack_608;
  byte bStack_600;
  undefined7 uStack_5ff;
  undefined1 uStack_5f8;
  undefined4 uStack_5f7;
  undefined1 uStack_5f3;
  undefined8 uStack_5f0;
  ulong uStack_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  byte *pbStack_5d0;
  undefined8 uStack_5c8;
  ulong uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 *puStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 *puStack_598;
  byte bStack_590;
  undefined4 uStack_58f;
  undefined4 uStack_58b;
  undefined4 uStack_587;
  undefined4 uStack_583;
  undefined1 uStack_57f;
  undefined6 uStack_57e;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 *puStack_568;
  ulong uStack_560;
  undefined8 uStack_558;
  undefined8 *puStack_550;
  ulong uStack_548;
  undefined8 uStack_540;
  undefined4 *puStack_538;
  byte bStack_530;
  undefined7 uStack_52f;
  undefined1 uStack_528;
  undefined1 uStack_527;
  undefined8 uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  byte bStack_3f8;
  undefined1 uStack_3f7;
  undefined1 uStack_3f6;
  undefined5 uStack_3f5;
  undefined8 uStack_3e8;
  byte bStack_3e0;
  undefined1 uStack_3df;
  undefined1 uStack_3de;
  undefined5 uStack_3dd;
  undefined8 uStack_3d0;
  byte bStack_3c8;
  undefined1 uStack_3c7;
  undefined1 uStack_3c6;
  undefined5 uStack_3c5;
  undefined8 uStack_3b8;
  byte bStack_3b0;
  undefined1 uStack_3af;
  undefined1 uStack_3ae;
  undefined5 uStack_3ad;
  undefined8 uStack_3a0;
  byte bStack_398;
  undefined1 uStack_397;
  undefined1 uStack_396;
  undefined5 uStack_395;
  undefined8 uStack_388;
  byte bStack_380;
  undefined1 uStack_37f;
  undefined1 uStack_37e;
  undefined5 uStack_37d;
  undefined8 uStack_370;
  byte bStack_368;
  undefined1 uStack_367;
  undefined6 uStack_366;
  undefined8 uStack_358;
  byte bStack_350;
  undefined1 uStack_34f;
  undefined6 uStack_34e;
  undefined8 uStack_340;
  byte bStack_338;
  undefined1 uStack_337;
  undefined6 uStack_336;
  undefined8 uStack_328;
  byte bStack_320;
  undefined1 uStack_31f;
  undefined6 uStack_31e;
  undefined8 uStack_310;
  byte bStack_308;
  undefined1 uStack_307;
  undefined6 uStack_306;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  byte bStack_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2b8;
  byte bStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a0;
  byte bStack_298;
  undefined7 uStack_297;
  undefined8 uStack_288;
  byte bStack_280;
  undefined7 uStack_27f;
  undefined8 uStack_270;
  uint uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  byte *pbStack_258;
  undefined1 auStack_250 [16];
  byte bStack_240;
  undefined7 uStack_23f;
  undefined8 uStack_230;
  byte bStack_228;
  undefined7 uStack_227;
  undefined8 uStack_218;
  byte bStack_210;
  undefined7 uStack_20f;
  undefined8 uStack_200;
  byte bStack_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1e8;
  byte bStack_1e0;
  undefined7 uStack_1df;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  byte bStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  byte bStack_188;
  undefined7 uStack_187;
  undefined8 uStack_178;
  byte bStack_170;
  undefined7 uStack_16f;
  undefined8 uStack_160;
  byte bStack_158;
  undefined7 uStack_157;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  byte bStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_120;
  byte bStack_118;
  undefined7 uStack_117;
  undefined8 uStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
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
  byte bStack_48;
  undefined7 uStack_47;
  undefined8 uStack_38;
  
  puStack_538 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_538 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar25 = _UNK_0135c5c4;
  uStack_548 = 0x29;
  uStack_540 = 0x20;
  *(undefined8 *)(puStack_538 + 4) = _DAT_0135c5bc;
  *(undefined8 *)(puStack_538 + 6) = uVar25;
  uVar9 = _UNK_0135c5b8;
  uVar8 = _UNK_0135c5b4;
  uVar7 = _UNK_0135c5b0;
  *puStack_538 = _DAT_0135c5ac;
  puStack_538[1] = uVar7;
  puStack_538[2] = uVar8;
  puStack_538[3] = uVar9;
  *(undefined1 *)(puStack_538 + 8) = 0;
  bStack_530 = 0x10;
  uStack_52f = 0x7469726f697270;
  uStack_528 = 0x79;
  uStack_527 = 0;
  bStack_380 = 2;
  uStack_37f = 0x30;
  uStack_37e = 0;
  bStack_398 = 2;
  uStack_397 = 0x30;
  uStack_396 = 0;
  bStack_308 = 0;
  uStack_307 = 0;
  uStack_2e0 = param_2;
  func_0x0564aad0(&plStack_2d8,&uStack_548,&bStack_530,0,&bStack_380,0,&bStack_398,&bStack_308);
  uVar25 = *param_1;
  uStack_5e8 = 0;
  if ((uStack_268 & 1) == 0) {
    pbStack_5d0 = pbStack_258;
    uStack_5e0 = uStack_268;
    uStack_5dc = uStack_264;
    uStack_5d8 = uStack_260;
    uStack_5d4 = uStack_25c;
  }
  else {
    FUN_0412e5e0(&uStack_5e0,pbStack_258,CONCAT44(uStack_25c,uStack_260));
  }
  uStack_5c8 = 0;
  if ((uStack_5e0 & 1) == 0) {
    if ((byte)uStack_5e0 >> 1 != 0) goto LAB_0560b25b;
LAB_0560b2b1:
    uStack_5e8 = 0;
  }
  else {
    if (CONCAT44(uStack_5d4,uStack_5d8) == 0) goto LAB_0560b2b1;
LAB_0560b25b:
    if ((uStack_5e0 & 1) == 0) {
      pbVar35 = (byte *)((long)&uStack_5e0 + 1);
      if (pbVar35 != (byte *)0x0) goto LAB_0560b27b;
      goto LAB_0560b2b1;
    }
    pbVar35 = pbStack_5d0;
    if (pbStack_5d0 == (byte *)0x0) goto LAB_0560b2b1;
LAB_0560b27b:
    if (*pbVar35 == 0) goto LAB_0560b2b1;
    uVar23 = func_0x0eee2e90(pbVar35);
    uStack_5e8 = 0xcbf29ce484222325;
    if (uVar23 != 0) {
      uVar28 = (ulong)((uint)uVar23 & 7);
      if (uVar23 < 8) {
        uStack_5e8 = 0xcbf29ce484222325;
      }
      else {
        uVar23 = uVar23 & 0xfffffffffffffff8;
        uStack_5e8 = 0xcbf29ce484222325;
        do {
          uStack_5e8 = (((((((uStack_5e8 * 0x100000001b3 ^ (ulong)*pbVar35) * 0x100000001b3 ^
                            (ulong)pbVar35[1]) * 0x100000001b3 ^ (ulong)pbVar35[2]) * 0x100000001b3
                          ^ (ulong)pbVar35[3]) * 0x100000001b3 ^ (ulong)pbVar35[4]) * 0x100000001b3
                        ^ (ulong)pbVar35[5]) * 0x100000001b3 ^ (ulong)pbVar35[6]) * 0x100000001b3 ^
                       (ulong)pbVar35[7];
          pbVar35 = pbVar35 + 8;
          uVar23 = uVar23 - 8;
        } while (uVar23 != 0);
      }
      if (uVar28 != 0) {
        uVar23 = 0;
        do {
          uStack_5e8 = uStack_5e8 * 0x100000001b3 ^ (ulong)pbVar35[uVar23];
          uVar23 = uVar23 + 1;
        } while (uVar28 != uVar23);
      }
    }
  }
  plVar31 = (long *)0xcbf29ce484222325;
  plStack_7d8 = (long *)0x0;
  func_0x0564b850(&plStack_7d0,&plStack_2d8);
  uStack_680 = (undefined8 *)0x0;
  plStack_688 = (long *)&UNK_0efce618;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar16 = plStack_7d8;
  puVar16[1] = plStack_7d0;
  puVar16[5] = uStack_7b0;
  puVar16[3] = plStack_7c0;
  puVar16[4] = plStack_7b8;
  plStack_7c0 = (long *)0x0;
  plStack_7b8 = (long *)0x0;
  uStack_7b0 = 0;
  puVar16[8] = uStack_798;
  puVar16[6] = uStack_7a8;
  puVar16[7] = uStack_7a0;
  uStack_7a8 = 0;
  uStack_7a0 = 0;
  uStack_798 = 0;
  puVar16[0xb] = uStack_780;
  puVar16[9] = uStack_790;
  puVar16[10] = uStack_788;
  uStack_790 = 0;
  uStack_788 = 0;
  uStack_780 = 0;
  puVar16[0xe] = uStack_768;
  puVar16[0xc] = uStack_778;
  puVar16[0xd] = uStack_770;
  uStack_778 = 0;
  uStack_770 = 0;
  uStack_768 = 0;
  puVar16[0x11] = uStack_750;
  *(undefined4 *)(puVar16 + 0xf) = (undefined4)uStack_760;
  *(undefined4 *)((long)puVar16 + 0x7c) = uStack_760._4_4_;
  *(undefined4 *)(puVar16 + 0x10) = (undefined4)uStack_758;
  *(undefined4 *)((long)puVar16 + 0x84) = uStack_758._4_4_;
  uStack_760 = 0;
  uStack_758 = 0;
  uStack_750 = 0;
  plStack_6e8 = (long *)0x0;
  uStack_6e0 = 0;
  uStack_680 = puVar16;
  if (plStack_688 == (long *)0x0) {
    plVar19 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_688)(&plStack_688,&plStack_6e8);
    plVar19 = plStack_688;
  }
  plStack_688 = (long *)0x0;
  plStack_6e8 = plVar19;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0efce448;
  plStack_738 = (long *)0x0;
  bStack_730 = 0;
  uStack_72f = 0;
  uStack_72a = 0;
  if (plVar19 == (long *)0x0) {
    plStack_738 = (long *)0x0;
  }
  else {
    (*(code *)*plVar19)(&plStack_6e8,&plStack_738);
    plStack_738 = plStack_6e8;
  }
  plStack_6e8 = (long *)0x0;
  plVar17[4] = (long)&UNK_0f2ccd78;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  *(undefined1 *)(plVar17 + 0xd) = 0;
  FUN_04aa75f0(plVar17 + 0xe,&uStack_739,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar19 = plVar17 + 0x11;
  plVar17[0x11] = 0;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  plVar17[0x16] = 0;
  plVar17[0x17] = 0xffffffff;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x18] = 0;
  plVar17[0x19] = 0;
  plVar17[0x1a] = 0;
  plVar17[0x1b] = 0;
  plVar17[0x1c] = 0;
  plVar17[0x1d] = 0;
  plVar17[0x1e] = 0;
  plVar17[0x1f] = 0;
  plVar17[4] = (long)&UNK_0efce498;
  plVar17[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar17 + 0x2f) = 1;
  plVar17[0x30] = 0;
  plVar17[0x31] = 0;
  if (plStack_738 == (long *)0x0) {
    plVar24 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_738)(&plStack_738,plVar17 + 0x30);
    plVar24 = plStack_738;
  }
  plStack_738 = (long *)0x0;
  plVar17[0x30] = (long)plVar24;
  puVar22 = (uint *)(plVar17 + 0x12);
  if (plVar19 == (long *)&DAT_0f552078) {
    plVar17[0x15] = 0;
  }
  else {
    if ((*puVar22 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar17[0x14] = _DAT_0f552090;
        uVar9 = uRam000000000f55208c;
        uVar8 = _DAT_0f552088;
        uVar7 = uRam000000000f552084;
        *puVar22 = _DAT_0f552080;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar7;
        *(undefined4 *)(plVar17 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar22,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar37 = (_DAT_0f552080 & 1) != 0;
      lVar26 = 0xf552081;
      if (bVar37) {
        lVar26 = _DAT_0f552090;
      }
      uVar23 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar37) {
        uVar23 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar22,lVar26,uVar23);
    }
    plVar17[0x11] = _DAT_0f552078;
    plVar17[0x15] = 0;
    if (plStack_738 != (long *)0x0) {
      (*(code *)plStack_738[1])(&plStack_738);
    }
  }
  plVar24 = plVar17 + 1;
  if (plStack_6e8 != (long *)0x0) {
    (*(code *)plStack_6e8[1])(&plStack_6e8);
  }
  LOCK();
  *plVar24 = *plVar24 + 1;
  UNLOCK();
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0efce578;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0efce5c8;
  puVar16[0xe] = plVar17 + 4;
  puVar16[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  bStack_730 = (byte)puVar16;
  uStack_72f = (undefined5)((ulong)puVar16 >> 8);
  uStack_72a = (undefined2)((ulong)puVar16 >> 0x30);
  plStack_738 = puVar16 + 4;
  puVar18 = (undefined4 *)func_0x0563e5c0(uVar25,&uStack_5e8);
  plVar20 = *(long **)(puVar18 + 0x24);
  if (plVar20 < *(long **)(puVar18 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plVar19) {
      if ((*puVar22 & 1) == 0) {
        plVar20[3] = plVar17[0x14];
        lVar26 = plVar17[0x13];
        plVar20[1] = *(long *)puVar22;
        plVar20[2] = lVar26;
      }
      else {
        func_0x04885070(plVar20 + 1,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar20 = *plVar19;
    plVar20[5] = (long)(puVar16 + 4);
    plVar20[6] = (long)puVar16;
    LOCK();
    puVar16[1] = puVar16[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    *(long **)(puVar18 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x05640410(puVar18 + 0x22,plVar19,&plStack_738);
  }
  *(long **)(puVar18 + 0x24) = plVar20;
  uVar7 = *puVar18;
  uVar8 = puVar18[1];
  uVar9 = puVar18[2];
  uVar10 = puVar18[3];
  if (*(long *)(puVar18 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar18 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar8;
  *(undefined4 *)(plVar17 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar10;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
  plVar19 = (long *)CONCAT26(uStack_72a,CONCAT51(uStack_72f,bStack_730));
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar26 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar26 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  if (plStack_688 != (long *)0x0) {
    (*(code *)plStack_688[1])(&plStack_688);
  }
  if ((uStack_760 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_750,uStack_760 & 0xfffffffffffffffe);
  }
  if ((uStack_778 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_768,uStack_778 & 0xfffffffffffffffe);
  }
  if ((uStack_790 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_780,uStack_790 & 0xfffffffffffffffe);
  }
  if ((uStack_7a8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_798,uStack_7a8 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_7c0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_7b0,(ulong)plStack_7c0 & 0xfffffffffffffffe);
  }
  if ((uStack_5e0 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_5d0,CONCAT44(uStack_5dc,uStack_5e0) & 0xfffffffffffffffe);
  }
  plStack_7d8 = (long *)0x0;
  plStack_7d0 = (long *)((ulong)plStack_7d0 & 0xffffffffffffff00);
  func_0x0564b850(&plStack_7c8,&plStack_2d8);
  bStack_730 = 0;
  uStack_72f = 0;
  uStack_72a = 0;
  plStack_738 = (long *)&UNK_0efce630;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  pplVar36 = (long **)(plVar17 + 0x26);
  *(undefined1 *)(puVar16 + 1) = plStack_7d0._0_1_;
  *puVar16 = plStack_7d8;
  puVar16[2] = plStack_7c8;
  puVar16[6] = uStack_7a8;
  puVar16[4] = plStack_7b8;
  puVar16[5] = uStack_7b0;
  plStack_7b8 = (long *)0x0;
  uStack_7b0 = 0;
  uStack_7a8 = 0;
  puVar16[9] = uStack_790;
  puVar16[7] = uStack_7a0;
  puVar16[8] = uStack_798;
  uStack_7a0 = 0;
  uStack_798 = 0;
  uStack_790 = 0;
  puVar16[0xc] = uStack_778;
  puVar16[10] = uStack_788;
  puVar16[0xb] = uStack_780;
  uStack_788 = 0;
  uStack_780 = 0;
  uStack_778 = 0;
  puVar16[0xf] = uStack_760;
  puVar16[0xd] = uStack_770;
  puVar16[0xe] = uStack_768;
  uStack_770 = 0;
  uStack_768 = 0;
  uStack_760 = 0;
  puVar16[0x12] = uStack_748;
  *(undefined4 *)(puVar16 + 0x10) = (undefined4)uStack_758;
  *(undefined4 *)((long)puVar16 + 0x84) = uStack_758._4_4_;
  *(undefined4 *)(puVar16 + 0x11) = (undefined4)uStack_750;
  *(undefined4 *)((long)puVar16 + 0x8c) = uStack_750._4_4_;
  uStack_758 = 0;
  uStack_750 = 0;
  uStack_748 = 0;
  bStack_730 = (byte)puVar16;
  uStack_72f = (undefined5)((ulong)puVar16 >> 8);
  uStack_72a = (undefined2)((ulong)puVar16 >> 0x30);
  if (pplVar36 == &plStack_738) {
    func_0x0564b7b0(puVar16 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar16);
  }
  else {
    plVar19 = (long *)&UNK_0efce630;
    if ((*pplVar36 == (long *)0x0) ||
       ((*(code *)(*pplVar36)[1])(pplVar36), plVar19 = plStack_738, plStack_738 != (long *)0x0)) {
      (*(code *)*plVar19)(&plStack_738,pplVar36);
      plVar19 = plStack_738;
      plStack_738 = (long *)0x0;
      *pplVar36 = plVar19;
    }
    else {
      plStack_738 = (long *)0x0;
      *pplVar36 = (long *)0x0;
    }
  }
  if ((uStack_758 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_748,uStack_758 & 0xfffffffffffffffe);
  }
  if ((uStack_770 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_760,uStack_770 & 0xfffffffffffffffe);
  }
  if ((uStack_788 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_778,uStack_788 & 0xfffffffffffffffe);
  }
  if ((uStack_7a0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_790,uStack_7a0 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_7b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_7a8,(ulong)plStack_7b8 & 0xfffffffffffffffe);
  }
  if ((uStack_268 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_258,CONCAT44(uStack_264,uStack_268) & 0xfffffffffffffffe);
  }
  if ((bStack_280 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_270,CONCAT71(uStack_27f,bStack_280) & 0xfffffffffffffffe);
  }
  if ((bStack_298 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_288,CONCAT71(uStack_297,bStack_298) & 0xfffffffffffffffe);
  }
  if ((bStack_2b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
  }
  if ((bStack_2c8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2b8,CONCAT71(uStack_2c7,bStack_2c8) & 0xfffffffffffffffe);
  }
  if ((bStack_308 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2f8,
                       CONCAT62(uStack_306,CONCAT11(uStack_307,bStack_308)) & 0xfffffffffffffffe);
  }
  if ((bStack_398 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_388,
                       CONCAT53(uStack_395,CONCAT12(uStack_396,CONCAT11(uStack_397,bStack_398))) &
                       0xfffffffffffffffe);
  }
  if ((bStack_380 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_370,
                       CONCAT53(uStack_37d,CONCAT12(uStack_37e,CONCAT11(uStack_37f,bStack_380))) &
                       0xfffffffffffffffe);
  }
  if ((bStack_530 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_520,CONCAT71(uStack_52f,bStack_530) & 0xfffffffffffffffe);
  }
  uVar25 = *param_1;
  uStack_722 = 0;
  uStack_720 = 0;
  uStack_718 = 0;
  bStack_730 = 0x1a;
  uStack_72f = 0x72746e6f63;
  uStack_72a = 0x6c6f;
  uStack_728 = 0x5f;
  uStack_727 = 0x7367616c66;
  plStack_738 = (long *)0x86e3afe1b1c6e2ac;
  uStack_6e0 = 0;
  plStack_6e8 = (long *)&UNK_0efce840;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0efce658;
  plStack_7d8 = (long *)0x0;
  plStack_7d0 = (long *)0x0;
  if (plStack_6e8 == (long *)0x0) {
    plStack_7d8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_6e8)(&plStack_6e8,&plStack_7d8);
    plStack_7d8 = plStack_6e8;
  }
  plStack_6e8 = (long *)0x0;
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
  FUN_04aa75f0(plVar19 + 0xe,&plStack_688,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar17 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0efce6a8;
  pplVar36 = (long **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (pplVar36 != &plStack_7d8) {
    if (plStack_7d8 == (long *)0x0) {
      plVar24 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_7d8)(&plStack_7d8,pplVar36);
      plVar24 = plStack_7d8;
    }
    plStack_7d8 = (long *)0x0;
    *pplVar36 = plVar24;
  }
  puVar22 = (uint *)(plVar19 + 0x12);
  if (plVar17 != (long *)&DAT_0f551f58) {
    if ((*puVar22 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar19[0x14] = _DAT_0f551f70;
        uVar9 = uRam000000000f551f6c;
        uVar8 = _DAT_0f551f68;
        uVar7 = uRam000000000f551f64;
        *puVar22 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar7;
        *(undefined4 *)(plVar19 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar22,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar37 = (_DAT_0f551f60 & 1) != 0;
      lVar26 = 0xf551f61;
      if (bVar37) {
        lVar26 = _DAT_0f551f70;
      }
      uVar23 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar37) {
        uVar23 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar22,lVar26,uVar23);
    }
  }
  plVar24 = plVar19 + 1;
  plVar19[0x11] = _DAT_0f551f58;
  plVar19[0x15] = 0;
  if (plStack_7d8 != (long *)0x0) {
    (*(code *)plStack_7d8[1])(&plStack_7d8);
  }
  LOCK();
  *plVar24 = *plVar24 + 1;
  UNLOCK();
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efce7a0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0efce7f0;
  plVar20[0xe] = (long)(plVar19 + 4);
  plVar20[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_7d8 = plVar20 + 4;
  plStack_7d0 = plVar20;
  puVar18 = (undefined4 *)func_0x0563e5c0(uVar25,&plStack_738);
  plVar21 = *(long **)(puVar18 + 0x24);
  if (plVar21 < *(long **)(puVar18 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar17) {
      if ((*puVar22 & 1) == 0) {
        plVar21[3] = plVar19[0x14];
        lVar26 = plVar19[0x13];
        plVar21[1] = *(long *)puVar22;
        plVar21[2] = lVar26;
      }
      else {
        func_0x04885070(plVar21 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar21 = *plVar17;
    plVar21[5] = (long)(plVar20 + 4);
    plVar21[6] = (long)plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar18 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x05640410(puVar18 + 0x22,plVar17,&plStack_7d8);
  }
  *(long **)(puVar18 + 0x24) = plVar21;
  uVar7 = *puVar18;
  uVar8 = puVar18[1];
  uVar9 = puVar18[2];
  uVar10 = puVar18[3];
  if (*(long *)(puVar18 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar18 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar8;
  *(undefined4 *)(plVar19 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar10;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_7d0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
  if (plStack_7d0 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_7d0 + 1;
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_7d0 + 0x10))(plStack_7d0);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar26 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar26 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  if (plStack_6e8 != (long *)0x0) {
    (*(code *)plStack_6e8[1])(&plStack_6e8);
  }
  if ((bStack_730 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_720,
                       CONCAT26(uStack_72a,CONCAT51(uStack_72f,bStack_730)) & 0xfffffffffffffffe);
  }
  uStack_680 = (undefined8 *)0x0;
  bStack_730 = 0;
  uStack_72f = 0;
  uStack_72a = 0;
  plStack_688 = (long *)0x0;
  plStack_738 = (long *)&UNK_0efcea90;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_7d8 = plStack_738;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0efce868;
  plStack_7d0 = (long *)0x0;
  plStack_738 = (long *)0x0;
  plVar17[4] = (long)&UNK_0f2ccd78;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  *(undefined1 *)(plVar17 + 0xd) = 0;
  FUN_04aa75f0(plVar17 + 0xe,&uStack_5e8,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plStack_6f8 = plVar17 + 0x11;
  plVar17[0x11] = 0;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  plVar17[0x16] = 0;
  plVar17[0x17] = 0xffffffff;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x18] = 0;
  plVar17[0x19] = 0;
  plVar17[0x1a] = 0;
  plVar17[0x1b] = 0;
  plVar17[0x1c] = 0;
  plVar17[0x1d] = 0;
  plVar17[0x1e] = 0;
  plVar17[0x1f] = 0;
  plVar17[4] = (long)&UNK_0efce8b8;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  plVar17[0x30] = 0;
  plVar17[0x31] = 0;
  plVar17[0x32] = 0;
  plVar17[0x33] = 0;
  plVar17[0x34] = 0;
  *(undefined4 *)(plVar17 + 0x35) = 0x3f800000;
  plVar17[0x36] = 0;
  plVar17[0x37] = 0;
  if (plStack_7d8 == (long *)0x0) {
    plVar24 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_7d8)(&plStack_7d8,plVar17 + 0x36);
    plVar24 = plStack_7d8;
  }
  plStack_7d8 = (long *)0x0;
  plVar17[0x36] = (long)plVar24;
  *(undefined1 *)(plVar17 + 0x3e) = 0;
  puStack_6f0 = (uint *)(plVar17 + 0x12);
  plVar24 = plStack_6f8;
  if (plStack_6f8 != (long *)&DAT_0f552138) {
    plVar24 = plVar17 + 0x31;
    if ((*puStack_6f0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar17[0x14] = _DAT_0f552150;
        uVar9 = uRam000000000f55214c;
        uVar8 = _DAT_0f552148;
        uVar7 = uRam000000000f552144;
        *puStack_6f0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar7;
        *(undefined4 *)(plVar17 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puStack_6f0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar37 = (_DAT_0f552140 & 1) != 0;
      lVar26 = 0xf552141;
      if (bVar37) {
        lVar26 = _DAT_0f552150;
      }
      uVar23 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar37) {
        uVar23 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_6f0,lVar26,uVar23);
    }
  }
  plVar17[0x11] = _DAT_0f552138;
  plVar17[0x15] = 0;
  if (plStack_7d8 != (long *)0x0) {
    (*(code *)plStack_7d8[1])(&plStack_7d8);
  }
  plVar20 = plVar17 + 1;
  if (plStack_738 != (long *)0x0) {
    (*(code *)plStack_738[1])(&plStack_738);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  plStack_2e8 = plVar20;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efce998;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0efce9e8;
  plVar20[0xe] = (long)(plVar17 + 4);
  plVar20[0xf] = (long)plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  plVar21 = plVar20 + 1;
  plVar34 = (long *)plVar19[0x1c];
  plVar29 = (long *)plVar19[0x1b];
  plVar33 = plVar29;
  while (plStack_638 = plVar21, plVar33 != plVar34) {
    if ((plVar33[0xf] == 0) && (plVar33[0x10] == -1)) goto LAB_0560c9aa;
    plVar33 = plVar33 + 0x15;
    plVar24 = plVar33;
  }
  if (plVar34 < (long *)plVar19[0x1d]) {
    func_0x05657fd0(plVar34);
    plVar34 = plVar34 + 0x15;
    plVar19[0x1c] = (long)plVar34;
LAB_0560c93d:
    plVar19[0x1c] = (long)plVar34;
    pbVar35 = (byte *)plVar34[-0x15];
    if ((*pbVar35 & 1) == 0) {
      *pbVar35 = 0x26;
      pbVar35 = pbVar35 + 1;
    }
    else {
      pbVar35[8] = 0x13;
      pbVar35[9] = 0;
      pbVar35[10] = 0;
      pbVar35[0xb] = 0;
      pbVar35[0xc] = 0;
      pbVar35[0xd] = 0;
      pbVar35[0xe] = 0;
      pbVar35[0xf] = 0;
      pbVar35 = *(byte **)(pbVar35 + 0x10);
    }
    uVar9 = _UNK_01494d69;
    uVar8 = _UNK_01494d65;
    uVar7 = _UNK_01494d61;
    *(undefined4 *)pbVar35 = _DAT_01494d5d;
    *(undefined4 *)(pbVar35 + 4) = uVar7;
    *(undefined4 *)(pbVar35 + 8) = uVar8;
    *(undefined4 *)(pbVar35 + 0xc) = uVar9;
    pbVar35[0xf] = 0x65;
    pbVar35[0x10] = 0x6e;
    pbVar35[0x11] = 0x74;
    pbVar35[0x12] = 0x3e;
    pbVar35[0x13] = 0;
    lVar26 = plVar19[0x1c];
    plVar33 = (long *)(lVar26 + -0xa8);
    *(char *)(lVar26 + -7) = (char)plVar19[0x10];
    *(undefined8 *)(lVar26 + -0x30) = 0;
    *(undefined8 *)(lVar26 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar26 + -8) = 0;
LAB_0560c9aa:
    plVar27 = plVar20 + 4;
    plVar29 = (long *)plVar33[0x12];
    if (plVar29 < (long *)plVar33[0x13]) {
      plVar29[2] = 0;
      plVar29[3] = 0;
      *plVar29 = 0;
      plVar29[1] = 0;
      plVar29[4] = 0;
      if (plVar29 != plStack_6f8) {
        puVar22 = (uint *)(plVar29 + 1);
        if ((*puStack_6f0 & 1) == 0) {
          plVar29[3] = *(long *)(puStack_6f0 + 4);
          lVar26 = *(long *)(puStack_6f0 + 2);
          *(long *)puVar22 = *(long *)puStack_6f0;
          plVar29[2] = lVar26;
        }
        else {
          puStack_6f0 = puVar22;
          func_0x04885070(puVar22,plVar17[0x14],plVar17[0x13]);
        }
      }
      *plVar29 = *plStack_6f8;
      plVar29[5] = (long)plVar27;
      plVar29[6] = (long)plVar20;
      LOCK();
      plVar20[1] = plVar20[1] + 1;
      UNLOCK();
      plVar29 = plVar29 + 7;
      plVar33[0x12] = (long)plVar29;
      goto LAB_0560cd0f;
    }
    plVar29 = (long *)((long)plVar29 - plVar33[0x11]);
    uVar23 = ((long)plVar29 >> 3) * 0x6db6db6db6db6db7 + 1;
    plVar24 = plVar33;
    plVar34 = plVar17;
    if (uVar23 < 0x492492492492493) {
      lVar26 = plVar33[0x13] - plVar33[0x11] >> 3;
      uVar28 = lVar26 * -0x2492492492492492;
      if (uVar23 < uVar28) {
        uVar23 = uVar28;
      }
      plStack_7b8 = plVar33 + 0x11;
      if (0x249249249249248 < (ulong)(lVar26 * 0x6db6db6db6db6db7)) {
        uVar23 = 0x492492492492492;
      }
      plStack_640 = plVar27;
      plStack_2f0 = plStack_7b8;
      if (uVar23 == 0) {
        plVar24 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar23) goto LAB_0560e75e;
        plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 0x38);
        if (plVar24 == (long *)0x0) {
          func_0x0eec74c0(uVar23 * 0x38,0);
          plVar24 = (long *)0x0;
        }
      }
      plVar21 = (long *)((long)plVar24 + (long)plVar29);
      plStack_7c0 = plVar24 + uVar23 * 7;
      *(undefined8 *)((long)(plVar24 + 2) + (long)plVar29) = 0;
      ((undefined8 *)((long)(plVar24 + 2) + (long)plVar29))[1] = 0;
      *(undefined8 *)((long)plVar24 + (long)plVar29) = 0;
      ((undefined8 *)((long)plVar24 + (long)plVar29))[1] = 0;
      *(undefined8 *)((long)(plVar24 + 4) + (long)plVar29) = 0;
      plStack_7c8 = plVar21;
      plStack_7d8 = plVar24;
      plStack_7d0 = plVar21;
      if (plVar21 != plStack_6f8) {
        if ((*puStack_6f0 & 1) == 0) {
          *(long *)((long)plVar29 + (long)(plVar24 + 3)) = *(long *)(puStack_6f0 + 4);
          uVar11 = puStack_6f0[1];
          uVar12 = puStack_6f0[2];
          uVar13 = puStack_6f0[3];
          *(uint *)((long)plVar29 + (long)(plVar24 + 1)) = *puStack_6f0;
          *(uint *)((long)plVar29 + (long)plVar24 + 0xc) = uVar11;
          *(uint *)((long)plVar29 + (long)(plVar24 + 2)) = uVar12;
          *(uint *)((long)plVar29 + (long)plVar24 + 0x14) = uVar13;
        }
        else {
          func_0x04885070((uint *)((long)plVar29 + (long)(plVar24 + 1)),plVar17[0x14],plVar17[0x13])
          ;
        }
      }
      *plVar21 = *plStack_6f8;
      plVar21[5] = (long)plStack_640;
      plVar21[6] = (long)plVar20;
      LOCK();
      plVar20[1] = plVar20[1] + 1;
      UNLOCK();
      plStack_7c8 = plStack_7c8 + 7;
      plVar34 = (long *)plVar33[0x11];
      plVar21 = (long *)plVar33[0x12];
      plVar24 = (long *)((long)plStack_7d0 + ((long)plVar34 - (long)plVar21));
      plVar29 = plVar24;
      plVar27 = plVar34;
      if ((long)plVar34 - (long)plVar21 != 0) {
        do {
          plVar29[2] = 0;
          plVar29[3] = 0;
          *plVar29 = 0;
          plVar29[1] = 0;
          plVar29[4] = 0;
          plVar29[3] = plVar27[3];
          lVar26 = plVar27[2];
          plVar29[1] = plVar27[1];
          plVar29[2] = lVar26;
          *(undefined2 *)(plVar27 + 1) = 0;
          *plVar29 = *plVar27;
          uVar7 = *(undefined4 *)((long)plVar27 + 0x2c);
          lVar26 = plVar27[6];
          uVar8 = *(undefined4 *)((long)plVar27 + 0x34);
          *(int *)(plVar29 + 5) = (int)plVar27[5];
          *(undefined4 *)((long)plVar29 + 0x2c) = uVar7;
          *(int *)(plVar29 + 6) = (int)lVar26;
          *(undefined4 *)((long)plVar29 + 0x34) = uVar8;
          plVar27[5] = 0;
          plVar27[6] = 0;
          plVar27 = plVar27 + 7;
          plVar29 = plVar29 + 7;
          plStack_6f8 = plVar24;
        } while (plVar27 != plVar21);
        do {
          plVar24 = (long *)plVar34[6];
          if (plVar24 == (long *)0x0) {
LAB_0560cc84:
            bVar4 = *(byte *)(plVar34 + 1);
          }
          else {
            LOCK();
            plVar29 = plVar24 + 1;
            lVar26 = *plVar29;
            *plVar29 = *plVar29 + -1;
            UNLOCK();
            if (lVar26 != 0) goto LAB_0560cc84;
            (**(code **)(*plVar24 + 0x10))(plVar24);
            func_0x0412c2d0(plVar24);
            bVar4 = *(byte *)(plVar34 + 1);
          }
          if ((bVar4 & 1) != 0) {
            thunk_FUN_0ee326a0(plVar34[3],plVar34[1] & 0xfffffffffffffffe);
          }
          plVar34 = plVar34 + 7;
        } while (plVar34 != plVar21);
        plVar34 = (long *)*plStack_2f0;
        plVar24 = plStack_6f8;
      }
      plVar21 = plStack_638;
      plVar29 = plStack_7c8;
      plVar33[0x11] = (long)plVar24;
      plVar33[0x12] = (long)plStack_7c8;
      lVar26 = plVar33[0x13];
      plVar33[0x13] = (long)plStack_7c0;
      if (plVar34 != (long *)0x0) {
        thunk_FUN_0ee326a0(plVar34,lVar26 - (long)plVar34);
      }
LAB_0560cd0f:
      plVar33[0x12] = (long)plVar29;
      lVar26 = *plVar33;
      uVar7 = *(undefined4 *)((long)plVar33 + 4);
      lVar5 = plVar33[1];
      uVar8 = *(undefined4 *)((long)plVar33 + 0xc);
      if (plVar33[1] != 0) {
        LOCK();
        plVar24 = (long *)(plVar33[1] + 8);
        *plVar24 = *plVar24 + 1;
        UNLOCK();
      }
      plVar24 = (long *)plVar17[0xf];
      *(int *)(plVar17 + 0xe) = (int)lVar26;
      *(undefined4 *)((long)plVar17 + 0x74) = uVar7;
      *(int *)(plVar17 + 0xf) = (int)lVar5;
      *(undefined4 *)((long)plVar17 + 0x7c) = uVar8;
      if (plVar24 != (long *)0x0) {
        LOCK();
        plVar29 = plVar24 + 1;
        lVar26 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          func_0x0412c2d0(plVar24);
        }
      }
      *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)plVar33 + 0xa1);
      LOCK();
      lVar26 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
      uVar25 = uStack_2e0;
      plVar24 = plStack_2e8;
      LOCK();
      lVar26 = *plStack_2e8;
      *plStack_2e8 = *plStack_2e8 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
        LOCK();
        lVar26 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar26 = *plStack_2e8;
        *plStack_2e8 = *plStack_2e8 + -1;
        UNLOCK();
      }
      if (lVar26 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
      if (plStack_688 != (long *)0x0) {
        (*(code *)plStack_688[1])(&plStack_688);
      }
      pplVar36 = (long **)(plVar19 + 0x26);
      plStack_7d0 = (long *)0x0;
      plStack_7d8 = (long *)&UNK_0efceaa8;
      if (pplVar36 != &plStack_7d8) {
        if ((*pplVar36 == (long *)0x0) ||
           ((*(code *)(*pplVar36)[1])(pplVar36), plStack_7d8 != (long *)0x0)) {
          (*(code *)*plStack_7d8)(&plStack_7d8,pplVar36);
          plVar19 = plStack_7d8;
        }
        else {
          plVar19 = (long *)0x0;
        }
        *pplVar36 = plVar19;
      }
      if ((uStack_548 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_538,uStack_548 & 0xfffffffffffffffe);
      }
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_418);
      if ((uStack_418 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_408,uStack_418 & 0xfffffffffffffffe);
      }
      bStack_600 = 0x18;
      uStack_5ff = 0x7369645f6e696d;
      uStack_5f8 = 0x74;
      uStack_5f7 = 0x65636e61;
      uStack_5f3 = 0;
      puStack_550 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puStack_550 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar15 = _UNK_0135c60b;
      uStack_560 = 0x29;
      uStack_558 = 0x20;
      puStack_550[2] = _DAT_0135c603;
      puStack_550[3] = uVar15;
      uVar15 = _UNK_0135c5fb;
      *puStack_550 = _DAT_0135c5f3;
      puStack_550[1] = uVar15;
      *(undefined1 *)(puStack_550 + 4) = 0;
      bStack_3b0 = 2;
      uStack_3af = 0x30;
      uStack_3ae = 0;
      bStack_320 = 0;
      uStack_31f = 0;
      func_0x0560fc60(_DAT_01198724,0,auStack_b8,uVar25,&bStack_600,&uStack_560,&bStack_3b0,
                      &bStack_320);
      plVar19 = (long *)func_0x0560f500(*param_1,8,auStack_b8);
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_448 = 0;
      (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_438,&uStack_458);
      if ((uStack_458 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_448,uStack_458 & 0xfffffffffffffffe);
      }
      if ((uStack_438 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_428,uStack_438 & 0xfffffffffffffffe);
      }
      if ((bStack_48 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_38,CONCAT71(uStack_47,bStack_48) & 0xfffffffffffffffe);
      }
      if ((bStack_60 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
      }
      if ((bStack_78 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
      }
      if ((bStack_90 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_80,CONCAT71(uStack_8f,bStack_90) & 0xfffffffffffffffe);
      }
      if ((bStack_a8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_98,CONCAT71(uStack_a7,bStack_a8) & 0xfffffffffffffffe);
      }
      if ((bStack_320 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_310,
                           CONCAT62(uStack_31e,CONCAT11(uStack_31f,bStack_320)) & 0xfffffffffffffffe
                          );
      }
      if ((bStack_3b0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_3a0,
                           CONCAT53(uStack_3ad,CONCAT12(uStack_3ae,CONCAT11(uStack_3af,bStack_3b0)))
                           & 0xfffffffffffffffe);
      }
      if ((uStack_560 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_550,uStack_560 & 0xfffffffffffffffe);
      }
      if ((bStack_600 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_5f0,CONCAT71(uStack_5ff,bStack_600) & 0xfffffffffffffffe);
      }
      bStack_618 = 0x18;
      uStack_617 = 0x7369645f78616d;
      uStack_610 = 0x74;
      uStack_60f = 0x65636e61;
      uStack_60b = 0;
      puStack_568 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puStack_568 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar15 = _UNK_01340d06;
      uStack_578 = 0x29;
      uStack_570 = 0x20;
      puStack_568[2] = _DAT_01340cfe;
      puStack_568[3] = uVar15;
      uVar15 = _UNK_01340cf6;
      *puStack_568 = _DAT_01340cee;
      puStack_568[1] = uVar15;
      *(undefined1 *)(puStack_568 + 4) = 0;
      bStack_3c8 = 2;
      uStack_3c7 = 0x30;
      uStack_3c6 = 0;
      bStack_338 = 0;
      uStack_337 = 0;
      func_0x0560fc60(_DAT_01198af0,0,auStack_140,uVar25,&bStack_618,&uStack_578,&bStack_3c8,
                      &bStack_338);
      plVar19 = (long *)func_0x0560f500(*param_1,0xc,auStack_140);
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      uStack_498 = 0;
      uStack_490 = 0;
      uStack_488 = 0;
      (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_478,&uStack_498);
      if ((uStack_498 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_488,uStack_498 & 0xfffffffffffffffe);
      }
      if ((uStack_478 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_468,uStack_478 & 0xfffffffffffffffe);
      }
      if ((bStack_d0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_c0,CONCAT71(uStack_cf,bStack_d0) & 0xfffffffffffffffe);
      }
      if ((bStack_e8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
      }
      if ((bStack_100 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
      }
      if ((bStack_118 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_108,CONCAT71(uStack_117,bStack_118) & 0xfffffffffffffffe);
      }
      if ((bStack_130 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_120,CONCAT71(uStack_12f,bStack_130) & 0xfffffffffffffffe);
      }
      if ((bStack_338 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_328,
                           CONCAT62(uStack_336,CONCAT11(uStack_337,bStack_338)) & 0xfffffffffffffffe
                          );
      }
      if ((bStack_3c8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_3b8,
                           CONCAT53(uStack_3c5,CONCAT12(uStack_3c6,CONCAT11(uStack_3c7,bStack_3c8)))
                           & 0xfffffffffffffffe);
      }
      if ((uStack_578 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_568,uStack_578 & 0xfffffffffffffffe);
      }
      if ((bStack_618 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_608,CONCAT71(uStack_617,bStack_618) & 0xfffffffffffffffe);
      }
      bStack_590 = 0x20;
      uStack_58f = _DAT_0145f6ec;
      uStack_58b = _UNK_0145f6f0;
      uStack_587 = _UNK_0145f6f4;
      uStack_583 = _UNK_0145f6f8;
      uStack_57f = 0;
      puStack_598 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puStack_598 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar15 = _UNK_01376cd2;
      uStack_5a8 = 0x29;
      uStack_5a0 = 0x24;
      puStack_598[2] = _DAT_01376cca;
      puStack_598[3] = uVar15;
      uVar15 = _UNK_01376cc2;
      *puStack_598 = _DAT_01376cba;
      puStack_598[1] = uVar15;
      *(undefined4 *)(puStack_598 + 4) = 0x5245494c;
      *(undefined1 *)((long)puStack_598 + 0x24) = 0;
      bStack_3e0 = 2;
      uStack_3df = 0x30;
      uStack_3de = 0;
      bStack_350 = 0;
      uStack_34f = 0;
      func_0x05611160(_DAT_011983f0,0,auStack_1c8,uVar25,&bStack_590,&uStack_5a8,&bStack_3e0,
                      &bStack_350);
      plVar19 = (long *)func_0x05610a00(*param_1,0x10,auStack_1c8);
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_4b8,&uStack_4d8);
      if ((uStack_4d8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_4c8,uStack_4d8 & 0xfffffffffffffffe);
      }
      if ((uStack_4b8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_4a8,uStack_4b8 & 0xfffffffffffffffe);
      }
      if ((bStack_158 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_148,CONCAT71(uStack_157,bStack_158) & 0xfffffffffffffffe);
      }
      if ((bStack_170 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_160,CONCAT71(uStack_16f,bStack_170) & 0xfffffffffffffffe);
      }
      if ((bStack_188 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
      }
      if ((bStack_1a0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
      }
      if ((bStack_1b8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_1a8,CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
      }
      if ((bStack_350 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_340,
                           CONCAT62(uStack_34e,CONCAT11(uStack_34f,bStack_350)) & 0xfffffffffffffffe
                          );
      }
      if ((bStack_3e0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_3d0,
                           CONCAT53(uStack_3dd,CONCAT12(uStack_3de,CONCAT11(uStack_3df,bStack_3e0)))
                           & 0xfffffffffffffffe);
      }
      if ((uStack_5a8 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_598,uStack_5a8 & 0xfffffffffffffffe);
      }
      if ((bStack_590 & 1) != 0) {
        uStack_583._3_1_ = (undefined1)((uint)uStack_583 >> 0x18);
        uVar14 = CONCAT11(uStack_57f,uStack_583._3_1_);
        thunk_FUN_0ee326a0(CONCAT62(uStack_57e,uVar14),
                           CONCAT35((undefined3)uStack_58b,CONCAT41(uStack_58f,bStack_590)) &
                           0xfffffffffffffffe);
      }
      bStack_630 = 0x18;
      uStack_62f = 0x73736563637573;
      uStack_628 = 0x5f;
      uStack_627 = 0x65746172;
      uStack_623 = 0;
      puStack_5b0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puStack_5b0 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar15 = _UNK_01376cf7;
      uStack_5c0 = 0x29;
      uStack_5b8 = 0x20;
      puStack_5b0[2] = _DAT_01376cef;
      puStack_5b0[3] = uVar15;
      uVar15 = _UNK_01376ce7;
      *puStack_5b0 = _DAT_01376cdf;
      puStack_5b0[1] = uVar15;
      *(undefined1 *)(puStack_5b0 + 4) = 0;
      bStack_3f8 = 2;
      uStack_3f7 = 0x30;
      uStack_3f6 = 0;
      bStack_368 = 0;
      uStack_367 = 0;
      func_0x05611160(_DAT_01198c70,0,auStack_250,uVar25,&bStack_630,&uStack_5c0,&bStack_3f8,
                      &bStack_368);
      plVar19 = (long *)func_0x05610a00(*param_1,0x14,auStack_250);
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_508 = 0;
      (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_4f8,&uStack_518);
      if ((uStack_518 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_508,uStack_518 & 0xfffffffffffffffe);
      }
      if ((uStack_4f8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
      }
      if ((bStack_1e0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_1d0,CONCAT71(uStack_1df,bStack_1e0) & 0xfffffffffffffffe);
      }
      if ((bStack_1f8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_1e8,CONCAT71(uStack_1f7,bStack_1f8) & 0xfffffffffffffffe);
      }
      if ((bStack_210 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_200,CONCAT71(uStack_20f,bStack_210) & 0xfffffffffffffffe);
      }
      if ((bStack_228 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_218,CONCAT71(uStack_227,bStack_228) & 0xfffffffffffffffe);
      }
      if ((bStack_240 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_230,CONCAT71(uStack_23f,bStack_240) & 0xfffffffffffffffe);
      }
      if ((bStack_368 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_358,
                           CONCAT62(uStack_366,CONCAT11(uStack_367,bStack_368)) & 0xfffffffffffffffe
                          );
      }
      if ((bStack_3f8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_3e8,
                           CONCAT53(uStack_3f5,CONCAT12(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8)))
                           & 0xfffffffffffffffe);
      }
      if ((uStack_5c0 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_5b0,uStack_5c0 & 0xfffffffffffffffe);
      }
      if ((bStack_630 & 1) == 0) {
        puVar22 = (uint *)func_0x0c635730(0x86);
        bVar4 = (byte)*puVar22;
      }
      else {
        thunk_FUN_0ee326a0(uStack_620,CONCAT71(uStack_62f,bStack_630) & 0xfffffffffffffffe);
        puVar22 = (uint *)func_0x0c635730(0x86);
        bVar4 = (byte)*puVar22;
      }
      if ((bVar4 & 1) == 0) {
        uStack_698 = *(undefined8 *)((long)puVar22 + 0x10);
        uStack_6a8 = *puVar22;
        uStack_6a4 = *(uint *)((long)puVar22 + 4);
        uStack_6a0 = *(uint *)((long)puVar22 + 8);
        uStack_69c = *(uint *)((long)puVar22 + 0xc);
      }
      else {
        FUN_0412e5e0(&uStack_6a8,*(undefined8 *)((long)puVar22 + 0x10),
                     *(undefined8 *)((long)puVar22 + 8));
      }
      uVar25 = *param_1;
      plStack_688 = (long *)0x0;
      uStack_680 = (undefined8 *)0x655f646e756f7316;
      uStack_678 = 0x746e6576;
      uStack_668 = 0;
      pbVar35 = (byte *)((long)&uStack_680 + 1);
      uVar23 = func_0x0eee2e90(pbVar35);
      if (uVar23 != 0) {
        uVar28 = (ulong)((uint)uVar23 & 7);
        if (7 < uVar23) {
          uVar23 = uVar23 & 0xfffffffffffffff8;
          do {
            plVar31 = (long *)(((((((((long)plVar31 * 0x100000001b3 ^ (ulong)*pbVar35) *
                                     0x100000001b3 ^ (ulong)pbVar35[1]) * 0x100000001b3 ^
                                   (ulong)pbVar35[2]) * 0x100000001b3 ^ (ulong)pbVar35[3]) *
                                  0x100000001b3 ^ (ulong)pbVar35[4]) * 0x100000001b3 ^
                                (ulong)pbVar35[5]) * 0x100000001b3 ^ (ulong)pbVar35[6]) *
                               0x100000001b3 ^ (ulong)pbVar35[7]);
            pbVar35 = pbVar35 + 8;
            uVar23 = uVar23 - 8;
          } while (uVar23 != 0);
        }
        if (uVar28 != 0) {
          uVar23 = 0;
          do {
            plVar31 = (long *)((long)plVar31 * 0x100000001b3 ^ (ulong)pbVar35[uVar23]);
            uVar23 = uVar23 + 1;
          } while (uVar28 != uVar23);
        }
      }
      plStack_6e8 = (long *)0x18;
      uStack_6e0 = 0x655f646e756f7316;
      uStack_6d8 = 0x746e6576;
      uStack_6c8 = 0x86;
      plStack_688 = plVar31;
      if ((uStack_6a8 & 1) == 0) {
        uStack_6b0 = uStack_698;
        uStack_6c0 = CONCAT44(uStack_6a4,uStack_6a8);
        uStack_6b8 = CONCAT44(uStack_69c,uStack_6a0);
      }
      else {
        FUN_0412e5e0(&uStack_6c0,uStack_698,CONCAT44(uStack_69c,uStack_6a0));
      }
      bStack_730 = 0;
      uStack_72f = 0;
      uStack_72a = 0;
      plStack_738 = (long *)&UNK_0efcd5c8;
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      *puVar16 = plStack_6e8;
      puVar16[3] = uStack_6d0;
      puVar16[1] = uStack_6e0;
      puVar16[2] = uStack_6d8;
      uStack_6e0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      *(undefined4 *)(puVar16 + 4) = uStack_6c8;
      puVar16[7] = uStack_6b0;
      *(undefined4 *)(puVar16 + 5) = (undefined4)uStack_6c0;
      *(undefined4 *)((long)puVar16 + 0x2c) = uStack_6c0._4_4_;
      *(undefined4 *)(puVar16 + 6) = (undefined4)uStack_6b8;
      *(undefined4 *)((long)puVar16 + 0x34) = uStack_6b8._4_4_;
      uStack_6c0 = 0;
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      bStack_730 = (byte)puVar16;
      uStack_72f = (undefined5)((ulong)puVar16 >> 8);
      uStack_72a = (undefined2)((ulong)puVar16 >> 0x30);
      plStack_2d8 = (long *)0x0;
      uStack_2d0 = 0;
      if (plStack_738 == (long *)0x0) {
        plVar31 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_738)(&plStack_738,&plStack_2d8);
        plVar31 = plStack_738;
      }
      plStack_738 = (long *)0x0;
      plStack_2d8 = plVar31;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0x200,0);
      }
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&UNK_0efcd3f8;
      plStack_7d8 = (long *)0x0;
      plStack_7d0 = (long *)0x0;
      if (plVar31 == (long *)0x0) {
        plStack_7d8 = (long *)0x0;
      }
      else {
        (*(code *)*plVar31)(&plStack_2d8,&plStack_7d8);
        plStack_7d8 = plStack_2d8;
      }
      plStack_2d8 = (long *)0x0;
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
      FUN_04aa75f0(plVar19 + 0xe,&uStack_5e8,&UNK_01254d89);
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
      plVar19[4] = (long)&UNK_0efcd448;
      plVar19[0x2e] = 0;
      plVar19[0x2f] = 0;
      plVar19[0x30] = 0;
      plVar19[0x31] = 0;
      plVar19[0x32] = 0;
      plVar19[0x33] = 0;
      plVar19[0x34] = 0;
      *(undefined4 *)(plVar19 + 0x35) = 0x3f800000;
      plVar19[0x36] = 0;
      plVar19[0x37] = 0;
      if (plStack_7d8 == (long *)0x0) {
        plVar17 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_7d8)(&plStack_7d8,plVar19 + 0x36);
        plVar17 = plStack_7d8;
      }
      plStack_7d8 = (long *)0x0;
      plVar19[0x36] = (long)plVar17;
      *(undefined1 *)(plVar19 + 0x3e) = 0;
      puVar22 = (uint *)(plVar19 + 0x12);
      if (plVar31 != (long *)&DAT_0f552138) {
        if ((*puVar22 & 1) == 0) {
          if ((_DAT_0f552140 & 1) == 0) {
            plVar19[0x14] = _DAT_0f552150;
            uVar9 = uRam000000000f55214c;
            uVar8 = _DAT_0f552148;
            uVar7 = uRam000000000f552144;
            *puVar22 = _DAT_0f552140;
            *(undefined4 *)((long)plVar19 + 0x94) = uVar7;
            *(undefined4 *)(plVar19 + 0x13) = uVar8;
            *(undefined4 *)((long)plVar19 + 0x9c) = uVar9;
          }
          else {
            func_0x04885070(puVar22,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
          }
        }
        else {
          bVar37 = (_DAT_0f552140 & 1) != 0;
          lVar26 = 0xf552141;
          if (bVar37) {
            lVar26 = _DAT_0f552150;
          }
          uVar23 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
          if (bVar37) {
            uVar23 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
          }
          func_0x04885120(puVar22,lVar26,uVar23);
        }
      }
      plVar19[0x11] = _DAT_0f552138;
      plVar19[0x15] = 0;
      if (plStack_7d8 != (long *)0x0) {
        (*(code *)plStack_7d8[1])(&plStack_7d8);
      }
      plVar17 = plVar19 + 1;
      if (plStack_2d8 != (long *)0x0) {
        (*(code *)plStack_2d8[1])(&plStack_2d8);
      }
      LOCK();
      *plVar17 = *plVar17 + 1;
      UNLOCK();
      plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar24 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar24[1] = 0;
      plVar24[2] = 0;
      *plVar24 = (long)&UNK_0efcd528;
      plVar24[6] = 0;
      plVar24[7] = 0;
      plVar24[4] = (long)&UNK_0efcd578;
      plVar24[0xe] = (long)(plVar19 + 4);
      plVar24[0xf] = (long)plVar19;
      LOCK();
      plVar19[1] = plVar19[1] + 1;
      UNLOCK();
      plStack_7d8 = plVar24 + 4;
      plStack_7d0 = plVar24;
      puVar18 = (undefined4 *)func_0x0563e5c0(uVar25,&plStack_688);
      plVar20 = *(long **)(puVar18 + 0x24);
      if (plVar20 < *(long **)(puVar18 + 0x26)) {
        plVar20[2] = 0;
        plVar20[3] = 0;
        *plVar20 = 0;
        plVar20[1] = 0;
        plVar20[4] = 0;
        if (plVar20 != plVar31) {
          if ((*puVar22 & 1) == 0) {
            plVar20[3] = plVar19[0x14];
            lVar26 = plVar19[0x13];
            plVar20[1] = *(long *)puVar22;
            plVar20[2] = lVar26;
          }
          else {
            func_0x04885070(plVar20 + 1,plVar19[0x14],plVar19[0x13]);
          }
        }
        *plVar20 = *plVar31;
        plVar20[5] = (long)(plVar24 + 4);
        plVar20[6] = (long)plVar24;
        LOCK();
        plVar24[1] = plVar24[1] + 1;
        UNLOCK();
        plVar20 = plVar20 + 7;
        *(long **)(puVar18 + 0x24) = plVar20;
      }
      else {
        plVar20 = (long *)func_0x05640410(puVar18 + 0x22,plVar31,&plStack_7d8);
      }
      *(long **)(puVar18 + 0x24) = plVar20;
      uVar7 = *puVar18;
      uVar8 = puVar18[1];
      uVar9 = puVar18[2];
      uVar10 = puVar18[3];
      if (*(long *)(puVar18 + 2) != 0) {
        LOCK();
        plVar31 = (long *)(*(long *)(puVar18 + 2) + 8);
        *plVar31 = *plVar31 + 1;
        UNLOCK();
      }
      plVar31 = (long *)plVar19[0xf];
      *(undefined4 *)(plVar19 + 0xe) = uVar7;
      *(undefined4 *)((long)plVar19 + 0x74) = uVar8;
      *(undefined4 *)(plVar19 + 0xf) = uVar9;
      *(undefined4 *)((long)plVar19 + 0x7c) = uVar10;
      if (plVar31 != (long *)0x0) {
        LOCK();
        plVar24 = plVar31 + 1;
        lVar26 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          func_0x0412c2d0(plVar31);
        }
      }
      plVar31 = plStack_7d0;
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
      if (plStack_7d0 != (long *)0x0) {
        LOCK();
        plVar24 = plStack_7d0 + 1;
        lVar26 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plStack_7d0 + 0x10))(plStack_7d0);
          func_0x0412c2d0(plVar31);
        }
      }
      LOCK();
      lVar26 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
        LOCK();
        lVar26 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar26 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
      }
      if (lVar26 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      if (plStack_738 != (long *)0x0) {
        (*(code *)plStack_738[1])(&plStack_738);
      }
      if ((uStack_6c0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_6b0,uStack_6c0 & 0xfffffffffffffffe);
      }
      if ((uStack_6e0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_6d0,uStack_6e0 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_680 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_670,(ulong)uStack_680 & 0xfffffffffffffffe);
      }
      pplVar36 = (long **)(plVar19 + 0x26);
      plStack_7d8 = (long *)&UNK_0efcd5e0;
      plStack_7d0 = (long *)0x86;
      plStack_7c8 = (long *)0x655f646e756f7316;
      plStack_7c0 = (long *)0x746e6576;
      plStack_7b8 = (long *)0x0;
      uStack_7b0 = 0x18;
      if (pplVar36 != &plStack_7d8) {
        if ((*pplVar36 == (long *)0x0) ||
           ((*(code *)(*pplVar36)[1])(pplVar36), plStack_7d8 != (long *)0x0)) {
          (*(code *)*plStack_7d8)(&plStack_7d8,pplVar36);
          plVar31 = plStack_7d8;
        }
        else {
          plVar31 = (long *)0x0;
        }
        *pplVar36 = plVar31;
      }
      if ((uStack_6a8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_698,CONCAT44(uStack_6a4,uStack_6a8) & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    plVar34 = (long *)((long)plVar34 - (long)plVar29);
    uVar23 = ((long)plVar34 >> 3) * -0x30c30c30c30c30c3 + 1;
    plVar27 = plVar19;
    if (0x186186186186186 < uVar23) goto LAB_0560e768;
    lVar26 = plVar19[0x1d] - (long)plVar29 >> 3;
    uVar28 = lVar26 * -0x6186186186186186;
    if (uVar23 < uVar28) {
      uVar23 = uVar28;
    }
    plVar33 = plVar19 + 0x1b;
    if (0xc30c30c30c30c2 < (ulong)(lVar26 * -0x30c30c30c30c30c3)) {
      uVar23 = 0x186186186186186;
    }
    plStack_7b8 = plVar33;
    if (uVar23 == 0) {
      plVar24 = (long *)0x0;
LAB_0560c75d:
      plStack_7d0 = (long *)((long)plVar34 + (long)plVar24);
      plStack_7c0 = plVar24 + uVar23 * 0x15;
      plStack_7d8 = plVar24;
      plStack_7c8 = plStack_7d0;
      plStack_640 = plVar33;
      func_0x05657fd0(plStack_7d0);
      plVar34 = plStack_7c8 + 0x15;
      lVar26 = plVar19[0x1b];
      lVar5 = plVar19[0x1c];
      lVar32 = (lVar26 - lVar5) + (long)plStack_7d0;
      if (lVar26 != lVar5) {
        lVar30 = 0;
        do {
          uVar25 = ((undefined8 *)(lVar26 + lVar30))[1];
          *(undefined8 *)(lVar32 + lVar30) = *(undefined8 *)(lVar26 + lVar30);
          ((undefined8 *)(lVar32 + lVar30))[1] = uVar25;
          *(undefined8 *)(lVar26 + lVar30) = 0;
          ((undefined8 *)(lVar26 + lVar30))[1] = 0;
          puVar16 = (undefined8 *)(lVar32 + 0x20 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16 = (undefined8 *)(lVar32 + 0x10 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar32 + 0x30 + lVar30) = 0;
          *(undefined8 *)(lVar32 + 0x28 + lVar30) = *(undefined8 *)(lVar26 + 0x28 + lVar30);
          puVar18 = (undefined4 *)(lVar26 + 0x18 + lVar30);
          uVar7 = puVar18[1];
          uVar8 = puVar18[2];
          uVar9 = puVar18[3];
          puVar2 = (undefined4 *)(lVar32 + 0x18 + lVar30);
          *puVar2 = *puVar18;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined2 *)(lVar26 + 0x18 + lVar30) = 0;
          *(undefined8 *)(lVar32 + 0x10 + lVar30) = *(undefined8 *)(lVar26 + 0x10 + lVar30);
          func_0x04167a20(lVar30 + 0x38 + lVar32,lVar26 + lVar30 + 0x38);
          puVar16 = (undefined8 *)(lVar26 + 0x40 + lVar30);
          uVar25 = puVar16[1];
          puVar3 = (undefined8 *)(lVar32 + 0x40 + lVar30);
          *puVar3 = *puVar16;
          puVar3[1] = uVar25;
          puVar16 = (undefined8 *)(lVar26 + 0x50 + lVar30);
          uVar25 = puVar16[1];
          puVar3 = (undefined8 *)(lVar32 + 0x50 + lVar30);
          *puVar3 = *puVar16;
          puVar3[1] = uVar25;
          puVar16 = (undefined8 *)(lVar26 + 0x60 + lVar30);
          uVar25 = puVar16[1];
          puVar3 = (undefined8 *)(lVar32 + 0x60 + lVar30);
          *puVar3 = *puVar16;
          puVar3[1] = uVar25;
          puVar16 = (undefined8 *)(lVar26 + 0x60 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar32 + 0x70 + lVar30) = *(undefined8 *)(lVar26 + 0x70 + lVar30);
          puVar16 = (undefined8 *)(lVar26 + 0x78 + lVar30);
          uVar25 = puVar16[1];
          puVar3 = (undefined8 *)(lVar32 + 0x78 + lVar30);
          *puVar3 = *puVar16;
          puVar3[1] = uVar25;
          puVar16 = (undefined8 *)(lVar32 + 0x88 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar32 + 0x98 + lVar30) = 0;
          puVar18 = (undefined4 *)(lVar26 + 0x88 + lVar30);
          uVar7 = puVar18[1];
          uVar8 = puVar18[2];
          uVar9 = puVar18[3];
          puVar2 = (undefined4 *)(lVar32 + 0x88 + lVar30);
          *puVar2 = *puVar18;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined8 *)(lVar32 + 0x98 + lVar30) = *(undefined8 *)(lVar26 + 0x98 + lVar30);
          puVar16 = (undefined8 *)(lVar26 + 0x88 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar26 + 0x98 + lVar30) = 0;
          *(undefined2 *)(lVar32 + 0xa0 + lVar30) = *(undefined2 *)(lVar26 + 0xa0 + lVar30);
          lVar1 = lVar26 + lVar30;
          lVar30 = lVar30 + 0xa8;
        } while (lVar1 + 0xa8 != lVar5);
        do {
          func_0x056548d0(lVar26);
          lVar26 = lVar26 + 0xa8;
        } while (lVar26 != lVar5);
        lVar26 = *plStack_640;
      }
      plVar21 = plStack_638;
      plVar19[0x1b] = lVar32;
      plVar19[0x1c] = (long)plVar34;
      lVar5 = plVar19[0x1d];
      plVar19[0x1d] = (long)plStack_7c0;
      if (lVar26 != 0) {
        thunk_FUN_0ee326a0(lVar26,lVar5 - lVar26);
      }
      goto LAB_0560c93d;
    }
    plVar29 = plVar20;
    if (uVar23 < 0x186186186186187) {
      plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 0xa8);
      if (plVar24 == (long *)0x0) {
        func_0x0eec74c0(uVar23 * 0xa8,0);
        plVar24 = (long *)0x0;
      }
      goto LAB_0560c75d;
    }
LAB_0560e75e:
    func_0x04882eb0();
    plVar24 = plVar33;
  }
  func_0x05658210();
  plVar20 = plVar29;
LAB_0560e768:
  uVar25 = func_0x05658140();
  if ((bRamcbf29ce484222325 & 1) != 0) {
    thunk_FUN_0ee326a0(plVar24[3],plVar24[1] & 0xfffffffffffffffe);
  }
  plVar20[0x12] = (long)plVar24;
  plVar31 = plVar27 + 1;
  LOCK();
  lVar26 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar27 + 0x10))(plVar27);
    func_0x0412c2d0(plVar27);
  }
  LOCK();
  lVar26 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
    func_0x0412c2d0(plVar34);
  }
  LOCK();
  lVar26 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
    func_0x0412c2d0(plVar34);
  }
  if (plStack_738 != (long *)0x0) {
    (*(code *)plStack_738[1])(&plStack_738);
  }
  func_0x05641100(&plStack_6e8);
  if (((ulong)uStack_680 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_670,(ulong)uStack_680 & 0xfffffffffffffffe);
  }
  if ((uStack_6a8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_698,CONCAT44(uStack_6a4,uStack_6a8) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar25);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



/* ---- referenced strings ----
 * 0x1340cee  Definition::DEFAULT_MAX_DISTANCE
 * 0x1340cfe  ULT_MAX_DISTANCE
 * 0x135c5ac  minecraft:behavior.charge_attack
 * 0x135c5bc  or.charge_attack
 * 0x135c5f3  Definition::DEFAULT_MIN_DISTANCE
 * 0x135c603  ULT_MIN_DISTANCE
 * 0x1376cba  Definition::DEFAULT_SPEED_MULTIPLIER
 * 0x1376cca  ULT_SPEED_MULTIPLIER
 * 0x1376cdf  Definition::DEFAULT_SUCCESS_RATE
 * 0x1376cef  ULT_SUCCESS_RATE
 * 0x145f6ec  speed_multiplier
 * 0x1494d5d  <any array element>
 */
