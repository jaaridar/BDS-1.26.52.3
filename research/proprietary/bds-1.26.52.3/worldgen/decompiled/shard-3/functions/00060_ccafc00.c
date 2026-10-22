/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcdafc00 (ELF vaddr 0xccafc00)
 * Label: caller-of-callee
 * Body:  [[0cdafc00, 0cdb27a9] [0cdb27b0, 0cdb3d56] [0cdb3d60, 0cdb4654]]
 * Ghidra: FUN_0cdafc00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cdafc00(long param_1)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  uint uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined *puStack_580;
  undefined1 *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined4 uStack_558;
  undefined8 uStack_550;
  long *plStack_548;
  undefined1 uStack_539;
  undefined *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 *puStack_518;
  undefined8 uStack_510;
  undefined *puStack_508;
  long lStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  long *plStack_4e8;
  long lStack_4e0;
  ulong uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined4 uStack_460;
  undefined2 uStack_45c;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  int iStack_440;
  int iStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  int iStack_430;
  uint uStack_42c;
  undefined8 uStack_428;
  uint uStack_420;
  uint uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  int iStack_3f8;
  int iStack_3f4;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  uint uStack_3e0;
  long *plStack_3d0;
  ulong uStack_3c8;
  long *plStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  int iStack_3a0;
  uint uStack_39c;
  undefined8 uStack_398;
  uint uStack_390;
  ulong uStack_388;
  long *plStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  int iStack_360;
  uint uStack_35c;
  undefined4 uStack_358;
  int iStack_354;
  uint uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  int iStack_320;
  uint uStack_31c;
  undefined4 uStack_318;
  int iStack_314;
  uint uStack_310;
  byte bStack_300;
  undefined4 uStack_2ff;
  undefined4 uStack_2fb;
  undefined4 uStack_2f7;
  undefined4 uStack_2f3;
  undefined2 uStack_2ef;
  undefined1 uStack_2ed;
  undefined4 uStack_2ec;
  ulong uStack_2e8;
  long *plStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int iStack_280;
  uint uStack_27c;
  undefined4 uStack_278;
  int iStack_274;
  uint uStack_270;
  ulong uStack_268;
  long *plStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  int iStack_240;
  uint uStack_23c;
  undefined4 uStack_238;
  int iStack_234;
  uint uStack_230;
  undefined4 uStack_21f;
  undefined1 uStack_21c;
  undefined3 uStack_21b;
  uint uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  undefined *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [8];
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  uint uStack_12c;
  undefined8 uStack_128;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  uint uStack_ac;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f7059b0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7059b0), iVar7 != 0)) {
    func_0x0cdffa70();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
    func_0x0410844d(&DAT_0f7059b0);
  }
  plStack_3d0 = (long *)(param_1 + 0x18);
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
  do {
    lVar15 = *plVar12;
    if (lVar15 == -1) goto LAB_0cdafc80;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f705930 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0cdafc80:
    puVar9 = &DAT_0f705930;
    if (iRam000000000f705990 != -0x2b3da790) goto LAB_0cdafcdb;
LAB_0cdafcab:
    lVar15 = *(long *)(puVar9 + 0x68);
    if (lVar15 == 0) goto LAB_0cdafcdb;
    bVar22 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar17 = lVar15 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar22) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar12[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0cdafcab;
LAB_0cdafcdb:
    lVar17 = 0;
    uVar10 = 0;
  }
  func_0x0cdffe30(&uStack_418,param_1,lVar17,uVar10);
  uVar16 = uStack_3e8;
  uStack_3e8._0_5_ = (uint5)(uint)uStack_3e8;
  uVar5 = uStack_3e8;
  uStack_3e0 = uStack_3e0 & 0xffffff00;
  uStack_3e8._0_1_ = (char)uVar16;
  bVar22 = (char)uStack_3e8 == '\0';
  uStack_3e8 = (undefined1 *)uVar5;
  if (bVar22) {
    func_0x0ce036b0(&puStack_538,&UNK_01268a45,0xc);
    puVar9 = (undefined *)((ulong)uStack_510 >> 1 & 0x7f);
    lVar15 = (long)&uStack_510 + 1;
    lVar17 = lVar15;
    if (((ulong)uStack_510 & 1) != 0) {
      puVar9 = puStack_508;
      lVar17 = lStack_500;
    }
    if (puVar9 == (undefined *)0x0) {
      uVar19 = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uVar19 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar19 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar19 = ((int)*(char *)(lVar17 + 3 + uVar21) ^
                   ((int)*(char *)(lVar17 + 2 + uVar21) ^
                   ((int)*(char *)(lVar17 + 1 + uVar21) ^
                   ((int)*(char *)(lVar17 + uVar21) ^ uVar19) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uVar19 = ((int)*(char *)(lVar17 + uVar21 + uVar20) ^ uVar19) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    uStack_3f0 = CONCAT44(uVar19,2);
    if ((DAT_0f705908 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705908), iVar7 != 0)) {
      func_0x0cdd5440();
      func_0x0410844d(&DAT_0f705908);
    }
    uStack_5a8 = uStack_3f0._4_4_;
    uStack_5a0 = 0;
    uStack_598 = 3;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce03dc0;
    puStack_560 = &UNK_0ce03dd0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(&uStack_410,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_448 = uStack_400;
    uStack_444 = uStack_3fc;
    iStack_440 = iStack_3f8;
    iStack_43c = iStack_3f4;
    func_0x0ce03a90(&uStack_5a8,&uStack_458,&puStack_538);
    if (uStack_590._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_590) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != uStack_5a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdaff5f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_590._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_590) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdaff5f;
      }
      if (uStack_590._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_594,uStack_598) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
    }
    if ((char)uStack_3e0 == '\0') {
      func_0x0ce03e20(&uStack_5a8,&uStack_418);
    }
    iVar7 = uStack_3e8._4_4_;
    lVar17 = CONCAT44(uStack_414,uStack_418);
    if ((DAT_0f7059b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7059b0), iVar8 != 0)) {
      func_0x0cdffa70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
      func_0x0410844d(&DAT_0f7059b0);
    }
    plVar12 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
    do {
      lVar18 = *plVar12;
      if (lVar18 == -1) goto LAB_0cdafff1;
      plVar12 = (long *)(*(long *)(lVar17 + 0x30) + lVar18 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f705930 + 4)
            );
    if (plVar12 == *(long **)(lVar17 + 0x38)) {
LAB_0cdafff1:
      puVar9 = &DAT_0f705930;
    }
    else {
      puVar9 = (undefined *)plVar12[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01282847),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_5a8 = uStack_5a8 & 0xffffff00;
    func_0x05d9c620(piVar11 + 2,(long)&uStack_3f0 + 4,(long)&uStack_3f0 + 4,&uStack_5a8);
    uStack_348 = CONCAT44(uStack_414,uStack_418);
    uStack_340 = uStack_410;
    uStack_33c = uStack_40c;
    uStack_338 = uStack_408;
    uStack_334 = uStack_404;
    uStack_330 = uStack_400;
    uStack_32c = uStack_3fc;
    uStack_328 = iStack_3f8;
    uStack_324 = iStack_3f4;
    iStack_320 = (int)uStack_3f0;
    uStack_31c = uStack_3f0._4_4_;
    uStack_318 = (uint)uStack_3e8;
    iStack_314 = uStack_3e8._4_4_;
    uStack_310 = uStack_3e0;
    func_0x048b0bc0(&puStack_538);
    func_0x0ce036b0(&puStack_538,&UNK_0148b2d8,5);
    puVar9 = (undefined *)((ulong)uStack_510 >> 1 & 0x7f);
    lVar17 = lVar15;
    if (((ulong)uStack_510 & 1) != 0) {
      puVar9 = puStack_508;
      lVar17 = lStack_500;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_31c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_31c = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_31c = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_31c = ((int)*(char *)(lVar17 + 3 + uVar21) ^
                       ((int)*(char *)(lVar17 + 2 + uVar21) ^
                       ((int)*(char *)(lVar17 + 1 + uVar21) ^
                       ((int)*(char *)(lVar17 + uVar21) ^ uStack_31c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uStack_31c = ((int)*(char *)(lVar17 + uVar21 + uVar20) ^ uStack_31c) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    iStack_320 = 2;
    if ((DAT_0f705908 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705908), iVar7 != 0)) {
      func_0x0cdd5440();
      func_0x0410844d(&DAT_0f705908);
    }
    uStack_5a8 = uStack_31c;
    uStack_5a0 = 0;
    uStack_598 = 3;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce03fe0;
    puStack_560 = &UNK_0ce03ff0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(&uStack_340,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_448 = uStack_330;
    uStack_444 = uStack_32c;
    iStack_440 = uStack_328;
    iStack_43c = uStack_324;
    uStack_458 = (long *)CONCAT44(uStack_33c,uStack_340);
    uStack_450 = (long *)CONCAT44(uStack_334,uStack_338);
    func_0x0ce03a90(&uStack_5a8,&uStack_458,&puStack_538);
    if (uStack_590._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_590) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != uStack_5a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb036f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_590._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_590) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb036f;
      }
      if (uStack_590._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_594,uStack_598) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
    }
    if ((char)uStack_310 == '\0') {
      func_0x0ce03e20(&uStack_5a8,&uStack_348);
    }
    iVar7 = iStack_314;
    uVar10 = uStack_348;
    if ((DAT_0f7059b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7059b0), iVar8 != 0)) {
      func_0x0cdffa70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
      func_0x0410844d(&DAT_0f7059b0);
    }
    plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_0cdb0401;
      plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f705930 + 4)
            );
    if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb0401:
      puVar9 = &DAT_0f705930;
    }
    else {
      puVar9 = (undefined *)plVar12[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01282847),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_5a8 = uStack_5a8 & 0xffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_31c,&uStack_31c,&uStack_5a8);
    uStack_2a0 = (long *)CONCAT44(uStack_33c,uStack_340);
    uStack_2a8 = uStack_348;
    uStack_298 = uStack_338;
    uStack_294 = uStack_334;
    uStack_290 = uStack_330;
    uStack_28c = uStack_32c;
    uStack_288 = uStack_328;
    uStack_284 = uStack_324;
    iStack_280 = iStack_320;
    uStack_27c = uStack_31c;
    uStack_278 = uStack_318;
    iStack_274 = iStack_314;
    uStack_270 = uStack_310;
    func_0x048b0bc0(&puStack_538);
    func_0x0ce036b0(&puStack_538,&UNK_01233db6,0xf);
    puVar9 = (undefined *)((ulong)uStack_510 >> 1 & 0x7f);
    lVar17 = lVar15;
    if (((ulong)uStack_510 & 1) != 0) {
      puVar9 = puStack_508;
      lVar17 = lStack_500;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_27c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_27c = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_27c = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_27c = ((int)*(char *)(lVar17 + 3 + uVar21) ^
                       ((int)*(char *)(lVar17 + 2 + uVar21) ^
                       ((int)*(char *)(lVar17 + 1 + uVar21) ^
                       ((int)*(char *)(lVar17 + uVar21) ^ uStack_27c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uStack_27c = ((int)*(char *)(lVar17 + uVar21 + uVar20) ^ uStack_27c) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    iStack_280 = 2;
    if ((DAT_0f705908 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705908), iVar7 != 0)) {
      func_0x0cdd5440();
      func_0x0410844d(&DAT_0f705908);
    }
    uStack_5a8 = uStack_27c;
    uStack_5a0 = 0;
    uStack_598 = 3;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce04040;
    puStack_560 = &UNK_0ce04050;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(&uStack_2a0,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_448 = uStack_290;
    uStack_444 = uStack_28c;
    iStack_440 = uStack_288;
    iStack_43c = uStack_284;
    uStack_458 = uStack_2a0;
    uStack_450 = (long *)CONCAT44(uStack_294,uStack_298);
    func_0x0ce03a90(&uStack_5a8,&uStack_458,&puStack_538);
    if (uStack_590._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_590) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != uStack_5a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb077f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_590._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_590) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb077f;
      }
      if (uStack_590._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_594,uStack_598) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
    }
    if ((char)uStack_270 == '\0') {
      func_0x0ce03e20(&uStack_5a8,&uStack_2a8);
    }
    iVar7 = iStack_274;
    uVar10 = uStack_2a8;
    if ((DAT_0f7059b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7059b0), iVar8 != 0)) {
      func_0x0cdffa70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
      func_0x0410844d(&DAT_0f7059b0);
    }
    plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_0cdb0811;
      plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f705930 + 4)
            );
    if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb0811:
      puVar9 = &DAT_0f705930;
    }
    else {
      puVar9 = (undefined *)plVar12[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01282847),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_5a8 = uStack_5a8 & 0xffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_27c,&uStack_27c,&uStack_5a8);
    uStack_2e8 = uStack_2a8;
    plStack_2e0 = uStack_2a0;
    uStack_2d8 = uStack_298;
    uStack_2d4 = uStack_294;
    uStack_2d0 = uStack_290;
    uStack_2cc = uStack_28c;
    uStack_2c8 = uStack_288;
    uStack_2c4 = uStack_284;
    iStack_2c0 = iStack_280;
    uStack_2bc = uStack_27c;
    uStack_2b8 = CONCAT44(iStack_274,uStack_278);
    uStack_2b0 = uStack_270;
    func_0x048b0bc0(&puStack_538);
    func_0x0ce036b0(&puStack_538,&UNK_0130871a,6);
    puVar9 = (undefined *)((ulong)uStack_510 >> 1 & 0x7f);
    lVar17 = lVar15;
    if (((ulong)uStack_510 & 1) != 0) {
      puVar9 = puStack_508;
      lVar17 = lStack_500;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_2bc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_2bc = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_2bc = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_2bc = ((int)*(char *)(lVar17 + 3 + uVar21) ^
                       ((int)*(char *)(lVar17 + 2 + uVar21) ^
                       ((int)*(char *)(lVar17 + 1 + uVar21) ^
                       ((int)*(char *)(lVar17 + uVar21) ^ uStack_2bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uStack_2bc = ((int)*(char *)(lVar17 + uVar21 + uVar20) ^ uStack_2bc) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    iStack_2c0 = 2;
    if ((DAT_0f705908 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705908), iVar7 != 0)) {
      func_0x0cdd5440();
      func_0x0410844d(&DAT_0f705908);
    }
    uStack_5a8 = uStack_2bc;
    uStack_5a0 = 0;
    uStack_598 = 3;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce040a0;
    puStack_560 = &UNK_0ce040b0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(&plStack_2e0,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_448 = uStack_2d0;
    uStack_444 = uStack_2cc;
    iStack_440 = uStack_2c8;
    iStack_43c = uStack_2c4;
    uStack_458 = plStack_2e0;
    uStack_450 = (long *)CONCAT44(uStack_2d4,uStack_2d8);
    func_0x0ce03a90(&uStack_5a8,&uStack_458,&puStack_538);
    if (uStack_590._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_590) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != uStack_5a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb0b8f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_590._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_590) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb0b8f;
      }
      if (uStack_590._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_594,uStack_598) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
    }
    if ((char)uStack_2b0 == '\0') {
      func_0x0ce03e20(&uStack_5a8,&uStack_2e8);
    }
    uVar10 = uStack_2e8;
    iVar7 = uStack_2b8._4_4_;
    if ((DAT_0f7059b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7059b0), iVar8 != 0)) {
      func_0x0cdffa70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
      func_0x0410844d(&DAT_0f7059b0);
    }
    plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_0cdb0c21;
      plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f705930 + 4)
            );
    if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb0c21:
      puVar9 = &DAT_0f705930;
    }
    else {
      puVar9 = (undefined *)plVar12[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01282847),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_5a8 = uStack_5a8 & 0xffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_2bc,&uStack_2bc,&uStack_5a8);
    uStack_268 = uStack_2e8;
    plStack_260 = plStack_2e0;
    uStack_258 = uStack_2d8;
    uStack_254 = uStack_2d4;
    uStack_250 = uStack_2d0;
    uStack_24c = uStack_2cc;
    uStack_248 = uStack_2c8;
    uStack_244 = uStack_2c4;
    iStack_240 = iStack_2c0;
    uStack_23c = uStack_2bc;
    uStack_238 = (undefined4)uStack_2b8;
    iStack_234 = uStack_2b8._4_4_;
    uStack_230 = uStack_2b0;
    func_0x048b0bc0(&puStack_538);
    func_0x0ce036b0(&puStack_538,&UNK_011e3d13,0x14);
    puVar9 = (undefined *)((ulong)uStack_510 >> 1 & 0x7f);
    lVar17 = lVar15;
    if (((ulong)uStack_510 & 1) != 0) {
      puVar9 = puStack_508;
      lVar17 = lStack_500;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_23c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_23c = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_23c = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_23c = ((int)*(char *)(lVar17 + 3 + uVar21) ^
                       ((int)*(char *)(lVar17 + 2 + uVar21) ^
                       ((int)*(char *)(lVar17 + 1 + uVar21) ^
                       ((int)*(char *)(lVar17 + uVar21) ^ uStack_23c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uStack_23c = ((int)*(char *)(lVar17 + uVar21 + uVar20) ^ uStack_23c) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    iStack_240 = 2;
    if ((DAT_0f705908 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705908), iVar7 != 0)) {
      func_0x0cdd5440();
      func_0x0410844d(&DAT_0f705908);
    }
    uStack_5a8 = uStack_23c;
    uStack_5a0 = 0;
    uStack_598 = 3;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce04100;
    puStack_560 = &UNK_0ce04110;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(&plStack_260,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_448 = uStack_250;
    uStack_444 = uStack_24c;
    iStack_440 = uStack_248;
    iStack_43c = uStack_244;
    uStack_458 = plStack_260;
    uStack_450 = (long *)CONCAT44(uStack_254,uStack_258);
    func_0x0ce03a90(&uStack_5a8,&uStack_458,&puStack_538);
    if (uStack_590._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_590) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != uStack_5a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb0f9f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_590._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_590) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb0f9f;
      }
      if (uStack_590._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_594,uStack_598) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
    }
    if ((char)uStack_230 == '\0') {
      func_0x0ce03e20(&uStack_5a8,&uStack_268);
    }
    iVar7 = iStack_234;
    uVar10 = uStack_268;
    if ((DAT_0f7059b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7059b0), iVar8 != 0)) {
      func_0x0cdffa70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
      func_0x0410844d(&DAT_0f7059b0);
    }
    plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_0cdb1031;
      plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f705930 + 4)
            );
    if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb1031:
      puVar9 = &DAT_0f705930;
    }
    else {
      puVar9 = (undefined *)plVar12[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01282847),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_5a8 = uStack_5a8 & 0xffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_23c,&uStack_23c,&uStack_5a8);
    uStack_3c8 = uStack_268;
    plStack_3c0 = plStack_260;
    uStack_3b8 = uStack_258;
    uStack_3b4 = uStack_254;
    uStack_3b0 = uStack_250;
    uStack_3ac = uStack_24c;
    uStack_3a8 = uStack_248;
    uStack_3a4 = uStack_244;
    iStack_3a0 = iStack_240;
    uStack_39c = uStack_23c;
    uStack_398 = CONCAT44(iStack_234,uStack_238);
    uStack_390 = uStack_230;
    func_0x048b0bc0(&puStack_538);
    func_0x0ce036b0(&puStack_538,&UNK_0128283c,10);
    puVar9 = (undefined *)((ulong)uStack_510 >> 1 & 0x7f);
    lVar17 = lVar15;
    if (((ulong)uStack_510 & 1) != 0) {
      puVar9 = puStack_508;
      lVar17 = lStack_500;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_39c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_39c = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_39c = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_39c = ((int)*(char *)(lVar17 + 3 + uVar21) ^
                       ((int)*(char *)(lVar17 + 2 + uVar21) ^
                       ((int)*(char *)(lVar17 + 1 + uVar21) ^
                       ((int)*(char *)(lVar17 + uVar21) ^ uStack_39c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uStack_39c = ((int)*(char *)(lVar17 + uVar21 + uVar20) ^ uStack_39c) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    iStack_3a0 = 2;
    if ((DAT_0f705908 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705908), iVar7 != 0)) {
      func_0x0cdd5440();
      func_0x0410844d(&DAT_0f705908);
    }
    uStack_5a8 = uStack_39c;
    uStack_5a0 = 0;
    uStack_598 = 3;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce04160;
    puStack_560 = &UNK_0ce04170;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(&plStack_3c0,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_448 = uStack_3b0;
    uStack_444 = uStack_3ac;
    iStack_440 = uStack_3a8;
    iStack_43c = uStack_3a4;
    uStack_458 = plStack_3c0;
    uStack_450 = (long *)CONCAT44(uStack_3b4,uStack_3b8);
    func_0x0ce03a90(&uStack_5a8,&uStack_458,&puStack_538);
    if (uStack_590._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_590) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != uStack_5a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb13af:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_590._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_590) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb13af;
      }
      if (uStack_590._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_594,uStack_598) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
    }
    if ((char)uStack_390 == '\0') {
      func_0x0ce03e20(&uStack_5a8,&uStack_3c8);
    }
    uVar10 = uStack_3c8;
    iVar7 = uStack_398._4_4_;
    if ((DAT_0f7059b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7059b0), iVar8 != 0)) {
      func_0x0cdffa70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
      func_0x0410844d(&DAT_0f7059b0);
    }
    plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_0cdb1441;
      plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f705930 + 4)
            );
    if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb1441:
      puVar9 = &DAT_0f705930;
    }
    else {
      puVar9 = (undefined *)plVar12[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01282847),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_5a8 = uStack_5a8 & 0xffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_39c,&uStack_39c,&uStack_5a8);
    uStack_388 = uStack_3c8;
    plStack_380 = plStack_3c0;
    uStack_378 = uStack_3b8;
    uStack_374 = uStack_3b4;
    uStack_370 = uStack_3b0;
    uStack_36c = uStack_3ac;
    uStack_368 = uStack_3a8;
    uStack_364 = uStack_3a4;
    iStack_360 = iStack_3a0;
    uStack_35c = uStack_39c;
    uStack_358 = (undefined4)uStack_398;
    iStack_354 = uStack_398._4_4_;
    uStack_350 = uStack_390;
    func_0x048b0bc0(&puStack_538);
    func_0x0ce036b0(&puStack_538,&UNK_014bfc17,0x17);
    puVar9 = (undefined *)((ulong)uStack_510 >> 1 & 0x7f);
    lVar17 = lVar15;
    if (((ulong)uStack_510 & 1) != 0) {
      puVar9 = puStack_508;
      lVar17 = lStack_500;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_35c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_35c = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_35c = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_35c = ((int)*(char *)(lVar17 + 3 + uVar21) ^
                       ((int)*(char *)(lVar17 + 2 + uVar21) ^
                       ((int)*(char *)(lVar17 + 1 + uVar21) ^
                       ((int)*(char *)(lVar17 + uVar21) ^ uStack_35c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uStack_35c = ((int)*(char *)(lVar17 + uVar21 + uVar20) ^ uStack_35c) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    iStack_360 = 2;
    if ((DAT_0f705908 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705908), iVar7 != 0)) {
      func_0x0cdd5440();
      func_0x0410844d(&DAT_0f705908);
    }
    uStack_5a8 = uStack_35c;
    uStack_5a0 = 0;
    uStack_598 = 3;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce041c0;
    puStack_560 = &UNK_0ce041d0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(&plStack_380,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar17 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_448 = uStack_370;
    uStack_444 = uStack_36c;
    iStack_440 = uStack_368;
    iStack_43c = uStack_364;
    uStack_458 = plStack_380;
    uStack_450 = (long *)CONCAT44(uStack_374,uStack_378);
    func_0x0ce03a90(&uStack_5a8,&uStack_458,&puStack_538);
    if (uStack_590._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_590) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != uStack_5a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb17bf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_590._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_590) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb17bf;
      }
      if (uStack_590._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_594,uStack_598) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
    }
    if ((char)uStack_350 == '\0') {
      func_0x0ce03e20(&uStack_5a8,&uStack_388);
    }
    iVar7 = iStack_354;
    uVar10 = uStack_388;
    if ((DAT_0f7059b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7059b0), iVar8 != 0)) {
      func_0x0cdffa70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
      func_0x0410844d(&DAT_0f7059b0);
    }
    plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_0cdb1851;
      plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f705930 + 4)
            );
    if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb1851:
      puVar9 = &DAT_0f705930;
    }
    else {
      puVar9 = (undefined *)plVar12[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01282847),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_5a8 = uStack_5a8 & 0xffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_35c,&uStack_35c,&uStack_5a8);
    uStack_458 = (long *)uStack_388;
    uStack_450 = plStack_380;
    uStack_448 = uStack_378;
    uStack_444 = uStack_374;
    iStack_440 = uStack_370;
    iStack_43c = uStack_36c;
    uStack_438 = uStack_368;
    uStack_434 = uStack_364;
    iStack_430 = iStack_360;
    uStack_42c = uStack_35c;
    uStack_428 = CONCAT44(iStack_354,uStack_358);
    uStack_420 = uStack_350;
    func_0x048b0bc0(&puStack_538);
    func_0x0ce036b0(&puStack_538,&UNK_011ffc51,0x21);
    puVar9 = (undefined *)(ulong)((byte)uStack_510 >> 1);
    if (((byte)uStack_510 & 1) != 0) {
      puVar9 = puStack_508;
      lVar15 = lStack_500;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_42c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_42c = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_42c = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_42c = ((int)*(char *)(lVar15 + 3 + uVar21) ^
                       ((int)*(char *)(lVar15 + 2 + uVar21) ^
                       ((int)*(char *)(lVar15 + 1 + uVar21) ^
                       ((int)*(char *)(lVar15 + uVar21) ^ uStack_42c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar10 != 0) {
        uVar20 = 0;
        do {
          uStack_42c = ((int)*(char *)(lVar15 + uVar21 + uVar20) ^ uStack_42c) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar10 != uVar20);
      }
    }
    iStack_430 = 2;
    if ((DAT_0f705908 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705908), iVar7 != 0)) {
      func_0x0cdd5440();
      func_0x0410844d(&DAT_0f705908);
    }
    uStack_5a8 = uStack_42c;
    uStack_5a0 = 0;
    uStack_598 = 3;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce04220;
    puStack_560 = &UNK_0ce04230;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(&uStack_450,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_208 = iStack_440;
    uStack_204 = iStack_43c;
    uStack_200 = uStack_438;
    uStack_1fc = uStack_434;
    uStack_218 = (uint)uStack_450;
    uStack_214 = uStack_450._4_4_;
    uStack_210 = uStack_448;
    uStack_20c = uStack_444;
    func_0x0ce03a90(&uStack_5a8,&uStack_218,&puStack_538);
    if (uStack_590._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_590) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while (lVar15 != uStack_5a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb1baf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_590._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_594,uStack_598) + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_590) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb1baf;
      }
      if (uStack_590._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_594,uStack_598) + 0x18);
        *puVar1 = *puVar1 | 0x90000;
      }
    }
    if ((char)uStack_420 == '\0') {
      func_0x0ce03e20(&uStack_5a8,&uStack_458);
    }
    uVar10 = (ulong)uStack_458;
    iVar7 = uStack_428._4_4_;
    if ((DAT_0f7059b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7059b0), iVar8 != 0)) {
      func_0x0cdffa70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f705930,0xf53dab8);
      func_0x0410844d(&DAT_0f7059b0);
    }
    plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f705930 + 4)) * 8);
    do {
      lVar15 = *plVar12;
      if (lVar15 == -1) goto LAB_0cdb1c40;
      plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f705930 + 4)
            );
    if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb1c40:
      puVar9 = &DAT_0f705930;
    }
    else {
      puVar9 = (undefined *)plVar12[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01282847),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_5a8 = uStack_5a8 & 0xffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_42c,&uStack_42c,&uStack_5a8);
    func_0x048b0bc0(&puStack_538);
  }
  func_0x0d012070(param_1);
  func_0x0cdb4850(param_1);
  if ((DAT_0f705a38 == '\0') && (iVar7 = func_0x04108328(&DAT_0f705a38), iVar7 != 0)) {
    func_0x0ce07160();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7059b8,0xf53dab8);
    func_0x0410844d(&DAT_0f705a38);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7059b8 + 4)) * 8);
  do {
    lVar15 = *plVar12;
    if (lVar15 == -1) goto LAB_0cdb1d50;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f7059b8 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0cdb1d50:
    puVar9 = &DAT_0f7059b8;
    if (iRam000000000f705a18 != -0x2b3da790) goto LAB_0cdb1dd7;
LAB_0cdb1d7b:
    lVar15 = *(long *)(puVar9 + 0x68);
    if (lVar15 == 0) goto LAB_0cdb1dd7;
    bVar22 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar17 = lVar15 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar22) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0ce07880(&uStack_418,param_1,lVar17,uVar10);
    if ((char)uStack_3e8 != '\0') goto LAB_0cdb1db8;
