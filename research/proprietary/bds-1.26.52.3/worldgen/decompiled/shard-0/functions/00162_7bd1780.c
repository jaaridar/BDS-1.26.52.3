/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7cd1780 (ELF vaddr 0x7bd1780)
 * Label: caller-of-callee
 * Body:  [[07cd1780, 07cd2e70] [07cd2e80, 07cd4714] [07cd4720, 07cd57e8] [07cd57f0, 07cd5e0a] [07cd5e10, 07cd66d8]]
 * Ghidra: FUN_07cd1780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07cd1780(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined7 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined *puVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined1 *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  uint uStack_400;
  undefined1 uStack_3f9;
  long *plStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long lStack_3d8;
  byte bStack_3d0;
  undefined7 uStack_3cf;
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined1 uStack_3b0;
  undefined1 uStack_3af;
  undefined2 uStack_3ae;
  undefined4 uStack_3ac;
  long *plStack_3a8;
  long lStack_3a0;
  ulong uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined2 uStack_350;
  undefined2 uStack_34e;
  uint uStack_34c;
  uint uStack_348;
  uint uStack_344;
  undefined8 uStack_340;
  undefined2 uStack_338;
  undefined1 uStack_334;
  undefined1 uStack_330;
  undefined1 uStack_32c;
  undefined8 uStack_328;
  undefined8 uStack_320;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  int iStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  int iStack_2d8;
  int iStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_278;
  long *plStack_270;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  uint uStack_24c;
  undefined4 uStack_248;
  int iStack_244;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  uint uStack_20c;
  undefined4 uStack_208;
  int iStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  uint uStack_1cc;
  undefined1 uStack_1c8;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined *puStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *puStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0f5b9980 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b9980), iVar8 != 0)) {
    func_0x07ce8530();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9900,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9980);
  }
  lStack_1b8 = param_1 + 0x18;
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b9900 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_07cd1800;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5b9900 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_07cd1800:
    puVar9 = &DAT_0f5b9900;
    if (iRam000000000f5b9960 != -0x2b3da790) goto LAB_07cd1858;
