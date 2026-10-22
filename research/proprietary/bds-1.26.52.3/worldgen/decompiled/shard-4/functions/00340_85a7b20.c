/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x86a7b20 (ELF vaddr 0x85a7b20)
 * Label: caller-of-callee
 * Body:  [[086a7b20, 086a995c] [086a9960, 086a9ad1] [086a9ae0, 086aa13d]]
 * Ghidra: FUN_086a7b20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_086a7b20(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  bool bVar28;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined *puStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  long lStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  long *aplStack_240 [2];
  byte bStack_230;
  undefined1 auStack_22f [7];
  ulong uStack_228;
  undefined1 *puStack_220;
  long lStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  char cStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  char cStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  char cStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  if ((DAT_0f5db3d0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5db3d0), iVar11 != 0)) {
    func_0x0873af40();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5db350,0xf53dab8);
    func_0x0410844d(&DAT_0f5db3d0);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5db350 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_086a7b90;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5db350 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_086a7b90:
    puVar13 = &DAT_0f5db350;
    if (iRam000000000f5db3b0 != -0x2b3da790) goto LAB_086a7be8;
LAB_086a7bbb:
    lVar17 = *(long *)(puVar13 + 0x68);
    if (lVar17 == 0) goto LAB_086a7be8;
    bVar28 = (*(byte *)(lVar17 + 8) & 1) != 0;
    puVar13 = (undefined *)(lVar17 + 9);
    if (bVar28) {
      puVar13 = *(undefined **)(lVar17 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar28) {
      uVar23 = *(ulong *)(lVar17 + 0x10);
    }
  }
  else {
    puVar13 = (undefined *)plVar16[2];
    if (*(int *)(puVar13 + 0x60) == -0x2b3da790) goto LAB_086a7bbb;
LAB_086a7be8:
    puVar13 = &UNK_0147f015;
    uVar23 = 0xb;
  }
  func_0x0873b380(&puStack_348,param_1,puVar13,uVar23);
  uVar9 = uStack_318;
  uStack_318._0_5_ = (uint5)(uint)uStack_318;
  puVar7 = uStack_318;
  puStack_310 = (undefined *)((ulong)puStack_310 & 0xffffffffffffff00);
  uStack_318._0_1_ = (char)uVar9;
  bVar28 = (char)uStack_318 == '\0';
  uStack_318 = puVar7;
  if (bVar28) {
    func_0x0873eac0(&lStack_258,&UNK_011b9daa,7);
    uVar23 = (ulong)(bStack_230 >> 1);
    puVar7 = auStack_22f;
    if ((bStack_230 & 1) != 0) {
      uVar23 = uStack_228;
      puVar7 = puStack_220;
    }
    if (uVar23 == 0) {
      uStack_320._4_4_ = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_320._4_4_ = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_320._4_4_ = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_320._4_4_ =
               ((int)(char)puVar7[uVar24 + 3] ^
               ((int)(char)puVar7[uVar24 + 2] ^
               ((int)(char)puVar7[uVar24 + 1] ^
               ((int)(char)puVar7[uVar24] ^ uStack_320._4_4_) * 0x1000193) * 0x1000193) * 0x1000193)
               * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar14 != 0) {
        uVar23 = 0;
        do {
          uStack_320._4_4_ = ((int)(char)puVar7[uVar23 + uVar24] ^ uStack_320._4_4_) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar14 != uVar23);
      }
    }
    uStack_320._0_4_ = 2;
    uVar26 = (int)uStack_320;
    uStack_320._0_4_ = 2;
    if ((DAT_0f5db3f0 == '\0') &&
       (uStack_320._0_4_ = uVar26, iVar11 = FUN_04108328(&DAT_0f5db3f0), iVar11 != 0)) {
      func_0x0873b050();
      func_0x0410844d(&DAT_0f5db3f0);
    }
    puStack_3d0 = (undefined *)CONCAT44(puStack_3d0._4_4_,uStack_320._4_4_);
    uStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0873f0d0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0873ae80;
    puStack_390 = &UNK_0873f190;
    puStack_388 = &UNK_0873f1a0;
    uStack_380 = (long *)((ulong)uStack_380._4_4_ << 0x20);
    uStack_378 = 0;
    uStack_370 = (long *)0x0;
    func_0x048b05a0(&lStack_340,&puStack_3d0);
    plVar16 = uStack_370;
    if (uStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_370 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_370 + 0x10))(uStack_370);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_2b8 = (undefined4)uStack_330;
    uStack_2b4 = uStack_330._4_4_;
    func_0x0873ee60(&puStack_3d0,&uStack_2c8,&lStack_258);
    if (uStack_3b8._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar11 = *piVar15;
      while (iVar11 != (int)uStack_3b8) {
        piVar15 = piVar15 + 0x16;
        iVar11 = *piVar15;
      }
      lVar17 = *(long *)(piVar15 + 0xc);
      while (lVar17 != uStack_3c8) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar17 = *(long *)(piVar15 + 0xc);
      }
