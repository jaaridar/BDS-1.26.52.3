/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82a4570 (ELF vaddr 0x81a4570)
 * Label: caller-of-callee
 * Body:  [[082a4570, 082a69b1]]
 * Ghidra: FUN_082a4570
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_082a4570(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  undefined *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined *puStack_5b0;
  undefined1 *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined8 uStack_550;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined *puStack_530;
  undefined1 *puStack_528;
  undefined1 *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined4 uStack_508;
  undefined8 uStack_500;
  long *plStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined4 *puStack_460;
  long lStack_458;
  long lStack_450;
  undefined4 uStack_448;
  long *aplStack_440 [2];
  byte bStack_430;
  undefined1 auStack_42f [7];
  ulong uStack_428;
  undefined1 *puStack_420;
  long lStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  undefined1 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  undefined1 uStack_318;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  undefined1 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  char cStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_280;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  char cStack_128;
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
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined4 uStack_d8;
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
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
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
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  func_0x07be4b40();
  if ((DAT_0f5ce6b0 == '\0') && (iVar14 = FUN_04108328(&DAT_0f5ce6b0), iVar14 != 0)) {
    func_0x08356d50();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce630,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce6b0);
  }
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ce630 + 4)) * 8);
  do {
    lVar3 = *plVar19;
    if (lVar3 == -1) goto LAB_082a45f0;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5ce630 + 4));
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_082a45f0:
    puVar16 = &DAT_0f5ce630;
    if (iRam000000000f5ce690 != -0x2b3da790) goto LAB_082a4648;
