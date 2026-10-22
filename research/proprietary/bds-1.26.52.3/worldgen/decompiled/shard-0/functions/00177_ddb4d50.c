/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdeb4d50 (ELF vaddr 0xddb4d50)
 * Label: caller-of-callee
 * Body:  [[0deb4d50, 0deb5dc1] [0deb5dd0, 0deb5ffa] [0deb6000, 0deb6a20] [0deb6a30, 0deb9d81] [0deb9d90, 0deb9fba] [0deb9fc0, 0deba9a3] [0deba9b0, 0debb5b9]]
 * Ghidra: FUN_0deb4d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0deb4d50(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined4 *puVar21;
  int *piVar22;
  long lVar23;
  int *piVar24;
  uint uVar25;
  undefined1 *puVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 uVar30;
  uint *puVar31;
  bool bVar32;
  long *plStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined4 *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long *plStack_2d8;
  long lStack_2d0;
  undefined4 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined5 uStack_288;
  undefined1 uStack_279;
  long *plStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined4 *puStack_240;
  undefined1 uStack_238;
  undefined6 uStack_237;
  undefined1 uStack_231;
  undefined1 uStack_230;
  undefined6 uStack_22f;
  undefined1 uStack_229;
  ulong uStack_228;
  long lStack_220;
  long *plStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined2 uStack_1d0;
  undefined2 uStack_1ce;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  long lStack_1c0;
  undefined2 uStack_1b8;
  undefined2 uStack_1b6;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined1 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  uint uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
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
  int iStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
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
  int iStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if ((DAT_0f740ab8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740ab8), iVar14 != 0)) {
    func_0x0df66b10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740a38,0xf53dab8);
    func_0x0410844d(&DAT_0f740ab8);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f740a38 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deb4dc0;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740a38 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deb4dc0:
    puVar16 = &DAT_0f740a38;
    if (iRam000000000f740a98 != -0x2b3da790) goto LAB_0deb4e18;