LAB_086a7e7f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar11 = *piVar15;
        while (iVar11 != (int)uStack_3b8) {
          piVar15 = piVar15 + 0x1a;
          iVar11 = *piVar15;
        }
        goto LAB_086a7e7f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar2 = *puVar2 | 0x90000;
      }
    }
    if ((char)puStack_310 == '\0') {
      func_0x0873f1f0(&puStack_3d0,&puStack_348);
    }
    puVar13 = puStack_348;
    iVar11 = uStack_318._4_4_;
    if ((DAT_0f5db3d0 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5db3d0), iVar12 != 0)) {
      func_0x0873af40();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5db350,0xf53dab8);
      func_0x0410844d(&DAT_0f5db3d0);
    }
    lVar17 = (long)&uStack_320 + 4;
    plVar16 = (long *)(*(long *)(puVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar13 + 0x20) - *(long *)(puVar13 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5db350 + 4)) * 8);
    do {
      lVar21 = *plVar16;
      if (lVar21 == -1) goto LAB_086a7f21;
      plVar16 = (long *)(*(long *)(puVar13 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(puVar13 + 0x30) + 8 + lVar21 * 0x18) !=
             *(uint *)(_DAT_0f5db350 + 4));
    if (plVar16 == *(long **)(puVar13 + 0x38)) {
LAB_086a7f21:
      puVar13 = &DAT_0f5db350;
    }
    else {
      puVar13 = (undefined *)plVar16[2];
    }
    piVar3 = *(int **)(*(long *)(puVar13 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar13 + 0x68) + 0x20);
        (piVar15 != piVar3 && (*piVar15 != iVar11)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar3) &&
       (cVar10 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01419e85),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_3d0 = (undefined *)((ulong)puStack_3d0 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&puStack_3d0);
    func_0x048b0bc0(&lStack_258);
    func_0x0873eac0(&lStack_258,&UNK_0147f021,0x11);
    uVar23 = (ulong)(bStack_230 >> 1);
    puVar7 = auStack_22f;
    if ((bStack_230 & 1) != 0) {
      uVar23 = uStack_228;
      puVar7 = puStack_220;
    }
    if (uVar23 == 0) {
      uStack_320._4_4_ = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_320._4_4_ = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_320._4_4_ = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_320._4_4_ =
               ((int)(char)puVar7[uVar24 + 3] ^
               ((int)(char)puVar7[uVar24 + 2] ^
               ((int)(char)puVar7[uVar24 + 1] ^
               ((int)(char)puVar7[uVar24] ^ uStack_320._4_4_) * 0x1000193) * 0x1000193) * 0x1000193)
               * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar14 != 0) {
        uVar23 = 0;
        do {
          uStack_320._4_4_ = ((int)(char)puVar7[uVar23 + uVar24] ^ uStack_320._4_4_) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar14 != uVar23);
      }
    }
    uStack_320._0_4_ = 2;
    if ((DAT_0f5db3f0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5db3f0), iVar11 != 0)) {
      func_0x0873b050();
      func_0x0410844d(&DAT_0f5db3f0);
    }
    puStack_3d0 = (undefined *)CONCAT44(puStack_3d0._4_4_,uStack_320._4_4_);
    uStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0873f0d0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0873ae80;
    puStack_390 = &UNK_0873f3b0;
    puStack_388 = &UNK_0873f3c0;
    uStack_380 = (long *)((ulong)uStack_380 & 0xffffffff00000000);
    uStack_378 = 0;
    uStack_370 = (long *)0x0;
    func_0x048b05a0(&lStack_340,&puStack_3d0);
    plVar16 = uStack_370;
    if (uStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_370 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_370 + 0x10))(uStack_370);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_2b8 = (undefined4)uStack_330;
    uStack_2b4 = uStack_330._4_4_;
    func_0x0873ee60(&puStack_3d0,&uStack_2c8,&lStack_258);
    if (uStack_3b8._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar11 = *piVar15;
      while (iVar11 != (int)uStack_3b8) {
        piVar15 = piVar15 + 0x16;
        iVar11 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != uStack_3c8) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_086a825f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar11 = *piVar15;
        while (iVar11 != (int)uStack_3b8) {
          piVar15 = piVar15 + 0x1a;
          iVar11 = *piVar15;
        }
        goto LAB_086a825f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar2 = *puVar2 | 0x90000;
      }
    }
    if ((char)puStack_310 == '\0') {
      func_0x0873f1f0(&puStack_3d0,&puStack_348);
    }
    puVar13 = puStack_348;
    iVar11 = uStack_318._4_4_;
    if ((DAT_0f5db3d0 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5db3d0), iVar12 != 0)) {
      func_0x0873af40();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5db350,0xf53dab8);
      func_0x0410844d(&DAT_0f5db3d0);
    }
    plVar16 = (long *)(*(long *)(puVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar13 + 0x20) - *(long *)(puVar13 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5db350 + 4)) * 8);
    do {
      lVar21 = *plVar16;
      if (lVar21 == -1) goto LAB_086a82f1;
      plVar16 = (long *)(*(long *)(puVar13 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(puVar13 + 0x30) + 8 + lVar21 * 0x18) !=
             *(uint *)(_DAT_0f5db350 + 4));
    if (plVar16 == *(long **)(puVar13 + 0x38)) {
LAB_086a82f1:
      puVar13 = &DAT_0f5db350;
    }
    else {
      puVar13 = (undefined *)plVar16[2];
    }
    piVar3 = *(int **)(*(long *)(puVar13 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar13 + 0x68) + 0x20);
        (piVar15 != piVar3 && (*piVar15 != iVar11)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar3) &&
       (cVar10 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01419e85),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_3d0 = (undefined *)((ulong)puStack_3d0 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&puStack_3d0);
    func_0x048b0bc0(&lStack_258);
    func_0x0873eac0(&lStack_258,&UNK_01398856,0x12);
    uVar23 = (ulong)(bStack_230 >> 1);
    puVar7 = auStack_22f;
    if ((bStack_230 & 1) != 0) {
      uVar23 = uStack_228;
      puVar7 = puStack_220;
    }
    if (uVar23 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uVar22 = ((int)(char)puVar7[uVar24 + 3] ^
                   ((int)(char)puVar7[uVar24 + 2] ^
                   ((int)(char)puVar7[uVar24 + 1] ^ ((int)(char)puVar7[uVar24] ^ uVar22) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar14 != 0) {
        uVar23 = 0;
        do {
          uVar22 = ((int)(char)puVar7[uVar23 + uVar24] ^ uVar22) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar14 != uVar23);
      }
    }
    uStack_320 = (undefined *)CONCAT44(uVar22,2);
    if ((DAT_0f5db3f0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5db3f0), iVar11 != 0)) {
      func_0x0873b050();
      func_0x0410844d(&DAT_0f5db3f0);
    }
    puStack_3d0 = (undefined *)CONCAT44(puStack_3d0._4_4_,uStack_320._4_4_);
    uStack_3c8 = 0;
    uStack_3c0 = 3;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_0873f0d0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0873ae80;
    puStack_390 = &UNK_0873f410;
    puStack_388 = &UNK_0873f420;
    uStack_380 = (long *)((ulong)uStack_380 & 0xffffffff00000000);
    uStack_378 = 0;
    uStack_370 = (long *)0x0;
    func_0x048b05a0(&lStack_340,&puStack_3d0);
    plVar16 = uStack_370;
    if (uStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_370 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*uStack_370 + 0x10))(uStack_370);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_2b8 = (undefined4)uStack_330;
    uStack_2b4 = uStack_330._4_4_;
    uStack_2b0 = uStack_328;
    uStack_2c8 = (undefined *)lStack_340;
    lStack_2c0 = uStack_338;
    func_0x0873ee60(&puStack_3d0,&uStack_2c8,&lStack_258);
    if (uStack_3b8._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x60);
      iVar11 = *piVar15;
      while (iVar11 != (int)uStack_3b8) {
        piVar15 = piVar15 + 0x16;
        iVar11 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != uStack_3c8) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_086a861f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3b8._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x78) + 0x48);
        iVar11 = *piVar15;
        while (iVar11 != (int)uStack_3b8) {
          piVar15 = piVar15 + 0x1a;
          iVar11 = *piVar15;
        }
        goto LAB_086a861f;
      }
      if (uStack_3b8._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_3bc,uStack_3c0) + 0x18);
        *puVar2 = *puVar2 | 0x90000;
      }
    }
    if ((char)puStack_310 == '\0') {
      func_0x0873f1f0(&puStack_3d0,&puStack_348);
    }
    puVar13 = puStack_348;
    iVar11 = uStack_318._4_4_;
    if ((DAT_0f5db3d0 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5db3d0), iVar12 != 0)) {
      func_0x0873af40();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5db350,0xf53dab8);
      func_0x0410844d(&DAT_0f5db3d0);
    }
    plVar16 = (long *)(*(long *)(puVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar13 + 0x20) - *(long *)(puVar13 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5db350 + 4)) * 8);
    do {
      lVar21 = *plVar16;
      if (lVar21 == -1) goto LAB_086a86b0;
      plVar16 = (long *)(*(long *)(puVar13 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(puVar13 + 0x30) + 8 + lVar21 * 0x18) !=
             *(uint *)(_DAT_0f5db350 + 4));
    if (plVar16 == *(long **)(puVar13 + 0x38)) {
LAB_086a86b0:
      puVar13 = &DAT_0f5db350;
    }
    else {
      puVar13 = (undefined *)plVar16[2];
    }
    piVar3 = *(int **)(*(long *)(puVar13 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar13 + 0x68) + 0x20);
        (piVar15 != piVar3 && (*piVar15 != iVar11)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar3) &&
       (cVar10 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01419e85),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_3d0 = (undefined *)((ulong)puStack_3d0 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&puStack_3d0);
    func_0x048b0bc0(&lStack_258);
  }
  func_0x07bf3530(param_1);
  func_0x078210b0(param_1);
  if ((DAT_0f5db488 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5db488), iVar11 != 0)) {
    func_0x0873f530();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5db408,0xf53dab8);
    func_0x0410844d(&DAT_0f5db488);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5db408 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_086a87c0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5db408 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_086a87c0:
    puVar13 = &DAT_0f5db408;
    if (iRam000000000f5db468 != -0x2b3da790) goto LAB_086a882d;
