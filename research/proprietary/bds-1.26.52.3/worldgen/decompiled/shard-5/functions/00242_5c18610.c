/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d18610 (ELF vaddr 0x5c18610)
 * Label: caller-of-callee
 * Body:  [[05d18610, 05d1be50] [05d1be60, 05d254fc]]
 * Ghidra: FUN_05d18610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d18610(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  byte bVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  undefined *puVar21;
  bool bVar22;
  uint auStack_4e0 [2];
  long *plStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined *puStack_4b8;
  undefined1 *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined4 uStack_490;
  undefined8 uStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined8 uStack_450;
  ulong uStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  undefined4 uStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined2 uStack_3d0;
  undefined2 uStack_3ce;
  uint uStack_3cc;
  uint uStack_3c8;
  undefined1 uStack_3c4;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  int iStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  undefined4 uStack_380;
  uint uStack_37c;
  undefined4 uStack_378;
  int iStack_374;
  uint uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  int iStack_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  undefined8 uStack_340;
  undefined4 uStack_338;
  uint uStack_334;
  uint uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined4 uStack_2f8;
  int iStack_2f4;
  uint uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  int iStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined4 uStack_278;
  uint uStack_274;
  uint uStack_270;
  long lStack_268;
  long *plStack_260;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined4 uStack_238;
  uint uStack_234;
  uint uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  uint uStack_170;
  long lStack_168;
  long *plStack_160;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  uint uStack_130;
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
  undefined4 uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 uStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 uStack_38;
  
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  lStack_70 = param_1 + 0x18;
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d18690;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d18690:
    puVar10 = &DAT_0f55b5c8;
    if (iRam000000000f55b628 != -0x2b3da790) goto LAB_05d186e8;
LAB_05d186bb:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d186e8;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar16 + 9);
    if (bVar22) {
      puVar10 = *(undefined **)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d186bb;
LAB_05d186e8:
    puVar10 = &UNK_0142cf9b;
    uVar18 = 0x1f;
  }
  func_0x05e33dd0(&uStack_368,param_1,puVar10,uVar18);
  uStack_334 = uStack_334 & 0xffffff00;
  uStack_330 = uStack_330 & 0xffffff00;
  if ((char)uStack_338 != '\0') goto LAB_05d1b394;
  func_0x05e34540(&uStack_478,&UNK_0145fb7c,0xb);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar16 = (long)&uStack_450 + 1;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uVar17 = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uVar17 = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uVar17 = 0x811c9dc5;
      uVar19 = 0;
      do {
        uVar17 = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                 ((int)*(char *)(lVar15 + 2 + uVar19) ^
                 ((int)*(char *)(lVar15 + 1 + uVar19) ^
                 ((int)*(char *)(lVar15 + uVar19) ^ uVar17) * 0x1000193) * 0x1000193) * 0x1000193) *
                 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uVar17 = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uVar17) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_340 = CONCAT44(uVar17,2);
  if (DAT_0f55b5b0 == '\0') goto LAB_05d24d99;
