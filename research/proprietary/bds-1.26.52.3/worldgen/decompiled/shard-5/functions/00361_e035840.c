/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe135840 (ELF vaddr 0xe035840)
 * Label: caller-of-callee
 * Body:  [[0e135840, 0e136030] [0e136040, 0e1381fc]]
 * Ghidra: FUN_0e135840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e135840(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  undefined *puVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  uint *puVar24;
  bool bVar25;
  long *plStack_3d8;
  long lStack_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  ulong uStack_388;
  long lStack_380;
  long *plStack_378;
  long lStack_370;
  undefined4 uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined4 uStack_330;
  uint uStack_32c;
  undefined5 uStack_328;
  long *plStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  long *plStack_2b8;
  long lStack_2b0;
  undefined4 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined4 uStack_270;
  uint uStack_26c;
  uint uStack_268;
  undefined1 uStack_264;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined4 uStack_218;
  uint uStack_214;
  uint uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  uint uStack_1d0;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_140;
  long lStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  char cStack_78;
  undefined7 uStack_77;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0e135110();
  lStack_130 = param_1 + 0x18;
  lVar10 = func_0x08d34050();
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar25 = (*(byte *)(lVar10 + 8) & 1) != 0;
    puVar13 = (undefined *)(lVar10 + 9);
    if (bVar25) {
      puVar13 = *(undefined **)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar25) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
  }
  else {
    puVar13 = &UNK_0138ac38;
    uVar14 = 0xb;
  }
  func_0x0e17ed30(&uStack_248,param_1,puVar13,uVar14);
  uStack_214 = uStack_214 & 0xffffff00;
  uStack_210 = uStack_210 & 0xffffff00;
  lStack_1c0 = param_1;
  if ((char)uStack_218 == '\0') {
    plVar11 = (long *)func_0x0eee3290();
    lVar10 = *plVar11;
    uVar4 = *(uint *)(lVar10 + 0x1dc);
    uVar5 = *(uint *)(lVar10 + 0x184);
    iVar8 = *(int *)(lVar10 + 0x1d0);
    bVar2 = *(byte *)(lVar10 + 0x194);
    bVar3 = *(byte *)(lVar10 + 0x1c8);
    plStack_2b8 = (long *)0x0;
    lStack_2b0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    puStack_2d8 = (undefined *)0x0;
    puStack_2d0 = (undefined *)0x0;
    puStack_2e8 = (undefined1 *)0x0;
    puStack_2e0 = (undefined1 *)0x0;
    puStack_2f8 = (undefined4 *)0x0;
    uStack_2f0 = (undefined *)0x0;
    uStack_308 = (long *)0x0;
    uStack_300 = (long *)0x0;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)0x0;
    uStack_2a8 = 0x3f600000;
    FUN_048afb10(&puStack_2d8,8);
    uStack_280 = 0;
    lStack_278 = 0;
    lStack_290 = 0;
    uStack_288 = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    uStack_270 = CONCAT22(uStack_270._2_2_,0xff00);
    uStack_26c = uStack_26c & 0xffffff00;
    uStack_268 = uStack_268 & 0xffffff00;
    uStack_264 = 0;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4ae9c0;
    if (plStack_318 != (long *)0x0) {
      lVar10 = *plStack_318;
      plStack_318 = plVar11;
      (**(code **)(lVar10 + 8))();
      plVar11 = plStack_318;
    }
    plStack_318 = plVar11;
    if (((ulong)uStack_2f0 & 1) != 0) {
      func_0x0412a280(puStack_2e0,(ulong)uStack_2f0 & 0xfffffffffffffffe);
    }
    param_1 = lStack_1c0;
    lStack_3d0 = (long)plStack_310;
    plStack_3d8 = plStack_318;
    uStack_2f0 = (undefined *)
                 (((ulong)((uVar5 & 0xff) << 0x10) |
                  (ulong)(uint)(iVar8 << 0x18) | (ulong)bVar2 << 0x20 | (ulong)bVar3 << 0x28) +
                  (ulong)((uVar4 & 0xff) << 8) + 10);
    if (((ulong)uStack_308 & 1) == 0) {
      uStack_308 = (long *)CONCAT71(uStack_308._1_7_,10);
      puVar17 = (undefined4 *)((long)&uStack_308 + 1);
    }
    else {
      uStack_300 = (long *)0x5;
      puVar17 = puStack_2f8;
    }
    *puVar17 = 0x65746177;
    *(undefined2 *)(puVar17 + 1) = 0x72;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)0x0;
    puStack_3b8 = puStack_2f8;
    uStack_3c8 = (ulong)uStack_308;
    uStack_3c0 = (long)uStack_300;
    uStack_308 = (long *)0x0;
    uStack_300 = (long *)0x0;
    puStack_2f8 = (undefined4 *)0x0;
    puStack_3a0 = puStack_2e0;
    uStack_3b0 = uStack_2f0;
    puStack_3a8 = puStack_2e8;
    uStack_2f0 = (undefined *)0x0;
    puStack_2e8 = (undefined1 *)0x0;
    puStack_2e0 = (undefined1 *)0x0;
    puStack_398 = puStack_2d8;
    puStack_390 = puStack_2d0;
    uStack_388 = uStack_2c8;
    puStack_2d8 = (undefined *)0x0;
    puStack_2d0 = (undefined *)0x0;
    uStack_2c8 = 0;
    lStack_380 = lStack_2c0;
    plStack_378 = plStack_2b8;
    lStack_370 = lStack_2b0;
    lStack_2c0 = 0;
    plStack_2b8 = (long *)0x0;
    lStack_2b0 = 0;
    uStack_368 = uStack_2a8;
    lStack_360 = lStack_2a0;
    lStack_358 = lStack_298;
    lStack_350 = lStack_290;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    lStack_338 = lStack_278;
    uStack_330 = uStack_270;
    uStack_348 = uStack_288;
    uStack_340 = uStack_280;
    uStack_288 = 0;
    uStack_280 = 0;
    lStack_278 = 0;
    uStack_328 = CONCAT14(uStack_264,uStack_268);
    uStack_32c = uStack_26c;
    func_0x048b0bc0();
    puVar20 = (undefined1 *)((ulong)uStack_3b0 >> 1 & 0x7f);
    puVar13 = (undefined *)((long)&uStack_3b0 + 1);
    if (((ulong)uStack_3b0 & 1) != 0) {
      puVar20 = puStack_3a8;
      puVar13 = puStack_3a0;
    }
    if (puVar20 == (undefined1 *)0x0) {
      uStack_21c = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)puVar20 & 3);
      if (puVar20 < 4) {
        uStack_21c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_21c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_21c = ((int)*(char *)((long)puVar13 + 3 + uVar23) ^
                       ((int)*(char *)((long)puVar13 + 2 + uVar23) ^
                       ((int)*(char *)((long)puVar13 + 1 + uVar23) ^
                       ((int)*(char *)((long)puVar13 + uVar23) ^ uStack_21c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar20 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar21 = 0;
        do {
          uStack_21c = ((int)*(char *)((long)puVar13 + uVar23 + uVar21) ^ uStack_21c) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar14 != uVar21);
      }
    }
    uStack_220 = 2;
    if ((DAT_0f5f1048 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5f1048), iVar8 != 0)) {
      func_0x08d34240(0xf5f1030);
      FUN_0410844d(&DAT_0f5f1048);
    }
    plStack_318 = (long *)CONCAT44(plStack_318._4_4_,uStack_21c);
    plStack_310 = (long *)0x0;
    uStack_308 = (long *)CONCAT44(uStack_308._4_4_,3);
    uStack_300 = (long *)0x1;
    puStack_2f8 = (undefined4 *)0x0;
    uStack_2f0 = &UNK_0e182450;
    puStack_2e8 = &SUB_048b06d0;
    puStack_2e0 = &SUB_08d34050;
    puStack_2d8 = &UNK_0e182460;
    puStack_2d0 = &UNK_0e182470;
    uStack_2c8 = uStack_2c8 & 0xffffffff00000000;
    lStack_2c0 = 0;
    plStack_2b8 = (long *)0x0;
    func_0x048b05a0(&uStack_240,&plStack_318);
    plVar11 = plStack_2b8;
    if (plStack_2b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2b8 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
        func_0x0412c2d0(plVar11);
      }
    }
    iStack_1f8 = iStack_230;
    iStack_1f4 = iStack_22c;
    iStack_1f0 = iStack_228;
    iStack_1ec = iStack_224;
    uStack_208 = (long *)CONCAT44(uStack_23c,uStack_240);
    uStack_200 = (long *)CONCAT44(iStack_234,iStack_238);
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    plStack_318 = (long *)CONCAT44(plStack_318._4_4_,_DAT_0f550a0c);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar10 = lStack_3d0;
    plVar1 = plStack_3d8;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef439d0;
    plStack_310 = plVar11 + 3;
    plStack_3d8 = (long *)0x0;
    lStack_3d0 = 0;
    plVar11[3] = (long)plVar1;
    plVar11[4] = lVar10;
    plVar11[7] = (long)puStack_3b8;
    plVar11[5] = uStack_3c8;
    plVar11[6] = uStack_3c0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    puStack_3b8 = (undefined4 *)0x0;
    plVar11[10] = (long)puStack_3a0;
    plVar11[8] = (long)uStack_3b0;
    plVar11[9] = (long)puStack_3a8;
    uStack_3b0 = (undefined *)0x0;
    puStack_3a8 = (undefined1 *)0x0;
    puStack_3a0 = (undefined *)0x0;
    plVar11[0xb] = (long)puStack_398;
    plVar11[0xc] = (long)puStack_390;
    plVar11[0xd] = uStack_388;
    puStack_398 = (undefined *)0x0;
    puStack_390 = (undefined *)0x0;
    uStack_388 = 0;
    plVar11[0xe] = lStack_380;
    plVar11[0xf] = (long)plStack_378;
    plVar11[0x10] = lStack_370;
    lStack_380 = 0;
    plStack_378 = (long *)0x0;
    lStack_370 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_368;
    plVar11[0x12] = lStack_360;
    plVar11[0x13] = lStack_358;
    plVar11[0x14] = lStack_350;
    lStack_360 = 0;
    lStack_358 = 0;
    lStack_350 = 0;
    plVar11[0x17] = lStack_338;
    *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_348;
    *(undefined4 *)((long)plVar11 + 0xac) = uStack_348._4_4_;
    *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_340;
    *(undefined4 *)((long)plVar11 + 0xb4) = uStack_340._4_4_;
    uStack_348 = 0;
    uStack_340 = 0;
    lStack_338 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT53(uStack_328,uStack_32c._1_3_);
    plVar11[0x18] = CONCAT44(uStack_32c,uStack_330);
    uStack_1b8 = 0;
    uStack_1b0 = (long *)0x0;
    uStack_308 = plVar11;
    func_0x048afd20(&uStack_208,&plStack_318);
    plVar11 = uStack_308;
    if (uStack_308 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_308 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_308 + 0x10))(uStack_308);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_1b0;
    if (uStack_1b0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1b0 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_1b0 + 0x10))(uStack_1b0);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar10 = CONCAT44(iStack_1f4,iStack_1f8);
    if (iStack_1ec == 2) {
      piVar15 = *(int **)(*(long *)(lVar10 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != iStack_1f0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      for (; *(long **)(piVar15 + 0xc) != uStack_200; piVar15 = *(int **)(piVar15 + 0xe)) {
      }
LAB_0e13604a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (iStack_1ec == 1) {
        piVar15 = *(int **)(*(long *)(lVar10 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != iStack_1f0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0e13604a;
      }
      if (iStack_1ec == 0) {
        *(byte *)(lVar10 + 0x1a) = *(byte *)(lVar10 + 0x1a) | 9;
      }
    }
    if ((char)uStack_210 == '\0') {
      uStack_214 = 0xbb8863ad;
      uStack_210 = CONCAT31(uStack_210._1_3_,1);
      plStack_318 = (long *)CONCAT44(plStack_318._4_4_,0xbb8863ad);
      lVar10 = func_0x08d34050(CONCAT44(uStack_244,uStack_248) + 0x18);
      lVar10 = *(long *)(lVar10 + 0x68);
      piVar12 = *(int **)(lVar10 + 0x28);
      for (piVar15 = *(int **)(lVar10 + 0x20); (piVar15 != piVar12 && (*piVar15 != -0x44779c53));
          piVar15 = piVar15 + 0xe) {
      }
      if (piVar15 == piVar12) {
        if (piVar12 < *(int **)(lVar10 + 0x30)) {
          *piVar12 = -0x44779c53;
          piVar12[2] = 0;
          piVar12[3] = 0;
          piVar12[4] = 0;
          piVar12[5] = 0;
          piVar12[6] = 0;
          piVar12[7] = 0;
          piVar12[8] = 0;
          piVar12[9] = 0;
          piVar12[10] = 0x3f800000;
          *(undefined1 *)(piVar12 + 0xc) = 0;
          *(undefined1 *)(piVar12 + 0xd) = 0;
          piVar12 = piVar12 + 0xe;
        }
        else {
          piVar12 = (int *)func_0x05d9c2b0(lVar10 + 0x20,&plStack_318);
        }
        *(int **)(lVar10 + 0x28) = piVar12;
      }
      else if ((*(long *)(piVar15 + 8) != 0) &&
              (cVar7 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013d9c81
                                      ), cVar7 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar4 = uStack_214;
    lVar10 = func_0x08d34050(CONCAT44(uStack_244,uStack_248) + 0x18);
    puVar6 = *(uint **)(*(long *)(lVar10 + 0x68) + 0x28);
    for (puVar24 = *(uint **)(*(long *)(lVar10 + 0x68) + 0x20);
        (puVar24 != puVar6 && (*puVar24 != uVar4)); puVar24 = puVar24 + 0xe) {
    }
    if ((puVar24 == puVar6) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014de664),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_318 = (long *)((ulong)plStack_318 & 0xffffffffffffff00);
    func_0x05d9c620(puVar24 + 2,&uStack_21c,&uStack_21c,&plStack_318);
    func_0x048b0bc0(&plStack_3d8);
  }
  if ((DAT_0f746fa8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f746fa8), iVar8 != 0)) {
    func_0x0e182580();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f746f28,0xf53dab8);
    FUN_0410844d(&DAT_0f746fa8);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f746f28 + 4)) * 8);
  do {
    lVar10 = *plVar11;
    if (lVar10 == -1) goto LAB_0e136240;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f746f28 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e136240:
    puVar13 = &DAT_0f746f28;
    if (iRam000000000f746f88 != -0x2b3da790) goto LAB_0e136298;
LAB_0e13626b:
    lVar10 = *(long *)(puVar13 + 0x68);
    if (lVar10 == 0) goto LAB_0e136298;
    bVar25 = (*(byte *)(lVar10 + 8) & 1) != 0;
    puVar13 = (undefined *)(lVar10 + 9);
    if (bVar25) {
      puVar13 = *(undefined **)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar25) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
  }
  else {
    puVar13 = (undefined *)plVar11[2];
    if (*(int *)(puVar13 + 0x60) == -0x2b3da790) goto LAB_0e13626b;
LAB_0e136298:
    puVar13 = &UNK_0132010f;
    uVar14 = 0xf;
  }
  func_0x0e182960(&uStack_248,param_1,puVar13,uVar14);
  uStack_214 = uStack_214 & 0xffffff00;
  uStack_210 = uStack_210 & 0xffffff00;
  if ((char)uStack_218 == '\0') {
    func_0x0e186200(&plStack_318,&UNK_013d6493,6);
    puVar22 = (undefined1 *)((ulong)uStack_2f0 >> 1 & 0x7f);
    puVar20 = (undefined1 *)((long)&uStack_2f0 + 1);
    puVar18 = puVar20;
    if (((ulong)uStack_2f0 & 1) != 0) {
      puVar22 = puStack_2e8;
      puVar18 = puStack_2e0;
    }
    if (puVar22 == (undefined1 *)0x0) {
      uStack_21c = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)puVar22 & 3);
      if (puVar22 < (undefined1 *)0x4) {
        uStack_21c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_21c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_21c = ((int)(char)puVar18[uVar23 + 3] ^
                       ((int)(char)puVar18[uVar23 + 2] ^
                       ((int)(char)puVar18[uVar23 + 1] ^
                       ((int)(char)puVar18[uVar23] ^ uStack_21c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar21 = 0;
        do {
          uStack_21c = ((int)(char)puVar18[uVar21 + uVar23] ^ uStack_21c) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar14 != uVar21);
      }
    }
    uStack_220 = 2;
    if ((DAT_0f7058d8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7058d8), iVar8 != 0)) {
      func_0x0cdd52d0(0xf7058c0);
      FUN_0410844d(&DAT_0f7058d8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_21c);
    lStack_3d0 = 0;
    uStack_3c8 = CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined4 *)0x0;
    uStack_3b0 = &UNK_0e186810;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_0e1824c0;
    puStack_398 = &UNK_0e1868d0;
    puStack_390 = &UNK_0e1868e0;
    uStack_388 = uStack_388 & 0xffffffff00000000;
    lStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_240,&plStack_3d8);
    plVar11 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        func_0x0412c2d0(plVar11);
      }
    }
    iStack_1f8 = iStack_230;
    iStack_1f4 = iStack_22c;
    iStack_1f0 = iStack_228;
    iStack_1ec = iStack_224;
    func_0x0e1865a0(&plStack_3d8,&uStack_208,&plStack_318);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar10 = *(long *)(piVar15 + 0xc);
      while (lVar10 != lStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar10 = *(long *)(piVar15 + 0xc);
      }
