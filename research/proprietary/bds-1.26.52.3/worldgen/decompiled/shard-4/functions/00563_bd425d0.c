/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbe425d0 (ELF vaddr 0xbd425d0)
 * Label: caller-of-callee
 * Body:  [[0be425d0, 0be43c14] [0be43c20, 0be441e5] [0be441f0, 0be4422c] [0be44230, 0be45257] [0be45933, 0be459da] [0be45cb2, 0be45cc5]]
 * Ghidra: FUN_0be425d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0be425d0(byte *param_1,undefined8 param_2)

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
  long **pplStack_588;
  undefined1 uStack_569;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined8 uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  undefined8 uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  uint *puStack_4d0;
  long *plStack_4c8;
  byte bStack_4c0;
  undefined5 uStack_4bf;
  undefined2 uStack_4ba;
  undefined1 uStack_4b8;
  undefined5 uStack_4b7;
  undefined2 uStack_4b2;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_448;
  byte bStack_440;
  undefined5 uStack_43f;
  undefined2 uStack_43a;
  undefined1 uStack_438;
  undefined5 uStack_437;
  undefined1 uStack_432;
  undefined8 uStack_430;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 *puStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  byte bStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined1 uStack_3ef;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 *puStack_3d0;
  byte bStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined1 uStack_3bf;
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  byte *pbStack_398;
  undefined8 uStack_390;
  ulong auStack_388 [4];
  ulong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  uint *puStack_2d0;
  long *plStack_2c8;
  byte bStack_2c0;
  undefined1 uStack_2bf;
  undefined1 uStack_2be;
  undefined5 uStack_2bd;
  undefined8 uStack_2b0;
  byte bStack_2a8;
  undefined1 uStack_2a7;
  undefined1 uStack_2a6;
  undefined5 uStack_2a5;
  undefined8 uStack_298;
  byte bStack_290;
  undefined1 uStack_28f;
  undefined1 uStack_28e;
  undefined5 uStack_28d;
  undefined8 uStack_280;
  byte bStack_278;
  undefined1 uStack_277;
  undefined1 uStack_276;
  undefined5 uStack_275;
  undefined8 uStack_268;
  byte bStack_260;
  undefined1 uStack_25f;
  undefined6 uStack_25e;
  undefined8 uStack_250;
  byte bStack_248;
  undefined1 uStack_247;
  undefined6 uStack_246;
  undefined8 uStack_238;
  byte bStack_230;
  undefined1 uStack_22f;
  undefined6 uStack_22e;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 *puStack_210;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
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
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  byte *pbStack_148;
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
  
  puStack_3d0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_3d0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar28 = _UNK_0128b5f1;
  uStack_3e0 = 0x21;
  uStack_3d8 = 0x19;
  *(ulong *)((long)puStack_3d0 + 9) = CONCAT17(UNK_0128b5f0,CONCAT43(_UNK_0128b5ec,_DAT_0128b5e9));
  *(undefined8 *)((long)puStack_3d0 + 0x11) = uVar28;
  uVar12 = _UNK_0128b5ec;
  uVar11 = _UNK_0128b5e8;
  uVar10 = _UNK_0128b5e4;
  *puStack_3d0 = _DAT_0128b5e0;
  puStack_3d0[1] = uVar10;
  puStack_3d0[2] = uVar11;
  puStack_3d0[3] = uVar12;
  *(undefined1 *)((long)puStack_3d0 + 0x19) = 0;
  bStack_3c8 = 0x10;
  uStack_3c7 = 0x7469726f697270;
  uStack_3c0 = 0x79;
  uStack_3bf = 0;
  bStack_278 = 2;
  uStack_277 = 0x30;
  uStack_276 = 0;
  bStack_290 = 2;
  uStack_28f = 0x30;
  uStack_28e = 0;
  bStack_230 = 0;
  uStack_22f = 0;
  func_0x0564aad0(&plStack_1c8,&uStack_3e0,&bStack_3c8,0,&bStack_278,0,&bStack_290,&bStack_230);
  uVar28 = *(undefined8 *)param_1;
  uStack_3b0 = 0;
  if ((uStack_158 & 1) == 0) {
    pbStack_398 = pbStack_148;
    uStack_3a8 = uStack_158;
    uStack_3a4 = uStack_154;
    uStack_3a0 = uStack_150;
    uStack_39c = uStack_14c;
  }
  else {
    func_0x0412e5e0(&uStack_3a8,pbStack_148,CONCAT44(uStack_14c,uStack_150));
  }
  uStack_390 = 0;
  if ((uStack_3a8 & 1) == 0) {
    if ((byte)uStack_3a8 >> 1 != 0) goto LAB_0be42758;
LAB_0be42845:
    uVar34 = 0;
  }
  else {
    if (CONCAT44(uStack_39c,uStack_3a0) == 0) goto LAB_0be42845;
LAB_0be42758:
    if ((uStack_3a8 & 1) == 0) {
      pbVar25 = (byte *)((long)&uStack_3a8 + 1);
      if (pbVar25 != (byte *)0x0) goto LAB_0be4277f;
      goto LAB_0be42845;
    }
    pbVar25 = pbStack_398;
    if (pbStack_398 == (byte *)0x0) goto LAB_0be42845;
LAB_0be4277f:
    if (*pbVar25 == 0) goto LAB_0be42845;
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
  plStack_568 = (long *)0x0;
  uStack_3b0 = uVar34;
  func_0x0564b850(&plStack_560,&plStack_1c8);
  puStack_210 = (undefined8 *)0x0;
  plStack_218 = (long *)&UNK_0f33eba0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar18 = plStack_568;
  puVar18[1] = plStack_560;
  puVar18[5] = uStack_540;
  puVar18[3] = plStack_550;
  puVar18[4] = plStack_548;
  plStack_550 = (long *)0x0;
  plStack_548 = (long *)0x0;
  uStack_540 = 0;
  puVar18[8] = uStack_528;
  puVar18[6] = uStack_538;
  puVar18[7] = uStack_530;
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  puVar18[0xb] = uStack_510;
  puVar18[9] = uStack_520;
  puVar18[10] = uStack_518;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  puVar18[0xe] = uStack_4f8;
  puVar18[0xc] = uStack_508;
  puVar18[0xd] = uStack_500;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  puVar18[0x11] = uStack_4e0;
  *(undefined4 *)(puVar18 + 0xf) = (undefined4)uStack_4f0;
  *(undefined4 *)((long)puVar18 + 0x7c) = uStack_4f0._4_4_;
  *(undefined4 *)(puVar18 + 0x10) = (undefined4)uStack_4e8;
  *(undefined4 *)((long)puVar18 + 0x84) = uStack_4e8._4_4_;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  plStack_488 = (long *)0x0;
  uStack_480 = 0;
  puStack_210 = puVar18;
  if (plStack_218 == (long *)0x0) {
    plVar22 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_218)(&plStack_218,&plStack_488);
    plVar22 = plStack_218;
  }
  plStack_218 = (long *)0x0;
  plStack_488 = plVar22;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f33e9d0;
  plStack_4c8 = (long *)0x0;
  bStack_4c0 = 0;
  uStack_4bf = 0;
  uStack_4ba = 0;
  if (plVar22 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar22)(&plStack_488,&plStack_4c8);
    plStack_4c8 = plStack_488;
  }
  plStack_488 = (long *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&uStack_569,&UNK_01254d89);
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
  plVar19[4] = (long)&UNK_0f33ea20;
  plVar19[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar19 + 0x2f) = 1;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar19 + 0x30);
    plVar20 = plStack_4c8;
  }
  plStack_4c8 = (long *)0x0;
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
      FUN_04885120(puVar1,lVar29,uVar34);
    }
    plVar19[0x11] = _DAT_0f552078;
    plVar19[0x15] = 0;
    if (plStack_4c8 != (long *)0x0) {
      (*(code *)plStack_4c8[1])(&plStack_4c8);
    }
  }
  plVar20 = plVar19 + 1;
  if (plStack_488 != (long *)0x0) {
    (*(code *)plStack_488[1])(&plStack_488);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puStack_4d0 = (uint *)param_1;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0f33eb00;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[4] = &UNK_0f33eb50;
  puVar18[0xe] = plVar19 + 4;
  puVar18[0xf] = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  bStack_4c0 = (byte)puVar18;
  uStack_4bf = (undefined5)((ulong)puVar18 >> 8);
  uStack_4ba = (undefined2)((ulong)puVar18 >> 0x30);
  plStack_4c8 = puVar18 + 4;
  puVar21 = (undefined4 *)func_0x0be741a0(uVar28,&uStack_3b0);
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
    plVar23 = (long *)func_0x0be75f60(puVar21 + 0x22,plVar22,&plStack_4c8);
  }
  puVar1 = puStack_4d0;
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
      func_0x0412c2d0(plVar22);
    }
  }
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  plVar22 = (long *)CONCAT26(uStack_4ba,CONCAT51(uStack_4bf,bStack_4c0));
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    lVar29 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar29 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
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
    func_0x0412c2d0(plVar19);
  }
  if (plStack_218 != (long *)0x0) {
    (*(code *)plStack_218[1])(&plStack_218);
  }
  if ((uStack_4f0 & 1) != 0) {
    func_0x0412a280(uStack_4e0,uStack_4f0 & 0xfffffffffffffffe);
  }
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(uStack_4f8,uStack_508 & 0xfffffffffffffffe);
  }
  if ((uStack_520 & 1) != 0) {
    func_0x0412a280(uStack_510,uStack_520 & 0xfffffffffffffffe);
  }
  if ((uStack_538 & 1) != 0) {
    func_0x0412a280(uStack_528,uStack_538 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_550 & 1) != 0) {
    func_0x0412a280(uStack_540,(ulong)plStack_550 & 0xfffffffffffffffe);
  }
  if ((uStack_3a8 & 1) != 0) {
    func_0x0412a280(pbStack_398,CONCAT44(uStack_3a4,uStack_3a8) & 0xfffffffffffffffe);
  }
  plStack_568 = (long *)0x0;
  plStack_560 = (long *)((ulong)plStack_560 & 0xffffffffffffff00);
  func_0x0564b850(&plStack_558,&plStack_1c8);
  bStack_4c0 = 0;
  uStack_4bf = 0;
  uStack_4ba = 0;
  plStack_4c8 = (long *)&UNK_0f33ebb8;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  pplVar35 = (long **)(plVar19 + 0x26);
  *(undefined1 *)(puVar18 + 1) = plStack_560._0_1_;
  *puVar18 = plStack_568;
  puVar18[2] = plStack_558;
  puVar18[6] = uStack_538;
  puVar18[4] = plStack_548;
  puVar18[5] = uStack_540;
  plStack_548 = (long *)0x0;
  uStack_540 = 0;
  uStack_538 = 0;
  puVar18[9] = uStack_520;
  puVar18[7] = uStack_530;
  puVar18[8] = uStack_528;
  uStack_530 = 0;
  uStack_528 = 0;
  uStack_520 = 0;
  puVar18[0xc] = uStack_508;
  puVar18[10] = uStack_518;
  puVar18[0xb] = uStack_510;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_508 = 0;
  puVar18[0xf] = uStack_4f0;
  puVar18[0xd] = uStack_500;
  puVar18[0xe] = uStack_4f8;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  puVar18[0x12] = uStack_4d8;
  *(undefined4 *)(puVar18 + 0x10) = (undefined4)uStack_4e8;
  *(undefined4 *)((long)puVar18 + 0x84) = uStack_4e8._4_4_;
  *(undefined4 *)(puVar18 + 0x11) = (undefined4)uStack_4e0;
  *(undefined4 *)((long)puVar18 + 0x8c) = uStack_4e0._4_4_;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  bStack_4c0 = (byte)puVar18;
  uStack_4bf = (undefined5)((ulong)puVar18 >> 8);
  uStack_4ba = (undefined2)((ulong)puVar18 >> 0x30);
  if (pplVar35 == &plStack_4c8) {
    func_0x0564b7b0(puVar18 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar18);
  }
  else {
    plVar22 = (long *)&UNK_0f33ebb8;
    if ((*pplVar35 == (long *)0x0) ||
       ((*(code *)(*pplVar35)[1])(pplVar35), plVar22 = plStack_4c8, plStack_4c8 != (long *)0x0)) {
      (*(code *)*plVar22)(&plStack_4c8,pplVar35);
      plVar22 = plStack_4c8;
      plStack_4c8 = (long *)0x0;
      *pplVar35 = plVar22;
    }
    else {
      plStack_4c8 = (long *)0x0;
      *pplVar35 = (long *)0x0;
    }
  }
  if ((uStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,uStack_4e8 & 0xfffffffffffffffe);
  }
  if ((uStack_500 & 1) != 0) {
    func_0x0412a280(uStack_4f0,uStack_500 & 0xfffffffffffffffe);
  }
  if ((uStack_518 & 1) != 0) {
    func_0x0412a280(uStack_508,uStack_518 & 0xfffffffffffffffe);
  }
  if ((uStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,uStack_530 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_548 & 1) != 0) {
    func_0x0412a280(uStack_538,(ulong)plStack_548 & 0xfffffffffffffffe);
  }
  if ((uStack_158 & 1) != 0) {
    func_0x0412a280(pbStack_148,CONCAT44(uStack_154,uStack_158) & 0xfffffffffffffffe);
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
  if ((bStack_230 & 1) != 0) {
    func_0x0412a280(uStack_220,
                    CONCAT62(uStack_22e,CONCAT11(uStack_22f,bStack_230)) & 0xfffffffffffffffe);
  }
  if ((bStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,
                    CONCAT53(uStack_28d,CONCAT12(uStack_28e,CONCAT11(uStack_28f,bStack_290))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,
                    CONCAT53(uStack_275,CONCAT12(uStack_276,CONCAT11(uStack_277,bStack_278))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_3c8 & 1) != 0) {
    func_0x0412a280(uStack_3b8,CONCAT71(uStack_3c7,bStack_3c8) & 0xfffffffffffffffe);
  }
  uVar28 = *(undefined8 *)puVar1;
  uStack_4b2 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  bStack_4c0 = 0x1a;
  uStack_4bf = 0x72746e6f63;
  uStack_4ba = 0x6c6f;
  uStack_4b8 = 0x5f;
  uStack_4b7 = 0x7367616c66;
  plStack_4c8 = (long *)0x86e3afe1b1c6e2ac;
  uStack_480 = 0;
  plStack_488 = (long *)&UNK_0f33edc8;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0f33ebe0;
  plStack_568 = (long *)0x0;
  plStack_560 = (long *)0x0;
  if (plStack_488 == (long *)0x0) {
    plStack_568 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_488)(&plStack_488,&plStack_568);
    plStack_568 = plStack_488;
  }
  plStack_488 = (long *)0x0;
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
  func_0x04aa75f0(plVar22 + 0xe,&plStack_218,&UNK_01254d89);
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
  plVar22[4] = (long)&UNK_0f33ec30;
  pplVar35 = (long **)(plVar22 + 0x2e);
  plVar22[0x2e] = 0;
  plVar22[0x2f] = 0;
  if (pplVar35 != &plStack_568) {
    if (plStack_568 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_568)(&plStack_568,pplVar35);
      plVar20 = plStack_568;
    }
    plStack_568 = (long *)0x0;
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
      FUN_04885120(puVar1,lVar29,uVar34);
    }
  }
  plVar20 = plVar22 + 1;
  plVar22[0x11] = _DAT_0f551f58;
  plVar22[0x15] = 0;
  if (plStack_568 != (long *)0x0) {
    (*(code *)plStack_568[1])(&plStack_568);
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
  *plVar23 = (long)&UNK_0f33ed28;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[4] = (long)&UNK_0f33ed78;
  plVar23[0xe] = (long)(plVar22 + 4);
  plVar23[0xf] = (long)plVar22;
  LOCK();
  plVar22[1] = plVar22[1] + 1;
  UNLOCK();
  plStack_568 = plVar23 + 4;
  plStack_560 = plVar23;
  puVar21 = (undefined4 *)func_0x0be741a0(uVar28,&plStack_4c8);
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
    plVar24 = (long *)func_0x0be75f60(puVar21 + 0x22,plVar19,&plStack_568);
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
      func_0x0412c2d0(plVar19);
    }
  }
  plVar19 = plStack_560;
  *(undefined1 *)(plVar22 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_560 != (long *)0x0) {
    LOCK();
    plVar23 = plStack_560 + 1;
    lVar29 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_560 + 0x10))(plStack_560);
      func_0x0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar29 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    func_0x0412c2d0(plVar22);
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
    func_0x0412c2d0(plVar22);
  }
  if (plStack_488 != (long *)0x0) {
    (*(code *)plStack_488[1])(&plStack_488);
  }
  if ((bStack_4c0 & 1) != 0) {
    func_0x0412a280(uStack_4b0,
                    CONCAT26(uStack_4ba,CONCAT51(uStack_4bf,bStack_4c0)) & 0xfffffffffffffffe);
  }
  puStack_210 = (undefined8 *)0x0;
  bStack_4c0 = 0;
  uStack_4bf = 0;
  uStack_4ba = 0;
  plStack_218 = (long *)0x0;
  plStack_4c8 = (long *)&UNK_0f33f018;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_568 = plStack_4c8;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f33edf0;
  plStack_560 = (long *)0x0;
  plStack_4c8 = (long *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&uStack_3b0,&UNK_01254d89);
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
  plVar19[4] = (long)&UNK_0f33ee40;
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
  if (plStack_568 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_568)(&plStack_568,plVar19 + 0x36);
    plVar23 = plStack_568;
  }
  plStack_568 = (long *)0x0;
  plVar19[0x36] = (long)plVar23;
  *(undefined1 *)(plVar19 + 0x3e) = 0;
  puStack_2d0 = (uint *)(plVar19 + 0x12);
  if (plVar20 != (long *)&DAT_0f552138) {
    if ((*puStack_2d0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552150;
        uVar12 = uRam000000000f55214c;
        uVar11 = _DAT_0f552148;
        uVar10 = uRam000000000f552144;
        *puStack_2d0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar10;
        *(undefined4 *)(plVar19 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_2d0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
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
      FUN_04885120(puStack_2d0,lVar29,uVar34);
    }
  }
  plVar19[0x11] = _DAT_0f552138;
  plVar19[0x15] = 0;
  if (plStack_568 != (long *)0x0) {
    (*(code *)plStack_568[1])(&plStack_568);
  }
  plVar23 = plVar19 + 1;
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  LOCK();
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  plStack_1d0 = plVar23;
  plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar24 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar24[1] = 0;
  plVar24[2] = 0;
  *plVar24 = (long)&UNK_0f33ef20;
  plVar24[6] = 0;
  plVar24[7] = 0;
  plVar24[4] = (long)&UNK_0f33ef70;
  plVar24[0xe] = (long)(plVar19 + 4);
  plVar24[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_2c8 = plVar24 + 1;
  puVar6 = (undefined4 *)plVar22[0x1c];
  puVar5 = (undefined4 *)plVar22[0x1b];
  for (puVar21 = puVar5; puVar21 != puVar6; puVar21 = puVar21 + 0x2a) {
    if ((*(long *)(puVar21 + 0x1e) == 0) && (*(long *)(puVar21 + 0x20) == -1)) goto LAB_0be43f53;
  }
  if (puVar6 < (undefined4 *)plVar22[0x1d]) {
    func_0x0be9e7f0(puVar6);
    plVar23 = (long *)(puVar6 + 0x2a);
    plVar22[0x1c] = (long)plVar23;
LAB_0be43eea:
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
LAB_0be43f53:
    plVar27 = plVar24 + 4;
    plVar23 = *(long **)(puVar21 + 0x24);
    if (plVar23 < *(long **)(puVar21 + 0x26)) {
      plVar23[2] = 0;
      plVar23[3] = 0;
      *plVar23 = 0;
      plVar23[1] = 0;
      plVar23[4] = 0;
      if (plVar23 != plVar20) {
        if ((*puStack_2d0 & 1) == 0) {
          plVar23[3] = *(long *)(puStack_2d0 + 4);
          lVar29 = *(long *)(puStack_2d0 + 2);
          plVar23[1] = *(long *)puStack_2d0;
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
      goto LAB_0be44294;
    }
    plVar23 = (long *)((long)plVar23 - *(long *)(puVar21 + 0x22));
    uVar34 = ((long)plVar23 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar34 < 0x492492492492493) {
      lVar29 = (long)*(long **)(puVar21 + 0x26) - *(long *)(puVar21 + 0x22) >> 3;
      uVar17 = lVar29 * -0x2492492492492492;
      if (uVar34 < uVar17) {
        uVar34 = uVar17;
      }
      plStack_548 = (long *)(puVar21 + 0x22);
      if (0x249249249249248 < (ulong)(lVar29 * 0x6db6db6db6db6db7)) {
        uVar34 = 0x492492492492492;
      }
      plStack_448 = plVar27;
      plStack_1d8 = plStack_548;
      if (uVar34 == 0) {
        plVar27 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar34) goto LAB_0be45219;
        plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0x38);
        if (plVar27 == (long *)0x0) {
          func_0x0eec74c0(uVar34 * 0x38,0);
          plVar27 = (long *)0x0;
        }
      }
      plVar3 = (long *)((long)plVar27 + (long)plVar23);
      plStack_550 = plVar27 + uVar34 * 7;
      *(undefined8 *)((long)(plVar27 + 2) + (long)plVar23) = 0;
      ((undefined8 *)((long)(plVar27 + 2) + (long)plVar23))[1] = 0;
      *(undefined8 *)((long)plVar27 + (long)plVar23) = 0;
      ((undefined8 *)((long)plVar27 + (long)plVar23))[1] = 0;
      *(undefined8 *)((long)(plVar27 + 4) + (long)plVar23) = 0;
      plStack_558 = plVar3;
      plStack_568 = plVar27;
      plStack_560 = plVar3;
      if (plVar3 != plVar20) {
        if ((*puStack_2d0 & 1) == 0) {
          *(undefined8 *)((long)plVar23 + (long)(plVar27 + 3)) = *(undefined8 *)(puStack_2d0 + 4);
          uVar14 = puStack_2d0[1];
          uVar15 = puStack_2d0[2];
          uVar16 = puStack_2d0[3];
          *(uint *)((long)plVar23 + (long)(plVar27 + 1)) = *puStack_2d0;
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
      plVar3[5] = (long)plStack_448;
      plVar3[6] = (long)plVar24;
      LOCK();
      plVar24[1] = plVar24[1] + 1;
      UNLOCK();
      plStack_558 = plStack_558 + 7;
      puVar32 = *(undefined8 **)(puVar21 + 0x22);
      puVar8 = *(undefined8 **)(puVar21 + 0x24);
      puVar18 = (undefined8 *)((long)plStack_560 + ((long)puVar32 - (long)puVar8));
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
LAB_0be44214:
            bVar4 = *(byte *)(puVar32 + 1);
          }
          else {
            LOCK();
            plVar23 = plVar20 + 1;
            lVar29 = *plVar23;
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (lVar29 != 0) goto LAB_0be44214;
            (**(code **)(*plVar20 + 0x10))(plVar20);
            func_0x0412c2d0(plVar20);
            bVar4 = *(byte *)(puVar32 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar32[3],puVar32[1] & 0xfffffffffffffffe);
          }
          puVar32 = puVar32 + 7;
        } while (puVar32 != puVar8);
        puVar32 = (undefined8 *)*plStack_1d8;
      }
      plVar23 = plStack_558;
      *(undefined8 **)(puVar21 + 0x22) = puVar18;
      *(long **)(puVar21 + 0x24) = plStack_558;
      lVar29 = *(long *)(puVar21 + 0x26);
      *(long **)(puVar21 + 0x26) = plStack_550;
      if (puVar32 != (undefined8 *)0x0) {
        func_0x0412a280(puVar32,lVar29 - (long)puVar32);
      }
LAB_0be44294:
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
          func_0x0412c2d0(plVar20);
        }
      }
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
      LOCK();
      lVar29 = *plStack_2c8;
      *plStack_2c8 = *plStack_2c8 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
      }
      plVar20 = plStack_1d0;
      puVar1 = puStack_4d0;
      LOCK();
      lVar29 = *plStack_1d0;
      *plStack_1d0 = *plStack_1d0 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
        LOCK();
        lVar29 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar29 = *plStack_1d0;
        *plStack_1d0 = *plStack_1d0 + -1;
        UNLOCK();
      }
      if (lVar29 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      if (plStack_218 != (long *)0x0) {
        (*(code *)plStack_218[1])(&plStack_218);
      }
      pplStack_588 = (long **)(plVar22 + 0x26);
      plStack_560 = (long *)0x0;
      plStack_568 = (long *)&UNK_0f33f030;
      if (pplStack_588 != &plStack_568) {
        if ((*pplStack_588 == (long *)0x0) ||
           ((*(code *)(*pplStack_588)[1])(pplStack_588), plStack_568 != (long *)0x0)) {
          (*(code *)*plStack_568)(&plStack_568,pplStack_588);
          plVar22 = plStack_568;
        }
        else {
          plVar22 = (long *)0x0;
        }
        *pplStack_588 = plVar22;
      }
      if ((uStack_3e0 & 1) != 0) {
        func_0x0412a280(puStack_3d0,uStack_3e0 & 0xfffffffffffffffe);
      }
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      (**(code **)(**(long **)puVar1 + 0x10))(*(long **)puVar1,&uStack_2e8);
      if ((uStack_2e8 & 1) != 0) {
        func_0x0412a280(uStack_2d8,uStack_2e8 & 0xfffffffffffffffe);
      }
      bStack_3f8 = 0x10;
      uStack_3f7 = 0x6f697461727564;
      uStack_3f0 = 0x6e;
      uStack_3ef = 0;
      puStack_400 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puStack_400 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      uVar28 = _UNK_014bdc94;
      uStack_410 = 0x49;
      uStack_408 = 0x45;
      puStack_400[6] = _DAT_014bdc8c;
      puStack_400[7] = uVar28;
      uVar28 = _UNK_014bdc84;
      puStack_400[4] = _DAT_014bdc7c;
      puStack_400[5] = uVar28;
      uVar28 = _UNK_014bdc74;
      puStack_400[2] = _DAT_014bdc6c;
      puStack_400[3] = uVar28;
      uVar28 = _UNK_014bdc64;
      *puStack_400 = _DAT_014bdc5c;
      puStack_400[1] = uVar28;
      *(undefined8 *)((long)puStack_400 + 0x3d) = 0x53444e4f4345535f;
      *(undefined1 *)((long)puStack_400 + 0x45) = 0;
      bStack_2a8 = 2;
      uStack_2a7 = 0x30;
      uStack_2a6 = 0;
      bStack_248 = 0;
      uStack_247 = 0;
      func_0x05611160(_DAT_01198988,auStack_b8,param_2,&bStack_3f8,&uStack_410,&bStack_2a8,
                      &bStack_248);
      plVar22 = (long *)func_0x0be45cd0(*(undefined8 *)puVar1,8,auStack_b8);
      *(undefined4 *)(plVar22 + 0x2a) = 0;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_308,&uStack_328);
      if ((uStack_328 & 1) != 0) {
        func_0x0412a280(uStack_318,uStack_328 & 0xfffffffffffffffe);
      }
      if ((uStack_308 & 1) != 0) {
        func_0x0412a280(uStack_2f8,uStack_308 & 0xfffffffffffffffe);
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
      if ((bStack_248 & 1) != 0) {
        func_0x0412a280(uStack_238,
                        CONCAT62(uStack_246,CONCAT11(uStack_247,bStack_248)) & 0xfffffffffffffffe);
      }
      if ((bStack_2a8 & 1) != 0) {
        func_0x0412a280(uStack_298,
                        CONCAT53(uStack_2a5,CONCAT12(uStack_2a6,CONCAT11(uStack_2a7,bStack_2a8))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_410 & 1) != 0) {
        func_0x0412a280(puStack_400,uStack_410 & 0xfffffffffffffffe);
      }
      if ((bStack_3f8 & 1) != 0) {
        func_0x0412a280(uStack_3e8,CONCAT71(uStack_3f7,bStack_3f8) & 0xfffffffffffffffe);
      }
      bStack_440 = 0x1a;
      uStack_43f = 0x646c6f6f63;
      uStack_43a = 0x776f;
      uStack_438 = 0x6e;
      uStack_437 = 0x656d69745f;
      uStack_432 = 0;
      puStack_418 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puStack_418 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      uVar28 = _UNK_01488f9d;
      uStack_428 = 0x49;
      uStack_420 = 0x45;
      puStack_418[6] = _DAT_01488f95;
      puStack_418[7] = uVar28;
      uVar28 = _UNK_01488f8d;
      puStack_418[4] = _DAT_01488f85;
      puStack_418[5] = uVar28;
      uVar28 = _UNK_01488f7d;
      puStack_418[2] = _DAT_01488f75;
      puStack_418[3] = uVar28;
      uVar28 = _UNK_01488f6d;
      *puStack_418 = _DAT_01488f65;
      puStack_418[1] = uVar28;
      *(undefined8 *)((long)puStack_418 + 0x3d) = 0x53444e4f4345535f;
      *(undefined1 *)((long)puStack_418 + 0x45) = 0;
      bStack_2c0 = 2;
      uStack_2bf = 0x30;
      uStack_2be = 0;
      bStack_260 = 0;
      uStack_25f = 0;
      func_0x05611160(_DAT_011986e0,auStack_140,param_2,&bStack_440,&uStack_428,&bStack_2c0,
                      &bStack_260);
      plVar22 = (long *)func_0x0be45cd0(*(undefined8 *)puVar1,0xc,auStack_140);
      *(undefined4 *)(plVar22 + 0x2a) = 0;
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_358 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_348,&uStack_368);
      if ((uStack_368 & 1) != 0) {
        func_0x0412a280(uStack_358,uStack_368 & 0xfffffffffffffffe);
      }
      if ((uStack_348 & 1) != 0) {
        func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
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
      if ((bStack_260 & 1) != 0) {
        func_0x0412a280(uStack_250,
                        CONCAT62(uStack_25e,CONCAT11(uStack_25f,bStack_260)) & 0xfffffffffffffffe);
      }
      if ((bStack_2c0 & 1) != 0) {
        func_0x0412a280(uStack_2b0,
                        CONCAT53(uStack_2bd,CONCAT12(uStack_2be,CONCAT11(uStack_2bf,bStack_2c0))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_428 & 1) != 0) {
        func_0x0412a280(puStack_418,uStack_428 & 0xfffffffffffffffe);
      }
      if ((bStack_440 & 1) != 0) {
        func_0x0412a280(uStack_430,
                        CONCAT26(uStack_43a,CONCAT51(uStack_43f,bStack_440)) & 0xfffffffffffffffe);
      }
      uVar28 = *(undefined8 *)puVar1;
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      uStack_480 = 0x656e6f645f6e6f0e;
      plStack_488 = (long *)0x3d51f263e42cca89;
      bStack_4c0 = 0x10;
      uStack_4bf = 0;
      uStack_4ba = 0;
      plStack_1c0 = (long *)0x10;
      plStack_4c8 = (long *)0x0;
      plStack_1c8 = (long *)&UNK_0f33c5f8;
      plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar22 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      plStack_568 = plStack_1c8;
      plVar22[1] = 0;
      plVar22[2] = 0;
      *plVar22 = (long)&UNK_0f33c3e0;
      plStack_1c8 = (long *)0x0;
      plStack_560 = plStack_1c0;
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
      func_0x04aa75f0(plVar22 + 0xe,&plStack_218,&UNK_01254d89);
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
      plVar22[4] = (long)&UNK_0f33c430;
      plVar22[0x2e] = 0;
      plVar22[0x2f] = 0;
      if (plStack_568 == (long *)0x0) {
        plVar20 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_568)(&plStack_568,plVar22 + 0x2e);
        plVar20 = plStack_568;
      }
      plVar23 = plVar22 + 4;
      plStack_568 = (long *)0x0;
      plVar22[0x2e] = (long)plVar20;
      puStack_4d0 = (uint *)(plVar22 + 0x12);
      if (plVar19 == (long *)&DAT_0f551ef8) {
        plVar22[0x15] = 0;
      }
      else {
        if ((*puStack_4d0 & 1) == 0) {
          if ((_DAT_0f551f00 & 1) == 0) {
            plVar22[0x14] = _DAT_0f551f10;
            uVar12 = uRam000000000f551f0c;
            uVar11 = _DAT_0f551f08;
            uVar10 = uRam000000000f551f04;
            *puStack_4d0 = _DAT_0f551f00;
            *(undefined4 *)((long)plVar22 + 0x94) = uVar10;
            *(undefined4 *)(plVar22 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar22 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puStack_4d0,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
          }
        }
        else {
          bVar37 = (_DAT_0f551f00 & 1) != 0;
          lVar29 = 0xf551f01;
          if (bVar37) {
            lVar29 = _DAT_0f551f10;
          }
          uVar34 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
          if (bVar37) {
            uVar34 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
          }
          FUN_04885120(puStack_4d0,lVar29,uVar34);
        }
        plVar22[0x11] = _DAT_0f551ef8;
        plVar22[0x15] = 0;
        if (plStack_568 != (long *)0x0) {
          (*(code *)plStack_568[1])(&plStack_568);
        }
      }
      plVar20 = plVar22 + 1;
      if (plStack_1c8 != (long *)0x0) {
        (*(code *)plStack_1c8[1])(&plStack_1c8);
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
      *plVar24 = (long)&UNK_0f33c558;
      plVar24[6] = 0;
      plVar24[7] = 0;
      plVar24[4] = (long)&UNK_0f33c5a8;
      plVar24[0xe] = (long)plVar23;
      plVar24[0xf] = (long)plVar22;
      LOCK();
      plVar22[1] = plVar22[1] + 1;
      UNLOCK();
      plStack_568 = plVar24 + 4;
      plStack_560 = plVar24;
      puVar21 = (undefined4 *)func_0x0be741a0(uVar28,&plStack_488);
      plVar27 = *(long **)(puVar21 + 0x24);
      if (plVar27 < *(long **)(puVar21 + 0x26)) {
        plVar27[2] = 0;
        plVar27[3] = 0;
        *plVar27 = 0;
        plVar27[1] = 0;
        plVar27[4] = 0;
        if (plVar27 != plVar19) {
          puVar1 = (uint *)(plVar27 + 1);
          if ((*puStack_4d0 & 1) == 0) {
            plVar27[3] = *(long *)(puStack_4d0 + 4);
            lVar29 = *(long *)(puStack_4d0 + 2);
            *(undefined8 *)puVar1 = *(undefined8 *)puStack_4d0;
            plVar27[2] = lVar29;
          }
          else {
            puStack_4d0 = puVar1;
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
        plVar27 = (long *)func_0x0be75f60(puVar21 + 0x22,plVar19,&plStack_568);
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
          func_0x0412c2d0(plVar19);
        }
      }
      plVar19 = plStack_560;
      *(undefined1 *)(plVar22 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
      if (plStack_560 != (long *)0x0) {
        LOCK();
        plVar24 = plStack_560 + 1;
        lVar29 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar29 == 0) {
          (**(code **)(*plStack_560 + 0x10))(plStack_560);
          func_0x0412c2d0(plVar19);
        }
      }
      LOCK();
      lVar29 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
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
        func_0x0412c2d0(plVar22);
      }
      if (plStack_4c8 != (long *)0x0) {
        (*(code *)plStack_4c8[1])(&plStack_4c8);
      }
      if ((uStack_480 & 1) != 0) {
        func_0x0412a280(uStack_470,uStack_480 & 0xfffffffffffffffe);
      }
      auStack_388[0] = 0;
      auStack_388[1] = 0;
      auStack_388[2] = 0;
      (**(code **)(*plVar23 + 0x10))(plVar23,auStack_388);
      if ((auStack_388[0] & 1) != 0) {
        func_0x0412a280(auStack_388[2],auStack_388[0] & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    plVar27 = (long *)((long)puVar6 - (long)puVar5);
    uVar34 = ((long)plVar27 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar34) goto LAB_0be45223;
    lVar29 = plVar22[0x1d] - (long)puVar5 >> 3;
    uVar17 = lVar29 * -0x6186186186186186;
    if (uVar34 < uVar17) {
      uVar34 = uVar17;
    }
    plVar3 = plVar22 + 0x1b;
    if (0xc30c30c30c30c2 < (ulong)(lVar29 * -0x30c30c30c30c30c3)) {
      uVar34 = 0x186186186186186;
    }
    plStack_548 = plVar3;
    if (uVar34 == 0) {
      plVar23 = (long *)0x0;
LAB_0be43d08:
      plStack_560 = (long *)((long)plVar27 + (long)plVar23);
      plStack_550 = plVar23 + uVar34 * 0x15;
      plStack_568 = plVar23;
      plStack_558 = plStack_560;
      plStack_448 = plVar3;
      func_0x0be9e7f0(plStack_560);
      plVar23 = plStack_558 + 0x15;
      lVar29 = plVar22[0x1b];
      lVar7 = plVar22[0x1c];
      lVar33 = (lVar29 - lVar7) + (long)plStack_560;
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
          FUN_04167a20(lVar36 + lVar33 + 0x38,lVar29 + lVar36 + 0x38);
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
          func_0x0be9b0f0(lVar29);
          lVar29 = lVar29 + 0xa8;
        } while (lVar29 != lVar7);
        lVar29 = *plStack_448;
      }
      plVar22[0x1b] = lVar33;
      plVar22[0x1c] = (long)plVar23;
      lVar7 = plVar22[0x1d];
      plVar22[0x1d] = (long)plStack_550;
      if (lVar29 != 0) {
        func_0x0412a280(lVar29,lVar7 - lVar29);
      }
      goto LAB_0be43eea;
    }
    if (uVar34 < 0x186186186186187) {
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0xa8);
      if (plVar23 == (long *)0x0) {
        func_0x0eec74c0(uVar34 * 0xa8,0);
        plVar23 = (long *)0x0;
      }
      goto LAB_0be43d08;
    }
LAB_0be45219:
    func_0x04882eb0();
  }
  func_0x0be9ea30();
LAB_0be45223:
  uVar28 = func_0x0be9e960();
  if ((*puStack_4d0 & 1) != 0) {
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
    func_0x0412c2d0(plVar23);
  }
  LOCK();
  lVar29 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar27 + 0x10))(plVar27);
    func_0x0412c2d0(plVar27);
  }
  LOCK();
  lVar29 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar29 == 0) {
    (**(code **)(*plVar27 + 0x10))(plVar27);
    func_0x0412c2d0(plVar27);
  }
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  if ((uStack_480 & 1) != 0) {
    func_0x0412a280(uStack_470,uStack_480 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar28);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}



/* ---- referenced strings ----
 * 0x128b5e0  minecraft:behavior.emerge
 * 0x128b5e9  :behavior.emerge
 * 0x1488f65  SharedTypes::v1_26_30::EmergeGoalDefinition::DEFAULT_COOLDOWN_SECONDS
 * 0x1488f75  26_30::EmergeGoalDefinition::DEFAULT_COOLDOWN_SECONDS
 * 0x1488f85  lDefinition::DEFAULT_COOLDOWN_SECONDS
 * 0x1488f95  AULT_COOLDOWN_SECONDS
 * 0x1494d5d  <any array element>
 * 0x14bdc5c  SharedTypes::v1_26_30::EmergeGoalDefinition::DEFAULT_DURATION_SECONDS
 * 0x14bdc6c  26_30::EmergeGoalDefinition::DEFAULT_DURATION_SECONDS
 * 0x14bdc7c  lDefinition::DEFAULT_DURATION_SECONDS
 * 0x14bdc8c  AULT_DURATION_SECONDS
 */