LAB_05d18835:
  auStack_4e0[0] = uStack_340._4_4_;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e34b90;
  puStack_498 = &UNK_05e34ba0;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&iStack_360,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_350;
  iStack_394 = iStack_34c;
  iStack_390 = iStack_348;
  iStack_38c = iStack_344;
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d189ca:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d189ca;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_330 == '\0') {
    func_0x05e34bf0(auStack_4e0,&uStack_368);
  }
  uVar17 = uStack_334;
  lVar15 = CONCAT44(uStack_364,uStack_368);
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d18a61;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d18a61:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar3 && (*puVar20 != uVar17)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(puVar20 + 2,(long)&uStack_340 + 4,(long)&uStack_340 + 4,auStack_4e0);
  uStack_128 = uStack_368;
  uStack_124 = uStack_364;
  iStack_120 = iStack_360;
  iStack_11c = iStack_35c;
  iStack_118 = iStack_358;
  iStack_114 = iStack_354;
  iStack_110 = iStack_350;
  iStack_10c = iStack_34c;
  iStack_108 = iStack_348;
  iStack_104 = iStack_344;
  uStack_100 = (undefined4)uStack_340;
  uStack_fc = uStack_340._4_4_;
  uStack_f8 = uStack_338;
  uStack_f4 = uStack_334;
  uStack_f0 = uStack_330;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_014135d1,9);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_fc = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_fc = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_fc = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_fc = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                    ((int)*(char *)(lVar15 + 2 + uVar19) ^
                    ((int)*(char *)(lVar15 + 1 + uVar19) ^
                    ((int)*(char *)(lVar15 + uVar19) ^ uStack_fc) * 0x1000193) * 0x1000193) *
                    0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_fc = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_fc) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_100 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_fc;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e34db0;
  puStack_498 = &UNK_05e34dc0;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&iStack_120,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_110;
  iStack_394 = iStack_10c;
  iStack_390 = iStack_108;
  iStack_38c = iStack_104;
  uStack_3a8 = (long *)CONCAT44(iStack_11c,iStack_120);
  uStack_3a0 = (long *)CONCAT44(iStack_114,iStack_118);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d18dda:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d18dda;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_f0 == '\0') {
    func_0x05e34bf0(auStack_4e0,&uStack_128);
  }
  uVar17 = uStack_f4;
  lVar15 = CONCAT44(uStack_124,uStack_128);
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d18e71;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d18e71:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar3 && (*puVar20 != uVar17)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(puVar20 + 2,&uStack_fc,&uStack_fc,auStack_4e0);
  uStack_1a8 = CONCAT44(uStack_124,uStack_128);
  uStack_1a0 = (long *)CONCAT44(iStack_11c,iStack_120);
  iStack_198 = iStack_118;
  iStack_194 = iStack_114;
  iStack_190 = iStack_110;
  iStack_18c = iStack_10c;
  iStack_188 = iStack_108;
  iStack_184 = iStack_104;
  uStack_180 = uStack_100;
  uStack_17c = uStack_fc;
  uStack_178 = uStack_f8;
  uStack_174 = uStack_f4;
  uStack_170 = uStack_f0;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_014ca0a2,6);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_17c = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_17c = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_17c = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_17c = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                     ((int)*(char *)(lVar15 + 2 + uVar19) ^
                     ((int)*(char *)(lVar15 + 1 + uVar19) ^
                     ((int)*(char *)(lVar15 + uVar19) ^ uStack_17c) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_17c = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_17c) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_180 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_17c;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e34e10;
  puStack_498 = &UNK_05e34e20;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&uStack_1a0,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_190;
  iStack_394 = iStack_18c;
  iStack_390 = iStack_188;
  iStack_38c = iStack_184;
  uStack_3a8 = uStack_1a0;
  uStack_3a0 = (long *)CONCAT44(iStack_194,iStack_198);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d191ea:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d191ea;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_170 == '\0') {
    func_0x05e34bf0(auStack_4e0,&uStack_1a8);
  }
  uVar17 = uStack_174;
  lVar15 = uStack_1a8;
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d19281;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d19281:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar3 && (*puVar20 != uVar17)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(puVar20 + 2,&uStack_17c,&uStack_17c,auStack_4e0);
  lStack_168 = uStack_1a8;
  plStack_160 = uStack_1a0;
  iStack_158 = iStack_198;
  iStack_154 = iStack_194;
  iStack_150 = iStack_190;
  iStack_14c = iStack_18c;
  iStack_148 = iStack_188;
  iStack_144 = iStack_184;
  uStack_140 = uStack_180;
  uStack_13c = uStack_17c;
  uStack_138 = uStack_178;
  uStack_134 = uStack_174;
  uStack_130 = uStack_170;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_014135db,5);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_13c = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_13c = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_13c = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_13c = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                     ((int)*(char *)(lVar15 + 2 + uVar19) ^
                     ((int)*(char *)(lVar15 + 1 + uVar19) ^
                     ((int)*(char *)(lVar15 + uVar19) ^ uStack_13c) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_13c = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_13c) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_140 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_13c;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e34e70;
  puStack_498 = &UNK_05e34e80;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&plStack_160,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_150;
  iStack_394 = iStack_14c;
  iStack_390 = iStack_148;
  iStack_38c = iStack_144;
  uStack_3a8 = plStack_160;
  uStack_3a0 = (long *)CONCAT44(iStack_154,iStack_158);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d195fa:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d195fa;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_130 == '\0') {
    func_0x05e34bf0(auStack_4e0,&lStack_168);
  }
  uVar17 = uStack_134;
  lVar15 = lStack_168;
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d19691;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d19691:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar3 && (*puVar20 != uVar17)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(puVar20 + 2,&uStack_13c,&uStack_13c,auStack_4e0);
  uStack_228 = lStack_168;
  uStack_220 = plStack_160;
  iStack_218 = iStack_158;
  iStack_214 = iStack_154;
  iStack_210 = iStack_150;
  iStack_20c = iStack_14c;
  iStack_208 = iStack_148;
  iStack_204 = iStack_144;
  uStack_200 = uStack_140;
  uStack_1fc = uStack_13c;
  uStack_1f8 = uStack_138;
  uStack_1f4 = uStack_134;
  uStack_1f0 = uStack_130;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_01479a75,6);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_1fc = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_1fc = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_1fc = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_1fc = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                     ((int)*(char *)(lVar15 + 2 + uVar19) ^
                     ((int)*(char *)(lVar15 + 1 + uVar19) ^
                     ((int)*(char *)(lVar15 + uVar19) ^ uStack_1fc) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_1fc = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_1fc) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_200 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_1fc;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e34ed0;
  puStack_498 = &UNK_05e34ee0;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&uStack_220,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_210;
  iStack_394 = iStack_20c;
  iStack_390 = iStack_208;
  iStack_38c = iStack_204;
  uStack_3a8 = uStack_220;
  uStack_3a0 = (long *)CONCAT44(iStack_214,iStack_218);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d19a0a:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d19a0a;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_1f0 == '\0') {
    func_0x05e34bf0(auStack_4e0,&uStack_228);
  }
  uVar17 = uStack_1f4;
  lVar15 = uStack_228;
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d19aa1;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d19aa1:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar3 && (*puVar20 != uVar17)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(puVar20 + 2,&uStack_1fc,&uStack_1fc,auStack_4e0);
  lStack_1e8 = uStack_228;
  plStack_1e0 = uStack_220;
  iStack_1d8 = iStack_218;
  iStack_1d4 = iStack_214;
  iStack_1d0 = iStack_210;
  iStack_1cc = iStack_20c;
  iStack_1c8 = iStack_208;
  iStack_1c4 = iStack_204;
  uStack_1c0 = uStack_200;
  uStack_1bc = uStack_1fc;
  uStack_1b8 = uStack_1f8;
  uStack_1b4 = uStack_1f4;
  uStack_1b0 = uStack_1f0;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_013fa2e3,4);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_1bc = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_1bc = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_1bc = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_1bc = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                     ((int)*(char *)(lVar15 + 2 + uVar19) ^
                     ((int)*(char *)(lVar15 + 1 + uVar19) ^
                     ((int)*(char *)(lVar15 + uVar19) ^ uStack_1bc) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_1bc = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_1bc) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_1c0 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_1bc;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e34f30;
  puStack_498 = &UNK_05e34f40;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&plStack_1e0,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_1d0;
  iStack_394 = iStack_1cc;
  iStack_390 = iStack_1c8;
  iStack_38c = iStack_1c4;
  uStack_3a8 = plStack_1e0;
  uStack_3a0 = (long *)CONCAT44(iStack_1d4,iStack_1d8);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d19e1a:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d19e1a;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_1b0 == '\0') {
    func_0x05e34bf0(auStack_4e0,&lStack_1e8);
  }
  uVar17 = uStack_1b4;
  lVar15 = lStack_1e8;
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d19eb1;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d19eb1:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar3 && (*puVar20 != uVar17)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(puVar20 + 2,&uStack_1bc,&uStack_1bc,auStack_4e0);
  uStack_2a8 = lStack_1e8;
  uStack_2a0 = plStack_1e0;
  iStack_298 = iStack_1d8;
  iStack_294 = iStack_1d4;
  iStack_290 = iStack_1d0;
  iStack_28c = iStack_1cc;
  iStack_288 = iStack_1c8;
  iStack_284 = iStack_1c4;
  uStack_280 = uStack_1c0;
  uStack_27c = uStack_1bc;
  uStack_278 = uStack_1b8;
  uStack_274 = uStack_1b4;
  uStack_270 = uStack_1b0;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_013410c5,0xd);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_27c = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_27c = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_27c = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_27c = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                     ((int)*(char *)(lVar15 + 2 + uVar19) ^
                     ((int)*(char *)(lVar15 + 1 + uVar19) ^
                     ((int)*(char *)(lVar15 + uVar19) ^ uStack_27c) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_27c = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_27c) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_280 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_27c;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e34f90;
  puStack_498 = &UNK_05e34fa0;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&uStack_2a0,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_290;
  iStack_394 = iStack_28c;
  iStack_390 = iStack_288;
  iStack_38c = iStack_284;
  uStack_3a8 = uStack_2a0;
  uStack_3a0 = (long *)CONCAT44(iStack_294,iStack_298);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d1a22a:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d1a22a;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_270 == '\0') {
    func_0x05e34bf0(auStack_4e0,&uStack_2a8);
  }
  uVar17 = uStack_274;
  lVar15 = uStack_2a8;
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d1a2c1;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d1a2c1:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar3 && (*puVar20 != uVar17)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(puVar20 + 2,&uStack_27c,&uStack_27c,auStack_4e0);
  lStack_268 = uStack_2a8;
  plStack_260 = uStack_2a0;
  iStack_258 = iStack_298;
  iStack_254 = iStack_294;
  iStack_250 = iStack_290;
  iStack_24c = iStack_28c;
  iStack_248 = iStack_288;
  iStack_244 = iStack_284;
  uStack_240 = uStack_280;
  uStack_23c = uStack_27c;
  uStack_238 = uStack_278;
  uStack_234 = uStack_274;
  uStack_230 = uStack_270;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_014135e1,0x19);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_23c = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_23c = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_23c = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_23c = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                     ((int)*(char *)(lVar15 + 2 + uVar19) ^
                     ((int)*(char *)(lVar15 + 1 + uVar19) ^
                     ((int)*(char *)(lVar15 + uVar19) ^ uStack_23c) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_23c = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_23c) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_240 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_23c;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e34ff0;
  puStack_498 = &UNK_05e35000;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&plStack_260,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_250;
  iStack_394 = iStack_24c;
  iStack_390 = iStack_248;
  iStack_38c = iStack_244;
  uStack_3a8 = plStack_260;
  uStack_3a0 = (long *)CONCAT44(iStack_254,iStack_258);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d1a63a:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d1a63a;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_230 == '\0') {
    func_0x05e34bf0(auStack_4e0,&lStack_268);
  }
  uVar17 = uStack_234;
  lVar15 = lStack_268;
  if ((DAT_0f55b648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b648), iVar9 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d1a6d1;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d1a6d1:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar3 && (*puVar20 != uVar17)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(puVar20 + 2,&uStack_23c,&uStack_23c,auStack_4e0);
  uStack_2e8 = lStack_268;
  plStack_2e0 = plStack_260;
  iStack_2d8 = iStack_258;
  iStack_2d4 = iStack_254;
  iStack_2d0 = iStack_250;
  iStack_2cc = iStack_24c;
  iStack_2c8 = iStack_248;
  iStack_2c4 = iStack_244;
  uStack_2c0 = uStack_240;
  uStack_2bc = uStack_23c;
  uStack_2b8 = CONCAT44(uStack_234,uStack_238);
  uStack_2b0 = uStack_230;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_014aed4f,4);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_2bc = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_2bc = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_2bc = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_2bc = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                     ((int)*(char *)(lVar15 + 2 + uVar19) ^
                     ((int)*(char *)(lVar15 + 1 + uVar19) ^
                     ((int)*(char *)(lVar15 + uVar19) ^ uStack_2bc) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_2bc = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_2bc) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_2c0 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_2bc;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e35050;
  puStack_498 = &UNK_05e35060;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&plStack_2e0,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_2d0;
  iStack_394 = iStack_2cc;
  iStack_390 = iStack_2c8;
  iStack_38c = iStack_2c4;
  uStack_3a8 = plStack_2e0;
  uStack_3a0 = (long *)CONCAT44(iStack_2d4,iStack_2d8);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d1aa4a:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d1aa4a;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_2b0 == '\0') {
    func_0x05e34bf0(auStack_4e0,&uStack_2e8);
  }
  lVar15 = uStack_2e8;
  iVar9 = uStack_2b8._4_4_;
  if ((DAT_0f55b648 == '\0') && (iVar8 = func_0x04108328(&DAT_0f55b648), iVar8 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d1aae1;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d1aae1:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  piVar4 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
      (piVar12 != piVar4 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
  }
  if ((piVar12 == piVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(piVar12 + 2,&uStack_2bc,&uStack_2bc,auStack_4e0);
  uStack_328 = uStack_2e8;
  uStack_320 = plStack_2e0;
  iStack_318 = iStack_2d8;
  iStack_314 = iStack_2d4;
  iStack_310 = iStack_2d0;
  iStack_30c = iStack_2cc;
  iStack_308 = iStack_2c8;
  iStack_304 = iStack_2c4;
  uStack_300 = uStack_2c0;
  uStack_2fc = uStack_2bc;
  uStack_2f8 = (undefined4)uStack_2b8;
  iStack_2f4 = uStack_2b8._4_4_;
  uStack_2f0 = uStack_2b0;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_013410d3,0xb);
  uVar18 = uStack_450 >> 1 & 0x7f;
  lVar15 = lVar16;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar15 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_2fc = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_2fc = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_2fc = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_2fc = ((int)*(char *)(lVar15 + 3 + uVar19) ^
                     ((int)*(char *)(lVar15 + 2 + uVar19) ^
                     ((int)*(char *)(lVar15 + 1 + uVar19) ^
                     ((int)*(char *)(lVar15 + uVar19) ^ uStack_2fc) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_2fc = ((int)*(char *)(lVar15 + uVar19 + uVar18) ^ uStack_2fc) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_300 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_2fc;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e350b0;
  puStack_498 = &UNK_05e350c0;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&uStack_320,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_398 = iStack_310;
  iStack_394 = iStack_30c;
  iStack_390 = iStack_308;
  iStack_38c = iStack_304;
  uStack_3a8 = uStack_320;
  uStack_3a0 = (long *)CONCAT44(iStack_314,iStack_318);
  func_0x05e34920(auStack_4e0,&uStack_3a8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar15 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar15 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar15 = *(long *)(piVar12 + 0xc);
    }
LAB_05d1ae5a:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d1ae5a;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)((long)plStack_4d0 + 0x18) = *(uint *)((long)plStack_4d0 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_2f0 == '\0') {
    func_0x05e34bf0(auStack_4e0,&uStack_328);
  }
  iVar9 = iStack_2f4;
  lVar15 = uStack_328;
  if ((DAT_0f55b648 == '\0') && (iVar8 = func_0x04108328(&DAT_0f55b648), iVar8 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_05d1aef1;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_05d1aef1:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  piVar4 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
      (piVar12 != piVar4 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
  }
  if ((piVar12 == piVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(piVar12 + 2,&uStack_2fc,&uStack_2fc,auStack_4e0);
  uStack_3a8 = (long *)uStack_328;
  uStack_3a0 = uStack_320;
  iStack_398 = iStack_318;
  iStack_394 = iStack_314;
  iStack_390 = iStack_310;
  iStack_38c = iStack_30c;
  iStack_388 = iStack_308;
  iStack_384 = iStack_304;
  uStack_380 = uStack_300;
  uStack_37c = uStack_2fc;
  uStack_378 = uStack_2f8;
  iStack_374 = iStack_2f4;
  uStack_370 = uStack_2f0;
  func_0x048b0bc0(&uStack_478);
  func_0x05e34540(&uStack_478,&UNK_011b9536,4);
  uVar18 = uStack_450 >> 1 & 0x7f;
  if ((uStack_450 & 1) != 0) {
    uVar18 = uStack_448;
    lVar16 = lStack_440;
  }
  if (uVar18 == 0) {
    uStack_37c = 0x811c9dc5;
  }
  else {
    uVar11 = (ulong)((uint)uVar18 & 3);
    if (uVar18 < 4) {
      uStack_37c = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_37c = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_37c = ((int)*(char *)(lVar16 + 3 + uVar19) ^
                     ((int)*(char *)(lVar16 + 2 + uVar19) ^
                     ((int)*(char *)(lVar16 + 1 + uVar19) ^
                     ((int)*(char *)(lVar16 + uVar19) ^ uStack_37c) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        uStack_37c = ((int)*(char *)(lVar16 + uVar19 + uVar18) ^ uStack_37c) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
  }
  uStack_380 = 2;
  if ((DAT_0f55b5b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b5b0), iVar9 != 0)) {
    func_0x05df31c0();
    FUN_0410844d(&DAT_0f55b5b0);
  }
  auStack_4e0[0] = uStack_37c;
  plStack_4d8 = (long *)0x0;
  plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
  uStack_4c8 = 1;
  uStack_4c0 = 0;
  puStack_4b8 = &UNK_05df3810;
  puStack_4b0 = &SUB_048b06d0;
  puStack_4a8 = &UNK_05df3240;
  puStack_4a0 = &UNK_05e35110;
  puStack_498 = &UNK_05e35120;
  uStack_490 = 0;
  uStack_488 = 0;
  plStack_480 = (long *)0x0;
  func_0x048b05a0(&uStack_3a0,auStack_4e0);
  plVar13 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar13);
    }
  }
  iStack_d8 = iStack_390;
  iStack_d4 = iStack_38c;
  iStack_d0 = iStack_388;
  iStack_cc = iStack_384;
  uStack_e8 = (undefined4)uStack_3a0;
  uStack_e4 = uStack_3a0._4_4_;
  iStack_e0 = iStack_398;
  iStack_dc = iStack_394;
  func_0x05e34920(auStack_4e0,&uStack_e8,&uStack_478);
  if (uStack_4c8._4_4_ == 2) {
    piVar12 = *(int **)(plStack_4d0[0xf] + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_4c8) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    plVar13 = *(long **)(piVar12 + 0xc);
    while (plVar13 != plStack_4d8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      plVar13 = *(long **)(piVar12 + 0xc);
    }
LAB_05d1b25a:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
  }
  else {
    if (uStack_4c8._4_4_ == 1) {
      piVar12 = *(int **)(plStack_4d0[0xf] + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d1b25a;
    }
    if (uStack_4c8._4_4_ == 0) {
      *(uint *)(plStack_4d0 + 3) = *(uint *)(plStack_4d0 + 3) | 0x90000;
    }
  }
  if ((char)uStack_370 == '\0') {
    func_0x05e34bf0(auStack_4e0,&uStack_3a8);
  }
  iVar9 = iStack_374;
  lVar16 = (long)uStack_3a8;
  if ((DAT_0f55b648 == '\0') && (iVar8 = func_0x04108328(&DAT_0f55b648), iVar8 != 0)) {
    func_0x05df3300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b5c8,0xf53dab8);
    FUN_0410844d(&DAT_0f55b648);
  }
  plVar13 = (long *)(*(long *)(lVar16 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f55b5c8 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_05d1b2f0;
    plVar13 = (long *)(*(long *)(lVar16 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f55b5c8 + 4));
  if (plVar13 == *(long **)(lVar16 + 0x38)) {
LAB_05d1b2f0:
    puVar10 = &DAT_0f55b5c8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  piVar4 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (piVar12 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
      (piVar12 != piVar4 && (*piVar12 != iVar9)); piVar12 = piVar12 + 0xe) {
  }
  if ((piVar12 == piVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f2538),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_4e0[0] = auStack_4e0[0] & 0xffffff00;
  func_0x05d9c620(piVar12 + 2,&uStack_37c,&uStack_37c,auStack_4e0);
  func_0x048b0bc0(&uStack_478);
LAB_05d1b394:
  if ((DAT_0f55b6d0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b6d0), iVar9 != 0)) {
    func_0x05df39f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b650,0xf53dab8);
    FUN_0410844d(&DAT_0f55b6d0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55b650 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d1b3f0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55b650 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d1b3f0:
    puVar10 = &DAT_0f55b650;
    if (iRam000000000f55b6b0 != -0x2b3da790) goto LAB_05d1b45e;
LAB_05d1b41b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d1b45e;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05df3f50(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d1b41b;
LAB_05d1b45e:
    func_0x05df3f50(&uStack_368,param_1,&UNK_0135cce3,0x12);
  }
  if ((char)uStack_338 == '\0') {
    func_0x05df4ab0(&uStack_478,&uStack_368,&UNK_0135ccba,7);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05df5060;
    puStack_498 = &UNK_05df51c0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df4d60(&uStack_478);
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(char)uStack_338);
    iStack_308 = iStack_348;
    iStack_304 = iStack_344;
    uStack_300 = (undefined4)uStack_340;
    uStack_2fc = uStack_340._4_4_;
    iStack_318 = iStack_358;
    iStack_314 = iStack_354;
    iStack_310 = iStack_350;
    iStack_30c = iStack_34c;
    uStack_328 = CONCAT44(uStack_364,uStack_368);
    uStack_320 = (long *)CONCAT44(iStack_35c,iStack_360);
    func_0x048b0bc0(&uStack_460);
    func_0x05df4ab0(&uStack_478,&uStack_328,&UNK_0132617b,9);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05df5390;
    puStack_498 = &UNK_05df5500;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df4d60(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05df4ab0(&uStack_478,&uStack_3a8,&UNK_0123d912,0xd);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05df56e0;
    puStack_498 = &UNK_05df5840;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df4d60(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55b560 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b560), iVar9 != 0)) {
    func_0x05def310();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b4e0,0xf53dab8);
    FUN_0410844d(&DAT_0f55b560);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55b4e0 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d1b8f0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55b4e0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d1b8f0:
    puVar10 = &DAT_0f55b4e0;
    if (iRam000000000f55b540 != -0x2b3da790) goto LAB_05d1b95e;
LAB_05d1b91b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d1b95e;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05def6f0(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d1b91b;
LAB_05d1b95e:
    func_0x05def6f0(&uStack_368,param_1,&UNK_0142cf88,0x12);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55b580 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b580), iVar9 != 0)) {
      func_0x05def420();
      FUN_0410844d(&DAT_0f55b580);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05df38d0;
    puStack_498 = &UNK_05df38e0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    uStack_3a8 = (long *)CONCAT44(iStack_35c,iStack_360);
    uStack_3a0 = (long *)CONCAT44(iStack_354,iStack_358);
    if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    auStack_4e0[0] = _DAT_0f550a0c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    puVar10 = puStack_470;
    puVar14 = uStack_478;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_4d8 = plVar13 + 3;
    uStack_478 = (undefined8 *)0x0;
    puStack_470 = (undefined *)0x0;
    plVar13[3] = (long)puVar14;
    plVar13[4] = (long)puVar10;
    plVar13[7] = lStack_458;
    plVar13[5] = (long)puStack_468;
    plVar13[6] = (long)uStack_460;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    lStack_458 = 0;
    plVar13[10] = lStack_440;
    plVar13[8] = uStack_450;
    plVar13[9] = uStack_448;
    uStack_450 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    plVar13[0xb] = lStack_438;
    plVar13[0xc] = lStack_430;
    plVar13[0xd] = lStack_428;
    lStack_438 = 0;
    lStack_430 = 0;
    lStack_428 = 0;
    plVar13[0xe] = lStack_420;
    plVar13[0xf] = lStack_418;
    plVar13[0x10] = lStack_410;
    lStack_420 = 0;
    lStack_418 = 0;
    lStack_410 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_408;
    plVar13[0x12] = lStack_400;
    plVar13[0x13] = lStack_3f8;
    plVar13[0x14] = lStack_3f0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    lStack_3f0 = 0;
    plVar13[0x17] = lStack_3d8;
    *(undefined4 *)(plVar13 + 0x15) = (undefined4)uStack_3e8;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_3e8._4_4_;
    *(undefined4 *)(plVar13 + 0x16) = (undefined4)uStack_3e0;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_3e0._4_4_;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_3c4,CONCAT43(uStack_3c8,uStack_3cc._1_3_));
    plVar13[0x18] = CONCAT44(uStack_3cc,CONCAT22(uStack_3ce,uStack_3d0));
    uStack_328 = 0;
    uStack_320 = (long *)0x0;
    plStack_4d0 = plVar13;
    func_0x048afd20(&uStack_3a8,auStack_4e0);
    plVar13 = plStack_4d0;
    if (plStack_4d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4d0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_320;
    if (uStack_320 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_320 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_320 + 0x10))(uStack_320);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar16 = CONCAT44(iStack_394,iStack_398);
    if (iStack_38c == 2) {
      piVar12 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != iStack_390) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      for (; *(long **)(piVar12 + 0xc) != uStack_3a0; piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_05d1be6a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (iStack_38c == 1) {
        piVar12 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != iStack_390) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d1be6a;
      }
      if (iStack_38c == 0) {
        *(byte *)(lVar16 + 0x1a) = *(byte *)(lVar16 + 0x1a) | 9;
      }
    }
    func_0x048b0bc0(&uStack_478);
  }
  if ((DAT_0f55b788 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b788), iVar9 != 0)) {
    func_0x05df5ae0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b708,0xf53dab8);
    FUN_0410844d(&DAT_0f55b788);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55b708 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d1bee0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55b708 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d1bee0:
    puVar10 = &DAT_0f55b708;
    if (iRam000000000f55b768 != -0x2b3da790) goto LAB_05d1bf4e;
LAB_05d1bf0b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d1bf4e;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05df6430(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d1bf0b;
LAB_05d1bf4e:
    func_0x05df6430(&uStack_368,param_1,&UNK_01495dd2,0x19);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55b7a8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55b7a8), iVar9 != 0)) {
      func_0x05df5bf0();
      FUN_0410844d(&DAT_0f55b7a8);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05df7220;
    puStack_498 = &UNK_05df7230;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05df6fb0(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d1c23a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_4c8) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d1c23a;
      }
      if (uStack_4c8._4_4_ == 0) {
        *(uint *)((long)plStack_4d0 + 0x18U) = *(uint *)((long)plStack_4d0 + 0x18U) | 0x90000;
      }
    }
    uStack_68 = uStack_368;
    uStack_64 = uStack_364;
    iStack_60 = iStack_360;
    iStack_5c = iStack_35c;
    iStack_58 = iStack_358;
    iStack_54 = iStack_354;
    iStack_50 = iStack_350;
    iStack_4c = iStack_34c;
    iStack_48 = iStack_348;
    iStack_44 = iStack_344;
    uStack_40 = (undefined4)uStack_340;
    uStack_3c = uStack_340._4_4_;
    uStack_38 = (char)uStack_338;
    func_0x048b0bc0(&uStack_478);
    func_0x05df7280(&uStack_478,&uStack_68,&UNK_01492c33,4);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05df7600;
    puStack_498 = &UNK_05df7770;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_78 = uStack_38;
    iStack_88 = iStack_48;
    iStack_84 = iStack_44;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    iStack_98 = iStack_58;
    iStack_94 = iStack_54;
    iStack_90 = iStack_50;
    iStack_8c = iStack_4c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    iStack_a0 = iStack_60;
    iStack_9c = iStack_5c;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_a8,&UNK_0119d6bf,8);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b358;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df8490;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df8170;
    puStack_4a0 = &UNK_05df84a0;
    puStack_498 = &UNK_05df8600;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_b8 = uStack_78;
    iStack_c8 = iStack_88;
    iStack_c4 = iStack_84;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    iStack_d8 = iStack_98;
    iStack_d4 = iStack_94;
    iStack_d0 = iStack_90;
    iStack_cc = iStack_8c;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    iStack_e0 = iStack_a0;
    iStack_dc = iStack_9c;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_e8,&UNK_0130ae84,6);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b3d0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df95c0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df92a0;
    puStack_4a0 = &UNK_05df95d0;
    puStack_498 = &UNK_05df9730;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_f8 = CONCAT31(uStack_f8._1_3_,uStack_b8);
    iStack_108 = iStack_c8;
    iStack_104 = iStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    iStack_118 = iStack_d8;
    iStack_114 = iStack_d4;
    iStack_110 = iStack_d0;
    iStack_10c = iStack_cc;
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    iStack_120 = iStack_e0;
    iStack_11c = iStack_dc;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_128,&UNK_013ad0b6,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05df9ba0;
    puStack_498 = &UNK_05df9d10;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_f8);
    iStack_188 = iStack_108;
    iStack_184 = iStack_104;
    uStack_180 = uStack_100;
    uStack_17c = uStack_fc;
    iStack_198 = iStack_118;
    iStack_194 = iStack_114;
    iStack_190 = iStack_110;
    iStack_18c = iStack_10c;
    uStack_1a8 = CONCAT44(uStack_124,uStack_128);
    uStack_1a0 = (long *)CONCAT44(iStack_11c,iStack_120);
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_1a8,&UNK_0145fb5d,6);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05df9ef0;
    puStack_498 = &UNK_05dfa060;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_138 = CONCAT31(uStack_138._1_3_,(undefined1)uStack_178);
    iStack_148 = iStack_188;
    iStack_144 = iStack_184;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    iStack_158 = iStack_198;
    iStack_154 = iStack_194;
    iStack_150 = iStack_190;
    iStack_14c = iStack_18c;
    lStack_168 = uStack_1a8;
    plStack_160 = uStack_1a0;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&lStack_168,&UNK_013fa2c2,0xc);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05dfaf10;
    puStack_498 = &UNK_05dfb080;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(undefined1)uStack_138);
    iStack_208 = iStack_148;
    iStack_204 = iStack_144;
    uStack_200 = uStack_140;
    uStack_1fc = uStack_13c;
    iStack_218 = iStack_158;
    iStack_214 = iStack_154;
    iStack_210 = iStack_150;
    iStack_20c = iStack_14c;
    uStack_228 = lStack_168;
    uStack_220 = plStack_160;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_228,&UNK_011b9510,9);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05dfb4f0;
    puStack_498 = &UNK_05dfb660;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_1b8 = CONCAT31(uStack_1b8._1_3_,(undefined1)uStack_1f8);
    iStack_1c8 = iStack_208;
    iStack_1c4 = iStack_204;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    iStack_1d8 = iStack_218;
    iStack_1d4 = iStack_214;
    iStack_1d0 = iStack_210;
    iStack_1cc = iStack_20c;
    lStack_1e8 = uStack_228;
    plStack_1e0 = uStack_220;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&lStack_1e8,&UNK_011d4bc6,0xb);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05dfb840;
    puStack_498 = &UNK_05dfb9a0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_278 = CONCAT31(uStack_278._1_3_,(undefined1)uStack_1b8);
    iStack_288 = iStack_1c8;
    iStack_284 = iStack_1c4;
    uStack_280 = uStack_1c0;
    uStack_27c = uStack_1bc;
    iStack_298 = iStack_1d8;
    iStack_294 = iStack_1d4;
    iStack_290 = iStack_1d0;
    iStack_28c = iStack_1cc;
    uStack_2a8 = lStack_1e8;
    uStack_2a0 = plStack_1e0;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_2a8,&UNK_013ad0d5,0xe);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05dfbb80;
    puStack_498 = &UNK_05dfbce0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_238 = CONCAT31(uStack_238._1_3_,(undefined1)uStack_278);
    iStack_248 = iStack_288;
    iStack_244 = iStack_284;
    uStack_240 = uStack_280;
    uStack_23c = uStack_27c;
    iStack_258 = iStack_298;
    iStack_254 = iStack_294;
    iStack_250 = iStack_290;
    iStack_24c = iStack_28c;
    lStack_268 = uStack_2a8;
    plStack_260 = uStack_2a0;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&lStack_268,&UNK_01208b40,10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b4c0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfff00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dffbe0;
    puStack_4a0 = &UNK_05dfff10;
    puStack_498 = &UNK_05e00080;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(undefined1)uStack_238);
    iStack_2c8 = iStack_248;
    iStack_2c4 = iStack_244;
    uStack_2c0 = uStack_240;
    uStack_2bc = uStack_23c;
    iStack_2d8 = iStack_258;
    iStack_2d4 = iStack_254;
    iStack_2d0 = iStack_250;
    iStack_2cc = iStack_24c;
    uStack_2e8 = lStack_268;
    plStack_2e0 = plStack_260;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_2e8,&UNK_012a4d80,0x11);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05e00500;
    puStack_498 = &UNK_05e00660;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(undefined1)uStack_2b8);
    iStack_308 = iStack_2c8;
    iStack_304 = iStack_2c4;
    uStack_300 = uStack_2c0;
    uStack_2fc = uStack_2bc;
    iStack_318 = iStack_2d8;
    iStack_314 = iStack_2d4;
    iStack_310 = iStack_2d0;
    iStack_30c = iStack_2cc;
    uStack_328 = uStack_2e8;
    uStack_320 = plStack_2e0;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_328,&UNK_011d4bd2,0x12);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f011ba0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e01390;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e01070;
    puStack_4a0 = &UNK_05e013a0;
    puStack_498 = &UNK_05e01510;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05df7280(&uStack_478,&uStack_3a8,&UNK_013c5b54,0x11);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05e01980;
    puStack_498 = &UNK_05e01ae0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05df7530(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55ba68 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55ba68), iVar9 != 0)) {
    func_0x05e01d80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55b9e8,0xf53dab8);
    FUN_0410844d(&DAT_0f55ba68);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55b9e8 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d1d500;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55b9e8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d1d500:
    puVar10 = &DAT_0f55b9e8;
    if (iRam000000000f55ba48 != -0x2b3da790) goto LAB_05d1d56e;