LAB_0e13657a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0e13657a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_210 == '\0') {
      func_0x0e186930(&plStack_3d8,&uStack_248);
    }
    uVar4 = uStack_214;
    lVar10 = CONCAT44(uStack_244,uStack_248);
    if ((DAT_0f746fa8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f746fa8), iVar8 != 0)) {
      func_0x0e182580();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f746f28,0xf53dab8);
      FUN_0410844d(&DAT_0f746fa8);
    }
    plVar11 = (long *)(*(long *)(lVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f746f28 + 4)) * 8);
    do {
      lVar19 = *plVar11;
      if (lVar19 == -1) goto LAB_0e136610;
      plVar11 = (long *)(*(long *)(lVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f746f28 + 4)
            );
    if (plVar11 == *(long **)(lVar10 + 0x38)) {
LAB_0e136610:
      puVar13 = &DAT_0f746f28;
    }
    else {
      puVar13 = (undefined *)plVar11[2];
    }
    puVar6 = *(uint **)(*(long *)(puVar13 + 0x68) + 0x28);
    for (puVar24 = *(uint **)(*(long *)(puVar13 + 0x68) + 0x20);
        (puVar24 != puVar6 && (*puVar24 != uVar4)); puVar24 = puVar24 + 0xe) {
    }
    if ((puVar24 == puVar6) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121c8c5),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(puVar24 + 2,&uStack_21c,&uStack_21c,&plStack_3d8);
    uStack_178 = uStack_248;
    uStack_174 = uStack_244;
    uStack_170 = uStack_240;
    uStack_16c = uStack_23c;
    iStack_168 = iStack_238;
    iStack_164 = iStack_234;
    iStack_160 = iStack_230;
    iStack_15c = iStack_22c;
    iStack_158 = iStack_228;
    iStack_154 = iStack_224;
    uStack_150 = uStack_220;
    uStack_14c = uStack_21c;
    uStack_148 = uStack_218;
    uStack_144 = uStack_214;
    uStack_140 = uStack_210;
    func_0x048b0bc0(&plStack_318);
    func_0x0e186200(&plStack_318,&UNK_013017a5,6);
    puVar22 = (undefined1 *)((ulong)uStack_2f0 >> 1 & 0x7f);
    puVar18 = puVar20;
    if (((ulong)uStack_2f0 & 1) != 0) {
      puVar22 = puStack_2e8;
      puVar18 = puStack_2e0;
    }
    if (puVar22 == (undefined1 *)0x0) {
      uStack_14c = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)puVar22 & 3);
      if (puVar22 < (undefined1 *)0x4) {
        uStack_14c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_14c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_14c = ((int)(char)puVar18[uVar23 + 3] ^
                       ((int)(char)puVar18[uVar23 + 2] ^
                       ((int)(char)puVar18[uVar23 + 1] ^
                       ((int)(char)puVar18[uVar23] ^ uStack_14c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar21 = 0;
        do {
          uStack_14c = ((int)(char)puVar18[uVar21 + uVar23] ^ uStack_14c) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar14 != uVar21);
      }
    }
    uStack_150 = 2;
    if ((DAT_0f7058d8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7058d8), iVar8 != 0)) {
      func_0x0cdd52d0(0xf7058c0);
      FUN_0410844d(&DAT_0f7058d8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_14c);
    lStack_3d0 = 0;
    uStack_3c8 = CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined4 *)0x0;
    uStack_3b0 = &UNK_0e186810;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_0e1824c0;
    puStack_398 = &UNK_0e186af0;
    puStack_390 = &UNK_0e186b00;
    uStack_388 = uStack_388 & 0xffffffff00000000;
    lStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_170,&plStack_3d8);
    plVar11 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        func_0x0412c2d0(plVar11);
      }
    }
    iStack_1f8 = iStack_160;
    iStack_1f4 = iStack_15c;
    iStack_1f0 = iStack_158;
    iStack_1ec = iStack_154;
    uStack_208 = (long *)CONCAT44(uStack_16c,uStack_170);
    uStack_200 = (long *)CONCAT44(iStack_164,iStack_168);
    func_0x0e1865a0(&plStack_3d8,&uStack_208,&plStack_318);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar10 = *(long *)(piVar15 + 0xc);
      while (lVar10 != lStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar10 = *(long *)(piVar15 + 0xc);
      }