LAB_0deb4deb:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deb4e18;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar23 + 9);
    if (bVar32) {
      puVar16 = *(undefined **)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deb4deb;
LAB_0deb4e18:
    puVar16 = &UNK_0128552a;
    uVar17 = 0x18;
  }
  func_0x0df66f50(&uStack_168,param_1,puVar16,uVar17);
  uStack_134 = uStack_134 & 0xffffff00;
  uStack_130 = uStack_130 & 0xffffff00;
  if ((char)uStack_138 == '\0') {
    func_0x0df6a7d0(&plStack_278,&UNK_01423ae0);
    puVar26 = (undefined1 *)((ulong)uStack_250 >> 1 & 0x7f);
    puVar21 = (undefined4 *)((long)&uStack_250 + 1);
    if (((ulong)uStack_250 & 1) != 0) {
      puVar26 = puStack_248;
      puVar21 = puStack_240;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uStack_13c = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < (undefined1 *)0x4) {
        uStack_13c = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uStack_13c = 0x811c9dc5;
        uVar29 = 0;
        do {
          uStack_13c = ((int)*(char *)((long)puVar21 + uVar29 + 3) ^
                       ((int)*(char *)((long)puVar21 + uVar29 + 2) ^
                       ((int)*(char *)((long)puVar21 + uVar29 + 1) ^
                       ((int)*(char *)((long)puVar21 + uVar29) ^ uStack_13c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uStack_13c = ((int)*(char *)((long)puVar21 + uVar28 + uVar29) ^ uStack_13c) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    iStack_140 = 2;
    if ((DAT_0f740ad8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740ad8), iVar14 != 0)) {
      func_0x0df66c20();
      func_0x0410844d(&DAT_0f740ad8);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uStack_13c);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)CONCAT44(uStack_328._4_4_,3);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df6af00;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df66a50;
    puStack_2f8 = &UNK_0df6afc0;
    puStack_2f0 = &UNK_0df6afd0;
    uStack_2e8 = (ulong)uStack_2e8._4_4_ << 0x20;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(&iStack_160,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_198 = iStack_150;
    iStack_194 = iStack_14c;
    iStack_190 = iStack_148;
    iStack_18c = iStack_144;
    func_0x0df6ac90(&plStack_338,&uStack_1a8,&plStack_278);
    if (uStack_320._4_4_ == 2) {
      piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_320) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      lVar23 = *(long *)(piVar24 + 0xc);
      while ((long *)lVar23 != plStack_330) {
        piVar24 = *(int **)(piVar24 + 0xe);
        lVar23 = *(long *)(piVar24 + 0xc);
      }
LAB_0deb50ea:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_320) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb50ea;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)((long)uStack_328 + 0x18) = *(uint *)((long)uStack_328 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_130 == '\0') {
      func_0x0df6b020(&plStack_338,&uStack_168);
    }
    uVar25 = uStack_134;
    lVar23 = CONCAT44(uStack_164,uStack_168);
    if ((DAT_0f740ab8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740ab8), iVar14 != 0)) {
      func_0x0df66b10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f740a38,0xf53dab8);
      func_0x0410844d(&DAT_0f740ab8);
    }
    plVar18 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f740a38 + 4)) * 8);
    do {
      lVar27 = *plVar18;
      if (lVar27 == -1) goto LAB_0deb5180;
      plVar18 = (long *)(*(long *)(lVar23 + 0x30) + lVar27 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f740a38 + 4)
            );
    if (plVar18 == *(long **)(lVar23 + 0x38)) {
LAB_0deb5180:
      puVar16 = &DAT_0f740a38;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar31 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar31 != puVar2 && (*puVar31 != uVar25)); puVar31 = puVar31 + 0xe) {
    }
    if ((puVar31 == puVar2) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0140cea8),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
    FUN_05d9c620(puVar31 + 2,&uStack_13c,&uStack_13c,&plStack_338);
    uStack_1a8 = (long *)CONCAT44(uStack_164,uStack_168);
    uStack_1a0 = (long *)CONCAT44(iStack_15c,iStack_160);
    iStack_198 = iStack_158;
    iStack_194 = iStack_154;
    iStack_190 = iStack_150;
    iStack_18c = iStack_14c;
    iStack_188 = iStack_148;
    iStack_184 = iStack_144;
    uStack_180 = (undefined *)CONCAT44(uStack_13c,iStack_140);
    uStack_178 = CONCAT44(uStack_134,uStack_138);
    uStack_170 = uStack_130;
    FUN_048b0bc0(&plStack_278);
    func_0x0df6a7d0(&plStack_278);
    puVar26 = (undefined1 *)((ulong)uStack_250 >> 1 & 0x7f);
    puVar21 = (undefined4 *)((long)&uStack_250 + 1);
    if (((ulong)uStack_250 & 1) != 0) {
      puVar26 = puStack_248;
      puVar21 = puStack_240;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uVar25 = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < (undefined1 *)0x4) {
        uVar25 = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uVar25 = 0x811c9dc5;
        uVar29 = 0;
        do {
          uVar25 = ((int)*(char *)((long)puVar21 + uVar29 + 3) ^
                   ((int)*(char *)((long)puVar21 + uVar29 + 2) ^
                   ((int)*(char *)((long)puVar21 + uVar29 + 1) ^
                   ((int)*(char *)((long)puVar21 + uVar29) ^ uVar25) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uVar25 = ((int)*(char *)((long)puVar21 + uVar28 + uVar29) ^ uVar25) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    uStack_180 = (undefined *)CONCAT44(uVar25,2);
    if ((DAT_0f740ad8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740ad8), iVar14 != 0)) {
      func_0x0df66c20();
      func_0x0410844d(&DAT_0f740ad8);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uStack_180._4_4_);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)CONCAT44(uStack_328._4_4_,3);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df6af00;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df66a50;
    puStack_2f8 = &UNK_0df6b1e0;
    puStack_2f0 = &UNK_0df6b1f0;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(&uStack_1a0,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_118 = iStack_190;
    iStack_114 = iStack_18c;
    iStack_110 = iStack_188;
    iStack_10c = iStack_184;
    uStack_128 = uStack_1a0;
    uStack_120 = (long *)CONCAT44(iStack_194,iStack_198);
    func_0x0df6ac90(&plStack_338,&uStack_128,&plStack_278);
    if (uStack_320._4_4_ == 2) {
      piVar24 = *(int **)(uStack_328[0xf] + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_320) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      plVar18 = *(long **)(piVar24 + 0xc);
      while (plVar18 != plStack_330) {
        piVar24 = *(int **)(piVar24 + 0xe);
        plVar18 = *(long **)(piVar24 + 0xc);
      }
LAB_0deb54da:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar24 = *(int **)(uStack_328[0xf] + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_320) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb54da;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)(uStack_328 + 3) = *(uint *)(uStack_328 + 3) | 0x90000;
      }
    }
    if ((char)uStack_170 == '\0') {
      func_0x0df6b020(&plStack_338,&uStack_1a8);
    }
    plVar18 = uStack_1a8;
    iVar14 = uStack_178._4_4_;
    if ((DAT_0f740ab8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f740ab8), iVar15 != 0)) {
      func_0x0df66b10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f740a38,0xf53dab8);
      func_0x0410844d(&DAT_0f740ab8);
    }
    plVar20 = (long *)(plVar18[3] +
                      (ulong)((int)((ulong)(plVar18[4] - plVar18[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f740a38 + 4)) * 8);
    do {
      lVar23 = *plVar20;
      if (lVar23 == -1) goto LAB_0deb5570;
      plVar20 = (long *)(plVar18[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar18[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740a38 + 4));
    if (plVar20 == (long *)plVar18[7]) {
LAB_0deb5570:
      puVar16 = &DAT_0f740a38;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    piVar22 = *(int **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (piVar24 = *(int **)(*(long *)(puVar16 + 0x68) + 0x20);
        (piVar24 != piVar22 && (*piVar24 != iVar14)); piVar24 = piVar24 + 0xe) {
    }
    if ((piVar24 == piVar22) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0140cea8),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
    FUN_05d9c620(piVar24 + 2,(long)&uStack_180 + 4,(long)&uStack_180 + 4,&plStack_338);
    plVar18 = uStack_1a8;
    iVar14 = (int)uStack_180;
    uVar3 = uStack_180._4_4_;
    FUN_048b0bc0(&plStack_278);
    if ((iVar14 != 2) &&
       (cVar13 = func_0x0eeddcf0(&UNK_011e6031,&UNK_011e6043,0x391,&UNK_0119d818,&UNK_014a86bc),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((DAT_0f740ab8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740ab8), iVar14 != 0)) {
      func_0x0df66b10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f740a38,0xf53dab8);
      func_0x0410844d(&DAT_0f740ab8);
    }
    plVar20 = (long *)(plVar18[3] +
                      (ulong)((int)((ulong)(plVar18[4] - plVar18[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f740a38 + 4)) * 8);
    do {
      lVar23 = *plVar20;
      if (lVar23 == -1) goto LAB_0deb56c0;
      plVar20 = (long *)(plVar18[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar18[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740a38 + 4));
    if (plVar20 == (long *)plVar18[7]) {
LAB_0deb56c0:
      puVar16 = &DAT_0f740a38;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    plVar18 = (long *)func_0x048b0c90(plVar18 + 3,puVar16,uVar3,1);
    if (plVar18 == (long *)0x0) {
      plStack_278 = (long *)0x0;
      plStack_270 = (long *)0x0;
      func_0x048b0d20(&plStack_278);
      plVar18 = plStack_278;
    }
    *(undefined1 *)(plVar18[0xb] + 0xa9) = 2;
  }
  if ((DAT_0f740b70 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740b70), iVar14 != 0)) {
    func_0x0df6b300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740af0,0xf53dab8);
    func_0x0410844d(&DAT_0f740b70);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f740af0 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deb5770;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740af0 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deb5770:
    puVar16 = &DAT_0f740af0;
    if (iRam000000000f740b50 != -0x2b3da790) goto LAB_0deb57de;
LAB_0deb579b:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deb57de;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar27 = lVar23 + 9;
    if (bVar32) {
      lVar27 = *(long *)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0df6b720(&uStack_168,param_1,lVar27,uVar17);
    iVar14 = iStack_198;
    iVar15 = iStack_194;
    iVar9 = iStack_190;
    iVar10 = iStack_18c;
    iVar11 = iStack_188;
    iVar12 = iStack_184;
    iStack_198 = iStack_158;
    iStack_194 = iStack_154;
    iStack_190 = iStack_150;
    iStack_18c = iStack_14c;
    iStack_188 = iStack_148;
    iStack_184 = iStack_144;
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deb579b;
LAB_0deb57de:
    func_0x0df6b720(&uStack_168,param_1,&UNK_013237e4,10);
    iVar14 = iStack_198;
    iVar15 = iStack_194;
    iVar9 = iStack_190;
    iVar10 = iStack_18c;
    iVar11 = iStack_188;
    iVar12 = iStack_184;
    iStack_198 = iStack_158;
    iStack_194 = iStack_154;
    iStack_190 = iStack_150;
    iStack_18c = iStack_14c;
    iStack_188 = iStack_148;
    iStack_184 = iStack_144;
  }
  iStack_158 = iStack_198;
  iStack_154 = iStack_194;
  iStack_150 = iStack_190;
  iStack_14c = iStack_18c;
  iStack_148 = iStack_188;
  iStack_144 = iStack_184;
  if ((char)uStack_138 == '\0') {
    uStack_1f0._4_4_ = (undefined4)((ulong)uStack_1f0 >> 0x20);
    uStack_268._4_4_ = (undefined4)((ulong)uStack_268 >> 0x20);
    uStack_178 = CONCAT44(uStack_134,uStack_138);
    uStack_180 = (undefined *)CONCAT44(uStack_13c,iStack_140);
    uStack_1a8 = (long *)CONCAT44(uStack_164,uStack_168);
    uStack_1a0 = (long *)CONCAT44(iStack_15c,iStack_160);
    if ((DAT_0f740b90 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740b90), iVar14 != 0)) {
      func_0x0df6b410();
      func_0x0410844d(&DAT_0f740b90);
    }
    plVar18 = uStack_1a8;
    uStack_180 = (undefined *)0x92685bf500000001;
    if ((DAT_0f740b70 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740b70), iVar14 != 0)) {
      func_0x0df6b300();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f740af0,0xf53dab8);
      func_0x0410844d(&DAT_0f740b70);
    }
    plStack_270 = plVar18 + 3;
    plVar20 = (long *)(plVar18[3] +
                      (ulong)((int)((ulong)(plVar18[4] - plVar18[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f740af0 + 4)) * 8);
    do {
      lVar23 = *plVar20;
      if (lVar23 == -1) goto LAB_0deb58e0;
      plVar20 = (long *)(plVar18[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar18[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740af0 + 4));
    if (plVar20 == (long *)plVar18[7]) {
LAB_0deb58e0:
      plStack_278 = (long *)&DAT_0f740af0;
    }
    else {
      plStack_278 = (long *)plVar20[2];
    }
    func_0x0ed621a0(&plStack_278,uStack_180._4_4_);
    plStack_278 = (long *)CONCAT62(plStack_278._2_6_,1);
    uStack_268 = (long *)CONCAT44(uStack_268._4_4_,uStack_180._4_4_);
    uStack_260 = (long *)0x0;
    lStack_258 = 0;
    uStack_250 = (undefined *)0x0;
    puStack_248 = (undefined1 *)0x0;
    puStack_240 = (undefined4 *)0x0;
    uStack_238 = 0x1c;
    uStack_237 = 0x656c62616e65;
    uStack_231 = 100;
    uStack_230 = 0x5f;
    uStack_22f = 0x736574617473;
    uStack_229 = 0;
    lStack_220 = 0;
    plStack_218 = (long *)0x0;
    lStack_210 = 0;
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x3f600000);
    plStack_270 = &uStack_1a0;
    func_0x048afb10(&lStack_220,8);
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    lStack_1c0 = 0;
    lStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1ce = 0;
    uStack_1cc = 0;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    uStack_1b8 = 0xff00;
    uStack_1b4 = uStack_1b4 & 0xffffff00;
    uStack_1b0 = uStack_1b0 & 0xffffff00;
    uStack_1ac = 0;
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4a7260;
    if (uStack_260 != (long *)0x0) {
      lVar23 = *uStack_260;
      uStack_260 = puVar19;
      (**(code **)(lVar23 + 8))();
      puVar19 = uStack_260;
    }
    uStack_260 = puVar19;
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df6d650;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df6d000;
    puStack_2f8 = &UNK_0df6d710;
    puStack_2f0 = &UNK_0df6d870;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(plStack_270,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = plStack_270;
    if ((DAT_0f550a20 == '\0') && (iVar14 = func_0x04108328(&DAT_0f550a20), iVar14 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,_DAT_0f550a0c);
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar20 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar23 = lStack_258;
    puVar19 = uStack_260;
    plVar20[1] = 0;
    plVar20[2] = 0;
    *plVar20 = (long)&UNK_0ef439d0;
    plStack_330 = plVar20 + 3;
    uStack_260 = (long *)0x0;
    lStack_258 = 0;
    plVar20[3] = (long)puVar19;
    plVar20[4] = lVar23;
    plVar20[7] = (long)puStack_240;
    plVar20[5] = (long)uStack_250;
    plVar20[6] = (long)puStack_248;
    uStack_250 = (undefined *)0x0;
    puStack_248 = (undefined1 *)0x0;
    puStack_240 = (undefined4 *)0x0;
    plVar20[10] = uStack_228;
    plVar20[8] = CONCAT17(uStack_231,CONCAT61(uStack_237,uStack_238));
    plVar20[9] = CONCAT17(uStack_229,CONCAT61(uStack_22f,uStack_230));
    uStack_238 = 0;
    uStack_237 = 0;
    uStack_231 = 0;
    uStack_230 = 0;
    uStack_22f = 0;
    uStack_229 = 0;
    uStack_228 = 0;
    plVar20[0xb] = lStack_220;
    plVar20[0xc] = (long)plStack_218;
    plVar20[0xd] = lStack_210;
    lStack_220 = 0;
    plStack_218 = (long *)0x0;
    lStack_210 = 0;
    plVar20[0xe] = lStack_208;
    plVar20[0xf] = lStack_200;
    plVar20[0x10] = lStack_1f8;
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    *(undefined4 *)(plVar20 + 0x11) = (undefined4)uStack_1f0;
    plVar20[0x12] = lStack_1e8;
    plVar20[0x13] = lStack_1e0;
    plVar20[0x14] = lStack_1d8;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    plVar20[0x17] = lStack_1c0;
    *(uint *)(plVar20 + 0x15) = CONCAT22(uStack_1ce,uStack_1d0);
    *(uint *)((long)plVar20 + 0xac) = uStack_1cc;
    *(uint *)(plVar20 + 0x16) = uStack_1c8;
    *(uint *)((long)plVar20 + 0xb4) = uStack_1c4;
    uStack_1d0 = 0;
    uStack_1ce = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    lStack_1c0 = 0;
    *(ulong *)((long)plVar20 + 0xc5) = CONCAT17(uStack_1ac,CONCAT43(uStack_1b0,uStack_1b4._1_3_));
    plVar20[0x18] = CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,uStack_1b8));
    uStack_128 = (long *)0x0;
    uStack_120 = (long *)0x0;
    uStack_328 = plVar20;
    func_0x048afd20(plVar18,&plStack_338);
    plVar20 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_120;
    if (uStack_120 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_120 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_120 + 0x10))(uStack_120);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_1a8;
    lVar23 = plVar18[2];
    iVar14 = *(int *)((long)plVar18 + 0x1c);
    if (iVar14 == 2) {
      piVar24 = *(int **)(*(long *)(lVar23 + 0x78) + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)plVar18[3]) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      for (; *(long *)(piVar24 + 0xc) != plVar18[1]; piVar24 = *(int **)(piVar24 + 0xe)) {
      }
LAB_0deb5dda:
      piVar24[4] = piVar24[4] | (int)plStack_278 << 0x10;
    }
    else {
      if (iVar14 == 1) {
        piVar24 = *(int **)(*(long *)(lVar23 + 0x78) + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)plVar18[3]) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb5dda;
      }
      if (iVar14 == 0) {
        *(uint *)(lVar23 + 0x18) = *(uint *)(lVar23 + 0x18) | (int)plStack_278 << 0x10;
      }
    }
    iVar8 = (int)uStack_180;
    uVar3 = uStack_180._4_4_;
    FUN_048b0bc0(&uStack_260);
    if (iVar8 == 4) {
      if ((DAT_0f740b70 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740b70), iVar14 != 0)) {
        func_0x0df6b300();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f740af0,0xf53dab8);
        func_0x0410844d(&DAT_0f740b70);
      }
      plVar18 = (long *)(plVar20[3] +
                        (ulong)((int)((ulong)(plVar20[4] - plVar20[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f740af0 + 4)) * 8);
      do {
        lVar23 = *plVar18;
        if (lVar23 == -1) goto LAB_0deb5ee8;
        plVar18 = (long *)(plVar20[6] + lVar23 * 0x18);
      } while (*(uint *)(plVar20[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740af0 + 4));
      if (plVar18 == (long *)plVar20[7]) {
LAB_0deb5ee8:
        puVar16 = &DAT_0f740af0;
      }
      else {
        puVar16 = (undefined *)plVar18[2];
      }
      plVar18 = (long *)func_0x048b1040(plVar20 + 3,puVar16,uVar3,1);
      if (plVar18 == (long *)0x0) {
        plStack_278 = (long *)0x0;
        plStack_270 = (long *)0x0;
        func_0x048b10d0(&plStack_278);
        plVar20 = (long *)plStack_278[7];
        plVar18 = plStack_278;
        if (plVar20 == (long *)0x0) goto LAB_0deb5fcc;
LAB_0deb5ff1:
        do {
          plVar18 = plVar20;
          plVar20 = (long *)plVar18[7];
          if ((long *)plVar18[7] == (long *)0x0) {
            plStack_278 = (long *)0x0;
            plStack_270 = (long *)0x0;
            func_0x048b10d0(&plStack_278);
            plVar20 = plStack_278;
          }
        } while (plVar20 != (long *)0x0);
      }
      else {
        plVar20 = (long *)plVar18[7];
        if ((long *)plVar18[7] != (long *)0x0) goto LAB_0deb5ff1;
LAB_0deb5fcc:
        plStack_278 = (long *)0x0;
        plStack_270 = (long *)0x0;
        func_0x048b10d0(&plStack_278);
        plVar20 = plStack_278;
        if (plStack_278 != (long *)0x0) goto LAB_0deb5ff1;
      }
      lVar23 = plVar18[9];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
    }
    else {
      iVar14 = iStack_198;
      iVar15 = iStack_194;
      iVar9 = iStack_190;
      iVar10 = iStack_18c;
      iVar11 = iStack_188;
      iVar12 = iStack_184;
      if (iVar8 != 1) goto LAB_0deb608e;
      if ((DAT_0f740b70 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740b70), iVar14 != 0)) {
        func_0x0df6b300();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f740af0,0xf53dab8);
        func_0x0410844d(&DAT_0f740b70);
      }
      plVar18 = (long *)(plVar20[3] +
                        (ulong)((int)((ulong)(plVar20[4] - plVar20[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f740af0 + 4)) * 8);
      do {
        lVar23 = *plVar18;
        if (lVar23 == -1) goto LAB_0deb5e78;
        plVar18 = (long *)(plVar20[6] + lVar23 * 0x18);
      } while (*(uint *)(plVar20[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740af0 + 4));
      if (plVar18 == (long *)plVar20[7]) {
LAB_0deb5e78:
        puVar16 = &DAT_0f740af0;
      }
      else {
        puVar16 = (undefined *)plVar18[2];
      }
      plVar18 = (long *)func_0x048b0c90(plVar20 + 3,puVar16,uVar3,1);
      if (plVar18 == (long *)0x0) {
        plStack_278 = (long *)0x0;
        plStack_270 = (long *)0x0;
        func_0x048b0d20(&plStack_278);
        plVar18 = plStack_278;
      }
      lVar23 = plVar18[0xb];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
    }
    puVar19[1] = 0xffffffffffffffff;
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 0xff;
    *puVar19 = &UNK_0f4a3058;
    puVar19[4] = 1;
    plVar18 = *(long **)(lVar23 + 8);
    *(undefined8 **)(lVar23 + 8) = puVar19;
    iVar14 = iStack_198;
    iVar15 = iStack_194;
    iVar9 = iStack_190;
    iVar10 = iStack_18c;
    iVar11 = iStack_188;
    iVar12 = iStack_184;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x28))();
      iVar14 = iStack_198;
      iVar15 = iStack_194;
      iVar9 = iStack_190;
      iVar10 = iStack_18c;
      iVar11 = iStack_188;
      iVar12 = iStack_184;
    }
  }
LAB_0deb608e:
  iStack_184 = iVar12;
  iStack_188 = iVar11;
  iStack_18c = iVar10;
  iStack_190 = iVar9;
  iStack_194 = iVar15;
  iStack_198 = iVar14;
  if ((DAT_0f740f08 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740f08), iVar14 != 0)) {
    func_0x0df74be0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740e88,0xf53dab8);
    func_0x0410844d(&DAT_0f740f08);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f740e88 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deb60f0;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740e88 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deb60f0:
    puVar16 = &DAT_0f740e88;
    if (iRam000000000f740ee8 != -0x2b3da790) goto LAB_0deb6148;
LAB_0deb611b:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deb6148;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar23 + 9);
    if (bVar32) {
      puVar16 = *(undefined **)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deb611b;
LAB_0deb6148:
    puVar16 = &UNK_012eb17e;
    uVar17 = 0x19;
  }
  func_0x0df75020(&uStack_168,param_1,puVar16,uVar17);
  uStack_134 = uStack_134 & 0xffffff00;
  uStack_130 = uStack_130 & 0xffffff00;
  if ((char)uStack_138 == '\0') {
    puVar21 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar21 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar7 = _UNK_012686dd;
    *(ulong *)((long)puVar21 + 10) = CONCAT26(_UNK_012686db,CONCAT42(_UNK_012686d7,_DAT_012686d5));
    *(undefined8 *)((long)puVar21 + 0x12) = uVar7;
    uVar6 = _UNK_012686d7;
    uVar5 = _UNK_012686cf;
    uVar3 = CONCAT22(_DAT_012686d5,_UNK_012686d3);
    *puVar21 = _DAT_012686cb;
    puVar21[1] = uVar5;
    puVar21[2] = uVar3;
    puVar21[3] = uVar6;
    *(undefined1 *)((long)puVar21 + 0x1a) = 0;
    plVar18 = (long *)func_0x0eee3290();
    *(undefined1 *)puVar21 = *(undefined1 *)(*plVar18 + 0x1b4);
    *(undefined1 *)((long)puVar21 + 1) = *(undefined1 *)(*plVar18 + 0x1a4);
    *(undefined1 *)((long)puVar21 + 2) = *(undefined1 *)(*plVar18 + 0x1b8);
    *(undefined1 *)((long)puVar21 + 3) = *(undefined1 *)(*plVar18 + 0x194);
    *(undefined1 *)(puVar21 + 1) = *(undefined1 *)(*plVar18 + 0x18c);
    *(undefined1 *)((long)puVar21 + 5) = *(undefined1 *)(*plVar18 + 0x1c8);
    *(undefined1 *)((long)puVar21 + 6) = *(undefined1 *)(*plVar18 + 0x184);
    *(undefined1 *)((long)puVar21 + 7) = *(undefined1 *)(*plVar18 + 0x198);
    *(undefined1 *)(puVar21 + 2) = *(undefined1 *)(*plVar18 + 0x1d0);
    *(undefined1 *)((long)puVar21 + 9) = *(undefined1 *)(*plVar18 + 0xe8);
    *(undefined1 *)((long)puVar21 + 10) = *(undefined1 *)(*plVar18 + 0x1b4);
    *(undefined1 *)((long)puVar21 + 0xb) = *(undefined1 *)(*plVar18 + 0x1d4);
    *(undefined1 *)(puVar21 + 3) = *(undefined1 *)(*plVar18 + 0x1b0);
    *(undefined1 *)((long)puVar21 + 0xd) = *(undefined1 *)(*plVar18 + 0x1d0);
    *(undefined1 *)((long)puVar21 + 0xe) = *(undefined1 *)(*plVar18 + 0x1a4);
    *(undefined1 *)((long)puVar21 + 0xf) = *(undefined1 *)(*plVar18 + 0x17c);
    *(undefined1 *)(puVar21 + 4) = *(undefined1 *)(*plVar18 + (ulong)*(byte *)(puVar21 + 4) * 4);
    *(undefined1 *)((long)puVar21 + 0x11) =
         *(undefined1 *)(*plVar18 + (ulong)*(byte *)((long)puVar21 + 0x11) * 4);
    *(undefined1 *)((long)puVar21 + 0x12) =
         *(undefined1 *)(*plVar18 + (ulong)*(byte *)((long)puVar21 + 0x12) * 4);
    *(undefined1 *)((long)puVar21 + 0x13) =
         *(undefined1 *)(*plVar18 + (ulong)*(byte *)((long)puVar21 + 0x13) * 4);
    *(undefined1 *)(puVar21 + 5) = *(undefined1 *)(*plVar18 + (ulong)*(byte *)(puVar21 + 5) * 4);
    *(undefined1 *)((long)puVar21 + 0x15) =
         *(undefined1 *)(*plVar18 + (ulong)*(byte *)((long)puVar21 + 0x15) * 4);
    *(undefined1 *)((long)puVar21 + 0x16) =
         *(undefined1 *)(*plVar18 + (ulong)*(byte *)((long)puVar21 + 0x16) * 4);
    *(undefined1 *)((long)puVar21 + 0x17) =
         *(undefined1 *)(*plVar18 + (ulong)*(byte *)((long)puVar21 + 0x17) * 4);
    *(undefined1 *)(puVar21 + 6) = *(undefined1 *)(*plVar18 + (ulong)*(byte *)(puVar21 + 6) * 4);
    *(undefined1 *)((long)puVar21 + 0x19) =
         *(undefined1 *)(*plVar18 + (ulong)*(byte *)((long)puVar21 + 0x19) * 4);
    plStack_218 = (long *)0x0;
    lStack_210 = 0;
    uStack_228 = 0;
    lStack_220 = 0;
    uStack_238 = 0;
    uStack_237 = 0;
    uStack_231 = 0;
    uStack_230 = 0;
    uStack_22f = 0;
    uStack_229 = 0;
    puStack_248 = (undefined1 *)0x0;
    puStack_240 = (undefined4 *)0x0;
    lStack_258 = 0;
    uStack_250 = (undefined *)0x0;
    uStack_268 = (long *)0x0;
    uStack_260 = (long *)0x0;
    plStack_278 = (long *)0x0;
    plStack_270 = (long *)0x0;
    lStack_208 = CONCAT44(lStack_208._4_4_,0x3f600000);
    func_0x048afb10(&uStack_238,8);
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    uStack_1f0 = 0;
    lStack_1e8 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    uStack_1d0 = 0xff00;
    uStack_1cc = uStack_1cc & 0xffffff00;
    uStack_1c8 = uStack_1c8 & 0xffffff00;
    uStack_1c4 = uStack_1c4 & 0xffffff00;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f4a7690;
    if (plStack_278 != (long *)0x0) {
      lVar23 = *plStack_278;
      plStack_278 = plVar18;
      (**(code **)(lVar23 + 8))();
      plVar18 = plStack_278;
    }
    plStack_278 = plVar18;
    if (((ulong)uStack_250 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_240,(ulong)uStack_250 & 0xfffffffffffffffe);
    }
    uStack_250 = (undefined *)0x21;
    puStack_248 = (undefined1 *)0x1a;
    puStack_240 = puVar21;
    func_0x0412f5e0(&uStack_268,&DAT_012686cb,0x1a);
    plStack_330 = plStack_270;
    plStack_338 = plStack_278;
    plStack_278 = (long *)0x0;
    plStack_270 = (long *)0x0;
    uStack_318 = lStack_258;
    uStack_328 = uStack_268;
    uStack_320 = (long)uStack_260;
    uStack_268 = (long *)0x0;
    uStack_260 = (long *)0x0;
    lStack_258 = 0;
    puStack_300 = puStack_240;
    uStack_310 = uStack_250;
    puStack_308 = puStack_248;
    uStack_250 = (undefined *)0x0;
    puStack_248 = (undefined1 *)0x0;
    puStack_240 = (undefined4 *)0x0;
    puStack_2f8 = (undefined *)CONCAT17(uStack_231,CONCAT61(uStack_237,uStack_238));
    puStack_2f0 = (undefined *)CONCAT17(uStack_229,CONCAT61(uStack_22f,uStack_230));
    uStack_2e8 = uStack_228;
    uStack_238 = 0;
    uStack_237 = 0;
    uStack_231 = 0;
    uStack_230 = 0;
    uStack_22f = 0;
    uStack_229 = 0;
    uStack_228 = 0;
    lStack_2e0 = lStack_220;
    plStack_2d8 = plStack_218;
    lStack_2d0 = lStack_210;
    lStack_220 = 0;
    plStack_218 = (long *)0x0;
    lStack_210 = 0;
    uStack_2c8 = (undefined4)lStack_208;
    lStack_2c0 = lStack_200;
    lStack_2b8 = lStack_1f8;
    lStack_2b0 = uStack_1f0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_290 = CONCAT22(uStack_1ce,uStack_1d0);
    lStack_298 = lStack_1d8;
    uStack_2a8 = lStack_1e8;
    uStack_2a0 = lStack_1e0;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    uStack_288 = CONCAT14((undefined1)uStack_1c4,uStack_1c8);
    uStack_28c = uStack_1cc;
    FUN_048b0bc0();
    puVar26 = (undefined1 *)((ulong)uStack_310 >> 1 & 0x7f);
    puVar21 = (undefined4 *)((long)&uStack_310 + 1);
    if (((ulong)uStack_310 & 1) != 0) {
      puVar26 = puStack_308;
      puVar21 = puStack_300;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uStack_13c = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < 4) {
        uStack_13c = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uStack_13c = 0x811c9dc5;
        uVar29 = 0;
        do {
          uStack_13c = ((int)*(char *)((long)puVar21 + uVar29 + 3) ^
                       ((int)*(char *)((long)puVar21 + uVar29 + 2) ^
                       ((int)*(char *)((long)puVar21 + uVar29 + 1) ^
                       ((int)*(char *)((long)puVar21 + uVar29) ^ uStack_13c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uStack_13c = ((int)*(char *)((long)puVar21 + uVar28 + uVar29) ^ uStack_13c) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    iStack_140 = 2;
    if ((DAT_0f740f28 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740f28), iVar14 != 0)) {
      func_0x0df74cf0();
      func_0x0410844d(&DAT_0f740f28);
    }
    plStack_278 = (long *)CONCAT44(plStack_278._4_4_,uStack_13c);
    plStack_270 = (long *)0x0;
    uStack_268 = (long *)CONCAT44(uStack_268._4_4_,3);
    uStack_260 = (long *)0x1;
    lStack_258 = 0;
    uStack_250 = &UNK_0df788a0;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = (undefined4 *)&UNK_0df74b20;
    uStack_238 = 0x60;
    uStack_237 = 0xdf789;
    uStack_231 = 0;
    uStack_230 = 0x70;
    uStack_22f = 0xdf789;
    uStack_229 = 0;
    uStack_228 = uStack_228 & 0xffffffff00000000;
    lStack_220 = 0;
    plStack_218 = (long *)0x0;
    func_0x048b05a0(&iStack_160,&plStack_278);
    plVar18 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_218 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_198 = iStack_150;
    iStack_194 = iStack_14c;
    iStack_190 = iStack_148;
    iStack_18c = iStack_144;
    uStack_1a8 = (long *)CONCAT44(iStack_15c,iStack_160);
    uStack_1a0 = (long *)CONCAT44(iStack_154,iStack_158);
    if ((DAT_0f550a20 == '\0') && (iVar14 = func_0x04108328(&DAT_0f550a20), iVar14 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    plStack_278 = (long *)CONCAT44(plStack_278._4_4_,_DAT_0f550a0c);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plVar1 = plStack_330;
    plVar20 = plStack_338;
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&UNK_0ef439d0;
    plStack_270 = plVar18 + 3;
    plStack_338 = (long *)0x0;
    plStack_330 = (long *)0x0;
    plVar18[3] = (long)plVar20;
    plVar18[4] = (long)plVar1;
    plVar18[7] = uStack_318;
    plVar18[5] = (long)uStack_328;
    plVar18[6] = uStack_320;
    uStack_328 = (long *)0x0;
    uStack_320 = 0;
    uStack_318 = 0;
    plVar18[10] = (long)puStack_300;
    plVar18[8] = (long)uStack_310;
    plVar18[9] = (long)puStack_308;
    uStack_310 = (undefined *)0x0;
    puStack_308 = (undefined1 *)0x0;
    puStack_300 = (undefined4 *)0x0;
    plVar18[0xb] = (long)puStack_2f8;
    plVar18[0xc] = (long)puStack_2f0;
    plVar18[0xd] = uStack_2e8;
    puStack_2f8 = (undefined *)0x0;
    puStack_2f0 = (undefined *)0x0;
    uStack_2e8 = 0;
    plVar18[0xe] = lStack_2e0;
    plVar18[0xf] = (long)plStack_2d8;
    plVar18[0x10] = lStack_2d0;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    lStack_2d0 = 0;
    *(undefined4 *)(plVar18 + 0x11) = uStack_2c8;
    plVar18[0x12] = lStack_2c0;
    plVar18[0x13] = lStack_2b8;
    plVar18[0x14] = lStack_2b0;
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    lStack_2b0 = 0;
    plVar18[0x17] = lStack_298;
    *(undefined4 *)(plVar18 + 0x15) = (undefined4)uStack_2a8;
    *(undefined4 *)((long)plVar18 + 0xac) = uStack_2a8._4_4_;
    *(undefined4 *)(plVar18 + 0x16) = (undefined4)uStack_2a0;
    *(undefined4 *)((long)plVar18 + 0xb4) = uStack_2a0._4_4_;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    lStack_298 = 0;
    *(ulong *)((long)plVar18 + 0xc5) = CONCAT53(uStack_288,uStack_28c._1_3_);
    plVar18[0x18] = CONCAT44(uStack_28c,uStack_290);
    uStack_128 = (long *)0x0;
    uStack_120 = (long *)0x0;
    uStack_268 = plVar18;
    func_0x048afd20(&uStack_1a8,&plStack_278);
    plVar18 = uStack_268;
    if (uStack_268 != (long *)0x0) {
      LOCK();
      plVar20 = uStack_268 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_268 + 0x10))(uStack_268);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = uStack_120;
    if (uStack_120 != (long *)0x0) {
      LOCK();
      plVar20 = uStack_120 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_120 + 0x10))(uStack_120);
        func_0x0412c2d0(plVar18);
      }
    }
    lVar23 = CONCAT44(iStack_194,iStack_198);
    if (iStack_18c == 2) {
      piVar24 = *(int **)(*(long *)(lVar23 + 0x78) + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != iStack_190) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      for (; *(long **)(piVar24 + 0xc) != uStack_1a0; piVar24 = *(int **)(piVar24 + 0xe)) {
      }
LAB_0deb6a3a:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (iStack_18c == 1) {
        piVar24 = *(int **)(*(long *)(lVar23 + 0x78) + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != iStack_190) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb6a3a;
      }
      if (iStack_18c == 0) {
        *(byte *)(lVar23 + 0x1a) = *(byte *)(lVar23 + 0x1a) | 9;
      }
    }
    if ((char)uStack_130 == '\0') {
      uStack_134 = 0xbb8863ad;
      uStack_130 = CONCAT31(uStack_130._1_3_,1);
      plStack_278 = (long *)CONCAT44(plStack_278._4_4_,0xbb8863ad);
      lVar23 = CONCAT44(uStack_164,uStack_168);
      if ((DAT_0f740f08 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740f08), iVar14 != 0)) {
        func_0x0df74be0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f740e88,0xf53dab8);
        func_0x0410844d(&DAT_0f740f08);
      }
      plVar18 = (long *)(*(long *)(lVar23 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f740e88 + 4)) * 8);
      do {
        lVar27 = *plVar18;
        if (lVar27 == -1) goto LAB_0deb6ad0;
        plVar18 = (long *)(*(long *)(lVar23 + 0x30) + lVar27 * 0x18);
      } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar27 * 0x18) !=
               *(uint *)(_DAT_0f740e88 + 4));
      if (plVar18 == *(long **)(lVar23 + 0x38)) {
LAB_0deb6ad0:
        puVar16 = &DAT_0f740e88;
      }
      else {
        puVar16 = (undefined *)plVar18[2];
      }
      lVar23 = *(long *)(puVar16 + 0x68);
      piVar22 = *(int **)(lVar23 + 0x28);
      for (piVar24 = *(int **)(lVar23 + 0x20); (piVar24 != piVar22 && (*piVar24 != -0x44779c53));
          piVar24 = piVar24 + 0xe) {
      }
      if (piVar24 == piVar22) {
        if (piVar22 < *(int **)(lVar23 + 0x30)) {
          *piVar22 = -0x44779c53;
          piVar22[2] = 0;
          piVar22[3] = 0;
          piVar22[4] = 0;
          piVar22[5] = 0;
          piVar22[6] = 0;
          piVar22[7] = 0;
          piVar22[8] = 0;
          piVar22[9] = 0;
          piVar22[10] = 0x3f800000;
          *(undefined1 *)(piVar22 + 0xc) = 0;
          *(undefined1 *)(piVar22 + 0xd) = 0;
          piVar22 = piVar22 + 0xe;
        }
        else {
          piVar22 = (int *)func_0x05d9c2b0(lVar23 + 0x20,&plStack_278);
        }
        *(int **)(lVar23 + 0x28) = piVar22;
      }
      else if ((*(long *)(piVar24 + 8) != 0) &&
              (cVar13 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,
                                        &UNK_01201df1), cVar13 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar25 = uStack_134;
    lVar23 = CONCAT44(uStack_164,uStack_168);
    if ((DAT_0f740f08 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740f08), iVar14 != 0)) {
      func_0x0df74be0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f740e88,0xf53dab8);
      func_0x0410844d(&DAT_0f740f08);
    }
    plVar18 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f740e88 + 4)) * 8);
    do {
      lVar27 = *plVar18;
      if (lVar27 == -1) goto LAB_0deb6c10;
      plVar18 = (long *)(*(long *)(lVar23 + 0x30) + lVar27 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f740e88 + 4)
            );
    if (plVar18 == *(long **)(lVar23 + 0x38)) {
LAB_0deb6c10:
      puVar16 = &DAT_0f740e88;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar31 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar31 != puVar2 && (*puVar31 != uVar25)); puVar31 = puVar31 + 0xe) {
    }
    if ((puVar31 == puVar2) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133a581),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_278 = (long *)((ulong)plStack_278 & 0xffffffffffffff00);
    FUN_05d9c620(puVar31 + 2,&uStack_13c,&uStack_13c,&plStack_278);
    FUN_048b0bc0(&plStack_338);
  }
  if ((DAT_0f740fc0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740fc0), iVar14 != 0)) {
    func_0x0df78a80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740f40,0xf53dab8);
    func_0x0410844d(&DAT_0f740fc0);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f740f40 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deb6d10;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740f40 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deb6d10:
    puVar16 = &DAT_0f740f40;
    if (iRam000000000f740fa0 != -0x2b3da790) goto LAB_0deb6d7e;