LAB_05d1d52b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d1d56e;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05e02530(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d1d52b;
LAB_05d1d56e:
    func_0x05e02530(&uStack_368,param_1,&UNK_0145fb64,0x17);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55ba88 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55ba88), iVar9 != 0)) {
      func_0x05e01e90();
      FUN_0410844d(&DAT_0f55ba88);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05e03320;
    puStack_498 = &UNK_05e03330;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05e030b0(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d1d85a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_4c8) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d1d85a;
      }
      if (uStack_4c8._4_4_ == 0) {
        *(uint *)((long)plStack_4d0 + 0x18U) = *(uint *)((long)plStack_4d0 + 0x18U) | 0x90000;
      }
    }
    uStack_1a8 = CONCAT44(uStack_364,uStack_368);
    uStack_1a0 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_198 = iStack_358;
    iStack_194 = iStack_354;
    iStack_190 = iStack_350;
    iStack_18c = iStack_34c;
    iStack_188 = iStack_348;
    iStack_184 = iStack_344;
    uStack_180 = (undefined4)uStack_340;
    uStack_17c = uStack_340._4_4_;
    uStack_178 = CONCAT31(uStack_178._1_3_,(char)uStack_338);
    func_0x048b0bc0(&uStack_478);
    func_0x05e03380(&uStack_478,&uStack_1a8,&UNK_0119d6bf,8);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b358;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df8490;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df8170;
    puStack_4a0 = &UNK_05e03700;
    puStack_498 = &UNK_05e03860;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    uStack_138 = CONCAT31(uStack_138._1_3_,(undefined1)uStack_178);
    iStack_148 = iStack_188;
    iStack_144 = iStack_184;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    iStack_158 = iStack_198;
    iStack_154 = iStack_194;
    iStack_150 = iStack_190;
    iStack_14c = iStack_18c;
    lStack_168 = uStack_1a8;
    plStack_160 = uStack_1a0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e03380(&uStack_478,&lStack_168,&UNK_0130ae84,6);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b3d0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df95c0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df92a0;
    puStack_4a0 = &UNK_05e03a30;
    puStack_498 = &UNK_05e03b90;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(undefined1)uStack_138);
    iStack_208 = iStack_148;
    iStack_204 = iStack_144;
    uStack_200 = uStack_140;
    uStack_1fc = uStack_13c;
    iStack_218 = iStack_158;
    iStack_214 = iStack_154;
    iStack_210 = iStack_150;
    iStack_20c = iStack_14c;
    uStack_228 = lStack_168;
    uStack_220 = plStack_160;
    func_0x048b0bc0(&uStack_460);
    func_0x05e03380(&uStack_478,&uStack_228,&UNK_0145fb5d,6);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05e03d70;
    puStack_498 = &UNK_05e03ee0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    uStack_1b8 = CONCAT31(uStack_1b8._1_3_,(undefined1)uStack_1f8);
    iStack_1c8 = iStack_208;
    iStack_1c4 = iStack_204;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    iStack_1d8 = iStack_218;
    iStack_1d4 = iStack_214;
    iStack_1d0 = iStack_210;
    iStack_1cc = iStack_20c;
    lStack_1e8 = uStack_228;
    plStack_1e0 = uStack_220;
    func_0x048b0bc0(&uStack_460);
    func_0x05e03380(&uStack_478,&lStack_1e8,&UNK_013ad0b6,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05e040c0;
    puStack_498 = &UNK_05e04230;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    uStack_278 = CONCAT31(uStack_278._1_3_,(undefined1)uStack_1b8);
    iStack_288 = iStack_1c8;
    iStack_284 = iStack_1c4;
    uStack_280 = uStack_1c0;
    uStack_27c = uStack_1bc;
    iStack_298 = iStack_1d8;
    iStack_294 = iStack_1d4;
    iStack_290 = iStack_1d0;
    iStack_28c = iStack_1cc;
    uStack_2a8 = lStack_1e8;
    uStack_2a0 = plStack_1e0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e03380(&uStack_478,&uStack_2a8,&UNK_012d7b44,0xe);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05e04410;
    puStack_498 = &UNK_05e04570;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    uStack_238 = CONCAT31(uStack_238._1_3_,(undefined1)uStack_278);
    iStack_248 = iStack_288;
    iStack_244 = iStack_284;
    uStack_240 = uStack_280;
    uStack_23c = uStack_27c;
    iStack_258 = iStack_298;
    iStack_254 = iStack_294;
    iStack_250 = iStack_290;
    iStack_24c = iStack_28c;
    lStack_268 = uStack_2a8;
    plStack_260 = uStack_2a0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e03380(&uStack_478,&lStack_268,&UNK_013fa2c2,0xc);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e04750;
    puStack_498 = &UNK_05e048c0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(undefined1)uStack_238);
    iStack_2c8 = iStack_248;
    iStack_2c4 = iStack_244;
    uStack_2c0 = uStack_240;
    uStack_2bc = uStack_23c;
    iStack_2d8 = iStack_258;
    iStack_2d4 = iStack_254;
    iStack_2d0 = iStack_250;
    iStack_2cc = iStack_24c;
    uStack_2e8 = lStack_268;
    plStack_2e0 = plStack_260;
    func_0x048b0bc0(&uStack_460);
    func_0x05e03380(&uStack_478,&uStack_2e8,&UNK_011b9510,9);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e04aa0;
    puStack_498 = &UNK_05e04c10;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(undefined1)uStack_2b8);
    iStack_308 = iStack_2c8;
    iStack_304 = iStack_2c4;
    uStack_300 = uStack_2c0;
    uStack_2fc = uStack_2bc;
    iStack_318 = iStack_2d8;
    iStack_314 = iStack_2d4;
    iStack_310 = iStack_2d0;
    iStack_30c = iStack_2cc;
    uStack_328 = uStack_2e8;
    uStack_320 = plStack_2e0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e03380(&uStack_478,&uStack_328,&UNK_0119d6c8,0x15);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e04df0;
    puStack_498 = &UNK_05e04f60;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05e03380(&uStack_478,&uStack_3a8,&UNK_01272a5a,0x12);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e05140;
    puStack_498 = &UNK_05e052b0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e03630(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55bb20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55bb20), iVar9 != 0)) {
    func_0x05e05550();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55baa0,0xf53dab8);
    FUN_0410844d(&DAT_0f55bb20);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55baa0 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d1e580;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55baa0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d1e580:
    puVar10 = &DAT_0f55baa0;
    if (iRam000000000f55bb00 != -0x2b3da790) goto LAB_05d1e5ee;