LAB_086a87eb:
    lVar17 = *(long *)(puVar13 + 0x68);
    if (lVar17 == 0) goto LAB_086a882d;
    bVar28 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar21 = lVar17 + 9;
    if (bVar28) {
      lVar21 = *(long *)(lVar17 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar28) {
      uVar23 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0873fb10(&lStack_178,param_1,lVar21,uVar23);
  }
  else {
    puVar13 = (undefined *)plVar16[2];
    if (*(int *)(puVar13 + 0x60) == -0x2b3da790) goto LAB_086a87eb;
LAB_086a882d:
    func_0x0873fb10(&lStack_178,param_1,&UNK_014cfbed,0xf);
  }
  if (cStack_148 == '\0') {
    func_0x08740680(&lStack_258,&lStack_178,&UNK_013fa2e3,4);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0ef44b00;
    if (aplStack_240[0] != (long *)0x0) {
      lVar17 = *aplStack_240[0];
      aplStack_240[0] = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = aplStack_240[0];
    }
    aplStack_240[0] = plVar16;
    puStack_3d0 = (undefined *)CONCAT44(puStack_3d0._4_4_,uStack_248);
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 1;
    uStack_3b0 = 0;
    puStack_3a8 = &UNK_048b3f30;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &SUB_048b2190;
    puStack_390 = &UNK_08740c30;
    puStack_388 = &UNK_08740df0;
    uStack_380 = (long *)((ulong)uStack_380 & 0xffffffff00000000);
    uStack_378 = 0;
    uStack_370 = (long *)0x0;
    func_0x048b05a0(uStack_250,&puStack_3d0);
    plVar16 = uStack_370;
    if (uStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_370 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_370 + 0x10))(uStack_370);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x08740930(&lStack_258);
    uStack_80 = CONCAT44(uStack_164,uStack_168);
    uStack_88 = uStack_170;
    uStack_78 = uStack_160;
    uStack_74 = uStack_15c;
    uStack_70 = uStack_158;
    uStack_6c = uStack_154;
    func_0x048b0bc0(aplStack_240);
    uStack_328 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0;
    plStack_2e8 = (long *)0x0;
    puStack_300 = (undefined *)0x0;
    plStack_2f8 = (long *)0x0;
    puStack_310 = (undefined *)0x0;
    puStack_308 = (undefined *)0x0;
    uStack_320 = (undefined *)0x0;
    uStack_318 = (undefined1 *)0x0;
    uStack_2d0 = 0;
    lStack_340 = -1;
    uStack_338 = 0;
    uStack_330 = 0xff;
    puStack_348 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_328);
    uStack_320 = (undefined *)FUN_041681f0(&uStack_328,0xf547a30);
    uStack_318 = (undefined1 *)FUN_041681f0(&uStack_328,0xf547770);
    puStack_310 = (undefined *)0x0;
    puStack_308 = (undefined *)0x0;
    puStack_300 = (undefined *)0x0;
    plStack_2f8 = (long *)0x0;
    uStack_2f0 = 0;
    plStack_2e8 = (long *)0x0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    lStack_340 = 0x1000;
    uStack_3c8 = 0x1000;
    uStack_3c0 = (undefined4)uStack_338;
    uStack_3bc = uStack_338._4_4_;
    uStack_3b8 = CONCAT71(uStack_3b8._1_7_,(undefined1)uStack_330);
    puStack_3d0 = &UNK_0f4e3c70;
    FUN_04167a20(&uStack_3b0,&uStack_328);
    puStack_3a8 = uStack_320;
    puStack_3a0 = uStack_318;
    puStack_398 = puStack_310;
    puStack_390 = puStack_308;
    puStack_388 = puStack_300;
    uStack_380 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plStack_2f8[1] = plStack_2f8[1] + 1;
      UNLOCK();
    }
    uStack_378 = uStack_2f0;
    if (((ulong)plStack_2e8 & 1) == 0) {
      uStack_360 = uStack_2d8;
      uStack_370 = plStack_2e8;
      uStack_368 = uStack_2e0;
    }
    else {
      func_0x0412e5e0(&uStack_370,uStack_2d8,uStack_2e0);
    }
    uStack_358 = uStack_2d0;
    if (iStack_150 == 4) {
      if ((DAT_0f5db488 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5db488), iVar11 != 0)) {
        func_0x0873f530();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5db408,0xf53dab8);
        func_0x0410844d(&DAT_0f5db488);
      }
      plVar16 = (long *)(*(long *)(lStack_178 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lStack_178 + 0x20) -
                                             *(long *)(lStack_178 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f5db408 + 4)) * 8);
      do {
        lVar17 = *plVar16;
        if (lVar17 == -1) goto LAB_086a8c78;
        plVar16 = (long *)(*(long *)(lStack_178 + 0x30) + lVar17 * 0x18);
      } while (*(uint *)(*(long *)(lStack_178 + 0x30) + 8 + lVar17 * 0x18) !=
               *(uint *)(_DAT_0f5db408 + 4));
      if (plVar16 == *(long **)(lStack_178 + 0x38)) {
LAB_086a8c78:
        puVar13 = &DAT_0f5db408;
      }
      else {
        puVar13 = (undefined *)plVar16[2];
      }
      lVar17 = func_0x048b1040(lStack_178 + 0x18,puVar13,uStack_14c,1);
      if (lVar17 == 0) {
        lStack_258 = 0;
        uStack_250 = 0;
        func_0x048b10d0(&lStack_258);
        lVar21 = *(long *)(lStack_258 + 0x38);
        lVar17 = lStack_258;
        if (lVar21 == 0) goto LAB_086a992e;
LAB_086a9953:
        do {
          lVar17 = lVar21;
          lVar21 = *(long *)(lVar17 + 0x38);
          if (*(long *)(lVar17 + 0x38) == 0) {
            lStack_258 = 0;
            uStack_250 = 0;
            func_0x048b10d0(&lStack_258);
            lVar21 = lStack_258;
          }
        } while (lVar21 != 0);
      }
      else {
        lVar21 = *(long *)(lVar17 + 0x38);
        if (*(long *)(lVar17 + 0x38) != 0) goto LAB_086a9953;
LAB_086a992e:
        lStack_258 = 0;
        uStack_250 = 0;
        func_0x048b10d0(&lStack_258);
        lVar21 = lStack_258;
        if (lStack_258 != 0) goto LAB_086a9953;
      }
      lStack_350 = *(long *)(lVar17 + 0x48);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      *(undefined1 *)(puVar18 + 3) = (undefined1)uStack_3b8;
      *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_3c8;
      *(undefined4 *)((long)puVar18 + 0xc) = uStack_3c8._4_4_;
      *(undefined4 *)(puVar18 + 2) = uStack_3c0;
      *(undefined4 *)((long)puVar18 + 0x14) = uStack_3bc;
      *puVar18 = &UNK_0f4e3c70;
      FUN_04167a20(puVar18 + 4,&uStack_3b0);
      puVar18[5] = puStack_3a8;
      puVar18[6] = puStack_3a0;
      puVar18[7] = puStack_398;
      puVar18[8] = puStack_390;
      puVar18[9] = puStack_388;
      puVar18[10] = uStack_380;
      puVar18[0xb] = uStack_378;
      puVar18[0xe] = uStack_360;
      *(undefined4 *)(puVar18 + 0xc) = (undefined4)uStack_370;
      *(undefined4 *)((long)puVar18 + 100) = uStack_370._4_4_;
      *(undefined4 *)(puVar18 + 0xd) = (undefined4)uStack_368;
      *(undefined4 *)((long)puVar18 + 0x6c) = uStack_368._4_4_;
      puVar18[0xf] = uStack_358;
      plVar16 = *(long **)(lStack_350 + 8);
      *(undefined8 **)(lStack_350 + 8) = puVar18;