LAB_0cdb1dfd:
    uStack_128 = uStack_3e8;
    uStack_138 = iStack_3f8;
    uStack_134 = iStack_3f4;
    iStack_130 = (int)uStack_3f0;
    uStack_12c = uStack_3f0._4_4_;
    uStack_148 = uStack_408;
    uStack_144 = uStack_404;
    uStack_140 = uStack_400;
    uStack_13c = uStack_3fc;
    uStack_158 = uStack_418;
    uStack_154 = uStack_414;
    uStack_150 = uStack_410;
    uStack_14c = uStack_40c;
    func_0x0ce07e70(&puStack_538,CONCAT44(uStack_414,uStack_418) + 0x18);
    if (uStack_520._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_520) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != uStack_530) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb1eaf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_520._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_520) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb1eaf;
      }
      if (uStack_520._4_4_ == 0) {
        *(uint *)((long)uStack_528 + 0x18) = *(uint *)((long)uStack_528 + 0x18) | 0x40000;
      }
    }
    func_0x0ce08430(&puStack_538,&uStack_158,&UNK_0137f4f8,7);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f406b78;
    if (uStack_520 != (long *)0x0) {
      lVar15 = *uStack_520;
      uStack_520 = plVar12;
      (**(code **)(lVar15 + 8))();
      plVar12 = uStack_520;
    }
    uStack_520 = plVar12;
    uStack_5a8 = (uint)uStack_528;
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce08c10;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &SUB_0ce04b20;
    puStack_568 = &UNK_0ce08c20;
    puStack_560 = &UNK_0ce08de0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(uStack_530,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0ce086e0(&puStack_538);
    uStack_a8 = (undefined1)uStack_128;
    uStack_b8 = uStack_138;
    uStack_b4 = uStack_134;
    iStack_b0 = iStack_130;
    uStack_ac = uStack_12c;
    uStack_c8 = uStack_148;
    uStack_c4 = uStack_144;
    uStack_c0 = uStack_140;
    uStack_bc = uStack_13c;
    uStack_d8 = uStack_158;
    uStack_d4 = uStack_154;
    uStack_d0 = uStack_150;
    uStack_cc = uStack_14c;
    func_0x048b0bc0(&uStack_520);
    uStack_118 = uStack_d8;
    uStack_114 = uStack_d4;
    uStack_110 = uStack_d0;
    uStack_10c = uStack_cc;
    uStack_108 = uStack_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    iStack_f0 = iStack_b0;
    uStack_ec = uStack_ac;
    uStack_e8 = CONCAT71(uStack_a7,uStack_a8);
    func_0x0ce07e70(&puStack_538,CONCAT44(uStack_d4,uStack_d8) + 0x18);
    if (uStack_520._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_520) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != uStack_530) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb212f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_520._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_520) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb212f;
      }
      if (uStack_520._4_4_ == 0) {
        *(uint *)((long)uStack_528 + 0x18) = *(uint *)((long)uStack_528 + 0x18) | 0x40000;
      }
    }
    func_0x0ce08430(&puStack_538,&uStack_118,&UNK_0131cb3e,0xd);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f405a50;
    if (uStack_520 != (long *)0x0) {
      lVar15 = *uStack_520;
      uStack_520 = plVar12;
      (**(code **)(lVar15 + 8))();
      plVar12 = uStack_520;
    }
    uStack_520 = plVar12;
    uStack_5a8 = (uint)uStack_528;
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0ce03d00;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_0cdff9b0;
    puStack_568 = &UNK_0ce09240;
    puStack_560 = &UNK_0ce093a0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(uStack_530,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0ce086e0(&puStack_538);
    uStack_68 = (undefined1)uStack_e8;
    uStack_78 = uStack_f8;
    uStack_74 = uStack_f4;
    iStack_70 = iStack_f0;
    uStack_6c = uStack_ec;
    uStack_88 = uStack_108;
    uStack_84 = uStack_104;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    uStack_98 = uStack_118;
    uStack_94 = uStack_114;
    uStack_90 = uStack_110;
    uStack_8c = uStack_10c;
    func_0x048b0bc0(&uStack_520);
    uStack_218 = uStack_98;
    uStack_214 = uStack_94;
    uStack_210 = uStack_90;
    uStack_20c = uStack_8c;
    uStack_208 = uStack_88;
    uStack_204 = uStack_84;
    uStack_200 = uStack_80;
    uStack_1fc = uStack_7c;
    uStack_1f8 = uStack_78;
    uStack_1f4 = uStack_74;
    iStack_1f0 = iStack_70;
    uStack_1ec = uStack_6c;
    uStack_1e8 = CONCAT71(uStack_67,uStack_68);
    func_0x0ce07e70(&puStack_538,CONCAT44(uStack_94,uStack_98) + 0x18);
    if (uStack_520._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_520) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != uStack_530) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb239f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_520._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_520) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb239f;
      }
      if (uStack_520._4_4_ == 0) {
        *(uint *)((long)uStack_528 + 0x18) = *(uint *)((long)uStack_528 + 0x18) | 0x40000;
      }
    }
    func_0x0ce08430(&puStack_538,&uStack_218,&UNK_0143f3ca,0x11);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f0126a0;
    if (uStack_520 != (long *)0x0) {
      lVar15 = *uStack_520;
      uStack_520 = plVar12;
      (**(code **)(lVar15 + 8))();
      plVar12 = uStack_520;
    }
    uStack_520 = plVar12;
    uStack_5a8 = (uint)uStack_528;
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_05daeda0;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &UNK_05daea90;
    puStack_568 = &UNK_0ce09810;
    puStack_560 = &UNK_0ce09970;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(uStack_530,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0ce086e0(&puStack_538);
    uVar19 = uStack_1ec;
    iVar7 = iStack_1f0;
    uVar10 = CONCAT44(uStack_214,uStack_218);
    uStack_58 = CONCAT44(uStack_20c,uStack_210);
    uStack_50 = CONCAT44(uStack_204,uStack_208);
    uStack_48 = uStack_200;
    uStack_44 = uStack_1fc;
    uStack_40 = uStack_1f8;
    uStack_3c = uStack_1f4;
    uStack_539 = (undefined1)uStack_1e8;
    func_0x048b0bc0(&uStack_520);
    uStack_460 = 0;
    uStack_45c = 0;
    if (iVar7 == 4) {
      if ((DAT_0f705a38 == '\0') && (iVar8 = func_0x04108328(&DAT_0f705a38), iVar8 != 0)) {
        func_0x0ce07160();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f7059b8,0xf53dab8);
        func_0x0410844d(&DAT_0f705a38);
      }
      plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f7059b8 + 4)) * 8);
      do {
        lVar15 = *plVar12;
        if (lVar15 == -1) goto LAB_0cdb2608;
        plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar15 * 0x18);
      } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar15 * 0x18) !=
               *(uint *)(_DAT_0f7059b8 + 4));
      if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb2608:
        puVar9 = &DAT_0f7059b8;
      }
      else {
        puVar9 = (undefined *)plVar12[2];
      }
      puVar9 = (undefined *)func_0x048b1040(uVar10 + 0x18,puVar9,uVar19,1);
      if (puVar9 == (undefined *)0x0) {
        puStack_538 = (undefined *)0x0;
        uStack_530 = (long *)0x0;
        func_0x048b10d0(&puStack_538);
        puVar14 = *(undefined **)(puStack_538 + 0x38);
        puVar9 = puStack_538;
        if (puVar14 == (undefined *)0x0) goto LAB_0cdb2787;
LAB_0cdb27a3:
        do {
          puVar9 = puVar14;
          puVar14 = *(undefined **)(puVar9 + 0x38);
          if (*(undefined **)(puVar9 + 0x38) == (undefined *)0x0) {
            puStack_538 = (undefined *)0x0;
            uStack_530 = (long *)0x0;
            func_0x048b10d0(&puStack_538);
            puVar14 = puStack_538;
          }
        } while (puVar14 != (undefined *)0x0);
      }
      else {
        puVar14 = *(undefined **)(puVar9 + 0x38);
        if (*(undefined **)(puVar9 + 0x38) != (undefined *)0x0) goto LAB_0cdb27a3;
LAB_0cdb2787:
        puStack_538 = (undefined *)0x0;
        uStack_530 = (long *)0x0;
        func_0x048b10d0(&puStack_538);
        puVar14 = puStack_538;
        if (puStack_538 != (undefined *)0x0) goto LAB_0cdb27a3;
      }
      lVar15 = *(long *)(puVar9 + 0x48);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar13 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