LAB_05d1e5ab:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d1e5ee;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    FUN_05e05c80(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d1e5ab;
LAB_05d1e5ee:
    FUN_05e05c80(&uStack_368,param_1,&UNK_01495dec,0x14);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55bb40 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55bb40), iVar9 != 0)) {
      func_0x05e05660();
      FUN_0410844d(&DAT_0f55bb40);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05e06a50;
    puStack_498 = &UNK_05e06a60;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05e067e0(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d1e8da:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_4c8) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d1e8da;
      }
      if (uStack_4c8._4_4_ == 0) {
        *(uint *)((long)plStack_4d0 + 0x18U) = *(uint *)((long)plStack_4d0 + 0x18U) | 0x90000;
      }
    }
    uStack_328 = CONCAT44(uStack_364,uStack_368);
    uStack_320 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_318 = iStack_358;
    iStack_314 = iStack_354;
    iStack_310 = iStack_350;
    iStack_30c = iStack_34c;
    iStack_308 = iStack_348;
    iStack_304 = iStack_344;
    uStack_300 = (undefined4)uStack_340;
    uStack_2fc = uStack_340._4_4_;
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(char)uStack_338);
    func_0x048b0bc0(&uStack_478);
    func_0x05e06ab0(&uStack_478,&uStack_328,&UNK_013c5b2f,9);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05e06e30;
    puStack_498 = &UNK_05e06f90;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e06d60(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05e06ab0(&uStack_478,&uStack_3a8,&UNK_0128bc36,8);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0123c0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e08030;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e07cf0;
    puStack_4a0 = &UNK_05e08040;
    puStack_498 = &UNK_05e081f0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e06d60(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55bbd8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55bbd8), iVar9 != 0)) {
    func_0x05e08800();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55bb58,0xf53dab8);
    FUN_0410844d(&DAT_0f55bbd8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55bb58 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d1ec30;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55bb58 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d1ec30:
    puVar10 = &DAT_0f55bb58;
    if (iRam000000000f55bbb8 != -0x2b3da790) goto LAB_05d1ec9e;
LAB_05d1ec5b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d1ec9e;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05e08cf0(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d1ec5b;
LAB_05d1ec9e:
    func_0x05e08cf0(&uStack_368,param_1,&UNK_01326185,0x13);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55bbf8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55bbf8), iVar9 != 0)) {
      func_0x05e08910();
      FUN_0410844d(&DAT_0f55bbf8);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05e09b00;
    puStack_498 = &UNK_05e09b10;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05e09890(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d1ef8a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_4c8) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d1ef8a;
      }
      if (uStack_4c8._4_4_ == 0) {
        *(uint *)((long)plStack_4d0 + 0x18U) = *(uint *)((long)plStack_4d0 + 0x18U) | 0x90000;
      }
    }
    uStack_228 = CONCAT44(uStack_364,uStack_368);
    uStack_220 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_218 = iStack_358;
    iStack_214 = iStack_354;
    iStack_210 = iStack_350;
    iStack_20c = iStack_34c;
    iStack_208 = iStack_348;
    iStack_204 = iStack_344;
    uStack_200 = (undefined4)uStack_340;
    uStack_1fc = uStack_340._4_4_;
    uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(char)uStack_338);
    func_0x048b0bc0(&uStack_478);
    func_0x05e09b60(&uStack_478,&uStack_228,&UNK_0128bc3f,9,0);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b4c0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfff00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dffbe0;
    puStack_4a0 = &UNK_05e09ef0;
    puStack_498 = &UNK_05e0a060;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e09e20(&uStack_478);
    uStack_1b8 = CONCAT31(uStack_1b8._1_3_,(undefined1)uStack_1f8);
    iStack_1c8 = iStack_208;
    iStack_1c4 = iStack_204;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    iStack_1d8 = iStack_218;
    iStack_1d4 = iStack_214;
    iStack_1d0 = iStack_210;
    iStack_1cc = iStack_20c;
    lStack_1e8 = uStack_228;
    plStack_1e0 = uStack_220;
    func_0x048b0bc0(&uStack_460);
    func_0x05e09b60(&uStack_478,&lStack_1e8,&UNK_01326166,0x14,0);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05e0a230;
    puStack_498 = &UNK_05e0a3a0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e09e20(&uStack_478);
    uStack_278 = CONCAT31(uStack_278._1_3_,(undefined1)uStack_1b8);
    iStack_288 = iStack_1c8;
    iStack_284 = iStack_1c4;
    uStack_280 = uStack_1c0;
    uStack_27c = uStack_1bc;
    iStack_298 = iStack_1d8;
    iStack_294 = iStack_1d4;
    iStack_290 = iStack_1d0;
    iStack_28c = iStack_1cc;
    uStack_2a8 = lStack_1e8;
    uStack_2a0 = plStack_1e0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e092e0(&uStack_478,uStack_2a8 + 0x18);
    if (uStack_460._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)puStack_468 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_460) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      uVar18 = *(ulong *)(piVar12 + 0xc);
      while ((undefined *)uVar18 != puStack_470) {
        piVar12 = *(int **)(piVar12 + 0xe);
        uVar18 = *(ulong *)(piVar12 + 0xc);
      }