joined_r0x086a9a6e:
      uStack_360 = 0;
      uStack_368 = 0;
      uStack_370 = (long *)0x0;
      uStack_380 = (long *)0x0;
      puStack_388 = (undefined *)0x0;
      if (plVar16 != (long *)0x0) {
        uStack_360 = 0;
        uStack_368 = 0;
        uStack_370 = (long *)0x0;
        uStack_380 = (long *)0x0;
        puStack_388 = (undefined *)0x0;
        (**(code **)(*plVar16 + 0x28))();
      }
    }
    else if (iStack_150 == 1) {
      if ((DAT_0f5db488 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5db488), iVar11 != 0)) {
        func_0x0873f530();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5db408,0xf53dab8);
        func_0x0410844d(&DAT_0f5db488);
      }
      plVar16 = (long *)(*(long *)(lStack_178 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lStack_178 + 0x20) -
                                             *(long *)(lStack_178 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f5db408 + 4)) * 8);
      do {
        lVar17 = *plVar16;
        if (lVar17 == -1) goto LAB_086a8bf8;
        plVar16 = (long *)(*(long *)(lStack_178 + 0x30) + lVar17 * 0x18);
      } while (*(uint *)(*(long *)(lStack_178 + 0x30) + 8 + lVar17 * 0x18) !=
               *(uint *)(_DAT_0f5db408 + 4));
      if (plVar16 == *(long **)(lStack_178 + 0x38)) {
LAB_086a8bf8:
        puVar13 = &DAT_0f5db408;
      }
      else {
        puVar13 = (undefined *)plVar16[2];
      }
      lVar17 = FUN_048b0c90(lStack_178 + 0x18,puVar13,uStack_14c,1);
      if (lVar17 == 0) {
        lStack_258 = 0;
        uStack_250 = 0;
        func_0x048b0d20(&lStack_258);
        lVar17 = lStack_258;
      }
      lVar17 = *(long *)(lVar17 + 0x58);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      *(undefined1 *)(puVar18 + 3) = (undefined1)uStack_3b8;
      *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_3c8;
      *(undefined4 *)((long)puVar18 + 0xc) = uStack_3c8._4_4_;
      *(undefined4 *)(puVar18 + 2) = uStack_3c0;
      *(undefined4 *)((long)puVar18 + 0x14) = uStack_3bc;
      *puVar18 = &UNK_0f4e3c70;
      FUN_04167a20(puVar18 + 4,&uStack_3b0);
      puVar18[5] = puStack_3a8;
      puVar18[6] = puStack_3a0;
      puVar18[7] = puStack_398;
      puVar18[8] = puStack_390;
      puVar18[9] = puStack_388;
      puVar18[10] = uStack_380;
      puVar18[0xb] = uStack_378;
      puVar18[0xe] = uStack_360;
      *(undefined4 *)(puVar18 + 0xc) = (undefined4)uStack_370;
      *(undefined4 *)((long)puVar18 + 100) = uStack_370._4_4_;
      *(undefined4 *)(puVar18 + 0xd) = (undefined4)uStack_368;
      *(undefined4 *)((long)puVar18 + 0x6c) = uStack_368._4_4_;
      puVar18[0xf] = uStack_358;
      plVar16 = *(long **)(lVar17 + 8);
      *(undefined8 **)(lVar17 + 8) = puVar18;
      goto joined_r0x086a9a6e;
    }
    uStack_128 = uStack_78;
    uStack_124 = uStack_74;
    uStack_120 = uStack_70;
    uStack_11c = uStack_6c;
    uStack_138 = (undefined4)uStack_88;
    uStack_134 = uStack_88._4_4_;
    uStack_130 = (undefined4)uStack_80;
    uStack_12c = uStack_80._4_4_;
    uStack_140 = lStack_178;
    iStack_118 = iStack_150;
    cStack_110 = cStack_148;
    uStack_114 = uStack_14c;
    func_0x08740680(&lStack_258,&uStack_140,&UNK_011a0bc2,8);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f0124a8;
    if (aplStack_240[0] != (long *)0x0) {
      lVar17 = *aplStack_240[0];
      aplStack_240[0] = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = aplStack_240[0];
    }
    aplStack_240[0] = plVar16;
    uStack_2c8 = (undefined *)CONCAT44(uStack_2c8._4_4_,uStack_248);
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    uStack_2a0 = &UNK_05da29c0;
    uStack_298 = &SUB_048b06d0;
    puStack_290 = &SUB_05da26d0;
    puStack_288 = &UNK_08740fc0;
    puStack_280 = &UNK_08741130;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(uStack_250,&uStack_2c8);
    plVar16 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x08740930(&lStack_258);
    cStack_98 = cStack_110;
    uStack_a8 = uStack_120;
    uStack_a4 = uStack_11c;
    iStack_a0 = iStack_118;
    uStack_9c = uStack_114;
    uStack_b8 = uStack_130;
    uStack_b4 = uStack_12c;
    uStack_b0 = uStack_128;
    uStack_ac = uStack_124;
    uStack_c8 = (undefined4)uStack_140;
    uStack_c4 = uStack_140._4_4_;
    uStack_c0 = uStack_138;
    uStack_bc = uStack_134;
    func_0x048b0bc0(aplStack_240);
    uStack_108 = uStack_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    iStack_e0 = iStack_a0;
    uStack_dc = uStack_9c;
    uStack_d8 = CONCAT71(uStack_97,cStack_98);
    func_0x08740680(&lStack_258,&uStack_108,&UNK_0128b4e6,5);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f011c18;
    if (aplStack_240[0] != (long *)0x0) {
      lVar17 = *aplStack_240[0];
      aplStack_240[0] = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = aplStack_240[0];
    }
    aplStack_240[0] = plVar16;
    uStack_2c8 = (undefined *)CONCAT44(uStack_2c8._4_4_,uStack_248);
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    uStack_2a0 = &UNK_05dbc210;
    uStack_298 = &SUB_048b06d0;
    puStack_290 = &SUB_05dbbf30;
    puStack_288 = &UNK_08741310;
    puStack_280 = &UNK_08741470;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(uStack_250,&uStack_2c8);
    plVar16 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x08740930(&lStack_258);
    uStack_38 = (undefined1)uStack_d8;
    uStack_48 = uStack_e8;
    uStack_44 = uStack_e4;
    iStack_40 = iStack_e0;
    uStack_3c = uStack_dc;
    uStack_58 = uStack_f8;
    uStack_54 = uStack_f4;
    uStack_50 = uStack_f0;
    uStack_4c = uStack_ec;
    uStack_68 = uStack_108;
    uStack_64 = uStack_104;
    uStack_60 = uStack_100;
    uStack_5c = uStack_fc;
    func_0x048b0bc0(aplStack_240);
    func_0x08740680(&lStack_258,&uStack_68,&UNK_01222e20,8);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f01ae00;
    if (aplStack_240[0] != (long *)0x0) {
      lVar17 = *aplStack_240[0];
      aplStack_240[0] = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = aplStack_240[0];
    }
    aplStack_240[0] = plVar16;
    uStack_2c8 = (undefined *)CONCAT44(uStack_2c8._4_4_,uStack_248);
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    uStack_2a0 = &UNK_06046510;
    uStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0602fbb0;
    puStack_288 = &UNK_08741650;
    puStack_280 = &UNK_087417b0;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(uStack_250,&uStack_2c8);
    plVar16 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x08740930(&lStack_258);
    func_0x048b0bc0(aplStack_240);
    puStack_3d0 = &UNK_0f4e3c70;
    if (((ulong)uStack_370 & 1) != 0) {
      func_0x0412a280(uStack_360,(ulong)uStack_370 & 0xfffffffffffffffe);
    }
    plVar16 = uStack_380;
    if (uStack_380 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_380 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_380 + 0x10))(uStack_380);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x04167a40(&uStack_3b0);
    puStack_348 = &UNK_0f4e3c70;
    if (((ulong)plStack_2e8 & 1) != 0) {
      func_0x0412a280(uStack_2d8,(ulong)plStack_2e8 & 0xfffffffffffffffe);
    }
    plVar16 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2f8 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x04167a40(&uStack_328);
  }
  if ((DAT_0f5db290 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5db290), iVar11 != 0)) {
    func_0x08739180();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5db210,0xf53dab8);
    func_0x0410844d(&DAT_0f5db290);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5db210 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_086a9460;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5db210 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_086a9460:
    puVar13 = &DAT_0f5db210;
    if (iRam000000000f5db270 != -0x2b3da790) goto LAB_086a94cd;
