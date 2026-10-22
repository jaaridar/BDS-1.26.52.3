/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x813b390 (ELF vaddr 0x803b390)
 * Label: caller-of-callee
 * Body:  [[0813b390, 0813f711] [0813f720, 0813fdc1] [0813fdd0, 08140421] [08140430, 081439d5]]
 * Ghidra: FUN_0813b390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0813b390(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  bool bVar22;
  uint auStack_620 [2];
  long *plStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined *puStack_5f8;
  undefined1 *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined4 uStack_5d0;
  undefined8 uStack_5c8;
  long *plStack_5c0;
  undefined *puStack_5b8;
  undefined4 *puStack_5b0;
  uint uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 uStack_5a0;
  long lStack_598;
  undefined8 uStack_590;
  ulong uStack_588;
  long lStack_580;
  undefined1 uStack_578;
  undefined4 uStack_577;
  undefined4 uStack_573;
  undefined2 uStack_56f;
  undefined2 uStack_56d;
  undefined1 uStack_56b;
  undefined2 uStack_56a;
  undefined1 uStack_568;
  undefined2 uStack_567;
  undefined5 uStack_565;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  undefined4 uStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
  undefined2 uStack_4f8;
  undefined2 uStack_4f6;
  uint uStack_4f4;
  uint uStack_4f0;
  undefined1 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined8 uStack_4c0;
  char cStack_4b8;
  uint uStack_4b4;
  char cStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  int iStack_480;
  undefined4 uStack_47c;
  char cStack_478;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  int iStack_400;
  undefined4 uStack_3fc;
  undefined8 uStack_3f8;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
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
  int iStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  char cStack_2b8;
  undefined7 uStack_2b7;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  long lStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  char cStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  char cStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  char cStack_c8;
  undefined7 uStack_c7;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
    func_0x081e5990();
    func_0x0410844d(&DAT_0f5c9e60);
  }
  uVar19 = _DAT_0f5c9e58;
  lVar18 = _DAT_0f5c9e50;
  if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
    func_0x081e5ad0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9ef8);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_0813b421;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0813b421:
    puVar12 = &DAT_0f5c9e78;
    iVar10 = iRam000000000f5c9ed8;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081f4ea0(&uStack_4e8,param_1,lVar18,uVar19);
  uStack_4b4 = uStack_4b4 & 0xffffff00;
  cStack_4b0 = '\0';
  if (cStack_4b8 == '\0') {
    func_0x081f5610(&puStack_5b8,&UNK_011ede91,4);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar18 = (long)&uStack_590 + 1;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    uVar7 = (int)uStack_4c0;
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') &&
       (uStack_4c0._0_4_ = uVar7, iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f5ce0;
    puStack_5d8 = &UNK_081f5cf0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813b6ef:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813b6ef;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    lVar2 = (long)&uStack_4c0 + 4;
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813b791;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813b791:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_014af463,3);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f5f00;
    puStack_5d8 = &UNK_081f5f10;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813bacf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813bacf;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813bb61;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813bb61:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_0144d534,6);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f5f60;
    puStack_5d8 = &UNK_081f5f70;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813be9f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813be9f;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813bf31;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813bf31:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_0144d53b,6);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f5fc0;
    puStack_5d8 = &UNK_081f5fd0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813c26f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813c26f;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813c301;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813c301:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_013fa2e3,4);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f6020;
    puStack_5d8 = &UNK_081f6030;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813c63f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813c63f;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813c6d1;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813c6d1:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_01463e09,5);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f6080;
    puStack_5d8 = &UNK_081f6090;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813ca0f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813ca0f;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813caa1;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813caa1:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_012d83a7,8);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f60e0;
    puStack_5d8 = &UNK_081f60f0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813cddf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813cddf;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813ce71;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813ce71:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_012732a5,7);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f6140;
    puStack_5d8 = &UNK_081f6150;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813d1af:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813d1af;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813d241;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813d241:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_0142d8cd,9);
    uVar19 = uStack_590 >> 1 & 0x7f;
    lVar3 = lVar18;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar3 = lStack_580;
    }
    if (uVar19 == 0) {
      uStack_4c0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_4c0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + 3 + uVar20) ^
               ((int)*(char *)(lVar3 + 2 + uVar20) ^
               ((int)*(char *)(lVar3 + 1 + uVar20) ^
               ((int)*(char *)(lVar3 + uVar20) ^ uStack_4c0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uStack_4c0._4_4_ =
               ((int)*(char *)(lVar3 + uVar20 + uVar19) ^ uStack_4c0._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0._0_4_ = 2;
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f61a0;
    puStack_5d8 = &UNK_081f61b0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while ((long *)lVar3 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
LAB_0813d57f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)plStack_610 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813d57f;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)plStack_610 + 0x18) = *(uint *)((long)plStack_610 + 0x18) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar3 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar4 = *plVar15;
      if (lVar4 == -1) goto LAB_0813d611;
      plVar15 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4));
    if (plVar15 == *(long **)(lVar3 + 0x38)) {
LAB_0813d611:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
    func_0x081f5610(&puStack_5b8,&UNK_012f289e,4);
    uVar19 = uStack_590 >> 1 & 0x7f;
    if ((uStack_590 & 1) != 0) {
      uVar19 = uStack_588;
      lVar18 = lStack_580;
    }
    if (uVar19 == 0) {
      uVar17 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uVar17 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uVar17 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uVar17 = ((int)*(char *)(lVar18 + 3 + uVar20) ^
                   ((int)*(char *)(lVar18 + 2 + uVar20) ^
                   ((int)*(char *)(lVar18 + 1 + uVar20) ^
                   ((int)*(char *)(lVar18 + uVar20) ^ uVar17) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          uVar17 = ((int)*(char *)(lVar18 + uVar20 + uVar19) ^ uVar17) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar13 != uVar19);
      }
    }
    uStack_4c0 = CONCAT44(uVar17,2);
    if ((DAT_0f5c9e60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e60), iVar10 != 0)) {
      func_0x081e5990();
      func_0x0410844d(&DAT_0f5c9e60);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)CONCAT44(plStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081f5c20;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081e5a10;
    puStack_5e0 = &UNK_081f6200;
    puStack_5d8 = &UNK_081f6210;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    uStack_498 = uStack_4d0;
    uStack_494 = uStack_4cc;
    uStack_490 = uStack_4c8;
    uStack_48c = uStack_4c4;
    uStack_4a8 = CONCAT44(uStack_4dc,uStack_4e0);
    uStack_4a0 = (long *)CONCAT44(uStack_4d4,uStack_4d8);
    func_0x081f59b0(auStack_620,&uStack_4a8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar14 = *(int **)(plStack_610[0xf] + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_608) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      plVar15 = *(long **)(piVar14 + 0xc);
      while (plVar15 != plStack_618) {
        piVar14 = *(int **)(piVar14 + 0xe);
        plVar15 = *(long **)(piVar14 + 0xc);
      }
LAB_0813d93f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar14 = *(int **)(plStack_610[0xf] + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_608) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813d93f;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)(plStack_610 + 3) = *(uint *)(plStack_610 + 3) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x081f5d40(auStack_620,&uStack_4e8);
    }
    uVar17 = uStack_4b4;
    lVar18 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9ef8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ef8), iVar10 != 0)) {
      func_0x081e5ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9e78,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9ef8);
    }
    plVar15 = (long *)(*(long *)(lVar18 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c9e78 + 4)) * 8);
    do {
      lVar3 = *plVar15;
      if (lVar3 == -1) goto LAB_0813d9d0;
      plVar15 = (long *)(*(long *)(lVar18 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar18 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9e78 + 4))
    ;
    if (plVar15 == *(long **)(lVar18 + 0x38)) {
LAB_0813d9d0:
      puVar12 = &DAT_0f5c9e78;
    }
    else {
      puVar12 = (undefined *)plVar15[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar21 != puVar5 && (*puVar21 != uVar17)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01433437),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    FUN_05d9c620(puVar21 + 2,lVar2,lVar2,auStack_620);
    FUN_048b0bc0(&puStack_5b8);
  }
  func_0x078210b0(param_1);
  func_0x07bf3530(param_1);
  if ((DAT_0f5c97b8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c97b8), iVar10 != 0)) {
    func_0x081cf990();
    func_0x0410844d(&DAT_0f5c97b8);
  }
  uVar19 = _DAT_0f5c97b0;
  lVar18 = _DAT_0f5c97a8;
  if ((DAT_0f5c9798 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9798), iVar10 != 0)) {
    func_0x081ce900();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9718,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9798);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9718 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_0813db01;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9718 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0813db01:
    puVar12 = &DAT_0f5c9718;
    iVar10 = iRam000000000f5c9778;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081cee30(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    func_0x081cfa10(&puStack_5b8,&uStack_4e8,&UNK_0149b62e,0x12);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012168;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05dc3f10;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05dc3bf0;
    puStack_5e0 = &UNK_081cffc0;
    puStack_5d8 = &UNK_081d0130;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081cfcc0(&puStack_5b8);
    uStack_3f8 = CONCAT71(uStack_3f8._1_7_,cStack_4b8);
    uStack_408 = uStack_4c8;
    uStack_404 = uStack_4c4;
    iStack_400 = (int)uStack_4c0;
    uStack_3fc = uStack_4c0._4_4_;
    uStack_418 = uStack_4d8;
    uStack_414 = uStack_4d4;
    uStack_410 = uStack_4d0;
    uStack_40c = uStack_4cc;
    uStack_428 = uStack_4e8;
    uStack_424 = uStack_4e4;
    uStack_420 = uStack_4e0;
    uStack_41c = uStack_4dc;
    FUN_048b0bc0(&uStack_5a0);
    uStack_3e8 = uStack_428;
    uStack_3e4 = uStack_424;
    uStack_3e0 = uStack_420;
    uStack_3dc = uStack_41c;
    uStack_3d8 = uStack_418;
    uStack_3d4 = uStack_414;
    uStack_3d0 = uStack_410;
    uStack_3cc = uStack_40c;
    uStack_3c8 = uStack_408;
    uStack_3c4 = uStack_404;
    iStack_3c0 = iStack_400;
    uStack_3bc = uStack_3fc;
    uStack_3b8 = uStack_3f8;
    func_0x081cfa10(&puStack_5b8,&uStack_3e8,&UNK_013e4e28,0x11);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0122d0;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05de9430;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05de9110;
    puStack_5e0 = &UNK_081d0300;
    puStack_5d8 = &UNK_081d0470;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081cfcc0(&puStack_5b8);
    uStack_438 = CONCAT71(uStack_438._1_7_,(undefined1)uStack_3b8);
    uStack_448 = uStack_3c8;
    uStack_444 = uStack_3c4;
    iStack_440 = iStack_3c0;
    uStack_43c = uStack_3bc;
    uStack_458 = uStack_3d8;
    uStack_454 = uStack_3d4;
    uStack_450 = uStack_3d0;
    uStack_44c = uStack_3cc;
    uStack_468 = uStack_3e8;
    uStack_464 = uStack_3e4;
    uStack_460 = uStack_3e0;
    uStack_45c = uStack_3dc;
    FUN_048b0bc0(&uStack_5a0);
    func_0x081cfa10(&puStack_5b8,&uStack_468,&UNK_014b3838,0x11);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0122d0;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05de9430;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05de9110;
    puStack_5e0 = &UNK_081d0650;
    puStack_5d8 = &UNK_081d07c0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081cfcc0(&puStack_5b8);
    cStack_478 = (char)uStack_438;
    uStack_488 = uStack_448;
    uStack_484 = uStack_444;
    iStack_480 = iStack_440;
    uStack_47c = uStack_43c;
    uStack_498 = uStack_458;
    uStack_494 = uStack_454;
    uStack_490 = uStack_450;
    uStack_48c = uStack_44c;
    uStack_4a8 = CONCAT44(uStack_464,uStack_468);
    uStack_4a0 = (long *)CONCAT44(uStack_45c,uStack_460);
    FUN_048b0bc0(&uStack_5a0);
    func_0x081cfa10(&puStack_5b8,&uStack_4a8,&UNK_012dd643,0xc);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f110810;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_081d14f0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_081d11d0;
    puStack_5e0 = &UNK_081d1500;
    puStack_5d8 = &UNK_081d1660;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081cfcc0(&puStack_5b8);
    FUN_048b0bc0(&uStack_5a0);
  }
  if ((DAT_0f5c9870 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9870), iVar10 != 0)) {
    func_0x081d2e00();
    func_0x0410844d(&DAT_0f5c9870);
  }
  uVar19 = _DAT_0f5c9868;
  lVar18 = _DAT_0f5c9860;
  if ((DAT_0f5c9850 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9850), iVar10 != 0)) {
    func_0x081d1b90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c97d0,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9850);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c97d0 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_0813e181;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c97d0 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0813e181:
    puVar12 = &DAT_0f5c97d0;
    iVar10 = iRam000000000f5c9830;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081d2250(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    func_0x081d2e80(&puStack_5b8,&uStack_4e8,&UNK_013fa2e3,4,1);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0ef44b00;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_048b3f30;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_048b2190;
    puStack_5e0 = &UNK_081d3440;
    puStack_5d8 = &UNK_081d3600;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d3140(&puStack_5b8);
    cStack_2b8 = cStack_4b8;
    uStack_2c8 = uStack_4c8;
    uStack_2c4 = uStack_4c4;
    iStack_2c0 = (int)uStack_4c0;
    uStack_2bc = uStack_4c0._4_4_;
    uStack_2d8 = uStack_4d8;
    uStack_2d4 = uStack_4d4;
    uStack_2d0 = uStack_4d0;
    uStack_2cc = uStack_4cc;
    uStack_2e8 = uStack_4e8;
    uStack_2e4 = uStack_4e4;
    uStack_2e0 = uStack_4e0;
    uStack_2dc = uStack_4dc;
    FUN_048b0bc0(&uStack_5a0);
    uStack_3a8 = uStack_2e8;
    uStack_3a4 = uStack_2e4;
    uStack_3a0 = uStack_2e0;
    uStack_39c = uStack_2dc;
    uStack_398 = uStack_2d8;
    uStack_394 = uStack_2d4;
    uStack_390 = uStack_2d0;
    uStack_38c = uStack_2cc;
    uStack_388 = uStack_2c8;
    uStack_384 = uStack_2c4;
    iStack_380 = iStack_2c0;
    uStack_37c = uStack_2bc;
    uStack_378 = CONCAT71(uStack_2b7,cStack_2b8);
    func_0x081d2840(&puStack_5b8,CONCAT44(uStack_2e4,uStack_2e8) + 0x18);
    if (uStack_5a0._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_5a0) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      puVar6 = *(undefined4 **)(piVar14 + 0xc);
      while (puVar6 != puStack_5b0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        puVar6 = *(undefined4 **)(piVar14 + 0xc);
      }
LAB_0813e41f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_5a0._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_5a0) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813e41f;
      }
      if (uStack_5a0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x081d2e80(&puStack_5b8,&uStack_3a8,&UNK_013468db,0xb,0x10);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0ef46ef8;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_081d37d0;
    puStack_5d8 = &UNK_081d3930;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d3140(&puStack_5b8);
    uStack_278 = (undefined1)uStack_378;
    uStack_288 = uStack_388;
    uStack_284 = uStack_384;
    iStack_280 = iStack_380;
    uStack_27c = uStack_37c;
    uStack_298 = uStack_398;
    uStack_294 = uStack_394;
    uStack_290 = uStack_390;
    uStack_28c = uStack_38c;
    uStack_2a8 = uStack_3a8;
    uStack_2a4 = uStack_3a4;
    uStack_2a0 = uStack_3a0;
    uStack_29c = uStack_39c;
    FUN_048b0bc0(&uStack_5a0);
    uStack_328 = uStack_2a8;
    uStack_324 = uStack_2a4;
    uStack_320 = uStack_2a0;
    uStack_31c = uStack_29c;
    uStack_318 = uStack_298;
    uStack_314 = uStack_294;
    uStack_310 = uStack_290;
    uStack_30c = uStack_28c;
    uStack_308 = uStack_288;
    uStack_304 = uStack_284;
    iStack_300 = iStack_280;
    uStack_2fc = uStack_27c;
    uStack_2f8 = CONCAT71(uStack_277,uStack_278);
    func_0x081d2e80(&puStack_5b8,&uStack_328,&UNK_0125d8f9,0xf,0);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f00b448;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05dfaf00;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05dfabc0;
    puStack_5e0 = &UNK_081d3b10;
    puStack_5d8 = &UNK_081d3c80;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d3140(&puStack_5b8);
    uStack_238 = (undefined1)uStack_2f8;
    uStack_248 = uStack_308;
    uStack_244 = uStack_304;
    iStack_240 = iStack_300;
    uStack_23c = uStack_2fc;
    uStack_258 = uStack_318;
    uStack_254 = uStack_314;
    uStack_250 = uStack_310;
    uStack_24c = uStack_30c;
    uStack_268 = uStack_328;
    uStack_264 = uStack_324;
    uStack_260 = uStack_320;
    uStack_25c = uStack_31c;
    FUN_048b0bc0(&uStack_5a0);
    uStack_368 = uStack_268;
    uStack_364 = uStack_264;
    uStack_360 = uStack_260;
    uStack_35c = uStack_25c;
    uStack_358 = uStack_258;
    uStack_354 = uStack_254;
    uStack_350 = uStack_250;
    uStack_34c = uStack_24c;
    uStack_348 = uStack_248;
    uStack_344 = uStack_244;
    iStack_340 = iStack_240;
    uStack_33c = uStack_23c;
    uStack_338 = CONCAT71(uStack_237,uStack_238);
    func_0x081d2840(&puStack_5b8,CONCAT44(uStack_264,uStack_268) + 0x18);
    if (uStack_5a0._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_5a0) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      puVar6 = *(undefined4 **)(piVar14 + 0xc);
      while (puVar6 != puStack_5b0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        puVar6 = *(undefined4 **)(piVar14 + 0xc);
      }
LAB_0813e84f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_5a0._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_5a0) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813e84f;
      }
      if (uStack_5a0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x081d2e80(&puStack_5b8,&uStack_368,&UNK_012c37a6,0xd,0x10);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0126a0;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05daea90;
    puStack_5e0 = &UNK_081d3e60;
    puStack_5d8 = &UNK_081d3fc0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d3140(&puStack_5b8);
    uStack_1f8 = (undefined1)uStack_338;
    uStack_208 = uStack_348;
    uStack_204 = uStack_344;
    iStack_200 = iStack_340;
    uStack_1fc = uStack_33c;
    uStack_218 = uStack_358;
    uStack_214 = uStack_354;
    uStack_210 = uStack_350;
    uStack_20c = uStack_34c;
    uStack_228 = uStack_368;
    uStack_224 = uStack_364;
    uStack_220 = uStack_360;
    uStack_21c = uStack_35c;
    FUN_048b0bc0(&uStack_5a0);
    uStack_428 = uStack_228;
    uStack_424 = uStack_224;
    uStack_420 = uStack_220;
    uStack_41c = uStack_21c;
    uStack_418 = uStack_218;
    uStack_414 = uStack_214;
    uStack_410 = uStack_210;
    uStack_40c = uStack_20c;
    uStack_408 = uStack_208;
    uStack_404 = uStack_204;
    iStack_400 = iStack_200;
    uStack_3fc = uStack_1fc;
    uStack_3f8 = CONCAT71(uStack_1f7,uStack_1f8);
    func_0x081d2840(&puStack_5b8,CONCAT44(uStack_224,uStack_228) + 0x18);
    if (uStack_5a0._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_5a0) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      puVar6 = *(undefined4 **)(piVar14 + 0xc);
      while (puVar6 != puStack_5b0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        puVar6 = *(undefined4 **)(piVar14 + 0xc);
      }
LAB_0813eb1f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_5a0._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_5a0) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813eb1f;
      }
      if (uStack_5a0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x081d2e80(&puStack_5b8,&uStack_428,&UNK_014b384a,9,0x10);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0ef46ef8;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_081d41a0;
    puStack_5d8 = &UNK_081d4300;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d3140(&puStack_5b8);
    uStack_3b8 = CONCAT71(uStack_3b8._1_7_,(undefined1)uStack_3f8);
    uStack_3c8 = uStack_408;
    uStack_3c4 = uStack_404;
    iStack_3c0 = iStack_400;
    uStack_3bc = uStack_3fc;
    uStack_3d8 = uStack_418;
    uStack_3d4 = uStack_414;
    uStack_3d0 = uStack_410;
    uStack_3cc = uStack_40c;
    uStack_3e8 = uStack_428;
    uStack_3e4 = uStack_424;
    uStack_3e0 = uStack_420;
    uStack_3dc = uStack_41c;
    FUN_048b0bc0(&uStack_5a0);
    uStack_468 = uStack_3e8;
    uStack_464 = uStack_3e4;
    uStack_460 = uStack_3e0;
    uStack_45c = uStack_3dc;
    uStack_458 = uStack_3d8;
    uStack_454 = uStack_3d4;
    uStack_450 = uStack_3d0;
    uStack_44c = uStack_3cc;
    uStack_448 = uStack_3c8;
    uStack_444 = uStack_3c4;
    iStack_440 = iStack_3c0;
    uStack_43c = uStack_3bc;
    uStack_438 = uStack_3b8;
    func_0x081d2840(&puStack_5b8,CONCAT44(uStack_3e4,uStack_3e8) + 0x18);
    if (uStack_5a0._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_5a0) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      puVar6 = *(undefined4 **)(piVar14 + 0xc);
      while (puVar6 != puStack_5b0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        puVar6 = *(undefined4 **)(piVar14 + 0xc);
      }
LAB_0813ed8f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_5a0._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_5a0) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813ed8f;
      }
      if (uStack_5a0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x081d2e80(&puStack_5b8,&uStack_468,&UNK_012dd650,0xc,0x10);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0ef46ef8;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_081d44e0;
    puStack_5d8 = &UNK_081d4640;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d3140(&puStack_5b8);
    cStack_478 = (char)uStack_438;
    uStack_488 = uStack_448;
    uStack_484 = uStack_444;
    iStack_480 = iStack_440;
    uStack_47c = uStack_43c;
    uStack_498 = uStack_458;
    uStack_494 = uStack_454;
    uStack_490 = uStack_450;
    uStack_48c = uStack_44c;
    uStack_4a8 = CONCAT44(uStack_464,uStack_468);
    uStack_4a0 = (long *)CONCAT44(uStack_45c,uStack_460);
    FUN_048b0bc0(&uStack_5a0);
    func_0x081d2840(&puStack_5b8,uStack_4a8 + 0x18);
    if (uStack_5a0._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != (int)uStack_5a0) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      puVar6 = *(undefined4 **)(piVar14 + 0xc);
      while (puVar6 != puStack_5b0) {
        piVar14 = *(int **)(piVar14 + 0xe);
        puVar6 = *(undefined4 **)(piVar14 + 0xc);
      }
LAB_0813efbf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_5a0._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != (int)uStack_5a0) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813efbf;
      }
      if (uStack_5a0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x081d2e80(&puStack_5b8,&uStack_4a8,&UNK_01228e2b,0x10,0x10);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0ef46ef8;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_081d4820;
    puStack_5d8 = &UNK_081d4980;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d3140(&puStack_5b8);
    FUN_048b0bc0(&uStack_5a0);
  }
  if ((DAT_0f5c9928 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9928), iVar10 != 0)) {
    func_0x081d5b10();
    func_0x0410844d(&DAT_0f5c9928);
  }
  uVar19 = _DAT_0f5c9920;
  lVar18 = _DAT_0f5c9918;
  if ((DAT_0f5c9908 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9908), iVar10 != 0)) {
    func_0x081d4c20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9888,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9908);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9888 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_0813f161;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9888 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0813f161:
    puVar12 = &DAT_0f5c9888;
    iVar10 = iRam000000000f5c98e8;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081d4ff0(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    if ((DAT_0f5c9928 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9928), iVar10 != 0)) {
      func_0x081d5b10();
      func_0x0410844d(&DAT_0f5c9928);
    }
    uStack_4c0 = 0xa7f69c3e00000001;
    lVar18 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9908 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9908), iVar10 != 0)) {
      func_0x081d4c20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9888,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9908);
    }
    puStack_5b0 = (undefined4 *)(lVar18 + 0x18);
    plVar15 = (long *)(*(long *)(lVar18 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c9888 + 4)) * 8);
    do {
      lVar3 = *plVar15;
      if (lVar3 == -1) goto LAB_0813f260;
      plVar15 = (long *)(*(long *)(lVar18 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar18 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9888 + 4))
    ;
    if (plVar15 == *(long **)(lVar18 + 0x38)) {
LAB_0813f260:
      puStack_5b8 = &DAT_0f5c9888;
    }
    else {
      puStack_5b8 = (undefined *)plVar15[2];
    }
    func_0x0ed621a0(&puStack_5b8,uStack_4c0._4_4_);
    puStack_5b8 = (undefined *)CONCAT62(puStack_5b8._2_6_,1);
    uStack_5a8 = uStack_4c0._4_4_;
    uStack_5a0 = (long *)0x0;
    lStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    lStack_580 = 0;
    uStack_578 = 0x12;
    uStack_577 = 0x20786f42;
    uStack_573 = 0x6e756f42;
    uStack_56f = 100;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    uStack_530 = 0x3f600000;
    puStack_5b0 = &uStack_4e0;
    func_0x048afb10(&lStack_560,8);
    uStack_508 = 0;
    lStack_500 = 0;
    lStack_518 = 0;
    uStack_510 = 0;
    lStack_528 = 0;
    lStack_520 = 0;
    uStack_4f8 = 0xff00;
    uStack_4f4 = uStack_4f4 & 0xffffff00;
    uStack_4f0 = uStack_4f0 & 0xffffff00;
    uStack_4ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0124a8;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = puVar16;
      (**(code **)(lVar18 + 8))();
      puVar16 = uStack_5a0;
    }
    uStack_5a0 = puVar16;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05da29c0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05da26d0;
    puStack_5e0 = &UNK_081d5b90;
    puStack_5d8 = &UNK_081d5d00;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    puVar6 = puStack_5b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_620[0] = _DAT_0f550a0c;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar18 = lStack_598;
    puVar16 = uStack_5a0;
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&UNK_0ef439d0;
    plStack_618 = plVar15 + 3;
    uStack_5a0 = (long *)0x0;
    lStack_598 = 0;
    plVar15[3] = (long)puVar16;
    plVar15[4] = lVar18;
    plVar15[7] = lStack_580;
    plVar15[5] = uStack_590;
    plVar15[6] = uStack_588;
    uStack_590 = 0;
    uStack_588 = 0;
    lStack_580 = 0;
    plVar15[10] = CONCAT53(uStack_565,CONCAT21(uStack_567,uStack_568));
    plVar15[8] = CONCAT35((undefined3)uStack_573,CONCAT41(uStack_577,uStack_578));
    plVar15[9] = CONCAT26(uStack_56a,
                          CONCAT15(uStack_56b,
                                   CONCAT23(uStack_56d,CONCAT21(uStack_56f,uStack_573._3_1_))));
    uStack_578 = 0;
    uStack_577 = 0;
    uStack_573 = 0;
    uStack_56f = 0;
    uStack_56d = 0;
    uStack_56b = 0;
    uStack_56a = 0;
    uStack_568 = 0;
    uStack_567 = 0;
    uStack_565 = 0;
    plVar15[0xb] = lStack_560;
    plVar15[0xc] = lStack_558;
    plVar15[0xd] = lStack_550;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    plVar15[0xe] = lStack_548;
    plVar15[0xf] = lStack_540;
    plVar15[0x10] = lStack_538;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    *(undefined4 *)(plVar15 + 0x11) = uStack_530;
    plVar15[0x12] = lStack_528;
    plVar15[0x13] = lStack_520;
    plVar15[0x14] = lStack_518;
    lStack_528 = 0;
    lStack_520 = 0;
    lStack_518 = 0;
    plVar15[0x17] = lStack_500;
    *(undefined4 *)(plVar15 + 0x15) = (undefined4)uStack_510;
    *(undefined4 *)((long)plVar15 + 0xac) = uStack_510._4_4_;
    *(undefined4 *)(plVar15 + 0x16) = (undefined4)uStack_508;
    *(undefined4 *)((long)plVar15 + 0xb4) = uStack_508._4_4_;
    uStack_510 = 0;
    uStack_508 = 0;
    lStack_500 = 0;
    *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_4ec,CONCAT43(uStack_4f0,uStack_4f4._1_3_));
    plVar15[0x18] = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,uStack_4f8));
    uStack_4a8 = 0;
    uStack_4a0 = (long *)0x0;
    plStack_610 = plVar15;
    func_0x048afd20(puVar6,auStack_620);
    plVar15 = plStack_610;
    if (plStack_610 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_610 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_610 + 0x10))(plStack_610);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_4a0;
    if (uStack_4a0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4a0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_4a0 + 0x10))(uStack_4a0);
        func_0x0412c2d0(plVar15);
      }
    }
    lVar18 = *(long *)(puVar6 + 4);
    iVar10 = puVar6[7];
    if (iVar10 == 2) {
      piVar14 = *(int **)(*(long *)(lVar18 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != puVar6[6]) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      for (; *(long *)(piVar14 + 0xc) != *(long *)(puVar6 + 2); piVar14 = *(int **)(piVar14 + 0xe))
      {
      }
LAB_0813f72a:
      piVar14[4] = piVar14[4] | (int)puStack_5b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar14 = *(int **)(*(long *)(lVar18 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != puVar6[6]) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813f72a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar18 + 0x18) = *(uint *)(lVar18 + 0x18) | (int)puStack_5b8 << 0x10;
      }
    }
    FUN_048b0bc0(&uStack_5a0);
  }
  if ((DAT_0f5c99e0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c99e0), iVar10 != 0)) {
    func_0x081d6e80();
    func_0x0410844d(&DAT_0f5c99e0);
  }
  uVar19 = _DAT_0f5c99d8;
  lVar18 = _DAT_0f5c99d0;
  if ((DAT_0f5c99c0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c99c0), iVar10 != 0)) {
    func_0x081d5f90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9940,0xf53dab8);
    func_0x0410844d(&DAT_0f5c99c0);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9940 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_0813f7b1;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9940 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0813f7b1:
    puVar12 = &DAT_0f5c9940;
    iVar10 = iRam000000000f5c99a0;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081d6360(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    if ((DAT_0f5c99e0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c99e0), iVar10 != 0)) {
      func_0x081d6e80();
      func_0x0410844d(&DAT_0f5c99e0);
    }
    uStack_4c0 = 0x448af7500000001;
    lVar18 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c99c0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c99c0), iVar10 != 0)) {
      func_0x081d5f90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9940,0xf53dab8);
      func_0x0410844d(&DAT_0f5c99c0);
    }
    puStack_5b0 = (undefined4 *)(lVar18 + 0x18);
    plVar15 = (long *)(*(long *)(lVar18 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c9940 + 4)) * 8);
    do {
      lVar3 = *plVar15;
      if (lVar3 == -1) goto LAB_0813f8b0;
      plVar15 = (long *)(*(long *)(lVar18 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar18 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9940 + 4))
    ;
    if (plVar15 == *(long **)(lVar18 + 0x38)) {
LAB_0813f8b0:
      puStack_5b8 = &DAT_0f5c9940;
    }
    else {
      puStack_5b8 = (undefined *)plVar15[2];
    }
    func_0x0ed621a0(&puStack_5b8,uStack_4c0._4_4_);
    puStack_5b8 = (undefined *)CONCAT62(puStack_5b8._2_6_,1);
    uStack_5a8 = uStack_4c0._4_4_;
    uStack_5a0 = (long *)0x0;
    lStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    lStack_580 = 0;
    uStack_578 = 0x22;
    uStack_577 = _DAT_014cf06f;
    uStack_573 = _UNK_014cf073;
    uStack_56f = (undefined2)_UNK_014cf077;
    uStack_56d = (undefined2)((uint)_UNK_014cf077 >> 0x10);
    uStack_56b = (undefined1)_UNK_014cf07b;
    uStack_56a = (undefined2)((uint)_UNK_014cf07b >> 8);
    uStack_568 = (undefined1)((uint)_UNK_014cf07b >> 0x18);
    uStack_567 = 0x6e;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    uStack_530 = 0x3f600000;
    puStack_5b0 = &uStack_4e0;
    func_0x048afb10(&lStack_560,8);
    uStack_508 = 0;
    lStack_500 = 0;
    lStack_518 = 0;
    uStack_510 = 0;
    lStack_528 = 0;
    lStack_520 = 0;
    uStack_4f8 = 0xff00;
    uStack_4f4 = uStack_4f4 & 0xffffff00;
    uStack_4f0 = uStack_4f0 & 0xffffff00;
    uStack_4ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f0124a8;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = puVar16;
      (**(code **)(lVar18 + 8))();
      puVar16 = uStack_5a0;
    }
    uStack_5a0 = puVar16;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05da29c0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05da26d0;
    puStack_5e0 = &UNK_081d6f00;
    puStack_5d8 = &UNK_081d7070;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    puVar6 = puStack_5b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_620[0] = _DAT_0f550a0c;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar18 = lStack_598;
    puVar16 = uStack_5a0;
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&UNK_0ef439d0;
    plStack_618 = plVar15 + 3;
    uStack_5a0 = (long *)0x0;
    lStack_598 = 0;
    plVar15[3] = (long)puVar16;
    plVar15[4] = lVar18;
    plVar15[7] = lStack_580;
    plVar15[5] = uStack_590;
    plVar15[6] = uStack_588;
    uStack_590 = 0;
    uStack_588 = 0;
    lStack_580 = 0;
    plVar15[10] = CONCAT53(uStack_565,CONCAT21(uStack_567,uStack_568));
    plVar15[8] = CONCAT35((undefined3)uStack_573,CONCAT41(uStack_577,uStack_578));
    plVar15[9] = CONCAT26(uStack_56a,
                          CONCAT15(uStack_56b,
                                   CONCAT23(uStack_56d,CONCAT21(uStack_56f,uStack_573._3_1_))));
    uStack_578 = 0;
    uStack_577 = 0;
    uStack_573 = 0;
    uStack_56f = 0;
    uStack_56d = 0;
    uStack_56b = 0;
    uStack_56a = 0;
    uStack_568 = 0;
    uStack_567 = 0;
    uStack_565 = 0;
    plVar15[0xb] = lStack_560;
    plVar15[0xc] = lStack_558;
    plVar15[0xd] = lStack_550;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    plVar15[0xe] = lStack_548;
    plVar15[0xf] = lStack_540;
    plVar15[0x10] = lStack_538;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    *(undefined4 *)(plVar15 + 0x11) = uStack_530;
    plVar15[0x12] = lStack_528;
    plVar15[0x13] = lStack_520;
    plVar15[0x14] = lStack_518;
    lStack_528 = 0;
    lStack_520 = 0;
    lStack_518 = 0;
    plVar15[0x17] = lStack_500;
    *(undefined4 *)(plVar15 + 0x15) = (undefined4)uStack_510;
    *(undefined4 *)((long)plVar15 + 0xac) = uStack_510._4_4_;
    *(undefined4 *)(plVar15 + 0x16) = (undefined4)uStack_508;
    *(undefined4 *)((long)plVar15 + 0xb4) = uStack_508._4_4_;
    uStack_510 = 0;
    uStack_508 = 0;
    lStack_500 = 0;
    *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_4ec,CONCAT43(uStack_4f0,uStack_4f4._1_3_));
    plVar15[0x18] = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,uStack_4f8));
    uStack_4a8 = 0;
    uStack_4a0 = (long *)0x0;
    plStack_610 = plVar15;
    func_0x048afd20(puVar6,auStack_620);
    plVar15 = plStack_610;
    if (plStack_610 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_610 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_610 + 0x10))(plStack_610);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_4a0;
    if (uStack_4a0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4a0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_4a0 + 0x10))(uStack_4a0);
        func_0x0412c2d0(plVar15);
      }
    }
    lVar18 = *(long *)(puVar6 + 4);
    iVar10 = puVar6[7];
    if (iVar10 == 2) {
      piVar14 = *(int **)(*(long *)(lVar18 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != puVar6[6]) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      for (; *(long *)(piVar14 + 0xc) != *(long *)(puVar6 + 2); piVar14 = *(int **)(piVar14 + 0xe))
      {
      }
LAB_0813fdda:
      piVar14[4] = piVar14[4] | (int)puStack_5b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar14 = *(int **)(*(long *)(lVar18 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != puVar6[6]) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0813fdda;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar18 + 0x18) = *(uint *)(lVar18 + 0x18) | (int)puStack_5b8 << 0x10;
      }
    }
    FUN_048b0bc0(&uStack_5a0);
  }
  if ((DAT_0f5c9a98 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9a98), iVar10 != 0)) {
    func_0x081d81b0();
    func_0x0410844d(&DAT_0f5c9a98);
  }
  uVar19 = _DAT_0f5c9a90;
  lVar18 = _DAT_0f5c9a88;
  if ((DAT_0f5c9a78 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9a78), iVar10 != 0)) {
    func_0x081d7300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c99f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9a78);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c99f8 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_0813fe61;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c99f8 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0813fe61:
    puVar12 = &DAT_0f5c99f8;
    iVar10 = iRam000000000f5c9a58;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081d76a0(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    if ((DAT_0f5c9a98 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9a98), iVar10 != 0)) {
      func_0x081d81b0();
      func_0x0410844d(&DAT_0f5c9a98);
    }
    uStack_4c0 = 0xe70056f300000001;
    lVar18 = CONCAT44(uStack_4e4,uStack_4e8);
    if ((DAT_0f5c9a78 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9a78), iVar10 != 0)) {
      func_0x081d7300();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c99f8,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9a78);
    }
    puStack_5b0 = (undefined4 *)(lVar18 + 0x18);
    plVar15 = (long *)(*(long *)(lVar18 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c99f8 + 4)) * 8);
    do {
      lVar3 = *plVar15;
      if (lVar3 == -1) goto LAB_0813ff60;
      plVar15 = (long *)(*(long *)(lVar18 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar18 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c99f8 + 4))
    ;
    if (plVar15 == *(long **)(lVar18 + 0x38)) {
LAB_0813ff60:
      puStack_5b8 = &DAT_0f5c99f8;
    }
    else {
      puStack_5b8 = (undefined *)plVar15[2];
    }
    func_0x0ed621a0(&puStack_5b8,uStack_4c0._4_4_);
    puStack_5b8 = (undefined *)CONCAT62(puStack_5b8._2_6_,1);
    uStack_5a8 = uStack_4c0._4_4_;
    uStack_5a0 = (long *)0x0;
    lStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    lStack_580 = 0;
    uStack_578 = 0x18;
    uStack_577 = 0x206d754e;
    uStack_573 = 0x6d676553;
    uStack_56f = 0x6e65;
    uStack_56d = 0x7374;
    uStack_56b = 0;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    uStack_530 = 0x3f600000;
    puStack_5b0 = &uStack_4e0;
    func_0x048afb10(&lStack_560,8);
    uStack_508 = 0;
    lStack_500 = 0;
    lStack_518 = 0;
    uStack_510 = 0;
    lStack_528 = 0;
    lStack_520 = 0;
    uStack_4f8 = 0xff00;
    uStack_4f4 = uStack_4f4 & 0xffffff00;
    uStack_4f0 = uStack_4f0 & 0xffffff00;
    uStack_4ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f012438;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = puVar16;
      (**(code **)(lVar18 + 8))();
      puVar16 = uStack_5a0;
    }
    uStack_5a0 = puVar16;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05fc5e00;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05dcda00;
    puStack_5e0 = &UNK_081d8230;
    puStack_5d8 = &UNK_081d8390;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    puVar6 = puStack_5b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_620[0] = _DAT_0f550a0c;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar18 = lStack_598;
    puVar16 = uStack_5a0;
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&UNK_0ef439d0;
    plStack_618 = plVar15 + 3;
    uStack_5a0 = (long *)0x0;
    lStack_598 = 0;
    plVar15[3] = (long)puVar16;
    plVar15[4] = lVar18;
    plVar15[7] = lStack_580;
    plVar15[5] = uStack_590;
    plVar15[6] = uStack_588;
    uStack_590 = 0;
    uStack_588 = 0;
    lStack_580 = 0;
    plVar15[10] = CONCAT53(uStack_565,CONCAT21(uStack_567,uStack_568));
    plVar15[8] = CONCAT35((undefined3)uStack_573,CONCAT41(uStack_577,uStack_578));
    plVar15[9] = CONCAT26(uStack_56a,
                          CONCAT15(uStack_56b,
                                   CONCAT23(uStack_56d,CONCAT21(uStack_56f,uStack_573._3_1_))));
    uStack_578 = 0;
    uStack_577 = 0;
    uStack_573 = 0;
    uStack_56f = 0;
    uStack_56d = 0;
    uStack_56b = 0;
    uStack_56a = 0;
    uStack_568 = 0;
    uStack_567 = 0;
    uStack_565 = 0;
    plVar15[0xb] = lStack_560;
    plVar15[0xc] = lStack_558;
    plVar15[0xd] = lStack_550;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    plVar15[0xe] = lStack_548;
    plVar15[0xf] = lStack_540;
    plVar15[0x10] = lStack_538;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    *(undefined4 *)(plVar15 + 0x11) = uStack_530;
    plVar15[0x12] = lStack_528;
    plVar15[0x13] = lStack_520;
    plVar15[0x14] = lStack_518;
    lStack_528 = 0;
    lStack_520 = 0;
    lStack_518 = 0;
    plVar15[0x17] = lStack_500;
    *(undefined4 *)(plVar15 + 0x15) = (undefined4)uStack_510;
    *(undefined4 *)((long)plVar15 + 0xac) = uStack_510._4_4_;
    *(undefined4 *)(plVar15 + 0x16) = (undefined4)uStack_508;
    *(undefined4 *)((long)plVar15 + 0xb4) = uStack_508._4_4_;
    uStack_510 = 0;
    uStack_508 = 0;
    lStack_500 = 0;
    *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_4ec,CONCAT43(uStack_4f0,uStack_4f4._1_3_));
    plVar15[0x18] = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,uStack_4f8));
    uStack_4a8 = 0;
    uStack_4a0 = (long *)0x0;
    plStack_610 = plVar15;
    func_0x048afd20(puVar6,auStack_620);
    plVar15 = plStack_610;
    if (plStack_610 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_610 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_610 + 0x10))(plStack_610);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = uStack_4a0;
    if (uStack_4a0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4a0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_4a0 + 0x10))(uStack_4a0);
        func_0x0412c2d0(plVar15);
      }
    }
    lVar18 = *(long *)(puVar6 + 4);
    iVar10 = puVar6[7];
    if (iVar10 == 2) {
      piVar14 = *(int **)(*(long *)(lVar18 + 0x78) + 0x60);
      iVar10 = *piVar14;
      while (iVar10 != puVar6[6]) {
        piVar14 = piVar14 + 0x16;
        iVar10 = *piVar14;
      }
      for (; *(long *)(piVar14 + 0xc) != *(long *)(puVar6 + 2); piVar14 = *(int **)(piVar14 + 0xe))
      {
      }
LAB_0814043a:
      piVar14[4] = piVar14[4] | (int)puStack_5b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar14 = *(int **)(*(long *)(lVar18 + 0x78) + 0x48);
        iVar10 = *piVar14;
        while (iVar10 != puVar6[6]) {
          piVar14 = piVar14 + 0x1a;
          iVar10 = *piVar14;
        }
        goto LAB_0814043a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar18 + 0x18) = *(uint *)(lVar18 + 0x18) | (int)puStack_5b8 << 0x10;
      }
    }
    FUN_048b0bc0(&uStack_5a0);
  }
  func_0x07821000(param_1);
  if ((DAT_0f5c9b50 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9b50), iVar10 != 0)) {
    func_0x081d9520();
    func_0x0410844d(&DAT_0f5c9b50);
  }
  uVar19 = _DAT_0f5c9b48;
  lVar18 = _DAT_0f5c9b40;
  if ((DAT_0f5c9b30 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9b30), iVar10 != 0)) {
    func_0x081d8620();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9ab0,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9b30);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9ab0 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_081404d1;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9ab0 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_081404d1:
    puVar12 = &DAT_0f5c9ab0;
    iVar10 = iRam000000000f5c9b10;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081d8a00(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    func_0x081d95a0(&uStack_3e8,&uStack_4e8,&UNK_013feb67);
    func_0x081d95a0(&uStack_468,&uStack_3e8,&UNK_01310449);
    func_0x081d9730(&puStack_5b8,&uStack_468,&UNK_01344ff9,6);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0126a0;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05daea90;
    puStack_5e0 = &UNK_081da010;
    puStack_5d8 = &UNK_081da170;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d99e0(&puStack_5b8);
    cStack_478 = (char)uStack_438;
    uStack_488 = uStack_448;
    uStack_484 = uStack_444;
    iStack_480 = iStack_440;
    uStack_47c = uStack_43c;
    uStack_498 = uStack_458;
    uStack_494 = uStack_454;
    uStack_490 = uStack_450;
    uStack_48c = uStack_44c;
    uStack_4a8 = CONCAT44(uStack_464,uStack_468);
    uStack_4a0 = (long *)CONCAT44(uStack_45c,uStack_460);
    FUN_048b0bc0(&uStack_5a0);
    func_0x081d9730(&puStack_5b8,&uStack_4a8,&UNK_012dd643,0xc);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012438;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05fc5e00;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05dcda00;
    puStack_5e0 = &UNK_081da350;
    puStack_5d8 = &UNK_081da4b0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081d99e0(&puStack_5b8);
    FUN_048b0bc0(&uStack_5a0);
  }
  if ((DAT_0f5c9c08 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9c08), iVar10 != 0)) {
    func_0x081db650();
    func_0x0410844d(&DAT_0f5c9c08);
  }
  uVar19 = _DAT_0f5c9c00;
  lVar18 = _DAT_0f5c9bf8;
  if ((DAT_0f5c9be8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9be8), iVar10 != 0)) {
    func_0x081da750();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9b68,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9be8);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9b68 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_08140891;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9b68 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_08140891:
    puVar12 = &DAT_0f5c9b68;
    iVar10 = iRam000000000f5c9bc8;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081dab30(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    func_0x081db6d0(&puStack_5b8,&uStack_4e8,&UNK_01463fad,5,1);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0126a0;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05daea90;
    puStack_5e0 = &UNK_081dbc60;
    puStack_5d8 = &UNK_081dbdc0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081db960(&puStack_5b8);
    uStack_438 = CONCAT71(uStack_438._1_7_,cStack_4b8);
    uStack_448 = uStack_4c8;
    uStack_444 = uStack_4c4;
    iStack_440 = (int)uStack_4c0;
    uStack_43c = uStack_4c0._4_4_;
    uStack_458 = uStack_4d8;
    uStack_454 = uStack_4d4;
    uStack_450 = uStack_4d0;
    uStack_44c = uStack_4cc;
    uStack_468 = uStack_4e8;
    uStack_464 = uStack_4e4;
    uStack_460 = uStack_4e0;
    uStack_45c = uStack_4dc;
    FUN_048b0bc0(&uStack_5a0);
    func_0x081db6d0(&puStack_5b8,&uStack_468,&UNK_0124366f,5,0);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0122d0;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05de9430;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05de9110;
    puStack_5e0 = &UNK_081dbf90;
    puStack_5d8 = &UNK_081dc100;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081db960(&puStack_5b8);
    cStack_478 = (char)uStack_438;
    uStack_488 = uStack_448;
    uStack_484 = uStack_444;
    iStack_480 = iStack_440;
    uStack_47c = uStack_43c;
    uStack_498 = uStack_458;
    uStack_494 = uStack_454;
    uStack_490 = uStack_450;
    uStack_48c = uStack_44c;
    uStack_4a8 = CONCAT44(uStack_464,uStack_468);
    uStack_4a0 = (long *)CONCAT44(uStack_45c,uStack_460);
    FUN_048b0bc0(&uStack_5a0);
    func_0x081db6d0(&puStack_5b8,&uStack_4a8,&UNK_01344ff9,6,1);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0126a0;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05daea90;
    puStack_5e0 = &UNK_081dc2e0;
    puStack_5d8 = &UNK_081dc440;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081db960(&puStack_5b8);
    FUN_048b0bc0(&uStack_5a0);
  }
  func_0x078210b0(param_1);
  if ((DAT_0f5c9cc0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9cc0), iVar10 != 0)) {
    func_0x081dd600();
    func_0x0410844d(&DAT_0f5c9cc0);
  }
  uVar19 = _DAT_0f5c9cb8;
  lVar18 = _DAT_0f5c9cb0;
  if ((DAT_0f5c9ca0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9ca0), iVar10 != 0)) {
    func_0x081dc6e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9c20,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9ca0);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9c20 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_08140d81;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9c20 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_08140d81:
    puVar12 = &DAT_0f5c9c20;
    iVar10 = iRam000000000f5c9c80;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081dcad0(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    func_0x081dd680(&puStack_5b8,&uStack_4e8,&UNK_011a33c6,5);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0124a8;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05da29c0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05da26d0;
    puStack_5e0 = &UNK_081ddc30;
    puStack_5d8 = &UNK_081ddda0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081dd930(&puStack_5b8);
    cStack_478 = cStack_4b8;
    uStack_488 = uStack_4c8;
    uStack_484 = uStack_4c4;
    iStack_480 = (int)uStack_4c0;
    uStack_47c = uStack_4c0._4_4_;
    uStack_498 = uStack_4d8;
    uStack_494 = uStack_4d4;
    uStack_490 = uStack_4d0;
    uStack_48c = uStack_4cc;
    uStack_4a8 = CONCAT44(uStack_4e4,uStack_4e8);
    uStack_4a0 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
    FUN_048b0bc0(&uStack_5a0);
    func_0x081dd680(&puStack_5b8,&uStack_4a8,&UNK_011d9848,0x11);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012438;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05fc5e00;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05dcda00;
    puStack_5e0 = &UNK_081ddf70;
    puStack_5d8 = &UNK_081de0d0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081dd930(&puStack_5b8);
    FUN_048b0bc0(&uStack_5a0);
  }
  func_0x07821000(param_1);
  if ((DAT_0f5c9d78 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9d78), iVar10 != 0)) {
    func_0x081df270();
    func_0x0410844d(&DAT_0f5c9d78);
  }
  uVar19 = _DAT_0f5c9d70;
  lVar18 = _DAT_0f5c9d68;
  if ((DAT_0f5c9d58 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9d58), iVar10 != 0)) {
    func_0x081de370();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9cd8,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9d58);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9cd8 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_08141111;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9cd8 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_08141111:
    puVar12 = &DAT_0f5c9cd8;
    iVar10 = iRam000000000f5c9d38;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081de750(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 == '\0') {
    func_0x081df2f0(&puStack_5b8,&uStack_4e8,&UNK_011a33c6,5);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012250;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05e81fb0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05e2f040;
    puStack_5e0 = &UNK_081df8a0;
    puStack_5d8 = &UNK_081dfa00;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081df5a0(&puStack_5b8);
    uStack_438 = CONCAT71(uStack_438._1_7_,cStack_4b8);
    uStack_448 = uStack_4c8;
    uStack_444 = uStack_4c4;
    iStack_440 = (int)uStack_4c0;
    uStack_43c = uStack_4c0._4_4_;
    uStack_458 = uStack_4d8;
    uStack_454 = uStack_4d4;
    uStack_450 = uStack_4d0;
    uStack_44c = uStack_4cc;
    uStack_468 = uStack_4e8;
    uStack_464 = uStack_4e4;
    uStack_460 = uStack_4e0;
    uStack_45c = uStack_4dc;
    FUN_048b0bc0(&uStack_5a0);
    func_0x081df2f0(&puStack_5b8,&uStack_468,&UNK_01344ff9,6);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f0126a0;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_05daea90;
    puStack_5e0 = &UNK_081dfbd0;
    puStack_5d8 = &UNK_081dfd30;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081df5a0(&puStack_5b8);
    cStack_478 = (char)uStack_438;
    uStack_488 = uStack_448;
    uStack_484 = uStack_444;
    iStack_480 = iStack_440;
    uStack_47c = uStack_43c;
    uStack_498 = uStack_458;
    uStack_494 = uStack_454;
    uStack_490 = uStack_450;
    uStack_48c = uStack_44c;
    uStack_4a8 = CONCAT44(uStack_464,uStack_468);
    uStack_4a0 = (long *)CONCAT44(uStack_45c,uStack_460);
    FUN_048b0bc0(&uStack_5a0);
    func_0x081df2f0(&puStack_5b8,&uStack_4a8,&UNK_012dd643,0xc);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012438;
    if (uStack_5a0 != (long *)0x0) {
      lVar18 = *uStack_5a0;
      uStack_5a0 = plVar15;
      (**(code **)(lVar18 + 8))();
      plVar15 = uStack_5a0;
    }
    uStack_5a0 = plVar15;
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05fc5e00;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05dcda00;
    puStack_5e0 = &UNK_081dff10;
    puStack_5d8 = &UNK_081e0070;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(puStack_5b0,auStack_620);
    plVar15 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5c0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x081df5a0(&puStack_5b8);
    FUN_048b0bc0(&uStack_5a0);
  }
  func_0x07cb2d80(param_1);
  func_0x07be4b40(param_1);
  if ((DAT_0f5c9e30 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e30), iVar10 != 0)) {
    func_0x081e1a30();
    func_0x0410844d(&DAT_0f5c9e30);
  }
  uVar19 = _DAT_0f5c9e28;
  lVar18 = _DAT_0f5c9e20;
  if ((DAT_0f5c9e10 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c9e10), iVar10 != 0)) {
    func_0x081e0310();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9d90,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9e10);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c9d90 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_08141611;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9d90 + 4));
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_08141611:
    puVar12 = &DAT_0f5c9d90;
    iVar10 = iRam000000000f5c9df0;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar10 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar3 = *(long *)(puVar12 + 0x68), lVar3 != 0)) {
    bVar22 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar18 = lVar3 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar3 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar3 + 0x10);
    }
  }
  func_0x081e0e50(&uStack_4e8,param_1,lVar18,uVar19);
  if (cStack_4b8 != '\0') {
    return;
  }
  func_0x081e1ab0(&puStack_5b8,&uStack_4e8,&UNK_0149b641,9,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f01ae00;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_06046510;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_0602fbb0;
  puStack_5e0 = &UNK_081e20c0;
  puStack_5d8 = &UNK_081e2220;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  lVar18 = CONCAT44(uStack_4e4,uStack_4e8);
  uStack_78 = CONCAT44(uStack_4dc,uStack_4e0);
  uStack_70 = CONCAT44(uStack_4d4,uStack_4d8);
  uStack_68 = uStack_4d0;
  uStack_64 = uStack_4cc;
  uStack_60 = uStack_4c8;
  uStack_5c = uStack_4c4;
  iVar10 = (int)uStack_4c0;
  uVar7 = uStack_4c0._4_4_;
  FUN_048b0bc0(&uStack_5a0);
  if ((DAT_0f5c9e10 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5c9e10), iVar11 != 0)) {
    func_0x081e0310();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9d90,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9e10);
  }
  plVar15 = (long *)(*(long *)(lVar18 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5c9d90 + 4)) * 8);
  do {
    lVar3 = *plVar15;
    if (lVar3 == -1) goto LAB_08141861;
    plVar15 = (long *)(*(long *)(lVar18 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar18 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5c9d90 + 4));
  if (plVar15 == *(long **)(lVar18 + 0x38)) {
LAB_08141861:
    puVar12 = &DAT_0f5c9d90;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
  }
  if ((1 < iVar10 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012a9a89),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar12 = (undefined *)func_0x048b0c90(lVar18 + 0x18,puVar12,uVar7,1);
  if (puVar12 == (undefined *)0x0) {
    puStack_5b8 = (undefined *)0x0;
    puStack_5b0 = (undefined4 *)0x0;
    func_0x048b0d20(&puStack_5b8);
    puVar12 = puStack_5b8;
  }
  *(undefined1 *)(*(long *)(puVar12 + 0x58) + 0xa8) = 1;
  uStack_1e0 = (undefined4)uStack_78;
  uStack_1dc = uStack_78._4_4_;
  uStack_1d8 = (undefined4)uStack_70;
  uStack_1d4 = uStack_70._4_4_;
  uStack_1d0 = uStack_68;
  uStack_1cc = uStack_64;
  uStack_1c8 = uStack_60;
  uStack_1c4 = uStack_5c;
  iStack_1c0 = iVar10;
  uStack_1bc = uVar7;
  cStack_1b8 = cStack_4b8;
  lStack_1e8 = lVar18;
  func_0x081e1ab0(&puStack_5b8,&lStack_1e8,&UNK_01418e18,10,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f10c788;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_081e6690;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_081e62e0;
  puStack_5e0 = &UNK_081e6750;
  puStack_5d8 = &UNK_081e68b0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  cVar8 = cStack_1b8;
  uVar7 = uStack_1bc;
  iVar10 = iStack_1c0;
  uStack_58 = uStack_1e0;
  uStack_54 = uStack_1dc;
  uStack_50 = uStack_1d8;
  uStack_4c = uStack_1d4;
  uStack_48 = uStack_1d0;
  uStack_44 = uStack_1cc;
  uStack_40 = uStack_1c8;
  uStack_3c = uStack_1c4;
  FUN_048b0bc0(&uStack_5a0);
  if ((DAT_0f5c9e10 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5c9e10), iVar11 != 0)) {
    func_0x081e0310();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c9d90,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9e10);
  }
  plVar15 = (long *)(*(long *)(lStack_1e8 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_1e8 + 0x20) -
                                         *(long *)(lStack_1e8 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5c9d90 + 4)) * 8);
  do {
    lVar18 = *plVar15;
    if (lVar18 == -1) goto LAB_08141b11;
    plVar15 = (long *)(*(long *)(lStack_1e8 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(lStack_1e8 + 0x30) + 8 + lVar18 * 0x18) !=
           *(uint *)(_DAT_0f5c9d90 + 4));
  if (plVar15 == *(long **)(lStack_1e8 + 0x38)) {
LAB_08141b11:
    puVar12 = &DAT_0f5c9d90;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
  }
  if ((1 < iVar10 - 1U) &&
     (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012a9a89),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar12 = (undefined *)func_0x048b0c90(lStack_1e8 + 0x18,puVar12,uVar7,1);
  if (puVar12 == (undefined *)0x0) {
    puStack_5b8 = (undefined *)0x0;
    puStack_5b0 = (undefined4 *)0x0;
    func_0x048b0d20(&puStack_5b8);
    puVar12 = puStack_5b8;
  }
  *(undefined1 *)(*(long *)(puVar12 + 0x58) + 0xa8) = 4;
  uStack_1b0 = lStack_1e8;
  uStack_1a8 = uStack_58;
  uStack_1a4 = uStack_54;
  uStack_1a0 = uStack_50;
  uStack_19c = uStack_4c;
  uStack_198 = uStack_48;
  uStack_194 = uStack_44;
  uStack_190 = uStack_40;
  uStack_18c = uStack_3c;
  iStack_188 = iVar10;
  uStack_184 = uVar7;
  cStack_180 = cVar8;
  func_0x081e1ab0(&puStack_5b8,&uStack_1b0,&UNK_011f3585,8,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f012168;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_05dc3f10;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_05dc3bf0;
  puStack_5e0 = &UNK_081e6d30;
  puStack_5d8 = &UNK_081e6ea0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  cStack_c8 = cStack_180;
  uStack_d8 = uStack_190;
  uStack_d4 = uStack_18c;
  iStack_d0 = iStack_188;
  uStack_cc = uStack_184;
  uStack_e8 = uStack_1a0;
  uStack_e4 = uStack_19c;
  uStack_e0 = uStack_198;
  uStack_dc = uStack_194;
  uStack_f8 = (undefined4)uStack_1b0;
  uStack_f4 = uStack_1b0._4_4_;
  uStack_f0 = uStack_1a8;
  uStack_ec = uStack_1a4;
  FUN_048b0bc0(&uStack_5a0);
  uStack_178 = uStack_f8;
  uStack_174 = uStack_f4;
  uStack_170 = uStack_f0;
  uStack_16c = uStack_ec;
  uStack_168 = uStack_e8;
  uStack_164 = uStack_e4;
  uStack_160 = uStack_e0;
  uStack_15c = uStack_dc;
  uStack_158 = uStack_d8;
  uStack_154 = uStack_d4;
  iStack_150 = iStack_d0;
  uStack_14c = uStack_cc;
  uStack_148 = CONCAT71(uStack_c7,cStack_c8);
  func_0x081e1ab0(&puStack_5b8,&uStack_178,&UNK_01362d03,5,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0122d0;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_05de9430;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_05de9110;
  puStack_5e0 = &UNK_081e7080;
  puStack_5d8 = &UNK_081e71f0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  uStack_88 = (undefined1)uStack_148;
  uStack_98 = uStack_158;
  uStack_94 = uStack_154;
  iStack_90 = iStack_150;
  uStack_8c = uStack_14c;
  uStack_a8 = uStack_168;
  uStack_a4 = uStack_164;
  uStack_a0 = uStack_160;
  uStack_9c = uStack_15c;
  uStack_b8 = uStack_178;
  uStack_b4 = uStack_174;
  uStack_b0 = uStack_170;
  uStack_ac = uStack_16c;
  FUN_048b0bc0(&uStack_5a0);
  uStack_138 = uStack_b8;
  uStack_134 = uStack_b4;
  uStack_130 = uStack_b0;
  uStack_12c = uStack_ac;
  uStack_128 = uStack_a8;
  uStack_124 = uStack_a4;
  uStack_120 = uStack_a0;
  uStack_11c = uStack_9c;
  uStack_118 = uStack_98;
  uStack_114 = uStack_94;
  iStack_110 = iStack_90;
  uStack_10c = uStack_8c;
  uStack_108 = CONCAT71(uStack_87,uStack_88);
  func_0x081e1ab0(&puStack_5b8,&uStack_138,&UNK_0128f37c,8,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f012168;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_05dc3f10;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_05dc3bf0;
  puStack_5e0 = &UNK_081e73d0;
  puStack_5d8 = &UNK_081e7540;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  cStack_2b8 = (undefined1)uStack_108;
  uStack_2c8 = uStack_118;
  uStack_2c4 = uStack_114;
  iStack_2c0 = iStack_110;
  uStack_2bc = uStack_10c;
  uStack_2d8 = uStack_128;
  uStack_2d4 = uStack_124;
  uStack_2d0 = uStack_120;
  uStack_2cc = uStack_11c;
  uStack_2e8 = uStack_138;
  uStack_2e4 = uStack_134;
  uStack_2e0 = uStack_130;
  uStack_2dc = uStack_12c;
  FUN_048b0bc0(&uStack_5a0);
  uStack_3a8 = uStack_2e8;
  uStack_3a4 = uStack_2e4;
  uStack_3a0 = uStack_2e0;
  uStack_39c = uStack_2dc;
  uStack_398 = uStack_2d8;
  uStack_394 = uStack_2d4;
  uStack_390 = uStack_2d0;
  uStack_38c = uStack_2cc;
  uStack_388 = uStack_2c8;
  uStack_384 = uStack_2c4;
  iStack_380 = iStack_2c0;
  uStack_37c = uStack_2bc;
  uStack_378 = CONCAT71(uStack_2b7,cStack_2b8);
  func_0x081e1ab0(&puStack_5b8,&uStack_3a8,&UNK_0125d909,0xf,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0122d0;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_05de9430;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_05de9110;
  puStack_5e0 = &UNK_081e7720;
  puStack_5d8 = &UNK_081e7890;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  uStack_278 = (undefined1)uStack_378;
  uStack_288 = uStack_388;
  uStack_284 = uStack_384;
  iStack_280 = iStack_380;
  uStack_27c = uStack_37c;
  uStack_298 = uStack_398;
  uStack_294 = uStack_394;
  uStack_290 = uStack_390;
  uStack_28c = uStack_38c;
  uStack_2a8 = uStack_3a8;
  uStack_2a4 = uStack_3a4;
  uStack_2a0 = uStack_3a0;
  uStack_29c = uStack_39c;
  FUN_048b0bc0(&uStack_5a0);
  uStack_328 = uStack_2a8;
  uStack_324 = uStack_2a4;
  uStack_320 = uStack_2a0;
  uStack_31c = uStack_29c;
  uStack_318 = uStack_298;
  uStack_314 = uStack_294;
  uStack_310 = uStack_290;
  uStack_30c = uStack_28c;
  uStack_308 = uStack_288;
  uStack_304 = uStack_284;
  iStack_300 = iStack_280;
  uStack_2fc = uStack_27c;
  uStack_2f8 = CONCAT71(uStack_277,uStack_278);
  func_0x081e1ab0(&puStack_5b8,&uStack_328,&UNK_01310452,0x17,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0122d0;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_05de9430;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_05de9110;
  puStack_5e0 = &UNK_081e7a70;
  puStack_5d8 = &UNK_081e7be0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  uStack_238 = (undefined1)uStack_2f8;
  uStack_248 = uStack_308;
  uStack_244 = uStack_304;
  iStack_240 = iStack_300;
  uStack_23c = uStack_2fc;
  uStack_258 = uStack_318;
  uStack_254 = uStack_314;
  uStack_250 = uStack_310;
  uStack_24c = uStack_30c;
  uStack_268 = uStack_328;
  uStack_264 = uStack_324;
  uStack_260 = uStack_320;
  uStack_25c = uStack_31c;
  FUN_048b0bc0(&uStack_5a0);
  uStack_368 = uStack_268;
  uStack_364 = uStack_264;
  uStack_360 = uStack_260;
  uStack_35c = uStack_25c;
  uStack_358 = uStack_258;
  uStack_354 = uStack_254;
  uStack_350 = uStack_250;
  uStack_34c = uStack_24c;
  uStack_348 = uStack_248;
  uStack_344 = uStack_244;
  iStack_340 = iStack_240;
  uStack_33c = uStack_23c;
  uStack_338 = CONCAT71(uStack_237,uStack_238);
  func_0x081e1ab0(&puStack_5b8,&uStack_368,&UNK_0128b4e6,5,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f00b448;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_05dfaf00;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_05dfabc0;
  puStack_5e0 = &UNK_081e7dc0;
  puStack_5d8 = &UNK_081e7f30;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  uStack_1f8 = (undefined1)uStack_338;
  uStack_208 = uStack_348;
  uStack_204 = uStack_344;
  iStack_200 = iStack_340;
  uStack_1fc = uStack_33c;
  uStack_218 = uStack_358;
  uStack_214 = uStack_354;
  uStack_210 = uStack_350;
  uStack_20c = uStack_34c;
  uStack_228 = uStack_368;
  uStack_224 = uStack_364;
  uStack_220 = uStack_360;
  uStack_21c = uStack_35c;
  FUN_048b0bc0(&uStack_5a0);
  uStack_428 = uStack_228;
  uStack_424 = uStack_224;
  uStack_420 = uStack_220;
  uStack_41c = uStack_21c;
  uStack_418 = uStack_218;
  uStack_414 = uStack_214;
  uStack_410 = uStack_210;
  uStack_40c = uStack_20c;
  uStack_408 = uStack_208;
  uStack_404 = uStack_204;
  iStack_400 = iStack_200;
  uStack_3fc = uStack_1fc;
  uStack_3f8 = CONCAT71(uStack_1f7,uStack_1f8);
  func_0x081e1ab0(&puStack_5b8,&uStack_428,&UNK_013b26bc,0xc,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f00b0a8;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_05deec60;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_05dee940;
  puStack_5e0 = &UNK_081e8110;
  puStack_5d8 = &UNK_081e8280;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  uStack_3b8 = CONCAT71(uStack_3b8._1_7_,(undefined1)uStack_3f8);
  uStack_3c8 = uStack_408;
  uStack_3c4 = uStack_404;
  iStack_3c0 = iStack_400;
  uStack_3bc = uStack_3fc;
  uStack_3d8 = uStack_418;
  uStack_3d4 = uStack_414;
  uStack_3d0 = uStack_410;
  uStack_3cc = uStack_40c;
  uStack_3e8 = uStack_428;
  uStack_3e4 = uStack_424;
  uStack_3e0 = uStack_420;
  uStack_3dc = uStack_41c;
  FUN_048b0bc0(&uStack_5a0);
  uStack_468 = uStack_3e8;
  uStack_464 = uStack_3e4;
  uStack_460 = uStack_3e0;
  uStack_45c = uStack_3dc;
  uStack_458 = uStack_3d8;
  uStack_454 = uStack_3d4;
  uStack_450 = uStack_3d0;
  uStack_44c = uStack_3cc;
  uStack_448 = uStack_3c8;
  uStack_444 = uStack_3c4;
  iStack_440 = iStack_3c0;
  uStack_43c = uStack_3bc;
  uStack_438 = uStack_3b8;
  func_0x081e1ab0(&puStack_5b8,&uStack_468,&UNK_01362d09,0x15,0);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0ec6d8;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = plVar15;
    (**(code **)(lVar18 + 8))();
    plVar15 = uStack_5a0;
  }
  uStack_5a0 = plVar15;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_07962020;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_07961d00;
  puStack_5e0 = &UNK_081e8460;
  puStack_5d8 = &UNK_081e85d0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  cStack_478 = (char)uStack_438;
  uStack_488 = uStack_448;
  uStack_484 = uStack_444;
  iStack_480 = iStack_440;
  uStack_47c = uStack_43c;
  uStack_498 = uStack_458;
  uStack_494 = uStack_454;
  uStack_490 = uStack_450;
  uStack_48c = uStack_44c;
  uStack_4a8 = CONCAT44(uStack_464,uStack_468);
  uStack_4a0 = (long *)CONCAT44(uStack_45c,uStack_460);
  FUN_048b0bc0(&uStack_5a0);
  func_0x081e1440(&puStack_5b8,uStack_4a8 + 0x18);
  if (uStack_5a0._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x60);
    iVar10 = *piVar14;
    while (iVar10 != (int)uStack_5a0) {
      piVar14 = piVar14 + 0x16;
      iVar10 = *piVar14;
    }
    puVar6 = *(undefined4 **)(piVar14 + 0xc);
    while (puVar6 != puStack_5b0) {
      piVar14 = *(int **)(piVar14 + 0xe);
      puVar6 = *(undefined4 **)(piVar14 + 0xc);
    }
  }
  else {
    if (uStack_5a0._4_4_ != 1) {
      if (uStack_5a0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
      goto LAB_08142983;
    }
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_5a4,uStack_5a8) + 0x78) + 0x48);
    iVar10 = *piVar14;
    while (iVar10 != (int)uStack_5a0) {
      piVar14 = piVar14 + 0x1a;
      iVar10 = *piVar14;
    }
  }
  *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
LAB_08142983:
  func_0x081e1ab0(&puStack_5b8,&uStack_4a8,&UNK_0125d919,0x10,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f10c870;
  if (uStack_5a0 != (long *)0x0) {
    lVar18 = *uStack_5a0;
    uStack_5a0 = puVar16;
    (**(code **)(lVar18 + 8))();
    puVar16 = uStack_5a0;
  }
  uStack_5a0 = puVar16;
  auStack_620[0] = uStack_5a8;
  plStack_618 = (long *)0x0;
  plStack_610 = (long *)((ulong)plStack_610 & 0xffffffff00000000);
  uStack_608 = 1;
  uStack_600 = 0;
  puStack_5f8 = &UNK_081f4720;
  puStack_5f0 = &SUB_048b06d0;
  puStack_5e8 = &UNK_081efc60;
  puStack_5e0 = &UNK_081f47e0;
  puStack_5d8 = &UNK_081f4a20;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_5c0 = (long *)0x0;
  func_0x048b05a0(puStack_5b0,auStack_620);
  plVar15 = plStack_5c0;
  if (plStack_5c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5c0 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x081e1dc0(&puStack_5b8);
  FUN_048b0bc0(&uStack_5a0);
  return;
}



/* ---- referenced strings ----
 * 0x14cf06f  Line End Location
 */