LAB_0e13698a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0e13698a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_140 == '\0') {
      func_0x0e186930(&plStack_3d8,&uStack_178);
    }
    uVar4 = uStack_144;
    lVar10 = CONCAT44(uStack_174,uStack_178);
    if ((DAT_0f746fa8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f746fa8), iVar8 != 0)) {
      func_0x0e182580();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f746f28,0xf53dab8);
      FUN_0410844d(&DAT_0f746fa8);
    }
    plVar11 = (long *)(*(long *)(lVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f746f28 + 4)) * 8);
    do {
      lVar19 = *plVar11;
      if (lVar19 == -1) goto LAB_0e136a20;
      plVar11 = (long *)(*(long *)(lVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f746f28 + 4)
            );
    if (plVar11 == *(long **)(lVar10 + 0x38)) {
LAB_0e136a20:
      puVar13 = &DAT_0f746f28;
    }
    else {
      puVar13 = (undefined *)plVar11[2];
    }
    puVar6 = *(uint **)(*(long *)(puVar13 + 0x68) + 0x28);
    for (puVar24 = *(uint **)(*(long *)(puVar13 + 0x68) + 0x20);
        (puVar24 != puVar6 && (*puVar24 != uVar4)); puVar24 = puVar24 + 0xe) {
    }
    if ((puVar24 == puVar6) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121c8c5),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(puVar24 + 2,&uStack_14c,&uStack_14c,&plStack_3d8);
    uStack_1b8 = CONCAT44(uStack_174,uStack_178);
    uStack_1b0 = (long *)CONCAT44(uStack_16c,uStack_170);
    iStack_1a8 = iStack_168;
    iStack_1a4 = iStack_164;
    iStack_1a0 = iStack_160;
    iStack_19c = iStack_15c;
    iStack_198 = iStack_158;
    iStack_194 = iStack_154;
    uStack_190 = uStack_150;
    uStack_18c = uStack_14c;
    uStack_188 = CONCAT44(uStack_144,uStack_148);
    uStack_180 = uStack_140;
    func_0x048b0bc0(&plStack_318);
    func_0x0e186200(&plStack_318,&UNK_014a8c70,8);
    puVar22 = (undefined1 *)((ulong)uStack_2f0 >> 1 & 0x7f);
    puVar18 = puVar20;
    if (((ulong)uStack_2f0 & 1) != 0) {
      puVar22 = puStack_2e8;
      puVar18 = puStack_2e0;
    }
    if (puVar22 == (undefined1 *)0x0) {
      uStack_18c = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)puVar22 & 3);
      if (puVar22 < (undefined1 *)0x4) {
        uStack_18c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_18c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_18c = ((int)(char)puVar18[uVar23 + 3] ^
                       ((int)(char)puVar18[uVar23 + 2] ^
                       ((int)(char)puVar18[uVar23 + 1] ^
                       ((int)(char)puVar18[uVar23] ^ uStack_18c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar21 = 0;
        do {
          uStack_18c = ((int)(char)puVar18[uVar21 + uVar23] ^ uStack_18c) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar14 != uVar21);
      }
    }
    uStack_190 = 2;
    if ((DAT_0f7058d8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7058d8), iVar8 != 0)) {
      func_0x0cdd52d0(0xf7058c0);
      FUN_0410844d(&DAT_0f7058d8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_18c);
    lStack_3d0 = 0;
    uStack_3c8 = CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined4 *)0x0;
    uStack_3b0 = &UNK_0e186810;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_0e1824c0;
    puStack_398 = &UNK_0e186b50;
    puStack_390 = &UNK_0e186b60;
    uStack_388 = uStack_388 & 0xffffffff00000000;
    lStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_1b0,&plStack_3d8);
    plVar11 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        func_0x0412c2d0(plVar11);
      }
    }
    iStack_1f8 = iStack_1a0;
    iStack_1f4 = iStack_19c;
    iStack_1f0 = iStack_198;
    iStack_1ec = iStack_194;
    uStack_208 = uStack_1b0;
    uStack_200 = (long *)CONCAT44(iStack_1a4,iStack_1a8);
    func_0x0e1865a0(&plStack_3d8,&uStack_208,&plStack_318);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar10 = *(long *)(piVar15 + 0xc);
      while (lVar10 != lStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar10 = *(long *)(piVar15 + 0xc);
      }
