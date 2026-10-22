/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x598b880 (ELF vaddr 0x588b880)
 * Label: caller-of-callee
 * Body:  [[0598b880, 0598c9fd] [0598ca00, 0598cfc5] [0598cfd0, 0598d00c] [0598d010, 0598ef67] [0598f718, 0598f735] [0598f881, 0598fc7e] [0598fd37, 0598fd41] [0598fd9b, 0598fdd2]]
 * Ghidra: FUN_0598b880
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0598b880(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  long *plVar6;
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
  long lVar19;
  long *plVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  byte *pbVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  byte **ppbVar31;
  byte *pbVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long lVar36;
  bool bVar37;
  byte *pbStack_478;
  byte *pbStack_470;
  byte *pbStack_468;
  byte *pbStack_460;
  long *plStack_458;
  undefined8 uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  byte *pbStack_3d8;
  undefined4 uStack_3d0;
  undefined1 uStack_3cc;
  undefined2 uStack_3cb;
  undefined1 uStack_3c9;
  uint uStack_3c8;
  undefined1 uStack_3c4;
  undefined2 uStack_3c3;
  undefined1 uStack_3c1;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  byte *pbStack_398;
  byte bStack_390;
  undefined4 uStack_38f;
  undefined1 uStack_38b;
  undefined2 uStack_38a;
  undefined1 uStack_388;
  undefined4 uStack_387;
  undefined1 uStack_383;
  undefined2 uStack_382;
  undefined1 uStack_380;
  undefined2 uStack_37f;
  undefined5 uStack_37d;
  undefined8 uStack_378;
  undefined1 uStack_349;
  long *plStack_348;
  byte bStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined1 uStack_337;
  undefined8 uStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  uint uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_308;
  byte bStack_300;
  undefined7 uStack_2ff;
  undefined8 uStack_2f0;
  byte bStack_2e8;
  undefined7 uStack_2e7;
  undefined8 uStack_2d8;
  byte bStack_2d0;
  undefined7 uStack_2cf;
  undefined8 uStack_2c0;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined4 *puStack_290;
  ulong auStack_288 [4];
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
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
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  byte bStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined5 uStack_c5;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined5 uStack_ad;
  undefined8 uStack_a0;
  long lStack_98;
  byte bStack_90;
  undefined4 uStack_8f;
  undefined4 uStack_8b;
  undefined4 uStack_87;
  undefined4 uStack_83;
  undefined2 uStack_7f;
  undefined5 uStack_7d;
  undefined8 uStack_78;
  byte bStack_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  undefined8 uStack_48;
  long *plStack_40;
  byte *pbStack_38;
  
  puStack_290 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_290 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar28 = _UNK_013f9f04;
  uStack_2a0 = 0x21;
  uStack_298 = 0x1c;
  *(ulong *)(puStack_290 + 3) = CONCAT44(_UNK_013f9f00,_DAT_013f9efc);
  *(undefined8 *)(puStack_290 + 5) = uVar28;
  uVar12 = _DAT_013f9efc;
  uVar11 = _UNK_013f9ef8;
  uVar10 = _UNK_013f9ef4;
  *puStack_290 = _DAT_013f9ef0;
  puStack_290[1] = uVar10;
  puStack_290[2] = uVar11;
  puStack_290[3] = uVar12;
  *(undefined1 *)(puStack_290 + 7) = 0;
  bStack_340 = 0x10;
  uStack_33f = 0x7469726f697270;
  uStack_338 = 0x79;
  uStack_337 = 0;
  bStack_b0 = 2;
  uStack_af = 0x30;
  uStack_ae = 0;
  bStack_c8 = 2;
  uStack_c7 = 0x30;
  uStack_c6 = 0;
  bStack_58 = 0;
  uStack_57 = 0;
  func_0x0564aad0(&pbStack_328,&uStack_2a0,&bStack_340,0,&bStack_b0,0,&bStack_c8,&bStack_58);
  uVar28 = *param_1;
  pbStack_3d8 = (byte *)0x0;
  if ((uStack_2b8 & 1) == 0) {
    uStack_3c0 = (undefined4)uStack_2a8;
    uStack_3bc = (undefined4)((ulong)uStack_2a8 >> 0x20);
    uStack_3d0 = uStack_2b8;
    uStack_3cc = (undefined1)uStack_2b4;
    uStack_3cb = (undefined2)((uint)uStack_2b4 >> 8);
    uStack_3c9 = (undefined1)((uint)uStack_2b4 >> 0x18);
    uStack_3c8 = uStack_2b0;
    uStack_3c4 = (undefined1)uStack_2ac;
    uStack_3c3 = (undefined2)((uint)uStack_2ac >> 8);
    uStack_3c1 = (undefined1)((uint)uStack_2ac >> 0x18);
  }
  else {
    func_0x0412e5e0(&uStack_3d0,uStack_2a8,CONCAT44(uStack_2ac,uStack_2b0));
  }
  uStack_3b8 = 0;
  if ((uStack_3d0 & 1) == 0) {
    if ((byte)uStack_3d0 >> 1 != 0) goto LAB_0598ba03;
LAB_0598baf5:
    pbVar32 = (byte *)0x0;
  }
  else {
    if (CONCAT17(uStack_3c1,CONCAT25(uStack_3c3,CONCAT14(uStack_3c4,uStack_3c8))) == 0)
    goto LAB_0598baf5;
LAB_0598ba03:
    if ((uStack_3d0 & 1) == 0) {
      pbVar21 = (byte *)((long)&uStack_3d0 + 1);
      if (pbVar21 != (byte *)0x0) goto LAB_0598ba2a;
      goto LAB_0598baf5;
    }
    pbVar21 = (byte *)CONCAT44(uStack_3bc,uStack_3c0);
    if (pbVar21 == (byte *)0x0) goto LAB_0598baf5;
LAB_0598ba2a:
    if (*pbVar21 == 0) goto LAB_0598baf5;
    pbVar32 = (byte *)0xcbf29ce484222325;
    uVar17 = func_0x0eee2e90(pbVar21);
    if (uVar17 != 0) {
      uVar30 = (ulong)((uint)uVar17 & 7);
      if (7 < uVar17) {
        uVar17 = uVar17 & 0xfffffffffffffff8;
        do {
          pbVar32 = (byte *)(((((((((long)pbVar32 * 0x100000001b3 ^ (ulong)*pbVar21) * 0x100000001b3
                                  ^ (ulong)pbVar21[1]) * 0x100000001b3 ^ (ulong)pbVar21[2]) *
                                 0x100000001b3 ^ (ulong)pbVar21[3]) * 0x100000001b3 ^
                               (ulong)pbVar21[4]) * 0x100000001b3 ^ (ulong)pbVar21[5]) *
                              0x100000001b3 ^ (ulong)pbVar21[6]) * 0x100000001b3 ^ (ulong)pbVar21[7]
                            );
          pbVar21 = pbVar21 + 8;
          uVar17 = uVar17 - 8;
        } while (uVar17 != 0);
      }
      if (uVar30 != 0) {
        uVar17 = 0;
        do {
          pbVar32 = (byte *)((long)pbVar32 * 0x100000001b3 ^ (ulong)pbVar21[uVar17]);
          uVar17 = uVar17 + 1;
        } while (uVar30 != uVar17);
      }
    }
  }
  pbStack_478 = (byte *)0x0;
  pbStack_3d8 = pbVar32;
  func_0x0564b850(&pbStack_470,&pbStack_328);
  bStack_390 = 0;
  uStack_38f = 0;
  uStack_38b = 0;
  uStack_38a = 0;
  pbStack_398 = &UNK_0effa688;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar18 = pbStack_478;
  puVar18[1] = pbStack_470;
  puVar18[5] = uStack_450;
  puVar18[3] = pbStack_460;
  puVar18[4] = plStack_458;
  pbStack_460 = (byte *)0x0;
  plStack_458 = (long *)0x0;
  uStack_450 = 0;
  puVar18[8] = uStack_438;
  puVar18[6] = uStack_448;
  puVar18[7] = uStack_440;
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  puVar18[0xb] = uStack_420;
  puVar18[9] = uStack_430;
  puVar18[10] = uStack_428;
  uStack_430 = 0;
  uStack_428 = 0;
  uStack_420 = 0;
  puVar18[0xe] = uStack_408;
  puVar18[0xc] = uStack_418;
  puVar18[0xd] = uStack_410;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  puVar18[0x11] = uStack_3f0;
  *(undefined4 *)(puVar18 + 0xf) = (undefined4)uStack_400;
  *(undefined4 *)((long)puVar18 + 0x7c) = uStack_400._4_4_;
  *(undefined4 *)(puVar18 + 0x10) = (undefined4)uStack_3f8;
  *(undefined4 *)((long)puVar18 + 0x84) = uStack_3f8._4_4_;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  bStack_390 = (byte)puVar18;
  uStack_38f = (undefined4)((ulong)puVar18 >> 8);
  uStack_38b = (undefined1)((ulong)puVar18 >> 0x28);
  uStack_38a = (undefined2)((ulong)puVar18 >> 0x30);
  lVar19 = func_0x059ca5a0(uVar28,&pbStack_3d8,&pbStack_398);
  if (pbStack_398 != (byte *)0x0) {
    (**(code **)(pbStack_398 + 8))(&pbStack_398);
  }
  if ((uStack_400 & 1) != 0) {
    func_0x0412a280(uStack_3f0,uStack_400 & 0xfffffffffffffffe);
  }
  if ((uStack_418 & 1) != 0) {
    func_0x0412a280(uStack_408,uStack_418 & 0xfffffffffffffffe);
  }
  if ((uStack_430 & 1) != 0) {
    func_0x0412a280(uStack_420,uStack_430 & 0xfffffffffffffffe);
  }
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(uStack_438,uStack_448 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_460 & 1) != 0) {
    func_0x0412a280(uStack_450,(ulong)pbStack_460 & 0xfffffffffffffffe);
  }
  if ((uStack_3d0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_3bc,uStack_3c0),
                    CONCAT17(uStack_3c9,CONCAT25(uStack_3cb,CONCAT14(uStack_3cc,uStack_3d0))) &
                    0xfffffffffffffffe);
  }
  pbStack_478 = (byte *)0x0;
  pbStack_470 = (byte *)((ulong)pbStack_470 & 0xffffffffffffff00);
  func_0x0564b850(&pbStack_468,&pbStack_328);
  uStack_3d0 = 0;
  uStack_3cc = 0;
  uStack_3cb = 0;
  uStack_3c9 = 0;
  pbStack_3d8 = &UNK_0effa6a0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  *(undefined1 *)(puVar18 + 1) = pbStack_470._0_1_;
  *puVar18 = pbStack_478;
  puVar18[2] = pbStack_468;
  puVar18[6] = uStack_448;
  puVar18[4] = plStack_458;
  puVar18[5] = uStack_450;
  plStack_458 = (long *)0x0;
  uStack_450 = 0;
  uStack_448 = 0;
  puVar18[9] = uStack_430;
  puVar18[7] = uStack_440;
  puVar18[8] = uStack_438;
  uStack_440 = 0;
  uStack_438 = 0;
  uStack_430 = 0;
  puVar18[0xc] = uStack_418;
  puVar18[10] = uStack_428;
  puVar18[0xb] = uStack_420;
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  puVar18[0xf] = uStack_400;
  puVar18[0xd] = uStack_410;
  puVar18[0xe] = uStack_408;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_400 = 0;
  puVar18[0x12] = uStack_3e8;
  *(undefined4 *)(puVar18 + 0x10) = (undefined4)uStack_3f8;
  *(undefined4 *)((long)puVar18 + 0x84) = uStack_3f8._4_4_;
  *(undefined4 *)(puVar18 + 0x11) = (undefined4)uStack_3f0;
  *(undefined4 *)((long)puVar18 + 0x8c) = uStack_3f0._4_4_;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3d0 = (uint)puVar18;
  uStack_3cc = (undefined1)((ulong)puVar18 >> 0x20);
  uStack_3cb = (undefined2)((ulong)puVar18 >> 0x28);
  uStack_3c9 = (undefined1)((ulong)puVar18 >> 0x38);
  ppbVar31 = (byte **)(lVar19 + 0x110);
  if (ppbVar31 == &pbStack_3d8) {
    func_0x0564b7b0(puVar18 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar18);
  }
  else {
    pbVar21 = &UNK_0effa6a0;
    if ((*ppbVar31 == (byte *)0x0) ||
       ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbVar21 = pbStack_3d8, pbStack_3d8 != (byte *)0x0))
    {
      (**(code **)pbVar21)(&pbStack_3d8,ppbVar31);
      pbVar21 = pbStack_3d8;
      pbStack_3d8 = (byte *)0x0;
      *ppbVar31 = pbVar21;
    }
    else {
      pbStack_3d8 = (byte *)0x0;
      *ppbVar31 = (byte *)0x0;
    }
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
  if ((uStack_440 & 1) != 0) {
    func_0x0412a280(uStack_430,uStack_440 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,(ulong)plStack_458 & 0xfffffffffffffffe);
  }
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,CONCAT44(uStack_2b4,uStack_2b8) & 0xfffffffffffffffe);
  }
  if ((bStack_2d0 & 1) != 0) {
    func_0x0412a280(uStack_2c0,CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
  }
  if ((bStack_2e8 & 1) != 0) {
    func_0x0412a280(uStack_2d8,CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
  }
  if ((bStack_300 & 1) != 0) {
    func_0x0412a280(uStack_2f0,CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
  }
  if ((uStack_318 & 1) != 0) {
    func_0x0412a280(uStack_308,CONCAT44(uStack_314,uStack_318) & 0xfffffffffffffffe);
  }
  if ((bStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,CONCAT62(uStack_56,CONCAT11(uStack_57,bStack_58)) & 0xfffffffffffffffe
                   );
  }
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(uStack_b8,
                    CONCAT53(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,bStack_c8))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,
                    CONCAT53(uStack_ad,CONCAT12(uStack_ae,CONCAT11(uStack_af,bStack_b0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_340 & 1) != 0) {
    func_0x0412a280(uStack_330,CONCAT71(uStack_33f,bStack_340) & 0xfffffffffffffffe);
  }
  uVar28 = *param_1;
  uStack_382 = 0;
  uStack_380 = 0;
  uStack_37f = 0;
  uStack_37d = 0;
  uStack_378 = 0;
  bStack_390 = 0x1a;
  uStack_38f = 0x746e6f63;
  uStack_38b = 0x72;
  uStack_38a = 0x6c6f;
  uStack_388 = 0x5f;
  uStack_387 = 0x67616c66;
  uStack_383 = 0x73;
  pbStack_398 = (byte *)0x86e3afe1b1c6e2ac;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  uStack_3cb = 0;
  uStack_3c9 = 0;
  pbStack_3d8 = &UNK_0effa8b0;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0effa6c8;
  pbStack_478 = (byte *)0x0;
  pbStack_470 = (byte *)0x0;
  if (pbStack_3d8 == (byte *)0x0) {
    pbStack_478 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_3d8)(&pbStack_3d8,&pbStack_478);
    pbStack_478 = pbStack_3d8;
  }
  pbStack_3d8 = (byte *)0x0;
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
  func_0x04aa75f0(plVar20 + 0xe,&lStack_98,&UNK_01254d89);
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
  plVar20[4] = (long)&UNK_0effa718;
  ppbVar31 = (byte **)(plVar20 + 0x2e);
  plVar20[0x2e] = 0;
  plVar20[0x2f] = 0;
  if (ppbVar31 != &pbStack_478) {
    if (pbStack_478 == (byte *)0x0) {
      pbVar21 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_478)(&pbStack_478,ppbVar31);
      pbVar21 = pbStack_478;
    }
    pbStack_478 = (byte *)0x0;
    *ppbVar31 = pbVar21;
  }
  puVar1 = (uint *)(plVar20 + 0x12);
  if (plVar24 != (long *)&DAT_0f551f58) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar20[0x14] = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar1 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar20 + 0x94) = uVar10;
        *(undefined4 *)(plVar20 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar20 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar37 = (_DAT_0f551f60 & 1) != 0;
      lVar19 = 0xf551f61;
      if (bVar37) {
        lVar19 = _DAT_0f551f70;
      }
      uVar17 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar37) {
        uVar17 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar1,lVar19,uVar17);
    }
  }
  plVar25 = plVar20 + 1;
  plVar20[0x11] = _DAT_0f551f58;
  plVar20[0x15] = 0;
  if (pbStack_478 != (byte *)0x0) {
    (**(code **)(pbStack_478 + 8))(&pbStack_478);
  }
  LOCK();
  *plVar25 = *plVar25 + 1;
  UNLOCK();
  pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar21 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
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
  *(undefined **)pbVar21 = &UNK_0effa810;
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
  *(undefined **)(pbVar21 + 0x20) = &UNK_0effa860;
  *(long **)(pbVar21 + 0x70) = plVar20 + 4;
  *(long **)(pbVar21 + 0x78) = plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  pbStack_478 = pbVar21 + 0x20;
  pbStack_470 = pbVar21;
  puVar22 = (undefined4 *)func_0x059c83c0(uVar28,&pbStack_398);
  plVar23 = *(long **)(puVar22 + 0x24);
  if (plVar23 < *(long **)(puVar22 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar24) {
      if ((*puVar1 & 1) == 0) {
        plVar23[3] = plVar20[0x14];
        lVar19 = plVar20[0x13];
        plVar23[1] = *(long *)puVar1;
        plVar23[2] = lVar19;
      }
      else {
        func_0x04885070(plVar23 + 1,plVar20[0x14],plVar20[0x13]);
      }
    }
    *plVar23 = *plVar24;
    plVar23[5] = (long)(pbVar21 + 0x20);
    plVar23[6] = (long)pbVar21;
    LOCK();
    *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar22 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x059ca1b0(puVar22 + 0x22,plVar24,&pbStack_478);
  }
  *(long **)(puVar22 + 0x24) = plVar23;
  uVar10 = *puVar22;
  uVar11 = puVar22[1];
  uVar12 = puVar22[2];
  uVar13 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar24 = (long *)(*(long *)(puVar22 + 2) + 8);
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
    plVar34 = plVar24 + 1;
    lVar19 = *plVar34;
    *plVar34 = *plVar34 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      func_0x0412c2d0(plVar24);
    }
  }
  pbVar21 = pbStack_470;
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  if (pbStack_470 != (byte *)0x0) {
    LOCK();
    pbVar32 = pbStack_470 + 8;
    lVar19 = *(long *)pbVar32;
    *(long *)pbVar32 = *(long *)pbVar32 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*(long *)pbStack_470 + 0x10))(pbStack_470);
      func_0x0412c2d0(pbVar21);
    }
  }
  LOCK();
  lVar19 = *plVar25;
  *plVar25 = *plVar25 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar19 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar19 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_3d8 != (byte *)0x0) {
    (**(code **)(pbStack_3d8 + 8))(&pbStack_3d8);
  }
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_37d,CONCAT21(uStack_37f,uStack_380)),
                    CONCAT26(uStack_38a,CONCAT15(uStack_38b,CONCAT41(uStack_38f,bStack_390))) &
                    0xfffffffffffffffe);
  }
  bStack_90 = 0;
  uStack_8f = 0;
  uStack_8b = (uint)uStack_8b._3_1_ << 0x18;
  bStack_390 = 0;
  uStack_38f = 0;
  uStack_38b = 0;
  uStack_38a = 0;
  lStack_98 = 0;
  pbStack_398 = &UNK_0effab00;
  plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar24 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  pbStack_478 = pbStack_398;
  plVar24[1] = 0;
  plVar24[2] = 0;
  *plVar24 = (long)&UNK_0effa8d8;
  pbStack_470 = (byte *)0x0;
  pbStack_398 = (byte *)0x0;
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
  func_0x04aa75f0(plVar24 + 0xe,&uStack_349,&UNK_01254d89);
  *(undefined1 *)(plVar24 + 0x10) = 0;
  pbVar21 = (byte *)(plVar24 + 0x11);
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
  plVar24[4] = (long)&UNK_0effa928;
  plVar24[0x2e] = 0;
  plVar24[0x2f] = 0;
  plVar24[0x30] = 0;
  plVar24[0x31] = 0;
  plVar24[0x32] = 0;
  plVar24[0x33] = 0;
  plVar24[0x34] = 0;
  *(undefined4 *)(plVar24 + 0x35) = 0x3f800000;
  plVar24[0x36] = 0;
  plVar24[0x37] = 0;
  if (pbStack_478 == (byte *)0x0) {
    pbVar32 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_478)(&pbStack_478,plVar24 + 0x36);
    pbVar32 = pbStack_478;
  }
  pbStack_478 = (byte *)0x0;
  plVar24[0x36] = (long)pbVar32;
  *(undefined1 *)(plVar24 + 0x3e) = 0;
  puStack_d0 = (uint *)(plVar24 + 0x12);
  if (pbVar21 != &DAT_0f552138) {
    plVar23 = plVar24 + 0x2e;
    if ((*puStack_d0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar24[0x14] = _DAT_0f552150;
        uVar12 = uRam000000000f55214c;
        uVar11 = _DAT_0f552148;
        uVar10 = uRam000000000f552144;
        *puStack_d0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar24 + 0x94) = uVar10;
        *(undefined4 *)(plVar24 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar24 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_d0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar37 = (_DAT_0f552140 & 1) != 0;
      lVar19 = 0xf552141;
      if (bVar37) {
        lVar19 = _DAT_0f552150;
      }
      uVar17 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar37) {
        uVar17 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_d0,lVar19,uVar17);
    }
  }
  plVar24[0x11] = _DAT_0f552138;
  plVar24[0x15] = 0;
  if (pbStack_478 != (byte *)0x0) {
    (**(code **)(pbStack_478 + 8))(&pbStack_478);
  }
  pbVar32 = (byte *)(plVar24 + 1);
  if (pbStack_398 != (byte *)0x0) {
    (**(code **)(pbStack_398 + 8))(&pbStack_398);
  }
  LOCK();
  *(long *)pbVar32 = *(long *)pbVar32 + 1;
  UNLOCK();
  pbStack_38 = pbVar32;
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar25[1] = 0;
  plVar25[2] = 0;
  *plVar25 = (long)&UNK_0effaa08;
  plVar25[6] = 0;
  plVar25[7] = 0;
  plVar25[4] = (long)&UNK_0effaa58;
  plVar25[0xe] = (long)(plVar24 + 4);
  plVar25[0xf] = (long)plVar24;
  LOCK();
  plVar24[1] = plVar24[1] + 1;
  UNLOCK();
  plVar34 = plVar25 + 1;
  plVar6 = (long *)plVar20[0x1c];
  plVar35 = (long *)plVar20[0x1b];
  plVar27 = plVar35;
  while (plVar27 != plVar6) {
    if ((plVar27[0xf] == 0) && (plVar27[0x10] == -1)) goto LAB_0598cd33;
    plVar27 = plVar27 + 0x15;
    plVar23 = plVar27;
  }
  if (plVar6 < (long *)plVar20[0x1d]) {
    func_0x05a104f0(plVar6);
    pbVar26 = (byte *)(plVar6 + 0x15);
    plVar20[0x1c] = (long)pbVar26;
LAB_0598ccca:
    plVar20[0x1c] = (long)pbVar26;
    pbVar32 = *(byte **)(pbVar26 + -0xa8);
    if ((*pbVar32 & 1) == 0) {
      *pbVar32 = 0x26;
      pbVar32 = pbVar32 + 1;
    }
    else {
      pbVar32[8] = 0x13;
      pbVar32[9] = 0;
      pbVar32[10] = 0;
      pbVar32[0xb] = 0;
      pbVar32[0xc] = 0;
      pbVar32[0xd] = 0;
      pbVar32[0xe] = 0;
      pbVar32[0xf] = 0;
      pbVar32 = *(byte **)(pbVar32 + 0x10);
    }
    uVar12 = _UNK_01494d69;
    uVar11 = _UNK_01494d65;
    uVar10 = _UNK_01494d61;
    *(undefined4 *)pbVar32 = _DAT_01494d5d;
    *(undefined4 *)(pbVar32 + 4) = uVar10;
    *(undefined4 *)(pbVar32 + 8) = uVar11;
    *(undefined4 *)(pbVar32 + 0xc) = uVar12;
    pbVar32[0xf] = 0x65;
    pbVar32[0x10] = 0x6e;
    pbVar32[0x11] = 0x74;
    pbVar32[0x12] = 0x3e;
    pbVar32[0x13] = 0;
    lVar19 = plVar20[0x1c];
    plVar27 = (long *)(lVar19 + -0xa8);
    *(char *)(lVar19 + -7) = (char)plVar20[0x10];
    *(undefined8 *)(lVar19 + -0x30) = 0;
    *(undefined8 *)(lVar19 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar19 + -8) = 0;
LAB_0598cd33:
    plVar35 = plVar25 + 4;
    pbVar32 = (byte *)plVar27[0x12];
    if (pbVar32 < (byte *)plVar27[0x13]) {
      pbVar32[0x10] = 0;
      pbVar32[0x11] = 0;
      pbVar32[0x12] = 0;
      pbVar32[0x13] = 0;
      pbVar32[0x14] = 0;
      pbVar32[0x15] = 0;
      pbVar32[0x16] = 0;
      pbVar32[0x17] = 0;
      pbVar32[0x18] = 0;
      pbVar32[0x19] = 0;
      pbVar32[0x1a] = 0;
      pbVar32[0x1b] = 0;
      pbVar32[0x1c] = 0;
      pbVar32[0x1d] = 0;
      pbVar32[0x1e] = 0;
      pbVar32[0x1f] = 0;
      pbVar32[0] = 0;
      pbVar32[1] = 0;
      pbVar32[2] = 0;
      pbVar32[3] = 0;
      pbVar32[4] = 0;
      pbVar32[5] = 0;
      pbVar32[6] = 0;
      pbVar32[7] = 0;
      pbVar32[8] = 0;
      pbVar32[9] = 0;
      pbVar32[10] = 0;
      pbVar32[0xb] = 0;
      pbVar32[0xc] = 0;
      pbVar32[0xd] = 0;
      pbVar32[0xe] = 0;
      pbVar32[0xf] = 0;
      pbVar32[0x20] = 0;
      pbVar32[0x21] = 0;
      pbVar32[0x22] = 0;
      pbVar32[0x23] = 0;
      pbVar32[0x24] = 0;
      pbVar32[0x25] = 0;
      pbVar32[0x26] = 0;
      pbVar32[0x27] = 0;
      if (pbVar32 != pbVar21) {
        if ((*puStack_d0 & 1) == 0) {
          *(long *)(pbVar32 + 0x18) = *(long *)(puStack_d0 + 4);
          lVar19 = *(long *)(puStack_d0 + 2);
          *(long *)(pbVar32 + 8) = *(long *)puStack_d0;
          *(long *)(pbVar32 + 0x10) = lVar19;
        }
        else {
          func_0x04885070(pbVar32 + 8,plVar24[0x14],plVar24[0x13]);
        }
      }
      *(long *)pbVar32 = *(long *)pbVar21;
      *(long **)(pbVar32 + 0x28) = plVar35;
      *(long **)(pbVar32 + 0x30) = plVar25;
      LOCK();
      plVar25[1] = plVar25[1] + 1;
      UNLOCK();
      pbVar32 = pbVar32 + 0x38;
      plVar27[0x12] = (long)pbVar32;
      goto LAB_0598d074;
    }
    pbVar32 = pbVar32 + -plVar27[0x11];
    plVar33 = (long *)(((long)pbVar32 >> 3) * 0x6db6db6db6db6db7 + 1);
    plVar23 = plVar27;
    if (plVar33 < (long *)0x492492492492493) {
      lVar19 = plVar27[0x13] - plVar27[0x11] >> 3;
      plVar23 = (long *)(lVar19 * -0x2492492492492492);
      if (plVar33 < plVar23) {
        plVar33 = plVar23;
      }
      plStack_458 = plVar27 + 0x11;
      if (0x249249249249248 < (ulong)(lVar19 * 0x6db6db6db6db6db7)) {
        plVar33 = (long *)0x492492492492492;
      }
      plStack_348 = plVar35;
      plStack_40 = plStack_458;
      if (plVar33 == (long *)0x0) {
        pbVar26 = (byte *)0x0;
      }
      else {
        if ((long *)0x492492492492492 < plVar33) goto LAB_0598ef2d;
        pbVar26 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar33 * 0x38);
        if (pbVar26 == (byte *)0x0) {
          func_0x0eec74c0((long)plVar33 * 0x38,0);
          pbVar26 = (byte *)0x0;
        }
      }
      pbVar3 = pbVar26 + (long)pbVar32;
      pbStack_460 = pbVar26 + (long)plVar33 * 0x38;
      pbVar4 = pbVar26 + 0x10 + (long)pbVar32;
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
      pbVar4 = pbVar26 + (long)pbVar32;
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
      pbVar4 = pbVar26 + 0x20 + (long)pbVar32;
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4[4] = 0;
      pbVar4[5] = 0;
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      pbStack_468 = pbVar3;
      pbStack_478 = pbVar26;
      pbStack_470 = pbVar3;
      if (pbVar3 != pbVar21) {
        if ((*puStack_d0 & 1) == 0) {
          *(long *)(pbVar32 + (long)(pbVar26 + 0x18)) = *(long *)(puStack_d0 + 4);
          uVar14 = puStack_d0[1];
          uVar15 = puStack_d0[2];
          uVar16 = puStack_d0[3];
          *(uint *)(pbVar32 + (long)(pbVar26 + 8)) = *puStack_d0;
          *(uint *)(pbVar32 + (long)(pbVar26 + 0xc)) = uVar14;
          *(uint *)(pbVar32 + (long)(pbVar26 + 0x10)) = uVar15;
          *(uint *)(pbVar32 + (long)(pbVar26 + 0x14)) = uVar16;
        }
        else {
          func_0x04885070(pbVar32 + (long)(pbVar26 + 8),plVar24[0x14],plVar24[0x13]);
        }
      }
      *(long *)pbVar3 = *(long *)pbVar21;
      *(long **)(pbVar3 + 0x28) = plStack_348;
      *(long **)(pbVar3 + 0x30) = plVar25;
      LOCK();
      plVar25[1] = plVar25[1] + 1;
      UNLOCK();
      pbStack_468 = pbStack_468 + 0x38;
      puVar18 = (undefined8 *)plVar27[0x11];
      puVar8 = (undefined8 *)plVar27[0x12];
      pbVar21 = pbStack_470 + ((long)puVar18 - (long)puVar8);
      pbVar32 = pbVar21;
      puVar29 = puVar18;
      if ((long)puVar18 - (long)puVar8 != 0) {
        do {
          pbVar32[0x10] = 0;
          pbVar32[0x11] = 0;
          pbVar32[0x12] = 0;
          pbVar32[0x13] = 0;
          pbVar32[0x14] = 0;
          pbVar32[0x15] = 0;
          pbVar32[0x16] = 0;
          pbVar32[0x17] = 0;
          pbVar32[0x18] = 0;
          pbVar32[0x19] = 0;
          pbVar32[0x1a] = 0;
          pbVar32[0x1b] = 0;
          pbVar32[0x1c] = 0;
          pbVar32[0x1d] = 0;
          pbVar32[0x1e] = 0;
          pbVar32[0x1f] = 0;
          pbVar32[0] = 0;
          pbVar32[1] = 0;
          pbVar32[2] = 0;
          pbVar32[3] = 0;
          pbVar32[4] = 0;
          pbVar32[5] = 0;
          pbVar32[6] = 0;
          pbVar32[7] = 0;
          pbVar32[8] = 0;
          pbVar32[9] = 0;
          pbVar32[10] = 0;
          pbVar32[0xb] = 0;
          pbVar32[0xc] = 0;
          pbVar32[0xd] = 0;
          pbVar32[0xe] = 0;
          pbVar32[0xf] = 0;
          pbVar32[0x20] = 0;
          pbVar32[0x21] = 0;
          pbVar32[0x22] = 0;
          pbVar32[0x23] = 0;
          pbVar32[0x24] = 0;
          pbVar32[0x25] = 0;
          pbVar32[0x26] = 0;
          pbVar32[0x27] = 0;
          *(undefined8 *)(pbVar32 + 0x18) = puVar29[3];
          uVar28 = puVar29[2];
          *(undefined8 *)(pbVar32 + 8) = puVar29[1];
          *(undefined8 *)(pbVar32 + 0x10) = uVar28;
          *(undefined2 *)(puVar29 + 1) = 0;
          *(undefined8 *)pbVar32 = *puVar29;
          uVar10 = *(undefined4 *)((long)puVar29 + 0x2c);
          uVar11 = *(undefined4 *)(puVar29 + 6);
          uVar12 = *(undefined4 *)((long)puVar29 + 0x34);
          *(undefined4 *)(pbVar32 + 0x28) = *(undefined4 *)(puVar29 + 5);
          *(undefined4 *)(pbVar32 + 0x2c) = uVar10;
          *(undefined4 *)(pbVar32 + 0x30) = uVar11;
          *(undefined4 *)(pbVar32 + 0x34) = uVar12;
          puVar29[5] = 0;
          puVar29[6] = 0;
          puVar29 = puVar29 + 7;
          pbVar32 = pbVar32 + 0x38;
        } while (puVar29 != puVar8);
        do {
          plVar23 = (long *)puVar18[6];
          if (plVar23 == (long *)0x0) {
LAB_0598cff4:
            bVar5 = *(byte *)(puVar18 + 1);
          }
          else {
            LOCK();
            plVar35 = plVar23 + 1;
            lVar19 = *plVar35;
            *plVar35 = *plVar35 + -1;
            UNLOCK();
            if (lVar19 != 0) goto LAB_0598cff4;
            (**(code **)(*plVar23 + 0x10))(plVar23);
            func_0x0412c2d0(plVar23);
            bVar5 = *(byte *)(puVar18 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar18[3],puVar18[1] & 0xfffffffffffffffe);
          }
          puVar18 = puVar18 + 7;
        } while (puVar18 != puVar8);
        puVar18 = (undefined8 *)*plStack_40;
      }
      pbVar32 = pbStack_468;
      plVar27[0x11] = (long)pbVar21;
      plVar27[0x12] = (long)pbStack_468;
      lVar19 = plVar27[0x13];
      plVar27[0x13] = (long)pbStack_460;
      if (puVar18 != (undefined8 *)0x0) {
        func_0x0412a280(puVar18,lVar19 - (long)puVar18);
      }
LAB_0598d074:
      plVar27[0x12] = (long)pbVar32;
      lVar19 = *plVar27;
      uVar10 = *(undefined4 *)((long)plVar27 + 4);
      lVar7 = plVar27[1];
      uVar11 = *(undefined4 *)((long)plVar27 + 0xc);
      if (plVar27[1] != 0) {
        LOCK();
        plVar23 = (long *)(plVar27[1] + 8);
        *plVar23 = *plVar23 + 1;
        UNLOCK();
      }
      plVar23 = (long *)plVar24[0xf];
      *(int *)(plVar24 + 0xe) = (int)lVar19;
      *(undefined4 *)((long)plVar24 + 0x74) = uVar10;
      *(int *)(plVar24 + 0xf) = (int)lVar7;
      *(undefined4 *)((long)plVar24 + 0x7c) = uVar11;
      if (plVar23 != (long *)0x0) {
        LOCK();
        plVar35 = plVar23 + 1;
        lVar19 = *plVar35;
        *plVar35 = *plVar35 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          func_0x0412c2d0(plVar23);
        }
      }
      *(undefined1 *)(plVar24 + 0x10) = *(undefined1 *)((long)plVar27 + 0xa1);
      LOCK();
      lVar19 = *plVar34;
      *plVar34 = *plVar34 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        func_0x0412c2d0(plVar25);
      }
      pbVar21 = pbStack_38;
      LOCK();
      lVar19 = *(long *)pbStack_38;
      *(long *)pbStack_38 = *(long *)pbStack_38 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
        LOCK();
        lVar19 = *(long *)pbVar21;
        *(long *)pbVar21 = *(long *)pbVar21 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar19 = *(long *)pbStack_38;
        *(long *)pbStack_38 = *(long *)pbStack_38 + -1;
        UNLOCK();
      }
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
      }
      if (lStack_98 != 0) {
        (**(code **)(lStack_98 + 8))(&lStack_98);
      }
      ppbVar31 = (byte **)(plVar20 + 0x26);
      pbStack_470 = (byte *)0x0;
      pbStack_478 = &UNK_0effab18;
      if (ppbVar31 != &pbStack_478) {
        if ((*ppbVar31 == (byte *)0x0) ||
           ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbStack_478 != (byte *)0x0)) {
          (**(code **)pbStack_478)(&pbStack_478,ppbVar31);
          pbVar21 = pbStack_478;
        }
        else {
          pbVar21 = (byte *)0x0;
        }
        *ppbVar31 = pbVar21;
      }
      if ((uStack_2a0 & 1) != 0) {
        func_0x0412a280(puStack_290,uStack_2a0 & 0xfffffffffffffffe);
      }
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_e8);
      if ((uStack_e8 & 1) != 0) {
        func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
      }
      uVar28 = *param_1;
      plVar20 = (long *)param_1[1];
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
      }
      plVar24 = (long *)func_0x0598fde0(_DAT_011983f0,uVar28,plVar20,8,&UNK_01222e20);
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      (**(code **)(*plVar24 + 0x18))(plVar24,&uStack_108,&uStack_128);
      if ((uStack_128 & 1) != 0) {
        func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
      }
      if ((uStack_108 & 1) != 0) {
        func_0x0412a280(uStack_f8,uStack_108 & 0xfffffffffffffffe);
      }
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar19 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      uVar28 = *param_1;
      plVar20 = (long *)param_1[1];
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
      }
      plVar24 = (long *)func_0x0598fde0(_DAT_011983f0,uVar28,plVar20,0xc,&UNK_0135c83d);
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      (**(code **)(*plVar24 + 0x18))(plVar24,&uStack_148,&uStack_168);
      if ((uStack_168 & 1) != 0) {
        func_0x0412a280(uStack_158,uStack_168 & 0xfffffffffffffffe);
      }
      if ((uStack_148 & 1) != 0) {
        func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
      }
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar19 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      uVar28 = *param_1;
      plVar20 = (long *)param_1[1];
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
      }
      uStack_37d = 0;
      uStack_378 = 0;
      bStack_390 = 0x24;
      uStack_38f = _DAT_0123d676;
      uStack_38b = (undefined1)_UNK_0123d67a;
      uStack_38a = (undefined2)((uint)_UNK_0123d67a >> 8);
      uStack_388 = (undefined1)((uint)_UNK_0123d67a >> 0x18);
      uStack_387 = _UNK_0123d67e;
      uStack_383 = (undefined1)_UNK_0123d682;
      uStack_382 = (undefined2)((uint)_UNK_0123d682 >> 8);
      uStack_380 = (undefined1)((uint)_UNK_0123d682 >> 0x18);
      uStack_37f = 0x6874;
      pbStack_398 = (byte *)0xe67bdc45ee77e1e9;
      pbStack_478 = &UNK_0eff5fb8;
      pbStack_470 = (byte *)0x10;
      plVar24 = (long *)func_0x059ca5a0(uVar28,&pbStack_398,&pbStack_478);
      if (pbStack_478 != (byte *)0x0) {
        (**(code **)(pbStack_478 + 8))(&pbStack_478);
      }
      if ((bStack_390 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_37d,CONCAT21(uStack_37f,uStack_380)),
                        CONCAT26(uStack_38a,CONCAT15(uStack_38b,CONCAT41(uStack_38f,bStack_390))) &
                        0xfffffffffffffffe);
      }
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar25 = plVar20 + 1;
        lVar19 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      pbStack_328 = &UNK_0eff5fd0;
      pbStack_320 = (byte *)0x10;
      uStack_318 = 0;
      ppbVar31 = (byte **)(plVar24 + 0x22);
      if (ppbVar31 != &pbStack_328) {
        if ((*ppbVar31 == (byte *)0x0) ||
           ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbStack_328 != (byte *)0x0)) {
          (**(code **)pbStack_328)(&pbStack_328,ppbVar31);
          pbVar21 = pbStack_328;
        }
        else {
          pbVar21 = (byte *)0x0;
        }
        *ppbVar31 = pbVar21;
      }
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      (**(code **)(*plVar24 + 0x18))(plVar24,&uStack_188,&uStack_1a8);
      if ((uStack_1a8 & 1) != 0) {
        func_0x0412a280(uStack_198,uStack_1a8 & 0xfffffffffffffffe);
      }
      if ((uStack_188 & 1) != 0) {
        func_0x0412a280(uStack_178,uStack_188 & 0xfffffffffffffffe);
      }
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar19 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      uVar28 = *param_1;
      plVar20 = (long *)param_1[1];
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
      }
      uStack_3bc = 0;
      uStack_3b8 = 0;
      uStack_3d0 = CONCAT31((int3)_DAT_0141322f,0x26);
      uStack_3cc = (undefined1)((uint)_DAT_0141322f >> 0x18);
      uStack_3cb = (undefined2)_UNK_01413233;
      uStack_3c9 = (undefined1)((uint)_UNK_01413233 >> 0x10);
      uStack_3c8._1_3_ = (undefined3)_UNK_01413237;
      uStack_3c8 = CONCAT31(uStack_3c8._1_3_,(char)((uint)_UNK_01413233 >> 0x18));
      uStack_3c4 = (undefined1)((uint)_UNK_01413237 >> 0x18);
      uStack_3c3 = (undefined2)_UNK_0141323b;
      uStack_3c1 = (undefined1)((uint)_UNK_0141323b >> 0x10);
      uStack_3c0 = 0x65676e61;
      pbStack_3d8 = (byte *)0x50ea010660f1de96;
      bStack_390 = 0x18;
      uStack_38f = 0;
      uStack_38b = 0;
      uStack_38a = 0;
      pbStack_320 = (byte *)0x18;
      pbStack_398 = (byte *)0x0;
      pbStack_328 = &UNK_0eff61c8;
      plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar24 == (long *)0x0) {
        func_0x0eec74c0(0x1c0,0);
      }
      pbStack_478 = pbStack_328;
      plVar24[1] = 0;
      plVar24[2] = 0;
      *plVar24 = (long)&UNK_0eff5ff8;
      pbStack_328 = (byte *)0x0;
      pbStack_470 = pbStack_320;
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
      func_0x04aa75f0(plVar24 + 0xe,&lStack_98,&UNK_01254d89);
      *(undefined1 *)(plVar24 + 0x10) = 0;
      plVar25 = plVar24 + 0x11;
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
      plVar24[4] = (long)&UNK_0eff6048;
      plVar24[0x2e] = 0x7fffffff80000001;
      plVar24[0x30] = 0;
      plVar24[0x31] = 0;
      if (pbStack_478 == (byte *)0x0) {
        pbVar21 = (byte *)0x0;
      }
      else {
        (**(code **)pbStack_478)(&pbStack_478,plVar24 + 0x30);
        pbVar21 = pbStack_478;
      }
      plVar23 = plVar24 + 4;
      pbStack_478 = (byte *)0x0;
      plVar24[0x30] = (long)pbVar21;
      puVar1 = (uint *)(plVar24 + 0x12);
      if (plVar25 == (long *)&DAT_0f5520a8) {
        plVar24[0x15] = 0;
      }
      else {
        if ((*puVar1 & 1) == 0) {
          if ((_DAT_0f5520b0 & 1) == 0) {
            plVar24[0x14] = _DAT_0f5520c0;
            uVar12 = uRam000000000f5520bc;
            uVar11 = _DAT_0f5520b8;
            uVar10 = uRam000000000f5520b4;
            *puVar1 = _DAT_0f5520b0;
            *(undefined4 *)((long)plVar24 + 0x94) = uVar10;
            *(undefined4 *)(plVar24 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar24 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puVar1,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
          }
        }
        else {
          bVar37 = (_DAT_0f5520b0 & 1) != 0;
          lVar19 = 0xf5520b1;
          if (bVar37) {
            lVar19 = _DAT_0f5520c0;
          }
          uVar17 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
          if (bVar37) {
            uVar17 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
          }
          func_0x04885120(puVar1,lVar19,uVar17);
        }
        plVar24[0x11] = _DAT_0f5520a8;
        plVar24[0x15] = 0;
        if (pbStack_478 != (byte *)0x0) {
          (**(code **)(pbStack_478 + 8))(&pbStack_478);
        }
      }
      plVar34 = plVar24 + 1;
      if (pbStack_328 != (byte *)0x0) {
        (**(code **)(pbStack_328 + 8))(&pbStack_328);
      }
      LOCK();
      *plVar34 = *plVar34 + 1;
      UNLOCK();
      pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (pbVar21 == (byte *)0x0) {
        func_0x0eec74c0(0x80,0);
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
      *(undefined **)pbVar21 = &UNK_0eff6128;
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
      *(undefined **)(pbVar21 + 0x20) = &UNK_0eff6178;
      *(long **)(pbVar21 + 0x70) = plVar23;
      *(long **)(pbVar21 + 0x78) = plVar24;
      LOCK();
      plVar24[1] = plVar24[1] + 1;
      UNLOCK();
      pbStack_478 = pbVar21 + 0x20;
      pbStack_470 = pbVar21;
      puVar22 = (undefined4 *)func_0x059c83c0(uVar28,&pbStack_3d8);
      plVar27 = *(long **)(puVar22 + 0x24);
      if (plVar27 < *(long **)(puVar22 + 0x26)) {
        plVar27[2] = 0;
        plVar27[3] = 0;
        *plVar27 = 0;
        plVar27[1] = 0;
        plVar27[4] = 0;
        if (plVar27 != plVar25) {
          if ((*puVar1 & 1) == 0) {
            plVar27[3] = plVar24[0x14];
            lVar19 = plVar24[0x13];
            plVar27[1] = *(long *)puVar1;
            plVar27[2] = lVar19;
          }
          else {
            func_0x04885070(plVar27 + 1,plVar24[0x14],plVar24[0x13]);
          }
        }
        *plVar27 = *plVar25;
        plVar27[5] = (long)(pbVar21 + 0x20);
        plVar27[6] = (long)pbVar21;
        LOCK();
        *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
        UNLOCK();
        plVar27 = plVar27 + 7;
        *(long **)(puVar22 + 0x24) = plVar27;
      }
      else {
        plVar27 = (long *)func_0x059ca1b0(puVar22 + 0x22,plVar25,&pbStack_478);
      }
      *(long **)(puVar22 + 0x24) = plVar27;
      uVar10 = *puVar22;
      uVar11 = puVar22[1];
      uVar12 = puVar22[2];
      uVar13 = puVar22[3];
      if (*(long *)(puVar22 + 2) != 0) {
        LOCK();
        plVar25 = (long *)(*(long *)(puVar22 + 2) + 8);
        *plVar25 = *plVar25 + 1;
        UNLOCK();
      }
      plVar25 = (long *)plVar24[0xf];
      *(undefined4 *)(plVar24 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar24 + 0x74) = uVar11;
      *(undefined4 *)(plVar24 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar24 + 0x7c) = uVar13;
      if (plVar25 != (long *)0x0) {
        LOCK();
        plVar27 = plVar25 + 1;
        lVar19 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          func_0x0412c2d0(plVar25);
        }
      }
      pbVar21 = pbStack_470;
      *(undefined1 *)(plVar24 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
      if (pbStack_470 != (byte *)0x0) {
        LOCK();
        pbVar32 = pbStack_470 + 8;
        lVar19 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*(long *)pbStack_470 + 0x10))(pbStack_470);
          func_0x0412c2d0(pbVar21);
        }
      }
      LOCK();
      lVar19 = *plVar34;
      *plVar34 = *plVar34 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
        LOCK();
        lVar19 = *plVar34;
        *plVar34 = *plVar34 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar19 = *plVar34;
        *plVar34 = *plVar34 + -1;
        UNLOCK();
      }
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
      }
      if (pbStack_398 != (byte *)0x0) {
        (**(code **)(pbStack_398 + 8))(&pbStack_398);
      }
      if ((uStack_3d0 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_3bc,uStack_3c0),
                        CONCAT17(uStack_3c9,CONCAT25(uStack_3cb,CONCAT14(uStack_3cc,uStack_3d0))) &
                        0xfffffffffffffffe);
      }
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_1c8,&uStack_1e8);
      if ((uStack_1e8 & 1) != 0) {
        func_0x0412a280(uStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
      }
      if ((uStack_1c8 & 1) != 0) {
        func_0x0412a280(uStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
      }
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar19 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      uVar28 = *param_1;
      plVar20 = (long *)param_1[1];
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
      }
      uStack_3c0 = 0;
      uStack_3bc = 0;
      uStack_3b8 = 0;
      uStack_3d0 = 0x6d61641c;
      uStack_3cc = 0x61;
      uStack_3cb = 0x6567;
      uStack_3c9 = 0x5f;
      uStack_3c8 = 0x72756f73;
      uStack_3c4 = 99;
      uStack_3c3 = 0x7365;
      uStack_3c1 = 0;
      pbStack_3d8 = (byte *)0x4533c6c854b9c925;
      bStack_390 = 0x20;
      uStack_38f = 0;
      uStack_38b = 0;
      uStack_38a = 0;
      pbStack_320 = (byte *)0x20;
      pbStack_398 = (byte *)0x0;
      pbStack_328 = &UNK_0eff63c0;
      plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar24 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      pbStack_478 = pbStack_328;
      plVar24[1] = 0;
      plVar24[2] = 0;
      *plVar24 = (long)&UNK_0eff61f0;
      pbStack_328 = (byte *)0x0;
      pbStack_470 = pbStack_320;
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
      func_0x04aa75f0(plVar24 + 0xe,&lStack_98,&UNK_01254d89);
      *(undefined1 *)(plVar24 + 0x10) = 0;
      plVar25 = plVar24 + 0x11;
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
      plVar24[4] = (long)&UNK_0eff6240;
      plVar24[0x2e] = 0;
      plVar24[0x2f] = 0;
      if (pbStack_478 == (byte *)0x0) {
        pbVar21 = (byte *)0x0;
      }
      else {
        (**(code **)pbStack_478)(&pbStack_478,plVar24 + 0x2e);
        pbVar21 = pbStack_478;
      }
      plVar23 = plVar24 + 4;
      pbStack_478 = (byte *)0x0;
      plVar24[0x2e] = (long)pbVar21;
      puVar1 = (uint *)(plVar24 + 0x12);
      if (plVar25 == (long *)&DAT_0f551ec8) {
        plVar24[0x15] = 0;
      }
      else {
        if ((*puVar1 & 1) == 0) {
          if ((_DAT_0f551ed0 & 1) == 0) {
            plVar24[0x14] = _DAT_0f551ee0;
            uVar12 = uRam000000000f551edc;
            uVar11 = _DAT_0f551ed8;
            uVar10 = uRam000000000f551ed4;
            *puVar1 = _DAT_0f551ed0;
            *(undefined4 *)((long)plVar24 + 0x94) = uVar10;
            *(undefined4 *)(plVar24 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar24 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puVar1,_DAT_0f551ee0,CONCAT44(uRam000000000f551edc,_DAT_0f551ed8));
          }
        }
        else {
          bVar37 = (_DAT_0f551ed0 & 1) != 0;
          lVar19 = 0xf551ed1;
          if (bVar37) {
            lVar19 = _DAT_0f551ee0;
          }
          uVar17 = (ulong)((_DAT_0f551ed0 & 0xff) >> 1);
          if (bVar37) {
            uVar17 = CONCAT44(uRam000000000f551edc,_DAT_0f551ed8);
          }
          func_0x04885120(puVar1,lVar19,uVar17);
        }
        plVar24[0x11] = _DAT_0f551ec8;
        plVar24[0x15] = 0;
        if (pbStack_478 != (byte *)0x0) {
          (**(code **)(pbStack_478 + 8))(&pbStack_478);
        }
      }
      plVar34 = plVar24 + 1;
      if (pbStack_328 != (byte *)0x0) {
        (**(code **)(pbStack_328 + 8))(&pbStack_328);
      }
      LOCK();
      *plVar34 = *plVar34 + 1;
      UNLOCK();
      pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (pbVar21 == (byte *)0x0) {
        func_0x0eec74c0(0x80,0);
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
      *(undefined **)pbVar21 = &UNK_0eff6320;
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
      *(undefined **)(pbVar21 + 0x20) = &UNK_0eff6370;
      *(long **)(pbVar21 + 0x70) = plVar23;
      *(long **)(pbVar21 + 0x78) = plVar24;
      LOCK();
      plVar24[1] = plVar24[1] + 1;
      UNLOCK();
      pbStack_478 = pbVar21 + 0x20;
      pbStack_470 = pbVar21;
      puVar22 = (undefined4 *)func_0x059c83c0(uVar28,&pbStack_3d8);
      plVar27 = *(long **)(puVar22 + 0x24);
      if (plVar27 < *(long **)(puVar22 + 0x26)) {
        plVar27[2] = 0;
        plVar27[3] = 0;
        *plVar27 = 0;
        plVar27[1] = 0;
        plVar27[4] = 0;
        if (plVar27 != plVar25) {
          if ((*puVar1 & 1) == 0) {
            plVar27[3] = plVar24[0x14];
            lVar19 = plVar24[0x13];
            plVar27[1] = *(long *)puVar1;
            plVar27[2] = lVar19;
          }
          else {
            func_0x04885070(plVar27 + 1,plVar24[0x14],plVar24[0x13]);
          }
        }
        *plVar27 = *plVar25;
        plVar27[5] = (long)(pbVar21 + 0x20);
        plVar27[6] = (long)pbVar21;
        LOCK();
        *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
        UNLOCK();
        plVar27 = plVar27 + 7;
        *(long **)(puVar22 + 0x24) = plVar27;
      }
      else {
        plVar27 = (long *)func_0x059ca1b0(puVar22 + 0x22,plVar25,&pbStack_478);
      }
      *(long **)(puVar22 + 0x24) = plVar27;
      uVar10 = *puVar22;
      uVar11 = puVar22[1];
      uVar12 = puVar22[2];
      uVar13 = puVar22[3];
      if (*(long *)(puVar22 + 2) != 0) {
        LOCK();
        plVar25 = (long *)(*(long *)(puVar22 + 2) + 8);
        *plVar25 = *plVar25 + 1;
        UNLOCK();
      }
      plVar25 = (long *)plVar24[0xf];
      *(undefined4 *)(plVar24 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar24 + 0x74) = uVar11;
      *(undefined4 *)(plVar24 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar24 + 0x7c) = uVar13;
      if (plVar25 != (long *)0x0) {
        LOCK();
        plVar27 = plVar25 + 1;
        lVar19 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          func_0x0412c2d0(plVar25);
        }
      }
      pbVar21 = pbStack_470;
      *(undefined1 *)(plVar24 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
      if (pbStack_470 != (byte *)0x0) {
        LOCK();
        pbVar32 = pbStack_470 + 8;
        lVar19 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*(long *)pbStack_470 + 0x10))(pbStack_470);
          func_0x0412c2d0(pbVar21);
        }
      }
      LOCK();
      lVar19 = *plVar34;
      *plVar34 = *plVar34 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
        LOCK();
        lVar19 = *plVar34;
        *plVar34 = *plVar34 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar19 = *plVar34;
        *plVar34 = *plVar34 + -1;
        UNLOCK();
      }
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
      }
      if (pbStack_398 != (byte *)0x0) {
        (**(code **)(pbStack_398 + 8))(&pbStack_398);
      }
      if ((uStack_3d0 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_3bc,uStack_3c0),
                        CONCAT17(uStack_3c9,CONCAT25(uStack_3cb,CONCAT14(uStack_3cc,uStack_3d0))) &
                        0xfffffffffffffffe);
      }
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_208,&uStack_228);
      if ((uStack_228 & 1) != 0) {
        func_0x0412a280(uStack_218,uStack_228 & 0xfffffffffffffffe);
      }
      if ((uStack_208 & 1) != 0) {
        func_0x0412a280(uStack_1f8,uStack_208 & 0xfffffffffffffffe);
      }
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar19 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      uVar28 = *param_1;
      plVar20 = (long *)param_1[1];
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
      }
      uStack_7d = 0;
      uStack_78 = 0;
      bStack_90 = 0x24;
      uStack_8f = _DAT_014aeac8;
      uStack_8b = _UNK_014aeacc;
      uStack_87 = _UNK_014aead0;
      uStack_83 = _UNK_014aead4;
      uStack_7f = 0x6e6f;
      lStack_98 = -0x7fd36ab56c0862b1;
      bStack_390 = 0x14;
      uStack_38f = 0;
      uStack_38b = 0;
      uStack_38a = 0;
      pbStack_320 = (byte *)0x14;
      pbStack_398 = (byte *)0x0;
      pbStack_328 = &UNK_0eff65b8;
      plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
      if (plVar24 == (long *)0x0) {
        func_0x0eec74c0(0x1d0,0);
      }
      pbStack_478 = pbStack_328;
      plVar24[1] = 0;
      plVar24[2] = 0;
      *plVar24 = (long)&UNK_0eff63e8;
      pbStack_328 = (byte *)0x0;
      pbStack_470 = pbStack_320;
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
      func_0x04aa75f0(plVar24 + 0xe,&bStack_340,&UNK_01254d89);
      *(undefined1 *)(plVar24 + 0x10) = 0;
      plVar25 = plVar24 + 0x11;
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
      plVar24[4] = (long)&UNK_0eff6438;
      plVar24[0x2f] = 0;
      plVar24[0x30] = 0;
      plVar24[0x2e] = (long)(plVar24 + 0x2f);
      ppbVar31 = (byte **)(plVar24 + 0x32);
      plVar24[0x32] = 0;
      plVar24[0x33] = 0;
      if (ppbVar31 != &pbStack_478) {
        if (pbStack_478 == (byte *)0x0) {
          pbVar21 = (byte *)0x0;
        }
        else {
          (**(code **)pbStack_478)(&pbStack_478,ppbVar31);
          pbVar21 = pbStack_478;
        }
        pbStack_478 = (byte *)0x0;
        *ppbVar31 = pbVar21;
      }
      plVar23 = plVar24 + 4;
      puVar1 = (uint *)(plVar24 + 0x12);
      if (plVar25 != (long *)&DAT_0f551f88) {
        if ((*puVar1 & 1) == 0) {
          if ((_DAT_0f551f90 & 1) == 0) {
            plVar24[0x14] = _DAT_0f551fa0;
            uVar12 = uRam000000000f551f9c;
            uVar11 = _DAT_0f551f98;
            uVar10 = uRam000000000f551f94;
            *puVar1 = _DAT_0f551f90;
            *(undefined4 *)((long)plVar24 + 0x94) = uVar10;
            *(undefined4 *)(plVar24 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar24 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puVar1,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
          }
        }
        else {
          bVar37 = (_DAT_0f551f90 & 1) != 0;
          lVar19 = 0xf551f91;
          if (bVar37) {
            lVar19 = _DAT_0f551fa0;
          }
          uVar17 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
          if (bVar37) {
            uVar17 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
          }
          func_0x04885120(puVar1,lVar19,uVar17);
        }
      }
      plVar24[0x11] = _DAT_0f551f88;
      plVar24[0x15] = 0;
      if (pbStack_478 != (byte *)0x0) {
        (**(code **)(pbStack_478 + 8))(&pbStack_478);
      }
      plVar34 = plVar24 + 1;
      if (pbStack_328 != (byte *)0x0) {
        (**(code **)(pbStack_328 + 8))(&pbStack_328);
      }
      LOCK();
      *plVar34 = *plVar34 + 1;
      UNLOCK();
      pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (pbVar21 == (byte *)0x0) {
        func_0x0eec74c0(0x80,0);
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
      *(undefined **)pbVar21 = &UNK_0eff6518;
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
      *(undefined **)(pbVar21 + 0x20) = &UNK_0eff6568;
      *(long **)(pbVar21 + 0x70) = plVar23;
      *(long **)(pbVar21 + 0x78) = plVar24;
      LOCK();
      plVar24[1] = plVar24[1] + 1;
      UNLOCK();
      pbStack_478 = pbVar21 + 0x20;
      pbStack_470 = pbVar21;
      puVar22 = (undefined4 *)func_0x059c83c0(uVar28,&lStack_98);
      plVar27 = *(long **)(puVar22 + 0x24);
      if (plVar27 < *(long **)(puVar22 + 0x26)) {
        plVar27[2] = 0;
        plVar27[3] = 0;
        *plVar27 = 0;
        plVar27[1] = 0;
        plVar27[4] = 0;
        if (plVar27 != plVar25) {
          if ((*puVar1 & 1) == 0) {
            plVar27[3] = plVar24[0x14];
            lVar19 = plVar24[0x13];
            plVar27[1] = *(long *)puVar1;
            plVar27[2] = lVar19;
          }
          else {
            func_0x04885070(plVar27 + 1,plVar24[0x14],plVar24[0x13]);
          }
        }
        *plVar27 = *plVar25;
        plVar27[5] = (long)(pbVar21 + 0x20);
        plVar27[6] = (long)pbVar21;
        LOCK();
        *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
        UNLOCK();
        plVar27 = plVar27 + 7;
        *(long **)(puVar22 + 0x24) = plVar27;
      }
      else {
        plVar27 = (long *)func_0x059ca1b0(puVar22 + 0x22,plVar25,&pbStack_478);
      }
      *(long **)(puVar22 + 0x24) = plVar27;
      uVar10 = *puVar22;
      uVar11 = puVar22[1];
      uVar12 = puVar22[2];
      uVar13 = puVar22[3];
      if (*(long *)(puVar22 + 2) != 0) {
        LOCK();
        plVar25 = (long *)(*(long *)(puVar22 + 2) + 8);
        *plVar25 = *plVar25 + 1;
        UNLOCK();
      }
      plVar25 = (long *)plVar24[0xf];
      *(undefined4 *)(plVar24 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar24 + 0x74) = uVar11;
      *(undefined4 *)(plVar24 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar24 + 0x7c) = uVar13;
      if (plVar25 != (long *)0x0) {
        LOCK();
        plVar27 = plVar25 + 1;
        lVar19 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          func_0x0412c2d0(plVar25);
        }
      }
      pbVar21 = pbStack_470;
      *(undefined1 *)(plVar24 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
      if (pbStack_470 != (byte *)0x0) {
        LOCK();
        pbVar32 = pbStack_470 + 8;
        lVar19 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*(long *)pbStack_470 + 0x10))(pbStack_470);
          func_0x0412c2d0(pbVar21);
        }
      }
      LOCK();
      lVar19 = *plVar34;
      *plVar34 = *plVar34 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
        LOCK();
        lVar19 = *plVar34;
        *plVar34 = *plVar34 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar19 = *plVar34;
        *plVar34 = *plVar34 + -1;
        UNLOCK();
      }
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
      }
      if (pbStack_398 != (byte *)0x0) {
        (**(code **)(pbStack_398 + 8))(&pbStack_398);
      }
      if ((bStack_90 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_7d,CONCAT21(uStack_7f,uStack_83._3_1_)),
                        CONCAT35((undefined3)uStack_8b,CONCAT41(uStack_8f,bStack_90)) &
                        0xfffffffffffffffe);
      }
      ppbVar31 = (byte **)(plVar24 + 0x26);
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar19 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      pbStack_3d8 = &UNK_0eff65d0;
      uStack_3d0 = 0x14;
      uStack_3cc = 0;
      uStack_3cb = 0;
      uStack_3c9 = 0;
      uStack_3c8 = uStack_3c8 & 0xffffff00;
      if (ppbVar31 != &pbStack_3d8) {
        if ((*ppbVar31 == (byte *)0x0) ||
           ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbStack_3d8 != (byte *)0x0)) {
          (**(code **)pbStack_3d8)(&pbStack_3d8,ppbVar31);
          pbVar21 = pbStack_3d8;
        }
        else {
          pbVar21 = (byte *)0x0;
        }
        *ppbVar31 = pbVar21;
      }
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_258 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_248,&uStack_268);
      if ((uStack_268 & 1) != 0) {
        func_0x0412a280(uStack_258,uStack_268 & 0xfffffffffffffffe);
      }
      if ((uStack_248 & 1) != 0) {
        func_0x0412a280(uStack_238,uStack_248 & 0xfffffffffffffffe);
      }
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar19 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      uVar28 = *param_1;
      plVar20 = (long *)param_1[1];
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar20[1] = plVar20[1] + 1;
        UNLOCK();
      }
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_3c3 = 0;
      uStack_3c1 = 0;
      uStack_3c0 = 0;
      uStack_3bc = 0;
      uStack_3b8 = 0;
      uStack_3d0 = 0x6c69660e;
      uStack_3cc = 0x74;
      uStack_3cb = 0x7265;
      uStack_3c9 = 0x73;
      pbStack_3d8 = (byte *)0xaef0c9b92e5e3b2a;
      bStack_390 = 0x38;
      uStack_38f = 0;
      uStack_38b = 0;
      uStack_38a = 0;
      pbStack_320 = (byte *)0x38;
      pbStack_398 = (byte *)0x0;
      pbStack_328 = &UNK_0eff67c8;
      plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar24 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      pbStack_478 = pbStack_328;
      plVar24[1] = 0;
      plVar24[2] = 0;
      *plVar24 = (long)&UNK_0eff65f8;
      pbStack_328 = (byte *)0x0;
      pbStack_470 = pbStack_320;
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
      func_0x04aa75f0(plVar24 + 0xe,&lStack_98,&UNK_01254d89);
      *(undefined1 *)(plVar24 + 0x10) = 0;
      plVar25 = plVar24 + 0x11;
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
      plVar24[4] = (long)&UNK_0eff6648;
      plVar24[0x2e] = 0;
      plVar24[0x2f] = 0;
      if (pbStack_478 == (byte *)0x0) {
        pbVar21 = (byte *)0x0;
      }
      else {
        (**(code **)pbStack_478)(&pbStack_478,plVar24 + 0x2e);
        pbVar21 = pbStack_478;
      }
      plVar23 = plVar24 + 4;
      pbStack_478 = (byte *)0x0;
      plVar24[0x2e] = (long)pbVar21;
      puVar1 = (uint *)(plVar24 + 0x12);
      if (plVar25 == (long *)&DAT_0f551f28) {
        plVar24[0x15] = 0;
      }
      else {
        if ((*puVar1 & 1) == 0) {
          if ((_DAT_0f551f30 & 1) == 0) {
            plVar24[0x14] = _DAT_0f551f40;
            uVar12 = uRam000000000f551f3c;
            uVar11 = _DAT_0f551f38;
            uVar10 = uRam000000000f551f34;
            *puVar1 = _DAT_0f551f30;
            *(undefined4 *)((long)plVar24 + 0x94) = uVar10;
            *(undefined4 *)(plVar24 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar24 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puVar1,_DAT_0f551f40,CONCAT44(uRam000000000f551f3c,_DAT_0f551f38));
          }
        }
        else {
          bVar37 = (_DAT_0f551f30 & 1) != 0;
          lVar19 = 0xf551f31;
          if (bVar37) {
            lVar19 = _DAT_0f551f40;
          }
          uVar17 = (ulong)((_DAT_0f551f30 & 0xff) >> 1);
          if (bVar37) {
            uVar17 = CONCAT44(uRam000000000f551f3c,_DAT_0f551f38);
          }
          func_0x04885120(puVar1,lVar19,uVar17);
        }
        plVar24[0x11] = _DAT_0f551f28;
        plVar24[0x15] = 0;
        if (pbStack_478 != (byte *)0x0) {
          (**(code **)(pbStack_478 + 8))(&pbStack_478);
        }
      }
      plVar34 = plVar24 + 1;
      if (pbStack_328 != (byte *)0x0) {
        (**(code **)(pbStack_328 + 8))(&pbStack_328);
      }
      LOCK();
      *plVar34 = *plVar34 + 1;
      UNLOCK();
      pbVar21 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (pbVar21 == (byte *)0x0) {
        func_0x0eec74c0(0x80,0);
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
      *(undefined **)pbVar21 = &UNK_0eff6728;
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
      *(undefined **)(pbVar21 + 0x20) = &UNK_0eff6778;
      *(long **)(pbVar21 + 0x70) = plVar23;
      *(long **)(pbVar21 + 0x78) = plVar24;
      LOCK();
      plVar24[1] = plVar24[1] + 1;
      UNLOCK();
      pbStack_478 = pbVar21 + 0x20;
      pbStack_470 = pbVar21;
      puVar22 = (undefined4 *)func_0x059c83c0(uVar28,&pbStack_3d8);
      plVar27 = *(long **)(puVar22 + 0x24);
      if (plVar27 < *(long **)(puVar22 + 0x26)) {
        plVar27[2] = 0;
        plVar27[3] = 0;
        *plVar27 = 0;
        plVar27[1] = 0;
        plVar27[4] = 0;
        if (plVar27 != plVar25) {
          if ((*puVar1 & 1) == 0) {
            plVar27[3] = plVar24[0x14];
            lVar19 = plVar24[0x13];
            plVar27[1] = *(long *)puVar1;
            plVar27[2] = lVar19;
          }
          else {
            func_0x04885070(plVar27 + 1,plVar24[0x14],plVar24[0x13]);
          }
        }
        *plVar27 = *plVar25;
        plVar27[5] = (long)(pbVar21 + 0x20);
        plVar27[6] = (long)pbVar21;
        LOCK();
        *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
        UNLOCK();
        plVar27 = plVar27 + 7;
        *(long **)(puVar22 + 0x24) = plVar27;
      }
      else {
        plVar27 = (long *)func_0x059ca1b0(puVar22 + 0x22,plVar25,&pbStack_478);
      }
      *(long **)(puVar22 + 0x24) = plVar27;
      uVar10 = *puVar22;
      uVar11 = puVar22[1];
      uVar12 = puVar22[2];
      uVar13 = puVar22[3];
      if (*(long *)(puVar22 + 2) != 0) {
        LOCK();
        plVar25 = (long *)(*(long *)(puVar22 + 2) + 8);
        *plVar25 = *plVar25 + 1;
        UNLOCK();
      }
      plVar25 = (long *)plVar24[0xf];
      *(undefined4 *)(plVar24 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar24 + 0x74) = uVar11;
      *(undefined4 *)(plVar24 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar24 + 0x7c) = uVar13;
      if (plVar25 != (long *)0x0) {
        LOCK();
        plVar27 = plVar25 + 1;
        lVar19 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          func_0x0412c2d0(plVar25);
        }
      }
      pbVar21 = pbStack_470;
      *(undefined1 *)(plVar24 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
      if (pbStack_470 != (byte *)0x0) {
        LOCK();
        pbVar32 = pbStack_470 + 8;
        lVar19 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*(long *)pbStack_470 + 0x10))(pbStack_470);
          func_0x0412c2d0(pbVar21);
        }
      }
      LOCK();
      lVar19 = *plVar34;
      *plVar34 = *plVar34 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
        LOCK();
        lVar19 = *plVar34;
        *plVar34 = *plVar34 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar19 = *plVar34;
        *plVar34 = *plVar34 + -1;
        UNLOCK();
      }
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
      }
      if (pbStack_398 != (byte *)0x0) {
        (**(code **)(pbStack_398 + 8))(&pbStack_398);
      }
      if ((uStack_3d0 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_3bc,uStack_3c0),
                        CONCAT17(uStack_3c9,CONCAT25(uStack_3cb,CONCAT14(uStack_3cc,uStack_3d0))) &
                        0xfffffffffffffffe);
      }
      auStack_288[0] = 0;
      auStack_288[1] = 0;
      auStack_288[2] = 0;
      (**(code **)(*plVar23 + 0x10))(plVar23,auStack_288);
      if ((auStack_288[0] & 1) != 0) {
        func_0x0412a280(auStack_288[2],auStack_288[0] & 0xfffffffffffffffe);
      }
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar19 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      return;
    }
  }
  else {
    plVar33 = (long *)(((long)plVar6 - (long)plVar35 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((long *)0x186186186186186 < plVar33) goto LAB_0598ef37;
    lVar19 = plVar20[0x1d] - (long)plVar35 >> 3;
    plVar23 = (long *)(lVar19 * -0x6186186186186186);
    if (plVar33 < plVar23) {
      plVar33 = plVar23;
    }
    plVar27 = plVar20 + 0x1b;
    if (0xc30c30c30c30c2 < (ulong)(lVar19 * -0x30c30c30c30c30c3)) {
      plVar33 = (long *)0x186186186186186;
    }
    plStack_458 = plVar27;
    if (plVar33 == (long *)0x0) {
      pbVar32 = (byte *)0x0;
LAB_0598cae8:
      pbStack_470 = pbVar32 + ((long)plVar6 - (long)plVar35);
      pbStack_460 = pbVar32 + (long)plVar33 * 0xa8;
      pbStack_478 = pbVar32;
      pbStack_468 = pbStack_470;
      plStack_348 = plVar27;
      func_0x05a104f0(pbStack_470);
      pbVar26 = pbStack_468 + 0xa8;
      lVar19 = plVar20[0x1b];
      lVar7 = plVar20[0x1c];
      pbVar32 = pbStack_470 + (lVar19 - lVar7);
      if (lVar19 != lVar7) {
        lVar36 = 0;
        do {
          uVar28 = ((undefined8 *)(lVar19 + lVar36))[1];
          *(undefined8 *)(pbVar32 + lVar36) = *(undefined8 *)(lVar19 + lVar36);
          *(undefined8 *)(pbVar32 + lVar36 + 8) = uVar28;
          *(undefined8 *)(lVar19 + lVar36) = 0;
          ((undefined8 *)(lVar19 + lVar36))[1] = 0;
          pbVar3 = pbVar32 + lVar36 + 0x20;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          pbVar3[8] = 0;
          pbVar3[9] = 0;
          pbVar3[10] = 0;
          pbVar3[0xb] = 0;
          pbVar3[0xc] = 0;
          pbVar3[0xd] = 0;
          pbVar3[0xe] = 0;
          pbVar3[0xf] = 0;
          pbVar3 = pbVar32 + lVar36 + 0x10;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          pbVar3[8] = 0;
          pbVar3[9] = 0;
          pbVar3[10] = 0;
          pbVar3[0xb] = 0;
          pbVar3[0xc] = 0;
          pbVar3[0xd] = 0;
          pbVar3[0xe] = 0;
          pbVar3[0xf] = 0;
          pbVar3 = pbVar32 + lVar36 + 0x30;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          *(undefined8 *)(pbVar32 + lVar36 + 0x28) = *(undefined8 *)(lVar19 + 0x28 + lVar36);
          puVar22 = (undefined4 *)(lVar19 + 0x18 + lVar36);
          uVar10 = puVar22[1];
          uVar11 = puVar22[2];
          uVar12 = puVar22[3];
          pbVar3 = pbVar32 + lVar36 + 0x18;
          *(undefined4 *)pbVar3 = *puVar22;
          *(undefined4 *)(pbVar3 + 4) = uVar10;
          *(undefined4 *)(pbVar3 + 8) = uVar11;
          *(undefined4 *)(pbVar3 + 0xc) = uVar12;
          *(undefined2 *)(lVar19 + 0x18 + lVar36) = 0;
          *(undefined8 *)(pbVar32 + lVar36 + 0x10) = *(undefined8 *)(lVar19 + 0x10 + lVar36);
          func_0x04167a20(pbVar32 + lVar36 + 0x38,lVar19 + lVar36 + 0x38);
          puVar18 = (undefined8 *)(lVar19 + 0x40 + lVar36);
          uVar28 = puVar18[1];
          *(undefined8 *)(pbVar32 + lVar36 + 0x40) = *puVar18;
          *(undefined8 *)(pbVar32 + lVar36 + 0x40 + 8) = uVar28;
          puVar18 = (undefined8 *)(lVar19 + 0x50 + lVar36);
          uVar28 = puVar18[1];
          *(undefined8 *)(pbVar32 + lVar36 + 0x50) = *puVar18;
          *(undefined8 *)(pbVar32 + lVar36 + 0x50 + 8) = uVar28;
          puVar18 = (undefined8 *)(lVar19 + 0x60 + lVar36);
          uVar28 = puVar18[1];
          *(undefined8 *)(pbVar32 + lVar36 + 0x60) = *puVar18;
          *(undefined8 *)(pbVar32 + lVar36 + 0x60 + 8) = uVar28;
          puVar18 = (undefined8 *)(lVar19 + 0x60 + lVar36);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(pbVar32 + lVar36 + 0x70) = *(undefined8 *)(lVar19 + 0x70 + lVar36);
          puVar18 = (undefined8 *)(lVar19 + 0x78 + lVar36);
          uVar28 = puVar18[1];
          *(undefined8 *)(pbVar32 + lVar36 + 0x78) = *puVar18;
          *(undefined8 *)(pbVar32 + lVar36 + 0x78 + 8) = uVar28;
          pbVar3 = pbVar32 + lVar36 + 0x88;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          pbVar3[8] = 0;
          pbVar3[9] = 0;
          pbVar3[10] = 0;
          pbVar3[0xb] = 0;
          pbVar3[0xc] = 0;
          pbVar3[0xd] = 0;
          pbVar3[0xe] = 0;
          pbVar3[0xf] = 0;
          pbVar3 = pbVar32 + lVar36 + 0x98;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          puVar22 = (undefined4 *)(lVar19 + 0x88 + lVar36);
          uVar10 = puVar22[1];
          uVar11 = puVar22[2];
          uVar12 = puVar22[3];
          pbVar3 = pbVar32 + lVar36 + 0x88;
          *(undefined4 *)pbVar3 = *puVar22;
          *(undefined4 *)(pbVar3 + 4) = uVar10;
          *(undefined4 *)(pbVar3 + 8) = uVar11;
          *(undefined4 *)(pbVar3 + 0xc) = uVar12;
          *(undefined8 *)(pbVar32 + lVar36 + 0x98) = *(undefined8 *)(lVar19 + 0x98 + lVar36);
          puVar18 = (undefined8 *)(lVar19 + 0x88 + lVar36);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar19 + 0x98 + lVar36) = 0;
          *(undefined2 *)(pbVar32 + lVar36 + 0xa0) = *(undefined2 *)(lVar19 + 0xa0 + lVar36);
          lVar2 = lVar19 + lVar36;
          lVar36 = lVar36 + 0xa8;
        } while (lVar2 + 0xa8 != lVar7);
        do {
          func_0x05a0cdf0(lVar19);
          lVar19 = lVar19 + 0xa8;
        } while (lVar19 != lVar7);
        lVar19 = *plStack_348;
      }
      plVar20[0x1b] = (long)pbVar32;
      plVar20[0x1c] = (long)pbVar26;
      lVar7 = plVar20[0x1d];
      plVar20[0x1d] = (long)pbStack_460;
      if (lVar19 != 0) {
        func_0x0412a280(lVar19,lVar7 - lVar19);
      }
      goto LAB_0598ccca;
    }
    if (plVar33 < (long *)0x186186186186187) {
      pbVar32 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar33 * 0xa8);
      if (pbVar32 == (byte *)0x0) {
        func_0x0eec74c0((long)plVar33 * 0xa8,0);
        pbVar32 = (byte *)0x0;
      }
      goto LAB_0598cae8;
    }
LAB_0598ef2d:
    FUN_04882eb0();
    plVar23 = plVar27;
  }
  func_0x05a10730();
