/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5a49660 (ELF vaddr 0x5949660)
 * Label: caller-of-callee
 * Body:  [[05a49660, 05a4a7ec] [05a4a7f0, 05a4adb5] [05a4adc0, 05a4adfc] [05a4ae00, 05a4b63a] [05a4bc7b, 05a4bd0a]]
 * Ghidra: FUN_05a49660
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05a49660(undefined8 *param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
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
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  long *plVar22;
  long *plVar23;
  uint *puVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  byte **ppbVar31;
  long *plVar32;
  undefined8 **ppuVar33;
  long lVar34;
  bool bVar35;
  undefined1 uStack_3e9;
  byte *pbStack_3e8;
  byte *pbStack_3e0;
  byte *pbStack_3d8;
  byte *pbStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  uint *puStack_350;
  byte *pbStack_348;
  byte bStack_340;
  undefined5 uStack_33f;
  undefined2 uStack_33a;
  undefined4 uStack_338;
  undefined2 uStack_334;
  undefined2 uStack_332;
  undefined8 uStack_330;
  undefined8 uStack_328;
  byte *pbStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  byte *pbStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 *puStack_2a8;
  byte bStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined1 uStack_297;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  uint *puStack_170;
  long *plStack_168;
  byte bStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined5 uStack_15d;
  undefined8 uStack_150;
  byte bStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined5 uStack_145;
  undefined8 uStack_138;
  byte bStack_130;
  undefined1 uStack_12f;
  undefined6 uStack_12e;
  undefined8 uStack_120;
  long *plStack_118;
  byte *pbStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_e8;
  byte bStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte *pbStack_88;
  long lStack_78;
  undefined8 uStack_70;
  
  puStack_2a8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_2a8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar26 = _UNK_011b907d;
  uStack_2b8 = 0x29;
  uStack_2b0 = 0x26;
  *(undefined8 *)(puStack_2a8 + 4) = _DAT_011b9075;
  *(undefined8 *)(puStack_2a8 + 6) = uVar26;
  uVar12 = _UNK_011b9071;
  uVar11 = _UNK_011b906d;
  uVar10 = _UNK_011b9069;
  *puStack_2a8 = _DAT_011b9065;
  puStack_2a8[1] = uVar10;
  puStack_2a8[2] = uVar11;
  puStack_2a8[3] = uVar12;
  *(undefined8 *)((long)puStack_2a8 + 0x1e) = 0x6b636f6c6265746f;
  *(undefined1 *)((long)puStack_2a8 + 0x26) = 0;
  bStack_2a0 = 0x10;
  uStack_29f = 0x7469726f697270;
  uStack_298 = 0x79;
  uStack_297 = 0;
  bStack_148 = 2;
  uStack_147 = 0x30;
  uStack_146 = 0;
  bStack_160 = 2;
  uStack_15f = 0x30;
  uStack_15e = 0;
  bStack_130 = 0;
  uStack_12f = 0;
  func_0x0564aad0(&puStack_108,&uStack_2b8,&bStack_2a0,0,&bStack_148,0,&bStack_160,&bStack_130);
  uVar26 = *param_1;
  pbStack_308 = (byte *)0x0;
  if ((uStack_98 & 1) == 0) {
    pbStack_2f0 = pbStack_88;
    uStack_300 = (undefined8 *)CONCAT44(uStack_94,uStack_98);
    uStack_2f8 = uStack_90;
    uStack_2f4 = uStack_8c;
  }
  else {
    func_0x0412e5e0(&uStack_300,pbStack_88,CONCAT44(uStack_8c,uStack_90));
  }
  uStack_2e8 = 0;
  if (((ulong)uStack_300 & 1) == 0) {
    if ((byte)uStack_300 >> 1 != 0) goto LAB_05a497f1;
LAB_05a498e6:
    pbVar29 = (byte *)0x0;
  }
  else {
    if (CONCAT44(uStack_2f4,uStack_2f8) == 0) goto LAB_05a498e6;
LAB_05a497f1:
    if (((ulong)uStack_300 & 1) == 0) {
      pbVar20 = (byte *)((long)&uStack_300 + 1);
      if (pbVar20 != (byte *)0x0) goto LAB_05a49818;
      goto LAB_05a498e6;
    }
    pbVar20 = pbStack_2f0;
    if (pbStack_2f0 == (byte *)0x0) goto LAB_05a498e6;
LAB_05a49818:
    if (*pbVar20 == 0) goto LAB_05a498e6;
    pbVar29 = (byte *)0xcbf29ce484222325;
    uVar30 = func_0x0eee2e90(pbVar20);
    if (uVar30 != 0) {
      uVar28 = (ulong)((uint)uVar30 & 7);
      if (7 < uVar30) {
        uVar30 = uVar30 & 0xfffffffffffffff8;
        do {
          pbVar29 = (byte *)(((((((((long)pbVar29 * 0x100000001b3 ^ (ulong)*pbVar20) * 0x100000001b3
                                  ^ (ulong)pbVar20[1]) * 0x100000001b3 ^ (ulong)pbVar20[2]) *
                                 0x100000001b3 ^ (ulong)pbVar20[3]) * 0x100000001b3 ^
                               (ulong)pbVar20[4]) * 0x100000001b3 ^ (ulong)pbVar20[5]) *
                              0x100000001b3 ^ (ulong)pbVar20[6]) * 0x100000001b3 ^ (ulong)pbVar20[7]
                            );
          pbVar20 = pbVar20 + 8;
          uVar30 = uVar30 - 8;
        } while (uVar30 != 0);
      }
      if (uVar28 != 0) {
        uVar30 = 0;
        do {
          pbVar29 = (byte *)((long)pbVar29 * 0x100000001b3 ^ (ulong)pbVar20[uVar30]);
          uVar30 = uVar30 + 1;
        } while (uVar28 != uVar30);
      }
    }
  }
  pbStack_3e8 = (byte *)0x0;
  pbStack_308 = pbVar29;
  func_0x0564b850(&pbStack_3e0,&puStack_108);
  bStack_340 = 0;
  uStack_33f = 0;
  uStack_33a = 0;
  pbStack_348 = &UNK_0efffc10;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar17 = pbStack_3e8;
  puVar17[1] = pbStack_3e0;
  puVar17[5] = uStack_3c0;
  puVar17[3] = pbStack_3d0;
  puVar17[4] = plStack_3c8;
  pbStack_3d0 = (byte *)0x0;
  plStack_3c8 = (long *)0x0;
  uStack_3c0 = 0;
  puVar17[8] = uStack_3a8;
  puVar17[6] = uStack_3b8;
  puVar17[7] = uStack_3b0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  puVar17[0xb] = uStack_390;
  puVar17[9] = uStack_3a0;
  puVar17[10] = uStack_398;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 0;
  puVar17[0xe] = uStack_378;
  puVar17[0xc] = uStack_388;
  puVar17[0xd] = uStack_380;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  puVar17[0x11] = uStack_360;
  *(undefined4 *)(puVar17 + 0xf) = (undefined4)uStack_370;
  *(undefined4 *)((long)puVar17 + 0x7c) = uStack_370._4_4_;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_368;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_368._4_4_;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  bStack_340 = (byte)puVar17;
  uStack_33f = (undefined5)((ulong)puVar17 >> 8);
  uStack_33a = (undefined2)((ulong)puVar17 >> 0x30);
  lVar18 = func_0x05a5dbc0(uVar26,&pbStack_308,&pbStack_348);
  if (pbStack_348 != (byte *)0x0) {
    (**(code **)(pbStack_348 + 8))(&pbStack_348);
  }
  if ((uStack_370 & 1) != 0) {
    func_0x0412a280(uStack_360,uStack_370 & 0xfffffffffffffffe);
  }
  if ((uStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
  }
  if ((uStack_3a0 & 1) != 0) {
    func_0x0412a280(uStack_390,uStack_3a0 & 0xfffffffffffffffe);
  }
  if ((uStack_3b8 & 1) != 0) {
    func_0x0412a280(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_3d0 & 1) != 0) {
    func_0x0412a280(uStack_3c0,(ulong)pbStack_3d0 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_300 & 1) != 0) {
    func_0x0412a280(pbStack_2f0,(ulong)uStack_300 & 0xfffffffffffffffe);
  }
  pbStack_3e8 = (byte *)0x0;
  pbStack_3e0 = (byte *)((ulong)pbStack_3e0 & 0xffffffffffffff00);
  func_0x0564b850(&pbStack_3d8,&puStack_108);
  uStack_300 = (undefined8 *)0x0;
  pbStack_308 = &UNK_0efffc28;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  *(undefined1 *)(puVar17 + 1) = pbStack_3e0._0_1_;
  *puVar17 = pbStack_3e8;
  puVar17[2] = pbStack_3d8;
  puVar17[6] = uStack_3b8;
  puVar17[4] = plStack_3c8;
  puVar17[5] = uStack_3c0;
  plStack_3c8 = (long *)0x0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  puVar17[9] = uStack_3a0;
  puVar17[7] = uStack_3b0;
  puVar17[8] = uStack_3a8;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  puVar17[0xc] = uStack_388;
  puVar17[10] = uStack_398;
  puVar17[0xb] = uStack_390;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  puVar17[0xf] = uStack_370;
  puVar17[0xd] = uStack_380;
  puVar17[0xe] = uStack_378;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  puVar17[0x12] = uStack_358;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_368;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_368._4_4_;
  *(undefined4 *)(puVar17 + 0x11) = (undefined4)uStack_360;
  *(undefined4 *)((long)puVar17 + 0x8c) = uStack_360._4_4_;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  ppbVar31 = (byte **)(lVar18 + 0x110);
  uStack_300 = puVar17;
  if (ppbVar31 == &pbStack_308) {
    func_0x0564b7b0(puVar17 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar17);
  }
  else {
    pbVar20 = &UNK_0efffc28;
    if ((*ppbVar31 == (byte *)0x0) ||
       ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbVar20 = pbStack_308, pbStack_308 != (byte *)0x0))
    {
      (**(code **)pbVar20)(&pbStack_308,ppbVar31);
      pbVar20 = pbStack_308;
      pbStack_308 = (byte *)0x0;
      *ppbVar31 = pbVar20;
    }
    else {
      pbStack_308 = (byte *)0x0;
      *ppbVar31 = (byte *)0x0;
    }
  }
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(uStack_358,uStack_368 & 0xfffffffffffffffe);
  }
  if ((uStack_380 & 1) != 0) {
    func_0x0412a280(uStack_370,uStack_380 & 0xfffffffffffffffe);
  }
  if ((uStack_398 & 1) != 0) {
    func_0x0412a280(uStack_388,uStack_398 & 0xfffffffffffffffe);
  }
  if ((uStack_3b0 & 1) != 0) {
    func_0x0412a280(uStack_3a0,uStack_3b0 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_3c8 & 1) != 0) {
    func_0x0412a280(uStack_3b8,(ulong)plStack_3c8 & 0xfffffffffffffffe);
  }
  if ((uStack_98 & 1) != 0) {
    func_0x0412a280(pbStack_88,CONCAT44(uStack_94,uStack_98) & 0xfffffffffffffffe);
  }
  if ((bStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
  }
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
  }
  if ((bStack_e0 & 1) != 0) {
    func_0x0412a280(uStack_d0,CONCAT71(uStack_df,bStack_e0) & 0xfffffffffffffffe);
  }
  if ((uStack_f8 & 1) != 0) {
    func_0x0412a280(uStack_e8,CONCAT44(uStack_f4,uStack_f8) & 0xfffffffffffffffe);
  }
  if ((bStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,
                    CONCAT62(uStack_12e,CONCAT11(uStack_12f,bStack_130)) & 0xfffffffffffffffe);
  }
  if ((bStack_160 & 1) != 0) {
    func_0x0412a280(uStack_150,
                    CONCAT53(uStack_15d,CONCAT12(uStack_15e,CONCAT11(uStack_15f,bStack_160))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_148 & 1) != 0) {
    func_0x0412a280(uStack_138,
                    CONCAT53(uStack_145,CONCAT12(uStack_146,CONCAT11(uStack_147,bStack_148))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_2a0 & 1) != 0) {
    func_0x0412a280(uStack_290,CONCAT71(uStack_29f,bStack_2a0) & 0xfffffffffffffffe);
  }
  uVar26 = *param_1;
  uStack_332 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  bStack_340 = 0x1a;
  uStack_33f = 0x72746e6f63;
  uStack_33a = 0x6c6f;
  uStack_338 = 0x616c665f;
  uStack_334 = 0x7367;
  pbStack_348 = (byte *)0x86e3afe1b1c6e2ac;
  uStack_300 = (undefined8 *)0x0;
  pbStack_308 = &UNK_0efffe38;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0efffc50;
  pbStack_3e8 = (byte *)0x0;
  pbStack_3e0 = (byte *)0x0;
  if (pbStack_308 == (byte *)0x0) {
    pbStack_3e8 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_308)(&pbStack_308,&pbStack_3e8);
    pbStack_3e8 = pbStack_308;
  }
  pbStack_308 = (byte *)0x0;
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
  func_0x04aa75f0(plVar19 + 0xe,&lStack_78,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar23 = plVar19 + 0x11;
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
  plVar19[4] = (long)&UNK_0efffca0;
  ppbVar31 = (byte **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (ppbVar31 != &pbStack_3e8) {
    if (pbStack_3e8 == (byte *)0x0) {
      pbVar20 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_3e8)(&pbStack_3e8,ppbVar31);
      pbVar20 = pbStack_3e8;
    }
    pbStack_3e8 = (byte *)0x0;
    *ppbVar31 = pbVar20;
  }
  puVar24 = (uint *)(plVar19 + 0x12);
  if (plVar23 != (long *)&DAT_0f551f58) {
    if ((*puVar24 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar19[0x14] = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar24 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar10;
        *(undefined4 *)(plVar19 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar24,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar35 = (_DAT_0f551f60 & 1) != 0;
      lVar18 = 0xf551f61;
      if (bVar35) {
        lVar18 = _DAT_0f551f70;
      }
      uVar30 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar35) {
        uVar30 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar24,lVar18,uVar30);
    }
  }
  plVar32 = plVar19 + 1;
  plVar19[0x11] = _DAT_0f551f58;
  plVar19[0x15] = 0;
  puStack_350 = puVar24;
  if (pbStack_3e8 != (byte *)0x0) {
    (**(code **)(pbStack_3e8 + 8))(&pbStack_3e8);
  }
  LOCK();
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  pbVar20 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar20 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar20[8] = 0;
  pbVar20[9] = 0;
  pbVar20[10] = 0;
  pbVar20[0xb] = 0;
  pbVar20[0xc] = 0;
  pbVar20[0xd] = 0;
  pbVar20[0xe] = 0;
  pbVar20[0xf] = 0;
  pbVar20[0x10] = 0;
  pbVar20[0x11] = 0;
  pbVar20[0x12] = 0;
  pbVar20[0x13] = 0;
  pbVar20[0x14] = 0;
  pbVar20[0x15] = 0;
  pbVar20[0x16] = 0;
  pbVar20[0x17] = 0;
  *(undefined **)pbVar20 = &UNK_0efffd98;
  pbVar20[0x30] = 0;
  pbVar20[0x31] = 0;
  pbVar20[0x32] = 0;
  pbVar20[0x33] = 0;
  pbVar20[0x34] = 0;
  pbVar20[0x35] = 0;
  pbVar20[0x36] = 0;
  pbVar20[0x37] = 0;
  pbVar20[0x38] = 0;
  pbVar20[0x39] = 0;
  pbVar20[0x3a] = 0;
  pbVar20[0x3b] = 0;
  pbVar20[0x3c] = 0;
  pbVar20[0x3d] = 0;
  pbVar20[0x3e] = 0;
  pbVar20[0x3f] = 0;
  *(undefined **)(pbVar20 + 0x20) = &UNK_0efffde8;
  *(long **)(pbVar20 + 0x70) = plVar19 + 4;
  *(long **)(pbVar20 + 0x78) = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  pbStack_3e8 = pbVar20 + 0x20;
  pbStack_3e0 = pbVar20;
  puVar21 = (undefined4 *)func_0x05a5b9e0(uVar26,&pbStack_348);
  plVar22 = *(long **)(puVar21 + 0x24);
  if (plVar22 < *(long **)(puVar21 + 0x26)) {
    plVar22[2] = 0;
    plVar22[3] = 0;
    *plVar22 = 0;
    plVar22[1] = 0;
    plVar22[4] = 0;
    if (plVar22 != plVar23) {
      if ((*puStack_350 & 1) == 0) {
        plVar22[3] = *(long *)(puStack_350 + 4);
        lVar18 = *(long *)(puStack_350 + 2);
        plVar22[1] = *(long *)puStack_350;
        plVar22[2] = lVar18;
      }
      else {
        func_0x04885070(plVar22 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar22 = *plVar23;
    plVar22[5] = (long)(pbVar20 + 0x20);
    plVar22[6] = (long)pbVar20;
    LOCK();
    *(long *)(pbVar20 + 8) = *(long *)(pbVar20 + 8) + 1;
    UNLOCK();
    plVar22 = plVar22 + 7;
    *(long **)(puVar21 + 0x24) = plVar22;
  }
  else {
    plVar22 = (long *)func_0x05a5d7d0(puVar21 + 0x22,plVar23,&pbStack_3e8);
  }
  *(long **)(puVar21 + 0x24) = plVar22;
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
  plVar23 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar11;
  *(undefined4 *)(plVar19 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar13;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar22 = plVar23 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  pbVar20 = pbStack_3e0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (pbStack_3e0 != (byte *)0x0) {
    LOCK();
    pbVar29 = pbStack_3e0 + 8;
    lVar18 = *(long *)pbVar29;
    *(long *)pbVar29 = *(long *)pbVar29 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)pbStack_3e0 + 0x10))(pbStack_3e0);
      func_0x0412c2d0(pbVar20);
    }
  }
  LOCK();
  lVar18 = *plVar32;
  *plVar32 = *plVar32 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar18 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar18 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
  }
  if (lVar18 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  if (pbStack_308 != (byte *)0x0) {
    (**(code **)(pbStack_308 + 8))(&pbStack_308);
  }
  if ((bStack_340 & 1) != 0) {
    func_0x0412a280(uStack_330,
                    CONCAT26(uStack_33a,CONCAT51(uStack_33f,bStack_340)) & 0xfffffffffffffffe);
  }
  uStack_70 = 0;
  bStack_340 = 0;
  uStack_33f = 0;
  uStack_33a = 0;
  lStack_78 = 0;
  pbStack_348 = &UNK_0f000088;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  pbStack_3e8 = pbStack_348;
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0efffe60;
  pbStack_3e0 = (byte *)0x0;
  pbStack_348 = (byte *)0x0;
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
  func_0x04aa75f0(plVar23 + 0xe,&uStack_3e9,&UNK_01254d89);
  *(undefined1 *)(plVar23 + 0x10) = 0;
  pbVar20 = (byte *)(plVar23 + 0x11);
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
  plVar23[4] = (long)&UNK_0efffeb0;
  plVar23[0x2e] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x30] = 0;
  plVar23[0x31] = 0;
  plVar23[0x32] = 0;
  plVar23[0x33] = 0;
  plVar23[0x34] = 0;
  *(undefined4 *)(plVar23 + 0x35) = 0x3f800000;
  plVar23[0x36] = 0;
  plVar23[0x37] = 0;
  if (pbStack_3e8 == (byte *)0x0) {
    pbVar29 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_3e8)(&pbStack_3e8,plVar23 + 0x36);
    pbVar29 = pbStack_3e8;
  }
  pbStack_3e8 = (byte *)0x0;
  plVar23[0x36] = (long)pbVar29;
  *(undefined1 *)(plVar23 + 0x3e) = 0;
  puStack_170 = (uint *)(plVar23 + 0x12);
  if (pbVar20 != &DAT_0f552138) {
    if ((*puStack_170 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar23[0x14] = _DAT_0f552150;
        uVar12 = uRam000000000f55214c;
        uVar11 = _DAT_0f552148;
        uVar10 = uRam000000000f552144;
        *puStack_170 = _DAT_0f552140;
        *(undefined4 *)((long)plVar23 + 0x94) = uVar10;
        *(undefined4 *)(plVar23 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar23 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_170,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar35 = (_DAT_0f552140 & 1) != 0;
      lVar18 = 0xf552141;
      if (bVar35) {
        lVar18 = _DAT_0f552150;
      }
      uVar30 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar35) {
        uVar30 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_170,lVar18,uVar30);
    }
  }
  plVar23[0x11] = _DAT_0f552138;
  plVar23[0x15] = 0;
  if (pbStack_3e8 != (byte *)0x0) {
    (**(code **)(pbStack_3e8 + 8))(&pbStack_3e8);
  }
  pbVar29 = (byte *)(plVar23 + 1);
  if (pbStack_348 != (byte *)0x0) {
    (**(code **)(pbStack_348 + 8))(&pbStack_348);
  }
  LOCK();
  *(long *)pbVar29 = *(long *)pbVar29 + 1;
  UNLOCK();
  pbStack_110 = pbVar29;
  puVar24 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar24 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)puVar24 + 8) = 0;
  *(long *)((long)puVar24 + 0x10) = 0;
  *(undefined **)puVar24 = &UNK_0effff90;
  *(long *)((long)puVar24 + 0x30) = 0;
  *(long *)((long)puVar24 + 0x38) = 0;
  *(undefined **)((long)puVar24 + 0x20) = &UNK_0effffe0;
  *(long **)((long)puVar24 + 0x70) = plVar23 + 4;
  *(long **)((long)puVar24 + 0x78) = plVar23;
  LOCK();
  plVar23[1] = plVar23[1] + 1;
  UNLOCK();
  plStack_168 = (long *)((long)puVar24 + 8);
  puVar6 = (undefined4 *)plVar19[0x1c];
  puVar5 = (undefined4 *)plVar19[0x1b];
  for (puVar21 = puVar5; puStack_350 = puVar24, puVar21 != puVar6; puVar21 = puVar21 + 0x2a) {
    if ((*(long *)(puVar21 + 0x1e) == 0) && (*(long *)(puVar21 + 0x20) == -1)) goto LAB_05a4ab26;
  }
  if (puVar6 < (undefined4 *)plVar19[0x1d]) {
    func_0x05a7b970(puVar6);
    pbVar25 = (byte *)(puVar6 + 0x2a);
    plVar19[0x1c] = (long)pbVar25;
LAB_05a4aabd:
    plVar19[0x1c] = (long)pbVar25;
    pbVar29 = *(byte **)(pbVar25 + -0xa8);
    if ((*pbVar29 & 1) == 0) {
      *pbVar29 = 0x26;
      pbVar29 = pbVar29 + 1;
    }
    else {
      pbVar29[8] = 0x13;
      pbVar29[9] = 0;
      pbVar29[10] = 0;
      pbVar29[0xb] = 0;
      pbVar29[0xc] = 0;
      pbVar29[0xd] = 0;
      pbVar29[0xe] = 0;
      pbVar29[0xf] = 0;
      pbVar29 = *(byte **)(pbVar29 + 0x10);
    }
    uVar12 = _UNK_01494d69;
    uVar11 = _UNK_01494d65;
    uVar10 = _UNK_01494d61;
    *(undefined4 *)pbVar29 = _DAT_01494d5d;
    *(undefined4 *)(pbVar29 + 4) = uVar10;
    *(undefined4 *)(pbVar29 + 8) = uVar11;
    *(undefined4 *)(pbVar29 + 0xc) = uVar12;
    pbVar29[0xf] = 0x65;
    pbVar29[0x10] = 0x6e;
    pbVar29[0x11] = 0x74;
    pbVar29[0x12] = 0x3e;
    pbVar29[0x13] = 0;
    lVar18 = plVar19[0x1c];
    puVar21 = (undefined4 *)(lVar18 - 0xa8);
    *(char *)(lVar18 + -7) = (char)plVar19[0x10];
    *(undefined8 *)(lVar18 + -0x30) = 0;
    *(undefined8 *)(lVar18 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar18 + -8) = 0;
LAB_05a4ab26:
    plVar32 = (long *)((long)puVar24 + 0x20);
    pbVar29 = *(byte **)(puVar21 + 0x24);
    if (pbVar29 < *(byte **)(puVar21 + 0x26)) {
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
      if (pbVar29 != pbVar20) {
        if ((*puStack_170 & 1) == 0) {
          *(undefined8 *)(pbVar29 + 0x18) = *(undefined8 *)(puStack_170 + 4);
          uVar26 = *(undefined8 *)(puStack_170 + 2);
          *(undefined8 *)(pbVar29 + 8) = *(undefined8 *)puStack_170;
          *(undefined8 *)(pbVar29 + 0x10) = uVar26;
        }
        else {
          func_0x04885070(pbVar29 + 8,plVar23[0x14],plVar23[0x13]);
        }
      }
      *(undefined8 *)pbVar29 = *(undefined8 *)pbVar20;
      *(long **)(pbVar29 + 0x28) = plVar32;
      *(uint **)(pbVar29 + 0x30) = puVar24;
      LOCK();
      *(long *)((long)puVar24 + 8) = *(long *)((long)puVar24 + 8) + 1;
      UNLOCK();
      pbVar29 = pbVar29 + 0x38;
      *(byte **)(puVar21 + 0x24) = pbVar29;
      goto LAB_05a4ae67;
    }
    pbVar29 = pbVar29 + -*(long *)(puVar21 + 0x22);
    uVar30 = ((long)pbVar29 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar30 < 0x492492492492493) {
      lVar18 = (long)*(byte **)(puVar21 + 0x26) - *(long *)(puVar21 + 0x22) >> 3;
      uVar28 = lVar18 * -0x2492492492492492;
      if (uVar30 < uVar28) {
        uVar30 = uVar28;
      }
      plStack_3c8 = (long *)(puVar21 + 0x22);
      if (0x249249249249248 < (ulong)(lVar18 * 0x6db6db6db6db6db7)) {
        uVar30 = 0x492492492492492;
      }
      plStack_2c0 = plVar32;
      plStack_118 = plStack_3c8;
      if (uVar30 == 0) {
        pbVar25 = (byte *)0x0;
      }
      else {
        if (0x492492492492492 < uVar30) goto LAB_05a4b603;
        pbVar25 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0x38);
        if (pbVar25 == (byte *)0x0) {
          func_0x0eec74c0(uVar30 * 0x38,0);
          pbVar25 = (byte *)0x0;
        }
      }
      puVar24 = puStack_350;
      pbVar2 = pbVar29 + (long)pbVar25;
      pbStack_3d0 = pbVar25 + uVar30 * 0x38;
      pbVar3 = pbVar29 + (long)(pbVar25 + 0x10);
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
      pbVar3 = pbVar29 + (long)pbVar25;
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
      pbVar3 = pbVar29 + (long)(pbVar25 + 0x20);
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbStack_3d8 = pbVar2;
      pbStack_3e8 = pbVar25;
      pbStack_3e0 = pbVar2;
      if (pbVar2 != pbVar20) {
        if ((*puStack_170 & 1) == 0) {
          *(undefined8 *)(pbVar29 + (long)(pbVar25 + 0x18)) = *(undefined8 *)(puStack_170 + 4);
          uVar14 = puStack_170[1];
          uVar15 = puStack_170[2];
          uVar16 = puStack_170[3];
          *(uint *)(pbVar29 + (long)(pbVar25 + 8)) = *puStack_170;
          *(uint *)(pbVar29 + (long)(pbVar25 + 0xc)) = uVar14;
          *(uint *)(pbVar29 + (long)(pbVar25 + 0x10)) = uVar15;
          *(uint *)(pbVar29 + (long)(pbVar25 + 0x14)) = uVar16;
        }
        else {
          func_0x04885070(pbVar29 + (long)(pbVar25 + 8),plVar23[0x14],plVar23[0x13]);
        }
      }
      *(undefined8 *)pbVar2 = *(undefined8 *)pbVar20;
      *(long **)(pbVar2 + 0x28) = plStack_2c0;
      *(uint **)(pbVar2 + 0x30) = puVar24;
      LOCK();
      plVar32 = (long *)((long)puVar24 + 8);
      *plVar32 = *plVar32 + 1;
      UNLOCK();
      pbStack_3d8 = pbStack_3d8 + 0x38;
      puVar17 = *(undefined8 **)(puVar21 + 0x22);
      puVar8 = *(undefined8 **)(puVar21 + 0x24);
      pbVar20 = pbStack_3e0 + ((long)puVar17 - (long)puVar8);
      pbVar29 = pbVar20;
      puVar27 = puVar17;
      if ((long)puVar17 - (long)puVar8 != 0) {
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
          uVar26 = puVar27[2];
          *(undefined8 *)(pbVar29 + 8) = puVar27[1];
          *(undefined8 *)(pbVar29 + 0x10) = uVar26;
          *(undefined2 *)(puVar27 + 1) = 0;
          *(undefined8 *)pbVar29 = *puVar27;
          uVar26 = puVar27[6];
          *(undefined8 *)(pbVar29 + 0x28) = puVar27[5];
          *(undefined8 *)(pbVar29 + 0x30) = uVar26;
          puVar27[5] = 0;
          puVar27[6] = 0;
          puVar27 = puVar27 + 7;
          pbVar29 = pbVar29 + 0x38;
        } while (puVar27 != puVar8);
        do {
          plVar32 = (long *)puVar17[6];
          if (plVar32 == (long *)0x0) {
LAB_05a4ade4:
            bVar4 = *(byte *)(puVar17 + 1);
          }
          else {
            LOCK();
            plVar22 = plVar32 + 1;
            lVar18 = *plVar22;
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (lVar18 != 0) goto LAB_05a4ade4;
            (**(code **)(*plVar32 + 0x10))(plVar32);
            func_0x0412c2d0(plVar32);
            bVar4 = *(byte *)(puVar17 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
          }
          puVar17 = puVar17 + 7;
        } while (puVar17 != puVar8);
        puVar17 = (undefined8 *)*plStack_118;
      }
      puVar24 = puStack_350;
      pbVar29 = pbStack_3d8;
      *(byte **)(puVar21 + 0x22) = pbVar20;
      *(byte **)(puVar21 + 0x24) = pbStack_3d8;
      lVar18 = *(long *)(puVar21 + 0x26);
      *(byte **)(puVar21 + 0x26) = pbStack_3d0;
      if (puVar17 != (undefined8 *)0x0) {
        func_0x0412a280(puVar17,lVar18 - (long)puVar17);
      }
LAB_05a4ae67:
      *(byte **)(puVar21 + 0x24) = pbVar29;
      uVar10 = *puVar21;
      uVar11 = puVar21[1];
      uVar12 = puVar21[2];
      uVar13 = puVar21[3];
      if (*(long *)(puVar21 + 2) != 0) {
        LOCK();
        plVar32 = (long *)(*(long *)(puVar21 + 2) + 8);
        *plVar32 = *plVar32 + 1;
        UNLOCK();
      }
      plVar32 = (long *)plVar23[0xf];
      *(undefined4 *)(plVar23 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar23 + 0x74) = uVar11;
      *(undefined4 *)(plVar23 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar23 + 0x7c) = uVar13;
      if (plVar32 != (long *)0x0) {
        LOCK();
        plVar22 = plVar32 + 1;
        lVar18 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
          func_0x0412c2d0(plVar32);
        }
      }
      *(undefined1 *)(plVar23 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
      LOCK();
      lVar18 = *plStack_168;
      *plStack_168 = *plStack_168 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)puVar24 + 0x10))(puVar24);
        func_0x0412c2d0(puVar24);
      }
      pbVar20 = pbStack_110;
      LOCK();
      lVar18 = *(long *)pbStack_110;
      *(long *)pbStack_110 = *(long *)pbStack_110 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
        LOCK();
        lVar18 = *(long *)pbVar20;
        *(long *)pbVar20 = *(long *)pbVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar18 = *(long *)pbStack_110;
        *(long *)pbStack_110 = *(long *)pbStack_110 + -1;
        UNLOCK();
      }
      if (lVar18 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      ppbVar31 = (byte **)(plVar19 + 0x26);
      pbStack_3e0 = (byte *)0x0;
      pbStack_3e8 = &UNK_0f0000a0;
      if (ppbVar31 != &pbStack_3e8) {
        if ((*ppbVar31 == (byte *)0x0) ||
           ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbStack_3e8 != (byte *)0x0)) {
          (**(code **)pbStack_3e8)(&pbStack_3e8,ppbVar31);
          pbVar20 = pbStack_3e8;
        }
        else {
          pbVar20 = (byte *)0x0;
        }
        *ppbVar31 = pbVar20;
      }
      if ((uStack_2b8 & 1) != 0) {
        func_0x0412a280(puStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
      }
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_188);
      if ((uStack_188 & 1) != 0) {
        func_0x0412a280(uStack_178,uStack_188 & 0xfffffffffffffffe);
      }
      uVar26 = *param_1;
      plVar19 = (long *)param_1[1];
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
      }
      plVar23 = (long *)func_0x05a4bd10(_DAT_011983f0,uVar26,plVar19,8,&UNK_0128b951);
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_1a8,&uStack_1c8);
      if ((uStack_1c8 & 1) != 0) {
        func_0x0412a280(uStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
      }
      if ((uStack_1a8 & 1) != 0) {
        func_0x0412a280(uStack_198,uStack_1a8 & 0xfffffffffffffffe);
      }
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar23 = plVar19 + 1;
        lVar18 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      uVar26 = *param_1;
      plVar19 = (long *)param_1[1];
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
      }
      plVar23 = (long *)func_0x05a4bd10(_DAT_01198400,uVar26,plVar19,0xc,&UNK_012be13a);
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_1e8,&uStack_208);
      if ((uStack_208 & 1) != 0) {
        func_0x0412a280(uStack_1f8,uStack_208 & 0xfffffffffffffffe);
      }
      if ((uStack_1e8 & 1) != 0) {
        func_0x0412a280(uStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
      }
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar23 = plVar19 + 1;
        lVar18 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      uVar26 = *param_1;
      plVar19 = (long *)param_1[1];
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
      }
      plVar23 = (long *)func_0x05a4bd10(_DAT_01198724,uVar26,plVar19,0x10,&UNK_0119d269);
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_228,&uStack_248);
      if ((uStack_248 & 1) != 0) {
        func_0x0412a280(uStack_238,uStack_248 & 0xfffffffffffffffe);
      }
      if ((uStack_228 & 1) != 0) {
        func_0x0412a280(uStack_218,uStack_228 & 0xfffffffffffffffe);
      }
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar23 = plVar19 + 1;
        lVar18 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      uVar26 = *param_1;
      plVar19 = (long *)param_1[1];
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
      }
      uStack_334 = 0;
      uStack_332 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      bStack_340 = 0x16;
      uStack_33f = 0x657473696c;
      uStack_33a = 0x5f6e;
      uStack_338 = 0x656d6974;
      pbStack_348 = (byte *)0x9903353550de890c;
      pbStack_3e8 = &UNK_0effe108;
      pbStack_3e0 = (byte *)0x14;
      plVar23 = (long *)func_0x05a5dbc0(uVar26,&pbStack_348,&pbStack_3e8);
      if (pbStack_3e8 != (byte *)0x0) {
        (**(code **)(pbStack_3e8 + 8))(&pbStack_3e8);
      }
      if ((bStack_340 & 1) != 0) {
        func_0x0412a280(uStack_330,
                        CONCAT26(uStack_33a,CONCAT51(uStack_33f,bStack_340)) & 0xfffffffffffffffe);
      }
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar32 = plVar19 + 1;
        lVar18 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      puStack_108 = (undefined8 *)&UNK_0effe120;
      uStack_100 = 0x14;
      uStack_f8 = 0x1e;
      ppuVar33 = (undefined8 **)(plVar23 + 0x22);
      if (ppuVar33 != &puStack_108) {
        if ((*ppuVar33 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar33)[1])(ppuVar33), puStack_108 != (undefined8 *)0x0)) {
          (*(code *)*puStack_108)(&puStack_108,ppuVar33);
          puVar17 = puStack_108;
        }
        else {
          puVar17 = (undefined8 *)0x0;
        }
        *ppuVar33 = puVar17;
      }
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      (**(code **)(*plVar23 + 0x18))(plVar23,&uStack_268,&uStack_288);
      if ((uStack_288 & 1) != 0) {
        func_0x0412a280(uStack_278,uStack_288 & 0xfffffffffffffffe);
      }
      if ((uStack_268 & 1) != 0) {
        func_0x0412a280(uStack_258,uStack_268 & 0xfffffffffffffffe);
      }
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar23 = plVar19 + 1;
        lVar18 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      return;
    }
  }
  else {
    plVar32 = (long *)((long)puVar6 - (long)puVar5);
    uVar30 = ((long)plVar32 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar30) goto LAB_05a4b60d;
    lVar18 = plVar19[0x1d] - (long)puVar5 >> 3;
    uVar28 = lVar18 * -0x6186186186186186;
    if (uVar30 < uVar28) {
      uVar30 = uVar28;
    }
    plVar22 = plVar19 + 0x1b;
    if (0xc30c30c30c30c2 < (ulong)(lVar18 * -0x30c30c30c30c30c3)) {
      uVar30 = 0x186186186186186;
    }
    plStack_3c8 = plVar22;
    if (uVar30 == 0) {
      pbVar29 = (byte *)0x0;
LAB_05a4a8d8:
      pbStack_3e0 = (byte *)((long)plVar32 + (long)pbVar29);
      pbStack_3d0 = pbVar29 + uVar30 * 0xa8;
      pbStack_3e8 = pbVar29;
      pbStack_3d8 = pbStack_3e0;
      plStack_2c0 = plVar22;
      func_0x05a7b970(pbStack_3e0);
      pbVar25 = pbStack_3d8 + 0xa8;
      lVar18 = plVar19[0x1b];
      lVar7 = plVar19[0x1c];
      pbVar29 = pbStack_3e0 + (lVar18 - lVar7);
      if (lVar18 != lVar7) {
        lVar34 = 0;
        do {
          uVar26 = ((undefined8 *)(lVar18 + lVar34))[1];
          *(undefined8 *)(pbVar29 + lVar34) = *(undefined8 *)(lVar18 + lVar34);
          *(undefined8 *)(pbVar29 + lVar34 + 8) = uVar26;
          *(undefined8 *)(lVar18 + lVar34) = 0;
          ((undefined8 *)(lVar18 + lVar34))[1] = 0;
          pbVar2 = pbVar29 + lVar34 + 0x20;
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          pbVar2[8] = 0;
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2 = pbVar29 + lVar34 + 0x10;
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          pbVar2[8] = 0;
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2 = pbVar29 + lVar34 + 0x30;
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          *(undefined8 *)(pbVar29 + lVar34 + 0x28) = *(undefined8 *)(lVar18 + 0x28 + lVar34);
          puVar21 = (undefined4 *)(lVar18 + 0x18 + lVar34);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          pbVar2 = pbVar29 + lVar34 + 0x18;
          *(undefined4 *)pbVar2 = *puVar21;
          *(undefined4 *)(pbVar2 + 4) = uVar10;
          *(undefined4 *)(pbVar2 + 8) = uVar11;
          *(undefined4 *)(pbVar2 + 0xc) = uVar12;
          *(undefined2 *)(lVar18 + 0x18 + lVar34) = 0;
          *(undefined8 *)(pbVar29 + lVar34 + 0x10) = *(undefined8 *)(lVar18 + 0x10 + lVar34);
          func_0x04167a20(pbVar29 + lVar34 + 0x38,lVar18 + lVar34 + 0x38);
          puVar17 = (undefined8 *)(lVar18 + 0x40 + lVar34);
          uVar26 = puVar17[1];
          *(undefined8 *)(pbVar29 + lVar34 + 0x40) = *puVar17;
          *(undefined8 *)(pbVar29 + lVar34 + 0x40 + 8) = uVar26;
          puVar17 = (undefined8 *)(lVar18 + 0x50 + lVar34);
          uVar26 = puVar17[1];
          *(undefined8 *)(pbVar29 + lVar34 + 0x50) = *puVar17;
          *(undefined8 *)(pbVar29 + lVar34 + 0x50 + 8) = uVar26;
          puVar17 = (undefined8 *)(lVar18 + 0x60 + lVar34);
          uVar26 = puVar17[1];
          *(undefined8 *)(pbVar29 + lVar34 + 0x60) = *puVar17;
          *(undefined8 *)(pbVar29 + lVar34 + 0x60 + 8) = uVar26;
          puVar17 = (undefined8 *)(lVar18 + 0x60 + lVar34);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(pbVar29 + lVar34 + 0x70) = *(undefined8 *)(lVar18 + 0x70 + lVar34);
          puVar17 = (undefined8 *)(lVar18 + 0x78 + lVar34);
          uVar26 = puVar17[1];
          *(undefined8 *)(pbVar29 + lVar34 + 0x78) = *puVar17;
          *(undefined8 *)(pbVar29 + lVar34 + 0x78 + 8) = uVar26;
          pbVar2 = pbVar29 + lVar34 + 0x88;
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          pbVar2[8] = 0;
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2 = pbVar29 + lVar34 + 0x98;
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          puVar21 = (undefined4 *)(lVar18 + 0x88 + lVar34);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          pbVar2 = pbVar29 + lVar34 + 0x88;
          *(undefined4 *)pbVar2 = *puVar21;
          *(undefined4 *)(pbVar2 + 4) = uVar10;
          *(undefined4 *)(pbVar2 + 8) = uVar11;
          *(undefined4 *)(pbVar2 + 0xc) = uVar12;
          *(undefined8 *)(pbVar29 + lVar34 + 0x98) = *(undefined8 *)(lVar18 + 0x98 + lVar34);
          puVar17 = (undefined8 *)(lVar18 + 0x88 + lVar34);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar18 + 0x98 + lVar34) = 0;
          *(undefined2 *)(pbVar29 + lVar34 + 0xa0) = *(undefined2 *)(lVar18 + 0xa0 + lVar34);
          lVar1 = lVar18 + lVar34;
          lVar34 = lVar34 + 0xa8;
        } while (lVar1 + 0xa8 != lVar7);
        do {
          func_0x05a78270(lVar18);
          lVar18 = lVar18 + 0xa8;
        } while (lVar18 != lVar7);
        lVar18 = *plStack_2c0;
      }
      puVar24 = puStack_350;
      plVar19[0x1b] = (long)pbVar29;
      plVar19[0x1c] = (long)pbVar25;
      lVar7 = plVar19[0x1d];
      plVar19[0x1d] = (long)pbStack_3d0;
      if (lVar18 != 0) {
        func_0x0412a280(lVar18,lVar7 - lVar18);
      }
      goto LAB_05a4aabd;
    }
    if (uVar30 < 0x186186186186187) {
      pbVar29 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0xa8);
      if (pbVar29 == (byte *)0x0) {
        func_0x0eec74c0(uVar30 * 0xa8,0);
        pbVar29 = (byte *)0x0;
      }
      goto LAB_05a4a8d8;
    }
LAB_05a4b603:
    FUN_04882eb0();
  }
  func_0x05a7bbb0();
LAB_05a4b60d:
  uVar26 = func_0x05a7bae0();
  if ((*pbVar29 & 1) != 0) {
    func_0x0412a280(plVar32[3],plVar32[1] & 0xfffffffffffffffe);
  }
  func_0x05a7baf0(&pbStack_3e8);
  puVar24 = puStack_350;
  LOCK();
  lVar18 = *plStack_168;
  *plStack_168 = *plStack_168 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*(long *)puStack_350 + 0x10))(puStack_350);
    func_0x0412c2d0(puVar24);
  }
  func_0x05a79780(plVar23);
  func_0x05a797b0(plVar23);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_2b8 & 1) == 0) {
    func_0x0eee2d70(uVar26);
  }
  func_0x0412a280(puStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  func_0x0eee2d70(uVar26);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}



/* ---- referenced strings ----
 * 0x11b9065  minecraft:behavior.stay_near_noteblock
 * 0x11b9075  or.stay_near_noteblock
 * 0x1494d5d  <any array element>
 */