LAB_0deb6d3b:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deb6d7e;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar27 = lVar23 + 9;
    if (bVar32) {
      lVar27 = *(long *)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0df78ee0(&uStack_168,param_1,lVar27,uVar17);
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deb6d3b;
LAB_0deb6d7e:
    func_0x0df78ee0(&uStack_168,param_1,&UNK_013d922c,0xb);
  }
  if ((char)uStack_138 == '\0') {
    uStack_78 = CONCAT44(uStack_134,uStack_138);
    uStack_a8 = uStack_168;
    uStack_a4 = uStack_164;
    iStack_a0 = iStack_160;
    iStack_9c = iStack_15c;
    iStack_98 = iStack_158;
    iStack_94 = iStack_154;
    iStack_90 = iStack_150;
    iStack_8c = iStack_14c;
    iStack_88 = iStack_148;
    iStack_84 = iStack_144;
    iStack_80 = iStack_140;
    uStack_7c = uStack_13c;
    func_0x0df79a40(&plStack_278,&uStack_a8,&UNK_0129beb0,0xe,1);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f4a7758;
    if (uStack_260 != (long *)0x0) {
      lVar23 = *uStack_260;
      uStack_260 = plVar18;
      (**(code **)(lVar23 + 8))();
      plVar18 = uStack_260;
    }
    uStack_260 = plVar18;
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df7b410;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df7add0;
    puStack_2f8 = &UNK_0df7b4d0;
    puStack_2f0 = &UNK_0df7b630;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(plStack_270,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0df79d00(&plStack_278);
    uStack_b8 = CONCAT31(uStack_b8._1_3_,(undefined1)uStack_78);
    iStack_c8 = iStack_88;
    iStack_c4 = iStack_84;
    iStack_c0 = iStack_80;
    uStack_bc = uStack_7c;
    iStack_d8 = iStack_98;
    iStack_d4 = iStack_94;
    iStack_d0 = iStack_90;
    iStack_cc = iStack_8c;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    iStack_e0 = iStack_a0;
    iStack_dc = iStack_9c;
    FUN_048b0bc0(&uStack_260);
    if (iStack_c0 == 4) {
      lVar23 = func_0x0df7b950(&uStack_e8);
      lVar23 = *(long *)(lVar23 + 0x48);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
LAB_0deb6fea:
      puVar19[1] = 0xffffffffffffffff;
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 0xff;
      *puVar19 = &UNK_0f4a30d8;
      puVar19[4] = 1;
      plVar18 = *(long **)(lVar23 + 8);
      *(undefined8 **)(lVar23 + 8) = puVar19;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x28))();
      }
    }
    else if (iStack_c0 == 1) {
      lVar23 = func_0x0df7b800(&uStack_e8);
      lVar23 = *(long *)(lVar23 + 0x58);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      goto LAB_0deb6fea;
    }
    uStack_f8 = CONCAT31(uStack_f8._1_3_,(undefined1)uStack_b8);
    iStack_108 = iStack_c8;
    iStack_104 = iStack_c4;
    iStack_100 = iStack_c0;
    uStack_fc = uStack_bc;
    iStack_118 = iStack_d8;
    iStack_114 = iStack_d4;
    iStack_110 = iStack_d0;
    iStack_10c = iStack_cc;
    uStack_128 = (long *)CONCAT44(uStack_e4,uStack_e8);
    uStack_120 = (long *)CONCAT44(iStack_dc,iStack_e0);
    func_0x0df79a40(&plStack_278,&uStack_128,&UNK_0142e575,9,1);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f403098;
    if (uStack_260 != (long *)0x0) {
      lVar23 = *uStack_260;
      uStack_260 = plVar18;
      (**(code **)(lVar23 + 8))();
      plVar18 = uStack_260;
    }
    uStack_260 = plVar18;
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df7bad0;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&SUB_0cd7de90;
    puStack_2f8 = &UNK_0df7bae0;
    puStack_2f0 = &UNK_0df7bc40;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(plStack_270,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0df79d00(&plStack_278);
    uStack_178 = CONCAT71(uStack_178._1_7_,(undefined1)uStack_f8);
    iStack_188 = iStack_108;
    iStack_184 = iStack_104;
    uStack_180 = (undefined *)CONCAT44(uStack_fc,iStack_100);
    iStack_198 = iStack_118;
    iStack_194 = iStack_114;
    iStack_190 = iStack_110;
    iStack_18c = iStack_10c;
    uStack_1a8 = uStack_128;
    uStack_1a0 = uStack_120;
    FUN_048b0bc0(&uStack_260);
    func_0x0df794d0(&plStack_278,uStack_1a8 + 3);
    if (uStack_260._4_4_ == 2) {
      piVar24 = *(int **)(uStack_268[0xf] + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_260) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      plVar18 = *(long **)(piVar24 + 0xc);
      while (plVar18 != plStack_270) {
        piVar24 = *(int **)(piVar24 + 0xe);
        plVar18 = *(long **)(piVar24 + 0xc);
      }
LAB_0deb729a:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 4;
    }
    else {
      if (uStack_260._4_4_ == 1) {
        piVar24 = *(int **)(uStack_268[0xf] + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_260) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb729a;
      }
      if (uStack_260._4_4_ == 0) {
        *(uint *)(uStack_268 + 3) = *(uint *)(uStack_268 + 3) | 0x40000;
      }
    }
    func_0x0df79a40(&plStack_278,&uStack_1a8,&UNK_0143f0ce,5,0x10);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f012438;
    if (uStack_260 != (long *)0x0) {
      lVar23 = *uStack_260;
      uStack_260 = plVar18;
      (**(code **)(lVar23 + 8))();
      plVar18 = uStack_260;
    }
    uStack_260 = plVar18;
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_05fc5e00;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_05dcda00;
    puStack_2f8 = &UNK_0df7c0a0;
    puStack_2f0 = &UNK_0df7c200;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(plStack_270,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0df79d00(&plStack_278);
    puStack_308 = (undefined1 *)CONCAT71(puStack_308._1_7_,(undefined1)uStack_178);
    uStack_318 = CONCAT44(iStack_184,iStack_188);
    uStack_310 = uStack_180;
    uStack_328 = (long *)CONCAT44(iStack_194,iStack_198);
    uStack_320 = CONCAT44(iStack_18c,iStack_190);
    plStack_338 = uStack_1a8;
    plStack_330 = uStack_1a0;
    FUN_048b0bc0(&uStack_260);
    if ((int)uStack_310 == 4) {
      lVar23 = func_0x0df7b950(&plStack_338);
      lVar23 = *(long *)(lVar23 + 0x48);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if ((int)uStack_310 != 1) goto LAB_0deb74c5;
      lVar23 = func_0x0df7b800(&plStack_338);
      lVar23 = *(long *)(lVar23 + 0x58);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar19[1] = 0xffffffffffffffff;
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 0xff;
    *puVar19 = &UNK_0f0edc68;
    uVar7 = _UNK_014e6588;
    puVar19[4] = _DAT_014e6580;
    puVar19[5] = uVar7;
    puVar19[6] = 0;
    puVar19[7] = 0;
    plVar18 = *(long **)(lVar23 + 8);
    *(undefined8 **)(lVar23 + 8) = puVar19;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x28))();
    }
  }