LAB_0598ef37:
  uVar28 = func_0x05a10660();
  if ((*pbVar21 & 1) != 0) {
    func_0x0412a280(*(long *)(pbVar32 + 0x18),*(ulong *)(pbVar32 + 8) & 0xfffffffffffffffe);
  }
  plVar33[0x12] = (long)pbVar32;
  plVar27 = plVar23 + 1;
  LOCK();
  lVar19 = *plVar27;
  *plVar27 = *plVar27 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
  }
  LOCK();
  lVar19 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  LOCK();
  lVar19 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_398 != (byte *)0x0) {
    (**(code **)(pbStack_398 + 8))(&pbStack_398);
  }
  if ((uStack_3d0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_3bc,uStack_3c0),
                    CONCAT17(uStack_3c9,CONCAT25(uStack_3cb,CONCAT14(uStack_3cc,uStack_3d0))) &
                    0xfffffffffffffffe);
  }
  func_0x05990610(plVar20);
  uVar28 = func_0x0eee2d70(uVar28);
  plVar27 = plVar23 + 1;
  LOCK();
  lVar19 = *plVar27;
  *plVar27 = *plVar27 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
  }
  LOCK();
  lVar19 = *plVar34;
  *plVar34 = *plVar34 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    func_0x0412c2d0(plVar33);
  }
  LOCK();
  lVar19 = *plVar34;
  *plVar34 = *plVar34 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    func_0x0412c2d0(plVar33);
  }
  if (pbStack_398 != (byte *)0x0) {
    (**(code **)(pbStack_398 + 8))(&pbStack_398);
  }
  if ((bStack_90 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_7d,CONCAT21(uStack_7f,uStack_83._3_1_)),
                    CONCAT35((undefined3)uStack_8b,CONCAT41(uStack_8f,bStack_90)) &
                    0xfffffffffffffffe);
  }
  func_0x05990610(plVar25);
  func_0x05990610(plVar25);
  uVar28 = func_0x0eee2d70(uVar28);
  plVar25 = plVar24 + 1;
  LOCK();
  lVar19 = *plVar25;
  *plVar25 = *plVar25 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    func_0x0412c2d0(plVar24);
  }
  LOCK();
  lVar19 = *plVar23;
  *plVar23 = *plVar23 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    func_0x0412c2d0(plVar33);
  }
  LOCK();
  lVar19 = *plVar23;
  *plVar23 = *plVar23 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    func_0x0412c2d0(plVar33);
  }
  if (pbStack_398 != (byte *)0x0) {
    (**(code **)(pbStack_398 + 8))(&pbStack_398);
  }
  if ((uStack_3d0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_3bc,uStack_3c0),
                    CONCAT17(uStack_3c9,CONCAT25(uStack_3cb,CONCAT14(uStack_3cc,uStack_3d0))) &
                    0xfffffffffffffffe);
  }
  func_0x05990610(pbVar21);
  uVar28 = func_0x0eee2d70(uVar28);
  plVar25 = plVar20 + 1;
  LOCK();
  lVar19 = *plVar25;
  *plVar25 = *plVar25 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  LOCK();
  lVar19 = *plVar33;
  *plVar33 = *plVar33 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    func_0x0412c2d0(plVar24);
  }
  LOCK();
  lVar19 = *plVar33;
  *plVar33 = *plVar33 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    func_0x0412c2d0(plVar24);
  }
  if (pbStack_398 != (byte *)0x0) {
    (**(code **)(pbStack_398 + 8))(&pbStack_398);
  }
  if ((uStack_3d0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_3bc,uStack_3c0),
                    CONCAT17(uStack_3c9,CONCAT25(uStack_3cb,CONCAT14(uStack_3cc,uStack_3d0))) &
                    0xfffffffffffffffe);
  }
  func_0x05990610(pbVar21);
  uVar28 = func_0x0eee2d70(uVar28);
  plVar24 = plVar33 + 1;
  LOCK();
  lVar19 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    func_0x0412c2d0(plVar33);
  }
  LOCK();
  lVar19 = *(long *)pbVar21;
  *(long *)pbVar21 = *(long *)pbVar21 + -1;
  UNLOCK();
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar19 = *(long *)pbVar21;
    *(long *)pbVar21 = *(long *)pbVar21 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar19 = *(long *)pbVar21;
    *(long *)pbVar21 = *(long *)pbVar21 + -1;
    UNLOCK();
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (pbStack_3d8 != (byte *)0x0) {
    (**(code **)(pbStack_3d8 + 8))(&pbStack_3d8);
  }
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_37d,CONCAT21(uStack_37f,uStack_380)),
                    CONCAT26(uStack_38a,CONCAT15(uStack_38b,CONCAT41(uStack_38f,bStack_390))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_2a0 & 1) == 0) {
    func_0x0eee2d70(uVar28);
  }
  func_0x0412a280(puStack_290,uStack_2a0 & 0xfffffffffffffffe);
  func_0x0eee2d70(uVar28);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}



/* ---- referenced strings ----
 * 0x123d676  force_below_health
 * 0x13f9ef0  minecraft:behavior.play_dead
 * 0x13f9efc  havior.play_dead
 * 0x141322f  random_damage_range
 * 0x1494d5d  <any array element>
 * 0x14aeac8  apply_regeneration
 */