LAB_07cd182b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_07cd1858;
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar14 + 9);
    if (bVar24) {
      puVar9 = *(undefined **)(lVar14 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar22 = *(ulong *)(lVar14 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_07cd182b;
LAB_07cd1858:
    puVar9 = &UNK_01464b32;
    uVar22 = 0x12;
  }
  func_0x07ce8970(&uStack_2e8,param_1,puVar9,uVar22);
  uVar18 = uStack_2b8;
  uStack_2b8._0_5_ = (uint5)(uint)uStack_2b8;
  puVar4 = uStack_2b8;
  puStack_2b0 = (undefined1 *)((ulong)puStack_2b0 & 0xffffffffffffff00);
  uStack_2b8._0_1_ = (byte)uVar18;
  bVar24 = (byte)uStack_2b8 == '\0';
  uStack_2b8 = puVar4;
  if (bVar24) {
    func_0x07cec1f0(&plStack_3f8,&UNK_013448e3,5);
    bVar24 = (bStack_3d0 & 1) == 0;
    puVar10 = uStack_3c0;
    if (bVar24) {
      puVar10 = &uStack_3cf;
    }
    uVar22 = (ulong)(bStack_3d0 >> 1);
    if (!bVar24) {
      uVar22 = CONCAT71(uStack_3c7,uStack_3c8);
    }
    if (uVar22 == 0) {
      uVar20 = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        uVar20 = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uVar20 = 0x811c9dc5;
        uVar23 = 0;
        do {
          uVar20 = ((int)*(char *)((long)puVar10 + uVar23 + 3) ^
                   ((int)*(char *)((long)puVar10 + uVar23 + 2) ^
                   ((int)*(char *)((long)puVar10 + uVar23 + 1) ^
                   ((int)*(char *)((long)puVar10 + uVar23) ^ uVar20) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uVar20 = ((int)*(char *)((long)puVar10 + uVar22 + uVar23) ^ uVar20) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_2c0 = (undefined *)CONCAT44(uVar20,2);
    if ((DAT_0f5b99a0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b99a0), iVar8 != 0)) {
      func_0x07ce8640();
      func_0x0410844d(&DAT_0f5b99a0);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,uStack_2c0._4_4_);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)CONCAT44(uStack_478._4_4_,3);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_07cec7d0;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &UNK_07ce8470;
    uStack_448 = &UNK_07cec890;
    puStack_440 = &UNK_07cec8a0;
    uStack_438 = (long *)((ulong)uStack_438._4_4_ << 0x20);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(&uStack_2e0,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_318 = (int)uStack_2d0;
    iStack_314 = uStack_2d0._4_4_;
    iStack_310 = (int)uStack_2c8;
    iStack_30c = uStack_2c8._4_4_;
    func_0x07cec560(&puStack_488,&uStack_328,&plStack_3f8);
    if (uStack_470._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_478 + 0x78) + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_470) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar14 != uStack_480) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_07cd1b3a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_470._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_478 + 0x78) + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_470) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd1b3a;
      }
      if (uStack_470._4_4_ == 0) {
        *(uint *)((long)uStack_478 + 0x18) = *(uint *)((long)uStack_478 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2b0 == '\0') {
      func_0x07cec8f0(&puStack_488,&uStack_2e8);
    }
    iVar8 = uStack_2b8._4_4_;
    lVar14 = CONCAT44(uStack_2e4,uStack_2e8);
    if ((DAT_0f5b9980 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9980), iVar7 != 0)) {
      func_0x07ce8530();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9900,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9980);
    }
    plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b9900 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_07cd1bd1;
      plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5b9900 + 4)
            );
    if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_07cd1bd1:
      puVar9 = &DAT_0f5b9900;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    piVar1 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar12 != piVar1 && (*piVar12 != iVar8)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar1) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0132aa7a),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_488 = (undefined *)((ulong)puStack_488 & 0xffffffffffffff00);
    FUN_05d9c620(piVar12 + 2,(long)&uStack_2c0 + 4,(long)&uStack_2c0 + 4,&puStack_488);
    uStack_238 = (long *)CONCAT44(uStack_2e4,uStack_2e8);
    uStack_230 = uStack_2e0;
    iStack_228 = iStack_2d8;
    iStack_224 = iStack_2d4;
    iStack_220 = (int)uStack_2d0;
    iStack_21c = uStack_2d0._4_4_;
    iStack_218 = (int)uStack_2c8;
    iStack_214 = uStack_2c8._4_4_;
    iStack_210 = (int)uStack_2c0;
    uStack_20c = uStack_2c0._4_4_;
    uStack_208 = (uint)uStack_2b8;
    iStack_204 = uStack_2b8._4_4_;
    uStack_200 = puStack_2b0._0_4_;
    FUN_048b0bc0(&plStack_3f8);
    func_0x07cec1f0(&plStack_3f8,&UNK_012779b0,8);
    bVar24 = (bStack_3d0 & 1) == 0;
    puVar10 = uStack_3c0;
    if (bVar24) {
      puVar10 = &uStack_3cf;
    }
    uVar22 = (ulong)(bStack_3d0 >> 1);
    if (!bVar24) {
      uVar22 = CONCAT71(uStack_3c7,uStack_3c8);
    }
    if (uVar22 == 0) {
      uStack_20c = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        uStack_20c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_20c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_20c = ((int)*(char *)((long)puVar10 + uVar23 + 3) ^
                       ((int)*(char *)((long)puVar10 + uVar23 + 2) ^
                       ((int)*(char *)((long)puVar10 + uVar23 + 1) ^
                       ((int)*(char *)((long)puVar10 + uVar23) ^ uStack_20c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_20c = ((int)*(char *)((long)puVar10 + uVar22 + uVar23) ^ uStack_20c) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    iStack_210 = 2;
    if ((DAT_0f5b99a0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b99a0), iVar8 != 0)) {
      func_0x07ce8640();
      func_0x0410844d(&DAT_0f5b99a0);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,uStack_20c);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)CONCAT44(uStack_478._4_4_,3);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_07cec7d0;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &UNK_07ce8470;
    uStack_448 = &UNK_07cecab0;
    puStack_440 = &UNK_07cecac0;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(&uStack_230,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_318 = iStack_220;
    iStack_314 = iStack_21c;
    iStack_310 = iStack_218;
    iStack_30c = iStack_214;
    uStack_320 = (long *)CONCAT44(iStack_224,iStack_228);
    func_0x07cec560(&puStack_488,&uStack_328,&plStack_3f8);
    if (uStack_470._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_478 + 0x78) + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_470) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar14 != uStack_480) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_07cd1f4a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_470._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_478 + 0x78) + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_470) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd1f4a;
      }
      if (uStack_470._4_4_ == 0) {
        *(uint *)((long)uStack_478 + 0x18) = *(uint *)((long)uStack_478 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_200 == '\0') {
      func_0x07cec8f0(&puStack_488,&uStack_238);
    }
    iVar8 = iStack_204;
    plVar13 = uStack_238;
    if ((DAT_0f5b9980 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9980), iVar7 != 0)) {
      func_0x07ce8530();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9900,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9980);
    }
    plVar16 = (long *)(plVar13[3] +
                      (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5b9900 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_07cd1fe1;
      plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
    } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5b9900 + 4));
    if (plVar16 == (long *)plVar13[7]) {
LAB_07cd1fe1:
      puVar9 = &DAT_0f5b9900;
    }
    else {
      puVar9 = (undefined *)plVar16[2];
    }
    piVar1 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar12 != piVar1 && (*piVar12 != iVar8)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar1) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0132aa7a),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_488 = (undefined *)((ulong)puStack_488 & 0xffffffffffffff00);
    FUN_05d9c620(piVar12 + 2,&uStack_20c,&uStack_20c,&puStack_488);
    plStack_278 = uStack_238;
    plStack_270 = uStack_230;
    iStack_268 = iStack_228;
    iStack_264 = iStack_224;
    iStack_260 = iStack_220;
    iStack_25c = iStack_21c;
    iStack_258 = iStack_218;
    iStack_254 = iStack_214;
    iStack_250 = iStack_210;
    uStack_24c = uStack_20c;
    uStack_248 = uStack_208;
    iStack_244 = iStack_204;
    uStack_240 = uStack_200;
    FUN_048b0bc0(&plStack_3f8);
    func_0x07cec1f0(&plStack_3f8,&UNK_011bd52d,6);
    bVar24 = (bStack_3d0 & 1) == 0;
    puVar10 = uStack_3c0;
    if (bVar24) {
      puVar10 = &uStack_3cf;
    }
    uVar22 = (ulong)(bStack_3d0 >> 1);
    if (!bVar24) {
      uVar22 = CONCAT71(uStack_3c7,uStack_3c8);
    }
    if (uVar22 == 0) {
      uStack_24c = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        uStack_24c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_24c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_24c = ((int)*(char *)((long)puVar10 + uVar23 + 3) ^
                       ((int)*(char *)((long)puVar10 + uVar23 + 2) ^
                       ((int)*(char *)((long)puVar10 + uVar23 + 1) ^
                       ((int)*(char *)((long)puVar10 + uVar23) ^ uStack_24c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uStack_24c = ((int)*(char *)((long)puVar10 + uVar22 + uVar23) ^ uStack_24c) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    iStack_250 = 2;
    if ((DAT_0f5b99a0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b99a0), iVar8 != 0)) {
      func_0x07ce8640();
      func_0x0410844d(&DAT_0f5b99a0);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,uStack_24c);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)CONCAT44(uStack_478._4_4_,3);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_07cec7d0;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &UNK_07ce8470;
    uStack_448 = &UNK_07cecb10;
    puStack_440 = &UNK_07cecb20;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(&plStack_270,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_318 = iStack_260;
    iStack_314 = iStack_25c;
    iStack_310 = iStack_258;
    iStack_30c = iStack_254;
    uStack_328 = plStack_270;
    uStack_320 = (long *)CONCAT44(iStack_264,iStack_268);
    func_0x07cec560(&puStack_488,&uStack_328,&plStack_3f8);
    if (uStack_470._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_478 + 0x78) + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_470) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar14 != uStack_480) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_07cd235a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_470._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_478 + 0x78) + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_470) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd235a;
      }
      if (uStack_470._4_4_ == 0) {
        *(uint *)((long)uStack_478 + 0x18) = *(uint *)((long)uStack_478 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_240 == '\0') {
      func_0x07cec8f0(&puStack_488,&plStack_278);
    }
    iVar8 = iStack_244;
    plVar13 = plStack_278;
    if ((DAT_0f5b9980 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9980), iVar7 != 0)) {
      func_0x07ce8530();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9900,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9980);
    }
    plVar16 = (long *)(plVar13[3] +
                      (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5b9900 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_07cd23f1;
      plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
    } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5b9900 + 4));
    if (plVar16 == (long *)plVar13[7]) {
LAB_07cd23f1:
      puVar9 = &DAT_0f5b9900;
    }
    else {
      puVar9 = (undefined *)plVar16[2];
    }
    piVar1 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar12 != piVar1 && (*piVar12 != iVar8)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar1) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0132aa7a),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_488 = (undefined *)((ulong)puStack_488 & 0xffffffffffffff00);
    FUN_05d9c620(piVar12 + 2,&uStack_24c,&uStack_24c,&puStack_488);
    uStack_328 = plStack_278;
    uStack_320 = plStack_270;
    iStack_318 = iStack_268;
    iStack_314 = iStack_264;
    iStack_310 = iStack_260;
    iStack_30c = iStack_25c;
    iStack_308 = iStack_258;
    iStack_304 = iStack_254;
    uStack_300 = (undefined *)CONCAT44(uStack_24c,iStack_250);
    uStack_2f8 = uStack_248;
    iStack_2f4 = iStack_244;
    uStack_2f0 = uStack_240;
    FUN_048b0bc0(&plStack_3f8);
    func_0x07cec1f0(&plStack_3f8,&UNK_013e4393,7);
    bVar24 = (bStack_3d0 & 1) != 0;
    puVar10 = &uStack_3cf;
    if (bVar24) {
      puVar10 = uStack_3c0;
    }
    uVar22 = (ulong)(bStack_3d0 >> 1);
    if (bVar24) {
      uVar22 = CONCAT71(uStack_3c7,uStack_3c8);
    }
    if (uVar22 == 0) {
      uVar20 = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        uVar20 = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uVar20 = 0x811c9dc5;
        uVar23 = 0;
        do {
          uVar20 = ((int)*(char *)((long)puVar10 + uVar23 + 3) ^
                   ((int)*(char *)((long)puVar10 + uVar23 + 2) ^
                   ((int)*(char *)((long)puVar10 + uVar23 + 1) ^
                   ((int)*(char *)((long)puVar10 + uVar23) ^ uVar20) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar11 != 0) {
        uVar22 = 0;
        do {
          uVar20 = ((int)*(char *)((long)puVar10 + uVar22 + uVar23) ^ uVar20) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar11 != uVar22);
      }
    }
    uStack_300 = (undefined *)CONCAT44(uVar20,2);
    if ((DAT_0f5b99a0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b99a0), iVar8 != 0)) {
      func_0x07ce8640();
      func_0x0410844d(&DAT_0f5b99a0);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,uStack_300._4_4_);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)CONCAT44(uStack_478._4_4_,3);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_07cec7d0;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &UNK_07ce8470;
    uStack_448 = &UNK_07cecb70;
    puStack_440 = &UNK_07cecb80;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(&uStack_320,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_1e8 = iStack_310;
    iStack_1e4 = iStack_30c;
    iStack_1e0 = iStack_308;
    iStack_1dc = iStack_304;
    uStack_1f8 = (int)uStack_320;
    uStack_1f4 = uStack_320._4_4_;
    iStack_1f0 = iStack_318;
    iStack_1ec = iStack_314;
    func_0x07cec560(&puStack_488,&uStack_1f8,&plStack_3f8);
    if (uStack_470._4_4_ == 2) {
      piVar12 = *(int **)(uStack_478[0xf] + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_470) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      plVar13 = *(long **)(piVar12 + 0xc);
      while (plVar13 != uStack_480) {
        piVar12 = *(int **)(piVar12 + 0xe);
        plVar13 = *(long **)(piVar12 + 0xc);
      }
LAB_07cd275a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_470._4_4_ == 1) {
        piVar12 = *(int **)(uStack_478[0xf] + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_470) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd275a;
      }
      if (uStack_470._4_4_ == 0) {
        *(uint *)(uStack_478 + 3) = *(uint *)(uStack_478 + 3) | 0x90000;
      }
    }
    if ((char)uStack_2f0 == '\0') {
      func_0x07cec8f0(&puStack_488,&uStack_328);
    }
    iVar8 = iStack_2f4;
    plVar13 = uStack_328;
    if ((DAT_0f5b9980 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9980), iVar7 != 0)) {
      func_0x07ce8530();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9900,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9980);
    }
    plVar16 = (long *)(plVar13[3] +
                      (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5b9900 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_07cd27f0;
      plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
    } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5b9900 + 4));
    if (plVar16 == (long *)plVar13[7]) {
LAB_07cd27f0:
      puVar9 = &DAT_0f5b9900;
    }
    else {
      puVar9 = (undefined *)plVar16[2];
    }
    piVar1 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar12 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar12 != piVar1 && (*piVar12 != iVar8)); piVar12 = piVar12 + 0xe) {
    }
    if ((piVar12 == piVar1) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0132aa7a),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_488 = (undefined *)((ulong)puStack_488 & 0xffffffffffffff00);
    FUN_05d9c620(piVar12 + 2,(long)&uStack_300 + 4,(long)&uStack_300 + 4,&puStack_488);
    FUN_048b0bc0(&plStack_3f8);
  }
  func_0x07b8e370(param_1);
  if ((DAT_0f5bca50 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bca50), iVar8 != 0)) {
    func_0x07da1900();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bc9d0,0xf53dab8);
    func_0x0410844d(&DAT_0f5bca50);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bc9d0 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_07cd2900;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bc9d0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_07cd2900:
    puVar9 = &DAT_0f5bc9d0;
    if (iRam000000000f5bca30 != -0x2b3da790) goto LAB_07cd296e;