LAB_05d1f38a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_460._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)puStack_468 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_460) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d1f38a;
      }
      if (uStack_460._4_4_ == 0) {
        *(uint *)((long)puStack_468 + 0x18) = *(uint *)((long)puStack_468 + 0x18) | 0x40000;
      }
    }
    func_0x05e09b60(&uStack_478,&uStack_2a8,&UNK_011b951a,0xf,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef46ef8;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_04906f70;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &SUB_04906c50;
    puStack_4a0 = &UNK_05e0a580;
    puStack_498 = &UNK_05e0a6e0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e09e20(&uStack_478);
    uStack_238 = CONCAT31(uStack_238._1_3_,(undefined1)uStack_278);
    iStack_248 = iStack_288;
    iStack_244 = iStack_284;
    uStack_240 = uStack_280;
    uStack_23c = uStack_27c;
    iStack_258 = iStack_298;
    iStack_254 = iStack_294;
    iStack_250 = iStack_290;
    iStack_24c = iStack_28c;
    lStack_268 = uStack_2a8;
    plStack_260 = uStack_2a0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e09b60(&uStack_478,&lStack_268,&UNK_011ed67c,4,0);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f011ba0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e01390;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e01070;
    puStack_4a0 = &UNK_05e0a8c0;
    puStack_498 = &UNK_05e0aa30;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e09e20(&uStack_478);
    uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(undefined1)uStack_238);
    iStack_2c8 = iStack_248;
    iStack_2c4 = iStack_244;
    uStack_2c0 = uStack_240;
    uStack_2bc = uStack_23c;
    iStack_2d8 = iStack_258;
    iStack_2d4 = iStack_254;
    iStack_2d0 = iStack_250;
    iStack_2cc = iStack_24c;
    uStack_2e8 = lStack_268;
    plStack_2e0 = plStack_260;
    func_0x048b0bc0(&uStack_460);
    func_0x05e09b60(&uStack_478,&uStack_2e8,&UNK_012d7b53,10,0);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0122d0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de9430;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de9110;
    puStack_4a0 = &UNK_05e0ac10;
    puStack_498 = &UNK_05e0ad80;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e09e20(&uStack_478);
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(undefined1)uStack_2b8);
    iStack_308 = iStack_2c8;
    iStack_304 = iStack_2c4;
    uStack_300 = uStack_2c0;
    uStack_2fc = uStack_2bc;
    iStack_318 = iStack_2d8;
    iStack_314 = iStack_2d4;
    iStack_310 = iStack_2d0;
    iStack_30c = iStack_2cc;
    uStack_328 = uStack_2e8;
    uStack_320 = plStack_2e0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e09b60(&uStack_478,&uStack_328,&UNK_011b952a,0xb,0);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0122d0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de9430;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de9110;
    puStack_4a0 = &UNK_05e0af60;
    puStack_498 = &UNK_05e0b0d0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e09e20(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05e09b60(&uStack_478,&uStack_3a8,&UNK_01448490,9,0);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b6f8;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e0be00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e0bae0;
    puStack_4a0 = &UNK_05e0be10;
    puStack_498 = &UNK_05e0bf80;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e09e20(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55bd48 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55bd48), iVar9 != 0)) {
    func_0x05e0c4b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55bcc8,0xf53dab8);
    FUN_0410844d(&DAT_0f55bd48);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55bcc8 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d1faf0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55bcc8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d1faf0:
    puVar10 = &DAT_0f55bcc8;
    if (iRam000000000f55bd28 != -0x2b3da790) goto LAB_05d1fb5e;