LAB_086a948b:
    lVar17 = *(long *)(puVar13 + 0x68);
    if (lVar17 == 0) goto LAB_086a94cd;
    bVar28 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar21 = lVar17 + 9;
    if (bVar28) {
      lVar21 = *(long *)(lVar17 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar28) {
      uVar23 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x08741990(&puStack_348,param_1,lVar21,uVar23);
  }
  else {
    puVar13 = (undefined *)plVar16[2];
    if (*(int *)(puVar13 + 0x60) == -0x2b3da790) goto LAB_086a948b;
LAB_086a94cd:
    func_0x08741990(&puStack_348,param_1,&UNK_013cb657,0x11);
  }
  if ((char)uStack_318 != '\0') {
    return;
  }
  func_0x087424f0(&lStack_258,&puStack_348,&UNK_014cce9f,4,1);
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar16 = (long)&UNK_0f128c98;
  if (aplStack_240[0] != (long *)0x0) {
    lVar17 = *aplStack_240[0];
    aplStack_240[0] = plVar16;
    (**(code **)(lVar17 + 8))();
    plVar16 = aplStack_240[0];
  }
  aplStack_240[0] = plVar16;
  puStack_3d0 = (undefined *)CONCAT44(puStack_3d0._4_4_,uStack_248);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0873f0d0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0873ae80;
  puStack_390 = &UNK_08742ab0;
  puStack_388 = &UNK_08742c10;
  uStack_380 = (long *)((ulong)uStack_380 & 0xffffffff00000000);
  uStack_378 = 0;
  uStack_370 = (long *)0x0;
  func_0x048b05a0(uStack_250,&puStack_3d0);
  plVar16 = uStack_370;
  if (uStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_370 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_370 + 0x10))(uStack_370);
      func_0x0412c2d0(plVar16);
    }
  }
  func_0x087427b0(&lStack_258);
  puVar13 = puStack_348;
  lStack_178 = lStack_340;
  uStack_170 = uStack_338;
  uStack_168 = (undefined4)uStack_330;
  uStack_164 = uStack_330._4_4_;
  uStack_160 = (undefined4)uStack_328;
  uStack_15c = uStack_328._4_4_;
  iVar11 = (int)uStack_320;
  uVar26 = uStack_320._4_4_;
  uVar8 = (char)uStack_318;
  func_0x048b0bc0(aplStack_240);
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *puVar18 = 0;
  puVar18[1] = 1;
  puVar18[2] = 2;
  puVar19 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar19 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  puVar27 = puVar19 + 6;
  *(undefined8 *)(puVar19 + 4) = puVar18[2];
  uVar4 = *(undefined4 *)((long)puVar18 + 4);
  uVar5 = *(undefined4 *)(puVar18 + 1);
  uVar6 = *(undefined4 *)((long)puVar18 + 0xc);
  *puVar19 = *(undefined4 *)puVar18;
  puVar19[1] = uVar4;
  puVar19[2] = uVar5;
  puVar19[3] = uVar6;
  if (iVar11 == 4) {
    if ((DAT_0f5db290 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5db290), iVar12 != 0)) {
      func_0x08739180();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5db210,0xf53dab8);
      func_0x0410844d(&DAT_0f5db290);
    }
    plVar16 = (long *)(*(long *)(puVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar13 + 0x20) - *(long *)(puVar13 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5db210 + 4)) * 8);
    do {
      lVar17 = *plVar16;
      if (lVar17 == -1) goto LAB_086a97e8;
      plVar16 = (long *)(*(long *)(puVar13 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(puVar13 + 0x30) + 8 + lVar17 * 0x18) !=
             *(uint *)(_DAT_0f5db210 + 4));
    if (plVar16 == *(long **)(puVar13 + 0x38)) {
LAB_086a97e8:
      puVar25 = &DAT_0f5db210;
    }
    else {
      puVar25 = (undefined *)plVar16[2];
    }
    lStack_350 = CONCAT44(lStack_350._4_4_,uVar26);
    lVar17 = func_0x048b1040(puVar13 + 0x18,puVar25,uVar26,1);
    if (lVar17 == 0) {
      lStack_258 = 0;
      uStack_250 = 0;
      func_0x048b10d0(&lStack_258);
      lVar21 = *(long *)(lStack_258 + 0x38);
      lVar17 = lStack_258;
      if (lVar21 == 0) goto LAB_086a9aa3;
LAB_086a9ac8:
      do {
        lVar17 = lVar21;
        lVar21 = *(long *)(lVar17 + 0x38);
        if (*(long *)(lVar17 + 0x38) == 0) {
          lStack_258 = 0;
          uStack_250 = 0;
          func_0x048b10d0(&lStack_258);
          lVar21 = lStack_258;
        }
      } while (lVar21 != 0);
    }
    else {
      lVar21 = *(long *)(lVar17 + 0x38);
      if (*(long *)(lVar17 + 0x38) != 0) goto LAB_086a9ac8;
LAB_086a9aa3:
      lStack_258 = 0;
      uStack_250 = 0;
      func_0x048b10d0(&lStack_258);
      lVar21 = lStack_258;
      if (lStack_258 != 0) goto LAB_086a9ac8;
    }
    lVar17 = *(long *)(lVar17 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  else {
    if (iVar11 != 1) goto LAB_086a9b92;
    if ((DAT_0f5db290 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5db290), iVar12 != 0)) {
      func_0x08739180();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5db210,0xf53dab8);
      func_0x0410844d(&DAT_0f5db290);
    }
    plVar16 = (long *)(*(long *)(puVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar13 + 0x20) - *(long *)(puVar13 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5db210 + 4)) * 8);
    do {
      lVar17 = *plVar16;
      if (lVar17 == -1) goto LAB_086a9768;
      plVar16 = (long *)(*(long *)(puVar13 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(puVar13 + 0x30) + 8 + lVar17 * 0x18) !=
             *(uint *)(_DAT_0f5db210 + 4));
    if (plVar16 == *(long **)(puVar13 + 0x38)) {
LAB_086a9768:
      puVar25 = &DAT_0f5db210;
    }
    else {
      puVar25 = (undefined *)plVar16[2];
    }
    lStack_350 = CONCAT44(lStack_350._4_4_,uVar26);
    lVar17 = FUN_048b0c90(puVar13 + 0x18,puVar25,uVar26,1);
    if (lVar17 == 0) {
      lStack_258 = 0;
      uStack_250 = 0;
      func_0x048b0d20(&lStack_258);
      lVar17 = lStack_258;
    }
    lVar17 = *(long *)(lVar17 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  puVar20[1] = 0xffffffffffffffff;
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 0xff;
  *puVar20 = &UNK_0f4e3aa0;
  puVar20[4] = puVar19;
  puVar20[5] = puVar27;
  puVar20[6] = puVar27;
  plVar16 = *(long **)(lVar17 + 8);
  *(undefined8 **)(lVar17 + 8) = puVar20;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x28))();
  }
  puVar27 = (undefined4 *)0x0;
  puVar19 = (undefined4 *)0x0;
  uVar26 = (undefined4)lStack_350;
