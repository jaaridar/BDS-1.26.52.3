/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbe47090 (ELF vaddr 0xbd47090)
 * Label: caller-of-callee
 * Body:  [[0be47090, 0be486ee] [0be486f0, 0be48cb5] [0be48cc0, 0be48cfc] [0be48d00, 0be49778] [0be49fb2, 0be4a036]]
 * Ghidra: FUN_0be47090
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0be47090(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined2 uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined4 *puVar24;
  byte *pbVar25;
  long *plVar26;
  long *plVar27;
  byte *pbVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  byte *pbVar33;
  ulong uVar34;
  long *plVar35;
  byte **ppbVar36;
  long lVar37;
  bool bVar38;
  byte **ppbStack_570;
  undefined1 uStack_559;
  byte *pbStack_558;
  byte *pbStack_550;
  byte *pbStack_548;
  byte *pbStack_540;
  long *plStack_538;
  undefined8 uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  undefined8 uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  undefined8 uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  byte *pbStack_4b8;
  byte bStack_4b0;
  undefined5 uStack_4af;
  undefined2 uStack_4aa;
  undefined1 uStack_4a8;
  undefined5 uStack_4a7;
  undefined2 uStack_4a2;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long *plStack_478;
  byte bStack_470;
  undefined7 uStack_46f;
  undefined4 uStack_468;
  undefined1 uStack_464;
  undefined8 uStack_460;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 *puStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined8 *puStack_430;
  byte bStack_428;
  undefined4 uStack_427;
  undefined4 uStack_423;
  undefined4 uStack_41f;
  undefined4 uStack_41b;
  undefined1 uStack_417;
  undefined6 uStack_416;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined4 *puStack_400;
  byte bStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined1 uStack_3ef;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  byte *pbStack_3c8;
  undefined8 uStack_3c0;
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
  uint *puStack_320;
  long *plStack_318;
  byte bStack_310;
  undefined1 uStack_30f;
  undefined1 uStack_30e;
  undefined5 uStack_30d;
  undefined8 uStack_300;
  byte bStack_2f8;
  undefined1 uStack_2f7;
  undefined1 uStack_2f6;
  undefined5 uStack_2f5;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined1 uStack_2df;
  undefined1 uStack_2de;
  undefined5 uStack_2dd;
  undefined8 uStack_2d0;
  byte bStack_2c8;
  undefined1 uStack_2c7;
  undefined1 uStack_2c6;
  undefined5 uStack_2c5;
  undefined8 uStack_2b8;
  byte bStack_2b0;
  undefined1 uStack_2af;
  undefined6 uStack_2ae;
  undefined8 uStack_2a0;
  byte bStack_298;
  undefined1 uStack_297;
  undefined6 uStack_296;
  undefined8 uStack_288;
  byte bStack_280;
  undefined1 uStack_27f;
  undefined6 uStack_27e;
  undefined8 uStack_270;
  byte *pbStack_268;
  undefined8 uStack_260;
  byte *pbStack_228;
  undefined8 *puStack_220;
  long *plStack_1e0;
  byte *pbStack_1d8;
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
  
  puStack_400 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puStack_400 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar29 = _UNK_01413050;
  uStack_410 = 0x39;
  uStack_408 = 0x32;
  *(undefined8 *)(puStack_400 + 8) = _DAT_01413048;
  *(undefined8 *)(puStack_400 + 10) = uVar29;
  uVar29 = _UNK_01413040;
  *(undefined8 *)(puStack_400 + 4) = _DAT_01413038;
  *(undefined8 *)(puStack_400 + 6) = uVar29;
  uVar14 = _UNK_01413034;
  uVar13 = _UNK_01413030;
  uVar12 = _UNK_0141302c;
  *puStack_400 = _DAT_01413028;
  puStack_400[1] = uVar12;
  puStack_400[2] = uVar13;
  puStack_400[3] = uVar14;
  *(undefined2 *)(puStack_400 + 0xc) = 0x6e6f;
  *(undefined1 *)((long)puStack_400 + 0x32) = 0;
  bStack_3f8 = 0x10;
  uStack_3f7 = 0x7469726f697270;
  uStack_3f0 = 0x79;
  uStack_3ef = 0;
  bStack_2c8 = 2;
  uStack_2c7 = 0x30;
  uStack_2c6 = 0;
  bStack_2e0 = 2;
  uStack_2df = 0x30;
  uStack_2de = 0;
  bStack_280 = 0;
  uStack_27f = 0;
  func_0x0564aad0(auStack_1c8,&uStack_410,&bStack_3f8,0,&bStack_2c8,0,&bStack_2e0,&bStack_280);
  uStack_1d0 = param_2;
  uVar29 = *param_1;
  uStack_3e0 = 0;
  if ((uStack_158 & 1) == 0) {
    pbStack_3c8 = pbStack_148;
    uStack_3d8 = uStack_158;
    uStack_3d4 = uStack_154;
    uStack_3d0 = uStack_150;
    uStack_3cc = uStack_14c;
  }
  else {
    func_0x0412e5e0(&uStack_3d8,pbStack_148,CONCAT44(uStack_14c,uStack_150));
  }
  uStack_3c0 = 0;
  if ((uStack_3d8 & 1) == 0) {
    if ((byte)uStack_3d8 >> 1 != 0) goto LAB_0be4722f;
LAB_0be47325:
    uVar34 = 0;
  }
  else {
    if (CONCAT44(uStack_3cc,uStack_3d0) == 0) goto LAB_0be47325;
LAB_0be4722f:
    if ((uStack_3d8 & 1) == 0) {
      pbVar25 = (byte *)((long)&uStack_3d8 + 1);
      if (pbVar25 != (byte *)0x0) goto LAB_0be47256;
      goto LAB_0be47325;
    }
    pbVar25 = pbStack_3c8;
    if (pbStack_3c8 == (byte *)0x0) goto LAB_0be47325;
LAB_0be47256:
    if (*pbVar25 == 0) goto LAB_0be47325;
    uVar34 = 0xcbf29ce484222325;
    uVar21 = func_0x0eee2e90(pbVar25);
    if (uVar21 != 0) {
      uVar32 = (ulong)((uint)uVar21 & 7);
      if (7 < uVar21) {
        uVar21 = uVar21 & 0xfffffffffffffff8;
        do {
          uVar34 = (((((((uVar34 * 0x100000001b3 ^ (ulong)*pbVar25) * 0x100000001b3 ^
                        (ulong)pbVar25[1]) * 0x100000001b3 ^ (ulong)pbVar25[2]) * 0x100000001b3 ^
                      (ulong)pbVar25[3]) * 0x100000001b3 ^ (ulong)pbVar25[4]) * 0x100000001b3 ^
                    (ulong)pbVar25[5]) * 0x100000001b3 ^ (ulong)pbVar25[6]) * 0x100000001b3 ^
                   (ulong)pbVar25[7];
          pbVar25 = pbVar25 + 8;
          uVar21 = uVar21 - 8;
        } while (uVar21 != 0);
      }
      if (uVar32 != 0) {
        uVar21 = 0;
        do {
          uVar34 = uVar34 * 0x100000001b3 ^ (ulong)pbVar25[uVar21];
          uVar21 = uVar21 + 1;
        } while (uVar32 != uVar21);
      }
    }
  }
  pbStack_558 = (byte *)0x0;
  uStack_3e0 = uVar34;
  func_0x0564b850(&pbStack_550,auStack_1c8);
  puStack_220 = (undefined8 *)0x0;
  pbStack_228 = &UNK_0f33f228;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar22 = pbStack_558;
  puVar22[1] = pbStack_550;
  puVar22[5] = uStack_530;
  puVar22[3] = pbStack_540;
  puVar22[4] = plStack_538;
  pbStack_540 = (byte *)0x0;
  plStack_538 = (long *)0x0;
  uStack_530 = 0;
  puVar22[8] = uStack_518;
  puVar22[6] = uStack_528;
  puVar22[7] = uStack_520;
  uStack_528 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  puVar22[0xb] = uStack_500;
  puVar22[9] = uStack_510;
  puVar22[10] = uStack_508;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  puVar22[0xe] = uStack_4e8;
  puVar22[0xc] = uStack_4f8;
  puVar22[0xd] = uStack_4f0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  puVar22[0x11] = uStack_4d0;
  *(undefined4 *)(puVar22 + 0xf) = (undefined4)uStack_4e0;
  *(undefined4 *)((long)puVar22 + 0x7c) = uStack_4e0._4_4_;
  *(undefined4 *)(puVar22 + 0x10) = (undefined4)uStack_4d8;
  *(undefined4 *)((long)puVar22 + 0x84) = uStack_4d8._4_4_;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  pbStack_268 = (byte *)0x0;
  uStack_260 = 0;
  puStack_220 = puVar22;
  if (pbStack_228 == (byte *)0x0) {
    pbVar25 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_228)(&pbStack_228,&pbStack_268);
    pbVar25 = pbStack_228;
  }
  pbStack_228 = (byte *)0x0;
  pbStack_268 = pbVar25;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0f33f058;
  pbStack_4b8 = (byte *)0x0;
  bStack_4b0 = 0;
  uStack_4af = 0;
  uStack_4aa = 0;
  if (pbVar25 == (byte *)0x0) {
    pbStack_4b8 = (byte *)0x0;
  }
  else {
    (**(code **)pbVar25)(&pbStack_268,&pbStack_4b8);
    pbStack_4b8 = pbStack_268;
  }
  pbStack_268 = (byte *)0x0;
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
  func_0x04aa75f0(plVar23 + 0xe,&uStack_559,&UNK_01254d89);
  *(undefined1 *)(plVar23 + 0x10) = 0;
  plVar26 = plVar23 + 0x11;
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
  plVar23[4] = (long)&UNK_0f33f0a8;
  plVar23[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar23 + 0x2f) = 1;
  plVar23[0x30] = 0;
  plVar23[0x31] = 0;
  if (pbStack_4b8 == (byte *)0x0) {
    pbVar25 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_4b8)(&pbStack_4b8,plVar23 + 0x30);
    pbVar25 = pbStack_4b8;
  }
  pbStack_4b8 = (byte *)0x0;
  plVar23[0x30] = (long)pbVar25;
  puVar1 = (uint *)(plVar23 + 0x12);
  if (plVar26 == (long *)&DAT_0f552078) {
    plVar23[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar23[0x14] = _DAT_0f552090;
        uVar14 = uRam000000000f55208c;
        uVar13 = _DAT_0f552088;
        uVar12 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar23 + 0x94) = uVar12;
        *(undefined4 *)(plVar23 + 0x13) = uVar13;
        *(undefined4 *)((long)plVar23 + 0x9c) = uVar14;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar38 = (_DAT_0f552080 & 1) != 0;
      lVar30 = 0xf552081;
      if (bVar38) {
        lVar30 = _DAT_0f552090;
      }
      uVar34 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar38) {
        uVar34 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      FUN_04885120(puVar1,lVar30,uVar34);
    }
    plVar23[0x11] = _DAT_0f552078;
    plVar23[0x15] = 0;
    if (pbStack_4b8 != (byte *)0x0) {
      (**(code **)(pbStack_4b8 + 8))(&pbStack_4b8);
    }
  }
  plVar27 = plVar23 + 1;
  if (pbStack_268 != (byte *)0x0) {
    (**(code **)(pbStack_268 + 8))(&pbStack_268);
  }
  LOCK();
  *plVar27 = *plVar27 + 1;
  UNLOCK();
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = &UNK_0f33f188;
  puVar22[6] = 0;
  puVar22[7] = 0;
  puVar22[4] = &UNK_0f33f1d8;
  puVar22[0xe] = plVar23 + 4;
  puVar22[0xf] = plVar23;
  LOCK();
  plVar23[1] = plVar23[1] + 1;
  UNLOCK();
  bStack_4b0 = (byte)puVar22;
  uStack_4af = (undefined5)((ulong)puVar22 >> 8);
  uStack_4aa = (undefined2)((ulong)puVar22 >> 0x30);
  pbStack_4b8 = (byte *)(puVar22 + 4);
  puVar24 = (undefined4 *)func_0x0be78480(uVar29,&uStack_3e0);
  plVar35 = *(long **)(puVar24 + 0x24);
  if (plVar35 < *(long **)(puVar24 + 0x26)) {
    plVar35[2] = 0;
    plVar35[3] = 0;
    *plVar35 = 0;
    plVar35[1] = 0;
    plVar35[4] = 0;
    if (plVar35 != plVar26) {
      if ((*puVar1 & 1) == 0) {
        plVar35[3] = plVar23[0x14];
        lVar30 = plVar23[0x13];
        plVar35[1] = *(long *)puVar1;
        plVar35[2] = lVar30;
      }
      else {
        func_0x04885070(plVar35 + 1,plVar23[0x14],plVar23[0x13]);
      }
    }
    *plVar35 = *plVar26;
    plVar35[5] = (long)(puVar22 + 4);
    plVar35[6] = (long)puVar22;
    LOCK();
    puVar22[1] = puVar22[1] + 1;
    UNLOCK();
    plVar35 = plVar35 + 7;
    *(long **)(puVar24 + 0x24) = plVar35;
  }
  else {
    plVar35 = (long *)func_0x0be7a240(puVar24 + 0x22,plVar26,&pbStack_4b8);
  }
  *(long **)(puVar24 + 0x24) = plVar35;
  uVar12 = *puVar24;
  uVar13 = puVar24[1];
  uVar14 = puVar24[2];
  uVar15 = puVar24[3];
  if (*(long *)(puVar24 + 2) != 0) {
    LOCK();
    plVar26 = (long *)(*(long *)(puVar24 + 2) + 8);
    *plVar26 = *plVar26 + 1;
    UNLOCK();
  }
  plVar26 = (long *)plVar23[0xf];
  *(undefined4 *)(plVar23 + 0xe) = uVar12;
  *(undefined4 *)((long)plVar23 + 0x74) = uVar13;
  *(undefined4 *)(plVar23 + 0xf) = uVar14;
  *(undefined4 *)((long)plVar23 + 0x7c) = uVar15;
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar35 = plVar26 + 1;
    lVar30 = *plVar35;
    *plVar35 = *plVar35 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
    }
  }
  *(undefined1 *)(plVar23 + 0x10) = *(undefined1 *)((long)puVar24 + 0xa1);
  plVar26 = (long *)CONCAT26(uStack_4aa,CONCAT51(uStack_4af,bStack_4b0));
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar35 = plVar26 + 1;
    lVar30 = *plVar35;
    *plVar35 = *plVar35 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
    }
  }
  LOCK();
  lVar30 = *plVar27;
  *plVar27 = *plVar27 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
    LOCK();
    lVar30 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
  }
  if (pbStack_228 != (byte *)0x0) {
    (**(code **)(pbStack_228 + 8))(&pbStack_228);
  }
  if ((uStack_4e0 & 1) != 0) {
    func_0x0412a280(uStack_4d0,uStack_4e0 & 0xfffffffffffffffe);
  }
  if ((uStack_4f8 & 1) != 0) {
    func_0x0412a280(uStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
  }
  if ((uStack_510 & 1) != 0) {
    func_0x0412a280(uStack_500,uStack_510 & 0xfffffffffffffffe);
  }
  if ((uStack_528 & 1) != 0) {
    func_0x0412a280(uStack_518,uStack_528 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_540 & 1) != 0) {
    func_0x0412a280(uStack_530,(ulong)pbStack_540 & 0xfffffffffffffffe);
  }
  if ((uStack_3d8 & 1) != 0) {
    func_0x0412a280(pbStack_3c8,CONCAT44(uStack_3d4,uStack_3d8) & 0xfffffffffffffffe);
  }
  pbStack_558 = (byte *)0x0;
  pbStack_550 = (byte *)((ulong)pbStack_550 & 0xffffffffffffff00);
  func_0x0564b850(&pbStack_548,auStack_1c8);
  bStack_4b0 = 0;
  uStack_4af = 0;
  uStack_4aa = 0;
  pbStack_4b8 = &UNK_0f33f240;
  puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar22 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  ppbVar36 = (byte **)(plVar23 + 0x26);
  *(undefined1 *)(puVar22 + 1) = pbStack_550._0_1_;
  *puVar22 = pbStack_558;
  puVar22[2] = pbStack_548;
  puVar22[6] = uStack_528;
  puVar22[4] = plStack_538;
  puVar22[5] = uStack_530;
  plStack_538 = (long *)0x0;
  uStack_530 = 0;
  uStack_528 = 0;
  puVar22[9] = uStack_510;
  puVar22[7] = uStack_520;
  puVar22[8] = uStack_518;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  puVar22[0xc] = uStack_4f8;
  puVar22[10] = uStack_508;
  puVar22[0xb] = uStack_500;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  puVar22[0xf] = uStack_4e0;
  puVar22[0xd] = uStack_4f0;
  puVar22[0xe] = uStack_4e8;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  puVar22[0x12] = uStack_4c8;
  *(undefined4 *)(puVar22 + 0x10) = (undefined4)uStack_4d8;
  *(undefined4 *)((long)puVar22 + 0x84) = uStack_4d8._4_4_;
  *(undefined4 *)(puVar22 + 0x11) = (undefined4)uStack_4d0;
  *(undefined4 *)((long)puVar22 + 0x8c) = uStack_4d0._4_4_;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  bStack_4b0 = (byte)puVar22;
  uStack_4af = (undefined5)((ulong)puVar22 >> 8);
  uStack_4aa = (undefined2)((ulong)puVar22 >> 0x30);
  if (ppbVar36 == &pbStack_4b8) {
    func_0x0564b7b0(puVar22 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar22);
  }
  else {
    pbVar25 = &UNK_0f33f240;
    if ((*ppbVar36 == (byte *)0x0) ||
       ((**(code **)(*ppbVar36 + 8))(ppbVar36), pbVar25 = pbStack_4b8, pbStack_4b8 != (byte *)0x0))
    {
      (**(code **)pbVar25)(&pbStack_4b8,ppbVar36);
      pbVar25 = pbStack_4b8;
      pbStack_4b8 = (byte *)0x0;
      *ppbVar36 = pbVar25;
    }
    else {
      pbStack_4b8 = (byte *)0x0;
      *ppbVar36 = (byte *)0x0;
    }
  }
  if ((uStack_4d8 & 1) != 0) {
    func_0x0412a280(uStack_4c8,uStack_4d8 & 0xfffffffffffffffe);
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
  if (((ulong)plStack_538 & 1) != 0) {
    func_0x0412a280(uStack_528,(ulong)plStack_538 & 0xfffffffffffffffe);
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
  if ((bStack_280 & 1) != 0) {
    func_0x0412a280(uStack_270,
                    CONCAT62(uStack_27e,CONCAT11(uStack_27f,bStack_280)) & 0xfffffffffffffffe);
  }
  if ((bStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,
                    CONCAT53(uStack_2dd,CONCAT12(uStack_2de,CONCAT11(uStack_2df,bStack_2e0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_2c8 & 1) != 0) {
    func_0x0412a280(uStack_2b8,
                    CONCAT53(uStack_2c5,CONCAT12(uStack_2c6,CONCAT11(uStack_2c7,bStack_2c8))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_3f8 & 1) != 0) {
    func_0x0412a280(uStack_3e8,CONCAT71(uStack_3f7,bStack_3f8) & 0xfffffffffffffffe);
  }
  uVar29 = *param_1;
  uStack_4a2 = 0;
  uStack_4a0 = 0;
  uStack_498 = 0;
  bStack_4b0 = 0x1a;
  uStack_4af = 0x72746e6f63;
  uStack_4aa = 0x6c6f;
  uStack_4a8 = 0x5f;
  uStack_4a7 = 0x7367616c66;
  pbStack_4b8 = (byte *)0x86e3afe1b1c6e2ac;
  uStack_260 = 0;
  pbStack_268 = &UNK_0f33f450;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0f33f268;
  pbStack_558 = (byte *)0x0;
  pbStack_550 = (byte *)0x0;
  if (pbStack_268 == (byte *)0x0) {
    pbStack_558 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_268)(&pbStack_268,&pbStack_558);
    pbStack_558 = pbStack_268;
  }
  pbStack_268 = (byte *)0x0;
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
  func_0x04aa75f0(plVar23 + 0xe,&pbStack_228,&UNK_01254d89);
  *(undefined1 *)(plVar23 + 0x10) = 0;
  plVar26 = plVar23 + 0x11;
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
  plVar23[4] = (long)&UNK_0f33f2b8;
  ppbVar36 = (byte **)(plVar23 + 0x2e);
  plVar23[0x2e] = 0;
  plVar23[0x2f] = 0;
  if (ppbVar36 != &pbStack_558) {
    if (pbStack_558 == (byte *)0x0) {
      pbVar25 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_558)(&pbStack_558,ppbVar36);
      pbVar25 = pbStack_558;
    }
    pbStack_558 = (byte *)0x0;
    *ppbVar36 = pbVar25;
  }
  puVar1 = (uint *)(plVar23 + 0x12);
  if (plVar26 != (long *)&DAT_0f551f58) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar23[0x14] = _DAT_0f551f70;
        uVar14 = uRam000000000f551f6c;
        uVar13 = _DAT_0f551f68;
        uVar12 = uRam000000000f551f64;
        *puVar1 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar23 + 0x94) = uVar12;
        *(undefined4 *)(plVar23 + 0x13) = uVar13;
        *(undefined4 *)((long)plVar23 + 0x9c) = uVar14;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar38 = (_DAT_0f551f60 & 1) != 0;
      lVar30 = 0xf551f61;
      if (bVar38) {
        lVar30 = _DAT_0f551f70;
      }
      uVar34 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar38) {
        uVar34 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar1,lVar30,uVar34);
    }
  }
  plVar27 = plVar23 + 1;
  plVar23[0x11] = _DAT_0f551f58;
  plVar23[0x15] = 0;
  if (pbStack_558 != (byte *)0x0) {
    (**(code **)(pbStack_558 + 8))(&pbStack_558);
  }
  LOCK();
  *plVar27 = *plVar27 + 1;
  UNLOCK();
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
  *(undefined **)pbVar25 = &UNK_0f33f3b0;
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
  *(undefined **)(pbVar25 + 0x20) = &UNK_0f33f400;
  *(long **)(pbVar25 + 0x70) = plVar23 + 4;
  *(long **)(pbVar25 + 0x78) = plVar23;
  LOCK();
  plVar23[1] = plVar23[1] + 1;
  UNLOCK();
  pbStack_558 = pbVar25 + 0x20;
  pbStack_550 = pbVar25;
  puVar24 = (undefined4 *)func_0x0be78480(uVar29,&pbStack_4b8);
  plVar35 = *(long **)(puVar24 + 0x24);
  if (plVar35 < *(long **)(puVar24 + 0x26)) {
    plVar35[2] = 0;
    plVar35[3] = 0;
    *plVar35 = 0;
    plVar35[1] = 0;
    plVar35[4] = 0;
    if (plVar35 != plVar26) {
      if ((*puVar1 & 1) == 0) {
        plVar35[3] = plVar23[0x14];
        lVar30 = plVar23[0x13];
        plVar35[1] = *(long *)puVar1;
        plVar35[2] = lVar30;
      }
      else {
        func_0x04885070(plVar35 + 1,plVar23[0x14],plVar23[0x13]);
      }
    }
    *plVar35 = *plVar26;
    plVar35[5] = (long)(pbVar25 + 0x20);
    plVar35[6] = (long)pbVar25;
    LOCK();
    *(long *)(pbVar25 + 8) = *(long *)(pbVar25 + 8) + 1;
    UNLOCK();
    plVar35 = plVar35 + 7;
    *(long **)(puVar24 + 0x24) = plVar35;
  }
  else {
    plVar35 = (long *)func_0x0be7a240(puVar24 + 0x22,plVar26,&pbStack_558);
  }
  *(long **)(puVar24 + 0x24) = plVar35;
  uVar12 = *puVar24;
  uVar13 = puVar24[1];
  uVar14 = puVar24[2];
  uVar15 = puVar24[3];
  if (*(long *)(puVar24 + 2) != 0) {
    LOCK();
    plVar26 = (long *)(*(long *)(puVar24 + 2) + 8);
    *plVar26 = *plVar26 + 1;
    UNLOCK();
  }
  plVar26 = (long *)plVar23[0xf];
  *(undefined4 *)(plVar23 + 0xe) = uVar12;
  *(undefined4 *)((long)plVar23 + 0x74) = uVar13;
  *(undefined4 *)(plVar23 + 0xf) = uVar14;
  *(undefined4 *)((long)plVar23 + 0x7c) = uVar15;
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar35 = plVar26 + 1;
    lVar30 = *plVar35;
    *plVar35 = *plVar35 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      func_0x0412c2d0(plVar26);
    }
  }
  pbVar25 = pbStack_550;
  *(undefined1 *)(plVar23 + 0x10) = *(undefined1 *)((long)puVar24 + 0xa1);
  if (pbStack_550 != (byte *)0x0) {
    LOCK();
    pbVar33 = pbStack_550 + 8;
    lVar30 = *(long *)pbVar33;
    *(long *)pbVar33 = *(long *)pbVar33 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*(long *)pbStack_550 + 0x10))(pbStack_550);
      func_0x0412c2d0(pbVar25);
    }
  }
  LOCK();
  lVar30 = *plVar27;
  *plVar27 = *plVar27 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
    LOCK();
    lVar30 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar30 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
  }
  if (lVar30 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
  }
  if (pbStack_268 != (byte *)0x0) {
    (**(code **)(pbStack_268 + 8))(&pbStack_268);
  }
  if ((bStack_4b0 & 1) != 0) {
    func_0x0412a280(uStack_4a0,
                    CONCAT26(uStack_4aa,CONCAT51(uStack_4af,bStack_4b0)) & 0xfffffffffffffffe);
  }
  puStack_220 = (undefined8 *)0x0;
  bStack_4b0 = 0;
  uStack_4af = 0;
  uStack_4aa = 0;
  pbStack_228 = (byte *)0x0;
  pbStack_4b8 = &UNK_0f33f6a0;
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar26 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  pbStack_558 = pbStack_4b8;
  plVar26[1] = 0;
  plVar26[2] = 0;
  *plVar26 = (long)&UNK_0f33f478;
  pbStack_550 = (byte *)0x0;
  pbStack_4b8 = (byte *)0x0;
  plVar26[4] = (long)&UNK_0f2ccd78;
  plVar26[5] = 0;
  plVar26[6] = 0;
  plVar26[7] = 0;
  plVar26[8] = 0;
  plVar26[9] = 0;
  plVar26[10] = 0;
  plVar26[0xb] = 0;
  plVar26[0xc] = 0;
  *(undefined1 *)(plVar26 + 0xd) = 0;
  func_0x04aa75f0(plVar26 + 0xe,&uStack_3e0,&UNK_01254d89);
  *(undefined1 *)(plVar26 + 0x10) = 0;
  pbVar25 = (byte *)(plVar26 + 0x11);
  plVar26[0x11] = 0;
  plVar26[0x12] = 0;
  plVar26[0x13] = 0;
  plVar26[0x14] = 0;
  plVar26[0x15] = 0;
  plVar26[0x16] = 0;
  plVar26[0x17] = 0xffffffff;
  plVar26[0x26] = 0;
  plVar26[0x27] = 0;
  plVar26[0x18] = 0;
  plVar26[0x19] = 0;
  plVar26[0x1a] = 0;
  plVar26[0x1b] = 0;
  plVar26[0x1c] = 0;
  plVar26[0x1d] = 0;
  plVar26[0x1e] = 0;
  plVar26[0x1f] = 0;
  plVar26[4] = (long)&UNK_0f33f4c8;
  plVar26[0x2e] = 0;
  plVar26[0x2f] = 0;
  plVar26[0x30] = 0;
  plVar26[0x31] = 0;
  plVar26[0x32] = 0;
  plVar26[0x33] = 0;
  plVar26[0x34] = 0;
  *(undefined4 *)(plVar26 + 0x35) = 0x3f800000;
  plVar26[0x36] = 0;
  plVar26[0x37] = 0;
  if (pbStack_558 == (byte *)0x0) {
    pbVar33 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_558)(&pbStack_558,plVar26 + 0x36);
    pbVar33 = pbStack_558;
  }
  pbStack_558 = (byte *)0x0;
  plVar26[0x36] = (long)pbVar33;
  *(undefined1 *)(plVar26 + 0x3e) = 0;
  puStack_320 = (uint *)(plVar26 + 0x12);
  if (pbVar25 != &DAT_0f552138) {
    if ((*puStack_320 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar26[0x14] = _DAT_0f552150;
        uVar14 = uRam000000000f55214c;
        uVar13 = _DAT_0f552148;
        uVar12 = uRam000000000f552144;
        *puStack_320 = _DAT_0f552140;
        *(undefined4 *)((long)plVar26 + 0x94) = uVar12;
        *(undefined4 *)(plVar26 + 0x13) = uVar13;
        *(undefined4 *)((long)plVar26 + 0x9c) = uVar14;
      }
      else {
        func_0x04885070(puStack_320,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar38 = (_DAT_0f552140 & 1) != 0;
      lVar30 = 0xf552141;
      if (bVar38) {
        lVar30 = _DAT_0f552150;
      }
      uVar34 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar38) {
        uVar34 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      FUN_04885120(puStack_320,lVar30,uVar34);
    }
  }
  plVar26[0x11] = _DAT_0f552138;
  plVar26[0x15] = 0;
  if (pbStack_558 != (byte *)0x0) {
    (**(code **)(pbStack_558 + 8))(&pbStack_558);
  }
  pbVar33 = (byte *)(plVar26 + 1);
  if (pbStack_4b8 != (byte *)0x0) {
    (**(code **)(pbStack_4b8 + 8))(&pbStack_4b8);
  }
  LOCK();
  *(long *)pbVar33 = *(long *)pbVar33 + 1;
  UNLOCK();
  pbStack_1d8 = pbVar33;
  plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar27 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar27[1] = 0;
  plVar27[2] = 0;
  *plVar27 = (long)&UNK_0f33f5a8;
  plVar27[6] = 0;
  plVar27[7] = 0;
  plVar27[4] = (long)&UNK_0f33f5f8;
  plVar27[0xe] = (long)(plVar26 + 4);
  plVar27[0xf] = (long)plVar26;
  LOCK();
  plVar26[1] = plVar26[1] + 1;
  UNLOCK();
  plStack_318 = plVar27 + 1;
  puVar8 = (undefined4 *)plVar23[0x1c];
  puVar7 = (undefined4 *)plVar23[0x1b];
  for (puVar24 = puVar7; puVar24 != puVar8; puVar24 = puVar24 + 0x2a) {
    if ((*(long *)(puVar24 + 0x1e) == 0) && (*(long *)(puVar24 + 0x20) == -1)) goto LAB_0be48a23;
  }
  if (puVar8 < (undefined4 *)plVar23[0x1d]) {
    func_0x0bea42d0(puVar8);
    pbVar28 = (byte *)(puVar8 + 0x2a);
    plVar23[0x1c] = (long)pbVar28;
LAB_0be489ba:
    plVar23[0x1c] = (long)pbVar28;
    pbVar33 = *(byte **)(pbVar28 + -0xa8);
    if ((*pbVar33 & 1) == 0) {
      *pbVar33 = 0x26;
      pbVar33 = pbVar33 + 1;
    }
    else {
      pbVar33[8] = 0x13;
      pbVar33[9] = 0;
      pbVar33[10] = 0;
      pbVar33[0xb] = 0;
      pbVar33[0xc] = 0;
      pbVar33[0xd] = 0;
      pbVar33[0xe] = 0;
      pbVar33[0xf] = 0;
      pbVar33 = *(byte **)(pbVar33 + 0x10);
    }
    uVar14 = _UNK_01494d69;
    uVar13 = _UNK_01494d65;
    uVar12 = _UNK_01494d61;
    *(undefined4 *)pbVar33 = _DAT_01494d5d;
    *(undefined4 *)(pbVar33 + 4) = uVar12;
    *(undefined4 *)(pbVar33 + 8) = uVar13;
    *(undefined4 *)(pbVar33 + 0xc) = uVar14;
    pbVar33[0xf] = 0x65;
    pbVar33[0x10] = 0x6e;
    pbVar33[0x11] = 0x74;
    pbVar33[0x12] = 0x3e;
    pbVar33[0x13] = 0;
    lVar30 = plVar23[0x1c];
    puVar24 = (undefined4 *)(lVar30 - 0xa8);
    *(char *)(lVar30 + -7) = (char)plVar23[0x10];
    *(undefined8 *)(lVar30 + -0x30) = 0;
    *(undefined8 *)(lVar30 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar30 + -8) = 0;
LAB_0be48a23:
    plVar35 = plVar27 + 4;
    pbVar33 = *(byte **)(puVar24 + 0x24);
    if (pbVar33 < *(byte **)(puVar24 + 0x26)) {
      pbVar33[0x10] = 0;
      pbVar33[0x11] = 0;
      pbVar33[0x12] = 0;
      pbVar33[0x13] = 0;
      pbVar33[0x14] = 0;
      pbVar33[0x15] = 0;
      pbVar33[0x16] = 0;
      pbVar33[0x17] = 0;
      pbVar33[0x18] = 0;
      pbVar33[0x19] = 0;
      pbVar33[0x1a] = 0;
      pbVar33[0x1b] = 0;
      pbVar33[0x1c] = 0;
      pbVar33[0x1d] = 0;
      pbVar33[0x1e] = 0;
      pbVar33[0x1f] = 0;
      pbVar33[0] = 0;
      pbVar33[1] = 0;
      pbVar33[2] = 0;
      pbVar33[3] = 0;
      pbVar33[4] = 0;
      pbVar33[5] = 0;
      pbVar33[6] = 0;
      pbVar33[7] = 0;
      pbVar33[8] = 0;
      pbVar33[9] = 0;
      pbVar33[10] = 0;
      pbVar33[0xb] = 0;
      pbVar33[0xc] = 0;
      pbVar33[0xd] = 0;
      pbVar33[0xe] = 0;
      pbVar33[0xf] = 0;
      pbVar33[0x20] = 0;
      pbVar33[0x21] = 0;
      pbVar33[0x22] = 0;
      pbVar33[0x23] = 0;
      pbVar33[0x24] = 0;
      pbVar33[0x25] = 0;
      pbVar33[0x26] = 0;
      pbVar33[0x27] = 0;
      if (pbVar33 != pbVar25) {
        if ((*puStack_320 & 1) == 0) {
          *(undefined8 *)(pbVar33 + 0x18) = *(undefined8 *)(puStack_320 + 4);
          uVar29 = *(undefined8 *)(puStack_320 + 2);
          *(undefined8 *)(pbVar33 + 8) = *(undefined8 *)puStack_320;
          *(undefined8 *)(pbVar33 + 0x10) = uVar29;
        }
        else {
          func_0x04885070(pbVar33 + 8,plVar26[0x14],plVar26[0x13]);
        }
      }
      *(undefined8 *)pbVar33 = *(undefined8 *)pbVar25;
      *(long **)(pbVar33 + 0x28) = plVar35;
      *(long **)(pbVar33 + 0x30) = plVar27;
      LOCK();
      plVar27[1] = plVar27[1] + 1;
      UNLOCK();
      pbVar33 = pbVar33 + 0x38;
      *(byte **)(puVar24 + 0x24) = pbVar33;
      goto LAB_0be48d64;
    }
    pbVar33 = pbVar33 + -*(long *)(puVar24 + 0x22);
    uVar34 = ((long)pbVar33 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar34 < 0x492492492492493) {
      lVar30 = (long)*(byte **)(puVar24 + 0x26) - *(long *)(puVar24 + 0x22) >> 3;
      uVar21 = lVar30 * -0x2492492492492492;
      if (uVar34 < uVar21) {
        uVar34 = uVar21;
      }
      plStack_538 = (long *)(puVar24 + 0x22);
      if (0x249249249249248 < (ulong)(lVar30 * 0x6db6db6db6db6db7)) {
        uVar34 = 0x492492492492492;
      }
      plStack_478 = plVar35;
      plStack_1e0 = plStack_538;
      if (uVar34 == 0) {
        pbVar28 = (byte *)0x0;
      }
      else {
        if (0x492492492492492 < uVar34) goto LAB_0be49740;
        pbVar28 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0x38);
        if (pbVar28 == (byte *)0x0) {
          func_0x0eec74c0(uVar34 * 0x38,0);
          pbVar28 = (byte *)0x0;
        }
      }
      pbVar4 = pbVar33 + (long)pbVar28;
      pbStack_540 = pbVar28 + uVar34 * 0x38;
      pbVar5 = pbVar33 + (long)(pbVar28 + 0x10);
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5 = pbVar33 + (long)pbVar28;
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5 = pbVar33 + (long)(pbVar28 + 0x20);
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbStack_548 = pbVar4;
      pbStack_558 = pbVar28;
      pbStack_550 = pbVar4;
      if (pbVar4 != pbVar25) {
        if ((*puStack_320 & 1) == 0) {
          *(undefined8 *)(pbVar33 + (long)(pbVar28 + 0x18)) = *(undefined8 *)(puStack_320 + 4);
          uVar16 = puStack_320[1];
          uVar17 = puStack_320[2];
          uVar18 = puStack_320[3];
          *(uint *)(pbVar33 + (long)(pbVar28 + 8)) = *puStack_320;
          *(uint *)(pbVar33 + (long)(pbVar28 + 0xc)) = uVar16;
          *(uint *)(pbVar33 + (long)(pbVar28 + 0x10)) = uVar17;
          *(uint *)(pbVar33 + (long)(pbVar28 + 0x14)) = uVar18;
        }
        else {
          func_0x04885070(pbVar33 + (long)(pbVar28 + 8),plVar26[0x14],plVar26[0x13]);
        }
      }
      *(undefined8 *)pbVar4 = *(undefined8 *)pbVar25;
      *(long **)(pbVar4 + 0x28) = plStack_478;
      *(long **)(pbVar4 + 0x30) = plVar27;
      LOCK();
      plVar27[1] = plVar27[1] + 1;
      UNLOCK();
      pbStack_548 = pbStack_548 + 0x38;
      puVar22 = *(undefined8 **)(puVar24 + 0x22);
      puVar10 = *(undefined8 **)(puVar24 + 0x24);
      pbVar25 = pbStack_550 + ((long)puVar22 - (long)puVar10);
      pbVar33 = pbVar25;
      puVar31 = puVar22;
      if ((long)puVar22 - (long)puVar10 != 0) {
        do {
          pbVar33[0x10] = 0;
          pbVar33[0x11] = 0;
          pbVar33[0x12] = 0;
          pbVar33[0x13] = 0;
          pbVar33[0x14] = 0;
          pbVar33[0x15] = 0;
          pbVar33[0x16] = 0;
          pbVar33[0x17] = 0;
          pbVar33[0x18] = 0;
          pbVar33[0x19] = 0;
          pbVar33[0x1a] = 0;
          pbVar33[0x1b] = 0;
          pbVar33[0x1c] = 0;
          pbVar33[0x1d] = 0;
          pbVar33[0x1e] = 0;
          pbVar33[0x1f] = 0;
          pbVar33[0] = 0;
          pbVar33[1] = 0;
          pbVar33[2] = 0;
          pbVar33[3] = 0;
          pbVar33[4] = 0;
          pbVar33[5] = 0;
          pbVar33[6] = 0;
          pbVar33[7] = 0;
          pbVar33[8] = 0;
          pbVar33[9] = 0;
          pbVar33[10] = 0;
          pbVar33[0xb] = 0;
          pbVar33[0xc] = 0;
          pbVar33[0xd] = 0;
          pbVar33[0xe] = 0;
          pbVar33[0xf] = 0;
          pbVar33[0x20] = 0;
          pbVar33[0x21] = 0;
          pbVar33[0x22] = 0;
          pbVar33[0x23] = 0;
          pbVar33[0x24] = 0;
          pbVar33[0x25] = 0;
          pbVar33[0x26] = 0;
          pbVar33[0x27] = 0;
          *(undefined8 *)(pbVar33 + 0x18) = puVar31[3];
          uVar29 = puVar31[2];
          *(undefined8 *)(pbVar33 + 8) = puVar31[1];
          *(undefined8 *)(pbVar33 + 0x10) = uVar29;
          *(undefined2 *)(puVar31 + 1) = 0;
          *(undefined8 *)pbVar33 = *puVar31;
          uVar12 = *(undefined4 *)((long)puVar31 + 0x2c);
          uVar13 = *(undefined4 *)(puVar31 + 6);
          uVar14 = *(undefined4 *)((long)puVar31 + 0x34);
          *(undefined4 *)(pbVar33 + 0x28) = *(undefined4 *)(puVar31 + 5);
          *(undefined4 *)(pbVar33 + 0x2c) = uVar12;
          *(undefined4 *)(pbVar33 + 0x30) = uVar13;
          *(undefined4 *)(pbVar33 + 0x34) = uVar14;
          puVar31[5] = 0;
          puVar31[6] = 0;
          puVar31 = puVar31 + 7;
          pbVar33 = pbVar33 + 0x38;
        } while (puVar31 != puVar10);
        do {
          plVar35 = (long *)puVar22[6];
          if (plVar35 == (long *)0x0) {
LAB_0be48ce4:
            bVar6 = *(byte *)(puVar22 + 1);
          }
          else {
            LOCK();
            plVar2 = plVar35 + 1;
            lVar30 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar30 != 0) goto LAB_0be48ce4;
            (**(code **)(*plVar35 + 0x10))(plVar35);
            func_0x0412c2d0(plVar35);
            bVar6 = *(byte *)(puVar22 + 1);
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar22[3],puVar22[1] & 0xfffffffffffffffe);
          }
          puVar22 = puVar22 + 7;
        } while (puVar22 != puVar10);
        puVar22 = (undefined8 *)*plStack_1e0;
      }
      pbVar33 = pbStack_548;
      *(byte **)(puVar24 + 0x22) = pbVar25;
      *(byte **)(puVar24 + 0x24) = pbStack_548;
      lVar30 = *(long *)(puVar24 + 0x26);
      *(byte **)(puVar24 + 0x26) = pbStack_540;
      if (puVar22 != (undefined8 *)0x0) {
        func_0x0412a280(puVar22,lVar30 - (long)puVar22);
      }
LAB_0be48d64:
      uVar29 = uStack_1d0;
      *(byte **)(puVar24 + 0x24) = pbVar33;
      uVar12 = *puVar24;
      uVar13 = puVar24[1];
      uVar14 = puVar24[2];
      uVar15 = puVar24[3];
      if (*(long *)(puVar24 + 2) != 0) {
        LOCK();
        plVar35 = (long *)(*(long *)(puVar24 + 2) + 8);
        *plVar35 = *plVar35 + 1;
        UNLOCK();
      }
      plVar35 = (long *)plVar26[0xf];
      *(undefined4 *)(plVar26 + 0xe) = uVar12;
      *(undefined4 *)((long)plVar26 + 0x74) = uVar13;
      *(undefined4 *)(plVar26 + 0xf) = uVar14;
      *(undefined4 *)((long)plVar26 + 0x7c) = uVar15;
      if (plVar35 != (long *)0x0) {
        LOCK();
        plVar2 = plVar35 + 1;
        lVar30 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar30 == 0) {
          (**(code **)(*plVar35 + 0x10))(plVar35);
          func_0x0412c2d0(plVar35);
        }
      }
      *(undefined1 *)(plVar26 + 0x10) = *(undefined1 *)((long)puVar24 + 0xa1);
      LOCK();
      lVar30 = *plStack_318;
      *plStack_318 = *plStack_318 + -1;
      UNLOCK();
      if (lVar30 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        func_0x0412c2d0(plVar27);
      }
      pbVar25 = pbStack_1d8;
      LOCK();
      lVar30 = *(long *)pbStack_1d8;
      *(long *)pbStack_1d8 = *(long *)pbStack_1d8 + -1;
      UNLOCK();
      if (lVar30 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        func_0x0412c2d0(plVar26);
        LOCK();
        lVar30 = *(long *)pbVar25;
        *(long *)pbVar25 = *(long *)pbVar25 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar30 = *(long *)pbStack_1d8;
        *(long *)pbStack_1d8 = *(long *)pbStack_1d8 + -1;
        UNLOCK();
      }
      if (lVar30 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        func_0x0412c2d0(plVar26);
      }
      if (pbStack_228 != (byte *)0x0) {
        (**(code **)(pbStack_228 + 8))(&pbStack_228);
      }
      ppbStack_570 = (byte **)(plVar23 + 0x26);
      pbStack_550 = (byte *)0x0;
      pbStack_558 = &UNK_0f33f6b8;
      if (ppbStack_570 != &pbStack_558) {
        if ((*ppbStack_570 == (byte *)0x0) ||
           ((**(code **)(*ppbStack_570 + 8))(ppbStack_570), pbStack_558 != (byte *)0x0)) {
          (**(code **)pbStack_558)(&pbStack_558,ppbStack_570);
          pbVar25 = pbStack_558;
        }
        else {
          pbVar25 = (byte *)0x0;
        }
        *ppbStack_570 = pbVar25;
      }
      if ((uStack_410 & 1) != 0) {
        func_0x0412a280(puStack_400,uStack_410 & 0xfffffffffffffffe);
      }
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_338);
      if ((uStack_338 & 1) != 0) {
        func_0x0412a280(uStack_328,uStack_338 & 0xfffffffffffffffe);
      }
      bStack_428 = 0x20;
      uStack_427 = _DAT_0145f6ec;
      uStack_423 = _UNK_0145f6f0;
      uStack_41f = _UNK_0145f6f4;
      uStack_41b = _UNK_0145f6f8;
      uStack_417 = 0;
      puStack_430 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puStack_430 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar19 = _UNK_01376cd2;
      uStack_440 = 0x29;
      uStack_438 = 0x24;
      puStack_430[2] = _DAT_01376cca;
      puStack_430[3] = uVar19;
      uVar19 = _UNK_01376cc2;
      *puStack_430 = _DAT_01376cba;
      puStack_430[1] = uVar19;
      *(undefined4 *)(puStack_430 + 4) = 0x5245494c;
      *(undefined1 *)((long)puStack_430 + 0x24) = 0;
      bStack_2f8 = 2;
      uStack_2f7 = 0x30;
      uStack_2f6 = 0;
      bStack_298 = 0;
      uStack_297 = 0;
      func_0x05611160(_DAT_011983f0,0,auStack_b8,uVar29,&bStack_428,&uStack_440,&bStack_2f8,
                      &bStack_298);
      plVar23 = (long *)func_0x0be4a040(*param_1,8,auStack_b8);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_368 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_358,&uStack_378);
      if ((uStack_378 & 1) != 0) {
        func_0x0412a280(uStack_368,uStack_378 & 0xfffffffffffffffe);
      }
      if ((uStack_358 & 1) != 0) {
        func_0x0412a280(uStack_348,uStack_358 & 0xfffffffffffffffe);
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
      if ((bStack_298 & 1) != 0) {
        func_0x0412a280(uStack_288,
                        CONCAT62(uStack_296,CONCAT11(uStack_297,bStack_298)) & 0xfffffffffffffffe);
      }
      if ((bStack_2f8 & 1) != 0) {
        func_0x0412a280(uStack_2e8,
                        CONCAT53(uStack_2f5,CONCAT12(uStack_2f6,CONCAT11(uStack_2f7,bStack_2f8))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_440 & 1) != 0) {
        func_0x0412a280(puStack_430,uStack_440 & 0xfffffffffffffffe);
      }
      if ((bStack_428 & 1) != 0) {
        uStack_41b._3_1_ = (undefined1)((uint)uStack_41b >> 0x18);
        uVar20 = CONCAT11(uStack_417,uStack_41b._3_1_);
        func_0x0412a280(CONCAT62(uStack_416,uVar20),
                        CONCAT35((undefined3)uStack_423,CONCAT41(uStack_427,bStack_428)) &
                        0xfffffffffffffffe);
      }
      bStack_470 = 0x16;
      uStack_46f = 0x61725f6c616f67;
      uStack_468 = 0x73756964;
      uStack_464 = 0;
      puStack_448 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_448 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar19 = _UNK_0142cb3e;
      uStack_458 = 0x21;
      uStack_450 = 0x1f;
      *(ulong *)((long)puStack_448 + 0xf) = CONCAT71(_UNK_0142cb37,DAT_0142cb36);
      *(undefined8 *)((long)puStack_448 + 0x17) = uVar19;
      uVar19 = CONCAT17(DAT_0142cb36,_UNK_0142cb2f);
      *puStack_448 = _DAT_0142cb27;
      puStack_448[1] = uVar19;
      *(undefined1 *)((long)puStack_448 + 0x1f) = 0;
      bStack_310 = 2;
      uStack_30f = 0x30;
      uStack_30e = 0;
      bStack_2b0 = 0;
      uStack_2af = 0;
      func_0x05611160(_DAT_0119858c,0,auStack_140,uVar29,&bStack_470,&uStack_458,&bStack_310,
                      &bStack_2b0);
      plVar23 = (long *)func_0x0be4a040(*param_1,0xc,auStack_140);
      uStack_398 = 0;
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_398,&uStack_3b8);
      if ((uStack_3b8 & 1) != 0) {
        func_0x0412a280(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
      }
      if ((uStack_398 & 1) != 0) {
        func_0x0412a280(uStack_388,uStack_398 & 0xfffffffffffffffe);
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
      if ((bStack_2b0 & 1) != 0) {
        func_0x0412a280(uStack_2a0,
                        CONCAT62(uStack_2ae,CONCAT11(uStack_2af,bStack_2b0)) & 0xfffffffffffffffe);
      }
      if ((bStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,
                        CONCAT53(uStack_30d,CONCAT12(uStack_30e,CONCAT11(uStack_30f,bStack_310))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_458 & 1) != 0) {
        func_0x0412a280(puStack_448,uStack_458 & 0xfffffffffffffffe);
      }
      if ((bStack_470 & 1) != 0) {
        func_0x0412a280(uStack_460,CONCAT71(uStack_46f,bStack_470) & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    plVar35 = (long *)((long)puVar8 - (long)puVar7);
    uVar34 = ((long)plVar35 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar34) goto LAB_0be4974a;
    lVar30 = plVar23[0x1d] - (long)puVar7 >> 3;
    uVar21 = lVar30 * -0x6186186186186186;
    if (uVar34 < uVar21) {
      uVar34 = uVar21;
    }
    plVar2 = plVar23 + 0x1b;
    if (0xc30c30c30c30c2 < (ulong)(lVar30 * -0x30c30c30c30c30c3)) {
      uVar34 = 0x186186186186186;
    }
    plStack_538 = plVar2;
    if (uVar34 == 0) {
      pbVar33 = (byte *)0x0;
LAB_0be487d8:
      pbStack_550 = (byte *)((long)plVar35 + (long)pbVar33);
      pbStack_540 = pbVar33 + uVar34 * 0xa8;
      pbStack_558 = pbVar33;
      pbStack_548 = pbStack_550;
      plStack_478 = plVar2;
      func_0x0bea42d0(pbStack_550);
      pbVar28 = pbStack_548 + 0xa8;
      lVar30 = plVar23[0x1b];
      lVar9 = plVar23[0x1c];
      pbVar33 = pbStack_550 + (lVar30 - lVar9);
      if (lVar30 != lVar9) {
        lVar37 = 0;
        do {
          uVar29 = ((undefined8 *)(lVar30 + lVar37))[1];
          *(undefined8 *)(pbVar33 + lVar37) = *(undefined8 *)(lVar30 + lVar37);
          *(undefined8 *)(pbVar33 + lVar37 + 8) = uVar29;
          *(undefined8 *)(lVar30 + lVar37) = 0;
          ((undefined8 *)(lVar30 + lVar37))[1] = 0;
          pbVar4 = pbVar33 + lVar37 + 0x20;
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          pbVar4[4] = 0;
          pbVar4[5] = 0;
          pbVar4[6] = 0;
          pbVar4[7] = 0;
          pbVar4[8] = 0;
          pbVar4[9] = 0;
          pbVar4[10] = 0;
          pbVar4[0xb] = 0;
          pbVar4[0xc] = 0;
          pbVar4[0xd] = 0;
          pbVar4[0xe] = 0;
          pbVar4[0xf] = 0;
          pbVar4 = pbVar33 + lVar37 + 0x10;
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          pbVar4[4] = 0;
          pbVar4[5] = 0;
          pbVar4[6] = 0;
          pbVar4[7] = 0;
          pbVar4[8] = 0;
          pbVar4[9] = 0;
          pbVar4[10] = 0;
          pbVar4[0xb] = 0;
          pbVar4[0xc] = 0;
          pbVar4[0xd] = 0;
          pbVar4[0xe] = 0;
          pbVar4[0xf] = 0;
          pbVar4 = pbVar33 + lVar37 + 0x30;
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          pbVar4[4] = 0;
          pbVar4[5] = 0;
          pbVar4[6] = 0;
          pbVar4[7] = 0;
          *(undefined8 *)(pbVar33 + lVar37 + 0x28) = *(undefined8 *)(lVar30 + 0x28 + lVar37);
          puVar24 = (undefined4 *)(lVar30 + 0x18 + lVar37);
          uVar12 = puVar24[1];
          uVar13 = puVar24[2];
          uVar14 = puVar24[3];
          pbVar4 = pbVar33 + lVar37 + 0x18;
          *(undefined4 *)pbVar4 = *puVar24;
          *(undefined4 *)(pbVar4 + 4) = uVar12;
          *(undefined4 *)(pbVar4 + 8) = uVar13;
          *(undefined4 *)(pbVar4 + 0xc) = uVar14;
          *(undefined2 *)(lVar30 + 0x18 + lVar37) = 0;
          *(undefined8 *)(pbVar33 + lVar37 + 0x10) = *(undefined8 *)(lVar30 + 0x10 + lVar37);
          FUN_04167a20(pbVar33 + lVar37 + 0x38,lVar30 + lVar37 + 0x38);
          puVar22 = (undefined8 *)(lVar30 + 0x40 + lVar37);
          uVar29 = puVar22[1];
          *(undefined8 *)(pbVar33 + lVar37 + 0x40) = *puVar22;
          *(undefined8 *)(pbVar33 + lVar37 + 0x40 + 8) = uVar29;
          puVar22 = (undefined8 *)(lVar30 + 0x50 + lVar37);
          uVar29 = puVar22[1];
          *(undefined8 *)(pbVar33 + lVar37 + 0x50) = *puVar22;
          *(undefined8 *)(pbVar33 + lVar37 + 0x50 + 8) = uVar29;
          puVar22 = (undefined8 *)(lVar30 + 0x60 + lVar37);
          uVar29 = puVar22[1];
          *(undefined8 *)(pbVar33 + lVar37 + 0x60) = *puVar22;
          *(undefined8 *)(pbVar33 + lVar37 + 0x60 + 8) = uVar29;
          puVar22 = (undefined8 *)(lVar30 + 0x60 + lVar37);
          *puVar22 = 0;
          puVar22[1] = 0;
          *(undefined8 *)(pbVar33 + lVar37 + 0x70) = *(undefined8 *)(lVar30 + 0x70 + lVar37);
          puVar22 = (undefined8 *)(lVar30 + 0x78 + lVar37);
          uVar29 = puVar22[1];
          *(undefined8 *)(pbVar33 + lVar37 + 0x78) = *puVar22;
          *(undefined8 *)(pbVar33 + lVar37 + 0x78 + 8) = uVar29;
          pbVar4 = pbVar33 + lVar37 + 0x88;
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          pbVar4[4] = 0;
          pbVar4[5] = 0;
          pbVar4[6] = 0;
          pbVar4[7] = 0;
          pbVar4[8] = 0;
          pbVar4[9] = 0;
          pbVar4[10] = 0;
          pbVar4[0xb] = 0;
          pbVar4[0xc] = 0;
          pbVar4[0xd] = 0;
          pbVar4[0xe] = 0;
          pbVar4[0xf] = 0;
          pbVar4 = pbVar33 + lVar37 + 0x98;
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          pbVar4[4] = 0;
          pbVar4[5] = 0;
          pbVar4[6] = 0;
          pbVar4[7] = 0;
          puVar24 = (undefined4 *)(lVar30 + 0x88 + lVar37);
          uVar12 = puVar24[1];
          uVar13 = puVar24[2];
          uVar14 = puVar24[3];
          pbVar4 = pbVar33 + lVar37 + 0x88;
          *(undefined4 *)pbVar4 = *puVar24;
          *(undefined4 *)(pbVar4 + 4) = uVar12;
          *(undefined4 *)(pbVar4 + 8) = uVar13;
          *(undefined4 *)(pbVar4 + 0xc) = uVar14;
          *(undefined8 *)(pbVar33 + lVar37 + 0x98) = *(undefined8 *)(lVar30 + 0x98 + lVar37);
          puVar22 = (undefined8 *)(lVar30 + 0x88 + lVar37);
          *puVar22 = 0;
          puVar22[1] = 0;
          *(undefined8 *)(lVar30 + 0x98 + lVar37) = 0;
          *(undefined2 *)(pbVar33 + lVar37 + 0xa0) = *(undefined2 *)(lVar30 + 0xa0 + lVar37);
          lVar3 = lVar30 + lVar37;
          lVar37 = lVar37 + 0xa8;
        } while (lVar3 + 0xa8 != lVar9);
        do {
          func_0x0bea0bd0(lVar30);
          lVar30 = lVar30 + 0xa8;
        } while (lVar30 != lVar9);
        lVar30 = *plStack_478;
      }
      plVar23[0x1b] = (long)pbVar33;
      plVar23[0x1c] = (long)pbVar28;
      lVar9 = plVar23[0x1d];
      plVar23[0x1d] = (long)pbStack_540;
      if (lVar30 != 0) {
        func_0x0412a280(lVar30,lVar9 - lVar30);
      }
      goto LAB_0be489ba;
    }
    if (uVar34 < 0x186186186186187) {
      pbVar33 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0xa8);
      if (pbVar33 == (byte *)0x0) {
        func_0x0eec74c0(uVar34 * 0xa8,0);
        pbVar33 = (byte *)0x0;
      }
      goto LAB_0be487d8;
    }
LAB_0be49740:
    func_0x04882eb0();
  }
  func_0x0bea4510();
LAB_0be4974a:
  uVar29 = func_0x0bea4440();
  if ((*pbVar33 & 1) != 0) {
    func_0x0412a280(plVar35[3],plVar35[1] & 0xfffffffffffffffe);
  }
  func_0x0bea4450(&pbStack_558);
  LOCK();
  lVar30 = *plStack_318;
  *plStack_318 = *plStack_318 + -1;
  UNLOCK();
  if (lVar30 == 0) {
    (**(code **)(*plVar27 + 0x10))(plVar27);
    func_0x0412c2d0(plVar27);
  }
  func_0x0bea20e0(plVar26);
  func_0x0bea2110(plVar26);
  if (pbStack_228 != (byte *)0x0) {
    (**(code **)(pbStack_228 + 8))(&pbStack_228);
  }
  if ((uStack_410 & 1) != 0) {
    func_0x0412a280(puStack_400,uStack_410 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar29);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}



/* ---- referenced strings ----
 * 0x1376cba  Definition::DEFAULT_SPEED_MULTIPLIER
 * 0x1376cca  ULT_SPEED_MULTIPLIER
 * 0x1413028  minecraft:behavior.investigate_suspicious_location
 * 0x1413038  or.investigate_suspicious_location
 * 0x1413048  uspicious_location
 * 0x142cb27  Definition::DEFAULT_GOAL_RADIUS
 * 0x142cb36  AULT_GOAL_RADIUS
 * 0x145f6ec  speed_multiplier
 * 0x1494d5d  <any array element>
 */