LAB_082a461b:
    lVar3 = *(long *)(puVar16 + 0x68);
    if (lVar3 == 0) goto LAB_082a4648;
    bVar24 = (*(byte *)(lVar3 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar3 + 9);
    if (bVar24) {
      puVar16 = *(undefined **)(lVar3 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar24) {
      uVar22 = *(ulong *)(lVar3 + 0x10);
    }
  }
  else {
    puVar16 = (undefined *)plVar19[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_082a461b;
LAB_082a4648:
    puVar16 = &UNK_012dd7e3;
    uVar22 = 9;
  }
  func_0x08357190(&uStack_4f0,param_1,puVar16,uVar22);
  uVar10 = uStack_4c0;
  uStack_4c0._0_5_ = (uint5)(uint)uStack_4c0;
  uVar11 = uStack_4c0;
  uStack_4b8 = (undefined1 *)((ulong)uStack_4b8 & 0xffffffffffffff00);
  uStack_4c0._0_1_ = (char)uVar10;
  bVar24 = (char)uStack_4c0 != '\0';
  uStack_4c0 = (undefined1 *)uVar11;
  if (bVar24) goto LAB_082a51a0;
  func_0x0835aa10(&lStack_458,&UNK_0141914a,9);
  uVar22 = (ulong)(bStack_430 >> 1);
  puVar6 = auStack_42f;
  if ((bStack_430 & 1) != 0) {
    uVar22 = uStack_428;
    puVar6 = puStack_420;
  }
  if (uVar22 == 0) {
    uStack_4c8._4_4_ = 0x811c9dc5;
  }
  else {
    uVar17 = (ulong)((uint)uVar22 & 3);
    if (uVar22 < 4) {
      uStack_4c8._4_4_ = 0x811c9dc5;
      uVar23 = 0;
    }
    else {
      uStack_4c8._4_4_ = 0x811c9dc5;
      uVar23 = 0;
      do {
        uStack_4c8._4_4_ =
             ((int)(char)puVar6[uVar23 + 3] ^
             ((int)(char)puVar6[uVar23 + 2] ^
             ((int)(char)puVar6[uVar23 + 1] ^
             ((int)(char)puVar6[uVar23] ^ uStack_4c8._4_4_) * 0x1000193) * 0x1000193) * 0x1000193) *
             0x1000193;
        uVar23 = uVar23 + 4;
      } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
    }
    if (uVar17 != 0) {
      uVar22 = 0;
      do {
        uStack_4c8._4_4_ = ((int)(char)puVar6[uVar22 + uVar23] ^ uStack_4c8._4_4_) * 0x1000193;
        uVar22 = uVar22 + 1;
      } while (uVar17 != uVar22);
    }
  }
  uStack_4c8._0_4_ = 2;
  uVar7 = (undefined4)uStack_4c8;
  uStack_4c8._0_4_ = 2;
  if ((DAT_0f5ce6d0 == '\0') &&
     (uStack_4c8._0_4_ = uVar7, iVar14 = FUN_04108328(&DAT_0f5ce6d0), iVar14 != 0)) {
    func_0x08356e60();
    func_0x0410844d(&DAT_0f5ce6d0);
  }
  puStack_5d8 = (undefined *)CONCAT44(puStack_5d8._4_4_,uStack_4c8._4_4_);
  uStack_5d0 = 0;
  uStack_5c8 = CONCAT44(uStack_5c8._4_4_,3);
  uStack_5c0 = 1;
  uStack_5b8 = 0;
  puStack_5b0 = &UNK_0835b020;
  puStack_5a8 = &SUB_048b06d0;
  puStack_5a0 = &UNK_08356c90;
  puStack_598 = &UNK_0835b0e0;
  uStack_590 = &UNK_0835b0f0;
  uStack_588 = (long *)((ulong)uStack_588._4_4_ << 0x20);
  uStack_580 = 0;
  uStack_578 = (long *)0x0;
  func_0x048b05a0(&uStack_4e8,&puStack_5d8);
  plVar19 = uStack_578;
  if (uStack_578 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_578 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_578 + 0x10))(uStack_578);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_548 = (undefined4)uStack_4d8;
  uStack_544 = uStack_4d8._4_4_;
  uStack_558 = (undefined4)uStack_4e8;
  uStack_554 = uStack_4e8._4_4_;
  func_0x0835adb0(&puStack_5d8,&uStack_558,&lStack_458);
  if (uStack_5c0._4_4_ == 2) {
    piVar18 = *(int **)(*(long *)(uStack_5c8 + 0x78) + 0x60);
    iVar14 = *piVar18;
    while (iVar14 != (int)uStack_5c0) {
      piVar18 = piVar18 + 0x16;
      iVar14 = *piVar18;
    }
    lVar3 = *(long *)(piVar18 + 0xc);
    while (lVar3 != uStack_5d0) {
      piVar18 = *(int **)(piVar18 + 0xe);
      lVar3 = *(long *)(piVar18 + 0xc);
    }
LAB_082a48df:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 9;
  }
  else {
    if (uStack_5c0._4_4_ == 1) {
      piVar18 = *(int **)(*(long *)(uStack_5c8 + 0x78) + 0x48);
      iVar14 = *piVar18;
      while (iVar14 != (int)uStack_5c0) {
        piVar18 = piVar18 + 0x1a;
        iVar14 = *piVar18;
      }
      goto LAB_082a48df;
    }
    if (uStack_5c0._4_4_ == 0) {
      *(uint *)(uStack_5c8 + 0x18) = *(uint *)(uStack_5c8 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_4b8 == '\0') {
    func_0x0835b140(&puStack_5d8,&uStack_4f0);
  }
  lVar3 = (long)uStack_4f0;
  iVar14 = uStack_4c0._4_4_;
  if ((DAT_0f5ce6b0 == '\0') && (iVar15 = FUN_04108328(&DAT_0f5ce6b0), iVar15 != 0)) {
    func_0x08356d50();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce630,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce6b0);
  }
  lVar20 = (long)&uStack_4c8 + 4;
  plVar19 = (long *)(*(long *)(lVar3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5ce630 + 4)) * 8);
  do {
    lVar4 = *plVar19;
    if (lVar4 == -1) goto LAB_082a4971;
    plVar19 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
  } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ce630 + 4));
  if (plVar19 == *(long **)(lVar3 + 0x38)) {
LAB_082a4971:
    puVar16 = &DAT_0f5ce630;
  }
  else {
    puVar16 = (undefined *)plVar19[2];
  }
  piVar5 = *(int **)(*(long *)(puVar16 + 0x68) + 0x28);
  for (piVar18 = *(int **)(*(long *)(puVar16 + 0x68) + 0x20);
      (piVar18 != piVar5 && (*piVar18 != iVar14)); piVar18 = piVar18 + 0xe) {
  }
  if ((piVar18 == piVar5) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013632f5),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_5d8 = (undefined *)((ulong)puStack_5d8 & 0xffffffffffffff00);
  func_0x05d9c620(piVar18 + 2,lVar20,lVar20,&puStack_5d8);
  func_0x048b0bc0(&lStack_458);
  func_0x0835aa10(&lStack_458,&UNK_012f73d7,9);
  uVar22 = (ulong)(bStack_430 >> 1);
  puVar6 = auStack_42f;
  if ((bStack_430 & 1) != 0) {
    uVar22 = uStack_428;
    puVar6 = puStack_420;
  }
  if (uVar22 == 0) {
    uStack_4c8._4_4_ = 0x811c9dc5;
  }
  else {
    uVar17 = (ulong)((uint)uVar22 & 3);
    if (uVar22 < 4) {
      uStack_4c8._4_4_ = 0x811c9dc5;
      uVar23 = 0;
    }
    else {
      uStack_4c8._4_4_ = 0x811c9dc5;
      uVar23 = 0;
      do {
        uStack_4c8._4_4_ =
             ((int)(char)puVar6[uVar23 + 3] ^
             ((int)(char)puVar6[uVar23 + 2] ^
             ((int)(char)puVar6[uVar23 + 1] ^
             ((int)(char)puVar6[uVar23] ^ uStack_4c8._4_4_) * 0x1000193) * 0x1000193) * 0x1000193) *
             0x1000193;
        uVar23 = uVar23 + 4;
      } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
    }
    if (uVar17 != 0) {
      uVar22 = 0;
      do {
        uStack_4c8._4_4_ = ((int)(char)puVar6[uVar22 + uVar23] ^ uStack_4c8._4_4_) * 0x1000193;
        uVar22 = uVar22 + 1;
      } while (uVar17 != uVar22);
    }
  }
  uStack_4c8._0_4_ = 2;
  if ((DAT_0f5ce6d0 == '\0') && (iVar14 = FUN_04108328(&DAT_0f5ce6d0), iVar14 != 0)) {
    func_0x08356e60();
    func_0x0410844d(&DAT_0f5ce6d0);
  }
  puStack_5d8 = (undefined *)CONCAT44(puStack_5d8._4_4_,uStack_4c8._4_4_);
  uStack_5d0 = 0;
  uStack_5c8 = CONCAT44(uStack_5c8._4_4_,3);
  uStack_5c0 = 1;
  uStack_5b8 = 0;
  puStack_5b0 = &UNK_0835b020;
  puStack_5a8 = &SUB_048b06d0;
  puStack_5a0 = &UNK_08356c90;
  puStack_598 = &UNK_0835b300;
  uStack_590 = &UNK_0835b310;
  uStack_588 = (long *)((ulong)uStack_588 & 0xffffffff00000000);
  uStack_580 = 0;
  uStack_578 = (long *)0x0;
  func_0x048b05a0(&uStack_4e8,&puStack_5d8);
  plVar19 = uStack_578;
  if (uStack_578 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_578 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_578 + 0x10))(uStack_578);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_548 = (undefined4)uStack_4d8;
  uStack_544 = uStack_4d8._4_4_;
  uStack_558 = (undefined4)uStack_4e8;
  uStack_554 = uStack_4e8._4_4_;
  func_0x0835adb0(&puStack_5d8,&uStack_558,&lStack_458);
  if (uStack_5c0._4_4_ == 2) {
    piVar18 = *(int **)(*(long *)(uStack_5c8 + 0x78) + 0x60);
    iVar14 = *piVar18;
    while (iVar14 != (int)uStack_5c0) {
      piVar18 = piVar18 + 0x16;
      iVar14 = *piVar18;
    }
    lVar3 = *(long *)(piVar18 + 0xc);
    while (lVar3 != uStack_5d0) {
      piVar18 = *(int **)(piVar18 + 0xe);
      lVar3 = *(long *)(piVar18 + 0xc);
    }
LAB_082a4caf:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 9;
  }
  else {
    if (uStack_5c0._4_4_ == 1) {
      piVar18 = *(int **)(*(long *)(uStack_5c8 + 0x78) + 0x48);
      iVar14 = *piVar18;
      while (iVar14 != (int)uStack_5c0) {
        piVar18 = piVar18 + 0x1a;
        iVar14 = *piVar18;
      }
      goto LAB_082a4caf;
    }
    if (uStack_5c0._4_4_ == 0) {
      *(uint *)(uStack_5c8 + 0x18) = *(uint *)(uStack_5c8 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_4b8 == '\0') {
    func_0x0835b140(&puStack_5d8,&uStack_4f0);
  }
  lVar3 = (long)uStack_4f0;
  iVar14 = uStack_4c0._4_4_;
  if ((DAT_0f5ce6b0 == '\0') && (iVar15 = FUN_04108328(&DAT_0f5ce6b0), iVar15 != 0)) {
    func_0x08356d50();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce630,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce6b0);
  }
  plVar19 = (long *)(*(long *)(lVar3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5ce630 + 4)) * 8);
  do {
    lVar4 = *plVar19;
    if (lVar4 == -1) goto LAB_082a4d41;
    plVar19 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
  } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ce630 + 4));
  if (plVar19 == *(long **)(lVar3 + 0x38)) {
LAB_082a4d41:
    puVar16 = &DAT_0f5ce630;
  }
  else {
    puVar16 = (undefined *)plVar19[2];
  }
  piVar5 = *(int **)(*(long *)(puVar16 + 0x68) + 0x28);
  for (piVar18 = *(int **)(*(long *)(puVar16 + 0x68) + 0x20);
      (piVar18 != piVar5 && (*piVar18 != iVar14)); piVar18 = piVar18 + 0xe) {
  }
  if ((piVar18 == piVar5) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013632f5),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_5d8 = (undefined *)((ulong)puStack_5d8 & 0xffffffffffffff00);
  func_0x05d9c620(piVar18 + 2,lVar20,lVar20,&puStack_5d8);
  func_0x048b0bc0(&lStack_458);
  func_0x0835aa10(&lStack_458,&UNK_01419154,4);
  uVar22 = (ulong)(bStack_430 >> 1);
  puVar6 = auStack_42f;
  if ((bStack_430 & 1) != 0) {
    uVar22 = uStack_428;
    puVar6 = puStack_420;
  }
  if (uVar22 == 0) {
    uVar21 = 0x811c9dc5;
  }
  else {
    uVar17 = (ulong)((uint)uVar22 & 3);
    if (uVar22 < 4) {
      uVar21 = 0x811c9dc5;
      uVar23 = 0;
    }
    else {
      uVar21 = 0x811c9dc5;
      uVar23 = 0;
      do {
        uVar21 = ((int)(char)puVar6[uVar23 + 3] ^
                 ((int)(char)puVar6[uVar23 + 2] ^
                 ((int)(char)puVar6[uVar23 + 1] ^ ((int)(char)puVar6[uVar23] ^ uVar21) * 0x1000193)
                 * 0x1000193) * 0x1000193) * 0x1000193;
        uVar23 = uVar23 + 4;
      } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
    }
    if (uVar17 != 0) {
      uVar22 = 0;
      do {
        uVar21 = ((int)(char)puVar6[uVar22 + uVar23] ^ uVar21) * 0x1000193;
        uVar22 = uVar22 + 1;
      } while (uVar17 != uVar22);
    }
  }
  uStack_4c8 = (undefined *)CONCAT44(uVar21,2);
  if ((DAT_0f5ce6d0 == '\0') && (iVar14 = FUN_04108328(&DAT_0f5ce6d0), iVar14 != 0)) {
    func_0x08356e60();
    func_0x0410844d(&DAT_0f5ce6d0);
  }
  puStack_5d8 = (undefined *)CONCAT44(puStack_5d8._4_4_,uStack_4c8._4_4_);
  uStack_5d0 = 0;
  uStack_5c8 = CONCAT44(uStack_5c8._4_4_,3);
  uStack_5c0 = 1;
  uStack_5b8 = 0;
  puStack_5b0 = &UNK_0835b020;
  puStack_5a8 = &SUB_048b06d0;
  puStack_5a0 = &UNK_08356c90;
  puStack_598 = &UNK_0835b360;
  uStack_590 = &UNK_0835b370;
  uStack_588 = (long *)((ulong)uStack_588 & 0xffffffff00000000);
  uStack_580 = 0;
  uStack_578 = (long *)0x0;
  func_0x048b05a0(&uStack_4e8,&puStack_5d8);
  plVar19 = uStack_578;
  if (uStack_578 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_578 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_578 + 0x10))(uStack_578);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_548 = (undefined4)uStack_4d8;
  uStack_544 = uStack_4d8._4_4_;
  uStack_558 = (undefined4)uStack_4e8;
  uStack_554 = uStack_4e8._4_4_;
  func_0x0835adb0(&puStack_5d8,&uStack_558,&lStack_458);
  if (uStack_5c0._4_4_ == 2) {
    piVar18 = *(int **)(*(long *)(uStack_5c8 + 0x78) + 0x60);
    iVar14 = *piVar18;
    while (iVar14 != (int)uStack_5c0) {
      piVar18 = piVar18 + 0x16;
      iVar14 = *piVar18;
    }
    lVar3 = *(long *)(piVar18 + 0xc);
    while (lVar3 != uStack_5d0) {
      piVar18 = *(int **)(piVar18 + 0xe);
      lVar3 = *(long *)(piVar18 + 0xc);
    }
LAB_082a506f:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 9;
  }
  else {
    if (uStack_5c0._4_4_ == 1) {
      piVar18 = *(int **)(*(long *)(uStack_5c8 + 0x78) + 0x48);
      iVar14 = *piVar18;
      while (iVar14 != (int)uStack_5c0) {
        piVar18 = piVar18 + 0x1a;
        iVar14 = *piVar18;
      }
      goto LAB_082a506f;
    }
    if (uStack_5c0._4_4_ == 0) {
      *(uint *)(uStack_5c8 + 0x18) = *(uint *)(uStack_5c8 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_4b8 == '\0') {
    func_0x0835b140(&puStack_5d8,&uStack_4f0);
  }
  lVar3 = (long)uStack_4f0;
  iVar14 = uStack_4c0._4_4_;
  if ((DAT_0f5ce6b0 == '\0') && (iVar15 = FUN_04108328(&DAT_0f5ce6b0), iVar15 != 0)) {
    func_0x08356d50();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce630,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce6b0);
  }
  plVar19 = (long *)(*(long *)(lVar3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5ce630 + 4)) * 8);
  do {
    lVar4 = *plVar19;
    if (lVar4 == -1) goto LAB_082a5100;
    plVar19 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
  } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ce630 + 4));
  if (plVar19 == *(long **)(lVar3 + 0x38)) {
LAB_082a5100:
    puVar16 = &DAT_0f5ce630;
  }
  else {
    puVar16 = (undefined *)plVar19[2];
  }
  piVar5 = *(int **)(*(long *)(puVar16 + 0x68) + 0x28);
  for (piVar18 = *(int **)(*(long *)(puVar16 + 0x68) + 0x20);
      (piVar18 != piVar5 && (*piVar18 != iVar14)); piVar18 = piVar18 + 0xe) {
  }
  if ((piVar18 == piVar5) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013632f5),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_5d8 = (undefined *)((ulong)puStack_5d8 & 0xffffffffffffff00);
  func_0x05d9c620(piVar18 + 2,lVar20,lVar20,&puStack_5d8);
  func_0x048b0bc0(&lStack_458);
