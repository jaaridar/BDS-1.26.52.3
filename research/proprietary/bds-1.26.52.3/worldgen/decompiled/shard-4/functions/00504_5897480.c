/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5997480 (ELF vaddr 0x5897480)
 * Label: caller-of-callee
 * Body:  [[05997480, 05998a35] [05998a40, 0599904d] [05999050, 0599908c] [05999090, 0599a976] [0599afb9, 0599afd6] [0599b139, 0599b46e] [0599b5e9, 0599b5f3] [0599b657, 0599b68c]]
 * Ghidra: FUN_05997480
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05997480(undefined8 *param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
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
  long *plVar18;
  undefined4 *puVar19;
  long *plVar20;
  byte *pbVar21;
  byte *pbVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  undefined8 uVar34;
  long lVar35;
  byte **ppbVar36;
  long *plVar37;
  byte *pbVar38;
  bool bVar39;
  undefined8 uStack_428;
  byte *pbStack_408;
  byte *pbStack_400;
  byte *pbStack_3f8;
  byte *pbStack_3f0;
  byte *pbStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined1 uStack_359;
  byte *pbStack_358;
  byte bStack_350;
  undefined5 uStack_34f;
  undefined2 uStack_34a;
  undefined1 uStack_348;
  undefined5 uStack_347;
  undefined2 uStack_342;
  undefined8 uStack_340;
  undefined8 uStack_338;
  byte *pbStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  uint *puStack_2d0;
  byte *pbStack_2c8;
  byte bStack_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  byte *pbStack_288;
  ulong uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  byte *pbStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined4 *puStack_248;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined8 uStack_230;
  ulong auStack_228 [4];
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
  uint *puStack_110;
  byte bStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined5 uStack_105;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined5 uStack_ed;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *pbStack_58;
  byte bStack_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  undefined8 uStack_38;
  
  puStack_248 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_248 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar27 = _UNK_013c560c;
  uStack_258 = 0x21;
  uStack_250 = 0x1c;
  *(ulong *)(puStack_248 + 3) = CONCAT44(_UNK_013c5608,_DAT_013c5604);
  *(undefined8 *)(puStack_248 + 5) = uVar27;
  uVar12 = _DAT_013c5604;
  uVar11 = _UNK_013c5600;
  uVar10 = _UNK_013c55fc;
  *puStack_248 = _DAT_013c55f8;
  puStack_248[1] = uVar10;
  puStack_248[2] = uVar11;
  puStack_248[3] = uVar12;
  *(undefined1 *)(puStack_248 + 7) = 0;
  bStack_240 = 0x10;
  uStack_23f = 0x7469726f697270;
  uStack_238 = 0x79;
  uStack_237 = 0;
  bStack_f0 = 2;
  uStack_ef = 0x30;
  uStack_ee = 0;
  bStack_108 = 2;
  uStack_107 = 0x30;
  uStack_106 = 0;
  bStack_48 = 0;
  uStack_47 = 0;
  func_0x0564aad0(&pbStack_d8,&uStack_258,&bStack_240,0,&bStack_f0,0,&bStack_108,&bStack_48);
  uVar27 = *param_1;
  uStack_280 = 0;
  if ((uStack_68 & 1) == 0) {
    pbStack_268 = pbStack_58;
    uStack_278 = uStack_68;
    uStack_274 = uStack_64;
    uStack_270 = uStack_60;
    uStack_26c = uStack_5c;
  }
  else {
    func_0x0412e5e0(&uStack_278,pbStack_58,CONCAT44(uStack_5c,uStack_60));
  }
  uStack_260 = 0;
  if ((uStack_278 & 1) == 0) {
    if ((byte)uStack_278 >> 1 != 0) goto LAB_05997610;
LAB_05997666:
    uStack_280 = 0;
  }
  else {
    if (CONCAT44(uStack_26c,uStack_270) == 0) goto LAB_05997666;
LAB_05997610:
    if ((uStack_278 & 1) == 0) {
      pbVar38 = (byte *)((long)&uStack_278 + 1);
      if (pbVar38 != (byte *)0x0) goto LAB_05997630;
      goto LAB_05997666;
    }
    pbVar38 = pbStack_268;
    if (pbStack_268 == (byte *)0x0) goto LAB_05997666;
LAB_05997630:
    if (*pbVar38 == 0) goto LAB_05997666;
    uVar25 = func_0x0eee2e90(pbVar38);
    uStack_280 = 0xcbf29ce484222325;
    if (uVar25 != 0) {
      uVar30 = (ulong)((uint)uVar25 & 7);
      if (uVar25 < 8) {
        uStack_280 = 0xcbf29ce484222325;
      }
      else {
        uVar25 = uVar25 & 0xfffffffffffffff8;
        uStack_280 = 0xcbf29ce484222325;
        do {
          uStack_280 = (((((((uStack_280 * 0x100000001b3 ^ (ulong)*pbVar38) * 0x100000001b3 ^
                            (ulong)pbVar38[1]) * 0x100000001b3 ^ (ulong)pbVar38[2]) * 0x100000001b3
                          ^ (ulong)pbVar38[3]) * 0x100000001b3 ^ (ulong)pbVar38[4]) * 0x100000001b3
                        ^ (ulong)pbVar38[5]) * 0x100000001b3 ^ (ulong)pbVar38[6]) * 0x100000001b3 ^
                       (ulong)pbVar38[7];
          pbVar38 = pbVar38 + 8;
          uVar25 = uVar25 - 8;
        } while (uVar25 != 0);
      }
      if (uVar30 != 0) {
        uVar25 = 0;
        do {
          uStack_280 = uStack_280 * 0x100000001b3 ^ (ulong)pbVar38[uVar25];
          uVar25 = uVar25 + 1;
        } while (uVar30 != uVar25);
      }
    }
  }
  pbVar38 = (byte *)0xcbf29ce484222325;
  pbStack_408 = (byte *)0x0;
  func_0x0564b850(&pbStack_400,&pbStack_d8);
  bStack_2c0 = 0;
  uStack_2bf = 0;
  pbStack_2c8 = &UNK_0effb1b8;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar17 = pbStack_408;
  puVar17[1] = pbStack_400;
  puVar17[5] = uStack_3e0;
  puVar17[3] = pbStack_3f0;
  puVar17[4] = pbStack_3e8;
  pbStack_3f0 = (byte *)0x0;
  pbStack_3e8 = (byte *)0x0;
  uStack_3e0 = 0;
  puVar17[8] = uStack_3c8;
  puVar17[6] = uStack_3d8;
  puVar17[7] = uStack_3d0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  puVar17[0xb] = uStack_3b0;
  puVar17[9] = uStack_3c0;
  puVar17[10] = uStack_3b8;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  puVar17[0xe] = uStack_398;
  puVar17[0xc] = uStack_3a8;
  puVar17[0xd] = uStack_3a0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  puVar17[0x11] = uStack_380;
  *(undefined4 *)(puVar17 + 0xf) = (undefined4)uStack_390;
  *(undefined4 *)((long)puVar17 + 0x7c) = uStack_390._4_4_;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_388;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_388._4_4_;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  bStack_2c0 = (byte)puVar17;
  uStack_2bf = (undefined7)((ulong)puVar17 >> 8);
  pbStack_318 = (byte *)0x0;
  uStack_310 = 0;
  if (pbStack_2c8 == (byte *)0x0) {
    pbVar21 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_2c8)(&pbStack_2c8,&pbStack_318);
    pbVar21 = pbStack_2c8;
  }
  pbStack_2c8 = (byte *)0x0;
  pbStack_318 = pbVar21;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0effafe8;
  pbStack_358 = (byte *)0x0;
  bStack_350 = 0;
  uStack_34f = 0;
  uStack_34a = 0;
  if (pbVar21 == (byte *)0x0) {
    pbStack_358 = (byte *)0x0;
  }
  else {
    (**(code **)pbVar21)(&pbStack_318,&pbStack_358);
    pbStack_358 = pbStack_318;
  }
  pbStack_318 = (byte *)0x0;
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
  func_0x04aa75f0(plVar18 + 0xe,&uStack_359,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar37 = plVar18 + 0x11;
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
  plVar18[4] = (long)&UNK_0effb038;
  plVar18[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar18 + 0x2f) = 1;
  plVar18[0x30] = 0;
  plVar18[0x31] = 0;
  if (pbStack_358 == (byte *)0x0) {
    pbVar21 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_358)(&pbStack_358,plVar18 + 0x30);
    pbVar21 = pbStack_358;
  }
  pbStack_358 = (byte *)0x0;
  plVar18[0x30] = (long)pbVar21;
  puVar2 = (uint *)(plVar18 + 0x12);
  if (plVar37 == (long *)&DAT_0f552078) {
    plVar18[0x15] = 0;
  }
  else {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar18[0x14] = _DAT_0f552090;
        uVar12 = uRam000000000f55208c;
        uVar11 = _DAT_0f552088;
        uVar10 = uRam000000000f552084;
        *puVar2 = _DAT_0f552080;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar10;
        *(undefined4 *)(plVar18 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar39 = (_DAT_0f552080 & 1) != 0;
      lVar28 = 0xf552081;
      if (bVar39) {
        lVar28 = _DAT_0f552090;
      }
      uVar25 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar39) {
        uVar25 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      FUN_04885120(puVar2,lVar28,uVar25);
    }
    plVar18[0x11] = _DAT_0f552078;
    plVar18[0x15] = 0;
    if (pbStack_358 != (byte *)0x0) {
      (**(code **)(pbStack_358 + 8))(&pbStack_358);
    }
  }
  plVar23 = plVar18 + 1;
  plStack_368 = param_1;
  if (pbStack_318 != (byte *)0x0) {
    (**(code **)(pbStack_318 + 8))(&pbStack_318);
  }
  LOCK();
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0effb118;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar17[4] = &UNK_0effb168;
  puVar17[0xe] = plVar18 + 4;
  puVar17[0xf] = plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  bStack_350 = (byte)puVar17;
  uStack_34f = (undefined5)((ulong)puVar17 >> 8);
  uStack_34a = (undefined2)((ulong)puVar17 >> 0x30);
  pbStack_358 = (byte *)(puVar17 + 4);
  puVar19 = (undefined4 *)func_0x059da530(uVar27,&uStack_280);
  plVar20 = *(long **)(puVar19 + 0x24);
  if (plVar20 < *(long **)(puVar19 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 != plVar37) {
      if ((*puVar2 & 1) == 0) {
        plVar20[3] = plVar18[0x14];
        lVar28 = plVar18[0x13];
        plVar20[1] = *(long *)puVar2;
        plVar20[2] = lVar28;
      }
      else {
        func_0x04885070(plVar20 + 1,plVar18[0x14],plVar18[0x13]);
      }
    }
    *plVar20 = *plVar37;
    plVar20[5] = (long)(puVar17 + 4);
    plVar20[6] = (long)puVar17;
    LOCK();
    puVar17[1] = puVar17[1] + 1;
    UNLOCK();
    plVar20 = plVar20 + 7;
    *(long **)(puVar19 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x059dc2f0(puVar19 + 0x22,plVar37,&pbStack_358);
  }
  plVar37 = plStack_368;
  *(long **)(puVar19 + 0x24) = plVar20;
  uVar10 = *puVar19;
  uVar11 = puVar19[1];
  uVar12 = puVar19[2];
  uVar13 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar18[0xf];
  *(undefined4 *)(plVar18 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar18 + 0x74) = uVar11;
  *(undefined4 *)(plVar18 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar18 + 0x7c) = uVar13;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar26 = plVar20 + 1;
    lVar28 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  plVar20 = (long *)CONCAT26(uStack_34a,CONCAT51(uStack_34f,bStack_350));
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar26 = plVar20 + 1;
    lVar28 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar28 = *plVar23;
  *plVar23 = *plVar23 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    LOCK();
    lVar28 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
  }
  if (pbStack_2c8 != (byte *)0x0) {
    (**(code **)(pbStack_2c8 + 8))(&pbStack_2c8);
  }
  if ((uStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,uStack_390 & 0xfffffffffffffffe);
  }
  if ((uStack_3a8 & 1) != 0) {
    func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
  }
  if ((uStack_3c0 & 1) != 0) {
    func_0x0412a280(uStack_3b0,uStack_3c0 & 0xfffffffffffffffe);
  }
  if ((uStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,uStack_3d8 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_3f0 & 1) != 0) {
    func_0x0412a280(uStack_3e0,(ulong)pbStack_3f0 & 0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(pbStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
  }
  pbStack_408 = (byte *)0x0;
  pbStack_400 = (byte *)((ulong)pbStack_400 & 0xffffffffffffff00);
  func_0x0564b850(&pbStack_3f8,&pbStack_d8);
  bStack_350 = 0;
  uStack_34f = 0;
  uStack_34a = 0;
  pbStack_358 = &UNK_0effb1d0;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  ppbVar36 = (byte **)(plVar18 + 0x26);
  *(undefined1 *)(puVar17 + 1) = pbStack_400._0_1_;
  *puVar17 = pbStack_408;
  puVar17[2] = pbStack_3f8;
  puVar17[6] = uStack_3d8;
  puVar17[4] = pbStack_3e8;
  puVar17[5] = uStack_3e0;
  pbStack_3e8 = (byte *)0x0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  puVar17[9] = uStack_3c0;
  puVar17[7] = uStack_3d0;
  puVar17[8] = uStack_3c8;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  puVar17[0xc] = uStack_3a8;
  puVar17[10] = uStack_3b8;
  puVar17[0xb] = uStack_3b0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  puVar17[0xf] = uStack_390;
  puVar17[0xd] = uStack_3a0;
  puVar17[0xe] = uStack_398;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 0;
  puVar17[0x12] = uStack_378;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_388;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_388._4_4_;
  *(undefined4 *)(puVar17 + 0x11) = (undefined4)uStack_380;
  *(undefined4 *)((long)puVar17 + 0x8c) = uStack_380._4_4_;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  bStack_350 = (byte)puVar17;
  uStack_34f = (undefined5)((ulong)puVar17 >> 8);
  uStack_34a = (undefined2)((ulong)puVar17 >> 0x30);
  if (ppbVar36 == &pbStack_358) {
    func_0x0564b7b0(puVar17 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar17);
  }
  else {
    pbVar21 = &UNK_0effb1d0;
    if ((*ppbVar36 == (byte *)0x0) ||
       ((**(code **)(*ppbVar36 + 8))(ppbVar36), pbVar21 = pbStack_358, pbStack_358 != (byte *)0x0))
    {
      (**(code **)pbVar21)(&pbStack_358,ppbVar36);
      pbVar21 = pbStack_358;
      pbStack_358 = (byte *)0x0;
      *ppbVar36 = pbVar21;
    }
    else {
      pbStack_358 = (byte *)0x0;
      *ppbVar36 = (byte *)0x0;
    }
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
  if ((uStack_3d0 & 1) != 0) {
    func_0x0412a280(uStack_3c0,uStack_3d0 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,(ulong)pbStack_3e8 & 0xfffffffffffffffe);
  }
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(pbStack_58,CONCAT44(uStack_64,uStack_68) & 0xfffffffffffffffe);
  }
  if ((bStack_80 & 1) != 0) {
    func_0x0412a280(uStack_70,CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
  }
  if ((bStack_98 & 1) != 0) {
    func_0x0412a280(uStack_88,CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
  }
  if ((bStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
  }
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
  }
  if ((bStack_48 & 1) != 0) {
    func_0x0412a280(uStack_38,CONCAT62(uStack_46,CONCAT11(uStack_47,bStack_48)) & 0xfffffffffffffffe
                   );
  }
  if ((bStack_108 & 1) != 0) {
    func_0x0412a280(uStack_f8,
                    CONCAT53(uStack_105,CONCAT12(uStack_106,CONCAT11(uStack_107,bStack_108))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,
                    CONCAT53(uStack_ed,CONCAT12(uStack_ee,CONCAT11(uStack_ef,bStack_f0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_240 & 1) != 0) {
    func_0x0412a280(uStack_230,CONCAT71(uStack_23f,bStack_240) & 0xfffffffffffffffe);
  }
  uVar27 = *plVar37;
  uStack_342 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  bStack_350 = 0x1a;
  uStack_34f = 0x72746e6f63;
  uStack_34a = 0x6c6f;
  uStack_348 = 0x5f;
  uStack_347 = 0x7367616c66;
  pbStack_358 = (byte *)0x86e3afe1b1c6e2ac;
  uStack_310 = 0;
  pbStack_318 = &UNK_0effb3e0;
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
  *(undefined **)pbVar21 = &UNK_0effb1f8;
  pbStack_408 = (byte *)0x0;
  pbStack_400 = (byte *)0x0;
  if (pbStack_318 == (byte *)0x0) {
    pbStack_408 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_318)(&pbStack_318,&pbStack_408);
    pbStack_408 = pbStack_318;
  }
  pbStack_318 = (byte *)0x0;
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
  func_0x04aa75f0(pbVar21 + 0x70,&pbStack_2c8,&UNK_01254d89);
  pbVar21[0x80] = 0;
  pbVar5 = pbVar21 + 0x88;
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
  *(undefined **)(pbVar21 + 0x20) = &UNK_0effb248;
  ppbVar36 = (byte **)(pbVar21 + 0x170);
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
  if (ppbVar36 != &pbStack_408) {
    if (pbStack_408 == (byte *)0x0) {
      pbVar32 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_408)(&pbStack_408,ppbVar36);
      pbVar32 = pbStack_408;
    }
    pbStack_408 = (byte *)0x0;
    *ppbVar36 = pbVar32;
  }
  puVar2 = (uint *)(pbVar21 + 0x90);
  if (pbVar5 != &DAT_0f551f58) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(undefined8 *)(pbVar21 + 0xa0) = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar2 = _DAT_0f551f60;
        *(undefined4 *)(pbVar21 + 0x94) = uVar10;
        *(undefined4 *)(pbVar21 + 0x98) = uVar11;
        *(undefined4 *)(pbVar21 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar39 = (_DAT_0f551f60 & 1) != 0;
      uVar34 = 0xf551f61;
      if (bVar39) {
        uVar34 = _DAT_0f551f70;
      }
      uVar25 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar39) {
        uVar25 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar2,uVar34,uVar25);
    }
  }
  pbVar32 = pbVar21 + 8;
  *(undefined8 *)(pbVar21 + 0x88) = _DAT_0f551f58;
  pbVar21[0xa8] = 0;
  pbVar21[0xa9] = 0;
  pbVar21[0xaa] = 0;
  pbVar21[0xab] = 0;
  pbVar21[0xac] = 0;
  pbVar21[0xad] = 0;
  pbVar21[0xae] = 0;
  pbVar21[0xaf] = 0;
  if (pbStack_408 != (byte *)0x0) {
    (**(code **)(pbStack_408 + 8))(&pbStack_408);
  }
  LOCK();
  *(long *)pbVar32 = *(long *)pbVar32 + 1;
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
  *(undefined **)pbVar22 = &UNK_0effb340;
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
  *(undefined **)(pbVar22 + 0x20) = &UNK_0effb390;
  *(byte **)(pbVar22 + 0x70) = pbVar21 + 0x20;
  *(byte **)(pbVar22 + 0x78) = pbVar21;
  LOCK();
  *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
  UNLOCK();
  pbStack_408 = pbVar22 + 0x20;
  pbStack_400 = pbVar22;
  puVar19 = (undefined4 *)func_0x059da530(uVar27,&pbStack_358);
  pbVar33 = *(byte **)(puVar19 + 0x24);
  if (pbVar33 < *(byte **)(puVar19 + 0x26)) {
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
    if (pbVar33 != pbVar5) {
      if ((*puVar2 & 1) == 0) {
        *(undefined8 *)(pbVar33 + 0x18) = *(undefined8 *)(pbVar21 + 0xa0);
        uVar27 = *(undefined8 *)(pbVar21 + 0x98);
        *(undefined8 *)(pbVar33 + 8) = *(undefined8 *)puVar2;
        *(undefined8 *)(pbVar33 + 0x10) = uVar27;
      }
      else {
        func_0x04885070(pbVar33 + 8,*(undefined8 *)(pbVar21 + 0xa0),*(undefined8 *)(pbVar21 + 0x98))
        ;
      }
    }
    *(undefined8 *)pbVar33 = *(undefined8 *)pbVar5;
    *(byte **)(pbVar33 + 0x28) = pbVar22 + 0x20;
    *(byte **)(pbVar33 + 0x30) = pbVar22;
    LOCK();
    *(long *)(pbVar22 + 8) = *(long *)(pbVar22 + 8) + 1;
    UNLOCK();
    pbVar33 = pbVar33 + 0x38;
    *(byte **)(puVar19 + 0x24) = pbVar33;
  }
  else {
    pbVar33 = (byte *)func_0x059dc2f0(puVar19 + 0x22,pbVar5,&pbStack_408);
  }
  *(byte **)(puVar19 + 0x24) = pbVar33;
  uVar10 = *puVar19;
  uVar11 = puVar19[1];
  uVar12 = puVar19[2];
  uVar13 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar18 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = *(long **)(pbVar21 + 0x78);
  *(undefined4 *)(pbVar21 + 0x70) = uVar10;
  *(undefined4 *)(pbVar21 + 0x74) = uVar11;
  *(undefined4 *)(pbVar21 + 0x78) = uVar12;
  *(undefined4 *)(pbVar21 + 0x7c) = uVar13;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar37 = plVar18 + 1;
    lVar28 = *plVar37;
    *plVar37 = *plVar37 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  pbVar5 = pbStack_400;
  pbVar21[0x80] = *(byte *)((long)puVar19 + 0xa1);
  if (pbStack_400 != (byte *)0x0) {
    LOCK();
    pbVar22 = pbStack_400 + 8;
    lVar28 = *(long *)pbVar22;
    *(long *)pbVar22 = *(long *)pbVar22 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*(long *)pbStack_400 + 0x10))(pbStack_400);
      func_0x0412c2d0(pbVar5);
    }
  }
  LOCK();
  lVar28 = *(long *)pbVar32;
  *(long *)pbVar32 = *(long *)pbVar32 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
    func_0x0412c2d0(pbVar21);
    LOCK();
    lVar28 = *(long *)pbVar32;
    *(long *)pbVar32 = *(long *)pbVar32 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *(long *)pbVar32;
    *(long *)pbVar32 = *(long *)pbVar32 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
    func_0x0412c2d0(pbVar21);
  }
  if (pbStack_318 != (byte *)0x0) {
    (**(code **)(pbStack_318 + 8))(&pbStack_318);
  }
  if ((bStack_350 & 1) != 0) {
    func_0x0412a280(uStack_340,
                    CONCAT26(uStack_34a,CONCAT51(uStack_34f,bStack_350)) & 0xfffffffffffffffe);
  }
  bStack_2c0 = 0;
  uStack_2bf = 0;
  bStack_350 = 0;
  uStack_34f = 0;
  uStack_34a = 0;
  pbStack_2c8 = (byte *)0x0;
  pbStack_358 = &UNK_0effb630;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  pbStack_408 = pbStack_358;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0effb408;
  pbStack_400 = (byte *)0x0;
  pbStack_358 = (byte *)0x0;
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
  pbVar5 = (byte *)(plVar18 + 0x11);
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
  plVar18[4] = (long)&UNK_0effb458;
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
  if (pbStack_408 == (byte *)0x0) {
    pbVar32 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_408)(&pbStack_408,plVar18 + 0x36);
    pbVar32 = pbStack_408;
  }
  pbStack_408 = (byte *)0x0;
  plVar18[0x36] = (long)pbVar32;
  *(undefined1 *)(plVar18 + 0x3e) = 0;
  puStack_110 = (uint *)(plVar18 + 0x12);
  if (pbVar5 != &DAT_0f552138) {
    if ((*puStack_110 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar18[0x14] = _DAT_0f552150;
        uVar12 = uRam000000000f55214c;
        uVar11 = _DAT_0f552148;
        uVar10 = uRam000000000f552144;
        *puStack_110 = _DAT_0f552140;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar10;
        *(undefined4 *)(plVar18 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_110,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar39 = (_DAT_0f552140 & 1) != 0;
      lVar28 = 0xf552141;
      if (bVar39) {
        lVar28 = _DAT_0f552150;
      }
      uVar25 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar39) {
        uVar25 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      FUN_04885120(puStack_110,lVar28,uVar25);
    }
  }
  plVar18[0x11] = _DAT_0f552138;
  plVar18[0x15] = 0;
  if (pbStack_408 != (byte *)0x0) {
    (**(code **)(pbStack_408 + 8))(&pbStack_408);
  }
  plVar37 = plVar18 + 1;
  if (pbStack_358 != (byte *)0x0) {
    (**(code **)(pbStack_358 + 8))(&pbStack_358);
  }
  LOCK();
  *plVar37 = *plVar37 + 1;
  UNLOCK();
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0effb538;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[4] = (long)&UNK_0effb588;
  plVar23[0xe] = (long)(plVar18 + 4);
  plVar23[0xf] = (long)plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  puStack_2d0 = (uint *)(plVar23 + 1);
  pbVar33 = *(byte **)(pbVar21 + 0xe0);
  pbVar22 = *(byte **)(pbVar21 + 0xd8);
  for (pbVar32 = pbVar22; plStack_370 = plVar23, pbVar32 != pbVar33; pbVar32 = pbVar32 + 0xa8) {
    if ((*(long *)(pbVar32 + 0x78) == 0) && (*(long *)(pbVar32 + 0x80) == -1)) goto LAB_05998da2;
  }
  if (pbVar33 < *(byte **)(pbVar21 + 0xe8)) {
    func_0x05a1a410(pbVar33);
    *(byte **)(pbVar21 + 0xe0) = pbVar33 + 0xa8;
    *(byte **)(pbVar21 + 0xe0) = pbVar33 + 0xa8;
    pbVar33 = *(byte **)pbVar33;
    bVar6 = *pbVar33;
joined_r0x05998d4e:
    if ((bVar6 & 1) == 0) {
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
    uVar12 = _UNK_01494d69;
    uVar11 = _UNK_01494d65;
    uVar10 = _UNK_01494d61;
    *(undefined4 *)pbVar33 = _DAT_01494d5d;
    *(undefined4 *)(pbVar33 + 4) = uVar10;
    *(undefined4 *)(pbVar33 + 8) = uVar11;
    *(undefined4 *)(pbVar33 + 0xc) = uVar12;
    pbVar33[0xf] = 0x65;
    pbVar33[0x10] = 0x6e;
    pbVar33[0x11] = 0x74;
    pbVar33[0x12] = 0x3e;
    pbVar33[0x13] = 0;
    lVar28 = *(long *)(pbVar21 + 0xe0);
    pbVar32 = (byte *)(lVar28 + -0xa8);
    *(byte *)(lVar28 + -7) = pbVar21[0x80];
    *(undefined8 *)(lVar28 + -0x30) = 0;
    *(undefined8 *)(lVar28 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar28 + -8) = 0;
LAB_05998da2:
    pbVar31 = *(byte **)(pbVar32 + 0x90);
    if (pbVar31 < *(byte **)(pbVar32 + 0x98)) {
      pbVar31[0x10] = 0;
      pbVar31[0x11] = 0;
      pbVar31[0x12] = 0;
      pbVar31[0x13] = 0;
      pbVar31[0x14] = 0;
      pbVar31[0x15] = 0;
      pbVar31[0x16] = 0;
      pbVar31[0x17] = 0;
      pbVar31[0x18] = 0;
      pbVar31[0x19] = 0;
      pbVar31[0x1a] = 0;
      pbVar31[0x1b] = 0;
      pbVar31[0x1c] = 0;
      pbVar31[0x1d] = 0;
      pbVar31[0x1e] = 0;
      pbVar31[0x1f] = 0;
      pbVar31[0] = 0;
      pbVar31[1] = 0;
      pbVar31[2] = 0;
      pbVar31[3] = 0;
      pbVar31[4] = 0;
      pbVar31[5] = 0;
      pbVar31[6] = 0;
      pbVar31[7] = 0;
      pbVar31[8] = 0;
      pbVar31[9] = 0;
      pbVar31[10] = 0;
      pbVar31[0xb] = 0;
      pbVar31[0xc] = 0;
      pbVar31[0xd] = 0;
      pbVar31[0xe] = 0;
      pbVar31[0xf] = 0;
      pbVar31[0x20] = 0;
      pbVar31[0x21] = 0;
      pbVar31[0x22] = 0;
      pbVar31[0x23] = 0;
      pbVar31[0x24] = 0;
      pbVar31[0x25] = 0;
      pbVar31[0x26] = 0;
      pbVar31[0x27] = 0;
      if (pbVar31 != pbVar5) {
        if ((*puStack_110 & 1) == 0) {
          *(long *)(pbVar31 + 0x18) = *(long *)(puStack_110 + 4);
          lVar28 = *(long *)(puStack_110 + 2);
          *(long *)(pbVar31 + 8) = *(long *)puStack_110;
          *(long *)(pbVar31 + 0x10) = lVar28;
        }
        else {
          func_0x04885070(pbVar31 + 8,plVar18[0x14],plVar18[0x13]);
        }
      }
      *(long *)pbVar31 = *(long *)pbVar5;
      *(long **)(pbVar31 + 0x28) = plVar23 + 4;
      *(long **)(pbVar31 + 0x30) = plVar23;
      LOCK();
      plVar23[1] = plVar23[1] + 1;
      UNLOCK();
      pbVar31 = pbVar31 + 0x38;
      *(byte **)(pbVar32 + 0x90) = pbVar31;
      plVar23 = plStack_368;
      goto LAB_059990f1;
    }
    pbVar31 = pbVar31 + -*(long *)(pbVar32 + 0x88);
    pbVar33 = (byte *)(((long)pbVar31 >> 3) * 0x6db6db6db6db6db7 + 1);
    if (pbVar33 < (byte *)0x492492492492493) {
      lVar28 = (long)*(byte **)(pbVar32 + 0x98) - *(long *)(pbVar32 + 0x88) >> 3;
      pbVar22 = (byte *)(lVar28 * -0x2492492492492492);
      if (pbVar33 < pbVar22) {
        pbVar33 = pbVar22;
      }
      pbStack_3e8 = pbVar32 + 0x88;
      if (0x249249249249248 < (ulong)(lVar28 * 0x6db6db6db6db6db7)) {
        pbVar33 = (byte *)0x492492492492492;
      }
      pbStack_288 = pbStack_3e8;
      if (pbVar33 == (byte *)0x0) {
        pbVar22 = (byte *)0x0;
      }
      else {
        if ((byte *)0x492492492492492 < pbVar33) goto LAB_0599a93d;
        pbVar22 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar33 * 0x38);
        if (pbVar22 == (byte *)0x0) {
          func_0x0eec74c0((long)pbVar33 * 0x38,0);
          pbVar22 = (byte *)0x0;
        }
      }
      pbVar4 = pbVar22 + (long)pbVar31;
      pbStack_3f0 = pbVar22 + (long)pbVar33 * 0x38;
      pbVar33 = pbVar22 + 0x10 + (long)pbVar31;
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
      pbVar33 = pbVar22 + (long)pbVar31;
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
      pbVar33 = pbVar22 + 0x20 + (long)pbVar31;
      pbVar33[0] = 0;
      pbVar33[1] = 0;
      pbVar33[2] = 0;
      pbVar33[3] = 0;
      pbVar33[4] = 0;
      pbVar33[5] = 0;
      pbVar33[6] = 0;
      pbVar33[7] = 0;
      pbStack_3f8 = pbVar4;
      pbStack_408 = pbVar22;
      pbStack_400 = pbVar4;
      if (pbVar4 != pbVar5) {
        if ((*puStack_110 & 1) == 0) {
          *(long *)(pbVar31 + (long)(pbVar22 + 0x18)) = *(long *)(puStack_110 + 4);
          uVar14 = puStack_110[1];
          uVar15 = puStack_110[2];
          uVar16 = puStack_110[3];
          *(uint *)(pbVar31 + (long)(pbVar22 + 8)) = *puStack_110;
          *(uint *)(pbVar31 + (long)(pbVar22 + 0xc)) = uVar14;
          *(uint *)(pbVar31 + (long)(pbVar22 + 0x10)) = uVar15;
          *(uint *)(pbVar31 + (long)(pbVar22 + 0x14)) = uVar16;
        }
        else {
          func_0x04885070(pbVar31 + (long)(pbVar22 + 8),plVar18[0x14],plVar18[0x13]);
        }
      }
      pbVar22 = pbStack_288;
      *(long *)pbVar4 = *(long *)pbVar5;
      *(long **)(pbVar4 + 0x28) = plVar23 + 4;
      *(long **)(pbVar4 + 0x30) = plStack_370;
      LOCK();
      plStack_370[1] = plStack_370[1] + 1;
      UNLOCK();
      pbStack_3f8 = pbStack_3f8 + 0x38;
      puVar17 = *(undefined8 **)(pbVar32 + 0x88);
      puVar8 = *(undefined8 **)(pbVar32 + 0x90);
      pbVar5 = pbStack_400 + ((long)puVar17 - (long)puVar8);
      pbVar33 = pbVar5;
      puVar29 = puVar17;
      if ((long)puVar17 - (long)puVar8 != 0) {
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
          *(undefined8 *)(pbVar33 + 0x18) = puVar29[3];
          uVar27 = puVar29[2];
          *(undefined8 *)(pbVar33 + 8) = puVar29[1];
          *(undefined8 *)(pbVar33 + 0x10) = uVar27;
          *(undefined2 *)(puVar29 + 1) = 0;
          *(undefined8 *)pbVar33 = *puVar29;
          uVar10 = *(undefined4 *)((long)puVar29 + 0x2c);
          uVar11 = *(undefined4 *)(puVar29 + 6);
          uVar12 = *(undefined4 *)((long)puVar29 + 0x34);
          *(undefined4 *)(pbVar33 + 0x28) = *(undefined4 *)(puVar29 + 5);
          *(undefined4 *)(pbVar33 + 0x2c) = uVar10;
          *(undefined4 *)(pbVar33 + 0x30) = uVar11;
          *(undefined4 *)(pbVar33 + 0x34) = uVar12;
          puVar29[5] = 0;
          puVar29[6] = 0;
          puVar29 = puVar29 + 7;
          pbVar33 = pbVar33 + 0x38;
        } while (puVar29 != puVar8);
        do {
          plVar23 = (long *)puVar17[6];
          if (plVar23 == (long *)0x0) {
LAB_05999074:
            bVar6 = *(byte *)(puVar17 + 1);
          }
          else {
            LOCK();
            plVar20 = plVar23 + 1;
            lVar28 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar28 != 0) goto LAB_05999074;
            (**(code **)(*plVar23 + 0x10))(plVar23);
            func_0x0412c2d0(plVar23);
            bVar6 = *(byte *)(puVar17 + 1);
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
          }
          puVar17 = puVar17 + 7;
        } while (puVar17 != puVar8);
        puVar17 = *(undefined8 **)pbVar22;
      }
      plVar23 = plStack_368;
      pbVar31 = pbStack_3f8;
      *(byte **)(pbVar32 + 0x88) = pbVar5;
      *(byte **)(pbVar32 + 0x90) = pbStack_3f8;
      lVar28 = *(long *)(pbVar32 + 0x98);
      *(byte **)(pbVar32 + 0x98) = pbStack_3f0;
      if (puVar17 != (undefined8 *)0x0) {
        func_0x0412a280(puVar17,lVar28 - (long)puVar17);
      }
LAB_059990f1:
      *(byte **)(pbVar32 + 0x90) = pbVar31;
      uVar10 = *(undefined4 *)pbVar32;
      uVar11 = *(undefined4 *)(pbVar32 + 4);
      uVar12 = *(undefined4 *)(pbVar32 + 8);
      uVar13 = *(undefined4 *)(pbVar32 + 0xc);
      if (*(long *)(pbVar32 + 8) != 0) {
        LOCK();
        plVar20 = (long *)(*(long *)(pbVar32 + 8) + 8);
        *plVar20 = *plVar20 + 1;
        UNLOCK();
      }
      plVar20 = (long *)plVar18[0xf];
      *(undefined4 *)(plVar18 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar18 + 0x74) = uVar11;
      *(undefined4 *)(plVar18 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar18 + 0x7c) = uVar13;
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar26 = plVar20 + 1;
        lVar28 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      plVar20 = plStack_370;
      *(byte *)(plVar18 + 0x10) = pbVar32[0xa1];
      LOCK();
      lVar28 = *(long *)puStack_2d0;
      *(long *)puStack_2d0 = *(long *)puStack_2d0 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar20);
      }
      LOCK();
      lVar28 = *plVar37;
      *plVar37 = *plVar37 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
        LOCK();
        lVar28 = *plVar37;
        *plVar37 = *plVar37 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar37;
        *plVar37 = *plVar37 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
      if (pbStack_2c8 != (byte *)0x0) {
        (**(code **)(pbStack_2c8 + 8))(&pbStack_2c8);
      }
      ppbVar36 = (byte **)(pbVar21 + 0x130);
      pbStack_400 = (byte *)0x0;
      pbStack_408 = &UNK_0effb648;
      if (ppbVar36 != &pbStack_408) {
        if ((*ppbVar36 == (byte *)0x0) ||
           ((**(code **)(*ppbVar36 + 8))(ppbVar36), pbStack_408 != (byte *)0x0)) {
          (**(code **)pbStack_408)(&pbStack_408,ppbVar36);
          pbVar21 = pbStack_408;
        }
        else {
          pbVar21 = (byte *)0x0;
        }
        *ppbVar36 = pbVar21;
      }
      if ((uStack_258 & 1) != 0) {
        func_0x0412a280(puStack_248,uStack_258 & 0xfffffffffffffffe);
      }
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      (**(code **)(*(long *)*plVar23 + 0x10))((long *)*plVar23,&uStack_128);
      if ((uStack_128 & 1) != 0) {
        func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
      }
      plVar18 = (long *)*plVar23;
      plVar37 = (long *)plVar23[1];
      if (plVar37 != (long *)0x0) {
        LOCK();
        plVar37[1] = plVar37[1] + 1;
        UNLOCK();
        LOCK();
        plVar37[1] = plVar37[1] + 1;
        UNLOCK();
      }
      uStack_2b7 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      bStack_2c0 = 0x10;
      uStack_2bf = 0x6f697461727564;
      uStack_2b8 = 0x6e;
      pbStack_2c8 = (byte *)0x6489ce9716a286f9;
      bStack_350 = 0x1c;
      uStack_34f = 0;
      uStack_34a = 0;
      pbStack_d0 = (byte *)0x1c;
      pbStack_358 = (byte *)0x0;
      pbStack_d8 = &UNK_0eff7298;
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar23 == (long *)0x0) {
        func_0x0eec74c0(0x1c0,0);
      }
      pbStack_408 = pbStack_d8;
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&UNK_0eff7070;
      pbStack_d8 = (byte *)0x0;
      pbStack_400 = pbStack_d0;
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
      plStack_370 = plVar18;
      func_0x04aa75f0(plVar23 + 0xe,&uStack_280,&UNK_01254d89);
      *(undefined1 *)(plVar23 + 0x10) = 0;
      plVar18 = plVar23 + 0x11;
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
      plVar23[4] = (long)&UNK_0eff70c0;
      plVar23[0x2e] = _DAT_014eae60;
      *(undefined1 *)(plVar23 + 0x2f) = 1;
      plVar23[0x30] = 0;
      plVar23[0x31] = 0;
      if (pbStack_408 == (byte *)0x0) {
        pbVar21 = (byte *)0x0;
      }
      else {
        (**(code **)pbStack_408)(&pbStack_408,plVar23 + 0x30);
        pbVar21 = pbStack_408;
      }
      plVar20 = plVar23 + 4;
      pbStack_408 = (byte *)0x0;
      plVar23[0x30] = (long)pbVar21;
      puStack_2d0 = (uint *)(plVar23 + 0x12);
      if (plVar18 == (long *)&DAT_0f552018) {
        plVar23[0x15] = 0;
      }
      else {
        if ((*puStack_2d0 & 1) == 0) {
          if ((_DAT_0f552020 & 1) == 0) {
            plVar23[0x14] = _DAT_0f552030;
            uVar12 = uRam000000000f55202c;
            uVar11 = _DAT_0f552028;
            uVar10 = uRam000000000f552024;
            *puStack_2d0 = _DAT_0f552020;
            *(undefined4 *)((long)plVar23 + 0x94) = uVar10;
            *(undefined4 *)(plVar23 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar23 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puStack_2d0,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
          }
        }
        else {
          bVar39 = (_DAT_0f552020 & 1) != 0;
          lVar28 = 0xf552021;
          if (bVar39) {
            lVar28 = _DAT_0f552030;
          }
          uVar25 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
          if (bVar39) {
            uVar25 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
          }
          FUN_04885120(puStack_2d0,lVar28,uVar25);
        }
        plVar23[0x11] = _DAT_0f552018;
        plVar23[0x15] = 0;
        if (pbStack_408 != (byte *)0x0) {
          (**(code **)(pbStack_408 + 8))(&pbStack_408);
        }
      }
      plVar26 = plVar23 + 1;
      if (pbStack_d8 != (byte *)0x0) {
        (**(code **)(pbStack_d8 + 8))(&pbStack_d8);
      }
      LOCK();
      *plVar26 = *plVar26 + 1;
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
      *(undefined **)pbVar21 = &UNK_0eff71a0;
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
      *(undefined **)(pbVar21 + 0x20) = &UNK_0eff71f0;
      *(long **)(pbVar21 + 0x70) = plVar20;
      *(long **)(pbVar21 + 0x78) = plVar23;
      LOCK();
      plVar23[1] = plVar23[1] + 1;
      UNLOCK();
      pbStack_408 = pbVar21 + 0x20;
      pbStack_400 = pbVar21;
      puVar19 = (undefined4 *)func_0x059da530(plStack_370,&pbStack_2c8);
      plVar24 = *(long **)(puVar19 + 0x24);
      if (plVar24 < *(long **)(puVar19 + 0x26)) {
        plVar24[2] = 0;
        plVar24[3] = 0;
        *plVar24 = 0;
        plVar24[1] = 0;
        plVar24[4] = 0;
        if (plVar24 != plVar18) {
          plVar1 = plVar24 + 1;
          if ((*puStack_2d0 & 1) == 0) {
            plVar24[3] = *(long *)(puStack_2d0 + 4);
            lVar28 = *(long *)(puStack_2d0 + 2);
            *plVar1 = *(long *)puStack_2d0;
            plVar24[2] = lVar28;
          }
          else {
            plStack_370 = plVar1;
            func_0x04885070(plVar1,plVar23[0x14],plVar23[0x13]);
          }
        }
        *plVar24 = *plVar18;
        plVar24[5] = (long)(pbVar21 + 0x20);
        plVar24[6] = (long)pbVar21;
        LOCK();
        *(long *)(pbVar21 + 8) = *(long *)(pbVar21 + 8) + 1;
        UNLOCK();
        plVar24 = plVar24 + 7;
        *(long **)(puVar19 + 0x24) = plVar24;
      }
      else {
        plVar24 = (long *)func_0x059dc2f0(puVar19 + 0x22,plVar18,&pbStack_408);
      }
      *(long **)(puVar19 + 0x24) = plVar24;
      uVar10 = *puVar19;
      uVar11 = puVar19[1];
      uVar12 = puVar19[2];
      uVar13 = puVar19[3];
      if (*(long *)(puVar19 + 2) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(puVar19 + 2) + 8);
        *plVar18 = *plVar18 + 1;
        UNLOCK();
      }
      plVar18 = (long *)plVar23[0xf];
      *(undefined4 *)(plVar23 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar23 + 0x74) = uVar11;
      *(undefined4 *)(plVar23 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar23 + 0x7c) = uVar13;
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar24 = plVar18 + 1;
        lVar28 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          func_0x0412c2d0(plVar18);
        }
      }
      pbVar21 = pbStack_400;
      *(undefined1 *)(plVar23 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
      if (pbStack_400 != (byte *)0x0) {
        LOCK();
        pbVar5 = pbStack_400 + 8;
        lVar28 = *(long *)pbVar5;
        *(long *)pbVar5 = *(long *)pbVar5 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*(long *)pbStack_400 + 0x10))(pbStack_400);
          func_0x0412c2d0(pbVar21);
        }
      }
      LOCK();
      lVar28 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
        LOCK();
        lVar28 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar26;
        *plVar26 = *plVar26 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
      }
      if (pbStack_358 != (byte *)0x0) {
        (**(code **)(pbStack_358 + 8))(&pbStack_358);
      }
      if ((bStack_2c0 & 1) != 0) {
        func_0x0412a280(uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0) & 0xfffffffffffffffe);
      }
      ppbVar36 = (byte **)(plVar23 + 0x26);
      if (plVar37 != (long *)0x0) {
        LOCK();
        plVar18 = plVar37 + 1;
        lVar28 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar37 + 0x10))(plVar37);
          func_0x0412c2d0(plVar37);
        }
      }
      pbStack_318 = &UNK_0eff72b0;
      uStack_310 = 0x1c;
      uStack_308 = CONCAT44(uStack_308._4_4_,0x41f00000);
      if (ppbVar36 != &pbStack_318) {
        if ((*ppbVar36 == (byte *)0x0) ||
           ((**(code **)(*ppbVar36 + 8))(ppbVar36), pbStack_318 != (byte *)0x0)) {
          (**(code **)pbStack_318)(&pbStack_318,ppbVar36);
          pbVar21 = pbStack_318;
        }
        else {
          pbVar21 = (byte *)0x0;
        }
        *ppbVar36 = pbVar21;
      }
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      (**(code **)(*plVar20 + 0x18))(plVar20,&uStack_148,&uStack_168);
      plVar18 = plStack_368;
      if ((uStack_168 & 1) != 0) {
        func_0x0412a280(uStack_158,uStack_168 & 0xfffffffffffffffe);
      }
      if ((uStack_148 & 1) != 0) {
        func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
      }
      if (plVar37 != (long *)0x0) {
        LOCK();
        plVar23 = plVar37 + 1;
        lVar28 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar37 + 0x10))(plVar37);
          func_0x0412c2d0(plVar37);
        }
      }
      uVar27 = *plVar18;
      pbStack_318 = (byte *)0x0;
      uStack_310 = 0x617262656c656322;
      uStack_308 = 0x756f735f6e6f6974;
      uStack_300 = 0x646e;
      uStack_2f8 = 0;
      pbVar21 = (byte *)((long)&uStack_310 + 1);
      uVar25 = func_0x0eee2e90(pbVar21);
      if (uVar25 != 0) {
        uVar30 = (ulong)((uint)uVar25 & 7);
        if (7 < uVar25) {
          uVar25 = uVar25 & 0xfffffffffffffff8;
          do {
            pbVar38 = (byte *)(((((((((long)pbVar38 * 0x100000001b3 ^ (ulong)*pbVar21) *
                                     0x100000001b3 ^ (ulong)pbVar21[1]) * 0x100000001b3 ^
                                   (ulong)pbVar21[2]) * 0x100000001b3 ^ (ulong)pbVar21[3]) *
                                  0x100000001b3 ^ (ulong)pbVar21[4]) * 0x100000001b3 ^
                                (ulong)pbVar21[5]) * 0x100000001b3 ^ (ulong)pbVar21[6]) *
                               0x100000001b3 ^ (ulong)pbVar21[7]);
            pbVar21 = pbVar21 + 8;
            uVar25 = uVar25 - 8;
          } while (uVar25 != 0);
        }
        if (uVar30 != 0) {
          uVar25 = 0;
          do {
            pbVar38 = (byte *)((long)pbVar38 * 0x100000001b3 ^ (ulong)pbVar21[uVar25]);
            uVar25 = uVar25 + 1;
          } while (uVar30 != uVar25);
        }
      }
      bStack_350 = 8;
      uStack_34f = 0;
      uStack_34a = 0;
      pbStack_d0 = (byte *)0x8;
      pbStack_358 = (byte *)0x0;
      pbStack_d8 = &UNK_0eff74a8;
      pbStack_318 = pbVar38;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x200,0);
      }
      pbStack_408 = pbStack_d8;
      plVar18[1] = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&UNK_0eff72d8;
      pbStack_d8 = (byte *)0x0;
      pbStack_400 = pbStack_d0;
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
      func_0x04aa75f0(plVar18 + 0xe,&pbStack_2c8,&UNK_01254d89);
      *(undefined1 *)(plVar18 + 0x10) = 0;
      plVar37 = plVar18 + 0x11;
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
      plVar18[4] = (long)&UNK_0eff7328;
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
      if (pbStack_408 == (byte *)0x0) {
        pbVar38 = (byte *)0x0;
      }
      else {
        (**(code **)pbStack_408)(&pbStack_408,plVar18 + 0x36);
        pbVar38 = pbStack_408;
      }
      plVar23 = plVar18 + 4;
      pbStack_408 = (byte *)0x0;
      plVar18[0x36] = (long)pbVar38;
      *(undefined1 *)(plVar18 + 0x3e) = 0;
      puVar2 = (uint *)(plVar18 + 0x12);
      if (plVar37 != (long *)&DAT_0f552138) {
        if ((*puVar2 & 1) == 0) {
          if ((_DAT_0f552140 & 1) == 0) {
            plVar18[0x14] = _DAT_0f552150;
            uVar12 = uRam000000000f55214c;
            uVar11 = _DAT_0f552148;
            uVar10 = uRam000000000f552144;
            *puVar2 = _DAT_0f552140;
            *(undefined4 *)((long)plVar18 + 0x94) = uVar10;
            *(undefined4 *)(plVar18 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar18 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puVar2,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
          }
        }
        else {
          bVar39 = (_DAT_0f552140 & 1) != 0;
          lVar28 = 0xf552141;
          if (bVar39) {
            lVar28 = _DAT_0f552150;
          }
          uVar25 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
          if (bVar39) {
            uVar25 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
          }
          FUN_04885120(puVar2,lVar28,uVar25);
        }
      }
      plVar18[0x11] = _DAT_0f552138;
      plVar18[0x15] = 0;
      if (pbStack_408 != (byte *)0x0) {
        (**(code **)(pbStack_408 + 8))(&pbStack_408);
      }
      plVar20 = plVar18 + 1;
      if (pbStack_d8 != (byte *)0x0) {
        (**(code **)(pbStack_d8 + 8))(&pbStack_d8);
      }
      LOCK();
      *plVar20 = *plVar20 + 1;
      UNLOCK();
      pbVar38 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (pbVar38 == (byte *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      pbVar38[8] = 0;
      pbVar38[9] = 0;
      pbVar38[10] = 0;
      pbVar38[0xb] = 0;
      pbVar38[0xc] = 0;
      pbVar38[0xd] = 0;
      pbVar38[0xe] = 0;
      pbVar38[0xf] = 0;
      pbVar38[0x10] = 0;
      pbVar38[0x11] = 0;
      pbVar38[0x12] = 0;
      pbVar38[0x13] = 0;
      pbVar38[0x14] = 0;
      pbVar38[0x15] = 0;
      pbVar38[0x16] = 0;
      pbVar38[0x17] = 0;
      *(undefined **)pbVar38 = &UNK_0eff7408;
      pbVar38[0x30] = 0;
      pbVar38[0x31] = 0;
      pbVar38[0x32] = 0;
      pbVar38[0x33] = 0;
      pbVar38[0x34] = 0;
      pbVar38[0x35] = 0;
      pbVar38[0x36] = 0;
      pbVar38[0x37] = 0;
      pbVar38[0x38] = 0;
      pbVar38[0x39] = 0;
      pbVar38[0x3a] = 0;
      pbVar38[0x3b] = 0;
      pbVar38[0x3c] = 0;
      pbVar38[0x3d] = 0;
      pbVar38[0x3e] = 0;
      pbVar38[0x3f] = 0;
      *(undefined **)(pbVar38 + 0x20) = &UNK_0eff7458;
      *(long **)(pbVar38 + 0x70) = plVar23;
      *(long **)(pbVar38 + 0x78) = plVar18;
      LOCK();
      plVar18[1] = plVar18[1] + 1;
      UNLOCK();
      pbStack_408 = pbVar38 + 0x20;
      pbStack_400 = pbVar38;
      puVar19 = (undefined4 *)func_0x059da530(uVar27,&pbStack_318);
      plVar26 = *(long **)(puVar19 + 0x24);
      if (plVar26 < *(long **)(puVar19 + 0x26)) {
        plVar26[2] = 0;
        plVar26[3] = 0;
        *plVar26 = 0;
        plVar26[1] = 0;
        plVar26[4] = 0;
        if (plVar26 != plVar37) {
          if ((*puVar2 & 1) == 0) {
            plVar26[3] = plVar18[0x14];
            lVar28 = plVar18[0x13];
            plVar26[1] = *(long *)puVar2;
            plVar26[2] = lVar28;
          }
          else {
            func_0x04885070(plVar26 + 1,plVar18[0x14],plVar18[0x13]);
          }
        }
        *plVar26 = *plVar37;
        plVar26[5] = (long)(pbVar38 + 0x20);
        plVar26[6] = (long)pbVar38;
        LOCK();
        *(long *)(pbVar38 + 8) = *(long *)(pbVar38 + 8) + 1;
        UNLOCK();
        plVar26 = plVar26 + 7;
        *(long **)(puVar19 + 0x24) = plVar26;
      }
      else {
        plVar26 = (long *)func_0x059dc2f0(puVar19 + 0x22,plVar37,&pbStack_408);
      }
      plVar37 = plStack_368;
      *(long **)(puVar19 + 0x24) = plVar26;
      uVar10 = *puVar19;
      uVar11 = puVar19[1];
      uVar12 = puVar19[2];
      uVar13 = puVar19[3];
      if (*(long *)(puVar19 + 2) != 0) {
        LOCK();
        plVar26 = (long *)(*(long *)(puVar19 + 2) + 8);
        *plVar26 = *plVar26 + 1;
        UNLOCK();
      }
      plVar26 = (long *)plVar18[0xf];
      *(undefined4 *)(plVar18 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar18 + 0x74) = uVar11;
      *(undefined4 *)(plVar18 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar18 + 0x7c) = uVar13;
      if (plVar26 != (long *)0x0) {
        LOCK();
        plVar24 = plVar26 + 1;
        lVar28 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          func_0x0412c2d0(plVar26);
        }
      }
      pbVar38 = pbStack_400;
      *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
      if (pbStack_400 != (byte *)0x0) {
        LOCK();
        pbVar21 = pbStack_400 + 8;
        lVar28 = *(long *)pbVar21;
        *(long *)pbVar21 = *(long *)pbVar21 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*(long *)pbStack_400 + 0x10))(pbStack_400);
          func_0x0412c2d0(pbVar38);
        }
      }
      LOCK();
      lVar28 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
        LOCK();
        lVar28 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
      if (pbStack_358 != (byte *)0x0) {
        (**(code **)(pbStack_358 + 8))(&pbStack_358);
      }
      ppbVar36 = (byte **)(plVar18 + 0x26);
      if ((uStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,uStack_310 & 0xfffffffffffffffe);
      }
      pbStack_408 = &UNK_0eff74c0;
      pbStack_400 = (byte *)0x11e;
      pbStack_3f8 = (byte *)0x8;
      if (ppbVar36 != &pbStack_408) {
        if ((*ppbVar36 == (byte *)0x0) ||
           ((**(code **)(*ppbVar36 + 8))(ppbVar36), pbStack_408 != (byte *)0x0)) {
          (**(code **)pbStack_408)(&pbStack_408,ppbVar36);
          pbVar38 = pbStack_408;
        }
        else {
          pbVar38 = (byte *)0x0;
        }
        *ppbVar36 = pbVar38;
      }
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      (**(code **)(*plVar23 + 0x10))(plVar23,&uStack_188);
      if ((uStack_188 & 1) != 0) {
        func_0x0412a280(uStack_178,uStack_188 & 0xfffffffffffffffe);
      }
      uVar27 = *plVar37;
      plVar18 = (long *)plVar37[1];
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar18[1] = plVar18[1] + 1;
        UNLOCK();
      }
      plVar23 = (long *)func_0x0599b6c0(uVar27,plVar18,0xc,&UNK_013dfd27,0x40e0000040000000);
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
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar23 = plVar18 + 1;
        lVar28 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          func_0x0412c2d0(plVar18);
        }
      }
      uVar27 = *plVar37;
      plVar18 = (long *)plVar37[1];
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar18[1] = plVar18[1] + 1;
        UNLOCK();
      }
      plVar23 = (long *)func_0x0599b6c0(uVar27,plVar18,0x14,&UNK_0125868c,0x406000003f800000);
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
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar23 = plVar18 + 1;
        lVar28 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          func_0x0412c2d0(plVar18);
        }
      }
      uVar27 = *plVar37;
      plStack_368 = (long *)plVar37[1];
      if (plStack_368 != (long *)0x0) {
        LOCK();
        plStack_368[1] = plStack_368[1] + 1;
        UNLOCK();
      }
      uStack_308 = 0;
      uStack_300 = 0;
      pbStack_318 = (byte *)0x0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      func_0x0412f5e0(&uStack_310,&UNK_014958dd,0x18);
      pbStack_318 = (byte *)0x6aa6125f41be39e0;
      bStack_350 = 0x20;
      uStack_34f = 0;
      uStack_34a = 0;
      pbStack_d0 = (byte *)0x20;
      pbStack_358 = (byte *)0x0;
      pbStack_d8 = &UNK_0eff78c8;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      pbStack_408 = pbStack_d8;
      plVar18[1] = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&UNK_0eff76f8;
      pbStack_d8 = (byte *)0x0;
      pbStack_400 = pbStack_d0;
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
      func_0x04aa75f0(plVar18 + 0xe,&pbStack_2c8,&UNK_01254d89);
      *(undefined1 *)(plVar18 + 0x10) = 0;
      plVar37 = plVar18 + 0x11;
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
      plVar18[4] = (long)&UNK_0eff7748;
      plVar18[0x2e] = 0;
      plVar18[0x2f] = 0;
      if (pbStack_408 == (byte *)0x0) {
        pbVar38 = (byte *)0x0;
      }
      else {
        (**(code **)pbStack_408)(&pbStack_408,plVar18 + 0x2e);
        pbVar38 = pbStack_408;
      }
      plVar23 = plVar18 + 4;
      pbStack_408 = (byte *)0x0;
      plVar18[0x2e] = (long)pbVar38;
      puVar2 = (uint *)(plVar18 + 0x12);
      if (plVar37 == (long *)&DAT_0f551ef8) {
        plVar18[0x15] = 0;
      }
      else {
        if ((*puVar2 & 1) == 0) {
          if ((_DAT_0f551f00 & 1) == 0) {
            plVar18[0x14] = _DAT_0f551f10;
            uVar12 = uRam000000000f551f0c;
            uVar11 = _DAT_0f551f08;
            uVar10 = uRam000000000f551f04;
            *puVar2 = _DAT_0f551f00;
            *(undefined4 *)((long)plVar18 + 0x94) = uVar10;
            *(undefined4 *)(plVar18 + 0x13) = uVar11;
            *(undefined4 *)((long)plVar18 + 0x9c) = uVar12;
          }
          else {
            func_0x04885070(puVar2,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
          }
        }
        else {
          bVar39 = (_DAT_0f551f00 & 1) != 0;
          lVar28 = 0xf551f01;
          if (bVar39) {
            lVar28 = _DAT_0f551f10;
          }
          uVar25 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
          if (bVar39) {
            uVar25 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
          }
          FUN_04885120(puVar2,lVar28,uVar25);
        }
        plVar18[0x11] = _DAT_0f551ef8;
        plVar18[0x15] = 0;
        if (pbStack_408 != (byte *)0x0) {
          (**(code **)(pbStack_408 + 8))(&pbStack_408);
        }
      }
      plVar20 = plVar18 + 1;
      if (pbStack_d8 != (byte *)0x0) {
        (**(code **)(pbStack_d8 + 8))(&pbStack_d8);
      }
      LOCK();
      *plVar20 = *plVar20 + 1;
      UNLOCK();
      pbVar38 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (pbVar38 == (byte *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      pbVar38[8] = 0;
      pbVar38[9] = 0;
      pbVar38[10] = 0;
      pbVar38[0xb] = 0;
      pbVar38[0xc] = 0;
      pbVar38[0xd] = 0;
      pbVar38[0xe] = 0;
      pbVar38[0xf] = 0;
      pbVar38[0x10] = 0;
      pbVar38[0x11] = 0;
      pbVar38[0x12] = 0;
      pbVar38[0x13] = 0;
      pbVar38[0x14] = 0;
      pbVar38[0x15] = 0;
      pbVar38[0x16] = 0;
      pbVar38[0x17] = 0;
      *(undefined **)pbVar38 = &UNK_0eff7828;
      pbVar38[0x30] = 0;
      pbVar38[0x31] = 0;
      pbVar38[0x32] = 0;
      pbVar38[0x33] = 0;
      pbVar38[0x34] = 0;
      pbVar38[0x35] = 0;
      pbVar38[0x36] = 0;
      pbVar38[0x37] = 0;
      pbVar38[0x38] = 0;
      pbVar38[0x39] = 0;
      pbVar38[0x3a] = 0;
      pbVar38[0x3b] = 0;
      pbVar38[0x3c] = 0;
      pbVar38[0x3d] = 0;
      pbVar38[0x3e] = 0;
      pbVar38[0x3f] = 0;
      *(undefined **)(pbVar38 + 0x20) = &UNK_0eff7878;
      *(long **)(pbVar38 + 0x70) = plVar23;
      *(long **)(pbVar38 + 0x78) = plVar18;
      LOCK();
      plVar18[1] = plVar18[1] + 1;
      UNLOCK();
      pbStack_408 = pbVar38 + 0x20;
      pbStack_400 = pbVar38;
      puVar19 = (undefined4 *)func_0x059da530(uVar27,&pbStack_318);
      plVar26 = *(long **)(puVar19 + 0x24);
      if (plVar26 < *(long **)(puVar19 + 0x26)) {
        plVar26[2] = 0;
        plVar26[3] = 0;
        *plVar26 = 0;
        plVar26[1] = 0;
        plVar26[4] = 0;
        if (plVar26 != plVar37) {
          if ((*puVar2 & 1) == 0) {
            plVar26[3] = plVar18[0x14];
            lVar28 = plVar18[0x13];
            plVar26[1] = *(long *)puVar2;
            plVar26[2] = lVar28;
          }
          else {
            func_0x04885070(plVar26 + 1,plVar18[0x14],plVar18[0x13]);
          }
        }
        *plVar26 = *plVar37;
        plVar26[5] = (long)(pbVar38 + 0x20);
        plVar26[6] = (long)pbVar38;
        LOCK();
        *(long *)(pbVar38 + 8) = *(long *)(pbVar38 + 8) + 1;
        UNLOCK();
        plVar26 = plVar26 + 7;
        *(long **)(puVar19 + 0x24) = plVar26;
      }
      else {
        plVar26 = (long *)func_0x059dc2f0(puVar19 + 0x22,plVar37,&pbStack_408);
      }
      plVar37 = plStack_368;
      *(long **)(puVar19 + 0x24) = plVar26;
      uVar10 = *puVar19;
      uVar11 = puVar19[1];
      uVar12 = puVar19[2];
      uVar13 = puVar19[3];
      if (*(long *)(puVar19 + 2) != 0) {
        LOCK();
        plVar26 = (long *)(*(long *)(puVar19 + 2) + 8);
        *plVar26 = *plVar26 + 1;
        UNLOCK();
      }
      plVar26 = (long *)plVar18[0xf];
      *(undefined4 *)(plVar18 + 0xe) = uVar10;
      *(undefined4 *)((long)plVar18 + 0x74) = uVar11;
      *(undefined4 *)(plVar18 + 0xf) = uVar12;
      *(undefined4 *)((long)plVar18 + 0x7c) = uVar13;
      if (plVar26 != (long *)0x0) {
        LOCK();
        plVar24 = plVar26 + 1;
        lVar28 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          func_0x0412c2d0(plVar26);
        }
      }
      pbVar38 = pbStack_400;
      *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
      if (pbStack_400 != (byte *)0x0) {
        LOCK();
        pbVar21 = pbStack_400 + 8;
        lVar28 = *(long *)pbVar21;
        *(long *)pbVar21 = *(long *)pbVar21 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*(long *)pbStack_400 + 0x10))(pbStack_400);
          func_0x0412c2d0(pbVar38);
        }
      }
      LOCK();
      lVar28 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
        LOCK();
        lVar28 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
      if (pbStack_358 != (byte *)0x0) {
        (**(code **)(pbStack_358 + 8))(&pbStack_358);
      }
      if ((uStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,uStack_310 & 0xfffffffffffffffe);
      }
      auStack_228[0] = 0;
      auStack_228[1] = 0;
      auStack_228[2] = 0;
      (**(code **)(*plVar23 + 0x10))(plVar23,auStack_228);
      if ((auStack_228[0] & 1) != 0) {
        func_0x0412a280(auStack_228[2],auStack_228[0] & 0xfffffffffffffffe);
      }
      if (plVar37 != (long *)0x0) {
        LOCK();
        plVar18 = plVar37 + 1;
        lVar28 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar37 + 0x10))(plVar37);
          func_0x0412c2d0(plVar37);
        }
      }
      return;
    }