LAB_07cd292b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_07cd296e;
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar21 = lVar14 + 9;
    if (bVar24) {
      lVar21 = *(long *)(lVar14 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar22 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x07da1ce0(&uStack_2e8,param_1,lVar21,uVar22);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_07cd292b;
LAB_07cd296e:
    func_0x07da1ce0(&uStack_2e8,param_1,&UNK_0132a982,0x13);
  }
  if ((byte)uStack_2b8 == '\0') {
    uStack_2c0 = (undefined *)0xb58b14800000002;
    uStack_398 = 0;
    lStack_390 = 0;
    plStack_3a8 = (long *)0x0;
    lStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ac = 0;
    uStack_3c8 = 0;
    uStack_3c7 = 0;
    uStack_3c0 = (undefined7 *)0x0;
    lStack_3d8 = 0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    plStack_3f8 = (long *)0x0;
    uStack_3f0 = (undefined8 *)0x0;
    uStack_388._4_4_ = (undefined4)((ulong)uStack_388 >> 0x20);
    uStack_388 = CONCAT44(uStack_388._4_4_,0x3f600000);
    func_0x048afb10(&uStack_3b8,8);
    uStack_360 = 0;
    lStack_358 = 0;
    lStack_370 = 0;
    uStack_368 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    uStack_350 = 0xff00;
    uStack_34c = uStack_34c & 0xffffff00;
    uStack_348 = uStack_348 & 0xffffff00;
    uStack_344 = uStack_344 & 0xffffff00;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0f45a8;
    if (plStack_3f8 != (long *)0x0) {
      lVar14 = *plStack_3f8;
      plStack_3f8 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3f8;
    }
    plStack_3f8 = plVar13;
    if ((bStack_3d0 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_3c0,CONCAT71(uStack_3cf,bStack_3d0) & 0xfffffffffffffffe);
    }
    bStack_3d0 = 0x1e;
    uStack_3cf = 0x70697263736544;
    uStack_3c8 = 0x74;
    uStack_3c7 = 0x6570795420726f;
    uStack_3c0 = (undefined7 *)((ulong)uStack_3c0 & 0xffffffffffffff00);
    if ((DAT_0f5bca70 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bca70), iVar8 != 0)) {
      func_0x07da1a10();
      func_0x0410844d(&DAT_0f5bca70);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,uStack_2c0._4_4_);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)CONCAT44(uStack_478._4_4_,3);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_07cec7d0;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &UNK_07ce8470;
    uStack_448 = &UNK_07da27f0;
    puStack_440 = &UNK_07da2800;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(&uStack_2e0,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_318 = (int)uStack_2d0;
    iStack_314 = uStack_2d0._4_4_;
    iStack_310 = (int)uStack_2c8;
    iStack_30c = uStack_2c8._4_4_;
    uStack_328 = uStack_2e0;
    uStack_320 = (long *)CONCAT44(iStack_2d4,iStack_2d8);
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar14 = (long)uStack_3f0;
    plVar16 = plStack_3f8;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    uStack_480 = plVar13 + 3;
    plStack_3f8 = (long *)0x0;
    uStack_3f0 = (undefined8 *)0x0;
    plVar13[3] = (long)plVar16;
    plVar13[4] = lVar14;
    plVar13[7] = lStack_3d8;
    plVar13[5] = uStack_3e8;
    plVar13[6] = (long)plStack_3e0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    lStack_3d8 = 0;
    plVar13[10] = (long)uStack_3c0;
    plVar13[8] = CONCAT71(uStack_3cf,bStack_3d0);
    plVar13[9] = CONCAT71(uStack_3c7,uStack_3c8);
    bStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3c8 = 0;
    uStack_3c7 = 0;
    uStack_3c0 = (undefined7 *)0x0;
    plVar13[0xb] = CONCAT44(uStack_3b4,uStack_3b8);
    plVar13[0xc] = CONCAT44(uStack_3ac,CONCAT22(uStack_3ae,CONCAT11(uStack_3af,uStack_3b0)));
    plVar13[0xd] = (long)plStack_3a8;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ac = 0;
    plStack_3a8 = (long *)0x0;
    plVar13[0xe] = lStack_3a0;
    plVar13[0xf] = uStack_398;
    plVar13[0x10] = lStack_390;
    lStack_3a0 = 0;
    uStack_398 = 0;
    lStack_390 = 0;
    *(undefined4 *)(plVar13 + 0x11) = (undefined4)uStack_388;
    plVar13[0x12] = lStack_380;
    plVar13[0x13] = lStack_378;
    plVar13[0x14] = lStack_370;
    lStack_380 = 0;
    lStack_378 = 0;
    lStack_370 = 0;
    plVar13[0x17] = lStack_358;
    *(undefined4 *)(plVar13 + 0x15) = (undefined4)uStack_368;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_368._4_4_;
    *(undefined4 *)(plVar13 + 0x16) = (undefined4)uStack_360;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_360._4_4_;
    uStack_368 = 0;
    uStack_360 = 0;
    lStack_358 = 0;
    *(ulong *)((long)plVar13 + 0xc5) =
         CONCAT17((undefined1)uStack_344,CONCAT43(uStack_348,uStack_34c._1_3_));
    plVar13[0x18] = CONCAT44(uStack_34c,CONCAT22(uStack_34e,uStack_350));
    plStack_278 = (long *)0x0;
    plStack_270 = (long *)0x0;
    uStack_478 = plVar13;
    func_0x048afd20(&uStack_328,&puStack_488);
    plVar13 = uStack_478;
    if (uStack_478 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_478 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_478 + 0x10))(uStack_478);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = plStack_270;
    if (plStack_270 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_270 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_270 + 0x10))(plStack_270);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar14 = CONCAT44(iStack_314,iStack_318);
    if (iStack_30c == 2) {
      piVar12 = *(int **)(*(long *)(lVar14 + 0x78) + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != iStack_310) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      for (; *(long **)(piVar12 + 0xc) != uStack_320; piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_07cd2e8a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (iStack_30c == 1) {
        piVar12 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != iStack_310) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd2e8a;
      }
      if (iStack_30c == 0) {
        *(byte *)(lVar14 + 0x1a) = *(byte *)(lVar14 + 0x1a) | 9;
      }
    }
    lVar14 = CONCAT44(uStack_2e4,uStack_2e8);
    iVar8 = (int)uStack_2c0;
    uVar2 = uStack_2c0._4_4_;
    FUN_048b0bc0(&plStack_3f8);
    if ((DAT_0f5bca50 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5bca50), iVar7 != 0)) {
      func_0x07da1900();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bc9d0,0xf53dab8);
      func_0x0410844d(&DAT_0f5bca50);
    }
    plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5bc9d0 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_07cd2f10;
      plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5bc9d0 + 4)
            );
    if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_07cd2f10:
      puVar9 = &DAT_0f5bc9d0;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    if ((1 < iVar8 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01417ed1),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar13 = (long *)func_0x048b0c90(lVar14 + 0x18,puVar9,uVar2,1);
    if (plVar13 == (long *)0x0) {
      plStack_3f8 = (long *)0x0;
      uStack_3f0 = (undefined8 *)0x0;
      func_0x048b0d20(&plStack_3f8);
      plVar13 = plStack_3f8;
    }
    *(undefined1 *)(plVar13[0xb] + 0xa8) = 4;
  }
  if ((DAT_0f5bcb08 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcb08), iVar8 != 0)) {
    func_0x07da2910();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bca88,0xf53dab8);
    func_0x0410844d(&DAT_0f5bcb08);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bca88 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_07cd3010;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bca88 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_07cd3010:
    puVar9 = &DAT_0f5bca88;
    if (iRam000000000f5bcae8 != -0x2b3da790) goto LAB_07cd3068;