LAB_05d1fb1b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d1fb5e;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05e0cd60(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d1fb1b;
LAB_05d1fb5e:
    func_0x05e0cd60(&uStack_368,param_1,&UNK_012230e3,0x14);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55bd68 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55bd68), iVar9 != 0)) {
      func_0x05e0c5c0();
      FUN_0410844d(&DAT_0f55bd68);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05e0db30;
    puStack_498 = &UNK_05e0db40;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05e0d8c0(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d1fe4a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_4c8) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d1fe4a;
      }
      if (uStack_4c8._4_4_ == 0) {
        *(uint *)((long)plStack_4d0 + 0x18U) = *(uint *)((long)plStack_4d0 + 0x18U) | 0x90000;
      }
    }
    uStack_328 = CONCAT44(uStack_364,uStack_368);
    uStack_320 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_318 = iStack_358;
    iStack_314 = iStack_354;
    iStack_310 = iStack_350;
    iStack_30c = iStack_34c;
    iStack_308 = iStack_348;
    iStack_304 = iStack_344;
    uStack_300 = (undefined4)uStack_340;
    uStack_2fc = uStack_340._4_4_;
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(char)uStack_338);
    func_0x048b0bc0(&uStack_478);
    func_0x05e0db90(&uStack_478,&uStack_328,&UNK_013fa2d8,10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b7e0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e11f50;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e11c30;
    puStack_4a0 = &UNK_05e11f60;
    puStack_498 = &UNK_05e120d0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e0de40(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05e0db90(&uStack_478,&uStack_3a8,&UNK_01495e01,0xd);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b858;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e15ee0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e15bc0;
    puStack_4a0 = &UNK_05e15fa0;
    puStack_498 = &UNK_05e16250;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e0de40(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55c140 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55c140), iVar9 != 0)) {
    func_0x05e16790();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c0c0,0xf53dab8);
    FUN_0410844d(&DAT_0f55c140);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55c0c0 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d201a0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55c0c0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d201a0:
    puVar10 = &DAT_0f55c0c0;
    if (iRam000000000f55c120 != -0x2b3da790) goto LAB_05d2020e;