LAB_086a9b92:
  uStack_2b0 = CONCAT44(uStack_164,uStack_168);
  uStack_2a8 = CONCAT44(uStack_15c,uStack_160);
  lStack_2c0 = lStack_178;
  uStack_2b8 = (undefined4)uStack_170;
  uStack_2b4 = uStack_170._4_4_;
  uStack_2c8 = puVar13;
  uStack_2a0 = (undefined *)CONCAT44(uVar26,iVar11);
  uStack_298._0_5_ = CONCAT41(uStack_68,uVar8);
  uStack_298 = (undefined1 *)
               CONCAT44(CONCAT31((undefined3)uStack_64,uStack_68._3_1_),(undefined4)uStack_298);
  func_0x087424f0(&lStack_258,&uStack_2c8,&UNK_014cfbed,0xf,0);
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar16 = (long)&UNK_0f128dd0;
  if (aplStack_240[0] != (long *)0x0) {
    lVar17 = *aplStack_240[0];
    aplStack_240[0] = plVar16;
    (**(code **)(lVar17 + 8))();
    plVar16 = aplStack_240[0];
  }
  aplStack_240[0] = plVar16;
  puStack_3d0 = (undefined *)CONCAT44(puStack_3d0._4_4_,uStack_248);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_087442b0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_08743ee0;
  puStack_390 = &UNK_08744370;
  puStack_388 = &UNK_08744670;
  uStack_380 = (long *)((ulong)uStack_380 & 0xffffffff00000000);
  uStack_378 = 0;
  uStack_370 = (long *)0x0;
  func_0x048b05a0(uStack_250,&puStack_3d0);
  plVar16 = uStack_370;
  if (uStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_370 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_370 + 0x10))(uStack_370);
      func_0x0412c2d0(plVar16);
    }
  }
  func_0x087427b0(&lStack_258);
  func_0x048b0bc0(aplStack_240);
  if (puVar19 != (undefined4 *)0x0) {
    func_0x0412a280(puVar19,(long)puVar27 - (long)puVar19);
  }
  func_0x0412a280(puVar18,0x18);
  return;
}