LAB_0deb74c5:
  FUN_0ecd99f0(param_1);
  if ((DAT_0f741130 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741130), iVar14 != 0)) {
    func_0x0df7dbb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7410b0,0xf53dab8);
    func_0x0410844d(&DAT_0f741130);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7410b0 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deb7530;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f7410b0 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deb7530:
    puVar16 = &DAT_0f7410b0;
    if (iRam000000000f741110 != -0x2b3da790) goto LAB_0deb7588;
LAB_0deb755b:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deb7588;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar23 + 9);
    if (bVar32) {
      puVar16 = *(undefined **)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deb755b;
LAB_0deb7588:
    puVar16 = &UNK_0129e26d;
    uVar17 = 0x21;
  }
  func_0x0df7dff0(&uStack_168,param_1,puVar16,uVar17);
  uStack_134 = uStack_134 & 0xffffff00;
  uStack_130 = uStack_130 & 0xffffff00;
  if ((char)uStack_138 == '\0') {
    func_0x0df81870(&plStack_278,&UNK_013524cd,0x1c);
    puVar26 = (undefined1 *)((ulong)uStack_250 >> 1 & 0x7f);
    puVar21 = (undefined4 *)((long)&uStack_250 + 1);
    puVar4 = puVar21;
    if (((ulong)uStack_250 & 1) != 0) {
      puVar26 = puStack_248;
      puVar4 = puStack_240;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uStack_13c = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < (undefined1 *)0x4) {
        uStack_13c = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uStack_13c = 0x811c9dc5;
        uVar29 = 0;
        do {
          uStack_13c = ((int)*(char *)((long)puVar4 + uVar29 + 3) ^
                       ((int)*(char *)((long)puVar4 + uVar29 + 2) ^
                       ((int)*(char *)((long)puVar4 + uVar29 + 1) ^
                       ((int)*(char *)((long)puVar4 + uVar29) ^ uStack_13c) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uStack_13c = ((int)*(char *)((long)puVar4 + uVar28 + uVar29) ^ uStack_13c) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    iStack_140 = 2;
    if ((DAT_0f741150 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741150), iVar14 != 0)) {
      func_0x0df7dcc0();
      func_0x0410844d(&DAT_0f741150);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uStack_13c);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)CONCAT44(uStack_328._4_4_,3);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df81e30;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df7daf0;
    puStack_2f8 = &UNK_0df81ef0;
    puStack_2f0 = &UNK_0df81f00;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(&iStack_160,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_198 = iStack_150;
    iStack_194 = iStack_14c;
    iStack_190 = iStack_148;
    iStack_18c = iStack_144;
    func_0x0df81bc0(&plStack_338,&uStack_1a8,&plStack_278);
    if (uStack_320._4_4_ == 2) {
      piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_320) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      lVar23 = *(long *)(piVar24 + 0xc);
      while ((long *)lVar23 != plStack_330) {
        piVar24 = *(int **)(piVar24 + 0xe);
        lVar23 = *(long *)(piVar24 + 0xc);
      }
LAB_0deb786a:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_320) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb786a;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)((long)uStack_328 + 0x18) = *(uint *)((long)uStack_328 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_130 == '\0') {
      func_0x0df81f50(&plStack_338,&uStack_168);
    }
    uVar25 = uStack_134;
    lVar23 = CONCAT44(uStack_164,uStack_168);
    if ((DAT_0f741130 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741130), iVar14 != 0)) {
      func_0x0df7dbb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7410b0,0xf53dab8);
      func_0x0410844d(&DAT_0f741130);
    }
    plVar18 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7410b0 + 4)) * 8);
    do {
      lVar27 = *plVar18;
      if (lVar27 == -1) goto LAB_0deb7900;
      plVar18 = (long *)(*(long *)(lVar23 + 0x30) + lVar27 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f7410b0 + 4)
            );
    if (plVar18 == *(long **)(lVar23 + 0x38)) {
LAB_0deb7900:
      puVar16 = &DAT_0f7410b0;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar31 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar31 != puVar2 && (*puVar31 != uVar25)); puVar31 = puVar31 + 0xe) {
    }
    if ((puVar31 == puVar2) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0148ed4a),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
    FUN_05d9c620(puVar31 + 2,&uStack_13c,&uStack_13c,&plStack_338);
    uStack_e8 = uStack_168;
    uStack_e4 = uStack_164;
    iStack_e0 = iStack_160;
    iStack_dc = iStack_15c;
    iStack_d8 = iStack_158;
    iStack_d4 = iStack_154;
    iStack_d0 = iStack_150;
    iStack_cc = iStack_14c;
    iStack_c8 = iStack_148;
    iStack_c4 = iStack_144;
    iStack_c0 = iStack_140;
    uStack_bc = uStack_13c;
    uStack_b8 = uStack_138;
    uStack_b4 = uStack_134;
    uStack_b0 = uStack_130;
    FUN_048b0bc0(&plStack_278);
    func_0x0df81870(&plStack_278,&UNK_0124f6e0,0x27);
    puVar26 = (undefined1 *)((ulong)uStack_250 >> 1 & 0x7f);
    puVar4 = puVar21;
    if (((ulong)uStack_250 & 1) != 0) {
      puVar26 = puStack_248;
      puVar4 = puStack_240;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uStack_bc = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < (undefined1 *)0x4) {
        uStack_bc = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uStack_bc = 0x811c9dc5;
        uVar29 = 0;
        do {
          uStack_bc = ((int)*(char *)((long)puVar4 + uVar29 + 3) ^
                      ((int)*(char *)((long)puVar4 + uVar29 + 2) ^
                      ((int)*(char *)((long)puVar4 + uVar29 + 1) ^
                      ((int)*(char *)((long)puVar4 + uVar29) ^ uStack_bc) * 0x1000193) * 0x1000193)
                      * 0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uStack_bc = ((int)*(char *)((long)puVar4 + uVar28 + uVar29) ^ uStack_bc) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    iStack_c0 = 2;
    if ((DAT_0f741150 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741150), iVar14 != 0)) {
      func_0x0df7dcc0();
      func_0x0410844d(&DAT_0f741150);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uStack_bc);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)CONCAT44(uStack_328._4_4_,3);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df81e30;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df7daf0;
    puStack_2f8 = &UNK_0df82110;
    puStack_2f0 = &UNK_0df82120;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(&iStack_e0,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_198 = iStack_d0;
    iStack_194 = iStack_cc;
    iStack_190 = iStack_c8;
    iStack_18c = iStack_c4;
    uStack_1a8 = (long *)CONCAT44(iStack_dc,iStack_e0);
    uStack_1a0 = (long *)CONCAT44(iStack_d4,iStack_d8);
    func_0x0df81bc0(&plStack_338,&uStack_1a8,&plStack_278);
    if (uStack_320._4_4_ == 2) {
      piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_320) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      lVar23 = *(long *)(piVar24 + 0xc);
      while ((long *)lVar23 != plStack_330) {
        piVar24 = *(int **)(piVar24 + 0xe);
        lVar23 = *(long *)(piVar24 + 0xc);
      }
LAB_0deb7c7a:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_320) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb7c7a;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)((long)uStack_328 + 0x18) = *(uint *)((long)uStack_328 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_b0 == '\0') {
      func_0x0df81f50(&plStack_338,&uStack_e8);
    }
    uVar25 = uStack_b4;
    lVar23 = CONCAT44(uStack_e4,uStack_e8);
    if ((DAT_0f741130 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741130), iVar14 != 0)) {
      func_0x0df7dbb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7410b0,0xf53dab8);
      func_0x0410844d(&DAT_0f741130);
    }
    plVar18 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7410b0 + 4)) * 8);
    do {
      lVar27 = *plVar18;
      if (lVar27 == -1) goto LAB_0deb7d10;
      plVar18 = (long *)(*(long *)(lVar23 + 0x30) + lVar27 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f7410b0 + 4)
            );
    if (plVar18 == *(long **)(lVar23 + 0x38)) {
LAB_0deb7d10:
      puVar16 = &DAT_0f7410b0;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar31 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar31 != puVar2 && (*puVar31 != uVar25)); puVar31 = puVar31 + 0xe) {
    }
    if ((puVar31 == puVar2) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0148ed4a),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
    FUN_05d9c620(puVar31 + 2,&uStack_bc,&uStack_bc,&plStack_338);
    uStack_128 = (long *)CONCAT44(uStack_e4,uStack_e8);
    uStack_120 = (long *)CONCAT44(iStack_dc,iStack_e0);
    iStack_118 = iStack_d8;
    iStack_114 = iStack_d4;
    iStack_110 = iStack_d0;
    iStack_10c = iStack_cc;
    iStack_108 = iStack_c8;
    iStack_104 = iStack_c4;
    iStack_100 = iStack_c0;
    uStack_fc = uStack_bc;
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    FUN_048b0bc0(&plStack_278);
    func_0x0df81870(&plStack_278,&UNK_01218bbd,0x1a);
    puVar26 = (undefined1 *)((ulong)uStack_250 >> 1 & 0x7f);
    puVar4 = puVar21;
    if (((ulong)uStack_250 & 1) != 0) {
      puVar26 = puStack_248;
      puVar4 = puStack_240;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uStack_fc = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < (undefined1 *)0x4) {
        uStack_fc = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uStack_fc = 0x811c9dc5;
        uVar29 = 0;
        do {
          uStack_fc = ((int)*(char *)((long)puVar4 + uVar29 + 3) ^
                      ((int)*(char *)((long)puVar4 + uVar29 + 2) ^
                      ((int)*(char *)((long)puVar4 + uVar29 + 1) ^
                      ((int)*(char *)((long)puVar4 + uVar29) ^ uStack_fc) * 0x1000193) * 0x1000193)
                      * 0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uStack_fc = ((int)*(char *)((long)puVar4 + uVar28 + uVar29) ^ uStack_fc) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    iStack_100 = 2;
    if ((DAT_0f741150 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741150), iVar14 != 0)) {
      func_0x0df7dcc0();
      func_0x0410844d(&DAT_0f741150);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uStack_fc);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)CONCAT44(uStack_328._4_4_,3);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df81e30;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df7daf0;
    puStack_2f8 = &UNK_0df82170;
    puStack_2f0 = &UNK_0df82180;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(&uStack_120,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_198 = iStack_110;
    iStack_194 = iStack_10c;
    iStack_190 = iStack_108;
    iStack_18c = iStack_104;
    uStack_1a8 = uStack_120;
    uStack_1a0 = (long *)CONCAT44(iStack_114,iStack_118);
    func_0x0df81bc0(&plStack_338,&uStack_1a8,&plStack_278);
    if (uStack_320._4_4_ == 2) {
      piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_320) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      lVar23 = *(long *)(piVar24 + 0xc);
      while ((long *)lVar23 != plStack_330) {
        piVar24 = *(int **)(piVar24 + 0xe);
        lVar23 = *(long *)(piVar24 + 0xc);
      }
LAB_0deb808a:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_320) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb808a;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)((long)uStack_328 + 0x18) = *(uint *)((long)uStack_328 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_f0 == '\0') {
      func_0x0df81f50(&plStack_338,&uStack_128);
    }
    uVar25 = uStack_f4;
    plVar18 = uStack_128;
    if ((DAT_0f741130 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741130), iVar14 != 0)) {
      func_0x0df7dbb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7410b0,0xf53dab8);
      func_0x0410844d(&DAT_0f741130);
    }
    plVar20 = (long *)(plVar18[3] +
                      (ulong)((int)((ulong)(plVar18[4] - plVar18[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7410b0 + 4)) * 8);
    do {
      lVar23 = *plVar20;
      if (lVar23 == -1) goto LAB_0deb8120;
      plVar20 = (long *)(plVar18[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar18[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f7410b0 + 4));
    if (plVar20 == (long *)plVar18[7]) {
LAB_0deb8120:
      puVar16 = &DAT_0f7410b0;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar31 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar31 != puVar2 && (*puVar31 != uVar25)); puVar31 = puVar31 + 0xe) {
    }
    if ((puVar31 == puVar2) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0148ed4a),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
    FUN_05d9c620(puVar31 + 2,&uStack_fc,&uStack_fc,&plStack_338);
    uStack_1a8 = uStack_128;
    uStack_1a0 = uStack_120;
    iStack_198 = iStack_118;
    iStack_194 = iStack_114;
    iStack_190 = iStack_110;
    iStack_18c = iStack_10c;
    iStack_188 = iStack_108;
    iStack_184 = iStack_104;
    uStack_180 = (undefined *)CONCAT44(uStack_fc,iStack_100);
    uStack_178 = CONCAT44(uStack_f4,uStack_f8);
    uStack_170 = uStack_f0;
    FUN_048b0bc0(&plStack_278);
    func_0x0df81870(&plStack_278,&UNK_013bd089,0x1e);
    puVar26 = (undefined1 *)((ulong)uStack_250 >> 1 & 0x7f);
    if (((ulong)uStack_250 & 1) != 0) {
      puVar26 = puStack_248;
      puVar21 = puStack_240;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uVar25 = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < (undefined1 *)0x4) {
        uVar25 = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uVar25 = 0x811c9dc5;
        uVar29 = 0;
        do {
          uVar25 = ((int)*(char *)((long)puVar21 + uVar29 + 3) ^
                   ((int)*(char *)((long)puVar21 + uVar29 + 2) ^
                   ((int)*(char *)((long)puVar21 + uVar29 + 1) ^
                   ((int)*(char *)((long)puVar21 + uVar29) ^ uVar25) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uVar25 = ((int)*(char *)((long)puVar21 + uVar28 + uVar29) ^ uVar25) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    uStack_180 = (undefined *)CONCAT44(uVar25,2);
    if ((DAT_0f741150 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741150), iVar14 != 0)) {
      func_0x0df7dcc0();
      func_0x0410844d(&DAT_0f741150);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uStack_180._4_4_);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)CONCAT44(uStack_328._4_4_,3);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df81e30;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df7daf0;
    puStack_2f8 = &UNK_0df821d0;
    puStack_2f0 = &UNK_0df821e0;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(&uStack_1a0,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_98 = iStack_190;
    iStack_94 = iStack_18c;
    iStack_90 = iStack_188;
    iStack_8c = iStack_184;
    uStack_a8 = (undefined4)uStack_1a0;
    uStack_a4 = uStack_1a0._4_4_;
    iStack_a0 = iStack_198;
    iStack_9c = iStack_194;
    func_0x0df81bc0(&plStack_338,&uStack_a8,&plStack_278);
    if (uStack_320._4_4_ == 2) {
      piVar24 = *(int **)(uStack_328[0xf] + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_320) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      plVar18 = *(long **)(piVar24 + 0xc);
      while (plVar18 != plStack_330) {
        piVar24 = *(int **)(piVar24 + 0xe);
        plVar18 = *(long **)(piVar24 + 0xc);
      }
LAB_0deb848a:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar24 = *(int **)(uStack_328[0xf] + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_320) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb848a;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)(uStack_328 + 3) = *(uint *)(uStack_328 + 3) | 0x90000;
      }
    }
    if ((char)uStack_170 == '\0') {
      func_0x0df81f50(&plStack_338,&uStack_1a8);
    }
    plVar18 = uStack_1a8;
    iVar14 = uStack_178._4_4_;
    if ((DAT_0f741130 == '\0') && (iVar15 = func_0x04108328(&DAT_0f741130), iVar15 != 0)) {
      func_0x0df7dbb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7410b0,0xf53dab8);
      func_0x0410844d(&DAT_0f741130);
    }
    plVar20 = (long *)(plVar18[3] +
                      (ulong)((int)((ulong)(plVar18[4] - plVar18[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7410b0 + 4)) * 8);
    do {
      lVar23 = *plVar20;
      if (lVar23 == -1) goto LAB_0deb8520;
      plVar20 = (long *)(plVar18[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar18[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f7410b0 + 4));
    if (plVar20 == (long *)plVar18[7]) {
LAB_0deb8520:
      puVar16 = &DAT_0f7410b0;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    piVar22 = *(int **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (piVar24 = *(int **)(*(long *)(puVar16 + 0x68) + 0x20);
        (piVar24 != piVar22 && (*piVar24 != iVar14)); piVar24 = piVar24 + 0xe) {
    }
    if ((piVar24 == piVar22) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0148ed4a),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
    FUN_05d9c620(piVar24 + 2,(long)&uStack_180 + 4,(long)&uStack_180 + 4,&plStack_338);
    FUN_048b0bc0(&plStack_278);
  }
  if ((DAT_0f7411e8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7411e8), iVar14 != 0)) {
    func_0x0df822f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f741168,0xf53dab8);
    func_0x0410844d(&DAT_0f7411e8);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f741168 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deb8620;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f741168 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deb8620:
    puVar16 = &DAT_0f741168;
    if (iRam000000000f7411c8 != -0x2b3da790) goto LAB_0deb868e;
LAB_0deb864b:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deb868e;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar27 = lVar23 + 9;
    if (bVar32) {
      lVar27 = *(long *)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0df829d0(&uStack_168,param_1,lVar27,uVar17);
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deb864b;
LAB_0deb868e:
    func_0x0df829d0(&uStack_168,param_1,&UNK_011b1ca8,0x13);
  }
  if ((char)uStack_138 == '\0') {
    uStack_38 = CONCAT44(uStack_134,uStack_138);
    uStack_68 = CONCAT44(uStack_164,uStack_168);
    uStack_60 = CONCAT44(iStack_15c,iStack_160);
    iStack_58 = iStack_158;
    iStack_54 = iStack_154;
    iStack_50 = iStack_150;
    iStack_4c = iStack_14c;
    iStack_48 = iStack_148;
    iStack_44 = iStack_144;
    iStack_40 = iStack_140;
    uStack_3c = uStack_13c;
    func_0x0df83570(&plStack_278,&uStack_68,&UNK_0129beb0,0xe,1);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f4a7988;
    if (uStack_260 != (long *)0x0) {
      lVar23 = *uStack_260;
      uStack_260 = plVar18;
      (**(code **)(lVar23 + 8))();
      plVar18 = uStack_260;
    }
    uStack_260 = plVar18;
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df84f60;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df84900;
    puStack_2f8 = &UNK_0df85020;
    puStack_2f0 = &UNK_0df85180;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(plStack_270,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0df83830(&plStack_278);
    uStack_78 = CONCAT71(uStack_78._1_7_,(undefined1)uStack_38);
    iStack_88 = iStack_48;
    iStack_84 = iStack_44;
    iStack_80 = iStack_40;
    uStack_7c = uStack_3c;
    iStack_98 = iStack_58;
    iStack_94 = iStack_54;
    iStack_90 = iStack_50;
    iStack_8c = iStack_4c;
    uStack_a8 = (undefined4)uStack_68;
    uStack_a4 = uStack_68._4_4_;
    iStack_a0 = (int)uStack_60;
    iStack_9c = uStack_60._4_4_;
    FUN_048b0bc0(&uStack_260);
    if (iStack_80 == 4) {
      lVar23 = func_0x0df854a0(&uStack_a8);
      lVar23 = *(long *)(lVar23 + 0x48);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
LAB_0deb88fa:
      puVar19[1] = 0xffffffffffffffff;
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 0xff;
      *puVar19 = &UNK_0f4a3158;
      puVar19[4] = 1;
      plVar18 = *(long **)(lVar23 + 8);
      *(undefined8 **)(lVar23 + 8) = puVar19;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x28))();
      }
    }
    else if (iStack_80 == 1) {
      lVar23 = func_0x0df85350(&uStack_a8);
      lVar23 = *(long *)(lVar23 + 0x58);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      goto LAB_0deb88fa;
    }
    uStack_b8 = CONCAT31(uStack_b8._1_3_,(undefined1)uStack_78);
    iStack_c8 = iStack_88;
    iStack_c4 = iStack_84;
    iStack_c0 = iStack_80;
    uStack_bc = uStack_7c;
    iStack_d8 = iStack_98;
    iStack_d4 = iStack_94;
    iStack_d0 = iStack_90;
    iStack_cc = iStack_8c;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    iStack_e0 = iStack_a0;
    iStack_dc = iStack_9c;
    func_0x0df83570(&plStack_278,&uStack_e8,&UNK_0124f708,0x11,0);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f0122d0;
    if (uStack_260 != (long *)0x0) {
      lVar23 = *uStack_260;
      uStack_260 = plVar18;
      (**(code **)(lVar23 + 8))();
      plVar18 = uStack_260;
    }
    uStack_260 = plVar18;
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_05de9430;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_05de9110;
    puStack_2f8 = &UNK_0df85620;
    puStack_2f0 = &UNK_0df85790;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(plStack_270,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0df83830(&plStack_278);
    uStack_f8 = CONCAT31(uStack_f8._1_3_,(undefined1)uStack_b8);
    iStack_108 = iStack_c8;
    iStack_104 = iStack_c4;
    iStack_100 = iStack_c0;
    uStack_fc = uStack_bc;
    iStack_118 = iStack_d8;
    iStack_114 = iStack_d4;
    iStack_110 = iStack_d0;
    iStack_10c = iStack_cc;
    uStack_128 = (long *)CONCAT44(uStack_e4,uStack_e8);
    uStack_120 = (long *)CONCAT44(iStack_dc,iStack_e0);
    FUN_048b0bc0(&uStack_260);
    if (iStack_100 == 4) {
      lVar23 = func_0x0df854a0(&uStack_128);
      lVar23 = *(long *)(lVar23 + 0x48);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0deb8b6d:
      puVar19[1] = 0xffffffffffffffff;
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 0xff;
      uVar7 = _DAT_014f09b8;
      *puVar19 = &UNK_0f0edc68;
      puVar19[4] = 0;
      puVar19[5] = uVar7;
      puVar19[6] = 0x4056800000000000;
      puVar19[7] = 0;
      plVar18 = *(long **)(lVar23 + 8);
      *(undefined8 **)(lVar23 + 8) = puVar19;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x28))();
      }
    }
    else if (iStack_100 == 1) {
      lVar23 = func_0x0df85350(&uStack_128);
      lVar23 = *(long *)(lVar23 + 0x58);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0deb8b6d;
    }
    uStack_178 = CONCAT71(uStack_178._1_7_,(undefined1)uStack_f8);
    iStack_188 = iStack_108;
    iStack_184 = iStack_104;
    uStack_180 = (undefined *)CONCAT44(uStack_fc,iStack_100);
    iStack_198 = iStack_118;
    iStack_194 = iStack_114;
    iStack_190 = iStack_110;
    iStack_18c = iStack_10c;
    uStack_1a8 = uStack_128;
    uStack_1a0 = uStack_120;
    func_0x0df82fc0(&plStack_278,uStack_128 + 3);
    if (uStack_260._4_4_ == 2) {
      piVar24 = *(int **)(uStack_268[0xf] + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_260) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      plVar18 = *(long **)(piVar24 + 0xc);
      while (plVar18 != plStack_270) {
        piVar24 = *(int **)(piVar24 + 0xe);
        plVar18 = *(long **)(piVar24 + 0xc);
      }
LAB_0deb8cca:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 4;
    }
    else {
      if (uStack_260._4_4_ == 1) {
        piVar24 = *(int **)(uStack_268[0xf] + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_260) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb8cca;
      }
      if (uStack_260._4_4_ == 0) {
        *(uint *)(uStack_268 + 3) = *(uint *)(uStack_268 + 3) | 0x40000;
      }
    }
    func_0x0df83570(&plStack_278,&uStack_1a8,&UNK_0136e59c,0x15,0x10);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f3f5028;
    if (uStack_260 != (long *)0x0) {
      lVar23 = *uStack_260;
      uStack_260 = plVar18;
      (**(code **)(lVar23 + 8))();
      plVar18 = uStack_260;
    }
    uStack_260 = plVar18;
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0cbc9cc0;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0cbc85f0;
    puStack_2f8 = &UNK_0df85970;
    puStack_2f0 = &UNK_0df85b50;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(plStack_270,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0df83830(&plStack_278);
    FUN_048b0bc0(&uStack_260);
  }
  if ((DAT_0f741358 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741358), iVar14 != 0)) {
    func_0x0df85df0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7412d8,0xf53dab8);
    func_0x0410844d(&DAT_0f741358);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7412d8 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deb8e60;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f7412d8 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deb8e60:
    puVar16 = &DAT_0f7412d8;
    if (iRam000000000f741338 != -0x2b3da790) goto LAB_0deb8eb8;
LAB_0deb8e8b:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deb8eb8;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar23 + 9);
    if (bVar32) {
      puVar16 = *(undefined **)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deb8e8b;
LAB_0deb8eb8:
    puVar16 = &UNK_013a5d07;
    uVar17 = 0x20;
  }
  func_0x0df86230(&uStack_168,param_1,puVar16,uVar17);
  uStack_134 = uStack_134 & 0xffffff00;
  uStack_130 = uStack_130 & 0xffffff00;
  if ((char)uStack_138 == '\0') {
    func_0x0df89ab0(&plStack_278,&UNK_012e8a61,0x14);
    puVar26 = (undefined1 *)((ulong)uStack_250 >> 1 & 0x7f);
    puVar21 = (undefined4 *)((long)&uStack_250 + 1);
    if (((ulong)uStack_250 & 1) != 0) {
      puVar26 = puStack_248;
      puVar21 = puStack_240;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uStack_13c = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < (undefined1 *)0x4) {
        uStack_13c = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uStack_13c = 0x811c9dc5;
        uVar29 = 0;
        do {
          uStack_13c = ((int)*(char *)((long)puVar21 + uVar29 + 3) ^
                       ((int)*(char *)((long)puVar21 + uVar29 + 2) ^
                       ((int)*(char *)((long)puVar21 + uVar29 + 1) ^
                       ((int)*(char *)((long)puVar21 + uVar29) ^ uStack_13c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uStack_13c = ((int)*(char *)((long)puVar21 + uVar28 + uVar29) ^ uStack_13c) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    iStack_140 = 2;
    if ((DAT_0f741378 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741378), iVar14 != 0)) {
      func_0x0df85f00();
      func_0x0410844d(&DAT_0f741378);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uStack_13c);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)CONCAT44(uStack_328._4_4_,3);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df8a0f0;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df85d30;
    puStack_2f8 = &UNK_0df8a1b0;
    puStack_2f0 = &UNK_0df8a1c0;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(&iStack_160,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_198 = iStack_150;
    iStack_194 = iStack_14c;
    iStack_190 = iStack_148;
    iStack_18c = iStack_144;
    func_0x0df89e80(&plStack_338,&uStack_1a8,&plStack_278);
    if (uStack_320._4_4_ == 2) {
      piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_320) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      lVar23 = *(long *)(piVar24 + 0xc);
      while ((long *)lVar23 != plStack_330) {
        piVar24 = *(int **)(piVar24 + 0xe);
        lVar23 = *(long *)(piVar24 + 0xc);
      }
LAB_0deb919a:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar24 = *(int **)(*(long *)((long)uStack_328 + 0x78) + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_320) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb919a;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)((long)uStack_328 + 0x18) = *(uint *)((long)uStack_328 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_130 == '\0') {
      func_0x0df8a210(&plStack_338,&uStack_168);
    }
    uVar25 = uStack_134;
    lVar23 = CONCAT44(uStack_164,uStack_168);
    if ((DAT_0f741358 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741358), iVar14 != 0)) {
      func_0x0df85df0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7412d8,0xf53dab8);
      func_0x0410844d(&DAT_0f741358);
    }
    plVar18 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7412d8 + 4)) * 8);
    do {
      lVar27 = *plVar18;
      if (lVar27 == -1) goto LAB_0deb9230;
      plVar18 = (long *)(*(long *)(lVar23 + 0x30) + lVar27 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f7412d8 + 4)
            );
    if (plVar18 == *(long **)(lVar23 + 0x38)) {
LAB_0deb9230:
      puVar16 = &DAT_0f7412d8;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar31 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar31 != puVar2 && (*puVar31 != uVar25)); puVar31 = puVar31 + 0xe) {
    }
    if ((puVar31 == puVar2) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0131fa9d),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
    FUN_05d9c620(puVar31 + 2,&uStack_13c,&uStack_13c,&plStack_338);
    uStack_1a8 = (long *)CONCAT44(uStack_164,uStack_168);
    uStack_1a0 = (long *)CONCAT44(iStack_15c,iStack_160);
    iStack_198 = iStack_158;
    iStack_194 = iStack_154;
    iStack_190 = iStack_150;
    iStack_18c = iStack_14c;
    iStack_188 = iStack_148;
    iStack_184 = iStack_144;
    uStack_180 = (undefined *)CONCAT44(uStack_13c,iStack_140);
    uStack_178 = CONCAT44(uStack_134,uStack_138);
    uStack_170 = uStack_130;
    FUN_048b0bc0(&plStack_278);
    func_0x0df89ab0(&plStack_278,&UNK_0143f081,0x17);
    puVar26 = (undefined1 *)((ulong)uStack_250 >> 1 & 0x7f);
    puVar21 = (undefined4 *)((long)&uStack_250 + 1);
    if (((ulong)uStack_250 & 1) != 0) {
      puVar26 = puStack_248;
      puVar21 = puStack_240;
    }
    if (puVar26 == (undefined1 *)0x0) {
      uVar25 = 0x811c9dc5;
    }
    else {
      uVar17 = (ulong)((uint)puVar26 & 3);
      if (puVar26 < (undefined1 *)0x4) {
        uVar25 = 0x811c9dc5;
        uVar29 = 0;
      }
      else {
        uVar25 = 0x811c9dc5;
        uVar29 = 0;
        do {
          uVar25 = ((int)*(char *)((long)puVar21 + uVar29 + 3) ^
                   ((int)*(char *)((long)puVar21 + uVar29 + 2) ^
                   ((int)*(char *)((long)puVar21 + uVar29 + 1) ^
                   ((int)*(char *)((long)puVar21 + uVar29) ^ uVar25) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar29 = uVar29 + 4;
        } while (((ulong)puVar26 & 0xfffffffffffffffc) != uVar29);
      }
      if (uVar17 != 0) {
        uVar28 = 0;
        do {
          uVar25 = ((int)*(char *)((long)puVar21 + uVar28 + uVar29) ^ uVar25) * 0x1000193;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    uStack_180 = (undefined *)CONCAT44(uVar25,2);
    if ((DAT_0f741378 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741378), iVar14 != 0)) {
      func_0x0df85f00();
      func_0x0410844d(&DAT_0f741378);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,uStack_180._4_4_);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)CONCAT44(uStack_328._4_4_,3);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df8a0f0;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df85d30;
    puStack_2f8 = &UNK_0df8a3d0;
    puStack_2f0 = &UNK_0df8a3e0;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(&uStack_1a0,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    iStack_118 = iStack_190;
    iStack_114 = iStack_18c;
    iStack_110 = iStack_188;
    iStack_10c = iStack_184;
    uStack_128 = uStack_1a0;
    uStack_120 = (long *)CONCAT44(iStack_194,iStack_198);
    func_0x0df89e80(&plStack_338,&uStack_128,&plStack_278);
    if (uStack_320._4_4_ == 2) {
      piVar24 = *(int **)(uStack_328[0xf] + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)uStack_320) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      plVar18 = *(long **)(piVar24 + 0xc);
      while (plVar18 != plStack_330) {
        piVar24 = *(int **)(piVar24 + 0xe);
        plVar18 = *(long **)(piVar24 + 0xc);
      }
LAB_0deb959a:
      *(byte *)((long)piVar24 + 0x12) = *(byte *)((long)piVar24 + 0x12) | 9;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar24 = *(int **)(uStack_328[0xf] + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)uStack_320) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb959a;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)(uStack_328 + 3) = *(uint *)(uStack_328 + 3) | 0x90000;
      }
    }
    if ((char)uStack_170 == '\0') {
      func_0x0df8a210(&plStack_338,&uStack_1a8);
    }
    plVar18 = uStack_1a8;
    iVar14 = uStack_178._4_4_;
    if ((DAT_0f741358 == '\0') && (iVar15 = func_0x04108328(&DAT_0f741358), iVar15 != 0)) {
      func_0x0df85df0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7412d8,0xf53dab8);
      func_0x0410844d(&DAT_0f741358);
    }
    plVar20 = (long *)(plVar18[3] +
                      (ulong)((int)((ulong)(plVar18[4] - plVar18[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7412d8 + 4)) * 8);
    do {
      lVar23 = *plVar20;
      if (lVar23 == -1) goto LAB_0deb9630;
      plVar20 = (long *)(plVar18[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar18[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f7412d8 + 4));
    if (plVar20 == (long *)plVar18[7]) {
LAB_0deb9630:
      puVar16 = &DAT_0f7412d8;
    }
    else {
      puVar16 = (undefined *)plVar20[2];
    }
    piVar22 = *(int **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (piVar24 = *(int **)(*(long *)(puVar16 + 0x68) + 0x20);
        (piVar24 != piVar22 && (*piVar24 != iVar14)); piVar24 = piVar24 + 0xe) {
    }
    if ((piVar24 == piVar22) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0131fa9d),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
    FUN_05d9c620(piVar24 + 2,(long)&uStack_180 + 4,(long)&uStack_180 + 4,&plStack_338);
    FUN_048b0bc0(&plStack_278);
  }
  if ((DAT_0f741410 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741410), iVar14 != 0)) {
    func_0x0df8a4f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f741390,0xf53dab8);
    func_0x0410844d(&DAT_0f741410);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f741390 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deb9730;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f741390 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deb9730:
    puVar16 = &DAT_0f741390;
    if (iRam000000000f7413f0 != -0x2b3da790) goto LAB_0deb979e;
LAB_0deb975b:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deb979e;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar27 = lVar23 + 9;
    if (bVar32) {
      lVar27 = *(long *)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0df8a910(&uStack_168,param_1,lVar27,uVar17);
    iVar14 = iStack_198;
    iVar15 = iStack_194;
    iVar9 = iStack_190;
    iVar10 = iStack_18c;
    iVar11 = iStack_188;
    iVar12 = iStack_184;
    iStack_198 = iStack_158;
    iStack_194 = iStack_154;
    iStack_190 = iStack_150;
    iStack_18c = iStack_14c;
    iStack_188 = iStack_148;
    iStack_184 = iStack_144;
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deb975b;
LAB_0deb979e:
    func_0x0df8a910(&uStack_168,param_1,&UNK_011b1cbc,0x12);
    iVar14 = iStack_198;
    iVar15 = iStack_194;
    iVar9 = iStack_190;
    iVar10 = iStack_18c;
    iVar11 = iStack_188;
    iVar12 = iStack_184;
    iStack_198 = iStack_158;
    iStack_194 = iStack_154;
    iStack_190 = iStack_150;
    iStack_18c = iStack_14c;
    iStack_188 = iStack_148;
    iStack_184 = iStack_144;
  }
  iStack_158 = iStack_198;
  iStack_154 = iStack_194;
  iStack_150 = iStack_190;
  iStack_14c = iStack_18c;
  iStack_148 = iStack_188;
  iStack_144 = iStack_184;
  if ((char)uStack_138 == '\0') {
    uStack_178 = CONCAT44(uStack_134,uStack_138);
    uStack_180 = (undefined *)CONCAT44(uStack_13c,iStack_140);
    uStack_1a8 = (long *)CONCAT44(uStack_164,uStack_168);
    uStack_1a0 = (long *)CONCAT44(iStack_15c,iStack_160);
    if ((DAT_0f741430 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741430), iVar14 != 0)) {
      func_0x0df8a600();
      func_0x0410844d(&DAT_0f741430);
    }
    plVar18 = uStack_1a8;
    uStack_180 = (undefined *)0x92685bf500000001;
    if ((DAT_0f741410 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741410), iVar14 != 0)) {
      func_0x0df8a4f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f741390,0xf53dab8);
      func_0x0410844d(&DAT_0f741410);
    }
    plStack_270 = plVar18 + 3;
    plVar20 = (long *)(plVar18[3] +
                      (ulong)((int)((ulong)(plVar18[4] - plVar18[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f741390 + 4)) * 8);
    do {
      lVar23 = *plVar20;
      if (lVar23 == -1) goto LAB_0deb98a0;
      plVar20 = (long *)(plVar18[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar18[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f741390 + 4));
    if (plVar20 == (long *)plVar18[7]) {
LAB_0deb98a0:
      plStack_278 = (long *)&DAT_0f741390;
    }
    else {
      plStack_278 = (long *)plVar20[2];
    }
    func_0x0ed621a0(&plStack_278,uStack_180._4_4_);
    plStack_278 = (long *)CONCAT62(plStack_278._2_6_,1);
    uStack_268 = (long *)CONCAT44(uStack_268._4_4_,uStack_180._4_4_);
    uStack_260 = (long *)0x0;
    lStack_258 = 0;
    uStack_250 = (undefined *)0x0;
    puStack_248 = (undefined1 *)0x0;
    puStack_240 = (undefined4 *)0x0;
    uStack_238 = 0x1c;
    uStack_237 = 0x656c62616e65;
    uStack_231 = 100;
    uStack_230 = 0x5f;
    uStack_22f = 0x736574617473;
    uStack_229 = 0;
    lStack_220 = 0;
    plStack_218 = (long *)0x0;
    lStack_210 = 0;
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x3f600000);
    plStack_270 = &uStack_1a0;
    func_0x048afb10(&lStack_220,8);
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    lStack_1c0 = 0;
    lStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1ce = 0;
    uStack_1cc = 0;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    uStack_1b8 = 0xff00;
    uStack_1b4 = uStack_1b4 & 0xffffff00;
    uStack_1b0 = uStack_1b0 & 0xffffff00;
    uStack_1ac = 0;
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4a7b48;
    if (uStack_260 != (long *)0x0) {
      lVar23 = *uStack_260;
      uStack_260 = puVar19;
      (**(code **)(lVar23 + 8))();
      puVar19 = uStack_260;
    }
    uStack_260 = puVar19;
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
    plStack_330 = (long *)0x0;
    uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
    uStack_320 = 1;
    uStack_318 = 0;
    uStack_310 = &UNK_0df8c840;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = (undefined4 *)&UNK_0df8c1f0;
    puStack_2f8 = &UNK_0df8c900;
    puStack_2f0 = &UNK_0df8ca60;
    uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
    lStack_2e0 = 0;
    plStack_2d8 = (long *)0x0;
    func_0x048b05a0(plStack_270,&plStack_338);
    plVar18 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_2d8 + 1;
      lVar23 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = plStack_270;
    if ((DAT_0f550a20 == '\0') && (iVar14 = func_0x04108328(&DAT_0f550a20), iVar14 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    plStack_338 = (long *)CONCAT44(plStack_338._4_4_,_DAT_0f550a0c);
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar20 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar23 = lStack_258;
    puVar19 = uStack_260;
    plVar20[1] = 0;
    plVar20[2] = 0;
    *plVar20 = (long)&UNK_0ef439d0;
    plStack_330 = plVar20 + 3;
    uStack_260 = (long *)0x0;
    lStack_258 = 0;
    plVar20[3] = (long)puVar19;
    plVar20[4] = lVar23;
    plVar20[7] = (long)puStack_240;
    plVar20[5] = (long)uStack_250;
    plVar20[6] = (long)puStack_248;
    uStack_250 = (undefined *)0x0;
    puStack_248 = (undefined1 *)0x0;
    puStack_240 = (undefined4 *)0x0;
    plVar20[10] = uStack_228;
    plVar20[8] = CONCAT17(uStack_231,CONCAT61(uStack_237,uStack_238));
    plVar20[9] = CONCAT17(uStack_229,CONCAT61(uStack_22f,uStack_230));
    uStack_238 = 0;
    uStack_237 = 0;
    uStack_231 = 0;
    uStack_230 = 0;
    uStack_22f = 0;
    uStack_229 = 0;
    uStack_228 = 0;
    plVar20[0xb] = lStack_220;
    plVar20[0xc] = (long)plStack_218;
    plVar20[0xd] = lStack_210;
    lStack_220 = 0;
    plStack_218 = (long *)0x0;
    lStack_210 = 0;
    plVar20[0xe] = lStack_208;
    plVar20[0xf] = lStack_200;
    plVar20[0x10] = lStack_1f8;
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    *(undefined4 *)(plVar20 + 0x11) = (undefined4)uStack_1f0;
    plVar20[0x12] = lStack_1e8;
    plVar20[0x13] = lStack_1e0;
    plVar20[0x14] = lStack_1d8;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    plVar20[0x17] = lStack_1c0;
    *(uint *)(plVar20 + 0x15) = CONCAT22(uStack_1ce,uStack_1d0);
    *(uint *)((long)plVar20 + 0xac) = uStack_1cc;
    *(uint *)(plVar20 + 0x16) = uStack_1c8;
    *(uint *)((long)plVar20 + 0xb4) = uStack_1c4;
    uStack_1d0 = 0;
    uStack_1ce = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    lStack_1c0 = 0;
    *(ulong *)((long)plVar20 + 0xc5) = CONCAT17(uStack_1ac,CONCAT43(uStack_1b0,uStack_1b4._1_3_));
    plVar20[0x18] = CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,uStack_1b8));
    uStack_128 = (long *)0x0;
    uStack_120 = (long *)0x0;
    uStack_328 = plVar20;
    func_0x048afd20(plVar18,&plStack_338);
    plVar20 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_120;
    if (uStack_120 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_120 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_120 + 0x10))(uStack_120);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_1a8;
    lVar23 = plVar18[2];
    iVar14 = *(int *)((long)plVar18 + 0x1c);
    if (iVar14 == 2) {
      piVar24 = *(int **)(*(long *)(lVar23 + 0x78) + 0x60);
      iVar14 = *piVar24;
      while (iVar14 != (int)plVar18[3]) {
        piVar24 = piVar24 + 0x16;
        iVar14 = *piVar24;
      }
      for (; *(long *)(piVar24 + 0xc) != plVar18[1]; piVar24 = *(int **)(piVar24 + 0xe)) {
      }
LAB_0deb9d9a:
      piVar24[4] = piVar24[4] | (int)plStack_278 << 0x10;
    }
    else {
      if (iVar14 == 1) {
        piVar24 = *(int **)(*(long *)(lVar23 + 0x78) + 0x48);
        iVar14 = *piVar24;
        while (iVar14 != (int)plVar18[3]) {
          piVar24 = piVar24 + 0x1a;
          iVar14 = *piVar24;
        }
        goto LAB_0deb9d9a;
      }
      if (iVar14 == 0) {
        *(uint *)(lVar23 + 0x18) = *(uint *)(lVar23 + 0x18) | (int)plStack_278 << 0x10;
      }
    }
    iVar8 = (int)uStack_180;
    uVar3 = uStack_180._4_4_;
    FUN_048b0bc0(&uStack_260);
    if (iVar8 == 4) {
      if ((DAT_0f741410 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741410), iVar14 != 0)) {
        func_0x0df8a4f0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f741390,0xf53dab8);
        func_0x0410844d(&DAT_0f741410);
      }
      plVar18 = (long *)(plVar20[3] +
                        (ulong)((int)((ulong)(plVar20[4] - plVar20[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f741390 + 4)) * 8);
      do {
        lVar23 = *plVar18;
        if (lVar23 == -1) goto LAB_0deb9ea8;
        plVar18 = (long *)(plVar20[6] + lVar23 * 0x18);
      } while (*(uint *)(plVar20[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f741390 + 4));
      if (plVar18 == (long *)plVar20[7]) {
LAB_0deb9ea8:
        puVar16 = &DAT_0f741390;
      }
      else {
        puVar16 = (undefined *)plVar18[2];
      }
      plVar18 = (long *)func_0x048b1040(plVar20 + 3,puVar16,uVar3,1);
      if (plVar18 == (long *)0x0) {
        plStack_278 = (long *)0x0;
        plStack_270 = (long *)0x0;
        func_0x048b10d0(&plStack_278);
        plVar20 = (long *)plStack_278[7];
        plVar18 = plStack_278;
        if (plVar20 == (long *)0x0) goto LAB_0deb9f8c;
LAB_0deb9fb1:
        do {
          plVar18 = plVar20;
          plVar20 = (long *)plVar18[7];
          if ((long *)plVar18[7] == (long *)0x0) {
            plStack_278 = (long *)0x0;
            plStack_270 = (long *)0x0;
            func_0x048b10d0(&plStack_278);
            plVar20 = plStack_278;
          }
        } while (plVar20 != (long *)0x0);
      }
      else {
        plVar20 = (long *)plVar18[7];
        if ((long *)plVar18[7] != (long *)0x0) goto LAB_0deb9fb1;
LAB_0deb9f8c:
        plStack_278 = (long *)0x0;
        plStack_270 = (long *)0x0;
        func_0x048b10d0(&plStack_278);
        plVar20 = plStack_278;
        if (plStack_278 != (long *)0x0) goto LAB_0deb9fb1;
      }
      lVar23 = plVar18[9];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
    }
    else {
      iVar14 = iStack_198;
      iVar15 = iStack_194;
      iVar9 = iStack_190;
      iVar10 = iStack_18c;
      iVar11 = iStack_188;
      iVar12 = iStack_184;
      if (iVar8 != 1) goto LAB_0deba04e;
      if ((DAT_0f741410 == '\0') && (iVar14 = func_0x04108328(&DAT_0f741410), iVar14 != 0)) {
        func_0x0df8a4f0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f741390,0xf53dab8);
        func_0x0410844d(&DAT_0f741410);
      }
      plVar18 = (long *)(plVar20[3] +
                        (ulong)((int)((ulong)(plVar20[4] - plVar20[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f741390 + 4)) * 8);
      do {
        lVar23 = *plVar18;
        if (lVar23 == -1) goto LAB_0deb9e38;
        plVar18 = (long *)(plVar20[6] + lVar23 * 0x18);
      } while (*(uint *)(plVar20[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f741390 + 4));
      if (plVar18 == (long *)plVar20[7]) {
LAB_0deb9e38:
        puVar16 = &DAT_0f741390;
      }
      else {
        puVar16 = (undefined *)plVar18[2];
      }
      plVar18 = (long *)func_0x048b0c90(plVar20 + 3,puVar16,uVar3,1);
      if (plVar18 == (long *)0x0) {
        plStack_278 = (long *)0x0;
        plStack_270 = (long *)0x0;
        func_0x048b0d20(&plStack_278);
        plVar18 = plStack_278;
      }
      lVar23 = plVar18[0xb];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
    }
    puVar19[1] = 0xffffffffffffffff;
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 0xff;
    *puVar19 = &UNK_0f4a31d8;
    puVar19[4] = 1;
    plVar18 = *(long **)(lVar23 + 8);
    *(undefined8 **)(lVar23 + 8) = puVar19;
    iVar14 = iStack_198;
    iVar15 = iStack_194;
    iVar9 = iStack_190;
    iVar10 = iStack_18c;
    iVar11 = iStack_188;
    iVar12 = iStack_184;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x28))();
      iVar14 = iStack_198;
      iVar15 = iStack_194;
      iVar9 = iStack_190;
      iVar10 = iStack_18c;
      iVar11 = iStack_188;
      iVar12 = iStack_184;
    }
  }
LAB_0deba04e:
  iStack_184 = iVar12;
  iStack_188 = iVar11;
  iStack_18c = iVar10;
  iStack_190 = iVar9;
  iStack_194 = iVar15;
  iStack_198 = iVar14;
  if ((DAT_0f740dc8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740dc8), iVar14 != 0)) {
    func_0x0df71690();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740d48,0xf53dab8);
    func_0x0410844d(&DAT_0f740dc8);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f740d48 + 4)) * 8);
  do {
    lVar23 = *plVar18;
    if (lVar23 == -1) goto LAB_0deba0b0;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f740d48 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0deba0b0:
    puVar16 = &DAT_0f740d48;
    if (iRam000000000f740da8 != -0x2b3da790) goto LAB_0deba11e;
LAB_0deba0db:
    lVar23 = *(long *)(puVar16 + 0x68);
    if (lVar23 == 0) goto LAB_0deba11e;
    bVar32 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar27 = lVar23 + 9;
    if (bVar32) {
      lVar27 = *(long *)(lVar23 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar32) {
      uVar17 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0dfa8d80(&uStack_168,param_1,lVar27,uVar17);
    uStack_a8 = uStack_168;
    uStack_a4 = uStack_164;
    iStack_a0 = iStack_160;
    iStack_9c = iStack_15c;
    iStack_98 = iStack_158;
    iStack_94 = iStack_154;
    iStack_90 = iStack_150;
    iStack_8c = iStack_14c;
    iStack_88 = iStack_148;
    iStack_84 = iStack_144;
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0deba0db;
LAB_0deba11e:
    func_0x0dfa8d80(&uStack_168,param_1,&UNK_011b1ccf,6);
    uStack_a8 = uStack_168;
    uStack_a4 = uStack_164;
    iStack_a0 = iStack_160;
    iStack_9c = iStack_15c;
    iStack_98 = iStack_158;
    iStack_94 = iStack_154;
    iStack_90 = iStack_150;
    iStack_8c = iStack_14c;
    iStack_88 = iStack_148;
    iStack_84 = iStack_144;
  }
  if ((char)uStack_138 != '\0') {
    return;
  }
  uStack_78 = CONCAT44(uStack_134,uStack_138);
  iStack_80 = iStack_140;
  uStack_7c = uStack_13c;
  func_0x0dfa98f0(&plStack_278,&uStack_a8,&UNK_011aeaf8,0x14);
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar18 = (long)&UNK_0f4a8508;
  if (uStack_260 != (long *)0x0) {
    lVar23 = *uStack_260;
    uStack_260 = plVar18;
    (**(code **)(lVar23 + 8))();
    plVar18 = uStack_260;
  }
  uStack_260 = plVar18;
  plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
  plStack_330 = (long *)0x0;
  uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
  uStack_320 = 1;
  uStack_318 = 0;
  uStack_310 = &UNK_0dfaae80;
  puStack_308 = &SUB_048b06d0;
  puStack_300 = (undefined4 *)&UNK_0dfaaad0;
  puStack_2f8 = &UNK_0dfaaf40;
  puStack_2f0 = &UNK_0dfab0a0;
  uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
  lStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  func_0x048b05a0(plStack_270,&plStack_338);
  plVar18 = plStack_2d8;
  if (plStack_2d8 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_2d8 + 1;
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      func_0x0412c2d0(plVar18);
    }
  }
  func_0x0dfa9c00(&plStack_278);
  uStack_b8 = CONCAT31(uStack_b8._1_3_,(undefined1)uStack_78);
  iStack_c8 = iStack_88;
  iStack_c4 = iStack_84;
  iStack_c0 = iStack_80;
  uStack_bc = uStack_7c;
  iStack_d8 = iStack_98;
  iStack_d4 = iStack_94;
  iStack_d0 = iStack_90;
  iStack_cc = iStack_8c;
  uStack_e8 = uStack_a8;
  uStack_e4 = uStack_a4;
  iStack_e0 = iStack_a0;
  iStack_dc = iStack_9c;
  FUN_048b0bc0(&uStack_260);
  func_0x0dfa98f0(&plStack_278,&uStack_e8,&UNK_014bfa34,0x15);
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar18 = (long)&UNK_0f4a85f8;
  if (uStack_260 != (long *)0x0) {
    lVar23 = *uStack_260;
    uStack_260 = plVar18;
    (**(code **)(lVar23 + 8))();
    plVar18 = uStack_260;
  }
  uStack_260 = plVar18;
  plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
  plStack_330 = (long *)0x0;
  uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
  uStack_320 = 1;
  uStack_318 = 0;
  uStack_310 = &UNK_0dfac4e0;
  puStack_308 = &SUB_048b06d0;
  puStack_300 = (undefined4 *)&UNK_0dfac130;
  puStack_2f8 = &UNK_0dfac5a0;
  puStack_2f0 = &UNK_0dfac710;
  uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
  lStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  func_0x048b05a0(plStack_270,&plStack_338);
  plVar18 = plStack_2d8;
  if (plStack_2d8 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_2d8 + 1;
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      func_0x0412c2d0(plVar18);
    }
  }
  func_0x0dfa9c00(&plStack_278);
  uStack_f8 = CONCAT31(uStack_f8._1_3_,(undefined1)uStack_b8);
  iStack_108 = iStack_c8;
  iStack_104 = iStack_c4;
  iStack_100 = iStack_c0;
  uStack_fc = uStack_bc;
  iStack_118 = iStack_d8;
  iStack_114 = iStack_d4;
  iStack_110 = iStack_d0;
  iStack_10c = iStack_cc;
  uStack_128 = (long *)CONCAT44(uStack_e4,uStack_e8);
  uStack_120 = (long *)CONCAT44(iStack_dc,iStack_e0);
  FUN_048b0bc0(&uStack_260);
  func_0x0dfa98f0(&plStack_278,&uStack_128,&UNK_0148ae9b,0x1d);
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar18 = (long)&UNK_0f4a86e8;
  if (uStack_260 != (long *)0x0) {
    lVar23 = *uStack_260;
    uStack_260 = plVar18;
    (**(code **)(lVar23 + 8))();
    plVar18 = uStack_260;
  }
  uStack_260 = plVar18;
  plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
  plStack_330 = (long *)0x0;
  uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
  uStack_320 = 1;
  uStack_318 = 0;
  uStack_310 = &UNK_0dfae070;
  puStack_308 = &SUB_048b06d0;
  puStack_300 = (undefined4 *)&UNK_0dfadca0;
  puStack_2f8 = &UNK_0dfae130;
  puStack_2f0 = &UNK_0dfae410;
  uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
  lStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  func_0x048b05a0(plStack_270,&plStack_338);
  plVar18 = plStack_2d8;
  if (plStack_2d8 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_2d8 + 1;
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      func_0x0412c2d0(plVar18);
    }
  }
  func_0x0dfa9c00(&plStack_278);
  uVar25 = uStack_fc;
  iVar14 = iStack_100;
  lVar23 = (long)uStack_128;
  uStack_60 = CONCAT44(iStack_114,iStack_118);
  uStack_68 = (long)uStack_120;
  iStack_58 = iStack_110;
  iStack_54 = iStack_10c;
  iStack_50 = iStack_108;
  iStack_4c = iStack_104;
  uVar30 = (undefined1)uStack_f8;
  FUN_048b0bc0(&uStack_260);
  if (iVar14 == 4) {
    if ((DAT_0f740dc8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f740dc8), iVar15 != 0)) {
      func_0x0df71690();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f740d48,0xf53dab8);
      func_0x0410844d(&DAT_0f740dc8);
    }
    plVar18 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f740d48 + 4)) * 8);
    do {
      lVar27 = *plVar18;
      if (lVar27 == -1) goto LAB_0deba6d8;
      plVar18 = (long *)(*(long *)(lVar23 + 0x30) + lVar27 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f740d48 + 4)
            );
    if (plVar18 == *(long **)(lVar23 + 0x38)) {
LAB_0deba6d8:
      puVar16 = &DAT_0f740d48;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    plVar18 = (long *)func_0x048b1040(lVar23 + 0x18,puVar16,uVar25,1);
    if (plVar18 == (long *)0x0) {
      plStack_278 = (long *)0x0;
      plStack_270 = (long *)0x0;
      func_0x048b10d0(&plStack_278);
      plVar20 = (long *)plStack_278[7];
      plVar18 = plStack_278;
      if (plVar20 == (long *)0x0) goto LAB_0deba975;
LAB_0deba99a:
      do {
        plVar18 = plVar20;
        plVar20 = (long *)plVar18[7];
        if ((long *)plVar18[7] == (long *)0x0) {
          plStack_278 = (long *)0x0;
          plStack_270 = (long *)0x0;
          func_0x048b10d0(&plStack_278);
          plVar20 = plStack_278;
        }
      } while (plVar20 != (long *)0x0);
    }
    else {
      plVar20 = (long *)plVar18[7];
      if ((long *)plVar18[7] != (long *)0x0) goto LAB_0deba99a;
LAB_0deba975:
      plStack_278 = (long *)0x0;
      plStack_270 = (long *)0x0;
      func_0x048b10d0(&plStack_278);
      plVar20 = plStack_278;
      if (plStack_278 != (long *)0x0) goto LAB_0deba99a;
    }
    lVar27 = plVar18[9];
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar19[1] = 0xffffffffffffffff;
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 0xff;
    *puVar19 = &UNK_0f4a2b50;
    plVar18 = *(long **)(lVar27 + 8);
    *(undefined8 **)(lVar27 + 8) = puVar19;
  }
  else {
    if (iVar14 != 1) goto LAB_0deba798;
    if ((DAT_0f740dc8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f740dc8), iVar15 != 0)) {
      func_0x0df71690();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f740d48,0xf53dab8);
      func_0x0410844d(&DAT_0f740dc8);
    }
    plVar18 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f740d48 + 4)) * 8);
    do {
      lVar27 = *plVar18;
      if (lVar27 == -1) goto LAB_0deba663;
      plVar18 = (long *)(*(long *)(lVar23 + 0x30) + lVar27 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f740d48 + 4)
            );
    if (plVar18 == *(long **)(lVar23 + 0x38)) {
LAB_0deba663:
      puVar16 = &DAT_0f740d48;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    uStack_279 = uVar30;
    plVar18 = (long *)func_0x048b0c90(lVar23 + 0x18,puVar16,uVar25,1);
    if (plVar18 == (long *)0x0) {
      plStack_278 = (long *)0x0;
      plStack_270 = (long *)0x0;
      func_0x048b0d20(&plStack_278);
      plVar18 = plStack_278;
    }
    lVar27 = plVar18[0xb];
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar19[1] = 0xffffffffffffffff;
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 0xff;
    *puVar19 = &UNK_0f4a2b50;
    plVar18 = *(long **)(lVar27 + 8);
    *(undefined8 **)(lVar27 + 8) = puVar19;
    uVar30 = uStack_279;
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x28))();
  }
