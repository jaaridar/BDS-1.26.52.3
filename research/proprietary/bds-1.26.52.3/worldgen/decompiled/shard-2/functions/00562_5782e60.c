/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5882e60 (ELF vaddr 0x5782e60)
 * Label: caller-of-callee
 * Body:  [[05882e60, 05884484] [05884490, 05884a55] [05884a60, 05884a9c] [05884aa0, 05885fe0] [058868a6, 0588694d] [05886c25, 05886c38]]
 * Ghidra: FUN_05882e60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05882e60(uint *param_1,byte *param_2)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined4 *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  long **pplVar35;
  long lVar36;
  bool bVar37;
  long **pplStack_768;
  undefined1 uStack_749;
  long *plStack_748;
  long *plStack_740;
  long *plStack_738;
  long *plStack_730;
  long *plStack_728;
  undefined8 uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  undefined8 uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  uint *puStack_6b0;
  long *plStack_6a8;
  byte bStack_6a0;
  undefined5 uStack_69f;
  undefined2 uStack_69a;
  undefined1 uStack_698;
  undefined5 uStack_697;
  undefined2 uStack_692;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long *plStack_668;
  byte bStack_660;
  undefined7 uStack_65f;
  undefined1 uStack_658;
  undefined4 uStack_657;
  undefined3 uStack_653;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long *plStack_620;
  byte bStack_618;
  undefined7 uStack_617;
  undefined1 uStack_610;
  undefined4 uStack_60f;
  undefined1 uStack_60b;
  undefined8 uStack_608;
  byte bStack_600;
  undefined5 uStack_5ff;
  undefined2 uStack_5fa;
  undefined1 uStack_5f8;
  undefined5 uStack_5f7;
  undefined1 uStack_5f2;
  undefined8 uStack_5f0;
  uint uStack_5e8;
  uint uStack_5e4;
  uint uStack_5e0;
  uint uStack_5dc;
  undefined8 uStack_5d8;
  ulong uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 *puStack_5b8;
  ulong uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  ulong uStack_598;
  undefined8 uStack_590;
  undefined4 *puStack_588;
  ulong uStack_580;
  undefined8 uStack_578;
  undefined8 *puStack_570;
  byte bStack_568;
  undefined7 uStack_567;
  undefined1 uStack_560;
  undefined1 uStack_55f;
  undefined8 uStack_558;
  ulong uStack_550;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  byte *pbStack_538;
  undefined8 uStack_530;
  ulong auStack_528 [4];
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  uint *puStack_390;
  long *plStack_388;
  byte bStack_380;
  undefined1 uStack_37f;
  undefined1 uStack_37e;
  undefined5 uStack_37d;
  undefined8 uStack_370;
  byte bStack_368;
  undefined1 uStack_367;
  undefined1 uStack_366;
  undefined5 uStack_365;
  undefined8 uStack_358;
  byte bStack_350;
  undefined1 uStack_34f;
  undefined1 uStack_34e;
  undefined5 uStack_34d;
  undefined8 uStack_340;
  byte bStack_338;
  undefined1 uStack_337;
  undefined1 uStack_336;
  undefined5 uStack_335;
  undefined8 uStack_328;
  byte bStack_320;
  undefined1 uStack_31f;
  undefined1 uStack_31e;
  undefined5 uStack_31d;
  undefined8 uStack_310;
  byte bStack_308;
  undefined1 uStack_307;
  undefined6 uStack_306;
  undefined8 uStack_2f8;
  byte bStack_2f0;
  undefined1 uStack_2ef;
  undefined6 uStack_2ee;
  undefined8 uStack_2e0;
  byte bStack_2d8;
  undefined1 uStack_2d7;
  undefined6 uStack_2d6;
  undefined8 uStack_2c8;
  byte bStack_2c0;
  undefined1 uStack_2bf;
  undefined6 uStack_2be;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  byte bStack_248;
  undefined7 uStack_247;
  undefined8 uStack_238;
  byte bStack_230;
  undefined7 uStack_22f;
  undefined8 uStack_220;
  byte bStack_218;
  undefined7 uStack_217;
  undefined8 uStack_208;
  byte bStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f0;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  byte *pbStack_1d8;
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
  
  if ((*param_1 & 1) == 0) {
    uStack_5d8 = *(undefined8 *)(param_1 + 4);
    uStack_5e8 = *param_1;
    uStack_5e4 = param_1[1];
    uStack_5e0 = param_1[2];
    uStack_5dc = param_1[3];
  }
  else {
    func_0x0412e5e0(&uStack_5e8,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 2));
  }
  bStack_568 = 0x10;
  uStack_567 = 0x7469726f697270;
  uStack_560 = 0x79;
  uStack_55f = 0;
  bStack_320 = 2;
  uStack_31f = 0x30;
  uStack_31e = 0;
  bStack_338 = 2;
  uStack_337 = 0x30;
  uStack_336 = 0;
  bStack_2c0 = 0;
  uStack_2bf = 0;
  func_0x0564aad0(&plStack_258,&uStack_5e8,&bStack_568,0,&bStack_320,0,&bStack_338,&bStack_2c0);
  uVar28 = *(undefined8 *)param_2;
  uStack_550 = 0;
  if ((uStack_1e8 & 1) == 0) {
    pbStack_538 = pbStack_1d8;
    uStack_548 = uStack_1e8;
    uStack_544 = uStack_1e4;
    uStack_540 = uStack_1e0;
    uStack_53c = uStack_1dc;
  }
  else {
    func_0x0412e5e0(&uStack_548,pbStack_1d8,CONCAT44(uStack_1dc,uStack_1e0));
  }
  uStack_530 = 0;
  if ((uStack_548 & 1) == 0) {
    if ((byte)uStack_548 >> 1 != 0) goto LAB_05882fc6;
LAB_058830b5:
    uVar34 = 0;
  }
  else {
    if (CONCAT44(uStack_53c,uStack_540) == 0) goto LAB_058830b5;
LAB_05882fc6:
    if ((uStack_548 & 1) == 0) {
      pbVar25 = (byte *)((long)&uStack_548 + 1);
      if (pbVar25 != (byte *)0x0) goto LAB_05882fed;
      goto LAB_058830b5;
    }
    pbVar25 = pbStack_538;
    if (pbStack_538 == (byte *)0x0) goto LAB_058830b5;
LAB_05882fed:
    if (*pbVar25 == 0) goto LAB_058830b5;
    uVar34 = 0xcbf29ce484222325;
    uVar17 = func_0x0eee2e90(pbVar25);
    if (uVar17 != 0) {
      uVar31 = (ulong)((uint)uVar17 & 7);
      if (7 < uVar17) {
        uVar17 = uVar17 & 0xfffffffffffffff8;
        do {
          uVar34 = (((((((uVar34 * 0x100000001b3 ^ (ulong)*pbVar25) * 0x100000001b3 ^
                        (ulong)pbVar25[1]) * 0x100000001b3 ^ (ulong)pbVar25[2]) * 0x100000001b3 ^
                      (ulong)pbVar25[3]) * 0x100000001b3 ^ (ulong)pbVar25[4]) * 0x100000001b3 ^
                    (ulong)pbVar25[5]) * 0x100000001b3 ^ (ulong)pbVar25[6]) * 0x100000001b3 ^
                   (ulong)pbVar25[7];
          pbVar25 = pbVar25 + 8;
          uVar17 = uVar17 - 8;
        } while (uVar17 != 0);
      }
      if (uVar31 != 0) {
        uVar17 = 0;
        do {
          uVar34 = uVar34 * 0x100000001b3 ^ (ulong)pbVar25[uVar17];
          uVar17 = uVar17 + 1;
        } while (uVar31 != uVar17);
      }
    }
  }
  plStack_748 = (long *)0x0;
  uStack_550 = uVar34;
  func_0x0564b850(&plStack_740,&plStack_258);
  puStack_2a0 = (undefined8 *)0x0;
  plStack_2a8 = (long *)&UNK_0efeea20;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar18 = plStack_748;
  puVar18[1] = plStack_740;
  puVar18[5] = uStack_720;
  puVar18[3] = plStack_730;
  puVar18[4] = plStack_728;
  plStack_730 = (long *)0x0;
  plStack_728 = (long *)0x0;
  uStack_720 = 0;
  puVar18[8] = uStack_708;
  puVar18[6] = uStack_718;
  puVar18[7] = uStack_710;
  uStack_718 = 0;
  uStack_710 = 0;
  uStack_708 = 0;
  puVar18[0xb] = uStack_6f0;
  puVar18[9] = uStack_700;
  puVar18[10] = uStack_6f8;
  uStack_700 = 0;
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  puVar18[0xe] = uStack_6d8;
  puVar18[0xc] = uStack_6e8;
  puVar18[0xd] = uStack_6e0;
  uStack_6e8 = 0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  puVar18[0x11] = uStack_6c0;
  *(undefined4 *)(puVar18 + 0xf) = (undefined4)uStack_6d0;
  *(undefined4 *)((long)puVar18 + 0x7c) = uStack_6d0._4_4_;
  *(undefined4 *)(puVar18 + 0x10) = (undefined4)uStack_6c8;
  *(undefined4 *)((long)puVar18 + 0x84) = uStack_6c8._4_4_;
  uStack_6d0 = 0;
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  plStack_668 = (long *)0x0;
  bStack_660 = 0;
  uStack_65f = 0;
  puStack_2a0 = puVar18;
  if (plStack_2a8 == (long *)0x0) {
    plVar22 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_2a8)(&plStack_2a8,&plStack_668);
    plVar22 = plStack_2a8;
  }
  plStack_2a8 = (long *)0x0;
  plStack_668 = plVar22;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0efee850;
  plStack_6a8 = (long *)0x0;
  bStack_6a0 = 0;
  uStack_69f = 0;
  uStack_69a = 0;
  if (plVar22 == (long *)0x0) {
    plStack_6a8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar22)(&plStack_668,&plStack_6a8);
    plStack_6a8 = plStack_668;
  }
  plStack_668 = (long *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&uStack_749,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar22 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0efee8a0;
  plVar19[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar19 + 0x2f) = 1;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  if (plStack_6a8 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_6a8)(&plStack_6a8,plVar19 + 0x30);
    plVar20 = plStack_6a8;
  }
  plStack_6a8 = (long *)0x0;
  plVar19[0x30] = (long)plVar20;
  puVar1 = (uint *)(plVar19 + 0x12);
  if (plVar22 == (long *)&DAT_0f552078) {
    plVar19[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552090;
        uVar12 = uRam000000000f55208c;
        uVar11 = _DAT_0f552088;
        uVar10 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar10;
        *(undefined4 *)(plVar19 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar37 = (_DAT_0f552080 & 1) != 0;
      lVar29 = 0xf552081;
      if (bVar37) {
        lVar29 = _DAT_0f552090;
      }
      uVar34 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar37) {
        uVar34 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar1,lVar29,uVar34);
    }
    plVar19[0x11] = _DAT_0f552078;
    plVar19[0x15] = 0;
    if (plStack_6a8 != (long *)0x0) {
      (*(code *)plStack_6a8[1])(&plStack_6a8);
    }
  }
  plVar20 = plVar19 + 1;
  if (plStack_668 != (long *)0x0) {
    (*(code *)plStack_668[1])(&plStack_668);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puStack_6b0 = (uint *)param_2;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0efee980;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[4] = &UNK_0efee9d0;
  puVar18[0xe] = plVar19 + 4;
  puVar18[0xf] = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  bStack_6a0 = (byte)puVar18;
  uStack_69f = (undefined5)((ulong)puVar18 >> 8);
  uStack_69a = (undefined2)((ulong)puVar18 >> 0x30);
  plStack_6a8 = puVar18 + 4;
  puVar21 = (undefined4 *)func_0x058c9ff0(uVar28,&uStack_550);
  plVar23 = *(long **)(puVar21 + 0x24);
  if (plVar23 < *(long **)(puVar21 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar22) {
      if ((*puVar1 & 1) == 0) {
        plVar23[3] = plVar19[0x14];
        lVar29 = plVar19[0x13];
        plVar23[1] = *(long *)puVar1;
        plVar23[2] = lVar29;
      }
      else {
        func_0x04885070(plVar23 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar23 = *plVar22;
    plVar23[5] = (long)(puVar18 + 4);
    plVar23[6] = (long)puVar18;
    LOCK();
    puVar18[1] = puVar18[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar21 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x058cbe40(puVar21 + 0x22,plVar22,&plStack_6a8);
  }
  puVar1 = puStack_6b0;
  *(long **)(puVar21 + 0x24) = plVar23;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar11;
  *(undefined4 *)(plVar19 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar13;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    lVar29 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0412c2d0(plVar22);
    }
  }
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  plVar22 = (long *)CONCAT26(uStack_69a,CONCAT51(uStack_69f,bStack_6a0));
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    lVar29 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar29 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    FUN_0412c2d0(plVar19);
    LOCK();
    lVar29 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar29 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar29 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    FUN_0412c2d0(plVar19);
  }
  if (plStack_2a8 != (long *)0x0) {
    (*(code *)plStack_2a8[1])(&plStack_2a8);
  }
  if ((uStack_6d0 & 1) != 0) {
    func_0x0412a280(uStack_6c0,uStack_6d0 & 0xfffffffffffffffe);
  }
  if ((uStack_6e8 & 1) != 0) {
    func_0x0412a280(uStack_6d8,uStack_6e8 & 0xfffffffffffffffe);
  }
  if ((uStack_700 & 1) != 0) {
    func_0x0412a280(uStack_6f0,uStack_700 & 0xfffffffffffffffe);
  }
  if ((uStack_718 & 1) != 0) {
    func_0x0412a280(uStack_708,uStack_718 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_730 & 1) != 0) {
    func_0x0412a280(uStack_720,(ulong)plStack_730 & 0xfffffffffffffffe);
  }
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(pbStack_538,CONCAT44(uStack_544,uStack_548) & 0xfffffffffffffffe);
  }
  plStack_748 = (long *)0x0;
  plStack_740 = (long *)((ulong)plStack_740 & 0xffffffffffffff00);
  func_0x0564b850(&plStack_738,&plStack_258);
  bStack_6a0 = 0;
  uStack_69f = 0;
  uStack_69a = 0;
  plStack_6a8 = (long *)&UNK_0efeea38;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  pplVar35 = (long **)(plVar19 + 0x26);
  *(undefined1 *)(puVar18 + 1) = plStack_740._0_1_;
  *puVar18 = plStack_748;
  puVar18[2] = plStack_738;
  puVar18[6] = uStack_718;
  puVar18[4] = plStack_728;
  puVar18[5] = uStack_720;
  plStack_728 = (long *)0x0;
  uStack_720 = 0;
  uStack_718 = 0;
  puVar18[9] = uStack_700;
  puVar18[7] = uStack_710;
  puVar18[8] = uStack_708;
  uStack_710 = 0;
  uStack_708 = 0;
  uStack_700 = 0;
  puVar18[0xc] = uStack_6e8;
  puVar18[10] = uStack_6f8;
  puVar18[0xb] = uStack_6f0;
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  uStack_6e8 = 0;
  puVar18[0xf] = uStack_6d0;
  puVar18[0xd] = uStack_6e0;
  puVar18[0xe] = uStack_6d8;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6d0 = 0;
  puVar18[0x12] = uStack_6b8;
  *(undefined4 *)(puVar18 + 0x10) = (undefined4)uStack_6c8;
  *(undefined4 *)((long)puVar18 + 0x84) = uStack_6c8._4_4_;
  *(undefined4 *)(puVar18 + 0x11) = (undefined4)uStack_6c0;
  *(undefined4 *)((long)puVar18 + 0x8c) = uStack_6c0._4_4_;
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  bStack_6a0 = (byte)puVar18;
  uStack_69f = (undefined5)((ulong)puVar18 >> 8);
  uStack_69a = (undefined2)((ulong)puVar18 >> 0x30);
  if (pplVar35 == &plStack_6a8) {
    func_0x0564b7b0(puVar18 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar18);
  }
  else {
    plVar22 = (long *)&UNK_0efeea38;
    if ((*pplVar35 == (long *)0x0) ||
       ((*(code *)(*pplVar35)[1])(pplVar35), plVar22 = plStack_6a8, plStack_6a8 != (long *)0x0)) {
      (*(code *)*plVar22)(&plStack_6a8,pplVar35);
      plVar22 = plStack_6a8;
      plStack_6a8 = (long *)0x0;
      *pplVar35 = plVar22;
    }
    else {
      plStack_6a8 = (long *)0x0;
      *pplVar35 = (long *)0x0;
    }
  }
  if ((uStack_6c8 & 1) != 0) {
    func_0x0412a280(uStack_6b8,uStack_6c8 & 0xfffffffffffffffe);
  }
  if ((uStack_6e0 & 1) != 0) {
    func_0x0412a280(uStack_6d0,uStack_6e0 & 0xfffffffffffffffe);
  }
  if ((uStack_6f8 & 1) != 0) {
    func_0x0412a280(uStack_6e8,uStack_6f8 & 0xfffffffffffffffe);
  }
  if ((uStack_710 & 1) != 0) {
    func_0x0412a280(uStack_700,uStack_710 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_728 & 1) != 0) {
    func_0x0412a280(uStack_718,(ulong)plStack_728 & 0xfffffffffffffffe);
  }
  if ((uStack_1e8 & 1) != 0) {
    func_0x0412a280(pbStack_1d8,CONCAT44(uStack_1e4,uStack_1e8) & 0xfffffffffffffffe);
  }
  if ((bStack_200 & 1) != 0) {
    func_0x0412a280(uStack_1f0,CONCAT71(uStack_1ff,bStack_200) & 0xfffffffffffffffe);
  }
  if ((bStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,CONCAT71(uStack_217,bStack_218) & 0xfffffffffffffffe);
  }
  if ((bStack_230 & 1) != 0) {
    func_0x0412a280(uStack_220,CONCAT71(uStack_22f,bStack_230) & 0xfffffffffffffffe);
  }
  if ((bStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,CONCAT71(uStack_247,bStack_248) & 0xfffffffffffffffe);
  }
  if ((bStack_2c0 & 1) != 0) {
    func_0x0412a280(uStack_2b0,
                    CONCAT62(uStack_2be,CONCAT11(uStack_2bf,bStack_2c0)) & 0xfffffffffffffffe);
  }
  if ((bStack_338 & 1) != 0) {
    func_0x0412a280(uStack_328,
                    CONCAT53(uStack_335,CONCAT12(uStack_336,CONCAT11(uStack_337,bStack_338))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,
                    CONCAT53(uStack_31d,CONCAT12(uStack_31e,CONCAT11(uStack_31f,bStack_320))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_568 & 1) != 0) {
    func_0x0412a280(uStack_558,CONCAT71(uStack_567,bStack_568) & 0xfffffffffffffffe);
  }
  uVar28 = *(undefined8 *)puVar1;
  uStack_692 = 0;
  uStack_690 = 0;
  uStack_688 = 0;
  bStack_6a0 = 0x1a;
  uStack_69f = 0x72746e6f63;
  uStack_69a = 0x6c6f;
  uStack_698 = 0x5f;
  uStack_697 = 0x7367616c66;
  plStack_6a8 = (long *)0x86e3afe1b1c6e2ac;
  bStack_660 = 0;
  uStack_65f = 0;
  plStack_668 = (long *)&UNK_0efeec48;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0efeea60;
  plStack_748 = (long *)0x0;
  plStack_740 = (long *)0x0;
  if (plStack_668 == (long *)0x0) {
    plStack_748 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_668)(&plStack_668,&plStack_748);
    plStack_748 = plStack_668;
  }
  plStack_668 = (long *)0x0;
  plVar22[4] = (long)&UNK_0f2ccd78;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[8] = 0;
  plVar22[9] = 0;
  plVar22[10] = 0;
  plVar22[0xb] = 0;
  plVar22[0xc] = 0;
  *(undefined1 *)(plVar22 + 0xd) = 0;
  func_0x04aa75f0(plVar22 + 0xe,&plStack_2a8,&UNK_01254d89);
  *(undefined1 *)(plVar22 + 0x10) = 0;
  plVar19 = plVar22 + 0x11;
  plVar22[0x11] = 0;
  plVar22[0x12] = 0;
  plVar22[0x13] = 0;
  plVar22[0x14] = 0;
  plVar22[0x15] = 0;
  plVar22[0x16] = 0;
  plVar22[0x17] = 0xffffffff;
  plVar22[0x26] = 0;
  plVar22[0x27] = 0;
  plVar22[0x18] = 0;
  plVar22[0x19] = 0;
  plVar22[0x1a] = 0;
  plVar22[0x1b] = 0;
  plVar22[0x1c] = 0;
  plVar22[0x1d] = 0;
  plVar22[0x1e] = 0;
  plVar22[0x1f] = 0;
  plVar22[4] = (long)&UNK_0efeeab0;
  pplVar35 = (long **)(plVar22 + 0x2e);
  plVar22[0x2e] = 0;
  plVar22[0x2f] = 0;
  if (pplVar35 != &plStack_748) {
    if (plStack_748 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_748)(&plStack_748,pplVar35);
      plVar20 = plStack_748;
    }
    plStack_748 = (long *)0x0;
    *pplVar35 = plVar20;
  }
  puVar1 = (uint *)(plVar22 + 0x12);
  if (plVar19 != (long *)&DAT_0f551f58) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar22[0x14] = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar1 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar22 + 0x94) = uVar10;
        *(undefined4 *)(plVar22 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar22 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar37 = (_DAT_0f551f60 & 1) != 0;
      lVar29 = 0xf551f61;
      if (bVar37) {
        lVar29 = _DAT_0f551f70;
      }
      uVar34 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar37) {
        uVar34 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar1,lVar29,uVar34);
    }
  }
  plVar20 = plVar22 + 1;
  plVar22[0x11] = _DAT_0f551f58;
  plVar22[0x15] = 0;
  if (plStack_748 != (long *)0x0) {
    (*(code *)plStack_748[1])(&plStack_748);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0efeeba8;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[4] = (long)&UNK_0efeebf8;
  plVar23[0xe] = (long)(plVar22 + 4);
  plVar23[0xf] = (long)plVar22;
  LOCK();
  plVar22[1] = plVar22[1] + 1;
  UNLOCK();
  plStack_748 = plVar23 + 4;
  plStack_740 = plVar23;
  puVar21 = (undefined4 *)func_0x058c9ff0(uVar28,&plStack_6a8);
  plVar24 = *(long **)(puVar21 + 0x24);
  if (plVar24 < *(long **)(puVar21 + 0x26)) {
    plVar24[2] = 0;
    plVar24[3] = 0;
    *plVar24 = 0;
    plVar24[1] = 0;
    plVar24[4] = 0;
    if (plVar24 != plVar19) {
      if ((*puVar1 & 1) == 0) {
        plVar24[3] = plVar22[0x14];
        lVar29 = plVar22[0x13];
        plVar24[1] = *(long *)puVar1;
        plVar24[2] = lVar29;
      }
      else {
        func_0x04885070(plVar24 + 1,plVar22[0x14],plVar22[0x13]);
      }
    }
    *plVar24 = *plVar19;
    plVar24[5] = (long)(plVar23 + 4);
    plVar24[6] = (long)plVar23;
    LOCK();
    plVar23[1] = plVar23[1] + 1;
    UNLOCK();
    plVar24 = plVar24 + 7;
    *(long **)(puVar21 + 0x24) = plVar24;
  }
  else {
    plVar24 = (long *)func_0x058cbe40(puVar21 + 0x22,plVar19,&plStack_748);
  }
  *(long **)(puVar21 + 0x24) = plVar24;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar22[0xf];
  *(undefined4 *)(plVar22 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar22 + 0x74) = uVar11;
  *(undefined4 *)(plVar22 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar22 + 0x7c) = uVar13;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar23 = plVar19 + 1;
    lVar29 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      FUN_0412c2d0(plVar19);
    }
  }
  plVar19 = plStack_740;
  *(undefined1 *)(plVar22 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_740 != (long *)0x0) {
    LOCK();
    plVar23 = plStack_740 + 1;
    lVar29 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_740 + 0x10))(plStack_740);
      FUN_0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar29 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0412c2d0(plVar22);
    LOCK();
    lVar29 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar29 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar29 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0412c2d0(plVar22);
  }
  if (plStack_668 != (long *)0x0) {
    (*(code *)plStack_668[1])(&plStack_668);
  }
  if ((bStack_6a0 & 1) != 0) {
    func_0x0412a280(uStack_690,
                    CONCAT26(uStack_69a,CONCAT51(uStack_69f,bStack_6a0)) & 0xfffffffffffffffe);
  }
  puStack_2a0 = (undefined8 *)0x0;
  bStack_6a0 = 0;
  uStack_69f = 0;
  uStack_69a = 0;
  plStack_2a8 = (long *)0x0;
  plStack_6a8 = (long *)&UNK_0efeee98;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_748 = plStack_6a8;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0efeec70;
  plStack_740 = (long *)0x0;
  plStack_6a8 = (long *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&uStack_550,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar20 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0efeecc0;
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
  if (plStack_748 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_748)(&plStack_748,plVar19 + 0x36);
    plVar23 = plStack_748;
  }
  plStack_748 = (long *)0x0;
  plVar19[0x36] = (long)plVar23;
  *(undefined1 *)(plVar19 + 0x3e) = 0;
  puStack_390 = (uint *)(plVar19 + 0x12);
  if (plVar20 != (long *)&DAT_0f552138) {
    if ((*puStack_390 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552150;
        uVar12 = uRam000000000f55214c;
        uVar11 = _DAT_0f552148;
        uVar10 = uRam000000000f552144;
        *puStack_390 = _DAT_0f552140;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar10;
        *(undefined4 *)(plVar19 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_390,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar37 = (_DAT_0f552140 & 1) != 0;
      lVar29 = 0xf552141;
      if (bVar37) {
        lVar29 = _DAT_0f552150;
      }
      uVar34 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar37) {
        uVar34 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_390,lVar29,uVar34);
    }
  }
  plVar19[0x11] = _DAT_0f552138;
  plVar19[0x15] = 0;
  if (plStack_748 != (long *)0x0) {
    (*(code *)plStack_748[1])(&plStack_748);
  }
  plVar23 = plVar19 + 1;
  if (plStack_6a8 != (long *)0x0) {
    (*(code *)plStack_6a8[1])(&plStack_6a8);
  }
  LOCK();
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  plStack_260 = plVar23;
  plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar24 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar24[1] = 0;
  plVar24[2] = 0;
  *plVar24 = (long)&UNK_0efeeda0;
  plVar24[6] = 0;
  plVar24[7] = 0;
  plVar24[4] = (long)&UNK_0efeedf0;
  plVar24[0xe] = (long)(plVar19 + 4);
  plVar24[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_388 = plVar24 + 1;
  puVar6 = (undefined4 *)plVar22[0x1c];
  puVar5 = (undefined4 *)plVar22[0x1b];
  for (puVar21 = puVar5; puVar21 != puVar6; puVar21 = puVar21 + 0x2a) {
    if ((*(long *)(puVar21 + 0x1e) == 0) && (*(long *)(puVar21 + 0x20) == -1)) goto LAB_058847c3;
  }
  if (puVar6 < (undefined4 *)plVar22[0x1d]) {
    func_0x05925460(puVar6);
    plVar23 = (long *)(puVar6 + 0x2a);
    plVar22[0x1c] = (long)plVar23;
LAB_0588475a:
    plVar22[0x1c] = (long)plVar23;
    pbVar25 = (byte *)plVar23[-0x15];
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
    uVar12 = _UNK_01494d69;
    uVar11 = _UNK_01494d65;
    uVar10 = _UNK_01494d61;
    *(undefined4 *)pbVar25 = _DAT_01494d5d;
    *(undefined4 *)(pbVar25 + 4) = uVar10;
    *(undefined4 *)(pbVar25 + 8) = uVar11;
    *(undefined4 *)(pbVar25 + 0xc) = uVar12;
    pbVar25[0xf] = 0x65;
    pbVar25[0x10] = 0x6e;
    pbVar25[0x11] = 0x74;
    pbVar25[0x12] = 0x3e;
    pbVar25[0x13] = 0;
    lVar29 = plVar22[0x1c];
    puVar21 = (undefined4 *)(lVar29 - 0xa8);
    *(char *)(lVar29 + -7) = (char)plVar22[0x10];
    *(undefined8 *)(lVar29 + -0x30) = 0;
    *(undefined8 *)(lVar29 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar29 + -8) = 0;
LAB_058847c3:
    plVar27 = plVar24 + 4;
    plVar23 = *(long **)(puVar21 + 0x24);
    if (plVar23 < *(long **)(puVar21 + 0x26)) {
      plVar23[2] = 0;
      plVar23[3] = 0;
      *plVar23 = 0;
      plVar23[1] = 0;
      plVar23[4] = 0;
      if (plVar23 != plVar20) {
        if ((*puStack_390 & 1) == 0) {
          plVar23[3] = *(long *)(puStack_390 + 4);
          lVar29 = *(long *)(puStack_390 + 2);
          plVar23[1] = *(long *)puStack_390;
          plVar23[2] = lVar29;
        }
        else {
          func_0x04885070(plVar23 + 1,plVar19[0x14],plVar19[0x13]);
        }
      }
      *plVar23 = *plVar20;
      plVar23[5] = (long)plVar27;
      plVar23[6] = (long)plVar24;
      LOCK();
      plVar24[1] = plVar24[1] + 1;
      UNLOCK();
      plVar23 = plVar23 + 7;
      *(long **)(puVar21 + 0x24) = plVar23;
      goto LAB_05884b04;
    }
    plVar23 = (long *)((long)plVar23 - *(long *)(puVar21 + 0x22));
    uVar34 = ((long)plVar23 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar34 < 0x492492492492493) {
      lVar29 = (long)*(long **)(puVar21 + 0x26) - *(long *)(puVar21 + 0x22) >> 3;
      uVar17 = lVar29 * -0x2492492492492492;
      if (uVar34 < uVar17) {
        uVar34 = uVar17;
      }
      plStack_728 = (long *)(puVar21 + 0x22);
      if (0x249249249249248 < (ulong)(lVar29 * 0x6db6db6db6db6db7)) {
        uVar34 = 0x492492492492492;
      }
      plStack_620 = plVar27;
      plStack_268 = plStack_728;
      if (uVar34 == 0) {
        plVar27 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar34) goto LAB_05885fa2;
        plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0x38);
        if (plVar27 == (long *)0x0) {
          func_0x0eec74c0(uVar34 * 0x38,0);
          plVar27 = (long *)0x0;
        }
      }
      plVar3 = (long *)((long)plVar27 + (long)plVar23);
      plStack_730 = plVar27 + uVar34 * 7;
      *(undefined8 *)((long)(plVar27 + 2) + (long)plVar23) = 0;
      ((undefined8 *)((long)(plVar27 + 2) + (long)plVar23))[1] = 0;
      *(undefined8 *)((long)plVar27 + (long)plVar23) = 0;
      ((undefined8 *)((long)plVar27 + (long)plVar23))[1] = 0;
      *(undefined8 *)((long)(plVar27 + 4) + (long)plVar23) = 0;
      plStack_738 = plVar3;
      plStack_748 = plVar27;
      plStack_740 = plVar3;
      if (plVar3 != plVar20) {
        if ((*puStack_390 & 1) == 0) {
          *(undefined8 *)((long)plVar23 + (long)(plVar27 + 3)) = *(undefined8 *)(puStack_390 + 4);
          uVar14 = puStack_390[1];
          uVar15 = puStack_390[2];
          uVar16 = puStack_390[3];
          *(uint *)((long)plVar23 + (long)(plVar27 + 1)) = *puStack_390;
          *(uint *)((long)plVar23 + (long)plVar27 + 0xc) = uVar14;
          *(uint *)((long)plVar23 + (long)(plVar27 + 2)) = uVar15;
          *(uint *)((long)plVar23 + (long)plVar27 + 0x14) = uVar16;
        }
        else {
          func_0x04885070((uint *)((long)plVar23 + (long)(plVar27 + 1)),plVar19[0x14],plVar19[0x13])
          ;
        }
      }
      *plVar3 = *plVar20;
      plVar3[5] = (long)plStack_620;
      plVar3[6] = (long)plVar24;
      LOCK();
      plVar24[1] = plVar24[1] + 1;
      UNLOCK();
      plStack_738 = plStack_738 + 7;
      puVar32 = *(undefined8 **)(puVar21 + 0x22);
      puVar8 = *(undefined8 **)(puVar21 + 0x24);
      puVar18 = (undefined8 *)((long)plStack_740 + ((long)puVar32 - (long)puVar8));
      puVar26 = puVar18;
      puVar30 = puVar32;
      if ((long)puVar32 - (long)puVar8 != 0) {
        do {
          puVar26[2] = 0;
          puVar26[3] = 0;
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar26[4] = 0;
          puVar26[3] = puVar30[3];
          uVar28 = puVar30[2];
          puVar26[1] = puVar30[1];
          puVar26[2] = uVar28;
          *(undefined2 *)(puVar30 + 1) = 0;
          *puVar26 = *puVar30;
          uVar10 = *(undefined4 *)((long)puVar30 + 0x2c);
          uVar11 = *(undefined4 *)(puVar30 + 6);
          uVar12 = *(undefined4 *)((long)puVar30 + 0x34);
          *(undefined4 *)(puVar26 + 5) = *(undefined4 *)(puVar30 + 5);
          *(undefined4 *)((long)puVar26 + 0x2c) = uVar10;
          *(undefined4 *)(puVar26 + 6) = uVar11;
          *(undefined4 *)((long)puVar26 + 0x34) = uVar12;
          puVar30[5] = 0;
          puVar30[6] = 0;
          puVar30 = puVar30 + 7;
          puVar26 = puVar26 + 7;
        } while (puVar30 != puVar8);
        do {
          plVar20 = (long *)puVar32[6];
          if (plVar20 == (long *)0x0) {
LAB_05884a84:
            bVar4 = *(byte *)(puVar32 + 1);
          }
          else {
            LOCK();
            plVar23 = plVar20 + 1;
            lVar29 = *plVar23;
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (lVar29 != 0) goto LAB_05884a84;
            (**(code **)(*plVar20 + 0x10))(plVar20);
            FUN_0412c2d0(plVar20);
            bVar4 = *(byte *)(puVar32 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar32[3],puVar32[1] & 0xfffffffffffffffe);
          }
          puVar32 = puVar32 + 7;
        } while (puVar32 != puVar8);
        puVar32 = (undefined8 *)*plStack_268;
      }
      plVar23 = plStack_738;
      *(undefined8 **)(puVar21 + 0x22) = puVar18;
      *(long **)(puVar21 + 0x24) = plStack_738;
      lVar29 = *(long *)(puVar21 + 0x26);
      *(long **)(puVar21 + 0x26) = plStack_730;
      if (puVar32 != (undefined8 *)0x0) {
        func_0x0412a280(puVar32,lVar29 - (long)puVar32);
      }
LAB_05884b04:
      *(long **)(puVar21 + 0x24) = plVar23;
      uVar10 = *puVar21;
      uVar11 = puVar21[1];
      uVar12 = puVar21[2];
      uVar13 = puVar21[3];
      if (*(long *)(puVar21 + 2) != 0) {
        LOCK();
        plVar20 = (long *)(*(long *)(puVar21 + 2) + 8);
        *plVar20 = *plVar20 + 1;
        UNLOCK();
      }
      plVar20 = (long *)plVar19[0xf];
      *(undefined4 *)(plVar19 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar19 + 0x74) = uVar11;
      *(undefined4 *)(plVar19 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar19 + 0x7c) = uVar13;
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar23 = plVar20 + 1;
        lVar29 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar29 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          FUN_0412c2d0(plVar20);
        }
      }
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
      LOCK();
      lVar29 = *plStack_388;
      *plStack_388 = *plStack_388 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        FUN_0412c2d0(plVar24);
      }
      plVar20 = plStack_260;
      puVar1 = puStack_6b0;
      LOCK();
      lVar29 = *plStack_260;
      *plStack_260 = *plStack_260 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        FUN_0412c2d0(plVar19);
        LOCK();
        lVar29 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar29 = *plStack_260;
        *plStack_260 = *plStack_260 + -1;
        UNLOCK();
      }
      if (lVar29 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        FUN_0412c2d0(plVar19);
      }
      if (plStack_2a8 != (long *)0x0) {
        (*(code *)plStack_2a8[1])(&plStack_2a8);
      }
      pplStack_768 = (long **)(plVar22 + 0x26);
      plStack_740 = (long *)0x0;
      plStack_748 = (long *)&UNK_0efeeeb0;
      if (pplStack_768 != &plStack_748) {
        if ((*pplStack_768 == (long *)0x0) ||
           ((*(code *)(*pplStack_768)[1])(pplStack_768), plStack_748 != (long *)0x0)) {
          (*(code *)*plStack_748)(&plStack_748,pplStack_768);
          plVar22 = plStack_748;
        }
        else {
          plVar22 = (long *)0x0;
        }
        *pplStack_768 = plVar22;
      }
      if ((uStack_5e8 & 1) != 0) {
        func_0x0412a280(uStack_5d8,CONCAT44(uStack_5e4,uStack_5e8) & 0xfffffffffffffffe);
      }
      plVar22 = (long *)func_0x0591eb10(*(undefined8 *)puVar1,8,&UNK_011ed38f);
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      uStack_398 = 0;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_3a8,&uStack_3c8);
      if ((uStack_3c8 & 1) != 0) {
        func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
      }
      if ((uStack_3a8 & 1) != 0) {
        func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
      }
      plVar22 = (long *)func_0x0591eb10(*(undefined8 *)puVar1,9,&UNK_0127271c);
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_408 = 0;
      uStack_400 = 0;
      uStack_3f8 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_3e8,&uStack_408);
      if ((uStack_408 & 1) != 0) {
        func_0x0412a280(uStack_3f8,uStack_408 & 0xfffffffffffffffe);
      }
      if ((uStack_3e8 & 1) != 0) {
        func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
      }
      plVar22 = (long *)func_0x0591eb10(*(undefined8 *)puVar1,10,&UNK_0119d260);
      uStack_428 = 0;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_448 = 0;
      uStack_440 = 0;
      uStack_438 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_428,&uStack_448);
      if ((uStack_448 & 1) != 0) {
        func_0x0412a280(uStack_438,uStack_448 & 0xfffffffffffffffe);
      }
      if ((uStack_428 & 1) != 0) {
        func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
      }
      bStack_600 = 0x1a;
      uStack_5ff = 0x6968746977;
      uStack_5fa = 0x5f6e;
      uStack_5f8 = 0x72;
      uStack_5f7 = 0x7375696461;
      uStack_5f2 = 0;
      puStack_570 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puStack_570 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar28 = _UNK_011d47dc;
      uStack_580 = 0x29;
      uStack_578 = 0x25;
      puStack_570[2] = _DAT_011d47d4;
      puStack_570[3] = uVar28;
      uVar28 = _UNK_011d47cc;
      *puStack_570 = _DAT_011d47c4;
      puStack_570[1] = uVar28;
      *(undefined8 *)((long)puStack_570 + 0x1d) = 0x5355494441525f4e;
      *(undefined1 *)((long)puStack_570 + 0x25) = 0;
      bStack_350 = 2;
      uStack_34f = 0x30;
      uStack_34e = 0;
      bStack_2d8 = 0;
      uStack_2d7 = 0;
      func_0x05611160(0,auStack_b8,param_1,&bStack_600,&uStack_580,&bStack_350,&bStack_2d8);
      plVar22 = (long *)func_0x0591f4f0(*(undefined8 *)puVar1,0xc,auStack_b8);
      uStack_468 = 0;
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_488 = 0;
      uStack_480 = 0;
      uStack_478 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_468,&uStack_488);
      if ((uStack_488 & 1) != 0) {
        func_0x0412a280(uStack_478,uStack_488 & 0xfffffffffffffffe);
      }
      if ((uStack_468 & 1) != 0) {
        func_0x0412a280(uStack_458,uStack_468 & 0xfffffffffffffffe);
      }
      if ((bStack_48 & 1) != 0) {
        func_0x0412a280(uStack_38,CONCAT71(uStack_47,bStack_48) & 0xfffffffffffffffe);
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
      if ((bStack_2d8 & 1) != 0) {
        func_0x0412a280(uStack_2c8,
                        CONCAT62(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8)) & 0xfffffffffffffffe);
      }
      if ((bStack_350 & 1) != 0) {
        func_0x0412a280(uStack_340,
                        CONCAT53(uStack_34d,CONCAT12(uStack_34e,CONCAT11(uStack_34f,bStack_350))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_580 & 1) != 0) {
        func_0x0412a280(puStack_570,uStack_580 & 0xfffffffffffffffe);
      }
      if ((bStack_600 & 1) != 0) {
        func_0x0412a280(uStack_5f0,
                        CONCAT26(uStack_5fa,CONCAT51(uStack_5ff,bStack_600)) & 0xfffffffffffffffe);
      }
      puStack_588 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_588 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar12 = _UNK_0128b69b;
      uVar11 = _UNK_0128b697;
      uVar10 = _UNK_0128b693;
      uStack_598 = 0x21;
      uStack_590 = 0x18;
      *puStack_588 = _DAT_0128b68f;
      puStack_588[1] = uVar10;
      puStack_588[2] = uVar11;
      puStack_588[3] = uVar12;
      *(undefined8 *)(puStack_588 + 4) = 0x6e6f697461727564;
      *(undefined1 *)(puStack_588 + 6) = 0;
      puStack_5a0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puStack_5a0 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      uVar28 = _UNK_012a4af9;
      uStack_5b0 = 0x39;
      uStack_5a8 = 0x30;
      puStack_5a0[4] = _DAT_012a4af1;
      puStack_5a0[5] = uVar28;
      uVar28 = _UNK_012a4ae9;
      puStack_5a0[2] = _DAT_012a4ae1;
      puStack_5a0[3] = uVar28;
      uVar28 = _UNK_012a4ad9;
      *puStack_5a0 = _DAT_012a4ad1;
      puStack_5a0[1] = uVar28;
      *(undefined1 *)(puStack_5a0 + 6) = 0;
      bStack_368 = 2;
      uStack_367 = 0x30;
      uStack_366 = 0;
      bStack_2f0 = 0;
      uStack_2ef = 0;
      func_0x05611160(_DAT_01198af0,auStack_140,param_1,&uStack_598,&uStack_5b0,&bStack_368,
                      &bStack_2f0);
      plVar22 = (long *)func_0x0591f4f0(*(undefined8 *)puVar1,0x10,auStack_140);
      uStack_4a8 = 0;
      uStack_4a0 = 0;
      uStack_498 = 0;
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_4a8,&uStack_4c8);
      if ((uStack_4c8 & 1) != 0) {
        func_0x0412a280(uStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
      }
      if ((uStack_4a8 & 1) != 0) {
        func_0x0412a280(uStack_498,uStack_4a8 & 0xfffffffffffffffe);
      }
      if ((bStack_d0 & 1) != 0) {
        func_0x0412a280(uStack_c0,CONCAT71(uStack_cf,bStack_d0) & 0xfffffffffffffffe);
      }
      if ((bStack_e8 & 1) != 0) {
        func_0x0412a280(uStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
      }
      if ((bStack_100 & 1) != 0) {
        func_0x0412a280(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
      }
      if ((bStack_118 & 1) != 0) {
        func_0x0412a280(uStack_108,CONCAT71(uStack_117,bStack_118) & 0xfffffffffffffffe);
      }
      if ((bStack_130 & 1) != 0) {
        func_0x0412a280(uStack_120,CONCAT71(uStack_12f,bStack_130) & 0xfffffffffffffffe);
      }
      if ((bStack_2f0 & 1) != 0) {
        func_0x0412a280(uStack_2e0,
                        CONCAT62(uStack_2ee,CONCAT11(uStack_2ef,bStack_2f0)) & 0xfffffffffffffffe);
      }
      if ((bStack_368 & 1) != 0) {
        func_0x0412a280(uStack_358,
                        CONCAT53(uStack_365,CONCAT12(uStack_366,CONCAT11(uStack_367,bStack_368))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_5b0 & 1) != 0) {
        func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
      }
      if ((uStack_598 & 1) != 0) {
        func_0x0412a280(puStack_588,uStack_598 & 0xfffffffffffffffe);
      }
      bStack_618 = 0x18;
      uStack_617 = 0x74736973726570;
      uStack_610 = 0x5f;
      uStack_60f = 0x656d6974;
      uStack_60b = 0;
      puStack_5b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puStack_5b8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar28 = _UNK_01391180;
      uStack_5c8 = 0x29;
      uStack_5c0 = 0x24;
      puStack_5b8[2] = _DAT_01391178;
      puStack_5b8[3] = uVar28;
      uVar28 = _UNK_01391170;
      *puStack_5b8 = _DAT_01391168;
      puStack_5b8[1] = uVar28;
      *(undefined4 *)(puStack_5b8 + 4) = 0x454d4954;
      *(undefined1 *)((long)puStack_5b8 + 0x24) = 0;
      bStack_380 = 2;
      uStack_37f = 0x30;
      uStack_37e = 0;
      bStack_308 = 0;
      uStack_307 = 0;
      func_0x05611160(0,auStack_1c8,param_1,&bStack_618,&uStack_5c8,&bStack_380,&bStack_308);
      plVar22 = (long *)func_0x0591f4f0(*(undefined8 *)puVar1,0x14,auStack_1c8);
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_4f8 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_4e8,&uStack_508);
      if ((uStack_508 & 1) != 0) {
        func_0x0412a280(uStack_4f8,uStack_508 & 0xfffffffffffffffe);
      }
      if ((uStack_4e8 & 1) != 0) {
        func_0x0412a280(uStack_4d8,uStack_4e8 & 0xfffffffffffffffe);
      }
      if ((bStack_158 & 1) != 0) {
        func_0x0412a280(uStack_148,CONCAT71(uStack_157,bStack_158) & 0xfffffffffffffffe);
      }
      if ((bStack_170 & 1) != 0) {
        func_0x0412a280(uStack_160,CONCAT71(uStack_16f,bStack_170) & 0xfffffffffffffffe);
      }
      if ((bStack_188 & 1) != 0) {
        func_0x0412a280(uStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
      }
      if ((bStack_1a0 & 1) != 0) {
        func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
      }
      if ((bStack_1b8 & 1) != 0) {
        func_0x0412a280(uStack_1a8,CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
      }
      if ((bStack_308 & 1) != 0) {
        func_0x0412a280(uStack_2f8,
                        CONCAT62(uStack_306,CONCAT11(uStack_307,bStack_308)) & 0xfffffffffffffffe);
      }
      if ((bStack_380 & 1) != 0) {
        func_0x0412a280(uStack_370,
                        CONCAT53(uStack_37d,CONCAT12(uStack_37e,CONCAT11(uStack_37f,bStack_380))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_5c8 & 1) != 0) {
        func_0x0412a280(puStack_5b8,uStack_5c8 & 0xfffffffffffffffe);
      }
      if ((bStack_618 & 1) != 0) {
        func_0x0412a280(uStack_608,CONCAT71(uStack_617,bStack_618) & 0xfffffffffffffffe);
      }
      uVar28 = *(undefined8 *)puVar1;
      uStack_653 = 0;
      uStack_650 = 0;
      uStack_648 = 0;
      bStack_660 = 0x18;
      uStack_65f = 0x5f797469746e65;
      uStack_658 = 0x74;
      uStack_657 = 0x73657079;
      plStack_668 = (long *)0x2dceaf6fc113d34e;
      bStack_6a0 = 0x18;
      uStack_69f = 0;
      uStack_69a = 0;
      plStack_250 = (long *)0x18;
      plStack_6a8 = (long *)0x0;
      plStack_258 = (long *)&UNK_0efef2e8;
      plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar22 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      plStack_748 = plStack_258;
      plVar22[1] = 0;
      plVar22[2] = 0;
      *plVar22 = (long)&UNK_0efef118;
      plStack_258 = (long *)0x0;
      plStack_740 = plStack_250;
      plVar22[4] = (long)&UNK_0f2ccd78;
      plVar22[5] = 0;
      plVar22[6] = 0;
      plVar22[7] = 0;
      plVar22[8] = 0;
      plVar22[9] = 0;
      plVar22[10] = 0;
      plVar22[0xb] = 0;
      plVar22[0xc] = 0;
      *(undefined1 *)(plVar22 + 0xd) = 0;
      func_0x04aa75f0(plVar22 + 0xe,&plStack_2a8,&UNK_01254d89);
      *(undefined1 *)(plVar22 + 0x10) = 0;
      plVar19 = plVar22 + 0x11;
      plVar22[0x11] = 0;
      plVar22[0x12] = 0;
      plVar22[0x13] = 0;
      plVar22[0x14] = 0;
      plVar22[0x15] = 0;
      plVar22[0x16] = 0;
      plVar22[0x17] = 0xffffffff;
      plVar22[0x26] = 0;
      plVar22[0x27] = 0;
      plVar22[0x18] = 0;
      plVar22[0x19] = 0;
      plVar22[0x1a] = 0;
      plVar22[0x1b] = 0;
      plVar22[0x1c] = 0;
      plVar22[0x1d] = 0;
      plVar22[0x1e] = 0;
      plVar22[0x1f] = 0;
      plVar22[4] = (long)&UNK_0efef168;
      plVar22[0x2e] = 0;
      plVar22[0x2f] = 0;
      if (plStack_748 == (long *)0x0) {
        plVar20 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_748)(&plStack_748,plVar22 + 0x2e);
        plVar20 = plStack_748;
      }
      plVar23 = plVar22 + 4;
      plStack_748 = (long *)0x0;
      plVar22[0x2e] = (long)plVar20;
      puStack_6b0 = (uint *)(plVar22 + 0x12);
      if (plVar19 == (long *)&DAT_0f551fb8) {
        plVar22[0x15] = 0;
      }
      else {
        if ((*puStack_6b0 & 1) == 0) {
          if ((_DAT_0f551fc0 & 1) == 0) {
            plVar22[0x14] = _DAT_0f551fd0;
            uVar12 = uRam000000000f551fcc;
            uVar11 = _DAT_0f551fc8;
            uVar10 = uRam000000000f551fc4;
            *puStack_6b0 = _DAT_0f551fc0;
            *(undefined4 *)((long)plVar22 + 0x94) = uVar10;
            *(undefined4 *)(plVar22 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar22 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puStack_6b0,_DAT_0f551fd0,CONCAT44(uRam000000000f551fcc,_DAT_0f551fc8));
          }
        }
        else {
          bVar37 = (_DAT_0f551fc0 & 1) != 0;
          lVar29 = 0xf551fc1;
          if (bVar37) {
            lVar29 = _DAT_0f551fd0;
          }
          uVar34 = (ulong)((_DAT_0f551fc0 & 0xff) >> 1);
          if (bVar37) {
            uVar34 = CONCAT44(uRam000000000f551fcc,_DAT_0f551fc8);
          }
          func_0x04885120(puStack_6b0,lVar29,uVar34);
        }
        plVar22[0x11] = _DAT_0f551fb8;
        plVar22[0x15] = 0;
        if (plStack_748 != (long *)0x0) {
          (*(code *)plStack_748[1])(&plStack_748);
        }
      }
      plVar20 = plVar22 + 1;
      if (plStack_258 != (long *)0x0) {
        (*(code *)plStack_258[1])(&plStack_258);
      }
      LOCK();
      *plVar20 = *plVar20 + 1;
      UNLOCK();
      plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar24 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar24[1] = 0;
      plVar24[2] = 0;
      *plVar24 = (long)&UNK_0efef248;
      plVar24[6] = 0;
      plVar24[7] = 0;
      plVar24[4] = (long)&UNK_0efef298;
      plVar24[0xe] = (long)plVar23;
      plVar24[0xf] = (long)plVar22;
      LOCK();
      plVar22[1] = plVar22[1] + 1;
      UNLOCK();
      plStack_748 = plVar24 + 4;
      plStack_740 = plVar24;
      puVar21 = (undefined4 *)func_0x058c9ff0(uVar28,&plStack_668);
      plVar27 = *(long **)(puVar21 + 0x24);
      if (plVar27 < *(long **)(puVar21 + 0x26)) {
        plVar27[2] = 0;
        plVar27[3] = 0;
        *plVar27 = 0;
        plVar27[1] = 0;
        plVar27[4] = 0;
        if (plVar27 != plVar19) {
          puVar1 = (uint *)(plVar27 + 1);
          if ((*puStack_6b0 & 1) == 0) {
            plVar27[3] = *(long *)(puStack_6b0 + 4);
            lVar29 = *(long *)(puStack_6b0 + 2);
            *(undefined8 *)puVar1 = *(undefined8 *)puStack_6b0;
            plVar27[2] = lVar29;
          }
          else {
            puStack_6b0 = puVar1;
            func_0x04885070(puVar1,plVar22[0x14],plVar22[0x13]);
          }
        }
        *plVar27 = *plVar19;
        plVar27[5] = (long)(plVar24 + 4);
        plVar27[6] = (long)plVar24;
        LOCK();
        plVar24[1] = plVar24[1] + 1;
        UNLOCK();
        plVar27 = plVar27 + 7;
        *(long **)(puVar21 + 0x24) = plVar27;
      }
      else {
        plVar27 = (long *)func_0x058cbe40(puVar21 + 0x22,plVar19,&plStack_748);
      }
      *(long **)(puVar21 + 0x24) = plVar27;
      uVar10 = *puVar21;
      uVar11 = puVar21[1];
      uVar12 = puVar21[2];
      uVar13 = puVar21[3];
      if (*(long *)(puVar21 + 2) != 0) {
        LOCK();
        plVar19 = (long *)(*(long *)(puVar21 + 2) + 8);
        *plVar19 = *plVar19 + 1;
        UNLOCK();
      }
      plVar19 = (long *)plVar22[0xf];
      *(undefined4 *)(plVar22 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar22 + 0x74) = uVar11;
      *(undefined4 *)(plVar22 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar22 + 0x7c) = uVar13;
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar24 = plVar19 + 1;
        lVar29 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar29 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          FUN_0412c2d0(plVar19);
        }
      }
      plVar19 = plStack_740;
      *(undefined1 *)(plVar22 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
      if (plStack_740 != (long *)0x0) {
        LOCK();
        plVar24 = plStack_740 + 1;
        lVar29 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar29 == 0) {
          (**(code **)(*plStack_740 + 0x10))(plStack_740);
          FUN_0412c2d0(plVar19);
        }
      }
      LOCK();
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
        LOCK();
        lVar29 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar29 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      if (lVar29 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
      if (plStack_6a8 != (long *)0x0) {
        (*(code *)plStack_6a8[1])(&plStack_6a8);
      }
      if ((bStack_660 & 1) != 0) {
        func_0x0412a280(uStack_650,CONCAT71(uStack_65f,bStack_660) & 0xfffffffffffffffe);
      }
      auStack_528[0] = 0;
      auStack_528[1] = 0;
      auStack_528[2] = 0;
      (**(code **)(*plVar23 + 0x10))(plVar23,auStack_528);
      if ((auStack_528[0] & 1) != 0) {
        func_0x0412a280(auStack_528[2],auStack_528[0] & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    plVar27 = (long *)((long)puVar6 - (long)puVar5);
    uVar34 = ((long)plVar27 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar34) goto LAB_05885fac;
    lVar29 = plVar22[0x1d] - (long)puVar5 >> 3;
    uVar17 = lVar29 * -0x6186186186186186;
    if (uVar34 < uVar17) {
      uVar34 = uVar17;
    }
    plVar3 = plVar22 + 0x1b;
    if (0xc30c30c30c30c2 < (ulong)(lVar29 * -0x30c30c30c30c30c3)) {
      uVar34 = 0x186186186186186;
    }
    plStack_728 = plVar3;
    if (uVar34 == 0) {
      plVar23 = (long *)0x0;
LAB_05884578:
      plStack_740 = (long *)((long)plVar27 + (long)plVar23);
      plStack_730 = plVar23 + uVar34 * 0x15;
      plStack_748 = plVar23;
      plStack_738 = plStack_740;
      plStack_620 = plVar3;
      func_0x05925460(plStack_740);
      plVar23 = plStack_738 + 0x15;
      lVar29 = plVar22[0x1b];
      lVar7 = plVar22[0x1c];
      lVar33 = (lVar29 - lVar7) + (long)plStack_740;
      if (lVar29 != lVar7) {
        lVar36 = 0;
        do {
          uVar28 = ((undefined8 *)(lVar29 + lVar36))[1];
          *(undefined8 *)(lVar33 + lVar36) = *(undefined8 *)(lVar29 + lVar36);
          ((undefined8 *)(lVar33 + lVar36))[1] = uVar28;
          *(undefined8 *)(lVar29 + lVar36) = 0;
          ((undefined8 *)(lVar29 + lVar36))[1] = 0;
          puVar18 = (undefined8 *)(lVar33 + 0x20 + lVar36);
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18 = (undefined8 *)(lVar33 + 0x10 + lVar36);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar33 + 0x30 + lVar36) = 0;
          *(undefined8 *)(lVar33 + 0x28 + lVar36) = *(undefined8 *)(lVar29 + 0x28 + lVar36);
          puVar21 = (undefined4 *)(lVar29 + 0x18 + lVar36);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          puVar5 = (undefined4 *)(lVar33 + 0x18 + lVar36);
          *puVar5 = *puVar21;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar12;
          *(undefined2 *)(lVar29 + 0x18 + lVar36) = 0;
          *(undefined8 *)(lVar33 + 0x10 + lVar36) = *(undefined8 *)(lVar29 + 0x10 + lVar36);
          func_0x04167a20(lVar36 + lVar33 + 0x38,lVar29 + lVar36 + 0x38);
          puVar18 = (undefined8 *)(lVar29 + 0x40 + lVar36);
          uVar28 = puVar18[1];
          puVar32 = (undefined8 *)(lVar33 + 0x40 + lVar36);
          *puVar32 = *puVar18;
          puVar32[1] = uVar28;
          puVar18 = (undefined8 *)(lVar29 + 0x50 + lVar36);
          uVar28 = puVar18[1];
          puVar32 = (undefined8 *)(lVar33 + 0x50 + lVar36);
          *puVar32 = *puVar18;
          puVar32[1] = uVar28;
          puVar18 = (undefined8 *)(lVar29 + 0x60 + lVar36);
          uVar28 = puVar18[1];
          puVar32 = (undefined8 *)(lVar33 + 0x60 + lVar36);
          *puVar32 = *puVar18;
          puVar32[1] = uVar28;
          puVar18 = (undefined8 *)(lVar29 + 0x60 + lVar36);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar33 + 0x70 + lVar36) = *(undefined8 *)(lVar29 + 0x70 + lVar36);
          puVar18 = (undefined8 *)(lVar29 + 0x78 + lVar36);
          uVar28 = puVar18[1];
          puVar32 = (undefined8 *)(lVar33 + 0x78 + lVar36);
          *puVar32 = *puVar18;
          puVar32[1] = uVar28;
          puVar18 = (undefined8 *)(lVar33 + 0x88 + lVar36);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar33 + 0x98 + lVar36) = 0;
          puVar21 = (undefined4 *)(lVar29 + 0x88 + lVar36);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          puVar5 = (undefined4 *)(lVar33 + 0x88 + lVar36);
          *puVar5 = *puVar21;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar12;
          *(undefined8 *)(lVar33 + 0x98 + lVar36) = *(undefined8 *)(lVar29 + 0x98 + lVar36);
          puVar18 = (undefined8 *)(lVar29 + 0x88 + lVar36);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar29 + 0x98 + lVar36) = 0;
          *(undefined2 *)(lVar33 + 0xa0 + lVar36) = *(undefined2 *)(lVar29 + 0xa0 + lVar36);
          lVar2 = lVar29 + lVar36;
          lVar36 = lVar36 + 0xa8;
        } while (lVar2 + 0xa8 != lVar7);
        do {
          func_0x05921d60(lVar29);
          lVar29 = lVar29 + 0xa8;
        } while (lVar29 != lVar7);
        lVar29 = *plStack_620;
      }
      plVar22[0x1b] = lVar33;
      plVar22[0x1c] = (long)plVar23;
      lVar7 = plVar22[0x1d];
      plVar22[0x1d] = (long)plStack_730;
      if (lVar29 != 0) {
        func_0x0412a280(lVar29,lVar7 - lVar29);
      }
      goto LAB_0588475a;
    }
    if (uVar34 < 0x186186186186187) {
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0xa8);
      if (plVar23 == (long *)0x0) {
        func_0x0eec74c0(uVar34 * 0xa8,0);
        plVar23 = (long *)0x0;
      }
      goto LAB_05884578;
    }
LAB_05885fa2:
    func_0x04882eb0();
  }
  func_0x059256a0();
