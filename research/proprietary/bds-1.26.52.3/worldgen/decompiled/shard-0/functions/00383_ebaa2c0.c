/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xecaa2c0 (ELF vaddr 0xebaa2c0)
 * Label: callee-of:0xeba2170
 * Body:  [[0ecaa2c0, 0ecaf01e]]
 * Ghidra: FUN_0ecaa2c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ecaa2c0(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  undefined *puVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  bool bVar29;
  uint auStack_3d0 [2];
  long lStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined4 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  uint uStack_33c;
  undefined4 uStack_338;
  int iStack_334;
  uint uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined4 uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  undefined4 *puStack_288;
  undefined1 auStack_280 [8];
  ulong uStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined1 uStack_1fc;
  undefined1 uStack_1f8;
  undefined1 uStack_1f4;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined4 uStack_168;
  uint uStack_164;
  uint uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  char cStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f772ee0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f772ee0), iVar17 != 0)) {
    func_0x0ecfe680();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772e60,0xf53dab8);
    func_0x0410844d(&DAT_0f772ee0);
  }
  plVar22 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f772e60 + 4)) * 8);
  do {
    lVar2 = *plVar22;
    if (lVar2 == -1) goto LAB_0ecaa330;
    plVar22 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f772e60 + 4));
  if (plVar22 == *(long **)(param_1 + 0x38)) {
LAB_0ecaa330:
    puVar19 = &DAT_0f772e60;
    if (iRam000000000f772ec0 != -0x2b3da790) goto LAB_0ecaa39d;
LAB_0ecaa35b:
    lVar2 = *(long *)(puVar19 + 0x68);
    if (lVar2 == 0) goto LAB_0ecaa39d;
    bVar29 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar25 = lVar2 + 9;
    if (bVar29) {
      lVar25 = *(long *)(lVar2 + 0x18);
    }
    uVar26 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar29) {
      uVar26 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ed0c150(auStack_90,param_1,lVar25,uVar26);
  }
  else {
    puVar19 = (undefined *)plVar22[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0ecaa35b;
LAB_0ecaa39d:
    func_0x0ed0c150(auStack_90,param_1,&UNK_01475151,0x16);
  }
  if (cStack_60 != '\0') {
    return;
  }
  if ((DAT_0f7730d8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730d8), iVar17 != 0)) {
    func_0x0ed03110();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
    func_0x0410844d(&DAT_0f7730d8);
  }
  plVar22 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
  do {
    lVar2 = *plVar22;
    if (lVar2 == -1) goto LAB_0ecaa420;
    plVar22 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f773058 + 4));
  if (plVar22 == *(long **)(param_1 + 0x38)) {
LAB_0ecaa420:
    puVar19 = &DAT_0f773058;
    if (iRam000000000f7730b8 != -0x2b3da790) goto LAB_0ecaa478;
LAB_0ecaa44b:
    lVar2 = *(long *)(puVar19 + 0x68);
    if (lVar2 == 0) goto LAB_0ecaa478;
    bVar29 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar19 = (undefined *)(lVar2 + 9);
    if (bVar29) {
      puVar19 = *(undefined **)(lVar2 + 0x18);
    }
    uVar26 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar29) {
      uVar26 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar19 = (undefined *)plVar22[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0ecaa44b;
LAB_0ecaa478:
    puVar19 = &UNK_01443c86;
    uVar26 = 0x18;
  }
  func_0x0ed03550(&uStack_328,param_1,puVar19,uVar26);
  uStack_2f4 = uStack_2f4 & 0xffffff00;
  uStack_2f0 = uStack_2f0 & 0xffffff00;
  if ((char)uStack_2f8 == '\0') {
    func_0x0ed06dd0(&puStack_2a8,&UNK_0145b40a,8);
    uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
    puVar23 = (undefined8 *)(auStack_280 + 1);
    puVar6 = puVar23;
    if (((ulong)auStack_280 & 1) != 0) {
      uVar26 = uStack_278;
      puVar6 = puStack_270;
    }
    if (uVar26 == 0) {
      uStack_2fc = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar26 & 3);
      if (uVar26 < 4) {
        uStack_2fc = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_2fc = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_2fc = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                       ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_2fc) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar20 != 0) {
        uVar26 = 0;
        do {
          uStack_2fc = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_2fc) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
    }
    uStack_300 = 2;
    if ((DAT_0f7730f8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730f8), iVar17 != 0)) {
      func_0x0ed03220();
      func_0x0410844d(&DAT_0f7730f8);
    }
    auStack_3d0[0] = uStack_2fc;
    lStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed074a0;
    puStack_388 = &UNK_0ed074b0;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(&uStack_320,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    uStack_358 = uStack_310;
    uStack_354 = uStack_30c;
    uStack_350 = uStack_308;
    uStack_34c = uStack_304;
    func_0x0ed07170(auStack_3d0,&uStack_368,&puStack_2a8);
    if (uStack_3b8._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x16;
        iVar17 = *piVar21;
      }
      lVar2 = *(long *)(piVar21 + 0xc);
      while (lVar2 != lStack_3c8) {
        piVar21 = *(int **)(piVar21 + 0xe);
        lVar2 = *(long *)(piVar21 + 0xc);
      }
LAB_0ecaa70f:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar17 = *piVar21;
        while (iVar17 != (int)uStack_3b8) {
          piVar21 = piVar21 + 0x1a;
          iVar17 = *piVar21;
        }
        goto LAB_0ecaa70f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar28 = *puVar28 | 0x90000;
      }
    }
    if ((char)uStack_2f0 == '\0') {
      func_0x0ed07500(auStack_3d0,&uStack_328);
    }
    uVar7 = uStack_2f4;
    lVar2 = CONCAT44(uStack_324,uStack_328);
    if ((DAT_0f7730d8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730d8), iVar17 != 0)) {
      func_0x0ed03110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
      func_0x0410844d(&DAT_0f7730d8);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
    do {
      lVar25 = *plVar22;
      if (lVar25 == -1) goto LAB_0ecaa7a0;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773058 + 4))
    ;
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecaa7a0:
      puVar19 = &DAT_0f773058;
    }
    else {
      puVar19 = (undefined *)plVar22[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
        (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
    }
    if ((puVar28 == puVar3) &&
       (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133c9ba),
       cVar16 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    FUN_05d9c620(puVar28 + 2,&uStack_2fc,&uStack_2fc,auStack_3d0);
    uStack_118 = uStack_328;
    uStack_114 = uStack_324;
    uStack_110 = uStack_320;
    uStack_10c = uStack_31c;
    uStack_108 = uStack_318;
    uStack_104 = uStack_314;
    uStack_100 = uStack_310;
    uStack_fc = uStack_30c;
    uStack_f8 = uStack_308;
    uStack_f4 = uStack_304;
    uStack_f0 = uStack_300;
    uStack_ec = uStack_2fc;
    uStack_e8 = uStack_2f8;
    uStack_e4 = uStack_2f4;
    uStack_e0 = uStack_2f0;
    FUN_048b0bc0(&puStack_2a8);
    func_0x0ed06dd0(&puStack_2a8,&UNK_0121e86a,0xb);
    uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
    puVar6 = puVar23;
    if (((ulong)auStack_280 & 1) != 0) {
      uVar26 = uStack_278;
      puVar6 = puStack_270;
    }
    if (uVar26 == 0) {
      uStack_ec = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar26 & 3);
      if (uVar26 < 4) {
        uStack_ec = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_ec = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_ec = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                      ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                      ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                      ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_ec) * 0x1000193) * 0x1000193)
                      * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar20 != 0) {
        uVar26 = 0;
        do {
          uStack_ec = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_ec) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
    }
    uStack_f0 = 2;
    if ((DAT_0f7730f8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730f8), iVar17 != 0)) {
      func_0x0ed03220();
      func_0x0410844d(&DAT_0f7730f8);
    }
    auStack_3d0[0] = uStack_ec;
    lStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed076c0;
    puStack_388 = &UNK_0ed076d0;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(&uStack_110,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    uStack_358 = uStack_100;
    uStack_354 = uStack_fc;
    uStack_350 = uStack_f8;
    uStack_34c = uStack_f4;
    uStack_368 = CONCAT44(uStack_10c,uStack_110);
    uStack_360 = CONCAT44(uStack_104,uStack_108);
    func_0x0ed07170(auStack_3d0,&uStack_368,&puStack_2a8);
    if (uStack_3b8._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x16;
        iVar17 = *piVar21;
      }
      lVar2 = *(long *)(piVar21 + 0xc);
      while (lVar2 != lStack_3c8) {
        piVar21 = *(int **)(piVar21 + 0xe);
        lVar2 = *(long *)(piVar21 + 0xc);
      }
LAB_0ecaab1f:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar17 = *piVar21;
        while (iVar17 != (int)uStack_3b8) {
          piVar21 = piVar21 + 0x1a;
          iVar17 = *piVar21;
        }
        goto LAB_0ecaab1f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar28 = *puVar28 | 0x90000;
      }
    }
    if ((char)uStack_e0 == '\0') {
      func_0x0ed07500(auStack_3d0,&uStack_118);
    }
    uVar7 = uStack_e4;
    lVar2 = CONCAT44(uStack_114,uStack_118);
    if ((DAT_0f7730d8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730d8), iVar17 != 0)) {
      func_0x0ed03110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
      func_0x0410844d(&DAT_0f7730d8);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
    do {
      lVar25 = *plVar22;
      if (lVar25 == -1) goto LAB_0ecaabb0;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773058 + 4))
    ;
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecaabb0:
      puVar19 = &DAT_0f773058;
    }
    else {
      puVar19 = (undefined *)plVar22[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
        (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
    }
    if ((puVar28 == puVar3) &&
       (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133c9ba),
       cVar16 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    FUN_05d9c620(puVar28 + 2,&uStack_ec,&uStack_ec,auStack_3d0);
    lStack_d8 = CONCAT44(uStack_114,uStack_118);
    lStack_d0 = CONCAT44(uStack_10c,uStack_110);
    uStack_c8 = uStack_108;
    uStack_c4 = uStack_104;
    uStack_c0 = uStack_100;
    uStack_bc = uStack_fc;
    uStack_b8 = uStack_f8;
    uStack_b4 = uStack_f4;
    uStack_b0 = uStack_f0;
    uStack_ac = uStack_ec;
    uStack_a8 = uStack_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    FUN_048b0bc0(&puStack_2a8);
    func_0x0ed06dd0(&puStack_2a8,&UNK_013c19fa,3);
    uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
    puVar6 = puVar23;
    if (((ulong)auStack_280 & 1) != 0) {
      uVar26 = uStack_278;
      puVar6 = puStack_270;
    }
    if (uVar26 == 0) {
      uStack_ac = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar26 & 3);
      if (uVar26 < 4) {
        uStack_ac = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_ac = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_ac = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                      ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                      ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                      ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_ac) * 0x1000193) * 0x1000193)
                      * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar20 != 0) {
        uVar26 = 0;
        do {
          uStack_ac = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_ac) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
    }
    uStack_b0 = 2;
    if ((DAT_0f7730f8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730f8), iVar17 != 0)) {
      func_0x0ed03220();
      func_0x0410844d(&DAT_0f7730f8);
    }
    auStack_3d0[0] = uStack_ac;
    lStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed07720;
    puStack_388 = &UNK_0ed07730;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(&lStack_d0,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    uStack_358 = uStack_c0;
    uStack_354 = uStack_bc;
    uStack_350 = uStack_b8;
    uStack_34c = uStack_b4;
    uStack_368 = lStack_d0;
    uStack_360 = CONCAT44(uStack_c4,uStack_c8);
    func_0x0ed07170(auStack_3d0,&uStack_368,&puStack_2a8);
    if (uStack_3b8._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x16;
        iVar17 = *piVar21;
      }
      lVar2 = *(long *)(piVar21 + 0xc);
      while (lVar2 != lStack_3c8) {
        piVar21 = *(int **)(piVar21 + 0xe);
        lVar2 = *(long *)(piVar21 + 0xc);
      }
LAB_0ecaaf2f:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar17 = *piVar21;
        while (iVar17 != (int)uStack_3b8) {
          piVar21 = piVar21 + 0x1a;
          iVar17 = *piVar21;
        }
        goto LAB_0ecaaf2f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar28 = *puVar28 | 0x90000;
      }
    }
    if ((char)uStack_a0 == '\0') {
      func_0x0ed07500(auStack_3d0,&lStack_d8);
    }
    uVar7 = uStack_a4;
    lVar2 = lStack_d8;
    if ((DAT_0f7730d8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730d8), iVar17 != 0)) {
      func_0x0ed03110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
      func_0x0410844d(&DAT_0f7730d8);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
    do {
      lVar25 = *plVar22;
      if (lVar25 == -1) goto LAB_0ecaafc0;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773058 + 4))
    ;
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecaafc0:
      puVar19 = &DAT_0f773058;
    }
    else {
      puVar19 = (undefined *)plVar22[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
        (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
    }
    if ((puVar28 == puVar3) &&
       (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133c9ba),
       cVar16 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    FUN_05d9c620(puVar28 + 2,&uStack_ac,&uStack_ac,auStack_3d0);
    lStack_158 = lStack_d8;
    uStack_150 = lStack_d0;
    uStack_148 = uStack_c8;
    uStack_144 = uStack_c4;
    uStack_140 = uStack_c0;
    uStack_13c = uStack_bc;
    uStack_138 = uStack_b8;
    uStack_134 = uStack_b4;
    uStack_130 = uStack_b0;
    uStack_12c = uStack_ac;
    uStack_128 = uStack_a8;
    uStack_124 = uStack_a4;
    uStack_120 = uStack_a0;
    FUN_048b0bc0(&puStack_2a8);
    func_0x0ed06dd0(&puStack_2a8,&UNK_0130667e,4);
    uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
    puVar6 = puVar23;
    if (((ulong)auStack_280 & 1) != 0) {
      uVar26 = uStack_278;
      puVar6 = puStack_270;
    }
    if (uVar26 == 0) {
      uStack_12c = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar26 & 3);
      if (uVar26 < 4) {
        uStack_12c = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_12c = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_12c = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                       ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_12c) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar20 != 0) {
        uVar26 = 0;
        do {
          uStack_12c = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_12c) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
    }
    uStack_130 = 2;
    if ((DAT_0f7730f8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730f8), iVar17 != 0)) {
      func_0x0ed03220();
      func_0x0410844d(&DAT_0f7730f8);
    }
    auStack_3d0[0] = uStack_12c;
    lStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed07780;
    puStack_388 = &UNK_0ed07790;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(&uStack_150,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    uStack_358 = uStack_140;
    uStack_354 = uStack_13c;
    uStack_350 = uStack_138;
    uStack_34c = uStack_134;
    uStack_368 = uStack_150;
    uStack_360 = CONCAT44(uStack_144,uStack_148);
    func_0x0ed07170(auStack_3d0,&uStack_368,&puStack_2a8);
    if (uStack_3b8._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x16;
        iVar17 = *piVar21;
      }
      lVar2 = *(long *)(piVar21 + 0xc);
      while (lVar2 != lStack_3c8) {
        piVar21 = *(int **)(piVar21 + 0xe);
        lVar2 = *(long *)(piVar21 + 0xc);
      }
LAB_0ecab33f:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar17 = *piVar21;
        while (iVar17 != (int)uStack_3b8) {
          piVar21 = piVar21 + 0x1a;
          iVar17 = *piVar21;
        }
        goto LAB_0ecab33f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar28 = *puVar28 | 0x90000;
      }
    }
    if ((char)uStack_120 == '\0') {
      func_0x0ed07500(auStack_3d0,&lStack_158);
    }
    uVar7 = uStack_124;
    lVar2 = lStack_158;
    if ((DAT_0f7730d8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730d8), iVar17 != 0)) {
      func_0x0ed03110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
      func_0x0410844d(&DAT_0f7730d8);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
    do {
      lVar25 = *plVar22;
      if (lVar25 == -1) goto LAB_0ecab3d0;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773058 + 4))
    ;
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecab3d0:
      puVar19 = &DAT_0f773058;
    }
    else {
      puVar19 = (undefined *)plVar22[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
        (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
    }
    if ((puVar28 == puVar3) &&
       (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133c9ba),
       cVar16 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    FUN_05d9c620(puVar28 + 2,&uStack_12c,&uStack_12c,auStack_3d0);
    uStack_1d8 = lStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    uStack_1c4 = uStack_144;
    uStack_1c0 = uStack_140;
    uStack_1bc = uStack_13c;
    uStack_1b8 = uStack_138;
    uStack_1b4 = uStack_134;
    uStack_1b0 = uStack_130;
    uStack_1ac = uStack_12c;
    uStack_1a8 = uStack_128;
    uStack_1a4 = uStack_124;
    uStack_1a0 = uStack_120;
    FUN_048b0bc0(&puStack_2a8);
    func_0x0ed06dd0(&puStack_2a8,&UNK_0133c9ac,2);
    uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
    puVar6 = puVar23;
    if (((ulong)auStack_280 & 1) != 0) {
      uVar26 = uStack_278;
      puVar6 = puStack_270;
    }
    if (uVar26 == 0) {
      uStack_1ac = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar26 & 3);
      if (uVar26 < 4) {
        uStack_1ac = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_1ac = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_1ac = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                       ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_1ac) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar20 != 0) {
        uVar26 = 0;
        do {
          uStack_1ac = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_1ac) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
    }
    uStack_1b0 = 2;
    if ((DAT_0f7730f8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730f8), iVar17 != 0)) {
      func_0x0ed03220();
      func_0x0410844d(&DAT_0f7730f8);
    }
    auStack_3d0[0] = uStack_1ac;
    lStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed077e0;
    puStack_388 = &UNK_0ed077f0;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(&uStack_1d0,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    uStack_358 = uStack_1c0;
    uStack_354 = uStack_1bc;
    uStack_350 = uStack_1b8;
    uStack_34c = uStack_1b4;
    uStack_368 = uStack_1d0;
    uStack_360 = CONCAT44(uStack_1c4,uStack_1c8);
    func_0x0ed07170(auStack_3d0,&uStack_368,&puStack_2a8);
    if (uStack_3b8._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x16;
        iVar17 = *piVar21;
      }
      lVar2 = *(long *)(piVar21 + 0xc);
      while (lVar2 != lStack_3c8) {
        piVar21 = *(int **)(piVar21 + 0xe);
        lVar2 = *(long *)(piVar21 + 0xc);
      }
LAB_0ecab74f:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar17 = *piVar21;
        while (iVar17 != (int)uStack_3b8) {
          piVar21 = piVar21 + 0x1a;
          iVar17 = *piVar21;
        }
        goto LAB_0ecab74f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar28 = *puVar28 | 0x90000;
      }
    }
    if ((char)uStack_1a0 == '\0') {
      func_0x0ed07500(auStack_3d0,&uStack_1d8);
    }
    uVar7 = uStack_1a4;
    lVar2 = uStack_1d8;
    if ((DAT_0f7730d8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730d8), iVar17 != 0)) {
      func_0x0ed03110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
      func_0x0410844d(&DAT_0f7730d8);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
    do {
      lVar25 = *plVar22;
      if (lVar25 == -1) goto LAB_0ecab7e0;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773058 + 4))
    ;
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecab7e0:
      puVar19 = &DAT_0f773058;
    }
    else {
      puVar19 = (undefined *)plVar22[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
        (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
    }
    if ((puVar28 == puVar3) &&
       (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133c9ba),
       cVar16 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    FUN_05d9c620(puVar28 + 2,&uStack_1ac,&uStack_1ac,auStack_3d0);
    lStack_198 = uStack_1d8;
    lStack_190 = uStack_1d0;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    uStack_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    uStack_168 = uStack_1a8;
    uStack_164 = uStack_1a4;
    uStack_160 = uStack_1a0;
    FUN_048b0bc0(&puStack_2a8);
    func_0x0ed06dd0(&puStack_2a8,&UNK_014912fe,3);
    uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
    puVar6 = puVar23;
    if (((ulong)auStack_280 & 1) != 0) {
      uVar26 = uStack_278;
      puVar6 = puStack_270;
    }
    if (uVar26 == 0) {
      uStack_16c = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar26 & 3);
      if (uVar26 < 4) {
        uStack_16c = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_16c = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_16c = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                       ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_16c) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar20 != 0) {
        uVar26 = 0;
        do {
          uStack_16c = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_16c) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
    }
    uStack_170 = 2;
    if ((DAT_0f7730f8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730f8), iVar17 != 0)) {
      func_0x0ed03220();
      func_0x0410844d(&DAT_0f7730f8);
    }
    auStack_3d0[0] = uStack_16c;
    lStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed07840;
    puStack_388 = &UNK_0ed07850;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(&lStack_190,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    uStack_358 = uStack_180;
    uStack_354 = uStack_17c;
    uStack_350 = uStack_178;
    uStack_34c = uStack_174;
    uStack_368 = lStack_190;
    uStack_360 = CONCAT44(uStack_184,uStack_188);
    func_0x0ed07170(auStack_3d0,&uStack_368,&puStack_2a8);
    if (uStack_3b8._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x16;
        iVar17 = *piVar21;
      }
      lVar2 = *(long *)(piVar21 + 0xc);
      while (lVar2 != lStack_3c8) {
        piVar21 = *(int **)(piVar21 + 0xe);
        lVar2 = *(long *)(piVar21 + 0xc);
      }
LAB_0ecabb5f:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar17 = *piVar21;
        while (iVar17 != (int)uStack_3b8) {
          piVar21 = piVar21 + 0x1a;
          iVar17 = *piVar21;
        }
        goto LAB_0ecabb5f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar28 = *puVar28 | 0x90000;
      }
    }
    if ((char)uStack_160 == '\0') {
      func_0x0ed07500(auStack_3d0,&lStack_198);
    }
    uVar7 = uStack_164;
    lVar2 = lStack_198;
    if ((DAT_0f7730d8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730d8), iVar17 != 0)) {
      func_0x0ed03110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
      func_0x0410844d(&DAT_0f7730d8);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
    do {
      lVar25 = *plVar22;
      if (lVar25 == -1) goto LAB_0ecabbf0;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773058 + 4))
    ;
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecabbf0:
      puVar19 = &DAT_0f773058;
    }
    else {
      puVar19 = (undefined *)plVar22[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
        (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
    }
    if ((puVar28 == puVar3) &&
       (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133c9ba),
       cVar16 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    FUN_05d9c620(puVar28 + 2,&uStack_16c,&uStack_16c,auStack_3d0);
    uStack_2e8 = lStack_198;
    uStack_2e0 = lStack_190;
    uStack_2d8 = uStack_188;
    uStack_2d4 = uStack_184;
    uStack_2d0 = uStack_180;
    uStack_2cc = uStack_17c;
    uStack_2c8 = uStack_178;
    uStack_2c4 = uStack_174;
    uStack_2c0 = uStack_170;
    uStack_2bc = uStack_16c;
    uStack_2b8 = CONCAT44(uStack_164,uStack_168);
    uStack_2b0 = uStack_160;
    FUN_048b0bc0(&puStack_2a8);
    func_0x0ed06dd0(&puStack_2a8,&UNK_014c53d3,3);
    uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
    puVar6 = puVar23;
    if (((ulong)auStack_280 & 1) != 0) {
      uVar26 = uStack_278;
      puVar6 = puStack_270;
    }
    if (uVar26 == 0) {
      uStack_2bc = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar26 & 3);
      if (uVar26 < 4) {
        uStack_2bc = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_2bc = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_2bc = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                       ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                       ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_2bc) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar20 != 0) {
        uVar26 = 0;
        do {
          uStack_2bc = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_2bc) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
    }
    uStack_2c0 = 2;
    if ((DAT_0f7730f8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730f8), iVar17 != 0)) {
      func_0x0ed03220();
      func_0x0410844d(&DAT_0f7730f8);
    }
    auStack_3d0[0] = uStack_2bc;
    lStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed078a0;
    puStack_388 = &UNK_0ed078b0;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(&uStack_2e0,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    uStack_358 = uStack_2d0;
    uStack_354 = uStack_2cc;
    uStack_350 = uStack_2c8;
    uStack_34c = uStack_2c4;
    uStack_368 = uStack_2e0;
    uStack_360 = CONCAT44(uStack_2d4,uStack_2d8);
    func_0x0ed07170(auStack_3d0,&uStack_368,&puStack_2a8);
    if (uStack_3b8._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x16;
        iVar17 = *piVar21;
      }
      lVar2 = *(long *)(piVar21 + 0xc);
      while (lVar2 != lStack_3c8) {
        piVar21 = *(int **)(piVar21 + 0xe);
        lVar2 = *(long *)(piVar21 + 0xc);
      }
LAB_0ecabf6f:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar17 = *piVar21;
        while (iVar17 != (int)uStack_3b8) {
          piVar21 = piVar21 + 0x1a;
          iVar17 = *piVar21;
        }
        goto LAB_0ecabf6f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar28 = *puVar28 | 0x90000;
      }
    }
    if ((char)uStack_2b0 == '\0') {
      func_0x0ed07500(auStack_3d0,&uStack_2e8);
    }
    lVar2 = uStack_2e8;
    iVar17 = uStack_2b8._4_4_;
    if ((DAT_0f7730d8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7730d8), iVar18 != 0)) {
      func_0x0ed03110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
      func_0x0410844d(&DAT_0f7730d8);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
    do {
      lVar25 = *plVar22;
      if (lVar25 == -1) goto LAB_0ecac000;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773058 + 4))
    ;
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecac000:
      puVar19 = &DAT_0f773058;
    }
    else {
      puVar19 = (undefined *)plVar22[2];
    }
    piVar4 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (piVar21 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
        (piVar21 != piVar4 && (*piVar21 != iVar17)); piVar21 = piVar21 + 0xe) {
    }
    if ((piVar21 == piVar4) &&
       (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133c9ba),
       cVar16 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    FUN_05d9c620(piVar21 + 2,&uStack_2bc,&uStack_2bc,auStack_3d0);
    uStack_368 = uStack_2e8;
    uStack_360 = uStack_2e0;
    uStack_358 = uStack_2d8;
    uStack_354 = uStack_2d4;
    uStack_350 = uStack_2d0;
    uStack_34c = uStack_2cc;
    uStack_348 = uStack_2c8;
    uStack_344 = uStack_2c4;
    uStack_340 = uStack_2c0;
    uStack_33c = uStack_2bc;
    uStack_338 = (undefined4)uStack_2b8;
    iStack_334 = uStack_2b8._4_4_;
    uStack_330 = uStack_2b0;
    FUN_048b0bc0(&puStack_2a8);
    func_0x0ed06dd0(&puStack_2a8,&UNK_012d3a27,4);
    uVar26 = (ulong)(auStack_280[0] >> 1);
    if ((auStack_280[0] & 1) != 0) {
      uVar26 = uStack_278;
      puVar23 = puStack_270;
    }
    if (uVar26 == 0) {
      uStack_33c = 0x811c9dc5;
    }
    else {
      uVar20 = (ulong)((uint)uVar26 & 3);
      if (uVar26 < 4) {
        uStack_33c = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_33c = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_33c = ((int)*(char *)((long)puVar23 + uVar27 + 3) ^
                       ((int)*(char *)((long)puVar23 + uVar27 + 2) ^
                       ((int)*(char *)((long)puVar23 + uVar27 + 1) ^
                       ((int)*(char *)((long)puVar23 + uVar27) ^ uStack_33c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar20 != 0) {
        uVar26 = 0;
        do {
          uStack_33c = ((int)*(char *)((long)puVar23 + uVar26 + uVar27) ^ uStack_33c) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar20 != uVar26);
      }
    }
    uStack_340 = 2;
    if ((DAT_0f7730f8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7730f8), iVar17 != 0)) {
      func_0x0ed03220();
      func_0x0410844d(&DAT_0f7730f8);
    }
    auStack_3d0[0] = uStack_33c;
    lStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed07900;
    puStack_388 = &UNK_0ed07910;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(&uStack_360,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    uStack_48 = uStack_350;
    uStack_44 = uStack_34c;
    uStack_40 = uStack_348;
    uStack_3c = uStack_344;
    uStack_58 = (undefined4)uStack_360;
    uStack_54 = uStack_360._4_4_;
    uStack_50 = uStack_358;
    uStack_4c = uStack_354;
    func_0x0ed07170(auStack_3d0,&uStack_58,&puStack_2a8);
    if (uStack_3b8._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x16;
        iVar17 = *piVar21;
      }
      lVar2 = *(long *)(piVar21 + 0xc);
      while (lVar2 != lStack_3c8) {
        piVar21 = *(int **)(piVar21 + 0xe);
        lVar2 = *(long *)(piVar21 + 0xc);
      }
LAB_0ecac36f:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar17 = *piVar21;
        while (iVar17 != (int)uStack_3b8) {
          piVar21 = piVar21 + 0x1a;
          iVar17 = *piVar21;
        }
        goto LAB_0ecac36f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar28 = *puVar28 | 0x90000;
      }
    }
    if ((char)uStack_330 == '\0') {
      func_0x0ed07500(auStack_3d0,&uStack_368);
    }
    iVar17 = iStack_334;
    lVar2 = uStack_368;
    if ((DAT_0f7730d8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7730d8), iVar18 != 0)) {
      func_0x0ed03110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773058,0xf53dab8);
      func_0x0410844d(&DAT_0f7730d8);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773058 + 4)) * 8);
    do {
      lVar25 = *plVar22;
      if (lVar25 == -1) goto LAB_0ecac400;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773058 + 4))
    ;
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecac400:
      puVar19 = &DAT_0f773058;
    }
    else {
      puVar19 = (undefined *)plVar22[2];
    }
    piVar4 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (piVar21 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
        (piVar21 != piVar4 && (*piVar21 != iVar17)); piVar21 = piVar21 + 0xe) {
    }
    if ((piVar21 == piVar4) &&
       (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133c9ba),
       cVar16 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    FUN_05d9c620(piVar21 + 2,&uStack_33c,&uStack_33c,auStack_3d0);
    FUN_048b0bc0(&puStack_2a8);
  }
  if ((DAT_0f773248 == '\0') && (iVar17 = func_0x04108328(&DAT_0f773248), iVar17 != 0)) {
    func_0x0ed0cc60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7731c8,0xf53dab8);
    func_0x0410844d(&DAT_0f773248);
  }
  plVar22 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7731c8 + 4)) * 8);
  do {
    lVar2 = *plVar22;
    if (lVar2 == -1) goto LAB_0ecac500;
    plVar22 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f7731c8 + 4));
  if (plVar22 == *(long **)(param_1 + 0x38)) {
LAB_0ecac500:
    puVar19 = &DAT_0f7731c8;
    if (iRam000000000f773228 != -0x2b3da790) goto LAB_0ecac56d;
LAB_0ecac52b:
    lVar2 = *(long *)(puVar19 + 0x68);
    if (lVar2 == 0) goto LAB_0ecac56d;
    bVar29 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar25 = lVar2 + 9;
    if (bVar29) {
      lVar25 = *(long *)(lVar2 + 0x18);
    }
    uVar26 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar29) {
      uVar26 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ed0d080(&uStack_328,param_1,lVar25,uVar26);
    uVar12 = uStack_318;
    uVar13 = uStack_314;
    uVar14 = uStack_310;
    uVar15 = uStack_30c;
    uVar8 = uStack_2d8;
    uVar9 = uStack_2d4;
    uVar10 = uStack_2d0;
    uVar11 = uStack_2cc;
  }
  else {
    puVar19 = (undefined *)plVar22[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0ecac52b;
LAB_0ecac56d:
    func_0x0ed0d080(&uStack_328,param_1,&UNK_014c54c6,0x1a);
    uVar12 = uStack_318;
    uVar13 = uStack_314;
    uVar14 = uStack_310;
    uVar15 = uStack_30c;
    uVar8 = uStack_2d8;
    uVar9 = uStack_2d4;
    uVar10 = uStack_2d0;
    uVar11 = uStack_2cc;
  }
  uStack_2cc = uVar15;
  uStack_2d0 = uVar14;
  uStack_2d4 = uVar13;
  uStack_2d8 = uVar12;
  if ((char)uStack_2f8 == '\0') {
    uStack_2b8 = CONCAT44(uStack_2f4,uStack_2f8);
    uStack_2e8 = CONCAT44(uStack_324,uStack_328);
    uStack_2e0 = CONCAT44(uStack_31c,uStack_320);
    uStack_2c8 = uStack_308;
    uStack_2c4 = uStack_304;
    uStack_2c0 = uStack_300;
    uStack_2bc = uStack_2fc;
    func_0x0ed0db90(&puStack_2a8,&uStack_2e8,&UNK_0138e8dd,5);
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar22 = (long)&UNK_0ef46ef8;
    if (plStack_290 != (long *)0x0) {
      lVar2 = *plStack_290;
      plStack_290 = plVar22;
      (**(code **)(lVar2 + 8))();
      plVar22 = plStack_290;
    }
    plStack_290 = plVar22;
    auStack_3d0[0] = (uint)uStack_298;
    lStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_04906f70;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &SUB_04906c50;
    puStack_390 = &UNK_0ed0e140;
    puStack_388 = &UNK_0ed0e2a0;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(uStack_2a0,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    func_0x0ed0de40(&puStack_2a8);
    uStack_338 = CONCAT31(uStack_338._1_3_,(undefined1)uStack_2b8);
    uStack_348 = uStack_2c8;
    uStack_344 = uStack_2c4;
    uStack_340 = uStack_2c0;
    uStack_33c = uStack_2bc;
    uStack_358 = uStack_2d8;
    uStack_354 = uStack_2d4;
    uStack_350 = uStack_2d0;
    uStack_34c = uStack_2cc;
    uStack_368 = uStack_2e8;
    uStack_360 = uStack_2e0;
    FUN_048b0bc0(&plStack_290);
    func_0x0ed0db90(&puStack_2a8,&uStack_368,&UNK_0147bf3d,9);
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar22 = (long)&UNK_0f4e1538;
    if (plStack_290 != (long *)0x0) {
      lVar2 = *plStack_290;
      plStack_290 = plVar22;
      (**(code **)(lVar2 + 8))();
      plVar22 = plStack_290;
    }
    plStack_290 = plVar22;
    auStack_3d0[0] = (uint)uStack_298;
    lStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed073e0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed03050;
    puStack_390 = &UNK_0ed0e470;
    puStack_388 = &UNK_0ed0e5d0;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(uStack_2a0,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    func_0x0ed0de40(&puStack_2a8);
    FUN_048b0bc0(&plStack_290);
    uVar8 = uStack_2d8;
    uVar9 = uStack_2d4;
    uVar10 = uStack_2d0;
    uVar11 = uStack_2cc;
  }
  uStack_2cc = uVar11;
  uStack_2d0 = uVar10;
  uStack_2d4 = uVar9;
  uStack_2d8 = uVar8;
  uStack_68 = 0x416485d100000003;
  if ((DAT_0f772ee0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f772ee0), iVar17 != 0)) {
    func_0x0ecfe680();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772e60,0xf53dab8);
    func_0x0410844d(&DAT_0f772ee0);
  }
  puStack_2a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_2a8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puStack_2a8 = &UNK_0f4e1750;
  uStack_2a0 = 0;
  puStack_288 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_288 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_014aa98b;
  uStack_298 = 0x29;
  plStack_290 = (long *)0x20;
  *(undefined8 *)(puStack_288 + 4) = _DAT_014aa983;
  *(undefined8 *)(puStack_288 + 6) = uVar5;
  uVar10 = _UNK_014aa97f;
  uVar9 = _UNK_014aa97b;
  uVar8 = _UNK_014aa977;
  *puStack_288 = _DAT_014aa973;
  puStack_288[1] = uVar8;
  puStack_288[2] = uVar9;
  puStack_288[3] = uVar10;
  *(undefined1 *)(puStack_288 + 8) = 0;
  puStack_270 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_270 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_014aa98b;
  auStack_280 = (undefined1  [8])0x29;
  uStack_278 = 0x20;
  puStack_270[2] = _DAT_014aa983;
  puStack_270[3] = uVar5;
  uVar5 = CONCAT44(_UNK_014aa97f,_UNK_014aa97b);
  *puStack_270 = CONCAT44(_UNK_014aa977,_DAT_014aa973);
  puStack_270[1] = uVar5;
  *(undefined1 *)(puStack_270 + 4) = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_238 = 0x3f600000;
  func_0x048afb10(&uStack_268,8);
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_200 = 0xff00;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  if ((DAT_0f772e48 == '\0') && (iVar17 = func_0x04108328(&DAT_0f772e48), iVar17 != 0)) {
    func_0x0ecfe540();
    func_0x0410844d(&DAT_0f772e48);
  }
  auStack_3d0[0] = uStack_68._4_4_;
  lStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 2;
  uStack_3b0 = 1;
  puStack_3a8 = &UNK_0ed0eea0;
  puStack_3a0 = &UNK_07d98660;
  puStack_398 = &UNK_0ed0cba0;
  puStack_390 = &UNK_0ed0eec0;
  puStack_388 = &UNK_0ed0f6a0;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(&uStack_88,auStack_3d0);
  plVar22 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar22);
    }
  }
  uStack_318 = uStack_78;
  uStack_314 = uStack_74;
  uStack_310 = uStack_70;
  uStack_30c = uStack_6c;
  uStack_328 = uStack_88;
  uStack_324 = uStack_84;
  uStack_320 = uStack_80;
  uStack_31c = uStack_7c;
  func_0x0ed0ea40(auStack_3d0,&uStack_328,&puStack_2a8);
  FUN_048b0bc0(&puStack_2a8);
  if ((DAT_0f773190 == '\0') && (iVar17 = func_0x04108328(&DAT_0f773190), iVar17 != 0)) {
    func_0x0ed07a20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773110,0xf53dab8);
    func_0x0410844d(&DAT_0f773190);
  }
  plVar22 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773110 + 4)) * 8);
  do {
    lVar2 = *plVar22;
    if (lVar2 == -1) goto LAB_0ecacb80;
    plVar22 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f773110 + 4));
  if (plVar22 == *(long **)(param_1 + 0x38)) {
LAB_0ecacb80:
    puVar19 = &DAT_0f773110;
    if (iRam000000000f773170 != -0x2b3da790) goto LAB_0ecacbd8;
LAB_0ecacbab:
    lVar2 = *(long *)(puVar19 + 0x68);
    if (lVar2 == 0) goto LAB_0ecacbd8;
    bVar29 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar19 = (undefined *)(lVar2 + 9);
    if (bVar29) {
      puVar19 = *(undefined **)(lVar2 + 0x18);
    }
    uVar26 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar29) {
      uVar26 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar19 = (undefined *)plVar22[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0ecacbab;
LAB_0ecacbd8:
    puVar19 = &UNK_014e0225;
    uVar26 = 0x19;
  }
  func_0x0ed07e60(&uStack_328,param_1,puVar19,uVar26);
  uStack_2f4 = uStack_2f4 & 0xffffff00;
  uStack_2f0 = uStack_2f0 & 0xffffff00;
  if ((char)uStack_2f8 != '\0') goto LAB_0ecae093;
  func_0x0ed0b6e0(&puStack_2a8,&UNK_0145b40a,8);
  uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
  puVar23 = (undefined8 *)(auStack_280 + 1);
  puVar6 = puVar23;
  if (((ulong)auStack_280 & 1) != 0) {
    uVar26 = uStack_278;
    puVar6 = puStack_270;
  }
  if (uVar26 == 0) {
    uStack_2fc = 0x811c9dc5;
  }
  else {
    uVar20 = (ulong)((uint)uVar26 & 3);
    if (uVar26 < 4) {
      uStack_2fc = 0x811c9dc5;
      uVar27 = 0;
    }
    else {
      uStack_2fc = 0x811c9dc5;
      uVar27 = 0;
      do {
        uStack_2fc = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                     ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                     ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                     ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_2fc) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar20 != 0) {
      uVar26 = 0;
      do {
        uStack_2fc = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_2fc) * 0x1000193;
        uVar26 = uVar26 + 1;
      } while (uVar20 != uVar26);
    }
  }
  uStack_300 = 2;
  if ((DAT_0f7731b0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7731b0), iVar17 != 0)) {
    func_0x0ed07b30();
    func_0x0410844d(&DAT_0f7731b0);
  }
  auStack_3d0[0] = uStack_2fc;
  lStack_3c8 = 0;
  uStack_3c0 = 3;
  uStack_3b8 = 1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0ed0bcf0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0ed07960;
  puStack_390 = &UNK_0ed0bdb0;
  puStack_388 = &UNK_0ed0bdc0;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(&uStack_320,auStack_3d0);
  plVar22 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar22);
    }
  }
  uStack_358 = uStack_310;
  uStack_354 = uStack_30c;
  uStack_350 = uStack_308;
  uStack_34c = uStack_304;
  uStack_368 = CONCAT44(uStack_31c,uStack_320);
  uStack_360 = CONCAT44(uStack_314,uStack_318);
  func_0x0ed0ba80(auStack_3d0,&uStack_368,&puStack_2a8);
  if (uStack_3b8._4_4_ == 2) {
    piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
    iVar17 = *piVar21;
    while (iVar17 != (int)uStack_3b8) {
      piVar21 = piVar21 + 0x16;
      iVar17 = *piVar21;
    }
    lVar2 = *(long *)(piVar21 + 0xc);
    while (lVar2 != lStack_3c8) {
      piVar21 = *(int **)(piVar21 + 0xe);
      lVar2 = *(long *)(piVar21 + 0xc);
    }
LAB_0ecace6f:
    *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
  }
  else {
    if (uStack_3b8._4_4_ == 1) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x1a;
        iVar17 = *piVar21;
      }
      goto LAB_0ecace6f;
    }
    if (uStack_3b8._4_4_ == 0) {
      puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
      *puVar28 = *puVar28 | 0x90000;
    }
  }
  if ((char)uStack_2f0 == '\0') {
    func_0x0ed0be10(auStack_3d0,&uStack_328);
  }
  uVar7 = uStack_2f4;
  lVar2 = CONCAT44(uStack_324,uStack_328);
  if ((DAT_0f773190 == '\0') && (iVar17 = func_0x04108328(&DAT_0f773190), iVar17 != 0)) {
    func_0x0ed07a20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773110,0xf53dab8);
    func_0x0410844d(&DAT_0f773190);
  }
  plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f773110 + 4)) * 8);
  do {
    lVar25 = *plVar22;
    if (lVar25 == -1) goto LAB_0ecacf11;
    plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773110 + 4));
  if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecacf11:
    puVar19 = &DAT_0f773110;
  }
  else {
    puVar19 = (undefined *)plVar22[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
      (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar3) &&
     (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0120436a),
     cVar16 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
  FUN_05d9c620(puVar28 + 2,&uStack_2fc,&uStack_2fc,auStack_3d0);
  uStack_1d8 = CONCAT44(uStack_324,uStack_328);
  uStack_1d0 = CONCAT44(uStack_31c,uStack_320);
  uStack_1c8 = uStack_318;
  uStack_1c4 = uStack_314;
  uStack_1c0 = uStack_310;
  uStack_1bc = uStack_30c;
  uStack_1b8 = uStack_308;
  uStack_1b4 = uStack_304;
  uStack_1b0 = uStack_300;
  uStack_1ac = uStack_2fc;
  uStack_1a8 = uStack_2f8;
  uStack_1a4 = uStack_2f4;
  uStack_1a0 = uStack_2f0;
  FUN_048b0bc0(&puStack_2a8);
  func_0x0ed0b6e0(&puStack_2a8,&UNK_0121e86a,0xb);
  uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
  puVar6 = puVar23;
  if (((ulong)auStack_280 & 1) != 0) {
    uVar26 = uStack_278;
    puVar6 = puStack_270;
  }
  if (uVar26 == 0) {
    uStack_1ac = 0x811c9dc5;
  }
  else {
    uVar20 = (ulong)((uint)uVar26 & 3);
    if (uVar26 < 4) {
      uStack_1ac = 0x811c9dc5;
      uVar27 = 0;
    }
    else {
      uStack_1ac = 0x811c9dc5;
      uVar27 = 0;
      do {
        uStack_1ac = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                     ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                     ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                     ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_1ac) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar20 != 0) {
      uVar26 = 0;
      do {
        uStack_1ac = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_1ac) * 0x1000193;
        uVar26 = uVar26 + 1;
      } while (uVar20 != uVar26);
    }
  }
  uStack_1b0 = 2;
  if ((DAT_0f7731b0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7731b0), iVar17 != 0)) {
    func_0x0ed07b30();
    func_0x0410844d(&DAT_0f7731b0);
  }
  auStack_3d0[0] = uStack_1ac;
  lStack_3c8 = 0;
  uStack_3c0 = 3;
  uStack_3b8 = 1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0ed0bcf0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0ed07960;
  puStack_390 = &UNK_0ed0bfd0;
  puStack_388 = &UNK_0ed0bfe0;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(&uStack_1d0,auStack_3d0);
  plVar22 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar22);
    }
  }
  uStack_358 = uStack_1c0;
  uStack_354 = uStack_1bc;
  uStack_350 = uStack_1b8;
  uStack_34c = uStack_1b4;
  uStack_368 = uStack_1d0;
  uStack_360 = CONCAT44(uStack_1c4,uStack_1c8);
  func_0x0ed0ba80(auStack_3d0,&uStack_368,&puStack_2a8);
  if (uStack_3b8._4_4_ == 2) {
    piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
    iVar17 = *piVar21;
    while (iVar17 != (int)uStack_3b8) {
      piVar21 = piVar21 + 0x16;
      iVar17 = *piVar21;
    }
    lVar2 = *(long *)(piVar21 + 0xc);
    while (lVar2 != lStack_3c8) {
      piVar21 = *(int **)(piVar21 + 0xe);
      lVar2 = *(long *)(piVar21 + 0xc);
    }
LAB_0ecad2ef:
    *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
  }
  else {
    if (uStack_3b8._4_4_ == 1) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x1a;
        iVar17 = *piVar21;
      }
      goto LAB_0ecad2ef;
    }
    if (uStack_3b8._4_4_ == 0) {
      puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
      *puVar28 = *puVar28 | 0x90000;
    }
  }
  if ((char)uStack_1a0 == '\0') {
    func_0x0ed0be10(auStack_3d0,&uStack_1d8);
  }
  uVar7 = uStack_1a4;
  lVar2 = uStack_1d8;
  if ((DAT_0f773190 == '\0') && (iVar17 = func_0x04108328(&DAT_0f773190), iVar17 != 0)) {
    func_0x0ed07a20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773110,0xf53dab8);
    func_0x0410844d(&DAT_0f773190);
  }
  plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f773110 + 4)) * 8);
  do {
    lVar25 = *plVar22;
    if (lVar25 == -1) goto LAB_0ecad391;
    plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773110 + 4));
  if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecad391:
    puVar19 = &DAT_0f773110;
  }
  else {
    puVar19 = (undefined *)plVar22[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
      (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar3) &&
     (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0120436a),
     cVar16 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
  FUN_05d9c620(puVar28 + 2,&uStack_1ac,&uStack_1ac,auStack_3d0);
  lStack_198 = uStack_1d8;
  lStack_190 = uStack_1d0;
  uStack_188 = uStack_1c8;
  uStack_184 = uStack_1c4;
  uStack_180 = uStack_1c0;
  uStack_17c = uStack_1bc;
  uStack_178 = uStack_1b8;
  uStack_174 = uStack_1b4;
  uStack_170 = uStack_1b0;
  uStack_16c = uStack_1ac;
  uStack_168 = uStack_1a8;
  uStack_164 = uStack_1a4;
  uStack_160 = uStack_1a0;
  FUN_048b0bc0(&puStack_2a8);
  func_0x0ed0b6e0(&puStack_2a8,&UNK_01255cd0,3);
  uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
  puVar6 = puVar23;
  if (((ulong)auStack_280 & 1) != 0) {
    uVar26 = uStack_278;
    puVar6 = puStack_270;
  }
  if (uVar26 == 0) {
    uStack_16c = 0x811c9dc5;
  }
  else {
    uVar20 = (ulong)((uint)uVar26 & 3);
    if (uVar26 < 4) {
      uStack_16c = 0x811c9dc5;
      uVar27 = 0;
    }
    else {
      uStack_16c = 0x811c9dc5;
      uVar27 = 0;
      do {
        uStack_16c = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                     ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                     ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                     ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_16c) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar20 != 0) {
      uVar26 = 0;
      do {
        uStack_16c = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_16c) * 0x1000193;
        uVar26 = uVar26 + 1;
      } while (uVar20 != uVar26);
    }
  }
  uStack_170 = 2;
  if ((DAT_0f7731b0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7731b0), iVar17 != 0)) {
    func_0x0ed07b30();
    func_0x0410844d(&DAT_0f7731b0);
  }
  auStack_3d0[0] = uStack_16c;
  lStack_3c8 = 0;
  uStack_3c0 = 3;
  uStack_3b8 = 1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0ed0bcf0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0ed07960;
  puStack_390 = &UNK_0ed0c030;
  puStack_388 = &UNK_0ed0c040;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(&lStack_190,auStack_3d0);
  plVar22 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar22);
    }
  }
  uStack_358 = uStack_180;
  uStack_354 = uStack_17c;
  uStack_350 = uStack_178;
  uStack_34c = uStack_174;
  uStack_368 = lStack_190;
  uStack_360 = CONCAT44(uStack_184,uStack_188);
  func_0x0ed0ba80(auStack_3d0,&uStack_368,&puStack_2a8);
  if (uStack_3b8._4_4_ == 2) {
    piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
    iVar17 = *piVar21;
    while (iVar17 != (int)uStack_3b8) {
      piVar21 = piVar21 + 0x16;
      iVar17 = *piVar21;
    }
    lVar2 = *(long *)(piVar21 + 0xc);
    while (lVar2 != lStack_3c8) {
      piVar21 = *(int **)(piVar21 + 0xe);
      lVar2 = *(long *)(piVar21 + 0xc);
    }
LAB_0ecad70f:
    *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
  }
  else {
    if (uStack_3b8._4_4_ == 1) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x1a;
        iVar17 = *piVar21;
      }
      goto LAB_0ecad70f;
    }
    if (uStack_3b8._4_4_ == 0) {
      puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
      *puVar28 = *puVar28 | 0x90000;
    }
  }
  if ((char)uStack_160 == '\0') {
    func_0x0ed0be10(auStack_3d0,&lStack_198);
  }
  uVar7 = uStack_164;
  lVar2 = lStack_198;
  if ((DAT_0f773190 == '\0') && (iVar17 = func_0x04108328(&DAT_0f773190), iVar17 != 0)) {
    func_0x0ed07a20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773110,0xf53dab8);
    func_0x0410844d(&DAT_0f773190);
  }
  plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f773110 + 4)) * 8);
  do {
    lVar25 = *plVar22;
    if (lVar25 == -1) goto LAB_0ecad7b1;
    plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773110 + 4));
  if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecad7b1:
    puVar19 = &DAT_0f773110;
  }
  else {
    puVar19 = (undefined *)plVar22[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar19 + 0x68) + 0x20);
      (puVar28 != puVar3 && (*puVar28 != uVar7)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar3) &&
     (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0120436a),
     cVar16 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
  FUN_05d9c620(puVar28 + 2,&uStack_16c,&uStack_16c,auStack_3d0);
  uStack_2e8 = lStack_198;
  uStack_2e0 = lStack_190;
  uStack_2d8 = uStack_188;
  uStack_2d4 = uStack_184;
  uStack_2d0 = uStack_180;
  uStack_2cc = uStack_17c;
  uStack_2c8 = uStack_178;
  uStack_2c4 = uStack_174;
  uStack_2c0 = uStack_170;
  uStack_2bc = uStack_16c;
  uStack_2b8 = CONCAT44(uStack_164,uStack_168);
  uStack_2b0 = uStack_160;
  FUN_048b0bc0(&puStack_2a8);
  func_0x0ed0b6e0(&puStack_2a8,&UNK_01338b17,8);
  uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
  puVar6 = puVar23;
  if (((ulong)auStack_280 & 1) != 0) {
    uVar26 = uStack_278;
    puVar6 = puStack_270;
  }
  if (uVar26 == 0) {
    uStack_2bc = 0x811c9dc5;
  }
  else {
    uVar20 = (ulong)((uint)uVar26 & 3);
    if (uVar26 < 4) {
      uStack_2bc = 0x811c9dc5;
      uVar27 = 0;
    }
    else {
      uStack_2bc = 0x811c9dc5;
      uVar27 = 0;
      do {
        uStack_2bc = ((int)*(char *)((long)puVar6 + uVar27 + 3) ^
                     ((int)*(char *)((long)puVar6 + uVar27 + 2) ^
                     ((int)*(char *)((long)puVar6 + uVar27 + 1) ^
                     ((int)*(char *)((long)puVar6 + uVar27) ^ uStack_2bc) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar20 != 0) {
      uVar26 = 0;
      do {
        uStack_2bc = ((int)*(char *)((long)puVar6 + uVar26 + uVar27) ^ uStack_2bc) * 0x1000193;
        uVar26 = uVar26 + 1;
      } while (uVar20 != uVar26);
    }
  }
  uStack_2c0 = 2;
  if ((DAT_0f7731b0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7731b0), iVar17 != 0)) {
    func_0x0ed07b30();
    func_0x0410844d(&DAT_0f7731b0);
  }
  auStack_3d0[0] = uStack_2bc;
  lStack_3c8 = 0;
  uStack_3c0 = 3;
  uStack_3b8 = 1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0ed0bcf0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0ed07960;
  puStack_390 = &UNK_0ed0c090;
  puStack_388 = &UNK_0ed0c0a0;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(&uStack_2e0,auStack_3d0);
  plVar22 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar22);
    }
  }
  uStack_358 = uStack_2d0;
  uStack_354 = uStack_2cc;
  uStack_350 = uStack_2c8;
  uStack_34c = uStack_2c4;
  uStack_368 = uStack_2e0;
  uStack_360 = CONCAT44(uStack_2d4,uStack_2d8);
  func_0x0ed0ba80(auStack_3d0,&uStack_368,&puStack_2a8);
  if (uStack_3b8._4_4_ == 2) {
    piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
    iVar17 = *piVar21;
    while (iVar17 != (int)uStack_3b8) {
      piVar21 = piVar21 + 0x16;
      iVar17 = *piVar21;
    }
    lVar2 = *(long *)(piVar21 + 0xc);
    while (lVar2 != lStack_3c8) {
      piVar21 = *(int **)(piVar21 + 0xe);
      lVar2 = *(long *)(piVar21 + 0xc);
    }
LAB_0ecadb2f:
    *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
  }
  else {
    if (uStack_3b8._4_4_ == 1) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x1a;
        iVar17 = *piVar21;
      }
      goto LAB_0ecadb2f;
    }
    if (uStack_3b8._4_4_ == 0) {
      puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
      *puVar28 = *puVar28 | 0x90000;
    }
  }
  if ((char)uStack_2b0 == '\0') {
    func_0x0ed0be10(auStack_3d0,&uStack_2e8);
  }
  lVar2 = uStack_2e8;
  iVar17 = uStack_2b8._4_4_;
  if ((DAT_0f773190 == '\0') && (iVar18 = func_0x04108328(&DAT_0f773190), iVar18 != 0)) {
    func_0x0ed07a20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773110,0xf53dab8);
    func_0x0410844d(&DAT_0f773190);
  }
  plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f773110 + 4)) * 8);
  do {
    lVar25 = *plVar22;
    if (lVar25 == -1) goto LAB_0ecadbd1;
    plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773110 + 4));
  if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecadbd1:
    puVar19 = &DAT_0f773110;
  }
  else {
    puVar19 = (undefined *)plVar22[2];
  }
  piVar4 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
  for (piVar21 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
      (piVar21 != piVar4 && (*piVar21 != iVar17)); piVar21 = piVar21 + 0xe) {
  }
  if ((piVar21 == piVar4) &&
     (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0120436a),
     cVar16 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
  FUN_05d9c620(piVar21 + 2,&uStack_2bc,&uStack_2bc,auStack_3d0);
  uStack_368 = uStack_2e8;
  uStack_360 = uStack_2e0;
  uStack_358 = uStack_2d8;
  uStack_354 = uStack_2d4;
  uStack_350 = uStack_2d0;
  uStack_34c = uStack_2cc;
  uStack_348 = uStack_2c8;
  uStack_344 = uStack_2c4;
  uStack_340 = uStack_2c0;
  uStack_33c = uStack_2bc;
  uStack_338 = (undefined4)uStack_2b8;
  iStack_334 = uStack_2b8._4_4_;
  uStack_330 = uStack_2b0;
  FUN_048b0bc0(&puStack_2a8);
  func_0x0ed0b6e0(&puStack_2a8,&UNK_012a079c,8);
  uVar26 = (ulong)auStack_280 >> 1 & 0x7f;
  if (((ulong)auStack_280 & 1) != 0) {
    uVar26 = uStack_278;
    puVar23 = puStack_270;
  }
  if (uVar26 == 0) {
    uStack_33c = 0x811c9dc5;
  }
  else {
    uVar20 = (ulong)((uint)uVar26 & 3);
    if (uVar26 < 4) {
      uStack_33c = 0x811c9dc5;
      uVar27 = 0;
    }
    else {
      uStack_33c = 0x811c9dc5;
      uVar27 = 0;
      do {
        uStack_33c = ((int)*(char *)((long)puVar23 + uVar27 + 3) ^
                     ((int)*(char *)((long)puVar23 + uVar27 + 2) ^
                     ((int)*(char *)((long)puVar23 + uVar27 + 1) ^
                     ((int)*(char *)((long)puVar23 + uVar27) ^ uStack_33c) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while ((uVar26 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar20 != 0) {
      uVar26 = 0;
      do {
        uStack_33c = ((int)*(char *)((long)puVar23 + uVar26 + uVar27) ^ uStack_33c) * 0x1000193;
        uVar26 = uVar26 + 1;
      } while (uVar20 != uVar26);
    }
  }
  uStack_340 = 2;
  if ((DAT_0f7731b0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7731b0), iVar17 != 0)) {
    func_0x0ed07b30();
    func_0x0410844d(&DAT_0f7731b0);
  }
  auStack_3d0[0] = uStack_33c;
  lStack_3c8 = 0;
  uStack_3c0 = 3;
  uStack_3b8 = 1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0ed0bcf0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0ed07960;
  puStack_390 = &UNK_0ed0c0f0;
  puStack_388 = &UNK_0ed0c100;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(&uStack_360,auStack_3d0);
  plVar22 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar22);
    }
  }
  uStack_148 = uStack_350;
  uStack_144 = uStack_34c;
  uStack_140 = uStack_348;
  uStack_13c = uStack_344;
  lStack_158 = uStack_360;
  uStack_150 = CONCAT44(uStack_354,uStack_358);
  func_0x0ed0ba80(auStack_3d0,&lStack_158,&puStack_2a8);
  if (uStack_3b8._4_4_ == 2) {
    piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
    iVar17 = *piVar21;
    while (iVar17 != (int)uStack_3b8) {
      piVar21 = piVar21 + 0x16;
      iVar17 = *piVar21;
    }
    lVar2 = *(long *)(piVar21 + 0xc);
    while (lVar2 != lStack_3c8) {
      piVar21 = *(int **)(piVar21 + 0xe);
      lVar2 = *(long *)(piVar21 + 0xc);
    }
LAB_0ecadf4f:
    *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 9;
  }
  else {
    if (uStack_3b8._4_4_ == 1) {
      piVar21 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
      iVar17 = *piVar21;
      while (iVar17 != (int)uStack_3b8) {
        piVar21 = piVar21 + 0x1a;
        iVar17 = *piVar21;
      }
      goto LAB_0ecadf4f;
    }
    if (uStack_3b8._4_4_ == 0) {
      puVar28 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
      *puVar28 = *puVar28 | 0x90000;
    }
  }
  if ((char)uStack_330 == '\0') {
    func_0x0ed0be10(auStack_3d0,&uStack_368);
  }
  iVar17 = iStack_334;
  lVar2 = uStack_368;
  if ((DAT_0f773190 == '\0') && (iVar18 = func_0x04108328(&DAT_0f773190), iVar18 != 0)) {
    func_0x0ed07a20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773110,0xf53dab8);
    func_0x0410844d(&DAT_0f773190);
  }
  plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f773110 + 4)) * 8);
  do {
    lVar25 = *plVar22;
    if (lVar25 == -1) goto LAB_0ecadfe1;
    plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f773110 + 4));
  if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_0ecadfe1:
    puVar19 = &DAT_0f773110;
  }
  else {
    puVar19 = (undefined *)plVar22[2];
  }
  piVar4 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
  for (piVar21 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
      (piVar21 != piVar4 && (*piVar21 != iVar17)); piVar21 = piVar21 + 0xe) {
  }
  if ((piVar21 == piVar4) &&
     (cVar16 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0120436a),
     cVar16 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
  FUN_05d9c620(piVar21 + 2,&uStack_33c,&uStack_33c,auStack_3d0);
  FUN_048b0bc0(&puStack_2a8);
LAB_0ecae093:
  func_0x0d91a8f0(param_1);
  if ((DAT_0f773300 == '\0') && (iVar17 = func_0x04108328(&DAT_0f773300), iVar17 != 0)) {
    func_0x0ed0fdd0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773280,0xf53dab8);
    func_0x0410844d(&DAT_0f773300);
  }
  plVar22 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773280 + 4)) * 8);
  do {
    lVar2 = *plVar22;
    if (lVar2 == -1) goto LAB_0ecae0f0;
    plVar22 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f773280 + 4));
  if (plVar22 == *(long **)(param_1 + 0x38)) {
LAB_0ecae0f0:
    puVar19 = &DAT_0f773280;
    iVar17 = iRam000000000f7732e0;
  }
  else {
    puVar19 = (undefined *)plVar22[2];
    iVar17 = *(int *)(puVar19 + 0x60);
  }
  if ((iVar17 == -0x2b3da790) && (lVar2 = *(long *)(puVar19 + 0x68), lVar2 != 0)) {
    bVar29 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar25 = lVar2 + 9;
    if (bVar29) {
      lVar25 = *(long *)(lVar2 + 0x18);
    }
    uVar26 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar29) {
      uVar26 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ed10310(&uStack_328,param_1,lVar25,uVar26);
    uVar10 = uStack_308;
    uVar11 = uStack_304;
    uVar8 = uStack_2c8;
    uVar9 = uStack_2c4;
  }
  else {
    func_0x0ed10310(&uStack_328,param_1,&UNK_014aa994,0x1b);
    uVar10 = uStack_308;
    uVar11 = uStack_304;
    uVar8 = uStack_2c8;
    uVar9 = uStack_2c4;
  }
  uStack_2c4 = uVar11;
  uStack_2c8 = uVar10;
  if ((char)uStack_2f8 == '\0') {
    uStack_2b8 = CONCAT44(uStack_2f4,uStack_2f8);
    uStack_2e8 = CONCAT44(uStack_324,uStack_328);
    uStack_2e0 = CONCAT44(uStack_31c,uStack_320);
    uStack_2d8 = uStack_318;
    uStack_2d4 = uStack_314;
    uStack_2d0 = uStack_310;
    uStack_2cc = uStack_30c;
    uStack_2c0 = uStack_300;
    uStack_2bc = uStack_2fc;
    func_0x0ed10e70(&puStack_2a8,&uStack_2e8,&UNK_0138e8dd,5);
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar22 = (long)&UNK_0f0f58e0;
    if (plStack_290 != (long *)0x0) {
      lVar2 = *plStack_290;
      plStack_290 = plVar22;
      (**(code **)(lVar2 + 8))();
      plVar22 = plStack_290;
    }
    plStack_290 = plVar22;
    auStack_3d0[0] = (uint)uStack_298;
    lStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_07d31460;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &SUB_07d31180;
    puStack_390 = &UNK_0ed11420;
    puStack_388 = &UNK_0ed11580;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(uStack_2a0,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    func_0x0ed11120(&puStack_2a8);
    uStack_338 = CONCAT31(uStack_338._1_3_,(undefined1)uStack_2b8);
    uStack_348 = uStack_2c8;
    uStack_344 = uStack_2c4;
    uStack_340 = uStack_2c0;
    uStack_33c = uStack_2bc;
    uStack_358 = uStack_2d8;
    uStack_354 = uStack_2d4;
    uStack_350 = uStack_2d0;
    uStack_34c = uStack_2cc;
    uStack_368 = uStack_2e8;
    uStack_360 = uStack_2e0;
    FUN_048b0bc0(&plStack_290);
    func_0x0ed10e70(&puStack_2a8,&uStack_368,&UNK_0147bf3d,9);
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar22 = (long)&UNK_0f4e1618;
    if (plStack_290 != (long *)0x0) {
      lVar2 = *plStack_290;
      plStack_290 = plVar22;
      (**(code **)(lVar2 + 8))();
      plVar22 = plStack_290;
    }
    plStack_290 = plVar22;
    auStack_3d0[0] = (uint)uStack_298;
    lStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0ed0bcf0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0ed07960;
    puStack_390 = &UNK_0ed11750;
    puStack_388 = &UNK_0ed118b0;
    uStack_380 = 0;
    uStack_378 = 0;
    plStack_370 = (long *)0x0;
    func_0x048b05a0(uStack_2a0,auStack_3d0);
    plVar22 = plStack_370;
    if (plStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_370 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_370 + 0x10))(plStack_370);
        func_0x0412c2d0(plVar22);
      }
    }
    func_0x0ed11120(&puStack_2a8);
    FUN_048b0bc0(&plStack_290);
    uVar8 = uStack_2c8;
    uVar9 = uStack_2c4;
  }
  uStack_2c4 = uVar9;
  uStack_2c8 = uVar8;
  uStack_68 = 0x887a13d600000003;
  if ((DAT_0f772ee0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f772ee0), iVar17 != 0)) {
    func_0x0ecfe680();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772e60,0xf53dab8);
    func_0x0410844d(&DAT_0f772ee0);
  }
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4e1848;
  uStack_2a0 = 0;
  puStack_2a8 = puVar23;
  puVar24 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar24 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_0145b745;
  uStack_298 = 0x29;
  plStack_290 = (long *)0x21;
  *(undefined8 *)(puVar24 + 4) = _DAT_0145b73d;
  *(undefined8 *)(puVar24 + 6) = uVar5;
  uVar10 = _UNK_0145b739;
  uVar9 = _UNK_0145b735;
  uVar8 = _UNK_0145b731;
  *puVar24 = _DAT_0145b72d;
  puVar24[1] = uVar8;
  puVar24[2] = uVar9;
  puVar24[3] = uVar10;
  *(undefined2 *)(puVar24 + 8) = 0x72;
  puStack_288 = puVar24;
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_0145b745;
  auStack_280 = (undefined1  [8])0x29;
  uStack_278 = 0x21;
  puVar23[2] = _DAT_0145b73d;
  puVar23[3] = uVar5;
  uVar5 = CONCAT44(_UNK_0145b739,_UNK_0145b735);
  *puVar23 = CONCAT44(_UNK_0145b731,_DAT_0145b72d);
  puVar23[1] = uVar5;
  *(undefined2 *)(puVar23 + 4) = 0x72;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_238 = 0x3f600000;
  puStack_270 = puVar23;
  func_0x048afb10(&uStack_268,8);
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_200 = 0xff00;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  if ((DAT_0f772e48 == '\0') && (iVar17 = func_0x04108328(&DAT_0f772e48), iVar17 != 0)) {
    func_0x0ecfe540();
    func_0x0410844d(&DAT_0f772e48);
  }
  auStack_3d0[0] = uStack_68._4_4_;
  lStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 2;
  uStack_3b0 = 1;
  puStack_3a8 = &UNK_0ed11f50;
  puStack_3a0 = &UNK_07d98660;
  puStack_398 = &UNK_0ed0fd10;
  puStack_390 = &UNK_0ed11f70;
  puStack_388 = &UNK_0ed12640;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(&uStack_88,auStack_3d0);
  plVar22 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar22);
    }
  }
  uStack_318 = uStack_78;
  uStack_314 = uStack_74;
  uStack_310 = uStack_70;
  uStack_30c = uStack_6c;
  uStack_328 = uStack_88;
  uStack_324 = uStack_84;
  uStack_320 = uStack_80;
  uStack_31c = uStack_7c;
  func_0x0ed0ea40(auStack_3d0,&uStack_328,&puStack_2a8);
  FUN_048b0bc0(&puStack_2a8);
  func_0x0ed12cf0(param_1);
  func_0x0ed15260(&puStack_2a8,auStack_90,&UNK_013db9ad);
  func_0x0ed12cf0(param_1);
  func_0x0ed15260(&puStack_2a8,auStack_90,&UNK_011b4848);
  return;
}



/* ---- referenced strings ----
 * 0x145b72d  minecraft:experimental_color_attr
 * 0x145b73d  mental_color_attr
 * 0x14aa973  minecraft:experimental_bool_attr
 * 0x14aa983  mental_bool_attr
 */