LAB_0e136d9a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0e136d9a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_180 == '\0') {
      func_0x0e186930(&plStack_3d8,&uStack_1b8);
    }
    lVar10 = uStack_1b8;
    iVar8 = uStack_188._4_4_;
    if ((DAT_0f746fa8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f746fa8), iVar9 != 0)) {
      func_0x0e182580();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f746f28,0xf53dab8);
      FUN_0410844d(&DAT_0f746fa8);
    }
    plVar11 = (long *)(*(long *)(lVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f746f28 + 4)) * 8);
    do {
      lVar19 = *plVar11;
      if (lVar19 == -1) goto LAB_0e136e30;
      plVar11 = (long *)(*(long *)(lVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f746f28 + 4)
            );
    if (plVar11 == *(long **)(lVar10 + 0x38)) {
LAB_0e136e30:
      puVar13 = &DAT_0f746f28;
    }
    else {
      puVar13 = (undefined *)plVar11[2];
    }
    piVar12 = *(int **)(*(long *)(puVar13 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar13 + 0x68) + 0x20);
        (piVar15 != piVar12 && (*piVar15 != iVar8)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar12) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121c8c5),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,&uStack_18c,&uStack_18c,&plStack_3d8);
    uStack_208 = (long *)uStack_1b8;
    uStack_200 = uStack_1b0;
    iStack_1f8 = iStack_1a8;
    iStack_1f4 = iStack_1a4;
    iStack_1f0 = iStack_1a0;
    iStack_1ec = iStack_19c;
    iStack_1e8 = iStack_198;
    iStack_1e4 = iStack_194;
    uStack_1e0 = uStack_190;
    uStack_1dc = uStack_18c;
    uStack_1d8 = (undefined4)uStack_188;
    iStack_1d4 = uStack_188._4_4_;
    uStack_1d0 = uStack_180;
    func_0x048b0bc0(&plStack_318);
    func_0x0e186200(&plStack_318,&UNK_012b7c25,0xb);
    puVar18 = (undefined1 *)((ulong)uStack_2f0 >> 1 & 0x7f);
    if (((ulong)uStack_2f0 & 1) != 0) {
      puVar18 = puStack_2e8;
      puVar20 = puStack_2e0;
    }
    if (puVar18 == (undefined1 *)0x0) {
      uStack_1dc = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)puVar18 & 3);
      if (puVar18 < (undefined1 *)0x4) {
        uStack_1dc = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_1dc = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_1dc = ((int)(char)puVar20[uVar23 + 3] ^
                       ((int)(char)puVar20[uVar23 + 2] ^
                       ((int)(char)puVar20[uVar23 + 1] ^
                       ((int)(char)puVar20[uVar23] ^ uStack_1dc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while (((ulong)puVar18 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar21 = 0;
        do {
          uStack_1dc = ((int)(char)puVar20[uVar21 + uVar23] ^ uStack_1dc) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar14 != uVar21);
      }
    }
    uStack_1e0 = 2;
    if ((DAT_0f7058d8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7058d8), iVar8 != 0)) {
      func_0x0cdd52d0(0xf7058c0);
      FUN_0410844d(&DAT_0f7058d8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_1dc);
    lStack_3d0 = 0;
    uStack_3c8 = CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined4 *)0x0;
    uStack_3b0 = &UNK_0e186810;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_0e1824c0;
    puStack_398 = &UNK_0e186bb0;
    puStack_390 = &UNK_0e186bc0;
    uStack_388 = uStack_388 & 0xffffffff00000000;
    lStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_200,&plStack_3d8);
    plVar11 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        func_0x0412c2d0(plVar11);
      }
    }
    iStack_118 = iStack_1f0;
    iStack_114 = iStack_1ec;
    iStack_110 = iStack_1e8;
    iStack_10c = iStack_1e4;
    uStack_128 = (undefined4)uStack_200;
    uStack_124 = uStack_200._4_4_;
    iStack_120 = iStack_1f8;
    iStack_11c = iStack_1f4;
    func_0x0e1865a0(&plStack_3d8,&uStack_128,&plStack_318);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar10 = *(long *)(piVar15 + 0xc);
      while (lVar10 != lStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar10 = *(long *)(piVar15 + 0xc);
      }
LAB_0e13719a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0e13719a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1d0 == '\0') {
      func_0x0e186930(&plStack_3d8,&uStack_208);
    }
    iVar8 = iStack_1d4;
    lVar10 = (long)uStack_208;
    if ((DAT_0f746fa8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f746fa8), iVar9 != 0)) {
      func_0x0e182580();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f746f28,0xf53dab8);
      FUN_0410844d(&DAT_0f746fa8);
    }
    param_1 = lStack_1c0;
    plVar11 = (long *)(*(long *)(lVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f746f28 + 4)) * 8);
    do {
      lVar19 = *plVar11;
      if (lVar19 == -1) goto LAB_0e137230;
      plVar11 = (long *)(*(long *)(lVar10 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f746f28 + 4)
            );
    if (plVar11 == *(long **)(lVar10 + 0x38)) {
LAB_0e137230:
      puVar13 = &DAT_0f746f28;
    }
    else {
      puVar13 = (undefined *)plVar11[2];
    }
    piVar12 = *(int **)(*(long *)(puVar13 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar13 + 0x68) + 0x20);
        (piVar15 != piVar12 && (*piVar15 != iVar8)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar12) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0121c8c5),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,&uStack_1dc,&uStack_1dc,&plStack_3d8);
    func_0x048b0bc0(&plStack_318);
  }
  lVar10 = func_0x0cdf5eb0(lStack_130);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar25 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar19 = lVar10 + 9;
    if (bVar25) {
      lVar19 = *(long *)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar25) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0e186c10(&uStack_248,param_1,lVar19,uVar14);
  }
  else {
    func_0x0e186c10(&uStack_248,param_1,&UNK_014269a8,0xe);
  }
  if ((char)uStack_218 != '\0') {
    return;
  }
  func_0x0e187150(&plStack_318,CONCAT44(uStack_244,uStack_248) + 0x18);
  if (uStack_300._4_4_ == 2) {
    piVar15 = *(int **)(uStack_308[0xf] + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_300) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    plVar11 = *(long **)(piVar15 + 0xc);
    while (plVar11 != plStack_310) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar11 = *(long **)(piVar15 + 0xc);
    }