LAB_0deba798:
  uStack_1a8 = (long *)lVar23;
  uStack_1a0 = (long *)uStack_68;
  iStack_198 = (int)uStack_60;
  iStack_194 = uStack_60._4_4_;
  iStack_190 = iStack_58;
  iStack_18c = iStack_54;
  iStack_188 = iStack_50;
  iStack_184 = iStack_4c;
  uStack_180 = (undefined *)CONCAT44(uVar25,iVar14);
  uStack_178 = CONCAT71(uStack_178._1_7_,uVar30);
  func_0x0dfa98f0(&plStack_278,&uStack_1a8,&UNK_013525f8,0x1c);
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0f4a87d8;
  if (uStack_260 != (long *)0x0) {
    lVar23 = *uStack_260;
    uStack_260 = puVar19;
    (**(code **)(lVar23 + 8))();
    puVar19 = uStack_260;
  }
  uStack_260 = puVar19;
  plStack_338 = (long *)CONCAT44(plStack_338._4_4_,(undefined4)uStack_268);
  plStack_330 = (long *)0x0;
  uStack_328 = (long *)((ulong)uStack_328 & 0xffffffff00000000);
  uStack_320 = 1;
  uStack_318 = 0;
  uStack_310 = &UNK_0dfaf810;
  puStack_308 = &SUB_048b06d0;
  puStack_300 = (undefined4 *)&UNK_0dfaf460;
  puStack_2f8 = &UNK_0dfaf8d0;
  puStack_2f0 = &UNK_0dfafa30;
  uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
  lStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  func_0x048b05a0(plStack_270,&plStack_338);
  plVar18 = plStack_2d8;
  if (plStack_2d8 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_2d8 + 1;
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      func_0x0412c2d0(plVar18);
    }
  }
  func_0x0dfa9c00(&plStack_278);
  FUN_048b0bc0(&uStack_260);
  return;
}



/* ---- referenced strings ----
 * 0x12686cb  minecraft:multi_block_part
 * 0x12686d5  multi_block_part
 */