LAB_05d201cb:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d2020e;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05e16ef0(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d201cb;
LAB_05d2020e:
    func_0x05e16ef0(&uStack_368,param_1,&UNK_01326199,0x12);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55c160 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55c160), iVar9 != 0)) {
      func_0x05e168a0();
      FUN_0410844d(&DAT_0f55c160);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05e17cd0;
    puStack_498 = &UNK_05e17ce0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05e17a60(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d204fa:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_4c8) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d204fa;
      }
      if (uStack_4c8._4_4_ == 0) {
        *(uint *)((long)plStack_4d0 + 0x18U) = *(uint *)((long)plStack_4d0 + 0x18U) | 0x90000;
      }
    }
    uStack_328 = CONCAT44(uStack_364,uStack_368);
    uStack_320 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_318 = iStack_358;
    iStack_314 = iStack_354;
    iStack_310 = iStack_350;
    iStack_30c = iStack_34c;
    iStack_308 = iStack_348;
    iStack_304 = iStack_344;
    uStack_300 = (undefined4)uStack_340;
    uStack_2fc = uStack_340._4_4_;
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(char)uStack_338);
    func_0x048b0bc0(&uStack_478);
    func_0x05e17d30(&uStack_478,&uStack_328,&UNK_013e01b4,10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0123c0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e08030;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e07cf0;
    puStack_4a0 = &UNK_05e180b0;
    puStack_498 = &UNK_05e18260;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e17fe0(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05e17d30(&uStack_478,&uStack_3a8,&UNK_01374375,5);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e18430;
    puStack_498 = &UNK_05e185a0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e17fe0(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55c1f8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55c1f8), iVar9 != 0)) {
    func_0x05e18840();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c178,0xf53dab8);
    FUN_0410844d(&DAT_0f55c1f8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55c178 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d20850;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55c178 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d20850:
    puVar10 = &DAT_0f55c178;
    if (iRam000000000f55c1d8 != -0x2b3da790) goto LAB_05d208be;
LAB_05d2087b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d208be;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05e19530(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d2087b;
LAB_05d208be:
    func_0x05e19530(&uStack_368,param_1,&UNK_01495e0f,0x1b);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55c218 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55c218), iVar9 != 0)) {
      func_0x05e18950();
      FUN_0410844d(&DAT_0f55c218);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05e1a360;
    puStack_498 = &UNK_05e1a370;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05e1a0f0(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d20baa:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_4c8) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d20baa;
      }
      if (uStack_4c8._4_4_ == 0) {
        *(uint *)((long)plStack_4d0 + 0x18U) = *(uint *)((long)plStack_4d0 + 0x18U) | 0x90000;
      }
    }
    uStack_a8 = uStack_368;
    uStack_a4 = uStack_364;
    iStack_a0 = iStack_360;
    iStack_9c = iStack_35c;
    iStack_98 = iStack_358;
    iStack_94 = iStack_354;
    iStack_90 = iStack_350;
    iStack_8c = iStack_34c;
    iStack_88 = iStack_348;
    iStack_84 = iStack_344;
    uStack_80 = (undefined4)uStack_340;
    uStack_7c = uStack_340._4_4_;
    uStack_78 = (char)uStack_338;
    func_0x048b0bc0(&uStack_478);
    func_0x05e1a3c0(&uStack_478,&uStack_a8,&UNK_013ad0c7,6);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00a858;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05ddb060;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05ddad40;
    puStack_4a0 = &UNK_05e1a740;
    puStack_498 = &UNK_05e1a9c0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_b8 = uStack_78;
    iStack_c8 = iStack_88;
    iStack_c4 = iStack_84;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    iStack_d8 = iStack_98;
    iStack_d4 = iStack_94;
    iStack_d0 = iStack_90;
    iStack_cc = iStack_8c;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    iStack_e0 = iStack_a0;
    iStack_dc = iStack_9c;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&uStack_e8,&UNK_013fa2c2,0xc);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e1ab90;
    puStack_498 = &UNK_05e1ad00;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_f8 = CONCAT31(uStack_f8._1_3_,uStack_b8);
    iStack_108 = iStack_c8;
    iStack_104 = iStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    iStack_118 = iStack_d8;
    iStack_114 = iStack_d4;
    iStack_110 = iStack_d0;
    iStack_10c = iStack_cc;
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    iStack_120 = iStack_e0;
    iStack_11c = iStack_dc;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&uStack_128,&UNK_011b9510,9);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e1aee0;
    puStack_498 = &UNK_05e1b050;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_f8);
    iStack_188 = iStack_108;
    iStack_184 = iStack_104;
    uStack_180 = uStack_100;
    uStack_17c = uStack_fc;
    iStack_198 = iStack_118;
    iStack_194 = iStack_114;
    iStack_190 = iStack_110;
    iStack_18c = iStack_10c;
    uStack_1a8 = CONCAT44(uStack_124,uStack_128);
    uStack_1a0 = (long *)CONCAT44(iStack_11c,iStack_120);
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&uStack_1a8,&UNK_0119d6c8,0x15);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e1b230;
    puStack_498 = &UNK_05e1b3a0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_138 = CONCAT31(uStack_138._1_3_,(undefined1)uStack_178);
    iStack_148 = iStack_188;
    iStack_144 = iStack_184;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    iStack_158 = iStack_198;
    iStack_154 = iStack_194;
    iStack_150 = iStack_190;
    iStack_14c = iStack_18c;
    lStack_168 = uStack_1a8;
    plStack_160 = uStack_1a0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&lStack_168,&UNK_01272a5a,0x12);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b448;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dfaf00;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dfabc0;
    puStack_4a0 = &UNK_05e1b580;
    puStack_498 = &UNK_05e1b6f0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(undefined1)uStack_138);
    iStack_208 = iStack_148;
    iStack_204 = iStack_144;
    uStack_200 = uStack_140;
    uStack_1fc = uStack_13c;
    iStack_218 = iStack_158;
    iStack_214 = iStack_154;
    iStack_210 = iStack_150;
    iStack_20c = iStack_14c;
    uStack_228 = lStack_168;
    uStack_220 = plStack_160;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&uStack_228,&UNK_0144849a,0xb);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05e1b8d0;
    puStack_498 = &UNK_05e1ba30;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_1b8 = CONCAT31(uStack_1b8._1_3_,(undefined1)uStack_1f8);
    iStack_1c8 = iStack_208;
    iStack_1c4 = iStack_204;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    iStack_1d8 = iStack_218;
    iStack_1d4 = iStack_214;
    iStack_1d0 = iStack_210;
    iStack_1cc = iStack_20c;
    lStack_1e8 = uStack_228;
    plStack_1e0 = uStack_220;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&lStack_1e8,&UNK_0135ccce,0x14);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05e1bc10;
    puStack_498 = &UNK_05e1bd70;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_278 = CONCAT31(uStack_278._1_3_,(undefined1)uStack_1b8);
    iStack_288 = iStack_1c8;
    iStack_284 = iStack_1c4;
    uStack_280 = uStack_1c0;
    uStack_27c = uStack_1bc;
    iStack_298 = iStack_1d8;
    iStack_294 = iStack_1d4;
    iStack_290 = iStack_1d0;
    iStack_28c = iStack_1cc;
    uStack_2a8 = lStack_1e8;
    uStack_2a0 = plStack_1e0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&uStack_2a8,&UNK_0119d6bf,8);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b358;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df8490;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df8170;
    puStack_4a0 = &UNK_05e1bf50;
    puStack_498 = &UNK_05e1c0b0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_238 = CONCAT31(uStack_238._1_3_,(undefined1)uStack_278);
    iStack_248 = iStack_288;
    iStack_244 = iStack_284;
    uStack_240 = uStack_280;
    uStack_23c = uStack_27c;
    iStack_258 = iStack_298;
    iStack_254 = iStack_294;
    iStack_250 = iStack_290;
    iStack_24c = iStack_28c;
    lStack_268 = uStack_2a8;
    plStack_260 = uStack_2a0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&lStack_268,&UNK_0130ae84,6);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00b3d0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df95c0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df92a0;
    puStack_4a0 = &UNK_05e1c290;
    puStack_498 = &UNK_05e1c3f0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(undefined1)uStack_238);
    iStack_2c8 = iStack_248;
    iStack_2c4 = iStack_244;
    uStack_2c0 = uStack_240;
    uStack_2bc = uStack_23c;
    iStack_2d8 = iStack_258;
    iStack_2d4 = iStack_254;
    iStack_2d0 = iStack_250;
    iStack_2cc = iStack_24c;
    uStack_2e8 = lStack_268;
    plStack_2e0 = plStack_260;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&uStack_2e8,&UNK_0145fb5d,6);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05e1c5d0;
    puStack_498 = &UNK_05e1c750;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(undefined1)uStack_2b8);
    iStack_308 = iStack_2c8;
    iStack_304 = iStack_2c4;
    uStack_300 = uStack_2c0;
    uStack_2fc = uStack_2bc;
    iStack_318 = iStack_2d8;
    iStack_314 = iStack_2d4;
    iStack_310 = iStack_2d0;
    iStack_30c = iStack_2cc;
    uStack_328 = uStack_2e8;
    uStack_320 = plStack_2e0;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&uStack_328,&UNK_013ad0b6,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f012168;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05dc3f10;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05dc3bf0;
    puStack_4a0 = &UNK_05e1c930;
    puStack_498 = &UNK_05e1cab0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1a3c0(&uStack_478,&uStack_3a8,&UNK_014ca095,0xc);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0120f0;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05de4ce0;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05de49c0;
    puStack_4a0 = &UNK_05e1cc90;
    puStack_498 = &UNK_05e1cdf0;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1a670(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55c2b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55c2b0), iVar9 != 0)) {
    func_0x05e1d090();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c230,0xf53dab8);
    FUN_0410844d(&DAT_0f55c2b0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55c230 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d21d30;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55c230 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d21d30:
    puVar10 = &DAT_0f55c230;
    if (iRam000000000f55c290 != -0x2b3da790) goto LAB_05d21d9e;
LAB_05d21d5b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d21d9e;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05e1db10(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d21d5b;
LAB_05d21d9e:
    func_0x05e1db10(&uStack_368,param_1,&UNK_0119d6f8,0x27);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55c2d0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55c2d0), iVar9 != 0)) {
      func_0x05e1d1a0();
      FUN_0410844d(&DAT_0f55c2d0);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05e1e970;
    puStack_498 = &UNK_05e1e980;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05e1e700(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d2208a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_4c8) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d2208a;
      }
      if (uStack_4c8._4_4_ == 0) {
        *(uint *)((long)plStack_4d0 + 0x18U) = *(uint *)((long)plStack_4d0 + 0x18U) | 0x90000;
      }
    }
    uStack_328 = CONCAT44(uStack_364,uStack_368);
    uStack_320 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_318 = iStack_358;
    iStack_314 = iStack_354;
    iStack_310 = iStack_350;
    iStack_30c = iStack_34c;
    iStack_308 = iStack_348;
    iStack_304 = iStack_344;
    uStack_300 = (undefined4)uStack_340;
    uStack_2fc = uStack_340._4_4_;
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(char)uStack_338);
    func_0x048b0bc0(&uStack_478);
    func_0x05e1e100(&uStack_478,uStack_328 + 0x18);
    if (uStack_460._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)puStack_468 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_460) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      uVar18 = *(ulong *)(piVar12 + 0xc);
      while ((undefined *)uVar18 != puStack_470) {
        piVar12 = *(int **)(piVar12 + 0xe);
        uVar18 = *(ulong *)(piVar12 + 0xc);
      }