LAB_0e13741a:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_300._4_4_ == 1) {
      piVar15 = *(int **)(uStack_308[0xf] + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_300) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0e13741a;
    }
    if (uStack_300._4_4_ == 0) {
      *(uint *)(uStack_308 + 3) = *(uint *)(uStack_308 + 3) | 0x40000;
    }
  }
  func_0x0e1874c0(&plStack_318,&uStack_248,&UNK_0126b773,0xb);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4ae9c0;
  if (uStack_300 != (long *)0x0) {
    lVar10 = *uStack_300;
    uStack_300 = plVar11;
    (**(code **)(lVar10 + 8))();
    plVar11 = uStack_300;
  }
  uStack_300 = plVar11;
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,(undefined4)uStack_308);
  lStack_3d0 = 0;
  uStack_3c8 = uStack_3c8 & 0xffffffff00000000;
  uStack_3c0 = 1;
  puStack_3b8 = (undefined4 *)0x0;
  uStack_3b0 = &UNK_0e182450;
  puStack_3a8 = &SUB_048b06d0;
  puStack_3a0 = &SUB_08d34050;
  puStack_398 = &UNK_0e187a20;
  puStack_390 = &UNK_0e187b80;
  uStack_388 = uStack_388 & 0xffffffff00000000;
  lStack_380 = 0;
  plStack_378 = (long *)0x0;
  func_0x048b05a0(plStack_310,&plStack_3d8);
  plVar11 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_378 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e187720(&plStack_318);
  cStack_78 = (char)uStack_218;
  iStack_88 = iStack_228;
  iStack_84 = iStack_224;
  uStack_80 = uStack_220;
  uStack_7c = uStack_21c;
  iStack_98 = iStack_238;
  iStack_94 = iStack_234;
  iStack_90 = iStack_230;
  iStack_8c = iStack_22c;
  uStack_a8 = uStack_248;
  uStack_a4 = uStack_244;
  uStack_a0 = uStack_240;
  uStack_9c = uStack_23c;
  func_0x048b0bc0(&uStack_300);
  uStack_e8 = uStack_a8;
  uStack_e4 = uStack_a4;
  uStack_e0 = uStack_a0;
  uStack_dc = uStack_9c;
  iStack_d8 = iStack_98;
  iStack_d4 = iStack_94;
  iStack_d0 = iStack_90;
  iStack_cc = iStack_8c;
  iStack_c8 = iStack_88;
  iStack_c4 = iStack_84;
  uStack_c0 = uStack_80;
  uStack_bc = uStack_7c;
  uStack_b8 = CONCAT71(uStack_77,cStack_78);
  func_0x0e187150(&plStack_318,CONCAT44(uStack_a4,uStack_a8) + 0x18);
  if (uStack_300._4_4_ == 2) {
    piVar15 = *(int **)(uStack_308[0xf] + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_300) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    plVar11 = *(long **)(piVar15 + 0xc);
    while (plVar11 != plStack_310) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar11 = *(long **)(piVar15 + 0xc);
    }