LAB_082a51a0:
  if ((DAT_0f5ce540 == '\0') && (iVar14 = FUN_04108328(&DAT_0f5ce540), iVar14 != 0)) {
    func_0x083546a0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce4c0,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce540);
  }
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ce4c0 + 4)) * 8);
  do {
    lVar3 = *plVar19;
    if (lVar3 == -1) goto LAB_082a5200;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5ce4c0 + 4));
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_082a5200:
    puVar16 = &DAT_0f5ce4c0;
    iVar14 = iRam000000000f5ce520;
  }
  else {
    puVar16 = (undefined *)plVar19[2];
    iVar14 = *(int *)(puVar16 + 0x60);
  }
  if ((iVar14 == -0x2b3da790) && (lVar3 = *(long *)(puVar16 + 0x68), lVar3 != 0)) {
    bVar24 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar20 = lVar3 + 9;
    if (bVar24) {
      lVar20 = *(long *)(lVar3 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar24) {
      uVar22 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0835b3c0(&uStack_2d0,param_1,lVar20,uVar22);
  }
  else {
    func_0x0835b3c0(&uStack_2d0,param_1,&UNK_012dd7ed,0x1a);
  }
  if (cStack_2a0 != '\0') {
    return;
  }
  func_0x0835bf40(&lStack_458,&uStack_2d0,&UNK_012a9b85,10);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef44b00;
  if (aplStack_440[0] != (long *)0x0) {
    lVar3 = *aplStack_440[0];
    aplStack_440[0] = plVar19;
    (**(code **)(lVar3 + 8))();
    plVar19 = aplStack_440[0];
  }
  aplStack_440[0] = plVar19;
  puStack_5d8 = (undefined *)CONCAT44(puStack_5d8._4_4_,uStack_448);
  uStack_5d0 = 0;
  uStack_5c8 = uStack_5c8 & 0xffffffff00000000;
  uStack_5c0 = 1;
  uStack_5b8 = 0;
  puStack_5b0 = &UNK_048b3f30;
  puStack_5a8 = &SUB_048b06d0;
  puStack_5a0 = &SUB_048b2190;
  puStack_598 = &UNK_0835c4f0;
  uStack_590 = &UNK_0835c6b0;
  uStack_588 = (long *)((ulong)uStack_588 & 0xffffffff00000000);
  uStack_580 = 0;
  uStack_578 = (long *)0x0;
  func_0x048b05a0(lStack_450,&puStack_5d8);
  plVar19 = uStack_578;
  if (uStack_578 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_578 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_578 + 0x10))(uStack_578);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x0835c1f0(&lStack_458);
  cStack_128 = cStack_2a0;
  uStack_138 = uStack_2b0;
  uStack_134 = uStack_2ac;
  uStack_130 = uStack_2a8;
  uStack_12c = uStack_2a4;
  uStack_148 = uStack_2c0;
  uStack_144 = uStack_2bc;
  uStack_140 = uStack_2b8;
  uStack_13c = uStack_2b4;
  uStack_158 = uStack_2d0;
  uStack_154 = uStack_2cc;
  uStack_150 = uStack_2c8;
  uStack_14c = uStack_2c4;
  func_0x048b0bc0(aplStack_440);
  uStack_5b8 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_580 = 0;
  uStack_578 = (long *)0x0;
  uStack_590 = (undefined *)0x0;
  uStack_588 = (long *)0x0;
  puStack_5a0 = (undefined *)0x0;
  puStack_598 = (undefined *)0x0;
  puStack_5b0 = (undefined *)0x0;
  puStack_5a8 = (undefined1 *)0x0;
  uStack_560 = 0;
  uStack_5d0 = 0xffffffffffffffff;
  uStack_5c8 = 0;
  uStack_5c0 = 0xff;
  puStack_5d8 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_5b8);
  puStack_5b0 = (undefined *)FUN_041681f0(&uStack_5b8,0xf547a30);
  puStack_5a8 = (undefined1 *)FUN_041681f0(&uStack_5b8,0xf547770);
  puStack_5a0 = (undefined *)0x0;
  puStack_598 = (undefined *)0x0;
  uStack_590 = (undefined *)0x0;
  uStack_588 = (long *)0x0;
  uStack_580 = 0;
  uStack_578 = (long *)0x0;
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_560 = 0;
  puStack_460 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puStack_460 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar10 = _UNK_013cacfb;
  uStack_470 = 0x49;
  uStack_468 = 0x44;
  *(undefined8 *)(puStack_460 + 0xc) = _DAT_013cacf3;
  *(undefined8 *)(puStack_460 + 0xe) = uVar10;
  uVar10 = _UNK_013caceb;
  *(undefined8 *)(puStack_460 + 8) = _DAT_013cace3;
  *(undefined8 *)(puStack_460 + 10) = uVar10;
  uVar10 = _UNK_013cacdb;
  *(undefined8 *)(puStack_460 + 4) = _DAT_013cacd3;
  *(undefined8 *)(puStack_460 + 6) = uVar10;
  uVar9 = _UNK_013caccf;
  uVar8 = _UNK_013caccb;
  uVar7 = _UNK_013cacc7;
  *puStack_460 = _DAT_013cacc3;
  puStack_460[1] = uVar7;
  puStack_460[2] = uVar8;
  puStack_460[3] = uVar9;
  puStack_460[0x10] = 0x24676570;
  *(undefined1 *)(puStack_460 + 0x11) = 0;
  func_0x0ed60210(&puStack_5d8,&uStack_470,0);
  uStack_200 = (undefined1)uStack_5c0;
  uStack_210 = (undefined4)uStack_5d0;
  uStack_20c = uStack_5d0._4_4_;
  uStack_208 = (undefined4)uStack_5c8;
  uStack_204 = uStack_5c8._4_4_;
  puStack_218 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_1f8,&uStack_5b8);
  uStack_1f0 = puStack_5b0;
  uStack_1e8 = puStack_5a8;
  uStack_1e0 = puStack_5a0;
  uStack_1d8 = puStack_598;
  uStack_1d0 = (undefined4)uStack_590;
  uStack_1cc = uStack_590._4_4_;
  uStack_1c8 = (undefined4)uStack_588;
  uStack_1c4 = uStack_588._4_4_;
  if (uStack_588 != (long *)0x0) {
    LOCK();
    uStack_588[1] = uStack_588[1] + 1;
    UNLOCK();
  }
  uStack_1c0 = uStack_580;
  if (((ulong)uStack_578 & 1) == 0) {
    uStack_1a8 = uStack_568;
    uStack_1b8 = (uint)uStack_578;
    uStack_1b4 = uStack_578._4_4_;
    uStack_1b0 = (undefined4)uStack_570;
    uStack_1ac = uStack_570._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_1b8,uStack_568,uStack_570);
  }
  uStack_1a0 = uStack_560;
  func_0x082a7b50(&uStack_a0,&uStack_158,&puStack_218);
  func_0x0835bf40(&lStack_458,&uStack_a0,&UNK_012c3d74,10);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef44b00;
  if (aplStack_440[0] != (long *)0x0) {
    lVar3 = *aplStack_440[0];
    aplStack_440[0] = plVar19;
    (**(code **)(lVar3 + 8))();
    plVar19 = aplStack_440[0];
  }
  aplStack_440[0] = plVar19;
  uStack_4f0 = (undefined *)CONCAT44(uStack_4f0._4_4_,uStack_448);
  uStack_4e8 = (undefined *)0x0;
  uStack_4e0 = (ulong)uStack_4e0._4_4_ << 0x20;
  uStack_4d8 = 1;
  uStack_4d0 = 0;
  uStack_4c8 = &UNK_048b3f30;
  uStack_4c0 = &SUB_048b06d0;
  uStack_4b8 = &SUB_048b2190;
  uStack_4b0 = &UNK_0835c880;
  uStack_4a8 = &UNK_0835ca50;
  uStack_4a0 = (long *)((ulong)uStack_4a0._4_4_ << 0x20);
  uStack_498 = 0;
  uStack_490 = (long *)0x0;
  func_0x048b05a0(lStack_450,&uStack_4f0);
  plVar19 = uStack_490;
  if (uStack_490 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_490 + 0x10))(uStack_490);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x0835c1f0(&lStack_458);
  uStack_e8 = uStack_70;
  uStack_f8 = uStack_80;
  uStack_f4 = uStack_7c;
  uStack_f0 = uStack_78;
  uStack_ec = uStack_74;
  uStack_108 = uStack_90;
  uStack_104 = uStack_8c;
  uStack_100 = uStack_88;
  uStack_fc = uStack_84;
  uStack_118 = uStack_a0;
  uStack_114 = uStack_9c;
  uStack_110 = uStack_98;
  uStack_10c = uStack_94;
  func_0x048b0bc0(aplStack_440);
  uStack_4d0 = 0;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_498 = 0;
  uStack_490 = (long *)0x0;
  uStack_4a8 = (undefined *)0x0;
  uStack_4a0 = (long *)0x0;
  uStack_4b8 = (undefined1 *)0x0;
  uStack_4b0 = (undefined *)0x0;
  uStack_4c8 = (undefined *)0x0;
  uStack_4c0 = (undefined1 *)0x0;
  uStack_478 = 0;
  uStack_4e8 = (undefined *)0xffffffffffffffff;
  uStack_4e0 = 0;
  uStack_4d8 = 0xff;
  uStack_4f0 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_4d0);
  uStack_4c8 = (undefined *)FUN_041681f0(&uStack_4d0,0xf547a30);
  uStack_4c0 = (undefined1 *)FUN_041681f0(&uStack_4d0,0xf547770);
  uStack_4b8 = (undefined1 *)0x0;
  uStack_4b0 = (undefined *)0x0;
  uStack_4a8 = (undefined *)0x0;
  uStack_4a0 = (long *)0x0;
  uStack_498 = 0;
  uStack_490 = (long *)0x0;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_4e8 = &UNK_01400000;
  uStack_290 = 0x1400000;
  uStack_28c = 0;
  uStack_288 = (undefined4)uStack_4e0;
  uStack_284 = uStack_4e0._4_4_;
  uStack_280 = (undefined1)uStack_4d8;
  puStack_298 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_278,&uStack_4d0);
  uStack_270 = uStack_4c8;
  uStack_268 = uStack_4c0;
  uStack_260 = (undefined4)uStack_4b8;
  uStack_25c = uStack_4b8._4_4_;
  uStack_258 = (undefined4)uStack_4b0;
  uStack_254 = uStack_4b0._4_4_;
  uStack_250 = (undefined4)uStack_4a8;
  uStack_24c = uStack_4a8._4_4_;
  uStack_248 = (undefined4)uStack_4a0;
  uStack_244 = uStack_4a0._4_4_;
  if (uStack_4a0 != (long *)0x0) {
    LOCK();
    uStack_4a0[1] = uStack_4a0[1] + 1;
    UNLOCK();
  }
  uStack_240 = uStack_498;
  if (((ulong)uStack_490 & 1) == 0) {
    uStack_228 = uStack_480;
    uStack_238 = (uint)uStack_490;
    uStack_234 = uStack_490._4_4_;
    uStack_230 = (undefined4)uStack_488;
    uStack_22c = uStack_488._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_238,uStack_480,uStack_488);
  }
  uStack_220 = uStack_478;
  func_0x082a7b50(&uStack_68,&uStack_118,&puStack_298);
  func_0x0835bf40(&lStack_458,&uStack_68,&UNK_0137c6ee,7);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef44b00;
  if (aplStack_440[0] != (long *)0x0) {
    lVar3 = *aplStack_440[0];
    aplStack_440[0] = plVar19;
    (**(code **)(lVar3 + 8))();
    plVar19 = aplStack_440[0];
  }
  aplStack_440[0] = plVar19;
  uStack_558 = uStack_448;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_540 = 1;
  uStack_538 = 0;
  puStack_530 = &UNK_048b3f30;
  puStack_528 = &SUB_048b06d0;
  puStack_520 = &SUB_048b2190;
  puStack_518 = &UNK_0835cc30;
  puStack_510 = &UNK_0835ce00;
  uStack_508 = 0;
  uStack_500 = 0;
  plStack_4f8 = (long *)0x0;
  func_0x048b05a0(lStack_450,&uStack_558);
  plVar19 = plStack_4f8;
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x0835c1f0(&lStack_458);
  uStack_318 = uStack_38;
  uStack_328 = uStack_48;
  uStack_324 = uStack_44;
  iStack_320 = iStack_40;
  uStack_31c = uStack_3c;
  uStack_338 = uStack_58;
  uStack_334 = uStack_54;
  uStack_330 = uStack_50;
  uStack_32c = uStack_4c;
  uStack_348 = uStack_68;
  uStack_344 = uStack_64;
  uStack_340 = uStack_60;
  uStack_33c = uStack_5c;
  func_0x048b0bc0(aplStack_440);
  func_0x0835bf40(&lStack_458,&uStack_348,&UNK_014cce9f,4);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f114628;
  if (aplStack_440[0] != (long *)0x0) {
    lVar3 = *aplStack_440[0];
    aplStack_440[0] = plVar19;
    (**(code **)(lVar3 + 8))();
    plVar19 = aplStack_440[0];
  }
  aplStack_440[0] = plVar19;
  uStack_558 = uStack_448;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_540 = 1;
  uStack_538 = 0;
  puStack_530 = &UNK_0835b020;
  puStack_528 = &SUB_048b06d0;
  puStack_520 = &UNK_08356c90;
  puStack_518 = &UNK_0835cfe0;
  puStack_510 = &UNK_0835d140;
  uStack_508 = 0;
  uStack_500 = 0;
  plStack_4f8 = (long *)0x0;
  func_0x048b05a0(lStack_450,&uStack_558);
  plVar19 = plStack_4f8;
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x0835c1f0(&lStack_458);
  uVar12 = uStack_318;
  uVar7 = uStack_31c;
  iVar14 = iStack_320;
  lVar3 = CONCAT44(uStack_344,uStack_348);
  uStack_198 = CONCAT44(uStack_33c,uStack_340);
  uStack_190 = CONCAT44(uStack_334,uStack_338);
  uStack_188 = uStack_330;
  uStack_184 = uStack_32c;
  uStack_180 = uStack_328;
  uStack_17c = uStack_324;
  func_0x048b0bc0(aplStack_440);
  if ((DAT_0f5ce540 == '\0') && (iVar15 = FUN_04108328(&DAT_0f5ce540), iVar15 != 0)) {
    func_0x083546a0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce4c0,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce540);
  }
  plVar19 = (long *)(*(long *)(lVar3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5ce4c0 + 4)) * 8);
  do {
    lVar20 = *plVar19;
    if (lVar20 == -1) goto LAB_082a5d10;
    plVar19 = (long *)(*(long *)(lVar3 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f5ce4c0 + 4));
  if (plVar19 == *(long **)(lVar3 + 0x38)) {
LAB_082a5d10:
    puVar16 = &DAT_0f5ce4c0;
  }
  else {
    puVar16 = (undefined *)plVar19[2];
  }
  if ((1 < iVar14 - 1U) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012293fb),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar20 = FUN_048b0c90(lVar3 + 0x18,puVar16,uVar7,1);
  if (lVar20 == 0) {
    lStack_458 = 0;
    lStack_450 = 0;
    func_0x048b0d20(&lStack_458);
    lVar20 = lStack_458;
  }
  *(undefined1 *)(*(long *)(lVar20 + 0x58) + 0xa8) = 4;
  uStack_378 = (undefined4)uStack_198;
  uStack_374 = uStack_198._4_4_;
  uStack_370 = (undefined4)uStack_190;
  uStack_36c = uStack_190._4_4_;
  uStack_368 = uStack_188;
  uStack_364 = uStack_184;
  uStack_360 = uStack_180;
  uStack_35c = uStack_17c;
  iStack_358 = iVar14;
  uStack_354 = uVar7;
  uStack_350 = uVar12;
  lStack_380 = lVar3;
  func_0x0835bf40(&lStack_458,&lStack_380,&UNK_011bda4a,0xb);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f114628;
  if (aplStack_440[0] != (long *)0x0) {
    lVar3 = *aplStack_440[0];
    aplStack_440[0] = plVar19;
    (**(code **)(lVar3 + 8))();
    plVar19 = aplStack_440[0];
  }
  aplStack_440[0] = plVar19;
  uStack_558 = uStack_448;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_540 = 1;
  uStack_538 = 0;
  puStack_530 = &UNK_0835b020;
  puStack_528 = &SUB_048b06d0;
  puStack_520 = &UNK_08356c90;
  puStack_518 = &UNK_0835d5b0;
  puStack_510 = &UNK_0835d710;
  uStack_508 = 0;
  uStack_500 = 0;
  plStack_4f8 = (long *)0x0;
  func_0x048b05a0(lStack_450,&uStack_558);
  plVar19 = plStack_4f8;
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x0835c1f0(&lStack_458);
  uVar12 = uStack_350;
  uVar7 = uStack_354;
  iVar14 = iStack_358;
  lVar3 = lStack_380;
  uStack_178 = uStack_378;
  uStack_174 = uStack_374;
  uStack_170 = uStack_370;
  uStack_16c = uStack_36c;
  uStack_168 = uStack_368;
  uStack_164 = uStack_364;
  uStack_160 = uStack_360;
  uStack_15c = uStack_35c;
  func_0x048b0bc0(aplStack_440);
  if ((DAT_0f5ce540 == '\0') && (iVar15 = FUN_04108328(&DAT_0f5ce540), iVar15 != 0)) {
    func_0x083546a0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce4c0,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce540);
  }
  plVar19 = (long *)(*(long *)(lVar3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5ce4c0 + 4)) * 8);
  do {
    lVar20 = *plVar19;
    if (lVar20 == -1) goto LAB_082a6000;
    plVar19 = (long *)(*(long *)(lVar3 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f5ce4c0 + 4));
  if (plVar19 == *(long **)(lVar3 + 0x38)) {
LAB_082a6000:
    puVar16 = &DAT_0f5ce4c0;
  }
  else {
    puVar16 = (undefined *)plVar19[2];
  }
  if ((1 < iVar14 - 1U) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012293fb),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar20 = FUN_048b0c90(lVar3 + 0x18,puVar16,uVar7,1);
  if (lVar20 == 0) {
    lStack_458 = 0;
    lStack_450 = 0;
    func_0x048b0d20(&lStack_458);
    lVar20 = lStack_458;
  }
  *(undefined1 *)(*(long *)(lVar20 + 0x58) + 0xa8) = 4;
  uStack_308 = lVar3;
  uStack_300 = uStack_178;
  uStack_2fc = uStack_174;
  uStack_2f8 = uStack_170;
  uStack_2f4 = uStack_16c;
  uStack_2f0 = uStack_168;
  uStack_2ec = uStack_164;
  uStack_2e8 = uStack_160;
  uStack_2e4 = uStack_15c;
  iStack_2e0 = iVar14;
  uStack_2dc = uVar7;
  uStack_2d8 = uVar12;
  func_0x0835bf40(&lStack_458,&uStack_308,&UNK_01243987,8);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f0ee2f8;
  if (aplStack_440[0] != (long *)0x0) {
    lVar3 = *aplStack_440[0];
    aplStack_440[0] = plVar19;
    (**(code **)(lVar3 + 8))();
    plVar19 = aplStack_440[0];
  }
  aplStack_440[0] = plVar19;
  uStack_558 = uStack_448;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_540 = 1;
  uStack_538 = 0;
  puStack_530 = &UNK_0792c180;
  puStack_528 = &SUB_048b06d0;
  puStack_520 = &UNK_0651f3e0;
  puStack_518 = &UNK_0835d8f0;
  puStack_510 = &UNK_0835da50;
  uStack_508 = 0;
  uStack_500 = 0;
  plStack_4f8 = (long *)0x0;
  func_0x048b05a0(lStack_450,&uStack_558);
  plVar19 = plStack_4f8;
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      func_0x0412c2d0(plVar19);
    }
  }
  iVar14 = *(int *)(lStack_450 + 0x1c);
  if (iVar14 == 2) {
    piVar18 = *(int **)(*(long *)(*(long *)(lStack_450 + 0x10) + 0x78) + 0x60);
    iVar14 = *piVar18;
    while (iVar14 != *(int *)(lStack_450 + 0x18)) {
      piVar18 = piVar18 + 0x16;
      iVar14 = *piVar18;
    }
    lVar3 = *(long *)(piVar18 + 0xc);
    while (lVar3 != *(long *)(lStack_450 + 8)) {
      piVar18 = *(int **)(piVar18 + 0xe);
      lVar3 = *(long *)(piVar18 + 0xc);
    }
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else if (iVar14 == 1) {
    piVar18 = *(int **)(*(long *)(*(long *)(lStack_450 + 0x10) + 0x78) + 0x48);
    iVar14 = *piVar18;
    while (iVar14 != *(int *)(lStack_450 + 0x18)) {
      piVar18 = piVar18 + 0x1a;
      iVar14 = *piVar18;
    }
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else if (iVar14 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_450 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0835c1f0(&lStack_458);
  uStack_a8 = uStack_2d8;
  uStack_b8 = uStack_2e8;
  uStack_b4 = uStack_2e4;
  iStack_b0 = iStack_2e0;
  uStack_ac = uStack_2dc;
  uStack_c8 = uStack_2f8;
  uStack_c4 = uStack_2f4;
  uStack_c0 = uStack_2f0;
  uStack_bc = uStack_2ec;
  uStack_d8 = (undefined4)uStack_308;
  uStack_d4 = uStack_308._4_4_;
  uStack_d0 = uStack_300;
  uStack_cc = uStack_2fc;
  func_0x048b0bc0(aplStack_440);
  func_0x0835bf40(&lStack_458,&uStack_d8,&UNK_012291a7,0xe);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef44b00;
  if (aplStack_440[0] != (long *)0x0) {
    lVar3 = *aplStack_440[0];
    aplStack_440[0] = plVar19;
    (**(code **)(lVar3 + 8))();
    plVar19 = aplStack_440[0];
  }
  aplStack_440[0] = plVar19;
  uStack_558 = uStack_448;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_540 = 1;
  uStack_538 = 0;
  puStack_530 = &UNK_048b3f30;
  puStack_528 = &SUB_048b06d0;
  puStack_520 = &SUB_048b2190;
  puStack_518 = &UNK_0835db60;
  puStack_510 = &UNK_0835dd30;
  uStack_508 = 0;
  uStack_500 = 0;
  plStack_4f8 = (long *)0x0;
  func_0x048b05a0(lStack_450,&uStack_558);
  plVar19 = plStack_4f8;
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x0835c1f0(&lStack_458);
  func_0x048b0bc0(aplStack_440);
  puStack_298 = &UNK_0f4e3c70;
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(uStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
  }
  plVar19 = (long *)CONCAT44(uStack_244,uStack_248);
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x04167a40(auStack_278);
  uStack_4f0 = &UNK_0f4e3c70;
  if (((ulong)uStack_490 & 1) != 0) {
    func_0x0412a280(uStack_480,(ulong)uStack_490 & 0xfffffffffffffffe);
  }
  plVar19 = uStack_4a0;
  if (uStack_4a0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_4a0 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_4a0 + 0x10))(uStack_4a0);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x04167a40(&uStack_4d0);
  puStack_218 = &UNK_0f4e3c70;
  if ((uStack_1b8 & 1) != 0) {
    func_0x0412a280(uStack_1a8,CONCAT44(uStack_1b4,uStack_1b8) & 0xfffffffffffffffe);
  }
  plVar19 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x04167a40(auStack_1f8);
  if ((uStack_470 & 1) != 0) {
    func_0x0412a280(puStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_578 & 1) == 0) {
    puStack_5d8 = &UNK_0f4e3c70;
    plVar19 = uStack_588;
  }
  else {
    puStack_5d8 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_568,(ulong)uStack_578 & 0xfffffffffffffffe);
    plVar19 = uStack_588;
  }
  uStack_588 = plVar19;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x04167a40(&uStack_5b8);
  return;
}



/* ---- referenced strings ----
 * 0x13cacc3  ^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}\.jpeg$
 * 0x13cacd3  9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}\.jpeg$
 * 0x13cace3  ]{4}-[0-9a-f]{4}-[0-9a-f]{12}\.jpeg$
 * 0x13cacf3  -[0-9a-f]{12}\.jpeg$
 */