LAB_07cd303b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_07cd3068;
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar14 + 9);
    if (bVar24) {
      puVar9 = *(undefined **)(lVar14 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar22 = *(ulong *)(lVar14 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_07cd303b;
LAB_07cd3068:
    puVar9 = &UNK_012f69d4;
    uVar22 = 0x12;
  }
  func_0x07da2f20(&uStack_328,param_1,puVar9,uVar22);
  if ((byte)uStack_2f8 == 0) {
    uStack_300 = (undefined *)0xb58b14800000002;
    uStack_398 = 0;
    lStack_390 = 0;
    plStack_3a8 = (long *)0x0;
    lStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ac = 0;
    uStack_3c8 = 0;
    uStack_3c7 = 0;
    uStack_3c0 = (undefined7 *)0x0;
    lStack_3d8 = 0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    plStack_3f8 = (long *)0x0;
    uStack_3f0 = (undefined8 *)0x0;
    uStack_388 = CONCAT44(uStack_388._4_4_,0x3f600000);
    func_0x048afb10(&uStack_3b8,8);
    uStack_360 = 0;
    lStack_358 = 0;
    lStack_370 = 0;
    uStack_368 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    uStack_350 = 0xff00;
    uStack_34c = uStack_34c & 0xffffff00;
    uStack_348 = uStack_348 & 0xffffff00;
    uStack_344 = uStack_344 & 0xffffff00;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0f45a8;
    if (plStack_3f8 != (long *)0x0) {
      lVar14 = *plStack_3f8;
      plStack_3f8 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3f8;
    }
    plStack_3f8 = plVar13;
    if ((bStack_3d0 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_3c0,CONCAT71(uStack_3cf,bStack_3d0) & 0xfffffffffffffffe);
    }
    bStack_3d0 = 0x1e;
    uStack_3cf = 0x70697263736544;
    uStack_3c8 = 0x74;
    uStack_3c7 = 0x6570795420726f;
    uStack_3c0 = (undefined7 *)((ulong)uStack_3c0 & 0xffffffffffffff00);
    if ((DAT_0f5bcb28 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcb28), iVar8 != 0)) {
      func_0x07da2a20();
      func_0x0410844d(&DAT_0f5bcb28);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,uStack_300._4_4_);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)CONCAT44(uStack_478._4_4_,3);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_07cec7d0;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &UNK_07ce8470;
    uStack_448 = &UNK_07da3cf0;
    puStack_440 = &UNK_07da3d00;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(&uStack_320,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_2d8 = iStack_310;
    iStack_2d4 = iStack_30c;
    uStack_2d0 = CONCAT44(iStack_304,iStack_308);
    uStack_2e8 = (int)uStack_320;
    uStack_2e4 = uStack_320._4_4_;
    uStack_2e0 = (long *)CONCAT44(iStack_314,iStack_318);
    func_0x07da3a80(&puStack_488,&uStack_2e8,&plStack_3f8);
    plVar13 = uStack_328;
    if (uStack_470._4_4_ == 2) {
      piVar12 = *(int **)(uStack_478[0xf] + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_470) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      plVar16 = *(long **)(piVar12 + 0xc);
      while (plVar16 != uStack_480) {
        piVar12 = *(int **)(piVar12 + 0xe);
        plVar16 = *(long **)(piVar12 + 0xc);
      }
LAB_07cd336a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_470._4_4_ == 1) {
        piVar12 = *(int **)(uStack_478[0xf] + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_470) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd336a;
      }
      if (uStack_470._4_4_ == 0) {
        *(uint *)(uStack_478 + 3) = *(uint *)(uStack_478 + 3) | 0x90000;
      }
    }
    iVar8 = (int)uStack_300;
    uVar2 = uStack_300._4_4_;
    FUN_048b0bc0(&plStack_3f8);
    if ((DAT_0f5bcb08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5bcb08), iVar7 != 0)) {
      func_0x07da2910();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bca88,0xf53dab8);
      func_0x0410844d(&DAT_0f5bcb08);
    }
    plVar16 = (long *)(plVar13[3] +
                      (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bca88 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_07cd33f0;
      plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
    } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bca88 + 4));
    if (plVar16 == (long *)plVar13[7]) {
LAB_07cd33f0:
      puVar9 = &DAT_0f5bca88;
    }
    else {
      puVar9 = (undefined *)plVar16[2];
    }
    if ((1 < iVar8 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012a9002),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar13 = (long *)func_0x048b0c90(plVar13 + 3,puVar9,uVar2,1);
    if (plVar13 == (long *)0x0) {
      plStack_3f8 = (long *)0x0;
      uStack_3f0 = (undefined8 *)0x0;
      func_0x048b0d20(&plStack_3f8);
      plVar13 = plStack_3f8;
    }
    *(undefined1 *)(plVar13[0xb] + 0xa8) = 4;
  }
  if (((byte)uStack_2f8 & 1) == 0) {
    func_0x07da3d50(&plStack_3f8,&uStack_328,&UNK_013e439b);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (plStack_3e0 != (long *)0x0) {
      lVar14 = *plStack_3e0;
      plStack_3e0 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3e0;
    }
    plStack_3e0 = plVar13;
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,(undefined4)uStack_3e8);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)((ulong)uStack_478 & 0xffffffff00000000);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_048b3f30;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &SUB_048b2190;
    uStack_448 = &UNK_07da40b0;
    puStack_440 = &UNK_07da4270;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(uStack_3f0,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x07da3fe0(&plStack_3f8);
    uStack_1c8 = (byte)uStack_2f8;
    iStack_1d8 = iStack_308;
    iStack_1d4 = iStack_304;
    iStack_1d0 = (int)uStack_300;
    uStack_1cc = uStack_300._4_4_;
    iStack_1e8 = iStack_318;
    iStack_1e4 = iStack_314;
    iStack_1e0 = iStack_310;
    iStack_1dc = iStack_30c;
    uStack_1f8 = (undefined4)uStack_328;
    uStack_1f4 = uStack_328._4_4_;
    iStack_1f0 = (int)uStack_320;
    iStack_1ec = uStack_320._4_4_;
    FUN_048b0bc0(&plStack_3e0);
    uStack_468 = 0;
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    puStack_440 = (undefined *)0x0;
    uStack_438 = (long *)0x0;
    uStack_450 = (undefined1 *)0x0;
    uStack_448 = (undefined *)0x0;
    puStack_460 = (undefined *)0x0;
    puStack_458 = (undefined1 *)0x0;
    uStack_410 = 0;
    uStack_480 = (long *)0xffffffffffffffff;
    uStack_478 = (long *)0x0;
    uStack_470 = 0xff;
    puStack_488 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_468);
    puStack_460 = (undefined *)func_0x041681f0(&uStack_468,0xf547a30);
    puStack_458 = (undefined1 *)func_0x041681f0(&uStack_468,0xf547770);
    uStack_450 = (undefined1 *)0x0;
    uStack_448 = (undefined *)0x0;
    puStack_440 = (undefined *)0x0;
    uStack_438 = (long *)0x0;
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 1;
    uStack_128 = (undefined4)uStack_480;
    uStack_124 = uStack_480._4_4_;
    uStack_120 = (undefined4)uStack_478;
    uStack_11c = uStack_478._4_4_;
    uStack_118 = (undefined1)uStack_470;
    puStack_130 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_110,&uStack_468);
    puStack_108 = puStack_460;
    puStack_100 = puStack_458;
    uStack_f8 = (undefined4)uStack_450;
    uStack_f4 = uStack_450._4_4_;
    uStack_f0 = (undefined4)uStack_448;
    uStack_ec = uStack_448._4_4_;
    puStack_e8 = puStack_440;
    plStack_e0 = uStack_438;
    if (uStack_438 != (long *)0x0) {
      LOCK();
      uStack_438[1] = uStack_438[1] + 1;
      UNLOCK();
    }
    uStack_d8 = uStack_430;
    if (((ulong)plStack_428 & 1) == 0) {
      uStack_c0 = uStack_418;
      uStack_d0 = plStack_428;
      uStack_c8 = uStack_420;
    }
    else {
      FUN_0412e5e0(&uStack_d0,uStack_418,uStack_420);
    }
    uStack_b8 = uStack_410;
    if (iStack_1d0 == 4) {
      lVar14 = func_0x07da4590(&uStack_1f8);
      lVar14 = *(long *)(lVar14 + 0x48);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_07cd3801:
      *(undefined1 *)(puVar15 + 3) = uStack_118;
      *(undefined4 *)(puVar15 + 1) = uStack_128;
      *(undefined4 *)((long)puVar15 + 0xc) = uStack_124;
      *(undefined4 *)(puVar15 + 2) = uStack_120;
      *(undefined4 *)((long)puVar15 + 0x14) = uStack_11c;
      *puVar15 = &UNK_0f4e3c70;
      func_0x04167a20(puVar15 + 4,auStack_110);
      puVar15[5] = puStack_108;
      puVar15[6] = puStack_100;
      puVar15[7] = CONCAT44(uStack_f4,uStack_f8);
      puVar15[8] = CONCAT44(uStack_ec,uStack_f0);
      puVar15[9] = puStack_e8;
      puVar15[10] = plStack_e0;
      puStack_e8 = (undefined *)0x0;
      plStack_e0 = (long *)0x0;
      puVar15[0xb] = uStack_d8;
      puVar15[0xe] = uStack_c0;
      *(undefined4 *)(puVar15 + 0xc) = (undefined4)uStack_d0;
      *(undefined4 *)((long)puVar15 + 100) = uStack_d0._4_4_;
      *(undefined4 *)(puVar15 + 0xd) = (undefined4)uStack_c8;
      *(undefined4 *)((long)puVar15 + 0x6c) = uStack_c8._4_4_;
      uStack_d0 = (long *)0x0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      puVar15[0xf] = uStack_b8;
      plVar13 = *(long **)(lVar14 + 8);
      *(undefined8 **)(lVar14 + 8) = puVar15;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iStack_1d0 == 1) {
      lVar14 = func_0x07da4440(&uStack_1f8);
      lVar14 = *(long *)(lVar14 + 0x58);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_07cd3801;
    }
    uStack_208 = CONCAT31(uStack_208._1_3_,uStack_1c8);
    iStack_218 = iStack_1d8;
    iStack_214 = iStack_1d4;
    iStack_210 = iStack_1d0;
    uStack_20c = uStack_1cc;
    iStack_228 = iStack_1e8;
    iStack_224 = iStack_1e4;
    iStack_220 = iStack_1e0;
    iStack_21c = iStack_1dc;
    uStack_238 = (long *)CONCAT44(uStack_1f4,uStack_1f8);
    uStack_230 = (long *)CONCAT44(iStack_1ec,iStack_1f0);
    func_0x07da3d50(&plStack_3f8,&uStack_238,&UNK_01463f79);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef46ce8;
    if (plStack_3e0 != (long *)0x0) {
      lVar14 = *plStack_3e0;
      plStack_3e0 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3e0;
    }
    plStack_3e0 = plVar13;
    uStack_2e8 = (undefined4)uStack_3e8;
    uStack_2e0 = (long *)0x0;
    iStack_2d8 = 0;
    uStack_2d0 = 1;
    uStack_2c8 = 0;
    uStack_2c0 = &UNK_0490ce30;
    uStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &SUB_0490cb20;
    puStack_2a8 = &UNK_07da4710;
    puStack_2a0 = &UNK_07da4870;
    uStack_298 = 0;
    uStack_290 = 0;
    plStack_288 = (long *)0x0;
    func_0x048b05a0(uStack_3f0,&uStack_2e8);
    plVar13 = plStack_288;
    if (plStack_288 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_288 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_288 + 0x10))(plStack_288);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x07da3fe0(&plStack_3f8);
    uStack_248 = CONCAT31(uStack_248._1_3_,(undefined1)uStack_208);
    iStack_258 = iStack_218;
    iStack_254 = iStack_214;
    iStack_250 = iStack_210;
    uStack_24c = uStack_20c;
    iStack_268 = iStack_228;
    iStack_264 = iStack_224;
    iStack_260 = iStack_220;
    iStack_25c = iStack_21c;
    plStack_278 = uStack_238;
    plStack_270 = uStack_230;
    FUN_048b0bc0(&plStack_3e0);
    iVar8 = iStack_250;
    if (iStack_250 == 4) {
      lVar14 = func_0x07da4590(&plStack_278);
      lVar14 = *(long *)(lVar14 + 0x48);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
LAB_07cd3b08:
      puVar15[1] = 0xffffffffffffffff;
      puVar15[2] = 0;
      *(undefined1 *)(puVar15 + 3) = 0xff;
      *puVar15 = &UNK_0f0edce8;
      *(undefined8 *)((long)puVar15 + 0x1c) = 0x7fff00000000;
      *(undefined8 *)((long)puVar15 + 0x24) = 0;
      plVar13 = *(long **)(lVar14 + 8);
      *(undefined8 **)(lVar14 + 8) = puVar15;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iStack_250 == 1) {
      lVar14 = func_0x07da4440(&plStack_278);
      lVar14 = *(long *)(lVar14 + 0x58);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      goto LAB_07cd3b08;
    }
    uVar20 = uStack_24c;
    plVar13 = plStack_278;
    if ((DAT_0f5bcb08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5bcb08), iVar7 != 0)) {
      func_0x07da2910();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bca88,0xf53dab8);
      func_0x0410844d(&DAT_0f5bcb08);
    }
    plVar16 = (long *)(plVar13[3] +
                      (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bca88 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_07cd3bc0;
      plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
    } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bca88 + 4));
    if (plVar16 == (long *)plVar13[7]) {
LAB_07cd3bc0:
      puVar9 = &DAT_0f5bca88;
    }
    else {
      puVar9 = (undefined *)plVar16[2];
    }
    if ((1 < iVar8 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012a9002),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar13 = (long *)func_0x048b0c90(plVar13 + 3,puVar9,uVar20,1);
    if (plVar13 == (long *)0x0) {
      plStack_3f8 = (long *)0x0;
      uStack_3f0 = (undefined8 *)0x0;
      func_0x048b0d20(&plStack_3f8);
      plVar13 = plStack_3f8;
    }
    *(undefined1 *)(plVar13[0xb] + 0xa8) = 1;
    puStack_130 = &UNK_0f4e3c70;
    if (((ulong)uStack_d0 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_c0,(ulong)uStack_d0 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_e0 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(auStack_110);
    puStack_488 = &UNK_0f4e3c70;
    if (((ulong)plStack_428 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_418,(ulong)plStack_428 & 0xfffffffffffffffe);
    }
    plVar13 = uStack_438;
    if (uStack_438 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_438 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_438 + 0x10))(uStack_438);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_468);
  }
  if ((DAT_0f5bcbc0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcbc0), iVar8 != 0)) {
    func_0x07da4b10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcb40,0xf53dab8);
    func_0x0410844d(&DAT_0f5bcbc0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bcb40 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_07cd3d90;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bcb40 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_07cd3d90:
    puVar9 = &DAT_0f5bcb40;
    if (iRam000000000f5bcba0 != -0x2b3da790) goto LAB_07cd3de8;
LAB_07cd3dbb:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_07cd3de8;
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar14 + 9);
    if (bVar24) {
      puVar9 = *(undefined **)(lVar14 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar22 = *(ulong *)(lVar14 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_07cd3dbb;
LAB_07cd3de8:
    puVar9 = &UNK_011f270b;
    uVar22 = 0x14;
  }
  func_0x07da5120(&uStack_328,param_1,puVar9,uVar22);
  if ((byte)uStack_2f8 == 0) {
    uStack_300 = (undefined *)0xb58b14800000002;
    uStack_398 = 0;
    lStack_390 = 0;
    plStack_3a8 = (long *)0x0;
    lStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ac = 0;
    uStack_3c8 = 0;
    uStack_3c7 = 0;
    uStack_3c0 = (undefined7 *)0x0;
    lStack_3d8 = 0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    plStack_3f8 = (long *)0x0;
    uStack_3f0 = (undefined8 *)0x0;
    uStack_388 = CONCAT44(uStack_388._4_4_,0x3f600000);
    func_0x048afb10(&uStack_3b8,8);
    uStack_360 = 0;
    lStack_358 = 0;
    lStack_370 = 0;
    uStack_368 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    uStack_350 = 0xff00;
    uStack_34c = uStack_34c & 0xffffff00;
    uStack_348 = uStack_348 & 0xffffff00;
    uStack_344 = uStack_344 & 0xffffff00;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0f45a8;
    if (plStack_3f8 != (long *)0x0) {
      lVar14 = *plStack_3f8;
      plStack_3f8 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3f8;
    }
    plStack_3f8 = plVar13;
    if ((bStack_3d0 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_3c0,CONCAT71(uStack_3cf,bStack_3d0) & 0xfffffffffffffffe);
    }
    bStack_3d0 = 0x1e;
    uStack_3cf = 0x70697263736544;
    uStack_3c8 = 0x74;
    uStack_3c7 = 0x6570795420726f;
    uStack_3c0 = (undefined7 *)((ulong)uStack_3c0 & 0xffffffffffffff00);
    if ((DAT_0f5bcbe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcbe0), iVar8 != 0)) {
      func_0x07da4c20();
      func_0x0410844d(&DAT_0f5bcbe0);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,uStack_300._4_4_);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)CONCAT44(uStack_478._4_4_,3);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_07cec7d0;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &UNK_07ce8470;
    uStack_448 = &UNK_07da5ef0;
    puStack_440 = &UNK_07da5f00;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(&uStack_320,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_2d8 = iStack_310;
    iStack_2d4 = iStack_30c;
    uStack_2d0 = CONCAT44(iStack_304,iStack_308);
    uStack_2e8 = (int)uStack_320;
    uStack_2e4 = uStack_320._4_4_;
    uStack_2e0 = (long *)CONCAT44(iStack_314,iStack_318);
    func_0x07da5c80(&puStack_488,&uStack_2e8,&plStack_3f8);
    plVar13 = uStack_328;
    if (uStack_470._4_4_ == 2) {
      piVar12 = *(int **)(uStack_478[0xf] + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_470) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      plVar16 = *(long **)(piVar12 + 0xc);
      while (plVar16 != uStack_480) {
        piVar12 = *(int **)(piVar12 + 0xe);
        plVar16 = *(long **)(piVar12 + 0xc);
      }
LAB_07cd40ea:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_470._4_4_ == 1) {
        piVar12 = *(int **)(uStack_478[0xf] + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_470) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd40ea;
      }
      if (uStack_470._4_4_ == 0) {
        *(uint *)(uStack_478 + 3) = *(uint *)(uStack_478 + 3) | 0x90000;
      }
    }
    iVar8 = (int)uStack_300;
    uVar2 = uStack_300._4_4_;
    FUN_048b0bc0(&plStack_3f8);
    if ((DAT_0f5bcbc0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5bcbc0), iVar7 != 0)) {
      func_0x07da4b10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcb40,0xf53dab8);
      func_0x0410844d(&DAT_0f5bcbc0);
    }
    plVar16 = (long *)(plVar13[3] +
                      (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bcb40 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_07cd4170;
      plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
    } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bcb40 + 4));
    if (plVar16 == (long *)plVar13[7]) {
LAB_07cd4170:
      puVar9 = &DAT_0f5bcb40;
    }
    else {
      puVar9 = (undefined *)plVar16[2];
    }
    if ((1 < iVar8 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01345ae9),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar13 = (long *)func_0x048b0c90(plVar13 + 3,puVar9,uVar2,1);
    if (plVar13 == (long *)0x0) {
      plStack_3f8 = (long *)0x0;
      uStack_3f0 = (undefined8 *)0x0;
      func_0x048b0d20(&plStack_3f8);
      plVar13 = plStack_3f8;
    }
    *(undefined1 *)(plVar13[0xb] + 0xa8) = 4;
  }
  if (((byte)uStack_2f8 & 1) == 0) {
    func_0x07da5f50(&plStack_3f8,&uStack_328,&UNK_011bda5e);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (plStack_3e0 != (long *)0x0) {
      lVar14 = *plStack_3e0;
      plStack_3e0 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3e0;
    }
    plStack_3e0 = plVar13;
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,(undefined4)uStack_3e8);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)((ulong)uStack_478 & 0xffffffff00000000);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_048b3f30;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &SUB_048b2190;
    uStack_448 = &UNK_07da62f0;
    puStack_440 = &UNK_07da64b0;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(uStack_3f0,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x07da6220(&plStack_3f8);
    plVar13 = uStack_328;
    uStack_230 = (long *)CONCAT44(iStack_314,iStack_318);
    uStack_238 = uStack_320;
    iStack_228 = iStack_310;
    iStack_224 = iStack_30c;
    iStack_220 = iStack_308;
    iStack_21c = iStack_304;
    iVar8 = (int)uStack_300;
    uStack_400 = uStack_300._4_4_;
    uVar3 = (byte)uStack_2f8;
    FUN_048b0bc0(&plStack_3e0);
    uStack_468 = 0;
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    puStack_440 = (undefined *)0x0;
    uStack_438 = (long *)0x0;
    uStack_450 = (undefined1 *)0x0;
    uStack_448 = (undefined *)0x0;
    puStack_460 = (undefined *)0x0;
    puStack_458 = (undefined1 *)0x0;
    uStack_410 = 0;
    uStack_480 = (long *)0xffffffffffffffff;
    uStack_478 = (long *)0x0;
    uStack_470 = 0xff;
    puStack_488 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_468);
    puStack_460 = (undefined *)func_0x041681f0(&uStack_468,0xf547a30);
    puStack_458 = (undefined1 *)func_0x041681f0(&uStack_468,0xf547770);
    uStack_3f9 = uVar3;
    uStack_450 = (undefined1 *)0x0;
    uStack_448 = (undefined *)0x0;
    puStack_440 = (undefined *)0x0;
    uStack_438 = (long *)0x0;
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 1;
    uStack_1a8 = (undefined4)uStack_480;
    uStack_1a4 = uStack_480._4_4_;
    uStack_1a0 = (undefined4)uStack_478;
    uStack_19c = uStack_478._4_4_;
    uStack_198 = (undefined1)uStack_470;
    puStack_1b0 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_190,&uStack_468);
    puStack_188 = puStack_460;
    puStack_180 = puStack_458;
    uStack_178 = (undefined4)uStack_450;
    uStack_174 = uStack_450._4_4_;
    uStack_170 = (undefined4)uStack_448;
    uStack_16c = uStack_448._4_4_;
    puStack_168 = puStack_440;
    plStack_160 = uStack_438;
    if (uStack_438 != (long *)0x0) {
      LOCK();
      uStack_438[1] = uStack_438[1] + 1;
      UNLOCK();
    }
    uStack_158 = uStack_430;
    if (((ulong)plStack_428 & 1) == 0) {
      uStack_140 = uStack_418;
      uStack_150 = plStack_428;
      uStack_148 = uStack_420;
    }
    else {
      FUN_0412e5e0(&uStack_150,uStack_418,uStack_420);
    }
    uStack_138 = uStack_410;
    if (iVar8 == 4) {
      if ((DAT_0f5bcbc0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5bcbc0), iVar7 != 0)) {
        func_0x07da4b10();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcb40,0xf53dab8);
        func_0x0410844d(&DAT_0f5bcbc0);
      }
      plVar16 = (long *)(plVar13[3] +
                        (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f5bcb40 + 4)) * 8);
      do {
        lVar14 = *plVar16;
        if (lVar14 == -1) goto LAB_07cd45f8;
        plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
      } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bcb40 + 4));
      if (plVar16 == (long *)plVar13[7]) {
LAB_07cd45f8:
        puVar9 = &DAT_0f5bcb40;
      }
      else {
        puVar9 = (undefined *)plVar16[2];
      }
      plVar16 = (long *)func_0x048b1040(plVar13 + 3,puVar9,uStack_400,1);
      if (plVar16 == (long *)0x0) {
        plStack_3f8 = (long *)0x0;
        uStack_3f0 = (undefined8 *)0x0;
        func_0x048b10d0(&plStack_3f8);
        plVar17 = (long *)plStack_3f8[7];
        plVar16 = plStack_3f8;
        if (plVar17 == (long *)0x0) goto LAB_07cd46e6;
LAB_07cd470b:
        do {
          plVar16 = plVar17;
          plVar17 = (long *)plVar16[7];
          if ((long *)plVar16[7] == (long *)0x0) {
            plStack_3f8 = (long *)0x0;
            uStack_3f0 = (undefined8 *)0x0;
            func_0x048b10d0(&plStack_3f8);
            plVar17 = plStack_3f8;
          }
        } while (plVar17 != (long *)0x0);
      }
      else {
        plVar17 = (long *)plVar16[7];
        if ((long *)plVar16[7] != (long *)0x0) goto LAB_07cd470b;
LAB_07cd46e6:
        plStack_3f8 = (long *)0x0;
        uStack_3f0 = (undefined8 *)0x0;
        func_0x048b10d0(&plStack_3f8);
        plVar17 = plStack_3f8;
        if (plStack_3f8 != (long *)0x0) goto LAB_07cd470b;
      }
      lVar14 = plVar16[9];
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_07cd4774:
      *(undefined1 *)(puVar15 + 3) = uStack_198;
      *(undefined4 *)(puVar15 + 1) = uStack_1a8;
      *(undefined4 *)((long)puVar15 + 0xc) = uStack_1a4;
      *(undefined4 *)(puVar15 + 2) = uStack_1a0;
      *(undefined4 *)((long)puVar15 + 0x14) = uStack_19c;
      *puVar15 = &UNK_0f4e3c70;
      func_0x04167a20(puVar15 + 4,auStack_190);
      puVar15[5] = puStack_188;
      puVar15[6] = puStack_180;
      puVar15[7] = CONCAT44(uStack_174,uStack_178);
      puVar15[8] = CONCAT44(uStack_16c,uStack_170);
      puVar15[9] = puStack_168;
      puVar15[10] = plStack_160;
      puStack_168 = (undefined *)0x0;
      plStack_160 = (long *)0x0;
      puVar15[0xb] = uStack_158;
      puVar15[0xe] = uStack_140;
      *(undefined4 *)(puVar15 + 0xc) = (undefined4)uStack_150;
      *(undefined4 *)((long)puVar15 + 100) = uStack_150._4_4_;
      *(undefined4 *)(puVar15 + 0xd) = (undefined4)uStack_148;
      *(undefined4 *)((long)puVar15 + 0x6c) = uStack_148._4_4_;
      uStack_150 = (long *)0x0;
      uStack_148 = 0;
      uStack_140 = 0;
      puVar15[0xf] = uStack_138;
      plVar16 = *(long **)(lVar14 + 8);
      *(undefined8 **)(lVar14 + 8) = puVar15;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x28))();
      }
    }
    else if (iVar8 == 1) {
      if ((DAT_0f5bcbc0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5bcbc0), iVar7 != 0)) {
        func_0x07da4b10();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcb40,0xf53dab8);
        func_0x0410844d(&DAT_0f5bcbc0);
      }
      plVar16 = (long *)(plVar13[3] +
                        (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f5bcb40 + 4)) * 8);
      do {
        lVar14 = *plVar16;
        if (lVar14 == -1) goto LAB_07cd4578;
        plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
      } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bcb40 + 4));
      if (plVar16 == (long *)plVar13[7]) {
LAB_07cd4578:
        puVar9 = &DAT_0f5bcb40;
      }
      else {
        puVar9 = (undefined *)plVar16[2];
      }
      plVar16 = (long *)func_0x048b0c90(plVar13 + 3,puVar9,uStack_400,1);
      if (plVar16 == (long *)0x0) {
        plStack_3f8 = (long *)0x0;
        uStack_3f0 = (undefined8 *)0x0;
        func_0x048b0d20(&plStack_3f8);
        plVar16 = plStack_3f8;
      }
      lVar14 = plVar16[0xb];
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_07cd4774;
    }
    plStack_278 = plVar13;
    plStack_270 = uStack_238;
    iStack_268 = (int)uStack_230;
    iStack_264 = uStack_230._4_4_;
    iStack_260 = iStack_228;
    iStack_25c = iStack_224;
    iStack_258 = iStack_220;
    iStack_254 = iStack_21c;
    iStack_250 = iVar8;
    uStack_24c = uStack_400;
    uStack_248 = CONCAT31(uStack_248._1_3_,uStack_3f9);
    func_0x07da5f50(&plStack_3f8,&plStack_278,&UNK_013458b1);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0efc10;
    if (plStack_3e0 != (long *)0x0) {
      lVar14 = *plStack_3e0;
      plStack_3e0 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3e0;
    }
    plStack_3e0 = plVar13;
    uStack_2e8 = (undefined4)uStack_3e8;
    uStack_2e0 = (long *)0x0;
    iStack_2d8 = 0;
    uStack_2d0 = 1;
    uStack_2c8 = 0;
    uStack_2c0 = &UNK_07bc9310;
    uStack_2b8 = &SUB_048b06d0;
    puStack_2b0 = &SUB_07bc4fc0;
    puStack_2a8 = &UNK_07da6680;
    puStack_2a0 = &UNK_07da67e0;
    uStack_298 = 0;
    uStack_290 = 0;
    plStack_288 = (long *)0x0;
    func_0x048b05a0(uStack_3f0,&uStack_2e8);
    plVar13 = plStack_288;
    if (plStack_288 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_288 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_288 + 0x10))(plStack_288);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x07da6220(&plStack_3f8);
    uVar20 = uStack_24c;
    iVar8 = iStack_250;
    plVar13 = plStack_278;
    FUN_048b0bc0(&plStack_3e0);
    if ((DAT_0f5bcbc0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5bcbc0), iVar7 != 0)) {
      func_0x07da4b10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcb40,0xf53dab8);
      func_0x0410844d(&DAT_0f5bcbc0);
    }
    plVar16 = (long *)(plVar13[3] +
                      (ulong)((int)((ulong)(plVar13[4] - plVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bcb40 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_07cd4a50;
      plVar16 = (long *)(plVar13[6] + lVar14 * 0x18);
    } while (*(uint *)(plVar13[6] + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bcb40 + 4));
    if (plVar16 == (long *)plVar13[7]) {
LAB_07cd4a50:
      puVar9 = &DAT_0f5bcb40;
    }
    else {
      puVar9 = (undefined *)plVar16[2];
    }
    if ((1 < iVar8 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01345ae9),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar13 = (long *)func_0x048b0c90(plVar13 + 3,puVar9,uVar20,1);
    if (plVar13 == (long *)0x0) {
      plStack_3f8 = (long *)0x0;
      uStack_3f0 = (undefined8 *)0x0;
      func_0x048b0d20(&plStack_3f8);
      plVar13 = plStack_3f8;
    }
    *(undefined1 *)(plVar13[0xb] + 0xa8) = 4;
    puStack_1b0 = &UNK_0f4e3c70;
    if (((ulong)uStack_150 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_140,(ulong)uStack_150 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_160 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(auStack_190);
    puStack_488 = &UNK_0f4e3c70;
    if (((ulong)plStack_428 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_418,(ulong)plStack_428 & 0xfffffffffffffffe);
    }
    plVar13 = uStack_438;
    if (uStack_438 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_438 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_438 + 0x10))(uStack_438);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_468);
  }
  if ((DAT_0f5bcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcc78), iVar8 != 0)) {
    func_0x07da6d10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcbf8,0xf53dab8);
    func_0x0410844d(&DAT_0f5bcc78);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bcbf8 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_07cd4c20;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5bcbf8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_07cd4c20:
    puVar9 = &DAT_0f5bcbf8;
    if (iRam000000000f5bcc58 != -0x2b3da790) goto LAB_07cd4c78;
LAB_07cd4c4b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_07cd4c78;
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar14 + 9);
    if (bVar24) {
      puVar9 = *(undefined **)(lVar14 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar22 = *(ulong *)(lVar14 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_07cd4c4b;
LAB_07cd4c78:
    puVar9 = &UNK_012a8dd2;
    uVar22 = 0x11;
  }
  func_0x07da7310(&uStack_2e8,param_1,puVar9,uVar22);
  if ((byte)uStack_2b8 == 0) {
    uStack_2c0 = (undefined *)0xb58b14800000002;
    uStack_398 = 0;
    lStack_390 = 0;
    plStack_3a8 = (long *)0x0;
    lStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ac = 0;
    uStack_3c8 = 0;
    uStack_3c7 = 0;
    uStack_3c0 = (undefined7 *)0x0;
    lStack_3d8 = 0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    plStack_3f8 = (long *)0x0;
    uStack_3f0 = (undefined8 *)0x0;
    uStack_388 = CONCAT44(uStack_388._4_4_,0x3f600000);
    func_0x048afb10(&uStack_3b8,8);
    uStack_360 = 0;
    lStack_358 = 0;
    lStack_370 = 0;
    uStack_368 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    uStack_350 = 0xff00;
    uStack_34c = uStack_34c & 0xffffff00;
    uStack_348 = uStack_348 & 0xffffff00;
    uStack_344 = uStack_344 & 0xffffff00;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0f45a8;
    if (plStack_3f8 != (long *)0x0) {
      lVar14 = *plStack_3f8;
      plStack_3f8 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3f8;
    }
    plStack_3f8 = plVar13;
    if ((bStack_3d0 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_3c0,CONCAT71(uStack_3cf,bStack_3d0) & 0xfffffffffffffffe);
    }
    bStack_3d0 = 0x1e;
    uStack_3cf = 0x70697263736544;
    uStack_3c8 = 0x74;
    uStack_3c7 = 0x6570795420726f;
    uStack_3c0 = (undefined7 *)((ulong)uStack_3c0 & 0xffffffffffffff00);
    if ((DAT_0f5bcc98 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcc98), iVar8 != 0)) {
      func_0x07da6e20();
      func_0x0410844d(&DAT_0f5bcc98);
    }
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,uStack_2c0._4_4_);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)CONCAT44(uStack_478._4_4_,3);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_07cec7d0;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &UNK_07ce8470;
    uStack_448 = &UNK_07da80e0;
    puStack_440 = &UNK_07da80f0;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(&uStack_2e0,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    iStack_318 = (int)uStack_2d0;
    iStack_314 = uStack_2d0._4_4_;
    iStack_310 = (int)uStack_2c8;
    iStack_30c = uStack_2c8._4_4_;
    uStack_328 = uStack_2e0;
    uStack_320 = (long *)CONCAT44(iStack_2d4,iStack_2d8);
    func_0x07da7e70(&puStack_488,&uStack_328,&plStack_3f8);
    if (uStack_470._4_4_ == 2) {
      piVar12 = *(int **)(uStack_478[0xf] + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_470) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      plVar13 = *(long **)(piVar12 + 0xc);
      while (plVar13 != uStack_480) {
        piVar12 = *(int **)(piVar12 + 0xe);
        plVar13 = *(long **)(piVar12 + 0xc);
      }
LAB_07cd4f7a:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_470._4_4_ == 1) {
        piVar12 = *(int **)(uStack_478[0xf] + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_470) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd4f7a;
      }
      if (uStack_470._4_4_ == 0) {
        *(uint *)(uStack_478 + 3) = *(uint *)(uStack_478 + 3) | 0x90000;
      }
    }
    lVar14 = CONCAT44(uStack_2e4,uStack_2e8);
    iVar8 = (int)uStack_2c0;
    uVar2 = uStack_2c0._4_4_;
    FUN_048b0bc0(&plStack_3f8);
    if ((DAT_0f5bcc78 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5bcc78), iVar7 != 0)) {
      func_0x07da6d10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcbf8,0xf53dab8);
      func_0x0410844d(&DAT_0f5bcc78);
    }
    plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5bcbf8 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_07cd5000;
      plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5bcbf8 + 4)
            );
    if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_07cd5000:
      puVar9 = &DAT_0f5bcbf8;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    if ((1 < iVar8 - 1U) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014b31c1),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar13 = (long *)func_0x048b0c90(lVar14 + 0x18,puVar9,uVar2,1);
    if (plVar13 == (long *)0x0) {
      plStack_3f8 = (long *)0x0;
      uStack_3f0 = (undefined8 *)0x0;
      func_0x048b0d20(&plStack_3f8);
      plVar13 = plStack_3f8;
    }
    *(undefined1 *)(plVar13[0xb] + 0xa8) = 4;
  }
  if (((byte)uStack_2b8 & 1) == 0) {
    if ((DAT_0f5bcc98 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcc98), iVar8 != 0)) {
      func_0x07da6e20();
      func_0x0410844d(&DAT_0f5bcc98);
    }
    uStack_2c0 = (undefined *)0x9554a60a00000001;
    lVar14 = CONCAT44(uStack_2e4,uStack_2e8);
    if ((DAT_0f5bcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcc78), iVar8 != 0)) {
      func_0x07da6d10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcbf8,0xf53dab8);
      func_0x0410844d(&DAT_0f5bcc78);
    }
    uStack_3f0 = (undefined8 *)(lVar14 + 0x18);
    plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5bcbf8 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_07cd5150;
      plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5bcbf8 + 4)
            );
    if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_07cd5150:
      plStack_3f8 = (long *)&DAT_0f5bcbf8;
    }
    else {
      plStack_3f8 = (long *)plVar13[2];
    }
    func_0x0ed621a0(&plStack_3f8,uStack_2c0._4_4_);
    plStack_3f8 = (long *)CONCAT62(plStack_3f8._2_6_,1);
    uStack_3e8 = CONCAT44(uStack_3e8._4_4_,uStack_2c0._4_4_);
    plStack_3e0 = (long *)0x0;
    lStack_3d8 = 0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3c8 = 0;
    uStack_3c7 = 0;
    uStack_3c0 = (undefined7 *)0x0;
    uStack_3b8 = 0x65744910;
    uStack_3b4 = 0x6154206d;
    uStack_3b0 = 0x67;
    uStack_3af = 0;
    lStack_3a0 = 0;
    uStack_398 = 0;
    lStack_390 = 0;
    uStack_388 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    lStack_370 = CONCAT44(lStack_370._4_4_,0x3f600000);
    uStack_3f0 = &uStack_2e0;
    func_0x048afb10(&lStack_3a0,8);
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_340 = 0;
    lStack_358 = 0;
    uStack_350 = 0;
    uStack_34e = 0;
    uStack_34c = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_338 = 0xff00;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (plStack_3e0 != (long *)0x0) {
      lVar14 = *plStack_3e0;
      plStack_3e0 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_3e0;
    }
    plStack_3e0 = plVar13;
    puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,(undefined4)uStack_3e8);
    uStack_480 = (long *)0x0;
    uStack_478 = (long *)((ulong)uStack_478 & 0xffffffff00000000);
    uStack_470 = 1;
    uStack_468 = 0;
    puStack_460 = &UNK_048b3f30;
    puStack_458 = &SUB_048b06d0;
    uStack_450 = &SUB_048b2190;
    uStack_448 = &UNK_07da8140;
    puStack_440 = &UNK_07da8300;
    uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
    uStack_430 = 0;
    plStack_428 = (long *)0x0;
    func_0x048b05a0(uStack_3f0,&puStack_488);
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_428 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x07da7e70(&puStack_488,uStack_3f0,&plStack_3e0);
    if (uStack_470._4_4_ == 2) {
      piVar12 = *(int **)(uStack_478[0xf] + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_470) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      plVar13 = *(long **)(piVar12 + 0xc);
      while (plVar13 != uStack_480) {
        piVar12 = *(int **)(piVar12 + 0xe);
        plVar13 = *(long **)(piVar12 + 0xc);
      }
LAB_07cd541a:
      piVar12[4] = piVar12[4] | (int)plStack_3f8 << 0x10;
    }
    else {
      if (uStack_470._4_4_ == 1) {
        piVar12 = *(int **)(uStack_478[0xf] + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_470) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_07cd541a;
      }
      if (uStack_470._4_4_ == 0) {
        *(uint *)(uStack_478 + 3) = *(uint *)(uStack_478 + 3) | (int)plStack_3f8 << 0x10;
      }
    }
    lVar14 = CONCAT44(uStack_2e4,uStack_2e8);
    iVar8 = (int)uStack_2c0;
    uStack_400 = uStack_2c0._4_4_;
    FUN_048b0bc0(&plStack_3e0);
    lStack_3d8 = 0;
    lStack_390 = 0;
    uStack_388 = 0;
    lStack_3a0 = 0;
    uStack_398 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ac = 0;
    plStack_3a8 = (long *)0x0;
    uStack_3c0 = (undefined7 *)0x0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3c8 = 0;
    uStack_3c7 = 0;
    lStack_380 = 0;
    uStack_3f0 = (undefined8 *)0xffffffffffffffff;
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0xff;
    plStack_3f8 = (long *)&UNK_0f4e3c70;
    func_0x041679a0(&lStack_3d8);
    uVar18 = func_0x041681f0(&lStack_3d8,0xf547a30);
    bStack_3d0 = (byte)uVar18;
    uStack_3cf = (undefined7)((ulong)uVar18 >> 8);
    uVar18 = func_0x041681f0(&lStack_3d8,0xf547770);
    uStack_3c8 = (undefined1)uVar18;
    uStack_3c7 = (undefined7)((ulong)uVar18 >> 8);
    uStack_3c0 = (undefined7 *)0x0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ac = 0;
    plStack_3a8 = (long *)0x0;
    lStack_3a0 = 0;
    uStack_398 = 0;
    lStack_390 = 0;
    uStack_388 = 0;
    lStack_380 = 1;
    uStack_a8 = (undefined4)uStack_3f0;
    uStack_a4 = uStack_3f0._4_4_;
    uStack_a0 = (undefined4)uStack_3e8;
    uStack_9c = uStack_3e8._4_4_;
    uStack_98 = plStack_3e0._0_1_;
    puStack_b0 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_90,&lStack_3d8);
    uStack_88 = CONCAT71(uStack_3cf,bStack_3d0);
    uStack_80 = CONCAT71(uStack_3c7,uStack_3c8);
    uStack_78 = (undefined4)uStack_3c0;
    uStack_74 = uStack_3c0._4_4_;
    uStack_70 = uStack_3b8;
    uStack_6c = uStack_3b4;
    uStack_68 = CONCAT44(uStack_3ac,CONCAT22(uStack_3ae,CONCAT11(uStack_3af,uStack_3b0)));
    plStack_60 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plStack_3a8[1] = plStack_3a8[1] + 1;
      UNLOCK();
    }
    lStack_58 = lStack_3a0;
    if ((uStack_398 & 1) == 0) {
      uStack_40 = uStack_388;
      uStack_50 = uStack_398;
      uStack_48 = lStack_390;
    }
    else {
      FUN_0412e5e0(&uStack_50,uStack_388,lStack_390);
    }
    uStack_38 = lStack_380;
    if (iVar8 == 4) {
      if ((DAT_0f5bcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcc78), iVar8 != 0)) {
        func_0x07da6d10();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcbf8,0xf53dab8);
        func_0x0410844d(&DAT_0f5bcc78);
      }
      plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5bcbf8 + 4)) * 8);
      do {
        lVar21 = *plVar13;
        if (lVar21 == -1) goto LAB_07cd56f8;
        plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar21 * 0x18);
      } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar21 * 0x18) !=
               *(uint *)(_DAT_0f5bcbf8 + 4));
      if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_07cd56f8:
        puVar9 = &DAT_0f5bcbf8;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      puVar9 = (undefined *)func_0x048b1040(lVar14 + 0x18,puVar9,uStack_400,1);
      if (puVar9 == (undefined *)0x0) {
        puStack_488 = (undefined *)0x0;
        uStack_480 = (long *)0x0;
        func_0x048b10d0(&puStack_488);
        puVar19 = *(undefined **)(puStack_488 + 0x38);
        puVar9 = puStack_488;
      }
      else {
        puVar19 = *(undefined **)(puVar9 + 0x38);
      }
      if (puVar19 != (undefined *)0x0) goto LAB_07cd57f5;
      puStack_488 = (undefined *)0x0;
      uStack_480 = (long *)0x0;
      func_0x048b10d0(&puStack_488);
      puVar5 = puStack_488;
      while (puVar19 = puVar5, puVar19 != (undefined *)0x0) {
LAB_07cd57f5:
        puVar9 = puVar19;
        puVar5 = *(undefined **)(puVar19 + 0x38);
        if (*(undefined **)(puVar19 + 0x38) == (undefined *)0x0) {
          puStack_488 = (undefined *)0x0;
          uStack_480 = (long *)0x0;
          func_0x048b10d0(&puStack_488);
          puVar5 = puStack_488;
        }
      }
      lVar14 = *(long *)(puVar9 + 0x48);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_07cd583c:
      *(undefined1 *)(puVar15 + 3) = uStack_98;
      *(undefined4 *)(puVar15 + 1) = uStack_a8;
      *(undefined4 *)((long)puVar15 + 0xc) = uStack_a4;
      *(undefined4 *)(puVar15 + 2) = uStack_a0;
      *(undefined4 *)((long)puVar15 + 0x14) = uStack_9c;
      *puVar15 = &UNK_0f4e3c70;
      func_0x04167a20(puVar15 + 4,auStack_90);
      puVar15[5] = uStack_88;
      puVar15[6] = uStack_80;
      puVar15[7] = CONCAT44(uStack_74,uStack_78);
      puVar15[8] = CONCAT44(uStack_6c,uStack_70);
      puVar15[9] = uStack_68;
      puVar15[10] = plStack_60;
      uStack_68 = 0;
      plStack_60 = (long *)0x0;
      puVar15[0xb] = lStack_58;
      puVar15[0xe] = uStack_40;
      *(undefined4 *)(puVar15 + 0xc) = (undefined4)uStack_50;
      *(undefined4 *)((long)puVar15 + 100) = uStack_50._4_4_;
      *(undefined4 *)(puVar15 + 0xd) = (undefined4)uStack_48;
      *(undefined4 *)((long)puVar15 + 0x6c) = uStack_48._4_4_;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      puVar15[0xf] = uStack_38;
      plVar13 = *(long **)(lVar14 + 8);
      *(undefined8 **)(lVar14 + 8) = puVar15;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iVar8 == 1) {
      if ((DAT_0f5bcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5bcc78), iVar8 != 0)) {
        func_0x07da6d10();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bcbf8,0xf53dab8);
        func_0x0410844d(&DAT_0f5bcc78);
      }
      plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5bcbf8 + 4)) * 8);
      do {
        lVar21 = *plVar13;
        if (lVar21 == -1) goto LAB_07cd5678;
        plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar21 * 0x18);
      } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar21 * 0x18) !=
               *(uint *)(_DAT_0f5bcbf8 + 4));
      if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_07cd5678:
        puVar9 = &DAT_0f5bcbf8;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      puVar9 = (undefined *)func_0x048b0c90(lVar14 + 0x18,puVar9,uStack_400,1);
      if (puVar9 == (undefined *)0x0) {
        puStack_488 = (undefined *)0x0;
        uStack_480 = (long *)0x0;
        func_0x048b0d20(&puStack_488);
        puVar9 = puStack_488;
      }
      lVar14 = *(long *)(puVar9 + 0x58);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_07cd583c;
    }
    puStack_b0 = &UNK_0f4e3c70;
    if ((uStack_50 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_40,uStack_50 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_60 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(auStack_90);
    plStack_3f8 = (long *)&UNK_0f4e3c70;
    if ((uStack_398 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_388,uStack_398 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_3a8 + 1;
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&lStack_3d8);
  }
  lVar14 = func_0x07da84d0(lStack_1b8);
  if ((*(int *)(lVar14 + 0x60) == -0x2b3da790) && (lVar14 = *(long *)(lVar14 + 0x68), lVar14 != 0))
  {
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar21 = lVar14 + 9;
    if (bVar24) {
      lVar21 = *(long *)(lVar14 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar22 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x07da93c0(&uStack_2e8,param_1,lVar21,uVar22);
  }
  else {
    func_0x07da93c0(&uStack_2e8,param_1,&UNK_0120c89a,0x10);
  }
  if ((byte)uStack_2b8 != '\0') {
    return;
  }
  func_0x07da9c70(&plStack_3f8,&uStack_2e8,&UNK_013fe0f3,0xf);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f0f78b0;
  if (plStack_3e0 != (long *)0x0) {
    lVar14 = *plStack_3e0;
    plStack_3e0 = plVar13;
    (**(code **)(lVar14 + 8))();
    plVar13 = plStack_3e0;
  }
  plStack_3e0 = plVar13;
  puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,(undefined4)uStack_3e8);
  uStack_480 = (long *)0x0;
  uStack_478 = (long *)((ulong)uStack_478 & 0xffffffff00000000);
  uStack_470 = 1;
  uStack_468 = 0;
  puStack_460 = &UNK_07db0090;
  puStack_458 = &SUB_048b06d0;
  uStack_450 = &UNK_07dadf90;
  uStack_448 = &UNK_07db0150;
  puStack_440 = &UNK_07db0390;
  uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
  uStack_430 = 0;
  plStack_428 = (long *)0x0;
  func_0x048b05a0(uStack_3f0,&puStack_488);
  plVar13 = plStack_428;
  if (plStack_428 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_428 + 1;
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_428 + 0x10))(plStack_428);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x07da9e60(&plStack_3f8);
  uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(byte)uStack_2b8);
  iStack_308 = (int)uStack_2c8;
  iStack_304 = uStack_2c8._4_4_;
  uStack_300 = uStack_2c0;
  iStack_318 = iStack_2d8;
  iStack_314 = iStack_2d4;
  iStack_310 = (int)uStack_2d0;
  iStack_30c = uStack_2d0._4_4_;
  uStack_328 = (long *)CONCAT44(uStack_2e4,uStack_2e8);
  uStack_320 = uStack_2e0;
  FUN_048b0bc0(&plStack_3e0);
  func_0x07da9c70(&plStack_3f8,&uStack_328,&UNK_0120b6cc,9);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f0c2800;
  if (plStack_3e0 != (long *)0x0) {
    lVar14 = *plStack_3e0;
    plStack_3e0 = plVar13;
    (**(code **)(lVar14 + 8))();
    plVar13 = plStack_3e0;
  }
  plStack_3e0 = plVar13;
  puStack_488 = (undefined *)CONCAT44(puStack_488._4_4_,(undefined4)uStack_3e8);
  uStack_480 = (long *)0x0;
  uStack_478 = (long *)((ulong)uStack_478 & 0xffffffff00000000);
  uStack_470 = 1;
  uStack_468 = 0;
  puStack_460 = &UNK_072a5d20;
  puStack_458 = &SUB_048b06d0;
  uStack_450 = &UNK_0651ed40;
  uStack_448 = &UNK_07db0800;
  puStack_440 = &UNK_07db0960;
  uStack_438 = (long *)((ulong)uStack_438 & 0xffffffff00000000);
  uStack_430 = 0;
  plStack_428 = (long *)0x0;
  func_0x048b05a0(uStack_3f0,&puStack_488);
  plVar13 = plStack_428;
  if (plStack_428 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_428 + 1;
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_428 + 0x10))(plStack_428);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x07da9e60(&plStack_3f8);
  lVar14 = (long)uStack_328;
  iVar8 = (int)uStack_300;
  uVar2 = uStack_300._4_4_;
  FUN_048b0bc0(&plStack_3e0);
  if (iVar8 != 4) {
    if (iVar8 != 1) {
      return;
    }
    lVar14 = lVar14 + 0x18;
    uVar18 = func_0x07da84d0(lVar14);
    plVar13 = (long *)func_0x048b0c90(lVar14,uVar18,uVar2,1);
    if (plVar13 == (long *)0x0) {
      plStack_3f8 = (long *)0x0;
      uStack_3f0 = (undefined8 *)0x0;
      func_0x048b0d20(&plStack_3f8);
      plVar13 = plStack_3f8;
    }
    lVar14 = plVar13[0xb];
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    goto LAB_07cd5e64;
  }
  lVar14 = lVar14 + 0x18;
  uVar18 = func_0x07da84d0(lVar14);
  plVar13 = (long *)func_0x048b1040(lVar14,uVar18,uVar2,1);
  if (plVar13 == (long *)0x0) {
    plStack_3f8 = (long *)0x0;
    uStack_3f0 = (undefined8 *)0x0;
    func_0x048b10d0(&plStack_3f8);
    plVar16 = (long *)plStack_3f8[7];
    plVar13 = plStack_3f8;
    if (plVar16 == (long *)0x0) goto LAB_07cd5ddc;
LAB_07cd5e01:
    do {
      plVar13 = plVar16;
      plVar16 = (long *)plVar13[7];
      if ((long *)plVar13[7] == (long *)0x0) {
        plStack_3f8 = (long *)0x0;
        uStack_3f0 = (undefined8 *)0x0;
        func_0x048b10d0(&plStack_3f8);
        plVar16 = plStack_3f8;
      }
    } while (plVar16 != (long *)0x0);
  }
  else {
    plVar16 = (long *)plVar13[7];
    if ((long *)plVar13[7] != (long *)0x0) goto LAB_07cd5e01;
LAB_07cd5ddc:
    plStack_3f8 = (long *)0x0;
    uStack_3f0 = (undefined8 *)0x0;
    func_0x048b10d0(&plStack_3f8);
    plVar16 = plStack_3f8;
    if (plStack_3f8 != (long *)0x0) goto LAB_07cd5e01;
  }
  lVar14 = plVar13[9];
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
LAB_07cd5e64:
  puVar15[1] = 0xffffffffffffffff;
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0xff;
  *puVar15 = &UNK_0f0edce8;
  *(undefined8 *)((long)puVar15 + 0x1c) = 0xffff00000001;
  *(undefined8 *)((long)puVar15 + 0x24) = 0;
  plVar13 = *(long **)(lVar14 + 8);
  *(undefined8 **)(lVar14 + 8) = puVar15;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x28))();
  }
  return;
}