LAB_05d2219a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_460._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)puStack_468 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_460) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d2219a;
      }
      if (uStack_460._4_4_ == 0) {
        *(uint *)((long)puStack_468 + 0x18) = *(uint *)((long)puStack_468 + 0x18) | 0x40000;
      }
    }
    func_0x05e1e9d0(&uStack_478,&uStack_328,&UNK_0133ff7a);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00bb88;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e22310;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e21d40;
    puStack_4a0 = &UNK_05e223d0;
    puStack_498 = &UNK_05e22530;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1ec30(&uStack_478);
    uStack_378 = CONCAT31(uStack_378._1_3_,(undefined1)uStack_2f8);
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    iStack_398 = iStack_318;
    iStack_394 = iStack_314;
    iStack_390 = iStack_310;
    iStack_38c = iStack_30c;
    uStack_3a8 = (long *)uStack_328;
    uStack_3a0 = uStack_320;
    func_0x048b0bc0(&uStack_460);
    func_0x05e1e100(&uStack_478,(long)uStack_3a8 + 0x18);
    if (uStack_460._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)puStack_468 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_460) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      uVar18 = *(ulong *)(piVar12 + 0xc);
      while ((undefined *)uVar18 != puStack_470) {
        piVar12 = *(int **)(piVar12 + 0xe);
        uVar18 = *(ulong *)(piVar12 + 0xc);
      }
LAB_05d223da:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_460._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)puStack_468 + 0x78) + 0x48);
        iVar9 = *piVar12;
        while (iVar9 != (int)uStack_460) {
          piVar12 = piVar12 + 0x1a;
          iVar9 = *piVar12;
        }
        goto LAB_05d223da;
      }
      if (uStack_460._4_4_ == 0) {
        *(uint *)((long)puStack_468 + 0x18) = *(uint *)((long)puStack_468 + 0x18) | 0x40000;
      }
    }
    func_0x05e1e9d0(&uStack_478,&uStack_3a8,&UNK_013ad0c7);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f00bbf8;
    if (uStack_460 != (long *)0x0) {
      lVar16 = *uStack_460;
      uStack_460 = plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = uStack_460;
    }
    uStack_460 = plVar13;
    auStack_4e0[0] = (uint)puStack_468;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)((ulong)plStack_4d0 & 0xffffffff00000000);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05e27b70;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05e26050;
    puStack_4a0 = &UNK_05e27c30;
    puStack_498 = &UNK_05e27e80;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(puStack_470,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x05e1ec30(&uStack_478);
    func_0x048b0bc0(&uStack_460);
  }
  if ((DAT_0f55c4d8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55c4d8), iVar9 != 0)) {
    func_0x05e283c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55c458,0xf53dab8);
    FUN_0410844d(&DAT_0f55c4d8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55c458 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_05d22570;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f55c458 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_05d22570:
    puVar10 = &DAT_0f55c458;
    if (iRam000000000f55c4b8 != -0x2b3da790) goto LAB_05d225de;
LAB_05d2259b:
    lVar16 = *(long *)(puVar10 + 0x68);
    if (lVar16 == 0) goto LAB_05d225de;
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar15 = lVar16 + 9;
    if (bVar22) {
      lVar15 = *(long *)(lVar16 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x05e28bb0(&uStack_368,param_1,lVar15,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_05d2259b;
LAB_05d225de:
    func_0x05e28bb0(&uStack_368,param_1,&UNK_012d7b5e,0x12);
  }
  if ((char)uStack_338 == '\0') {
    uStack_340 = 0x5127f14d00000002;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_448 = 0;
    lStack_440 = 0;
    lStack_458 = 0;
    uStack_450 = 0;
    puStack_468 = (undefined *)0x0;
    uStack_460 = (long *)0x0;
    uStack_478 = (long *)0x0;
    puStack_470 = (undefined *)0x0;
    uStack_408 = 0x3f600000;
    FUN_048afb10(&lStack_438,8);
    uStack_3e0 = 0;
    lStack_3d8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    uStack_3d0 = 0xff00;
    uStack_3cc = uStack_3cc & 0xffffff00;
    uStack_3c8 = uStack_3c8 & 0xffffff00;
    uStack_3c4 = 0;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = &UNK_0f00b208;
    if (uStack_478 != (long *)0x0) {
      lVar16 = *uStack_478;
      uStack_478 = puVar14;
      (**(code **)(lVar16 + 8))();
      puVar14 = uStack_478;
    }
    uStack_478 = puVar14;
    if ((uStack_450 & 1) != 0) {
      func_0x0412a280(lStack_440,uStack_450 & 0xfffffffffffffffe);
    }
    uStack_450 = CONCAT26(uStack_450._6_2_,0x6570797408);
    if ((DAT_0f55c4f8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55c4f8), iVar9 != 0)) {
      func_0x05e284d0();
      FUN_0410844d(&DAT_0f55c4f8);
    }
    auStack_4e0[0] = uStack_340._4_4_;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)CONCAT44(plStack_4d0._4_4_,3);
    uStack_4c8 = 1;
    uStack_4c0 = 0;
    puStack_4b8 = &UNK_05df3810;
    puStack_4b0 = &SUB_048b06d0;
    puStack_4a8 = &UNK_05df3240;
    puStack_4a0 = &UNK_05e29980;
    puStack_498 = &UNK_05e29990;
    uStack_490 = 0;
    uStack_488 = 0;
    plStack_480 = (long *)0x0;
    func_0x048b05a0(&iStack_360,auStack_4e0);
    plVar13 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_480 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_398 = iStack_350;
    iStack_394 = iStack_34c;
    iStack_390 = iStack_348;
    iStack_38c = iStack_344;
    func_0x05e29710(auStack_4e0,&uStack_3a8,&uStack_478);
    if (uStack_4c8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_4c8) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar16 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar16 != plStack_4d8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar16 = *(long *)(piVar12 + 0xc);
      }
LAB_05d228ca:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_4c8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_4d0 + 0x78) + 0x48);
        iVar9 = *piVar12;
        
/* truncated by DecompileTargets.java */