LAB_0599a942:
    func_0x05a1a650();
  }
  else {
    pbVar33 = pbVar33 + -(long)pbVar22;
    plVar23 = (long *)(((long)pbVar33 >> 3) * -0x30c30c30c30c30c3 + 1);
    pbVar31 = pbVar21;
    pbVar32 = pbVar21;
    if (plVar23 < (long *)0x186186186186187) {
      lVar28 = (long)*(byte **)(pbVar21 + 0xe8) - (long)pbVar22 >> 3;
      plVar20 = (long *)(lVar28 * -0x6186186186186186);
      if (plVar23 < plVar20) {
        plVar23 = plVar20;
      }
      pbVar32 = pbVar21 + 0xd8;
      if (0xc30c30c30c30c2 < (ulong)(lVar28 * -0x30c30c30c30c30c3)) {
        plVar23 = (long *)0x186186186186186;
      }
      pbStack_3e8 = pbVar32;
      if (plVar23 == (long *)0x0) {
        pbVar22 = (byte *)0x0;
LAB_05998b4a:
        pbStack_400 = pbVar33 + (long)pbVar22;
        pbStack_3f0 = pbVar22 + (long)plVar23 * 0xa8;
        pbStack_408 = pbVar22;
        pbStack_3f8 = pbStack_400;
        pbStack_288 = pbVar32;
        func_0x05a1a410(pbStack_400);
        pbVar33 = pbStack_3f8;
        pbVar32 = pbStack_3f8 + 0xa8;
        lVar28 = *(long *)(pbVar21 + 0xd8);
        lVar7 = *(long *)(pbVar21 + 0xe0);
        pbVar22 = pbStack_400 + (lVar28 - lVar7);
        if (lVar28 != lVar7) {
          lVar35 = 0;
          do {
            uVar27 = ((undefined8 *)(lVar28 + lVar35))[1];
            *(undefined8 *)(pbVar22 + lVar35) = *(undefined8 *)(lVar28 + lVar35);
            *(undefined8 *)(pbVar22 + lVar35 + 8) = uVar27;
            *(undefined8 *)(lVar28 + lVar35) = 0;
            ((undefined8 *)(lVar28 + lVar35))[1] = 0;
            pbVar31 = pbVar22 + lVar35 + 0x20;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            pbVar31[8] = 0;
            pbVar31[9] = 0;
            pbVar31[10] = 0;
            pbVar31[0xb] = 0;
            pbVar31[0xc] = 0;
            pbVar31[0xd] = 0;
            pbVar31[0xe] = 0;
            pbVar31[0xf] = 0;
            pbVar31 = pbVar22 + lVar35 + 0x10;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            pbVar31[8] = 0;
            pbVar31[9] = 0;
            pbVar31[10] = 0;
            pbVar31[0xb] = 0;
            pbVar31[0xc] = 0;
            pbVar31[0xd] = 0;
            pbVar31[0xe] = 0;
            pbVar31[0xf] = 0;
            pbVar31 = pbVar22 + lVar35 + 0x30;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            *(undefined8 *)(pbVar22 + lVar35 + 0x28) = *(undefined8 *)(lVar28 + 0x28 + lVar35);
            puVar19 = (undefined4 *)(lVar28 + 0x18 + lVar35);
            uVar10 = puVar19[1];
            uVar11 = puVar19[2];
            uVar12 = puVar19[3];
            pbVar31 = pbVar22 + lVar35 + 0x18;
            *(undefined4 *)pbVar31 = *puVar19;
            *(undefined4 *)(pbVar31 + 4) = uVar10;
            *(undefined4 *)(pbVar31 + 8) = uVar11;
            *(undefined4 *)(pbVar31 + 0xc) = uVar12;
            *(undefined2 *)(lVar28 + 0x18 + lVar35) = 0;
            *(undefined8 *)(pbVar22 + lVar35 + 0x10) = *(undefined8 *)(lVar28 + 0x10 + lVar35);
            FUN_04167a20(pbVar22 + lVar35 + 0x38,lVar28 + lVar35 + 0x38);
            puVar17 = (undefined8 *)(lVar28 + 0x40 + lVar35);
            uVar27 = puVar17[1];
            *(undefined8 *)(pbVar22 + lVar35 + 0x40) = *puVar17;
            *(undefined8 *)(pbVar22 + lVar35 + 0x40 + 8) = uVar27;
            puVar17 = (undefined8 *)(lVar28 + 0x50 + lVar35);
            uVar27 = puVar17[1];
            *(undefined8 *)(pbVar22 + lVar35 + 0x50) = *puVar17;
            *(undefined8 *)(pbVar22 + lVar35 + 0x50 + 8) = uVar27;
            puVar17 = (undefined8 *)(lVar28 + 0x60 + lVar35);
            uVar27 = puVar17[1];
            *(undefined8 *)(pbVar22 + lVar35 + 0x60) = *puVar17;
            *(undefined8 *)(pbVar22 + lVar35 + 0x60 + 8) = uVar27;
            puVar17 = (undefined8 *)(lVar28 + 0x60 + lVar35);
            *puVar17 = 0;
            puVar17[1] = 0;
            *(undefined8 *)(pbVar22 + lVar35 + 0x70) = *(undefined8 *)(lVar28 + 0x70 + lVar35);
            puVar17 = (undefined8 *)(lVar28 + 0x78 + lVar35);
            uVar27 = puVar17[1];
            *(undefined8 *)(pbVar22 + lVar35 + 0x78) = *puVar17;
            *(undefined8 *)(pbVar22 + lVar35 + 0x78 + 8) = uVar27;
            pbVar31 = pbVar22 + lVar35 + 0x88;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            pbVar31[8] = 0;
            pbVar31[9] = 0;
            pbVar31[10] = 0;
            pbVar31[0xb] = 0;
            pbVar31[0xc] = 0;
            pbVar31[0xd] = 0;
            pbVar31[0xe] = 0;
            pbVar31[0xf] = 0;
            pbVar31 = pbVar22 + lVar35 + 0x98;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            puVar19 = (undefined4 *)(lVar28 + 0x88 + lVar35);
            uVar10 = puVar19[1];
            uVar11 = puVar19[2];
            uVar12 = puVar19[3];
            pbVar31 = pbVar22 + lVar35 + 0x88;
            *(undefined4 *)pbVar31 = *puVar19;
            *(undefined4 *)(pbVar31 + 4) = uVar10;
            *(undefined4 *)(pbVar31 + 8) = uVar11;
            *(undefined4 *)(pbVar31 + 0xc) = uVar12;
            *(undefined8 *)(pbVar22 + lVar35 + 0x98) = *(undefined8 *)(lVar28 + 0x98 + lVar35);
            puVar17 = (undefined8 *)(lVar28 + 0x88 + lVar35);
            *puVar17 = 0;
            puVar17[1] = 0;
            *(undefined8 *)(lVar28 + 0x98 + lVar35) = 0;
            *(undefined2 *)(pbVar22 + lVar35 + 0xa0) = *(undefined2 *)(lVar28 + 0xa0 + lVar35);
            lVar3 = lVar28 + lVar35;
            lVar35 = lVar35 + 0xa8;
          } while (lVar3 + 0xa8 != lVar7);
          do {
            func_0x05a16d10(lVar28);
            lVar28 = lVar28 + 0xa8;
          } while (lVar28 != lVar7);
          lVar28 = *(long *)pbStack_288;
        }
        *(byte **)(pbVar21 + 0xd8) = pbVar22;
        *(byte **)(pbVar21 + 0xe0) = pbVar32;
        lVar7 = *(long *)(pbVar21 + 0xe8);
        *(byte **)(pbVar21 + 0xe8) = pbStack_3f0;
        if (lVar28 != 0) {
          func_0x0412a280(lVar28,lVar7 - lVar28);
        }
        *(byte **)(pbVar21 + 0xe0) = pbVar32;
        pbVar33 = *(byte **)pbVar33;
        bVar6 = *pbVar33;
        plVar23 = plStack_370;
        goto joined_r0x05998d4e;
      }
      if (plVar23 < (long *)0x186186186186187) {
        pbVar22 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar23 * 0xa8);
        if (pbVar22 == (byte *)0x0) {
          func_0x0eec74c0((long)plVar23 * 0xa8,0);
          pbVar22 = (byte *)0x0;
        }
        goto LAB_05998b4a;
      }
LAB_0599a93d:
      func_0x04882eb0();
      goto LAB_0599a942;
    }
  }
  uVar27 = func_0x05a1a580();
  if ((*pbVar5 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar31 + 0x18),*(ulong *)(pbVar31 + 8) & 0xfffffffffffffffe);
  }
  plVar23[0x12] = (long)pbVar31;
  pbVar38 = pbVar33 + 8;
  LOCK();
  lVar28 = *(long *)pbVar38;
  *(long *)pbVar38 = *(long *)pbVar38 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*(long *)pbVar33 + 0x10))(pbVar33);
    func_0x0412c2d0(pbVar33);
  }
  LOCK();
  lVar28 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(lRamcbf29ce484222325 + 0x10))(0xcbf29ce484222325);
    func_0x0412c2d0(0xcbf29ce484222325);
  }
  LOCK();
  lVar28 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(lRamcbf29ce484222325 + 0x10))(0xcbf29ce484222325);
    func_0x0412c2d0(0xcbf29ce484222325);
  }
  if (pbStack_358 != (byte *)0x0) {
    (**(code **)(pbStack_358 + 8))(&pbStack_358);
  }
  if ((uStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,uStack_310 & 0xfffffffffffffffe);
  }
  func_0x0599b690(plStack_368);
  uStack_428 = func_0x0eee2d70(uVar27);
  pbVar38 = pbVar33 + 8;
  LOCK();
  lVar28 = *(long *)pbVar38;
  *(long *)pbVar38 = *(long *)pbVar38 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*(long *)pbVar33 + 0x10))(pbVar33);
    func_0x0412c2d0(pbVar33);
  }
  LOCK();
  lVar28 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*(long *)pbVar32 + 0x10))(pbVar32);
    func_0x0412c2d0(pbVar32);
  }
  LOCK();
  lVar28 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*(long *)pbVar32 + 0x10))(pbVar32);
    func_0x0412c2d0(pbVar32);
  }
  if (pbStack_358 != (byte *)0x0) {
    (**(code **)(pbStack_358 + 8))(&pbStack_358);
  }
  if ((uStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,uStack_310 & 0xfffffffffffffffe);
    uVar27 = func_0x0eee2d70(uStack_428);
    plVar37 = plVar23 + 1;
    LOCK();
    lVar28 = *plVar37;
    *plVar37 = *plVar37 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
    LOCK();
    lVar28 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*(long *)pbVar33 + 0x10))(pbVar33);
      func_0x0412c2d0(pbVar33);
    }
    LOCK();
    lVar28 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*(long *)pbVar33 + 0x10))(pbVar33);
      func_0x0412c2d0(pbVar33);
    }
    if (pbStack_358 != (byte *)0x0) {
      (**(code **)(pbStack_358 + 8))(&pbStack_358);
    }
    if ((bStack_2c0 & 1) != 0) {
      func_0x0412a280(uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0) & 0xfffffffffffffffe);
    }
    func_0x0599b690(pbVar5);
    func_0x0599b690(pbVar5);
    uStack_428 = func_0x0eee2d70(uVar27);
    plVar37 = plVar23 + 1;
    LOCK();
    lVar28 = *plVar37;
    *plVar37 = *plVar37 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
    LOCK();
    lVar28 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
      func_0x0412c2d0(pbVar21);
      LOCK();
      lVar28 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar28 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
    }
    if (lVar28 == 0) {
      (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
      func_0x0412c2d0(pbVar21);
    }
    if (pbStack_318 != (byte *)0x0) {
      (**(code **)((long)pbStack_318 + 8))(&pbStack_318);
    }
    if ((bStack_350 & 1) != 0) {
      func_0x0412a280(uStack_340,
                      CONCAT26(uStack_34a,CONCAT51(uStack_34f,bStack_350)) & 0xfffffffffffffffe);
    }
    if ((uStack_258 & 1) != 0) goto LAB_0599b66a;
  }
  func_0x0eee2d70(uStack_428);
LAB_0599b66a:
  func_0x0412a280(puStack_248,uStack_258 & 0xfffffffffffffffe);
  func_0x0eee2d70(uStack_428);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}



/* ---- referenced strings ----
 * 0x13c55f8  minecraft:behavior.celebrate
 * 0x13c5604  havior.celebrate
 * 0x1494d5d  <any array element>
 */