LAB_0e13769a:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_300._4_4_ == 1) {
      piVar15 = *(int **)(uStack_308[0xf] + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_300) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0e13769a;
    }
    if (uStack_300._4_4_ == 0) {
      *(uint *)(uStack_308 + 3) = *(uint *)(uStack_308 + 3) | 0x40000;
    }
  }
  func_0x0e1874c0(&plStack_318,&uStack_e8,&UNK_0133a9fd,0x12);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_300 != (long *)0x0) {
    lVar10 = *uStack_300;
    uStack_300 = plVar11;
    (**(code **)(lVar10 + 8))();
    plVar11 = uStack_300;
  }
  uStack_300 = plVar11;
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,(undefined4)uStack_308);
  lStack_3d0 = 0;
  uStack_3c8 = uStack_3c8 & 0xffffffff00000000;
  uStack_3c0 = 1;
  puStack_3b8 = (undefined4 *)0x0;
  uStack_3b0 = &UNK_04906f70;
  puStack_3a8 = &SUB_048b06d0;
  puStack_3a0 = &SUB_04906c50;
  puStack_398 = &UNK_0e187d60;
  puStack_390 = &UNK_0e187ec0;
  uStack_388 = uStack_388 & 0xffffffff00000000;
  lStack_380 = 0;
  plStack_378 = (long *)0x0;
  func_0x048b05a0(plStack_310,&plStack_3d8);
  plVar11 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_378 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e187720(&plStack_318);
  uStack_38 = (undefined1)uStack_b8;
  iStack_48 = iStack_c8;
  iStack_44 = iStack_c4;
  uStack_40 = uStack_c0;
  uStack_3c = uStack_bc;
  iStack_58 = iStack_d8;
  iStack_54 = iStack_d4;
  iStack_50 = iStack_d0;
  iStack_4c = iStack_cc;
  uStack_68 = uStack_e8;
  uStack_64 = uStack_e4;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  func_0x048b0bc0(&uStack_300);
  uStack_128 = uStack_68;
  uStack_124 = uStack_64;
  iStack_120 = uStack_60;
  iStack_11c = uStack_5c;
  iStack_118 = iStack_58;
  iStack_114 = iStack_54;
  iStack_110 = iStack_50;
  iStack_10c = iStack_4c;
  iStack_108 = iStack_48;
  iStack_104 = iStack_44;
  uStack_100 = uStack_40;
  uStack_fc = uStack_3c;
  uStack_f8 = CONCAT71(uStack_37,uStack_38);
  func_0x0e187150(&plStack_318,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_300._4_4_ == 2) {
    piVar15 = *(int **)(uStack_308[0xf] + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_300) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    plVar11 = *(long **)(piVar15 + 0xc);
    while (plVar11 != plStack_310) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar11 = *(long **)(piVar15 + 0xc);
    }
