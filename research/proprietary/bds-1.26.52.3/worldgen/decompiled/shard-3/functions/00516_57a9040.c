/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x58a9040 (ELF vaddr 0x57a9040)
 * Label: caller-of-callee
 * Body:  [[058a9040, 058ac9a1]]
 * Ghidra: FUN_058a9040
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_058a9040(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  long **pplVar21;
  ulong uVar22;
  bool bVar23;
  long *plStack_4e8;
  uint uStack_4e0;
  undefined2 uStack_4dc;
  undefined2 uStack_4da;
  undefined1 uStack_4d8;
  undefined5 uStack_4d7;
  undefined2 uStack_4d2;
  ulong uStack_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *plStack_448;
  undefined1 uStack_439;
  long *plStack_438;
  byte bStack_430;
  undefined4 uStack_42f;
  undefined2 uStack_42b;
  undefined1 uStack_429;
  undefined1 uStack_428;
  undefined6 uStack_427;
  undefined1 uStack_421;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long *plStack_3f8;
  long *plStack_3f0;
  uint *puStack_3b0;
  byte bStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined1 uStack_39f;
  undefined6 uStack_39e;
  undefined8 uStack_398;
  long *plStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  byte *pbStack_370;
  undefined8 uStack_368;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  byte *pbStack_330;
  undefined8 uStack_328;
  long *plStack_318;
  long *plStack_310;
  byte bStack_308;
  undefined7 uStack_307;
  undefined8 uStack_2f8;
  byte bStack_2f0;
  undefined7 uStack_2ef;
  undefined8 uStack_2e0;
  byte bStack_2d8;
  undefined7 uStack_2d7;
  undefined8 uStack_2c8;
  byte bStack_2c0;
  undefined7 uStack_2bf;
  undefined8 uStack_2b0;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  byte *pbStack_298;
  byte bStack_290;
  undefined6 uStack_28f;
  undefined1 uStack_289;
  undefined1 uStack_288;
  undefined6 uStack_287;
  undefined1 uStack_281;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined4 *puStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_148;
  undefined8 uStack_140;
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
  undefined1 uStack_fe;
  undefined5 uStack_fd;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined1 uStack_cf;
  undefined6 uStack_ce;
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
  
  puStack_250 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_250 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar2 = _UNK_013acae6;
  uStack_260 = 0x21;
  uStack_258 = 0x1c;
  *(ulong *)(puStack_250 + 3) = CONCAT44(_UNK_013acae2,_DAT_013acade);
  *(undefined8 *)(puStack_250 + 5) = uVar2;
  uVar5 = _DAT_013acade;
  uVar4 = _UNK_013acada;
  uVar3 = _UNK_013acad6;
  *puStack_250 = _DAT_013acad2;
  puStack_250[1] = uVar3;
  puStack_250[2] = uVar4;
  puStack_250[3] = uVar5;
  *(undefined1 *)(puStack_250 + 7) = 0;
  bStack_3a8 = 0x10;
  uStack_3a7 = 0x7469726f697270;
  uStack_3a0 = 0x79;
  uStack_39f = 0;
  bStack_100 = 2;
  uStack_ff = 0x30;
  uStack_fe = 0;
  bStack_118 = 2;
  uStack_117 = 0x30;
  uStack_116 = 0;
  bStack_d0 = 0;
  uStack_cf = 0;
  func_0x0564aad0(&plStack_318,&uStack_260,&bStack_3a8,0,&bStack_100,0,&bStack_118,&bStack_d0);
  uVar2 = *param_1;
  uStack_348 = 0;
  plStack_448 = (long *)param_2;
  if ((uStack_2a8 & 1) == 0) {
    pbStack_330 = pbStack_298;
    uStack_340 = CONCAT44(uStack_2a4,uStack_2a8);
    uStack_338 = CONCAT44(uStack_29c,uStack_2a0);
  }
  else {
    func_0x0412e5e0(&uStack_340,pbStack_298,CONCAT44(uStack_29c,uStack_2a0));
  }
  uStack_328 = 0;
  if ((uStack_340 & 1) == 0) {
    if ((byte)uStack_340 >> 1 != 0) goto LAB_058a91df;
LAB_058a9235:
    uStack_348 = 0;
  }
  else {
    if (uStack_338 == 0) goto LAB_058a9235;
LAB_058a91df:
    if ((uStack_340 & 1) == 0) {
      pbVar14 = (byte *)((long)&uStack_340 + 1);
      if (pbVar14 != (byte *)0x0) goto LAB_058a91ff;
      goto LAB_058a9235;
    }
    pbVar14 = pbStack_330;
    if (pbStack_330 == (byte *)0x0) goto LAB_058a9235;
LAB_058a91ff:
    if (*pbVar14 == 0) goto LAB_058a9235;
    uVar22 = strlen(pbVar14);
    uStack_348 = 0xcbf29ce484222325;
    if (uVar22 != 0) {
      uVar15 = (ulong)((uint)uVar22 & 7);
      if (uVar22 < 8) {
        uStack_348 = 0xcbf29ce484222325;
      }
      else {
        uVar22 = uVar22 & 0xfffffffffffffff8;
        uStack_348 = 0xcbf29ce484222325;
        do {
          uStack_348 = (((((((uStack_348 * 0x100000001b3 ^ (ulong)*pbVar14) * 0x100000001b3 ^
                            (ulong)pbVar14[1]) * 0x100000001b3 ^ (ulong)pbVar14[2]) * 0x100000001b3
                          ^ (ulong)pbVar14[3]) * 0x100000001b3 ^ (ulong)pbVar14[4]) * 0x100000001b3
                        ^ (ulong)pbVar14[5]) * 0x100000001b3 ^ (ulong)pbVar14[6]) * 0x100000001b3 ^
                       (ulong)pbVar14[7];
          pbVar14 = pbVar14 + 8;
          uVar22 = uVar22 - 8;
        } while (uVar22 != 0);
      }
      if (uVar15 != 0) {
        uVar22 = 0;
        do {
          uStack_348 = uStack_348 * 0x100000001b3 ^ (ulong)pbVar14[uVar22];
          uVar22 = uVar22 + 1;
        } while (uVar15 != uVar22);
      }
    }
  }
  uVar22 = 0xcbf29ce484222325;
  plStack_4e8 = (long *)0x0;
  func_0x0564b850(&uStack_4e0,&plStack_318);
  uStack_380 = (undefined8 *)0x0;
  plStack_388 = (long *)&UNK_0eff21c8;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x90,0);
  }
  *puVar7 = plStack_4e8;
  puVar7[1] = CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
  puVar7[5] = uStack_4c0;
  puVar7[3] = uStack_4d0;
  puVar7[4] = uStack_4c8;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  puVar7[8] = uStack_4a8;
  puVar7[6] = uStack_4b8;
  puVar7[7] = uStack_4b0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  puVar7[0xb] = uStack_490;
  puVar7[9] = uStack_4a0;
  puVar7[10] = uStack_498;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_490 = 0;
  puVar7[0xe] = uStack_478;
  puVar7[0xc] = uStack_488;
  puVar7[0xd] = uStack_480;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  puVar7[0x11] = uStack_460;
  *(undefined4 *)(puVar7 + 0xf) = (undefined4)uStack_470;
  *(undefined4 *)((long)puVar7 + 0x7c) = uStack_470._4_4_;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_468;
  *(undefined4 *)((long)puVar7 + 0x84) = uStack_468._4_4_;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  plStack_438 = (long *)0x0;
  bStack_430 = 0;
  uStack_42f = 0;
  uStack_42b = 0;
  uStack_429 = 0;
  uStack_380 = puVar7;
  if (plStack_388 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_388)(&plStack_388,&plStack_438);
    plVar12 = plStack_388;
  }
  plStack_388 = (long *)0x0;
  plStack_438 = plVar12;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0eff1ff8;
  plStack_3f8 = (long *)0x0;
  plStack_3f0 = (long *)0x0;
  if (plVar12 == (long *)0x0) {
    plStack_3f8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar12)(&plStack_438,&plStack_3f8);
    plStack_3f8 = plStack_438;
  }
  plStack_438 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_439,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar12 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0eff2048;
  plVar8[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar8 + 0x2f) = 1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  if (plStack_3f8 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_3f8)(&plStack_3f8,plVar8 + 0x30);
    plVar13 = plStack_3f8;
  }
  plStack_3f8 = (long *)0x0;
  plVar8[0x30] = (long)plVar13;
  puVar1 = (uint *)(plVar8 + 0x12);
  if (plVar12 == (long *)&DAT_0f552078) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552090;
        uVar5 = uRam000000000f55208c;
        uVar4 = _DAT_0f552088;
        uVar3 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar23 = (_DAT_0f552080 & 1) != 0;
      lVar11 = 0xf552081;
      if (bVar23) {
        lVar11 = _DAT_0f552090;
      }
      uVar15 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar23) {
        uVar15 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar1,lVar11,uVar15);
    }
    plVar8[0x11] = _DAT_0f552078;
    plVar8[0x15] = 0;
    if (plStack_3f8 != (long *)0x0) {
      (*(code *)plStack_3f8[1])(&plStack_3f8);
    }
  }
  plVar13 = plVar8 + 1;
  if (plStack_438 != (long *)0x0) {
    (*(code *)plStack_438[1])(&plStack_438);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0eff2128;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[4] = (long)&UNK_0eff2178;
  plVar9[0xe] = (long)(plVar8 + 4);
  plVar9[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_3f8 = plVar9 + 4;
  plStack_3f0 = plVar9;
  puVar10 = (undefined4 *)func_0x058ef740(uVar2,&uStack_348);
  plVar17 = *(long **)(puVar10 + 0x24);
  if (plVar17 < *(long **)(puVar10 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar12) {
      if ((*puVar1 & 1) == 0) {
        plVar17[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        plVar17[1] = *(long *)puVar1;
        plVar17[2] = lVar11;
      }
      else {
        FUN_04885070(plVar17 + 1,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar17 = *plVar12;
    plVar17[5] = (long)(plVar9 + 4);
    plVar17[6] = (long)plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar10 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x058f1530(puVar10 + 0x22,plVar12,&plStack_3f8);
  }
  *(long **)(puVar10 + 0x24) = plVar17;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar9 = plVar12 + 1;
    lVar11 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_3f0;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  if (plStack_3f0 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_3f0 + 1;
    lVar11 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
      func_0x0412c2d0(plVar12);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (plStack_388 != (long *)0x0) {
    (*(code *)plStack_388[1])(&plStack_388);
  }
  if ((uStack_470 & 1) != 0) {
    func_0x0412a280(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  if ((uStack_488 & 1) != 0) {
    func_0x0412a280(uStack_478,uStack_488 & 0xfffffffffffffffe);
  }
  if ((uStack_4a0 & 1) != 0) {
    func_0x0412a280(uStack_490,uStack_4a0 & 0xfffffffffffffffe);
  }
  if ((uStack_4b8 & 1) != 0) {
    func_0x0412a280(uStack_4a8,uStack_4b8 & 0xfffffffffffffffe);
  }
  if ((uStack_4d0 & 1) != 0) {
    func_0x0412a280(uStack_4c0,uStack_4d0 & 0xfffffffffffffffe);
  }
  if ((uStack_340 & 1) != 0) {
    func_0x0412a280(pbStack_330,uStack_340 & 0xfffffffffffffffe);
  }
  plStack_4e8 = (long *)0x0;
  uStack_4e0 = uStack_4e0 & 0xffffff00;
  func_0x0564b850(&uStack_4d8,&plStack_318);
  plStack_3f0 = (long *)0x0;
  plStack_3f8 = (long *)&UNK_0eff21e0;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x98,0);
  }
  pplVar21 = (long **)(plVar8 + 0x26);
  *(undefined1 *)(puVar7 + 1) = (undefined1)uStack_4e0;
  *puVar7 = plStack_4e8;
  puVar7[2] = CONCAT26(uStack_4d2,CONCAT51(uStack_4d7,uStack_4d8));
  puVar7[6] = uStack_4b8;
  puVar7[4] = uStack_4c8;
  puVar7[5] = uStack_4c0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  puVar7[9] = uStack_4a0;
  puVar7[7] = uStack_4b0;
  puVar7[8] = uStack_4a8;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  puVar7[0xc] = uStack_488;
  puVar7[10] = uStack_498;
  puVar7[0xb] = uStack_490;
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  puVar7[0xf] = uStack_470;
  puVar7[0xd] = uStack_480;
  puVar7[0xe] = uStack_478;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  puVar7[0x12] = uStack_458;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_468;
  *(undefined4 *)((long)puVar7 + 0x84) = uStack_468._4_4_;
  *(undefined4 *)(puVar7 + 0x11) = (undefined4)uStack_460;
  *(undefined4 *)((long)puVar7 + 0x8c) = uStack_460._4_4_;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  plStack_3f0 = puVar7;
  if (pplVar21 == &plStack_3f8) {
    func_0x0564b7b0(puVar7 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar7);
  }
  else {
    plVar12 = (long *)&UNK_0eff21e0;
    if ((*pplVar21 == (long *)0x0) ||
       ((*(code *)(*pplVar21)[1])(pplVar21), plVar12 = plStack_3f8, plStack_3f8 != (long *)0x0)) {
      (*(code *)*plVar12)(&plStack_3f8,pplVar21);
      plVar12 = plStack_3f8;
      plStack_3f8 = (long *)0x0;
      *pplVar21 = plVar12;
    }
    else {
      plStack_3f8 = (long *)0x0;
      *pplVar21 = (long *)0x0;
    }
  }
  if ((uStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,uStack_468 & 0xfffffffffffffffe);
  }
  if ((uStack_480 & 1) != 0) {
    func_0x0412a280(uStack_470,uStack_480 & 0xfffffffffffffffe);
  }
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  if ((uStack_4b0 & 1) != 0) {
    func_0x0412a280(uStack_4a0,uStack_4b0 & 0xfffffffffffffffe);
  }
  if ((uStack_4c8 & 1) != 0) {
    func_0x0412a280(uStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
  }
  if ((uStack_2a8 & 1) != 0) {
    func_0x0412a280(pbStack_298,CONCAT44(uStack_2a4,uStack_2a8) & 0xfffffffffffffffe);
  }
  if ((bStack_2c0 & 1) != 0) {
    func_0x0412a280(uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0) & 0xfffffffffffffffe);
  }
  if ((bStack_2d8 & 1) != 0) {
    func_0x0412a280(uStack_2c8,CONCAT71(uStack_2d7,bStack_2d8) & 0xfffffffffffffffe);
  }
  if ((bStack_2f0 & 1) != 0) {
    func_0x0412a280(uStack_2e0,CONCAT71(uStack_2ef,bStack_2f0) & 0xfffffffffffffffe);
  }
  if ((bStack_308 & 1) != 0) {
    func_0x0412a280(uStack_2f8,CONCAT71(uStack_307,bStack_308) & 0xfffffffffffffffe);
  }
  if ((bStack_d0 & 1) != 0) {
    func_0x0412a280(uStack_c0,CONCAT62(uStack_ce,CONCAT11(uStack_cf,bStack_d0)) & 0xfffffffffffffffe
                   );
  }
  if ((bStack_118 & 1) != 0) {
    func_0x0412a280(uStack_108,
                    CONCAT53(uStack_115,CONCAT12(uStack_116,CONCAT11(uStack_117,bStack_118))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,
                    CONCAT53(uStack_fd,CONCAT12(uStack_fe,CONCAT11(uStack_ff,bStack_100))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_3a8 & 1) != 0) {
    func_0x0412a280(uStack_398,CONCAT71(uStack_3a7,bStack_3a8) & 0xfffffffffffffffe);
  }
  uStack_4d2 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4e0 = 0x6e6f631a;
  uStack_4dc = 0x7274;
  uStack_4da = 0x6c6f;
  uStack_4d8 = 0x5f;
  uStack_4d7 = 0x7367616c66;
  plStack_4e8 = (long *)0x86e3afe1b1c6e2ac;
  bStack_430 = 0;
  uStack_42f = 0;
  uStack_42b = 0;
  uStack_429 = 0;
  plStack_438 = (long *)&UNK_0eff21f8;
  lVar11 = func_0x058f51c0(*param_1,&plStack_4e8,&plStack_438);
  if (plStack_438 != (long *)0x0) {
    (*(code *)plStack_438[1])(&plStack_438);
  }
  if ((uStack_4e0 & 1) != 0) {
    func_0x0412a280(uStack_4d0,
                    CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0)) & 0xfffffffffffffffe);
  }
  uStack_380 = (undefined8 *)0x0;
  plStack_3f0 = (long *)0x0;
  plStack_388 = (long *)0x0;
  plStack_3f8 = (long *)&UNK_0eff23f0;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  plStack_4e8 = plStack_3f8;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0eff2220;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  uStack_4da = 0;
  plStack_3f8 = (long *)0x0;
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&uStack_348,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar8 = plVar12 + 0x11;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0eff2270;
  plVar12[0x2e] = 0;
  plVar12[0x2f] = 0;
  plVar12[0x30] = 0;
  plVar12[0x31] = 0;
  plVar12[0x32] = 0;
  plVar12[0x33] = 0;
  plVar12[0x34] = 0;
  *(undefined4 *)(plVar12 + 0x35) = 0x3f800000;
  plVar12[0x36] = 0;
  plVar12[0x37] = 0;
  if (plStack_4e8 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4e8)(&plStack_4e8,plVar12 + 0x36);
    plVar13 = plStack_4e8;
  }
  plStack_4e8 = (long *)0x0;
  plVar12[0x36] = (long)plVar13;
  *(undefined1 *)(plVar12 + 0x3e) = 0;
  puVar1 = (uint *)(plVar12 + 0x12);
  if (plVar8 != (long *)&DAT_0f552138) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar12[0x14] = _DAT_0f552150;
        uVar5 = uRam000000000f55214c;
        uVar4 = _DAT_0f552148;
        uVar3 = uRam000000000f552144;
        *puVar1 = _DAT_0f552140;
        *(undefined4 *)((long)plVar12 + 0x94) = uVar3;
        *(undefined4 *)(plVar12 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar12 + 0x9c) = uVar5;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar23 = (_DAT_0f552140 & 1) != 0;
      lVar19 = 0xf552141;
      if (bVar23) {
        lVar19 = _DAT_0f552150;
      }
      uVar15 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar23) {
        uVar15 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puVar1,lVar19,uVar15);
    }
  }
  plVar12[0x11] = _DAT_0f552138;
  plVar12[0x15] = 0;
  if (plStack_4e8 != (long *)0x0) {
    (*(code *)plStack_4e8[1])(&plStack_4e8);
  }
  plVar13 = plVar12 + 1;
  if (plStack_3f8 != (long *)0x0) {
    (*(code *)plStack_3f8[1])(&plStack_3f8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puStack_3b0 = (uint *)plVar13;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &UNK_0eff2350;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &UNK_0eff23a0;
  puVar7[0xe] = plVar12 + 4;
  puVar7[0xf] = plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  uStack_4e0 = (uint)puVar7;
  uStack_4dc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_4da = (undefined2)((ulong)puVar7 >> 0x30);
  plStack_4e8 = puVar7 + 4;
  puVar10 = (undefined4 *)func_0x058f7590(lVar11);
  plVar13 = *(long **)(puVar10 + 0x24);
  if (plVar13 < *(long **)(puVar10 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if (plVar13 != plVar8) {
      if ((*puVar1 & 1) == 0) {
        plVar13[3] = plVar12[0x14];
        lVar19 = plVar12[0x13];
        plVar13[1] = *(long *)puVar1;
        plVar13[2] = lVar19;
      }
      else {
        FUN_04885070(plVar13 + 1,plVar12[0x14],plVar12[0x13]);
      }
    }
    *plVar13 = *plVar8;
    plVar13[5] = (long)(puVar7 + 4);
    plVar13[6] = (long)puVar7;
    LOCK();
    puVar7[1] = puVar7[1] + 1;
    UNLOCK();
    plVar13 = plVar13 + 7;
    *(long **)(puVar10 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x058fe360(puVar10 + 0x22,plVar8,&plStack_4e8);
  }
  *(long **)(puVar10 + 0x24) = plVar13;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  plVar8 = (long *)plVar12[0xf];
  *(undefined4 *)(plVar12 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar12 + 0x74) = uVar4;
  *(undefined4 *)(plVar12 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar12 + 0x7c) = uVar6;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    lVar19 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
  *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar8 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    lVar19 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
  puVar1 = puStack_3b0;
  LOCK();
  lVar19 = *(long *)puStack_3b0;
  *(long *)puStack_3b0 = *(long *)puStack_3b0 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    LOCK();
    lVar19 = *(long *)puVar1;
    *(long *)puVar1 = *(long *)puVar1 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar19 = *(long *)puStack_3b0;
    *(long *)puStack_3b0 = *(long *)puStack_3b0 + -1;
    UNLOCK();
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
  }
  if (plStack_388 != (long *)0x0) {
    (*(code *)plStack_388[1])(&plStack_388);
  }
  uStack_4e0 = 0;
  uStack_4dc = 0;
  uStack_4da = 0;
  plStack_4e8 = (long *)&UNK_0eff2408;
  pplVar21 = (long **)(lVar11 + 0x110);
  if (pplVar21 != &plStack_4e8) {
    if ((*pplVar21 == (long *)0x0) ||
       ((*(code *)(*pplVar21)[1])(pplVar21), plStack_4e8 != (long *)0x0)) {
      (*(code *)*plStack_4e8)(&plStack_4e8,pplVar21);
      plVar12 = plStack_4e8;
    }
    else {
      plVar12 = (long *)0x0;
    }
    *pplVar21 = plVar12;
  }
  if ((uStack_260 & 1) != 0) {
    func_0x0412a280(puStack_250,uStack_260 & 0xfffffffffffffffe);
  }
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_148);
  if ((uStack_148 & 1) != 0) {
    func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
  }
  bStack_290 = 0x1c;
  uStack_28f = 0x755f656d6974;
  uStack_289 = 0x6e;
  uStack_288 = 0x74;
  uStack_287 = 0x7461655f6c69;
  uStack_281 = 0;
  puStack_268 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_268 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar2 = _UNK_013acca7;
  uStack_278 = 0x29;
  uStack_270 = 0x22;
  puStack_268[2] = _DAT_013acc9f;
  puStack_268[3] = uVar2;
  uVar2 = _UNK_013acc97;
  *puStack_268 = _DAT_013acc8f;
  puStack_268[1] = uVar2;
  *(undefined2 *)(puStack_268 + 4) = 0x5441;
  *(undefined1 *)((long)puStack_268 + 0x22) = 0;
  bStack_130 = 2;
  uStack_12f = 0x30;
  uStack_12e = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  func_0x05611160(_DAT_011987fc,0,auStack_b8,plStack_448,&bStack_290,&uStack_278,&bStack_130,
                  &bStack_e8);
  uVar2 = *param_1;
  plStack_388 = (long *)0x0;
  if ((uStack_48 & 1) == 0) {
    pbStack_370 = pbStack_38;
    uStack_380 = (undefined8 *)CONCAT44(uStack_44,uStack_48);
    uStack_378 = uStack_40;
    uStack_374 = uStack_3c;
  }
  else {
    func_0x0412e5e0(&uStack_380,pbStack_38,CONCAT44(uStack_3c,uStack_40));
  }
  uStack_368 = 0;
  if (((ulong)uStack_380 & 1) == 0) {
    if ((byte)uStack_380 >> 1 != 0) goto LAB_058aa5e9;
  }
  else if (CONCAT44(uStack_374,uStack_378) != 0) {
LAB_058aa5e9:
    pbVar14 = pbStack_370;
    if (((ulong)uStack_380 & 1) == 0) {
      pbVar14 = (byte *)((long)&uStack_380 + 1);
    }
    if ((pbVar14 != (byte *)0x0) && (*pbVar14 != 0)) {
      uVar15 = strlen(pbVar14);
      plStack_388 = (long *)0xcbf29ce484222325;
      if (uVar15 != 0) {
        uVar18 = (ulong)((uint)uVar15 & 7);
        if (uVar15 < 8) {
          plStack_388 = (long *)0xcbf29ce484222325;
        }
        else {
          uVar15 = uVar15 & 0xfffffffffffffff8;
          plStack_388 = (long *)0xcbf29ce484222325;
          do {
            plStack_388 = (long *)(((((((((long)plStack_388 * 0x100000001b3 ^ (ulong)*pbVar14) *
                                         0x100000001b3 ^ (ulong)pbVar14[1]) * 0x100000001b3 ^
                                       (ulong)pbVar14[2]) * 0x100000001b3 ^ (ulong)pbVar14[3]) *
                                      0x100000001b3 ^ (ulong)pbVar14[4]) * 0x100000001b3 ^
                                    (ulong)pbVar14[5]) * 0x100000001b3 ^ (ulong)pbVar14[6]) *
                                   0x100000001b3 ^ (ulong)pbVar14[7]);
            pbVar14 = pbVar14 + 8;
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
        }
        if (uVar18 != 0) {
          uVar15 = 0;
          do {
            plStack_388 = (long *)((long)plStack_388 * 0x100000001b3 ^ (ulong)pbVar14[uVar15]);
            uVar15 = uVar15 + 1;
          } while (uVar18 != uVar15);
        }
      }
      goto LAB_058aa641;
    }
  }
  plStack_388 = (long *)0x0;
LAB_058aa641:
  plStack_4e8 = (long *)0x8;
  func_0x05640c10(&uStack_4e0,auStack_b8);
  bStack_430 = 0;
  uStack_42f = 0;
  uStack_42b = 0;
  uStack_429 = 0;
  plStack_438 = (long *)&UNK_0efeb968;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x90,0);
  }
  *puVar7 = plStack_4e8;
  puVar7[1] = CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
  puVar7[5] = uStack_4c0;
  puVar7[3] = uStack_4d0;
  puVar7[4] = uStack_4c8;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  puVar7[8] = uStack_4a8;
  puVar7[6] = uStack_4b8;
  puVar7[7] = uStack_4b0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  puVar7[0xb] = uStack_490;
  puVar7[9] = uStack_4a0;
  puVar7[10] = uStack_498;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_490 = 0;
  puVar7[0xe] = uStack_478;
  puVar7[0xc] = uStack_488;
  puVar7[0xd] = uStack_480;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  puVar7[0x11] = uStack_460;
  *(undefined4 *)(puVar7 + 0xf) = (undefined4)uStack_470;
  *(undefined4 *)((long)puVar7 + 0x7c) = uStack_470._4_4_;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_468;
  *(undefined4 *)((long)puVar7 + 0x84) = uStack_468._4_4_;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  bStack_430 = (byte)puVar7;
  uStack_42f = (undefined4)((ulong)puVar7 >> 8);
  uStack_42b = (undefined2)((ulong)puVar7 >> 0x28);
  uStack_429 = (undefined1)((ulong)puVar7 >> 0x38);
  plStack_3f8 = (long *)0x0;
  plStack_3f0 = (long *)0x0;
  if (plStack_438 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_438)(&plStack_438,&plStack_3f8);
    plVar12 = plStack_438;
  }
  plStack_438 = (long *)0x0;
  plStack_3f8 = plVar12;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0efeb740;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)0x0;
  if (plVar12 == (long *)0x0) {
    plStack_318 = (long *)0x0;
  }
  else {
    (*(code *)*plVar12)(&plStack_3f8,&plStack_318);
    plStack_318 = plStack_3f8;
  }
  plStack_3f8 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_348,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar12 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0efeb790;
  plVar8[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar8 + 0x2f) = 1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  if (plStack_318 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_318)(&plStack_318,plVar8 + 0x30);
    plVar13 = plStack_318;
  }
  plStack_318 = (long *)0x0;
  plVar8[0x30] = (long)plVar13;
  puVar1 = (uint *)(plVar8 + 0x12);
  if (plVar12 == (long *)&DAT_0f552018) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552030;
        uVar5 = uRam000000000f55202c;
        uVar4 = _DAT_0f552028;
        uVar3 = uRam000000000f552024;
        *puVar1 = _DAT_0f552020;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar23 = (_DAT_0f552020 & 1) != 0;
      lVar11 = 0xf552021;
      if (bVar23) {
        lVar11 = _DAT_0f552030;
      }
      uVar15 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar23) {
        uVar15 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar1,lVar11,uVar15);
    }
    plVar8[0x11] = _DAT_0f552018;
    plVar8[0x15] = 0;
    if (plStack_318 != (long *)0x0) {
      (*(code *)plStack_318[1])(&plStack_318);
    }
  }
  plVar13 = plVar8 + 1;
  if (plStack_3f8 != (long *)0x0) {
    (*(code *)plStack_3f8[1])(&plStack_3f8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0efeb870;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[4] = (long)&UNK_0efeb8c0;
  plVar9[0xe] = (long)(plVar8 + 4);
  plVar9[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_448 = plVar8 + 4;
  plStack_318 = plVar9 + 4;
  plStack_310 = plVar9;
  puVar10 = (undefined4 *)func_0x058ef740(uVar2,&plStack_388);
  plVar17 = *(long **)(puVar10 + 0x24);
  if (plVar17 < *(long **)(puVar10 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar12) {
      if ((*puVar1 & 1) == 0) {
        plVar17[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        plVar17[1] = *(long *)puVar1;
        plVar17[2] = lVar11;
      }
      else {
        FUN_04885070(plVar17 + 1,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar17 = *plVar12;
    plVar17[5] = (long)(plVar9 + 4);
    plVar17[6] = (long)plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar10 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x058f1530(puVar10 + 0x22,plVar12,&plStack_318);
  }
  *(long **)(puVar10 + 0x24) = plVar17;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar9 = plVar12 + 1;
    lVar11 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_310;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  if (plStack_310 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_310 + 1;
    lVar11 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_310 + 0x10))(plStack_310);
      func_0x0412c2d0(plVar12);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (plStack_438 != (long *)0x0) {
    (*(code *)plStack_438[1])(&plStack_438);
  }
  if ((uStack_470 & 1) != 0) {
    func_0x0412a280(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  if ((uStack_488 & 1) != 0) {
    func_0x0412a280(uStack_478,uStack_488 & 0xfffffffffffffffe);
  }
  if ((uStack_4a0 & 1) != 0) {
    func_0x0412a280(uStack_490,uStack_4a0 & 0xfffffffffffffffe);
  }
  if ((uStack_4b8 & 1) != 0) {
    func_0x0412a280(uStack_4a8,uStack_4b8 & 0xfffffffffffffffe);
  }
  if ((uStack_4d0 & 1) != 0) {
    func_0x0412a280(uStack_4c0,uStack_4d0 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_380 & 1) != 0) {
    func_0x0412a280(pbStack_370,(ulong)uStack_380 & 0xfffffffffffffffe);
  }
  plStack_4e8 = (long *)0x8;
  uStack_4e0 = uStack_4e0 & 0xffffff00;
  func_0x05640c10(&uStack_4d8,auStack_b8);
  plStack_310 = (long *)0x0;
  plStack_318 = (long *)&UNK_0efeb980;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x98,0);
  }
  pplVar21 = (long **)(plVar8 + 0x26);
  *(undefined1 *)(puVar7 + 1) = (undefined1)uStack_4e0;
  *puVar7 = plStack_4e8;
  puVar7[2] = CONCAT26(uStack_4d2,CONCAT51(uStack_4d7,uStack_4d8));
  puVar7[6] = uStack_4b8;
  puVar7[4] = uStack_4c8;
  puVar7[5] = uStack_4c0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  puVar7[9] = uStack_4a0;
  puVar7[7] = uStack_4b0;
  puVar7[8] = uStack_4a8;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  puVar7[0xc] = uStack_488;
  puVar7[10] = uStack_498;
  puVar7[0xb] = uStack_490;
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  puVar7[0xf] = uStack_470;
  puVar7[0xd] = uStack_480;
  puVar7[0xe] = uStack_478;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  puVar7[0x12] = uStack_458;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_468;
  *(undefined4 *)((long)puVar7 + 0x84) = uStack_468._4_4_;
  *(undefined4 *)(puVar7 + 0x11) = (undefined4)uStack_460;
  *(undefined4 *)((long)puVar7 + 0x8c) = uStack_460._4_4_;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  plStack_310 = puVar7;
  if (pplVar21 == &plStack_318) {
    func_0x05611e70(puVar7 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar7);
    plVar12 = plStack_448;
  }
  else {
    plVar12 = (long *)&UNK_0efeb980;
    if ((*pplVar21 == (long *)0x0) ||
       ((*(code *)(*pplVar21)[1])(pplVar21), plVar12 = plStack_318, plStack_318 != (long *)0x0)) {
      (*(code *)*plVar12)(&plStack_318,pplVar21);
      plVar12 = plStack_318;
    }
    else {
      plVar12 = (long *)0x0;
    }
    plStack_318 = (long *)0x0;
    *pplVar21 = plVar12;
    plVar12 = plStack_448;
  }
  plStack_448 = plVar12;
  if ((uStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,uStack_468 & 0xfffffffffffffffe);
  }
  if ((uStack_480 & 1) != 0) {
    func_0x0412a280(uStack_470,uStack_480 & 0xfffffffffffffffe);
  }
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  if ((uStack_4b0 & 1) != 0) {
    func_0x0412a280(uStack_4a0,uStack_4b0 & 0xfffffffffffffffe);
  }
  if ((uStack_4c8 & 1) != 0) {
    func_0x0412a280(uStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
  }
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  (**(code **)(*plVar12 + 0x18))(plVar12,&uStack_168,&uStack_188);
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(uStack_178,uStack_188 & 0xfffffffffffffffe);
  }
  if ((uStack_168 & 1) != 0) {
    func_0x0412a280(uStack_158,uStack_168 & 0xfffffffffffffffe);
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
  if ((bStack_e8 & 1) != 0) {
    func_0x0412a280(uStack_d8,CONCAT62(uStack_e6,CONCAT11(uStack_e7,bStack_e8)) & 0xfffffffffffffffe
                   );
  }
  if ((bStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,
                    CONCAT53(uStack_12d,CONCAT12(uStack_12e,CONCAT11(uStack_12f,bStack_130))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(puStack_268,uStack_278 & 0xfffffffffffffffe);
  }
  if ((bStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,
                    CONCAT17(uStack_289,CONCAT61(uStack_28f,bStack_290)) & 0xfffffffffffffffe);
  }
  uVar2 = *param_1;
  uStack_428 = 0;
  uStack_427 = 0;
  uStack_421 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  bStack_430 = 0xc;
  uStack_42f = 0x655f6e6f;
  uStack_42b = 0x7461;
  uStack_429 = 0;
  plStack_438 = (long *)0xb6523fc306650989;
  plStack_3f0 = (long *)0x10;
  plStack_310 = (long *)0x10;
  plStack_3f8 = (long *)0x0;
  plStack_318 = (long *)&UNK_0efebb78;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plStack_4e8 = plStack_318;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0efeb9a8;
  plStack_318 = (long *)0x0;
  uStack_4e0 = (uint)plStack_310;
  uStack_4dc = (undefined2)((ulong)plStack_310 >> 0x20);
  uStack_4da = (undefined2)((ulong)plStack_310 >> 0x30);
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&plStack_388,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar8 = plVar12 + 0x11;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0efeb9f8;
  plVar12[0x2e] = 0;
  plVar12[0x2f] = 0;
  if (plStack_4e8 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4e8)(&plStack_4e8,plVar12 + 0x2e);
    plVar13 = plStack_4e8;
  }
  plStack_4e8 = (long *)0x0;
  plVar12[0x2e] = (long)plVar13;
  puVar1 = (uint *)(plVar12 + 0x12);
  if (plVar8 == (long *)&DAT_0f551ef8) {
    plVar12[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f00 & 1) == 0) {
        plVar12[0x14] = _DAT_0f551f10;
        uVar5 = uRam000000000f551f0c;
        uVar4 = _DAT_0f551f08;
        uVar3 = uRam000000000f551f04;
        *puVar1 = _DAT_0f551f00;
        *(undefined4 *)((long)plVar12 + 0x94) = uVar3;
        *(undefined4 *)(plVar12 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar12 + 0x9c) = uVar5;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
      }
    }
    else {
      bVar23 = (_DAT_0f551f00 & 1) != 0;
      lVar11 = 0xf551f01;
      if (bVar23) {
        lVar11 = _DAT_0f551f10;
      }
      uVar15 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
      if (bVar23) {
        uVar15 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
      }
      func_0x04885120(puVar1,lVar11,uVar15);
    }
    plVar12[0x11] = _DAT_0f551ef8;
    plVar12[0x15] = 0;
    if (plStack_4e8 != (long *)0x0) {
      (*(code *)plStack_4e8[1])(&plStack_4e8);
    }
  }
  plVar13 = plVar12 + 1;
  if (plStack_318 != (long *)0x0) {
    (*(code *)plStack_318[1])(&plStack_318);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &UNK_0efebad8;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &UNK_0efebb28;
  puVar7[0xe] = plVar12 + 4;
  puVar7[0xf] = plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  uStack_4e0 = (uint)puVar7;
  uStack_4dc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_4da = (undefined2)((ulong)puVar7 >> 0x30);
  plStack_4e8 = puVar7 + 4;
  plStack_448 = plVar12 + 4;
  puVar10 = (undefined4 *)func_0x058ef740(uVar2,&plStack_438);
  plVar9 = *(long **)(puVar10 + 0x24);
  if (plVar9 < *(long **)(puVar10 + 0x26)) {
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[4] = 0;
    if (plVar9 != plVar8) {
      if ((*puVar1 & 1) == 0) {
        plVar9[3] = plVar12[0x14];
        lVar11 = plVar12[0x13];
        plVar9[1] = *(long *)puVar1;
        plVar9[2] = lVar11;
      }
      else {
        FUN_04885070(plVar9 + 1,plVar12[0x14],plVar12[0x13]);
      }
    }
    *plVar9 = *plVar8;
    plVar9[5] = (long)(puVar7 + 4);
    plVar9[6] = (long)puVar7;
    LOCK();
    puVar7[1] = puVar7[1] + 1;
    UNLOCK();
    plVar9 = plVar9 + 7;
    *(long **)(puVar10 + 0x24) = plVar9;
  }
  else {
    plVar9 = (long *)func_0x058f1530(puVar10 + 0x22,plVar8,&plStack_4e8);
  }
  *(long **)(puVar10 + 0x24) = plVar9;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  plVar8 = (long *)plVar12[0xf];
  *(undefined4 *)(plVar12 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar12 + 0x74) = uVar4;
  *(undefined4 *)(plVar12 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar12 + 0x7c) = uVar6;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar11 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
  *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar8 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar11 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  plVar8 = plStack_448;
  if (lVar11 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    plVar8 = plStack_448;
  }
  plStack_448 = plVar8;
  if (plStack_3f8 != (long *)0x0) {
    (*(code *)plStack_3f8[1])(&plStack_3f8);
  }
  if ((bStack_430 & 1) != 0) {
    func_0x0412a280(uStack_420,
                    CONCAT17(uStack_429,CONCAT25(uStack_42b,CONCAT41(uStack_42f,bStack_430))) &
                    0xfffffffffffffffe);
  }
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  (**(code **)(*plVar8 + 0x18))(plVar8,&uStack_1a8,&uStack_1c8);
  if ((uStack_1c8 & 1) != 0) {
    func_0x0412a280(uStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
  }
  if ((uStack_1a8 & 1) != 0) {
    func_0x0412a280(uStack_198,uStack_1a8 & 0xfffffffffffffffe);
  }
  uVar2 = *param_1;
  uStack_420 = 0;
  uStack_418 = 0;
  bStack_430 = 0x1c;
  uStack_42f = 0x63637573;
  uStack_42b = 0x7365;
  uStack_429 = 0x73;
  uStack_428 = 0x5f;
  uStack_427 = 0x65636e616863;
  uStack_421 = 0;
  plStack_438 = (long *)0xc3273a13003b81cd;
  plStack_3f0 = (long *)0xf0;
  plStack_310 = (long *)0xf0;
  plStack_3f8 = (long *)0x0;
  plStack_318 = (long *)&UNK_0efebd80;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x1d0,0);
  }
  plStack_4e8 = plStack_318;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0efebba0;
  plStack_318 = (long *)0x0;
  uStack_4e0 = (uint)plStack_310;
  uStack_4dc = (undefined2)((ulong)plStack_310 >> 0x20);
  uStack_4da = (undefined2)((ulong)plStack_310 >> 0x30);
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&plStack_388,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0efebbf0;
  plVar12[0x2e] = 0;
  plVar12[0x2f] = 0;
  if (plStack_4e8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4e8)(&plStack_4e8,plVar12 + 0x2e);
    plVar8 = plStack_4e8;
  }
  plStack_4e8 = (long *)0x0;
  plVar12[0x2e] = (long)plVar8;
  plStack_388 = plVar12 + 0x36;
  plVar12[0x36] = 0;
  plVar12[0x37] = 0;
  plVar12[0x38] = 0;
  uStack_380 = (undefined8 *)((ulong)uStack_380 & 0xffffffffffffff00);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar8 = plVar12 + 0x11;
  plVar12[0x36] = (long)puVar7;
  plVar12[0x38] = (long)(puVar7 + 5);
  puVar7[4] = 0;
  puVar7[1] = 0x746c75616665640e;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0xdead4915c9c6c0d8;
  plVar12[0x37] = (long)(puVar7 + 5);
  puVar1 = (uint *)(plVar12 + 0x12);
  if (plVar8 != (long *)&DAT_0f5520d8) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        plVar12[0x14] = _DAT_0f5520f0;
        uVar5 = uRam000000000f5520ec;
        uVar4 = _DAT_0f5520e8;
        uVar3 = uRam000000000f5520e4;
        *puVar1 = _DAT_0f5520e0;
        *(undefined4 *)((long)plVar12 + 0x94) = uVar3;
        *(undefined4 *)(plVar12 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar12 + 0x9c) = uVar5;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar23 = (_DAT_0f5520e0 & 1) != 0;
      lVar11 = 0xf5520e1;
      if (bVar23) {
        lVar11 = _DAT_0f5520f0;
      }
      uVar15 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar23) {
        uVar15 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      func_0x04885120(puVar1,lVar11,uVar15);
    }
  }
  plVar12[0x11] = _DAT_0f5520d8;
  plVar12[0x15] = 0;
  puStack_3b0 = puVar1;
  if (plStack_4e8 != (long *)0x0) {
    (*(code *)plStack_4e8[1])(&plStack_4e8);
  }
  plVar13 = plVar12 + 1;
  if (plStack_318 != (long *)0x0) {
    (*(code *)plStack_318[1])(&plStack_318);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &UNK_0efebce0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &UNK_0efebd30;
  puVar7[0xe] = plVar12 + 4;
  puVar7[0xf] = plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  uStack_4e0 = (uint)puVar7;
  uStack_4dc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_4da = (undefined2)((ulong)puVar7 >> 0x30);
  plStack_4e8 = puVar7 + 4;
  plStack_448 = plVar12 + 4;
  puVar10 = (undefined4 *)func_0x058ef740(uVar2,&plStack_438);
  plVar9 = *(long **)(puVar10 + 0x24);
  if (plVar9 < *(long **)(puVar10 + 0x26)) {
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[4] = 0;
    if (plVar9 != plVar8) {
      if ((*puStack_3b0 & 1) == 0) {
        plVar9[3] = *(long *)(puStack_3b0 + 4);
        lVar11 = *(long *)(puStack_3b0 + 2);
        plVar9[1] = *(long *)puStack_3b0;
        plVar9[2] = lVar11;
      }
      else {
        FUN_04885070(plVar9 + 1,plVar12[0x14],plVar12[0x13]);
      }
    }
    *plVar9 = *plVar8;
    plVar9[5] = (long)(puVar7 + 4);
    plVar9[6] = (long)puVar7;
    LOCK();
    puVar7[1] = puVar7[1] + 1;
    UNLOCK();
    plVar9 = plVar9 + 7;
    *(long **)(puVar10 + 0x24) = plVar9;
  }
  else {
    plVar9 = (long *)func_0x058f1530(puVar10 + 0x22,plVar8,&plStack_4e8);
  }
  plVar8 = plStack_448;
  *(long **)(puVar10 + 0x24) = plVar9;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar9 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar9 = *plVar9 + 1;
    UNLOCK();
  }
  plVar9 = (long *)plVar12[0xf];
  *(undefined4 *)(plVar12 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar12 + 0x74) = uVar4;
  *(undefined4 *)(plVar12 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar12 + 0x7c) = uVar6;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar17 = plVar9 + 1;
    lVar11 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar9 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar17 = plVar9 + 1;
    lVar11 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
  }
  if (plStack_3f8 != (long *)0x0) {
    (*(code *)plStack_3f8[1])(&plStack_3f8);
  }
  if ((bStack_430 & 1) != 0) {
    func_0x0412a280(uStack_420,
                    CONCAT17(uStack_429,CONCAT25(uStack_42b,CONCAT41(uStack_42f,bStack_430))) &
                    0xfffffffffffffffe);
  }
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  (**(code **)(*plVar8 + 0x18))(plVar8,&uStack_1e8,&uStack_208);
  if ((uStack_208 & 1) != 0) {
    func_0x0412a280(uStack_1f8,uStack_208 & 0xfffffffffffffffe);
  }
  if ((uStack_1e8 & 1) != 0) {
    func_0x0412a280(uStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
  }
  uVar2 = *param_1;
  plVar12 = (long *)param_1[1];
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar12[1] = plVar12[1] + 1;
    UNLOCK();
  }
  uStack_4d8 = 0;
  uStack_4d7 = 0;
  uStack_4d2 = 0;
  uStack_4d0 = 0;
  plStack_4e8 = (long *)0x0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  uStack_4da = 0;
  uStack_4c8 = 0;
  func_0x0412f5e0(&uStack_4e0,&UNK_01258615,0x1b);
  plStack_4e8 = (long *)0x376d18a30f515e52;
  plStack_438 = (long *)&UNK_0efebfa0;
  bStack_430 = 0x18;
  uStack_42f = 1;
  uStack_42b = 0;
  uStack_429 = 0;
  plVar8 = (long *)func_0x058f51c0(uVar2,&plStack_4e8,&plStack_438);
  if (plStack_438 != (long *)0x0) {
    (*(code *)plStack_438[1])(&plStack_438);
  }
  if ((uStack_4e0 & 1) != 0) {
    func_0x0412a280(uStack_4d0,
                    CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0)) & 0xfffffffffffffffe);
  }
  uStack_380 = (undefined8 *)0x118;
  plStack_3f0 = (long *)0x118;
  plStack_388 = (long *)0x0;
  plStack_3f8 = (long *)&UNK_0efec538;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar13 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0efebfc8;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)0x0;
  if (plStack_3f8 == (long *)0x0) {
    plStack_318 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_3f8)(&plStack_3f8,&plStack_318);
    plStack_318 = plStack_3f8;
  }
  plStack_3f8 = (long *)0x0;
  plStack_4e8 = (long *)0x0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  uStack_4da = 0;
  plVar13[4] = (long)&UNK_0f2ccd78;
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  *(undefined1 *)(plVar13 + 0xd) = 0;
  func_0x04aa75f0(plVar13 + 0xe,&uStack_348,&UNK_01254d89);
  *(undefined1 *)(plVar13 + 0x10) = 0;
  plVar9 = plVar13 + 0x11;
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[0x16] = 0;
  plVar13[0x17] = 0xffffffff;
  plVar13[0x26] = 0;
  plVar13[0x27] = 0;
  plVar13[0x18] = 0;
  plVar13[0x19] = 0;
  plVar13[0x1a] = 0;
  plVar13[0x1b] = 0;
  plVar13[0x1c] = 0;
  plVar13[0x1d] = 0;
  plVar13[0x1e] = 0;
  plVar13[0x1f] = 0;
  plVar13[4] = (long)&UNK_0efec140;
  pplVar21 = (long **)(plVar13 + 0x2e);
  plVar13[0x2e] = 0;
  plVar13[0x2f] = 0;
  *(undefined1 *)(plVar13 + 0x36) = 0;
  if (pplVar21 != &plStack_4e8) {
    if (plStack_4e8 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_4e8)(&plStack_4e8,pplVar21);
      plVar17 = plStack_4e8;
    }
    plStack_4e8 = (long *)0x0;
    *pplVar21 = plVar17;
  }
  plVar17 = plVar13 + 4;
  puVar1 = (uint *)(plVar13 + 0x12);
  if (plVar9 != (long *)&DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar13[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)plVar13 + 0x94) = uVar3;
        *(undefined4 *)(plVar13 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar13 + 0x9c) = uVar5;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar23 = (_DAT_0f552110 & 1) != 0;
      lVar11 = 0xf552111;
      if (bVar23) {
        lVar11 = _DAT_0f552120;
      }
      uVar15 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar23) {
        uVar15 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar11,uVar15);
    }
  }
  plVar13[0x11] = _DAT_0f552108;
  plVar13[0x15] = 0;
  if (plStack_4e8 != (long *)0x0) {
    (*(code *)plStack_4e8[1])(&plStack_4e8);
  }
  plVar13[4] = (long)&UNK_0efec0e8;
  plVar13[0x38] = 0;
  plVar13[0x39] = 0;
  if (plStack_318 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_318)(&plStack_318,plVar13 + 0x38);
    plVar16 = plStack_318;
  }
  plStack_318 = (long *)0x0;
  plVar13[0x38] = (long)plVar16;
  pbVar14 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (pbVar14 == (byte *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar2 = _UNK_0119d377;
  *(ulong *)(pbVar14 + 10) = CONCAT26(_UNK_0119d375,CONCAT42(_UNK_0119d371,_DAT_0119d36f));
  *(undefined8 *)(pbVar14 + 0x12) = uVar2;
  uVar5 = _UNK_0119d371;
  uVar4 = _UNK_0119d369;
  uVar3 = CONCAT22(_DAT_0119d36f,_UNK_0119d36d);
  *(undefined4 *)pbVar14 = _DAT_0119d365;
  *(undefined4 *)(pbVar14 + 4) = uVar4;
  *(undefined4 *)(pbVar14 + 8) = uVar3;
  *(undefined4 *)(pbVar14 + 0xc) = uVar5;
  pbVar14[0x1a] = 0;
  uVar15 = strlen(pbVar14);
  if (uVar15 != 0) {
    uVar18 = (ulong)((uint)uVar15 & 7);
    pbVar20 = pbVar14;
    if (7 < uVar15) {
      uVar15 = uVar15 & 0xfffffffffffffff8;
      do {
        uVar22 = (((((((uVar22 * 0x100000001b3 ^ (ulong)*pbVar20) * 0x100000001b3 ^
                      (ulong)pbVar20[1]) * 0x100000001b3 ^ (ulong)pbVar20[2]) * 0x100000001b3 ^
                    (ulong)pbVar20[3]) * 0x100000001b3 ^ (ulong)pbVar20[4]) * 0x100000001b3 ^
                  (ulong)pbVar20[5]) * 0x100000001b3 ^ (ulong)pbVar20[6]) * 0x100000001b3 ^
                 (ulong)pbVar20[7];
        pbVar20 = pbVar20 + 8;
        uVar15 = uVar15 - 8;
      } while (uVar15 != 0);
    }
    if (uVar18 != 0) {
      uVar15 = 0;
      do {
        uVar22 = uVar22 * 0x100000001b3 ^ (ulong)pbVar20[uVar15];
        uVar15 = uVar15 + 1;
      } while (uVar18 != uVar15);
    }
  }
  if ((*(byte *)(plVar13 + 6) & 1) != 0) {
    func_0x0412a280(plVar13[8],plVar13[6] & 0xfffffffffffffffe);
  }
  plVar13[6] = 0x21;
  plVar13[7] = 0x1a;
  plVar13[8] = (long)pbVar14;
  plVar13[5] = uVar22;
  plVar13[9] = 0;
  plVar16 = (long *)func_0x058f9780(plVar17,0,&UNK_01340f07);
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  (**(code **)(*plVar16 + 0x10))(plVar16,&uStack_348);
  if ((uStack_348 & 1) != 0) {
    func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
  }
  plVar16 = (long *)func_0x058f9780(plVar17,0x18,&UNK_0139115a);
  bStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a0 = 0;
  uStack_39f = 0;
  uStack_39e = 0;
  uStack_398 = 0;
  (**(code **)(*plVar16 + 0x10))(plVar16,&bStack_3a8);
  if ((bStack_3a8 & 1) != 0) {
    func_0x0412a280(uStack_398,CONCAT71(uStack_3a7,bStack_3a8) & 0xfffffffffffffffe);
  }
  *plVar17 = (long)&UNK_0efec018;
  if (plStack_318 != (long *)0x0) {
    (*(code *)plStack_318[1])(&plStack_318);
  }
  plVar16 = plVar13 + 1;
  if (plStack_3f8 != (long *)0x0) {
    (*(code *)plStack_3f8[1])(&plStack_3f8);
  }
  LOCK();
  *plVar16 = *plVar16 + 1;
  UNLOCK();
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &UNK_0efec440;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &UNK_0efec490;
  puVar7[0xe] = plVar17;
  puVar7[0xf] = plVar13;
  LOCK();
  plVar13[1] = plVar13[1] + 1;
  UNLOCK();
  uStack_4e0 = (uint)puVar7;
  uStack_4dc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_4da = (undefined2)((ulong)puVar7 >> 0x30);
  plStack_4e8 = puVar7 + 4;
  puVar10 = (undefined4 *)func_0x058f7590(plVar8);
  plVar17 = *(long **)(puVar10 + 0x24);
  if (plVar17 < *(long **)(puVar10 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar9) {
      if ((*puVar1 & 1) == 0) {
        plVar17[3] = plVar13[0x14];
        lVar11 = plVar13[0x13];
        plVar17[1] = *(long *)puVar1;
        plVar17[2] = lVar11;
      }
      else {
        FUN_04885070(plVar17 + 1,plVar13[0x14],plVar13[0x13]);
      }
    }
    *plVar17 = *plVar9;
    plVar17[5] = (long)(puVar7 + 4);
    plVar17[6] = (long)puVar7;
    LOCK();
    puVar7[1] = puVar7[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar10 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x058fe360(puVar10 + 0x22,plVar9,&plStack_4e8);
  }
  *(long **)(puVar10 + 0x24) = plVar17;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar9 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar9 = *plVar9 + 1;
    UNLOCK();
  }
  plVar9 = (long *)plVar13[0xf];
  *(undefined4 *)(plVar13 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar13 + 0x74) = uVar4;
  *(undefined4 *)(plVar13 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar13 + 0x7c) = uVar6;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar17 = plVar9 + 1;
    lVar11 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  *(undefined1 *)(plVar13 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar9 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar17 = plVar9 + 1;
    lVar11 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  LOCK();
  lVar11 = *plVar16;
  *plVar16 = *plVar16 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    LOCK();
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
  }
  if (plStack_388 != (long *)0x0) {
    (*(code *)plStack_388[1])(&plStack_388);
  }
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  (**(code **)(*plVar8 + 0x18))(plVar8,&uStack_228,&uStack_248);
  if ((uStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,uStack_248 & 0xfffffffffffffffe);
  }
  if ((uStack_228 & 1) != 0) {
    func_0x0412a280(uStack_218,uStack_228 & 0xfffffffffffffffe);
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    lVar11 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x119d365  eat_and_replace_block_pair
 * 0x119d36f  place_block_pair
 * 0x13acad2  minecraft:behavior.eat_block
 * 0x13acade  havior.eat_block
 * 0x13acc8f  Definition::DEFAULT_TIME_UNTIL_EAT
 * 0x13acc9f  ULT_TIME_UNTIL_EAT
 */