LAB_0cdb27ff:
      puVar13[1] = 0xffffffffffffffff;
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 0xff;
      *puVar13 = &UNK_0f0edc68;
      uVar16 = _DAT_014f0528;
      puVar13[4] = 0;
      puVar13[5] = uVar16;
      puVar13[6] = 0;
      *(undefined2 *)(puVar13 + 7) = 0;
      *(undefined4 *)((long)puVar13 + 0x3a) = uStack_460;
      *(undefined2 *)((long)puVar13 + 0x3e) = uStack_45c;
      plVar12 = *(long **)(lVar15 + 8);
      *(undefined8 **)(lVar15 + 8) = puVar13;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x28))();
      }
    }
    else if (iVar7 == 1) {
      if ((DAT_0f705a38 == '\0') && (iVar8 = func_0x04108328(&DAT_0f705a38), iVar8 != 0)) {
        func_0x0ce07160();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f7059b8,0xf53dab8);
        func_0x0410844d(&DAT_0f705a38);
      }
      plVar12 = (long *)(*(long *)(uVar10 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f7059b8 + 4)) * 8);
      do {
        lVar15 = *plVar12;
        if (lVar15 == -1) goto LAB_0cdb2598;
        plVar12 = (long *)(*(long *)(uVar10 + 0x30) + lVar15 * 0x18);
      } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar15 * 0x18) !=
               *(uint *)(_DAT_0f7059b8 + 4));
      if (plVar12 == *(long **)(uVar10 + 0x38)) {
LAB_0cdb2598:
        puVar9 = &DAT_0f7059b8;
      }
      else {
        puVar9 = (undefined *)plVar12[2];
      }
      puVar9 = (undefined *)func_0x048b0c90(uVar10 + 0x18,puVar9,uVar19,1);
      if (puVar9 == (undefined *)0x0) {
        puStack_538 = (undefined *)0x0;
        uStack_530 = (long *)0x0;
        FUN_048b0d20(&puStack_538);
        puVar9 = puStack_538;
      }
      lVar15 = *(long *)(puVar9 + 0x58);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar13 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
      goto LAB_0cdb27ff;
    }
    uStack_330 = uStack_48;
    uStack_32c = uStack_44;
    uStack_328 = uStack_40;
    uStack_324 = uStack_3c;
    uStack_340 = (undefined4)uStack_58;
    uStack_33c = uStack_58._4_4_;
    uStack_338 = (undefined4)uStack_50;
    uStack_334 = uStack_50._4_4_;
    iStack_320 = iVar7;
    uStack_31c = uVar19;
    iStack_314 = CONCAT31(uStack_21b,uStack_21c);
    uStack_318 = CONCAT31((int3)uStack_21f,uStack_539);
    uStack_348 = uVar10;
    func_0x0ce07e70(&puStack_538,uVar10 + 0x18);
    if (uStack_520._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_520) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != uStack_530) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb293f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_520._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_520) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb293f;
      }
      if (uStack_520._4_4_ == 0) {
        *(uint *)((long)uStack_528 + 0x18) = *(uint *)((long)uStack_528 + 0x18) | 0x40000;
      }
    }
    func_0x0ce08430(&puStack_538,&uStack_348,&UNK_01301798,0xc);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ef8;
    if (uStack_520 != (long *)0x0) {
      lVar15 = *uStack_520;
      uStack_520 = plVar12;
      (**(code **)(lVar15 + 8))();
      plVar12 = uStack_520;
    }
    uStack_520 = plVar12;
    uStack_5a8 = (uint)uStack_528;
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_079523d0;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &SUB_04906c50;
    puStack_568 = &UNK_0ce09b50;
    puStack_560 = &UNK_0ce09ba0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(uStack_530,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    iVar7 = *(int *)((long)uStack_530 + 0x1c);
    if (iVar7 == 2) {
      piVar11 = *(int **)(*(long *)(*(long *)((long)uStack_530 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != *(int *)((long)uStack_530 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while (lVar15 != *(long *)((long)uStack_530 + 8)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar11 = *(int **)(*(long *)(*(long *)((long)uStack_530 + 0x10) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != *(int *)((long)uStack_530 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      puVar1 = (uint *)(*(long *)((long)uStack_530 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0ce086e0(&puStack_538);
    uStack_278 = CONCAT31(uStack_278._1_3_,(undefined1)uStack_318);
    uStack_288 = uStack_328;
    uStack_284 = uStack_324;
    iStack_280 = iStack_320;
    uStack_27c = uStack_31c;
    uStack_298 = uStack_338;
    uStack_294 = uStack_334;
    uStack_290 = uStack_330;
    uStack_28c = uStack_32c;
    uStack_2a8 = uStack_348;
    uStack_2a0 = (long *)CONCAT44(uStack_33c,uStack_340);
    func_0x048b0bc0(&uStack_520);
    uStack_2e8 = uStack_2a8;
    plStack_2e0 = uStack_2a0;
    uStack_2d8 = uStack_298;
    uStack_2d4 = uStack_294;
    uStack_2d0 = uStack_290;
    uStack_2cc = uStack_28c;
    uStack_2c8 = uStack_288;
    uStack_2c4 = uStack_284;
    iStack_2c0 = iStack_280;
    uStack_2bc = uStack_27c;
    uStack_2b8 = CONCAT44(iStack_274,uStack_278);
    func_0x0ce07e70(&puStack_538,uStack_2a8 + 0x18);
    if (uStack_520._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_520) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != uStack_530) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb2c6f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_520._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_520) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb2c6f;
      }
      if (uStack_520._4_4_ == 0) {
        *(uint *)((long)uStack_528 + 0x18) = *(uint *)((long)uStack_528 + 0x18) | 0x40000;
      }
    }
    func_0x0ce08430(&puStack_538,&uStack_2e8,&UNK_01387ed2,9);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ef8;
    if (uStack_520 != (long *)0x0) {
      lVar15 = *uStack_520;
      uStack_520 = plVar12;
      (**(code **)(lVar15 + 8))();
      plVar12 = uStack_520;
    }
    uStack_520 = plVar12;
    uStack_5a8 = (uint)uStack_528;
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_079523d0;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &SUB_04906c50;
    puStack_568 = &UNK_0ce09ec0;
    puStack_560 = &UNK_0ce09f10;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(uStack_530,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    iVar7 = *(int *)((long)uStack_530 + 0x1c);
    if (iVar7 == 2) {
      piVar11 = *(int **)(*(long *)(*(long *)((long)uStack_530 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != *(int *)((long)uStack_530 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while (lVar15 != *(long *)((long)uStack_530 + 8)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar11 = *(int **)(*(long *)(*(long *)((long)uStack_530 + 0x10) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != *(int *)((long)uStack_530 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      puVar1 = (uint *)(*(long *)((long)uStack_530 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0ce086e0(&puStack_538);
    uStack_238 = CONCAT31(uStack_238._1_3_,(undefined1)uStack_2b8);
    uStack_248 = uStack_2c8;
    uStack_244 = uStack_2c4;
    iStack_240 = iStack_2c0;
    uStack_23c = uStack_2bc;
    uStack_258 = uStack_2d8;
    uStack_254 = uStack_2d4;
    uStack_250 = uStack_2d0;
    uStack_24c = uStack_2cc;
    uStack_268 = uStack_2e8;
    plStack_260 = plStack_2e0;
    func_0x048b0bc0(&uStack_520);
    uStack_3c8 = uStack_268;
    plStack_3c0 = plStack_260;
    uStack_3b8 = uStack_258;
    uStack_3b4 = uStack_254;
    uStack_3b0 = uStack_250;
    uStack_3ac = uStack_24c;
    uStack_3a8 = uStack_248;
    uStack_3a4 = uStack_244;
    iStack_3a0 = iStack_240;
    uStack_39c = uStack_23c;
    uStack_398 = CONCAT44(iStack_234,uStack_238);
    func_0x0ce07e70(&puStack_538,uStack_268 + 0x18);
    if (uStack_520._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_520) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != uStack_530) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb2f7f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_520._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_520) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb2f7f;
      }
      if (uStack_520._4_4_ == 0) {
        *(uint *)((long)uStack_528 + 0x18) = *(uint *)((long)uStack_528 + 0x18) | 0x40000;
      }
    }
    func_0x0ce08430(&puStack_538,&uStack_3c8,&UNK_01268a39,0xb);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f406ce8;
    if (uStack_520 != (long *)0x0) {
      lVar15 = *uStack_520;
      uStack_520 = plVar12;
      (**(code **)(lVar15 + 8))();
      plVar12 = uStack_520;
    }
    uStack_520 = plVar12;
    uStack_5a8 = (uint)uStack_528;
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_0cddae80;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &SUB_0cdda890;
    puStack_568 = &UNK_0ce0a050;
    puStack_560 = &UNK_0ce0a1b0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(uStack_530,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0ce086e0(&puStack_538);
    uStack_358 = CONCAT31(uStack_358._1_3_,(undefined1)uStack_398);
    uStack_368 = uStack_3a8;
    uStack_364 = uStack_3a4;
    iStack_360 = iStack_3a0;
    uStack_35c = uStack_39c;
    uStack_378 = uStack_3b8;
    uStack_374 = uStack_3b4;
    uStack_370 = uStack_3b0;
    uStack_36c = uStack_3ac;
    uStack_388 = uStack_3c8;
    plStack_380 = plStack_3c0;
    func_0x048b0bc0(&uStack_520);
    uStack_458 = (long *)uStack_388;
    uStack_450 = plStack_380;
    uStack_448 = uStack_378;
    uStack_444 = uStack_374;
    iStack_440 = uStack_370;
    iStack_43c = uStack_36c;
    uStack_438 = uStack_368;
    uStack_434 = uStack_364;
    iStack_430 = iStack_360;
    uStack_42c = uStack_35c;
    uStack_428 = CONCAT44(iStack_354,uStack_358);
    func_0x0ce07e70(&puStack_538,uStack_388 + 0x18);
    if (uStack_520._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_520) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != uStack_530) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0cdb31ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_520._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_528 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_520) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0cdb31ef;
      }
      if (uStack_520._4_4_ == 0) {
        *(uint *)((long)uStack_528 + 0x18) = *(uint *)((long)uStack_528 + 0x18) | 0x40000;
      }
    }
    func_0x0ce08430(&puStack_538,&uStack_458,&UNK_014578fc,0x11);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ef8;
    if (uStack_520 != (long *)0x0) {
      lVar15 = *uStack_520;
      uStack_520 = plVar12;
      (**(code **)(lVar15 + 8))();
      plVar12 = uStack_520;
    }
    uStack_520 = plVar12;
    uStack_5a8 = (uint)uStack_528;
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 1;
    uStack_588 = 0;
    puStack_580 = &UNK_079523d0;
    puStack_578 = &SUB_048b06d0;
    puStack_570 = &SUB_04906c50;
    puStack_568 = &UNK_0ce0a390;
    puStack_560 = &UNK_0ce0a3e0;
    uStack_558 = 0;
    uStack_550 = 0;
    plStack_548 = (long *)0x0;
    FUN_048b05a0(uStack_530,&uStack_5a8);
    plVar12 = plStack_548;
    if (plStack_548 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_548 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_548 + 0x10))(plStack_548);
        func_0x0412c2d0(plVar12);
      }
    }
    iVar7 = *(int *)((long)uStack_530 + 0x1c);
    if (iVar7 == 2) {
      piVar11 = *(int **)(*(long *)(*(long *)((long)uStack_530 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != *(int *)((long)uStack_530 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while (lVar15 != *(long *)((long)uStack_530 + 8)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar11 = *(int **)(*(long *)(*(long *)((long)uStack_530 + 0x10) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != *(int *)((long)uStack_530 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      puVar1 = (uint *)(*(long *)((long)uStack_530 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0ce086e0(&puStack_538);
    func_0x048b0bc0(&uStack_520);
    lVar15 = func_0x0cde2500(plStack_3d0);
    if (*(int *)(lVar15 + 0x60) != -0x2b3da790) goto LAB_0cdb3455;
LAB_0cdb341b:
    lVar15 = *(long *)(lVar15 + 0x68);
    if (lVar15 == 0) goto LAB_0cdb3455;
    bVar22 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar17 = lVar15 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar22) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0ce0a520(&uStack_5a8,param_1,lVar17,uVar10);
  }
  else {
    puVar9 = (undefined *)plVar12[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0cdb1d7b;
LAB_0cdb1dd7:
    func_0x0ce07880(&uStack_418,param_1,&UNK_012ce725,0x17);
    if ((char)uStack_3e8 == '\0') goto LAB_0cdb1dfd;
LAB_0cdb1db8:
    lVar15 = func_0x0cde2500(plStack_3d0);
    if (*(int *)(lVar15 + 0x60) == -0x2b3da790) goto LAB_0cdb341b;
LAB_0cdb3455:
    func_0x0ce0a520(&uStack_5a8,param_1,&UNK_0131cb4c,0x18);
  }
  if ((char)puStack_578 != '\0') {
    return;
  }
  puStack_538 = (undefined *)0x40;
  func_0x0470d9a0(&uStack_388,&UNK_01387edc,0xfc,4,&puStack_538);
  iStack_3f8 = (int)uStack_588;
  iStack_3f4 = uStack_588._4_4_;
  uStack_418 = uStack_5a8;
  uStack_414 = uStack_5a4;
  uStack_410 = (undefined4)uStack_5a0;
  uStack_40c = uStack_5a0._4_4_;
  uStack_408 = uStack_598;
  uStack_404 = uStack_594;
  uStack_400 = (int)uStack_590;
  uStack_3fc = uStack_590._4_4_;
  uStack_3e8 = puStack_578;
  uStack_3f0 = 0x1e1bc4d500000004;
  if ((DAT_0f706ed8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f706ed8), iVar7 != 0)) {
    func_0x0cde2490(0xf706ec0);
    func_0x0410844d(&DAT_0f706ed8);
  }
  puStack_538 = (undefined *)CONCAT44(puStack_538._4_4_,uStack_3f0._4_4_);
  uStack_530 = (long *)0x0;
  uStack_528 = (long *)((ulong)uStack_528._4_4_ << 0x20);
  uStack_520 = (long *)0x1;
  puStack_518 = &SUB_048aead0;
  uStack_510 = &UNK_0ce0b530;
  puStack_508 = &UNK_0ce0b5f0;
  lStack_500 = 0;
  uStack_4f8 = (ulong)uStack_4f8._4_4_ << 0x20;
  lStack_4f0 = 0;
  plStack_4e8 = (long *)0x0;
  func_0x049057f0(&uStack_410,&puStack_538);
  func_0x048aea50(&puStack_538);
  uStack_448 = uStack_400;
  uStack_444 = uStack_3fc;
  iStack_440 = iStack_3f8;
  iStack_43c = iStack_3f4;
  uStack_458 = (long *)CONCAT44(uStack_40c,uStack_410);
  uStack_450 = (long *)CONCAT44(uStack_404,uStack_408);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f405c18;
  if ((DAT_0f551bc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551bc8), iVar7 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  puStack_538 = (undefined *)CONCAT44(puStack_538._4_4_,_DAT_0f551bb4);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0ef46c48;
  uStack_530 = plVar12 + 3;
  plVar12[3] = (long)puVar13;
  plVar12[4] = 0;
  *(undefined1 *)(plVar12 + 5) = 0xff;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_528 = plVar12;
  func_0x048afd20(&uStack_458,&puStack_538);
  plVar12 = uStack_528;
  if (uStack_528 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_528 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_528 + 0x10))(uStack_528);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      func_0x0412c2d0(plVar12);
    }
  }
  if ((DAT_0f706ed8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f706ed8), iVar7 != 0)) {
    func_0x0cde2490(0xf706ec0);
    func_0x0410844d(&DAT_0f706ed8);
  }
  if (iStack_3f4 == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != iStack_3f8) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar15 = *(long *)(piVar11 + 0xc);
    while (lVar15 != CONCAT44(uStack_404,uStack_408)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar15 = *(long *)(piVar11 + 0xc);
    }
LAB_0cdb372f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
  }
  else {
    if (iStack_3f4 == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != iStack_3f8) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_0cdb372f;
    }
    if (iStack_3f4 == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
      *puVar1 = *puVar1 | 0x20000;
    }
  }
  if ((DAT_0f706ed8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f706ed8), iVar7 != 0)) {
    func_0x0cde2490(0xf706ec0);
    func_0x0410844d(&DAT_0f706ed8);
  }
  puStack_538 = (undefined *)CONCAT44(puStack_538._4_4_,0xbf75c8f8);
  uStack_530 = (long *)0x0;
  uStack_528 = (long *)CONCAT44(uStack_528._4_4_,1);
  uStack_520 = (long *)0x0;
  puStack_518 = &UNK_0ce0bd20;
  uStack_510 = &SUB_048b06d0;
  puStack_508 = &UNK_0ce0f380;
  lStack_500 = 0;
  uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
  lStack_4f0 = 0;
  plStack_4e8 = (long *)0x0;
  func_0x049057f0(&uStack_410,&puStack_538);
  func_0x048aea50(&puStack_538);
  uStack_448 = uStack_400;
  uStack_444 = uStack_3fc;
  iStack_440 = iStack_3f8;
  iStack_43c = iStack_3f4;
  uStack_458 = (long *)CONCAT44(uStack_40c,uStack_410);
  uStack_450 = (long *)CONCAT44(uStack_404,uStack_408);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f405c18;
  if ((DAT_0f551cb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551cb0), iVar7 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  puStack_538 = (undefined *)CONCAT44(puStack_538._4_4_,_DAT_0f551c9c);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0ef46c98;
  uStack_530 = plVar12 + 3;
  plVar12[3] = (long)puVar13;
  *(undefined1 *)(plVar12 + 4) = 0xff;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_528 = plVar12;
  func_0x048afd20(&uStack_458,&puStack_538);
  plVar12 = uStack_528;
  if (uStack_528 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_528 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_528 + 0x10))(uStack_528);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      func_0x0412c2d0(plVar12);
    }
  }
  lVar15 = CONCAT44(uStack_414,uStack_418);
  iVar7 = (int)uStack_3f0;
  uVar4 = uStack_3f0._4_4_;
  puStack_518 = (undefined1 *)0x0;
  uStack_4d0 = 0;
  lStack_4c8 = 0;
  lStack_4e0 = 0;
  uStack_4d8 = 0;
  lStack_4f0 = 0;
  plStack_4e8 = (long *)0x0;
  lStack_500 = 0;
  uStack_4f8 = 0;
  uStack_510 = (undefined *)0x0;
  puStack_508 = (undefined *)0x0;
  lStack_4c0 = 0;
  uStack_530 = (long *)0xffffffffffffffff;
  uStack_528 = (long *)0x0;
  uStack_520 = (long *)0xff;
  puStack_538 = &UNK_0f4e3c70;
  func_0x041679a0(&puStack_518);
  uStack_510 = (undefined *)func_0x041681f0(&puStack_518,0xf547a30);
  puStack_508 = (undefined *)func_0x041681f0(&puStack_518,0xf547770);
  lStack_500 = 0;
  uStack_4f8 = 0;
  lStack_4f0 = 0;
  plStack_4e8 = (long *)0x0;
  lStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  lStack_4c8 = 0;
  lStack_4c0 = 0;
  bStack_300 = 0x24;
  uStack_2ff = _DAT_014ecce0;
  uStack_2fb = _UNK_014ecce4;
  uStack_2f7 = _UNK_014ecce8;
  uStack_2f3 = _UNK_014eccec;
  uStack_2ef = 0x242b;
  uStack_2ed = 0;
  func_0x0ed60210(&puStack_538,&bStack_300,0);
  uStack_1c0 = (undefined1)uStack_520;
  uStack_1d0 = (undefined4)uStack_530;
  uStack_1cc = uStack_530._4_4_;
  uStack_1c8 = (uint)uStack_528;
  uStack_1c4 = uStack_528._4_4_;
  puStack_1d8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_1b8,&puStack_518);
  lStack_1b0 = (long)uStack_510;
  lStack_1a8 = (long)puStack_508;
  lStack_1a0 = lStack_500;
  lStack_198 = uStack_4f8;
  lStack_190 = lStack_4f0;
  plStack_188 = plStack_4e8;
  if (plStack_4e8 != (long *)0x0) {
    LOCK();
    plStack_4e8[1] = plStack_4e8[1] + 1;
    UNLOCK();
  }
  lStack_180 = lStack_4e0;
  if ((uStack_4d8 & 1) == 0) {
    lStack_168 = lStack_4c8;
    uStack_178 = uStack_4d8;
    uStack_170 = uStack_4d0;
  }
  else {
    func_0x0412e5e0(&uStack_178,lStack_4c8,uStack_4d0);
  }
  lStack_160 = lStack_4c0;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(0x98,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f0fb8c0;
  plStack_3d0 = plVar12 + 3;
  *(undefined4 *)(plVar12 + 4) = uStack_1d0;
  *(undefined4 *)((long)plVar12 + 0x24) = uStack_1cc;
  *(undefined4 *)(plVar12 + 5) = uStack_1c8;
  *(undefined4 *)((long)plVar12 + 0x2c) = uStack_1c4;
  *(undefined1 *)(plVar12 + 6) = uStack_1c0;
  plVar12[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar12 + 7,auStack_1b8);
  plVar12[8] = lStack_1b0;
  plVar12[9] = lStack_1a8;
  plVar12[10] = lStack_1a0;
  plVar12[0xb] = lStack_198;
  plVar12[0xc] = lStack_190;
  plVar12[0xd] = (long)plStack_188;
  lStack_190 = 0;
  plStack_188 = (long *)0x0;
  plVar12[0xe] = lStack_180;
  plVar12[0x11] = lStack_168;
  *(undefined4 *)(plVar12 + 0xf) = (undefined4)uStack_178;
  *(undefined4 *)((long)plVar12 + 0x7c) = uStack_178._4_4_;
  *(undefined4 *)(plVar12 + 0x10) = (undefined4)uStack_170;
  *(undefined4 *)((long)plVar12 + 0x84) = uStack_170._4_4_;
  uStack_178 = 0;
  uStack_170 = 0;
  lStack_168 = 0;
  plVar12[0x12] = lStack_160;
  if (iVar7 == 4) {
    uVar16 = func_0x0cde2500(lVar15 + 0x18);
    lVar17 = func_0x048b1040(lVar15 + 0x18,uVar16,uVar4,1);
    if (lVar17 == 0) {
      uStack_458 = (long *)0x0;
      uStack_450 = (long *)0x0;
      func_0x048b10d0(&uStack_458);
      lVar18 = *(long *)((long)uStack_458 + 0x38);
      lVar17 = (long)uStack_458;
      if (lVar18 == 0) goto LAB_0cdb3d28;
LAB_0cdb3d4d:
      do {
        lVar17 = lVar18;
        lVar18 = *(long *)(lVar17 + 0x38);
        if (*(long *)(lVar17 + 0x38) == 0) {
          uStack_458 = (long *)0x0;
          uStack_450 = (long *)0x0;
          func_0x048b10d0(&uStack_458);
          lVar18 = (long)uStack_458;
        }
      } while (lVar18 != 0);
    }
    else {
      lVar18 = *(long *)(lVar17 + 0x38);
      if (*(long *)(lVar17 + 0x38) != 0) goto LAB_0cdb3d4d;
LAB_0cdb3d28:
      uStack_458 = (long *)0x0;
      uStack_450 = (long *)0x0;
      func_0x048b10d0(&uStack_458);
      lVar18 = (long)uStack_458;
      if (uStack_458 != (long *)0x0) goto LAB_0cdb3d4d;
    }
    lVar17 = *(long *)(lVar17 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar13 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x48,0);
    }
  }
  else {
    if (iVar7 != 1) goto LAB_0cdb3e0a;
    uVar16 = func_0x0cde2500(lVar15 + 0x18);
    lVar17 = func_0x048b0c90(lVar15 + 0x18,uVar16,uVar4,1);
    if (lVar17 == 0) {
      uStack_458 = (long *)0x0;
      uStack_450 = (long *)0x0;
      FUN_048b0d20(&uStack_458);
      lVar17 = (long)uStack_458;
    }
    lVar17 = *(long *)(lVar17 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar13 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x48,0);
    }
  }
  puVar13[1] = 0xffffffffffffffff;
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0xff;
  *puVar13 = &UNK_0f4e3d70;
  puVar13[4] = 0;
  puVar13[5] = plStack_3d0;
  puVar13[6] = plVar12;
  puVar13[7] = 0;
  puVar13[8] = 0;
  plVar12 = *(long **)(lVar17 + 8);
  *(undefined8 **)(lVar17 + 8) = puVar13;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))();
  }
  plVar12 = (long *)0x0;
LAB_0cdb3e0a:
  lVar15 = func_0x0cde2500(lVar15 + 0x18);
  lVar15 = *(long *)(lVar15 + 0x68);
  if ((*(byte *)(lVar15 + 0x88) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar15 + 0x98),*(ulong *)(lVar15 + 0x88) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar15 + 0x88) = 0x64696c61766e492a;
  *(undefined8 *)(lVar15 + 0x90) = 0x6169726574616d20;
  *(undefined8 *)(lVar15 + 0x98) = 0x656d616e206c;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  puStack_1d8 = &UNK_0f4e3c70;
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(lStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  plVar12 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_188 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x04167a40(auStack_1b8);
  if ((bStack_300 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_2ec,CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,uStack_2f3._3_1_))),
                    CONCAT35((undefined3)uStack_2fb,CONCAT41(uStack_2ff,bStack_300)) &
                    0xfffffffffffffffe);
  }
  if ((uStack_4d8 & 1) == 0) {
    puStack_538 = &UNK_0f4e3c70;
    plVar12 = plStack_4e8;
  }
  else {
    puStack_538 = &UNK_0f4e3c70;
    func_0x0412a280(lStack_4c8,uStack_4d8 & 0xfffffffffffffffe);
    plVar12 = plStack_4e8;
  }
  plStack_4e8 = plVar12;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x04167a40(&puStack_518);
  if ((uStack_388 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_374,uStack_378),uStack_388 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14ecce0  ^[a-zA-Z0-9_.:*]+$
 */