LAB_0e13791a:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_300._4_4_ == 1) {
      piVar15 = *(int **)(uStack_308[0xf] + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_300) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0e13791a;
    }
    if (uStack_300._4_4_ == 0) {
      *(uint *)(uStack_308 + 3) = *(uint *)(uStack_308 + 3) | 0x40000;
    }
  }
  func_0x0e1874c0(&plStack_318,&uStack_128,&UNK_014a8c79,0x11);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4aeaa0;
  if (uStack_300 != (long *)0x0) {
    lVar10 = *uStack_300;
    uStack_300 = plVar11;
    (**(code **)(lVar10 + 8))();
    plVar11 = uStack_300;
  }
  uStack_300 = plVar11;
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,(undefined4)uStack_308);
  lStack_3d0 = 0;
  uStack_3c8 = uStack_3c8 & 0xffffffff00000000;
  uStack_3c0 = 1;
  puStack_3b8 = (undefined4 *)0x0;
  uStack_3b0 = &UNK_0e186810;
  puStack_3a8 = &SUB_048b06d0;
  puStack_3a0 = &UNK_0e1824c0;
  puStack_398 = &UNK_0e188090;
  puStack_390 = &UNK_0e1881f0;
  uStack_388 = uStack_388 & 0xffffffff00000000;
  lStack_380 = 0;
  plStack_378 = (long *)0x0;
  func_0x048b05a0(plStack_310,&plStack_3d8);
  plVar11 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_378 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e187720(&plStack_318);
  uStack_148 = CONCAT31(uStack_148._1_3_,(undefined1)uStack_f8);
  iStack_158 = iStack_108;
  iStack_154 = iStack_104;
  uStack_150 = uStack_100;
  uStack_14c = uStack_fc;
  iStack_168 = iStack_118;
  iStack_164 = iStack_114;
  iStack_160 = iStack_110;
  iStack_15c = iStack_10c;
  uStack_178 = uStack_128;
  uStack_174 = uStack_124;
  uStack_170 = iStack_120;
  uStack_16c = iStack_11c;
  func_0x048b0bc0(&uStack_300);
  uStack_1b8 = CONCAT44(uStack_174,uStack_178);
  uStack_1b0 = (long *)CONCAT44(uStack_16c,uStack_170);
  iStack_1a8 = iStack_168;
  iStack_1a4 = iStack_164;
  iStack_1a0 = iStack_160;
  iStack_19c = iStack_15c;
  iStack_198 = iStack_158;
  iStack_194 = iStack_154;
  uStack_190 = uStack_150;
  uStack_18c = uStack_14c;
  uStack_188 = CONCAT44(uStack_144,uStack_148);
  func_0x0e187150(&plStack_318,uStack_1b8 + 0x18);
  if (uStack_300._4_4_ == 2) {
    piVar15 = *(int **)(uStack_308[0xf] + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_300) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    plVar11 = *(long **)(piVar15 + 0xc);
    while (plVar11 != plStack_310) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar11 = *(long **)(piVar15 + 0xc);
    }