LAB_05885fac:
  uVar28 = func_0x059255d0();
  if ((*puStack_6b0 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(uVar34 + 0x18),*(ulong *)(uVar34 + 8) & 0xfffffffffffffffe);
  }
  plVar19[0x12] = uVar34;
  plVar19 = plVar23 + 1;
  LOCK();
  lVar29 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    FUN_0412c2d0(plVar23);
  }
  LOCK();
  lVar29 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar27 + 0x10))(plVar27);
    FUN_0412c2d0(plVar27);
  }
  LOCK();
  lVar29 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar27 + 0x10))(plVar27);
    FUN_0412c2d0(plVar27);
  }
  if (plStack_6a8 != (long *)0x0) {
    (*(code *)plStack_6a8[1])(&plStack_6a8);
  }
  if ((bStack_660 & 1) != 0) {
    func_0x0412a280(uStack_650,CONCAT71(uStack_65f,bStack_660) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar28);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}



/* ---- referenced strings ----
 * 0x11d47c4  DefinitionType::DEFAULT_WITHIN_RADIUS
 * 0x11d47d4  DEFAULT_WITHIN_RADIUS
 * 0x128b68f  must_see_forget_duration
 * 0x12a4ad1  DefinitionType::DEFAULT_MUST_SEE_FORGET_DURATION
 * 0x12a4ae1  DEFAULT_MUST_SEE_FORGET_DURATION
 * 0x12a4af1  _FORGET_DURATION
 * 0x1391168  DefinitionType::DEFAULT_PERSIST_TIME
 * 0x1391178  DEFAULT_PERSIST_TIME
 * 0x1494d5d  <any array element>
 */