LAB_0e137b9a:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_300._4_4_ == 1) {
      piVar15 = *(int **)(uStack_308[0xf] + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_300) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0e137b9a;
    }
    if (uStack_300._4_4_ == 0) {
      *(uint *)(uStack_308 + 3) = *(uint *)(uStack_308 + 3) | 0x40000;
    }
  }
  func_0x0e1874c0(&plStack_318,&uStack_1b8,&UNK_0138ac44,0x23);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f49fa00;
  if (uStack_300 != (long *)0x0) {
    lVar10 = *uStack_300;
    uStack_300 = plVar11;
    (**(code **)(lVar10 + 8))();
    plVar11 = uStack_300;
  }
  uStack_300 = plVar11;
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,(undefined4)uStack_308);
  lStack_3d0 = 0;
  uStack_3c8 = uStack_3c8 & 0xffffffff00000000;
  uStack_3c0 = 1;
  puStack_3b8 = (undefined4 *)0x0;
  uStack_3b0 = &UNK_0dd384b0;
  puStack_3a8 = &SUB_048b06d0;
  puStack_3a0 = &SUB_0dd381c0;
  puStack_398 = &UNK_0e188660;
  puStack_390 = &UNK_0e1887c0;
  uStack_388 = uStack_388 & 0xffffffff00000000;
  lStack_380 = 0;
  plStack_378 = (long *)0x0;
  func_0x048b05a0(plStack_310,&plStack_3d8);
  plVar11 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_378 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e187720(&plStack_318);
  uStack_1d8 = CONCAT31(uStack_1d8._1_3_,(undefined1)uStack_188);
  iStack_1e8 = iStack_198;
  iStack_1e4 = iStack_194;
  uStack_1e0 = uStack_190;
  uStack_1dc = uStack_18c;
  iStack_1f8 = iStack_1a8;
  iStack_1f4 = iStack_1a4;
  iStack_1f0 = iStack_1a0;
  iStack_1ec = iStack_19c;
  uStack_208 = (long *)uStack_1b8;
  uStack_200 = uStack_1b0;
  func_0x048b0bc0(&uStack_300);
  func_0x0e187150(&plStack_318,(long)uStack_208 + 0x18);
  if (uStack_300._4_4_ == 2) {
    piVar15 = *(int **)(uStack_308[0xf] + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_300) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    plVar11 = *(long **)(piVar15 + 0xc);
    while (plVar11 != plStack_310) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar11 = *(long **)(piVar15 + 0xc);
    }
  }
  else {
    if (uStack_300._4_4_ != 1) {
      if (uStack_300._4_4_ == 0) {
        *(uint *)(uStack_308 + 3) = *(uint *)(uStack_308 + 3) | 0x40000;
      }
      goto LAB_0e137dde;
    }
    piVar15 = *(int **)(uStack_308[0xf] + 0x48);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_300) {
      piVar15 = piVar15 + 0x1a;
      iVar8 = *piVar15;
    }
  }
  *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
LAB_0e137dde:
  func_0x0e1874c0(&plStack_318,&uStack_208,&UNK_014bfc03,0x13);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef46ef8;
  if (uStack_300 != (long *)0x0) {
    lVar10 = *uStack_300;
    uStack_300 = puVar16;
    (**(code **)(lVar10 + 8))();
    puVar16 = uStack_300;
  }
  uStack_300 = puVar16;
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,(undefined4)uStack_308);
  lStack_3d0 = 0;
  uStack_3c8 = uStack_3c8 & 0xffffffff00000000;
  uStack_3c0 = 1;
  puStack_3b8 = (undefined4 *)0x0;
  uStack_3b0 = &UNK_04906f70;
  puStack_3a8 = &SUB_048b06d0;
  puStack_3a0 = &SUB_04906c50;
  puStack_398 = &UNK_0e1889a0;
  puStack_390 = &UNK_0e188b00;
  uStack_388 = uStack_388 & 0xffffffff00000000;
  lStack_380 = 0;
  plStack_378 = (long *)0x0;
  func_0x048b05a0(plStack_310,&plStack_3d8);
  plVar11 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_378 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e187720(&plStack_318);
  func_0x048b0bc0(&uStack_300);
  return;
}


